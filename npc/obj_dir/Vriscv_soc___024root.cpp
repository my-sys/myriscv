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
    ++(vlSymsp->__Vcoverage[9382]);
    if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___sram1_data_io_WEN_T_1) {
        ++(vlSymsp->__Vcoverage[9380]);
    }
    if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___sram1_data_io_WEN_T_1)))) {
        ++(vlSymsp->__Vcoverage[9381]);
    }
    ++(vlSymsp->__Vcoverage[9390]);
    if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___sram2_data_io_WEN_T_1) {
        ++(vlSymsp->__Vcoverage[9388]);
    }
    if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___sram2_data_io_WEN_T_1)))) {
        ++(vlSymsp->__Vcoverage[9389]);
    }
    ++(vlSymsp->__Vcoverage[11584]);
    if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___sram1_data_io_WEN_T_1) {
        ++(vlSymsp->__Vcoverage[11582]);
    }
    if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___sram1_data_io_WEN_T_1)))) {
        ++(vlSymsp->__Vcoverage[11583]);
    }
    ++(vlSymsp->__Vcoverage[11592]);
    if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___sram2_data_io_WEN_T_1) {
        ++(vlSymsp->__Vcoverage[11590]);
    }
    if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___sram2_data_io_WEN_T_1)))) {
        ++(vlSymsp->__Vcoverage[11591]);
    }
    ++(vlSymsp->__Vcoverage[17029]);
    Vriscv_soc___024unit____Vdpiimwrap_ramCtrl_TOP____024unit(vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_raddr, __Vtask_ramCtrl__0__rdata, (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_AXI_Bus_ar_valid), vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_w_addr, vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_AXI_Bus_w_bits_wdata, vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_wmask, (IData)(vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_wen));
    vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata 
        = __Vtask_ramCtrl__0__rdata;
    ++(vlSymsp->__Vcoverage[17028]);
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        ++(vlSymsp->__Vcoverage[17027]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[17011]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[17005]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[17017]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[17021]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[17022]);
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        ++(vlSymsp->__Vcoverage[17023]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[17024]);
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        ++(vlSymsp->__Vcoverage[17025]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[17026]);
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_r_state)))) {
            ++(vlSymsp->__Vcoverage[17010]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_r_state) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_r_state)))) {
                ++(vlSymsp->__Vcoverage[17015]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_r_state) {
            if (vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_r_state) {
                ++(vlSymsp->__Vcoverage[17014]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_r_state) {
            if (vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_r_state) {
                ++(vlSymsp->__Vcoverage[17008]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_r_state) {
            if (vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_r_state) {
                ++(vlSymsp->__Vcoverage[17002]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (vlSelf->riscv_soc__DOT__axi_ram__DOT___T_5) {
            ++(vlSymsp->__Vcoverage[17020]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_r_state)))) {
            ++(vlSymsp->__Vcoverage[17016]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_r_state) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_r_state)))) {
                ++(vlSymsp->__Vcoverage[17009]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_r_state) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_r_state)))) {
                ++(vlSymsp->__Vcoverage[17003]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_r_state)))) {
            ++(vlSymsp->__Vcoverage[17004]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__axi_ram__DOT___T_5)))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__axi_ram__DOT___T_6)))) {
                ++(vlSymsp->__Vcoverage[17019]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__axi_ram__DOT___T_5)))) {
            if (vlSelf->riscv_soc__DOT__axi_ram__DOT___T_6) {
                ++(vlSymsp->__Vcoverage[17018]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_r_state)))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__axi_ram__DOT___T_1)))) {
                ++(vlSymsp->__Vcoverage[16999]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_r_state)))) {
            if (vlSelf->riscv_soc__DOT__axi_ram__DOT___T_1) {
                ++(vlSymsp->__Vcoverage[16998]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_r_state) {
            if (vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_r_state) {
                if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_r_valid)))) {
                    ++(vlSymsp->__Vcoverage[17013]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_r_state) {
            if (vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_r_state) {
                if (vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_r_valid) {
                    ++(vlSymsp->__Vcoverage[17012]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_r_state) {
            if (vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_r_state) {
                if (vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_r_valid) {
                    ++(vlSymsp->__Vcoverage[17006]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_r_state) {
            if (vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_r_state) {
                if (vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_r_valid) {
                    ++(vlSymsp->__Vcoverage[17000]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_r_state) {
            if (vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_r_state) {
                if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_r_valid)))) {
                    ++(vlSymsp->__Vcoverage[17007]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_r_state) {
            if (vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_r_state) {
                if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_r_valid)))) {
                    ++(vlSymsp->__Vcoverage[17001]);
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
    ++(vlSymsp->__Vcoverage[9378]);
    if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_data_io_WEN)))) {
        ++(vlSymsp->__Vcoverage[9376]);
    }
    if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_data_io_WEN) {
        ++(vlSymsp->__Vcoverage[9377]);
    }
    ++(vlSymsp->__Vcoverage[9386]);
    if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_data_io_WEN)))) {
        ++(vlSymsp->__Vcoverage[9384]);
    }
    if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_data_io_WEN) {
        ++(vlSymsp->__Vcoverage[9385]);
    }
    ++(vlSymsp->__Vcoverage[11852]);
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[11832]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[11819]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[11827]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[11811]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[11839]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[11851]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[11842]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[11847]);
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT___T)))) {
            ++(vlSymsp->__Vcoverage[11838]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT___T)))) {
            ++(vlSymsp->__Vcoverage[11831]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT___T) {
            ++(vlSymsp->__Vcoverage[11830]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT___T)))) {
            ++(vlSymsp->__Vcoverage[11810]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT___T) {
            ++(vlSymsp->__Vcoverage[11809]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT___T) {
            ++(vlSymsp->__Vcoverage[11818]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT___T) {
            ++(vlSymsp->__Vcoverage[11826]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT___T) {
            ++(vlSymsp->__Vcoverage[11837]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT___T) {
            ++(vlSymsp->__Vcoverage[11840]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT___T)))) {
            ++(vlSymsp->__Vcoverage[11841]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT___T) {
            ++(vlSymsp->__Vcoverage[11846]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT___T)))) {
            ++(vlSymsp->__Vcoverage[11845]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT___T) {
            ++(vlSymsp->__Vcoverage[11850]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT___T) {
            if (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT___reg_pc_1_T) {
                ++(vlSymsp->__Vcoverage[11822]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT___T) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT___reg_pc_1_T)))) {
                if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__stall)))) {
                    ++(vlSymsp->__Vcoverage[11820]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT___T) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT___reg_pc_1_T)))) {
                if (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__stall) {
                    ++(vlSymsp->__Vcoverage[11821]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT___T) {
            if (vlSelf->riscv_soc__DOT__core__DOT__decode_io_in_flush) {
                ++(vlSymsp->__Vcoverage[11808]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT___T)))) {
            if (vlSelf->riscv_soc__DOT__core__DOT__decode_io_in_flush) {
                ++(vlSymsp->__Vcoverage[11825]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT___T)))) {
            if (vlSelf->riscv_soc__DOT__core__DOT__decode_io_in_flush) {
                ++(vlSymsp->__Vcoverage[11817]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT___T)))) {
            if (vlSelf->riscv_soc__DOT__core__DOT__decode_io_in_flush) {
                ++(vlSymsp->__Vcoverage[11843]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT___T)))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_in_flush)))) {
                ++(vlSymsp->__Vcoverage[11844]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT___T)))) {
            if (vlSelf->riscv_soc__DOT__core__DOT__decode_io_in_flush) {
                ++(vlSymsp->__Vcoverage[11848]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT___T)))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_in_flush)))) {
                ++(vlSymsp->__Vcoverage[11849]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT___T)))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_in_flush)))) {
                if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__stall)))) {
                    ++(vlSymsp->__Vcoverage[11823]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT___T)))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_in_flush)))) {
                if (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__stall) {
                    ++(vlSymsp->__Vcoverage[11824]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT___T)))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_in_flush)))) {
                if (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__stall) {
                    ++(vlSymsp->__Vcoverage[11816]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT___T)))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_in_flush)))) {
                if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__stall)))) {
                    ++(vlSymsp->__Vcoverage[11815]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT___T) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_in_flush)))) {
                if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_flush)))) {
                    ++(vlSymsp->__Vcoverage[11807]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT___T) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_in_flush)))) {
                if (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_flush) {
                    ++(vlSymsp->__Vcoverage[11806]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT___T) {
            if (((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_in_flush) 
                 | (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_flush))) {
                ++(vlSymsp->__Vcoverage[11814]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT___T) {
            if ((1U & (~ (((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__stall) 
                           & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_in_flush))) 
                          & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_flush)))))) {
                ++(vlSymsp->__Vcoverage[11829]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT___T) {
            if ((((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__stall) 
                  & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_in_flush))) 
                 & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_flush)))) {
                ++(vlSymsp->__Vcoverage[11828]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT___T) {
            if ((1U & (~ (((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__stall) 
                           & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_in_flush))) 
                          & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_flush)))))) {
                ++(vlSymsp->__Vcoverage[11836]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT___T) {
            if ((1U & (~ ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_in_flush) 
                          | (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_flush))))) {
                if (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__stall) {
                    ++(vlSymsp->__Vcoverage[11813]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT___T) {
            if ((1U & (~ ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_in_flush) 
                          | (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_flush))))) {
                if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__stall)))) {
                    ++(vlSymsp->__Vcoverage[11812]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT___T) {
            if ((((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__stall) 
                  & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_in_flush))) 
                 & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_flush)))) {
                ++(vlSymsp->__Vcoverage[11835]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT___T) {
            if ((((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__stall) 
                  & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_in_flush))) 
                 & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_flush)))) {
                if ((1U & (~ (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0 
                                      >> 2U))))) {
                    ++(vlSymsp->__Vcoverage[11834]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT___T) {
            if ((((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__stall) 
                  & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_in_flush))) 
                 & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_flush)))) {
                if ((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0 
                                   >> 2U)))) {
                    ++(vlSymsp->__Vcoverage[11833]);
                }
            }
        }
    }
    vlSelf->__Vdlyvset__riscv_soc__DOT__core__DOT__decode__DOT__regfile__v0 = 0U;
    vlSelf->__Vdly__riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_state 
        = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_state;
    ++(vlSymsp->__Vcoverage[14613]);
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[14599]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[14612]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[14589]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[14581]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[14603]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[14606]);
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_state))) {
            if ((1U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_state))) {
                if ((2U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_state))) {
                    ++(vlSymsp->__Vcoverage[14607]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_state))) {
            if ((1U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_state))) {
                if ((2U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_state))) {
                    ++(vlSymsp->__Vcoverage[14585]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_state))) {
            ++(vlSymsp->__Vcoverage[14604]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_state))) {
            if ((1U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_state))) {
                if ((2U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_state))) {
                    ++(vlSymsp->__Vcoverage[14584]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_state))) {
            if ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_state))) {
                ++(vlSymsp->__Vcoverage[14610]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_state))) {
            ++(vlSymsp->__Vcoverage[14588]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_state))) {
            ++(vlSymsp->__Vcoverage[14580]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_state))) {
            ++(vlSymsp->__Vcoverage[14598]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_state))) {
            if ((1U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_state))) {
                if ((2U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_state))) {
                    ++(vlSymsp->__Vcoverage[14608]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_state))) {
            if ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_state))) {
                ++(vlSymsp->__Vcoverage[14586]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_state))) {
            if ((1U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_state))) {
                if ((2U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_state))) {
                    ++(vlSymsp->__Vcoverage[14577]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_state))) {
            if ((1U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_state))) {
                if ((2U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_state))) {
                    ++(vlSymsp->__Vcoverage[14596]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_state))) {
            if ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_state))) {
                ++(vlSymsp->__Vcoverage[14600]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_state))) {
            ++(vlSymsp->__Vcoverage[14587]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_state))) {
            ++(vlSymsp->__Vcoverage[14605]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_state))) {
            if ((1U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_state))) {
                if ((2U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_state))) {
                    ++(vlSymsp->__Vcoverage[14576]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_state))) {
            ++(vlSymsp->__Vcoverage[14602]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_state))) {
            if ((1U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_state))) {
                ++(vlSymsp->__Vcoverage[14578]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_state))) {
            if ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_state))) {
                ++(vlSymsp->__Vcoverage[14579]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_state))) {
            if ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_state))) {
                ++(vlSymsp->__Vcoverage[14597]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_state))) {
            if ((1U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_state))) {
                if ((2U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_state))) {
                    ++(vlSymsp->__Vcoverage[14595]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_state))) {
            if ((1U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_state))) {
                ++(vlSymsp->__Vcoverage[14601]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_state))) {
            ++(vlSymsp->__Vcoverage[14611]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_state))) {
            if ((1U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_state))) {
                ++(vlSymsp->__Vcoverage[14609]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_state))) {
            if ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_state))) {
                if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back_io_out_flush)))) {
                    ++(vlSymsp->__Vcoverage[14583]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_state))) {
            if ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_state))) {
                if (vlSelf->riscv_soc__DOT__core__DOT__write_back_io_out_flush) {
                    ++(vlSymsp->__Vcoverage[14582]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_state))) {
            if ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_state))) {
                if (vlSelf->riscv_soc__DOT__core__DOT__write_back_io_out_flush) {
                    ++(vlSymsp->__Vcoverage[14593]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_state))) {
            if ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_state))) {
                if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back_io_out_flush)))) {
                    ++(vlSymsp->__Vcoverage[14594]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_state))) {
            if (vlSelf->riscv_soc__DOT__core__DOT__write_back_io_out_flush) {
                ++(vlSymsp->__Vcoverage[14574]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_state))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back_io_out_flush)))) {
                ++(vlSymsp->__Vcoverage[14575]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_state))) {
            if (vlSelf->riscv_soc__DOT__core__DOT__write_back_io_out_flush) {
                ++(vlSymsp->__Vcoverage[14592]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_state))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back_io_out_flush)))) {
                if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul_io_valid)))) {
                    ++(vlSymsp->__Vcoverage[14591]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_state))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back_io_out_flush)))) {
                if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul_io_valid) {
                    ++(vlSymsp->__Vcoverage[14590]);
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
    ++(vlSymsp->__Vcoverage[11580]);
    if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_data_io_WEN)))) {
        ++(vlSymsp->__Vcoverage[11578]);
    }
    if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_data_io_WEN) {
        ++(vlSymsp->__Vcoverage[11579]);
    }
    ++(vlSymsp->__Vcoverage[11588]);
    if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_data_io_WEN)))) {
        ++(vlSymsp->__Vcoverage[11586]);
    }
    if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_data_io_WEN) {
        ++(vlSymsp->__Vcoverage[11587]);
    }
    vlSelf->__Vdly__riscv_soc__DOT__core__DOT__cross_bar__DOT__reg_w_cnt 
        = vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__reg_w_cnt;
    ++(vlSymsp->__Vcoverage[13844]);
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[13824]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[13816]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[13791]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[13799]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[13806]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[13829]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[13835]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[13843]);
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state))) {
            ++(vlSymsp->__Vcoverage[13822]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state))) {
            if ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state))) {
                ++(vlSymsp->__Vcoverage[13814]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state))) {
            ++(vlSymsp->__Vcoverage[13815]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state))) {
            if ((1U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state))) {
                if ((2U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state))) {
                    ++(vlSymsp->__Vcoverage[13802]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state))) {
            if ((1U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state))) {
                if ((2U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state))) {
                    ++(vlSymsp->__Vcoverage[13820]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state))) {
            if ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state))) {
                ++(vlSymsp->__Vcoverage[13804]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state))) {
            ++(vlSymsp->__Vcoverage[13805]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state))) {
            if ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state))) {
                ++(vlSymsp->__Vcoverage[13821]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state))) {
            ++(vlSymsp->__Vcoverage[13789]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state))) {
            ++(vlSymsp->__Vcoverage[13834]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state))) {
            ++(vlSymsp->__Vcoverage[13828]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state))) {
            if ((1U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state))) {
                if ((2U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state))) {
                    ++(vlSymsp->__Vcoverage[13803]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state))) {
            ++(vlSymsp->__Vcoverage[13827]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state))) {
            ++(vlSymsp->__Vcoverage[13842]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state))) {
            if ((1U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state))) {
                if ((2U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state))) {
                    ++(vlSymsp->__Vcoverage[13819]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state))) {
            ++(vlSymsp->__Vcoverage[13798]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state))) {
            if ((1U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state))) {
                if ((2U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state))) {
                    ++(vlSymsp->__Vcoverage[13838]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state))) {
            if ((1U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state))) {
                if ((2U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state))) {
                    ++(vlSymsp->__Vcoverage[13831]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state))) {
            ++(vlSymsp->__Vcoverage[13790]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state))) {
            ++(vlSymsp->__Vcoverage[13823]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state))) {
            if ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state))) {
                ++(vlSymsp->__Vcoverage[13833]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state))) {
            if ((1U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state))) {
                if ((2U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state))) {
                    ++(vlSymsp->__Vcoverage[13812]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state))) {
            ++(vlSymsp->__Vcoverage[13797]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state))) {
            if ((1U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state))) {
                if ((2U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state))) {
                    ++(vlSymsp->__Vcoverage[13813]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state))) {
            if ((1U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state))) {
                if ((2U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state))) {
                    ++(vlSymsp->__Vcoverage[13839]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state))) {
            if ((1U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state))) {
                if ((2U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state))) {
                    ++(vlSymsp->__Vcoverage[13830]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state))) {
            if ((1U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state))) {
                ++(vlSymsp->__Vcoverage[13832]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state))) {
            if ((1U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state))) {
                ++(vlSymsp->__Vcoverage[13840]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state))) {
            if ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state))) {
                ++(vlSymsp->__Vcoverage[13841]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state))) {
            if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div_io_valid) {
                ++(vlSymsp->__Vcoverage[13825]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div_io_valid)))) {
                ++(vlSymsp->__Vcoverage[13826]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state))) {
            if ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state))) {
                if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back_io_out_flush)))) {
                    ++(vlSymsp->__Vcoverage[13811]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state))) {
            if (vlSelf->riscv_soc__DOT__core__DOT__write_back_io_out_flush) {
                ++(vlSymsp->__Vcoverage[13809]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state))) {
            if ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state))) {
                if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back_io_out_flush)))) {
                    ++(vlSymsp->__Vcoverage[13818]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state))) {
            if ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state))) {
                if (vlSelf->riscv_soc__DOT__core__DOT__write_back_io_out_flush) {
                    ++(vlSymsp->__Vcoverage[13817]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state))) {
            if (vlSelf->riscv_soc__DOT__core__DOT__write_back_io_out_flush) {
                ++(vlSymsp->__Vcoverage[13836]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state))) {
            if ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state))) {
                if (vlSelf->riscv_soc__DOT__core__DOT__write_back_io_out_flush) {
                    ++(vlSymsp->__Vcoverage[13810]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back_io_out_flush)))) {
                ++(vlSymsp->__Vcoverage[13837]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back_io_out_flush)))) {
                if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div_io_valid)))) {
                    ++(vlSymsp->__Vcoverage[13808]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back_io_out_flush)))) {
                if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div_io_valid) {
                    ++(vlSymsp->__Vcoverage[13807]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state))) {
            if ((1U & (~ (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__divisor[2U] 
                          ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__dividend[2U])))) {
                ++(vlSymsp->__Vcoverage[13801]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state))) {
            if ((1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__divisor[2U] 
                       ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__dividend[2U]))) {
                ++(vlSymsp->__Vcoverage[13800]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state))) {
            if ((1U & (~ ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_out_exuType) 
                          >> 1U)))) {
                if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_out_exuType)))) {
                    ++(vlSymsp->__Vcoverage[13787]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state))) {
            if ((2U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_out_exuType))) {
                ++(vlSymsp->__Vcoverage[13788]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state))) {
            if ((2U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_out_exuType))) {
                if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_out_exuType)))) {
                    ++(vlSymsp->__Vcoverage[13785]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state))) {
            if ((1U & (~ ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_out_exuType) 
                          >> 1U)))) {
                if ((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_out_exuType))) {
                    ++(vlSymsp->__Vcoverage[13794]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state))) {
            if ((1U & (~ ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_out_exuType) 
                          >> 1U)))) {
                if ((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_out_exuType))) {
                    ++(vlSymsp->__Vcoverage[13786]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state))) {
            if ((2U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_out_exuType))) {
                if ((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_out_exuType))) {
                    ++(vlSymsp->__Vcoverage[13792]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state))) {
            if ((2U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_out_exuType))) {
                if ((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_out_exuType))) {
                    ++(vlSymsp->__Vcoverage[13784]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state))) {
            if ((2U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_out_exuType))) {
                if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_out_exuType)))) {
                    ++(vlSymsp->__Vcoverage[13793]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state))) {
            if ((2U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_out_exuType))) {
                ++(vlSymsp->__Vcoverage[13796]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state))) {
            if ((1U & (~ ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_out_exuType) 
                          >> 1U)))) {
                if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_out_exuType)))) {
                    ++(vlSymsp->__Vcoverage[13795]);
                }
            }
        }
    }
    vlSelf->__Vdly__riscv_soc__DOT__core__DOT__write_back__DOT__reg_stall 
        = vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_stall;
    ++(vlSymsp->__Vcoverage[15088]);
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[15070]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[15060]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[15055]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[15080]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[15075]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[15029]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[15041]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[15065]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[15022]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[15034]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[15085]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[15048]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[15086]);
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        ++(vlSymsp->__Vcoverage[15087]);
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_in_flush)))) {
            ++(vlSymsp->__Vcoverage[15073]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_in_flush)))) {
            ++(vlSymsp->__Vcoverage[15063]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (vlSelf->riscv_soc__DOT__core__DOT__decode_io_in_flush) {
            ++(vlSymsp->__Vcoverage[15059]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_in_flush)))) {
            ++(vlSymsp->__Vcoverage[15058]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (vlSelf->riscv_soc__DOT__core__DOT__decode_io_in_flush) {
            ++(vlSymsp->__Vcoverage[15054]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_in_flush)))) {
            ++(vlSymsp->__Vcoverage[15053]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (vlSelf->riscv_soc__DOT__core__DOT__decode_io_in_flush) {
            ++(vlSymsp->__Vcoverage[15047]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_in_flush)))) {
            ++(vlSymsp->__Vcoverage[15046]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (vlSelf->riscv_soc__DOT__core__DOT__decode_io_in_flush) {
            ++(vlSymsp->__Vcoverage[15028]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (vlSelf->riscv_soc__DOT__core__DOT__decode_io_in_flush) {
            ++(vlSymsp->__Vcoverage[15069]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (vlSelf->riscv_soc__DOT__core__DOT__decode_io_in_flush) {
            ++(vlSymsp->__Vcoverage[15021]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_in_flush)))) {
            ++(vlSymsp->__Vcoverage[15068]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_in_flush)))) {
            ++(vlSymsp->__Vcoverage[15020]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (vlSelf->riscv_soc__DOT__core__DOT__decode_io_in_flush) {
            ++(vlSymsp->__Vcoverage[15074]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_in_flush)))) {
            ++(vlSymsp->__Vcoverage[15027]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (vlSelf->riscv_soc__DOT__core__DOT__decode_io_in_flush) {
            ++(vlSymsp->__Vcoverage[15064]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (vlSelf->riscv_soc__DOT__core__DOT__decode_io_in_flush) {
            ++(vlSymsp->__Vcoverage[15084]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_in_flush)))) {
            ++(vlSymsp->__Vcoverage[15078]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (vlSelf->riscv_soc__DOT__core__DOT__decode_io_in_flush) {
            ++(vlSymsp->__Vcoverage[15079]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_in_flush)))) {
            ++(vlSymsp->__Vcoverage[15032]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (vlSelf->riscv_soc__DOT__core__DOT__decode_io_in_flush) {
            ++(vlSymsp->__Vcoverage[15033]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_in_flush)))) {
            ++(vlSymsp->__Vcoverage[15083]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_in_flush)))) {
            ++(vlSymsp->__Vcoverage[15039]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (vlSelf->riscv_soc__DOT__core__DOT__decode_io_in_flush) {
            ++(vlSymsp->__Vcoverage[15040]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_in_flush)))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__stall)))) {
                ++(vlSymsp->__Vcoverage[15071]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_in_flush)))) {
            if (vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__stall) {
                ++(vlSymsp->__Vcoverage[15067]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_in_flush)))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__stall)))) {
                ++(vlSymsp->__Vcoverage[15056]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_in_flush)))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__stall)))) {
                ++(vlSymsp->__Vcoverage[15051]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_in_flush)))) {
            if (vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__stall) {
                ++(vlSymsp->__Vcoverage[15052]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_in_flush)))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__stall)))) {
                ++(vlSymsp->__Vcoverage[15044]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_in_flush)))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__stall)))) {
                ++(vlSymsp->__Vcoverage[15066]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_in_flush)))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__stall)))) {
                ++(vlSymsp->__Vcoverage[15018]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_in_flush)))) {
            if (vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__stall) {
                ++(vlSymsp->__Vcoverage[15045]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_in_flush)))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__stall)))) {
                ++(vlSymsp->__Vcoverage[15030]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_in_flush)))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__stall)))) {
                ++(vlSymsp->__Vcoverage[15081]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_in_flush)))) {
            if (vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__stall) {
                ++(vlSymsp->__Vcoverage[15072]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_in_flush)))) {
            if (vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__stall) {
                ++(vlSymsp->__Vcoverage[15026]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_in_flush)))) {
            if (vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__stall) {
                ++(vlSymsp->__Vcoverage[15062]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_in_flush)))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__stall)))) {
                ++(vlSymsp->__Vcoverage[15061]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_in_flush)))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__stall)))) {
                ++(vlSymsp->__Vcoverage[15025]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_in_flush)))) {
            if (vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__stall) {
                ++(vlSymsp->__Vcoverage[15019]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_in_flush)))) {
            if (vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__stall) {
                ++(vlSymsp->__Vcoverage[15057]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_in_flush)))) {
            if (vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__stall) {
                ++(vlSymsp->__Vcoverage[15077]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_in_flush)))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__stall)))) {
                ++(vlSymsp->__Vcoverage[15076]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_in_flush)))) {
            if (vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__stall) {
                ++(vlSymsp->__Vcoverage[15031]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_in_flush)))) {
            if (vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__stall) {
                ++(vlSymsp->__Vcoverage[15082]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_in_flush)))) {
            if (vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__stall) {
                ++(vlSymsp->__Vcoverage[15038]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_in_flush)))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__stall)))) {
                ++(vlSymsp->__Vcoverage[15037]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_in_flush)))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__stall)))) {
                if ((4U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__instType))) {
                    ++(vlSymsp->__Vcoverage[15036]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_in_flush)))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__stall)))) {
                if ((4U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__instType))) {
                    ++(vlSymsp->__Vcoverage[15035]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_in_flush)))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__stall)))) {
                if ((0x33U != (0xfe00707fU & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_inst))) {
                    ++(vlSymsp->__Vcoverage[15050]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_in_flush)))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__stall)))) {
                if ((0x33U == (0xfe00707fU & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_inst))) {
                    ++(vlSymsp->__Vcoverage[15049]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_in_flush)))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__stall)))) {
                if ((0x33U != (0xfe00707fU & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_inst))) {
                    ++(vlSymsp->__Vcoverage[15043]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_in_flush)))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__stall)))) {
                if ((0x33U == (0xfe00707fU & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_inst))) {
                    ++(vlSymsp->__Vcoverage[15042]);
                }
            }
        }
    }
    if (vlSelf->riscv_soc__DOT__core__DOT__write_back_io_out_w_rs_en) {
        ++(vlSymsp->__Vcoverage[15014]);
    }
    if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back_io_out_w_rs_en)))) {
        ++(vlSymsp->__Vcoverage[15015]);
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_in_flush)))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__stall)))) {
                if ((1U & (~ (((IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back_io_out_rs_addr) 
                               == (0x1fU & (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_inst 
                                            >> 0x14U))) 
                              & (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back_io_out_w_rs_en))))) {
                    ++(vlSymsp->__Vcoverage[15024]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_in_flush)))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__stall)))) {
                if ((((IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back_io_out_rs_addr) 
                      == (0x1fU & (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_inst 
                                   >> 0xfU))) & (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back_io_out_w_rs_en))) {
                    ++(vlSymsp->__Vcoverage[15016]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_in_flush)))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__stall)))) {
                if ((((IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back_io_out_rs_addr) 
                      == (0x1fU & (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_inst 
                                   >> 0x14U))) & (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back_io_out_w_rs_en))) {
                    ++(vlSymsp->__Vcoverage[15023]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_in_flush)))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__stall)))) {
                if ((1U & (~ (((IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back_io_out_rs_addr) 
                               == (0x1fU & (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_inst 
                                            >> 0xfU))) 
                              & (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back_io_out_w_rs_en))))) {
                    ++(vlSymsp->__Vcoverage[15017]);
                }
            }
        }
    }
    ++(vlSymsp->__Vcoverage[12983]);
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[12978]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[12974]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[12982]);
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (vlSelf->riscv_soc__DOT__core__DOT__write_back_io_out_flush) {
            ++(vlSymsp->__Vcoverage[12977]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (vlSelf->riscv_soc__DOT__core__DOT__write_back_io_out_flush) {
            ++(vlSymsp->__Vcoverage[12973]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (vlSelf->riscv_soc__DOT__core__DOT__write_back_io_out_flush) {
            ++(vlSymsp->__Vcoverage[12981]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back_io_out_flush)))) {
            if (vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_stall) {
                ++(vlSymsp->__Vcoverage[12972]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back_io_out_flush)))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_stall)))) {
                ++(vlSymsp->__Vcoverage[12979]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back_io_out_flush)))) {
            if (vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_stall) {
                ++(vlSymsp->__Vcoverage[12980]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back_io_out_flush)))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_stall)))) {
                ++(vlSymsp->__Vcoverage[12971]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back_io_out_flush)))) {
            if (vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_stall) {
                ++(vlSymsp->__Vcoverage[12976]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back_io_out_flush)))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_stall)))) {
                ++(vlSymsp->__Vcoverage[12975]);
            }
        }
    }
    vlSelf->__Vdly__riscv_soc__DOT__core__DOT__cross_bar__DOT__reg_r_cnt 
        = vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__reg_r_cnt;
    ++(vlSymsp->__Vcoverage[9374]);
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[9235]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[9229]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[9223]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[9217]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[9211]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[9205]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[9199]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[9193]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[9187]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[9181]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[9175]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[9157]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[9139]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[9127]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[9121]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[9103]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[9085]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[9079]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[9049]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[9145]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[8947]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[9133]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[9331]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[9025]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[9325]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[8933]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[9115]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[9007]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[8917]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[9001]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[8955]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[9037]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[8925]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[9067]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[8875]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[9031]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[9265]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[8870]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[8995]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[8880]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[9055]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[9097]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[8910]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[8865]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[9073]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[9343]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[9169]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[9109]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[9259]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[8885]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[8902]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[8989]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[9061]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[8940]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[8890]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[9373]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[9283]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[8983]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[8895]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[9091]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[9349]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[9151]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[8963]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[8970]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[9163]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[8977]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[9013]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[9019]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[9043]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[9241]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[9247]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[9253]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[9271]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[9277]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[9289]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[9295]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[9301]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[9307]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[9313]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[9319]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[9337]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[9355]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[9361]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[9365]);
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))) {
            if ((1U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))) {
                if ((2U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))) {
                    ++(vlSymsp->__Vcoverage[8943]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))) {
            if ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))) {
                ++(vlSymsp->__Vcoverage[8945]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))) {
            ++(vlSymsp->__Vcoverage[8946]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))) {
            ++(vlSymsp->__Vcoverage[8938]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))) {
            if ((1U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))) {
                ++(vlSymsp->__Vcoverage[8937]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))) {
            ++(vlSymsp->__Vcoverage[8931]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))) {
            if ((1U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))) {
                if ((2U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))) {
                    ++(vlSymsp->__Vcoverage[8929]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))) {
            if ((1U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))) {
                if ((2U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))) {
                    ++(vlSymsp->__Vcoverage[8928]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))) {
            if ((1U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))) {
                if ((2U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))) {
                    ++(vlSymsp->__Vcoverage[8921]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))) {
            if ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))) {
                ++(vlSymsp->__Vcoverage[8922]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))) {
            ++(vlSymsp->__Vcoverage[8916]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))) {
            ++(vlSymsp->__Vcoverage[8908]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))) {
            if ((1U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))) {
                if ((2U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))) {
                    ++(vlSymsp->__Vcoverage[8906]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))) {
            if ((1U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))) {
                if ((2U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))) {
                    ++(vlSymsp->__Vcoverage[8905]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))) {
            if ((1U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))) {
                if ((2U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))) {
                    ++(vlSymsp->__Vcoverage[8898]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))) {
            if ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))) {
                ++(vlSymsp->__Vcoverage[8900]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))) {
            ++(vlSymsp->__Vcoverage[8874]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))) {
            ++(vlSymsp->__Vcoverage[8901]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))) {
            ++(vlSymsp->__Vcoverage[8873]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))) {
            ++(vlSymsp->__Vcoverage[8962]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))) {
            ++(vlSymsp->__Vcoverage[8939]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))) {
            if ((1U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))) {
                if ((2U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))) {
                    ++(vlSymsp->__Vcoverage[8958]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))) {
            if ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))) {
                ++(vlSymsp->__Vcoverage[8936]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))) {
            if ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))) {
                ++(vlSymsp->__Vcoverage[8915]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))) {
            if ((1U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))) {
                if ((2U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))) {
                    ++(vlSymsp->__Vcoverage[8899]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))) {
            if ((1U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))) {
                if ((2U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))) {
                    ++(vlSymsp->__Vcoverage[8914]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))) {
            ++(vlSymsp->__Vcoverage[8869]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))) {
            ++(vlSymsp->__Vcoverage[8961]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))) {
            if ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))) {
                ++(vlSymsp->__Vcoverage[8907]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))) {
            ++(vlSymsp->__Vcoverage[8864]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))) {
            if ((1U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))) {
                if ((2U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))) {
                    ++(vlSymsp->__Vcoverage[8944]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))) {
            if ((1U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))) {
                if ((2U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))) {
                    ++(vlSymsp->__Vcoverage[8920]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))) {
            ++(vlSymsp->__Vcoverage[8924]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))) {
            ++(vlSymsp->__Vcoverage[8879]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))) {
            ++(vlSymsp->__Vcoverage[8909]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))) {
            if ((1U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))) {
                if ((2U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))) {
                    ++(vlSymsp->__Vcoverage[8950]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))) {
            ++(vlSymsp->__Vcoverage[8884]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))) {
            if ((1U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))) {
                ++(vlSymsp->__Vcoverage[9363]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))) {
            if ((1U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))) {
                if ((2U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))) {
                    ++(vlSymsp->__Vcoverage[8913]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))) {
            if ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))) {
                ++(vlSymsp->__Vcoverage[8863]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))) {
            ++(vlSymsp->__Vcoverage[8954]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))) {
            ++(vlSymsp->__Vcoverage[8868]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))) {
            if ((1U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))) {
                if ((2U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))) {
                    ++(vlSymsp->__Vcoverage[8959]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))) {
            ++(vlSymsp->__Vcoverage[8969]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))) {
            ++(vlSymsp->__Vcoverage[8953]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))) {
            if ((1U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))) {
                if ((2U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))) {
                    ++(vlSymsp->__Vcoverage[8861]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))) {
            if ((1U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))) {
                if ((2U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))) {
                    ++(vlSymsp->__Vcoverage[8862]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))) {
            ++(vlSymsp->__Vcoverage[8923]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))) {
            ++(vlSymsp->__Vcoverage[8878]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))) {
            if ((1U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))) {
                if ((2U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))) {
                    ++(vlSymsp->__Vcoverage[8967]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))) {
            ++(vlSymsp->__Vcoverage[8976]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))) {
            if ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))) {
                ++(vlSymsp->__Vcoverage[8930]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))) {
            ++(vlSymsp->__Vcoverage[8883]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))) {
            if ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))) {
                ++(vlSymsp->__Vcoverage[8975]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))) {
            ++(vlSymsp->__Vcoverage[8932]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))) {
            if ((1U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))) {
                if ((2U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))) {
                    ++(vlSymsp->__Vcoverage[8973]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))) {
            ++(vlSymsp->__Vcoverage[8888]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))) {
            ++(vlSymsp->__Vcoverage[8889]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))) {
            if ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))) {
                ++(vlSymsp->__Vcoverage[9370]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))) {
            if ((1U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))) {
                if ((2U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))) {
                    ++(vlSymsp->__Vcoverage[9369]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))) {
            ++(vlSymsp->__Vcoverage[8893]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))) {
            ++(vlSymsp->__Vcoverage[8894]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))) {
            if ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))) {
                ++(vlSymsp->__Vcoverage[8952]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))) {
            if ((1U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))) {
                if ((2U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))) {
                    ++(vlSymsp->__Vcoverage[8951]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))) {
            if ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))) {
                ++(vlSymsp->__Vcoverage[8960]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))) {
            if ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))) {
                ++(vlSymsp->__Vcoverage[8968]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))) {
            if ((1U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))) {
                if ((2U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))) {
                    ++(vlSymsp->__Vcoverage[8966]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))) {
            ++(vlSymsp->__Vcoverage[9364]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))) {
            if ((1U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))) {
                if ((2U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))) {
                    ++(vlSymsp->__Vcoverage[8974]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))) {
            ++(vlSymsp->__Vcoverage[9371]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))) {
            if ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))) {
                ++(vlSymsp->__Vcoverage[9362]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))) {
            if ((1U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))) {
                if ((2U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))) {
                    ++(vlSymsp->__Vcoverage[9368]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))) {
            ++(vlSymsp->__Vcoverage[9372]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))) {
            if (vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1_io_ICache_valid) {
                ++(vlSymsp->__Vcoverage[8891]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1_io_ICache_valid)))) {
                ++(vlSymsp->__Vcoverage[8867]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1_io_ICache_valid)))) {
                ++(vlSymsp->__Vcoverage[8887]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1_io_ICache_valid)))) {
                ++(vlSymsp->__Vcoverage[8858]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1_io_ICache_valid)))) {
                ++(vlSymsp->__Vcoverage[8877]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))) {
            if (vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1_io_ICache_valid) {
                ++(vlSymsp->__Vcoverage[8866]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))) {
            if (vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1_io_ICache_valid) {
                ++(vlSymsp->__Vcoverage[8857]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1_io_ICache_valid)))) {
                ++(vlSymsp->__Vcoverage[8872]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))) {
            if (vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1_io_ICache_valid) {
                ++(vlSymsp->__Vcoverage[8871]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))) {
            if (vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1_io_ICache_valid) {
                ++(vlSymsp->__Vcoverage[8886]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))) {
            if (vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1_io_ICache_valid) {
                ++(vlSymsp->__Vcoverage[8876]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))) {
            if (vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1_io_ICache_valid) {
                ++(vlSymsp->__Vcoverage[8881]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1_io_ICache_valid)))) {
                ++(vlSymsp->__Vcoverage[8882]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1_io_ICache_valid)))) {
                ++(vlSymsp->__Vcoverage[8892]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))) {
            if ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))) {
                if ((1U & (~ ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1) 
                              | (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_2))))) {
                    ++(vlSymsp->__Vcoverage[8942]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))) {
            if ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))) {
                if ((1U & (~ ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1) 
                              | (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_2))))) {
                    ++(vlSymsp->__Vcoverage[8935]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))) {
            if ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))) {
                if (((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1) 
                     | (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_2))) {
                    ++(vlSymsp->__Vcoverage[8934]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))) {
            if ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))) {
                if (((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1) 
                     | (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_2))) {
                    ++(vlSymsp->__Vcoverage[8926]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))) {
            if ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))) {
                if ((1U & (~ ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1) 
                              | (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_2))))) {
                    ++(vlSymsp->__Vcoverage[8912]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))) {
            if ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))) {
                if (((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1) 
                     | (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_2))) {
                    ++(vlSymsp->__Vcoverage[8911]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))) {
            if ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))) {
                if ((1U & (~ ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1) 
                              | (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_2))))) {
                    ++(vlSymsp->__Vcoverage[8948]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))) {
            if ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))) {
                if (((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1) 
                     | (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_2))) {
                    ++(vlSymsp->__Vcoverage[8903]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))) {
            if ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))) {
                if (((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1) 
                     | (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_2))) {
                    ++(vlSymsp->__Vcoverage[8941]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))) {
            if ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))) {
                if ((1U & (~ ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1) 
                              | (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_2))))) {
                    ++(vlSymsp->__Vcoverage[8897]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))) {
            if ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))) {
                if (((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1) 
                     | (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_2))) {
                    ++(vlSymsp->__Vcoverage[8896]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))) {
            if ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))) {
                if (((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1) 
                     | (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_2))) {
                    ++(vlSymsp->__Vcoverage[8965]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))) {
            if ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))) {
                if ((1U & (~ ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1) 
                              | (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_2))))) {
                    ++(vlSymsp->__Vcoverage[8956]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))) {
            if ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))) {
                if (((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1) 
                     | (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_2))) {
                    ++(vlSymsp->__Vcoverage[8949]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))) {
            if ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))) {
                if (((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1) 
                     | (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_2))) {
                    ++(vlSymsp->__Vcoverage[8859]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))) {
            if ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))) {
                if ((1U & (~ ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1) 
                              | (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_2))))) {
                    ++(vlSymsp->__Vcoverage[8971]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))) {
            if ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))) {
                if ((1U & (~ ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1) 
                              | (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_2))))) {
                    ++(vlSymsp->__Vcoverage[8904]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))) {
            if ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))) {
                if ((1U & (~ ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1) 
                              | (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_2))))) {
                    ++(vlSymsp->__Vcoverage[8860]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))) {
            if ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))) {
                if ((1U & (~ ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1) 
                              | (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_2))))) {
                    ++(vlSymsp->__Vcoverage[8927]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))) {
            if ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))) {
                if (((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1) 
                     | (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_2))) {
                    ++(vlSymsp->__Vcoverage[8972]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))) {
            if ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))) {
                if (((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1) 
                     | (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_2))) {
                    ++(vlSymsp->__Vcoverage[8957]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))) {
            if ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))) {
                if ((1U & (~ ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1) 
                              | (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_2))))) {
                    ++(vlSymsp->__Vcoverage[8964]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))) {
            if ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))) {
                if (((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1) 
                     | (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_2))) {
                    ++(vlSymsp->__Vcoverage[9367]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))) {
            if ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))) {
                if ((1U & (~ ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1) 
                              | (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_2))))) {
                    ++(vlSymsp->__Vcoverage[9366]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))) {
            if ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))) {
                if ((1U & (~ ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_offset) 
                              >> 3U)))) {
                    ++(vlSymsp->__Vcoverage[8919]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))) {
            if ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state))) {
                if ((8U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_offset))) {
                    ++(vlSymsp->__Vcoverage[8918]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ ((0x29U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
                      & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))))) {
            ++(vlSymsp->__Vcoverage[9228]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x29U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            ++(vlSymsp->__Vcoverage[9227]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ ((0x28U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
                      & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))))) {
            ++(vlSymsp->__Vcoverage[9222]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x28U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            ++(vlSymsp->__Vcoverage[9221]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ ((0x27U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
                      & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))))) {
            ++(vlSymsp->__Vcoverage[9216]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x27U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            ++(vlSymsp->__Vcoverage[9215]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ ((0x26U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
                      & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))))) {
            ++(vlSymsp->__Vcoverage[9210]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x26U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            ++(vlSymsp->__Vcoverage[9209]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ ((0x25U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
                      & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))))) {
            ++(vlSymsp->__Vcoverage[9204]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x25U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            ++(vlSymsp->__Vcoverage[9203]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ ((0x24U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
                      & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))))) {
            ++(vlSymsp->__Vcoverage[9198]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x24U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            ++(vlSymsp->__Vcoverage[9197]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ ((0x23U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
                      & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))))) {
            ++(vlSymsp->__Vcoverage[9192]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x23U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            ++(vlSymsp->__Vcoverage[9191]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ ((0x22U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
                      & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))))) {
            ++(vlSymsp->__Vcoverage[9186]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x22U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            ++(vlSymsp->__Vcoverage[9185]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ ((0x21U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
                      & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))))) {
            ++(vlSymsp->__Vcoverage[9180]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x21U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            ++(vlSymsp->__Vcoverage[9179]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ ((0x20U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
                      & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))))) {
            ++(vlSymsp->__Vcoverage[9174]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x20U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            ++(vlSymsp->__Vcoverage[9173]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ ((0x1fU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
                      & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))))) {
            ++(vlSymsp->__Vcoverage[9168]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x1fU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            ++(vlSymsp->__Vcoverage[9167]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ ((0x1eU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
                      & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))))) {
            ++(vlSymsp->__Vcoverage[9162]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x1dU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            ++(vlSymsp->__Vcoverage[9155]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x1cU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            ++(vlSymsp->__Vcoverage[9149]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ ((0x1aU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
                      & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))))) {
            ++(vlSymsp->__Vcoverage[9138]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x1aU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            ++(vlSymsp->__Vcoverage[9137]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x19U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            ++(vlSymsp->__Vcoverage[9131]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ ((0x16U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
                      & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))))) {
            ++(vlSymsp->__Vcoverage[9114]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x16U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            ++(vlSymsp->__Vcoverage[9113]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ ((0x15U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
                      & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))))) {
            ++(vlSymsp->__Vcoverage[9108]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x15U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            ++(vlSymsp->__Vcoverage[9107]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x13U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            ++(vlSymsp->__Vcoverage[9095]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x12U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            ++(vlSymsp->__Vcoverage[9089]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x11U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            ++(vlSymsp->__Vcoverage[9083]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0xfU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            ++(vlSymsp->__Vcoverage[9071]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0xeU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            ++(vlSymsp->__Vcoverage[9065]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ ((0xcU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
                      & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))))) {
            ++(vlSymsp->__Vcoverage[9054]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0xcU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            ++(vlSymsp->__Vcoverage[9053]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ ((0xbU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
                      & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))))) {
            ++(vlSymsp->__Vcoverage[9048]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ ((0xaU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
                      & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))))) {
            ++(vlSymsp->__Vcoverage[9042]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0xaU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            ++(vlSymsp->__Vcoverage[9041]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x2cU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            ++(vlSymsp->__Vcoverage[9245]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((9U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            ++(vlSymsp->__Vcoverage[9035]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ ((8U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
                      & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))))) {
            ++(vlSymsp->__Vcoverage[9030]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x3aU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            ++(vlSymsp->__Vcoverage[9329]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x18U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            ++(vlSymsp->__Vcoverage[9125]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ ((0x39U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
                      & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))))) {
            ++(vlSymsp->__Vcoverage[9324]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ ((0x17U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
                      & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))))) {
            ++(vlSymsp->__Vcoverage[9120]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((5U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            ++(vlSymsp->__Vcoverage[9011]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ ((0x14U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
                      & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))))) {
            ++(vlSymsp->__Vcoverage[9102]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x14U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            ++(vlSymsp->__Vcoverage[9101]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((3U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            ++(vlSymsp->__Vcoverage[8999]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x3cU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            ++(vlSymsp->__Vcoverage[9341]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ ((0x13U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
                      & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))))) {
            ++(vlSymsp->__Vcoverage[9096]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((2U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            ++(vlSymsp->__Vcoverage[8993]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ ((0x33U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
                      & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))))) {
            ++(vlSymsp->__Vcoverage[9288]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ ((0x19U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
                      & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))))) {
            ++(vlSymsp->__Vcoverage[9132]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x33U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            ++(vlSymsp->__Vcoverage[9287]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x36U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            ++(vlSymsp->__Vcoverage[9305]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ ((0x18U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
                      & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))))) {
            ++(vlSymsp->__Vcoverage[9126]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x32U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            ++(vlSymsp->__Vcoverage[9281]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ ((0x1cU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
                      & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))))) {
            ++(vlSymsp->__Vcoverage[9150]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ ((0x2eU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
                      & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))))) {
            ++(vlSymsp->__Vcoverage[9258]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ ((0x12U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
                      & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))))) {
            ++(vlSymsp->__Vcoverage[9090]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ ((0xeU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
                      & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))))) {
            ++(vlSymsp->__Vcoverage[9066]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ ((0xdU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
                      & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))))) {
            ++(vlSymsp->__Vcoverage[9060]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ ((0x3bU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
                      & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))))) {
            ++(vlSymsp->__Vcoverage[9336]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ ((0x37U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
                      & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))))) {
            ++(vlSymsp->__Vcoverage[9312]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0xbU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            ++(vlSymsp->__Vcoverage[9047]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x3fU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            ++(vlSymsp->__Vcoverage[9359]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ ((0x2fU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
                      & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))))) {
            ++(vlSymsp->__Vcoverage[9264]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ ((0x1bU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
                      & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))))) {
            ++(vlSymsp->__Vcoverage[9144]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0xdU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            ++(vlSymsp->__Vcoverage[9059]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ ((2U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
                      & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))))) {
            ++(vlSymsp->__Vcoverage[8994]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x2fU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            ++(vlSymsp->__Vcoverage[9263]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ ((0x11U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
                      & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))))) {
            ++(vlSymsp->__Vcoverage[9084]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x1bU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            ++(vlSymsp->__Vcoverage[9143]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ ((0x31U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
                      & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))))) {
            ++(vlSymsp->__Vcoverage[9276]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ ((5U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
                      & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))))) {
            ++(vlSymsp->__Vcoverage[9012]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x1eU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            ++(vlSymsp->__Vcoverage[9161]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ ((0xfU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
                      & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))))) {
            ++(vlSymsp->__Vcoverage[9072]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x38U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            ++(vlSymsp->__Vcoverage[9317]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x17U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            ++(vlSymsp->__Vcoverage[9119]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x10U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            ++(vlSymsp->__Vcoverage[9077]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ ((0x10U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
                      & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))))) {
            ++(vlSymsp->__Vcoverage[9078]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ ((0x32U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
                      & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))))) {
            ++(vlSymsp->__Vcoverage[9282]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            ++(vlSymsp->__Vcoverage[8981]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
                      & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))))) {
            ++(vlSymsp->__Vcoverage[8982]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ ((0x3cU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
                      & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))))) {
            ++(vlSymsp->__Vcoverage[9342]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x3dU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            ++(vlSymsp->__Vcoverage[9347]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ ((0x1dU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
                      & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))))) {
            ++(vlSymsp->__Vcoverage[9156]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            ++(vlSymsp->__Vcoverage[8987]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
                      & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))))) {
            ++(vlSymsp->__Vcoverage[8988]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ ((3U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
                      & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))))) {
            ++(vlSymsp->__Vcoverage[9000]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((4U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            ++(vlSymsp->__Vcoverage[9005]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ ((4U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
                      & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))))) {
            ++(vlSymsp->__Vcoverage[9006]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((6U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            ++(vlSymsp->__Vcoverage[9017]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ ((6U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
                      & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))))) {
            ++(vlSymsp->__Vcoverage[9018]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((7U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            ++(vlSymsp->__Vcoverage[9023]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ ((7U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
                      & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))))) {
            ++(vlSymsp->__Vcoverage[9024]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((8U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            ++(vlSymsp->__Vcoverage[9029]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ ((9U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
                      & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))))) {
            ++(vlSymsp->__Vcoverage[9036]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x2aU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            ++(vlSymsp->__Vcoverage[9233]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ ((0x2aU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
                      & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))))) {
            ++(vlSymsp->__Vcoverage[9234]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x2bU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            ++(vlSymsp->__Vcoverage[9239]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ ((0x2bU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
                      & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))))) {
            ++(vlSymsp->__Vcoverage[9240]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ ((0x2cU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
                      & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))))) {
            ++(vlSymsp->__Vcoverage[9246]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x2dU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            ++(vlSymsp->__Vcoverage[9251]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ ((0x2dU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
                      & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))))) {
            ++(vlSymsp->__Vcoverage[9252]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x2eU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            ++(vlSymsp->__Vcoverage[9257]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x30U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            ++(vlSymsp->__Vcoverage[9269]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ ((0x30U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
                      & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))))) {
            ++(vlSymsp->__Vcoverage[9270]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x31U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            ++(vlSymsp->__Vcoverage[9275]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x34U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            ++(vlSymsp->__Vcoverage[9293]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ ((0x34U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
                      & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))))) {
            ++(vlSymsp->__Vcoverage[9294]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x35U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            ++(vlSymsp->__Vcoverage[9299]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ ((0x35U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
                      & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))))) {
            ++(vlSymsp->__Vcoverage[9300]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ ((0x36U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
                      & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))))) {
            ++(vlSymsp->__Vcoverage[9306]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x37U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            ++(vlSymsp->__Vcoverage[9311]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ ((0x38U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
                      & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))))) {
            ++(vlSymsp->__Vcoverage[9318]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x39U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            ++(vlSymsp->__Vcoverage[9323]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ ((0x3aU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
                      & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))))) {
            ++(vlSymsp->__Vcoverage[9330]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x3bU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            ++(vlSymsp->__Vcoverage[9335]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ ((0x3dU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
                      & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))))) {
            ++(vlSymsp->__Vcoverage[9348]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x3eU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            ++(vlSymsp->__Vcoverage[9353]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ ((0x3eU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
                      & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))))) {
            ++(vlSymsp->__Vcoverage[9354]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ ((0x3fU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
                      & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))))) {
            ++(vlSymsp->__Vcoverage[9360]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x1fU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1) {
                ++(vlSymsp->__Vcoverage[9166]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x1dU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1) {
                ++(vlSymsp->__Vcoverage[9154]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x1aU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1) {
                ++(vlSymsp->__Vcoverage[9136]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x18U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1) {
                ++(vlSymsp->__Vcoverage[9124]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x16U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1) {
                ++(vlSymsp->__Vcoverage[9112]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x14U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1) {
                ++(vlSymsp->__Vcoverage[9100]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x13U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1) {
                ++(vlSymsp->__Vcoverage[9094]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x10U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1) {
                ++(vlSymsp->__Vcoverage[9076]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0xfU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1) {
                ++(vlSymsp->__Vcoverage[9070]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0xdU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1) {
                ++(vlSymsp->__Vcoverage[9058]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0xcU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1) {
                ++(vlSymsp->__Vcoverage[9052]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0xbU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1) {
                ++(vlSymsp->__Vcoverage[9046]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x29U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1) {
                ++(vlSymsp->__Vcoverage[9226]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x3bU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1) {
                ++(vlSymsp->__Vcoverage[9334]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x19U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1) {
                ++(vlSymsp->__Vcoverage[9130]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x26U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1) {
                ++(vlSymsp->__Vcoverage[9208]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((6U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1) {
                ++(vlSymsp->__Vcoverage[9016]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((3U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1) {
                ++(vlSymsp->__Vcoverage[8998]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x35U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1) {
                ++(vlSymsp->__Vcoverage[9298]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x1bU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1) {
                ++(vlSymsp->__Vcoverage[9142]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x3cU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1) {
                ++(vlSymsp->__Vcoverage[9340]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x12U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1) {
                ++(vlSymsp->__Vcoverage[9088]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x37U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1) {
                ++(vlSymsp->__Vcoverage[9310]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x15U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1) {
                ++(vlSymsp->__Vcoverage[9106]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x11U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1) {
                ++(vlSymsp->__Vcoverage[9082]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x3eU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1) {
                ++(vlSymsp->__Vcoverage[9352]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x30U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1) {
                ++(vlSymsp->__Vcoverage[9268]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x1eU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1) {
                ++(vlSymsp->__Vcoverage[9160]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x2dU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1) {
                ++(vlSymsp->__Vcoverage[9250]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0xaU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1) {
                ++(vlSymsp->__Vcoverage[9040]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0xeU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1) {
                ++(vlSymsp->__Vcoverage[9064]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x2eU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1) {
                ++(vlSymsp->__Vcoverage[9256]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((7U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1) {
                ++(vlSymsp->__Vcoverage[9022]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x17U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1) {
                ++(vlSymsp->__Vcoverage[9118]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x31U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1) {
                ++(vlSymsp->__Vcoverage[9274]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x27U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1) {
                ++(vlSymsp->__Vcoverage[9214]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1) {
                ++(vlSymsp->__Vcoverage[8980]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x1cU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1) {
                ++(vlSymsp->__Vcoverage[9148]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x20U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1) {
                ++(vlSymsp->__Vcoverage[9172]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1) {
                ++(vlSymsp->__Vcoverage[8986]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x21U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1) {
                ++(vlSymsp->__Vcoverage[9178]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((2U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1) {
                ++(vlSymsp->__Vcoverage[8992]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x22U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1) {
                ++(vlSymsp->__Vcoverage[9184]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x23U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1) {
                ++(vlSymsp->__Vcoverage[9190]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((4U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1) {
                ++(vlSymsp->__Vcoverage[9004]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x24U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1) {
                ++(vlSymsp->__Vcoverage[9196]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((5U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1) {
                ++(vlSymsp->__Vcoverage[9010]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x25U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1) {
                ++(vlSymsp->__Vcoverage[9202]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((8U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1) {
                ++(vlSymsp->__Vcoverage[9028]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x28U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1) {
                ++(vlSymsp->__Vcoverage[9220]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((9U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1) {
                ++(vlSymsp->__Vcoverage[9034]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x2aU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1) {
                ++(vlSymsp->__Vcoverage[9232]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x2bU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1) {
                ++(vlSymsp->__Vcoverage[9238]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x2cU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1) {
                ++(vlSymsp->__Vcoverage[9244]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x2fU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1) {
                ++(vlSymsp->__Vcoverage[9262]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x32U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1) {
                ++(vlSymsp->__Vcoverage[9280]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x33U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1) {
                ++(vlSymsp->__Vcoverage[9286]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x34U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1) {
                ++(vlSymsp->__Vcoverage[9292]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x36U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1) {
                ++(vlSymsp->__Vcoverage[9304]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x38U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1) {
                ++(vlSymsp->__Vcoverage[9316]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x39U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1) {
                ++(vlSymsp->__Vcoverage[9322]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x3aU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1) {
                ++(vlSymsp->__Vcoverage[9328]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x3dU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1) {
                ++(vlSymsp->__Vcoverage[9346]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x3fU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1) {
                ++(vlSymsp->__Vcoverage[9358]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x1fU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1)))) {
                if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_2)))) {
                    ++(vlSymsp->__Vcoverage[9165]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x1fU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1)))) {
                if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_2) {
                    ++(vlSymsp->__Vcoverage[9164]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x1eU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1)))) {
                if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_2)))) {
                    ++(vlSymsp->__Vcoverage[9159]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x1eU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1)))) {
                if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_2) {
                    ++(vlSymsp->__Vcoverage[9158]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x1dU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1)))) {
                if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_2)))) {
                    ++(vlSymsp->__Vcoverage[9153]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x1dU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1)))) {
                if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_2) {
                    ++(vlSymsp->__Vcoverage[9152]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x1cU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1)))) {
                if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_2)))) {
                    ++(vlSymsp->__Vcoverage[9147]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x1bU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1)))) {
                if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_2) {
                    ++(vlSymsp->__Vcoverage[9140]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x1aU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1)))) {
                if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_2) {
                    ++(vlSymsp->__Vcoverage[9134]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x19U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1)))) {
                if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_2)))) {
                    ++(vlSymsp->__Vcoverage[9129]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x18U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1)))) {
                if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_2) {
                    ++(vlSymsp->__Vcoverage[9122]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x17U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1)))) {
                if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_2) {
                    ++(vlSymsp->__Vcoverage[9116]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x16U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1)))) {
                if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_2)))) {
                    ++(vlSymsp->__Vcoverage[9111]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x15U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1)))) {
                if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_2)))) {
                    ++(vlSymsp->__Vcoverage[9105]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x15U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1)))) {
                if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_2) {
                    ++(vlSymsp->__Vcoverage[9104]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x14U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1)))) {
                if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_2)))) {
                    ++(vlSymsp->__Vcoverage[9099]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x14U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1)))) {
                if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_2) {
                    ++(vlSymsp->__Vcoverage[9098]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x13U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1)))) {
                if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_2)))) {
                    ++(vlSymsp->__Vcoverage[9093]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x12U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1)))) {
                if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_2)))) {
                    ++(vlSymsp->__Vcoverage[9087]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x12U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1)))) {
                if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_2) {
                    ++(vlSymsp->__Vcoverage[9086]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x11U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1)))) {
                if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_2)))) {
                    ++(vlSymsp->__Vcoverage[9081]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x10U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1)))) {
                if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_2) {
                    ++(vlSymsp->__Vcoverage[9074]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0xfU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1)))) {
                if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_2)))) {
                    ++(vlSymsp->__Vcoverage[9069]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0xeU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1)))) {
                if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_2)))) {
                    ++(vlSymsp->__Vcoverage[9063]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0xbU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1)))) {
                if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_2)))) {
                    ++(vlSymsp->__Vcoverage[9045]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0xbU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1)))) {
                if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_2) {
                    ++(vlSymsp->__Vcoverage[9044]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0xaU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1)))) {
                if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_2)))) {
                    ++(vlSymsp->__Vcoverage[9039]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x3cU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1)))) {
                if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_2) {
                    ++(vlSymsp->__Vcoverage[9338]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((9U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1)))) {
                if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_2) {
                    ++(vlSymsp->__Vcoverage[9032]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x19U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1)))) {
                if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_2) {
                    ++(vlSymsp->__Vcoverage[9128]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x3aU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1)))) {
                if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_2) {
                    ++(vlSymsp->__Vcoverage[9326]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x18U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1)))) {
                if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_2)))) {
                    ++(vlSymsp->__Vcoverage[9123]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x27U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1)))) {
                if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_2)))) {
                    ++(vlSymsp->__Vcoverage[9213]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x27U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1)))) {
                if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_2) {
                    ++(vlSymsp->__Vcoverage[9212]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((7U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1)))) {
                if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_2)))) {
                    ++(vlSymsp->__Vcoverage[9021]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x17U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1)))) {
                if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_2)))) {
                    ++(vlSymsp->__Vcoverage[9117]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x26U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1)))) {
                if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_2)))) {
                    ++(vlSymsp->__Vcoverage[9207]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((6U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1)))) {
                if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_2) {
                    ++(vlSymsp->__Vcoverage[9014]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x37U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1)))) {
                if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_2) {
                    ++(vlSymsp->__Vcoverage[9308]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x35U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1)))) {
                if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_2)))) {
                    ++(vlSymsp->__Vcoverage[9297]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x34U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1)))) {
                if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_2)))) {
                    ++(vlSymsp->__Vcoverage[9291]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x21U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1)))) {
                if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_2) {
                    ++(vlSymsp->__Vcoverage[9176]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1)))) {
                if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_2)))) {
                    ++(vlSymsp->__Vcoverage[8985]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x33U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1)))) {
                if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_2)))) {
                    ++(vlSymsp->__Vcoverage[9285]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0xeU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1)))) {
                if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_2) {
                    ++(vlSymsp->__Vcoverage[9062]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x24U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1)))) {
                if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_2)))) {
                    ++(vlSymsp->__Vcoverage[9195]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x2fU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1)))) {
                if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_2) {
                    ++(vlSymsp->__Vcoverage[9260]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x20U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1)))) {
                if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_2)))) {
                    ++(vlSymsp->__Vcoverage[9171]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0xdU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1)))) {
                if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_2)))) {
                    ++(vlSymsp->__Vcoverage[9057]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0xdU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1)))) {
                if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_2) {
                    ++(vlSymsp->__Vcoverage[9056]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x1cU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1)))) {
                if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_2) {
                    ++(vlSymsp->__Vcoverage[9146]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x36U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1)))) {
                if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_2)))) {
                    ++(vlSymsp->__Vcoverage[9303]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x22U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1)))) {
                if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_2)))) {
                    ++(vlSymsp->__Vcoverage[9183]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x2dU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1)))) {
                if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_2) {
                    ++(vlSymsp->__Vcoverage[9248]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0xaU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1)))) {
                if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_2) {
                    ++(vlSymsp->__Vcoverage[9038]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x3dU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1)))) {
                if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_2)))) {
                    ++(vlSymsp->__Vcoverage[9345]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x29U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1)))) {
                if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_2) {
                    ++(vlSymsp->__Vcoverage[9224]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((9U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1)))) {
                if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_2)))) {
                    ++(vlSymsp->__Vcoverage[9033]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x29U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1)))) {
                if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_2)))) {
                    ++(vlSymsp->__Vcoverage[9225]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x25U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1)))) {
                if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_2) {
                    ++(vlSymsp->__Vcoverage[9200]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((5U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1)))) {
                if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_2)))) {
                    ++(vlSymsp->__Vcoverage[9009]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x34U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1)))) {
                if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_2) {
                    ++(vlSymsp->__Vcoverage[9290]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x25U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1)))) {
                if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_2)))) {
                    ++(vlSymsp->__Vcoverage[9201]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x30U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1)))) {
                if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_2) {
                    ++(vlSymsp->__Vcoverage[9266]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x1aU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1)))) {
                if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_2)))) {
                    ++(vlSymsp->__Vcoverage[9135]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0xcU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1)))) {
                if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_2) {
                    ++(vlSymsp->__Vcoverage[9050]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x36U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1)))) {
                if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_2) {
                    ++(vlSymsp->__Vcoverage[9302]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0xcU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1)))) {
                if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_2)))) {
                    ++(vlSymsp->__Vcoverage[9051]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x13U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1)))) {
                if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_2) {
                    ++(vlSymsp->__Vcoverage[9092]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0xfU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1)))) {
                if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_2) {
                    ++(vlSymsp->__Vcoverage[9068]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x23U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1)))) {
                if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_2)))) {
                    ++(vlSymsp->__Vcoverage[9189]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x2eU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1)))) {
                if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_2) {
                    ++(vlSymsp->__Vcoverage[9254]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x16U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1)))) {
                if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_2) {
                    ++(vlSymsp->__Vcoverage[9110]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x3fU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1)))) {
                if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_2)))) {
                    ++(vlSymsp->__Vcoverage[9357]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x30U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1)))) {
                if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_2)))) {
                    ++(vlSymsp->__Vcoverage[9267]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x38U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1)))) {
                if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_2)))) {
                    ++(vlSymsp->__Vcoverage[9315]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x31U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1)))) {
                if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_2)))) {
                    ++(vlSymsp->__Vcoverage[9273]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x10U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1)))) {
                if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_2)))) {
                    ++(vlSymsp->__Vcoverage[9075]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((7U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1)))) {
                if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_2) {
                    ++(vlSymsp->__Vcoverage[9020]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x20U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1)))) {
                if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_2) {
                    ++(vlSymsp->__Vcoverage[9170]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1)))) {
                if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_2)))) {
                    ++(vlSymsp->__Vcoverage[8979]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x11U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1)))) {
                if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_2) {
                    ++(vlSymsp->__Vcoverage[9080]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x33U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1)))) {
                if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_2) {
                    ++(vlSymsp->__Vcoverage[9284]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x1bU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1)))) {
                if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_2)))) {
                    ++(vlSymsp->__Vcoverage[9141]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x3dU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1)))) {
                if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_2) {
                    ++(vlSymsp->__Vcoverage[9344]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x3eU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1)))) {
                if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_2)))) {
                    ++(vlSymsp->__Vcoverage[9351]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x3fU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1)))) {
                if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_2) {
                    ++(vlSymsp->__Vcoverage[9356]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1)))) {
                if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_2) {
                    ++(vlSymsp->__Vcoverage[8978]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1)))) {
                if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_2) {
                    ++(vlSymsp->__Vcoverage[8984]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x21U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1)))) {
                if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_2)))) {
                    ++(vlSymsp->__Vcoverage[9177]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((2U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1)))) {
                if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_2) {
                    ++(vlSymsp->__Vcoverage[8990]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x22U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1)))) {
                if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_2) {
                    ++(vlSymsp->__Vcoverage[9182]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((2U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1)))) {
                if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_2)))) {
                    ++(vlSymsp->__Vcoverage[8991]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((3U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1)))) {
                if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_2) {
                    ++(vlSymsp->__Vcoverage[8996]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x23U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1)))) {
                if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_2) {
                    ++(vlSymsp->__Vcoverage[9188]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((3U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1)))) {
                if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_2)))) {
                    ++(vlSymsp->__Vcoverage[8997]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((4U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1)))) {
                if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_2) {
                    ++(vlSymsp->__Vcoverage[9002]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x24U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1)))) {
                if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_2) {
                    ++(vlSymsp->__Vcoverage[9194]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((4U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1)))) {
                if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_2)))) {
                    ++(vlSymsp->__Vcoverage[9003]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((5U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1)))) {
                if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_2) {
                    ++(vlSymsp->__Vcoverage[9008]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x26U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1)))) {
                if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_2) {
                    ++(vlSymsp->__Vcoverage[9206]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((6U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1)))) {
                if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_2)))) {
                    ++(vlSymsp->__Vcoverage[9015]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((8U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1)))) {
                if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_2) {
                    ++(vlSymsp->__Vcoverage[9026]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x28U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1)))) {
                if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_2) {
                    ++(vlSymsp->__Vcoverage[9218]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((8U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1)))) {
                if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_2)))) {
                    ++(vlSymsp->__Vcoverage[9027]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x28U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1)))) {
                if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_2)))) {
                    ++(vlSymsp->__Vcoverage[9219]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x2aU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1)))) {
                if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_2) {
                    ++(vlSymsp->__Vcoverage[9230]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x2aU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1)))) {
                if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_2)))) {
                    ++(vlSymsp->__Vcoverage[9231]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x2bU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1)))) {
                if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_2) {
                    ++(vlSymsp->__Vcoverage[9236]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x2bU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1)))) {
                if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_2)))) {
                    ++(vlSymsp->__Vcoverage[9237]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x2cU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1)))) {
                if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_2) {
                    ++(vlSymsp->__Vcoverage[9242]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x2cU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1)))) {
                if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_2)))) {
                    ++(vlSymsp->__Vcoverage[9243]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x2dU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1)))) {
                if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_2)))) {
                    ++(vlSymsp->__Vcoverage[9249]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x2eU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1)))) {
                if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_2)))) {
                    ++(vlSymsp->__Vcoverage[9255]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x2fU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1)))) {
                if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_2)))) {
                    ++(vlSymsp->__Vcoverage[9261]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x31U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1)))) {
                if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_2) {
                    ++(vlSymsp->__Vcoverage[9272]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x32U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1)))) {
                if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_2) {
                    ++(vlSymsp->__Vcoverage[9278]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x32U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1)))) {
                if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_2)))) {
                    ++(vlSymsp->__Vcoverage[9279]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x35U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1)))) {
                if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_2) {
                    ++(vlSymsp->__Vcoverage[9296]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x37U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1)))) {
                if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_2)))) {
                    ++(vlSymsp->__Vcoverage[9309]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x38U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1)))) {
                if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_2) {
                    ++(vlSymsp->__Vcoverage[9314]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x39U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1)))) {
                if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_2) {
                    ++(vlSymsp->__Vcoverage[9320]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x39U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1)))) {
                if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_2)))) {
                    ++(vlSymsp->__Vcoverage[9321]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x3aU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1)))) {
                if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_2)))) {
                    ++(vlSymsp->__Vcoverage[9327]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x3bU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1)))) {
                if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_2) {
                    ++(vlSymsp->__Vcoverage[9332]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x3bU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1)))) {
                if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_2)))) {
                    ++(vlSymsp->__Vcoverage[9333]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x3cU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1)))) {
                if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_2)))) {
                    ++(vlSymsp->__Vcoverage[9339]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x3eU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1)))) {
                if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_2) {
                    ++(vlSymsp->__Vcoverage[9350]);
                }
            }
        }
    }
    ++(vlSymsp->__Vcoverage[14710]);
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[14705]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[14709]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[14699]);
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (vlSelf->riscv_soc__DOT__core__DOT__write_back_io_out_flush) {
            ++(vlSymsp->__Vcoverage[14704]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (vlSelf->riscv_soc__DOT__core__DOT__write_back_io_out_flush) {
            ++(vlSymsp->__Vcoverage[14708]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (vlSelf->riscv_soc__DOT__core__DOT__write_back_io_out_flush) {
            ++(vlSymsp->__Vcoverage[14698]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back_io_out_flush)))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_stall)))) {
                ++(vlSymsp->__Vcoverage[14696]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back_io_out_flush)))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_stall)))) {
                ++(vlSymsp->__Vcoverage[14706]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back_io_out_flush)))) {
            if (vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_stall) {
                ++(vlSymsp->__Vcoverage[14697]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back_io_out_flush)))) {
            if (vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_stall) {
                ++(vlSymsp->__Vcoverage[14703]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back_io_out_flush)))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_stall)))) {
                ++(vlSymsp->__Vcoverage[14702]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back_io_out_flush)))) {
            if (vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_stall) {
                ++(vlSymsp->__Vcoverage[14707]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back_io_out_flush)))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_stall)))) {
                if ((3U == (3U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_out_exuType)))) {
                    ++(vlSymsp->__Vcoverage[14700]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back_io_out_flush)))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_stall)))) {
                if ((3U != (3U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_out_exuType)))) {
                    ++(vlSymsp->__Vcoverage[14701]);
                }
            }
        }
    }
    ++(vlSymsp->__Vcoverage[12970]);
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[12969]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[12965]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[12957]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[12961]);
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (vlSelf->riscv_soc__DOT__core__DOT__write_back_io_out_flush) {
            ++(vlSymsp->__Vcoverage[12964]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (vlSelf->riscv_soc__DOT__core__DOT__write_back_io_out_flush) {
            ++(vlSymsp->__Vcoverage[12956]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (vlSelf->riscv_soc__DOT__core__DOT__write_back_io_out_flush) {
            ++(vlSymsp->__Vcoverage[12960]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (vlSelf->riscv_soc__DOT__core__DOT__write_back_io_out_flush) {
            ++(vlSymsp->__Vcoverage[12968]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back_io_out_flush)))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_stall)))) {
                ++(vlSymsp->__Vcoverage[12962]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back_io_out_flush)))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_stall)))) {
                ++(vlSymsp->__Vcoverage[12958]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back_io_out_flush)))) {
            if (vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_stall) {
                ++(vlSymsp->__Vcoverage[12959]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back_io_out_flush)))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_stall)))) {
                ++(vlSymsp->__Vcoverage[12954]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back_io_out_flush)))) {
            if (vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_stall) {
                ++(vlSymsp->__Vcoverage[12963]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back_io_out_flush)))) {
            if (vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_stall) {
                ++(vlSymsp->__Vcoverage[12955]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back_io_out_flush)))) {
            if (vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_stall) {
                ++(vlSymsp->__Vcoverage[12967]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back_io_out_flush)))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_stall)))) {
                ++(vlSymsp->__Vcoverage[12966]);
            }
        }
    }
    ++(vlSymsp->__Vcoverage[14695]);
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[14690]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[14682]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[14694]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[14686]);
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (vlSelf->riscv_soc__DOT__core__DOT__write_back_io_out_flush) {
            ++(vlSymsp->__Vcoverage[14689]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (vlSelf->riscv_soc__DOT__core__DOT__write_back_io_out_flush) {
            ++(vlSymsp->__Vcoverage[14681]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (vlSelf->riscv_soc__DOT__core__DOT__write_back_io_out_flush) {
            ++(vlSymsp->__Vcoverage[14685]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (vlSelf->riscv_soc__DOT__core__DOT__write_back_io_out_flush) {
            ++(vlSymsp->__Vcoverage[14693]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back_io_out_flush)))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_stall)))) {
                ++(vlSymsp->__Vcoverage[14683]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back_io_out_flush)))) {
            if (vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_stall) {
                ++(vlSymsp->__Vcoverage[14684]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back_io_out_flush)))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_stall)))) {
                ++(vlSymsp->__Vcoverage[14679]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back_io_out_flush)))) {
            if (vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_stall) {
                ++(vlSymsp->__Vcoverage[14688]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back_io_out_flush)))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_stall)))) {
                ++(vlSymsp->__Vcoverage[14687]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back_io_out_flush)))) {
            if (vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_stall) {
                ++(vlSymsp->__Vcoverage[14680]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back_io_out_flush)))) {
            if (vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_stall) {
                ++(vlSymsp->__Vcoverage[14692]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back_io_out_flush)))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_stall)))) {
                ++(vlSymsp->__Vcoverage[14691]);
            }
        }
    }
    ++(vlSymsp->__Vcoverage[16670]);
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[16650]);
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        ++(vlSymsp->__Vcoverage[16643]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[16642]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[16641]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[16656]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[16663]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[16669]);
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__clint_de__DOT__reg_state)))) {
            ++(vlSymsp->__Vcoverage[16648]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (vlSelf->riscv_soc__DOT__core__DOT__clint_de__DOT__reg_state) {
            ++(vlSymsp->__Vcoverage[16649]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__clint_de__DOT__reg_state)))) {
            ++(vlSymsp->__Vcoverage[16668]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (vlSelf->riscv_soc__DOT__core__DOT__clint_de__DOT__reg_state) {
            ++(vlSymsp->__Vcoverage[16640]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (vlSelf->riscv_soc__DOT__core__DOT__clint_de__DOT__reg_state) {
            ++(vlSymsp->__Vcoverage[16662]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__clint_de__DOT__reg_state)))) {
            ++(vlSymsp->__Vcoverage[16639]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__clint_de__DOT__reg_state)))) {
            ++(vlSymsp->__Vcoverage[16661]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (vlSelf->riscv_soc__DOT__core__DOT__clint_de__DOT__reg_state) {
            if (vlSelf->riscv_soc__DOT__core__DOT__clint_de__DOT__reg_state) {
                ++(vlSymsp->__Vcoverage[16653]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (vlSelf->riscv_soc__DOT__core__DOT__clint_de__DOT__reg_state) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__clint_de__DOT__reg_state)))) {
                ++(vlSymsp->__Vcoverage[16654]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__clint_de__DOT__reg_state)))) {
            ++(vlSymsp->__Vcoverage[16655]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (vlSelf->riscv_soc__DOT__core__DOT__clint_de__DOT__reg_state) {
            if (vlSelf->riscv_soc__DOT__core__DOT__clint_de__DOT__reg_state) {
                ++(vlSymsp->__Vcoverage[16666]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (vlSelf->riscv_soc__DOT__core__DOT__clint_de__DOT__reg_state) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__clint_de__DOT__reg_state)))) {
                ++(vlSymsp->__Vcoverage[16667]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (vlSelf->riscv_soc__DOT__core__DOT__clint_de__DOT__reg_state) {
            if (vlSelf->riscv_soc__DOT__core__DOT__clint_de__DOT__reg_state) {
                if (vlSelf->riscv_soc__DOT__core__DOT__clint_de__DOT___T_2) {
                    ++(vlSymsp->__Vcoverage[16651]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (vlSelf->riscv_soc__DOT__core__DOT__clint_de__DOT__reg_state) {
            if (vlSelf->riscv_soc__DOT__core__DOT__clint_de__DOT__reg_state) {
                if (vlSelf->riscv_soc__DOT__core__DOT__clint_de__DOT___T_2) {
                    ++(vlSymsp->__Vcoverage[16664]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (vlSelf->riscv_soc__DOT__core__DOT__clint_de__DOT__reg_state) {
            if (vlSelf->riscv_soc__DOT__core__DOT__clint_de__DOT__reg_state) {
                if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__clint_de__DOT___T_2)))) {
                    ++(vlSymsp->__Vcoverage[16652]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (vlSelf->riscv_soc__DOT__core__DOT__clint_de__DOT__reg_state) {
            if (vlSelf->riscv_soc__DOT__core__DOT__clint_de__DOT__reg_state) {
                if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__clint_de__DOT___T_2)))) {
                    ++(vlSymsp->__Vcoverage[16665]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__clint_de__DOT__reg_state)))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1_io_clint_bus_valid)))) {
                ++(vlSymsp->__Vcoverage[16647]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__clint_de__DOT__reg_state)))) {
            if (vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1_io_clint_bus_valid) {
                ++(vlSymsp->__Vcoverage[16646]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__clint_de__DOT__reg_state)))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1_io_clint_bus_valid)))) {
                ++(vlSymsp->__Vcoverage[16638]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__clint_de__DOT__reg_state)))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1_io_clint_bus_valid)))) {
                ++(vlSymsp->__Vcoverage[16660]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__clint_de__DOT__reg_state)))) {
            if (vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1_io_clint_bus_valid) {
                ++(vlSymsp->__Vcoverage[16637]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__clint_de__DOT__reg_state)))) {
            if (vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1_io_clint_bus_valid) {
                ++(vlSymsp->__Vcoverage[16659]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__clint_de__DOT__reg_state)))) {
            if (vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1_io_clint_bus_valid) {
                if (vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_bus_is_w) {
                    ++(vlSymsp->__Vcoverage[16644]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__clint_de__DOT__reg_state)))) {
            if (vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1_io_clint_bus_valid) {
                if (vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_bus_is_w) {
                    ++(vlSymsp->__Vcoverage[16635]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__clint_de__DOT__reg_state)))) {
            if (vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1_io_clint_bus_valid) {
                if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_bus_is_w)))) {
                    ++(vlSymsp->__Vcoverage[16645]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__clint_de__DOT__reg_state)))) {
            if (vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1_io_clint_bus_valid) {
                if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_bus_is_w)))) {
                    ++(vlSymsp->__Vcoverage[16636]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__clint_de__DOT__reg_state)))) {
            if (vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1_io_clint_bus_valid) {
                if ((0x30U != (0xffU & (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_bus_addr)))) {
                    ++(vlSymsp->__Vcoverage[16658]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__clint_de__DOT__reg_state)))) {
            if (vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1_io_clint_bus_valid) {
                if ((0x30U == (0xffU & (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_bus_addr)))) {
                    ++(vlSymsp->__Vcoverage[16657]);
                }
            }
        }
    }
    ++(vlSymsp->__Vcoverage[12436]);
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[12423]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[12417]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[12411]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[12399]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[12405]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[12393]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[12429]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[12435]);
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (vlSelf->riscv_soc__DOT__core__DOT__write_back_io_out_flush) {
            ++(vlSymsp->__Vcoverage[12410]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (vlSelf->riscv_soc__DOT__core__DOT__write_back_io_out_flush) {
            ++(vlSymsp->__Vcoverage[12416]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (vlSelf->riscv_soc__DOT__core__DOT__write_back_io_out_flush) {
            ++(vlSymsp->__Vcoverage[12404]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (vlSelf->riscv_soc__DOT__core__DOT__write_back_io_out_flush) {
            ++(vlSymsp->__Vcoverage[12398]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (vlSelf->riscv_soc__DOT__core__DOT__write_back_io_out_flush) {
            ++(vlSymsp->__Vcoverage[12392]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (vlSelf->riscv_soc__DOT__core__DOT__write_back_io_out_flush) {
            ++(vlSymsp->__Vcoverage[12422]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (vlSelf->riscv_soc__DOT__core__DOT__write_back_io_out_flush) {
            ++(vlSymsp->__Vcoverage[12428]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (vlSelf->riscv_soc__DOT__core__DOT__write_back_io_out_flush) {
            ++(vlSymsp->__Vcoverage[12434]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back_io_out_flush)))) {
            if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__stall) {
                ++(vlSymsp->__Vcoverage[12415]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back_io_out_flush)))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__stall)))) {
                ++(vlSymsp->__Vcoverage[12408]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back_io_out_flush)))) {
            if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__stall) {
                ++(vlSymsp->__Vcoverage[12409]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back_io_out_flush)))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__stall)))) {
                ++(vlSymsp->__Vcoverage[12402]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back_io_out_flush)))) {
            if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__stall) {
                ++(vlSymsp->__Vcoverage[12391]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back_io_out_flush)))) {
            if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__stall) {
                ++(vlSymsp->__Vcoverage[12421]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back_io_out_flush)))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__stall)))) {
                ++(vlSymsp->__Vcoverage[12390]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back_io_out_flush)))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__stall)))) {
                ++(vlSymsp->__Vcoverage[12414]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back_io_out_flush)))) {
            if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__stall) {
                ++(vlSymsp->__Vcoverage[12397]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back_io_out_flush)))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__stall)))) {
                ++(vlSymsp->__Vcoverage[12396]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back_io_out_flush)))) {
            if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__stall) {
                ++(vlSymsp->__Vcoverage[12403]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back_io_out_flush)))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__stall)))) {
                ++(vlSymsp->__Vcoverage[12420]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back_io_out_flush)))) {
            if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__stall) {
                ++(vlSymsp->__Vcoverage[12427]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back_io_out_flush)))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__stall)))) {
                ++(vlSymsp->__Vcoverage[12426]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back_io_out_flush)))) {
            if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__stall) {
                ++(vlSymsp->__Vcoverage[12433]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back_io_out_flush)))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__stall)))) {
                ++(vlSymsp->__Vcoverage[12432]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back_io_out_flush)))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__stall)))) {
                if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__reg_next_pc_valid)))) {
                    ++(vlSymsp->__Vcoverage[12407]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back_io_out_flush)))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__stall)))) {
                if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__reg_next_pc_valid) {
                    ++(vlSymsp->__Vcoverage[12406]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back_io_out_flush)))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__stall)))) {
                if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__reg_next_pc_valid) {
                    ++(vlSymsp->__Vcoverage[12412]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back_io_out_flush)))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__stall)))) {
                if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__reg_next_pc_valid)))) {
                    ++(vlSymsp->__Vcoverage[12401]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back_io_out_flush)))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__stall)))) {
                if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__reg_next_pc_valid) {
                    ++(vlSymsp->__Vcoverage[12400]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back_io_out_flush)))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__stall)))) {
                if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__reg_next_pc_valid) {
                    ++(vlSymsp->__Vcoverage[12394]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back_io_out_flush)))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__stall)))) {
                if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__reg_next_pc_valid)))) {
                    ++(vlSymsp->__Vcoverage[12413]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back_io_out_flush)))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__stall)))) {
                if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__reg_next_pc_valid)))) {
                    ++(vlSymsp->__Vcoverage[12395]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back_io_out_flush)))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__stall)))) {
                if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__reg_next_pc_valid) {
                    ++(vlSymsp->__Vcoverage[12418]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back_io_out_flush)))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__stall)))) {
                if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__reg_next_pc_valid)))) {
                    ++(vlSymsp->__Vcoverage[12419]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back_io_out_flush)))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__stall)))) {
                if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__reg_next_pc_valid) {
                    ++(vlSymsp->__Vcoverage[12424]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back_io_out_flush)))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__stall)))) {
                if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__reg_next_pc_valid)))) {
                    ++(vlSymsp->__Vcoverage[12425]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back_io_out_flush)))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__stall)))) {
                if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__reg_next_pc_valid) {
                    ++(vlSymsp->__Vcoverage[12430]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back_io_out_flush)))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__stall)))) {
                if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__reg_next_pc_valid)))) {
                    ++(vlSymsp->__Vcoverage[12431]);
                }
            }
        }
    }
    ++(vlSymsp->__Vcoverage[15808]);
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[15709]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[15764]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[15759]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[15750]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[15807]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[15722]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[15779]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[15789]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[15756]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[15739]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[15770]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[15728]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[15792]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[15767]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[15804]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[15795]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[15747]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[15714]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[15773]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[15731]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[15776]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[15782]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[15798]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[15801]);
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_ls_state) {
            if (vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_ls_state) {
                ++(vlSymsp->__Vcoverage[15706]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_ls_state) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_ls_state)))) {
                ++(vlSymsp->__Vcoverage[15754]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_ls_state) {
            if (vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_ls_state) {
                ++(vlSymsp->__Vcoverage[15753]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_ls_state)))) {
            ++(vlSymsp->__Vcoverage[15746]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_ls_state) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_ls_state)))) {
                ++(vlSymsp->__Vcoverage[15720]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_ls_state)))) {
            ++(vlSymsp->__Vcoverage[15712]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_ls_state)))) {
            ++(vlSymsp->__Vcoverage[15721]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_ls_state) {
            if (vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_ls_state) {
                ++(vlSymsp->__Vcoverage[15744]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_ls_state) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_ls_state)))) {
                ++(vlSymsp->__Vcoverage[15726]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_ls_state)))) {
            ++(vlSymsp->__Vcoverage[15729]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_ls_state) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_ls_state)))) {
                ++(vlSymsp->__Vcoverage[15707]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_ls_state)))) {
            ++(vlSymsp->__Vcoverage[15708]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_ls_state) {
            if (vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_ls_state) {
                ++(vlSymsp->__Vcoverage[15725]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_ls_state) {
            ++(vlSymsp->__Vcoverage[15713]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_ls_state) {
            if (vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_ls_state) {
                ++(vlSymsp->__Vcoverage[15719]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_ls_state)))) {
            ++(vlSymsp->__Vcoverage[15755]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_ls_state) {
            ++(vlSymsp->__Vcoverage[15730]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_ls_state) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_ls_state)))) {
                ++(vlSymsp->__Vcoverage[15745]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_ls_state)))) {
            ++(vlSymsp->__Vcoverage[15727]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_ls_state) {
            if (vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_ls_state) {
                ++(vlSymsp->__Vcoverage[15736]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_ls_state) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_ls_state)))) {
                ++(vlSymsp->__Vcoverage[15737]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_ls_state)))) {
            ++(vlSymsp->__Vcoverage[15738]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_ls_state) {
            if (vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_ls_state) {
                if (vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT___T_2) {
                    ++(vlSymsp->__Vcoverage[15742]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_ls_state) {
            if (vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_ls_state) {
                if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT___T_2)))) {
                    ++(vlSymsp->__Vcoverage[15718]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_ls_state) {
            if (vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_ls_state) {
                if (vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT___T_2) {
                    ++(vlSymsp->__Vcoverage[15717]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_ls_state) {
            if (vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_ls_state) {
                if (vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT___T_2) {
                    ++(vlSymsp->__Vcoverage[15734]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_ls_state) {
            if (vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_ls_state) {
                if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT___T_2)))) {
                    ++(vlSymsp->__Vcoverage[15743]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_ls_state) {
            if (vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_ls_state) {
                if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT___T_2)))) {
                    ++(vlSymsp->__Vcoverage[15705]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_ls_state) {
            if (vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_ls_state) {
                if (vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT___T_2) {
                    ++(vlSymsp->__Vcoverage[15704]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_ls_state) {
            if (vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_ls_state) {
                if (vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT___T_2) {
                    ++(vlSymsp->__Vcoverage[15751]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_ls_state) {
            if (vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_ls_state) {
                if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT___T_2)))) {
                    ++(vlSymsp->__Vcoverage[15752]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_ls_state) {
            if (vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_ls_state) {
                if (vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT___T_2) {
                    ++(vlSymsp->__Vcoverage[15723]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_ls_state) {
            if (vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_ls_state) {
                if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT___T_2)))) {
                    ++(vlSymsp->__Vcoverage[15724]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_ls_state) {
            if (vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_ls_state) {
                if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT___T_2)))) {
                    ++(vlSymsp->__Vcoverage[15735]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_ls_state)))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute_io_out_mem_avalid)))) {
                ++(vlSymsp->__Vcoverage[15741]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_ls_state)))) {
            if (vlSelf->riscv_soc__DOT__core__DOT__execute_io_out_mem_avalid) {
                ++(vlSymsp->__Vcoverage[15740]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_ls_state)))) {
            if (vlSelf->riscv_soc__DOT__core__DOT__execute_io_out_mem_avalid) {
                ++(vlSymsp->__Vcoverage[15715]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_ls_state)))) {
            if (vlSelf->riscv_soc__DOT__core__DOT__execute_io_out_mem_avalid) {
                ++(vlSymsp->__Vcoverage[15710]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_ls_state)))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute_io_out_mem_avalid)))) {
                ++(vlSymsp->__Vcoverage[15716]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_ls_state)))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute_io_out_mem_avalid)))) {
                ++(vlSymsp->__Vcoverage[15711]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_ls_state)))) {
            if (vlSelf->riscv_soc__DOT__core__DOT__execute_io_out_mem_avalid) {
                ++(vlSymsp->__Vcoverage[15732]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_ls_state)))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute_io_out_mem_avalid)))) {
                ++(vlSymsp->__Vcoverage[15733]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_stall)))) {
            ++(vlSymsp->__Vcoverage[15781]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_stall) {
            ++(vlSymsp->__Vcoverage[15780]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_stall)))) {
            ++(vlSymsp->__Vcoverage[15777]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_stall)))) {
            ++(vlSymsp->__Vcoverage[15774]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_stall) {
            ++(vlSymsp->__Vcoverage[15775]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_stall)))) {
            ++(vlSymsp->__Vcoverage[15772]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_stall) {
            ++(vlSymsp->__Vcoverage[15771]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_stall) {
            ++(vlSymsp->__Vcoverage[15768]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_stall) {
            ++(vlSymsp->__Vcoverage[15766]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_stall)))) {
            ++(vlSymsp->__Vcoverage[15762]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_stall) {
            ++(vlSymsp->__Vcoverage[15763]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_stall) {
            ++(vlSymsp->__Vcoverage[15749]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_stall) {
            ++(vlSymsp->__Vcoverage[15788]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_stall)))) {
            ++(vlSymsp->__Vcoverage[15757]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_stall)))) {
            ++(vlSymsp->__Vcoverage[15765]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_stall) {
            ++(vlSymsp->__Vcoverage[15758]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_stall) {
            ++(vlSymsp->__Vcoverage[15797]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_stall)))) {
            ++(vlSymsp->__Vcoverage[15748]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_stall)))) {
            ++(vlSymsp->__Vcoverage[15769]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_stall) {
            ++(vlSymsp->__Vcoverage[15778]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_stall) {
            ++(vlSymsp->__Vcoverage[15794]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_stall)))) {
            ++(vlSymsp->__Vcoverage[15793]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_stall)))) {
            ++(vlSymsp->__Vcoverage[15796]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_stall)))) {
            if (vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__temp_except) {
                ++(vlSymsp->__Vcoverage[15787]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_stall) {
            if ((1U & (~ ((IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__is_time_irq) 
                          | (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__is_soft_irq))))) {
                ++(vlSymsp->__Vcoverage[15784]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_stall) {
            if (((IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__is_time_irq) 
                 | (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__is_soft_irq))) {
                ++(vlSymsp->__Vcoverage[15783]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ ((IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_stall) 
                      | (0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_exuType)))))) {
            ++(vlSymsp->__Vcoverage[15791]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_stall) 
             | (0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_exuType)))) {
            ++(vlSymsp->__Vcoverage[15803]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_stall) 
             | (0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_exuType)))) {
            ++(vlSymsp->__Vcoverage[15806]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_stall) 
             | (0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_exuType)))) {
            ++(vlSymsp->__Vcoverage[15790]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_stall) 
             | (0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_exuType)))) {
            ++(vlSymsp->__Vcoverage[15800]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ ((IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_stall) 
                      | (0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_exuType)))))) {
            ++(vlSymsp->__Vcoverage[15802]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ ((IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_stall) 
                      | (0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_exuType)))))) {
            ++(vlSymsp->__Vcoverage[15799]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ ((IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_stall) 
                      | (0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_exuType)))))) {
            ++(vlSymsp->__Vcoverage[15805]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_stall)))) {
            if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__abn_exu__DOT__reg_is_mret) {
                ++(vlSymsp->__Vcoverage[15760]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_stall)))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__abn_exu__DOT__reg_is_mret)))) {
                ++(vlSymsp->__Vcoverage[15761]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_stall)))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__temp_except)))) {
                if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__abn_exu__DOT__reg_is_mret)))) {
                    ++(vlSymsp->__Vcoverage[15786]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_stall)))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__temp_except)))) {
                if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__abn_exu__DOT__reg_is_mret) {
                    ++(vlSymsp->__Vcoverage[15785]);
                }
            }
        }
    }
    ++(vlSymsp->__Vcoverage[11639]);
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[11626]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[11635]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[11618]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[11615]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[11632]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[11638]);
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (vlSelf->riscv_soc__DOT__axi_ram_io_ram_bus_r_bits_rlast) {
            ++(vlSymsp->__Vcoverage[11636]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__axi_ram_io_ram_bus_r_bits_rlast)))) {
            ++(vlSymsp->__Vcoverage[11637]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_b_valid)))) {
            ++(vlSymsp->__Vcoverage[11634]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_b_valid) {
            ++(vlSymsp->__Vcoverage[11633]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__reg_r_cnt))) {
            ++(vlSymsp->__Vcoverage[11625]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__reg_r_cnt))) {
            ++(vlSymsp->__Vcoverage[11630]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__reg_r_cnt))) {
            ++(vlSymsp->__Vcoverage[11631]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__reg_w_cnt))) {
            ++(vlSymsp->__Vcoverage[11614]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__reg_w_cnt))) {
            ++(vlSymsp->__Vcoverage[11617]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__reg_w_cnt))) {
            ++(vlSymsp->__Vcoverage[11616]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__reg_r_cnt))) {
            if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_r_valid) {
                ++(vlSymsp->__Vcoverage[11621]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__reg_r_cnt))) {
            if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_r_valid) {
                ++(vlSymsp->__Vcoverage[11629]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__reg_w_cnt))) {
            if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_w_valid) {
                ++(vlSymsp->__Vcoverage[11609]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__reg_w_cnt))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_w_valid)))) {
                ++(vlSymsp->__Vcoverage[11610]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__reg_r_cnt))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_r_valid)))) {
                if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_r_valid) {
                    ++(vlSymsp->__Vcoverage[11619]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__reg_r_cnt))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_r_valid)))) {
                if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_r_valid)))) {
                    ++(vlSymsp->__Vcoverage[11620]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__reg_r_cnt))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_r_valid)))) {
                if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_r_valid)))) {
                    ++(vlSymsp->__Vcoverage[11628]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__reg_r_cnt))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_r_valid)))) {
                if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_r_valid) {
                    ++(vlSymsp->__Vcoverage[11627]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__reg_w_cnt))) {
            if (((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__w_lockId)) 
                 & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_DCache_bus_w_ready) 
                    & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_w_valid)))) {
                ++(vlSymsp->__Vcoverage[11613]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__reg_r_cnt))) {
            if (((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__r_lockId)) 
                 & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_r_valid) 
                    & (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_ICache_bus_r_ready)))) {
                ++(vlSymsp->__Vcoverage[11624]);
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
                    ++(vlSymsp->__Vcoverage[11611]);
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
                    ++(vlSymsp->__Vcoverage[11612]);
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
                    ++(vlSymsp->__Vcoverage[11622]);
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
                    ++(vlSymsp->__Vcoverage[11623]);
                }
            }
        }
    }
    ++(vlSymsp->__Vcoverage[16503]);
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[16482]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[16475]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[16461]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[16454]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[16468]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[16487]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[16492]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[16497]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[16502]);
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (vlSelf->riscv_soc__DOT__core__DOT__csr_reg__DOT__irq) {
            ++(vlSymsp->__Vcoverage[16481]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (vlSelf->riscv_soc__DOT__core__DOT__csr_reg__DOT__irq) {
            ++(vlSymsp->__Vcoverage[16453]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (vlSelf->riscv_soc__DOT__core__DOT__csr_reg__DOT__irq) {
            ++(vlSymsp->__Vcoverage[16486]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (vlSelf->riscv_soc__DOT__core__DOT__csr_reg__DOT__irq) {
            ++(vlSymsp->__Vcoverage[16491]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back_io_out_w_csr_en)))) {
            ++(vlSymsp->__Vcoverage[16474]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (vlSelf->riscv_soc__DOT__core__DOT__write_back_io_out_w_csr_en) {
            ++(vlSymsp->__Vcoverage[16473]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back_io_out_w_csr_en)))) {
            ++(vlSymsp->__Vcoverage[16467]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (vlSelf->riscv_soc__DOT__core__DOT__write_back_io_out_w_csr_en) {
            ++(vlSymsp->__Vcoverage[16466]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back_io_out_w_csr_en)))) {
            ++(vlSymsp->__Vcoverage[16496]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back_io_out_w_csr_en)))) {
            ++(vlSymsp->__Vcoverage[16501]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (vlSelf->riscv_soc__DOT__core__DOT__write_back_io_out_w_csr_en) {
            ++(vlSymsp->__Vcoverage[16459]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back_io_out_w_csr_en)))) {
            ++(vlSymsp->__Vcoverage[16460]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (vlSelf->riscv_soc__DOT__core__DOT__write_back_io_out_w_csr_en) {
            ++(vlSymsp->__Vcoverage[16495]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (vlSelf->riscv_soc__DOT__core__DOT__write_back_io_out_w_csr_en) {
            ++(vlSymsp->__Vcoverage[16500]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (vlSelf->riscv_soc__DOT__core__DOT__csr_reg__DOT__irq) {
            if (vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_is_exception) {
                ++(vlSymsp->__Vcoverage[16476]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__csr_reg__DOT__irq)))) {
            if (vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_is_exception) {
                ++(vlSymsp->__Vcoverage[16480]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (vlSelf->riscv_soc__DOT__core__DOT__csr_reg__DOT__irq) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_is_exception)))) {
                ++(vlSymsp->__Vcoverage[16477]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__csr_reg__DOT__irq)))) {
            if (vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_is_exception) {
                ++(vlSymsp->__Vcoverage[16452]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__csr_reg__DOT__irq)))) {
            if (vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_is_exception) {
                ++(vlSymsp->__Vcoverage[16485]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__csr_reg__DOT__irq)))) {
            if (vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_is_exception) {
                ++(vlSymsp->__Vcoverage[16490]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__csr_reg__DOT__irq)))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_is_exception)))) {
                if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back_io_out_w_csr_en)))) {
                    ++(vlSymsp->__Vcoverage[16479]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__csr_reg__DOT__irq)))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_is_exception)))) {
                if (vlSelf->riscv_soc__DOT__core__DOT__write_back_io_out_w_csr_en) {
                    ++(vlSymsp->__Vcoverage[16478]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (vlSelf->riscv_soc__DOT__core__DOT__write_back_io_out_w_csr_en) {
            if ((1U & (~ ((~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__csr_reg__DOT__irq)) 
                          & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_is_exception)))))) {
                ++(vlSymsp->__Vcoverage[16465]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (vlSelf->riscv_soc__DOT__core__DOT__write_back_io_out_w_csr_en) {
            if ((1U & ((~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__csr_reg__DOT__irq)) 
                       & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_is_exception))))) {
                ++(vlSymsp->__Vcoverage[16464]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__csr_reg__DOT__irq)))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_is_exception)))) {
                if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back_io_out_w_csr_en)))) {
                    ++(vlSymsp->__Vcoverage[16451]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__csr_reg__DOT__irq)))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_is_exception)))) {
                if (vlSelf->riscv_soc__DOT__core__DOT__write_back_io_out_w_csr_en) {
                    ++(vlSymsp->__Vcoverage[16450]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (vlSelf->riscv_soc__DOT__core__DOT__write_back_io_out_w_csr_en) {
            if ((1U & (~ ((~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__csr_reg__DOT__irq)) 
                          & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_is_exception)))))) {
                ++(vlSymsp->__Vcoverage[16472]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (vlSelf->riscv_soc__DOT__core__DOT__write_back_io_out_w_csr_en) {
            if ((1U & (~ ((~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__csr_reg__DOT__irq)) 
                          & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_is_exception)))))) {
                ++(vlSymsp->__Vcoverage[16458]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (vlSelf->riscv_soc__DOT__core__DOT__write_back_io_out_w_csr_en) {
            if ((1U & ((~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__csr_reg__DOT__irq)) 
                       & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_is_exception))))) {
                ++(vlSymsp->__Vcoverage[16471]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (vlSelf->riscv_soc__DOT__core__DOT__write_back_io_out_w_csr_en) {
            if ((1U & ((~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__csr_reg__DOT__irq)) 
                       & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_is_exception))))) {
                ++(vlSymsp->__Vcoverage[16457]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__csr_reg__DOT__irq)))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_is_exception)))) {
                if (vlSelf->riscv_soc__DOT__core__DOT__write_back_io_out_w_csr_en) {
                    ++(vlSymsp->__Vcoverage[16483]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__csr_reg__DOT__irq)))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_is_exception)))) {
                if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back_io_out_w_csr_en)))) {
                    ++(vlSymsp->__Vcoverage[16484]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__csr_reg__DOT__irq)))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_is_exception)))) {
                if (vlSelf->riscv_soc__DOT__core__DOT__write_back_io_out_w_csr_en) {
                    ++(vlSymsp->__Vcoverage[16488]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__csr_reg__DOT__irq)))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_is_exception)))) {
                if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back_io_out_w_csr_en)))) {
                    ++(vlSymsp->__Vcoverage[16489]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (vlSelf->riscv_soc__DOT__core__DOT__write_back_io_out_w_csr_en) {
            if ((0xb02U == (0xfffU & (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_csr_addr)))) {
                ++(vlSymsp->__Vcoverage[16498]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (vlSelf->riscv_soc__DOT__core__DOT__write_back_io_out_w_csr_en) {
            if ((0xb00U == (0xfffU & (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_csr_addr)))) {
                ++(vlSymsp->__Vcoverage[16493]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (vlSelf->riscv_soc__DOT__core__DOT__write_back_io_out_w_csr_en) {
            if ((0xb00U != (0xfffU & (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_csr_addr)))) {
                ++(vlSymsp->__Vcoverage[16494]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (vlSelf->riscv_soc__DOT__core__DOT__write_back_io_out_w_csr_en) {
            if ((0xb02U != (0xfffU & (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_csr_addr)))) {
                ++(vlSymsp->__Vcoverage[16499]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (vlSelf->riscv_soc__DOT__core__DOT__write_back_io_out_w_csr_en) {
            if ((1U & ((~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__csr_reg__DOT__irq)) 
                       & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_is_exception))))) {
                if ((0x340U != (0xfffU & (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_csr_addr)))) {
                    ++(vlSymsp->__Vcoverage[16470]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (vlSelf->riscv_soc__DOT__core__DOT__write_back_io_out_w_csr_en) {
            if ((1U & ((~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__csr_reg__DOT__irq)) 
                       & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_is_exception))))) {
                if ((0x340U == (0xfffU & (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_csr_addr)))) {
                    ++(vlSymsp->__Vcoverage[16469]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (vlSelf->riscv_soc__DOT__core__DOT__write_back_io_out_w_csr_en) {
            if ((1U & ((~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__csr_reg__DOT__irq)) 
                       & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_is_exception))))) {
                if ((0x305U != (0xfffU & (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_csr_addr)))) {
                    ++(vlSymsp->__Vcoverage[16463]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (vlSelf->riscv_soc__DOT__core__DOT__write_back_io_out_w_csr_en) {
            if ((1U & ((~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__csr_reg__DOT__irq)) 
                       & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_is_exception))))) {
                if ((0x304U == (0xfffU & (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_csr_addr)))) {
                    ++(vlSymsp->__Vcoverage[16455]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (vlSelf->riscv_soc__DOT__core__DOT__write_back_io_out_w_csr_en) {
            if ((1U & ((~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__csr_reg__DOT__irq)) 
                       & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_is_exception))))) {
                if ((0x304U != (0xfffU & (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_csr_addr)))) {
                    ++(vlSymsp->__Vcoverage[16456]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (vlSelf->riscv_soc__DOT__core__DOT__write_back_io_out_w_csr_en) {
            if ((1U & ((~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__csr_reg__DOT__irq)) 
                       & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_is_exception))))) {
                if ((0x305U == (0xfffU & (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_csr_addr)))) {
                    ++(vlSymsp->__Vcoverage[16462]);
                }
            }
        }
    }
    ++(vlSymsp->__Vcoverage[11576]);
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[11437]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[11431]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[11425]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[11419]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[11413]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[11407]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[11401]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[11395]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[11389]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[11383]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[11377]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[11359]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[11341]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[11329]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[11323]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[11305]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[11287]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[11281]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[11263]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[11257]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[11251]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[11347]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[11149]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[11335]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[11533]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[11227]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[11527]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[11135]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[11317]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[11119]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[11157]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[11299]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[11112]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[11197]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[11239]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[11082]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[11104]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[11191]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[11127]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[11269]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[11077]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[11467]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[11209]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[11072]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[11485]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[11293]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[11311]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[11353]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[11165]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[11087]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[11067]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[11545]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[11203]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[11371]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[11097]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[11275]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[11092]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[11575]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[11142]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[11185]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[11233]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[11551]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[11172]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[11365]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[11179]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[11215]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[11221]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[11245]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[11443]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[11449]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[11455]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[11461]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[11473]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[11479]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[11491]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[11497]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[11503]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[11509]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[11515]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[11521]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[11539]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[11557]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[11563]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[11567]);
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
            if ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
                ++(vlSymsp->__Vcoverage[11147]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
            ++(vlSymsp->__Vcoverage[11148]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
            ++(vlSymsp->__Vcoverage[11140]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
            if ((1U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
                ++(vlSymsp->__Vcoverage[11139]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
            ++(vlSymsp->__Vcoverage[11133]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
            if ((1U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
                if ((2U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
                    ++(vlSymsp->__Vcoverage[11131]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
            if ((1U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
                if ((2U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
                    ++(vlSymsp->__Vcoverage[11130]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
            if ((1U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
                if ((2U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
                    ++(vlSymsp->__Vcoverage[11123]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
            if ((1U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
                if ((2U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
                    ++(vlSymsp->__Vcoverage[11122]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
            if ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
                ++(vlSymsp->__Vcoverage[11124]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
            if ((1U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
                if ((2U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
                    ++(vlSymsp->__Vcoverage[11116]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
            if ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
                ++(vlSymsp->__Vcoverage[11117]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
            if ((1U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
                if ((2U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
                    ++(vlSymsp->__Vcoverage[11108]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
            if ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
                ++(vlSymsp->__Vcoverage[11109]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
            if ((1U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
                if ((2U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
                    ++(vlSymsp->__Vcoverage[11101]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
            if ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
                ++(vlSymsp->__Vcoverage[11102]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
            if ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
                ++(vlSymsp->__Vcoverage[11170]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
            if ((1U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
                if ((2U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
                    ++(vlSymsp->__Vcoverage[11145]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
            if ((1U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
                if ((2U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
                    ++(vlSymsp->__Vcoverage[11146]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
            ++(vlSymsp->__Vcoverage[11103]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
            ++(vlSymsp->__Vcoverage[11075]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
            ++(vlSymsp->__Vcoverage[11171]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
            ++(vlSymsp->__Vcoverage[11095]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
            ++(vlSymsp->__Vcoverage[11071]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
            if ((1U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
                if ((2U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
                    ++(vlSymsp->__Vcoverage[11160]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
            if ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
                ++(vlSymsp->__Vcoverage[11138]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
            ++(vlSymsp->__Vcoverage[11090]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
            if ((1U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
                if ((2U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
                    ++(vlSymsp->__Vcoverage[11100]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
            if ((1U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
                if ((2U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
                    ++(vlSymsp->__Vcoverage[11115]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
            ++(vlSymsp->__Vcoverage[11070]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
            ++(vlSymsp->__Vcoverage[11066]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
            ++(vlSymsp->__Vcoverage[11118]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
            if ((1U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
                if ((2U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
                    ++(vlSymsp->__Vcoverage[11161]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
            ++(vlSymsp->__Vcoverage[11125]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
            if ((1U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
                if ((2U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
                    ++(vlSymsp->__Vcoverage[11107]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
            ++(vlSymsp->__Vcoverage[11081]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
            ++(vlSymsp->__Vcoverage[11111]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
            if ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
                ++(vlSymsp->__Vcoverage[11065]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
            if ((1U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
                if ((2U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
                    ++(vlSymsp->__Vcoverage[11152]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
            ++(vlSymsp->__Vcoverage[11086]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
            if ((1U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
                ++(vlSymsp->__Vcoverage[11565]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
            if ((1U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
                if ((2U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
                    ++(vlSymsp->__Vcoverage[11571]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
            ++(vlSymsp->__Vcoverage[11110]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
            ++(vlSymsp->__Vcoverage[11085]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
            ++(vlSymsp->__Vcoverage[11076]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
            if ((1U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
                if ((2U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
                    ++(vlSymsp->__Vcoverage[11063]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
            if ((1U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
                if ((2U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
                    ++(vlSymsp->__Vcoverage[11064]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
            ++(vlSymsp->__Vcoverage[11126]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
            ++(vlSymsp->__Vcoverage[11080]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
            if ((1U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
                if ((2U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
                    ++(vlSymsp->__Vcoverage[11169]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
            ++(vlSymsp->__Vcoverage[11178]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
            if ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
                ++(vlSymsp->__Vcoverage[11132]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
            if ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
                ++(vlSymsp->__Vcoverage[11177]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
            ++(vlSymsp->__Vcoverage[11134]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
            if ((1U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
                if ((2U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
                    ++(vlSymsp->__Vcoverage[11175]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
            ++(vlSymsp->__Vcoverage[11091]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
            if ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
                ++(vlSymsp->__Vcoverage[11572]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
            ++(vlSymsp->__Vcoverage[11141]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
            ++(vlSymsp->__Vcoverage[11096]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
            if ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
                ++(vlSymsp->__Vcoverage[11154]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
            if ((1U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
                if ((2U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
                    ++(vlSymsp->__Vcoverage[11153]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
            ++(vlSymsp->__Vcoverage[11155]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
            ++(vlSymsp->__Vcoverage[11156]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
            if ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
                ++(vlSymsp->__Vcoverage[11162]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
            ++(vlSymsp->__Vcoverage[11163]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
            ++(vlSymsp->__Vcoverage[11164]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
            if ((1U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
                if ((2U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
                    ++(vlSymsp->__Vcoverage[11168]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
            ++(vlSymsp->__Vcoverage[11566]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
            if ((1U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
                if ((2U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
                    ++(vlSymsp->__Vcoverage[11176]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
            ++(vlSymsp->__Vcoverage[11573]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
            if ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
                ++(vlSymsp->__Vcoverage[11564]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
            if ((1U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
                if ((2U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
                    ++(vlSymsp->__Vcoverage[11570]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
            ++(vlSymsp->__Vcoverage[11574]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1_io_DCache_valid)))) {
                ++(vlSymsp->__Vcoverage[11074]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
            if (vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1_io_DCache_valid) {
                ++(vlSymsp->__Vcoverage[11073]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
            if (vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1_io_DCache_valid) {
                ++(vlSymsp->__Vcoverage[11068]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
            if (vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1_io_DCache_valid) {
                ++(vlSymsp->__Vcoverage[11078]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
            if (vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1_io_DCache_valid) {
                ++(vlSymsp->__Vcoverage[11083]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
            if (vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1_io_DCache_valid) {
                ++(vlSymsp->__Vcoverage[11059]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1_io_DCache_valid)))) {
                ++(vlSymsp->__Vcoverage[11069]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1_io_DCache_valid)))) {
                ++(vlSymsp->__Vcoverage[11060]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1_io_DCache_valid)))) {
                ++(vlSymsp->__Vcoverage[11079]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1_io_DCache_valid)))) {
                ++(vlSymsp->__Vcoverage[11084]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
            if (vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1_io_DCache_valid) {
                ++(vlSymsp->__Vcoverage[11088]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1_io_DCache_valid)))) {
                ++(vlSymsp->__Vcoverage[11089]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
            if (vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1_io_DCache_valid) {
                ++(vlSymsp->__Vcoverage[11093]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1_io_DCache_valid)))) {
                ++(vlSymsp->__Vcoverage[11094]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
            if ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
                if (((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1) 
                     | (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2))) {
                    ++(vlSymsp->__Vcoverage[11151]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
            if ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
                if ((1U & (~ ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1) 
                              | (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2))))) {
                    ++(vlSymsp->__Vcoverage[11144]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
            if ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
                if ((1U & (~ ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1) 
                              | (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2))))) {
                    ++(vlSymsp->__Vcoverage[11137]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
            if ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
                if (((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1) 
                     | (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2))) {
                    ++(vlSymsp->__Vcoverage[11136]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
            if ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
                if (((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1) 
                     | (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2))) {
                    ++(vlSymsp->__Vcoverage[11128]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
            if ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
                if (((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1) 
                     | (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2))) {
                    ++(vlSymsp->__Vcoverage[11113]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
            if ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
                if ((1U & (~ ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1) 
                              | (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2))))) {
                    ++(vlSymsp->__Vcoverage[11150]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
            if ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
                if (((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1) 
                     | (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2))) {
                    ++(vlSymsp->__Vcoverage[11105]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
            if ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
                if (((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1) 
                     | (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2))) {
                    ++(vlSymsp->__Vcoverage[11143]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
            if ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
                if ((1U & (~ ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1) 
                              | (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2))))) {
                    ++(vlSymsp->__Vcoverage[11099]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
            if ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
                if (((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1) 
                     | (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2))) {
                    ++(vlSymsp->__Vcoverage[11098]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
            if ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
                if (((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1) 
                     | (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2))) {
                    ++(vlSymsp->__Vcoverage[11167]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
            if ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
                if ((1U & (~ ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1) 
                              | (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2))))) {
                    ++(vlSymsp->__Vcoverage[11114]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
            if ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
                if (((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1) 
                     | (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2))) {
                    ++(vlSymsp->__Vcoverage[11159]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
            if ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
                if ((1U & (~ ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1) 
                              | (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2))))) {
                    ++(vlSymsp->__Vcoverage[11106]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
            if ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
                if (((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1) 
                     | (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2))) {
                    ++(vlSymsp->__Vcoverage[11061]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
            if ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
                if ((1U & (~ ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1) 
                              | (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2))))) {
                    ++(vlSymsp->__Vcoverage[11129]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
            if ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
                if (((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1) 
                     | (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2))) {
                    ++(vlSymsp->__Vcoverage[11174]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
            if ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
                if ((1U & (~ ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1) 
                              | (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2))))) {
                    ++(vlSymsp->__Vcoverage[11173]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
            if ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
                if ((1U & (~ ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1) 
                              | (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2))))) {
                    ++(vlSymsp->__Vcoverage[11062]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
            if ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
                if ((1U & (~ ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1) 
                              | (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2))))) {
                    ++(vlSymsp->__Vcoverage[11158]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
            if ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
                if ((1U & (~ ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1) 
                              | (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2))))) {
                    ++(vlSymsp->__Vcoverage[11166]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
            if ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
                if (((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1) 
                     | (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2))) {
                    ++(vlSymsp->__Vcoverage[11569]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
            if ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
                if ((1U & (~ ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1) 
                              | (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2))))) {
                    ++(vlSymsp->__Vcoverage[11568]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
            if ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
                if ((1U & (~ ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_offset) 
                              >> 3U)))) {
                    ++(vlSymsp->__Vcoverage[11121]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
            if ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
                if ((8U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_offset))) {
                    ++(vlSymsp->__Vcoverage[11120]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ ((0x29U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
                      & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))))) {
            ++(vlSymsp->__Vcoverage[11430]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x29U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            ++(vlSymsp->__Vcoverage[11429]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ ((0x28U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
                      & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))))) {
            ++(vlSymsp->__Vcoverage[11424]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x28U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            ++(vlSymsp->__Vcoverage[11423]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ ((0x27U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
                      & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))))) {
            ++(vlSymsp->__Vcoverage[11418]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x27U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            ++(vlSymsp->__Vcoverage[11417]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ ((0x26U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
                      & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))))) {
            ++(vlSymsp->__Vcoverage[11412]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x26U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            ++(vlSymsp->__Vcoverage[11411]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ ((0x25U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
                      & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))))) {
            ++(vlSymsp->__Vcoverage[11406]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x25U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            ++(vlSymsp->__Vcoverage[11405]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ ((0x24U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
                      & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))))) {
            ++(vlSymsp->__Vcoverage[11400]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x24U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            ++(vlSymsp->__Vcoverage[11399]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ ((0x23U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
                      & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))))) {
            ++(vlSymsp->__Vcoverage[11394]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x23U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            ++(vlSymsp->__Vcoverage[11393]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ ((0x22U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
                      & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))))) {
            ++(vlSymsp->__Vcoverage[11388]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x22U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            ++(vlSymsp->__Vcoverage[11387]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ ((0x21U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
                      & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))))) {
            ++(vlSymsp->__Vcoverage[11382]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x21U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            ++(vlSymsp->__Vcoverage[11381]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ ((0x20U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
                      & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))))) {
            ++(vlSymsp->__Vcoverage[11376]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x20U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            ++(vlSymsp->__Vcoverage[11375]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ ((0x1fU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
                      & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))))) {
            ++(vlSymsp->__Vcoverage[11370]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x1fU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            ++(vlSymsp->__Vcoverage[11369]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ ((0x1eU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
                      & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))))) {
            ++(vlSymsp->__Vcoverage[11364]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x1dU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            ++(vlSymsp->__Vcoverage[11357]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x1cU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            ++(vlSymsp->__Vcoverage[11351]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ ((0x1aU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
                      & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))))) {
            ++(vlSymsp->__Vcoverage[11340]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x1aU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            ++(vlSymsp->__Vcoverage[11339]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x19U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            ++(vlSymsp->__Vcoverage[11333]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ ((0x16U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
                      & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))))) {
            ++(vlSymsp->__Vcoverage[11316]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x16U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            ++(vlSymsp->__Vcoverage[11315]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ ((0x15U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
                      & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))))) {
            ++(vlSymsp->__Vcoverage[11310]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x15U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            ++(vlSymsp->__Vcoverage[11309]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x13U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            ++(vlSymsp->__Vcoverage[11297]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x12U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            ++(vlSymsp->__Vcoverage[11291]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x11U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            ++(vlSymsp->__Vcoverage[11285]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0xfU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            ++(vlSymsp->__Vcoverage[11273]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ ((0xeU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
                      & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))))) {
            ++(vlSymsp->__Vcoverage[11268]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ ((0xdU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
                      & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))))) {
            ++(vlSymsp->__Vcoverage[11262]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ ((0xcU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
                      & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))))) {
            ++(vlSymsp->__Vcoverage[11256]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ ((0xbU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
                      & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))))) {
            ++(vlSymsp->__Vcoverage[11250]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ ((0xaU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
                      & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))))) {
            ++(vlSymsp->__Vcoverage[11244]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0xaU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            ++(vlSymsp->__Vcoverage[11243]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((9U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            ++(vlSymsp->__Vcoverage[11237]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ ((8U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
                      & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))))) {
            ++(vlSymsp->__Vcoverage[11232]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x3aU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            ++(vlSymsp->__Vcoverage[11531]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x18U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            ++(vlSymsp->__Vcoverage[11327]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ ((0x39U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
                      & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))))) {
            ++(vlSymsp->__Vcoverage[11526]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ ((0x17U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
                      & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))))) {
            ++(vlSymsp->__Vcoverage[11322]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((5U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            ++(vlSymsp->__Vcoverage[11213]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ ((0x37U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
                      & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))))) {
            ++(vlSymsp->__Vcoverage[11514]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x36U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            ++(vlSymsp->__Vcoverage[11507]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x14U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            ++(vlSymsp->__Vcoverage[11303]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x3cU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            ++(vlSymsp->__Vcoverage[11543]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((2U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            ++(vlSymsp->__Vcoverage[11195]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ ((0x12U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
                      & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))))) {
            ++(vlSymsp->__Vcoverage[11292]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ ((0x33U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
                      & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))))) {
            ++(vlSymsp->__Vcoverage[11490]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ ((0x19U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
                      & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))))) {
            ++(vlSymsp->__Vcoverage[11334]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x33U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            ++(vlSymsp->__Vcoverage[11489]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0xeU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            ++(vlSymsp->__Vcoverage[11267]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ ((0x3bU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
                      & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))))) {
            ++(vlSymsp->__Vcoverage[11538]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ ((0x2fU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
                      & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))))) {
            ++(vlSymsp->__Vcoverage[11466]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x2fU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            ++(vlSymsp->__Vcoverage[11465]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ ((0x11U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
                      & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))))) {
            ++(vlSymsp->__Vcoverage[11286]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            ++(vlSymsp->__Vcoverage[11183]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ ((0x1cU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
                      & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))))) {
            ++(vlSymsp->__Vcoverage[11352]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ ((0x14U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
                      & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))))) {
            ++(vlSymsp->__Vcoverage[11304]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x2eU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            ++(vlSymsp->__Vcoverage[11459]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ ((0x10U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
                      & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))))) {
            ++(vlSymsp->__Vcoverage[11280]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x3dU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            ++(vlSymsp->__Vcoverage[11549]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((3U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            ++(vlSymsp->__Vcoverage[11201]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0xdU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            ++(vlSymsp->__Vcoverage[11261]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ ((2U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
                      & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))))) {
            ++(vlSymsp->__Vcoverage[11196]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ ((5U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
                      & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))))) {
            ++(vlSymsp->__Vcoverage[11214]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ ((0x13U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
                      & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))))) {
            ++(vlSymsp->__Vcoverage[11298]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x2dU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            ++(vlSymsp->__Vcoverage[11453]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ ((0xfU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
                      & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))))) {
            ++(vlSymsp->__Vcoverage[11274]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0xbU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            ++(vlSymsp->__Vcoverage[11249]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x3fU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            ++(vlSymsp->__Vcoverage[11561]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0xcU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            ++(vlSymsp->__Vcoverage[11255]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ ((0x31U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
                      & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))))) {
            ++(vlSymsp->__Vcoverage[11478]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x1eU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            ++(vlSymsp->__Vcoverage[11363]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x38U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            ++(vlSymsp->__Vcoverage[11519]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x17U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            ++(vlSymsp->__Vcoverage[11321]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x10U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            ++(vlSymsp->__Vcoverage[11279]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ ((0x18U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
                      & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))))) {
            ++(vlSymsp->__Vcoverage[11328]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x32U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            ++(vlSymsp->__Vcoverage[11483]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ ((0x32U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
                      & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))))) {
            ++(vlSymsp->__Vcoverage[11484]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
                      & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))))) {
            ++(vlSymsp->__Vcoverage[11184]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ ((0x3cU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
                      & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))))) {
            ++(vlSymsp->__Vcoverage[11544]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x1bU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            ++(vlSymsp->__Vcoverage[11345]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ ((0x1bU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
                      & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))))) {
            ++(vlSymsp->__Vcoverage[11346]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ ((0x1dU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
                      & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))))) {
            ++(vlSymsp->__Vcoverage[11358]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            ++(vlSymsp->__Vcoverage[11189]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
                      & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))))) {
            ++(vlSymsp->__Vcoverage[11190]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ ((3U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
                      & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))))) {
            ++(vlSymsp->__Vcoverage[11202]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((4U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            ++(vlSymsp->__Vcoverage[11207]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ ((4U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
                      & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))))) {
            ++(vlSymsp->__Vcoverage[11208]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((6U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            ++(vlSymsp->__Vcoverage[11219]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ ((6U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
                      & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))))) {
            ++(vlSymsp->__Vcoverage[11220]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((7U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            ++(vlSymsp->__Vcoverage[11225]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ ((7U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
                      & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))))) {
            ++(vlSymsp->__Vcoverage[11226]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((8U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            ++(vlSymsp->__Vcoverage[11231]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ ((9U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
                      & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))))) {
            ++(vlSymsp->__Vcoverage[11238]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x2aU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            ++(vlSymsp->__Vcoverage[11435]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ ((0x2aU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
                      & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))))) {
            ++(vlSymsp->__Vcoverage[11436]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x2bU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            ++(vlSymsp->__Vcoverage[11441]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ ((0x2bU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
                      & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))))) {
            ++(vlSymsp->__Vcoverage[11442]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x2cU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            ++(vlSymsp->__Vcoverage[11447]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ ((0x2cU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
                      & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))))) {
            ++(vlSymsp->__Vcoverage[11448]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ ((0x2dU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
                      & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))))) {
            ++(vlSymsp->__Vcoverage[11454]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ ((0x2eU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
                      & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))))) {
            ++(vlSymsp->__Vcoverage[11460]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x30U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            ++(vlSymsp->__Vcoverage[11471]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ ((0x30U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
                      & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))))) {
            ++(vlSymsp->__Vcoverage[11472]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x31U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            ++(vlSymsp->__Vcoverage[11477]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x34U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            ++(vlSymsp->__Vcoverage[11495]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ ((0x34U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
                      & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))))) {
            ++(vlSymsp->__Vcoverage[11496]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x35U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            ++(vlSymsp->__Vcoverage[11501]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ ((0x35U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
                      & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))))) {
            ++(vlSymsp->__Vcoverage[11502]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ ((0x36U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
                      & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))))) {
            ++(vlSymsp->__Vcoverage[11508]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x37U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            ++(vlSymsp->__Vcoverage[11513]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ ((0x38U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
                      & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))))) {
            ++(vlSymsp->__Vcoverage[11520]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x39U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            ++(vlSymsp->__Vcoverage[11525]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ ((0x3aU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
                      & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))))) {
            ++(vlSymsp->__Vcoverage[11532]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x3bU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            ++(vlSymsp->__Vcoverage[11537]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ ((0x3dU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
                      & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))))) {
            ++(vlSymsp->__Vcoverage[11550]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x3eU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            ++(vlSymsp->__Vcoverage[11555]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ ((0x3eU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
                      & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))))) {
            ++(vlSymsp->__Vcoverage[11556]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ ((0x3fU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
                      & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))))) {
            ++(vlSymsp->__Vcoverage[11562]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x1fU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1) {
                ++(vlSymsp->__Vcoverage[11368]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x1dU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1) {
                ++(vlSymsp->__Vcoverage[11356]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x1aU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1) {
                ++(vlSymsp->__Vcoverage[11338]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x18U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1) {
                ++(vlSymsp->__Vcoverage[11326]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x16U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1) {
                ++(vlSymsp->__Vcoverage[11314]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x14U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1) {
                ++(vlSymsp->__Vcoverage[11302]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x13U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1) {
                ++(vlSymsp->__Vcoverage[11296]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x10U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1) {
                ++(vlSymsp->__Vcoverage[11278]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0xfU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1) {
                ++(vlSymsp->__Vcoverage[11272]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0xbU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1) {
                ++(vlSymsp->__Vcoverage[11248]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x3bU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1) {
                ++(vlSymsp->__Vcoverage[11536]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x19U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1) {
                ++(vlSymsp->__Vcoverage[11332]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x26U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1) {
                ++(vlSymsp->__Vcoverage[11410]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((6U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1) {
                ++(vlSymsp->__Vcoverage[11218]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x15U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1) {
                ++(vlSymsp->__Vcoverage[11308]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((3U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1) {
                ++(vlSymsp->__Vcoverage[11200]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x1bU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1) {
                ++(vlSymsp->__Vcoverage[11344]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x3cU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1) {
                ++(vlSymsp->__Vcoverage[11542]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x12U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1) {
                ++(vlSymsp->__Vcoverage[11290]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x29U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1) {
                ++(vlSymsp->__Vcoverage[11428]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0xeU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1) {
                ++(vlSymsp->__Vcoverage[11266]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0xdU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1) {
                ++(vlSymsp->__Vcoverage[11260]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x1cU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1) {
                ++(vlSymsp->__Vcoverage[11350]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x2dU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1) {
                ++(vlSymsp->__Vcoverage[11452]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0xaU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1) {
                ++(vlSymsp->__Vcoverage[11242]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0xcU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1) {
                ++(vlSymsp->__Vcoverage[11254]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x1eU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1) {
                ++(vlSymsp->__Vcoverage[11362]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1) {
                ++(vlSymsp->__Vcoverage[11182]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x35U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1) {
                ++(vlSymsp->__Vcoverage[11500]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x31U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1) {
                ++(vlSymsp->__Vcoverage[11476]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x37U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1) {
                ++(vlSymsp->__Vcoverage[11512]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x2eU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1) {
                ++(vlSymsp->__Vcoverage[11458]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x17U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1) {
                ++(vlSymsp->__Vcoverage[11320]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((7U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1) {
                ++(vlSymsp->__Vcoverage[11224]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x27U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1) {
                ++(vlSymsp->__Vcoverage[11416]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x11U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1) {
                ++(vlSymsp->__Vcoverage[11284]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x3eU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1) {
                ++(vlSymsp->__Vcoverage[11554]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x20U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1) {
                ++(vlSymsp->__Vcoverage[11374]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1) {
                ++(vlSymsp->__Vcoverage[11188]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x21U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1) {
                ++(vlSymsp->__Vcoverage[11380]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((2U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1) {
                ++(vlSymsp->__Vcoverage[11194]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x22U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1) {
                ++(vlSymsp->__Vcoverage[11386]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x23U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1) {
                ++(vlSymsp->__Vcoverage[11392]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((4U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1) {
                ++(vlSymsp->__Vcoverage[11206]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x24U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1) {
                ++(vlSymsp->__Vcoverage[11398]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((5U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1) {
                ++(vlSymsp->__Vcoverage[11212]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x25U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1) {
                ++(vlSymsp->__Vcoverage[11404]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((8U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1) {
                ++(vlSymsp->__Vcoverage[11230]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x28U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1) {
                ++(vlSymsp->__Vcoverage[11422]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((9U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1) {
                ++(vlSymsp->__Vcoverage[11236]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x2aU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1) {
                ++(vlSymsp->__Vcoverage[11434]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x2bU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1) {
                ++(vlSymsp->__Vcoverage[11440]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x2cU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1) {
                ++(vlSymsp->__Vcoverage[11446]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x2fU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1) {
                ++(vlSymsp->__Vcoverage[11464]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x30U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1) {
                ++(vlSymsp->__Vcoverage[11470]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x32U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1) {
                ++(vlSymsp->__Vcoverage[11482]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x33U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1) {
                ++(vlSymsp->__Vcoverage[11488]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x34U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1) {
                ++(vlSymsp->__Vcoverage[11494]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x36U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1) {
                ++(vlSymsp->__Vcoverage[11506]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x38U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1) {
                ++(vlSymsp->__Vcoverage[11518]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x39U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1) {
                ++(vlSymsp->__Vcoverage[11524]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x3aU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1) {
                ++(vlSymsp->__Vcoverage[11530]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x3dU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1) {
                ++(vlSymsp->__Vcoverage[11548]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x3fU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1) {
                ++(vlSymsp->__Vcoverage[11560]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x1fU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1)))) {
                if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2)))) {
                    ++(vlSymsp->__Vcoverage[11367]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x1fU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1)))) {
                if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2) {
                    ++(vlSymsp->__Vcoverage[11366]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x1eU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1)))) {
                if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2)))) {
                    ++(vlSymsp->__Vcoverage[11361]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x1eU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1)))) {
                if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2) {
                    ++(vlSymsp->__Vcoverage[11360]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x1dU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1)))) {
                if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2)))) {
                    ++(vlSymsp->__Vcoverage[11355]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x1dU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1)))) {
                if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2) {
                    ++(vlSymsp->__Vcoverage[11354]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x1cU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1)))) {
                if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2)))) {
                    ++(vlSymsp->__Vcoverage[11349]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x1bU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1)))) {
                if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2) {
                    ++(vlSymsp->__Vcoverage[11342]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x1aU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1)))) {
                if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2) {
                    ++(vlSymsp->__Vcoverage[11336]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x19U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1)))) {
                if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2)))) {
                    ++(vlSymsp->__Vcoverage[11331]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x18U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1)))) {
                if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2) {
                    ++(vlSymsp->__Vcoverage[11324]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x17U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1)))) {
                if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2) {
                    ++(vlSymsp->__Vcoverage[11318]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x16U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1)))) {
                if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2)))) {
                    ++(vlSymsp->__Vcoverage[11313]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x15U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1)))) {
                if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2)))) {
                    ++(vlSymsp->__Vcoverage[11307]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x15U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1)))) {
                if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2) {
                    ++(vlSymsp->__Vcoverage[11306]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x14U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1)))) {
                if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2)))) {
                    ++(vlSymsp->__Vcoverage[11301]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x14U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1)))) {
                if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2) {
                    ++(vlSymsp->__Vcoverage[11300]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x13U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1)))) {
                if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2)))) {
                    ++(vlSymsp->__Vcoverage[11295]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x12U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1)))) {
                if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2)))) {
                    ++(vlSymsp->__Vcoverage[11289]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x12U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1)))) {
                if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2) {
                    ++(vlSymsp->__Vcoverage[11288]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x11U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1)))) {
                if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2)))) {
                    ++(vlSymsp->__Vcoverage[11283]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x10U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1)))) {
                if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2) {
                    ++(vlSymsp->__Vcoverage[11276]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0xfU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1)))) {
                if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2)))) {
                    ++(vlSymsp->__Vcoverage[11271]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0xeU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1)))) {
                if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2)))) {
                    ++(vlSymsp->__Vcoverage[11265]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0xcU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1)))) {
                if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2)))) {
                    ++(vlSymsp->__Vcoverage[11253]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0xbU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1)))) {
                if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2)))) {
                    ++(vlSymsp->__Vcoverage[11247]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0xbU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1)))) {
                if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2) {
                    ++(vlSymsp->__Vcoverage[11246]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0xaU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1)))) {
                if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2)))) {
                    ++(vlSymsp->__Vcoverage[11241]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x3cU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1)))) {
                if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2) {
                    ++(vlSymsp->__Vcoverage[11540]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x19U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1)))) {
                if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2) {
                    ++(vlSymsp->__Vcoverage[11330]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x3aU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1)))) {
                if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2) {
                    ++(vlSymsp->__Vcoverage[11528]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x18U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1)))) {
                if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2)))) {
                    ++(vlSymsp->__Vcoverage[11325]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x27U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1)))) {
                if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2)))) {
                    ++(vlSymsp->__Vcoverage[11415]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x27U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1)))) {
                if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2) {
                    ++(vlSymsp->__Vcoverage[11414]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((7U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1)))) {
                if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2)))) {
                    ++(vlSymsp->__Vcoverage[11223]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x17U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1)))) {
                if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2)))) {
                    ++(vlSymsp->__Vcoverage[11319]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x26U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1)))) {
                if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2)))) {
                    ++(vlSymsp->__Vcoverage[11409]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((6U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1)))) {
                if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2) {
                    ++(vlSymsp->__Vcoverage[11216]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x25U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1)))) {
                if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2) {
                    ++(vlSymsp->__Vcoverage[11402]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((5U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1)))) {
                if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2)))) {
                    ++(vlSymsp->__Vcoverage[11211]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x37U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1)))) {
                if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2) {
                    ++(vlSymsp->__Vcoverage[11510]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x36U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1)))) {
                if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2)))) {
                    ++(vlSymsp->__Vcoverage[11505]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x23U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1)))) {
                if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2)))) {
                    ++(vlSymsp->__Vcoverage[11391]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x35U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1)))) {
                if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2)))) {
                    ++(vlSymsp->__Vcoverage[11499]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x22U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1)))) {
                if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2)))) {
                    ++(vlSymsp->__Vcoverage[11385]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x34U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1)))) {
                if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2)))) {
                    ++(vlSymsp->__Vcoverage[11493]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x34U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1)))) {
                if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2) {
                    ++(vlSymsp->__Vcoverage[11492]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x21U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1)))) {
                if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2) {
                    ++(vlSymsp->__Vcoverage[11378]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1)))) {
                if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2)))) {
                    ++(vlSymsp->__Vcoverage[11187]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x33U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1)))) {
                if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2)))) {
                    ++(vlSymsp->__Vcoverage[11487]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((9U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1)))) {
                if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2) {
                    ++(vlSymsp->__Vcoverage[11234]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x2cU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1)))) {
                if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2)))) {
                    ++(vlSymsp->__Vcoverage[11445]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x29U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1)))) {
                if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2) {
                    ++(vlSymsp->__Vcoverage[11426]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((9U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1)))) {
                if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2)))) {
                    ++(vlSymsp->__Vcoverage[11235]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0xeU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1)))) {
                if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2) {
                    ++(vlSymsp->__Vcoverage[11264]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x2fU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1)))) {
                if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2)))) {
                    ++(vlSymsp->__Vcoverage[11463]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x24U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1)))) {
                if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2)))) {
                    ++(vlSymsp->__Vcoverage[11397]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x2fU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1)))) {
                if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2) {
                    ++(vlSymsp->__Vcoverage[11462]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x20U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1)))) {
                if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2)))) {
                    ++(vlSymsp->__Vcoverage[11373]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0xdU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1)))) {
                if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2)))) {
                    ++(vlSymsp->__Vcoverage[11259]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0xdU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1)))) {
                if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2) {
                    ++(vlSymsp->__Vcoverage[11258]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x10U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1)))) {
                if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2)))) {
                    ++(vlSymsp->__Vcoverage[11277]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x33U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1)))) {
                if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2) {
                    ++(vlSymsp->__Vcoverage[11486]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x36U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1)))) {
                if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2) {
                    ++(vlSymsp->__Vcoverage[11504]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x3dU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1)))) {
                if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2) {
                    ++(vlSymsp->__Vcoverage[11546]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x13U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1)))) {
                if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2) {
                    ++(vlSymsp->__Vcoverage[11294]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0xfU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1)))) {
                if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2) {
                    ++(vlSymsp->__Vcoverage[11270]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x29U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1)))) {
                if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2)))) {
                    ++(vlSymsp->__Vcoverage[11427]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x1aU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1)))) {
                if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2)))) {
                    ++(vlSymsp->__Vcoverage[11337]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x16U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1)))) {
                if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2) {
                    ++(vlSymsp->__Vcoverage[11312]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x38U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1)))) {
                if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2)))) {
                    ++(vlSymsp->__Vcoverage[11517]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0xcU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1)))) {
                if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2) {
                    ++(vlSymsp->__Vcoverage[11252]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x25U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1)))) {
                if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2)))) {
                    ++(vlSymsp->__Vcoverage[11403]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x30U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1)))) {
                if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2) {
                    ++(vlSymsp->__Vcoverage[11468]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x3fU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1)))) {
                if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2)))) {
                    ++(vlSymsp->__Vcoverage[11559]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x30U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1)))) {
                if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2)))) {
                    ++(vlSymsp->__Vcoverage[11469]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x31U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1)))) {
                if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2)))) {
                    ++(vlSymsp->__Vcoverage[11475]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((7U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1)))) {
                if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2) {
                    ++(vlSymsp->__Vcoverage[11222]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x20U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1)))) {
                if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2) {
                    ++(vlSymsp->__Vcoverage[11372]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1)))) {
                if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2)))) {
                    ++(vlSymsp->__Vcoverage[11181]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x11U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1)))) {
                if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2) {
                    ++(vlSymsp->__Vcoverage[11282]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x1bU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1)))) {
                if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2)))) {
                    ++(vlSymsp->__Vcoverage[11343]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x3dU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1)))) {
                if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2)))) {
                    ++(vlSymsp->__Vcoverage[11547]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x1cU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1)))) {
                if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2) {
                    ++(vlSymsp->__Vcoverage[11348]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x3eU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1)))) {
                if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2)))) {
                    ++(vlSymsp->__Vcoverage[11553]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x3fU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1)))) {
                if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2) {
                    ++(vlSymsp->__Vcoverage[11558]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1)))) {
                if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2) {
                    ++(vlSymsp->__Vcoverage[11180]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1)))) {
                if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2) {
                    ++(vlSymsp->__Vcoverage[11186]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x21U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1)))) {
                if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2)))) {
                    ++(vlSymsp->__Vcoverage[11379]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((2U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1)))) {
                if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2) {
                    ++(vlSymsp->__Vcoverage[11192]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x22U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1)))) {
                if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2) {
                    ++(vlSymsp->__Vcoverage[11384]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((2U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1)))) {
                if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2)))) {
                    ++(vlSymsp->__Vcoverage[11193]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((3U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1)))) {
                if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2) {
                    ++(vlSymsp->__Vcoverage[11198]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x23U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1)))) {
                if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2) {
                    ++(vlSymsp->__Vcoverage[11390]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((3U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1)))) {
                if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2)))) {
                    ++(vlSymsp->__Vcoverage[11199]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((4U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1)))) {
                if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2) {
                    ++(vlSymsp->__Vcoverage[11204]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x24U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1)))) {
                if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2) {
                    ++(vlSymsp->__Vcoverage[11396]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((4U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1)))) {
                if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2)))) {
                    ++(vlSymsp->__Vcoverage[11205]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((5U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1)))) {
                if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2) {
                    ++(vlSymsp->__Vcoverage[11210]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x26U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1)))) {
                if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2) {
                    ++(vlSymsp->__Vcoverage[11408]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((6U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1)))) {
                if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2)))) {
                    ++(vlSymsp->__Vcoverage[11217]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((8U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1)))) {
                if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2) {
                    ++(vlSymsp->__Vcoverage[11228]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x28U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1)))) {
                if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2) {
                    ++(vlSymsp->__Vcoverage[11420]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((8U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1)))) {
                if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2)))) {
                    ++(vlSymsp->__Vcoverage[11229]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x28U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1)))) {
                if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2)))) {
                    ++(vlSymsp->__Vcoverage[11421]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0xaU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1)))) {
                if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2) {
                    ++(vlSymsp->__Vcoverage[11240]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x2aU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1)))) {
                if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2) {
                    ++(vlSymsp->__Vcoverage[11432]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x2aU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1)))) {
                if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2)))) {
                    ++(vlSymsp->__Vcoverage[11433]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x2bU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1)))) {
                if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2) {
                    ++(vlSymsp->__Vcoverage[11438]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x2bU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1)))) {
                if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2)))) {
                    ++(vlSymsp->__Vcoverage[11439]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x2cU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1)))) {
                if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2) {
                    ++(vlSymsp->__Vcoverage[11444]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x2dU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1)))) {
                if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2) {
                    ++(vlSymsp->__Vcoverage[11450]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x2dU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1)))) {
                if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2)))) {
                    ++(vlSymsp->__Vcoverage[11451]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x2eU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1)))) {
                if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2) {
                    ++(vlSymsp->__Vcoverage[11456]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x2eU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1)))) {
                if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2)))) {
                    ++(vlSymsp->__Vcoverage[11457]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x31U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1)))) {
                if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2) {
                    ++(vlSymsp->__Vcoverage[11474]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x32U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1)))) {
                if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2) {
                    ++(vlSymsp->__Vcoverage[11480]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x32U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1)))) {
                if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2)))) {
                    ++(vlSymsp->__Vcoverage[11481]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x35U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1)))) {
                if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2) {
                    ++(vlSymsp->__Vcoverage[11498]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x37U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1)))) {
                if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2)))) {
                    ++(vlSymsp->__Vcoverage[11511]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x38U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1)))) {
                if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2) {
                    ++(vlSymsp->__Vcoverage[11516]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x39U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1)))) {
                if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2) {
                    ++(vlSymsp->__Vcoverage[11522]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x39U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1)))) {
                if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2)))) {
                    ++(vlSymsp->__Vcoverage[11523]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x3aU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1)))) {
                if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2)))) {
                    ++(vlSymsp->__Vcoverage[11529]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x3bU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1)))) {
                if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2) {
                    ++(vlSymsp->__Vcoverage[11534]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x3bU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1)))) {
                if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2)))) {
                    ++(vlSymsp->__Vcoverage[11535]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x3cU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1)))) {
                if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2)))) {
                    ++(vlSymsp->__Vcoverage[11541]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((0x3eU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1)))) {
                if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2) {
                    ++(vlSymsp->__Vcoverage[11552]);
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
                                          : ((~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_in_flush)) 
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
        ++(vlSymsp->__Vcoverage[2428]);
        vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_r_bits_rdata 
            = ((0xfffffffffffffffeULL & vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_r_bits_rdata) 
               | (IData)((IData)((1U & (IData)(vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata)))));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata 
                        >> 1U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_r_bits_rdata 
                                           >> 1U))))) {
        ++(vlSymsp->__Vcoverage[2429]);
        vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_r_bits_rdata 
            = ((0xfffffffffffffffdULL & vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_r_bits_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata 
                                                 >> 1U))))) 
                  << 1U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata 
                        >> 2U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_r_bits_rdata 
                                           >> 2U))))) {
        ++(vlSymsp->__Vcoverage[2430]);
        vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_r_bits_rdata 
            = ((0xfffffffffffffffbULL & vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_r_bits_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata 
                                                 >> 2U))))) 
                  << 2U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata 
                        >> 3U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_r_bits_rdata 
                                           >> 3U))))) {
        ++(vlSymsp->__Vcoverage[2431]);
        vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_r_bits_rdata 
            = ((0xfffffffffffffff7ULL & vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_r_bits_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata 
                                                 >> 3U))))) 
                  << 3U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata 
                        >> 4U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_r_bits_rdata 
                                           >> 4U))))) {
        ++(vlSymsp->__Vcoverage[2432]);
        vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_r_bits_rdata 
            = ((0xffffffffffffffefULL & vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_r_bits_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata 
                                                 >> 4U))))) 
                  << 4U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata 
                        >> 5U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_r_bits_rdata 
                                           >> 5U))))) {
        ++(vlSymsp->__Vcoverage[2433]);
        vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_r_bits_rdata 
            = ((0xffffffffffffffdfULL & vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_r_bits_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata 
                                                 >> 5U))))) 
                  << 5U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata 
                        >> 6U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_r_bits_rdata 
                                           >> 6U))))) {
        ++(vlSymsp->__Vcoverage[2434]);
        vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_r_bits_rdata 
            = ((0xffffffffffffffbfULL & vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_r_bits_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata 
                                                 >> 6U))))) 
                  << 6U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata 
                        >> 7U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_r_bits_rdata 
                                           >> 7U))))) {
        ++(vlSymsp->__Vcoverage[2435]);
        vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_r_bits_rdata 
            = ((0xffffffffffffff7fULL & vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_r_bits_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata 
                                                 >> 7U))))) 
                  << 7U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata 
                        >> 8U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_r_bits_rdata 
                                           >> 8U))))) {
        ++(vlSymsp->__Vcoverage[2436]);
        vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_r_bits_rdata 
            = ((0xfffffffffffffeffULL & vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_r_bits_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata 
                                                 >> 8U))))) 
                  << 8U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata 
                        >> 9U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_r_bits_rdata 
                                           >> 9U))))) {
        ++(vlSymsp->__Vcoverage[2437]);
        vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_r_bits_rdata 
            = ((0xfffffffffffffdffULL & vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_r_bits_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata 
                                                 >> 9U))))) 
                  << 9U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata 
                        >> 0xaU)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_r_bits_rdata 
                                             >> 0xaU))))) {
        ++(vlSymsp->__Vcoverage[2438]);
        vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_r_bits_rdata 
            = ((0xfffffffffffffbffULL & vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_r_bits_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata 
                                                 >> 0xaU))))) 
                  << 0xaU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata 
                        >> 0xbU)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_r_bits_rdata 
                                             >> 0xbU))))) {
        ++(vlSymsp->__Vcoverage[2439]);
        vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_r_bits_rdata 
            = ((0xfffffffffffff7ffULL & vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_r_bits_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata 
                                                 >> 0xbU))))) 
                  << 0xbU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata 
                        >> 0xcU)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_r_bits_rdata 
                                             >> 0xcU))))) {
        ++(vlSymsp->__Vcoverage[2440]);
        vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_r_bits_rdata 
            = ((0xffffffffffffefffULL & vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_r_bits_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata 
                                                 >> 0xcU))))) 
                  << 0xcU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata 
                        >> 0xdU)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_r_bits_rdata 
                                             >> 0xdU))))) {
        ++(vlSymsp->__Vcoverage[2441]);
        vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_r_bits_rdata 
            = ((0xffffffffffffdfffULL & vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_r_bits_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata 
                                                 >> 0xdU))))) 
                  << 0xdU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata 
                        >> 0xeU)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_r_bits_rdata 
                                             >> 0xeU))))) {
        ++(vlSymsp->__Vcoverage[2442]);
        vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_r_bits_rdata 
            = ((0xffffffffffffbfffULL & vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_r_bits_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata 
                                                 >> 0xeU))))) 
                  << 0xeU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata 
                        >> 0xfU)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_r_bits_rdata 
                                             >> 0xfU))))) {
        ++(vlSymsp->__Vcoverage[2443]);
        vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_r_bits_rdata 
            = ((0xffffffffffff7fffULL & vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_r_bits_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata 
                                                 >> 0xfU))))) 
                  << 0xfU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata 
                        >> 0x10U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_r_bits_rdata 
                                              >> 0x10U))))) {
        ++(vlSymsp->__Vcoverage[2444]);
        vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_r_bits_rdata 
            = ((0xfffffffffffeffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_r_bits_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata 
                                                 >> 0x10U))))) 
                  << 0x10U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata 
                        >> 0x11U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_r_bits_rdata 
                                              >> 0x11U))))) {
        ++(vlSymsp->__Vcoverage[2445]);
        vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_r_bits_rdata 
            = ((0xfffffffffffdffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_r_bits_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata 
                                                 >> 0x11U))))) 
                  << 0x11U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata 
                        >> 0x12U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_r_bits_rdata 
                                              >> 0x12U))))) {
        ++(vlSymsp->__Vcoverage[2446]);
        vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_r_bits_rdata 
            = ((0xfffffffffffbffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_r_bits_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata 
                                                 >> 0x12U))))) 
                  << 0x12U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata 
                        >> 0x13U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_r_bits_rdata 
                                              >> 0x13U))))) {
        ++(vlSymsp->__Vcoverage[2447]);
        vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_r_bits_rdata 
            = ((0xfffffffffff7ffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_r_bits_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata 
                                                 >> 0x13U))))) 
                  << 0x13U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata 
                        >> 0x14U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_r_bits_rdata 
                                              >> 0x14U))))) {
        ++(vlSymsp->__Vcoverage[2448]);
        vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_r_bits_rdata 
            = ((0xffffffffffefffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_r_bits_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata 
                                                 >> 0x14U))))) 
                  << 0x14U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata 
                        >> 0x15U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_r_bits_rdata 
                                              >> 0x15U))))) {
        ++(vlSymsp->__Vcoverage[2449]);
        vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_r_bits_rdata 
            = ((0xffffffffffdfffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_r_bits_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata 
                                                 >> 0x15U))))) 
                  << 0x15U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata 
                        >> 0x16U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_r_bits_rdata 
                                              >> 0x16U))))) {
        ++(vlSymsp->__Vcoverage[2450]);
        vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_r_bits_rdata 
            = ((0xffffffffffbfffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_r_bits_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata 
                                                 >> 0x16U))))) 
                  << 0x16U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata 
                        >> 0x17U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_r_bits_rdata 
                                              >> 0x17U))))) {
        ++(vlSymsp->__Vcoverage[2451]);
        vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_r_bits_rdata 
            = ((0xffffffffff7fffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_r_bits_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata 
                                                 >> 0x17U))))) 
                  << 0x17U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata 
                        >> 0x18U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_r_bits_rdata 
                                              >> 0x18U))))) {
        ++(vlSymsp->__Vcoverage[2452]);
        vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_r_bits_rdata 
            = ((0xfffffffffeffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_r_bits_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata 
                                                 >> 0x18U))))) 
                  << 0x18U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata 
                        >> 0x19U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_r_bits_rdata 
                                              >> 0x19U))))) {
        ++(vlSymsp->__Vcoverage[2453]);
        vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_r_bits_rdata 
            = ((0xfffffffffdffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_r_bits_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata 
                                                 >> 0x19U))))) 
                  << 0x19U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata 
                        >> 0x1aU)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_r_bits_rdata 
                                              >> 0x1aU))))) {
        ++(vlSymsp->__Vcoverage[2454]);
        vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_r_bits_rdata 
            = ((0xfffffffffbffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_r_bits_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata 
                                                 >> 0x1aU))))) 
                  << 0x1aU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata 
                        >> 0x1bU)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_r_bits_rdata 
                                              >> 0x1bU))))) {
        ++(vlSymsp->__Vcoverage[2455]);
        vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_r_bits_rdata 
            = ((0xfffffffff7ffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_r_bits_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata 
                                                 >> 0x1bU))))) 
                  << 0x1bU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata 
                        >> 0x1cU)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_r_bits_rdata 
                                              >> 0x1cU))))) {
        ++(vlSymsp->__Vcoverage[2456]);
        vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_r_bits_rdata 
            = ((0xffffffffefffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_r_bits_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata 
                                                 >> 0x1cU))))) 
                  << 0x1cU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata 
                        >> 0x1dU)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_r_bits_rdata 
                                              >> 0x1dU))))) {
        ++(vlSymsp->__Vcoverage[2457]);
        vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_r_bits_rdata 
            = ((0xffffffffdfffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_r_bits_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata 
                                                 >> 0x1dU))))) 
                  << 0x1dU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata 
                        >> 0x1eU)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_r_bits_rdata 
                                              >> 0x1eU))))) {
        ++(vlSymsp->__Vcoverage[2458]);
        vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_r_bits_rdata 
            = ((0xffffffffbfffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_r_bits_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata 
                                                 >> 0x1eU))))) 
                  << 0x1eU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata 
                        >> 0x1fU)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_r_bits_rdata 
                                              >> 0x1fU))))) {
        ++(vlSymsp->__Vcoverage[2459]);
        vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_r_bits_rdata 
            = ((0xffffffff7fffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_r_bits_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata 
                                                 >> 0x1fU))))) 
                  << 0x1fU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata 
                        >> 0x20U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_r_bits_rdata 
                                              >> 0x20U))))) {
        ++(vlSymsp->__Vcoverage[2460]);
        vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_r_bits_rdata 
            = ((0xfffffffeffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_r_bits_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata 
                                                 >> 0x20U))))) 
                  << 0x20U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata 
                        >> 0x21U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_r_bits_rdata 
                                              >> 0x21U))))) {
        ++(vlSymsp->__Vcoverage[2461]);
        vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_r_bits_rdata 
            = ((0xfffffffdffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_r_bits_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata 
                                                 >> 0x21U))))) 
                  << 0x21U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata 
                        >> 0x22U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_r_bits_rdata 
                                              >> 0x22U))))) {
        ++(vlSymsp->__Vcoverage[2462]);
        vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_r_bits_rdata 
            = ((0xfffffffbffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_r_bits_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata 
                                                 >> 0x22U))))) 
                  << 0x22U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata 
                        >> 0x23U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_r_bits_rdata 
                                              >> 0x23U))))) {
        ++(vlSymsp->__Vcoverage[2463]);
        vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_r_bits_rdata 
            = ((0xfffffff7ffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_r_bits_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata 
                                                 >> 0x23U))))) 
                  << 0x23U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata 
                        >> 0x24U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_r_bits_rdata 
                                              >> 0x24U))))) {
        ++(vlSymsp->__Vcoverage[2464]);
        vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_r_bits_rdata 
            = ((0xffffffefffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_r_bits_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata 
                                                 >> 0x24U))))) 
                  << 0x24U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata 
                        >> 0x25U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_r_bits_rdata 
                                              >> 0x25U))))) {
        ++(vlSymsp->__Vcoverage[2465]);
        vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_r_bits_rdata 
            = ((0xffffffdfffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_r_bits_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata 
                                                 >> 0x25U))))) 
                  << 0x25U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata 
                        >> 0x26U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_r_bits_rdata 
                                              >> 0x26U))))) {
        ++(vlSymsp->__Vcoverage[2466]);
        vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_r_bits_rdata 
            = ((0xffffffbfffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_r_bits_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata 
                                                 >> 0x26U))))) 
                  << 0x26U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata 
                        >> 0x27U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_r_bits_rdata 
                                              >> 0x27U))))) {
        ++(vlSymsp->__Vcoverage[2467]);
        vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_r_bits_rdata 
            = ((0xffffff7fffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_r_bits_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata 
                                                 >> 0x27U))))) 
                  << 0x27U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata 
                        >> 0x28U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_r_bits_rdata 
                                              >> 0x28U))))) {
        ++(vlSymsp->__Vcoverage[2468]);
        vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_r_bits_rdata 
            = ((0xfffffeffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_r_bits_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata 
                                                 >> 0x28U))))) 
                  << 0x28U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata 
                        >> 0x29U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_r_bits_rdata 
                                              >> 0x29U))))) {
        ++(vlSymsp->__Vcoverage[2469]);
        vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_r_bits_rdata 
            = ((0xfffffdffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_r_bits_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata 
                                                 >> 0x29U))))) 
                  << 0x29U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata 
                        >> 0x2aU)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_r_bits_rdata 
                                              >> 0x2aU))))) {
        ++(vlSymsp->__Vcoverage[2470]);
        vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_r_bits_rdata 
            = ((0xfffffbffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_r_bits_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata 
                                                 >> 0x2aU))))) 
                  << 0x2aU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata 
                        >> 0x2bU)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_r_bits_rdata 
                                              >> 0x2bU))))) {
        ++(vlSymsp->__Vcoverage[2471]);
        vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_r_bits_rdata 
            = ((0xfffff7ffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_r_bits_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata 
                                                 >> 0x2bU))))) 
                  << 0x2bU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata 
                        >> 0x2cU)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_r_bits_rdata 
                                              >> 0x2cU))))) {
        ++(vlSymsp->__Vcoverage[2472]);
        vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_r_bits_rdata 
            = ((0xffffefffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_r_bits_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata 
                                                 >> 0x2cU))))) 
                  << 0x2cU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata 
                        >> 0x2dU)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_r_bits_rdata 
                                              >> 0x2dU))))) {
        ++(vlSymsp->__Vcoverage[2473]);
        vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_r_bits_rdata 
            = ((0xffffdfffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_r_bits_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata 
                                                 >> 0x2dU))))) 
                  << 0x2dU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata 
                        >> 0x2eU)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_r_bits_rdata 
                                              >> 0x2eU))))) {
        ++(vlSymsp->__Vcoverage[2474]);
        vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_r_bits_rdata 
            = ((0xffffbfffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_r_bits_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata 
                                                 >> 0x2eU))))) 
                  << 0x2eU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata 
                        >> 0x2fU)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_r_bits_rdata 
                                              >> 0x2fU))))) {
        ++(vlSymsp->__Vcoverage[2475]);
        vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_r_bits_rdata 
            = ((0xffff7fffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_r_bits_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata 
                                                 >> 0x2fU))))) 
                  << 0x2fU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata 
                        >> 0x30U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_r_bits_rdata 
                                              >> 0x30U))))) {
        ++(vlSymsp->__Vcoverage[2476]);
        vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_r_bits_rdata 
            = ((0xfffeffffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_r_bits_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata 
                                                 >> 0x30U))))) 
                  << 0x30U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata 
                        >> 0x31U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_r_bits_rdata 
                                              >> 0x31U))))) {
        ++(vlSymsp->__Vcoverage[2477]);
        vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_r_bits_rdata 
            = ((0xfffdffffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_r_bits_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata 
                                                 >> 0x31U))))) 
                  << 0x31U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata 
                        >> 0x32U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_r_bits_rdata 
                                              >> 0x32U))))) {
        ++(vlSymsp->__Vcoverage[2478]);
        vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_r_bits_rdata 
            = ((0xfffbffffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_r_bits_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata 
                                                 >> 0x32U))))) 
                  << 0x32U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata 
                        >> 0x33U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_r_bits_rdata 
                                              >> 0x33U))))) {
        ++(vlSymsp->__Vcoverage[2479]);
        vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_r_bits_rdata 
            = ((0xfff7ffffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_r_bits_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata 
                                                 >> 0x33U))))) 
                  << 0x33U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata 
                        >> 0x34U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_r_bits_rdata 
                                              >> 0x34U))))) {
        ++(vlSymsp->__Vcoverage[2480]);
        vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_r_bits_rdata 
            = ((0xffefffffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_r_bits_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata 
                                                 >> 0x34U))))) 
                  << 0x34U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata 
                        >> 0x35U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_r_bits_rdata 
                                              >> 0x35U))))) {
        ++(vlSymsp->__Vcoverage[2481]);
        vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_r_bits_rdata 
            = ((0xffdfffffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_r_bits_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata 
                                                 >> 0x35U))))) 
                  << 0x35U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata 
                        >> 0x36U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_r_bits_rdata 
                                              >> 0x36U))))) {
        ++(vlSymsp->__Vcoverage[2482]);
        vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_r_bits_rdata 
            = ((0xffbfffffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_r_bits_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata 
                                                 >> 0x36U))))) 
                  << 0x36U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata 
                        >> 0x37U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_r_bits_rdata 
                                              >> 0x37U))))) {
        ++(vlSymsp->__Vcoverage[2483]);
        vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_r_bits_rdata 
            = ((0xff7fffffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_r_bits_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata 
                                                 >> 0x37U))))) 
                  << 0x37U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata 
                        >> 0x38U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_r_bits_rdata 
                                              >> 0x38U))))) {
        ++(vlSymsp->__Vcoverage[2484]);
        vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_r_bits_rdata 
            = ((0xfeffffffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_r_bits_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata 
                                                 >> 0x38U))))) 
                  << 0x38U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata 
                        >> 0x39U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_r_bits_rdata 
                                              >> 0x39U))))) {
        ++(vlSymsp->__Vcoverage[2485]);
        vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_r_bits_rdata 
            = ((0xfdffffffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_r_bits_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata 
                                                 >> 0x39U))))) 
                  << 0x39U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata 
                        >> 0x3aU)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_r_bits_rdata 
                                              >> 0x3aU))))) {
        ++(vlSymsp->__Vcoverage[2486]);
        vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_r_bits_rdata 
            = ((0xfbffffffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_r_bits_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata 
                                                 >> 0x3aU))))) 
                  << 0x3aU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata 
                        >> 0x3bU)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_r_bits_rdata 
                                              >> 0x3bU))))) {
        ++(vlSymsp->__Vcoverage[2487]);
        vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_r_bits_rdata 
            = ((0xf7ffffffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_r_bits_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata 
                                                 >> 0x3bU))))) 
                  << 0x3bU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata 
                        >> 0x3cU)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_r_bits_rdata 
                                              >> 0x3cU))))) {
        ++(vlSymsp->__Vcoverage[2488]);
        vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_r_bits_rdata 
            = ((0xefffffffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_r_bits_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata 
                                                 >> 0x3cU))))) 
                  << 0x3cU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata 
                        >> 0x3dU)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_r_bits_rdata 
                                              >> 0x3dU))))) {
        ++(vlSymsp->__Vcoverage[2489]);
        vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_r_bits_rdata 
            = ((0xdfffffffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_r_bits_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata 
                                                 >> 0x3dU))))) 
                  << 0x3dU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata 
                        >> 0x3eU)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_r_bits_rdata 
                                              >> 0x3eU))))) {
        ++(vlSymsp->__Vcoverage[2490]);
        vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_r_bits_rdata 
            = ((0xbfffffffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_r_bits_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata 
                                                 >> 0x3eU))))) 
                  << 0x3eU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata 
                        >> 0x3fU)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core_io_axi_bus_r_bits_rdata 
                                              >> 0x3fU))))) {
        ++(vlSymsp->__Vcoverage[2491]);
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
    } else if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_in_flush)))) {
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
    } else if (vlSelf->riscv_soc__DOT__core__DOT__decode_io_in_flush) {
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
    } else if (vlSelf->riscv_soc__DOT__core__DOT__decode_io_in_flush) {
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_inst = 0U;
    } else if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__stall)))) {
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_inst 
            = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_inst;
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_pc = 0ULL;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__decode_io_in_flush) {
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
    } else if (vlSelf->riscv_soc__DOT__core__DOT__decode_io_in_flush) {
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
    } else if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_in_flush)))) {
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
    } else if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__stall)))) {
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
}
