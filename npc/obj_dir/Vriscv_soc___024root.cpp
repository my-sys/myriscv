// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vriscv_soc.h for the primary calling header

#include "Vriscv_soc___024root.h"
#include "Vriscv_soc__Syms.h"

#include "verilated_dpi.h"

//==========

VL_INLINE_OPT void Vriscv_soc___024root___combo__TOP__10(Vriscv_soc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vriscv_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv_soc___024root___combo__TOP__10\n"); );
    // Body
    if (((IData)(vlSelf->clock) ^ (IData)(vlSelf->riscv_soc__DOT____Vtogcov__clock))) {
        ++(vlSymsp->__Vcoverage[0]);
        vlSelf->riscv_soc__DOT____Vtogcov__clock = vlSelf->clock;
    }
    if (((IData)(vlSelf->reset) ^ (IData)(vlSelf->riscv_soc__DOT____Vtogcov__reset))) {
        ++(vlSymsp->__Vcoverage[1]);
        vlSelf->riscv_soc__DOT____Vtogcov__reset = vlSelf->reset;
    }
}

void Vriscv_soc___024unit____Vdpiimwrap_ramCtrl_TOP____024unit(QData/*63:0*/ raddr, QData/*63:0*/ &rdata, CData/*0:0*/ rflag, QData/*63:0*/ waddr, QData/*63:0*/ wdata, QData/*63:0*/ wmask, CData/*0:0*/ wen);

VL_INLINE_OPT void Vriscv_soc___024root___sequent__TOP__12(Vriscv_soc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vriscv_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv_soc___024root___sequent__TOP__12\n"); );
    // Variables
    CData/*1:0*/ __Vdly__riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state;
    CData/*1:0*/ __Vdly__riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state;
    CData/*1:0*/ __Vdly__riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state;
    VlWide<4>/*127:0*/ __Vtemp2117;
    VlWide<4>/*127:0*/ __Vtemp2118;
    VlWide<4>/*127:0*/ __Vtemp2119;
    VlWide<4>/*127:0*/ __Vtemp2120;
    QData/*63:0*/ __Vtask_ramCtrl__0__rdata;
    // Body
    vlSelf->__Vdly__riscv_soc__DOT__core__DOT__fetch__DOT__need_update 
        = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__need_update;
    vlSelf->__Vdlyvset__riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_tag__DOT__sram__DOT__ram__v0 = 0U;
    vlSelf->__Vdlyvset__riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_tag__DOT__sram__DOT__ram__v0 = 0U;
    vlSelf->__Vdlyvset__riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_tag__DOT__sram__DOT__ram__v0 = 0U;
    vlSelf->__Vdlyvset__riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_tag__DOT__sram__DOT__ram__v0 = 0U;
    vlSelf->__Vdly__riscv_soc__DOT__axi_ram__DOT__reg_r_state 
        = vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_r_state;
    ++(vlSymsp->__Vcoverage[9899]);
    if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___sram1_data_io_WEN_T_1) {
        ++(vlSymsp->__Vcoverage[9897]);
    }
    if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___sram1_data_io_WEN_T_1)))) {
        ++(vlSymsp->__Vcoverage[9898]);
    }
    ++(vlSymsp->__Vcoverage[9907]);
    if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___sram2_data_io_WEN_T_1) {
        ++(vlSymsp->__Vcoverage[9905]);
    }
    if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___sram2_data_io_WEN_T_1)))) {
        ++(vlSymsp->__Vcoverage[9906]);
    }
    ++(vlSymsp->__Vcoverage[12101]);
    if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___sram1_data_io_WEN_T_1) {
        ++(vlSymsp->__Vcoverage[12099]);
    }
    if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___sram1_data_io_WEN_T_1)))) {
        ++(vlSymsp->__Vcoverage[12100]);
    }
    ++(vlSymsp->__Vcoverage[12109]);
    if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___sram2_data_io_WEN_T_1) {
        ++(vlSymsp->__Vcoverage[12107]);
    }
    if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___sram2_data_io_WEN_T_1)))) {
        ++(vlSymsp->__Vcoverage[12108]);
    }
    ++(vlSymsp->__Vcoverage[17356]);
    Vriscv_soc___024unit____Vdpiimwrap_ramCtrl_TOP____024unit(vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_raddr, __Vtask_ramCtrl__0__rdata, (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_AXI_Bus_ar_valid), vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_w_addr, vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_AXI_Bus_w_bits_wdata, vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_wmask, (IData)(vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_wen));
    vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata 
        = __Vtask_ramCtrl__0__rdata;
    ++(vlSymsp->__Vcoverage[17355]);
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        ++(vlSymsp->__Vcoverage[17354]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[17338]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[17332]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[17344]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[17348]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[17349]);
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        ++(vlSymsp->__Vcoverage[17350]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[17351]);
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        ++(vlSymsp->__Vcoverage[17352]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[17353]);
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_r_state)))) {
            ++(vlSymsp->__Vcoverage[17337]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_r_state) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_r_state)))) {
                ++(vlSymsp->__Vcoverage[17342]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_r_state) {
            if (vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_r_state) {
                ++(vlSymsp->__Vcoverage[17341]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_r_state) {
            if (vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_r_state) {
                ++(vlSymsp->__Vcoverage[17335]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_r_state) {
            if (vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_r_state) {
                ++(vlSymsp->__Vcoverage[17329]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (vlSelf->riscv_soc__DOT__axi_ram__DOT___T_5) {
            ++(vlSymsp->__Vcoverage[17347]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_r_state)))) {
            ++(vlSymsp->__Vcoverage[17343]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_r_state) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_r_state)))) {
                ++(vlSymsp->__Vcoverage[17336]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_r_state) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_r_state)))) {
                ++(vlSymsp->__Vcoverage[17330]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_r_state)))) {
            ++(vlSymsp->__Vcoverage[17331]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__axi_ram__DOT___T_5)))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__axi_ram__DOT___T_6)))) {
                ++(vlSymsp->__Vcoverage[17346]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__axi_ram__DOT___T_5)))) {
            if (vlSelf->riscv_soc__DOT__axi_ram__DOT___T_6) {
                ++(vlSymsp->__Vcoverage[17345]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_r_state)))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__axi_ram__DOT___T_1)))) {
                ++(vlSymsp->__Vcoverage[17326]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_r_state)))) {
            if (vlSelf->riscv_soc__DOT__axi_ram__DOT___T_1) {
                ++(vlSymsp->__Vcoverage[17325]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_r_state) {
            if (vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_r_state) {
                if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_r_valid)))) {
                    ++(vlSymsp->__Vcoverage[17340]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_r_state) {
            if (vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_r_state) {
                if (vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_r_valid) {
                    ++(vlSymsp->__Vcoverage[17339]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_r_state) {
            if (vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_r_state) {
                if (vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_r_valid) {
                    ++(vlSymsp->__Vcoverage[17333]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_r_state) {
            if (vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_r_state) {
                if (vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_r_valid) {
                    ++(vlSymsp->__Vcoverage[17327]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_r_state) {
            if (vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_r_state) {
                if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_r_valid)))) {
                    ++(vlSymsp->__Vcoverage[17334]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_r_state) {
            if (vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_r_state) {
                if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_r_valid)))) {
                    ++(vlSymsp->__Vcoverage[17328]);
                }
            }
        }
    }
    __Vdly__riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state 
        = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state;
    vlSelf->__Vdly__riscv_soc__DOT__core__DOT__i_cache__DOT__reg_offset 
        = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_offset;
    vlSelf->__Vdlyvset__riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_data__DOT__sram__DOT__ram__v0 = 0U;
    vlSelf->__Vdlyvset__riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_data__DOT__sram__DOT__ram__v0 = 0U;
    ++(vlSymsp->__Vcoverage[9895]);
    if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_data_io_WEN)))) {
        ++(vlSymsp->__Vcoverage[9893]);
    }
    if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_data_io_WEN) {
        ++(vlSymsp->__Vcoverage[9894]);
    }
    ++(vlSymsp->__Vcoverage[9903]);
    if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_data_io_WEN)))) {
        ++(vlSymsp->__Vcoverage[9901]);
    }
    if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_data_io_WEN) {
        ++(vlSymsp->__Vcoverage[9902]);
    }
    ++(vlSymsp->__Vcoverage[12369]);
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[12349]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[12336]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[12344]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[12328]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[12356]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[12368]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[12359]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[12364]);
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT___T)))) {
            ++(vlSymsp->__Vcoverage[12355]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT___T)))) {
            ++(vlSymsp->__Vcoverage[12348]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT___T) {
            ++(vlSymsp->__Vcoverage[12347]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT___T)))) {
            ++(vlSymsp->__Vcoverage[12327]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT___T) {
            ++(vlSymsp->__Vcoverage[12326]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT___T) {
            ++(vlSymsp->__Vcoverage[12335]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT___T) {
            ++(vlSymsp->__Vcoverage[12343]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT___T) {
            ++(vlSymsp->__Vcoverage[12354]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT___T) {
            ++(vlSymsp->__Vcoverage[12357]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT___T)))) {
            ++(vlSymsp->__Vcoverage[12358]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT___T) {
            ++(vlSymsp->__Vcoverage[12363]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT___T)))) {
            ++(vlSymsp->__Vcoverage[12362]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT___T) {
            ++(vlSymsp->__Vcoverage[12367]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT___T) {
            if (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT___reg_pc_1_T) {
                ++(vlSymsp->__Vcoverage[12339]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT___T) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT___reg_pc_1_T)))) {
                if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__stall)))) {
                    ++(vlSymsp->__Vcoverage[12337]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT___T) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT___reg_pc_1_T)))) {
                if (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__stall) {
                    ++(vlSymsp->__Vcoverage[12338]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT___T) {
            if (vlSelf->riscv_soc__DOT__core__DOT__fetch_io_in_flush) {
                ++(vlSymsp->__Vcoverage[12325]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT___T)))) {
            if (vlSelf->riscv_soc__DOT__core__DOT__fetch_io_in_flush) {
                ++(vlSymsp->__Vcoverage[12342]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT___T)))) {
            if (vlSelf->riscv_soc__DOT__core__DOT__fetch_io_in_flush) {
                ++(vlSymsp->__Vcoverage[12334]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT___T)))) {
            if (vlSelf->riscv_soc__DOT__core__DOT__fetch_io_in_flush) {
                ++(vlSymsp->__Vcoverage[12360]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT___T)))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch_io_in_flush)))) {
                ++(vlSymsp->__Vcoverage[12361]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT___T)))) {
            if (vlSelf->riscv_soc__DOT__core__DOT__fetch_io_in_flush) {
                ++(vlSymsp->__Vcoverage[12365]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT___T)))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch_io_in_flush)))) {
                ++(vlSymsp->__Vcoverage[12366]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT___T)))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch_io_in_flush)))) {
                if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__stall)))) {
                    ++(vlSymsp->__Vcoverage[12340]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT___T)))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch_io_in_flush)))) {
                if (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__stall) {
                    ++(vlSymsp->__Vcoverage[12341]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT___T)))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch_io_in_flush)))) {
                if (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__stall) {
                    ++(vlSymsp->__Vcoverage[12333]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT___T)))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch_io_in_flush)))) {
                if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__stall)))) {
                    ++(vlSymsp->__Vcoverage[12332]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT___T) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch_io_in_flush)))) {
                if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_flush)))) {
                    ++(vlSymsp->__Vcoverage[12324]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT___T) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch_io_in_flush)))) {
                if (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_flush) {
                    ++(vlSymsp->__Vcoverage[12323]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT___T) {
            if (((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch_io_in_flush) 
                 | (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_flush))) {
                ++(vlSymsp->__Vcoverage[12331]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT___T) {
            if ((1U & (~ (((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__stall) 
                           & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch_io_in_flush))) 
                          & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_flush)))))) {
                ++(vlSymsp->__Vcoverage[12346]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT___T) {
            if ((((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__stall) 
                  & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch_io_in_flush))) 
                 & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_flush)))) {
                ++(vlSymsp->__Vcoverage[12345]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT___T) {
            if ((1U & (~ (((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__stall) 
                           & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch_io_in_flush))) 
                          & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_flush)))))) {
                ++(vlSymsp->__Vcoverage[12353]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT___T) {
            if ((1U & (~ ((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch_io_in_flush) 
                          | (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_flush))))) {
                if (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__stall) {
                    ++(vlSymsp->__Vcoverage[12330]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT___T) {
            if ((1U & (~ ((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch_io_in_flush) 
                          | (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_flush))))) {
                if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__stall)))) {
                    ++(vlSymsp->__Vcoverage[12329]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT___T) {
            if ((((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__stall) 
                  & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch_io_in_flush))) 
                 & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_flush)))) {
                ++(vlSymsp->__Vcoverage[12352]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT___T) {
            if ((((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__stall) 
                  & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch_io_in_flush))) 
                 & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_flush)))) {
                if ((1U & (~ (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0 
                                      >> 2U))))) {
                    ++(vlSymsp->__Vcoverage[12351]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT___T) {
            if ((((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__stall) 
                  & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch_io_in_flush))) 
                 & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_flush)))) {
                if ((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0 
                                   >> 2U)))) {
                    ++(vlSymsp->__Vcoverage[12350]);
                }
            }
        }
    }
    vlSelf->__Vdlyvset__riscv_soc__DOT__core__DOT__decode__DOT__regfile__v0 = 0U;
    vlSelf->__Vdly__riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_state 
        = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_state;
    ++(vlSymsp->__Vcoverage[15193]);
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[15179]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[15192]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[15169]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[15161]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[15183]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[15186]);
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_state))) {
            if ((1U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_state))) {
                if ((2U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_state))) {
                    ++(vlSymsp->__Vcoverage[15187]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_state))) {
            if ((1U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_state))) {
                if ((2U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_state))) {
                    ++(vlSymsp->__Vcoverage[15165]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_state))) {
            ++(vlSymsp->__Vcoverage[15184]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_state))) {
            if ((1U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_state))) {
                if ((2U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_state))) {
                    ++(vlSymsp->__Vcoverage[15164]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_state))) {
            if ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_state))) {
                ++(vlSymsp->__Vcoverage[15190]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_state))) {
            ++(vlSymsp->__Vcoverage[15168]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_state))) {
            ++(vlSymsp->__Vcoverage[15160]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_state))) {
            ++(vlSymsp->__Vcoverage[15178]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_state))) {
            if ((1U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_state))) {
                if ((2U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_state))) {
                    ++(vlSymsp->__Vcoverage[15188]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_state))) {
            if ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_state))) {
                ++(vlSymsp->__Vcoverage[15166]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_state))) {
            if ((1U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_state))) {
                if ((2U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_state))) {
                    ++(vlSymsp->__Vcoverage[15157]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_state))) {
            if ((1U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_state))) {
                if ((2U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_state))) {
                    ++(vlSymsp->__Vcoverage[15176]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_state))) {
            if ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_state))) {
                ++(vlSymsp->__Vcoverage[15180]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_state))) {
            ++(vlSymsp->__Vcoverage[15167]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_state))) {
            ++(vlSymsp->__Vcoverage[15185]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_state))) {
            if ((1U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_state))) {
                if ((2U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_state))) {
                    ++(vlSymsp->__Vcoverage[15156]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_state))) {
            ++(vlSymsp->__Vcoverage[15182]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_state))) {
            if ((1U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_state))) {
                ++(vlSymsp->__Vcoverage[15158]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_state))) {
            if ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_state))) {
                ++(vlSymsp->__Vcoverage[15159]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_state))) {
            if ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_state))) {
                ++(vlSymsp->__Vcoverage[15177]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_state))) {
            if ((1U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_state))) {
                if ((2U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_state))) {
                    ++(vlSymsp->__Vcoverage[15175]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_state))) {
            if ((1U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_state))) {
                ++(vlSymsp->__Vcoverage[15181]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_state))) {
            ++(vlSymsp->__Vcoverage[15191]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_state))) {
            if ((1U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_state))) {
                ++(vlSymsp->__Vcoverage[15189]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_state))) {
            if ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_state))) {
                if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back_io_out_flush)))) {
                    ++(vlSymsp->__Vcoverage[15163]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_state))) {
            if ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_state))) {
                if (vlSelf->riscv_soc__DOT__core__DOT__write_back_io_out_flush) {
                    ++(vlSymsp->__Vcoverage[15162]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_state))) {
            if ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_state))) {
                if (vlSelf->riscv_soc__DOT__core__DOT__write_back_io_out_flush) {
                    ++(vlSymsp->__Vcoverage[15173]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_state))) {
            if ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_state))) {
                if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back_io_out_flush)))) {
                    ++(vlSymsp->__Vcoverage[15174]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_state))) {
            if (vlSelf->riscv_soc__DOT__core__DOT__write_back_io_out_flush) {
                ++(vlSymsp->__Vcoverage[15154]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_state))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back_io_out_flush)))) {
                ++(vlSymsp->__Vcoverage[15155]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_state))) {
            if (vlSelf->riscv_soc__DOT__core__DOT__write_back_io_out_flush) {
                ++(vlSymsp->__Vcoverage[15172]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_state))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back_io_out_flush)))) {
                if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul_io_valid)))) {
                    ++(vlSymsp->__Vcoverage[15171]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_state))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back_io_out_flush)))) {
                if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul_io_valid) {
                    ++(vlSymsp->__Vcoverage[15170]);
                }
            }
        }
    }
    __Vdly__riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state 
        = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state;
    vlSelf->__Vdly__riscv_soc__DOT__core__DOT__write_back__DOT__reg_ls_state 
        = vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_ls_state;
    vlSelf->__Vdly__riscv_soc__DOT__core__DOT__write_back__DOT__reg_bus_is_w 
        = vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_bus_is_w;
    vlSelf->__Vdly__riscv_soc__DOT__core__DOT__clint_de__DOT__reg_state 
        = vlSelf->riscv_soc__DOT__core__DOT__clint_de__DOT__reg_state;
    vlSelf->__Vdly__riscv_soc__DOT__core__DOT__clint_de__DOT__reg_mtimecmp 
        = vlSelf->riscv_soc__DOT__core__DOT__clint_de__DOT__reg_mtimecmp;
    __Vdly__riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state 
        = vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state;
    vlSelf->__Vdly__riscv_soc__DOT__core__DOT__d_cache__DOT__reg_offset 
        = vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_offset;
    vlSelf->__Vdlyvset__riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_data__DOT__sram__DOT__ram__v0 = 0U;
    vlSelf->__Vdlyvset__riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_data__DOT__sram__DOT__ram__v0 = 0U;
    ++(vlSymsp->__Vcoverage[12097]);
    if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_data_io_WEN)))) {
        ++(vlSymsp->__Vcoverage[12095]);
    }
    if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_data_io_WEN) {
        ++(vlSymsp->__Vcoverage[12096]);
    }
    ++(vlSymsp->__Vcoverage[12105]);
    if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_data_io_WEN)))) {
        ++(vlSymsp->__Vcoverage[12103]);
    }
    if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_data_io_WEN) {
        ++(vlSymsp->__Vcoverage[12104]);
    }
    vlSelf->__Vdly__riscv_soc__DOT__core__DOT__cross_bar__DOT__reg_w_cnt 
        = vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__reg_w_cnt;
    ++(vlSymsp->__Vcoverage[14424]);
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[14404]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[14396]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[14371]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[14379]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[14386]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[14409]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[14415]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[14423]);
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state))) {
            ++(vlSymsp->__Vcoverage[14402]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state))) {
            if ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state))) {
                ++(vlSymsp->__Vcoverage[14394]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state))) {
            ++(vlSymsp->__Vcoverage[14395]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state))) {
            if ((1U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state))) {
                if ((2U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state))) {
                    ++(vlSymsp->__Vcoverage[14382]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state))) {
            if ((1U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state))) {
                if ((2U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state))) {
                    ++(vlSymsp->__Vcoverage[14400]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state))) {
            if ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state))) {
                ++(vlSymsp->__Vcoverage[14384]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state))) {
            ++(vlSymsp->__Vcoverage[14385]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state))) {
            if ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state))) {
                ++(vlSymsp->__Vcoverage[14401]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state))) {
            ++(vlSymsp->__Vcoverage[14369]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state))) {
            ++(vlSymsp->__Vcoverage[14414]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state))) {
            ++(vlSymsp->__Vcoverage[14408]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state))) {
            if ((1U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state))) {
                if ((2U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state))) {
                    ++(vlSymsp->__Vcoverage[14383]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state))) {
            ++(vlSymsp->__Vcoverage[14407]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state))) {
            ++(vlSymsp->__Vcoverage[14422]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state))) {
            if ((1U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state))) {
                if ((2U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state))) {
                    ++(vlSymsp->__Vcoverage[14399]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state))) {
            ++(vlSymsp->__Vcoverage[14378]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state))) {
            if ((1U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state))) {
                if ((2U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state))) {
                    ++(vlSymsp->__Vcoverage[14418]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state))) {
            if ((1U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state))) {
                if ((2U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state))) {
                    ++(vlSymsp->__Vcoverage[14411]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state))) {
            ++(vlSymsp->__Vcoverage[14370]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state))) {
            ++(vlSymsp->__Vcoverage[14403]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state))) {
            if ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state))) {
                ++(vlSymsp->__Vcoverage[14413]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state))) {
            if ((1U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state))) {
                if ((2U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state))) {
                    ++(vlSymsp->__Vcoverage[14392]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state))) {
            ++(vlSymsp->__Vcoverage[14377]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state))) {
            if ((1U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state))) {
                if ((2U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state))) {
                    ++(vlSymsp->__Vcoverage[14393]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state))) {
            if ((1U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state))) {
                if ((2U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state))) {
                    ++(vlSymsp->__Vcoverage[14419]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state))) {
            if ((1U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state))) {
                if ((2U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state))) {
                    ++(vlSymsp->__Vcoverage[14410]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state))) {
            if ((1U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state))) {
                ++(vlSymsp->__Vcoverage[14412]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state))) {
            if ((1U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state))) {
                ++(vlSymsp->__Vcoverage[14420]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state))) {
            if ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state))) {
                ++(vlSymsp->__Vcoverage[14421]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state))) {
            if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div_io_valid) {
                ++(vlSymsp->__Vcoverage[14405]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div_io_valid)))) {
                ++(vlSymsp->__Vcoverage[14406]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state))) {
            if ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state))) {
                if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back_io_out_flush)))) {
                    ++(vlSymsp->__Vcoverage[14391]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state))) {
            if (vlSelf->riscv_soc__DOT__core__DOT__write_back_io_out_flush) {
                ++(vlSymsp->__Vcoverage[14389]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state))) {
            if ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state))) {
                if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back_io_out_flush)))) {
                    ++(vlSymsp->__Vcoverage[14398]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state))) {
            if ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state))) {
                if (vlSelf->riscv_soc__DOT__core__DOT__write_back_io_out_flush) {
                    ++(vlSymsp->__Vcoverage[14397]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state))) {
            if (vlSelf->riscv_soc__DOT__core__DOT__write_back_io_out_flush) {
                ++(vlSymsp->__Vcoverage[14416]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state))) {
            if ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state))) {
                if (vlSelf->riscv_soc__DOT__core__DOT__write_back_io_out_flush) {
                    ++(vlSymsp->__Vcoverage[14390]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back_io_out_flush)))) {
                ++(vlSymsp->__Vcoverage[14417]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back_io_out_flush)))) {
                if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div_io_valid)))) {
                    ++(vlSymsp->__Vcoverage[14388]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back_io_out_flush)))) {
                if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div_io_valid) {
                    ++(vlSymsp->__Vcoverage[14387]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state))) {
            if ((1U & (~ (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__divisor[2U] 
                          ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__dividend[2U])))) {
                ++(vlSymsp->__Vcoverage[14381]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state))) {
            if ((1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__divisor[2U] 
                       ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__dividend[2U]))) {
                ++(vlSymsp->__Vcoverage[14380]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state))) {
            if ((1U & (~ ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_out_exuType) 
                          >> 1U)))) {
                if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_out_exuType)))) {
                    ++(vlSymsp->__Vcoverage[14367]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state))) {
            if ((2U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_out_exuType))) {
                ++(vlSymsp->__Vcoverage[14368]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state))) {
            if ((2U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_out_exuType))) {
                if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_out_exuType)))) {
                    ++(vlSymsp->__Vcoverage[14365]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state))) {
            if ((1U & (~ ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_out_exuType) 
                          >> 1U)))) {
                if ((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_out_exuType))) {
                    ++(vlSymsp->__Vcoverage[14374]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state))) {
            if ((1U & (~ ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_out_exuType) 
                          >> 1U)))) {
                if ((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_out_exuType))) {
                    ++(vlSymsp->__Vcoverage[14366]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state))) {
            if ((2U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_out_exuType))) {
                if ((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_out_exuType))) {
                    ++(vlSymsp->__Vcoverage[14372]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state))) {
            if ((2U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_out_exuType))) {
                if ((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_out_exuType))) {
                    ++(vlSymsp->__Vcoverage[14364]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state))) {
            if ((2U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_out_exuType))) {
                if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_out_exuType)))) {
                    ++(vlSymsp->__Vcoverage[14373]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state))) {
            if ((2U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_out_exuType))) {
                ++(vlSymsp->__Vcoverage[14376]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state))) {
            if ((1U & (~ ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_out_exuType) 
                          >> 1U)))) {
                if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_out_exuType)))) {
                    ++(vlSymsp->__Vcoverage[14375]);
                }
            }
        }
    }
    vlSelf->__Vdly__riscv_soc__DOT__core__DOT__write_back__DOT__reg_stall 
        = vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_stall;
    ++(vlSymsp->__Vcoverage[15668]);
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[15650]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[15640]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[15635]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[15660]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[15655]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[15609]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[15621]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[15645]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[15602]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[15614]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[15665]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[15628]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[15666]);
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        ++(vlSymsp->__Vcoverage[15667]);
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch_io_in_flush)))) {
            ++(vlSymsp->__Vcoverage[15653]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch_io_in_flush)))) {
            ++(vlSymsp->__Vcoverage[15643]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (vlSelf->riscv_soc__DOT__core__DOT__fetch_io_in_flush) {
            ++(vlSymsp->__Vcoverage[15639]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch_io_in_flush)))) {
            ++(vlSymsp->__Vcoverage[15638]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (vlSelf->riscv_soc__DOT__core__DOT__fetch_io_in_flush) {
            ++(vlSymsp->__Vcoverage[15634]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch_io_in_flush)))) {
            ++(vlSymsp->__Vcoverage[15633]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (vlSelf->riscv_soc__DOT__core__DOT__fetch_io_in_flush) {
            ++(vlSymsp->__Vcoverage[15627]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch_io_in_flush)))) {
            ++(vlSymsp->__Vcoverage[15626]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (vlSelf->riscv_soc__DOT__core__DOT__fetch_io_in_flush) {
            ++(vlSymsp->__Vcoverage[15608]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (vlSelf->riscv_soc__DOT__core__DOT__fetch_io_in_flush) {
            ++(vlSymsp->__Vcoverage[15649]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (vlSelf->riscv_soc__DOT__core__DOT__fetch_io_in_flush) {
            ++(vlSymsp->__Vcoverage[15601]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch_io_in_flush)))) {
            ++(vlSymsp->__Vcoverage[15648]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch_io_in_flush)))) {
            ++(vlSymsp->__Vcoverage[15600]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (vlSelf->riscv_soc__DOT__core__DOT__fetch_io_in_flush) {
            ++(vlSymsp->__Vcoverage[15654]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch_io_in_flush)))) {
            ++(vlSymsp->__Vcoverage[15607]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (vlSelf->riscv_soc__DOT__core__DOT__fetch_io_in_flush) {
            ++(vlSymsp->__Vcoverage[15644]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (vlSelf->riscv_soc__DOT__core__DOT__fetch_io_in_flush) {
            ++(vlSymsp->__Vcoverage[15664]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch_io_in_flush)))) {
            ++(vlSymsp->__Vcoverage[15658]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (vlSelf->riscv_soc__DOT__core__DOT__fetch_io_in_flush) {
            ++(vlSymsp->__Vcoverage[15659]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch_io_in_flush)))) {
            ++(vlSymsp->__Vcoverage[15612]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (vlSelf->riscv_soc__DOT__core__DOT__fetch_io_in_flush) {
            ++(vlSymsp->__Vcoverage[15613]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch_io_in_flush)))) {
            ++(vlSymsp->__Vcoverage[15663]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch_io_in_flush)))) {
            ++(vlSymsp->__Vcoverage[15619]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (vlSelf->riscv_soc__DOT__core__DOT__fetch_io_in_flush) {
            ++(vlSymsp->__Vcoverage[15620]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch_io_in_flush)))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__stall)))) {
                ++(vlSymsp->__Vcoverage[15651]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch_io_in_flush)))) {
            if (vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__stall) {
                ++(vlSymsp->__Vcoverage[15647]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch_io_in_flush)))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__stall)))) {
                ++(vlSymsp->__Vcoverage[15636]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch_io_in_flush)))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__stall)))) {
                ++(vlSymsp->__Vcoverage[15631]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch_io_in_flush)))) {
            if (vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__stall) {
                ++(vlSymsp->__Vcoverage[15632]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch_io_in_flush)))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__stall)))) {
                ++(vlSymsp->__Vcoverage[15624]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch_io_in_flush)))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__stall)))) {
                ++(vlSymsp->__Vcoverage[15646]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch_io_in_flush)))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__stall)))) {
                ++(vlSymsp->__Vcoverage[15598]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch_io_in_flush)))) {
            if (vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__stall) {
                ++(vlSymsp->__Vcoverage[15625]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch_io_in_flush)))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__stall)))) {
                ++(vlSymsp->__Vcoverage[15610]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch_io_in_flush)))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__stall)))) {
                ++(vlSymsp->__Vcoverage[15661]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch_io_in_flush)))) {
            if (vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__stall) {
                ++(vlSymsp->__Vcoverage[15652]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch_io_in_flush)))) {
            if (vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__stall) {
                ++(vlSymsp->__Vcoverage[15606]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch_io_in_flush)))) {
            if (vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__stall) {
                ++(vlSymsp->__Vcoverage[15642]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch_io_in_flush)))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__stall)))) {
                ++(vlSymsp->__Vcoverage[15641]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch_io_in_flush)))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__stall)))) {
                ++(vlSymsp->__Vcoverage[15605]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch_io_in_flush)))) {
            if (vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__stall) {
                ++(vlSymsp->__Vcoverage[15599]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch_io_in_flush)))) {
            if (vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__stall) {
                ++(vlSymsp->__Vcoverage[15637]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch_io_in_flush)))) {
            if (vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__stall) {
                ++(vlSymsp->__Vcoverage[15657]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch_io_in_flush)))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__stall)))) {
                ++(vlSymsp->__Vcoverage[15656]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch_io_in_flush)))) {
            if (vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__stall) {
                ++(vlSymsp->__Vcoverage[15611]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch_io_in_flush)))) {
            if (vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__stall) {
                ++(vlSymsp->__Vcoverage[15662]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch_io_in_flush)))) {
            if (vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__stall) {
                ++(vlSymsp->__Vcoverage[15618]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch_io_in_flush)))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__stall)))) {
                ++(vlSymsp->__Vcoverage[15617]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch_io_in_flush)))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__stall)))) {
                if ((4U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__instType))) {
                    ++(vlSymsp->__Vcoverage[15616]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch_io_in_flush)))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__stall)))) {
                if ((4U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__instType))) {
                    ++(vlSymsp->__Vcoverage[15615]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch_io_in_flush)))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__stall)))) {
                if ((0x33U != (0xfe00707fU & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_inst))) {
                    ++(vlSymsp->__Vcoverage[15630]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch_io_in_flush)))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__stall)))) {
                if ((0x33U == (0xfe00707fU & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_inst))) {
                    ++(vlSymsp->__Vcoverage[15629]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch_io_in_flush)))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__stall)))) {
                if ((0x33U != (0xfe00707fU & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_inst))) {
                    ++(vlSymsp->__Vcoverage[15623]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch_io_in_flush)))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__stall)))) {
                if ((0x33U == (0xfe00707fU & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_inst))) {
                    ++(vlSymsp->__Vcoverage[15622]);
                }
            }
        }
    }
    if (vlSelf->riscv_soc__DOT__core__DOT__write_back_io_out_w_rs_en) {
        ++(vlSymsp->__Vcoverage[15594]);
    }
    if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back_io_out_w_rs_en)))) {
        ++(vlSymsp->__Vcoverage[15595]);
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch_io_in_flush)))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__stall)))) {
                if ((1U & (~ (((IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back_io_out_rs_addr) 
                               == (0x1fU & (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_inst 
                                            >> 0x14U))) 
                              & (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back_io_out_w_rs_en))))) {
                    ++(vlSymsp->__Vcoverage[15604]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch_io_in_flush)))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__stall)))) {
                if ((((IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back_io_out_rs_addr) 
                      == (0x1fU & (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_inst 
                                   >> 0xfU))) & (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back_io_out_w_rs_en))) {
                    ++(vlSymsp->__Vcoverage[15596]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch_io_in_flush)))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__stall)))) {
                if ((((IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back_io_out_rs_addr) 
                      == (0x1fU & (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_inst 
                                   >> 0x14U))) & (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back_io_out_w_rs_en))) {
                    ++(vlSymsp->__Vcoverage[15603]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch_io_in_flush)))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__stall)))) {
                if ((1U & (~ (((IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back_io_out_rs_addr) 
                               == (0x1fU & (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_inst 
                                            >> 0xfU))) 
                              & (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back_io_out_w_rs_en))))) {
                    ++(vlSymsp->__Vcoverage[15597]);
                }
            }
        }
    }
    ++(vlSymsp->__Vcoverage[13563]);
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[13558]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[13554]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[13562]);
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (vlSelf->riscv_soc__DOT__core__DOT__write_back_io_out_flush) {
            ++(vlSymsp->__Vcoverage[13557]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (vlSelf->riscv_soc__DOT__core__DOT__write_back_io_out_flush) {
            ++(vlSymsp->__Vcoverage[13553]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (vlSelf->riscv_soc__DOT__core__DOT__write_back_io_out_flush) {
            ++(vlSymsp->__Vcoverage[13561]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back_io_out_flush)))) {
            if (vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_stall) {
                ++(vlSymsp->__Vcoverage[13552]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back_io_out_flush)))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_stall)))) {
                ++(vlSymsp->__Vcoverage[13559]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back_io_out_flush)))) {
            if (vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_stall) {
                ++(vlSymsp->__Vcoverage[13560]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back_io_out_flush)))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_stall)))) {
                ++(vlSymsp->__Vcoverage[13551]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back_io_out_flush)))) {
            if (vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_stall) {
                ++(vlSymsp->__Vcoverage[13556]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back_io_out_flush)))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_stall)))) {
                ++(vlSymsp->__Vcoverage[13555]);
            }
        }
    }
    vlSelf->__Vdly__riscv_soc__DOT__core__DOT__cross_bar__DOT__reg_r_cnt 
        = vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__reg_r_cnt;
    ++(vlSymsp->__Vcoverage[9891]);
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[9752]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[9746]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[9740]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[9734]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[9728]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[9722]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[9716]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[9710]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[9704]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[9698]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[9692]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[9674]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[9656]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[9644]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[9638]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[9620]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[9602]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[9596]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[9566]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[9662]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[9464]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[9650]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[9848]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[9542]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[9842]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[9450]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[9632]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[9524]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[9434]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[9518]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[9472]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[9554]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[9442]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[9584]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[9392]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[9548]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[9782]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[9387]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[9512]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[9397]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[9572]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[9614]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[9427]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[9382]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[9590]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[9860]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[9686]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[9626]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[9776]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[9402]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[9419]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[9506]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[9578]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[9457]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[9407]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[9890]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[9800]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[9500]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[9412]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[9608]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[9866]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[9668]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[9480]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[9487]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[9680]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[9494]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[9530]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[9536]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[9560]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[9758]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[9764]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[9770]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[9788]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[9794]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[9806]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[9812]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[9818]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[9824]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[9830]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[9836]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[9854]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[9872]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[9878]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[9882]);
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))) {
            if ((1U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))) {
                if ((2U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))) {
                    ++(vlSymsp->__Vcoverage[9460]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))) {
            if ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))) {
                ++(vlSymsp->__Vcoverage[9462]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))) {
            ++(vlSymsp->__Vcoverage[9463]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))) {
            ++(vlSymsp->__Vcoverage[9455]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))) {
            if ((1U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))) {
                ++(vlSymsp->__Vcoverage[9454]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))) {
            ++(vlSymsp->__Vcoverage[9448]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))) {
            if ((1U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))) {
                if ((2U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))) {
                    ++(vlSymsp->__Vcoverage[9446]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))) {
            if ((1U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))) {
                if ((2U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))) {
                    ++(vlSymsp->__Vcoverage[9445]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))) {
            if ((1U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))) {
                if ((2U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))) {
                    ++(vlSymsp->__Vcoverage[9438]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))) {
            if ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))) {
                ++(vlSymsp->__Vcoverage[9439]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))) {
            ++(vlSymsp->__Vcoverage[9433]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))) {
            ++(vlSymsp->__Vcoverage[9425]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))) {
            if ((1U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))) {
                if ((2U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))) {
                    ++(vlSymsp->__Vcoverage[9423]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))) {
            if ((1U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))) {
                if ((2U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))) {
                    ++(vlSymsp->__Vcoverage[9422]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))) {
            if ((1U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))) {
                if ((2U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))) {
                    ++(vlSymsp->__Vcoverage[9415]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))) {
            if ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))) {
                ++(vlSymsp->__Vcoverage[9417]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))) {
            ++(vlSymsp->__Vcoverage[9391]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))) {
            ++(vlSymsp->__Vcoverage[9418]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))) {
            ++(vlSymsp->__Vcoverage[9390]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))) {
            ++(vlSymsp->__Vcoverage[9479]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))) {
            ++(vlSymsp->__Vcoverage[9456]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))) {
            if ((1U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))) {
                if ((2U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))) {
                    ++(vlSymsp->__Vcoverage[9475]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))) {
            if ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))) {
                ++(vlSymsp->__Vcoverage[9453]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))) {
            if ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))) {
                ++(vlSymsp->__Vcoverage[9432]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))) {
            if ((1U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))) {
                if ((2U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))) {
                    ++(vlSymsp->__Vcoverage[9416]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))) {
            if ((1U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))) {
                if ((2U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))) {
                    ++(vlSymsp->__Vcoverage[9431]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))) {
            ++(vlSymsp->__Vcoverage[9386]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))) {
            ++(vlSymsp->__Vcoverage[9478]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))) {
            if ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))) {
                ++(vlSymsp->__Vcoverage[9424]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))) {
            ++(vlSymsp->__Vcoverage[9381]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))) {
            if ((1U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))) {
                if ((2U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))) {
                    ++(vlSymsp->__Vcoverage[9461]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))) {
            if ((1U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))) {
                if ((2U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))) {
                    ++(vlSymsp->__Vcoverage[9437]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))) {
            ++(vlSymsp->__Vcoverage[9441]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))) {
            ++(vlSymsp->__Vcoverage[9396]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))) {
            ++(vlSymsp->__Vcoverage[9426]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))) {
            if ((1U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))) {
                if ((2U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))) {
                    ++(vlSymsp->__Vcoverage[9467]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))) {
            ++(vlSymsp->__Vcoverage[9401]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))) {
            if ((1U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))) {
                ++(vlSymsp->__Vcoverage[9880]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))) {
            if ((1U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))) {
                if ((2U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))) {
                    ++(vlSymsp->__Vcoverage[9430]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))) {
            if ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))) {
                ++(vlSymsp->__Vcoverage[9380]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))) {
            ++(vlSymsp->__Vcoverage[9471]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))) {
            ++(vlSymsp->__Vcoverage[9385]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))) {
            if ((1U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))) {
                if ((2U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))) {
                    ++(vlSymsp->__Vcoverage[9476]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))) {
            ++(vlSymsp->__Vcoverage[9486]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))) {
            ++(vlSymsp->__Vcoverage[9470]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))) {
            if ((1U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))) {
                if ((2U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))) {
                    ++(vlSymsp->__Vcoverage[9378]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))) {
            if ((1U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))) {
                if ((2U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))) {
                    ++(vlSymsp->__Vcoverage[9379]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))) {
            ++(vlSymsp->__Vcoverage[9440]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))) {
            ++(vlSymsp->__Vcoverage[9395]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))) {
            if ((1U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))) {
                if ((2U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))) {
                    ++(vlSymsp->__Vcoverage[9484]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))) {
            ++(vlSymsp->__Vcoverage[9493]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))) {
            if ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))) {
                ++(vlSymsp->__Vcoverage[9447]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))) {
            ++(vlSymsp->__Vcoverage[9400]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))) {
            if ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))) {
                ++(vlSymsp->__Vcoverage[9492]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))) {
            ++(vlSymsp->__Vcoverage[9449]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))) {
            if ((1U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))) {
                if ((2U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))) {
                    ++(vlSymsp->__Vcoverage[9490]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))) {
            ++(vlSymsp->__Vcoverage[9405]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))) {
            ++(vlSymsp->__Vcoverage[9406]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))) {
            if ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))) {
                ++(vlSymsp->__Vcoverage[9887]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))) {
            if ((1U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))) {
                if ((2U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))) {
                    ++(vlSymsp->__Vcoverage[9886]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))) {
            ++(vlSymsp->__Vcoverage[9410]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))) {
            ++(vlSymsp->__Vcoverage[9411]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))) {
            if ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))) {
                ++(vlSymsp->__Vcoverage[9469]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))) {
            if ((1U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))) {
                if ((2U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))) {
                    ++(vlSymsp->__Vcoverage[9468]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))) {
            if ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))) {
                ++(vlSymsp->__Vcoverage[9477]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))) {
            if ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))) {
                ++(vlSymsp->__Vcoverage[9485]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))) {
            if ((1U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))) {
                if ((2U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))) {
                    ++(vlSymsp->__Vcoverage[9483]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))) {
            ++(vlSymsp->__Vcoverage[9881]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))) {
            if ((1U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))) {
                if ((2U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))) {
                    ++(vlSymsp->__Vcoverage[9491]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))) {
            ++(vlSymsp->__Vcoverage[9888]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))) {
            if ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))) {
                ++(vlSymsp->__Vcoverage[9879]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))) {
            if ((1U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))) {
                if ((2U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))) {
                    ++(vlSymsp->__Vcoverage[9885]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))) {
            ++(vlSymsp->__Vcoverage[9889]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))) {
            if (vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1_io_ICache_valid) {
                ++(vlSymsp->__Vcoverage[9408]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1_io_ICache_valid)))) {
                ++(vlSymsp->__Vcoverage[9384]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1_io_ICache_valid)))) {
                ++(vlSymsp->__Vcoverage[9404]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1_io_ICache_valid)))) {
                ++(vlSymsp->__Vcoverage[9375]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1_io_ICache_valid)))) {
                ++(vlSymsp->__Vcoverage[9394]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))) {
            if (vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1_io_ICache_valid) {
                ++(vlSymsp->__Vcoverage[9383]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))) {
            if (vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1_io_ICache_valid) {
                ++(vlSymsp->__Vcoverage[9374]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1_io_ICache_valid)))) {
                ++(vlSymsp->__Vcoverage[9389]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))) {
            if (vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1_io_ICache_valid) {
                ++(vlSymsp->__Vcoverage[9388]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))) {
            if (vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1_io_ICache_valid) {
                ++(vlSymsp->__Vcoverage[9403]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))) {
            if (vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1_io_ICache_valid) {
                ++(vlSymsp->__Vcoverage[9393]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))) {
            if (vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1_io_ICache_valid) {
                ++(vlSymsp->__Vcoverage[9398]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1_io_ICache_valid)))) {
                ++(vlSymsp->__Vcoverage[9399]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1_io_ICache_valid)))) {
                ++(vlSymsp->__Vcoverage[9409]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))) {
            if ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))) {
                if ((1U & (~ ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1) 
                              | (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_2))))) {
                    ++(vlSymsp->__Vcoverage[9459]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))) {
            if ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))) {
                if ((1U & (~ ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1) 
                              | (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_2))))) {
                    ++(vlSymsp->__Vcoverage[9452]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))) {
            if ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))) {
                if (((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1) 
                     | (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_2))) {
                    ++(vlSymsp->__Vcoverage[9451]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))) {
            if ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))) {
                if (((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1) 
                     | (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_2))) {
                    ++(vlSymsp->__Vcoverage[9443]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))) {
            if ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))) {
                if ((1U & (~ ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1) 
                              | (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_2))))) {
                    ++(vlSymsp->__Vcoverage[9429]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))) {
            if ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))) {
                if (((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1) 
                     | (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_2))) {
                    ++(vlSymsp->__Vcoverage[9428]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))) {
            if ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))) {
                if ((1U & (~ ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1) 
                              | (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_2))))) {
                    ++(vlSymsp->__Vcoverage[9465]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))) {
            if ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))) {
                if (((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1) 
                     | (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_2))) {
                    ++(vlSymsp->__Vcoverage[9420]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))) {
            if ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))) {
                if (((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1) 
                     | (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_2))) {
                    ++(vlSymsp->__Vcoverage[9458]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))) {
            if ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))) {
                if ((1U & (~ ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1) 
                              | (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_2))))) {
                    ++(vlSymsp->__Vcoverage[9414]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))) {
            if ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))) {
                if (((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1) 
                     | (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_2))) {
                    ++(vlSymsp->__Vcoverage[9413]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))) {
            if ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))) {
                if (((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1) 
                     | (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_2))) {
                    ++(vlSymsp->__Vcoverage[9482]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))) {
            if ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))) {
                if ((1U & (~ ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1) 
                              | (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_2))))) {
                    ++(vlSymsp->__Vcoverage[9473]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))) {
            if ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))) {
                if (((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1) 
                     | (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_2))) {
                    ++(vlSymsp->__Vcoverage[9466]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))) {
            if ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))) {
                if (((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1) 
                     | (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_2))) {
                    ++(vlSymsp->__Vcoverage[9376]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))) {
            if ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))) {
                if ((1U & (~ ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1) 
                              | (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_2))))) {
                    ++(vlSymsp->__Vcoverage[9488]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))) {
            if ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))) {
                if ((1U & (~ ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1) 
                              | (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_2))))) {
                    ++(vlSymsp->__Vcoverage[9421]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))) {
            if ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))) {
                if ((1U & (~ ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1) 
                              | (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_2))))) {
                    ++(vlSymsp->__Vcoverage[9377]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))) {
            if ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))) {
                if ((1U & (~ ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1) 
                              | (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_2))))) {
                    ++(vlSymsp->__Vcoverage[9444]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))) {
            if ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))) {
                if (((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1) 
                     | (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_2))) {
                    ++(vlSymsp->__Vcoverage[9489]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))) {
            if ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))) {
                if (((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1) 
                     | (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_2))) {
                    ++(vlSymsp->__Vcoverage[9474]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))) {
            if ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))) {
                if ((1U & (~ ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1) 
                              | (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_2))))) {
                    ++(vlSymsp->__Vcoverage[9481]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))) {
            if ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))) {
                if (((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1) 
                     | (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_2))) {
                    ++(vlSymsp->__Vcoverage[9884]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))) {
            if ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))) {
                if ((1U & (~ ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1) 
                              | (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_2))))) {
                    ++(vlSymsp->__Vcoverage[9883]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))) {
            if ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))) {
                if ((1U & (~ ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_offset) 
                              >> 3U)))) {
                    ++(vlSymsp->__Vcoverage[9436]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))) {
            if ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))) {
                if ((8U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_offset))) {
                    ++(vlSymsp->__Vcoverage[9435]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ ((0x29U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
                      & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))))) {
            ++(vlSymsp->__Vcoverage[9745]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x29U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            ++(vlSymsp->__Vcoverage[9744]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ ((0x28U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
                      & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))))) {
            ++(vlSymsp->__Vcoverage[9739]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x28U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            ++(vlSymsp->__Vcoverage[9738]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ ((0x27U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
                      & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))))) {
            ++(vlSymsp->__Vcoverage[9733]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x27U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            ++(vlSymsp->__Vcoverage[9732]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ ((0x26U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
                      & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))))) {
            ++(vlSymsp->__Vcoverage[9727]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x26U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            ++(vlSymsp->__Vcoverage[9726]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ ((0x25U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
                      & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))))) {
            ++(vlSymsp->__Vcoverage[9721]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x25U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            ++(vlSymsp->__Vcoverage[9720]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ ((0x24U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
                      & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))))) {
            ++(vlSymsp->__Vcoverage[9715]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x24U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            ++(vlSymsp->__Vcoverage[9714]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ ((0x23U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
                      & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))))) {
            ++(vlSymsp->__Vcoverage[9709]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x23U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            ++(vlSymsp->__Vcoverage[9708]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ ((0x22U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
                      & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))))) {
            ++(vlSymsp->__Vcoverage[9703]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x22U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            ++(vlSymsp->__Vcoverage[9702]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ ((0x21U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
                      & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))))) {
            ++(vlSymsp->__Vcoverage[9697]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x21U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            ++(vlSymsp->__Vcoverage[9696]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ ((0x20U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
                      & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))))) {
            ++(vlSymsp->__Vcoverage[9691]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x20U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            ++(vlSymsp->__Vcoverage[9690]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ ((0x1fU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
                      & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))))) {
            ++(vlSymsp->__Vcoverage[9685]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x1fU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            ++(vlSymsp->__Vcoverage[9684]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ ((0x1eU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
                      & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))))) {
            ++(vlSymsp->__Vcoverage[9679]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x1dU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            ++(vlSymsp->__Vcoverage[9672]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x1cU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            ++(vlSymsp->__Vcoverage[9666]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ ((0x1aU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
                      & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))))) {
            ++(vlSymsp->__Vcoverage[9655]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x1aU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            ++(vlSymsp->__Vcoverage[9654]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x19U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            ++(vlSymsp->__Vcoverage[9648]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ ((0x16U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
                      & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))))) {
            ++(vlSymsp->__Vcoverage[9631]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x16U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            ++(vlSymsp->__Vcoverage[9630]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ ((0x15U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
                      & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))))) {
            ++(vlSymsp->__Vcoverage[9625]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x15U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            ++(vlSymsp->__Vcoverage[9624]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x13U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            ++(vlSymsp->__Vcoverage[9612]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x12U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            ++(vlSymsp->__Vcoverage[9606]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x11U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            ++(vlSymsp->__Vcoverage[9600]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0xfU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            ++(vlSymsp->__Vcoverage[9588]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0xeU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            ++(vlSymsp->__Vcoverage[9582]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ ((0xcU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
                      & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))))) {
            ++(vlSymsp->__Vcoverage[9571]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0xcU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            ++(vlSymsp->__Vcoverage[9570]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ ((0xbU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
                      & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))))) {
            ++(vlSymsp->__Vcoverage[9565]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ ((0xaU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
                      & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))))) {
            ++(vlSymsp->__Vcoverage[9559]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0xaU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            ++(vlSymsp->__Vcoverage[9558]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x2cU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            ++(vlSymsp->__Vcoverage[9762]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((9U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            ++(vlSymsp->__Vcoverage[9552]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ ((8U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
                      & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))))) {
            ++(vlSymsp->__Vcoverage[9547]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x3aU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            ++(vlSymsp->__Vcoverage[9846]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x18U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            ++(vlSymsp->__Vcoverage[9642]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ ((0x39U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
                      & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))))) {
            ++(vlSymsp->__Vcoverage[9841]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ ((0x17U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
                      & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))))) {
            ++(vlSymsp->__Vcoverage[9637]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((5U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            ++(vlSymsp->__Vcoverage[9528]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ ((0x14U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
                      & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))))) {
            ++(vlSymsp->__Vcoverage[9619]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x14U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            ++(vlSymsp->__Vcoverage[9618]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((3U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            ++(vlSymsp->__Vcoverage[9516]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x3cU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            ++(vlSymsp->__Vcoverage[9858]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ ((0x13U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
                      & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))))) {
            ++(vlSymsp->__Vcoverage[9613]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((2U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            ++(vlSymsp->__Vcoverage[9510]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ ((0x33U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
                      & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))))) {
            ++(vlSymsp->__Vcoverage[9805]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ ((0x19U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
                      & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))))) {
            ++(vlSymsp->__Vcoverage[9649]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x33U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            ++(vlSymsp->__Vcoverage[9804]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x36U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            ++(vlSymsp->__Vcoverage[9822]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ ((0x18U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
                      & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))))) {
            ++(vlSymsp->__Vcoverage[9643]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x32U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            ++(vlSymsp->__Vcoverage[9798]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ ((0x1cU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
                      & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))))) {
            ++(vlSymsp->__Vcoverage[9667]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ ((0x2eU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
                      & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))))) {
            ++(vlSymsp->__Vcoverage[9775]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ ((0x12U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
                      & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))))) {
            ++(vlSymsp->__Vcoverage[9607]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ ((0xeU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
                      & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))))) {
            ++(vlSymsp->__Vcoverage[9583]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ ((0xdU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
                      & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))))) {
            ++(vlSymsp->__Vcoverage[9577]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ ((0x3bU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
                      & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))))) {
            ++(vlSymsp->__Vcoverage[9853]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ ((0x37U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
                      & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))))) {
            ++(vlSymsp->__Vcoverage[9829]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0xbU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            ++(vlSymsp->__Vcoverage[9564]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x3fU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            ++(vlSymsp->__Vcoverage[9876]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ ((0x2fU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
                      & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))))) {
            ++(vlSymsp->__Vcoverage[9781]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ ((0x1bU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
                      & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))))) {
            ++(vlSymsp->__Vcoverage[9661]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0xdU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            ++(vlSymsp->__Vcoverage[9576]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ ((2U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
                      & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))))) {
            ++(vlSymsp->__Vcoverage[9511]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x2fU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            ++(vlSymsp->__Vcoverage[9780]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ ((0x11U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
                      & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))))) {
            ++(vlSymsp->__Vcoverage[9601]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x1bU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            ++(vlSymsp->__Vcoverage[9660]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ ((0x31U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
                      & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))))) {
            ++(vlSymsp->__Vcoverage[9793]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ ((5U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
                      & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))))) {
            ++(vlSymsp->__Vcoverage[9529]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x1eU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            ++(vlSymsp->__Vcoverage[9678]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ ((0xfU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
                      & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))))) {
            ++(vlSymsp->__Vcoverage[9589]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x38U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            ++(vlSymsp->__Vcoverage[9834]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x17U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            ++(vlSymsp->__Vcoverage[9636]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x10U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            ++(vlSymsp->__Vcoverage[9594]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ ((0x10U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
                      & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))))) {
            ++(vlSymsp->__Vcoverage[9595]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ ((0x32U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
                      & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))))) {
            ++(vlSymsp->__Vcoverage[9799]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            ++(vlSymsp->__Vcoverage[9498]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
                      & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))))) {
            ++(vlSymsp->__Vcoverage[9499]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ ((0x3cU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
                      & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))))) {
            ++(vlSymsp->__Vcoverage[9859]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x3dU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            ++(vlSymsp->__Vcoverage[9864]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ ((0x1dU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
                      & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))))) {
            ++(vlSymsp->__Vcoverage[9673]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            ++(vlSymsp->__Vcoverage[9504]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
                      & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))))) {
            ++(vlSymsp->__Vcoverage[9505]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ ((3U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
                      & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))))) {
            ++(vlSymsp->__Vcoverage[9517]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((4U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            ++(vlSymsp->__Vcoverage[9522]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ ((4U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
                      & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))))) {
            ++(vlSymsp->__Vcoverage[9523]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((6U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            ++(vlSymsp->__Vcoverage[9534]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ ((6U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
                      & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))))) {
            ++(vlSymsp->__Vcoverage[9535]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((7U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            ++(vlSymsp->__Vcoverage[9540]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ ((7U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
                      & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))))) {
            ++(vlSymsp->__Vcoverage[9541]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((8U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            ++(vlSymsp->__Vcoverage[9546]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ ((9U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
                      & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))))) {
            ++(vlSymsp->__Vcoverage[9553]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x2aU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            ++(vlSymsp->__Vcoverage[9750]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ ((0x2aU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
                      & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))))) {
            ++(vlSymsp->__Vcoverage[9751]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x2bU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            ++(vlSymsp->__Vcoverage[9756]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ ((0x2bU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
                      & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))))) {
            ++(vlSymsp->__Vcoverage[9757]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ ((0x2cU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
                      & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))))) {
            ++(vlSymsp->__Vcoverage[9763]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x2dU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            ++(vlSymsp->__Vcoverage[9768]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ ((0x2dU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
                      & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))))) {
            ++(vlSymsp->__Vcoverage[9769]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x2eU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            ++(vlSymsp->__Vcoverage[9774]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x30U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            ++(vlSymsp->__Vcoverage[9786]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ ((0x30U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
                      & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))))) {
            ++(vlSymsp->__Vcoverage[9787]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x31U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            ++(vlSymsp->__Vcoverage[9792]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x34U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            ++(vlSymsp->__Vcoverage[9810]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ ((0x34U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
                      & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))))) {
            ++(vlSymsp->__Vcoverage[9811]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x35U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            ++(vlSymsp->__Vcoverage[9816]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ ((0x35U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
                      & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))))) {
            ++(vlSymsp->__Vcoverage[9817]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ ((0x36U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
                      & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))))) {
            ++(vlSymsp->__Vcoverage[9823]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x37U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            ++(vlSymsp->__Vcoverage[9828]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ ((0x38U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
                      & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))))) {
            ++(vlSymsp->__Vcoverage[9835]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x39U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            ++(vlSymsp->__Vcoverage[9840]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ ((0x3aU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
                      & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))))) {
            ++(vlSymsp->__Vcoverage[9847]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x3bU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            ++(vlSymsp->__Vcoverage[9852]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ ((0x3dU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
                      & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))))) {
            ++(vlSymsp->__Vcoverage[9865]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x3eU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            ++(vlSymsp->__Vcoverage[9870]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ ((0x3eU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
                      & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))))) {
            ++(vlSymsp->__Vcoverage[9871]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ ((0x3fU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
                      & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))))) {
            ++(vlSymsp->__Vcoverage[9877]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x1fU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1) {
                ++(vlSymsp->__Vcoverage[9683]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x1dU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1) {
                ++(vlSymsp->__Vcoverage[9671]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x1aU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1) {
                ++(vlSymsp->__Vcoverage[9653]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x18U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1) {
                ++(vlSymsp->__Vcoverage[9641]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x16U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1) {
                ++(vlSymsp->__Vcoverage[9629]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x14U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1) {
                ++(vlSymsp->__Vcoverage[9617]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x13U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1) {
                ++(vlSymsp->__Vcoverage[9611]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x10U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1) {
                ++(vlSymsp->__Vcoverage[9593]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0xfU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1) {
                ++(vlSymsp->__Vcoverage[9587]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0xdU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1) {
                ++(vlSymsp->__Vcoverage[9575]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0xcU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1) {
                ++(vlSymsp->__Vcoverage[9569]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0xbU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1) {
                ++(vlSymsp->__Vcoverage[9563]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x29U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1) {
                ++(vlSymsp->__Vcoverage[9743]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x3bU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1) {
                ++(vlSymsp->__Vcoverage[9851]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x19U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1) {
                ++(vlSymsp->__Vcoverage[9647]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x26U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1) {
                ++(vlSymsp->__Vcoverage[9725]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((6U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1) {
                ++(vlSymsp->__Vcoverage[9533]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((3U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1) {
                ++(vlSymsp->__Vcoverage[9515]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x35U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1) {
                ++(vlSymsp->__Vcoverage[9815]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x1bU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1) {
                ++(vlSymsp->__Vcoverage[9659]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x3cU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1) {
                ++(vlSymsp->__Vcoverage[9857]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x12U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1) {
                ++(vlSymsp->__Vcoverage[9605]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x37U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1) {
                ++(vlSymsp->__Vcoverage[9827]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x15U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1) {
                ++(vlSymsp->__Vcoverage[9623]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x11U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1) {
                ++(vlSymsp->__Vcoverage[9599]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x3eU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1) {
                ++(vlSymsp->__Vcoverage[9869]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x30U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1) {
                ++(vlSymsp->__Vcoverage[9785]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x1eU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1) {
                ++(vlSymsp->__Vcoverage[9677]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x2dU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1) {
                ++(vlSymsp->__Vcoverage[9767]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0xaU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1) {
                ++(vlSymsp->__Vcoverage[9557]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0xeU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1) {
                ++(vlSymsp->__Vcoverage[9581]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x2eU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1) {
                ++(vlSymsp->__Vcoverage[9773]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((7U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1) {
                ++(vlSymsp->__Vcoverage[9539]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x17U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1) {
                ++(vlSymsp->__Vcoverage[9635]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x31U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1) {
                ++(vlSymsp->__Vcoverage[9791]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x27U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1) {
                ++(vlSymsp->__Vcoverage[9731]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1) {
                ++(vlSymsp->__Vcoverage[9497]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x1cU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1) {
                ++(vlSymsp->__Vcoverage[9665]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x20U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1) {
                ++(vlSymsp->__Vcoverage[9689]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1) {
                ++(vlSymsp->__Vcoverage[9503]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x21U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1) {
                ++(vlSymsp->__Vcoverage[9695]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((2U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1) {
                ++(vlSymsp->__Vcoverage[9509]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x22U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1) {
                ++(vlSymsp->__Vcoverage[9701]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x23U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1) {
                ++(vlSymsp->__Vcoverage[9707]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((4U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1) {
                ++(vlSymsp->__Vcoverage[9521]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x24U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1) {
                ++(vlSymsp->__Vcoverage[9713]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((5U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1) {
                ++(vlSymsp->__Vcoverage[9527]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x25U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1) {
                ++(vlSymsp->__Vcoverage[9719]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((8U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1) {
                ++(vlSymsp->__Vcoverage[9545]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x28U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1) {
                ++(vlSymsp->__Vcoverage[9737]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((9U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1) {
                ++(vlSymsp->__Vcoverage[9551]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x2aU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1) {
                ++(vlSymsp->__Vcoverage[9749]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x2bU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1) {
                ++(vlSymsp->__Vcoverage[9755]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x2cU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1) {
                ++(vlSymsp->__Vcoverage[9761]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x2fU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1) {
                ++(vlSymsp->__Vcoverage[9779]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x32U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1) {
                ++(vlSymsp->__Vcoverage[9797]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x33U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1) {
                ++(vlSymsp->__Vcoverage[9803]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x34U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1) {
                ++(vlSymsp->__Vcoverage[9809]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x36U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1) {
                ++(vlSymsp->__Vcoverage[9821]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x38U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1) {
                ++(vlSymsp->__Vcoverage[9833]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x39U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1) {
                ++(vlSymsp->__Vcoverage[9839]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x3aU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1) {
                ++(vlSymsp->__Vcoverage[9845]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x3dU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1) {
                ++(vlSymsp->__Vcoverage[9863]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x3fU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1) {
                ++(vlSymsp->__Vcoverage[9875]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x1fU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1)))) {
                if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_2)))) {
                    ++(vlSymsp->__Vcoverage[9682]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x1fU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1)))) {
                if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_2) {
                    ++(vlSymsp->__Vcoverage[9681]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x1eU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1)))) {
                if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_2)))) {
                    ++(vlSymsp->__Vcoverage[9676]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x1eU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1)))) {
                if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_2) {
                    ++(vlSymsp->__Vcoverage[9675]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x1dU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1)))) {
                if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_2)))) {
                    ++(vlSymsp->__Vcoverage[9670]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x1dU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1)))) {
                if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_2) {
                    ++(vlSymsp->__Vcoverage[9669]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x1cU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1)))) {
                if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_2)))) {
                    ++(vlSymsp->__Vcoverage[9664]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x1bU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1)))) {
                if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_2) {
                    ++(vlSymsp->__Vcoverage[9657]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x1aU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1)))) {
                if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_2) {
                    ++(vlSymsp->__Vcoverage[9651]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x19U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1)))) {
                if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_2)))) {
                    ++(vlSymsp->__Vcoverage[9646]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x18U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1)))) {
                if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_2) {
                    ++(vlSymsp->__Vcoverage[9639]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x17U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1)))) {
                if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_2) {
                    ++(vlSymsp->__Vcoverage[9633]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x16U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1)))) {
                if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_2)))) {
                    ++(vlSymsp->__Vcoverage[9628]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x15U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1)))) {
                if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_2)))) {
                    ++(vlSymsp->__Vcoverage[9622]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x15U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1)))) {
                if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_2) {
                    ++(vlSymsp->__Vcoverage[9621]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x14U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1)))) {
                if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_2)))) {
                    ++(vlSymsp->__Vcoverage[9616]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x14U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1)))) {
                if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_2) {
                    ++(vlSymsp->__Vcoverage[9615]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x13U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1)))) {
                if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_2)))) {
                    ++(vlSymsp->__Vcoverage[9610]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x12U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1)))) {
                if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_2)))) {
                    ++(vlSymsp->__Vcoverage[9604]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x12U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1)))) {
                if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_2) {
                    ++(vlSymsp->__Vcoverage[9603]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x11U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1)))) {
                if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_2)))) {
                    ++(vlSymsp->__Vcoverage[9598]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x10U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1)))) {
                if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_2) {
                    ++(vlSymsp->__Vcoverage[9591]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0xfU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1)))) {
                if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_2)))) {
                    ++(vlSymsp->__Vcoverage[9586]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0xeU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1)))) {
                if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_2)))) {
                    ++(vlSymsp->__Vcoverage[9580]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0xbU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1)))) {
                if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_2)))) {
                    ++(vlSymsp->__Vcoverage[9562]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0xbU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1)))) {
                if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_2) {
                    ++(vlSymsp->__Vcoverage[9561]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0xaU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1)))) {
                if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_2)))) {
                    ++(vlSymsp->__Vcoverage[9556]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x3cU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1)))) {
                if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_2) {
                    ++(vlSymsp->__Vcoverage[9855]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((9U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1)))) {
                if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_2) {
                    ++(vlSymsp->__Vcoverage[9549]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x19U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1)))) {
                if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_2) {
                    ++(vlSymsp->__Vcoverage[9645]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x3aU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1)))) {
                if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_2) {
                    ++(vlSymsp->__Vcoverage[9843]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x18U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1)))) {
                if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_2)))) {
                    ++(vlSymsp->__Vcoverage[9640]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x27U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1)))) {
                if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_2)))) {
                    ++(vlSymsp->__Vcoverage[9730]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x27U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1)))) {
                if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_2) {
                    ++(vlSymsp->__Vcoverage[9729]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((7U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1)))) {
                if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_2)))) {
                    ++(vlSymsp->__Vcoverage[9538]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x17U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1)))) {
                if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_2)))) {
                    ++(vlSymsp->__Vcoverage[9634]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x26U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1)))) {
                if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_2)))) {
                    ++(vlSymsp->__Vcoverage[9724]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((6U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1)))) {
                if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_2) {
                    ++(vlSymsp->__Vcoverage[9531]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x37U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1)))) {
                if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_2) {
                    ++(vlSymsp->__Vcoverage[9825]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x35U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1)))) {
                if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_2)))) {
                    ++(vlSymsp->__Vcoverage[9814]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x34U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1)))) {
                if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_2)))) {
                    ++(vlSymsp->__Vcoverage[9808]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x21U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1)))) {
                if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_2) {
                    ++(vlSymsp->__Vcoverage[9693]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1)))) {
                if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_2)))) {
                    ++(vlSymsp->__Vcoverage[9502]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x33U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1)))) {
                if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_2)))) {
                    ++(vlSymsp->__Vcoverage[9802]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0xeU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1)))) {
                if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_2) {
                    ++(vlSymsp->__Vcoverage[9579]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x24U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1)))) {
                if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_2)))) {
                    ++(vlSymsp->__Vcoverage[9712]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x2fU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1)))) {
                if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_2) {
                    ++(vlSymsp->__Vcoverage[9777]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x20U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1)))) {
                if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_2)))) {
                    ++(vlSymsp->__Vcoverage[9688]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0xdU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1)))) {
                if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_2)))) {
                    ++(vlSymsp->__Vcoverage[9574]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0xdU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1)))) {
                if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_2) {
                    ++(vlSymsp->__Vcoverage[9573]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x1cU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1)))) {
                if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_2) {
                    ++(vlSymsp->__Vcoverage[9663]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x36U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1)))) {
                if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_2)))) {
                    ++(vlSymsp->__Vcoverage[9820]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x22U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1)))) {
                if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_2)))) {
                    ++(vlSymsp->__Vcoverage[9700]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x2dU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1)))) {
                if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_2) {
                    ++(vlSymsp->__Vcoverage[9765]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0xaU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1)))) {
                if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_2) {
                    ++(vlSymsp->__Vcoverage[9555]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x3dU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1)))) {
                if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_2)))) {
                    ++(vlSymsp->__Vcoverage[9862]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x29U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1)))) {
                if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_2) {
                    ++(vlSymsp->__Vcoverage[9741]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((9U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1)))) {
                if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_2)))) {
                    ++(vlSymsp->__Vcoverage[9550]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x29U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1)))) {
                if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_2)))) {
                    ++(vlSymsp->__Vcoverage[9742]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x25U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1)))) {
                if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_2) {
                    ++(vlSymsp->__Vcoverage[9717]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((5U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1)))) {
                if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_2)))) {
                    ++(vlSymsp->__Vcoverage[9526]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x34U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1)))) {
                if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_2) {
                    ++(vlSymsp->__Vcoverage[9807]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x25U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1)))) {
                if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_2)))) {
                    ++(vlSymsp->__Vcoverage[9718]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x30U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1)))) {
                if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_2) {
                    ++(vlSymsp->__Vcoverage[9783]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x1aU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1)))) {
                if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_2)))) {
                    ++(vlSymsp->__Vcoverage[9652]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0xcU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1)))) {
                if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_2) {
                    ++(vlSymsp->__Vcoverage[9567]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x36U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1)))) {
                if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_2) {
                    ++(vlSymsp->__Vcoverage[9819]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0xcU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1)))) {
                if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_2)))) {
                    ++(vlSymsp->__Vcoverage[9568]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x13U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1)))) {
                if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_2) {
                    ++(vlSymsp->__Vcoverage[9609]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0xfU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1)))) {
                if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_2) {
                    ++(vlSymsp->__Vcoverage[9585]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x23U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1)))) {
                if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_2)))) {
                    ++(vlSymsp->__Vcoverage[9706]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x2eU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1)))) {
                if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_2) {
                    ++(vlSymsp->__Vcoverage[9771]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x16U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1)))) {
                if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_2) {
                    ++(vlSymsp->__Vcoverage[9627]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x3fU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1)))) {
                if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_2)))) {
                    ++(vlSymsp->__Vcoverage[9874]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x30U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1)))) {
                if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_2)))) {
                    ++(vlSymsp->__Vcoverage[9784]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x38U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1)))) {
                if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_2)))) {
                    ++(vlSymsp->__Vcoverage[9832]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x31U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1)))) {
                if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_2)))) {
                    ++(vlSymsp->__Vcoverage[9790]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x10U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1)))) {
                if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_2)))) {
                    ++(vlSymsp->__Vcoverage[9592]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((7U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1)))) {
                if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_2) {
                    ++(vlSymsp->__Vcoverage[9537]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x20U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1)))) {
                if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_2) {
                    ++(vlSymsp->__Vcoverage[9687]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1)))) {
                if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_2)))) {
                    ++(vlSymsp->__Vcoverage[9496]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x11U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1)))) {
                if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_2) {
                    ++(vlSymsp->__Vcoverage[9597]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x33U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1)))) {
                if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_2) {
                    ++(vlSymsp->__Vcoverage[9801]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x1bU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1)))) {
                if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_2)))) {
                    ++(vlSymsp->__Vcoverage[9658]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x3dU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1)))) {
                if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_2) {
                    ++(vlSymsp->__Vcoverage[9861]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x3eU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1)))) {
                if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_2)))) {
                    ++(vlSymsp->__Vcoverage[9868]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x3fU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1)))) {
                if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_2) {
                    ++(vlSymsp->__Vcoverage[9873]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1)))) {
                if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_2) {
                    ++(vlSymsp->__Vcoverage[9495]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1)))) {
                if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_2) {
                    ++(vlSymsp->__Vcoverage[9501]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x21U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1)))) {
                if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_2)))) {
                    ++(vlSymsp->__Vcoverage[9694]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((2U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1)))) {
                if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_2) {
                    ++(vlSymsp->__Vcoverage[9507]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x22U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1)))) {
                if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_2) {
                    ++(vlSymsp->__Vcoverage[9699]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((2U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1)))) {
                if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_2)))) {
                    ++(vlSymsp->__Vcoverage[9508]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((3U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1)))) {
                if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_2) {
                    ++(vlSymsp->__Vcoverage[9513]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x23U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1)))) {
                if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_2) {
                    ++(vlSymsp->__Vcoverage[9705]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((3U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1)))) {
                if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_2)))) {
                    ++(vlSymsp->__Vcoverage[9514]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((4U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1)))) {
                if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_2) {
                    ++(vlSymsp->__Vcoverage[9519]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x24U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1)))) {
                if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_2) {
                    ++(vlSymsp->__Vcoverage[9711]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((4U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1)))) {
                if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_2)))) {
                    ++(vlSymsp->__Vcoverage[9520]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((5U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1)))) {
                if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_2) {
                    ++(vlSymsp->__Vcoverage[9525]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x26U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1)))) {
                if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_2) {
                    ++(vlSymsp->__Vcoverage[9723]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((6U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1)))) {
                if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_2)))) {
                    ++(vlSymsp->__Vcoverage[9532]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((8U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1)))) {
                if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_2) {
                    ++(vlSymsp->__Vcoverage[9543]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x28U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1)))) {
                if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_2) {
                    ++(vlSymsp->__Vcoverage[9735]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((8U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1)))) {
                if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_2)))) {
                    ++(vlSymsp->__Vcoverage[9544]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x28U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1)))) {
                if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_2)))) {
                    ++(vlSymsp->__Vcoverage[9736]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x2aU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1)))) {
                if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_2) {
                    ++(vlSymsp->__Vcoverage[9747]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x2aU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1)))) {
                if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_2)))) {
                    ++(vlSymsp->__Vcoverage[9748]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x2bU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1)))) {
                if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_2) {
                    ++(vlSymsp->__Vcoverage[9753]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x2bU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1)))) {
                if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_2)))) {
                    ++(vlSymsp->__Vcoverage[9754]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x2cU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1)))) {
                if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_2) {
                    ++(vlSymsp->__Vcoverage[9759]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x2cU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1)))) {
                if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_2)))) {
                    ++(vlSymsp->__Vcoverage[9760]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x2dU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1)))) {
                if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_2)))) {
                    ++(vlSymsp->__Vcoverage[9766]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x2eU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1)))) {
                if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_2)))) {
                    ++(vlSymsp->__Vcoverage[9772]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x2fU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1)))) {
                if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_2)))) {
                    ++(vlSymsp->__Vcoverage[9778]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x31U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1)))) {
                if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_2) {
                    ++(vlSymsp->__Vcoverage[9789]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x32U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1)))) {
                if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_2) {
                    ++(vlSymsp->__Vcoverage[9795]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x32U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1)))) {
                if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_2)))) {
                    ++(vlSymsp->__Vcoverage[9796]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x35U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1)))) {
                if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_2) {
                    ++(vlSymsp->__Vcoverage[9813]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x37U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1)))) {
                if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_2)))) {
                    ++(vlSymsp->__Vcoverage[9826]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x38U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1)))) {
                if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_2) {
                    ++(vlSymsp->__Vcoverage[9831]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x39U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1)))) {
                if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_2) {
                    ++(vlSymsp->__Vcoverage[9837]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x39U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1)))) {
                if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_2)))) {
                    ++(vlSymsp->__Vcoverage[9838]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x3aU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1)))) {
                if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_2)))) {
                    ++(vlSymsp->__Vcoverage[9844]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x3bU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1)))) {
                if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_2) {
                    ++(vlSymsp->__Vcoverage[9849]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x3bU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1)))) {
                if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_2)))) {
                    ++(vlSymsp->__Vcoverage[9850]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x3cU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1)))) {
                if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_2)))) {
                    ++(vlSymsp->__Vcoverage[9856]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x3eU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1)))) {
                if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_2) {
                    ++(vlSymsp->__Vcoverage[9867]);
                }
            }
        }
    }
    ++(vlSymsp->__Vcoverage[15290]);
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[15285]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[15289]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[15279]);
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (vlSelf->riscv_soc__DOT__core__DOT__write_back_io_out_flush) {
            ++(vlSymsp->__Vcoverage[15284]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (vlSelf->riscv_soc__DOT__core__DOT__write_back_io_out_flush) {
            ++(vlSymsp->__Vcoverage[15288]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (vlSelf->riscv_soc__DOT__core__DOT__write_back_io_out_flush) {
            ++(vlSymsp->__Vcoverage[15278]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back_io_out_flush)))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_stall)))) {
                ++(vlSymsp->__Vcoverage[15276]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back_io_out_flush)))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_stall)))) {
                ++(vlSymsp->__Vcoverage[15286]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back_io_out_flush)))) {
            if (vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_stall) {
                ++(vlSymsp->__Vcoverage[15277]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back_io_out_flush)))) {
            if (vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_stall) {
                ++(vlSymsp->__Vcoverage[15283]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back_io_out_flush)))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_stall)))) {
                ++(vlSymsp->__Vcoverage[15282]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back_io_out_flush)))) {
            if (vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_stall) {
                ++(vlSymsp->__Vcoverage[15287]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back_io_out_flush)))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_stall)))) {
                if ((3U == (3U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_out_exuType)))) {
                    ++(vlSymsp->__Vcoverage[15280]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back_io_out_flush)))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_stall)))) {
                if ((3U != (3U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_out_exuType)))) {
                    ++(vlSymsp->__Vcoverage[15281]);
                }
            }
        }
    }
    ++(vlSymsp->__Vcoverage[13550]);
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[13549]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[13545]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[13537]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[13541]);
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (vlSelf->riscv_soc__DOT__core__DOT__write_back_io_out_flush) {
            ++(vlSymsp->__Vcoverage[13544]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (vlSelf->riscv_soc__DOT__core__DOT__write_back_io_out_flush) {
            ++(vlSymsp->__Vcoverage[13536]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (vlSelf->riscv_soc__DOT__core__DOT__write_back_io_out_flush) {
            ++(vlSymsp->__Vcoverage[13540]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (vlSelf->riscv_soc__DOT__core__DOT__write_back_io_out_flush) {
            ++(vlSymsp->__Vcoverage[13548]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back_io_out_flush)))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_stall)))) {
                ++(vlSymsp->__Vcoverage[13542]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back_io_out_flush)))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_stall)))) {
                ++(vlSymsp->__Vcoverage[13538]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back_io_out_flush)))) {
            if (vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_stall) {
                ++(vlSymsp->__Vcoverage[13539]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back_io_out_flush)))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_stall)))) {
                ++(vlSymsp->__Vcoverage[13534]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back_io_out_flush)))) {
            if (vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_stall) {
                ++(vlSymsp->__Vcoverage[13543]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back_io_out_flush)))) {
            if (vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_stall) {
                ++(vlSymsp->__Vcoverage[13535]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back_io_out_flush)))) {
            if (vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_stall) {
                ++(vlSymsp->__Vcoverage[13547]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back_io_out_flush)))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_stall)))) {
                ++(vlSymsp->__Vcoverage[13546]);
            }
        }
    }
    ++(vlSymsp->__Vcoverage[15275]);
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[15270]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[15262]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[15274]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[15266]);
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (vlSelf->riscv_soc__DOT__core__DOT__write_back_io_out_flush) {
            ++(vlSymsp->__Vcoverage[15269]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (vlSelf->riscv_soc__DOT__core__DOT__write_back_io_out_flush) {
            ++(vlSymsp->__Vcoverage[15261]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (vlSelf->riscv_soc__DOT__core__DOT__write_back_io_out_flush) {
            ++(vlSymsp->__Vcoverage[15265]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (vlSelf->riscv_soc__DOT__core__DOT__write_back_io_out_flush) {
            ++(vlSymsp->__Vcoverage[15273]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back_io_out_flush)))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_stall)))) {
                ++(vlSymsp->__Vcoverage[15263]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back_io_out_flush)))) {
            if (vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_stall) {
                ++(vlSymsp->__Vcoverage[15264]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back_io_out_flush)))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_stall)))) {
                ++(vlSymsp->__Vcoverage[15259]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back_io_out_flush)))) {
            if (vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_stall) {
                ++(vlSymsp->__Vcoverage[15268]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back_io_out_flush)))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_stall)))) {
                ++(vlSymsp->__Vcoverage[15267]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back_io_out_flush)))) {
            if (vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_stall) {
                ++(vlSymsp->__Vcoverage[15260]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back_io_out_flush)))) {
            if (vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_stall) {
                ++(vlSymsp->__Vcoverage[15272]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back_io_out_flush)))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_stall)))) {
                ++(vlSymsp->__Vcoverage[15271]);
            }
        }
    }
    ++(vlSymsp->__Vcoverage[16997]);
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[16977]);
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        ++(vlSymsp->__Vcoverage[16970]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[16969]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[16968]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[16983]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[16990]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[16996]);
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__clint_de__DOT__reg_state)))) {
            ++(vlSymsp->__Vcoverage[16975]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (vlSelf->riscv_soc__DOT__core__DOT__clint_de__DOT__reg_state) {
            ++(vlSymsp->__Vcoverage[16976]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__clint_de__DOT__reg_state)))) {
            ++(vlSymsp->__Vcoverage[16995]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (vlSelf->riscv_soc__DOT__core__DOT__clint_de__DOT__reg_state) {
            ++(vlSymsp->__Vcoverage[16967]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (vlSelf->riscv_soc__DOT__core__DOT__clint_de__DOT__reg_state) {
            ++(vlSymsp->__Vcoverage[16989]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__clint_de__DOT__reg_state)))) {
            ++(vlSymsp->__Vcoverage[16966]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__clint_de__DOT__reg_state)))) {
            ++(vlSymsp->__Vcoverage[16988]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (vlSelf->riscv_soc__DOT__core__DOT__clint_de__DOT__reg_state) {
            if (vlSelf->riscv_soc__DOT__core__DOT__clint_de__DOT__reg_state) {
                ++(vlSymsp->__Vcoverage[16980]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (vlSelf->riscv_soc__DOT__core__DOT__clint_de__DOT__reg_state) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__clint_de__DOT__reg_state)))) {
                ++(vlSymsp->__Vcoverage[16981]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__clint_de__DOT__reg_state)))) {
            ++(vlSymsp->__Vcoverage[16982]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (vlSelf->riscv_soc__DOT__core__DOT__clint_de__DOT__reg_state) {
            if (vlSelf->riscv_soc__DOT__core__DOT__clint_de__DOT__reg_state) {
                ++(vlSymsp->__Vcoverage[16993]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (vlSelf->riscv_soc__DOT__core__DOT__clint_de__DOT__reg_state) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__clint_de__DOT__reg_state)))) {
                ++(vlSymsp->__Vcoverage[16994]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (vlSelf->riscv_soc__DOT__core__DOT__clint_de__DOT__reg_state) {
            if (vlSelf->riscv_soc__DOT__core__DOT__clint_de__DOT__reg_state) {
                if (vlSelf->riscv_soc__DOT__core__DOT__clint_de__DOT___T_2) {
                    ++(vlSymsp->__Vcoverage[16978]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (vlSelf->riscv_soc__DOT__core__DOT__clint_de__DOT__reg_state) {
            if (vlSelf->riscv_soc__DOT__core__DOT__clint_de__DOT__reg_state) {
                if (vlSelf->riscv_soc__DOT__core__DOT__clint_de__DOT___T_2) {
                    ++(vlSymsp->__Vcoverage[16991]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (vlSelf->riscv_soc__DOT__core__DOT__clint_de__DOT__reg_state) {
            if (vlSelf->riscv_soc__DOT__core__DOT__clint_de__DOT__reg_state) {
                if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__clint_de__DOT___T_2)))) {
                    ++(vlSymsp->__Vcoverage[16979]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (vlSelf->riscv_soc__DOT__core__DOT__clint_de__DOT__reg_state) {
            if (vlSelf->riscv_soc__DOT__core__DOT__clint_de__DOT__reg_state) {
                if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__clint_de__DOT___T_2)))) {
                    ++(vlSymsp->__Vcoverage[16992]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__clint_de__DOT__reg_state)))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1_io_clint_bus_valid)))) {
                ++(vlSymsp->__Vcoverage[16974]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__clint_de__DOT__reg_state)))) {
            if (vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1_io_clint_bus_valid) {
                ++(vlSymsp->__Vcoverage[16973]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__clint_de__DOT__reg_state)))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1_io_clint_bus_valid)))) {
                ++(vlSymsp->__Vcoverage[16965]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__clint_de__DOT__reg_state)))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1_io_clint_bus_valid)))) {
                ++(vlSymsp->__Vcoverage[16987]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__clint_de__DOT__reg_state)))) {
            if (vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1_io_clint_bus_valid) {
                ++(vlSymsp->__Vcoverage[16964]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__clint_de__DOT__reg_state)))) {
            if (vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1_io_clint_bus_valid) {
                ++(vlSymsp->__Vcoverage[16986]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__clint_de__DOT__reg_state)))) {
            if (vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1_io_clint_bus_valid) {
                if (vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_bus_is_w) {
                    ++(vlSymsp->__Vcoverage[16971]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__clint_de__DOT__reg_state)))) {
            if (vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1_io_clint_bus_valid) {
                if (vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_bus_is_w) {
                    ++(vlSymsp->__Vcoverage[16962]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__clint_de__DOT__reg_state)))) {
            if (vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1_io_clint_bus_valid) {
                if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_bus_is_w)))) {
                    ++(vlSymsp->__Vcoverage[16972]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__clint_de__DOT__reg_state)))) {
            if (vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1_io_clint_bus_valid) {
                if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_bus_is_w)))) {
                    ++(vlSymsp->__Vcoverage[16963]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__clint_de__DOT__reg_state)))) {
            if (vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1_io_clint_bus_valid) {
                if ((0x30U != (0xffU & (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_bus_addr)))) {
                    ++(vlSymsp->__Vcoverage[16985]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__clint_de__DOT__reg_state)))) {
            if (vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1_io_clint_bus_valid) {
                if ((0x30U == (0xffU & (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_bus_addr)))) {
                    ++(vlSymsp->__Vcoverage[16984]);
                }
            }
        }
    }
    ++(vlSymsp->__Vcoverage[13016]);
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[13003]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[12997]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[12991]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[12979]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[12985]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[12973]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[13009]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[13015]);
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (vlSelf->riscv_soc__DOT__core__DOT__write_back_io_out_flush) {
            ++(vlSymsp->__Vcoverage[12990]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (vlSelf->riscv_soc__DOT__core__DOT__write_back_io_out_flush) {
            ++(vlSymsp->__Vcoverage[12996]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (vlSelf->riscv_soc__DOT__core__DOT__write_back_io_out_flush) {
            ++(vlSymsp->__Vcoverage[12984]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (vlSelf->riscv_soc__DOT__core__DOT__write_back_io_out_flush) {
            ++(vlSymsp->__Vcoverage[12978]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (vlSelf->riscv_soc__DOT__core__DOT__write_back_io_out_flush) {
            ++(vlSymsp->__Vcoverage[12972]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (vlSelf->riscv_soc__DOT__core__DOT__write_back_io_out_flush) {
            ++(vlSymsp->__Vcoverage[13002]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (vlSelf->riscv_soc__DOT__core__DOT__write_back_io_out_flush) {
            ++(vlSymsp->__Vcoverage[13008]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (vlSelf->riscv_soc__DOT__core__DOT__write_back_io_out_flush) {
            ++(vlSymsp->__Vcoverage[13014]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back_io_out_flush)))) {
            if (vlSelf->riscv_soc__DOT__core__DOT__decode_io_in_stall) {
                ++(vlSymsp->__Vcoverage[12995]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back_io_out_flush)))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_in_stall)))) {
                ++(vlSymsp->__Vcoverage[12988]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back_io_out_flush)))) {
            if (vlSelf->riscv_soc__DOT__core__DOT__decode_io_in_stall) {
                ++(vlSymsp->__Vcoverage[12989]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back_io_out_flush)))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_in_stall)))) {
                ++(vlSymsp->__Vcoverage[12982]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back_io_out_flush)))) {
            if (vlSelf->riscv_soc__DOT__core__DOT__decode_io_in_stall) {
                ++(vlSymsp->__Vcoverage[12971]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back_io_out_flush)))) {
            if (vlSelf->riscv_soc__DOT__core__DOT__decode_io_in_stall) {
                ++(vlSymsp->__Vcoverage[13001]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back_io_out_flush)))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_in_stall)))) {
                ++(vlSymsp->__Vcoverage[12970]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back_io_out_flush)))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_in_stall)))) {
                ++(vlSymsp->__Vcoverage[12994]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back_io_out_flush)))) {
            if (vlSelf->riscv_soc__DOT__core__DOT__decode_io_in_stall) {
                ++(vlSymsp->__Vcoverage[12977]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back_io_out_flush)))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_in_stall)))) {
                ++(vlSymsp->__Vcoverage[12976]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back_io_out_flush)))) {
            if (vlSelf->riscv_soc__DOT__core__DOT__decode_io_in_stall) {
                ++(vlSymsp->__Vcoverage[12983]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back_io_out_flush)))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_in_stall)))) {
                ++(vlSymsp->__Vcoverage[13000]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back_io_out_flush)))) {
            if (vlSelf->riscv_soc__DOT__core__DOT__decode_io_in_stall) {
                ++(vlSymsp->__Vcoverage[13007]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back_io_out_flush)))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_in_stall)))) {
                ++(vlSymsp->__Vcoverage[13006]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back_io_out_flush)))) {
            if (vlSelf->riscv_soc__DOT__core__DOT__decode_io_in_stall) {
                ++(vlSymsp->__Vcoverage[13013]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back_io_out_flush)))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_in_stall)))) {
                ++(vlSymsp->__Vcoverage[13012]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back_io_out_flush)))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_in_stall)))) {
                if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__reg_next_pc_valid)))) {
                    ++(vlSymsp->__Vcoverage[12987]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back_io_out_flush)))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_in_stall)))) {
                if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__reg_next_pc_valid) {
                    ++(vlSymsp->__Vcoverage[12986]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back_io_out_flush)))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_in_stall)))) {
                if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__reg_next_pc_valid) {
                    ++(vlSymsp->__Vcoverage[12992]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back_io_out_flush)))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_in_stall)))) {
                if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__reg_next_pc_valid)))) {
                    ++(vlSymsp->__Vcoverage[12981]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back_io_out_flush)))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_in_stall)))) {
                if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__reg_next_pc_valid) {
                    ++(vlSymsp->__Vcoverage[12980]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back_io_out_flush)))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_in_stall)))) {
                if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__reg_next_pc_valid) {
                    ++(vlSymsp->__Vcoverage[12974]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back_io_out_flush)))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_in_stall)))) {
                if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__reg_next_pc_valid)))) {
                    ++(vlSymsp->__Vcoverage[12993]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back_io_out_flush)))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_in_stall)))) {
                if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__reg_next_pc_valid)))) {
                    ++(vlSymsp->__Vcoverage[12975]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back_io_out_flush)))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_in_stall)))) {
                if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__reg_next_pc_valid) {
                    ++(vlSymsp->__Vcoverage[12998]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back_io_out_flush)))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_in_stall)))) {
                if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__reg_next_pc_valid)))) {
                    ++(vlSymsp->__Vcoverage[12999]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back_io_out_flush)))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_in_stall)))) {
                if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__reg_next_pc_valid) {
                    ++(vlSymsp->__Vcoverage[13004]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back_io_out_flush)))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_in_stall)))) {
                if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__reg_next_pc_valid)))) {
                    ++(vlSymsp->__Vcoverage[13005]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back_io_out_flush)))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_in_stall)))) {
                if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__reg_next_pc_valid) {
                    ++(vlSymsp->__Vcoverage[13010]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back_io_out_flush)))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_in_stall)))) {
                if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__reg_next_pc_valid)))) {
                    ++(vlSymsp->__Vcoverage[13011]);
                }
            }
        }
    }
    ++(vlSymsp->__Vcoverage[16391]);
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[16371]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[16362]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[16359]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[16356]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[16353]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[16333]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[16386]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[16301]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[16342]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[16378]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[16348]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[16389]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[16318]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[16288]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[16307]);
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        ++(vlSymsp->__Vcoverage[16381]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[16374]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[16336]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[16345]);
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        ++(vlSymsp->__Vcoverage[16383]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[16326]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[16293]);
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        ++(vlSymsp->__Vcoverage[16388]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[16310]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[16365]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[16377]);
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        ++(vlSymsp->__Vcoverage[16379]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[16380]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[16382]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[16387]);
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        ++(vlSymsp->__Vcoverage[16390]);
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_ls_state)))) {
            ++(vlSymsp->__Vcoverage[16341]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_ls_state) {
            if (vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_ls_state) {
                ++(vlSymsp->__Vcoverage[16339]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_ls_state)))) {
            ++(vlSymsp->__Vcoverage[16332]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_ls_state) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_ls_state)))) {
                ++(vlSymsp->__Vcoverage[16331]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_ls_state)))) {
            ++(vlSymsp->__Vcoverage[16325]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_ls_state)))) {
            ++(vlSymsp->__Vcoverage[16343]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_ls_state) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_ls_state)))) {
                ++(vlSymsp->__Vcoverage[16299]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_ls_state) {
            ++(vlSymsp->__Vcoverage[16344]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_ls_state)))) {
            ++(vlSymsp->__Vcoverage[16291]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_ls_state)))) {
            ++(vlSymsp->__Vcoverage[16300]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_ls_state) {
            if (vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_ls_state) {
                ++(vlSymsp->__Vcoverage[16323]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_ls_state) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_ls_state)))) {
                ++(vlSymsp->__Vcoverage[16305]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_ls_state)))) {
            ++(vlSymsp->__Vcoverage[16308]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_ls_state) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_ls_state)))) {
                ++(vlSymsp->__Vcoverage[16286]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_ls_state)))) {
            ++(vlSymsp->__Vcoverage[16287]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_ls_state) {
            if (vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_ls_state) {
                ++(vlSymsp->__Vcoverage[16330]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_ls_state) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_ls_state)))) {
                ++(vlSymsp->__Vcoverage[16340]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_ls_state) {
            if (vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_ls_state) {
                ++(vlSymsp->__Vcoverage[16304]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_ls_state) {
            ++(vlSymsp->__Vcoverage[16292]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_ls_state) {
            if (vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_ls_state) {
                ++(vlSymsp->__Vcoverage[16285]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_ls_state) {
            if (vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_ls_state) {
                ++(vlSymsp->__Vcoverage[16298]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_ls_state) {
            ++(vlSymsp->__Vcoverage[16309]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_ls_state) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_ls_state)))) {
                ++(vlSymsp->__Vcoverage[16324]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_ls_state)))) {
            ++(vlSymsp->__Vcoverage[16306]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_ls_state) {
            if (vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_ls_state) {
                ++(vlSymsp->__Vcoverage[16315]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_ls_state) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_ls_state)))) {
                ++(vlSymsp->__Vcoverage[16316]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_ls_state)))) {
            ++(vlSymsp->__Vcoverage[16317]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_ls_state) {
            if (vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_ls_state) {
                if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT___T_2)))) {
                    ++(vlSymsp->__Vcoverage[16338]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_ls_state) {
            if (vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_ls_state) {
                if (vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT___T_2) {
                    ++(vlSymsp->__Vcoverage[16337]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_ls_state) {
            if (vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_ls_state) {
                if (vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT___T_2) {
                    ++(vlSymsp->__Vcoverage[16321]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_ls_state) {
            if (vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_ls_state) {
                if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT___T_2)))) {
                    ++(vlSymsp->__Vcoverage[16297]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_ls_state) {
            if (vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_ls_state) {
                if (vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT___T_2) {
                    ++(vlSymsp->__Vcoverage[16296]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_ls_state) {
            if (vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_ls_state) {
                if (vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT___T_2) {
                    ++(vlSymsp->__Vcoverage[16313]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_ls_state) {
            if (vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_ls_state) {
                if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT___T_2)))) {
                    ++(vlSymsp->__Vcoverage[16322]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_ls_state) {
            if (vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_ls_state) {
                if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT___T_2)))) {
                    ++(vlSymsp->__Vcoverage[16284]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_ls_state) {
            if (vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_ls_state) {
                if (vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT___T_2) {
                    ++(vlSymsp->__Vcoverage[16283]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_ls_state) {
            if (vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_ls_state) {
                if (vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT___T_2) {
                    ++(vlSymsp->__Vcoverage[16302]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_ls_state) {
            if (vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_ls_state) {
                if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT___T_2)))) {
                    ++(vlSymsp->__Vcoverage[16303]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_ls_state) {
            if (vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_ls_state) {
                if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT___T_2)))) {
                    ++(vlSymsp->__Vcoverage[16314]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_ls_state)))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute_io_out_mem_avalid)))) {
                ++(vlSymsp->__Vcoverage[16320]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_ls_state)))) {
            if (vlSelf->riscv_soc__DOT__core__DOT__execute_io_out_mem_avalid) {
                ++(vlSymsp->__Vcoverage[16319]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_ls_state)))) {
            if (vlSelf->riscv_soc__DOT__core__DOT__execute_io_out_mem_avalid) {
                ++(vlSymsp->__Vcoverage[16294]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_ls_state)))) {
            if (vlSelf->riscv_soc__DOT__core__DOT__execute_io_out_mem_avalid) {
                ++(vlSymsp->__Vcoverage[16289]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_ls_state)))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute_io_out_mem_avalid)))) {
                ++(vlSymsp->__Vcoverage[16295]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_ls_state)))) {
            if (vlSelf->riscv_soc__DOT__core__DOT__execute_io_out_mem_avalid) {
                ++(vlSymsp->__Vcoverage[16329]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_ls_state)))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute_io_out_mem_avalid)))) {
                ++(vlSymsp->__Vcoverage[16290]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_ls_state)))) {
            if (vlSelf->riscv_soc__DOT__core__DOT__execute_io_out_mem_avalid) {
                ++(vlSymsp->__Vcoverage[16311]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_ls_state)))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute_io_out_mem_avalid)))) {
                ++(vlSymsp->__Vcoverage[16312]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_ls_state)))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute_io_out_mem_avalid)))) {
                if ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute_io_out_exuType))) {
                    ++(vlSymsp->__Vcoverage[16327]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_ls_state)))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute_io_out_mem_avalid)))) {
                if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute_io_out_exuType))) {
                    ++(vlSymsp->__Vcoverage[16328]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_stall)))) {
            ++(vlSymsp->__Vcoverage[16360]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_stall)))) {
            ++(vlSymsp->__Vcoverage[16354]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_stall)))) {
            ++(vlSymsp->__Vcoverage[16351]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_stall)))) {
            ++(vlSymsp->__Vcoverage[16346]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_stall)))) {
            ++(vlSymsp->__Vcoverage[16334]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_stall) {
            ++(vlSymsp->__Vcoverage[16335]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_stall)))) {
            ++(vlSymsp->__Vcoverage[16369]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_stall) {
            ++(vlSymsp->__Vcoverage[16370]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_stall) {
            ++(vlSymsp->__Vcoverage[16364]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_stall) {
            ++(vlSymsp->__Vcoverage[16358]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_stall) {
            ++(vlSymsp->__Vcoverage[16373]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_stall) {
            ++(vlSymsp->__Vcoverage[16347]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_stall)))) {
            ++(vlSymsp->__Vcoverage[16363]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_stall) {
            ++(vlSymsp->__Vcoverage[16352]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_stall) {
            ++(vlSymsp->__Vcoverage[16355]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_stall)))) {
            ++(vlSymsp->__Vcoverage[16357]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_stall) {
            ++(vlSymsp->__Vcoverage[16361]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_stall)))) {
            ++(vlSymsp->__Vcoverage[16372]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_stall) {
            ++(vlSymsp->__Vcoverage[16376]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_stall)))) {
            ++(vlSymsp->__Vcoverage[16375]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_stall)))) {
            if (vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__temp_except) {
                ++(vlSymsp->__Vcoverage[16368]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_stall)))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__abn_exu__DOT__reg_is_mret)))) {
                ++(vlSymsp->__Vcoverage[16350]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_stall)))) {
            if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__abn_exu__DOT__reg_is_mret) {
                ++(vlSymsp->__Vcoverage[16349]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_stall)))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__temp_except)))) {
                if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__abn_exu__DOT__reg_is_mret) {
                    ++(vlSymsp->__Vcoverage[16366]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_stall)))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__temp_except)))) {
                if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__abn_exu__DOT__reg_is_mret)))) {
                    ++(vlSymsp->__Vcoverage[16367]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_commit) {
            ++(vlSymsp->__Vcoverage[16384]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_commit)))) {
            ++(vlSymsp->__Vcoverage[16385]);
        }
    }
    ++(vlSymsp->__Vcoverage[12156]);
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[12143]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[12152]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[12135]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[12132]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[12149]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[12155]);
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (vlSelf->riscv_soc__DOT__axi_ram_io_ram_bus_r_bits_rlast) {
            ++(vlSymsp->__Vcoverage[12153]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__axi_ram_io_ram_bus_r_bits_rlast)))) {
            ++(vlSymsp->__Vcoverage[12154]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_b_valid)))) {
            ++(vlSymsp->__Vcoverage[12151]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_b_valid) {
            ++(vlSymsp->__Vcoverage[12150]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__reg_r_cnt))) {
            ++(vlSymsp->__Vcoverage[12142]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__reg_r_cnt))) {
            ++(vlSymsp->__Vcoverage[12147]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__reg_r_cnt))) {
            ++(vlSymsp->__Vcoverage[12148]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__reg_w_cnt))) {
            ++(vlSymsp->__Vcoverage[12131]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__reg_w_cnt))) {
            ++(vlSymsp->__Vcoverage[12134]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__reg_w_cnt))) {
            ++(vlSymsp->__Vcoverage[12133]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__reg_r_cnt))) {
            if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_r_valid) {
                ++(vlSymsp->__Vcoverage[12138]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__reg_r_cnt))) {
            if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_r_valid) {
                ++(vlSymsp->__Vcoverage[12146]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__reg_w_cnt))) {
            if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_w_valid) {
                ++(vlSymsp->__Vcoverage[12126]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__reg_w_cnt))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_w_valid)))) {
                ++(vlSymsp->__Vcoverage[12127]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__reg_r_cnt))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_r_valid)))) {
                if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_r_valid) {
                    ++(vlSymsp->__Vcoverage[12136]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__reg_r_cnt))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_r_valid)))) {
                if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_r_valid)))) {
                    ++(vlSymsp->__Vcoverage[12137]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__reg_r_cnt))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_r_valid)))) {
                if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_r_valid)))) {
                    ++(vlSymsp->__Vcoverage[12145]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__reg_r_cnt))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_r_valid)))) {
                if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_r_valid) {
                    ++(vlSymsp->__Vcoverage[12144]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__reg_w_cnt))) {
            if (((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__w_lockId)) 
                 & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_DCache_bus_w_ready) 
                    & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_w_valid)))) {
                ++(vlSymsp->__Vcoverage[12130]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__reg_r_cnt))) {
            if (((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__r_lockId)) 
                 & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_r_valid) 
                    & (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_ICache_bus_r_ready)))) {
                ++(vlSymsp->__Vcoverage[12141]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__reg_w_cnt))) {
            if ((1U & (~ ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__w_lockId)) 
                          & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_DCache_bus_w_ready) 
                             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_w_valid)))))) {
                if ((((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__w_lockId)) 
                      & (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT___T_8)) 
                     & (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_bus_is_w))) {
                    ++(vlSymsp->__Vcoverage[12128]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__reg_w_cnt))) {
            if ((1U & (~ ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__w_lockId)) 
                          & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_DCache_bus_w_ready) 
                             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_w_valid)))))) {
                if ((1U & (~ (((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__w_lockId)) 
                               & (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT___T_8)) 
                              & (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_bus_is_w))))) {
                    ++(vlSymsp->__Vcoverage[12129]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__reg_r_cnt))) {
            if ((1U & (~ ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__r_lockId)) 
                          & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_r_valid) 
                             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_ICache_bus_r_ready)))))) {
                if (((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__r_lockId)) 
                     & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_r_valid) 
                        & (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_DCache_bus_r_ready)))) {
                    ++(vlSymsp->__Vcoverage[12139]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__reg_r_cnt))) {
            if ((1U & (~ ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__r_lockId)) 
                          & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_r_valid) 
                             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_ICache_bus_r_ready)))))) {
                if ((1U & (~ ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__r_lockId)) 
                              & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_r_valid) 
                                 & (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_DCache_bus_r_ready)))))) {
                    ++(vlSymsp->__Vcoverage[12140]);
                }
            }
        }
    }
    ++(vlSymsp->__Vcoverage[16830]);
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[16809]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[16802]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[16788]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[16781]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[16795]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[16814]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[16819]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[16824]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[16829]);
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (vlSelf->riscv_soc__DOT__core__DOT__csr_reg__DOT__irq) {
            ++(vlSymsp->__Vcoverage[16808]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (vlSelf->riscv_soc__DOT__core__DOT__csr_reg__DOT__irq) {
            ++(vlSymsp->__Vcoverage[16780]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (vlSelf->riscv_soc__DOT__core__DOT__csr_reg__DOT__irq) {
            ++(vlSymsp->__Vcoverage[16813]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (vlSelf->riscv_soc__DOT__core__DOT__csr_reg__DOT__irq) {
            ++(vlSymsp->__Vcoverage[16818]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back_io_out_w_csr_en)))) {
            ++(vlSymsp->__Vcoverage[16801]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (vlSelf->riscv_soc__DOT__core__DOT__write_back_io_out_w_csr_en) {
            ++(vlSymsp->__Vcoverage[16800]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back_io_out_w_csr_en)))) {
            ++(vlSymsp->__Vcoverage[16794]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (vlSelf->riscv_soc__DOT__core__DOT__write_back_io_out_w_csr_en) {
            ++(vlSymsp->__Vcoverage[16793]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back_io_out_w_csr_en)))) {
            ++(vlSymsp->__Vcoverage[16823]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back_io_out_w_csr_en)))) {
            ++(vlSymsp->__Vcoverage[16828]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (vlSelf->riscv_soc__DOT__core__DOT__write_back_io_out_w_csr_en) {
            ++(vlSymsp->__Vcoverage[16786]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back_io_out_w_csr_en)))) {
            ++(vlSymsp->__Vcoverage[16787]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (vlSelf->riscv_soc__DOT__core__DOT__write_back_io_out_w_csr_en) {
            ++(vlSymsp->__Vcoverage[16822]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (vlSelf->riscv_soc__DOT__core__DOT__write_back_io_out_w_csr_en) {
            ++(vlSymsp->__Vcoverage[16827]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (vlSelf->riscv_soc__DOT__core__DOT__csr_reg__DOT__irq) {
            if (vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_is_exception) {
                ++(vlSymsp->__Vcoverage[16803]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__csr_reg__DOT__irq)))) {
            if (vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_is_exception) {
                ++(vlSymsp->__Vcoverage[16807]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (vlSelf->riscv_soc__DOT__core__DOT__csr_reg__DOT__irq) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_is_exception)))) {
                ++(vlSymsp->__Vcoverage[16804]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__csr_reg__DOT__irq)))) {
            if (vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_is_exception) {
                ++(vlSymsp->__Vcoverage[16779]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__csr_reg__DOT__irq)))) {
            if (vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_is_exception) {
                ++(vlSymsp->__Vcoverage[16812]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__csr_reg__DOT__irq)))) {
            if (vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_is_exception) {
                ++(vlSymsp->__Vcoverage[16817]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__csr_reg__DOT__irq)))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_is_exception)))) {
                if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back_io_out_w_csr_en)))) {
                    ++(vlSymsp->__Vcoverage[16806]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__csr_reg__DOT__irq)))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_is_exception)))) {
                if (vlSelf->riscv_soc__DOT__core__DOT__write_back_io_out_w_csr_en) {
                    ++(vlSymsp->__Vcoverage[16805]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (vlSelf->riscv_soc__DOT__core__DOT__write_back_io_out_w_csr_en) {
            if ((1U & (~ ((~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__csr_reg__DOT__irq)) 
                          & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_is_exception)))))) {
                ++(vlSymsp->__Vcoverage[16792]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (vlSelf->riscv_soc__DOT__core__DOT__write_back_io_out_w_csr_en) {
            if ((1U & ((~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__csr_reg__DOT__irq)) 
                       & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_is_exception))))) {
                ++(vlSymsp->__Vcoverage[16791]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__csr_reg__DOT__irq)))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_is_exception)))) {
                if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back_io_out_w_csr_en)))) {
                    ++(vlSymsp->__Vcoverage[16778]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__csr_reg__DOT__irq)))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_is_exception)))) {
                if (vlSelf->riscv_soc__DOT__core__DOT__write_back_io_out_w_csr_en) {
                    ++(vlSymsp->__Vcoverage[16777]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (vlSelf->riscv_soc__DOT__core__DOT__write_back_io_out_w_csr_en) {
            if ((1U & (~ ((~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__csr_reg__DOT__irq)) 
                          & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_is_exception)))))) {
                ++(vlSymsp->__Vcoverage[16799]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (vlSelf->riscv_soc__DOT__core__DOT__write_back_io_out_w_csr_en) {
            if ((1U & (~ ((~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__csr_reg__DOT__irq)) 
                          & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_is_exception)))))) {
                ++(vlSymsp->__Vcoverage[16785]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (vlSelf->riscv_soc__DOT__core__DOT__write_back_io_out_w_csr_en) {
            if ((1U & ((~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__csr_reg__DOT__irq)) 
                       & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_is_exception))))) {
                ++(vlSymsp->__Vcoverage[16798]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (vlSelf->riscv_soc__DOT__core__DOT__write_back_io_out_w_csr_en) {
            if ((1U & ((~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__csr_reg__DOT__irq)) 
                       & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_is_exception))))) {
                ++(vlSymsp->__Vcoverage[16784]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__csr_reg__DOT__irq)))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_is_exception)))) {
                if (vlSelf->riscv_soc__DOT__core__DOT__write_back_io_out_w_csr_en) {
                    ++(vlSymsp->__Vcoverage[16810]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__csr_reg__DOT__irq)))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_is_exception)))) {
                if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back_io_out_w_csr_en)))) {
                    ++(vlSymsp->__Vcoverage[16811]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__csr_reg__DOT__irq)))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_is_exception)))) {
                if (vlSelf->riscv_soc__DOT__core__DOT__write_back_io_out_w_csr_en) {
                    ++(vlSymsp->__Vcoverage[16815]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__csr_reg__DOT__irq)))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_is_exception)))) {
                if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back_io_out_w_csr_en)))) {
                    ++(vlSymsp->__Vcoverage[16816]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (vlSelf->riscv_soc__DOT__core__DOT__write_back_io_out_w_csr_en) {
            if ((0xb02U == (0xfffU & (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_csr_addr)))) {
                ++(vlSymsp->__Vcoverage[16825]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (vlSelf->riscv_soc__DOT__core__DOT__write_back_io_out_w_csr_en) {
            if ((0xb00U == (0xfffU & (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_csr_addr)))) {
                ++(vlSymsp->__Vcoverage[16820]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (vlSelf->riscv_soc__DOT__core__DOT__write_back_io_out_w_csr_en) {
            if ((0xb00U != (0xfffU & (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_csr_addr)))) {
                ++(vlSymsp->__Vcoverage[16821]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (vlSelf->riscv_soc__DOT__core__DOT__write_back_io_out_w_csr_en) {
            if ((0xb02U != (0xfffU & (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_csr_addr)))) {
                ++(vlSymsp->__Vcoverage[16826]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (vlSelf->riscv_soc__DOT__core__DOT__write_back_io_out_w_csr_en) {
            if ((1U & ((~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__csr_reg__DOT__irq)) 
                       & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_is_exception))))) {
                if ((0x340U != (0xfffU & (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_csr_addr)))) {
                    ++(vlSymsp->__Vcoverage[16797]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (vlSelf->riscv_soc__DOT__core__DOT__write_back_io_out_w_csr_en) {
            if ((1U & ((~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__csr_reg__DOT__irq)) 
                       & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_is_exception))))) {
                if ((0x340U == (0xfffU & (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_csr_addr)))) {
                    ++(vlSymsp->__Vcoverage[16796]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (vlSelf->riscv_soc__DOT__core__DOT__write_back_io_out_w_csr_en) {
            if ((1U & ((~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__csr_reg__DOT__irq)) 
                       & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_is_exception))))) {
                if ((0x305U != (0xfffU & (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_csr_addr)))) {
                    ++(vlSymsp->__Vcoverage[16790]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (vlSelf->riscv_soc__DOT__core__DOT__write_back_io_out_w_csr_en) {
            if ((1U & ((~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__csr_reg__DOT__irq)) 
                       & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_is_exception))))) {
                if ((0x304U == (0xfffU & (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_csr_addr)))) {
                    ++(vlSymsp->__Vcoverage[16782]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (vlSelf->riscv_soc__DOT__core__DOT__write_back_io_out_w_csr_en) {
            if ((1U & ((~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__csr_reg__DOT__irq)) 
                       & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_is_exception))))) {
                if ((0x304U != (0xfffU & (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_csr_addr)))) {
                    ++(vlSymsp->__Vcoverage[16783]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (vlSelf->riscv_soc__DOT__core__DOT__write_back_io_out_w_csr_en) {
            if ((1U & ((~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__csr_reg__DOT__irq)) 
                       & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_is_exception))))) {
                if ((0x305U == (0xfffU & (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_csr_addr)))) {
                    ++(vlSymsp->__Vcoverage[16789]);
                }
            }
        }
    }
    ++(vlSymsp->__Vcoverage[12093]);
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[11954]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[11948]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[11942]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[11936]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[11930]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[11924]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[11918]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[11912]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[11906]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[11900]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[11894]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[11876]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[11858]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[11846]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[11840]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[11822]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[11804]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[11798]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[11780]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[11774]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[11768]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[11864]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[11666]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[11852]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[12050]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[11744]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[12044]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[11652]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[11834]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[11636]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[11674]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[11816]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[11629]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[11714]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[11756]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[11599]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[11621]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[11708]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[11644]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[11786]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[11594]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[11984]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[11726]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[11589]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[12002]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[11810]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[11828]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[11870]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[11682]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[11604]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[11584]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[12062]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[11720]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[11888]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[11614]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[11792]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[11609]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[12092]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[11659]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[11702]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[11750]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[12068]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[11689]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[11882]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[11696]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[11732]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[11738]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[11762]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[11960]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[11966]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[11972]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[11978]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[11990]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[11996]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[12008]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[12014]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[12020]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[12026]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[12032]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[12038]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[12056]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[12074]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[12080]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[12084]);
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
            if ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
                ++(vlSymsp->__Vcoverage[11664]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
            ++(vlSymsp->__Vcoverage[11665]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
            ++(vlSymsp->__Vcoverage[11657]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
            if ((1U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
                ++(vlSymsp->__Vcoverage[11656]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
            ++(vlSymsp->__Vcoverage[11650]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
            if ((1U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
                if ((2U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
                    ++(vlSymsp->__Vcoverage[11648]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
            if ((1U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
                if ((2U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
                    ++(vlSymsp->__Vcoverage[11647]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
            if ((1U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
                if ((2U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
                    ++(vlSymsp->__Vcoverage[11640]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
            if ((1U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
                if ((2U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
                    ++(vlSymsp->__Vcoverage[11639]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
            if ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
                ++(vlSymsp->__Vcoverage[11641]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
            if ((1U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
                if ((2U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
                    ++(vlSymsp->__Vcoverage[11633]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
            if ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
                ++(vlSymsp->__Vcoverage[11634]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
            if ((1U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
                if ((2U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
                    ++(vlSymsp->__Vcoverage[11625]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
            if ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
                ++(vlSymsp->__Vcoverage[11626]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
            if ((1U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
                if ((2U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
                    ++(vlSymsp->__Vcoverage[11618]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
            if ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
                ++(vlSymsp->__Vcoverage[11619]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
            if ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
                ++(vlSymsp->__Vcoverage[11687]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
            if ((1U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
                if ((2U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
                    ++(vlSymsp->__Vcoverage[11662]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
            if ((1U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
                if ((2U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
                    ++(vlSymsp->__Vcoverage[11663]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
            ++(vlSymsp->__Vcoverage[11620]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
            ++(vlSymsp->__Vcoverage[11592]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
            ++(vlSymsp->__Vcoverage[11688]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
            ++(vlSymsp->__Vcoverage[11612]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
            ++(vlSymsp->__Vcoverage[11588]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
            if ((1U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
                if ((2U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
                    ++(vlSymsp->__Vcoverage[11677]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
            if ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
                ++(vlSymsp->__Vcoverage[11655]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
            ++(vlSymsp->__Vcoverage[11607]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
            if ((1U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
                if ((2U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
                    ++(vlSymsp->__Vcoverage[11617]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
            if ((1U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
                if ((2U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
                    ++(vlSymsp->__Vcoverage[11632]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
            ++(vlSymsp->__Vcoverage[11587]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
            ++(vlSymsp->__Vcoverage[11583]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
            ++(vlSymsp->__Vcoverage[11635]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
            if ((1U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
                if ((2U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
                    ++(vlSymsp->__Vcoverage[11678]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
            ++(vlSymsp->__Vcoverage[11642]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
            if ((1U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
                if ((2U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
                    ++(vlSymsp->__Vcoverage[11624]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
            ++(vlSymsp->__Vcoverage[11598]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
            ++(vlSymsp->__Vcoverage[11628]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
            if ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
                ++(vlSymsp->__Vcoverage[11582]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
            if ((1U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
                if ((2U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
                    ++(vlSymsp->__Vcoverage[11669]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
            ++(vlSymsp->__Vcoverage[11603]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
            if ((1U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
                ++(vlSymsp->__Vcoverage[12082]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
            if ((1U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
                if ((2U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
                    ++(vlSymsp->__Vcoverage[12088]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
            ++(vlSymsp->__Vcoverage[11627]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
            ++(vlSymsp->__Vcoverage[11602]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
            ++(vlSymsp->__Vcoverage[11593]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
            if ((1U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
                if ((2U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
                    ++(vlSymsp->__Vcoverage[11580]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
            if ((1U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
                if ((2U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
                    ++(vlSymsp->__Vcoverage[11581]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
            ++(vlSymsp->__Vcoverage[11643]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
            ++(vlSymsp->__Vcoverage[11597]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
            if ((1U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
                if ((2U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
                    ++(vlSymsp->__Vcoverage[11686]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
            ++(vlSymsp->__Vcoverage[11695]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
            if ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
                ++(vlSymsp->__Vcoverage[11649]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
            if ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
                ++(vlSymsp->__Vcoverage[11694]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
            ++(vlSymsp->__Vcoverage[11651]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
            if ((1U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
                if ((2U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
                    ++(vlSymsp->__Vcoverage[11692]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
            ++(vlSymsp->__Vcoverage[11608]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
            if ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
                ++(vlSymsp->__Vcoverage[12089]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
            ++(vlSymsp->__Vcoverage[11658]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
            ++(vlSymsp->__Vcoverage[11613]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
            if ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
                ++(vlSymsp->__Vcoverage[11671]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
            if ((1U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
                if ((2U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
                    ++(vlSymsp->__Vcoverage[11670]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
            ++(vlSymsp->__Vcoverage[11672]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
            ++(vlSymsp->__Vcoverage[11673]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
            if ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
                ++(vlSymsp->__Vcoverage[11679]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
            ++(vlSymsp->__Vcoverage[11680]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
            ++(vlSymsp->__Vcoverage[11681]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
            if ((1U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
                if ((2U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
                    ++(vlSymsp->__Vcoverage[11685]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
            ++(vlSymsp->__Vcoverage[12083]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
            if ((1U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
                if ((2U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
                    ++(vlSymsp->__Vcoverage[11693]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
            ++(vlSymsp->__Vcoverage[12090]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
            if ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
                ++(vlSymsp->__Vcoverage[12081]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
            if ((1U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
                if ((2U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
                    ++(vlSymsp->__Vcoverage[12087]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
            ++(vlSymsp->__Vcoverage[12091]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1_io_DCache_valid)))) {
                ++(vlSymsp->__Vcoverage[11591]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
            if (vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1_io_DCache_valid) {
                ++(vlSymsp->__Vcoverage[11590]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
            if (vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1_io_DCache_valid) {
                ++(vlSymsp->__Vcoverage[11585]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
            if (vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1_io_DCache_valid) {
                ++(vlSymsp->__Vcoverage[11595]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
            if (vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1_io_DCache_valid) {
                ++(vlSymsp->__Vcoverage[11600]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
            if (vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1_io_DCache_valid) {
                ++(vlSymsp->__Vcoverage[11576]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1_io_DCache_valid)))) {
                ++(vlSymsp->__Vcoverage[11586]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1_io_DCache_valid)))) {
                ++(vlSymsp->__Vcoverage[11577]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1_io_DCache_valid)))) {
                ++(vlSymsp->__Vcoverage[11596]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1_io_DCache_valid)))) {
                ++(vlSymsp->__Vcoverage[11601]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
            if (vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1_io_DCache_valid) {
                ++(vlSymsp->__Vcoverage[11605]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1_io_DCache_valid)))) {
                ++(vlSymsp->__Vcoverage[11606]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
            if (vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1_io_DCache_valid) {
                ++(vlSymsp->__Vcoverage[11610]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1_io_DCache_valid)))) {
                ++(vlSymsp->__Vcoverage[11611]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
            if ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
                if (((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1) 
                     | (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2))) {
                    ++(vlSymsp->__Vcoverage[11668]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
            if ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
                if ((1U & (~ ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1) 
                              | (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2))))) {
                    ++(vlSymsp->__Vcoverage[11661]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
            if ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
                if ((1U & (~ ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1) 
                              | (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2))))) {
                    ++(vlSymsp->__Vcoverage[11654]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
            if ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
                if (((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1) 
                     | (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2))) {
                    ++(vlSymsp->__Vcoverage[11653]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
            if ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
                if (((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1) 
                     | (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2))) {
                    ++(vlSymsp->__Vcoverage[11645]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
            if ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
                if (((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1) 
                     | (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2))) {
                    ++(vlSymsp->__Vcoverage[11630]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
            if ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
                if ((1U & (~ ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1) 
                              | (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2))))) {
                    ++(vlSymsp->__Vcoverage[11667]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
            if ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
                if (((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1) 
                     | (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2))) {
                    ++(vlSymsp->__Vcoverage[11622]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
            if ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
                if (((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1) 
                     | (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2))) {
                    ++(vlSymsp->__Vcoverage[11660]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
            if ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
                if ((1U & (~ ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1) 
                              | (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2))))) {
                    ++(vlSymsp->__Vcoverage[11616]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
            if ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
                if (((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1) 
                     | (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2))) {
                    ++(vlSymsp->__Vcoverage[11615]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
            if ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
                if (((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1) 
                     | (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2))) {
                    ++(vlSymsp->__Vcoverage[11684]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
            if ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
                if ((1U & (~ ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1) 
                              | (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2))))) {
                    ++(vlSymsp->__Vcoverage[11631]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
            if ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
                if (((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1) 
                     | (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2))) {
                    ++(vlSymsp->__Vcoverage[11676]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
            if ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
                if ((1U & (~ ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1) 
                              | (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2))))) {
                    ++(vlSymsp->__Vcoverage[11623]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
            if ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
                if (((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1) 
                     | (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2))) {
                    ++(vlSymsp->__Vcoverage[11578]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
            if ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
                if ((1U & (~ ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1) 
                              | (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2))))) {
                    ++(vlSymsp->__Vcoverage[11646]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
            if ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
                if (((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1) 
                     | (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2))) {
                    ++(vlSymsp->__Vcoverage[11691]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
            if ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
                if ((1U & (~ ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1) 
                              | (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2))))) {
                    ++(vlSymsp->__Vcoverage[11690]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
            if ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
                if ((1U & (~ ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1) 
                              | (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2))))) {
                    ++(vlSymsp->__Vcoverage[11579]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
            if ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
                if ((1U & (~ ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1) 
                              | (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2))))) {
                    ++(vlSymsp->__Vcoverage[11675]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
            if ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
                if ((1U & (~ ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1) 
                              | (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2))))) {
                    ++(vlSymsp->__Vcoverage[11683]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
            if ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
                if (((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1) 
                     | (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2))) {
                    ++(vlSymsp->__Vcoverage[12086]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
            if ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
                if ((1U & (~ ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1) 
                              | (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2))))) {
                    ++(vlSymsp->__Vcoverage[12085]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
            if ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
                if ((1U & (~ ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_offset) 
                              >> 3U)))) {
                    ++(vlSymsp->__Vcoverage[11638]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
            if ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
                if ((8U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_offset))) {
                    ++(vlSymsp->__Vcoverage[11637]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ ((0x29U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
                      & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))))) {
            ++(vlSymsp->__Vcoverage[11947]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x29U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            ++(vlSymsp->__Vcoverage[11946]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ ((0x28U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
                      & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))))) {
            ++(vlSymsp->__Vcoverage[11941]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x28U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            ++(vlSymsp->__Vcoverage[11940]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ ((0x27U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
                      & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))))) {
            ++(vlSymsp->__Vcoverage[11935]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x27U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            ++(vlSymsp->__Vcoverage[11934]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ ((0x26U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
                      & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))))) {
            ++(vlSymsp->__Vcoverage[11929]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x26U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            ++(vlSymsp->__Vcoverage[11928]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ ((0x25U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
                      & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))))) {
            ++(vlSymsp->__Vcoverage[11923]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x25U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            ++(vlSymsp->__Vcoverage[11922]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ ((0x24U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
                      & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))))) {
            ++(vlSymsp->__Vcoverage[11917]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x24U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            ++(vlSymsp->__Vcoverage[11916]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ ((0x23U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
                      & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))))) {
            ++(vlSymsp->__Vcoverage[11911]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x23U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            ++(vlSymsp->__Vcoverage[11910]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ ((0x22U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
                      & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))))) {
            ++(vlSymsp->__Vcoverage[11905]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x22U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            ++(vlSymsp->__Vcoverage[11904]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ ((0x21U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
                      & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))))) {
            ++(vlSymsp->__Vcoverage[11899]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x21U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            ++(vlSymsp->__Vcoverage[11898]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ ((0x20U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
                      & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))))) {
            ++(vlSymsp->__Vcoverage[11893]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x20U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            ++(vlSymsp->__Vcoverage[11892]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ ((0x1fU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
                      & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))))) {
            ++(vlSymsp->__Vcoverage[11887]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x1fU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            ++(vlSymsp->__Vcoverage[11886]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ ((0x1eU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
                      & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))))) {
            ++(vlSymsp->__Vcoverage[11881]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x1dU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            ++(vlSymsp->__Vcoverage[11874]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x1cU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            ++(vlSymsp->__Vcoverage[11868]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ ((0x1aU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
                      & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))))) {
            ++(vlSymsp->__Vcoverage[11857]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x1aU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            ++(vlSymsp->__Vcoverage[11856]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x19U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            ++(vlSymsp->__Vcoverage[11850]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ ((0x16U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
                      & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))))) {
            ++(vlSymsp->__Vcoverage[11833]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x16U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            ++(vlSymsp->__Vcoverage[11832]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ ((0x15U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
                      & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))))) {
            ++(vlSymsp->__Vcoverage[11827]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x15U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            ++(vlSymsp->__Vcoverage[11826]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x13U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            ++(vlSymsp->__Vcoverage[11814]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x12U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            ++(vlSymsp->__Vcoverage[11808]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x11U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            ++(vlSymsp->__Vcoverage[11802]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0xfU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            ++(vlSymsp->__Vcoverage[11790]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ ((0xeU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
                      & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))))) {
            ++(vlSymsp->__Vcoverage[11785]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ ((0xdU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
                      & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))))) {
            ++(vlSymsp->__Vcoverage[11779]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ ((0xcU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
                      & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))))) {
            ++(vlSymsp->__Vcoverage[11773]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ ((0xbU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
                      & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))))) {
            ++(vlSymsp->__Vcoverage[11767]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ ((0xaU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
                      & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))))) {
            ++(vlSymsp->__Vcoverage[11761]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0xaU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            ++(vlSymsp->__Vcoverage[11760]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((9U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            ++(vlSymsp->__Vcoverage[11754]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ ((8U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
                      & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))))) {
            ++(vlSymsp->__Vcoverage[11749]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x3aU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            ++(vlSymsp->__Vcoverage[12048]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x18U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            ++(vlSymsp->__Vcoverage[11844]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ ((0x39U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
                      & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))))) {
            ++(vlSymsp->__Vcoverage[12043]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ ((0x17U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
                      & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))))) {
            ++(vlSymsp->__Vcoverage[11839]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((5U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            ++(vlSymsp->__Vcoverage[11730]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ ((0x37U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
                      & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))))) {
            ++(vlSymsp->__Vcoverage[12031]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x36U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            ++(vlSymsp->__Vcoverage[12024]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x14U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            ++(vlSymsp->__Vcoverage[11820]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x3cU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            ++(vlSymsp->__Vcoverage[12060]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((2U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            ++(vlSymsp->__Vcoverage[11712]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ ((0x12U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
                      & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))))) {
            ++(vlSymsp->__Vcoverage[11809]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ ((0x33U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
                      & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))))) {
            ++(vlSymsp->__Vcoverage[12007]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ ((0x19U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
                      & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))))) {
            ++(vlSymsp->__Vcoverage[11851]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x33U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            ++(vlSymsp->__Vcoverage[12006]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0xeU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            ++(vlSymsp->__Vcoverage[11784]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ ((0x3bU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
                      & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))))) {
            ++(vlSymsp->__Vcoverage[12055]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ ((0x2fU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
                      & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))))) {
            ++(vlSymsp->__Vcoverage[11983]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x2fU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            ++(vlSymsp->__Vcoverage[11982]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ ((0x11U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
                      & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))))) {
            ++(vlSymsp->__Vcoverage[11803]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            ++(vlSymsp->__Vcoverage[11700]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ ((0x1cU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
                      & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))))) {
            ++(vlSymsp->__Vcoverage[11869]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ ((0x14U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
                      & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))))) {
            ++(vlSymsp->__Vcoverage[11821]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x2eU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            ++(vlSymsp->__Vcoverage[11976]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ ((0x10U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
                      & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))))) {
            ++(vlSymsp->__Vcoverage[11797]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x3dU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            ++(vlSymsp->__Vcoverage[12066]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((3U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            ++(vlSymsp->__Vcoverage[11718]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0xdU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            ++(vlSymsp->__Vcoverage[11778]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ ((2U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
                      & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))))) {
            ++(vlSymsp->__Vcoverage[11713]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ ((5U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
                      & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))))) {
            ++(vlSymsp->__Vcoverage[11731]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ ((0x13U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
                      & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))))) {
            ++(vlSymsp->__Vcoverage[11815]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x2dU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            ++(vlSymsp->__Vcoverage[11970]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ ((0xfU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
                      & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))))) {
            ++(vlSymsp->__Vcoverage[11791]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0xbU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            ++(vlSymsp->__Vcoverage[11766]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x3fU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            ++(vlSymsp->__Vcoverage[12078]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0xcU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            ++(vlSymsp->__Vcoverage[11772]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ ((0x31U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
                      & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))))) {
            ++(vlSymsp->__Vcoverage[11995]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x1eU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            ++(vlSymsp->__Vcoverage[11880]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x38U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            ++(vlSymsp->__Vcoverage[12036]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x17U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            ++(vlSymsp->__Vcoverage[11838]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x10U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            ++(vlSymsp->__Vcoverage[11796]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ ((0x18U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
                      & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))))) {
            ++(vlSymsp->__Vcoverage[11845]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x32U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            ++(vlSymsp->__Vcoverage[12000]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ ((0x32U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
                      & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))))) {
            ++(vlSymsp->__Vcoverage[12001]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
                      & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))))) {
            ++(vlSymsp->__Vcoverage[11701]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ ((0x3cU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
                      & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))))) {
            ++(vlSymsp->__Vcoverage[12061]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x1bU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            ++(vlSymsp->__Vcoverage[11862]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ ((0x1bU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
                      & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))))) {
            ++(vlSymsp->__Vcoverage[11863]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ ((0x1dU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
                      & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))))) {
            ++(vlSymsp->__Vcoverage[11875]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            ++(vlSymsp->__Vcoverage[11706]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
                      & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))))) {
            ++(vlSymsp->__Vcoverage[11707]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ ((3U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
                      & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))))) {
            ++(vlSymsp->__Vcoverage[11719]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((4U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            ++(vlSymsp->__Vcoverage[11724]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ ((4U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
                      & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))))) {
            ++(vlSymsp->__Vcoverage[11725]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((6U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            ++(vlSymsp->__Vcoverage[11736]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ ((6U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
                      & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))))) {
            ++(vlSymsp->__Vcoverage[11737]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((7U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            ++(vlSymsp->__Vcoverage[11742]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ ((7U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
                      & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))))) {
            ++(vlSymsp->__Vcoverage[11743]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((8U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            ++(vlSymsp->__Vcoverage[11748]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ ((9U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
                      & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))))) {
            ++(vlSymsp->__Vcoverage[11755]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x2aU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            ++(vlSymsp->__Vcoverage[11952]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ ((0x2aU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
                      & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))))) {
            ++(vlSymsp->__Vcoverage[11953]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x2bU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            ++(vlSymsp->__Vcoverage[11958]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ ((0x2bU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
                      & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))))) {
            ++(vlSymsp->__Vcoverage[11959]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x2cU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            ++(vlSymsp->__Vcoverage[11964]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ ((0x2cU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
                      & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))))) {
            ++(vlSymsp->__Vcoverage[11965]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ ((0x2dU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
                      & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))))) {
            ++(vlSymsp->__Vcoverage[11971]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ ((0x2eU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
                      & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))))) {
            ++(vlSymsp->__Vcoverage[11977]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x30U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            ++(vlSymsp->__Vcoverage[11988]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ ((0x30U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
                      & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))))) {
            ++(vlSymsp->__Vcoverage[11989]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x31U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            ++(vlSymsp->__Vcoverage[11994]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x34U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            ++(vlSymsp->__Vcoverage[12012]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ ((0x34U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
                      & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))))) {
            ++(vlSymsp->__Vcoverage[12013]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x35U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            ++(vlSymsp->__Vcoverage[12018]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ ((0x35U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
                      & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))))) {
            ++(vlSymsp->__Vcoverage[12019]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ ((0x36U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
                      & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))))) {
            ++(vlSymsp->__Vcoverage[12025]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x37U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            ++(vlSymsp->__Vcoverage[12030]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ ((0x38U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
                      & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))))) {
            ++(vlSymsp->__Vcoverage[12037]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x39U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            ++(vlSymsp->__Vcoverage[12042]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ ((0x3aU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
                      & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))))) {
            ++(vlSymsp->__Vcoverage[12049]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x3bU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            ++(vlSymsp->__Vcoverage[12054]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ ((0x3dU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
                      & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))))) {
            ++(vlSymsp->__Vcoverage[12067]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x3eU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            ++(vlSymsp->__Vcoverage[12072]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ ((0x3eU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
                      & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))))) {
            ++(vlSymsp->__Vcoverage[12073]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ ((0x3fU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
                      & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))))) {
            ++(vlSymsp->__Vcoverage[12079]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x1fU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1) {
                ++(vlSymsp->__Vcoverage[11885]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x1dU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1) {
                ++(vlSymsp->__Vcoverage[11873]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x1aU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1) {
                ++(vlSymsp->__Vcoverage[11855]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x18U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1) {
                ++(vlSymsp->__Vcoverage[11843]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x16U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1) {
                ++(vlSymsp->__Vcoverage[11831]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x14U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1) {
                ++(vlSymsp->__Vcoverage[11819]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x13U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1) {
                ++(vlSymsp->__Vcoverage[11813]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x10U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1) {
                ++(vlSymsp->__Vcoverage[11795]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0xfU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1) {
                ++(vlSymsp->__Vcoverage[11789]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0xbU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1) {
                ++(vlSymsp->__Vcoverage[11765]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x3bU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1) {
                ++(vlSymsp->__Vcoverage[12053]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x19U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1) {
                ++(vlSymsp->__Vcoverage[11849]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x26U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1) {
                ++(vlSymsp->__Vcoverage[11927]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((6U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1) {
                ++(vlSymsp->__Vcoverage[11735]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x15U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1) {
                ++(vlSymsp->__Vcoverage[11825]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((3U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1) {
                ++(vlSymsp->__Vcoverage[11717]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x1bU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1) {
                ++(vlSymsp->__Vcoverage[11861]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x3cU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1) {
                ++(vlSymsp->__Vcoverage[12059]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x12U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1) {
                ++(vlSymsp->__Vcoverage[11807]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x29U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1) {
                ++(vlSymsp->__Vcoverage[11945]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0xeU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1) {
                ++(vlSymsp->__Vcoverage[11783]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0xdU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1) {
                ++(vlSymsp->__Vcoverage[11777]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x1cU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1) {
                ++(vlSymsp->__Vcoverage[11867]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x2dU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1) {
                ++(vlSymsp->__Vcoverage[11969]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0xaU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1) {
                ++(vlSymsp->__Vcoverage[11759]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0xcU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1) {
                ++(vlSymsp->__Vcoverage[11771]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x1eU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1) {
                ++(vlSymsp->__Vcoverage[11879]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1) {
                ++(vlSymsp->__Vcoverage[11699]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x35U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1) {
                ++(vlSymsp->__Vcoverage[12017]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x31U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1) {
                ++(vlSymsp->__Vcoverage[11993]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x37U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1) {
                ++(vlSymsp->__Vcoverage[12029]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x2eU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1) {
                ++(vlSymsp->__Vcoverage[11975]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x17U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1) {
                ++(vlSymsp->__Vcoverage[11837]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((7U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1) {
                ++(vlSymsp->__Vcoverage[11741]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x27U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1) {
                ++(vlSymsp->__Vcoverage[11933]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x11U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1) {
                ++(vlSymsp->__Vcoverage[11801]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x3eU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1) {
                ++(vlSymsp->__Vcoverage[12071]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x20U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1) {
                ++(vlSymsp->__Vcoverage[11891]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1) {
                ++(vlSymsp->__Vcoverage[11705]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x21U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1) {
                ++(vlSymsp->__Vcoverage[11897]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((2U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1) {
                ++(vlSymsp->__Vcoverage[11711]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x22U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1) {
                ++(vlSymsp->__Vcoverage[11903]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x23U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1) {
                ++(vlSymsp->__Vcoverage[11909]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((4U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1) {
                ++(vlSymsp->__Vcoverage[11723]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x24U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1) {
                ++(vlSymsp->__Vcoverage[11915]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((5U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1) {
                ++(vlSymsp->__Vcoverage[11729]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x25U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1) {
                ++(vlSymsp->__Vcoverage[11921]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((8U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1) {
                ++(vlSymsp->__Vcoverage[11747]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x28U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1) {
                ++(vlSymsp->__Vcoverage[11939]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((9U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1) {
                ++(vlSymsp->__Vcoverage[11753]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x2aU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1) {
                ++(vlSymsp->__Vcoverage[11951]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x2bU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1) {
                ++(vlSymsp->__Vcoverage[11957]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x2cU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1) {
                ++(vlSymsp->__Vcoverage[11963]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x2fU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1) {
                ++(vlSymsp->__Vcoverage[11981]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x30U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1) {
                ++(vlSymsp->__Vcoverage[11987]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x32U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1) {
                ++(vlSymsp->__Vcoverage[11999]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x33U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1) {
                ++(vlSymsp->__Vcoverage[12005]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x34U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1) {
                ++(vlSymsp->__Vcoverage[12011]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x36U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1) {
                ++(vlSymsp->__Vcoverage[12023]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x38U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1) {
                ++(vlSymsp->__Vcoverage[12035]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x39U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1) {
                ++(vlSymsp->__Vcoverage[12041]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x3aU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1) {
                ++(vlSymsp->__Vcoverage[12047]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x3dU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1) {
                ++(vlSymsp->__Vcoverage[12065]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x3fU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1) {
                ++(vlSymsp->__Vcoverage[12077]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x1fU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1)))) {
                if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2)))) {
                    ++(vlSymsp->__Vcoverage[11884]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x1fU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1)))) {
                if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2) {
                    ++(vlSymsp->__Vcoverage[11883]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x1eU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1)))) {
                if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2)))) {
                    ++(vlSymsp->__Vcoverage[11878]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x1eU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1)))) {
                if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2) {
                    ++(vlSymsp->__Vcoverage[11877]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x1dU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1)))) {
                if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2)))) {
                    ++(vlSymsp->__Vcoverage[11872]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x1dU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1)))) {
                if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2) {
                    ++(vlSymsp->__Vcoverage[11871]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x1cU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1)))) {
                if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2)))) {
                    ++(vlSymsp->__Vcoverage[11866]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x1bU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1)))) {
                if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2) {
                    ++(vlSymsp->__Vcoverage[11859]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x1aU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1)))) {
                if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2) {
                    ++(vlSymsp->__Vcoverage[11853]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x19U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1)))) {
                if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2)))) {
                    ++(vlSymsp->__Vcoverage[11848]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x18U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1)))) {
                if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2) {
                    ++(vlSymsp->__Vcoverage[11841]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x17U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1)))) {
                if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2) {
                    ++(vlSymsp->__Vcoverage[11835]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x16U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1)))) {
                if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2)))) {
                    ++(vlSymsp->__Vcoverage[11830]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x15U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1)))) {
                if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2)))) {
                    ++(vlSymsp->__Vcoverage[11824]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x15U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1)))) {
                if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2) {
                    ++(vlSymsp->__Vcoverage[11823]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x14U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1)))) {
                if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2)))) {
                    ++(vlSymsp->__Vcoverage[11818]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x14U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1)))) {
                if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2) {
                    ++(vlSymsp->__Vcoverage[11817]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x13U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1)))) {
                if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2)))) {
                    ++(vlSymsp->__Vcoverage[11812]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x12U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1)))) {
                if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2)))) {
                    ++(vlSymsp->__Vcoverage[11806]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x12U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1)))) {
                if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2) {
                    ++(vlSymsp->__Vcoverage[11805]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x11U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1)))) {
                if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2)))) {
                    ++(vlSymsp->__Vcoverage[11800]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x10U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1)))) {
                if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2) {
                    ++(vlSymsp->__Vcoverage[11793]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0xfU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1)))) {
                if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2)))) {
                    ++(vlSymsp->__Vcoverage[11788]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0xeU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1)))) {
                if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2)))) {
                    ++(vlSymsp->__Vcoverage[11782]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0xcU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1)))) {
                if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2)))) {
                    ++(vlSymsp->__Vcoverage[11770]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0xbU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1)))) {
                if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2)))) {
                    ++(vlSymsp->__Vcoverage[11764]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0xbU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1)))) {
                if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2) {
                    ++(vlSymsp->__Vcoverage[11763]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0xaU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1)))) {
                if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2)))) {
                    ++(vlSymsp->__Vcoverage[11758]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x3cU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1)))) {
                if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2) {
                    ++(vlSymsp->__Vcoverage[12057]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x19U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1)))) {
                if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2) {
                    ++(vlSymsp->__Vcoverage[11847]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x3aU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1)))) {
                if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2) {
                    ++(vlSymsp->__Vcoverage[12045]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x18U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1)))) {
                if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2)))) {
                    ++(vlSymsp->__Vcoverage[11842]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x27U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1)))) {
                if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2)))) {
                    ++(vlSymsp->__Vcoverage[11932]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x27U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1)))) {
                if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2) {
                    ++(vlSymsp->__Vcoverage[11931]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((7U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1)))) {
                if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2)))) {
                    ++(vlSymsp->__Vcoverage[11740]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x17U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1)))) {
                if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2)))) {
                    ++(vlSymsp->__Vcoverage[11836]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x26U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1)))) {
                if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2)))) {
                    ++(vlSymsp->__Vcoverage[11926]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((6U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1)))) {
                if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2) {
                    ++(vlSymsp->__Vcoverage[11733]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x25U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1)))) {
                if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2) {
                    ++(vlSymsp->__Vcoverage[11919]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((5U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1)))) {
                if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2)))) {
                    ++(vlSymsp->__Vcoverage[11728]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x37U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1)))) {
                if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2) {
                    ++(vlSymsp->__Vcoverage[12027]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x36U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1)))) {
                if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2)))) {
                    ++(vlSymsp->__Vcoverage[12022]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x23U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1)))) {
                if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2)))) {
                    ++(vlSymsp->__Vcoverage[11908]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x35U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1)))) {
                if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2)))) {
                    ++(vlSymsp->__Vcoverage[12016]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x22U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1)))) {
                if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2)))) {
                    ++(vlSymsp->__Vcoverage[11902]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x34U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1)))) {
                if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2)))) {
                    ++(vlSymsp->__Vcoverage[12010]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x34U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1)))) {
                if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2) {
                    ++(vlSymsp->__Vcoverage[12009]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x21U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1)))) {
                if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2) {
                    ++(vlSymsp->__Vcoverage[11895]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1)))) {
                if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2)))) {
                    ++(vlSymsp->__Vcoverage[11704]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x33U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1)))) {
                if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2)))) {
                    ++(vlSymsp->__Vcoverage[12004]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((9U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1)))) {
                if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2) {
                    ++(vlSymsp->__Vcoverage[11751]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x2cU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1)))) {
                if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2)))) {
                    ++(vlSymsp->__Vcoverage[11962]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x29U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1)))) {
                if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2) {
                    ++(vlSymsp->__Vcoverage[11943]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((9U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1)))) {
                if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2)))) {
                    ++(vlSymsp->__Vcoverage[11752]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0xeU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1)))) {
                if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2) {
                    ++(vlSymsp->__Vcoverage[11781]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x2fU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1)))) {
                if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2)))) {
                    ++(vlSymsp->__Vcoverage[11980]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x24U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1)))) {
                if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2)))) {
                    ++(vlSymsp->__Vcoverage[11914]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x2fU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1)))) {
                if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2) {
                    ++(vlSymsp->__Vcoverage[11979]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x20U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1)))) {
                if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2)))) {
                    ++(vlSymsp->__Vcoverage[11890]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0xdU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1)))) {
                if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2)))) {
                    ++(vlSymsp->__Vcoverage[11776]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0xdU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1)))) {
                if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2) {
                    ++(vlSymsp->__Vcoverage[11775]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x10U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1)))) {
                if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2)))) {
                    ++(vlSymsp->__Vcoverage[11794]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x33U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1)))) {
                if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2) {
                    ++(vlSymsp->__Vcoverage[12003]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x36U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1)))) {
                if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2) {
                    ++(vlSymsp->__Vcoverage[12021]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x3dU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1)))) {
                if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2) {
                    ++(vlSymsp->__Vcoverage[12063]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x13U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1)))) {
                if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2) {
                    ++(vlSymsp->__Vcoverage[11811]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0xfU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1)))) {
                if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2) {
                    ++(vlSymsp->__Vcoverage[11787]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x29U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1)))) {
                if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2)))) {
                    ++(vlSymsp->__Vcoverage[11944]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x1aU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1)))) {
                if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2)))) {
                    ++(vlSymsp->__Vcoverage[11854]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x16U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1)))) {
                if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2) {
                    ++(vlSymsp->__Vcoverage[11829]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x38U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1)))) {
                if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2)))) {
                    ++(vlSymsp->__Vcoverage[12034]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0xcU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1)))) {
                if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2) {
                    ++(vlSymsp->__Vcoverage[11769]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x25U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1)))) {
                if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2)))) {
                    ++(vlSymsp->__Vcoverage[11920]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x30U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1)))) {
                if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2) {
                    ++(vlSymsp->__Vcoverage[11985]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x3fU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1)))) {
                if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2)))) {
                    ++(vlSymsp->__Vcoverage[12076]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x30U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1)))) {
                if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2)))) {
                    ++(vlSymsp->__Vcoverage[11986]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x31U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1)))) {
                if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2)))) {
                    ++(vlSymsp->__Vcoverage[11992]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((7U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1)))) {
                if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2) {
                    ++(vlSymsp->__Vcoverage[11739]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x20U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1)))) {
                if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2) {
                    ++(vlSymsp->__Vcoverage[11889]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1)))) {
                if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2)))) {
                    ++(vlSymsp->__Vcoverage[11698]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x11U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1)))) {
                if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2) {
                    ++(vlSymsp->__Vcoverage[11799]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x1bU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1)))) {
                if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2)))) {
                    ++(vlSymsp->__Vcoverage[11860]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x3dU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1)))) {
                if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2)))) {
                    ++(vlSymsp->__Vcoverage[12064]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x1cU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1)))) {
                if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2) {
                    ++(vlSymsp->__Vcoverage[11865]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x3eU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1)))) {
                if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2)))) {
                    ++(vlSymsp->__Vcoverage[12070]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x3fU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1)))) {
                if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2) {
                    ++(vlSymsp->__Vcoverage[12075]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1)))) {
                if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2) {
                    ++(vlSymsp->__Vcoverage[11697]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1)))) {
                if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2) {
                    ++(vlSymsp->__Vcoverage[11703]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x21U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1)))) {
                if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2)))) {
                    ++(vlSymsp->__Vcoverage[11896]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((2U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1)))) {
                if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2) {
                    ++(vlSymsp->__Vcoverage[11709]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x22U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1)))) {
                if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2) {
                    ++(vlSymsp->__Vcoverage[11901]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((2U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1)))) {
                if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2)))) {
                    ++(vlSymsp->__Vcoverage[11710]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((3U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1)))) {
                if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2) {
                    ++(vlSymsp->__Vcoverage[11715]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x23U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1)))) {
                if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2) {
                    ++(vlSymsp->__Vcoverage[11907]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((3U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1)))) {
                if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2)))) {
                    ++(vlSymsp->__Vcoverage[11716]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((4U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1)))) {
                if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2) {
                    ++(vlSymsp->__Vcoverage[11721]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x24U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1)))) {
                if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2) {
                    ++(vlSymsp->__Vcoverage[11913]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((4U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1)))) {
                if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2)))) {
                    ++(vlSymsp->__Vcoverage[11722]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((5U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1)))) {
                if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2) {
                    ++(vlSymsp->__Vcoverage[11727]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x26U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1)))) {
                if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2) {
                    ++(vlSymsp->__Vcoverage[11925]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((6U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1)))) {
                if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2)))) {
                    ++(vlSymsp->__Vcoverage[11734]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((8U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1)))) {
                if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2) {
                    ++(vlSymsp->__Vcoverage[11745]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x28U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1)))) {
                if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2) {
                    ++(vlSymsp->__Vcoverage[11937]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((8U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1)))) {
                if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2)))) {
                    ++(vlSymsp->__Vcoverage[11746]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x28U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1)))) {
                if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2)))) {
                    ++(vlSymsp->__Vcoverage[11938]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0xaU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1)))) {
                if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2) {
                    ++(vlSymsp->__Vcoverage[11757]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x2aU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1)))) {
                if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2) {
                    ++(vlSymsp->__Vcoverage[11949]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x2aU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1)))) {
                if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2)))) {
                    ++(vlSymsp->__Vcoverage[11950]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x2bU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1)))) {
                if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2) {
                    ++(vlSymsp->__Vcoverage[11955]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x2bU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1)))) {
                if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2)))) {
                    ++(vlSymsp->__Vcoverage[11956]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x2cU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1)))) {
                if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2) {
                    ++(vlSymsp->__Vcoverage[11961]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x2dU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1)))) {
                if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2) {
                    ++(vlSymsp->__Vcoverage[11967]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x2dU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1)))) {
                if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2)))) {
                    ++(vlSymsp->__Vcoverage[11968]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x2eU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1)))) {
                if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2) {
                    ++(vlSymsp->__Vcoverage[11973]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x2eU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1)))) {
                if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2)))) {
                    ++(vlSymsp->__Vcoverage[11974]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x31U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1)))) {
                if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2) {
                    ++(vlSymsp->__Vcoverage[11991]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x32U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1)))) {
                if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2) {
                    ++(vlSymsp->__Vcoverage[11997]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x32U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1)))) {
                if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2)))) {
                    ++(vlSymsp->__Vcoverage[11998]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x35U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1)))) {
                if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2) {
                    ++(vlSymsp->__Vcoverage[12015]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x37U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1)))) {
                if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2)))) {
                    ++(vlSymsp->__Vcoverage[12028]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x38U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1)))) {
                if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2) {
                    ++(vlSymsp->__Vcoverage[12033]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x39U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1)))) {
                if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2) {
                    ++(vlSymsp->__Vcoverage[12039]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x39U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1)))) {
                if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2)))) {
                    ++(vlSymsp->__Vcoverage[12040]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x3aU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1)))) {
                if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2)))) {
                    ++(vlSymsp->__Vcoverage[12046]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x3bU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1)))) {
                if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2) {
                    ++(vlSymsp->__Vcoverage[12051]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x3bU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1)))) {
                if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2)))) {
                    ++(vlSymsp->__Vcoverage[12052]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x3cU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1)))) {
                if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2)))) {
                    ++(vlSymsp->__Vcoverage[12058]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x3eU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1)))) {
                if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2) {
                    ++(vlSymsp->__Vcoverage[12069]);
                }
            }
        }
    }
    vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_is_w 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->riscv_soc__DOT__axi_ram__DOT___GEN_33));
    vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_wbus_finish 
        = ((IData)(vlSelf->reset) | (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___GEN_464));
    vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_rbus_finish 
        = ((IData)(vlSelf->reset) | (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___GEN_460));
    vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_rbus_finish 
        = ((IData)(vlSelf->reset) | (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_460));
    vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_wbus_finish 
        = ((IData)(vlSelf->reset) | (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_464));
    vlSelf->__Vdly__riscv_soc__DOT__core__DOT__fetch__DOT__need_update 
        = ((~ (IData)(vlSelf->reset)) & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT___T)
                                          ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT___GEN_5)
                                          : ((~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch_io_in_flush)) 
                                             & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__stall) 
                                                & (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__need_update)))));
    vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_w_ready 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->riscv_soc__DOT__axi_ram__DOT___GEN_35));
    vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__reg_ar_ok 
        = ((~ (IData)(vlSelf->reset)) & ((~ (IData)(vlSelf->riscv_soc__DOT__axi_ram_io_ram_bus_r_bits_rlast)) 
                                         & (((IData)(vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_ar_ready) 
                                             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_AXI_Bus_ar_valid)) 
                                            | (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__reg_ar_ok))));
    vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__reg_aw_ok 
        = ((~ (IData)(vlSelf->reset)) & ((~ (IData)(vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_b_valid)) 
                                         & (((IData)(vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_aw_ready) 
                                             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_AXI_Bus_aw_valid)) 
                                            | (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__reg_aw_ok))));
    vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_w_waddr 
        = (((QData)((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___GEN_471[1U])) 
            << 0x20U) | (QData)((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___GEN_471[0U])));
    vlSelf->riscv_soc__DOT__core__DOT__clint_de__DOT__reg_mtime 
        = ((IData)(vlSelf->reset) ? 0ULL : vlSelf->riscv_soc__DOT__core__DOT__clint_de__DOT___reg_mtime_T_1);
    if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___sram1_data_io_WEN_T_1) {
        VL_EXTEND_WQ(128,56, __Vtemp2117, vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___sram1_tag_io_D_T_1);
        vlSelf->__Vdlyvval__riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_tag__DOT__sram__DOT__ram__v0[0U] 
            = __Vtemp2117[0U];
        vlSelf->__Vdlyvval__riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_tag__DOT__sram__DOT__ram__v0[1U] 
            = __Vtemp2117[1U];
        vlSelf->__Vdlyvval__riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_tag__DOT__sram__DOT__ram__v0[2U] 
            = __Vtemp2117[2U];
        vlSelf->__Vdlyvval__riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_tag__DOT__sram__DOT__ram__v0[3U] 
            = __Vtemp2117[3U];
        vlSelf->__Vdlyvset__riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_tag__DOT__sram__DOT__ram__v0 = 1U;
        vlSelf->__Vdlyvdim0__riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_tag__DOT__sram__DOT__ram__v0 
            = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_tag_io_A;
    }
    if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___sram2_data_io_WEN_T_1) {
        VL_EXTEND_WQ(128,56, __Vtemp2118, vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___sram1_tag_io_D_T_1);
        vlSelf->__Vdlyvval__riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_tag__DOT__sram__DOT__ram__v0[0U] 
            = __Vtemp2118[0U];
        vlSelf->__Vdlyvval__riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_tag__DOT__sram__DOT__ram__v0[1U] 
            = __Vtemp2118[1U];
        vlSelf->__Vdlyvval__riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_tag__DOT__sram__DOT__ram__v0[2U] 
            = __Vtemp2118[2U];
        vlSelf->__Vdlyvval__riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_tag__DOT__sram__DOT__ram__v0[3U] 
            = __Vtemp2118[3U];
        vlSelf->__Vdlyvset__riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_tag__DOT__sram__DOT__ram__v0 = 1U;
        vlSelf->__Vdlyvdim0__riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_tag__DOT__sram__DOT__ram__v0 
            = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_tag_io_A;
    }
    if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___sram1_data_io_WEN_T_1) {
        VL_EXTEND_WQ(128,56, __Vtemp2119, vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___sram1_tag_io_D_T_1);
        vlSelf->__Vdlyvval__riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_tag__DOT__sram__DOT__ram__v0[0U] 
            = __Vtemp2119[0U];
        vlSelf->__Vdlyvval__riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_tag__DOT__sram__DOT__ram__v0[1U] 
            = __Vtemp2119[1U];
        vlSelf->__Vdlyvval__riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_tag__DOT__sram__DOT__ram__v0[2U] 
            = __Vtemp2119[2U];
        vlSelf->__Vdlyvval__riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_tag__DOT__sram__DOT__ram__v0[3U] 
            = __Vtemp2119[3U];
        vlSelf->__Vdlyvset__riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_tag__DOT__sram__DOT__ram__v0 = 1U;
        vlSelf->__Vdlyvdim0__riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_tag__DOT__sram__DOT__ram__v0 
            = vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_tag_io_A;
    }
    if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___sram2_data_io_WEN_T_1) {
        VL_EXTEND_WQ(128,56, __Vtemp2120, vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___sram1_tag_io_D_T_1);
        vlSelf->__Vdlyvval__riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_tag__DOT__sram__DOT__ram__v0[0U] 
            = __Vtemp2120[0U];
        vlSelf->__Vdlyvval__riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_tag__DOT__sram__DOT__ram__v0[1U] 
            = __Vtemp2120[1U];
        vlSelf->__Vdlyvval__riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_tag__DOT__sram__DOT__ram__v0[2U] 
            = __Vtemp2120[2U];
        vlSelf->__Vdlyvval__riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_tag__DOT__sram__DOT__ram__v0[3U] 
            = __Vtemp2120[3U];
        vlSelf->__Vdlyvset__riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_tag__DOT__sram__DOT__ram__v0 = 1U;
        vlSelf->__Vdlyvdim0__riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_tag__DOT__sram__DOT__ram__v0 
            = vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_tag_io_A;
    }
    vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_w_waddr 
        = (((QData)((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_471[1U])) 
            << 0x20U) | (QData)((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_471[0U])));
    vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_r_raddr 
        = (((QData)((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___GEN_470[1U])) 
            << 0x20U) | (QData)((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___GEN_470[0U])));
    vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_r_raddr 
        = (((QData)((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_470[1U])) 
            << 0x20U) | (QData)((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_470[0U])));
    if ((1U & ((IData)(vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata) 
               ^ (IData)(vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_r_bits_rdata)))) {
        ++(vlSymsp->__Vcoverage[2686]);
        vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_r_bits_rdata 
            = ((0xfffffffffffffffeULL & vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_r_bits_rdata) 
               | (IData)((IData)((1U & (IData)(vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata)))));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata 
                        >> 1U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_r_bits_rdata 
                                           >> 1U))))) {
        ++(vlSymsp->__Vcoverage[2687]);
        vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_r_bits_rdata 
            = ((0xfffffffffffffffdULL & vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_r_bits_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata 
                                                 >> 1U))))) 
                  << 1U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata 
                        >> 2U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_r_bits_rdata 
                                           >> 2U))))) {
        ++(vlSymsp->__Vcoverage[2688]);
        vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_r_bits_rdata 
            = ((0xfffffffffffffffbULL & vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_r_bits_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata 
                                                 >> 2U))))) 
                  << 2U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata 
                        >> 3U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_r_bits_rdata 
                                           >> 3U))))) {
        ++(vlSymsp->__Vcoverage[2689]);
        vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_r_bits_rdata 
            = ((0xfffffffffffffff7ULL & vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_r_bits_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata 
                                                 >> 3U))))) 
                  << 3U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata 
                        >> 4U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_r_bits_rdata 
                                           >> 4U))))) {
        ++(vlSymsp->__Vcoverage[2690]);
        vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_r_bits_rdata 
            = ((0xffffffffffffffefULL & vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_r_bits_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata 
                                                 >> 4U))))) 
                  << 4U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata 
                        >> 5U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_r_bits_rdata 
                                           >> 5U))))) {
        ++(vlSymsp->__Vcoverage[2691]);
        vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_r_bits_rdata 
            = ((0xffffffffffffffdfULL & vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_r_bits_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata 
                                                 >> 5U))))) 
                  << 5U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata 
                        >> 6U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_r_bits_rdata 
                                           >> 6U))))) {
        ++(vlSymsp->__Vcoverage[2692]);
        vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_r_bits_rdata 
            = ((0xffffffffffffffbfULL & vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_r_bits_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata 
                                                 >> 6U))))) 
                  << 6U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata 
                        >> 7U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_r_bits_rdata 
                                           >> 7U))))) {
        ++(vlSymsp->__Vcoverage[2693]);
        vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_r_bits_rdata 
            = ((0xffffffffffffff7fULL & vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_r_bits_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata 
                                                 >> 7U))))) 
                  << 7U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata 
                        >> 8U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_r_bits_rdata 
                                           >> 8U))))) {
        ++(vlSymsp->__Vcoverage[2694]);
        vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_r_bits_rdata 
            = ((0xfffffffffffffeffULL & vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_r_bits_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata 
                                                 >> 8U))))) 
                  << 8U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata 
                        >> 9U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_r_bits_rdata 
                                           >> 9U))))) {
        ++(vlSymsp->__Vcoverage[2695]);
        vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_r_bits_rdata 
            = ((0xfffffffffffffdffULL & vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_r_bits_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata 
                                                 >> 9U))))) 
                  << 9U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata 
                        >> 0xaU)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_r_bits_rdata 
                                             >> 0xaU))))) {
        ++(vlSymsp->__Vcoverage[2696]);
        vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_r_bits_rdata 
            = ((0xfffffffffffffbffULL & vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_r_bits_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata 
                                                 >> 0xaU))))) 
                  << 0xaU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata 
                        >> 0xbU)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_r_bits_rdata 
                                             >> 0xbU))))) {
        ++(vlSymsp->__Vcoverage[2697]);
        vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_r_bits_rdata 
            = ((0xfffffffffffff7ffULL & vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_r_bits_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata 
                                                 >> 0xbU))))) 
                  << 0xbU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata 
                        >> 0xcU)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_r_bits_rdata 
                                             >> 0xcU))))) {
        ++(vlSymsp->__Vcoverage[2698]);
        vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_r_bits_rdata 
            = ((0xffffffffffffefffULL & vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_r_bits_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata 
                                                 >> 0xcU))))) 
                  << 0xcU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata 
                        >> 0xdU)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_r_bits_rdata 
                                             >> 0xdU))))) {
        ++(vlSymsp->__Vcoverage[2699]);
        vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_r_bits_rdata 
            = ((0xffffffffffffdfffULL & vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_r_bits_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata 
                                                 >> 0xdU))))) 
                  << 0xdU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata 
                        >> 0xeU)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_r_bits_rdata 
                                             >> 0xeU))))) {
        ++(vlSymsp->__Vcoverage[2700]);
        vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_r_bits_rdata 
            = ((0xffffffffffffbfffULL & vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_r_bits_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata 
                                                 >> 0xeU))))) 
                  << 0xeU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata 
                        >> 0xfU)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_r_bits_rdata 
                                             >> 0xfU))))) {
        ++(vlSymsp->__Vcoverage[2701]);
        vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_r_bits_rdata 
            = ((0xffffffffffff7fffULL & vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_r_bits_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata 
                                                 >> 0xfU))))) 
                  << 0xfU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata 
                        >> 0x10U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_r_bits_rdata 
                                              >> 0x10U))))) {
        ++(vlSymsp->__Vcoverage[2702]);
        vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_r_bits_rdata 
            = ((0xfffffffffffeffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_r_bits_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata 
                                                 >> 0x10U))))) 
                  << 0x10U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata 
                        >> 0x11U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_r_bits_rdata 
                                              >> 0x11U))))) {
        ++(vlSymsp->__Vcoverage[2703]);
        vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_r_bits_rdata 
            = ((0xfffffffffffdffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_r_bits_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata 
                                                 >> 0x11U))))) 
                  << 0x11U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata 
                        >> 0x12U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_r_bits_rdata 
                                              >> 0x12U))))) {
        ++(vlSymsp->__Vcoverage[2704]);
        vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_r_bits_rdata 
            = ((0xfffffffffffbffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_r_bits_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata 
                                                 >> 0x12U))))) 
                  << 0x12U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata 
                        >> 0x13U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_r_bits_rdata 
                                              >> 0x13U))))) {
        ++(vlSymsp->__Vcoverage[2705]);
        vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_r_bits_rdata 
            = ((0xfffffffffff7ffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_r_bits_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata 
                                                 >> 0x13U))))) 
                  << 0x13U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata 
                        >> 0x14U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_r_bits_rdata 
                                              >> 0x14U))))) {
        ++(vlSymsp->__Vcoverage[2706]);
        vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_r_bits_rdata 
            = ((0xffffffffffefffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_r_bits_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata 
                                                 >> 0x14U))))) 
                  << 0x14U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata 
                        >> 0x15U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_r_bits_rdata 
                                              >> 0x15U))))) {
        ++(vlSymsp->__Vcoverage[2707]);
        vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_r_bits_rdata 
            = ((0xffffffffffdfffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_r_bits_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata 
                                                 >> 0x15U))))) 
                  << 0x15U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata 
                        >> 0x16U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_r_bits_rdata 
                                              >> 0x16U))))) {
        ++(vlSymsp->__Vcoverage[2708]);
        vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_r_bits_rdata 
            = ((0xffffffffffbfffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_r_bits_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata 
                                                 >> 0x16U))))) 
                  << 0x16U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata 
                        >> 0x17U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_r_bits_rdata 
                                              >> 0x17U))))) {
        ++(vlSymsp->__Vcoverage[2709]);
        vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_r_bits_rdata 
            = ((0xffffffffff7fffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_r_bits_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata 
                                                 >> 0x17U))))) 
                  << 0x17U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata 
                        >> 0x18U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_r_bits_rdata 
                                              >> 0x18U))))) {
        ++(vlSymsp->__Vcoverage[2710]);
        vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_r_bits_rdata 
            = ((0xfffffffffeffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_r_bits_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata 
                                                 >> 0x18U))))) 
                  << 0x18U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata 
                        >> 0x19U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_r_bits_rdata 
                                              >> 0x19U))))) {
        ++(vlSymsp->__Vcoverage[2711]);
        vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_r_bits_rdata 
            = ((0xfffffffffdffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_r_bits_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata 
                                                 >> 0x19U))))) 
                  << 0x19U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata 
                        >> 0x1aU)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_r_bits_rdata 
                                              >> 0x1aU))))) {
        ++(vlSymsp->__Vcoverage[2712]);
        vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_r_bits_rdata 
            = ((0xfffffffffbffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_r_bits_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata 
                                                 >> 0x1aU))))) 
                  << 0x1aU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata 
                        >> 0x1bU)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_r_bits_rdata 
                                              >> 0x1bU))))) {
        ++(vlSymsp->__Vcoverage[2713]);
        vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_r_bits_rdata 
            = ((0xfffffffff7ffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_r_bits_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata 
                                                 >> 0x1bU))))) 
                  << 0x1bU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata 
                        >> 0x1cU)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_r_bits_rdata 
                                              >> 0x1cU))))) {
        ++(vlSymsp->__Vcoverage[2714]);
        vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_r_bits_rdata 
            = ((0xffffffffefffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_r_bits_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata 
                                                 >> 0x1cU))))) 
                  << 0x1cU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata 
                        >> 0x1dU)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_r_bits_rdata 
                                              >> 0x1dU))))) {
        ++(vlSymsp->__Vcoverage[2715]);
        vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_r_bits_rdata 
            = ((0xffffffffdfffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_r_bits_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata 
                                                 >> 0x1dU))))) 
                  << 0x1dU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata 
                        >> 0x1eU)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_r_bits_rdata 
                                              >> 0x1eU))))) {
        ++(vlSymsp->__Vcoverage[2716]);
        vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_r_bits_rdata 
            = ((0xffffffffbfffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_r_bits_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata 
                                                 >> 0x1eU))))) 
                  << 0x1eU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata 
                        >> 0x1fU)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_r_bits_rdata 
                                              >> 0x1fU))))) {
        ++(vlSymsp->__Vcoverage[2717]);
        vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_r_bits_rdata 
            = ((0xffffffff7fffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_r_bits_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata 
                                                 >> 0x1fU))))) 
                  << 0x1fU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata 
                        >> 0x20U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_r_bits_rdata 
                                              >> 0x20U))))) {
        ++(vlSymsp->__Vcoverage[2718]);
        vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_r_bits_rdata 
            = ((0xfffffffeffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_r_bits_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata 
                                                 >> 0x20U))))) 
                  << 0x20U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata 
                        >> 0x21U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_r_bits_rdata 
                                              >> 0x21U))))) {
        ++(vlSymsp->__Vcoverage[2719]);
        vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_r_bits_rdata 
            = ((0xfffffffdffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_r_bits_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata 
                                                 >> 0x21U))))) 
                  << 0x21U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata 
                        >> 0x22U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_r_bits_rdata 
                                              >> 0x22U))))) {
        ++(vlSymsp->__Vcoverage[2720]);
        vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_r_bits_rdata 
            = ((0xfffffffbffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_r_bits_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata 
                                                 >> 0x22U))))) 
                  << 0x22U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata 
                        >> 0x23U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_r_bits_rdata 
                                              >> 0x23U))))) {
        ++(vlSymsp->__Vcoverage[2721]);
        vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_r_bits_rdata 
            = ((0xfffffff7ffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_r_bits_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata 
                                                 >> 0x23U))))) 
                  << 0x23U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata 
                        >> 0x24U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_r_bits_rdata 
                                              >> 0x24U))))) {
        ++(vlSymsp->__Vcoverage[2722]);
        vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_r_bits_rdata 
            = ((0xffffffefffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_r_bits_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata 
                                                 >> 0x24U))))) 
                  << 0x24U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata 
                        >> 0x25U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_r_bits_rdata 
                                              >> 0x25U))))) {
        ++(vlSymsp->__Vcoverage[2723]);
        vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_r_bits_rdata 
            = ((0xffffffdfffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_r_bits_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata 
                                                 >> 0x25U))))) 
                  << 0x25U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata 
                        >> 0x26U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_r_bits_rdata 
                                              >> 0x26U))))) {
        ++(vlSymsp->__Vcoverage[2724]);
        vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_r_bits_rdata 
            = ((0xffffffbfffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_r_bits_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata 
                                                 >> 0x26U))))) 
                  << 0x26U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata 
                        >> 0x27U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_r_bits_rdata 
                                              >> 0x27U))))) {
        ++(vlSymsp->__Vcoverage[2725]);
        vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_r_bits_rdata 
            = ((0xffffff7fffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_r_bits_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata 
                                                 >> 0x27U))))) 
                  << 0x27U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata 
                        >> 0x28U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_r_bits_rdata 
                                              >> 0x28U))))) {
        ++(vlSymsp->__Vcoverage[2726]);
        vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_r_bits_rdata 
            = ((0xfffffeffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_r_bits_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata 
                                                 >> 0x28U))))) 
                  << 0x28U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata 
                        >> 0x29U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_r_bits_rdata 
                                              >> 0x29U))))) {
        ++(vlSymsp->__Vcoverage[2727]);
        vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_r_bits_rdata 
            = ((0xfffffdffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_r_bits_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata 
                                                 >> 0x29U))))) 
                  << 0x29U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata 
                        >> 0x2aU)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_r_bits_rdata 
                                              >> 0x2aU))))) {
        ++(vlSymsp->__Vcoverage[2728]);
        vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_r_bits_rdata 
            = ((0xfffffbffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_r_bits_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata 
                                                 >> 0x2aU))))) 
                  << 0x2aU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata 
                        >> 0x2bU)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_r_bits_rdata 
                                              >> 0x2bU))))) {
        ++(vlSymsp->__Vcoverage[2729]);
        vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_r_bits_rdata 
            = ((0xfffff7ffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_r_bits_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata 
                                                 >> 0x2bU))))) 
                  << 0x2bU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata 
                        >> 0x2cU)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_r_bits_rdata 
                                              >> 0x2cU))))) {
        ++(vlSymsp->__Vcoverage[2730]);
        vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_r_bits_rdata 
            = ((0xffffefffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_r_bits_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata 
                                                 >> 0x2cU))))) 
                  << 0x2cU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata 
                        >> 0x2dU)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_r_bits_rdata 
                                              >> 0x2dU))))) {
        ++(vlSymsp->__Vcoverage[2731]);
        vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_r_bits_rdata 
            = ((0xffffdfffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_r_bits_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata 
                                                 >> 0x2dU))))) 
                  << 0x2dU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata 
                        >> 0x2eU)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_r_bits_rdata 
                                              >> 0x2eU))))) {
        ++(vlSymsp->__Vcoverage[2732]);
        vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_r_bits_rdata 
            = ((0xffffbfffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_r_bits_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata 
                                                 >> 0x2eU))))) 
                  << 0x2eU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata 
                        >> 0x2fU)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_r_bits_rdata 
                                              >> 0x2fU))))) {
        ++(vlSymsp->__Vcoverage[2733]);
        vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_r_bits_rdata 
            = ((0xffff7fffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_r_bits_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata 
                                                 >> 0x2fU))))) 
                  << 0x2fU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata 
                        >> 0x30U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_r_bits_rdata 
                                              >> 0x30U))))) {
        ++(vlSymsp->__Vcoverage[2734]);
        vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_r_bits_rdata 
            = ((0xfffeffffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_r_bits_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata 
                                                 >> 0x30U))))) 
                  << 0x30U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata 
                        >> 0x31U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_r_bits_rdata 
                                              >> 0x31U))))) {
        ++(vlSymsp->__Vcoverage[2735]);
        vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_r_bits_rdata 
            = ((0xfffdffffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_r_bits_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata 
                                                 >> 0x31U))))) 
                  << 0x31U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata 
                        >> 0x32U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_r_bits_rdata 
                                              >> 0x32U))))) {
        ++(vlSymsp->__Vcoverage[2736]);
        vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_r_bits_rdata 
            = ((0xfffbffffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_r_bits_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata 
                                                 >> 0x32U))))) 
                  << 0x32U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata 
                        >> 0x33U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_r_bits_rdata 
                                              >> 0x33U))))) {
        ++(vlSymsp->__Vcoverage[2737]);
        vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_r_bits_rdata 
            = ((0xfff7ffffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_r_bits_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata 
                                                 >> 0x33U))))) 
                  << 0x33U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata 
                        >> 0x34U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_r_bits_rdata 
                                              >> 0x34U))))) {
        ++(vlSymsp->__Vcoverage[2738]);
        vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_r_bits_rdata 
            = ((0xffefffffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_r_bits_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata 
                                                 >> 0x34U))))) 
                  << 0x34U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata 
                        >> 0x35U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_r_bits_rdata 
                                              >> 0x35U))))) {
        ++(vlSymsp->__Vcoverage[2739]);
        vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_r_bits_rdata 
            = ((0xffdfffffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_r_bits_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata 
                                                 >> 0x35U))))) 
                  << 0x35U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata 
                        >> 0x36U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_r_bits_rdata 
                                              >> 0x36U))))) {
        ++(vlSymsp->__Vcoverage[2740]);
        vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_r_bits_rdata 
            = ((0xffbfffffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_r_bits_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata 
                                                 >> 0x36U))))) 
                  << 0x36U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata 
                        >> 0x37U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_r_bits_rdata 
                                              >> 0x37U))))) {
        ++(vlSymsp->__Vcoverage[2741]);
        vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_r_bits_rdata 
            = ((0xff7fffffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_r_bits_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata 
                                                 >> 0x37U))))) 
                  << 0x37U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata 
                        >> 0x38U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_r_bits_rdata 
                                              >> 0x38U))))) {
        ++(vlSymsp->__Vcoverage[2742]);
        vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_r_bits_rdata 
            = ((0xfeffffffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_r_bits_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata 
                                                 >> 0x38U))))) 
                  << 0x38U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata 
                        >> 0x39U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_r_bits_rdata 
                                              >> 0x39U))))) {
        ++(vlSymsp->__Vcoverage[2743]);
        vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_r_bits_rdata 
            = ((0xfdffffffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_r_bits_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata 
                                                 >> 0x39U))))) 
                  << 0x39U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata 
                        >> 0x3aU)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_r_bits_rdata 
                                              >> 0x3aU))))) {
        ++(vlSymsp->__Vcoverage[2744]);
        vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_r_bits_rdata 
            = ((0xfbffffffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_r_bits_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata 
                                                 >> 0x3aU))))) 
                  << 0x3aU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata 
                        >> 0x3bU)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_r_bits_rdata 
                                              >> 0x3bU))))) {
        ++(vlSymsp->__Vcoverage[2745]);
        vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_r_bits_rdata 
            = ((0xf7ffffffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_r_bits_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata 
                                                 >> 0x3bU))))) 
                  << 0x3bU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata 
                        >> 0x3cU)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_r_bits_rdata 
                                              >> 0x3cU))))) {
        ++(vlSymsp->__Vcoverage[2746]);
        vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_r_bits_rdata 
            = ((0xefffffffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_r_bits_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata 
                                                 >> 0x3cU))))) 
                  << 0x3cU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata 
                        >> 0x3dU)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_r_bits_rdata 
                                              >> 0x3dU))))) {
        ++(vlSymsp->__Vcoverage[2747]);
        vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_r_bits_rdata 
            = ((0xdfffffffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_r_bits_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata 
                                                 >> 0x3dU))))) 
                  << 0x3dU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata 
                        >> 0x3eU)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_r_bits_rdata 
                                              >> 0x3eU))))) {
        ++(vlSymsp->__Vcoverage[2748]);
        vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_r_bits_rdata 
            = ((0xbfffffffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_r_bits_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata 
                                                 >> 0x3eU))))) 
                  << 0x3eU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata 
                        >> 0x3fU)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_r_bits_rdata 
                                              >> 0x3fU))))) {
        ++(vlSymsp->__Vcoverage[2749]);
        vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_r_bits_rdata 
            = ((0x7fffffffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_r_bits_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata 
                                                 >> 0x3fU))))) 
                  << 0x3fU));
    }
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[0U] 
        = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT___GEN_34[0U];
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[1U] 
        = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT___GEN_34[1U];
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[2U] 
        = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT___GEN_34[2U];
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[3U] 
        = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT___GEN_34[3U];
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[4U] 
        = (3U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT___GEN_34[4U]);
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_csr_data = 0ULL;
    } else if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch_io_in_flush)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__stall)))) {
            vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_csr_data 
                = vlSelf->riscv_soc__DOT__core__DOT__csr_reg_io_r_csr_rdata;
        }
    }
    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_valid 
        = ((IData)(vlSelf->reset) | (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT___GEN_14));
    if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_data_io_WEN)))) {
        vlSelf->__Vdlyvval__riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_data__DOT__sram__DOT__ram__v0[0U] 
            = ((vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_wdata[0U] 
                & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_mask[0U]) 
               | (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_data__DOT__sram__DOT__ram
                  [vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_data_io_A][0U] 
                  & (~ vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_mask[0U])));
        vlSelf->__Vdlyvval__riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_data__DOT__sram__DOT__ram__v0[1U] 
            = ((vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_wdata[1U] 
                & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_mask[1U]) 
               | (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_data__DOT__sram__DOT__ram
                  [vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_data_io_A][1U] 
                  & (~ vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_mask[1U])));
        vlSelf->__Vdlyvval__riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_data__DOT__sram__DOT__ram__v0[2U] 
            = ((vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_wdata[2U] 
                & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_mask[2U]) 
               | (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_data__DOT__sram__DOT__ram
                  [vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_data_io_A][2U] 
                  & (~ vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_mask[2U])));
        vlSelf->__Vdlyvval__riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_data__DOT__sram__DOT__ram__v0[3U] 
            = ((vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_wdata[3U] 
                & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_mask[3U]) 
               | (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_data__DOT__sram__DOT__ram
                  [vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_data_io_A][3U] 
                  & (~ vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_mask[3U])));
        vlSelf->__Vdlyvset__riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_data__DOT__sram__DOT__ram__v0 = 1U;
        vlSelf->__Vdlyvdim0__riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_data__DOT__sram__DOT__ram__v0 
            = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_data_io_A;
    }
    if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_data_io_WEN) {
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_data__DOT__sram_Q[0U] 
            = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_data__DOT__sram__DOT__ram
            [vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_data_io_A][0U];
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_data__DOT__sram_Q[1U] 
            = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_data__DOT__sram__DOT__ram
            [vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_data_io_A][1U];
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_data__DOT__sram_Q[2U] 
            = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_data__DOT__sram__DOT__ram
            [vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_data_io_A][2U];
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_data__DOT__sram_Q[3U] 
            = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_data__DOT__sram__DOT__ram
            [vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_data_io_A][3U];
    } else {
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_data__DOT__sram_Q[0U] 
            = VL_RANDOM_I(32);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_data__DOT__sram_Q[1U] 
            = VL_RANDOM_I(32);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_data__DOT__sram_Q[2U] 
            = VL_RANDOM_I(32);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_data__DOT__sram_Q[3U] 
            = VL_RANDOM_I(32);
    }
    if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_data_io_WEN)))) {
        vlSelf->__Vdlyvval__riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_data__DOT__sram__DOT__ram__v0[0U] 
            = ((vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_wdata[0U] 
                & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_mask[0U]) 
               | (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_data__DOT__sram__DOT__ram
                  [vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_data_io_A][0U] 
                  & (~ vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_mask[0U])));
        vlSelf->__Vdlyvval__riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_data__DOT__sram__DOT__ram__v0[1U] 
            = ((vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_wdata[1U] 
                & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_mask[1U]) 
               | (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_data__DOT__sram__DOT__ram
                  [vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_data_io_A][1U] 
                  & (~ vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_mask[1U])));
        vlSelf->__Vdlyvval__riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_data__DOT__sram__DOT__ram__v0[2U] 
            = ((vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_wdata[2U] 
                & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_mask[2U]) 
               | (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_data__DOT__sram__DOT__ram
                  [vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_data_io_A][2U] 
                  & (~ vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_mask[2U])));
        vlSelf->__Vdlyvval__riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_data__DOT__sram__DOT__ram__v0[3U] 
            = ((vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_wdata[3U] 
                & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_mask[3U]) 
               | (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_data__DOT__sram__DOT__ram
                  [vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_data_io_A][3U] 
                  & (~ vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_mask[3U])));
        vlSelf->__Vdlyvset__riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_data__DOT__sram__DOT__ram__v0 = 1U;
        vlSelf->__Vdlyvdim0__riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_data__DOT__sram__DOT__ram__v0 
            = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_data_io_A;
    }
    if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_data_io_WEN) {
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_data__DOT__sram_Q[0U] 
            = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_data__DOT__sram__DOT__ram
            [vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_data_io_A][0U];
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_data__DOT__sram_Q[1U] 
            = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_data__DOT__sram__DOT__ram
            [vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_data_io_A][1U];
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_data__DOT__sram_Q[2U] 
            = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_data__DOT__sram__DOT__ram
            [vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_data_io_A][2U];
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_data__DOT__sram_Q[3U] 
            = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_data__DOT__sram__DOT__ram
            [vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_data_io_A][3U];
    } else {
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_data__DOT__sram_Q[0U] 
            = VL_RANDOM_I(32);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_data__DOT__sram_Q[1U] 
            = VL_RANDOM_I(32);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_data__DOT__sram_Q[2U] 
            = VL_RANDOM_I(32);
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_data__DOT__sram_Q[3U] 
            = VL_RANDOM_I(32);
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_opType = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__fetch_io_in_flush) {
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_opType = 0U;
    } else if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__stall)))) {
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_opType 
            = ((0x33U == (0xfe00707fU & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_inst))
                ? 4U : ((0x13U == (0x707fU & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_inst))
                         ? 4U : ((0x1bU == (0x707fU 
                                            & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_inst))
                                  ? 4U : ((0x3bU == 
                                           (0xfe00707fU 
                                            & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_inst))
                                           ? 4U : (
                                                   (0x7033U 
                                                    == 
                                                    (0xfe00707fU 
                                                     & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_inst))
                                                    ? 4U
                                                    : 
                                                   ((0x7013U 
                                                     == 
                                                     (0x707fU 
                                                      & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_inst))
                                                     ? 4U
                                                     : 
                                                    ((0x17U 
                                                      == 
                                                      (0x7fU 
                                                       & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_inst))
                                                      ? 4U
                                                      : 
                                                     ((0x63U 
                                                       == 
                                                       (0x707fU 
                                                        & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_inst))
                                                       ? 4U
                                                       : 
                                                      ((0x5063U 
                                                        == 
                                                        (0x707fU 
                                                         & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_inst))
                                                        ? 4U
                                                        : 
                                                       ((0x7063U 
                                                         == 
                                                         (0x707fU 
                                                          & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_inst))
                                                         ? 4U
                                                         : 
                                                        ((0x4063U 
                                                          == 
                                                          (0x707fU 
                                                           & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_inst))
                                                          ? 4U
                                                          : 
                                                         ((0x6063U 
                                                           == 
                                                           (0x707fU 
                                                            & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_inst))
                                                           ? 4U
                                                           : (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT___T_206)))))))))))));
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_inst = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__fetch_io_in_flush) {
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_inst = 0U;
    } else if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__stall)))) {
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_inst 
            = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_inst;
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_pc = 0ULL;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__fetch_io_in_flush) {
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_pc = 0ULL;
    } else if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__stall)))) {
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_pc 
            = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_1;
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_0 = 0U;
    } else if (((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
                & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_0 
            = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1)
                ? 2U : ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_2)
                         ? 1U : (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___GEN_0)));
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_1 = 0U;
    } else if (((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
                & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_1 
            = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1)
                ? 2U : ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_2)
                         ? 1U : (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___GEN_4)));
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_2 = 0U;
    } else if (((2U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
                & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_2 
            = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1)
                ? 2U : ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_2)
                         ? 1U : (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___GEN_8)));
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_3 = 0U;
    } else if (((3U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
                & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_3 
            = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1)
                ? 2U : ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_2)
                         ? 1U : (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___GEN_12)));
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_4 = 0U;
    } else if (((4U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
                & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_4 
            = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1)
                ? 2U : ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_2)
                         ? 1U : (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___GEN_16)));
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_5 = 0U;
    } else if (((5U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
                & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_5 
            = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1)
                ? 2U : ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_2)
                         ? 1U : (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___GEN_20)));
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_6 = 0U;
    } else if (((6U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
                & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_6 
            = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1)
                ? 2U : ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_2)
                         ? 1U : (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___GEN_24)));
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_7 = 0U;
    } else if (((7U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
                & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_7 
            = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1)
                ? 2U : ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_2)
                         ? 1U : (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___GEN_28)));
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_8 = 0U;
    } else if (((8U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
                & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_8 
            = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1)
                ? 2U : ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_2)
                         ? 1U : (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___GEN_32)));
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_9 = 0U;
    } else if (((9U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
                & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_9 
            = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1)
                ? 2U : ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_2)
                         ? 1U : (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___GEN_36)));
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_10 = 0U;
    } else if (((0xaU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
                & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_10 
            = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1)
                ? 2U : ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_2)
                         ? 1U : (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___GEN_40)));
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_11 = 0U;
    } else if (((0xbU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
                & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_11 
            = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1)
                ? 2U : ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_2)
                         ? 1U : (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___GEN_44)));
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_12 = 0U;
    } else if (((0xcU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
                & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_12 
            = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1)
                ? 2U : ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_2)
                         ? 1U : (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___GEN_48)));
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_13 = 0U;
    } else if (((0xdU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
                & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_13 
            = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1)
                ? 2U : ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_2)
                         ? 1U : (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___GEN_52)));
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_14 = 0U;
    } else if (((0xeU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
                & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_14 
            = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1)
                ? 2U : ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_2)
                         ? 1U : (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___GEN_56)));
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_15 = 0U;
    } else if (((0xfU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
                & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_15 
            = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1)
                ? 2U : ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_2)
                         ? 1U : (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___GEN_60)));
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_16 = 0U;
    } else if (((0x10U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
                & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_16 
            = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1)
                ? 2U : ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_2)
                         ? 1U : (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___GEN_64)));
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_17 = 0U;
    } else if (((0x11U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
                & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_17 
            = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1)
                ? 2U : ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_2)
                         ? 1U : (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___GEN_68)));
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_18 = 0U;
    } else if (((0x12U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
                & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_18 
            = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1)
                ? 2U : ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_2)
                         ? 1U : (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___GEN_72)));
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_19 = 0U;
    } else if (((0x13U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
                & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_19 
            = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1)
                ? 2U : ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_2)
                         ? 1U : (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___GEN_76)));
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_20 = 0U;
    } else if (((0x14U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
                & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_20 
            = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1)
                ? 2U : ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_2)
                         ? 1U : (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___GEN_80)));
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_21 = 0U;
    } else if (((0x15U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
                & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_21 
            = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1)
                ? 2U : ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_2)
                         ? 1U : (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___GEN_84)));
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_22 = 0U;
    } else if (((0x16U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
                & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_22 
            = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1)
                ? 2U : ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_2)
                         ? 1U : (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___GEN_88)));
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_23 = 0U;
    } else if (((0x17U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
                & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_23 
            = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1)
                ? 2U : ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_2)
                         ? 1U : (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___GEN_92)));
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_24 = 0U;
    } else if (((0x18U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
                & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_24 
            = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1)
                ? 2U : ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_2)
                         ? 1U : (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___GEN_96)));
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_25 = 0U;
    } else if (((0x19U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
                & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_25 
            = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1)
                ? 2U : ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_2)
                         ? 1U : (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___GEN_100)));
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_26 = 0U;
    } else if (((0x1aU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
                & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_26 
            = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1)
                ? 2U : ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_2)
                         ? 1U : (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___GEN_104)));
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_27 = 0U;
    } else if (((0x1bU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
                & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_27 
            = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1)
                ? 2U : ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_2)
                         ? 1U : (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___GEN_108)));
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_28 = 0U;
    } else if (((0x1cU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
                & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_28 
            = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1)
                ? 2U : ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_2)
                         ? 1U : (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___GEN_112)));
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_29 = 0U;
    } else if (((0x1dU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
                & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_29 
            = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1)
                ? 2U : ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_2)
                         ? 1U : (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___GEN_116)));
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_30 = 0U;
    } else if (((0x1eU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
                & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_30 
            = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1)
                ? 2U : ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_2)
                         ? 1U : (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___GEN_120)));
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_31 = 0U;
    } else if (((0x1fU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
                & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_31 
            = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1)
                ? 2U : ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_2)
                         ? 1U : (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___GEN_124)));
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_32 = 0U;
    } else if (((0x20U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
                & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_32 
            = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1)
                ? 2U : ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_2)
                         ? 1U : (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___GEN_128)));
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_33 = 0U;
    } else if (((0x21U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
                & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_33 
            = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1)
                ? 2U : ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_2)
                         ? 1U : (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___GEN_132)));
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_34 = 0U;
    } else if (((0x22U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
                & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_34 
            = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1)
                ? 2U : ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_2)
                         ? 1U : (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___GEN_136)));
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_35 = 0U;
    } else if (((0x23U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
                & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_35 
            = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1)
                ? 2U : ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_2)
                         ? 1U : (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___GEN_140)));
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_36 = 0U;
    } else if (((0x24U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
                & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_36 
            = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1)
                ? 2U : ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_2)
                         ? 1U : (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___GEN_144)));
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_37 = 0U;
    } else if (((0x25U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
                & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_37 
            = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1)
                ? 2U : ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_2)
                         ? 1U : (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___GEN_148)));
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_38 = 0U;
    } else if (((0x26U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
                & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_38 
            = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1)
                ? 2U : ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_2)
                         ? 1U : (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___GEN_152)));
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_39 = 0U;
    } else if (((0x27U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
                & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_39 
            = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1)
                ? 2U : ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_2)
                         ? 1U : (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___GEN_156)));
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_40 = 0U;
    } else if (((0x28U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
                & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_40 
            = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1)
                ? 2U : ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_2)
                         ? 1U : (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___GEN_160)));
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_41 = 0U;
    } else if (((0x29U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
                & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_41 
            = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1)
                ? 2U : ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_2)
                         ? 1U : (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___GEN_164)));
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_42 = 0U;
    } else if (((0x2aU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
                & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_42 
            = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1)
                ? 2U : ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_2)
                         ? 1U : (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___GEN_168)));
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_43 = 0U;
    } else if (((0x2bU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
                & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_43 
            = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1)
                ? 2U : ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_2)
                         ? 1U : (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___GEN_172)));
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_44 = 0U;
    } else if (((0x2cU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
                & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_44 
            = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1)
                ? 2U : ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_2)
                         ? 1U : (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___GEN_176)));
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_45 = 0U;
    } else if (((0x2dU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
                & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_45 
            = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1)
                ? 2U : ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_2)
                         ? 1U : (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___GEN_180)));
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_46 = 0U;
    } else if (((0x2eU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
                & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_46 
            = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1)
                ? 2U : ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_2)
                         ? 1U : (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___GEN_184)));
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_47 = 0U;
    } else if (((0x2fU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
                & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_47 
            = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1)
                ? 2U : ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_2)
                         ? 1U : (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___GEN_188)));
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_48 = 0U;
    } else if (((0x30U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
                & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_48 
            = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1)
                ? 2U : ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_2)
                         ? 1U : (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___GEN_192)));
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_49 = 0U;
    } else if (((0x31U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
                & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_49 
            = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1)
                ? 2U : ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_2)
                         ? 1U : (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___GEN_196)));
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_50 = 0U;
    } else if (((0x32U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
                & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_50 
            = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1)
                ? 2U : ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_2)
                         ? 1U : (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___GEN_200)));
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_51 = 0U;
    } else if (((0x33U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
                & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_51 
            = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1)
                ? 2U : ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_2)
                         ? 1U : (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___GEN_204)));
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_52 = 0U;
    } else if (((0x34U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
                & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_52 
            = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1)
                ? 2U : ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_2)
                         ? 1U : (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___GEN_208)));
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_53 = 0U;
    } else if (((0x35U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
                & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_53 
            = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1)
                ? 2U : ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_2)
                         ? 1U : (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___GEN_212)));
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_54 = 0U;
    } else if (((0x36U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
                & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_54 
            = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1)
                ? 2U : ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_2)
                         ? 1U : (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___GEN_216)));
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_55 = 0U;
    } else if (((0x37U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
                & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_55 
            = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1)
                ? 2U : ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_2)
                         ? 1U : (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___GEN_220)));
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_56 = 0U;
    } else if (((0x38U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
                & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_56 
            = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1)
                ? 2U : ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_2)
                         ? 1U : (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___GEN_224)));
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_57 = 0U;
    } else if (((0x39U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
                & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_57 
            = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1)
                ? 2U : ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_2)
                         ? 1U : (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___GEN_228)));
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_58 = 0U;
    } else if (((0x3aU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
                & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_58 
            = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1)
                ? 2U : ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_2)
                         ? 1U : (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___GEN_232)));
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_59 = 0U;
    } else if (((0x3bU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
                & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_59 
            = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1)
                ? 2U : ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_2)
                         ? 1U : (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___GEN_236)));
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_60 = 0U;
    } else if (((0x3cU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
                & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_60 
            = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1)
                ? 2U : ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_2)
                         ? 1U : (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___GEN_240)));
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_61 = 0U;
    } else if (((0x3dU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
                & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_61 
            = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1)
                ? 2U : ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_2)
                         ? 1U : (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___GEN_244)));
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_62 = 0U;
    } else if (((0x3eU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
                & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_62 
            = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1)
                ? 2U : ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_2)
                         ? 1U : (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___GEN_248)));
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_63 = 0U;
    } else if (((0x3fU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
                & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_63 
            = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1)
                ? 2U : ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_2)
                         ? 1U : (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___GEN_252)));
    }
    vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_stall 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT___GEN_0));
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__fetch_io_in_flush) {
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType = 0U;
    } else if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__stall)))) {
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType 
            = ((0x33U == (0xfe00707fU & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_inst))
                ? 0x2cU : ((0x13U == (0x707fU & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_inst))
                            ? 0x2dU : ((0x1bU == (0x707fU 
                                                  & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_inst))
                                        ? 0x2fU : (
                                                   (0x3bU 
                                                    == 
                                                    (0xfe00707fU 
                                                     & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_inst))
                                                    ? 0x2eU
                                                    : 
                                                   ((0x7033U 
                                                     == 
                                                     (0xfe00707fU 
                                                      & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_inst))
                                                     ? 8U
                                                     : 
                                                    ((0x7013U 
                                                      == 
                                                      (0x707fU 
                                                       & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_inst))
                                                      ? 9U
                                                      : 
                                                     ((0x17U 
                                                       == 
                                                       (0x7fU 
                                                        & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_inst))
                                                       ? 4U
                                                       : 
                                                      ((0x63U 
                                                        == 
                                                        (0x707fU 
                                                         & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_inst))
                                                        ? 0x37U
                                                        : 
                                                       ((0x5063U 
                                                         == 
                                                         (0x707fU 
                                                          & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_inst))
                                                         ? 0x3cU
                                                         : 
                                                        ((0x7063U 
                                                          == 
                                                          (0x707fU 
                                                           & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_inst))
                                                          ? 0x3eU
                                                          : 
                                                         ((0x4063U 
                                                           == 
                                                           (0x707fU 
                                                            & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_inst))
                                                           ? 0x34U
                                                           : 
                                                          ((0x6063U 
                                                            == 
                                                            (0x707fU 
                                                             & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_inst))
                                                            ? 0x36U
                                                            : (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT___T_278)))))))))))));
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs1_addr = 0U;
    } else if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch_io_in_flush)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__stall)))) {
            vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs1_addr 
                = (0x1fU & (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_inst 
                            >> 0xfU));
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__lsu_exu__DOT__reg_avalid = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__write_back_io_out_flush) {
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__lsu_exu__DOT__reg_avalid = 0U;
    } else if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_stall)))) {
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__lsu_exu__DOT__reg_avalid 
            = (1U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__valid) 
                     >> 1U));
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__reg_result_pc = 0ULL;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__write_back_io_out_flush) {
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__reg_result_pc = 0ULL;
    } else if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_stall)))) {
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__reg_result_pc 
            = (((QData)((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[1U])) 
                << 0x20U) | (QData)((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[0U])));
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__csr_exu__DOT__reg_w_csr_en = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__write_back_io_out_flush) {
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__csr_exu__DOT__reg_w_csr_en = 0U;
    } else if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_stall)))) {
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__csr_exu__DOT__reg_w_csr_en 
            = (1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__csr_exu__DOT__temp_csr_result_data[2U] 
                     & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__valid) 
                        >> 2U)));
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_rs2_data = 0ULL;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__write_back_io_out_flush) {
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_rs2_data = 0ULL;
    } else if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_in_stall)))) {
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_rs2_data 
            = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__reg_next_pc_valid)
                ? 0ULL : vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__rs2_data);
    }
    if (vlSelf->riscv_soc__DOT__core__DOT__write_back_io_out_w_rs_en) {
        vlSelf->__Vdlyvval__riscv_soc__DOT__core__DOT__decode__DOT__regfile__v0 
            = vlSelf->riscv_soc__DOT__core__DOT__write_back_io_out_result_data;
        vlSelf->__Vdlyvset__riscv_soc__DOT__core__DOT__decode__DOT__regfile__v0 = 1U;
        vlSelf->__Vdlyvdim0__riscv_soc__DOT__core__DOT__decode__DOT__regfile__v0 
            = vlSelf->riscv_soc__DOT__core__DOT__write_back_io_out_rs_addr;
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__lsu_exu__DOT__reg_w_mem_en = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__write_back_io_out_flush) {
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__lsu_exu__DOT__reg_w_mem_en = 0U;
    } else if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_stall)))) {
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__lsu_exu__DOT__reg_w_mem_en 
            = (1U & (((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__valid) 
                      >> 1U) & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_out_exuType) 
                                >> 2U)));
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_exuType = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__write_back_io_out_flush) {
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_exuType = 0U;
    } else if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_in_stall)))) {
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_exuType 
            = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__reg_next_pc_valid)
                ? 0U : (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_out_exuType));
    }
}
