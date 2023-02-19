// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vriscv_soc.h for the primary calling header

#include "Vriscv_soc___024root.h"
#include "Vriscv_soc__Syms.h"

#include "verilated_dpi.h"

//==========

VL_INLINE_OPT void Vriscv_soc___024root___combo__TOP__9(Vriscv_soc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vriscv_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv_soc___024root___combo__TOP__9\n"); );
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

void Vriscv_soc___024unit____Vdpiimwrap_ramCtrl_TOP____024unit(QData/*63:0*/ raddr, QData/*63:0*/ &rdata, QData/*63:0*/ waddr, QData/*63:0*/ wdata, QData/*63:0*/ wmask, CData/*0:0*/ wen);

VL_INLINE_OPT void Vriscv_soc___024root___sequent__TOP__11(Vriscv_soc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vriscv_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv_soc___024root___sequent__TOP__11\n"); );
    // Variables
    CData/*1:0*/ __Vdly__riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state;
    CData/*1:0*/ __Vdly__riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state;
    VlWide<4>/*127:0*/ __Vtemp2096;
    VlWide<4>/*127:0*/ __Vtemp2097;
    VlWide<4>/*127:0*/ __Vtemp2098;
    VlWide<4>/*127:0*/ __Vtemp2099;
    VlWide<3>/*95:0*/ __Vtemp2130;
    VlWide<3>/*95:0*/ __Vtemp2135;
    VlWide<3>/*95:0*/ __Vtemp2138;
    VlWide<3>/*95:0*/ __Vtemp2143;
    VlWide<3>/*95:0*/ __Vtemp2146;
    QData/*63:0*/ __Vtask_ramCtrl__0__rdata;
    // Body
    vlSelf->__Vdlyvset__riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_tag__DOT__sram__DOT__ram__v0 = 0U;
    vlSelf->__Vdlyvset__riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_tag__DOT__sram__DOT__ram__v0 = 0U;
    vlSelf->__Vdlyvset__riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_tag__DOT__sram__DOT__ram__v0 = 0U;
    vlSelf->__Vdlyvset__riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_tag__DOT__sram__DOT__ram__v0 = 0U;
    vlSelf->__Vdly__riscv_soc__DOT__axi_ram__DOT__reg_r_state 
        = vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_r_state;
    ++(vlSymsp->__Vcoverage[8490]);
    if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___sram1_data_io_WEN_T_1) {
        ++(vlSymsp->__Vcoverage[8488]);
    }
    if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___sram1_data_io_WEN_T_1)))) {
        ++(vlSymsp->__Vcoverage[8489]);
    }
    ++(vlSymsp->__Vcoverage[8498]);
    if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___sram2_data_io_WEN_T_1) {
        ++(vlSymsp->__Vcoverage[8496]);
    }
    if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___sram2_data_io_WEN_T_1)))) {
        ++(vlSymsp->__Vcoverage[8497]);
    }
    ++(vlSymsp->__Vcoverage[10692]);
    if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___sram1_data_io_WEN_T_1) {
        ++(vlSymsp->__Vcoverage[10690]);
    }
    if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___sram1_data_io_WEN_T_1)))) {
        ++(vlSymsp->__Vcoverage[10691]);
    }
    ++(vlSymsp->__Vcoverage[10700]);
    if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___sram2_data_io_WEN_T_1) {
        ++(vlSymsp->__Vcoverage[10698]);
    }
    if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___sram2_data_io_WEN_T_1)))) {
        ++(vlSymsp->__Vcoverage[10699]);
    }
    ++(vlSymsp->__Vcoverage[14502]);
    Vriscv_soc___024unit____Vdpiimwrap_ramCtrl_TOP____024unit(vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_raddr, __Vtask_ramCtrl__0__rdata, vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_w_addr, vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_AXI_Bus_w_bits_wdata, vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_wmask, (IData)(vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_wen));
    vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata 
        = __Vtask_ramCtrl__0__rdata;
    ++(vlSymsp->__Vcoverage[14501]);
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        ++(vlSymsp->__Vcoverage[14500]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[14484]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[14478]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[14490]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[14494]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[14495]);
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        ++(vlSymsp->__Vcoverage[14496]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[14497]);
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        ++(vlSymsp->__Vcoverage[14498]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[14499]);
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_r_state)))) {
            ++(vlSymsp->__Vcoverage[14483]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_r_state) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_r_state)))) {
                ++(vlSymsp->__Vcoverage[14488]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_r_state) {
            if (vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_r_state) {
                ++(vlSymsp->__Vcoverage[14487]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_r_state) {
            if (vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_r_state) {
                ++(vlSymsp->__Vcoverage[14481]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_r_state) {
            if (vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_r_state) {
                ++(vlSymsp->__Vcoverage[14475]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (vlSelf->riscv_soc__DOT__axi_ram__DOT___T_5) {
            ++(vlSymsp->__Vcoverage[14493]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_r_state)))) {
            ++(vlSymsp->__Vcoverage[14489]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_r_state) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_r_state)))) {
                ++(vlSymsp->__Vcoverage[14482]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_r_state) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_r_state)))) {
                ++(vlSymsp->__Vcoverage[14476]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_r_state)))) {
            ++(vlSymsp->__Vcoverage[14477]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__axi_ram__DOT___T_5)))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__axi_ram__DOT___T_6)))) {
                ++(vlSymsp->__Vcoverage[14492]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__axi_ram__DOT___T_5)))) {
            if (vlSelf->riscv_soc__DOT__axi_ram__DOT___T_6) {
                ++(vlSymsp->__Vcoverage[14491]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_r_state)))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__axi_ram__DOT___T_1)))) {
                ++(vlSymsp->__Vcoverage[14472]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_r_state)))) {
            if (vlSelf->riscv_soc__DOT__axi_ram__DOT___T_1) {
                ++(vlSymsp->__Vcoverage[14471]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_r_state) {
            if (vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_r_state) {
                if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_r_valid)))) {
                    ++(vlSymsp->__Vcoverage[14486]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_r_state) {
            if (vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_r_state) {
                if (vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_r_valid) {
                    ++(vlSymsp->__Vcoverage[14485]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_r_state) {
            if (vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_r_state) {
                if (vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_r_valid) {
                    ++(vlSymsp->__Vcoverage[14479]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_r_state) {
            if (vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_r_state) {
                if (vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_r_valid) {
                    ++(vlSymsp->__Vcoverage[14473]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_r_state) {
            if (vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_r_state) {
                if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_r_valid)))) {
                    ++(vlSymsp->__Vcoverage[14480]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_r_state) {
            if (vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_r_state) {
                if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_r_valid)))) {
                    ++(vlSymsp->__Vcoverage[14474]);
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
    ++(vlSymsp->__Vcoverage[8486]);
    if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_data_io_WEN)))) {
        ++(vlSymsp->__Vcoverage[8484]);
    }
    if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_data_io_WEN) {
        ++(vlSymsp->__Vcoverage[8485]);
    }
    ++(vlSymsp->__Vcoverage[8494]);
    if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_data_io_WEN)))) {
        ++(vlSymsp->__Vcoverage[8492]);
    }
    if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_data_io_WEN) {
        ++(vlSymsp->__Vcoverage[8493]);
    }
    ++(vlSymsp->__Vcoverage[10958]);
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[10925]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[10934]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[10939]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[10916]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[10957]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[10946]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[10949]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[10954]);
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT___T) {
            ++(vlSymsp->__Vcoverage[10944]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT___T) {
            ++(vlSymsp->__Vcoverage[10933]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT___T) {
            ++(vlSymsp->__Vcoverage[10937]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT___T)))) {
            ++(vlSymsp->__Vcoverage[10915]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT___T) {
            ++(vlSymsp->__Vcoverage[10914]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT___T) {
            ++(vlSymsp->__Vcoverage[10924]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT___T)))) {
            ++(vlSymsp->__Vcoverage[10956]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT___T)))) {
            ++(vlSymsp->__Vcoverage[10938]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT___T)))) {
            ++(vlSymsp->__Vcoverage[10945]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT___T) {
            ++(vlSymsp->__Vcoverage[10947]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT___T)))) {
            ++(vlSymsp->__Vcoverage[10948]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT___T) {
            ++(vlSymsp->__Vcoverage[10953]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT___T)))) {
            ++(vlSymsp->__Vcoverage[10952]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT___T) {
            ++(vlSymsp->__Vcoverage[10955]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT___T) {
            if (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT___reg_pc_1_T) {
                ++(vlSymsp->__Vcoverage[10928]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT___T) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__stall)))) {
                ++(vlSymsp->__Vcoverage[10943]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT___T) {
            if (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__stall) {
                ++(vlSymsp->__Vcoverage[10942]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT___T) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__stall)))) {
                ++(vlSymsp->__Vcoverage[10936]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT___T) {
            if (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__stall) {
                ++(vlSymsp->__Vcoverage[10935]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT___T)))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__stall)))) {
                ++(vlSymsp->__Vcoverage[10931]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT___T)))) {
            if (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__stall) {
                ++(vlSymsp->__Vcoverage[10932]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT___T)))) {
            if (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__stall) {
                ++(vlSymsp->__Vcoverage[10923]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT___T)))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__stall)))) {
                ++(vlSymsp->__Vcoverage[10922]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT___T) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT___reg_pc_1_T)))) {
                if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__stall)))) {
                    ++(vlSymsp->__Vcoverage[10926]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT___T) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT___reg_pc_1_T)))) {
                if (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__stall) {
                    ++(vlSymsp->__Vcoverage[10927]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT___T)))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__stall)))) {
                if (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__need_update) {
                    ++(vlSymsp->__Vcoverage[10929]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT___T)))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__stall)))) {
                if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__need_update)))) {
                    ++(vlSymsp->__Vcoverage[10921]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT___T)))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__stall)))) {
                if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__need_update)))) {
                    ++(vlSymsp->__Vcoverage[10930]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT___T)))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__stall)))) {
                if (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__need_update) {
                    ++(vlSymsp->__Vcoverage[10920]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT___T) {
            if (vlSelf->riscv_soc__DOT__core__DOT__execute_io_out_flush) {
                ++(vlSymsp->__Vcoverage[10913]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT___T)))) {
            if (vlSelf->riscv_soc__DOT__core__DOT__execute_io_out_flush) {
                ++(vlSymsp->__Vcoverage[10950]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT___T)))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute_io_out_flush)))) {
                ++(vlSymsp->__Vcoverage[10951]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT___T) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute_io_out_flush)))) {
                if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_flush)))) {
                    ++(vlSymsp->__Vcoverage[10912]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT___T) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute_io_out_flush)))) {
                if (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_flush) {
                    ++(vlSymsp->__Vcoverage[10911]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT___T) {
            if (((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute_io_out_flush) 
                 | (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_flush))) {
                ++(vlSymsp->__Vcoverage[10919]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT___T) {
            if ((1U & (~ ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute_io_out_flush) 
                          | (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_flush))))) {
                if (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__stall) {
                    ++(vlSymsp->__Vcoverage[10918]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT___T) {
            if ((1U & (~ ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute_io_out_flush) 
                          | (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_flush))))) {
                if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__stall)))) {
                    ++(vlSymsp->__Vcoverage[10917]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT___T) {
            if (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__stall) {
                if ((1U & (~ (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0 
                                      >> 2U))))) {
                    ++(vlSymsp->__Vcoverage[10941]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT___T) {
            if (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__stall) {
                if ((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0 
                                   >> 2U)))) {
                    ++(vlSymsp->__Vcoverage[10940]);
                }
            }
        }
    }
    vlSelf->__Vdly__riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_state 
        = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_state;
    vlSelf->__Vdly__riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_cnt 
        = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_cnt;
    vlSelf->__Vdly__riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state 
        = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state;
    ++(vlSymsp->__Vcoverage[13150]);
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[13136]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[13142]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[13121]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[13145]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[13127]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[13149]);
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_state))) {
            if ((1U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_state))) {
                if ((2U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_state))) {
                    ++(vlSymsp->__Vcoverage[13133]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_state))) {
            if ((1U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_state))) {
                if ((2U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_state))) {
                    ++(vlSymsp->__Vcoverage[13132]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_state))) {
            if ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_state))) {
                ++(vlSymsp->__Vcoverage[13134]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_state))) {
            ++(vlSymsp->__Vcoverage[13126]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_state))) {
            ++(vlSymsp->__Vcoverage[13125]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_state))) {
            if ((1U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_state))) {
                if ((2U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_state))) {
                    ++(vlSymsp->__Vcoverage[13117]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_state))) {
            ++(vlSymsp->__Vcoverage[13141]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_state))) {
            if ((1U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_state))) {
                if ((2U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_state))) {
                    ++(vlSymsp->__Vcoverage[13123]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_state))) {
            ++(vlSymsp->__Vcoverage[13144]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_state))) {
            ++(vlSymsp->__Vcoverage[13148]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_state))) {
            ++(vlSymsp->__Vcoverage[13120]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_state))) {
            ++(vlSymsp->__Vcoverage[13135]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_state))) {
            if ((1U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_state))) {
                ++(vlSymsp->__Vcoverage[13146]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_state))) {
            if ((1U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_state))) {
                if ((2U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_state))) {
                    ++(vlSymsp->__Vcoverage[13116]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_state))) {
            if ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_state))) {
                ++(vlSymsp->__Vcoverage[13124]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_state))) {
            if ((1U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_state))) {
                ++(vlSymsp->__Vcoverage[13118]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_state))) {
            if ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_state))) {
                ++(vlSymsp->__Vcoverage[13119]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_state))) {
            ++(vlSymsp->__Vcoverage[13140]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_state))) {
            if ((1U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_state))) {
                if ((2U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_state))) {
                    ++(vlSymsp->__Vcoverage[13122]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_state))) {
            ++(vlSymsp->__Vcoverage[13143]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_state))) {
            if ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_state))) {
                ++(vlSymsp->__Vcoverage[13147]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_state))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul_io_valid)))) {
                ++(vlSymsp->__Vcoverage[13129]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_state))) {
            if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul_io_valid) {
                ++(vlSymsp->__Vcoverage[13128]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_state))) {
            if ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_state))) {
                if ((0x20U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_cnt))) {
                    ++(vlSymsp->__Vcoverage[13131]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_state))) {
            if ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_state))) {
                if ((0x20U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_cnt))) {
                    ++(vlSymsp->__Vcoverage[13130]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_state))) {
            if ((1U & (~ ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_out_exuType) 
                          >> 2U)))) {
                if ((1U & (~ ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_out_exuType) 
                              >> 1U)))) {
                    ++(vlSymsp->__Vcoverage[13138]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_state))) {
            if ((4U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_out_exuType))) {
                ++(vlSymsp->__Vcoverage[13139]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_state))) {
            if ((1U & (~ ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_out_exuType) 
                          >> 2U)))) {
                if ((2U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_out_exuType))) {
                    ++(vlSymsp->__Vcoverage[13137]);
                }
            }
        }
    }
    ++(vlSymsp->__Vcoverage[12646]);
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[12645]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[12607]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[12615]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[12630]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[12639]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[12635]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[12624]);
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state))) {
            if ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state))) {
                ++(vlSymsp->__Vcoverage[12637]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state))) {
            ++(vlSymsp->__Vcoverage[12638]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state))) {
            ++(vlSymsp->__Vcoverage[12628]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state))) {
            if ((1U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state))) {
                if ((2U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state))) {
                    ++(vlSymsp->__Vcoverage[12626]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state))) {
            if ((1U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state))) {
                if ((2U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state))) {
                    ++(vlSymsp->__Vcoverage[12621]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state))) {
            ++(vlSymsp->__Vcoverage[12623]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state))) {
            ++(vlSymsp->__Vcoverage[12605]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state))) {
            if ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state))) {
                ++(vlSymsp->__Vcoverage[12643]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state))) {
            if ((1U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state))) {
                if ((2U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state))) {
                    ++(vlSymsp->__Vcoverage[12620]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state))) {
            ++(vlSymsp->__Vcoverage[12634]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state))) {
            ++(vlSymsp->__Vcoverage[12614]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state))) {
            if ((1U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state))) {
                if ((2U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state))) {
                    ++(vlSymsp->__Vcoverage[12641]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state))) {
            ++(vlSymsp->__Vcoverage[12629]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state))) {
            if ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state))) {
                ++(vlSymsp->__Vcoverage[12622]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state))) {
            if ((1U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state))) {
                if ((2U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state))) {
                    ++(vlSymsp->__Vcoverage[12625]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state))) {
            if ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state))) {
                ++(vlSymsp->__Vcoverage[12627]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state))) {
            ++(vlSymsp->__Vcoverage[12606]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state))) {
            if ((1U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state))) {
                ++(vlSymsp->__Vcoverage[12636]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state))) {
            ++(vlSymsp->__Vcoverage[12633]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state))) {
            ++(vlSymsp->__Vcoverage[12613]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state))) {
            ++(vlSymsp->__Vcoverage[12644]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state))) {
            if ((1U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state))) {
                if ((2U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state))) {
                    ++(vlSymsp->__Vcoverage[12640]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state))) {
            if ((1U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state))) {
                ++(vlSymsp->__Vcoverage[12642]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state))) {
            if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div_io_valid) {
                ++(vlSymsp->__Vcoverage[12631]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div_io_valid)))) {
                ++(vlSymsp->__Vcoverage[12617]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state))) {
            if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div_io_valid) {
                ++(vlSymsp->__Vcoverage[12616]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div_io_valid)))) {
                ++(vlSymsp->__Vcoverage[12632]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state))) {
            if ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state))) {
                if ((1U & (~ ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_cnt) 
                              >> 6U)))) {
                    ++(vlSymsp->__Vcoverage[12619]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state))) {
            if ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state))) {
                if ((0x40U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_cnt))) {
                    ++(vlSymsp->__Vcoverage[12618]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state))) {
            if ((1U & (~ ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_out_exuType) 
                          >> 1U)))) {
                if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_out_exuType)))) {
                    ++(vlSymsp->__Vcoverage[12603]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state))) {
            if ((2U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_out_exuType))) {
                ++(vlSymsp->__Vcoverage[12604]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state))) {
            if ((2U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_out_exuType))) {
                if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_out_exuType)))) {
                    ++(vlSymsp->__Vcoverage[12601]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state))) {
            if ((1U & (~ ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_out_exuType) 
                          >> 1U)))) {
                if ((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_out_exuType))) {
                    ++(vlSymsp->__Vcoverage[12610]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state))) {
            if ((1U & (~ ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_out_exuType) 
                          >> 1U)))) {
                if ((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_out_exuType))) {
                    ++(vlSymsp->__Vcoverage[12602]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state))) {
            if ((2U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_out_exuType))) {
                if ((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_out_exuType))) {
                    ++(vlSymsp->__Vcoverage[12608]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state))) {
            if ((2U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_out_exuType))) {
                if ((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_out_exuType))) {
                    ++(vlSymsp->__Vcoverage[12600]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state))) {
            if ((2U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_out_exuType))) {
                if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_out_exuType)))) {
                    ++(vlSymsp->__Vcoverage[12609]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state))) {
            if ((2U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_out_exuType))) {
                ++(vlSymsp->__Vcoverage[12612]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state))) {
            if ((1U & (~ ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_out_exuType) 
                          >> 1U)))) {
                if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_out_exuType)))) {
                    ++(vlSymsp->__Vcoverage[12611]);
                }
            }
        }
    }
    vlSelf->__Vdlyvset__riscv_soc__DOT__core__DOT__decode__DOT__regfile__v0 = 0U;
    vlSelf->__Vdly__riscv_soc__DOT__core__DOT__write_back__DOT__reg_ls_state 
        = vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_ls_state;
    vlSelf->__Vdly__riscv_soc__DOT__core__DOT__write_back__DOT__reg_bus_is_w 
        = vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_bus_is_w;
    __Vdly__riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state 
        = vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state;
    vlSelf->__Vdly__riscv_soc__DOT__core__DOT__d_cache__DOT__reg_offset 
        = vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_offset;
    vlSelf->__Vdlyvset__riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_data__DOT__sram__DOT__ram__v0 = 0U;
    vlSelf->__Vdlyvset__riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_data__DOT__sram__DOT__ram__v0 = 0U;
    ++(vlSymsp->__Vcoverage[10688]);
    if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_data_io_WEN)))) {
        ++(vlSymsp->__Vcoverage[10686]);
    }
    if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_data_io_WEN) {
        ++(vlSymsp->__Vcoverage[10687]);
    }
    ++(vlSymsp->__Vcoverage[10696]);
    if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_data_io_WEN)))) {
        ++(vlSymsp->__Vcoverage[10694]);
    }
    if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_data_io_WEN) {
        ++(vlSymsp->__Vcoverage[10695]);
    }
    vlSelf->__Vdly__riscv_soc__DOT__core__DOT__cross_bar__DOT__reg_w_cnt 
        = vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__reg_w_cnt;
    ++(vlSymsp->__Vcoverage[11607]);
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[11585]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[11575]);
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        ++(vlSymsp->__Vcoverage[11570]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[11569]);
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        ++(vlSymsp->__Vcoverage[11568]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[11567]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[11561]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[11580]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[11603]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[11602]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[11556]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[11605]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[11566]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[11592]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[11597]);
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        ++(vlSymsp->__Vcoverage[11604]);
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        ++(vlSymsp->__Vcoverage[11606]);
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_flush)))) {
            ++(vlSymsp->__Vcoverage[11573]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_flush) {
            ++(vlSymsp->__Vcoverage[11596]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_flush) {
            ++(vlSymsp->__Vcoverage[11579]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_flush) {
            ++(vlSymsp->__Vcoverage[11601]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_flush)))) {
            ++(vlSymsp->__Vcoverage[11554]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_flush) {
            ++(vlSymsp->__Vcoverage[11574]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_flush) {
            ++(vlSymsp->__Vcoverage[11584]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_flush) {
            ++(vlSymsp->__Vcoverage[11555]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_flush)))) {
            ++(vlSymsp->__Vcoverage[11600]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_flush)))) {
            ++(vlSymsp->__Vcoverage[11595]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_flush)))) {
            ++(vlSymsp->__Vcoverage[11578]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_flush)))) {
            ++(vlSymsp->__Vcoverage[11559]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_flush) {
            ++(vlSymsp->__Vcoverage[11560]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_flush)))) {
            ++(vlSymsp->__Vcoverage[11583]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_flush)))) {
            ++(vlSymsp->__Vcoverage[11564]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_flush) {
            ++(vlSymsp->__Vcoverage[11565]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_flush)))) {
            ++(vlSymsp->__Vcoverage[11590]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_flush) {
            ++(vlSymsp->__Vcoverage[11591]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_flush)))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_in_stall)))) {
                ++(vlSymsp->__Vcoverage[11576]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_flush)))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_in_stall)))) {
                ++(vlSymsp->__Vcoverage[11571]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_flush)))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_in_stall)))) {
                ++(vlSymsp->__Vcoverage[11598]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_flush)))) {
            if (vlSelf->riscv_soc__DOT__core__DOT__decode_io_in_stall) {
                ++(vlSymsp->__Vcoverage[11553]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_flush)))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_in_stall)))) {
                ++(vlSymsp->__Vcoverage[11581]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_flush)))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_in_stall)))) {
                ++(vlSymsp->__Vcoverage[11562]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_flush)))) {
            if (vlSelf->riscv_soc__DOT__core__DOT__decode_io_in_stall) {
                ++(vlSymsp->__Vcoverage[11572]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_flush)))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_in_stall)))) {
                ++(vlSymsp->__Vcoverage[11552]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_flush)))) {
            if (vlSelf->riscv_soc__DOT__core__DOT__decode_io_in_stall) {
                ++(vlSymsp->__Vcoverage[11577]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_flush)))) {
            if (vlSelf->riscv_soc__DOT__core__DOT__decode_io_in_stall) {
                ++(vlSymsp->__Vcoverage[11558]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_flush)))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_in_stall)))) {
                ++(vlSymsp->__Vcoverage[11557]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_flush)))) {
            if (vlSelf->riscv_soc__DOT__core__DOT__decode_io_in_stall) {
                ++(vlSymsp->__Vcoverage[11582]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_flush)))) {
            if (vlSelf->riscv_soc__DOT__core__DOT__decode_io_in_stall) {
                ++(vlSymsp->__Vcoverage[11563]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_flush)))) {
            if (vlSelf->riscv_soc__DOT__core__DOT__decode_io_in_stall) {
                ++(vlSymsp->__Vcoverage[11589]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_flush)))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_in_stall)))) {
                ++(vlSymsp->__Vcoverage[11588]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_flush)))) {
            if (vlSelf->riscv_soc__DOT__core__DOT__decode_io_in_stall) {
                ++(vlSymsp->__Vcoverage[11594]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_flush)))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_in_stall)))) {
                ++(vlSymsp->__Vcoverage[11593]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_flush)))) {
            if (vlSelf->riscv_soc__DOT__core__DOT__decode_io_in_stall) {
                ++(vlSymsp->__Vcoverage[11599]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_flush)))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_in_stall)))) {
                if (((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_rs_addr 
                      == (QData)((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs2_addr))) 
                     & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_w_rs_en))) {
                    ++(vlSymsp->__Vcoverage[11586]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_flush)))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_in_stall)))) {
                if ((1U & (~ ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_rs_addr 
                               == (QData)((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs2_addr))) 
                              & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_w_rs_en))))) {
                    ++(vlSymsp->__Vcoverage[11587]);
                }
            }
        }
    }
    ++(vlSymsp->__Vcoverage[8482]);
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[8343]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[8337]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[8331]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[8325]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[8319]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[8313]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[8307]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[8301]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[8295]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[8289]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[8283]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[8265]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[8247]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[8235]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[8229]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[8211]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[8193]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[8187]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[8157]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[8253]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[8055]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[8241]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[8439]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[8133]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[8433]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[8041]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[8223]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[8115]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[8025]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[8109]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[8063]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[8145]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[8033]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[8175]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[7983]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[8139]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[8373]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[7978]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[8103]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[7988]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[8163]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[8205]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[8018]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[7973]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[8181]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[8451]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[8277]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[8217]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[8367]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[7993]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[8010]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[8097]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[8169]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[8048]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[7998]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[8481]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[8391]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[8091]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[8003]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[8199]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[8457]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[8259]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[8071]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[8078]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[8271]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[8085]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[8121]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[8127]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[8151]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[8349]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[8355]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[8361]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[8379]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[8385]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[8397]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[8403]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[8409]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[8415]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[8421]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[8427]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[8445]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[8463]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[8469]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[8473]);
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))) {
            if ((1U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))) {
                if ((2U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))) {
                    ++(vlSymsp->__Vcoverage[8051]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))) {
            if ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))) {
                ++(vlSymsp->__Vcoverage[8053]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))) {
            ++(vlSymsp->__Vcoverage[8054]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))) {
            ++(vlSymsp->__Vcoverage[8046]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))) {
            if ((1U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))) {
                ++(vlSymsp->__Vcoverage[8045]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))) {
            ++(vlSymsp->__Vcoverage[8039]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))) {
            if ((1U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))) {
                if ((2U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))) {
                    ++(vlSymsp->__Vcoverage[8037]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))) {
            if ((1U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))) {
                if ((2U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))) {
                    ++(vlSymsp->__Vcoverage[8036]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))) {
            if ((1U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))) {
                if ((2U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))) {
                    ++(vlSymsp->__Vcoverage[8029]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))) {
            if ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))) {
                ++(vlSymsp->__Vcoverage[8030]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))) {
            ++(vlSymsp->__Vcoverage[8024]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))) {
            ++(vlSymsp->__Vcoverage[8016]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))) {
            if ((1U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))) {
                if ((2U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))) {
                    ++(vlSymsp->__Vcoverage[8014]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))) {
            if ((1U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))) {
                if ((2U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))) {
                    ++(vlSymsp->__Vcoverage[8013]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))) {
            if ((1U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))) {
                if ((2U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))) {
                    ++(vlSymsp->__Vcoverage[8006]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))) {
            if ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))) {
                ++(vlSymsp->__Vcoverage[8008]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))) {
            ++(vlSymsp->__Vcoverage[7982]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))) {
            ++(vlSymsp->__Vcoverage[8009]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))) {
            ++(vlSymsp->__Vcoverage[7981]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))) {
            ++(vlSymsp->__Vcoverage[8070]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))) {
            ++(vlSymsp->__Vcoverage[8047]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))) {
            if ((1U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))) {
                if ((2U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))) {
                    ++(vlSymsp->__Vcoverage[8066]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))) {
            if ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))) {
                ++(vlSymsp->__Vcoverage[8044]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))) {
            if ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))) {
                ++(vlSymsp->__Vcoverage[8023]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))) {
            if ((1U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))) {
                if ((2U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))) {
                    ++(vlSymsp->__Vcoverage[8007]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))) {
            if ((1U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))) {
                if ((2U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))) {
                    ++(vlSymsp->__Vcoverage[8022]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))) {
            ++(vlSymsp->__Vcoverage[7977]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))) {
            ++(vlSymsp->__Vcoverage[8069]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))) {
            if ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))) {
                ++(vlSymsp->__Vcoverage[8015]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))) {
            ++(vlSymsp->__Vcoverage[7972]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))) {
            if ((1U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))) {
                if ((2U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))) {
                    ++(vlSymsp->__Vcoverage[8052]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))) {
            if ((1U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))) {
                if ((2U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))) {
                    ++(vlSymsp->__Vcoverage[8028]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))) {
            ++(vlSymsp->__Vcoverage[8032]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))) {
            ++(vlSymsp->__Vcoverage[7987]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))) {
            ++(vlSymsp->__Vcoverage[8017]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))) {
            if ((1U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))) {
                if ((2U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))) {
                    ++(vlSymsp->__Vcoverage[8058]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))) {
            ++(vlSymsp->__Vcoverage[7992]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))) {
            if ((1U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))) {
                ++(vlSymsp->__Vcoverage[8471]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))) {
            if ((1U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))) {
                if ((2U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))) {
                    ++(vlSymsp->__Vcoverage[8021]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))) {
            if ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))) {
                ++(vlSymsp->__Vcoverage[7971]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))) {
            ++(vlSymsp->__Vcoverage[8062]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))) {
            ++(vlSymsp->__Vcoverage[7976]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))) {
            if ((1U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))) {
                if ((2U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))) {
                    ++(vlSymsp->__Vcoverage[8067]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))) {
            ++(vlSymsp->__Vcoverage[8077]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))) {
            ++(vlSymsp->__Vcoverage[8061]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))) {
            if ((1U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))) {
                if ((2U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))) {
                    ++(vlSymsp->__Vcoverage[7969]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))) {
            if ((1U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))) {
                if ((2U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))) {
                    ++(vlSymsp->__Vcoverage[7970]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))) {
            ++(vlSymsp->__Vcoverage[8031]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))) {
            ++(vlSymsp->__Vcoverage[7986]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))) {
            if ((1U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))) {
                if ((2U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))) {
                    ++(vlSymsp->__Vcoverage[8075]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))) {
            ++(vlSymsp->__Vcoverage[8084]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))) {
            if ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))) {
                ++(vlSymsp->__Vcoverage[8038]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))) {
            ++(vlSymsp->__Vcoverage[7991]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))) {
            if ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))) {
                ++(vlSymsp->__Vcoverage[8083]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))) {
            ++(vlSymsp->__Vcoverage[8040]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))) {
            if ((1U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))) {
                if ((2U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))) {
                    ++(vlSymsp->__Vcoverage[8081]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))) {
            ++(vlSymsp->__Vcoverage[7996]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))) {
            ++(vlSymsp->__Vcoverage[7997]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))) {
            if ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))) {
                ++(vlSymsp->__Vcoverage[8478]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))) {
            if ((1U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))) {
                if ((2U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))) {
                    ++(vlSymsp->__Vcoverage[8477]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))) {
            ++(vlSymsp->__Vcoverage[8001]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))) {
            ++(vlSymsp->__Vcoverage[8002]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))) {
            if ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))) {
                ++(vlSymsp->__Vcoverage[8060]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))) {
            if ((1U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))) {
                if ((2U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))) {
                    ++(vlSymsp->__Vcoverage[8059]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))) {
            if ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))) {
                ++(vlSymsp->__Vcoverage[8068]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))) {
            if ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))) {
                ++(vlSymsp->__Vcoverage[8076]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))) {
            if ((1U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))) {
                if ((2U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))) {
                    ++(vlSymsp->__Vcoverage[8074]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))) {
            ++(vlSymsp->__Vcoverage[8472]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))) {
            if ((1U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))) {
                if ((2U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))) {
                    ++(vlSymsp->__Vcoverage[8082]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))) {
            ++(vlSymsp->__Vcoverage[8479]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))) {
            if ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))) {
                ++(vlSymsp->__Vcoverage[8470]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))) {
            if ((1U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))) {
                if ((2U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))) {
                    ++(vlSymsp->__Vcoverage[8476]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))) {
            ++(vlSymsp->__Vcoverage[8480]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))) {
            if (vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1_io_ICache_valid) {
                ++(vlSymsp->__Vcoverage[7999]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1_io_ICache_valid)))) {
                ++(vlSymsp->__Vcoverage[7975]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1_io_ICache_valid)))) {
                ++(vlSymsp->__Vcoverage[7995]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1_io_ICache_valid)))) {
                ++(vlSymsp->__Vcoverage[7966]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1_io_ICache_valid)))) {
                ++(vlSymsp->__Vcoverage[7985]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))) {
            if (vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1_io_ICache_valid) {
                ++(vlSymsp->__Vcoverage[7974]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))) {
            if (vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1_io_ICache_valid) {
                ++(vlSymsp->__Vcoverage[7965]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1_io_ICache_valid)))) {
                ++(vlSymsp->__Vcoverage[7980]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))) {
            if (vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1_io_ICache_valid) {
                ++(vlSymsp->__Vcoverage[7979]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))) {
            if (vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1_io_ICache_valid) {
                ++(vlSymsp->__Vcoverage[7994]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))) {
            if (vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1_io_ICache_valid) {
                ++(vlSymsp->__Vcoverage[7984]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))) {
            if (vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1_io_ICache_valid) {
                ++(vlSymsp->__Vcoverage[7989]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1_io_ICache_valid)))) {
                ++(vlSymsp->__Vcoverage[7990]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1_io_ICache_valid)))) {
                ++(vlSymsp->__Vcoverage[8000]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))) {
            if ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))) {
                if ((1U & (~ ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1) 
                              | (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_2))))) {
                    ++(vlSymsp->__Vcoverage[8050]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))) {
            if ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))) {
                if ((1U & (~ ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1) 
                              | (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_2))))) {
                    ++(vlSymsp->__Vcoverage[8043]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))) {
            if ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))) {
                if (((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1) 
                     | (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_2))) {
                    ++(vlSymsp->__Vcoverage[8042]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))) {
            if ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))) {
                if (((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1) 
                     | (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_2))) {
                    ++(vlSymsp->__Vcoverage[8034]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))) {
            if ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))) {
                if ((1U & (~ ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1) 
                              | (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_2))))) {
                    ++(vlSymsp->__Vcoverage[8020]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))) {
            if ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))) {
                if (((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1) 
                     | (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_2))) {
                    ++(vlSymsp->__Vcoverage[8019]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))) {
            if ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))) {
                if ((1U & (~ ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1) 
                              | (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_2))))) {
                    ++(vlSymsp->__Vcoverage[8056]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))) {
            if ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))) {
                if (((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1) 
                     | (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_2))) {
                    ++(vlSymsp->__Vcoverage[8011]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))) {
            if ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))) {
                if (((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1) 
                     | (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_2))) {
                    ++(vlSymsp->__Vcoverage[8049]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))) {
            if ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))) {
                if ((1U & (~ ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1) 
                              | (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_2))))) {
                    ++(vlSymsp->__Vcoverage[8005]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))) {
            if ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))) {
                if (((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1) 
                     | (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_2))) {
                    ++(vlSymsp->__Vcoverage[8004]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))) {
            if ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))) {
                if (((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1) 
                     | (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_2))) {
                    ++(vlSymsp->__Vcoverage[8073]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))) {
            if ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))) {
                if ((1U & (~ ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1) 
                              | (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_2))))) {
                    ++(vlSymsp->__Vcoverage[8064]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))) {
            if ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))) {
                if (((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1) 
                     | (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_2))) {
                    ++(vlSymsp->__Vcoverage[8057]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))) {
            if ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))) {
                if (((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1) 
                     | (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_2))) {
                    ++(vlSymsp->__Vcoverage[7967]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))) {
            if ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))) {
                if ((1U & (~ ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1) 
                              | (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_2))))) {
                    ++(vlSymsp->__Vcoverage[8079]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))) {
            if ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))) {
                if ((1U & (~ ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1) 
                              | (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_2))))) {
                    ++(vlSymsp->__Vcoverage[8012]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))) {
            if ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))) {
                if ((1U & (~ ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1) 
                              | (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_2))))) {
                    ++(vlSymsp->__Vcoverage[7968]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))) {
            if ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))) {
                if ((1U & (~ ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1) 
                              | (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_2))))) {
                    ++(vlSymsp->__Vcoverage[8035]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))) {
            if ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))) {
                if (((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1) 
                     | (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_2))) {
                    ++(vlSymsp->__Vcoverage[8080]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))) {
            if ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))) {
                if (((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1) 
                     | (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_2))) {
                    ++(vlSymsp->__Vcoverage[8065]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))) {
            if ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))) {
                if ((1U & (~ ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1) 
                              | (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_2))))) {
                    ++(vlSymsp->__Vcoverage[8072]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))) {
            if ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))) {
                if (((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1) 
                     | (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_2))) {
                    ++(vlSymsp->__Vcoverage[8475]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))) {
            if ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))) {
                if ((1U & (~ ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1) 
                              | (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_2))))) {
                    ++(vlSymsp->__Vcoverage[8474]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))) {
            if ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))) {
                if ((1U & (~ ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_offset) 
                              >> 3U)))) {
                    ++(vlSymsp->__Vcoverage[8027]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))) {
            if ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))) {
                if ((8U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_offset))) {
                    ++(vlSymsp->__Vcoverage[8026]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ ((0x29U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
                      & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))))) {
            ++(vlSymsp->__Vcoverage[8336]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x29U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            ++(vlSymsp->__Vcoverage[8335]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ ((0x28U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
                      & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))))) {
            ++(vlSymsp->__Vcoverage[8330]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x28U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            ++(vlSymsp->__Vcoverage[8329]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ ((0x27U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
                      & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))))) {
            ++(vlSymsp->__Vcoverage[8324]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x27U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            ++(vlSymsp->__Vcoverage[8323]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ ((0x26U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
                      & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))))) {
            ++(vlSymsp->__Vcoverage[8318]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x26U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            ++(vlSymsp->__Vcoverage[8317]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ ((0x25U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
                      & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))))) {
            ++(vlSymsp->__Vcoverage[8312]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x25U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            ++(vlSymsp->__Vcoverage[8311]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ ((0x24U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
                      & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))))) {
            ++(vlSymsp->__Vcoverage[8306]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x24U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            ++(vlSymsp->__Vcoverage[8305]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ ((0x23U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
                      & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))))) {
            ++(vlSymsp->__Vcoverage[8300]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x23U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            ++(vlSymsp->__Vcoverage[8299]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ ((0x22U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
                      & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))))) {
            ++(vlSymsp->__Vcoverage[8294]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x22U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            ++(vlSymsp->__Vcoverage[8293]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ ((0x21U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
                      & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))))) {
            ++(vlSymsp->__Vcoverage[8288]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x21U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            ++(vlSymsp->__Vcoverage[8287]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ ((0x20U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
                      & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))))) {
            ++(vlSymsp->__Vcoverage[8282]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x20U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            ++(vlSymsp->__Vcoverage[8281]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ ((0x1fU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
                      & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))))) {
            ++(vlSymsp->__Vcoverage[8276]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x1fU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            ++(vlSymsp->__Vcoverage[8275]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ ((0x1eU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
                      & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))))) {
            ++(vlSymsp->__Vcoverage[8270]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x1dU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            ++(vlSymsp->__Vcoverage[8263]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x1cU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            ++(vlSymsp->__Vcoverage[8257]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ ((0x1aU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
                      & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))))) {
            ++(vlSymsp->__Vcoverage[8246]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x1aU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            ++(vlSymsp->__Vcoverage[8245]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x19U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            ++(vlSymsp->__Vcoverage[8239]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ ((0x16U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
                      & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))))) {
            ++(vlSymsp->__Vcoverage[8222]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x16U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            ++(vlSymsp->__Vcoverage[8221]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ ((0x15U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
                      & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))))) {
            ++(vlSymsp->__Vcoverage[8216]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x15U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            ++(vlSymsp->__Vcoverage[8215]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x13U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            ++(vlSymsp->__Vcoverage[8203]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x12U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            ++(vlSymsp->__Vcoverage[8197]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x11U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            ++(vlSymsp->__Vcoverage[8191]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0xfU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            ++(vlSymsp->__Vcoverage[8179]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0xeU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            ++(vlSymsp->__Vcoverage[8173]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ ((0xcU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
                      & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))))) {
            ++(vlSymsp->__Vcoverage[8162]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0xcU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            ++(vlSymsp->__Vcoverage[8161]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ ((0xbU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
                      & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))))) {
            ++(vlSymsp->__Vcoverage[8156]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ ((0xaU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
                      & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))))) {
            ++(vlSymsp->__Vcoverage[8150]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0xaU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            ++(vlSymsp->__Vcoverage[8149]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x2cU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            ++(vlSymsp->__Vcoverage[8353]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((9U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            ++(vlSymsp->__Vcoverage[8143]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ ((8U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
                      & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))))) {
            ++(vlSymsp->__Vcoverage[8138]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x3aU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            ++(vlSymsp->__Vcoverage[8437]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x18U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            ++(vlSymsp->__Vcoverage[8233]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ ((0x39U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
                      & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))))) {
            ++(vlSymsp->__Vcoverage[8432]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ ((0x17U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
                      & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))))) {
            ++(vlSymsp->__Vcoverage[8228]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((5U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            ++(vlSymsp->__Vcoverage[8119]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ ((0x14U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
                      & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))))) {
            ++(vlSymsp->__Vcoverage[8210]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x14U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            ++(vlSymsp->__Vcoverage[8209]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((3U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            ++(vlSymsp->__Vcoverage[8107]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x3cU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            ++(vlSymsp->__Vcoverage[8449]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ ((0x13U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
                      & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))))) {
            ++(vlSymsp->__Vcoverage[8204]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((2U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            ++(vlSymsp->__Vcoverage[8101]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ ((0x33U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
                      & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))))) {
            ++(vlSymsp->__Vcoverage[8396]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ ((0x19U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
                      & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))))) {
            ++(vlSymsp->__Vcoverage[8240]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x33U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            ++(vlSymsp->__Vcoverage[8395]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x36U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            ++(vlSymsp->__Vcoverage[8413]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ ((0x18U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
                      & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))))) {
            ++(vlSymsp->__Vcoverage[8234]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x32U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            ++(vlSymsp->__Vcoverage[8389]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ ((0x1cU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
                      & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))))) {
            ++(vlSymsp->__Vcoverage[8258]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ ((0x2eU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
                      & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))))) {
            ++(vlSymsp->__Vcoverage[8366]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ ((0x12U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
                      & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))))) {
            ++(vlSymsp->__Vcoverage[8198]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ ((0xeU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
                      & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))))) {
            ++(vlSymsp->__Vcoverage[8174]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ ((0xdU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
                      & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))))) {
            ++(vlSymsp->__Vcoverage[8168]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ ((0x3bU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
                      & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))))) {
            ++(vlSymsp->__Vcoverage[8444]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ ((0x37U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
                      & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))))) {
            ++(vlSymsp->__Vcoverage[8420]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0xbU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            ++(vlSymsp->__Vcoverage[8155]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x3fU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            ++(vlSymsp->__Vcoverage[8467]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ ((0x2fU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
                      & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))))) {
            ++(vlSymsp->__Vcoverage[8372]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ ((0x1bU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
                      & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))))) {
            ++(vlSymsp->__Vcoverage[8252]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0xdU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            ++(vlSymsp->__Vcoverage[8167]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ ((2U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
                      & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))))) {
            ++(vlSymsp->__Vcoverage[8102]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x2fU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            ++(vlSymsp->__Vcoverage[8371]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ ((0x11U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
                      & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))))) {
            ++(vlSymsp->__Vcoverage[8192]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x1bU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            ++(vlSymsp->__Vcoverage[8251]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ ((0x31U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
                      & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))))) {
            ++(vlSymsp->__Vcoverage[8384]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ ((5U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
                      & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))))) {
            ++(vlSymsp->__Vcoverage[8120]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x1eU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            ++(vlSymsp->__Vcoverage[8269]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ ((0xfU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
                      & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))))) {
            ++(vlSymsp->__Vcoverage[8180]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x38U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            ++(vlSymsp->__Vcoverage[8425]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x17U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            ++(vlSymsp->__Vcoverage[8227]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x10U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            ++(vlSymsp->__Vcoverage[8185]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ ((0x10U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
                      & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))))) {
            ++(vlSymsp->__Vcoverage[8186]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ ((0x32U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
                      & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))))) {
            ++(vlSymsp->__Vcoverage[8390]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            ++(vlSymsp->__Vcoverage[8089]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
                      & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))))) {
            ++(vlSymsp->__Vcoverage[8090]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ ((0x3cU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
                      & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))))) {
            ++(vlSymsp->__Vcoverage[8450]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x3dU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            ++(vlSymsp->__Vcoverage[8455]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ ((0x1dU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
                      & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))))) {
            ++(vlSymsp->__Vcoverage[8264]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            ++(vlSymsp->__Vcoverage[8095]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
                      & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))))) {
            ++(vlSymsp->__Vcoverage[8096]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ ((3U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
                      & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))))) {
            ++(vlSymsp->__Vcoverage[8108]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((4U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            ++(vlSymsp->__Vcoverage[8113]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ ((4U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
                      & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))))) {
            ++(vlSymsp->__Vcoverage[8114]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((6U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            ++(vlSymsp->__Vcoverage[8125]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ ((6U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
                      & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))))) {
            ++(vlSymsp->__Vcoverage[8126]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((7U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            ++(vlSymsp->__Vcoverage[8131]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ ((7U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
                      & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))))) {
            ++(vlSymsp->__Vcoverage[8132]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((8U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            ++(vlSymsp->__Vcoverage[8137]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ ((9U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
                      & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))))) {
            ++(vlSymsp->__Vcoverage[8144]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x2aU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            ++(vlSymsp->__Vcoverage[8341]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ ((0x2aU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
                      & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))))) {
            ++(vlSymsp->__Vcoverage[8342]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x2bU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            ++(vlSymsp->__Vcoverage[8347]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ ((0x2bU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
                      & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))))) {
            ++(vlSymsp->__Vcoverage[8348]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ ((0x2cU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
                      & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))))) {
            ++(vlSymsp->__Vcoverage[8354]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x2dU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            ++(vlSymsp->__Vcoverage[8359]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ ((0x2dU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
                      & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))))) {
            ++(vlSymsp->__Vcoverage[8360]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x2eU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            ++(vlSymsp->__Vcoverage[8365]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x30U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            ++(vlSymsp->__Vcoverage[8377]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ ((0x30U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
                      & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))))) {
            ++(vlSymsp->__Vcoverage[8378]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x31U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            ++(vlSymsp->__Vcoverage[8383]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x34U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            ++(vlSymsp->__Vcoverage[8401]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ ((0x34U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
                      & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))))) {
            ++(vlSymsp->__Vcoverage[8402]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x35U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            ++(vlSymsp->__Vcoverage[8407]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ ((0x35U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
                      & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))))) {
            ++(vlSymsp->__Vcoverage[8408]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ ((0x36U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
                      & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))))) {
            ++(vlSymsp->__Vcoverage[8414]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x37U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            ++(vlSymsp->__Vcoverage[8419]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ ((0x38U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
                      & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))))) {
            ++(vlSymsp->__Vcoverage[8426]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x39U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            ++(vlSymsp->__Vcoverage[8431]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ ((0x3aU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
                      & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))))) {
            ++(vlSymsp->__Vcoverage[8438]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x3bU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            ++(vlSymsp->__Vcoverage[8443]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ ((0x3dU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
                      & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))))) {
            ++(vlSymsp->__Vcoverage[8456]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x3eU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            ++(vlSymsp->__Vcoverage[8461]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ ((0x3eU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
                      & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))))) {
            ++(vlSymsp->__Vcoverage[8462]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ ((0x3fU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
                      & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))))) {
            ++(vlSymsp->__Vcoverage[8468]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x1fU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1) {
                ++(vlSymsp->__Vcoverage[8274]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x1dU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1) {
                ++(vlSymsp->__Vcoverage[8262]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x1aU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1) {
                ++(vlSymsp->__Vcoverage[8244]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x18U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1) {
                ++(vlSymsp->__Vcoverage[8232]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x16U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1) {
                ++(vlSymsp->__Vcoverage[8220]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x14U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1) {
                ++(vlSymsp->__Vcoverage[8208]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x13U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1) {
                ++(vlSymsp->__Vcoverage[8202]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x10U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1) {
                ++(vlSymsp->__Vcoverage[8184]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0xfU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1) {
                ++(vlSymsp->__Vcoverage[8178]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0xdU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1) {
                ++(vlSymsp->__Vcoverage[8166]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0xcU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1) {
                ++(vlSymsp->__Vcoverage[8160]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0xbU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1) {
                ++(vlSymsp->__Vcoverage[8154]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x29U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1) {
                ++(vlSymsp->__Vcoverage[8334]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x3bU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1) {
                ++(vlSymsp->__Vcoverage[8442]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x19U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1) {
                ++(vlSymsp->__Vcoverage[8238]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x26U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1) {
                ++(vlSymsp->__Vcoverage[8316]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((6U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1) {
                ++(vlSymsp->__Vcoverage[8124]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((3U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1) {
                ++(vlSymsp->__Vcoverage[8106]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x35U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1) {
                ++(vlSymsp->__Vcoverage[8406]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x1bU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1) {
                ++(vlSymsp->__Vcoverage[8250]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x3cU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1) {
                ++(vlSymsp->__Vcoverage[8448]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x12U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1) {
                ++(vlSymsp->__Vcoverage[8196]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x37U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1) {
                ++(vlSymsp->__Vcoverage[8418]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x15U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1) {
                ++(vlSymsp->__Vcoverage[8214]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x11U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1) {
                ++(vlSymsp->__Vcoverage[8190]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x3eU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1) {
                ++(vlSymsp->__Vcoverage[8460]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x30U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1) {
                ++(vlSymsp->__Vcoverage[8376]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x1eU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1) {
                ++(vlSymsp->__Vcoverage[8268]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x2dU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1) {
                ++(vlSymsp->__Vcoverage[8358]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0xaU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1) {
                ++(vlSymsp->__Vcoverage[8148]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0xeU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1) {
                ++(vlSymsp->__Vcoverage[8172]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x2eU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1) {
                ++(vlSymsp->__Vcoverage[8364]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((7U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1) {
                ++(vlSymsp->__Vcoverage[8130]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x17U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1) {
                ++(vlSymsp->__Vcoverage[8226]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x31U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1) {
                ++(vlSymsp->__Vcoverage[8382]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x27U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1) {
                ++(vlSymsp->__Vcoverage[8322]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1) {
                ++(vlSymsp->__Vcoverage[8088]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x1cU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1) {
                ++(vlSymsp->__Vcoverage[8256]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x20U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1) {
                ++(vlSymsp->__Vcoverage[8280]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1) {
                ++(vlSymsp->__Vcoverage[8094]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x21U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1) {
                ++(vlSymsp->__Vcoverage[8286]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((2U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1) {
                ++(vlSymsp->__Vcoverage[8100]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x22U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1) {
                ++(vlSymsp->__Vcoverage[8292]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x23U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1) {
                ++(vlSymsp->__Vcoverage[8298]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((4U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1) {
                ++(vlSymsp->__Vcoverage[8112]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x24U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1) {
                ++(vlSymsp->__Vcoverage[8304]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((5U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1) {
                ++(vlSymsp->__Vcoverage[8118]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x25U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1) {
                ++(vlSymsp->__Vcoverage[8310]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((8U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1) {
                ++(vlSymsp->__Vcoverage[8136]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x28U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1) {
                ++(vlSymsp->__Vcoverage[8328]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((9U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1) {
                ++(vlSymsp->__Vcoverage[8142]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x2aU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1) {
                ++(vlSymsp->__Vcoverage[8340]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x2bU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1) {
                ++(vlSymsp->__Vcoverage[8346]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x2cU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1) {
                ++(vlSymsp->__Vcoverage[8352]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x2fU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1) {
                ++(vlSymsp->__Vcoverage[8370]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x32U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1) {
                ++(vlSymsp->__Vcoverage[8388]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x33U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1) {
                ++(vlSymsp->__Vcoverage[8394]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x34U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1) {
                ++(vlSymsp->__Vcoverage[8400]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x36U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1) {
                ++(vlSymsp->__Vcoverage[8412]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x38U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1) {
                ++(vlSymsp->__Vcoverage[8424]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x39U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1) {
                ++(vlSymsp->__Vcoverage[8430]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x3aU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1) {
                ++(vlSymsp->__Vcoverage[8436]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x3dU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1) {
                ++(vlSymsp->__Vcoverage[8454]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x3fU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1) {
                ++(vlSymsp->__Vcoverage[8466]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x1fU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1)))) {
                if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_2)))) {
                    ++(vlSymsp->__Vcoverage[8273]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x1fU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1)))) {
                if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_2) {
                    ++(vlSymsp->__Vcoverage[8272]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x1eU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1)))) {
                if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_2)))) {
                    ++(vlSymsp->__Vcoverage[8267]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x1eU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1)))) {
                if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_2) {
                    ++(vlSymsp->__Vcoverage[8266]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x1dU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1)))) {
                if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_2)))) {
                    ++(vlSymsp->__Vcoverage[8261]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x1dU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1)))) {
                if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_2) {
                    ++(vlSymsp->__Vcoverage[8260]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x1cU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1)))) {
                if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_2)))) {
                    ++(vlSymsp->__Vcoverage[8255]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x1bU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1)))) {
                if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_2) {
                    ++(vlSymsp->__Vcoverage[8248]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x1aU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1)))) {
                if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_2) {
                    ++(vlSymsp->__Vcoverage[8242]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x19U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1)))) {
                if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_2)))) {
                    ++(vlSymsp->__Vcoverage[8237]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x18U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1)))) {
                if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_2) {
                    ++(vlSymsp->__Vcoverage[8230]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x17U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1)))) {
                if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_2) {
                    ++(vlSymsp->__Vcoverage[8224]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x16U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1)))) {
                if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_2)))) {
                    ++(vlSymsp->__Vcoverage[8219]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x15U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1)))) {
                if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_2)))) {
                    ++(vlSymsp->__Vcoverage[8213]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x15U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1)))) {
                if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_2) {
                    ++(vlSymsp->__Vcoverage[8212]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x14U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1)))) {
                if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_2)))) {
                    ++(vlSymsp->__Vcoverage[8207]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x14U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1)))) {
                if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_2) {
                    ++(vlSymsp->__Vcoverage[8206]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x13U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1)))) {
                if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_2)))) {
                    ++(vlSymsp->__Vcoverage[8201]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x12U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1)))) {
                if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_2)))) {
                    ++(vlSymsp->__Vcoverage[8195]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x12U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1)))) {
                if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_2) {
                    ++(vlSymsp->__Vcoverage[8194]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x11U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1)))) {
                if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_2)))) {
                    ++(vlSymsp->__Vcoverage[8189]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x10U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1)))) {
                if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_2) {
                    ++(vlSymsp->__Vcoverage[8182]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0xfU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1)))) {
                if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_2)))) {
                    ++(vlSymsp->__Vcoverage[8177]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0xeU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1)))) {
                if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_2)))) {
                    ++(vlSymsp->__Vcoverage[8171]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0xbU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1)))) {
                if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_2)))) {
                    ++(vlSymsp->__Vcoverage[8153]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0xbU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1)))) {
                if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_2) {
                    ++(vlSymsp->__Vcoverage[8152]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0xaU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1)))) {
                if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_2)))) {
                    ++(vlSymsp->__Vcoverage[8147]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x3cU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1)))) {
                if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_2) {
                    ++(vlSymsp->__Vcoverage[8446]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((9U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1)))) {
                if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_2) {
                    ++(vlSymsp->__Vcoverage[8140]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x19U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1)))) {
                if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_2) {
                    ++(vlSymsp->__Vcoverage[8236]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x3aU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1)))) {
                if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_2) {
                    ++(vlSymsp->__Vcoverage[8434]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x18U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1)))) {
                if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_2)))) {
                    ++(vlSymsp->__Vcoverage[8231]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x27U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1)))) {
                if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_2)))) {
                    ++(vlSymsp->__Vcoverage[8321]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x27U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1)))) {
                if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_2) {
                    ++(vlSymsp->__Vcoverage[8320]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((7U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1)))) {
                if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_2)))) {
                    ++(vlSymsp->__Vcoverage[8129]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x17U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1)))) {
                if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_2)))) {
                    ++(vlSymsp->__Vcoverage[8225]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x26U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1)))) {
                if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_2)))) {
                    ++(vlSymsp->__Vcoverage[8315]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((6U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1)))) {
                if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_2) {
                    ++(vlSymsp->__Vcoverage[8122]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x37U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1)))) {
                if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_2) {
                    ++(vlSymsp->__Vcoverage[8416]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x35U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1)))) {
                if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_2)))) {
                    ++(vlSymsp->__Vcoverage[8405]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x34U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1)))) {
                if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_2)))) {
                    ++(vlSymsp->__Vcoverage[8399]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x21U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1)))) {
                if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_2) {
                    ++(vlSymsp->__Vcoverage[8284]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1)))) {
                if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_2)))) {
                    ++(vlSymsp->__Vcoverage[8093]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x33U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1)))) {
                if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_2)))) {
                    ++(vlSymsp->__Vcoverage[8393]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0xeU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1)))) {
                if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_2) {
                    ++(vlSymsp->__Vcoverage[8170]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x24U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1)))) {
                if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_2)))) {
                    ++(vlSymsp->__Vcoverage[8303]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x2fU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1)))) {
                if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_2) {
                    ++(vlSymsp->__Vcoverage[8368]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x20U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1)))) {
                if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_2)))) {
                    ++(vlSymsp->__Vcoverage[8279]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0xdU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1)))) {
                if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_2)))) {
                    ++(vlSymsp->__Vcoverage[8165]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0xdU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1)))) {
                if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_2) {
                    ++(vlSymsp->__Vcoverage[8164]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x1cU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1)))) {
                if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_2) {
                    ++(vlSymsp->__Vcoverage[8254]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x36U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1)))) {
                if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_2)))) {
                    ++(vlSymsp->__Vcoverage[8411]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x22U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1)))) {
                if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_2)))) {
                    ++(vlSymsp->__Vcoverage[8291]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x2dU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1)))) {
                if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_2) {
                    ++(vlSymsp->__Vcoverage[8356]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0xaU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1)))) {
                if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_2) {
                    ++(vlSymsp->__Vcoverage[8146]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x3dU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1)))) {
                if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_2)))) {
                    ++(vlSymsp->__Vcoverage[8453]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x29U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1)))) {
                if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_2) {
                    ++(vlSymsp->__Vcoverage[8332]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((9U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1)))) {
                if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_2)))) {
                    ++(vlSymsp->__Vcoverage[8141]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x29U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1)))) {
                if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_2)))) {
                    ++(vlSymsp->__Vcoverage[8333]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x25U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1)))) {
                if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_2) {
                    ++(vlSymsp->__Vcoverage[8308]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((5U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1)))) {
                if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_2)))) {
                    ++(vlSymsp->__Vcoverage[8117]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x34U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1)))) {
                if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_2) {
                    ++(vlSymsp->__Vcoverage[8398]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x25U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1)))) {
                if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_2)))) {
                    ++(vlSymsp->__Vcoverage[8309]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x30U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1)))) {
                if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_2) {
                    ++(vlSymsp->__Vcoverage[8374]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x1aU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1)))) {
                if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_2)))) {
                    ++(vlSymsp->__Vcoverage[8243]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0xcU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1)))) {
                if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_2) {
                    ++(vlSymsp->__Vcoverage[8158]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x36U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1)))) {
                if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_2) {
                    ++(vlSymsp->__Vcoverage[8410]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0xcU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1)))) {
                if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_2)))) {
                    ++(vlSymsp->__Vcoverage[8159]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x13U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1)))) {
                if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_2) {
                    ++(vlSymsp->__Vcoverage[8200]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0xfU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1)))) {
                if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_2) {
                    ++(vlSymsp->__Vcoverage[8176]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x23U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1)))) {
                if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_2)))) {
                    ++(vlSymsp->__Vcoverage[8297]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x2eU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1)))) {
                if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_2) {
                    ++(vlSymsp->__Vcoverage[8362]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x16U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1)))) {
                if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_2) {
                    ++(vlSymsp->__Vcoverage[8218]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x3fU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1)))) {
                if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_2)))) {
                    ++(vlSymsp->__Vcoverage[8465]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x30U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1)))) {
                if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_2)))) {
                    ++(vlSymsp->__Vcoverage[8375]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x38U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1)))) {
                if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_2)))) {
                    ++(vlSymsp->__Vcoverage[8423]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x31U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1)))) {
                if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_2)))) {
                    ++(vlSymsp->__Vcoverage[8381]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x10U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1)))) {
                if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_2)))) {
                    ++(vlSymsp->__Vcoverage[8183]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((7U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1)))) {
                if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_2) {
                    ++(vlSymsp->__Vcoverage[8128]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x20U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1)))) {
                if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_2) {
                    ++(vlSymsp->__Vcoverage[8278]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1)))) {
                if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_2)))) {
                    ++(vlSymsp->__Vcoverage[8087]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x11U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1)))) {
                if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_2) {
                    ++(vlSymsp->__Vcoverage[8188]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x33U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1)))) {
                if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_2) {
                    ++(vlSymsp->__Vcoverage[8392]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x1bU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1)))) {
                if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_2)))) {
                    ++(vlSymsp->__Vcoverage[8249]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x3dU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1)))) {
                if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_2) {
                    ++(vlSymsp->__Vcoverage[8452]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x3eU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1)))) {
                if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_2)))) {
                    ++(vlSymsp->__Vcoverage[8459]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x3fU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1)))) {
                if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_2) {
                    ++(vlSymsp->__Vcoverage[8464]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1)))) {
                if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_2) {
                    ++(vlSymsp->__Vcoverage[8086]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1)))) {
                if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_2) {
                    ++(vlSymsp->__Vcoverage[8092]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x21U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1)))) {
                if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_2)))) {
                    ++(vlSymsp->__Vcoverage[8285]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((2U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1)))) {
                if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_2) {
                    ++(vlSymsp->__Vcoverage[8098]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x22U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1)))) {
                if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_2) {
                    ++(vlSymsp->__Vcoverage[8290]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((2U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1)))) {
                if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_2)))) {
                    ++(vlSymsp->__Vcoverage[8099]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((3U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1)))) {
                if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_2) {
                    ++(vlSymsp->__Vcoverage[8104]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x23U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1)))) {
                if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_2) {
                    ++(vlSymsp->__Vcoverage[8296]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((3U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1)))) {
                if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_2)))) {
                    ++(vlSymsp->__Vcoverage[8105]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((4U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1)))) {
                if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_2) {
                    ++(vlSymsp->__Vcoverage[8110]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x24U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1)))) {
                if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_2) {
                    ++(vlSymsp->__Vcoverage[8302]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((4U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1)))) {
                if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_2)))) {
                    ++(vlSymsp->__Vcoverage[8111]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((5U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1)))) {
                if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_2) {
                    ++(vlSymsp->__Vcoverage[8116]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x26U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1)))) {
                if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_2) {
                    ++(vlSymsp->__Vcoverage[8314]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((6U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1)))) {
                if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_2)))) {
                    ++(vlSymsp->__Vcoverage[8123]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((8U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1)))) {
                if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_2) {
                    ++(vlSymsp->__Vcoverage[8134]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x28U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1)))) {
                if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_2) {
                    ++(vlSymsp->__Vcoverage[8326]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((8U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1)))) {
                if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_2)))) {
                    ++(vlSymsp->__Vcoverage[8135]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x28U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1)))) {
                if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_2)))) {
                    ++(vlSymsp->__Vcoverage[8327]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x2aU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1)))) {
                if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_2) {
                    ++(vlSymsp->__Vcoverage[8338]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x2aU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1)))) {
                if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_2)))) {
                    ++(vlSymsp->__Vcoverage[8339]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x2bU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1)))) {
                if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_2) {
                    ++(vlSymsp->__Vcoverage[8344]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x2bU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1)))) {
                if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_2)))) {
                    ++(vlSymsp->__Vcoverage[8345]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x2cU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1)))) {
                if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_2) {
                    ++(vlSymsp->__Vcoverage[8350]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x2cU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1)))) {
                if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_2)))) {
                    ++(vlSymsp->__Vcoverage[8351]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x2dU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1)))) {
                if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_2)))) {
                    ++(vlSymsp->__Vcoverage[8357]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x2eU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1)))) {
                if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_2)))) {
                    ++(vlSymsp->__Vcoverage[8363]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x2fU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1)))) {
                if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_2)))) {
                    ++(vlSymsp->__Vcoverage[8369]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x31U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1)))) {
                if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_2) {
                    ++(vlSymsp->__Vcoverage[8380]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x32U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1)))) {
                if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_2) {
                    ++(vlSymsp->__Vcoverage[8386]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x32U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1)))) {
                if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_2)))) {
                    ++(vlSymsp->__Vcoverage[8387]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x35U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1)))) {
                if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_2) {
                    ++(vlSymsp->__Vcoverage[8404]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x37U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1)))) {
                if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_2)))) {
                    ++(vlSymsp->__Vcoverage[8417]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x38U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1)))) {
                if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_2) {
                    ++(vlSymsp->__Vcoverage[8422]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x39U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1)))) {
                if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_2) {
                    ++(vlSymsp->__Vcoverage[8428]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x39U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1)))) {
                if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_2)))) {
                    ++(vlSymsp->__Vcoverage[8429]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x3aU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1)))) {
                if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_2)))) {
                    ++(vlSymsp->__Vcoverage[8435]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x3bU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1)))) {
                if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_2) {
                    ++(vlSymsp->__Vcoverage[8440]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x3bU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1)))) {
                if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_2)))) {
                    ++(vlSymsp->__Vcoverage[8441]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x3cU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1)))) {
                if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_2)))) {
                    ++(vlSymsp->__Vcoverage[8447]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x3eU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1)))) {
                if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_2) {
                    ++(vlSymsp->__Vcoverage[8458]);
                }
            }
        }
    }
    vlSelf->__Vdly__riscv_soc__DOT__core__DOT__cross_bar__DOT__reg_r_cnt 
        = vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__reg_r_cnt;
    ++(vlSymsp->__Vcoverage[13518]);
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[13488]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[13474]);
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        ++(vlSymsp->__Vcoverage[13517]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[13462]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[13505]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[13481]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[13469]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[13515]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[13516]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[13495]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[13500]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[13510]);
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (vlSelf->riscv_soc__DOT__core__DOT__execute_io_out_flush) {
            ++(vlSymsp->__Vcoverage[13480]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute_io_out_flush)))) {
            ++(vlSymsp->__Vcoverage[13479]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (vlSelf->riscv_soc__DOT__core__DOT__execute_io_out_flush) {
            ++(vlSymsp->__Vcoverage[13473]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute_io_out_flush)))) {
            ++(vlSymsp->__Vcoverage[13472]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (vlSelf->riscv_soc__DOT__core__DOT__execute_io_out_flush) {
            ++(vlSymsp->__Vcoverage[13504]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute_io_out_flush)))) {
            ++(vlSymsp->__Vcoverage[13467]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (vlSelf->riscv_soc__DOT__core__DOT__execute_io_out_flush) {
            ++(vlSymsp->__Vcoverage[13514]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute_io_out_flush)))) {
            ++(vlSymsp->__Vcoverage[13460]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute_io_out_flush)))) {
            ++(vlSymsp->__Vcoverage[13508]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (vlSelf->riscv_soc__DOT__core__DOT__execute_io_out_flush) {
            ++(vlSymsp->__Vcoverage[13461]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (vlSelf->riscv_soc__DOT__core__DOT__execute_io_out_flush) {
            ++(vlSymsp->__Vcoverage[13509]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (vlSelf->riscv_soc__DOT__core__DOT__execute_io_out_flush) {
            ++(vlSymsp->__Vcoverage[13468]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute_io_out_flush)))) {
            ++(vlSymsp->__Vcoverage[13486]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (vlSelf->riscv_soc__DOT__core__DOT__execute_io_out_flush) {
            ++(vlSymsp->__Vcoverage[13487]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute_io_out_flush)))) {
            ++(vlSymsp->__Vcoverage[13493]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (vlSelf->riscv_soc__DOT__core__DOT__execute_io_out_flush) {
            ++(vlSymsp->__Vcoverage[13494]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute_io_out_flush)))) {
            ++(vlSymsp->__Vcoverage[13498]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (vlSelf->riscv_soc__DOT__core__DOT__execute_io_out_flush) {
            ++(vlSymsp->__Vcoverage[13499]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute_io_out_flush)))) {
            ++(vlSymsp->__Vcoverage[13503]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute_io_out_flush)))) {
            ++(vlSymsp->__Vcoverage[13513]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute_io_out_flush)))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__stall)))) {
                ++(vlSymsp->__Vcoverage[13477]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute_io_out_flush)))) {
            if (vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__stall) {
                ++(vlSymsp->__Vcoverage[13478]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute_io_out_flush)))) {
            if (vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__stall) {
                ++(vlSymsp->__Vcoverage[13471]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute_io_out_flush)))) {
            if (vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__stall) {
                ++(vlSymsp->__Vcoverage[13497]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute_io_out_flush)))) {
            if (vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__stall) {
                ++(vlSymsp->__Vcoverage[13459]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute_io_out_flush)))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__stall)))) {
                ++(vlSymsp->__Vcoverage[13465]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute_io_out_flush)))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__stall)))) {
                ++(vlSymsp->__Vcoverage[13501]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute_io_out_flush)))) {
            if (vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__stall) {
                ++(vlSymsp->__Vcoverage[13502]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute_io_out_flush)))) {
            if (vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__stall) {
                ++(vlSymsp->__Vcoverage[13466]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute_io_out_flush)))) {
            if (vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__stall) {
                ++(vlSymsp->__Vcoverage[13512]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute_io_out_flush)))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__stall)))) {
                ++(vlSymsp->__Vcoverage[13470]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute_io_out_flush)))) {
            if (vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__stall) {
                ++(vlSymsp->__Vcoverage[13485]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute_io_out_flush)))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__stall)))) {
                ++(vlSymsp->__Vcoverage[13458]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute_io_out_flush)))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__stall)))) {
                ++(vlSymsp->__Vcoverage[13506]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute_io_out_flush)))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__stall)))) {
                ++(vlSymsp->__Vcoverage[13484]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute_io_out_flush)))) {
            if (vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__stall) {
                ++(vlSymsp->__Vcoverage[13492]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute_io_out_flush)))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__stall)))) {
                ++(vlSymsp->__Vcoverage[13491]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute_io_out_flush)))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__stall)))) {
                ++(vlSymsp->__Vcoverage[13496]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute_io_out_flush)))) {
            if (vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__stall) {
                ++(vlSymsp->__Vcoverage[13507]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute_io_out_flush)))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__stall)))) {
                ++(vlSymsp->__Vcoverage[13511]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute_io_out_flush)))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__stall)))) {
                if ((4U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__instType))) {
                    ++(vlSymsp->__Vcoverage[13475]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute_io_out_flush)))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__stall)))) {
                if ((4U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__instType))) {
                    ++(vlSymsp->__Vcoverage[13476]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute_io_out_flush)))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__stall)))) {
                if ((0x33U == (0xfe00707fU & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_inst))) {
                    ++(vlSymsp->__Vcoverage[13482]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute_io_out_flush)))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__stall)))) {
                if ((0x33U != (0xfe00707fU & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_inst))) {
                    ++(vlSymsp->__Vcoverage[13483]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute_io_out_flush)))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__stall)))) {
                if ((0x33U == (0xfe00707fU & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_inst))) {
                    ++(vlSymsp->__Vcoverage[13489]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute_io_out_flush)))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__stall)))) {
                if ((0x33U != (0xfe00707fU & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_inst))) {
                    ++(vlSymsp->__Vcoverage[13490]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back_io_out_w_rs_en)))) {
        ++(vlSymsp->__Vcoverage[13455]);
    }
    if (vlSelf->riscv_soc__DOT__core__DOT__write_back_io_out_w_rs_en) {
        ++(vlSymsp->__Vcoverage[13454]);
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute_io_out_flush)))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__stall)))) {
                if ((1U & (~ (((IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back_io_out_rs_addr) 
                               == (0x1fU & (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_inst 
                                            >> 0xfU))) 
                              & (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back_io_out_w_rs_en))))) {
                    ++(vlSymsp->__Vcoverage[13457]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute_io_out_flush)))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__stall)))) {
                if ((((IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back_io_out_rs_addr) 
                      == (0x1fU & (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_inst 
                                   >> 0x14U))) & (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back_io_out_w_rs_en))) {
                    ++(vlSymsp->__Vcoverage[13463]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute_io_out_flush)))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__stall)))) {
                if ((((IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back_io_out_rs_addr) 
                      == (0x1fU & (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_inst 
                                   >> 0xfU))) & (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back_io_out_w_rs_en))) {
                    ++(vlSymsp->__Vcoverage[13456]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute_io_out_flush)))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__stall)))) {
                if ((1U & (~ (((IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back_io_out_rs_addr) 
                               == (0x1fU & (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_inst 
                                            >> 0x14U))) 
                              & (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back_io_out_w_rs_en))))) {
                    ++(vlSymsp->__Vcoverage[13464]);
                }
            }
        }
    }
    ++(vlSymsp->__Vcoverage[10747]);
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[10734]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[10743]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[10726]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[10723]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[10740]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[10746]);
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (vlSelf->riscv_soc__DOT__axi_ram_io_ram_bus_r_bits_rlast) {
            ++(vlSymsp->__Vcoverage[10744]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__axi_ram_io_ram_bus_r_bits_rlast)))) {
            ++(vlSymsp->__Vcoverage[10745]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_b_valid)))) {
            ++(vlSymsp->__Vcoverage[10742]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_b_valid) {
            ++(vlSymsp->__Vcoverage[10741]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__reg_r_cnt))) {
            ++(vlSymsp->__Vcoverage[10733]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__reg_r_cnt))) {
            ++(vlSymsp->__Vcoverage[10738]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__reg_r_cnt))) {
            ++(vlSymsp->__Vcoverage[10739]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__reg_w_cnt))) {
            ++(vlSymsp->__Vcoverage[10722]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__reg_w_cnt))) {
            ++(vlSymsp->__Vcoverage[10725]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__reg_w_cnt))) {
            ++(vlSymsp->__Vcoverage[10724]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__reg_r_cnt))) {
            if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_r_valid) {
                ++(vlSymsp->__Vcoverage[10729]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__reg_r_cnt))) {
            if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_r_valid) {
                ++(vlSymsp->__Vcoverage[10737]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__reg_w_cnt))) {
            if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_w_valid) {
                ++(vlSymsp->__Vcoverage[10717]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__reg_w_cnt))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_w_valid)))) {
                ++(vlSymsp->__Vcoverage[10718]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__reg_r_cnt))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_r_valid)))) {
                if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_r_valid) {
                    ++(vlSymsp->__Vcoverage[10727]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__reg_r_cnt))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_r_valid)))) {
                if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_r_valid)))) {
                    ++(vlSymsp->__Vcoverage[10728]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__reg_r_cnt))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_r_valid)))) {
                if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_r_valid)))) {
                    ++(vlSymsp->__Vcoverage[10736]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__reg_r_cnt))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_r_valid)))) {
                if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_r_valid) {
                    ++(vlSymsp->__Vcoverage[10735]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__reg_w_cnt))) {
            if (((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__w_lockId)) 
                 & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_DCache_bus_w_ready) 
                    & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_w_valid)))) {
                ++(vlSymsp->__Vcoverage[10721]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__reg_r_cnt))) {
            if (((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__r_lockId)) 
                 & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_r_valid) 
                    & (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_ICache_bus_r_ready)))) {
                ++(vlSymsp->__Vcoverage[10732]);
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
                    ++(vlSymsp->__Vcoverage[10719]);
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
                    ++(vlSymsp->__Vcoverage[10720]);
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
                    ++(vlSymsp->__Vcoverage[10730]);
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
                    ++(vlSymsp->__Vcoverage[10731]);
                }
            }
        }
    }
    ++(vlSymsp->__Vcoverage[14143]);
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[14102]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[14142]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[14085]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[14118]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[14136]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[14099]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[14080]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[14110]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[14127]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[14139]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[14093]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[14121]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[14130]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[14133]);
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_ls_state)))) {
            ++(vlSymsp->__Vcoverage[14109]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_ls_state) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_ls_state)))) {
                ++(vlSymsp->__Vcoverage[14108]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_ls_state) {
            if (vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_ls_state) {
                ++(vlSymsp->__Vcoverage[14107]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_ls_state)))) {
            ++(vlSymsp->__Vcoverage[14098]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_ls_state) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_ls_state)))) {
                ++(vlSymsp->__Vcoverage[14116]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_ls_state) {
            ++(vlSymsp->__Vcoverage[14101]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_ls_state)))) {
            ++(vlSymsp->__Vcoverage[14126]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_ls_state) {
            if (vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_ls_state) {
                ++(vlSymsp->__Vcoverage[14090]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_ls_state) {
            if (vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_ls_state) {
                ++(vlSymsp->__Vcoverage[14077]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_ls_state) {
            ++(vlSymsp->__Vcoverage[14084]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_ls_state) {
            if (vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_ls_state) {
                ++(vlSymsp->__Vcoverage[14096]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_ls_state)))) {
            ++(vlSymsp->__Vcoverage[14079]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_ls_state) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_ls_state)))) {
                ++(vlSymsp->__Vcoverage[14078]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_ls_state)))) {
            ++(vlSymsp->__Vcoverage[14100]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_ls_state) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_ls_state)))) {
                ++(vlSymsp->__Vcoverage[14097]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_ls_state) {
            if (vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_ls_state) {
                ++(vlSymsp->__Vcoverage[14115]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_ls_state)))) {
            ++(vlSymsp->__Vcoverage[14092]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_ls_state)))) {
            ++(vlSymsp->__Vcoverage[14083]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_ls_state) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_ls_state)))) {
                ++(vlSymsp->__Vcoverage[14091]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_ls_state)))) {
            ++(vlSymsp->__Vcoverage[14117]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_ls_state) {
            if (vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_ls_state) {
                ++(vlSymsp->__Vcoverage[14124]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_ls_state) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_ls_state)))) {
                ++(vlSymsp->__Vcoverage[14125]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_ls_state) {
            if (vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_ls_state) {
                if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT___T_2)))) {
                    ++(vlSymsp->__Vcoverage[14106]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_ls_state) {
            if (vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_ls_state) {
                if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT___T_2)))) {
                    ++(vlSymsp->__Vcoverage[14095]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_ls_state) {
            if (vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_ls_state) {
                if (vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT___T_2) {
                    ++(vlSymsp->__Vcoverage[14094]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_ls_state) {
            if (vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_ls_state) {
                if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT___T_2)))) {
                    ++(vlSymsp->__Vcoverage[14123]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_ls_state) {
            if (vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_ls_state) {
                if (vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT___T_2) {
                    ++(vlSymsp->__Vcoverage[14075]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_ls_state) {
            if (vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_ls_state) {
                if (vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT___T_2) {
                    ++(vlSymsp->__Vcoverage[14122]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_ls_state) {
            if (vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_ls_state) {
                if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT___T_2)))) {
                    ++(vlSymsp->__Vcoverage[14076]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_ls_state) {
            if (vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_ls_state) {
                if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT___T_2)))) {
                    ++(vlSymsp->__Vcoverage[14114]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_ls_state) {
            if (vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_ls_state) {
                if (vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT___T_2) {
                    ++(vlSymsp->__Vcoverage[14105]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_ls_state) {
            if (vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_ls_state) {
                if (vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT___T_2) {
                    ++(vlSymsp->__Vcoverage[14088]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_ls_state) {
            if (vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_ls_state) {
                if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT___T_2)))) {
                    ++(vlSymsp->__Vcoverage[14089]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_ls_state) {
            if (vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_ls_state) {
                if (vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT___T_2) {
                    ++(vlSymsp->__Vcoverage[14113]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_ls_state)))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute_io_out_mem_avalid)))) {
                ++(vlSymsp->__Vcoverage[14104]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_ls_state)))) {
            if (vlSelf->riscv_soc__DOT__core__DOT__execute_io_out_mem_avalid) {
                ++(vlSymsp->__Vcoverage[14103]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_ls_state)))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute_io_out_mem_avalid)))) {
                ++(vlSymsp->__Vcoverage[14082]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_ls_state)))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute_io_out_mem_avalid)))) {
                ++(vlSymsp->__Vcoverage[14087]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_ls_state)))) {
            if (vlSelf->riscv_soc__DOT__core__DOT__execute_io_out_mem_avalid) {
                ++(vlSymsp->__Vcoverage[14081]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_ls_state)))) {
            if (vlSelf->riscv_soc__DOT__core__DOT__execute_io_out_mem_avalid) {
                ++(vlSymsp->__Vcoverage[14086]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_ls_state)))) {
            if (vlSelf->riscv_soc__DOT__core__DOT__execute_io_out_mem_avalid) {
                ++(vlSymsp->__Vcoverage[14111]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_ls_state)))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute_io_out_mem_avalid)))) {
                ++(vlSymsp->__Vcoverage[14112]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_stall)))) {
            ++(vlSymsp->__Vcoverage[14119]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_stall) {
            ++(vlSymsp->__Vcoverage[14135]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_stall)))) {
            ++(vlSymsp->__Vcoverage[14134]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_stall) {
            ++(vlSymsp->__Vcoverage[14120]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_stall) {
            ++(vlSymsp->__Vcoverage[14132]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_stall)))) {
            ++(vlSymsp->__Vcoverage[14131]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_stall) 
             | (0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_exuType)))) {
            ++(vlSymsp->__Vcoverage[14141]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_stall) 
             | (0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_exuType)))) {
            ++(vlSymsp->__Vcoverage[14138]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ ((IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_stall) 
                      | (0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_exuType)))))) {
            ++(vlSymsp->__Vcoverage[14140]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_stall) 
             | (0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_exuType)))) {
            ++(vlSymsp->__Vcoverage[14128]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ ((IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_stall) 
                      | (0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_exuType)))))) {
            ++(vlSymsp->__Vcoverage[14129]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ ((IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_stall) 
                      | (0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_exuType)))))) {
            ++(vlSymsp->__Vcoverage[14137]);
        }
    }
    ++(vlSymsp->__Vcoverage[10684]);
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[10545]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[10539]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[10533]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[10527]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[10521]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[10515]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[10509]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[10503]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[10497]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[10491]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[10485]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[10467]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[10449]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[10437]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[10431]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[10413]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[10395]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[10389]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[10371]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[10365]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[10359]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[10455]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[10257]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[10443]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[10641]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[10335]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[10635]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[10243]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[10425]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[10227]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[10265]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[10407]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[10220]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[10305]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[10347]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[10190]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[10212]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[10299]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[10235]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[10377]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[10185]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[10575]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[10317]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[10180]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[10593]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[10401]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[10419]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[10461]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[10273]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[10195]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[10175]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[10653]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[10311]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[10479]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[10205]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[10383]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[10200]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[10683]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[10250]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[10293]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[10341]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[10659]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[10280]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[10473]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[10287]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[10323]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[10329]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[10353]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[10551]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[10557]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[10563]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[10569]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[10581]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[10587]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[10599]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[10605]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[10611]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[10617]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[10623]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[10629]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[10647]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[10665]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[10671]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[10675]);
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
            if ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
                ++(vlSymsp->__Vcoverage[10255]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
            ++(vlSymsp->__Vcoverage[10256]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
            ++(vlSymsp->__Vcoverage[10248]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
            if ((1U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
                ++(vlSymsp->__Vcoverage[10247]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
            ++(vlSymsp->__Vcoverage[10241]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
            if ((1U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
                if ((2U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
                    ++(vlSymsp->__Vcoverage[10239]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
            if ((1U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
                if ((2U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
                    ++(vlSymsp->__Vcoverage[10238]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
            if ((1U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
                if ((2U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
                    ++(vlSymsp->__Vcoverage[10231]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
            if ((1U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
                if ((2U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
                    ++(vlSymsp->__Vcoverage[10230]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
            if ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
                ++(vlSymsp->__Vcoverage[10232]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
            if ((1U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
                if ((2U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
                    ++(vlSymsp->__Vcoverage[10224]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
            if ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
                ++(vlSymsp->__Vcoverage[10225]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
            if ((1U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
                if ((2U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
                    ++(vlSymsp->__Vcoverage[10216]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
            if ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
                ++(vlSymsp->__Vcoverage[10217]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
            if ((1U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
                if ((2U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
                    ++(vlSymsp->__Vcoverage[10209]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
            if ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
                ++(vlSymsp->__Vcoverage[10210]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
            if ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
                ++(vlSymsp->__Vcoverage[10278]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
            if ((1U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
                if ((2U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
                    ++(vlSymsp->__Vcoverage[10253]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
            if ((1U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
                if ((2U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
                    ++(vlSymsp->__Vcoverage[10254]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
            ++(vlSymsp->__Vcoverage[10211]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
            ++(vlSymsp->__Vcoverage[10183]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
            ++(vlSymsp->__Vcoverage[10279]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
            ++(vlSymsp->__Vcoverage[10203]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
            ++(vlSymsp->__Vcoverage[10179]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
            if ((1U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
                if ((2U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
                    ++(vlSymsp->__Vcoverage[10268]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
            if ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
                ++(vlSymsp->__Vcoverage[10246]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
            ++(vlSymsp->__Vcoverage[10198]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
            if ((1U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
                if ((2U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
                    ++(vlSymsp->__Vcoverage[10208]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
            if ((1U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
                if ((2U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
                    ++(vlSymsp->__Vcoverage[10223]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
            ++(vlSymsp->__Vcoverage[10178]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
            ++(vlSymsp->__Vcoverage[10174]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
            ++(vlSymsp->__Vcoverage[10226]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
            if ((1U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
                if ((2U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
                    ++(vlSymsp->__Vcoverage[10269]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
            ++(vlSymsp->__Vcoverage[10233]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
            if ((1U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
                if ((2U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
                    ++(vlSymsp->__Vcoverage[10215]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
            ++(vlSymsp->__Vcoverage[10189]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
            ++(vlSymsp->__Vcoverage[10219]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
            if ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
                ++(vlSymsp->__Vcoverage[10173]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
            if ((1U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
                if ((2U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
                    ++(vlSymsp->__Vcoverage[10260]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
            ++(vlSymsp->__Vcoverage[10194]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
            if ((1U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
                ++(vlSymsp->__Vcoverage[10673]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
            if ((1U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
                if ((2U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
                    ++(vlSymsp->__Vcoverage[10679]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
            ++(vlSymsp->__Vcoverage[10218]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
            ++(vlSymsp->__Vcoverage[10193]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
            ++(vlSymsp->__Vcoverage[10184]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
            if ((1U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
                if ((2U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
                    ++(vlSymsp->__Vcoverage[10171]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
            if ((1U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
                if ((2U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
                    ++(vlSymsp->__Vcoverage[10172]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
            ++(vlSymsp->__Vcoverage[10234]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
            ++(vlSymsp->__Vcoverage[10188]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
            if ((1U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
                if ((2U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
                    ++(vlSymsp->__Vcoverage[10277]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
            ++(vlSymsp->__Vcoverage[10286]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
            if ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
                ++(vlSymsp->__Vcoverage[10240]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
            if ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
                ++(vlSymsp->__Vcoverage[10285]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
            ++(vlSymsp->__Vcoverage[10242]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
            if ((1U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
                if ((2U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
                    ++(vlSymsp->__Vcoverage[10283]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
            ++(vlSymsp->__Vcoverage[10199]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
            if ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
                ++(vlSymsp->__Vcoverage[10680]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
            ++(vlSymsp->__Vcoverage[10249]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
            ++(vlSymsp->__Vcoverage[10204]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
            if ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
                ++(vlSymsp->__Vcoverage[10262]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
            if ((1U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
                if ((2U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
                    ++(vlSymsp->__Vcoverage[10261]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
            ++(vlSymsp->__Vcoverage[10263]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
            ++(vlSymsp->__Vcoverage[10264]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
            if ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
                ++(vlSymsp->__Vcoverage[10270]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
            ++(vlSymsp->__Vcoverage[10271]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
            ++(vlSymsp->__Vcoverage[10272]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
            if ((1U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
                if ((2U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
                    ++(vlSymsp->__Vcoverage[10276]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
            ++(vlSymsp->__Vcoverage[10674]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
            if ((1U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
                if ((2U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
                    ++(vlSymsp->__Vcoverage[10284]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
            ++(vlSymsp->__Vcoverage[10681]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
            if ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
                ++(vlSymsp->__Vcoverage[10672]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
            if ((1U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
                if ((2U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
                    ++(vlSymsp->__Vcoverage[10678]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
            ++(vlSymsp->__Vcoverage[10682]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1_io_DCache_valid)))) {
                ++(vlSymsp->__Vcoverage[10182]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
            if (vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1_io_DCache_valid) {
                ++(vlSymsp->__Vcoverage[10181]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
            if (vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1_io_DCache_valid) {
                ++(vlSymsp->__Vcoverage[10176]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
            if (vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1_io_DCache_valid) {
                ++(vlSymsp->__Vcoverage[10186]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
            if (vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1_io_DCache_valid) {
                ++(vlSymsp->__Vcoverage[10191]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
            if (vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1_io_DCache_valid) {
                ++(vlSymsp->__Vcoverage[10167]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1_io_DCache_valid)))) {
                ++(vlSymsp->__Vcoverage[10177]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1_io_DCache_valid)))) {
                ++(vlSymsp->__Vcoverage[10168]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1_io_DCache_valid)))) {
                ++(vlSymsp->__Vcoverage[10187]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1_io_DCache_valid)))) {
                ++(vlSymsp->__Vcoverage[10192]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
            if (vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1_io_DCache_valid) {
                ++(vlSymsp->__Vcoverage[10196]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1_io_DCache_valid)))) {
                ++(vlSymsp->__Vcoverage[10197]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
            if (vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1_io_DCache_valid) {
                ++(vlSymsp->__Vcoverage[10201]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1_io_DCache_valid)))) {
                ++(vlSymsp->__Vcoverage[10202]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
            if ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
                if (((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1) 
                     | (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2))) {
                    ++(vlSymsp->__Vcoverage[10259]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
            if ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
                if ((1U & (~ ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1) 
                              | (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2))))) {
                    ++(vlSymsp->__Vcoverage[10252]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
            if ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
                if ((1U & (~ ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1) 
                              | (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2))))) {
                    ++(vlSymsp->__Vcoverage[10245]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
            if ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
                if (((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1) 
                     | (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2))) {
                    ++(vlSymsp->__Vcoverage[10244]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
            if ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
                if (((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1) 
                     | (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2))) {
                    ++(vlSymsp->__Vcoverage[10236]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
            if ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
                if (((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1) 
                     | (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2))) {
                    ++(vlSymsp->__Vcoverage[10221]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
            if ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
                if ((1U & (~ ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1) 
                              | (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2))))) {
                    ++(vlSymsp->__Vcoverage[10258]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
            if ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
                if (((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1) 
                     | (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2))) {
                    ++(vlSymsp->__Vcoverage[10213]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
            if ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
                if (((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1) 
                     | (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2))) {
                    ++(vlSymsp->__Vcoverage[10251]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
            if ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
                if ((1U & (~ ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1) 
                              | (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2))))) {
                    ++(vlSymsp->__Vcoverage[10207]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
            if ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
                if (((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1) 
                     | (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2))) {
                    ++(vlSymsp->__Vcoverage[10206]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
            if ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
                if (((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1) 
                     | (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2))) {
                    ++(vlSymsp->__Vcoverage[10275]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
            if ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
                if ((1U & (~ ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1) 
                              | (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2))))) {
                    ++(vlSymsp->__Vcoverage[10222]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
            if ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
                if (((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1) 
                     | (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2))) {
                    ++(vlSymsp->__Vcoverage[10267]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
            if ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
                if ((1U & (~ ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1) 
                              | (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2))))) {
                    ++(vlSymsp->__Vcoverage[10214]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
            if ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
                if (((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1) 
                     | (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2))) {
                    ++(vlSymsp->__Vcoverage[10169]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
            if ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
                if ((1U & (~ ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1) 
                              | (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2))))) {
                    ++(vlSymsp->__Vcoverage[10237]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
            if ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
                if (((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1) 
                     | (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2))) {
                    ++(vlSymsp->__Vcoverage[10282]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
            if ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
                if ((1U & (~ ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1) 
                              | (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2))))) {
                    ++(vlSymsp->__Vcoverage[10281]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
            if ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
                if ((1U & (~ ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1) 
                              | (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2))))) {
                    ++(vlSymsp->__Vcoverage[10170]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
            if ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
                if ((1U & (~ ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1) 
                              | (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2))))) {
                    ++(vlSymsp->__Vcoverage[10266]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
            if ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
                if ((1U & (~ ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1) 
                              | (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2))))) {
                    ++(vlSymsp->__Vcoverage[10274]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
            if ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
                if (((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1) 
                     | (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2))) {
                    ++(vlSymsp->__Vcoverage[10677]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
            if ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
                if ((1U & (~ ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1) 
                              | (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2))))) {
                    ++(vlSymsp->__Vcoverage[10676]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
            if ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
                if ((1U & (~ ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_offset) 
                              >> 3U)))) {
                    ++(vlSymsp->__Vcoverage[10229]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
            if ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
                if ((8U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_offset))) {
                    ++(vlSymsp->__Vcoverage[10228]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ ((0x29U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
                      & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))))) {
            ++(vlSymsp->__Vcoverage[10538]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x29U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            ++(vlSymsp->__Vcoverage[10537]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ ((0x28U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
                      & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))))) {
            ++(vlSymsp->__Vcoverage[10532]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x28U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            ++(vlSymsp->__Vcoverage[10531]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ ((0x27U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
                      & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))))) {
            ++(vlSymsp->__Vcoverage[10526]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x27U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            ++(vlSymsp->__Vcoverage[10525]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ ((0x26U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
                      & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))))) {
            ++(vlSymsp->__Vcoverage[10520]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x26U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            ++(vlSymsp->__Vcoverage[10519]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ ((0x25U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
                      & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))))) {
            ++(vlSymsp->__Vcoverage[10514]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x25U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            ++(vlSymsp->__Vcoverage[10513]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ ((0x24U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
                      & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))))) {
            ++(vlSymsp->__Vcoverage[10508]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x24U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            ++(vlSymsp->__Vcoverage[10507]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ ((0x23U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
                      & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))))) {
            ++(vlSymsp->__Vcoverage[10502]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x23U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            ++(vlSymsp->__Vcoverage[10501]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ ((0x22U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
                      & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))))) {
            ++(vlSymsp->__Vcoverage[10496]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x22U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            ++(vlSymsp->__Vcoverage[10495]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ ((0x21U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
                      & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))))) {
            ++(vlSymsp->__Vcoverage[10490]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x21U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            ++(vlSymsp->__Vcoverage[10489]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ ((0x20U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
                      & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))))) {
            ++(vlSymsp->__Vcoverage[10484]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x20U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            ++(vlSymsp->__Vcoverage[10483]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ ((0x1fU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
                      & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))))) {
            ++(vlSymsp->__Vcoverage[10478]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x1fU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            ++(vlSymsp->__Vcoverage[10477]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ ((0x1eU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
                      & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))))) {
            ++(vlSymsp->__Vcoverage[10472]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x1dU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            ++(vlSymsp->__Vcoverage[10465]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x1cU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            ++(vlSymsp->__Vcoverage[10459]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ ((0x1aU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
                      & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))))) {
            ++(vlSymsp->__Vcoverage[10448]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x1aU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            ++(vlSymsp->__Vcoverage[10447]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x19U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            ++(vlSymsp->__Vcoverage[10441]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ ((0x16U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
                      & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))))) {
            ++(vlSymsp->__Vcoverage[10424]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x16U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            ++(vlSymsp->__Vcoverage[10423]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ ((0x15U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
                      & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))))) {
            ++(vlSymsp->__Vcoverage[10418]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x15U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            ++(vlSymsp->__Vcoverage[10417]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x13U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            ++(vlSymsp->__Vcoverage[10405]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x12U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            ++(vlSymsp->__Vcoverage[10399]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x11U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            ++(vlSymsp->__Vcoverage[10393]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0xfU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            ++(vlSymsp->__Vcoverage[10381]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ ((0xeU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
                      & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))))) {
            ++(vlSymsp->__Vcoverage[10376]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ ((0xdU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
                      & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))))) {
            ++(vlSymsp->__Vcoverage[10370]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ ((0xcU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
                      & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))))) {
            ++(vlSymsp->__Vcoverage[10364]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ ((0xbU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
                      & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))))) {
            ++(vlSymsp->__Vcoverage[10358]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ ((0xaU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
                      & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))))) {
            ++(vlSymsp->__Vcoverage[10352]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0xaU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            ++(vlSymsp->__Vcoverage[10351]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((9U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            ++(vlSymsp->__Vcoverage[10345]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ ((8U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
                      & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))))) {
            ++(vlSymsp->__Vcoverage[10340]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x3aU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            ++(vlSymsp->__Vcoverage[10639]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x18U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            ++(vlSymsp->__Vcoverage[10435]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ ((0x39U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
                      & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))))) {
            ++(vlSymsp->__Vcoverage[10634]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ ((0x17U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
                      & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))))) {
            ++(vlSymsp->__Vcoverage[10430]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((5U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            ++(vlSymsp->__Vcoverage[10321]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ ((0x37U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
                      & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))))) {
            ++(vlSymsp->__Vcoverage[10622]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x36U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            ++(vlSymsp->__Vcoverage[10615]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x14U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            ++(vlSymsp->__Vcoverage[10411]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x3cU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            ++(vlSymsp->__Vcoverage[10651]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((2U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            ++(vlSymsp->__Vcoverage[10303]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ ((0x12U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
                      & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))))) {
            ++(vlSymsp->__Vcoverage[10400]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ ((0x33U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
                      & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))))) {
            ++(vlSymsp->__Vcoverage[10598]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ ((0x19U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
                      & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))))) {
            ++(vlSymsp->__Vcoverage[10442]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x33U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            ++(vlSymsp->__Vcoverage[10597]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0xeU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            ++(vlSymsp->__Vcoverage[10375]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ ((0x3bU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
                      & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))))) {
            ++(vlSymsp->__Vcoverage[10646]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ ((0x2fU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
                      & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))))) {
            ++(vlSymsp->__Vcoverage[10574]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x2fU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            ++(vlSymsp->__Vcoverage[10573]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ ((0x11U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
                      & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))))) {
            ++(vlSymsp->__Vcoverage[10394]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            ++(vlSymsp->__Vcoverage[10291]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ ((0x1cU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
                      & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))))) {
            ++(vlSymsp->__Vcoverage[10460]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ ((0x14U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
                      & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))))) {
            ++(vlSymsp->__Vcoverage[10412]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x2eU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            ++(vlSymsp->__Vcoverage[10567]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ ((0x10U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
                      & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))))) {
            ++(vlSymsp->__Vcoverage[10388]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x3dU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            ++(vlSymsp->__Vcoverage[10657]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((3U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            ++(vlSymsp->__Vcoverage[10309]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0xdU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            ++(vlSymsp->__Vcoverage[10369]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ ((2U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
                      & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))))) {
            ++(vlSymsp->__Vcoverage[10304]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ ((5U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
                      & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))))) {
            ++(vlSymsp->__Vcoverage[10322]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ ((0x13U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
                      & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))))) {
            ++(vlSymsp->__Vcoverage[10406]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x2dU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            ++(vlSymsp->__Vcoverage[10561]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ ((0xfU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
                      & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))))) {
            ++(vlSymsp->__Vcoverage[10382]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0xbU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            ++(vlSymsp->__Vcoverage[10357]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x3fU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            ++(vlSymsp->__Vcoverage[10669]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0xcU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            ++(vlSymsp->__Vcoverage[10363]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ ((0x31U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
                      & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))))) {
            ++(vlSymsp->__Vcoverage[10586]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x1eU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            ++(vlSymsp->__Vcoverage[10471]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x38U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            ++(vlSymsp->__Vcoverage[10627]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x17U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            ++(vlSymsp->__Vcoverage[10429]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x10U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            ++(vlSymsp->__Vcoverage[10387]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ ((0x18U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
                      & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))))) {
            ++(vlSymsp->__Vcoverage[10436]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x32U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            ++(vlSymsp->__Vcoverage[10591]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ ((0x32U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
                      & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))))) {
            ++(vlSymsp->__Vcoverage[10592]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
                      & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))))) {
            ++(vlSymsp->__Vcoverage[10292]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ ((0x3cU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
                      & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))))) {
            ++(vlSymsp->__Vcoverage[10652]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x1bU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            ++(vlSymsp->__Vcoverage[10453]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ ((0x1bU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
                      & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))))) {
            ++(vlSymsp->__Vcoverage[10454]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ ((0x1dU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
                      & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))))) {
            ++(vlSymsp->__Vcoverage[10466]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            ++(vlSymsp->__Vcoverage[10297]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
                      & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))))) {
            ++(vlSymsp->__Vcoverage[10298]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ ((3U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
                      & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))))) {
            ++(vlSymsp->__Vcoverage[10310]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((4U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            ++(vlSymsp->__Vcoverage[10315]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ ((4U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
                      & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))))) {
            ++(vlSymsp->__Vcoverage[10316]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((6U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            ++(vlSymsp->__Vcoverage[10327]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ ((6U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
                      & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))))) {
            ++(vlSymsp->__Vcoverage[10328]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((7U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            ++(vlSymsp->__Vcoverage[10333]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ ((7U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
                      & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))))) {
            ++(vlSymsp->__Vcoverage[10334]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((8U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            ++(vlSymsp->__Vcoverage[10339]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ ((9U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
                      & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))))) {
            ++(vlSymsp->__Vcoverage[10346]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x2aU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            ++(vlSymsp->__Vcoverage[10543]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ ((0x2aU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
                      & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))))) {
            ++(vlSymsp->__Vcoverage[10544]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x2bU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            ++(vlSymsp->__Vcoverage[10549]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ ((0x2bU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
                      & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))))) {
            ++(vlSymsp->__Vcoverage[10550]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x2cU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            ++(vlSymsp->__Vcoverage[10555]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ ((0x2cU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
                      & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))))) {
            ++(vlSymsp->__Vcoverage[10556]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ ((0x2dU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
                      & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))))) {
            ++(vlSymsp->__Vcoverage[10562]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ ((0x2eU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
                      & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))))) {
            ++(vlSymsp->__Vcoverage[10568]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x30U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            ++(vlSymsp->__Vcoverage[10579]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ ((0x30U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
                      & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))))) {
            ++(vlSymsp->__Vcoverage[10580]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x31U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            ++(vlSymsp->__Vcoverage[10585]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x34U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            ++(vlSymsp->__Vcoverage[10603]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ ((0x34U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
                      & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))))) {
            ++(vlSymsp->__Vcoverage[10604]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x35U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            ++(vlSymsp->__Vcoverage[10609]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ ((0x35U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
                      & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))))) {
            ++(vlSymsp->__Vcoverage[10610]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ ((0x36U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
                      & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))))) {
            ++(vlSymsp->__Vcoverage[10616]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x37U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            ++(vlSymsp->__Vcoverage[10621]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ ((0x38U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
                      & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))))) {
            ++(vlSymsp->__Vcoverage[10628]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x39U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            ++(vlSymsp->__Vcoverage[10633]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ ((0x3aU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
                      & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))))) {
            ++(vlSymsp->__Vcoverage[10640]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x3bU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            ++(vlSymsp->__Vcoverage[10645]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ ((0x3dU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
                      & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))))) {
            ++(vlSymsp->__Vcoverage[10658]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x3eU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            ++(vlSymsp->__Vcoverage[10663]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ ((0x3eU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
                      & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))))) {
            ++(vlSymsp->__Vcoverage[10664]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ ((0x3fU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
                      & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))))) {
            ++(vlSymsp->__Vcoverage[10670]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x1fU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1) {
                ++(vlSymsp->__Vcoverage[10476]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x1dU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1) {
                ++(vlSymsp->__Vcoverage[10464]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x1aU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1) {
                ++(vlSymsp->__Vcoverage[10446]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x18U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1) {
                ++(vlSymsp->__Vcoverage[10434]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x16U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1) {
                ++(vlSymsp->__Vcoverage[10422]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x14U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1) {
                ++(vlSymsp->__Vcoverage[10410]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x13U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1) {
                ++(vlSymsp->__Vcoverage[10404]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x10U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1) {
                ++(vlSymsp->__Vcoverage[10386]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0xfU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1) {
                ++(vlSymsp->__Vcoverage[10380]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0xbU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1) {
                ++(vlSymsp->__Vcoverage[10356]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x3bU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1) {
                ++(vlSymsp->__Vcoverage[10644]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x19U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1) {
                ++(vlSymsp->__Vcoverage[10440]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x26U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1) {
                ++(vlSymsp->__Vcoverage[10518]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((6U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1) {
                ++(vlSymsp->__Vcoverage[10326]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x15U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1) {
                ++(vlSymsp->__Vcoverage[10416]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((3U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1) {
                ++(vlSymsp->__Vcoverage[10308]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x1bU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1) {
                ++(vlSymsp->__Vcoverage[10452]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x3cU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1) {
                ++(vlSymsp->__Vcoverage[10650]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x12U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1) {
                ++(vlSymsp->__Vcoverage[10398]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x29U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1) {
                ++(vlSymsp->__Vcoverage[10536]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0xeU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1) {
                ++(vlSymsp->__Vcoverage[10374]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0xdU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1) {
                ++(vlSymsp->__Vcoverage[10368]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x1cU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1) {
                ++(vlSymsp->__Vcoverage[10458]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x2dU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1) {
                ++(vlSymsp->__Vcoverage[10560]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0xaU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1) {
                ++(vlSymsp->__Vcoverage[10350]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0xcU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1) {
                ++(vlSymsp->__Vcoverage[10362]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x1eU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1) {
                ++(vlSymsp->__Vcoverage[10470]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1) {
                ++(vlSymsp->__Vcoverage[10290]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x35U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1) {
                ++(vlSymsp->__Vcoverage[10608]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x31U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1) {
                ++(vlSymsp->__Vcoverage[10584]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x37U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1) {
                ++(vlSymsp->__Vcoverage[10620]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x2eU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1) {
                ++(vlSymsp->__Vcoverage[10566]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x17U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1) {
                ++(vlSymsp->__Vcoverage[10428]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((7U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1) {
                ++(vlSymsp->__Vcoverage[10332]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x27U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1) {
                ++(vlSymsp->__Vcoverage[10524]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x11U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1) {
                ++(vlSymsp->__Vcoverage[10392]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x3eU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1) {
                ++(vlSymsp->__Vcoverage[10662]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x20U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1) {
                ++(vlSymsp->__Vcoverage[10482]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1) {
                ++(vlSymsp->__Vcoverage[10296]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x21U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1) {
                ++(vlSymsp->__Vcoverage[10488]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((2U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1) {
                ++(vlSymsp->__Vcoverage[10302]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x22U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1) {
                ++(vlSymsp->__Vcoverage[10494]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x23U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1) {
                ++(vlSymsp->__Vcoverage[10500]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((4U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1) {
                ++(vlSymsp->__Vcoverage[10314]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x24U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1) {
                ++(vlSymsp->__Vcoverage[10506]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((5U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1) {
                ++(vlSymsp->__Vcoverage[10320]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x25U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1) {
                ++(vlSymsp->__Vcoverage[10512]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((8U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1) {
                ++(vlSymsp->__Vcoverage[10338]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x28U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1) {
                ++(vlSymsp->__Vcoverage[10530]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((9U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1) {
                ++(vlSymsp->__Vcoverage[10344]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x2aU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1) {
                ++(vlSymsp->__Vcoverage[10542]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x2bU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1) {
                ++(vlSymsp->__Vcoverage[10548]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x2cU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1) {
                ++(vlSymsp->__Vcoverage[10554]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x2fU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1) {
                ++(vlSymsp->__Vcoverage[10572]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x30U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1) {
                ++(vlSymsp->__Vcoverage[10578]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x32U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1) {
                ++(vlSymsp->__Vcoverage[10590]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x33U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1) {
                ++(vlSymsp->__Vcoverage[10596]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x34U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1) {
                ++(vlSymsp->__Vcoverage[10602]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x36U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1) {
                ++(vlSymsp->__Vcoverage[10614]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x38U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1) {
                ++(vlSymsp->__Vcoverage[10626]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x39U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1) {
                ++(vlSymsp->__Vcoverage[10632]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x3aU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1) {
                ++(vlSymsp->__Vcoverage[10638]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x3dU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1) {
                ++(vlSymsp->__Vcoverage[10656]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x3fU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1) {
                ++(vlSymsp->__Vcoverage[10668]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x1fU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1)))) {
                if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2)))) {
                    ++(vlSymsp->__Vcoverage[10475]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x1fU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1)))) {
                if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2) {
                    ++(vlSymsp->__Vcoverage[10474]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x1eU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1)))) {
                if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2)))) {
                    ++(vlSymsp->__Vcoverage[10469]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x1eU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1)))) {
                if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2) {
                    ++(vlSymsp->__Vcoverage[10468]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x1dU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1)))) {
                if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2)))) {
                    ++(vlSymsp->__Vcoverage[10463]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x1dU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1)))) {
                if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2) {
                    ++(vlSymsp->__Vcoverage[10462]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x1cU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1)))) {
                if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2)))) {
                    ++(vlSymsp->__Vcoverage[10457]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x1bU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1)))) {
                if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2) {
                    ++(vlSymsp->__Vcoverage[10450]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x1aU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1)))) {
                if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2) {
                    ++(vlSymsp->__Vcoverage[10444]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x19U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1)))) {
                if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2)))) {
                    ++(vlSymsp->__Vcoverage[10439]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x18U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1)))) {
                if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2) {
                    ++(vlSymsp->__Vcoverage[10432]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x17U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1)))) {
                if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2) {
                    ++(vlSymsp->__Vcoverage[10426]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x16U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1)))) {
                if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2)))) {
                    ++(vlSymsp->__Vcoverage[10421]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x15U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1)))) {
                if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2)))) {
                    ++(vlSymsp->__Vcoverage[10415]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x15U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1)))) {
                if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2) {
                    ++(vlSymsp->__Vcoverage[10414]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x14U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1)))) {
                if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2)))) {
                    ++(vlSymsp->__Vcoverage[10409]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x14U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1)))) {
                if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2) {
                    ++(vlSymsp->__Vcoverage[10408]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x13U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1)))) {
                if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2)))) {
                    ++(vlSymsp->__Vcoverage[10403]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x12U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1)))) {
                if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2)))) {
                    ++(vlSymsp->__Vcoverage[10397]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x12U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1)))) {
                if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2) {
                    ++(vlSymsp->__Vcoverage[10396]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x11U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1)))) {
                if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2)))) {
                    ++(vlSymsp->__Vcoverage[10391]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x10U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1)))) {
                if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2) {
                    ++(vlSymsp->__Vcoverage[10384]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0xfU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1)))) {
                if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2)))) {
                    ++(vlSymsp->__Vcoverage[10379]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0xeU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1)))) {
                if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2)))) {
                    ++(vlSymsp->__Vcoverage[10373]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0xcU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1)))) {
                if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2)))) {
                    ++(vlSymsp->__Vcoverage[10361]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0xbU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1)))) {
                if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2)))) {
                    ++(vlSymsp->__Vcoverage[10355]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0xbU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1)))) {
                if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2) {
                    ++(vlSymsp->__Vcoverage[10354]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0xaU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1)))) {
                if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2)))) {
                    ++(vlSymsp->__Vcoverage[10349]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x3cU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1)))) {
                if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2) {
                    ++(vlSymsp->__Vcoverage[10648]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x19U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1)))) {
                if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2) {
                    ++(vlSymsp->__Vcoverage[10438]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x3aU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1)))) {
                if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2) {
                    ++(vlSymsp->__Vcoverage[10636]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x18U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1)))) {
                if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2)))) {
                    ++(vlSymsp->__Vcoverage[10433]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x27U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1)))) {
                if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2)))) {
                    ++(vlSymsp->__Vcoverage[10523]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x27U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1)))) {
                if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2) {
                    ++(vlSymsp->__Vcoverage[10522]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((7U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1)))) {
                if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2)))) {
                    ++(vlSymsp->__Vcoverage[10331]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x17U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1)))) {
                if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2)))) {
                    ++(vlSymsp->__Vcoverage[10427]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x26U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1)))) {
                if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2)))) {
                    ++(vlSymsp->__Vcoverage[10517]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((6U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1)))) {
                if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2) {
                    ++(vlSymsp->__Vcoverage[10324]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x25U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1)))) {
                if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2) {
                    ++(vlSymsp->__Vcoverage[10510]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((5U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1)))) {
                if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2)))) {
                    ++(vlSymsp->__Vcoverage[10319]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x37U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1)))) {
                if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2) {
                    ++(vlSymsp->__Vcoverage[10618]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x36U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1)))) {
                if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2)))) {
                    ++(vlSymsp->__Vcoverage[10613]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x23U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1)))) {
                if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2)))) {
                    ++(vlSymsp->__Vcoverage[10499]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x35U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1)))) {
                if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2)))) {
                    ++(vlSymsp->__Vcoverage[10607]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x22U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1)))) {
                if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2)))) {
                    ++(vlSymsp->__Vcoverage[10493]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x34U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1)))) {
                if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2)))) {
                    ++(vlSymsp->__Vcoverage[10601]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x34U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1)))) {
                if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2) {
                    ++(vlSymsp->__Vcoverage[10600]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x21U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1)))) {
                if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2) {
                    ++(vlSymsp->__Vcoverage[10486]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1)))) {
                if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2)))) {
                    ++(vlSymsp->__Vcoverage[10295]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x33U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1)))) {
                if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2)))) {
                    ++(vlSymsp->__Vcoverage[10595]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((9U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1)))) {
                if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2) {
                    ++(vlSymsp->__Vcoverage[10342]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x2cU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1)))) {
                if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2)))) {
                    ++(vlSymsp->__Vcoverage[10553]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x29U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1)))) {
                if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2) {
                    ++(vlSymsp->__Vcoverage[10534]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((9U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1)))) {
                if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2)))) {
                    ++(vlSymsp->__Vcoverage[10343]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0xeU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1)))) {
                if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2) {
                    ++(vlSymsp->__Vcoverage[10372]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x2fU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1)))) {
                if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2)))) {
                    ++(vlSymsp->__Vcoverage[10571]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x24U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1)))) {
                if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2)))) {
                    ++(vlSymsp->__Vcoverage[10505]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x2fU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1)))) {
                if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2) {
                    ++(vlSymsp->__Vcoverage[10570]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x20U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1)))) {
                if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2)))) {
                    ++(vlSymsp->__Vcoverage[10481]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0xdU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1)))) {
                if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2)))) {
                    ++(vlSymsp->__Vcoverage[10367]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0xdU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1)))) {
                if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2) {
                    ++(vlSymsp->__Vcoverage[10366]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x10U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1)))) {
                if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2)))) {
                    ++(vlSymsp->__Vcoverage[10385]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x33U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1)))) {
                if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2) {
                    ++(vlSymsp->__Vcoverage[10594]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x36U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1)))) {
                if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2) {
                    ++(vlSymsp->__Vcoverage[10612]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x3dU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1)))) {
                if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2) {
                    ++(vlSymsp->__Vcoverage[10654]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x13U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1)))) {
                if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2) {
                    ++(vlSymsp->__Vcoverage[10402]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0xfU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1)))) {
                if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2) {
                    ++(vlSymsp->__Vcoverage[10378]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x29U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1)))) {
                if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2)))) {
                    ++(vlSymsp->__Vcoverage[10535]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x1aU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1)))) {
                if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2)))) {
                    ++(vlSymsp->__Vcoverage[10445]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x16U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1)))) {
                if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2) {
                    ++(vlSymsp->__Vcoverage[10420]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x38U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1)))) {
                if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2)))) {
                    ++(vlSymsp->__Vcoverage[10625]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0xcU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1)))) {
                if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2) {
                    ++(vlSymsp->__Vcoverage[10360]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x25U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1)))) {
                if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2)))) {
                    ++(vlSymsp->__Vcoverage[10511]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x30U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1)))) {
                if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2) {
                    ++(vlSymsp->__Vcoverage[10576]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x3fU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1)))) {
                if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2)))) {
                    ++(vlSymsp->__Vcoverage[10667]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x30U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1)))) {
                if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2)))) {
                    ++(vlSymsp->__Vcoverage[10577]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x31U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1)))) {
                if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2)))) {
                    ++(vlSymsp->__Vcoverage[10583]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((7U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1)))) {
                if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2) {
                    ++(vlSymsp->__Vcoverage[10330]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x20U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1)))) {
                if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2) {
                    ++(vlSymsp->__Vcoverage[10480]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1)))) {
                if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2)))) {
                    ++(vlSymsp->__Vcoverage[10289]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x11U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1)))) {
                if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2) {
                    ++(vlSymsp->__Vcoverage[10390]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x1bU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1)))) {
                if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2)))) {
                    ++(vlSymsp->__Vcoverage[10451]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x3dU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1)))) {
                if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2)))) {
                    ++(vlSymsp->__Vcoverage[10655]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x1cU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1)))) {
                if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2) {
                    ++(vlSymsp->__Vcoverage[10456]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x3eU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1)))) {
                if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2)))) {
                    ++(vlSymsp->__Vcoverage[10661]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x3fU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1)))) {
                if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2) {
                    ++(vlSymsp->__Vcoverage[10666]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1)))) {
                if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2) {
                    ++(vlSymsp->__Vcoverage[10288]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1)))) {
                if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2) {
                    ++(vlSymsp->__Vcoverage[10294]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x21U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1)))) {
                if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2)))) {
                    ++(vlSymsp->__Vcoverage[10487]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((2U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1)))) {
                if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2) {
                    ++(vlSymsp->__Vcoverage[10300]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x22U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1)))) {
                if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2) {
                    ++(vlSymsp->__Vcoverage[10492]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((2U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1)))) {
                if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2)))) {
                    ++(vlSymsp->__Vcoverage[10301]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((3U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1)))) {
                if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2) {
                    ++(vlSymsp->__Vcoverage[10306]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x23U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1)))) {
                if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2) {
                    ++(vlSymsp->__Vcoverage[10498]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((3U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1)))) {
                if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2)))) {
                    ++(vlSymsp->__Vcoverage[10307]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((4U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1)))) {
                if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2) {
                    ++(vlSymsp->__Vcoverage[10312]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x24U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1)))) {
                if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2) {
                    ++(vlSymsp->__Vcoverage[10504]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((4U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1)))) {
                if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2)))) {
                    ++(vlSymsp->__Vcoverage[10313]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((5U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1)))) {
                if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2) {
                    ++(vlSymsp->__Vcoverage[10318]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x26U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1)))) {
                if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2) {
                    ++(vlSymsp->__Vcoverage[10516]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((6U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1)))) {
                if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2)))) {
                    ++(vlSymsp->__Vcoverage[10325]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((8U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1)))) {
                if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2) {
                    ++(vlSymsp->__Vcoverage[10336]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x28U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1)))) {
                if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2) {
                    ++(vlSymsp->__Vcoverage[10528]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((8U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1)))) {
                if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2)))) {
                    ++(vlSymsp->__Vcoverage[10337]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x28U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1)))) {
                if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2)))) {
                    ++(vlSymsp->__Vcoverage[10529]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0xaU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1)))) {
                if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2) {
                    ++(vlSymsp->__Vcoverage[10348]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x2aU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1)))) {
                if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2) {
                    ++(vlSymsp->__Vcoverage[10540]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x2aU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1)))) {
                if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2)))) {
                    ++(vlSymsp->__Vcoverage[10541]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x2bU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1)))) {
                if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2) {
                    ++(vlSymsp->__Vcoverage[10546]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x2bU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1)))) {
                if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2)))) {
                    ++(vlSymsp->__Vcoverage[10547]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x2cU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1)))) {
                if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2) {
                    ++(vlSymsp->__Vcoverage[10552]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x2dU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1)))) {
                if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2) {
                    ++(vlSymsp->__Vcoverage[10558]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x2dU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1)))) {
                if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2)))) {
                    ++(vlSymsp->__Vcoverage[10559]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x2eU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1)))) {
                if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2) {
                    ++(vlSymsp->__Vcoverage[10564]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x2eU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1)))) {
                if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2)))) {
                    ++(vlSymsp->__Vcoverage[10565]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x31U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1)))) {
                if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2) {
                    ++(vlSymsp->__Vcoverage[10582]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x32U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1)))) {
                if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2) {
                    ++(vlSymsp->__Vcoverage[10588]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x32U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1)))) {
                if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2)))) {
                    ++(vlSymsp->__Vcoverage[10589]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x35U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1)))) {
                if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2) {
                    ++(vlSymsp->__Vcoverage[10606]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x37U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1)))) {
                if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2)))) {
                    ++(vlSymsp->__Vcoverage[10619]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x38U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1)))) {
                if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2) {
                    ++(vlSymsp->__Vcoverage[10624]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x39U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1)))) {
                if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2) {
                    ++(vlSymsp->__Vcoverage[10630]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x39U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1)))) {
                if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2)))) {
                    ++(vlSymsp->__Vcoverage[10631]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x3aU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1)))) {
                if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2)))) {
                    ++(vlSymsp->__Vcoverage[10637]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x3bU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1)))) {
                if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2) {
                    ++(vlSymsp->__Vcoverage[10642]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x3bU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1)))) {
                if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2)))) {
                    ++(vlSymsp->__Vcoverage[10643]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x3cU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1)))) {
                if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2)))) {
                    ++(vlSymsp->__Vcoverage[10649]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x3eU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1)))) {
                if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2) {
                    ++(vlSymsp->__Vcoverage[10660]);
                }
            }
        }
    }
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_w_mem_en 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT___GEN_8));
    vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_is_w 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->riscv_soc__DOT__axi_ram__DOT___GEN_33));
    vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_wbus_finish 
        = ((IData)(vlSelf->reset) | (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___GEN_464));
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_mem_avalid 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT___GEN_7));
    vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_rbus_finish 
        = ((IData)(vlSelf->reset) | (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___GEN_460));
    vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_rbus_finish 
        = ((IData)(vlSelf->reset) | (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_460));
    vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_wbus_finish 
        = ((IData)(vlSelf->reset) | (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_464));
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
    if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___sram1_data_io_WEN_T_1) {
        VL_EXTEND_WQ(128,56, __Vtemp2096, vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___sram1_tag_io_D_T_1);
        vlSelf->__Vdlyvval__riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_tag__DOT__sram__DOT__ram__v0[0U] 
            = __Vtemp2096[0U];
        vlSelf->__Vdlyvval__riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_tag__DOT__sram__DOT__ram__v0[1U] 
            = __Vtemp2096[1U];
        vlSelf->__Vdlyvval__riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_tag__DOT__sram__DOT__ram__v0[2U] 
            = __Vtemp2096[2U];
        vlSelf->__Vdlyvval__riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_tag__DOT__sram__DOT__ram__v0[3U] 
            = __Vtemp2096[3U];
        vlSelf->__Vdlyvset__riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_tag__DOT__sram__DOT__ram__v0 = 1U;
        vlSelf->__Vdlyvdim0__riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_tag__DOT__sram__DOT__ram__v0 
            = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_tag_io_A;
    }
    if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___sram2_data_io_WEN_T_1) {
        VL_EXTEND_WQ(128,56, __Vtemp2097, vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___sram1_tag_io_D_T_1);
        vlSelf->__Vdlyvval__riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_tag__DOT__sram__DOT__ram__v0[0U] 
            = __Vtemp2097[0U];
        vlSelf->__Vdlyvval__riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_tag__DOT__sram__DOT__ram__v0[1U] 
            = __Vtemp2097[1U];
        vlSelf->__Vdlyvval__riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_tag__DOT__sram__DOT__ram__v0[2U] 
            = __Vtemp2097[2U];
        vlSelf->__Vdlyvval__riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_tag__DOT__sram__DOT__ram__v0[3U] 
            = __Vtemp2097[3U];
        vlSelf->__Vdlyvset__riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_tag__DOT__sram__DOT__ram__v0 = 1U;
        vlSelf->__Vdlyvdim0__riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_tag__DOT__sram__DOT__ram__v0 
            = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_tag_io_A;
    }
    if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___sram1_data_io_WEN_T_1) {
        VL_EXTEND_WQ(128,56, __Vtemp2098, vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___sram1_tag_io_D_T_1);
        vlSelf->__Vdlyvval__riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_tag__DOT__sram__DOT__ram__v0[0U] 
            = __Vtemp2098[0U];
        vlSelf->__Vdlyvval__riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_tag__DOT__sram__DOT__ram__v0[1U] 
            = __Vtemp2098[1U];
        vlSelf->__Vdlyvval__riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_tag__DOT__sram__DOT__ram__v0[2U] 
            = __Vtemp2098[2U];
        vlSelf->__Vdlyvval__riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_tag__DOT__sram__DOT__ram__v0[3U] 
            = __Vtemp2098[3U];
        vlSelf->__Vdlyvset__riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_tag__DOT__sram__DOT__ram__v0 = 1U;
        vlSelf->__Vdlyvdim0__riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_tag__DOT__sram__DOT__ram__v0 
            = vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_tag_io_A;
    }
    if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___sram2_data_io_WEN_T_1) {
        VL_EXTEND_WQ(128,56, __Vtemp2099, vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___sram1_tag_io_D_T_1);
        vlSelf->__Vdlyvval__riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_tag__DOT__sram__DOT__ram__v0[0U] 
            = __Vtemp2099[0U];
        vlSelf->__Vdlyvval__riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_tag__DOT__sram__DOT__ram__v0[1U] 
            = __Vtemp2099[1U];
        vlSelf->__Vdlyvval__riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_tag__DOT__sram__DOT__ram__v0[2U] 
            = __Vtemp2099[2U];
        vlSelf->__Vdlyvval__riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_tag__DOT__sram__DOT__ram__v0[3U] 
            = __Vtemp2099[3U];
        vlSelf->__Vdlyvset__riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_tag__DOT__sram__DOT__ram__v0 = 1U;
        vlSelf->__Vdlyvdim0__riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_tag__DOT__sram__DOT__ram__v0 
            = vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_tag_io_A;
    }
    vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_w_waddr 
        = (((QData)((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_471[1U])) 
            << 0x20U) | (QData)((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_471[0U])));
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[0U] 
        = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT___GEN_22[0U];
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[1U] 
        = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT___GEN_22[1U];
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[2U] 
        = (7U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT___GEN_22[2U]);
    vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_r_raddr 
        = (((QData)((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___GEN_470[1U])) 
            << 0x20U) | (QData)((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___GEN_470[0U])));
    vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_r_raddr 
        = (((QData)((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_470[1U])) 
            << 0x20U) | (QData)((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_470[0U])));
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
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_q[0U] 
        = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT___GEN_24[0U];
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_q[1U] 
        = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT___GEN_24[1U];
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_q[2U] 
        = (1U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT___GEN_24[2U]);
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[0U] 
        = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT___GEN_23[0U];
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[1U] 
        = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT___GEN_23[1U];
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[2U] 
        = (1U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT___GEN_23[2U]);
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_result[0U] 
        = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT___GEN_23[0U];
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_result[1U] 
        = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT___GEN_23[1U];
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_result[2U] 
        = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT___GEN_23[2U];
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_result[3U] 
        = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT___GEN_23[3U];
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_result[4U] 
        = (3U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT___GEN_23[4U]);
    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_valid 
        = ((IData)(vlSelf->reset) | (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT___GEN_14));
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_inst = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__execute_io_out_flush) {
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_inst = 0U;
    } else if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__stall)))) {
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_inst 
            = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_inst;
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_opType = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__execute_io_out_flush) {
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
                                                       : (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT___T_195)))))))));
    }
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
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_pc = 0ULL;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__execute_io_out_flush) {
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_pc = 0ULL;
    } else if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__stall)))) {
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_pc 
            = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_1;
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_stall = 0U;
    } else if ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_state))) {
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_stall 
            = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul_io_valid;
    } else if ((1U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_state))) {
        if ((2U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_state))) {
            vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_stall = 0U;
        }
    }
    if (vlSelf->reset) {
        vlSelf->__Vdly__riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_cnt = 0U;
    } else if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_state))) {
        if ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_state))) {
            vlSelf->__Vdly__riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_cnt 
                = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT___reg_cnt_T_1;
        } else if ((2U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_state))) {
            vlSelf->__Vdly__riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_cnt = 0U;
        }
    }
    if (vlSelf->reset) {
        vlSelf->__Vdly__riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_state = 0U;
    } else if ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_state))) {
        if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul_io_valid) {
            vlSelf->__Vdly__riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_state = 1U;
        }
    } else if ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_state))) {
        if ((0x20U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_cnt))) {
            vlSelf->__Vdly__riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_state = 2U;
        }
    } else if ((2U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_state))) {
        vlSelf->__Vdly__riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_state = 0U;
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[0U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[1U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[2U] = 0U;
    } else if ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_state))) {
        VL_EXTEND_WQ(65,64, __Vtemp2130, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu_io_op_data1);
        if ((4U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_out_exuType))) {
            vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[0U] 
                = (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu_io_op_data1);
            vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[1U] 
                = (IData)(((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu_io_op_data1 
                                          >> 0x1fU)))
                            ? 0x1ffffffffULL : 0ULL));
            vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[2U] 
                = (IData)((((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu_io_op_data1 
                                           >> 0x1fU)))
                             ? 0x1ffffffffULL : 0ULL) 
                           >> 0x20U));
        } else {
            vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[0U] 
                = ((2U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_out_exuType))
                    ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu_io_op_data1)
                    : __Vtemp2130[0U]);
            vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[1U] 
                = ((2U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_out_exuType))
                    ? (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu_io_op_data1 
                               >> 0x20U)) : __Vtemp2130[1U]);
            vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[2U] 
                = ((2U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_out_exuType))
                    ? (1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu_io_op_data1 
                                     >> 0x3fU))) : 
                   __Vtemp2130[2U]);
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_exuType = 0U;
    } else if ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_state))) {
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_exuType 
            = (1U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_out_exuType) 
                     >> 3U));
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_out_valid = 0U;
    } else if ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_state))) {
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_out_valid = 0U;
    } else if ((1U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_state))) {
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_out_valid 
            = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT___GEN_4;
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_imm = 0ULL;
    } else if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute_io_out_flush)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__stall)))) {
            vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_imm 
                = ((4U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__instType))
                    ? (QData)((IData)((0x3fU & (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_inst 
                                                >> 0x14U))))
                    : ((5U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__instType))
                        ? (QData)((IData)((0x1fU & 
                                           (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_inst 
                                            >> 0xfU))))
                        : vlSelf->riscv_soc__DOT__core__DOT__decode__DOT___imm_data_T_51));
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[0U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[1U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[2U] = 0U;
    } else if ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state))) {
        VL_EXTEND_WI(65,32, __Vtemp2135, (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu_io_op_data2));
        VL_EXTEND_WQ(65,64, __Vtemp2138, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu_io_op_data2);
        if ((2U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_out_exuType))) {
            vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[0U] 
                = ((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_out_exuType))
                    ? vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT___divisor_T_6[0U]
                    : __Vtemp2135[0U]);
            vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[1U] 
                = ((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_out_exuType))
                    ? vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT___divisor_T_6[1U]
                    : __Vtemp2135[1U]);
            vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[2U] 
                = ((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_out_exuType))
                    ? vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT___divisor_T_6[2U]
                    : __Vtemp2135[2U]);
        } else {
            vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[0U] 
                = ((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_out_exuType))
                    ? vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT___divisor_T_14[0U]
                    : __Vtemp2138[0U]);
            vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[1U] 
                = ((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_out_exuType))
                    ? vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT___divisor_T_14[1U]
                    : __Vtemp2138[1U]);
            vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[2U] 
                = ((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_out_exuType))
                    ? vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT___divisor_T_14[2U]
                    : __Vtemp2138[2U]);
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_dividend[0U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_dividend[1U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_dividend[2U] = 0U;
    } else if ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state))) {
        VL_EXTEND_WI(65,32, __Vtemp2143, (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu_io_op_data1));
        VL_EXTEND_WQ(65,64, __Vtemp2146, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu_io_op_data1);
        if ((2U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_out_exuType))) {
            vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_dividend[0U] 
                = ((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_out_exuType))
                    ? vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT___dividend_T_6[0U]
                    : __Vtemp2143[0U]);
            vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_dividend[1U] 
                = ((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_out_exuType))
                    ? vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT___dividend_T_6[1U]
                    : __Vtemp2143[1U]);
            vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_dividend[2U] 
                = ((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_out_exuType))
                    ? vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT___dividend_T_6[2U]
                    : __Vtemp2143[2U]);
        } else {
            vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_dividend[0U] 
                = ((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_out_exuType))
                    ? vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT___dividend_T_14[0U]
                    : __Vtemp2146[0U]);
            vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_dividend[1U] 
                = ((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_out_exuType))
                    ? vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT___dividend_T_14[1U]
                    : __Vtemp2146[1U]);
            vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_dividend[2U] 
                = ((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_out_exuType))
                    ? vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT___dividend_T_14[2U]
                    : __Vtemp2146[2U]);
        }
    }
    if (vlSelf->reset) {
        vlSelf->__Vdly__riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state = 0U;
    } else if ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state))) {
        vlSelf->__Vdly__riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state 
            = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div_io_valid)
                ? 1U : 0U);
    } else if ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state))) {
        if ((0x40U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_cnt))) {
            vlSelf->__Vdly__riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state = 2U;
        }
    } else if ((2U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state))) {
        vlSelf->__Vdly__riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state = 0U;
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_cnt = 0U;
    } else if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state))) {
        if ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state))) {
            vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_cnt 
                = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT___reg_cnt_T_1;
        } else if ((2U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state))) {
            vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_cnt = 0U;
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_exuType = 0U;
    } else if ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state))) {
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_exuType 
            = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div_io_valid)
                ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_out_exuType)
                : 0U);
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_out_valid = 0U;
    } else if ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state))) {
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_out_valid = 0U;
    } else if ((1U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state))) {
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_out_valid 
            = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT___GEN_3;
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_stall = 0U;
    } else if ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state))) {
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_stall 
            = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div_io_valid;
    } else if ((1U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state))) {
        if ((2U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state))) {
            vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_stall = 0U;
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__execute_io_out_flush) {
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
                                                        ? 0x34U
                                                        : (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT___T_262)))))))));
    }
    vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_stall 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT___GEN_0));
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs1_addr = 0U;
    } else if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute_io_out_flush)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__stall)))) {
            vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs1_addr 
                = (0x1fU & (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_inst 
                            >> 0xfU));
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_rs2_addr = 0U;
    } else if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_flush)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_in_stall)))) {
            vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_rs2_addr 
                = vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs2_addr;
        }
    }
    if (vlSelf->riscv_soc__DOT__core__DOT__write_back_io_out_w_rs_en) {
        vlSelf->__Vdlyvval__riscv_soc__DOT__core__DOT__decode__DOT__regfile__v0 
            = vlSelf->riscv_soc__DOT__core__DOT__write_back_io_out_result_data;
        vlSelf->__Vdlyvset__riscv_soc__DOT__core__DOT__decode__DOT__regfile__v0 = 1U;
        vlSelf->__Vdlyvdim0__riscv_soc__DOT__core__DOT__decode__DOT__regfile__v0 
            = vlSelf->riscv_soc__DOT__core__DOT__write_back_io_out_rs_addr;
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs1_data = 0ULL;
    } else if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute_io_out_flush)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__stall)))) {
            vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs1_data 
                = ((((IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back_io_out_rs_addr) 
                     == (0x1fU & (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_inst 
                                  >> 0xfU))) & (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back_io_out_w_rs_en))
                    ? vlSelf->riscv_soc__DOT__core__DOT__write_back_io_out_result_data
                    : ((0U == (0x1fU & (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_inst 
                                        >> 0xfU))) ? 0ULL
                        : vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile_rs1_data_MPORT_data));
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs2_data = 0ULL;
    } else if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute_io_out_flush)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__stall)))) {
            vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs2_data 
                = ((((IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back_io_out_rs_addr) 
                     == (0x1fU & (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_inst 
                                  >> 0x14U))) & (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back_io_out_w_rs_en))
                    ? vlSelf->riscv_soc__DOT__core__DOT__write_back_io_out_result_data
                    : ((0U == (0x1fU & (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_inst 
                                        >> 0x14U)))
                        ? 0ULL : vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile_rs2_data_MPORT_data));
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_rs2_data = 0ULL;
    } else if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_flush)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_in_stall)))) {
            vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_rs2_data 
                = (((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_rs_addr 
                     == (QData)((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs2_addr))) 
                    & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_w_rs_en))
                    ? vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_rs_data
                    : vlSelf->riscv_soc__DOT__core__DOT__execute__DOT___rs2_data_T_4);
        }
    }
    if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_data_io_WEN)))) {
        vlSelf->__Vdlyvval__riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_data__DOT__sram__DOT__ram__v0[0U] 
            = ((vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_wdata[0U] 
                & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__cache_mask[0U]) 
               | (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_data__DOT__sram__DOT__ram
                  [vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_data_io_A][0U] 
                  & (~ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__cache_mask[0U])));
        vlSelf->__Vdlyvval__riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_data__DOT__sram__DOT__ram__v0[1U] 
            = ((vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_wdata[1U] 
                & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__cache_mask[1U]) 
               | (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_data__DOT__sram__DOT__ram
                  [vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_data_io_A][1U] 
                  & (~ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__cache_mask[1U])));
        vlSelf->__Vdlyvval__riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_data__DOT__sram__DOT__ram__v0[2U] 
            = ((vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_wdata[2U] 
                & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__cache_mask[2U]) 
               | (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_data__DOT__sram__DOT__ram
                  [vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_data_io_A][2U] 
                  & (~ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__cache_mask[2U])));
        vlSelf->__Vdlyvval__riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_data__DOT__sram__DOT__ram__v0[3U] 
            = ((vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_wdata[3U] 
                & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__cache_mask[3U]) 
               | (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_data__DOT__sram__DOT__ram
                  [vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_data_io_A][3U] 
                  & (~ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__cache_mask[3U])));
        vlSelf->__Vdlyvset__riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_data__DOT__sram__DOT__ram__v0 = 1U;
        vlSelf->__Vdlyvdim0__riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_data__DOT__sram__DOT__ram__v0 
            = vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_data_io_A;
    }
    if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_data_io_WEN) {
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_data__DOT__sram_Q[0U] 
            = vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_data__DOT__sram__DOT__ram
            [vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_data_io_A][0U];
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_data__DOT__sram_Q[1U] 
            = vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_data__DOT__sram__DOT__ram
            [vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_data_io_A][1U];
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_data__DOT__sram_Q[2U] 
            = vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_data__DOT__sram__DOT__ram
            [vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_data_io_A][2U];
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_data__DOT__sram_Q[3U] 
            = vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_data__DOT__sram__DOT__ram
            [vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_data_io_A][3U];
    } else {
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_data__DOT__sram_Q[0U] 
            = VL_RANDOM_I(32);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_data__DOT__sram_Q[1U] 
            = VL_RANDOM_I(32);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_data__DOT__sram_Q[2U] 
            = VL_RANDOM_I(32);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_data__DOT__sram_Q[3U] 
            = VL_RANDOM_I(32);
    }
    if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_data_io_WEN)))) {
        vlSelf->__Vdlyvval__riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_data__DOT__sram__DOT__ram__v0[0U] 
            = ((vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_wdata[0U] 
                & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__cache_mask[0U]) 
               | (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_data__DOT__sram__DOT__ram
                  [vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_data_io_A][0U] 
                  & (~ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__cache_mask[0U])));
        vlSelf->__Vdlyvval__riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_data__DOT__sram__DOT__ram__v0[1U] 
            = ((vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_wdata[1U] 
                & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__cache_mask[1U]) 
               | (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_data__DOT__sram__DOT__ram
                  [vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_data_io_A][1U] 
                  & (~ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__cache_mask[1U])));
        vlSelf->__Vdlyvval__riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_data__DOT__sram__DOT__ram__v0[2U] 
            = ((vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_wdata[2U] 
                & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__cache_mask[2U]) 
               | (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_data__DOT__sram__DOT__ram
                  [vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_data_io_A][2U] 
                  & (~ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__cache_mask[2U])));
        vlSelf->__Vdlyvval__riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_data__DOT__sram__DOT__ram__v0[3U] 
            = ((vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_wdata[3U] 
                & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__cache_mask[3U]) 
               | (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_data__DOT__sram__DOT__ram
                  [vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_data_io_A][3U] 
                  & (~ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__cache_mask[3U])));
        vlSelf->__Vdlyvset__riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_data__DOT__sram__DOT__ram__v0 = 1U;
        vlSelf->__Vdlyvdim0__riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_data__DOT__sram__DOT__ram__v0 
            = vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_data_io_A;
    }
    if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_data_io_WEN) {
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_data__DOT__sram_Q[0U] 
            = vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_data__DOT__sram__DOT__ram
            [vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_data_io_A][0U];
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_data__DOT__sram_Q[1U] 
            = vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_data__DOT__sram__DOT__ram
            [vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_data_io_A][1U];
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_data__DOT__sram_Q[2U] 
            = vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_data__DOT__sram__DOT__ram
            [vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_data_io_A][2U];
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_data__DOT__sram_Q[3U] 
            = vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_data__DOT__sram__DOT__ram
            [vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_data_io_A][3U];
    } else {
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_data__DOT__sram_Q[0U] 
            = VL_RANDOM_I(32);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_data__DOT__sram_Q[1U] 
            = VL_RANDOM_I(32);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_data__DOT__sram_Q[2U] 
            = VL_RANDOM_I(32);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_data__DOT__sram_Q[3U] 
            = VL_RANDOM_I(32);
    }
    if (vlSelf->reset) {
        vlSelf->__Vdly__riscv_soc__DOT__core__DOT__cross_bar__DOT__reg_w_cnt = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT___T) {
        vlSelf->__Vdly__riscv_soc__DOT__core__DOT__cross_bar__DOT__reg_w_cnt 
            = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_w_valid)
                ? 2U : (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT___T_1));
    } else if (((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__w_lockId)) 
                & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_DCache_bus_w_ready) 
                   & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_w_valid)))) {
        vlSelf->__Vdly__riscv_soc__DOT__core__DOT__cross_bar__DOT__reg_w_cnt 
            = vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT___reg_w_cnt_T_1;
    } else if ((((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__w_lockId)) 
                 & (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT___T_8)) 
                & (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_bus_is_w))) {
        vlSelf->__Vdly__riscv_soc__DOT__core__DOT__cross_bar__DOT__reg_w_cnt 
            = vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT___reg_w_cnt_T_1;
    }
    vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__difftest_commit 
        = (1U & ((~ (IData)(vlSelf->reset)) & (~ ((IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_stall) 
                                                  | (0U 
                                                     == (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_exuType))))));
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__difftest_inst = 0U;
    } else if ((1U & (~ ((IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_stall) 
                         | (0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_exuType)))))) {
        vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__difftest_inst 
            = vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_inst;
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__difftest_pc = 0ULL;
    } else if ((1U & (~ ((IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_stall) 
                         | (0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_exuType)))))) {
        vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__difftest_pc 
            = vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_pc;
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_inst = 0U;
    } else if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_stall)))) {
        vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_inst 
            = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_inst;
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_exuType = 0U;
    } else if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_stall)))) {
        vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_exuType 
            = vlSelf->riscv_soc__DOT__core__DOT__execute_io_out_exuType;
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_pc = 0ULL;
    } else if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_stall)))) {
        vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_pc 
            = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_pc;
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_0 = 0U;
    } else if (((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
                & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_0 
            = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1)
                ? 2U : ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2)
                         ? 1U : (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_0)));
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_1 = 0U;
    } else if (((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
                & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_1 
            = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1)
                ? 2U : ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2)
                         ? 1U : (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_4)));
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_2 = 0U;
    } else if (((2U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
                & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_2 
            = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1)
                ? 2U : ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2)
                         ? 1U : (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_8)));
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_3 = 0U;
    } else if (((3U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
                & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_3 
            = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1)
                ? 2U : ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2)
                         ? 1U : (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_12)));
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_4 = 0U;
    } else if (((4U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
                & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_4 
            = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1)
                ? 2U : ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2)
                         ? 1U : (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_16)));
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_5 = 0U;
    } else if (((5U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
                & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_5 
            = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1)
                ? 2U : ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2)
                         ? 1U : (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_20)));
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_6 = 0U;
    } else if (((6U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
                & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_6 
            = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1)
                ? 2U : ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2)
                         ? 1U : (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_24)));
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_7 = 0U;
    } else if (((7U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
                & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_7 
            = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1)
                ? 2U : ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2)
                         ? 1U : (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_28)));
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_8 = 0U;
    } else if (((8U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
                & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_8 
            = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1)
                ? 2U : ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2)
                         ? 1U : (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_32)));
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_9 = 0U;
    } else if (((9U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
                & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_9 
            = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1)
                ? 2U : ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2)
                         ? 1U : (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_36)));
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_10 = 0U;
    } else if (((0xaU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
                & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_10 
            = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1)
                ? 2U : ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2)
                         ? 1U : (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_40)));
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_11 = 0U;
    } else if (((0xbU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
                & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_11 
            = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1)
                ? 2U : ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2)
                         ? 1U : (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_44)));
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_12 = 0U;
    } else if (((0xcU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
                & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_12 
            = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1)
                ? 2U : ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2)
                         ? 1U : (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_48)));
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_13 = 0U;
    } else if (((0xdU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
                & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_13 
            = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1)
                ? 2U : ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2)
                         ? 1U : (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_52)));
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_14 = 0U;
    } else if (((0xeU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
                & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_14 
            = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1)
                ? 2U : ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2)
                         ? 1U : (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_56)));
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_15 = 0U;
    } else if (((0xfU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
                & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_15 
            = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1)
                ? 2U : ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2)
                         ? 1U : (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_60)));
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_16 = 0U;
    } else if (((0x10U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
                & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_16 
            = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1)
                ? 2U : ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2)
                         ? 1U : (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_64)));
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_17 = 0U;
    } else if (((0x11U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
                & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_17 
            = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1)
                ? 2U : ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2)
                         ? 1U : (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_68)));
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_18 = 0U;
    } else if (((0x12U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
                & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_18 
            = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1)
                ? 2U : ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2)
                         ? 1U : (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_72)));
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_19 = 0U;
    } else if (((0x13U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
                & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_19 
            = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1)
                ? 2U : ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2)
                         ? 1U : (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_76)));
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_20 = 0U;
    } else if (((0x14U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
                & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_20 
            = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1)
                ? 2U : ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2)
                         ? 1U : (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_80)));
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_21 = 0U;
    } else if (((0x15U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
                & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_21 
            = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1)
                ? 2U : ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2)
                         ? 1U : (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_84)));
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_22 = 0U;
    } else if (((0x16U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
                & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_22 
            = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1)
                ? 2U : ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2)
                         ? 1U : (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_88)));
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_23 = 0U;
    } else if (((0x17U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
                & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_23 
            = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1)
                ? 2U : ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2)
                         ? 1U : (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_92)));
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_24 = 0U;
    } else if (((0x18U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
                & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_24 
            = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1)
                ? 2U : ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2)
                         ? 1U : (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_96)));
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_25 = 0U;
    } else if (((0x19U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
                & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_25 
            = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1)
                ? 2U : ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2)
                         ? 1U : (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_100)));
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_26 = 0U;
    } else if (((0x1aU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
                & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_26 
            = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1)
                ? 2U : ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2)
                         ? 1U : (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_104)));
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_27 = 0U;
    } else if (((0x1bU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
                & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_27 
            = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1)
                ? 2U : ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2)
                         ? 1U : (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_108)));
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_28 = 0U;
    } else if (((0x1cU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
                & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_28 
            = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1)
                ? 2U : ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2)
                         ? 1U : (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_112)));
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_29 = 0U;
    } else if (((0x1dU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
                & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_29 
            = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1)
                ? 2U : ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2)
                         ? 1U : (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_116)));
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_30 = 0U;
    } else if (((0x1eU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
                & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_30 
            = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1)
                ? 2U : ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2)
                         ? 1U : (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_120)));
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_31 = 0U;
    } else if (((0x1fU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
                & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_31 
            = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1)
                ? 2U : ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2)
                         ? 1U : (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_124)));
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_32 = 0U;
    } else if (((0x20U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
                & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_32 
            = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1)
                ? 2U : ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2)
                         ? 1U : (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_128)));
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_33 = 0U;
    } else if (((0x21U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
                & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_33 
            = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1)
                ? 2U : ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2)
                         ? 1U : (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_132)));
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_34 = 0U;
    } else if (((0x22U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
                & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_34 
            = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1)
                ? 2U : ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2)
                         ? 1U : (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_136)));
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_35 = 0U;
    } else if (((0x23U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
                & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_35 
            = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1)
                ? 2U : ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2)
                         ? 1U : (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_140)));
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_36 = 0U;
    } else if (((0x24U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
                & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_36 
            = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1)
                ? 2U : ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2)
                         ? 1U : (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_144)));
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_37 = 0U;
    } else if (((0x25U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
                & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_37 
            = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1)
                ? 2U : ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2)
                         ? 1U : (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_148)));
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_38 = 0U;
    } else if (((0x26U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
                & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_38 
            = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1)
                ? 2U : ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2)
                         ? 1U : (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_152)));
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_39 = 0U;
    } else if (((0x27U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
                & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_39 
            = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1)
                ? 2U : ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2)
                         ? 1U : (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_156)));
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_40 = 0U;
    } else if (((0x28U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
                & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_40 
            = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1)
                ? 2U : ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2)
                         ? 1U : (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_160)));
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_41 = 0U;
    } else if (((0x29U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
                & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_41 
            = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1)
                ? 2U : ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2)
                         ? 1U : (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_164)));
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_42 = 0U;
    } else if (((0x2aU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
                & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_42 
            = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1)
                ? 2U : ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2)
                         ? 1U : (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_168)));
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_43 = 0U;
    } else if (((0x2bU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
                & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_43 
            = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1)
                ? 2U : ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2)
                         ? 1U : (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_172)));
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_44 = 0U;
    } else if (((0x2cU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
                & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_44 
            = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1)
                ? 2U : ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2)
                         ? 1U : (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_176)));
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_45 = 0U;
    } else if (((0x2dU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
                & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_45 
            = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1)
                ? 2U : ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2)
                         ? 1U : (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_180)));
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_46 = 0U;
    } else if (((0x2eU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
                & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_46 
            = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1)
                ? 2U : ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2)
                         ? 1U : (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_184)));
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_47 = 0U;
    } else if (((0x2fU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
                & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_47 
            = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1)
                ? 2U : ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2)
                         ? 1U : (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_188)));
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_48 = 0U;
    } else if (((0x30U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
                & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_48 
            = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1)
                ? 2U : ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2)
                         ? 1U : (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_192)));
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_49 = 0U;
    } else if (((0x31U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
                & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_49 
            = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1)
                ? 2U : ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2)
                         ? 1U : (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_196)));
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_50 = 0U;
    } else if (((0x32U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
                & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_50 
            = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1)
                ? 2U : ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2)
                         ? 1U : (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_200)));
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_51 = 0U;
    } else if (((0x33U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
                & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_51 
            = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1)
                ? 2U : ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2)
                         ? 1U : (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_204)));
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_52 = 0U;
    } else if (((0x34U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
                & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_52 
            = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1)
                ? 2U : ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2)
                         ? 1U : (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_208)));
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_53 = 0U;
    } else if (((0x35U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
                & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_53 
            = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1)
                ? 2U : ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2)
                         ? 1U : (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_212)));
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_54 = 0U;
    } else if (((0x36U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
                & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_54 
            = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1)
                ? 2U : ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2)
                         ? 1U : (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_216)));
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_55 = 0U;
    } else if (((0x37U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
                & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_55 
            = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1)
                ? 2U : ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2)
                         ? 1U : (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_220)));
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_56 = 0U;
    } else if (((0x38U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
                & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_56 
            = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1)
                ? 2U : ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2)
                         ? 1U : (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_224)));
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_57 = 0U;
    } else if (((0x39U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
                & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_57 
            = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1)
                ? 2U : ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2)
                         ? 1U : (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_228)));
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_58 = 0U;
    } else if (((0x3aU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
                & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_58 
            = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1)
                ? 2U : ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2)
                         ? 1U : (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_232)));
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_59 = 0U;
    } else if (((0x3bU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
                & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_59 
            = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1)
                ? 2U : ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2)
                         ? 1U : (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_236)));
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_60 = 0U;
    } else if (((0x3cU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
                & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_60 
            = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1)
                ? 2U : ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2)
                         ? 1U : (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_240)));
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_61 = 0U;
    } else if (((0x3dU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
                & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_61 
            = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1)
                ? 2U : ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2)
                         ? 1U : (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_244)));
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_62 = 0U;
    } else if (((0x3eU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
                & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_62 
            = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1)
                ? 2U : ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2)
                         ? 1U : (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_248)));
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_63 = 0U;
    } else if (((0x3fU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
                & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_63 
            = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1)
                ? 2U : ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2)
                         ? 1U : (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_252)));
    }
    vlSelf->__Vdly__riscv_soc__DOT__core__DOT__cross_bar__DOT__reg_r_cnt 
        = ((IData)(vlSelf->reset) ? 0U : ((IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT___T_11)
                                           ? ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_r_valid)
                                               ? 2U
                                               : ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_r_valid)
                                                   ? 2U
                                                   : 
                                                  ((IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1_io_bus1_valid) 
                                                   | ((IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1_io_bus2_valid) 
                                                      & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_bus_is_w))))))
                                           : (((0U 
                                                == (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__r_lockId)) 
                                               & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_r_valid) 
                                                  & (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_ICache_bus_r_ready)))
                                               ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT___reg_r_cnt_T_1)
                                               : ((
                                                   (1U 
                                                    == (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__r_lockId)) 
                                                   & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_r_valid) 
                                                      & (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_DCache_bus_r_ready)))
                                                   ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT___reg_r_cnt_T_1)
                                                   : (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT___GEN_24)))));
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_w_addr = 0ULL;
    } else if (vlSelf->riscv_soc__DOT__axi_ram__DOT___T_5) {
        vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_w_addr 
            = vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_AXI_Bus_aw_bits_awaddr;
    } else if (vlSelf->riscv_soc__DOT__axi_ram__DOT___T_6) {
        vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_w_addr 
            = vlSelf->riscv_soc__DOT__axi_ram__DOT___reg_w_addr_T_1;
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_raddr = 0ULL;
    } else if (vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_r_state) {
        if (vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_r_state) {
            if (vlSelf->riscv_soc__DOT__axi_ram_io_ram_bus_r_valid) {
                vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_raddr 
                    = vlSelf->riscv_soc__DOT__axi_ram__DOT___GEN_9;
            }
        }
    } else if (vlSelf->riscv_soc__DOT__axi_ram__DOT___T_1) {
        vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_raddr 
            = (8ULL + vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_AXI_Bus_ar_bits_araddr);
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_r_valid = 0U;
    } else if (vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_r_state) {
        if (vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_r_state) {
            if (vlSelf->riscv_soc__DOT__axi_ram_io_ram_bus_r_valid) {
                vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_r_valid 
                    = (0U != (IData)(vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_rlen));
            }
        }
    } else {
        vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_r_valid 
            = vlSelf->riscv_soc__DOT__axi_ram__DOT___GEN_1;
    }
}
