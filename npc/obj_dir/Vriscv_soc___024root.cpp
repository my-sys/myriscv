// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vriscv_soc.h for the primary calling header

#include "Vriscv_soc___024root.h"
#include "Vriscv_soc__Syms.h"

#include "verilated_dpi.h"

//==========

VL_INLINE_OPT void Vriscv_soc___024root___combo__TOP__5(Vriscv_soc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vriscv_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv_soc___024root___combo__TOP__5\n"); );
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

void Vriscv_soc___024unit____Vdpiimwrap_ramCtrl_TOP____024unit(QData/*63:0*/ raddr, QData/*63:0*/ &rdata, QData/*63:0*/ waddr, QData/*63:0*/ wdata, CData/*7:0*/ wstrb, CData/*0:0*/ wen);

VL_INLINE_OPT void Vriscv_soc___024root___sequent__TOP__6(Vriscv_soc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vriscv_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv_soc___024root___sequent__TOP__6\n"); );
    // Variables
    CData/*4:0*/ __Vdlyvdim0__riscv_soc__DOT__core__DOT__decode__DOT__regfile__v0;
    CData/*0:0*/ __Vdlyvset__riscv_soc__DOT__core__DOT__decode__DOT__regfile__v0;
    QData/*63:0*/ __Vtask_ramCtrl__0__rdata;
    QData/*63:0*/ __Vdlyvval__riscv_soc__DOT__core__DOT__decode__DOT__regfile__v0;
    // Body
    ++(vlSymsp->__Vcoverage[5553]);
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[5549]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[5547]);
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        ++(vlSymsp->__Vcoverage[5548]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[5551]);
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        ++(vlSymsp->__Vcoverage[5550]);
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        ++(vlSymsp->__Vcoverage[5552]);
    }
    vlSelf->__Vdly__riscv_soc__DOT__core__DOT__fetch__DOT__regPC 
        = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__regPC;
    ++(vlSymsp->__Vcoverage[5751]);
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[5733]);
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        ++(vlSymsp->__Vcoverage[5735]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[5750]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[5734]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[5730]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[5722]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[5742]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[5746]);
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__stall)))) {
            ++(vlSymsp->__Vcoverage[5731]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__stall) {
            ++(vlSymsp->__Vcoverage[5729]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__stall) {
            ++(vlSymsp->__Vcoverage[5745]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__stall)))) {
            ++(vlSymsp->__Vcoverage[5720]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__stall) {
            ++(vlSymsp->__Vcoverage[5740]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__stall) {
            ++(vlSymsp->__Vcoverage[5721]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__stall) {
            ++(vlSymsp->__Vcoverage[5749]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__stall)))) {
            ++(vlSymsp->__Vcoverage[5728]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__stall) {
            ++(vlSymsp->__Vcoverage[5732]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__stall)))) {
            ++(vlSymsp->__Vcoverage[5741]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__stall)))) {
            if (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_valid) {
                ++(vlSymsp->__Vcoverage[5727]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__stall)))) {
            if (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_valid) {
                ++(vlSymsp->__Vcoverage[5719]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__stall) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__tem_reg_is_read_inst)))) {
                ++(vlSymsp->__Vcoverage[5739]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__stall) {
            if (vlSelf->riscv_soc__DOT__core__DOT__tem_reg_is_read_inst) {
                ++(vlSymsp->__Vcoverage[5738]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__stall)))) {
            if (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_valid) {
                if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_next_pc_valid)))) {
                    ++(vlSymsp->__Vcoverage[5724]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__stall)))) {
            if (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_valid) {
                if (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_next_pc_valid) {
                    ++(vlSymsp->__Vcoverage[5723]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__stall)))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_valid)))) {
                if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__tem_reg_is_read_inst)))) {
                    ++(vlSymsp->__Vcoverage[5726]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__stall)))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_valid)))) {
                if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__tem_reg_is_read_inst)))) {
                    ++(vlSymsp->__Vcoverage[5718]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__stall)))) {
            if ((1U & (~ ((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_valid) 
                          | (IData)(vlSelf->riscv_soc__DOT__core__DOT__tem_reg_is_read_inst))))) {
                ++(vlSymsp->__Vcoverage[5744]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__stall)))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_valid)))) {
                if (vlSelf->riscv_soc__DOT__core__DOT__tem_reg_is_read_inst) {
                    ++(vlSymsp->__Vcoverage[5725]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__stall)))) {
            if (((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_valid) 
                 | (IData)(vlSelf->riscv_soc__DOT__core__DOT__tem_reg_is_read_inst))) {
                ++(vlSymsp->__Vcoverage[5747]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__stall)))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_valid)))) {
                if (vlSelf->riscv_soc__DOT__core__DOT__tem_reg_is_read_inst) {
                    ++(vlSymsp->__Vcoverage[5717]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__stall)))) {
            if (((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_valid) 
                 | (IData)(vlSelf->riscv_soc__DOT__core__DOT__tem_reg_is_read_inst))) {
                ++(vlSymsp->__Vcoverage[5743]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__stall)))) {
            if ((1U & (~ ((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_valid) 
                          | (IData)(vlSelf->riscv_soc__DOT__core__DOT__tem_reg_is_read_inst))))) {
                ++(vlSymsp->__Vcoverage[5748]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__stall) {
            if (vlSelf->riscv_soc__DOT__core__DOT__tem_reg_is_read_inst) {
                if ((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__regPC 
                                   >> 2U)))) {
                    ++(vlSymsp->__Vcoverage[5736]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__stall) {
            if (vlSelf->riscv_soc__DOT__core__DOT__tem_reg_is_read_inst) {
                if ((1U & (~ (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__regPC 
                                      >> 2U))))) {
                    ++(vlSymsp->__Vcoverage[5737]);
                }
            }
        }
    }
    __Vdlyvset__riscv_soc__DOT__core__DOT__decode__DOT__regfile__v0 = 0U;
    ++(vlSymsp->__Vcoverage[6926]);
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[6896]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[6889]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[6882]);
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        ++(vlSymsp->__Vcoverage[6925]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[6870]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[6918]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[6913]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[6877]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[6903]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[6908]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[6923]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[6924]);
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute_io_out_flush)))) {
            ++(vlSymsp->__Vcoverage[6880]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (vlSelf->riscv_soc__DOT__core__DOT__execute_io_out_flush) {
            ++(vlSymsp->__Vcoverage[6881]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute_io_out_flush)))) {
            ++(vlSymsp->__Vcoverage[6875]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (vlSelf->riscv_soc__DOT__core__DOT__execute_io_out_flush) {
            ++(vlSymsp->__Vcoverage[6869]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (vlSelf->riscv_soc__DOT__core__DOT__execute_io_out_flush) {
            ++(vlSymsp->__Vcoverage[6912]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (vlSelf->riscv_soc__DOT__core__DOT__execute_io_out_flush) {
            ++(vlSymsp->__Vcoverage[6888]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute_io_out_flush)))) {
            ++(vlSymsp->__Vcoverage[6887]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (vlSelf->riscv_soc__DOT__core__DOT__execute_io_out_flush) {
            ++(vlSymsp->__Vcoverage[6876]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute_io_out_flush)))) {
            ++(vlSymsp->__Vcoverage[6911]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute_io_out_flush)))) {
            ++(vlSymsp->__Vcoverage[6906]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute_io_out_flush)))) {
            ++(vlSymsp->__Vcoverage[6868]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute_io_out_flush)))) {
            ++(vlSymsp->__Vcoverage[6916]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (vlSelf->riscv_soc__DOT__core__DOT__execute_io_out_flush) {
            ++(vlSymsp->__Vcoverage[6895]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (vlSelf->riscv_soc__DOT__core__DOT__execute_io_out_flush) {
            ++(vlSymsp->__Vcoverage[6922]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute_io_out_flush)))) {
            ++(vlSymsp->__Vcoverage[6921]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute_io_out_flush)))) {
            ++(vlSymsp->__Vcoverage[6894]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (vlSelf->riscv_soc__DOT__core__DOT__execute_io_out_flush) {
            ++(vlSymsp->__Vcoverage[6902]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute_io_out_flush)))) {
            ++(vlSymsp->__Vcoverage[6901]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (vlSelf->riscv_soc__DOT__core__DOT__execute_io_out_flush) {
            ++(vlSymsp->__Vcoverage[6907]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (vlSelf->riscv_soc__DOT__core__DOT__execute_io_out_flush) {
            ++(vlSymsp->__Vcoverage[6917]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute_io_out_flush)))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__stall)))) {
                ++(vlSymsp->__Vcoverage[6885]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute_io_out_flush)))) {
            if (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__stall) {
                ++(vlSymsp->__Vcoverage[6886]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute_io_out_flush)))) {
            if (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__stall) {
                ++(vlSymsp->__Vcoverage[6879]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute_io_out_flush)))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__stall)))) {
                ++(vlSymsp->__Vcoverage[6873]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute_io_out_flush)))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__stall)))) {
                ++(vlSymsp->__Vcoverage[6909]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute_io_out_flush)))) {
            if (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__stall) {
                ++(vlSymsp->__Vcoverage[6915]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute_io_out_flush)))) {
            if (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__stall) {
                ++(vlSymsp->__Vcoverage[6910]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute_io_out_flush)))) {
            if (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__stall) {
                ++(vlSymsp->__Vcoverage[6874]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute_io_out_flush)))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__stall)))) {
                ++(vlSymsp->__Vcoverage[6919]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute_io_out_flush)))) {
            if (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__stall) {
                ++(vlSymsp->__Vcoverage[6867]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute_io_out_flush)))) {
            if (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__stall) {
                ++(vlSymsp->__Vcoverage[6920]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute_io_out_flush)))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__stall)))) {
                ++(vlSymsp->__Vcoverage[6878]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute_io_out_flush)))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__stall)))) {
                ++(vlSymsp->__Vcoverage[6866]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute_io_out_flush)))) {
            if (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__stall) {
                ++(vlSymsp->__Vcoverage[6893]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute_io_out_flush)))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__stall)))) {
                ++(vlSymsp->__Vcoverage[6892]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute_io_out_flush)))) {
            if (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__stall) {
                ++(vlSymsp->__Vcoverage[6900]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute_io_out_flush)))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__stall)))) {
                ++(vlSymsp->__Vcoverage[6899]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute_io_out_flush)))) {
            if (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__stall) {
                ++(vlSymsp->__Vcoverage[6905]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute_io_out_flush)))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__stall)))) {
                ++(vlSymsp->__Vcoverage[6904]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute_io_out_flush)))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__stall)))) {
                ++(vlSymsp->__Vcoverage[6914]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute_io_out_flush)))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__stall)))) {
                if ((4U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__instType))) {
                    ++(vlSymsp->__Vcoverage[6884]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute_io_out_flush)))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__stall)))) {
                if ((4U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__instType))) {
                    ++(vlSymsp->__Vcoverage[6883]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute_io_out_flush)))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__stall)))) {
                if ((0U == (0x1fU & (vlSelf->riscv_soc__DOT__core__DOT__fetch_io_out_inst 
                                     >> 0xfU)))) {
                    ++(vlSymsp->__Vcoverage[6864]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute_io_out_flush)))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__stall)))) {
                if ((0x33U != (0xfe00707fU & vlSelf->riscv_soc__DOT__core__DOT__fetch_io_out_inst))) {
                    ++(vlSymsp->__Vcoverage[6891]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute_io_out_flush)))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__stall)))) {
                if ((0U != (0x1fU & (vlSelf->riscv_soc__DOT__core__DOT__fetch_io_out_inst 
                                     >> 0xfU)))) {
                    ++(vlSymsp->__Vcoverage[6865]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute_io_out_flush)))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__stall)))) {
                if ((0x33U == (0xfe00707fU & vlSelf->riscv_soc__DOT__core__DOT__fetch_io_out_inst))) {
                    ++(vlSymsp->__Vcoverage[6890]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute_io_out_flush)))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__stall)))) {
                if ((0U == (0x1fU & (vlSelf->riscv_soc__DOT__core__DOT__fetch_io_out_inst 
                                     >> 0x14U)))) {
                    ++(vlSymsp->__Vcoverage[6871]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute_io_out_flush)))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__stall)))) {
                if ((0U != (0x1fU & (vlSelf->riscv_soc__DOT__core__DOT__fetch_io_out_inst 
                                     >> 0x14U)))) {
                    ++(vlSymsp->__Vcoverage[6872]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute_io_out_flush)))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__stall)))) {
                if ((0x33U == (0xfe00707fU & vlSelf->riscv_soc__DOT__core__DOT__fetch_io_out_inst))) {
                    ++(vlSymsp->__Vcoverage[6897]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute_io_out_flush)))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__stall)))) {
                if ((0x33U != (0xfe00707fU & vlSelf->riscv_soc__DOT__core__DOT__fetch_io_out_inst))) {
                    ++(vlSymsp->__Vcoverage[6898]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back_io_out_w_rs_en)))) {
        ++(vlSymsp->__Vcoverage[6863]);
    }
    if (vlSelf->riscv_soc__DOT__core__DOT__write_back_io_out_w_rs_en) {
        ++(vlSymsp->__Vcoverage[6862]);
    }
    vlSelf->__Vdly__riscv_soc__DOT__core__DOT__write_back__DOT__reg_ls_state 
        = vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_ls_state;
    vlSelf->__Vdly__riscv_soc__DOT__core__DOT__execute__DOT__reg_rs_data 
        = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_rs_data;
    vlSelf->__Vdly__riscv_soc__DOT__core__DOT__execute__DOT__reg_rs_addr 
        = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_rs_addr;
    vlSelf->__Vdly__riscv_soc__DOT__core__DOT__execute__DOT__reg_rs2_addr 
        = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_rs2_addr;
    vlSelf->__Vdly__riscv_soc__DOT__core__DOT__execute__DOT__reg_rs2_data 
        = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_rs2_data;
    ++(vlSymsp->__Vcoverage[7366]);
    Vriscv_soc___024unit____Vdpiimwrap_ramCtrl_TOP____024unit(vlSelf->riscv_soc__DOT__core_io_out_raddr, __Vtask_ramCtrl__0__rdata, vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_mem_addr, vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_mem_wdata, (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_mem_wstrb), vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_mem_wvalid);
    vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata 
        = __Vtask_ramCtrl__0__rdata;
    ++(vlSymsp->__Vcoverage[7365]);
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[7336]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[7328]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[7320]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[7317]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[7304]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[7354]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[7364]);
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        ++(vlSymsp->__Vcoverage[7355]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[7297]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[7312]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[7342]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[7348]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[7351]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[7352]);
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        ++(vlSymsp->__Vcoverage[7353]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[7358]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[7361]);
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_ls_state)))) {
            ++(vlSymsp->__Vcoverage[7327]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_ls_state)))) {
            ++(vlSymsp->__Vcoverage[7315]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_ls_state) {
            ++(vlSymsp->__Vcoverage[7316]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_ls_state) {
            ++(vlSymsp->__Vcoverage[7319]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_ls_state)))) {
            ++(vlSymsp->__Vcoverage[7296]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_ls_state) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_ls_state)))) {
                ++(vlSymsp->__Vcoverage[7295]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_ls_state)))) {
            ++(vlSymsp->__Vcoverage[7318]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_ls_state)))) {
            ++(vlSymsp->__Vcoverage[7341]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_ls_state)))) {
            ++(vlSymsp->__Vcoverage[7311]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_ls_state) {
            if (vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_ls_state) {
                ++(vlSymsp->__Vcoverage[7294]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_ls_state) {
            ++(vlSymsp->__Vcoverage[7303]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_ls_state) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_ls_state)))) {
                ++(vlSymsp->__Vcoverage[7346]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_ls_state) {
            if (vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_ls_state) {
                ++(vlSymsp->__Vcoverage[7333]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_ls_state) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_ls_state)))) {
                ++(vlSymsp->__Vcoverage[7310]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_ls_state) {
            if (vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_ls_state) {
                ++(vlSymsp->__Vcoverage[7325]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_ls_state) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_ls_state)))) {
                ++(vlSymsp->__Vcoverage[7326]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_ls_state)))) {
            ++(vlSymsp->__Vcoverage[7302]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_ls_state) {
            if (vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_ls_state) {
                ++(vlSymsp->__Vcoverage[7309]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_ls_state) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_ls_state)))) {
                ++(vlSymsp->__Vcoverage[7334]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_ls_state)))) {
            ++(vlSymsp->__Vcoverage[7335]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_ls_state) {
            if (vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_ls_state) {
                ++(vlSymsp->__Vcoverage[7339]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_ls_state) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_ls_state)))) {
                ++(vlSymsp->__Vcoverage[7340]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_ls_state) {
            if (vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_ls_state) {
                ++(vlSymsp->__Vcoverage[7345]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_ls_state)))) {
            ++(vlSymsp->__Vcoverage[7347]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_ls_state)))) {
            if (vlSelf->riscv_soc__DOT__core__DOT__execute_io_out_mem_avalid) {
                ++(vlSymsp->__Vcoverage[7321]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_ls_state)))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute_io_out_mem_avalid)))) {
                ++(vlSymsp->__Vcoverage[7314]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_ls_state)))) {
            if (vlSelf->riscv_soc__DOT__core__DOT__execute_io_out_mem_avalid) {
                ++(vlSymsp->__Vcoverage[7313]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_ls_state)))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute_io_out_mem_avalid)))) {
                ++(vlSymsp->__Vcoverage[7306]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_ls_state)))) {
            if (vlSelf->riscv_soc__DOT__core__DOT__execute_io_out_mem_avalid) {
                ++(vlSymsp->__Vcoverage[7300]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_ls_state)))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute_io_out_mem_avalid)))) {
                ++(vlSymsp->__Vcoverage[7301]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_ls_state)))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute_io_out_mem_avalid)))) {
                ++(vlSymsp->__Vcoverage[7322]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_ls_state)))) {
            if (vlSelf->riscv_soc__DOT__core__DOT__execute_io_out_mem_avalid) {
                ++(vlSymsp->__Vcoverage[7305]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_ls_state)))) {
            if (vlSelf->riscv_soc__DOT__core__DOT__execute_io_out_mem_avalid) {
                ++(vlSymsp->__Vcoverage[7329]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_ls_state)))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute_io_out_mem_avalid)))) {
                ++(vlSymsp->__Vcoverage[7330]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_ls_state) {
            if (vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_ls_state) {
                ++(vlSymsp->__Vcoverage[7323]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_ls_state) {
            if (vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_ls_state) {
                ++(vlSymsp->__Vcoverage[7331]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_ls_state) {
            if (vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_ls_state) {
                ++(vlSymsp->__Vcoverage[7307]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_ls_state) {
            if (vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_ls_state) {
                ++(vlSymsp->__Vcoverage[7292]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_ls_state) {
            if (vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_ls_state) {
                ++(vlSymsp->__Vcoverage[7337]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_ls_state) {
            if (vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_ls_state) {
                ++(vlSymsp->__Vcoverage[7343]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_ls_state)))) {
            if (vlSelf->riscv_soc__DOT__core__DOT__execute_io_out_mem_avalid) {
                if ((1U & (~ (((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_rs2_addr) 
                               == (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_rs_addr)) 
                              & (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_w_rs_en))))) {
                    ++(vlSymsp->__Vcoverage[7299]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_ls_state)))) {
            if (vlSelf->riscv_soc__DOT__core__DOT__execute_io_out_mem_avalid) {
                if ((((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_rs2_addr) 
                      == (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_rs_addr)) 
                     & (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_w_rs_en))) {
                    ++(vlSymsp->__Vcoverage[7298]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_stall)))) {
            ++(vlSymsp->__Vcoverage[7362]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_stall) {
            ++(vlSymsp->__Vcoverage[7363]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ ((IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_stall) 
                      | (0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_exuType)))))) {
            ++(vlSymsp->__Vcoverage[7356]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_stall) 
             | (0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_exuType)))) {
            ++(vlSymsp->__Vcoverage[7349]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_stall) 
             | (0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_exuType)))) {
            ++(vlSymsp->__Vcoverage[7357]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_stall) 
             | (0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_exuType)))) {
            ++(vlSymsp->__Vcoverage[7360]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ ((IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_stall) 
                      | (0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_exuType)))))) {
            ++(vlSymsp->__Vcoverage[7350]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ ((IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_stall) 
                      | (0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_exuType)))))) {
            ++(vlSymsp->__Vcoverage[7359]);
        }
    }
    ++(vlSymsp->__Vcoverage[6268]);
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[6238]);
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        ++(vlSymsp->__Vcoverage[6233]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[6232]);
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        ++(vlSymsp->__Vcoverage[6231]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[6230]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[6224]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[6243]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[6264]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[6263]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[6219]);
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        ++(vlSymsp->__Vcoverage[6267]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[6248]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[6229]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[6255]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[6260]);
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        ++(vlSymsp->__Vcoverage[6265]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[6266]);
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_flush)))) {
            ++(vlSymsp->__Vcoverage[6246]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_flush) {
            ++(vlSymsp->__Vcoverage[6247]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_flush)))) {
            ++(vlSymsp->__Vcoverage[6241]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_flush) {
            ++(vlSymsp->__Vcoverage[6242]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_flush)))) {
            ++(vlSymsp->__Vcoverage[6236]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_flush)))) {
            ++(vlSymsp->__Vcoverage[6217]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_flush)))) {
            ++(vlSymsp->__Vcoverage[6261]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_flush) {
            ++(vlSymsp->__Vcoverage[6237]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_flush) {
            ++(vlSymsp->__Vcoverage[6218]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_flush)))) {
            ++(vlSymsp->__Vcoverage[6258]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_flush)))) {
            ++(vlSymsp->__Vcoverage[6222]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_flush) {
            ++(vlSymsp->__Vcoverage[6223]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_flush)))) {
            ++(vlSymsp->__Vcoverage[6227]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_flush) {
            ++(vlSymsp->__Vcoverage[6228]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_flush)))) {
            ++(vlSymsp->__Vcoverage[6253]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_flush) {
            ++(vlSymsp->__Vcoverage[6254]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_flush) {
            ++(vlSymsp->__Vcoverage[6259]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_flush) {
            ++(vlSymsp->__Vcoverage[6262]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_flush)))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_stall)))) {
                ++(vlSymsp->__Vcoverage[6244]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_flush)))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_stall)))) {
                ++(vlSymsp->__Vcoverage[6239]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_flush)))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_stall)))) {
                ++(vlSymsp->__Vcoverage[6234]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_flush)))) {
            if (vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_stall) {
                ++(vlSymsp->__Vcoverage[6216]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_flush)))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_stall)))) {
                ++(vlSymsp->__Vcoverage[6225]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_flush)))) {
            if (vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_stall) {
                ++(vlSymsp->__Vcoverage[6240]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_flush)))) {
            if (vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_stall) {
                ++(vlSymsp->__Vcoverage[6235]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_flush)))) {
            if (vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_stall) {
                ++(vlSymsp->__Vcoverage[6245]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_flush)))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_stall)))) {
                ++(vlSymsp->__Vcoverage[6215]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_flush)))) {
            if (vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_stall) {
                ++(vlSymsp->__Vcoverage[6221]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_flush)))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_stall)))) {
                ++(vlSymsp->__Vcoverage[6220]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_flush)))) {
            if (vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_stall) {
                ++(vlSymsp->__Vcoverage[6226]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_flush)))) {
            if (vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_stall) {
                ++(vlSymsp->__Vcoverage[6252]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_flush)))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_stall)))) {
                ++(vlSymsp->__Vcoverage[6251]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_flush)))) {
            if (vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_stall) {
                ++(vlSymsp->__Vcoverage[6257]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_flush)))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_stall)))) {
                ++(vlSymsp->__Vcoverage[6256]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_flush)))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_stall)))) {
                if (((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_rs_addr 
                      == (QData)((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs2_addr))) 
                     & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_w_rs_en))) {
                    ++(vlSymsp->__Vcoverage[6249]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_flush)))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_stall)))) {
                if ((1U & (~ ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_rs_addr 
                               == (QData)((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs2_addr))) 
                              & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_w_rs_en))))) {
                    ++(vlSymsp->__Vcoverage[6250]);
                }
            }
        }
    }
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_w_mem_en 
        = ((~ (IData)(vlSelf->reset)) & ((~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_flush)) 
                                         & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__lsu_exu_io_w_mem_en)));
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_mem_avalid 
        = (1U & ((~ (IData)(vlSelf->reset)) & ((~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_flush)) 
                                               & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__valid) 
                                                  >> 1U))));
    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__pc_valid 
        = ((IData)(vlSelf->reset) | ((~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__stall)) 
                                     & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_valid) 
                                        | (IData)(vlSelf->riscv_soc__DOT__core__DOT__tem_reg_is_read_inst))));
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_opType = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__execute_io_out_flush) {
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_opType = 0U;
    } else if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__stall)))) {
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_opType 
            = ((0x33U == (0xfe00707fU & vlSelf->riscv_soc__DOT__core__DOT__fetch_io_out_inst))
                ? 4U : ((0x13U == (0x707fU & vlSelf->riscv_soc__DOT__core__DOT__fetch_io_out_inst))
                         ? 4U : ((0x1bU == (0x707fU 
                                            & vlSelf->riscv_soc__DOT__core__DOT__fetch_io_out_inst))
                                  ? 4U : ((0x3bU == 
                                           (0xfe00707fU 
                                            & vlSelf->riscv_soc__DOT__core__DOT__fetch_io_out_inst))
                                           ? 4U : (
                                                   (0x7033U 
                                                    == 
                                                    (0xfe00707fU 
                                                     & vlSelf->riscv_soc__DOT__core__DOT__fetch_io_out_inst))
                                                    ? 4U
                                                    : 
                                                   ((0x7013U 
                                                     == 
                                                     (0x707fU 
                                                      & vlSelf->riscv_soc__DOT__core__DOT__fetch_io_out_inst))
                                                     ? 4U
                                                     : 
                                                    ((0x17U 
                                                      == 
                                                      (0x7fU 
                                                       & vlSelf->riscv_soc__DOT__core__DOT__fetch_io_out_inst))
                                                      ? 4U
                                                      : 
                                                     ((0x63U 
                                                       == 
                                                       (0x707fU 
                                                        & vlSelf->riscv_soc__DOT__core__DOT__fetch_io_out_inst))
                                                       ? 4U
                                                       : (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT___T_195)))))))));
    }
    vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_stall 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT___GEN_10));
    if (vlSelf->reset) {
        vlSelf->__Vdly__riscv_soc__DOT__core__DOT__fetch__DOT__regPC = 0x80000000ULL;
    } else if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__stall)))) {
        if (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_valid) {
            vlSelf->__Vdly__riscv_soc__DOT__core__DOT__fetch__DOT__regPC 
                = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT___regPC_T_3;
        } else if (vlSelf->riscv_soc__DOT__core__DOT__tem_reg_is_read_inst) {
            vlSelf->__Vdly__riscv_soc__DOT__core__DOT__fetch__DOT__regPC 
                = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT___regPC_T_3;
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_inst = 0U;
    } else if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__stall)))) {
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_inst 
            = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_valid)
                ? ((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_next_pc_valid)
                    ? 0U : ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute_io_out_flush)
                             ? 0U : vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__temp_reg_inst))
                : ((IData)(vlSelf->riscv_soc__DOT__core__DOT__tem_reg_is_read_inst)
                    ? vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT___reg_inst_T_3
                    : 0U));
    }
    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_next_pc 
        = ((IData)(vlSelf->reset) ? 0ULL : ((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__stall)
                                             ? vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT___reg_next_pc_T
                                             : (((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_valid) 
                                                 | (IData)(vlSelf->riscv_soc__DOT__core__DOT__tem_reg_is_read_inst))
                                                 ? 0ULL
                                                 : vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT___reg_next_pc_T)));
    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_next_pc_valid 
        = ((~ (IData)(vlSelf->reset)) & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__stall)
                                          ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT___reg_next_pc_valid_T)
                                          : ((~ ((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_valid) 
                                                 | (IData)(vlSelf->riscv_soc__DOT__core__DOT__tem_reg_is_read_inst))) 
                                             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT___reg_next_pc_valid_T))));
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_imm = 0ULL;
    } else if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute_io_out_flush)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__stall)))) {
            vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_imm 
                = ((4U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__instType))
                    ? (QData)((IData)((0x3fU & (vlSelf->riscv_soc__DOT__core__DOT__fetch_io_out_inst 
                                                >> 0x14U))))
                    : ((5U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__instType))
                        ? (QData)((IData)((0x1fU & 
                                           (vlSelf->riscv_soc__DOT__core__DOT__fetch_io_out_inst 
                                            >> 0xfU))))
                        : vlSelf->riscv_soc__DOT__core__DOT__decode__DOT___imm_data_T_51));
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__execute_io_out_flush) {
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType = 0U;
    } else if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__stall)))) {
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType 
            = ((0x33U == (0xfe00707fU & vlSelf->riscv_soc__DOT__core__DOT__fetch_io_out_inst))
                ? 0x2cU : ((0x13U == (0x707fU & vlSelf->riscv_soc__DOT__core__DOT__fetch_io_out_inst))
                            ? 0x2dU : ((0x1bU == (0x707fU 
                                                  & vlSelf->riscv_soc__DOT__core__DOT__fetch_io_out_inst))
                                        ? 0x2fU : (
                                                   (0x3bU 
                                                    == 
                                                    (0xfe00707fU 
                                                     & vlSelf->riscv_soc__DOT__core__DOT__fetch_io_out_inst))
                                                    ? 0x2eU
                                                    : 
                                                   ((0x7033U 
                                                     == 
                                                     (0xfe00707fU 
                                                      & vlSelf->riscv_soc__DOT__core__DOT__fetch_io_out_inst))
                                                     ? 8U
                                                     : 
                                                    ((0x7013U 
                                                      == 
                                                      (0x707fU 
                                                       & vlSelf->riscv_soc__DOT__core__DOT__fetch_io_out_inst))
                                                      ? 9U
                                                      : 
                                                     ((0x17U 
                                                       == 
                                                       (0x7fU 
                                                        & vlSelf->riscv_soc__DOT__core__DOT__fetch_io_out_inst))
                                                       ? 4U
                                                       : 
                                                      ((0x63U 
                                                        == 
                                                        (0x707fU 
                                                         & vlSelf->riscv_soc__DOT__core__DOT__fetch_io_out_inst))
                                                        ? 0x34U
                                                        : (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT___T_262)))))))));
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs1_data = 0ULL;
    } else if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute_io_out_flush)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__stall)))) {
            vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs1_data 
                = ((0U == (0x1fU & (vlSelf->riscv_soc__DOT__core__DOT__fetch_io_out_inst 
                                    >> 0xfU))) ? 0ULL
                    : vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile_rs1_data_MPORT_data);
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs2_data = 0ULL;
    } else if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute_io_out_flush)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__stall)))) {
            vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs2_data 
                = ((0U == (0x1fU & (vlSelf->riscv_soc__DOT__core__DOT__fetch_io_out_inst 
                                    >> 0x14U))) ? 0ULL
                    : vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile_rs2_data_MPORT_data);
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs1_addr = 0U;
    } else if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute_io_out_flush)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__stall)))) {
            vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs1_addr 
                = (0x1fU & (vlSelf->riscv_soc__DOT__core__DOT__fetch_io_out_inst 
                            >> 0xfU));
        }
    }
    if (vlSelf->riscv_soc__DOT__core__DOT__write_back_io_out_w_rs_en) {
        __Vdlyvval__riscv_soc__DOT__core__DOT__decode__DOT__regfile__v0 
            = vlSelf->riscv_soc__DOT__core__DOT__write_back_io_out_result_data;
        __Vdlyvset__riscv_soc__DOT__core__DOT__decode__DOT__regfile__v0 = 1U;
        __Vdlyvdim0__riscv_soc__DOT__core__DOT__decode__DOT__regfile__v0 
            = vlSelf->riscv_soc__DOT__core__DOT__write_back_io_out_rs_addr;
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_next_pc = 0ULL;
    } else if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_flush)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_stall)))) {
            vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_next_pc 
                = (((QData)((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[1U])) 
                    << 0x20U) | (QData)((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[0U])));
        }
    }
    if (vlSelf->reset) {
        vlSelf->__Vdly__riscv_soc__DOT__core__DOT__execute__DOT__reg_rs_data = 0ULL;
    } else if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_flush)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_stall)))) {
            vlSelf->__Vdly__riscv_soc__DOT__core__DOT__execute__DOT__reg_rs_data 
                = (((QData)((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[1U])) 
                    << 0x20U) | (QData)((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[0U])));
        }
    }
    if (vlSelf->reset) {
        vlSelf->__Vdly__riscv_soc__DOT__core__DOT__execute__DOT__reg_rs_addr = 0ULL;
    } else if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_flush)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_stall)))) {
            vlSelf->__Vdly__riscv_soc__DOT__core__DOT__execute__DOT__reg_rs_addr 
                = (QData)((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_dest_rs_addr));
        }
    }
    if (vlSelf->reset) {
        vlSelf->__Vdly__riscv_soc__DOT__core__DOT__execute__DOT__reg_rs2_addr = 0U;
    } else if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_flush)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_stall)))) {
            vlSelf->__Vdly__riscv_soc__DOT__core__DOT__execute__DOT__reg_rs2_addr 
                = vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs2_addr;
        }
    }
    if (vlSelf->reset) {
        vlSelf->__Vdly__riscv_soc__DOT__core__DOT__execute__DOT__reg_rs2_data = 0ULL;
    } else if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_flush)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_stall)))) {
            vlSelf->__Vdly__riscv_soc__DOT__core__DOT__execute__DOT__reg_rs2_data 
                = (((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_rs_addr 
                     == (QData)((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs2_addr))) 
                    & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_w_rs_en))
                    ? vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_rs_data
                    : vlSelf->riscv_soc__DOT__core__DOT__execute__DOT___rs2_data_T_4);
        }
    }
    if ((1U & ((IData)(vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata) 
               ^ (IData)(vlSelf->riscv_soc__DOT____Vtogcov__core_io_in_rdata)))) {
        ++(vlSymsp->__Vcoverage[2147]);
        vlSelf->riscv_soc__DOT____Vtogcov__core_io_in_rdata 
            = ((0xfffffffffffffffeULL & vlSelf->riscv_soc__DOT____Vtogcov__core_io_in_rdata) 
               | (IData)((IData)((1U & (IData)(vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata)))));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata 
                        >> 1U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core_io_in_rdata 
                                           >> 1U))))) {
        ++(vlSymsp->__Vcoverage[2148]);
        vlSelf->riscv_soc__DOT____Vtogcov__core_io_in_rdata 
            = ((0xfffffffffffffffdULL & vlSelf->riscv_soc__DOT____Vtogcov__core_io_in_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata 
                                                 >> 1U))))) 
                  << 1U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata 
                        >> 2U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core_io_in_rdata 
                                           >> 2U))))) {
        ++(vlSymsp->__Vcoverage[2149]);
        vlSelf->riscv_soc__DOT____Vtogcov__core_io_in_rdata 
            = ((0xfffffffffffffffbULL & vlSelf->riscv_soc__DOT____Vtogcov__core_io_in_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata 
                                                 >> 2U))))) 
                  << 2U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata 
                        >> 3U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core_io_in_rdata 
                                           >> 3U))))) {
        ++(vlSymsp->__Vcoverage[2150]);
        vlSelf->riscv_soc__DOT____Vtogcov__core_io_in_rdata 
            = ((0xfffffffffffffff7ULL & vlSelf->riscv_soc__DOT____Vtogcov__core_io_in_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata 
                                                 >> 3U))))) 
                  << 3U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata 
                        >> 4U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core_io_in_rdata 
                                           >> 4U))))) {
        ++(vlSymsp->__Vcoverage[2151]);
        vlSelf->riscv_soc__DOT____Vtogcov__core_io_in_rdata 
            = ((0xffffffffffffffefULL & vlSelf->riscv_soc__DOT____Vtogcov__core_io_in_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata 
                                                 >> 4U))))) 
                  << 4U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata 
                        >> 5U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core_io_in_rdata 
                                           >> 5U))))) {
        ++(vlSymsp->__Vcoverage[2152]);
        vlSelf->riscv_soc__DOT____Vtogcov__core_io_in_rdata 
            = ((0xffffffffffffffdfULL & vlSelf->riscv_soc__DOT____Vtogcov__core_io_in_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata 
                                                 >> 5U))))) 
                  << 5U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata 
                        >> 6U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core_io_in_rdata 
                                           >> 6U))))) {
        ++(vlSymsp->__Vcoverage[2153]);
        vlSelf->riscv_soc__DOT____Vtogcov__core_io_in_rdata 
            = ((0xffffffffffffffbfULL & vlSelf->riscv_soc__DOT____Vtogcov__core_io_in_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata 
                                                 >> 6U))))) 
                  << 6U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata 
                        >> 7U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core_io_in_rdata 
                                           >> 7U))))) {
        ++(vlSymsp->__Vcoverage[2154]);
        vlSelf->riscv_soc__DOT____Vtogcov__core_io_in_rdata 
            = ((0xffffffffffffff7fULL & vlSelf->riscv_soc__DOT____Vtogcov__core_io_in_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata 
                                                 >> 7U))))) 
                  << 7U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata 
                        >> 8U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core_io_in_rdata 
                                           >> 8U))))) {
        ++(vlSymsp->__Vcoverage[2155]);
        vlSelf->riscv_soc__DOT____Vtogcov__core_io_in_rdata 
            = ((0xfffffffffffffeffULL & vlSelf->riscv_soc__DOT____Vtogcov__core_io_in_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata 
                                                 >> 8U))))) 
                  << 8U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata 
                        >> 9U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core_io_in_rdata 
                                           >> 9U))))) {
        ++(vlSymsp->__Vcoverage[2156]);
        vlSelf->riscv_soc__DOT____Vtogcov__core_io_in_rdata 
            = ((0xfffffffffffffdffULL & vlSelf->riscv_soc__DOT____Vtogcov__core_io_in_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata 
                                                 >> 9U))))) 
                  << 9U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata 
                        >> 0xaU)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core_io_in_rdata 
                                             >> 0xaU))))) {
        ++(vlSymsp->__Vcoverage[2157]);
        vlSelf->riscv_soc__DOT____Vtogcov__core_io_in_rdata 
            = ((0xfffffffffffffbffULL & vlSelf->riscv_soc__DOT____Vtogcov__core_io_in_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata 
                                                 >> 0xaU))))) 
                  << 0xaU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata 
                        >> 0xbU)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core_io_in_rdata 
                                             >> 0xbU))))) {
        ++(vlSymsp->__Vcoverage[2158]);
        vlSelf->riscv_soc__DOT____Vtogcov__core_io_in_rdata 
            = ((0xfffffffffffff7ffULL & vlSelf->riscv_soc__DOT____Vtogcov__core_io_in_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata 
                                                 >> 0xbU))))) 
                  << 0xbU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata 
                        >> 0xcU)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core_io_in_rdata 
                                             >> 0xcU))))) {
        ++(vlSymsp->__Vcoverage[2159]);
        vlSelf->riscv_soc__DOT____Vtogcov__core_io_in_rdata 
            = ((0xffffffffffffefffULL & vlSelf->riscv_soc__DOT____Vtogcov__core_io_in_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata 
                                                 >> 0xcU))))) 
                  << 0xcU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata 
                        >> 0xdU)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core_io_in_rdata 
                                             >> 0xdU))))) {
        ++(vlSymsp->__Vcoverage[2160]);
        vlSelf->riscv_soc__DOT____Vtogcov__core_io_in_rdata 
            = ((0xffffffffffffdfffULL & vlSelf->riscv_soc__DOT____Vtogcov__core_io_in_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata 
                                                 >> 0xdU))))) 
                  << 0xdU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata 
                        >> 0xeU)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core_io_in_rdata 
                                             >> 0xeU))))) {
        ++(vlSymsp->__Vcoverage[2161]);
        vlSelf->riscv_soc__DOT____Vtogcov__core_io_in_rdata 
            = ((0xffffffffffffbfffULL & vlSelf->riscv_soc__DOT____Vtogcov__core_io_in_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata 
                                                 >> 0xeU))))) 
                  << 0xeU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata 
                        >> 0xfU)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core_io_in_rdata 
                                             >> 0xfU))))) {
        ++(vlSymsp->__Vcoverage[2162]);
        vlSelf->riscv_soc__DOT____Vtogcov__core_io_in_rdata 
            = ((0xffffffffffff7fffULL & vlSelf->riscv_soc__DOT____Vtogcov__core_io_in_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata 
                                                 >> 0xfU))))) 
                  << 0xfU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata 
                        >> 0x10U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core_io_in_rdata 
                                              >> 0x10U))))) {
        ++(vlSymsp->__Vcoverage[2163]);
        vlSelf->riscv_soc__DOT____Vtogcov__core_io_in_rdata 
            = ((0xfffffffffffeffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core_io_in_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata 
                                                 >> 0x10U))))) 
                  << 0x10U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata 
                        >> 0x11U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core_io_in_rdata 
                                              >> 0x11U))))) {
        ++(vlSymsp->__Vcoverage[2164]);
        vlSelf->riscv_soc__DOT____Vtogcov__core_io_in_rdata 
            = ((0xfffffffffffdffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core_io_in_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata 
                                                 >> 0x11U))))) 
                  << 0x11U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata 
                        >> 0x12U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core_io_in_rdata 
                                              >> 0x12U))))) {
        ++(vlSymsp->__Vcoverage[2165]);
        vlSelf->riscv_soc__DOT____Vtogcov__core_io_in_rdata 
            = ((0xfffffffffffbffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core_io_in_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata 
                                                 >> 0x12U))))) 
                  << 0x12U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata 
                        >> 0x13U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core_io_in_rdata 
                                              >> 0x13U))))) {
        ++(vlSymsp->__Vcoverage[2166]);
        vlSelf->riscv_soc__DOT____Vtogcov__core_io_in_rdata 
            = ((0xfffffffffff7ffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core_io_in_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata 
                                                 >> 0x13U))))) 
                  << 0x13U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata 
                        >> 0x14U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core_io_in_rdata 
                                              >> 0x14U))))) {
        ++(vlSymsp->__Vcoverage[2167]);
        vlSelf->riscv_soc__DOT____Vtogcov__core_io_in_rdata 
            = ((0xffffffffffefffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core_io_in_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata 
                                                 >> 0x14U))))) 
                  << 0x14U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata 
                        >> 0x15U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core_io_in_rdata 
                                              >> 0x15U))))) {
        ++(vlSymsp->__Vcoverage[2168]);
        vlSelf->riscv_soc__DOT____Vtogcov__core_io_in_rdata 
            = ((0xffffffffffdfffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core_io_in_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata 
                                                 >> 0x15U))))) 
                  << 0x15U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata 
                        >> 0x16U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core_io_in_rdata 
                                              >> 0x16U))))) {
        ++(vlSymsp->__Vcoverage[2169]);
        vlSelf->riscv_soc__DOT____Vtogcov__core_io_in_rdata 
            = ((0xffffffffffbfffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core_io_in_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata 
                                                 >> 0x16U))))) 
                  << 0x16U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata 
                        >> 0x17U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core_io_in_rdata 
                                              >> 0x17U))))) {
        ++(vlSymsp->__Vcoverage[2170]);
        vlSelf->riscv_soc__DOT____Vtogcov__core_io_in_rdata 
            = ((0xffffffffff7fffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core_io_in_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata 
                                                 >> 0x17U))))) 
                  << 0x17U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata 
                        >> 0x18U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core_io_in_rdata 
                                              >> 0x18U))))) {
        ++(vlSymsp->__Vcoverage[2171]);
        vlSelf->riscv_soc__DOT____Vtogcov__core_io_in_rdata 
            = ((0xfffffffffeffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core_io_in_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata 
                                                 >> 0x18U))))) 
                  << 0x18U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata 
                        >> 0x19U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core_io_in_rdata 
                                              >> 0x19U))))) {
        ++(vlSymsp->__Vcoverage[2172]);
        vlSelf->riscv_soc__DOT____Vtogcov__core_io_in_rdata 
            = ((0xfffffffffdffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core_io_in_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata 
                                                 >> 0x19U))))) 
                  << 0x19U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata 
                        >> 0x1aU)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core_io_in_rdata 
                                              >> 0x1aU))))) {
        ++(vlSymsp->__Vcoverage[2173]);
        vlSelf->riscv_soc__DOT____Vtogcov__core_io_in_rdata 
            = ((0xfffffffffbffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core_io_in_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata 
                                                 >> 0x1aU))))) 
                  << 0x1aU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata 
                        >> 0x1bU)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core_io_in_rdata 
                                              >> 0x1bU))))) {
        ++(vlSymsp->__Vcoverage[2174]);
        vlSelf->riscv_soc__DOT____Vtogcov__core_io_in_rdata 
            = ((0xfffffffff7ffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core_io_in_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata 
                                                 >> 0x1bU))))) 
                  << 0x1bU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata 
                        >> 0x1cU)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core_io_in_rdata 
                                              >> 0x1cU))))) {
        ++(vlSymsp->__Vcoverage[2175]);
        vlSelf->riscv_soc__DOT____Vtogcov__core_io_in_rdata 
            = ((0xffffffffefffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core_io_in_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata 
                                                 >> 0x1cU))))) 
                  << 0x1cU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata 
                        >> 0x1dU)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core_io_in_rdata 
                                              >> 0x1dU))))) {
        ++(vlSymsp->__Vcoverage[2176]);
        vlSelf->riscv_soc__DOT____Vtogcov__core_io_in_rdata 
            = ((0xffffffffdfffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core_io_in_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata 
                                                 >> 0x1dU))))) 
                  << 0x1dU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata 
                        >> 0x1eU)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core_io_in_rdata 
                                              >> 0x1eU))))) {
        ++(vlSymsp->__Vcoverage[2177]);
        vlSelf->riscv_soc__DOT____Vtogcov__core_io_in_rdata 
            = ((0xffffffffbfffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core_io_in_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata 
                                                 >> 0x1eU))))) 
                  << 0x1eU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata 
                        >> 0x1fU)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core_io_in_rdata 
                                              >> 0x1fU))))) {
        ++(vlSymsp->__Vcoverage[2178]);
        vlSelf->riscv_soc__DOT____Vtogcov__core_io_in_rdata 
            = ((0xffffffff7fffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core_io_in_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata 
                                                 >> 0x1fU))))) 
                  << 0x1fU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata 
                        >> 0x20U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core_io_in_rdata 
                                              >> 0x20U))))) {
        ++(vlSymsp->__Vcoverage[2179]);
        vlSelf->riscv_soc__DOT____Vtogcov__core_io_in_rdata 
            = ((0xfffffffeffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core_io_in_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata 
                                                 >> 0x20U))))) 
                  << 0x20U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata 
                        >> 0x21U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core_io_in_rdata 
                                              >> 0x21U))))) {
        ++(vlSymsp->__Vcoverage[2180]);
        vlSelf->riscv_soc__DOT____Vtogcov__core_io_in_rdata 
            = ((0xfffffffdffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core_io_in_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata 
                                                 >> 0x21U))))) 
                  << 0x21U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata 
                        >> 0x22U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core_io_in_rdata 
                                              >> 0x22U))))) {
        ++(vlSymsp->__Vcoverage[2181]);
        vlSelf->riscv_soc__DOT____Vtogcov__core_io_in_rdata 
            = ((0xfffffffbffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core_io_in_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata 
                                                 >> 0x22U))))) 
                  << 0x22U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata 
                        >> 0x23U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core_io_in_rdata 
                                              >> 0x23U))))) {
        ++(vlSymsp->__Vcoverage[2182]);
        vlSelf->riscv_soc__DOT____Vtogcov__core_io_in_rdata 
            = ((0xfffffff7ffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core_io_in_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata 
                                                 >> 0x23U))))) 
                  << 0x23U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata 
                        >> 0x24U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core_io_in_rdata 
                                              >> 0x24U))))) {
        ++(vlSymsp->__Vcoverage[2183]);
        vlSelf->riscv_soc__DOT____Vtogcov__core_io_in_rdata 
            = ((0xffffffefffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core_io_in_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata 
                                                 >> 0x24U))))) 
                  << 0x24U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata 
                        >> 0x25U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core_io_in_rdata 
                                              >> 0x25U))))) {
        ++(vlSymsp->__Vcoverage[2184]);
        vlSelf->riscv_soc__DOT____Vtogcov__core_io_in_rdata 
            = ((0xffffffdfffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core_io_in_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata 
                                                 >> 0x25U))))) 
                  << 0x25U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata 
                        >> 0x26U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core_io_in_rdata 
                                              >> 0x26U))))) {
        ++(vlSymsp->__Vcoverage[2185]);
        vlSelf->riscv_soc__DOT____Vtogcov__core_io_in_rdata 
            = ((0xffffffbfffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core_io_in_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata 
                                                 >> 0x26U))))) 
                  << 0x26U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata 
                        >> 0x27U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core_io_in_rdata 
                                              >> 0x27U))))) {
        ++(vlSymsp->__Vcoverage[2186]);
        vlSelf->riscv_soc__DOT____Vtogcov__core_io_in_rdata 
            = ((0xffffff7fffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core_io_in_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata 
                                                 >> 0x27U))))) 
                  << 0x27U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata 
                        >> 0x28U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core_io_in_rdata 
                                              >> 0x28U))))) {
        ++(vlSymsp->__Vcoverage[2187]);
        vlSelf->riscv_soc__DOT____Vtogcov__core_io_in_rdata 
            = ((0xfffffeffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core_io_in_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata 
                                                 >> 0x28U))))) 
                  << 0x28U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata 
                        >> 0x29U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core_io_in_rdata 
                                              >> 0x29U))))) {
        ++(vlSymsp->__Vcoverage[2188]);
        vlSelf->riscv_soc__DOT____Vtogcov__core_io_in_rdata 
            = ((0xfffffdffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core_io_in_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata 
                                                 >> 0x29U))))) 
                  << 0x29U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata 
                        >> 0x2aU)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core_io_in_rdata 
                                              >> 0x2aU))))) {
        ++(vlSymsp->__Vcoverage[2189]);
        vlSelf->riscv_soc__DOT____Vtogcov__core_io_in_rdata 
            = ((0xfffffbffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core_io_in_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata 
                                                 >> 0x2aU))))) 
                  << 0x2aU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata 
                        >> 0x2bU)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core_io_in_rdata 
                                              >> 0x2bU))))) {
        ++(vlSymsp->__Vcoverage[2190]);
        vlSelf->riscv_soc__DOT____Vtogcov__core_io_in_rdata 
            = ((0xfffff7ffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core_io_in_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata 
                                                 >> 0x2bU))))) 
                  << 0x2bU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata 
                        >> 0x2cU)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core_io_in_rdata 
                                              >> 0x2cU))))) {
        ++(vlSymsp->__Vcoverage[2191]);
        vlSelf->riscv_soc__DOT____Vtogcov__core_io_in_rdata 
            = ((0xffffefffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core_io_in_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata 
                                                 >> 0x2cU))))) 
                  << 0x2cU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata 
                        >> 0x2dU)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core_io_in_rdata 
                                              >> 0x2dU))))) {
        ++(vlSymsp->__Vcoverage[2192]);
        vlSelf->riscv_soc__DOT____Vtogcov__core_io_in_rdata 
            = ((0xffffdfffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core_io_in_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata 
                                                 >> 0x2dU))))) 
                  << 0x2dU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata 
                        >> 0x2eU)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core_io_in_rdata 
                                              >> 0x2eU))))) {
        ++(vlSymsp->__Vcoverage[2193]);
        vlSelf->riscv_soc__DOT____Vtogcov__core_io_in_rdata 
            = ((0xffffbfffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core_io_in_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata 
                                                 >> 0x2eU))))) 
                  << 0x2eU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata 
                        >> 0x2fU)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core_io_in_rdata 
                                              >> 0x2fU))))) {
        ++(vlSymsp->__Vcoverage[2194]);
        vlSelf->riscv_soc__DOT____Vtogcov__core_io_in_rdata 
            = ((0xffff7fffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core_io_in_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata 
                                                 >> 0x2fU))))) 
                  << 0x2fU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata 
                        >> 0x30U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core_io_in_rdata 
                                              >> 0x30U))))) {
        ++(vlSymsp->__Vcoverage[2195]);
        vlSelf->riscv_soc__DOT____Vtogcov__core_io_in_rdata 
            = ((0xfffeffffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core_io_in_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata 
                                                 >> 0x30U))))) 
                  << 0x30U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata 
                        >> 0x31U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core_io_in_rdata 
                                              >> 0x31U))))) {
        ++(vlSymsp->__Vcoverage[2196]);
        vlSelf->riscv_soc__DOT____Vtogcov__core_io_in_rdata 
            = ((0xfffdffffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core_io_in_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata 
                                                 >> 0x31U))))) 
                  << 0x31U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata 
                        >> 0x32U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core_io_in_rdata 
                                              >> 0x32U))))) {
        ++(vlSymsp->__Vcoverage[2197]);
        vlSelf->riscv_soc__DOT____Vtogcov__core_io_in_rdata 
            = ((0xfffbffffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core_io_in_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata 
                                                 >> 0x32U))))) 
                  << 0x32U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata 
                        >> 0x33U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core_io_in_rdata 
                                              >> 0x33U))))) {
        ++(vlSymsp->__Vcoverage[2198]);
        vlSelf->riscv_soc__DOT____Vtogcov__core_io_in_rdata 
            = ((0xfff7ffffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core_io_in_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata 
                                                 >> 0x33U))))) 
                  << 0x33U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata 
                        >> 0x34U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core_io_in_rdata 
                                              >> 0x34U))))) {
        ++(vlSymsp->__Vcoverage[2199]);
        vlSelf->riscv_soc__DOT____Vtogcov__core_io_in_rdata 
            = ((0xffefffffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core_io_in_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata 
                                                 >> 0x34U))))) 
                  << 0x34U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata 
                        >> 0x35U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core_io_in_rdata 
                                              >> 0x35U))))) {
        ++(vlSymsp->__Vcoverage[2200]);
        vlSelf->riscv_soc__DOT____Vtogcov__core_io_in_rdata 
            = ((0xffdfffffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core_io_in_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata 
                                                 >> 0x35U))))) 
                  << 0x35U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata 
                        >> 0x36U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core_io_in_rdata 
                                              >> 0x36U))))) {
        ++(vlSymsp->__Vcoverage[2201]);
        vlSelf->riscv_soc__DOT____Vtogcov__core_io_in_rdata 
            = ((0xffbfffffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core_io_in_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata 
                                                 >> 0x36U))))) 
                  << 0x36U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata 
                        >> 0x37U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core_io_in_rdata 
                                              >> 0x37U))))) {
        ++(vlSymsp->__Vcoverage[2202]);
        vlSelf->riscv_soc__DOT____Vtogcov__core_io_in_rdata 
            = ((0xff7fffffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core_io_in_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata 
                                                 >> 0x37U))))) 
                  << 0x37U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata 
                        >> 0x38U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core_io_in_rdata 
                                              >> 0x38U))))) {
        ++(vlSymsp->__Vcoverage[2203]);
        vlSelf->riscv_soc__DOT____Vtogcov__core_io_in_rdata 
            = ((0xfeffffffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core_io_in_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata 
                                                 >> 0x38U))))) 
                  << 0x38U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata 
                        >> 0x39U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core_io_in_rdata 
                                              >> 0x39U))))) {
        ++(vlSymsp->__Vcoverage[2204]);
        vlSelf->riscv_soc__DOT____Vtogcov__core_io_in_rdata 
            = ((0xfdffffffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core_io_in_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata 
                                                 >> 0x39U))))) 
                  << 0x39U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata 
                        >> 0x3aU)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core_io_in_rdata 
                                              >> 0x3aU))))) {
        ++(vlSymsp->__Vcoverage[2205]);
        vlSelf->riscv_soc__DOT____Vtogcov__core_io_in_rdata 
            = ((0xfbffffffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core_io_in_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata 
                                                 >> 0x3aU))))) 
                  << 0x3aU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata 
                        >> 0x3bU)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core_io_in_rdata 
                                              >> 0x3bU))))) {
        ++(vlSymsp->__Vcoverage[2206]);
        vlSelf->riscv_soc__DOT____Vtogcov__core_io_in_rdata 
            = ((0xf7ffffffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core_io_in_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata 
                                                 >> 0x3bU))))) 
                  << 0x3bU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata 
                        >> 0x3cU)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core_io_in_rdata 
                                              >> 0x3cU))))) {
        ++(vlSymsp->__Vcoverage[2207]);
        vlSelf->riscv_soc__DOT____Vtogcov__core_io_in_rdata 
            = ((0xefffffffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core_io_in_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata 
                                                 >> 0x3cU))))) 
                  << 0x3cU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata 
                        >> 0x3dU)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core_io_in_rdata 
                                              >> 0x3dU))))) {
        ++(vlSymsp->__Vcoverage[2208]);
        vlSelf->riscv_soc__DOT____Vtogcov__core_io_in_rdata 
            = ((0xdfffffffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core_io_in_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata 
                                                 >> 0x3dU))))) 
                  << 0x3dU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata 
                        >> 0x3eU)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core_io_in_rdata 
                                              >> 0x3eU))))) {
        ++(vlSymsp->__Vcoverage[2209]);
        vlSelf->riscv_soc__DOT____Vtogcov__core_io_in_rdata 
            = ((0xbfffffffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core_io_in_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata 
                                                 >> 0x3eU))))) 
                  << 0x3eU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata 
                        >> 0x3fU)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core_io_in_rdata 
                                              >> 0x3fU))))) {
        ++(vlSymsp->__Vcoverage[2210]);
        vlSelf->riscv_soc__DOT____Vtogcov__core_io_in_rdata 
            = ((0x7fffffffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core_io_in_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata 
                                                 >> 0x3fU))))) 
                  << 0x3fU));
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
        vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_exuType = 0U;
    } else if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_stall)))) {
        vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_exuType 
            = vlSelf->riscv_soc__DOT__core__DOT__execute_io_out_exuType;
    }
    if (__Vdlyvset__riscv_soc__DOT__core__DOT__decode__DOT__regfile__v0) {
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile[__Vdlyvdim0__riscv_soc__DOT__core__DOT__decode__DOT__regfile__v0] 
            = __Vdlyvval__riscv_soc__DOT__core__DOT__decode__DOT__regfile__v0;
    }
    vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_mem_wstrb 
        = (0xffU & (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT___GEN_35));
    if (((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_w_mem_en) 
         ^ (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__reg_w_mem_en))) {
        ++(vlSymsp->__Vcoverage[6144]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__reg_w_mem_en 
            = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_w_mem_en;
    }
    if (((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_mem_avalid) 
         ^ (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__reg_mem_avalid))) {
        ++(vlSymsp->__Vcoverage[6143]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__reg_mem_avalid 
            = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_mem_avalid;
    }
    if (((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__pc_valid) 
         ^ (IData)(vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__i_cache_io_cpu_in_avalid))) {
        ++(vlSymsp->__Vcoverage[4622]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__i_cache_io_cpu_in_avalid 
            = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__pc_valid;
    }
    if ((1U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_opType) 
               ^ (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__reg_opType)))) {
        ++(vlSymsp->__Vcoverage[6848]);
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__reg_opType 
            = ((6U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__reg_opType)) 
               | (1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_opType)));
    }
    if ((2U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_opType) 
               ^ (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__reg_opType)))) {
        ++(vlSymsp->__Vcoverage[6849]);
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__reg_opType 
            = ((5U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__reg_opType)) 
               | (2U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_opType)));
    }
    if ((4U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_opType) 
               ^ (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__reg_opType)))) {
        ++(vlSymsp->__Vcoverage[6850]);
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__reg_opType 
            = ((3U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__reg_opType)) 
               | (4U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_opType)));
    }
    if (((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_stall) 
         ^ (IData)(vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__fetch_io_in_de_stall))) {
        ++(vlSymsp->__Vcoverage[4692]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__fetch_io_in_de_stall 
            = vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_stall;
    }
    if (((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_next_pc_valid) 
         ^ (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_next_pc_valid))) {
        ++(vlSymsp->__Vcoverage[5716]);
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_next_pc_valid 
            = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_next_pc_valid;
    }
    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_valid 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT___GEN_2));
    if ((1U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_next_pc) 
               ^ (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_next_pc)))) {
        ++(vlSymsp->__Vcoverage[5652]);
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_next_pc 
            = ((0xfffffffffffffffeULL & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_next_pc) 
               | (IData)((IData)((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_next_pc)))));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_next_pc 
                        >> 1U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_next_pc 
                                           >> 1U))))) {
        ++(vlSymsp->__Vcoverage[5653]);
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_next_pc 
            = ((0xfffffffffffffffdULL & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_next_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_next_pc 
                                                 >> 1U))))) 
                  << 1U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_next_pc 
                        >> 2U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_next_pc 
                                           >> 2U))))) {
        ++(vlSymsp->__Vcoverage[5654]);
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_next_pc 
            = ((0xfffffffffffffffbULL & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_next_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_next_pc 
                                                 >> 2U))))) 
                  << 2U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_next_pc 
                        >> 3U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_next_pc 
                                           >> 3U))))) {
        ++(vlSymsp->__Vcoverage[5655]);
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_next_pc 
            = ((0xfffffffffffffff7ULL & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_next_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_next_pc 
                                                 >> 3U))))) 
                  << 3U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_next_pc 
                        >> 4U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_next_pc 
                                           >> 4U))))) {
        ++(vlSymsp->__Vcoverage[5656]);
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_next_pc 
            = ((0xffffffffffffffefULL & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_next_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_next_pc 
                                                 >> 4U))))) 
                  << 4U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_next_pc 
                        >> 5U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_next_pc 
                                           >> 5U))))) {
        ++(vlSymsp->__Vcoverage[5657]);
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_next_pc 
            = ((0xffffffffffffffdfULL & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_next_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_next_pc 
                                                 >> 5U))))) 
                  << 5U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_next_pc 
                        >> 6U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_next_pc 
                                           >> 6U))))) {
        ++(vlSymsp->__Vcoverage[5658]);
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_next_pc 
            = ((0xffffffffffffffbfULL & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_next_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_next_pc 
                                                 >> 6U))))) 
                  << 6U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_next_pc 
                        >> 7U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_next_pc 
                                           >> 7U))))) {
        ++(vlSymsp->__Vcoverage[5659]);
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_next_pc 
            = ((0xffffffffffffff7fULL & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_next_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_next_pc 
                                                 >> 7U))))) 
                  << 7U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_next_pc 
                        >> 8U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_next_pc 
                                           >> 8U))))) {
        ++(vlSymsp->__Vcoverage[5660]);
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_next_pc 
            = ((0xfffffffffffffeffULL & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_next_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_next_pc 
                                                 >> 8U))))) 
                  << 8U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_next_pc 
                        >> 9U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_next_pc 
                                           >> 9U))))) {
        ++(vlSymsp->__Vcoverage[5661]);
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_next_pc 
            = ((0xfffffffffffffdffULL & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_next_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_next_pc 
                                                 >> 9U))))) 
                  << 9U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_next_pc 
                        >> 0xaU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_next_pc 
                                             >> 0xaU))))) {
        ++(vlSymsp->__Vcoverage[5662]);
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_next_pc 
            = ((0xfffffffffffffbffULL & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_next_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_next_pc 
                                                 >> 0xaU))))) 
                  << 0xaU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_next_pc 
                        >> 0xbU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_next_pc 
                                             >> 0xbU))))) {
        ++(vlSymsp->__Vcoverage[5663]);
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_next_pc 
            = ((0xfffffffffffff7ffULL & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_next_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_next_pc 
                                                 >> 0xbU))))) 
                  << 0xbU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_next_pc 
                        >> 0xcU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_next_pc 
                                             >> 0xcU))))) {
        ++(vlSymsp->__Vcoverage[5664]);
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_next_pc 
            = ((0xffffffffffffefffULL & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_next_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_next_pc 
                                                 >> 0xcU))))) 
                  << 0xcU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_next_pc 
                        >> 0xdU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_next_pc 
                                             >> 0xdU))))) {
        ++(vlSymsp->__Vcoverage[5665]);
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_next_pc 
            = ((0xffffffffffffdfffULL & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_next_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_next_pc 
                                                 >> 0xdU))))) 
                  << 0xdU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_next_pc 
                        >> 0xeU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_next_pc 
                                             >> 0xeU))))) {
        ++(vlSymsp->__Vcoverage[5666]);
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_next_pc 
            = ((0xffffffffffffbfffULL & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_next_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_next_pc 
                                                 >> 0xeU))))) 
                  << 0xeU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_next_pc 
                        >> 0xfU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_next_pc 
                                             >> 0xfU))))) {
        ++(vlSymsp->__Vcoverage[5667]);
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_next_pc 
            = ((0xffffffffffff7fffULL & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_next_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_next_pc 
                                                 >> 0xfU))))) 
                  << 0xfU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_next_pc 
                        >> 0x10U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_next_pc 
                                              >> 0x10U))))) {
        ++(vlSymsp->__Vcoverage[5668]);
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_next_pc 
            = ((0xfffffffffffeffffULL & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_next_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_next_pc 
                                                 >> 0x10U))))) 
                  << 0x10U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_next_pc 
                        >> 0x11U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_next_pc 
                                              >> 0x11U))))) {
        ++(vlSymsp->__Vcoverage[5669]);
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_next_pc 
            = ((0xfffffffffffdffffULL & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_next_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_next_pc 
                                                 >> 0x11U))))) 
                  << 0x11U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_next_pc 
                        >> 0x12U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_next_pc 
                                              >> 0x12U))))) {
        ++(vlSymsp->__Vcoverage[5670]);
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_next_pc 
            = ((0xfffffffffffbffffULL & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_next_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_next_pc 
                                                 >> 0x12U))))) 
                  << 0x12U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_next_pc 
                        >> 0x13U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_next_pc 
                                              >> 0x13U))))) {
        ++(vlSymsp->__Vcoverage[5671]);
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_next_pc 
            = ((0xfffffffffff7ffffULL & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_next_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_next_pc 
                                                 >> 0x13U))))) 
                  << 0x13U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_next_pc 
                        >> 0x14U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_next_pc 
                                              >> 0x14U))))) {
        ++(vlSymsp->__Vcoverage[5672]);
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_next_pc 
            = ((0xffffffffffefffffULL & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_next_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_next_pc 
                                                 >> 0x14U))))) 
                  << 0x14U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_next_pc 
                        >> 0x15U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_next_pc 
                                              >> 0x15U))))) {
        ++(vlSymsp->__Vcoverage[5673]);
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_next_pc 
            = ((0xffffffffffdfffffULL & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_next_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_next_pc 
                                                 >> 0x15U))))) 
                  << 0x15U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_next_pc 
                        >> 0x16U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_next_pc 
                                              >> 0x16U))))) {
        ++(vlSymsp->__Vcoverage[5674]);
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_next_pc 
            = ((0xffffffffffbfffffULL & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_next_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_next_pc 
                                                 >> 0x16U))))) 
                  << 0x16U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_next_pc 
                        >> 0x17U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_next_pc 
                                              >> 0x17U))))) {
        ++(vlSymsp->__Vcoverage[5675]);
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_next_pc 
            = ((0xffffffffff7fffffULL & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_next_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_next_pc 
                                                 >> 0x17U))))) 
                  << 0x17U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_next_pc 
                        >> 0x18U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_next_pc 
                                              >> 0x18U))))) {
        ++(vlSymsp->__Vcoverage[5676]);
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_next_pc 
            = ((0xfffffffffeffffffULL & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_next_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_next_pc 
                                                 >> 0x18U))))) 
                  << 0x18U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_next_pc 
                        >> 0x19U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_next_pc 
                                              >> 0x19U))))) {
        ++(vlSymsp->__Vcoverage[5677]);
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_next_pc 
            = ((0xfffffffffdffffffULL & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_next_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_next_pc 
                                                 >> 0x19U))))) 
                  << 0x19U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_next_pc 
                        >> 0x1aU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_next_pc 
                                              >> 0x1aU))))) {
        ++(vlSymsp->__Vcoverage[5678]);
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_next_pc 
            = ((0xfffffffffbffffffULL & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_next_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_next_pc 
                                                 >> 0x1aU))))) 
                  << 0x1aU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_next_pc 
                        >> 0x1bU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_next_pc 
                                              >> 0x1bU))))) {
        ++(vlSymsp->__Vcoverage[5679]);
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_next_pc 
            = ((0xfffffffff7ffffffULL & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_next_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_next_pc 
                                                 >> 0x1bU))))) 
                  << 0x1bU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_next_pc 
                        >> 0x1cU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_next_pc 
                                              >> 0x1cU))))) {
        ++(vlSymsp->__Vcoverage[5680]);
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_next_pc 
            = ((0xffffffffefffffffULL & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_next_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_next_pc 
                                                 >> 0x1cU))))) 
                  << 0x1cU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_next_pc 
                        >> 0x1dU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_next_pc 
                                              >> 0x1dU))))) {
        ++(vlSymsp->__Vcoverage[5681]);
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_next_pc 
            = ((0xffffffffdfffffffULL & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_next_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_next_pc 
                                                 >> 0x1dU))))) 
                  << 0x1dU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_next_pc 
                        >> 0x1eU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_next_pc 
                                              >> 0x1eU))))) {
        ++(vlSymsp->__Vcoverage[5682]);
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_next_pc 
            = ((0xffffffffbfffffffULL & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_next_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_next_pc 
                                                 >> 0x1eU))))) 
                  << 0x1eU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_next_pc 
                        >> 0x1fU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_next_pc 
                                              >> 0x1fU))))) {
        ++(vlSymsp->__Vcoverage[5683]);
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_next_pc 
            = ((0xffffffff7fffffffULL & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_next_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_next_pc 
                                                 >> 0x1fU))))) 
                  << 0x1fU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_next_pc 
                        >> 0x20U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_next_pc 
                                              >> 0x20U))))) {
        ++(vlSymsp->__Vcoverage[5684]);
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_next_pc 
            = ((0xfffffffeffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_next_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_next_pc 
                                                 >> 0x20U))))) 
                  << 0x20U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_next_pc 
                        >> 0x21U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_next_pc 
                                              >> 0x21U))))) {
        ++(vlSymsp->__Vcoverage[5685]);
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_next_pc 
            = ((0xfffffffdffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_next_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_next_pc 
                                                 >> 0x21U))))) 
                  << 0x21U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_next_pc 
                        >> 0x22U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_next_pc 
                                              >> 0x22U))))) {
        ++(vlSymsp->__Vcoverage[5686]);
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_next_pc 
            = ((0xfffffffbffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_next_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_next_pc 
                                                 >> 0x22U))))) 
                  << 0x22U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_next_pc 
                        >> 0x23U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_next_pc 
                                              >> 0x23U))))) {
        ++(vlSymsp->__Vcoverage[5687]);
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_next_pc 
            = ((0xfffffff7ffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_next_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_next_pc 
                                                 >> 0x23U))))) 
                  << 0x23U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_next_pc 
                        >> 0x24U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_next_pc 
                                              >> 0x24U))))) {
        ++(vlSymsp->__Vcoverage[5688]);
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_next_pc 
            = ((0xffffffefffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_next_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_next_pc 
                                                 >> 0x24U))))) 
                  << 0x24U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_next_pc 
                        >> 0x25U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_next_pc 
                                              >> 0x25U))))) {
        ++(vlSymsp->__Vcoverage[5689]);
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_next_pc 
            = ((0xffffffdfffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_next_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_next_pc 
                                                 >> 0x25U))))) 
                  << 0x25U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_next_pc 
                        >> 0x26U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_next_pc 
                                              >> 0x26U))))) {
        ++(vlSymsp->__Vcoverage[5690]);
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_next_pc 
            = ((0xffffffbfffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_next_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_next_pc 
                                                 >> 0x26U))))) 
                  << 0x26U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_next_pc 
                        >> 0x27U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_next_pc 
                                              >> 0x27U))))) {
        ++(vlSymsp->__Vcoverage[5691]);
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_next_pc 
            = ((0xffffff7fffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_next_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_next_pc 
                                                 >> 0x27U))))) 
                  << 0x27U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_next_pc 
                        >> 0x28U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_next_pc 
                                              >> 0x28U))))) {
        ++(vlSymsp->__Vcoverage[5692]);
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_next_pc 
            = ((0xfffffeffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_next_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_next_pc 
                                                 >> 0x28U))))) 
                  << 0x28U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_next_pc 
                        >> 0x29U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_next_pc 
                                              >> 0x29U))))) {
        ++(vlSymsp->__Vcoverage[5693]);
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_next_pc 
            = ((0xfffffdffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_next_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_next_pc 
                                                 >> 0x29U))))) 
                  << 0x29U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_next_pc 
                        >> 0x2aU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_next_pc 
                                              >> 0x2aU))))) {
        ++(vlSymsp->__Vcoverage[5694]);
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_next_pc 
            = ((0xfffffbffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_next_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_next_pc 
                                                 >> 0x2aU))))) 
                  << 0x2aU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_next_pc 
                        >> 0x2bU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_next_pc 
                                              >> 0x2bU))))) {
        ++(vlSymsp->__Vcoverage[5695]);
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_next_pc 
            = ((0xfffff7ffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_next_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_next_pc 
                                                 >> 0x2bU))))) 
                  << 0x2bU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_next_pc 
                        >> 0x2cU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_next_pc 
                                              >> 0x2cU))))) {
        ++(vlSymsp->__Vcoverage[5696]);
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_next_pc 
            = ((0xffffefffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_next_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_next_pc 
                                                 >> 0x2cU))))) 
                  << 0x2cU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_next_pc 
                        >> 0x2dU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_next_pc 
                                              >> 0x2dU))))) {
        ++(vlSymsp->__Vcoverage[5697]);
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_next_pc 
            = ((0xffffdfffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_next_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_next_pc 
                                                 >> 0x2dU))))) 
                  << 0x2dU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_next_pc 
                        >> 0x2eU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_next_pc 
                                              >> 0x2eU))))) {
        ++(vlSymsp->__Vcoverage[5698]);
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_next_pc 
            = ((0xffffbfffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_next_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_next_pc 
                                                 >> 0x2eU))))) 
                  << 0x2eU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_next_pc 
                        >> 0x2fU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_next_pc 
                                              >> 0x2fU))))) {
        ++(vlSymsp->__Vcoverage[5699]);
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_next_pc 
            = ((0xffff7fffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_next_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_next_pc 
                                                 >> 0x2fU))))) 
                  << 0x2fU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_next_pc 
                        >> 0x30U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_next_pc 
                                              >> 0x30U))))) {
        ++(vlSymsp->__Vcoverage[5700]);
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_next_pc 
            = ((0xfffeffffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_next_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_next_pc 
                                                 >> 0x30U))))) 
                  << 0x30U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_next_pc 
                        >> 0x31U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_next_pc 
                                              >> 0x31U))))) {
        ++(vlSymsp->__Vcoverage[5701]);
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_next_pc 
            = ((0xfffdffffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_next_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_next_pc 
                                                 >> 0x31U))))) 
                  << 0x31U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_next_pc 
                        >> 0x32U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_next_pc 
                                              >> 0x32U))))) {
        ++(vlSymsp->__Vcoverage[5702]);
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_next_pc 
            = ((0xfffbffffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_next_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_next_pc 
                                                 >> 0x32U))))) 
                  << 0x32U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_next_pc 
                        >> 0x33U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_next_pc 
                                              >> 0x33U))))) {
        ++(vlSymsp->__Vcoverage[5703]);
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_next_pc 
            = ((0xfff7ffffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_next_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_next_pc 
                                                 >> 0x33U))))) 
                  << 0x33U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_next_pc 
                        >> 0x34U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_next_pc 
                                              >> 0x34U))))) {
        ++(vlSymsp->__Vcoverage[5704]);
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_next_pc 
            = ((0xffefffffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_next_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_next_pc 
                                                 >> 0x34U))))) 
                  << 0x34U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_next_pc 
                        >> 0x35U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_next_pc 
                                              >> 0x35U))))) {
        ++(vlSymsp->__Vcoverage[5705]);
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_next_pc 
            = ((0xffdfffffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_next_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_next_pc 
                                                 >> 0x35U))))) 
                  << 0x35U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_next_pc 
                        >> 0x36U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_next_pc 
                                              >> 0x36U))))) {
        ++(vlSymsp->__Vcoverage[5706]);
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_next_pc 
            = ((0xffbfffffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_next_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_next_pc 
                                                 >> 0x36U))))) 
                  << 0x36U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_next_pc 
                        >> 0x37U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_next_pc 
                                              >> 0x37U))))) {
        ++(vlSymsp->__Vcoverage[5707]);
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_next_pc 
            = ((0xff7fffffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_next_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_next_pc 
                                                 >> 0x37U))))) 
                  << 0x37U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_next_pc 
                        >> 0x38U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_next_pc 
                                              >> 0x38U))))) {
        ++(vlSymsp->__Vcoverage[5708]);
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_next_pc 
            = ((0xfeffffffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_next_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_next_pc 
                                                 >> 0x38U))))) 
                  << 0x38U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_next_pc 
                        >> 0x39U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_next_pc 
                                              >> 0x39U))))) {
        ++(vlSymsp->__Vcoverage[5709]);
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_next_pc 
            = ((0xfdffffffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_next_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_next_pc 
                                                 >> 0x39U))))) 
                  << 0x39U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_next_pc 
                        >> 0x3aU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_next_pc 
                                              >> 0x3aU))))) {
        ++(vlSymsp->__Vcoverage[5710]);
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_next_pc 
            = ((0xfbffffffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_next_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_next_pc 
                                                 >> 0x3aU))))) 
                  << 0x3aU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_next_pc 
                        >> 0x3bU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_next_pc 
                                              >> 0x3bU))))) {
        ++(vlSymsp->__Vcoverage[5711]);
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_next_pc 
            = ((0xf7ffffffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_next_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_next_pc 
                                                 >> 0x3bU))))) 
                  << 0x3bU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_next_pc 
                        >> 0x3cU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_next_pc 
                                              >> 0x3cU))))) {
        ++(vlSymsp->__Vcoverage[5712]);
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_next_pc 
            = ((0xefffffffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_next_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_next_pc 
                                                 >> 0x3cU))))) 
                  << 0x3cU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_next_pc 
                        >> 0x3dU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_next_pc 
                                              >> 0x3dU))))) {
        ++(vlSymsp->__Vcoverage[5713]);
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_next_pc 
            = ((0xdfffffffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_next_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_next_pc 
                                                 >> 0x3dU))))) 
                  << 0x3dU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_next_pc 
                        >> 0x3eU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_next_pc 
                                              >> 0x3eU))))) {
        ++(vlSymsp->__Vcoverage[5714]);
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_next_pc 
            = ((0xbfffffffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_next_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_next_pc 
                                                 >> 0x3eU))))) 
                  << 0x3eU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_next_pc 
                        >> 0x3fU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_next_pc 
                                              >> 0x3fU))))) {
        ++(vlSymsp->__Vcoverage[5715]);
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_next_pc 
            = ((0x7fffffffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_next_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_next_pc 
                                                 >> 0x3fU))))) 
                  << 0x3fU));
    }
    if ((1U & (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_inst 
               ^ vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_inst))) {
        ++(vlSymsp->__Vcoverage[5555]);
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_inst 
            = ((0xfffffffeU & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_inst) 
               | (1U & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_inst));
    }
    if ((2U & (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_inst 
               ^ vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_inst))) {
        ++(vlSymsp->__Vcoverage[5556]);
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_inst 
            = ((0xfffffffdU & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_inst) 
               | (2U & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_inst));
    }
    if ((4U & (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_inst 
               ^ vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_inst))) {
        ++(vlSymsp->__Vcoverage[5557]);
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_inst 
            = ((0xfffffffbU & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_inst) 
               | (4U & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_inst));
    }
    if ((8U & (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_inst 
               ^ vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_inst))) {
        ++(vlSymsp->__Vcoverage[5558]);
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_inst 
            = ((0xfffffff7U & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_inst) 
               | (8U & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_inst));
    }
    if ((0x10U & (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_inst 
                  ^ vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_inst))) {
        ++(vlSymsp->__Vcoverage[5559]);
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_inst 
            = ((0xffffffefU & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_inst) 
               | (0x10U & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_inst));
    }
    if ((0x20U & (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_inst 
                  ^ vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_inst))) {
        ++(vlSymsp->__Vcoverage[5560]);
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_inst 
            = ((0xffffffdfU & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_inst) 
               | (0x20U & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_inst));
    }
    if ((0x40U & (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_inst 
                  ^ vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_inst))) {
        ++(vlSymsp->__Vcoverage[5561]);
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_inst 
            = ((0xffffffbfU & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_inst) 
               | (0x40U & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_inst));
    }
    if ((0x80U & (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_inst 
                  ^ vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_inst))) {
        ++(vlSymsp->__Vcoverage[5562]);
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_inst 
            = ((0xffffff7fU & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_inst) 
               | (0x80U & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_inst));
    }
    if ((0x100U & (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_inst 
                   ^ vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_inst))) {
        ++(vlSymsp->__Vcoverage[5563]);
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_inst 
            = ((0xfffffeffU & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_inst) 
               | (0x100U & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_inst));
    }
    if ((0x200U & (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_inst 
                   ^ vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_inst))) {
        ++(vlSymsp->__Vcoverage[5564]);
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_inst 
            = ((0xfffffdffU & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_inst) 
               | (0x200U & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_inst));
    }
    if ((0x400U & (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_inst 
                   ^ vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_inst))) {
        ++(vlSymsp->__Vcoverage[5565]);
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_inst 
            = ((0xfffffbffU & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_inst) 
               | (0x400U & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_inst));
    }
    if ((0x800U & (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_inst 
                   ^ vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_inst))) {
        ++(vlSymsp->__Vcoverage[5566]);
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_inst 
            = ((0xfffff7ffU & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_inst) 
               | (0x800U & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_inst));
    }
    if ((0x1000U & (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_inst 
                    ^ vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_inst))) {
        ++(vlSymsp->__Vcoverage[5567]);
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_inst 
            = ((0xffffefffU & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_inst) 
               | (0x1000U & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_inst));
    }
    if ((0x2000U & (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_inst 
                    ^ vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_inst))) {
        ++(vlSymsp->__Vcoverage[5568]);
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_inst 
            = ((0xffffdfffU & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_inst) 
               | (0x2000U & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_inst));
    }
    if ((0x4000U & (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_inst 
                    ^ vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_inst))) {
        ++(vlSymsp->__Vcoverage[5569]);
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_inst 
            = ((0xffffbfffU & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_inst) 
               | (0x4000U & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_inst));
    }
    if ((0x8000U & (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_inst 
                    ^ vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_inst))) {
        ++(vlSymsp->__Vcoverage[5570]);
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_inst 
            = ((0xffff7fffU & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_inst) 
               | (0x8000U & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_inst));
    }
    if ((0x10000U & (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_inst 
                     ^ vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_inst))) {
        ++(vlSymsp->__Vcoverage[5571]);
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_inst 
            = ((0xfffeffffU & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_inst) 
               | (0x10000U & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_inst));
    }
    if ((0x20000U & (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_inst 
                     ^ vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_inst))) {
        ++(vlSymsp->__Vcoverage[5572]);
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_inst 
            = ((0xfffdffffU & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_inst) 
               | (0x20000U & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_inst));
    }
    if ((0x40000U & (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_inst 
                     ^ vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_inst))) {
        ++(vlSymsp->__Vcoverage[5573]);
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_inst 
            = ((0xfffbffffU & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_inst) 
               | (0x40000U & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_inst));
    }
    if ((0x80000U & (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_inst 
                     ^ vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_inst))) {
        ++(vlSymsp->__Vcoverage[5574]);
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_inst 
            = ((0xfff7ffffU & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_inst) 
               | (0x80000U & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_inst));
    }
    if ((0x100000U & (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_inst 
                      ^ vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_inst))) {
        ++(vlSymsp->__Vcoverage[5575]);
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_inst 
            = ((0xffefffffU & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_inst) 
               | (0x100000U & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_inst));
    }
    if ((0x200000U & (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_inst 
                      ^ vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_inst))) {
        ++(vlSymsp->__Vcoverage[5576]);
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_inst 
            = ((0xffdfffffU & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_inst) 
               | (0x200000U & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_inst));
    }
    if ((0x400000U & (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_inst 
                      ^ vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_inst))) {
        ++(vlSymsp->__Vcoverage[5577]);
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_inst 
            = ((0xffbfffffU & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_inst) 
               | (0x400000U & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_inst));
    }
    if ((0x800000U & (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_inst 
                      ^ vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_inst))) {
        ++(vlSymsp->__Vcoverage[5578]);
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_inst 
            = ((0xff7fffffU & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_inst) 
               | (0x800000U & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_inst));
    }
    if ((0x1000000U & (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_inst 
                       ^ vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_inst))) {
        ++(vlSymsp->__Vcoverage[5579]);
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_inst 
            = ((0xfeffffffU & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_inst) 
               | (0x1000000U & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_inst));
    }
    if ((0x2000000U & (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_inst 
                       ^ vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_inst))) {
        ++(vlSymsp->__Vcoverage[5580]);
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_inst 
            = ((0xfdffffffU & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_inst) 
               | (0x2000000U & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_inst));
    }
    if ((0x4000000U & (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_inst 
                       ^ vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_inst))) {
        ++(vlSymsp->__Vcoverage[5581]);
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_inst 
            = ((0xfbffffffU & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_inst) 
               | (0x4000000U & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_inst));
    }
    if ((0x8000000U & (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_inst 
                       ^ vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_inst))) {
        ++(vlSymsp->__Vcoverage[5582]);
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_inst 
            = ((0xf7ffffffU & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_inst) 
               | (0x8000000U & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_inst));
    }
    if ((0x10000000U & (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_inst 
                        ^ vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_inst))) {
        ++(vlSymsp->__Vcoverage[5583]);
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_inst 
            = ((0xefffffffU & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_inst) 
               | (0x10000000U & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_inst));
    }
    if ((0x20000000U & (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_inst 
                        ^ vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_inst))) {
        ++(vlSymsp->__Vcoverage[5584]);
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_inst 
            = ((0xdfffffffU & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_inst) 
               | (0x20000000U & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_inst));
    }
    if ((0x40000000U & (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_inst 
                        ^ vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_inst))) {
        ++(vlSymsp->__Vcoverage[5585]);
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_inst 
            = ((0xbfffffffU & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_inst) 
               | (0x40000000U & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_inst));
    }
    if (((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_inst 
          ^ vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_inst) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[5586]);
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_inst 
            = ((0x7fffffffU & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_inst) 
               | (0x80000000U & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_inst));
    }
    if ((1U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_imm) 
               ^ (IData)(vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_imm_data)))) {
        ++(vlSymsp->__Vcoverage[5003]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_imm_data 
            = ((0xfffffffffffffffeULL & vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_imm_data) 
               | (IData)((IData)((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_imm)))));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_imm 
                        >> 1U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_imm_data 
                                           >> 1U))))) {
        ++(vlSymsp->__Vcoverage[5004]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_imm_data 
            = ((0xfffffffffffffffdULL & vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_imm_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_imm 
                                                 >> 1U))))) 
                  << 1U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_imm 
                        >> 2U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_imm_data 
                                           >> 2U))))) {
        ++(vlSymsp->__Vcoverage[5005]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_imm_data 
            = ((0xfffffffffffffffbULL & vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_imm_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_imm 
                                                 >> 2U))))) 
                  << 2U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_imm 
                        >> 3U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_imm_data 
                                           >> 3U))))) {
        ++(vlSymsp->__Vcoverage[5006]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_imm_data 
            = ((0xfffffffffffffff7ULL & vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_imm_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_imm 
                                                 >> 3U))))) 
                  << 3U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_imm 
                        >> 4U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_imm_data 
                                           >> 4U))))) {
        ++(vlSymsp->__Vcoverage[5007]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_imm_data 
            = ((0xffffffffffffffefULL & vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_imm_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_imm 
                                                 >> 4U))))) 
                  << 4U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_imm 
                        >> 5U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_imm_data 
                                           >> 5U))))) {
        ++(vlSymsp->__Vcoverage[5008]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_imm_data 
            = ((0xffffffffffffffdfULL & vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_imm_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_imm 
                                                 >> 5U))))) 
                  << 5U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_imm 
                        >> 6U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_imm_data 
                                           >> 6U))))) {
        ++(vlSymsp->__Vcoverage[5009]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_imm_data 
            = ((0xffffffffffffffbfULL & vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_imm_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_imm 
                                                 >> 6U))))) 
                  << 6U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_imm 
                        >> 7U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_imm_data 
                                           >> 7U))))) {
        ++(vlSymsp->__Vcoverage[5010]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_imm_data 
            = ((0xffffffffffffff7fULL & vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_imm_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_imm 
                                                 >> 7U))))) 
                  << 7U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_imm 
                        >> 8U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_imm_data 
                                           >> 8U))))) {
        ++(vlSymsp->__Vcoverage[5011]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_imm_data 
            = ((0xfffffffffffffeffULL & vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_imm_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_imm 
                                                 >> 8U))))) 
                  << 8U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_imm 
                        >> 9U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_imm_data 
                                           >> 9U))))) {
        ++(vlSymsp->__Vcoverage[5012]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_imm_data 
            = ((0xfffffffffffffdffULL & vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_imm_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_imm 
                                                 >> 9U))))) 
                  << 9U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_imm 
                        >> 0xaU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_imm_data 
                                             >> 0xaU))))) {
        ++(vlSymsp->__Vcoverage[5013]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_imm_data 
            = ((0xfffffffffffffbffULL & vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_imm_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_imm 
                                                 >> 0xaU))))) 
                  << 0xaU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_imm 
                        >> 0xbU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_imm_data 
                                             >> 0xbU))))) {
        ++(vlSymsp->__Vcoverage[5014]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_imm_data 
            = ((0xfffffffffffff7ffULL & vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_imm_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_imm 
                                                 >> 0xbU))))) 
                  << 0xbU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_imm 
                        >> 0xcU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_imm_data 
                                             >> 0xcU))))) {
        ++(vlSymsp->__Vcoverage[5015]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_imm_data 
            = ((0xffffffffffffefffULL & vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_imm_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_imm 
                                                 >> 0xcU))))) 
                  << 0xcU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_imm 
                        >> 0xdU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_imm_data 
                                             >> 0xdU))))) {
        ++(vlSymsp->__Vcoverage[5016]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_imm_data 
            = ((0xffffffffffffdfffULL & vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_imm_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_imm 
                                                 >> 0xdU))))) 
                  << 0xdU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_imm 
                        >> 0xeU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_imm_data 
                                             >> 0xeU))))) {
        ++(vlSymsp->__Vcoverage[5017]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_imm_data 
            = ((0xffffffffffffbfffULL & vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_imm_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_imm 
                                                 >> 0xeU))))) 
                  << 0xeU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_imm 
                        >> 0xfU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_imm_data 
                                             >> 0xfU))))) {
        ++(vlSymsp->__Vcoverage[5018]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_imm_data 
            = ((0xffffffffffff7fffULL & vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_imm_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_imm 
                                                 >> 0xfU))))) 
                  << 0xfU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_imm 
                        >> 0x10U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_imm_data 
                                              >> 0x10U))))) {
        ++(vlSymsp->__Vcoverage[5019]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_imm_data 
            = ((0xfffffffffffeffffULL & vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_imm_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_imm 
                                                 >> 0x10U))))) 
                  << 0x10U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_imm 
                        >> 0x11U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_imm_data 
                                              >> 0x11U))))) {
        ++(vlSymsp->__Vcoverage[5020]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_imm_data 
            = ((0xfffffffffffdffffULL & vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_imm_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_imm 
                                                 >> 0x11U))))) 
                  << 0x11U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_imm 
                        >> 0x12U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_imm_data 
                                              >> 0x12U))))) {
        ++(vlSymsp->__Vcoverage[5021]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_imm_data 
            = ((0xfffffffffffbffffULL & vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_imm_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_imm 
                                                 >> 0x12U))))) 
                  << 0x12U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_imm 
                        >> 0x13U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_imm_data 
                                              >> 0x13U))))) {
        ++(vlSymsp->__Vcoverage[5022]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_imm_data 
            = ((0xfffffffffff7ffffULL & vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_imm_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_imm 
                                                 >> 0x13U))))) 
                  << 0x13U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_imm 
                        >> 0x14U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_imm_data 
                                              >> 0x14U))))) {
        ++(vlSymsp->__Vcoverage[5023]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_imm_data 
            = ((0xffffffffffefffffULL & vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_imm_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_imm 
                                                 >> 0x14U))))) 
                  << 0x14U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_imm 
                        >> 0x15U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_imm_data 
                                              >> 0x15U))))) {
        ++(vlSymsp->__Vcoverage[5024]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_imm_data 
            = ((0xffffffffffdfffffULL & vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_imm_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_imm 
                                                 >> 0x15U))))) 
                  << 0x15U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_imm 
                        >> 0x16U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_imm_data 
                                              >> 0x16U))))) {
        ++(vlSymsp->__Vcoverage[5025]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_imm_data 
            = ((0xffffffffffbfffffULL & vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_imm_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_imm 
                                                 >> 0x16U))))) 
                  << 0x16U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_imm 
                        >> 0x17U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_imm_data 
                                              >> 0x17U))))) {
        ++(vlSymsp->__Vcoverage[5026]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_imm_data 
            = ((0xffffffffff7fffffULL & vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_imm_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_imm 
                                                 >> 0x17U))))) 
                  << 0x17U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_imm 
                        >> 0x18U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_imm_data 
                                              >> 0x18U))))) {
        ++(vlSymsp->__Vcoverage[5027]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_imm_data 
            = ((0xfffffffffeffffffULL & vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_imm_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_imm 
                                                 >> 0x18U))))) 
                  << 0x18U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_imm 
                        >> 0x19U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_imm_data 
                                              >> 0x19U))))) {
        ++(vlSymsp->__Vcoverage[5028]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_imm_data 
            = ((0xfffffffffdffffffULL & vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_imm_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_imm 
                                                 >> 0x19U))))) 
                  << 0x19U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_imm 
                        >> 0x1aU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_imm_data 
                                              >> 0x1aU))))) {
        ++(vlSymsp->__Vcoverage[5029]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_imm_data 
            = ((0xfffffffffbffffffULL & vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_imm_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_imm 
                                                 >> 0x1aU))))) 
                  << 0x1aU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_imm 
                        >> 0x1bU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_imm_data 
                                              >> 0x1bU))))) {
        ++(vlSymsp->__Vcoverage[5030]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_imm_data 
            = ((0xfffffffff7ffffffULL & vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_imm_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_imm 
                                                 >> 0x1bU))))) 
                  << 0x1bU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_imm 
                        >> 0x1cU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_imm_data 
                                              >> 0x1cU))))) {
        ++(vlSymsp->__Vcoverage[5031]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_imm_data 
            = ((0xffffffffefffffffULL & vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_imm_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_imm 
                                                 >> 0x1cU))))) 
                  << 0x1cU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_imm 
                        >> 0x1dU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_imm_data 
                                              >> 0x1dU))))) {
        ++(vlSymsp->__Vcoverage[5032]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_imm_data 
            = ((0xffffffffdfffffffULL & vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_imm_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_imm 
                                                 >> 0x1dU))))) 
                  << 0x1dU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_imm 
                        >> 0x1eU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_imm_data 
                                              >> 0x1eU))))) {
        ++(vlSymsp->__Vcoverage[5033]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_imm_data 
            = ((0xffffffffbfffffffULL & vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_imm_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_imm 
                                                 >> 0x1eU))))) 
                  << 0x1eU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_imm 
                        >> 0x1fU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_imm_data 
                                              >> 0x1fU))))) {
        ++(vlSymsp->__Vcoverage[5034]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_imm_data 
            = ((0xffffffff7fffffffULL & vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_imm_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_imm 
                                                 >> 0x1fU))))) 
                  << 0x1fU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_imm 
                        >> 0x20U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_imm_data 
                                              >> 0x20U))))) {
        ++(vlSymsp->__Vcoverage[5035]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_imm_data 
            = ((0xfffffffeffffffffULL & vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_imm_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_imm 
                                                 >> 0x20U))))) 
                  << 0x20U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_imm 
                        >> 0x21U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_imm_data 
                                              >> 0x21U))))) {
        ++(vlSymsp->__Vcoverage[5036]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_imm_data 
            = ((0xfffffffdffffffffULL & vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_imm_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_imm 
                                                 >> 0x21U))))) 
                  << 0x21U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_imm 
                        >> 0x22U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_imm_data 
                                              >> 0x22U))))) {
        ++(vlSymsp->__Vcoverage[5037]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_imm_data 
            = ((0xfffffffbffffffffULL & vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_imm_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_imm 
                                                 >> 0x22U))))) 
                  << 0x22U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_imm 
                        >> 0x23U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_imm_data 
                                              >> 0x23U))))) {
        ++(vlSymsp->__Vcoverage[5038]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_imm_data 
            = ((0xfffffff7ffffffffULL & vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_imm_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_imm 
                                                 >> 0x23U))))) 
                  << 0x23U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_imm 
                        >> 0x24U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_imm_data 
                                              >> 0x24U))))) {
        ++(vlSymsp->__Vcoverage[5039]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_imm_data 
            = ((0xffffffefffffffffULL & vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_imm_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_imm 
                                                 >> 0x24U))))) 
                  << 0x24U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_imm 
                        >> 0x25U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_imm_data 
                                              >> 0x25U))))) {
        ++(vlSymsp->__Vcoverage[5040]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_imm_data 
            = ((0xffffffdfffffffffULL & vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_imm_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_imm 
                                                 >> 0x25U))))) 
                  << 0x25U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_imm 
                        >> 0x26U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_imm_data 
                                              >> 0x26U))))) {
        ++(vlSymsp->__Vcoverage[5041]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_imm_data 
            = ((0xffffffbfffffffffULL & vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_imm_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_imm 
                                                 >> 0x26U))))) 
                  << 0x26U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_imm 
                        >> 0x27U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_imm_data 
                                              >> 0x27U))))) {
        ++(vlSymsp->__Vcoverage[5042]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_imm_data 
            = ((0xffffff7fffffffffULL & vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_imm_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_imm 
                                                 >> 0x27U))))) 
                  << 0x27U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_imm 
                        >> 0x28U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_imm_data 
                                              >> 0x28U))))) {
        ++(vlSymsp->__Vcoverage[5043]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_imm_data 
            = ((0xfffffeffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_imm_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_imm 
                                                 >> 0x28U))))) 
                  << 0x28U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_imm 
                        >> 0x29U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_imm_data 
                                              >> 0x29U))))) {
        ++(vlSymsp->__Vcoverage[5044]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_imm_data 
            = ((0xfffffdffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_imm_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_imm 
                                                 >> 0x29U))))) 
                  << 0x29U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_imm 
                        >> 0x2aU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_imm_data 
                                              >> 0x2aU))))) {
        ++(vlSymsp->__Vcoverage[5045]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_imm_data 
            = ((0xfffffbffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_imm_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_imm 
                                                 >> 0x2aU))))) 
                  << 0x2aU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_imm 
                        >> 0x2bU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_imm_data 
                                              >> 0x2bU))))) {
        ++(vlSymsp->__Vcoverage[5046]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_imm_data 
            = ((0xfffff7ffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_imm_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_imm 
                                                 >> 0x2bU))))) 
                  << 0x2bU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_imm 
                        >> 0x2cU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_imm_data 
                                              >> 0x2cU))))) {
        ++(vlSymsp->__Vcoverage[5047]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_imm_data 
            = ((0xffffefffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_imm_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_imm 
                                                 >> 0x2cU))))) 
                  << 0x2cU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_imm 
                        >> 0x2dU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_imm_data 
                                              >> 0x2dU))))) {
        ++(vlSymsp->__Vcoverage[5048]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_imm_data 
            = ((0xffffdfffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_imm_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_imm 
                                                 >> 0x2dU))))) 
                  << 0x2dU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_imm 
                        >> 0x2eU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_imm_data 
                                              >> 0x2eU))))) {
        ++(vlSymsp->__Vcoverage[5049]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_imm_data 
            = ((0xffffbfffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_imm_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_imm 
                                                 >> 0x2eU))))) 
                  << 0x2eU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_imm 
                        >> 0x2fU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_imm_data 
                                              >> 0x2fU))))) {
        ++(vlSymsp->__Vcoverage[5050]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_imm_data 
            = ((0xffff7fffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_imm_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_imm 
                                                 >> 0x2fU))))) 
                  << 0x2fU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_imm 
                        >> 0x30U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_imm_data 
                                              >> 0x30U))))) {
        ++(vlSymsp->__Vcoverage[5051]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_imm_data 
            = ((0xfffeffffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_imm_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_imm 
                                                 >> 0x30U))))) 
                  << 0x30U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_imm 
                        >> 0x31U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_imm_data 
                                              >> 0x31U))))) {
        ++(vlSymsp->__Vcoverage[5052]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_imm_data 
            = ((0xfffdffffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_imm_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_imm 
                                                 >> 0x31U))))) 
                  << 0x31U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_imm 
                        >> 0x32U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_imm_data 
                                              >> 0x32U))))) {
        ++(vlSymsp->__Vcoverage[5053]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_imm_data 
            = ((0xfffbffffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_imm_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_imm 
                                                 >> 0x32U))))) 
                  << 0x32U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_imm 
                        >> 0x33U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_imm_data 
                                              >> 0x33U))))) {
        ++(vlSymsp->__Vcoverage[5054]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_imm_data 
            = ((0xfff7ffffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_imm_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_imm 
                                                 >> 0x33U))))) 
                  << 0x33U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_imm 
                        >> 0x34U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_imm_data 
                                              >> 0x34U))))) {
        ++(vlSymsp->__Vcoverage[5055]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_imm_data 
            = ((0xffefffffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_imm_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_imm 
                                                 >> 0x34U))))) 
                  << 0x34U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_imm 
                        >> 0x35U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_imm_data 
                                              >> 0x35U))))) {
        ++(vlSymsp->__Vcoverage[5056]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_imm_data 
            = ((0xffdfffffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_imm_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_imm 
                                                 >> 0x35U))))) 
                  << 0x35U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_imm 
                        >> 0x36U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_imm_data 
                                              >> 0x36U))))) {
        ++(vlSymsp->__Vcoverage[5057]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_imm_data 
            = ((0xffbfffffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_imm_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_imm 
                                                 >> 0x36U))))) 
                  << 0x36U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_imm 
                        >> 0x37U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_imm_data 
                                              >> 0x37U))))) {
        ++(vlSymsp->__Vcoverage[5058]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_imm_data 
            = ((0xff7fffffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_imm_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_imm 
                                                 >> 0x37U))))) 
                  << 0x37U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_imm 
                        >> 0x38U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_imm_data 
                                              >> 0x38U))))) {
        ++(vlSymsp->__Vcoverage[5059]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_imm_data 
            = ((0xfeffffffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_imm_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_imm 
                                                 >> 0x38U))))) 
                  << 0x38U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_imm 
                        >> 0x39U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_imm_data 
                                              >> 0x39U))))) {
        ++(vlSymsp->__Vcoverage[5060]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_imm_data 
            = ((0xfdffffffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_imm_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_imm 
                                                 >> 0x39U))))) 
                  << 0x39U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_imm 
                        >> 0x3aU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_imm_data 
                                              >> 0x3aU))))) {
        ++(vlSymsp->__Vcoverage[5061]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_imm_data 
            = ((0xfbffffffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_imm_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_imm 
                                                 >> 0x3aU))))) 
                  << 0x3aU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_imm 
                        >> 0x3bU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_imm_data 
                                              >> 0x3bU))))) {
        ++(vlSymsp->__Vcoverage[5062]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_imm_data 
            = ((0xf7ffffffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_imm_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_imm 
                                                 >> 0x3bU))))) 
                  << 0x3bU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_imm 
                        >> 0x3cU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_imm_data 
                                              >> 0x3cU))))) {
        ++(vlSymsp->__Vcoverage[5063]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_imm_data 
            = ((0xefffffffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_imm_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_imm 
                                                 >> 0x3cU))))) 
                  << 0x3cU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_imm 
                        >> 0x3dU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_imm_data 
                                              >> 0x3dU))))) {
        ++(vlSymsp->__Vcoverage[5064]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_imm_data 
            = ((0xdfffffffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_imm_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_imm 
                                                 >> 0x3dU))))) 
                  << 0x3dU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_imm 
                        >> 0x3eU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_imm_data 
                                              >> 0x3eU))))) {
        ++(vlSymsp->__Vcoverage[5065]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_imm_data 
            = ((0xbfffffffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_imm_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_imm 
                                                 >> 0x3eU))))) 
                  << 0x3eU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_imm 
                        >> 0x3fU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_imm_data 
                                              >> 0x3fU))))) {
        ++(vlSymsp->__Vcoverage[5066]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_imm_data 
            = ((0x7fffffffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_imm_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_imm 
                                                 >> 0x3fU))))) 
                  << 0x3fU));
    }
    if ((1U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
               ^ (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__reg_exuType)))) {
        ++(vlSymsp->__Vcoverage[6851]);
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__reg_exuType 
            = ((0x3eU & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__reg_exuType)) 
               | (1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType)));
    }
    if ((2U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
               ^ (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__reg_exuType)))) {
        ++(vlSymsp->__Vcoverage[6852]);
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__reg_exuType 
            = ((0x3dU & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__reg_exuType)) 
               | (2U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType)));
    }
    if ((4U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
               ^ (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__reg_exuType)))) {
        ++(vlSymsp->__Vcoverage[6853]);
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__reg_exuType 
            = ((0x3bU & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__reg_exuType)) 
               | (4U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType)));
    }
    if ((8U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
               ^ (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__reg_exuType)))) {
        ++(vlSymsp->__Vcoverage[6854]);
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__reg_exuType 
            = ((0x37U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__reg_exuType)) 
               | (8U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType)));
    }
    if ((0x10U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                  ^ (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__reg_exuType)))) {
        ++(vlSymsp->__Vcoverage[6855]);
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__reg_exuType 
            = ((0x2fU & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__reg_exuType)) 
               | (0x10U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType)));
    }
    if ((0x20U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                  ^ (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__reg_exuType)))) {
        ++(vlSymsp->__Vcoverage[6856]);
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__reg_exuType 
            = ((0x1fU & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__reg_exuType)) 
               | (0x20U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType)));
    }
    if ((1U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs1_data) 
               ^ (IData)(vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs1_data)))) {
        ++(vlSymsp->__Vcoverage[4870]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs1_data 
            = ((0xfffffffffffffffeULL & vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs1_data) 
               | (IData)((IData)((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs1_data)))));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs1_data 
                        >> 1U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs1_data 
                                           >> 1U))))) {
        ++(vlSymsp->__Vcoverage[4871]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs1_data 
            = ((0xfffffffffffffffdULL & vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs1_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs1_data 
                                                 >> 1U))))) 
                  << 1U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs1_data 
                        >> 2U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs1_data 
                                           >> 2U))))) {
        ++(vlSymsp->__Vcoverage[4872]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs1_data 
            = ((0xfffffffffffffffbULL & vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs1_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs1_data 
                                                 >> 2U))))) 
                  << 2U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs1_data 
                        >> 3U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs1_data 
                                           >> 3U))))) {
        ++(vlSymsp->__Vcoverage[4873]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs1_data 
            = ((0xfffffffffffffff7ULL & vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs1_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs1_data 
                                                 >> 3U))))) 
                  << 3U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs1_data 
                        >> 4U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs1_data 
                                           >> 4U))))) {
        ++(vlSymsp->__Vcoverage[4874]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs1_data 
            = ((0xffffffffffffffefULL & vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs1_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs1_data 
                                                 >> 4U))))) 
                  << 4U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs1_data 
                        >> 5U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs1_data 
                                           >> 5U))))) {
        ++(vlSymsp->__Vcoverage[4875]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs1_data 
            = ((0xffffffffffffffdfULL & vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs1_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs1_data 
                                                 >> 5U))))) 
                  << 5U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs1_data 
                        >> 6U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs1_data 
                                           >> 6U))))) {
        ++(vlSymsp->__Vcoverage[4876]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs1_data 
            = ((0xffffffffffffffbfULL & vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs1_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs1_data 
                                                 >> 6U))))) 
                  << 6U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs1_data 
                        >> 7U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs1_data 
                                           >> 7U))))) {
        ++(vlSymsp->__Vcoverage[4877]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs1_data 
            = ((0xffffffffffffff7fULL & vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs1_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs1_data 
                                                 >> 7U))))) 
                  << 7U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs1_data 
                        >> 8U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs1_data 
                                           >> 8U))))) {
        ++(vlSymsp->__Vcoverage[4878]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs1_data 
            = ((0xfffffffffffffeffULL & vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs1_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs1_data 
                                                 >> 8U))))) 
                  << 8U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs1_data 
                        >> 9U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs1_data 
                                           >> 9U))))) {
        ++(vlSymsp->__Vcoverage[4879]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs1_data 
            = ((0xfffffffffffffdffULL & vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs1_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs1_data 
                                                 >> 9U))))) 
                  << 9U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs1_data 
                        >> 0xaU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs1_data 
                                             >> 0xaU))))) {
        ++(vlSymsp->__Vcoverage[4880]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs1_data 
            = ((0xfffffffffffffbffULL & vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs1_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs1_data 
                                                 >> 0xaU))))) 
                  << 0xaU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs1_data 
                        >> 0xbU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs1_data 
                                             >> 0xbU))))) {
        ++(vlSymsp->__Vcoverage[4881]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs1_data 
            = ((0xfffffffffffff7ffULL & vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs1_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs1_data 
                                                 >> 0xbU))))) 
                  << 0xbU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs1_data 
                        >> 0xcU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs1_data 
                                             >> 0xcU))))) {
        ++(vlSymsp->__Vcoverage[4882]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs1_data 
            = ((0xffffffffffffefffULL & vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs1_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs1_data 
                                                 >> 0xcU))))) 
                  << 0xcU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs1_data 
                        >> 0xdU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs1_data 
                                             >> 0xdU))))) {
        ++(vlSymsp->__Vcoverage[4883]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs1_data 
            = ((0xffffffffffffdfffULL & vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs1_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs1_data 
                                                 >> 0xdU))))) 
                  << 0xdU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs1_data 
                        >> 0xeU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs1_data 
                                             >> 0xeU))))) {
        ++(vlSymsp->__Vcoverage[4884]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs1_data 
            = ((0xffffffffffffbfffULL & vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs1_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs1_data 
                                                 >> 0xeU))))) 
                  << 0xeU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs1_data 
                        >> 0xfU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs1_data 
                                             >> 0xfU))))) {
        ++(vlSymsp->__Vcoverage[4885]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs1_data 
            = ((0xffffffffffff7fffULL & vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs1_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs1_data 
                                                 >> 0xfU))))) 
                  << 0xfU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs1_data 
                        >> 0x10U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs1_data 
                                              >> 0x10U))))) {
        ++(vlSymsp->__Vcoverage[4886]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs1_data 
            = ((0xfffffffffffeffffULL & vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs1_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs1_data 
                                                 >> 0x10U))))) 
                  << 0x10U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs1_data 
                        >> 0x11U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs1_data 
                                              >> 0x11U))))) {
        ++(vlSymsp->__Vcoverage[4887]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs1_data 
            = ((0xfffffffffffdffffULL & vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs1_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs1_data 
                                                 >> 0x11U))))) 
                  << 0x11U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs1_data 
                        >> 0x12U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs1_data 
                                              >> 0x12U))))) {
        ++(vlSymsp->__Vcoverage[4888]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs1_data 
            = ((0xfffffffffffbffffULL & vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs1_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs1_data 
                                                 >> 0x12U))))) 
                  << 0x12U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs1_data 
                        >> 0x13U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs1_data 
                                              >> 0x13U))))) {
        ++(vlSymsp->__Vcoverage[4889]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs1_data 
            = ((0xfffffffffff7ffffULL & vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs1_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs1_data 
                                                 >> 0x13U))))) 
                  << 0x13U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs1_data 
                        >> 0x14U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs1_data 
                                              >> 0x14U))))) {
        ++(vlSymsp->__Vcoverage[4890]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs1_data 
            = ((0xffffffffffefffffULL & vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs1_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs1_data 
                                                 >> 0x14U))))) 
                  << 0x14U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs1_data 
                        >> 0x15U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs1_data 
                                              >> 0x15U))))) {
        ++(vlSymsp->__Vcoverage[4891]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs1_data 
            = ((0xffffffffffdfffffULL & vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs1_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs1_data 
                                                 >> 0x15U))))) 
                  << 0x15U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs1_data 
                        >> 0x16U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs1_data 
                                              >> 0x16U))))) {
        ++(vlSymsp->__Vcoverage[4892]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs1_data 
            = ((0xffffffffffbfffffULL & vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs1_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs1_data 
                                                 >> 0x16U))))) 
                  << 0x16U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs1_data 
                        >> 0x17U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs1_data 
                                              >> 0x17U))))) {
        ++(vlSymsp->__Vcoverage[4893]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs1_data 
            = ((0xffffffffff7fffffULL & vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs1_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs1_data 
                                                 >> 0x17U))))) 
                  << 0x17U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs1_data 
                        >> 0x18U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs1_data 
                                              >> 0x18U))))) {
        ++(vlSymsp->__Vcoverage[4894]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs1_data 
            = ((0xfffffffffeffffffULL & vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs1_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs1_data 
                                                 >> 0x18U))))) 
                  << 0x18U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs1_data 
                        >> 0x19U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs1_data 
                                              >> 0x19U))))) {
        ++(vlSymsp->__Vcoverage[4895]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs1_data 
            = ((0xfffffffffdffffffULL & vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs1_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs1_data 
                                                 >> 0x19U))))) 
                  << 0x19U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs1_data 
                        >> 0x1aU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs1_data 
                                              >> 0x1aU))))) {
        ++(vlSymsp->__Vcoverage[4896]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs1_data 
            = ((0xfffffffffbffffffULL & vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs1_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs1_data 
                                                 >> 0x1aU))))) 
                  << 0x1aU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs1_data 
                        >> 0x1bU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs1_data 
                                              >> 0x1bU))))) {
        ++(vlSymsp->__Vcoverage[4897]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs1_data 
            = ((0xfffffffff7ffffffULL & vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs1_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs1_data 
                                                 >> 0x1bU))))) 
                  << 0x1bU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs1_data 
                        >> 0x1cU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs1_data 
                                              >> 0x1cU))))) {
        ++(vlSymsp->__Vcoverage[4898]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs1_data 
            = ((0xffffffffefffffffULL & vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs1_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs1_data 
                                                 >> 0x1cU))))) 
                  << 0x1cU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs1_data 
                        >> 0x1dU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs1_data 
                                              >> 0x1dU))))) {
        ++(vlSymsp->__Vcoverage[4899]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs1_data 
            = ((0xffffffffdfffffffULL & vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs1_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs1_data 
                                                 >> 0x1dU))))) 
                  << 0x1dU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs1_data 
                        >> 0x1eU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs1_data 
                                              >> 0x1eU))))) {
        ++(vlSymsp->__Vcoverage[4900]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs1_data 
            = ((0xffffffffbfffffffULL & vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs1_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs1_data 
                                                 >> 0x1eU))))) 
                  << 0x1eU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs1_data 
                        >> 0x1fU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs1_data 
                                              >> 0x1fU))))) {
        ++(vlSymsp->__Vcoverage[4901]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs1_data 
            = ((0xffffffff7fffffffULL & vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs1_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs1_data 
                                                 >> 0x1fU))))) 
                  << 0x1fU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs1_data 
                        >> 0x20U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs1_data 
                                              >> 0x20U))))) {
        ++(vlSymsp->__Vcoverage[4902]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs1_data 
            = ((0xfffffffeffffffffULL & vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs1_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs1_data 
                                                 >> 0x20U))))) 
                  << 0x20U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs1_data 
                        >> 0x21U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs1_data 
                                              >> 0x21U))))) {
        ++(vlSymsp->__Vcoverage[4903]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs1_data 
            = ((0xfffffffdffffffffULL & vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs1_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs1_data 
                                                 >> 0x21U))))) 
                  << 0x21U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs1_data 
                        >> 0x22U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs1_data 
                                              >> 0x22U))))) {
        ++(vlSymsp->__Vcoverage[4904]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs1_data 
            = ((0xfffffffbffffffffULL & vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs1_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs1_data 
                                                 >> 0x22U))))) 
                  << 0x22U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs1_data 
                        >> 0x23U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs1_data 
                                              >> 0x23U))))) {
        ++(vlSymsp->__Vcoverage[4905]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs1_data 
            = ((0xfffffff7ffffffffULL & vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs1_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs1_data 
                                                 >> 0x23U))))) 
                  << 0x23U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs1_data 
                        >> 0x24U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs1_data 
                                              >> 0x24U))))) {
        ++(vlSymsp->__Vcoverage[4906]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs1_data 
            = ((0xffffffefffffffffULL & vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs1_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs1_data 
                                                 >> 0x24U))))) 
                  << 0x24U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs1_data 
                        >> 0x25U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs1_data 
                                              >> 0x25U))))) {
        ++(vlSymsp->__Vcoverage[4907]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs1_data 
            = ((0xffffffdfffffffffULL & vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs1_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs1_data 
                                                 >> 0x25U))))) 
                  << 0x25U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs1_data 
                        >> 0x26U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs1_data 
                                              >> 0x26U))))) {
        ++(vlSymsp->__Vcoverage[4908]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs1_data 
            = ((0xffffffbfffffffffULL & vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs1_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs1_data 
                                                 >> 0x26U))))) 
                  << 0x26U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs1_data 
                        >> 0x27U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs1_data 
                                              >> 0x27U))))) {
        ++(vlSymsp->__Vcoverage[4909]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs1_data 
            = ((0xffffff7fffffffffULL & vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs1_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs1_data 
                                                 >> 0x27U))))) 
                  << 0x27U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs1_data 
                        >> 0x28U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs1_data 
                                              >> 0x28U))))) {
        ++(vlSymsp->__Vcoverage[4910]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs1_data 
            = ((0xfffffeffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs1_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs1_data 
                                                 >> 0x28U))))) 
                  << 0x28U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs1_data 
                        >> 0x29U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs1_data 
                                              >> 0x29U))))) {
        ++(vlSymsp->__Vcoverage[4911]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs1_data 
            = ((0xfffffdffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs1_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs1_data 
                                                 >> 0x29U))))) 
                  << 0x29U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs1_data 
                        >> 0x2aU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs1_data 
                                              >> 0x2aU))))) {
        ++(vlSymsp->__Vcoverage[4912]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs1_data 
            = ((0xfffffbffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs1_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs1_data 
                                                 >> 0x2aU))))) 
                  << 0x2aU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs1_data 
                        >> 0x2bU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs1_data 
                                              >> 0x2bU))))) {
        ++(vlSymsp->__Vcoverage[4913]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs1_data 
            = ((0xfffff7ffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs1_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs1_data 
                                                 >> 0x2bU))))) 
                  << 0x2bU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs1_data 
                        >> 0x2cU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs1_data 
                                              >> 0x2cU))))) {
        ++(vlSymsp->__Vcoverage[4914]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs1_data 
            = ((0xffffefffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs1_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs1_data 
                                                 >> 0x2cU))))) 
                  << 0x2cU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs1_data 
                        >> 0x2dU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs1_data 
                                              >> 0x2dU))))) {
        ++(vlSymsp->__Vcoverage[4915]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs1_data 
            = ((0xffffdfffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs1_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs1_data 
                                                 >> 0x2dU))))) 
                  << 0x2dU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs1_data 
                        >> 0x2eU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs1_data 
                                              >> 0x2eU))))) {
        ++(vlSymsp->__Vcoverage[4916]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs1_data 
            = ((0xffffbfffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs1_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs1_data 
                                                 >> 0x2eU))))) 
                  << 0x2eU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs1_data 
                        >> 0x2fU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs1_data 
                                              >> 0x2fU))))) {
        ++(vlSymsp->__Vcoverage[4917]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs1_data 
            = ((0xffff7fffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs1_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs1_data 
                                                 >> 0x2fU))))) 
                  << 0x2fU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs1_data 
                        >> 0x30U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs1_data 
                                              >> 0x30U))))) {
        ++(vlSymsp->__Vcoverage[4918]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs1_data 
            = ((0xfffeffffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs1_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs1_data 
                                                 >> 0x30U))))) 
                  << 0x30U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs1_data 
                        >> 0x31U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs1_data 
                                              >> 0x31U))))) {
        ++(vlSymsp->__Vcoverage[4919]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs1_data 
            = ((0xfffdffffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs1_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs1_data 
                                                 >> 0x31U))))) 
                  << 0x31U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs1_data 
                        >> 0x32U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs1_data 
                                              >> 0x32U))))) {
        ++(vlSymsp->__Vcoverage[4920]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs1_data 
            = ((0xfffbffffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs1_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs1_data 
                                                 >> 0x32U))))) 
                  << 0x32U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs1_data 
                        >> 0x33U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs1_data 
                                              >> 0x33U))))) {
        ++(vlSymsp->__Vcoverage[4921]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs1_data 
            = ((0xfff7ffffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs1_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs1_data 
                                                 >> 0x33U))))) 
                  << 0x33U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs1_data 
                        >> 0x34U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs1_data 
                                              >> 0x34U))))) {
        ++(vlSymsp->__Vcoverage[4922]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs1_data 
            = ((0xffefffffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs1_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs1_data 
                                                 >> 0x34U))))) 
                  << 0x34U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs1_data 
                        >> 0x35U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs1_data 
                                              >> 0x35U))))) {
        ++(vlSymsp->__Vcoverage[4923]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs1_data 
            = ((0xffdfffffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs1_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs1_data 
                                                 >> 0x35U))))) 
                  << 0x35U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs1_data 
                        >> 0x36U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs1_data 
                                              >> 0x36U))))) {
        ++(vlSymsp->__Vcoverage[4924]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs1_data 
            = ((0xffbfffffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs1_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs1_data 
                                                 >> 0x36U))))) 
                  << 0x36U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs1_data 
                        >> 0x37U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs1_data 
                                              >> 0x37U))))) {
        ++(vlSymsp->__Vcoverage[4925]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs1_data 
            = ((0xff7fffffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs1_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs1_data 
                                                 >> 0x37U))))) 
                  << 0x37U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs1_data 
                        >> 0x38U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs1_data 
                                              >> 0x38U))))) {
        ++(vlSymsp->__Vcoverage[4926]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs1_data 
            = ((0xfeffffffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs1_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs1_data 
                                                 >> 0x38U))))) 
                  << 0x38U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs1_data 
                        >> 0x39U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs1_data 
                                              >> 0x39U))))) {
        ++(vlSymsp->__Vcoverage[4927]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs1_data 
            = ((0xfdffffffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs1_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs1_data 
                                                 >> 0x39U))))) 
                  << 0x39U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs1_data 
                        >> 0x3aU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs1_data 
                                              >> 0x3aU))))) {
        ++(vlSymsp->__Vcoverage[4928]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs1_data 
            = ((0xfbffffffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs1_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs1_data 
                                                 >> 0x3aU))))) 
                  << 0x3aU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs1_data 
                        >> 0x3bU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs1_data 
                                              >> 0x3bU))))) {
        ++(vlSymsp->__Vcoverage[4929]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs1_data 
            = ((0xf7ffffffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs1_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs1_data 
                                                 >> 0x3bU))))) 
                  << 0x3bU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs1_data 
                        >> 0x3cU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs1_data 
                                              >> 0x3cU))))) {
        ++(vlSymsp->__Vcoverage[4930]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs1_data 
            = ((0xefffffffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs1_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs1_data 
                                                 >> 0x3cU))))) 
                  << 0x3cU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs1_data 
                        >> 0x3dU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs1_data 
                                              >> 0x3dU))))) {
        ++(vlSymsp->__Vcoverage[4931]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs1_data 
            = ((0xdfffffffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs1_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs1_data 
                                                 >> 0x3dU))))) 
                  << 0x3dU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs1_data 
                        >> 0x3eU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs1_data 
                                              >> 0x3eU))))) {
        ++(vlSymsp->__Vcoverage[4932]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs1_data 
            = ((0xbfffffffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs1_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs1_data 
                                                 >> 0x3eU))))) 
                  << 0x3eU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs1_data 
                        >> 0x3fU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs1_data 
                                              >> 0x3fU))))) {
        ++(vlSymsp->__Vcoverage[4933]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs1_data 
            = ((0x7fffffffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs1_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs1_data 
                                                 >> 0x3fU))))) 
                  << 0x3fU));
    }
    if ((1U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs2_data) 
               ^ (IData)(vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs2_data)))) {
        ++(vlSymsp->__Vcoverage[4939]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs2_data 
            = ((0xfffffffffffffffeULL & vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs2_data) 
               | (IData)((IData)((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs2_data)))));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs2_data 
                        >> 1U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs2_data 
                                           >> 1U))))) {
        ++(vlSymsp->__Vcoverage[4940]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs2_data 
            = ((0xfffffffffffffffdULL & vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs2_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs2_data 
                                                 >> 1U))))) 
                  << 1U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs2_data 
                        >> 2U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs2_data 
                                           >> 2U))))) {
        ++(vlSymsp->__Vcoverage[4941]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs2_data 
            = ((0xfffffffffffffffbULL & vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs2_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs2_data 
                                                 >> 2U))))) 
                  << 2U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs2_data 
                        >> 3U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs2_data 
                                           >> 3U))))) {
        ++(vlSymsp->__Vcoverage[4942]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs2_data 
            = ((0xfffffffffffffff7ULL & vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs2_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs2_data 
                                                 >> 3U))))) 
                  << 3U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs2_data 
                        >> 4U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs2_data 
                                           >> 4U))))) {
        ++(vlSymsp->__Vcoverage[4943]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs2_data 
            = ((0xffffffffffffffefULL & vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs2_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs2_data 
                                                 >> 4U))))) 
                  << 4U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs2_data 
                        >> 5U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs2_data 
                                           >> 5U))))) {
        ++(vlSymsp->__Vcoverage[4944]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs2_data 
            = ((0xffffffffffffffdfULL & vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs2_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs2_data 
                                                 >> 5U))))) 
                  << 5U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs2_data 
                        >> 6U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs2_data 
                                           >> 6U))))) {
        ++(vlSymsp->__Vcoverage[4945]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs2_data 
            = ((0xffffffffffffffbfULL & vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs2_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs2_data 
                                                 >> 6U))))) 
                  << 6U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs2_data 
                        >> 7U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs2_data 
                                           >> 7U))))) {
        ++(vlSymsp->__Vcoverage[4946]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs2_data 
            = ((0xffffffffffffff7fULL & vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs2_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs2_data 
                                                 >> 7U))))) 
                  << 7U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs2_data 
                        >> 8U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs2_data 
                                           >> 8U))))) {
        ++(vlSymsp->__Vcoverage[4947]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs2_data 
            = ((0xfffffffffffffeffULL & vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs2_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs2_data 
                                                 >> 8U))))) 
                  << 8U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs2_data 
                        >> 9U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs2_data 
                                           >> 9U))))) {
        ++(vlSymsp->__Vcoverage[4948]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs2_data 
            = ((0xfffffffffffffdffULL & vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs2_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs2_data 
                                                 >> 9U))))) 
                  << 9U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs2_data 
                        >> 0xaU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs2_data 
                                             >> 0xaU))))) {
        ++(vlSymsp->__Vcoverage[4949]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs2_data 
            = ((0xfffffffffffffbffULL & vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs2_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs2_data 
                                                 >> 0xaU))))) 
                  << 0xaU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs2_data 
                        >> 0xbU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs2_data 
                                             >> 0xbU))))) {
        ++(vlSymsp->__Vcoverage[4950]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs2_data 
            = ((0xfffffffffffff7ffULL & vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs2_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs2_data 
                                                 >> 0xbU))))) 
                  << 0xbU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs2_data 
                        >> 0xcU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs2_data 
                                             >> 0xcU))))) {
        ++(vlSymsp->__Vcoverage[4951]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs2_data 
            = ((0xffffffffffffefffULL & vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs2_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs2_data 
                                                 >> 0xcU))))) 
                  << 0xcU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs2_data 
                        >> 0xdU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs2_data 
                                             >> 0xdU))))) {
        ++(vlSymsp->__Vcoverage[4952]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs2_data 
            = ((0xffffffffffffdfffULL & vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs2_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs2_data 
                                                 >> 0xdU))))) 
                  << 0xdU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs2_data 
                        >> 0xeU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs2_data 
                                             >> 0xeU))))) {
        ++(vlSymsp->__Vcoverage[4953]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs2_data 
            = ((0xffffffffffffbfffULL & vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs2_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs2_data 
                                                 >> 0xeU))))) 
                  << 0xeU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs2_data 
                        >> 0xfU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs2_data 
                                             >> 0xfU))))) {
        ++(vlSymsp->__Vcoverage[4954]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs2_data 
            = ((0xffffffffffff7fffULL & vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs2_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs2_data 
                                                 >> 0xfU))))) 
                  << 0xfU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs2_data 
                        >> 0x10U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs2_data 
                                              >> 0x10U))))) {
        ++(vlSymsp->__Vcoverage[4955]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs2_data 
            = ((0xfffffffffffeffffULL & vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs2_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs2_data 
                                                 >> 0x10U))))) 
                  << 0x10U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs2_data 
                        >> 0x11U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs2_data 
                                              >> 0x11U))))) {
        ++(vlSymsp->__Vcoverage[4956]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs2_data 
            = ((0xfffffffffffdffffULL & vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs2_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs2_data 
                                                 >> 0x11U))))) 
                  << 0x11U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs2_data 
                        >> 0x12U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs2_data 
                                              >> 0x12U))))) {
        ++(vlSymsp->__Vcoverage[4957]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs2_data 
            = ((0xfffffffffffbffffULL & vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs2_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs2_data 
                                                 >> 0x12U))))) 
                  << 0x12U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs2_data 
                        >> 0x13U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs2_data 
                                              >> 0x13U))))) {
        ++(vlSymsp->__Vcoverage[4958]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs2_data 
            = ((0xfffffffffff7ffffULL & vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs2_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs2_data 
                                                 >> 0x13U))))) 
                  << 0x13U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs2_data 
                        >> 0x14U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs2_data 
                                              >> 0x14U))))) {
        ++(vlSymsp->__Vcoverage[4959]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs2_data 
            = ((0xffffffffffefffffULL & vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs2_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs2_data 
                                                 >> 0x14U))))) 
                  << 0x14U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs2_data 
                        >> 0x15U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs2_data 
                                              >> 0x15U))))) {
        ++(vlSymsp->__Vcoverage[4960]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs2_data 
            = ((0xffffffffffdfffffULL & vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs2_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs2_data 
                                                 >> 0x15U))))) 
                  << 0x15U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs2_data 
                        >> 0x16U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs2_data 
                                              >> 0x16U))))) {
        ++(vlSymsp->__Vcoverage[4961]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs2_data 
            = ((0xffffffffffbfffffULL & vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs2_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs2_data 
                                                 >> 0x16U))))) 
                  << 0x16U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs2_data 
                        >> 0x17U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs2_data 
                                              >> 0x17U))))) {
        ++(vlSymsp->__Vcoverage[4962]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs2_data 
            = ((0xffffffffff7fffffULL & vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs2_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs2_data 
                                                 >> 0x17U))))) 
                  << 0x17U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs2_data 
                        >> 0x18U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs2_data 
                                              >> 0x18U))))) {
        ++(vlSymsp->__Vcoverage[4963]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs2_data 
            = ((0xfffffffffeffffffULL & vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs2_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs2_data 
                                                 >> 0x18U))))) 
                  << 0x18U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs2_data 
                        >> 0x19U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs2_data 
                                              >> 0x19U))))) {
        ++(vlSymsp->__Vcoverage[4964]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs2_data 
            = ((0xfffffffffdffffffULL & vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs2_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs2_data 
                                                 >> 0x19U))))) 
                  << 0x19U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs2_data 
                        >> 0x1aU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs2_data 
                                              >> 0x1aU))))) {
        ++(vlSymsp->__Vcoverage[4965]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs2_data 
            = ((0xfffffffffbffffffULL & vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs2_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs2_data 
                                                 >> 0x1aU))))) 
                  << 0x1aU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs2_data 
                        >> 0x1bU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs2_data 
                                              >> 0x1bU))))) {
        ++(vlSymsp->__Vcoverage[4966]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs2_data 
            = ((0xfffffffff7ffffffULL & vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs2_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs2_data 
                                                 >> 0x1bU))))) 
                  << 0x1bU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs2_data 
                        >> 0x1cU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs2_data 
                                              >> 0x1cU))))) {
        ++(vlSymsp->__Vcoverage[4967]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs2_data 
            = ((0xffffffffefffffffULL & vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs2_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs2_data 
                                                 >> 0x1cU))))) 
                  << 0x1cU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs2_data 
                        >> 0x1dU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs2_data 
                                              >> 0x1dU))))) {
        ++(vlSymsp->__Vcoverage[4968]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs2_data 
            = ((0xffffffffdfffffffULL & vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs2_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs2_data 
                                                 >> 0x1dU))))) 
                  << 0x1dU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs2_data 
                        >> 0x1eU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs2_data 
                                              >> 0x1eU))))) {
        ++(vlSymsp->__Vcoverage[4969]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs2_data 
            = ((0xffffffffbfffffffULL & vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs2_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs2_data 
                                                 >> 0x1eU))))) 
                  << 0x1eU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs2_data 
                        >> 0x1fU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs2_data 
                                              >> 0x1fU))))) {
        ++(vlSymsp->__Vcoverage[4970]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs2_data 
            = ((0xffffffff7fffffffULL & vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs2_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs2_data 
                                                 >> 0x1fU))))) 
                  << 0x1fU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs2_data 
                        >> 0x20U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs2_data 
                                              >> 0x20U))))) {
        ++(vlSymsp->__Vcoverage[4971]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs2_data 
            = ((0xfffffffeffffffffULL & vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs2_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs2_data 
                                                 >> 0x20U))))) 
                  << 0x20U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs2_data 
                        >> 0x21U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs2_data 
                                              >> 0x21U))))) {
        ++(vlSymsp->__Vcoverage[4972]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs2_data 
            = ((0xfffffffdffffffffULL & vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs2_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs2_data 
                                                 >> 0x21U))))) 
                  << 0x21U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs2_data 
                        >> 0x22U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs2_data 
                                              >> 0x22U))))) {
        ++(vlSymsp->__Vcoverage[4973]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs2_data 
            = ((0xfffffffbffffffffULL & vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs2_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs2_data 
                                                 >> 0x22U))))) 
                  << 0x22U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs2_data 
                        >> 0x23U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs2_data 
                                              >> 0x23U))))) {
        ++(vlSymsp->__Vcoverage[4974]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs2_data 
            = ((0xfffffff7ffffffffULL & vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs2_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs2_data 
                                                 >> 0x23U))))) 
                  << 0x23U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs2_data 
                        >> 0x24U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs2_data 
                                              >> 0x24U))))) {
        ++(vlSymsp->__Vcoverage[4975]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs2_data 
            = ((0xffffffefffffffffULL & vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs2_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs2_data 
                                                 >> 0x24U))))) 
                  << 0x24U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs2_data 
                        >> 0x25U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs2_data 
                                              >> 0x25U))))) {
        ++(vlSymsp->__Vcoverage[4976]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs2_data 
            = ((0xffffffdfffffffffULL & vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs2_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs2_data 
                                                 >> 0x25U))))) 
                  << 0x25U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs2_data 
                        >> 0x26U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs2_data 
                                              >> 0x26U))))) {
        ++(vlSymsp->__Vcoverage[4977]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs2_data 
            = ((0xffffffbfffffffffULL & vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs2_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs2_data 
                                                 >> 0x26U))))) 
                  << 0x26U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs2_data 
                        >> 0x27U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs2_data 
                                              >> 0x27U))))) {
        ++(vlSymsp->__Vcoverage[4978]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs2_data 
            = ((0xffffff7fffffffffULL & vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs2_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs2_data 
                                                 >> 0x27U))))) 
                  << 0x27U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs2_data 
                        >> 0x28U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs2_data 
                                              >> 0x28U))))) {
        ++(vlSymsp->__Vcoverage[4979]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs2_data 
            = ((0xfffffeffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs2_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs2_data 
                                                 >> 0x28U))))) 
                  << 0x28U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs2_data 
                        >> 0x29U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs2_data 
                                              >> 0x29U))))) {
        ++(vlSymsp->__Vcoverage[4980]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs2_data 
            = ((0xfffffdffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs2_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs2_data 
                                                 >> 0x29U))))) 
                  << 0x29U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs2_data 
                        >> 0x2aU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs2_data 
                                              >> 0x2aU))))) {
        ++(vlSymsp->__Vcoverage[4981]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs2_data 
            = ((0xfffffbffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs2_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs2_data 
                                                 >> 0x2aU))))) 
                  << 0x2aU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs2_data 
                        >> 0x2bU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs2_data 
                                              >> 0x2bU))))) {
        ++(vlSymsp->__Vcoverage[4982]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs2_data 
            = ((0xfffff7ffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs2_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs2_data 
                                                 >> 0x2bU))))) 
                  << 0x2bU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs2_data 
                        >> 0x2cU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs2_data 
                                              >> 0x2cU))))) {
        ++(vlSymsp->__Vcoverage[4983]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs2_data 
            = ((0xffffefffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs2_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs2_data 
                                                 >> 0x2cU))))) 
                  << 0x2cU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs2_data 
                        >> 0x2dU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs2_data 
                                              >> 0x2dU))))) {
        ++(vlSymsp->__Vcoverage[4984]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs2_data 
            = ((0xffffdfffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs2_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs2_data 
                                                 >> 0x2dU))))) 
                  << 0x2dU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs2_data 
                        >> 0x2eU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs2_data 
                                              >> 0x2eU))))) {
        ++(vlSymsp->__Vcoverage[4985]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs2_data 
            = ((0xffffbfffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs2_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs2_data 
                                                 >> 0x2eU))))) 
                  << 0x2eU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs2_data 
                        >> 0x2fU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs2_data 
                                              >> 0x2fU))))) {
        ++(vlSymsp->__Vcoverage[4986]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs2_data 
            = ((0xffff7fffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs2_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs2_data 
                                                 >> 0x2fU))))) 
                  << 0x2fU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs2_data 
                        >> 0x30U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs2_data 
                                              >> 0x30U))))) {
        ++(vlSymsp->__Vcoverage[4987]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs2_data 
            = ((0xfffeffffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs2_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs2_data 
                                                 >> 0x30U))))) 
                  << 0x30U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs2_data 
                        >> 0x31U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs2_data 
                                              >> 0x31U))))) {
        ++(vlSymsp->__Vcoverage[4988]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs2_data 
            = ((0xfffdffffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs2_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs2_data 
                                                 >> 0x31U))))) 
                  << 0x31U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs2_data 
                        >> 0x32U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs2_data 
                                              >> 0x32U))))) {
        ++(vlSymsp->__Vcoverage[4989]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs2_data 
            = ((0xfffbffffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs2_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs2_data 
                                                 >> 0x32U))))) 
                  << 0x32U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs2_data 
                        >> 0x33U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs2_data 
                                              >> 0x33U))))) {
        ++(vlSymsp->__Vcoverage[4990]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs2_data 
            = ((0xfff7ffffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs2_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs2_data 
                                                 >> 0x33U))))) 
                  << 0x33U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs2_data 
                        >> 0x34U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs2_data 
                                              >> 0x34U))))) {
        ++(vlSymsp->__Vcoverage[4991]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs2_data 
            = ((0xffefffffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs2_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs2_data 
                                                 >> 0x34U))))) 
                  << 0x34U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs2_data 
                        >> 0x35U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs2_data 
                                              >> 0x35U))))) {
        ++(vlSymsp->__Vcoverage[4992]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs2_data 
            = ((0xffdfffffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs2_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs2_data 
                                                 >> 0x35U))))) 
                  << 0x35U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs2_data 
                        >> 0x36U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs2_data 
                                              >> 0x36U))))) {
        ++(vlSymsp->__Vcoverage[4993]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs2_data 
            = ((0xffbfffffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs2_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs2_data 
                                                 >> 0x36U))))) 
                  << 0x36U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs2_data 
                        >> 0x37U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs2_data 
                                              >> 0x37U))))) {
        ++(vlSymsp->__Vcoverage[4994]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs2_data 
            = ((0xff7fffffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs2_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs2_data 
                                                 >> 0x37U))))) 
                  << 0x37U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs2_data 
                        >> 0x38U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs2_data 
                                              >> 0x38U))))) {
        ++(vlSymsp->__Vcoverage[4995]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs2_data 
            = ((0xfeffffffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs2_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs2_data 
                                                 >> 0x38U))))) 
                  << 0x38U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs2_data 
                        >> 0x39U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs2_data 
                                              >> 0x39U))))) {
        ++(vlSymsp->__Vcoverage[4996]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs2_data 
            = ((0xfdffffffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs2_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs2_data 
                                                 >> 0x39U))))) 
                  << 0x39U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs2_data 
                        >> 0x3aU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs2_data 
                                              >> 0x3aU))))) {
        ++(vlSymsp->__Vcoverage[4997]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs2_data 
            = ((0xfbffffffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs2_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs2_data 
                                                 >> 0x3aU))))) 
                  << 0x3aU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs2_data 
                        >> 0x3bU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs2_data 
                                              >> 0x3bU))))) {
        ++(vlSymsp->__Vcoverage[4998]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs2_data 
            = ((0xf7ffffffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs2_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs2_data 
                                                 >> 0x3bU))))) 
                  << 0x3bU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs2_data 
                        >> 0x3cU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs2_data 
                                              >> 0x3cU))))) {
        ++(vlSymsp->__Vcoverage[4999]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs2_data 
            = ((0xefffffffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs2_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs2_data 
                                                 >> 0x3cU))))) 
                  << 0x3cU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs2_data 
                        >> 0x3dU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs2_data 
                                              >> 0x3dU))))) {
        ++(vlSymsp->__Vcoverage[5000]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs2_data 
            = ((0xdfffffffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs2_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs2_data 
                                                 >> 0x3dU))))) 
                  << 0x3dU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs2_data 
                        >> 0x3eU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs2_data 
                                              >> 0x3eU))))) {
        ++(vlSymsp->__Vcoverage[5001]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs2_data 
            = ((0xbfffffffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs2_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs2_data 
                                                 >> 0x3eU))))) 
                  << 0x3eU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs2_data 
                        >> 0x3fU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs2_data 
                                              >> 0x3fU))))) {
        ++(vlSymsp->__Vcoverage[5002]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs2_data 
            = ((0x7fffffffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs2_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs2_data 
                                                 >> 0x3fU))))) 
                  << 0x3fU));
    }
    if ((1U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs1_addr) 
               ^ (IData)(vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs1_addr)))) {
        ++(vlSymsp->__Vcoverage[4865]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs1_addr 
            = ((0x1eU & (IData)(vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs1_addr)) 
               | (1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs1_addr)));
    }
    if ((2U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs1_addr) 
               ^ (IData)(vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs1_addr)))) {
        ++(vlSymsp->__Vcoverage[4866]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs1_addr 
            = ((0x1dU & (IData)(vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs1_addr)) 
               | (2U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs1_addr)));
    }
    if ((4U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs1_addr) 
               ^ (IData)(vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs1_addr)))) {
        ++(vlSymsp->__Vcoverage[4867]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs1_addr 
            = ((0x1bU & (IData)(vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs1_addr)) 
               | (4U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs1_addr)));
    }
    if ((8U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs1_addr) 
               ^ (IData)(vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs1_addr)))) {
        ++(vlSymsp->__Vcoverage[4868]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs1_addr 
            = ((0x17U & (IData)(vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs1_addr)) 
               | (8U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs1_addr)));
    }
    if ((0x10U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs1_addr) 
                  ^ (IData)(vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs1_addr)))) {
        ++(vlSymsp->__Vcoverage[4869]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs1_addr 
            = ((0xfU & (IData)(vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs1_addr)) 
               | (0x10U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs1_addr)));
    }
    if ((1U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                       [1U]) ^ (IData)(vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_1)))) {
        ++(vlSymsp->__Vcoverage[2510]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_1 
            = ((0xfffffffffffffffeULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_1) 
               | (IData)((IData)((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                               [1U])))));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [1U] >> 1U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_1 
                                                >> 1U))))) {
        ++(vlSymsp->__Vcoverage[2511]);
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
        ++(vlSymsp->__Vcoverage[2512]);
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
        ++(vlSymsp->__Vcoverage[2513]);
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
        ++(vlSymsp->__Vcoverage[2514]);
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
        ++(vlSymsp->__Vcoverage[2515]);
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
        ++(vlSymsp->__Vcoverage[2516]);
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
        ++(vlSymsp->__Vcoverage[2517]);
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
        ++(vlSymsp->__Vcoverage[2518]);
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
        ++(vlSymsp->__Vcoverage[2519]);
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
        ++(vlSymsp->__Vcoverage[2520]);
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
        ++(vlSymsp->__Vcoverage[2521]);
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
        ++(vlSymsp->__Vcoverage[2522]);
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
        ++(vlSymsp->__Vcoverage[2523]);
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
        ++(vlSymsp->__Vcoverage[2524]);
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
        ++(vlSymsp->__Vcoverage[2525]);
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
        ++(vlSymsp->__Vcoverage[2526]);
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
        ++(vlSymsp->__Vcoverage[2527]);
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
        ++(vlSymsp->__Vcoverage[2528]);
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
        ++(vlSymsp->__Vcoverage[2529]);
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
        ++(vlSymsp->__Vcoverage[2530]);
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
        ++(vlSymsp->__Vcoverage[2531]);
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
        ++(vlSymsp->__Vcoverage[2532]);
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
        ++(vlSymsp->__Vcoverage[2533]);
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
        ++(vlSymsp->__Vcoverage[2534]);
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
        ++(vlSymsp->__Vcoverage[2535]);
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
        ++(vlSymsp->__Vcoverage[2536]);
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
        ++(vlSymsp->__Vcoverage[2537]);
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
        ++(vlSymsp->__Vcoverage[2538]);
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
        ++(vlSymsp->__Vcoverage[2539]);
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
        ++(vlSymsp->__Vcoverage[2540]);
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
        ++(vlSymsp->__Vcoverage[2541]);
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
        ++(vlSymsp->__Vcoverage[2542]);
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
        ++(vlSymsp->__Vcoverage[2543]);
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
        ++(vlSymsp->__Vcoverage[2544]);
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
        ++(vlSymsp->__Vcoverage[2545]);
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
        ++(vlSymsp->__Vcoverage[2546]);
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
        ++(vlSymsp->__Vcoverage[2547]);
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
        ++(vlSymsp->__Vcoverage[2548]);
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
        ++(vlSymsp->__Vcoverage[2549]);
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
        ++(vlSymsp->__Vcoverage[2550]);
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
        ++(vlSymsp->__Vcoverage[2551]);
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
        ++(vlSymsp->__Vcoverage[2552]);
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
        ++(vlSymsp->__Vcoverage[2553]);
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
        ++(vlSymsp->__Vcoverage[2554]);
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
        ++(vlSymsp->__Vcoverage[2555]);
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
        ++(vlSymsp->__Vcoverage[2556]);
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
        ++(vlSymsp->__Vcoverage[2557]);
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
        ++(vlSymsp->__Vcoverage[2558]);
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
        ++(vlSymsp->__Vcoverage[2559]);
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
        ++(vlSymsp->__Vcoverage[2560]);
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
        ++(vlSymsp->__Vcoverage[2561]);
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
        ++(vlSymsp->__Vcoverage[2562]);
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
        ++(vlSymsp->__Vcoverage[2563]);
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
        ++(vlSymsp->__Vcoverage[2564]);
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
        ++(vlSymsp->__Vcoverage[2565]);
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
        ++(vlSymsp->__Vcoverage[2566]);
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
        ++(vlSymsp->__Vcoverage[2567]);
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
        ++(vlSymsp->__Vcoverage[2568]);
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
        ++(vlSymsp->__Vcoverage[2569]);
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
        ++(vlSymsp->__Vcoverage[2570]);
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
        ++(vlSymsp->__Vcoverage[2571]);
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
        ++(vlSymsp->__Vcoverage[2572]);
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
        ++(vlSymsp->__Vcoverage[2573]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_1 
            = ((0x7fffffffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [1U] 
                                                 >> 0x3fU))))) 
                  << 0x3fU));
    }
    if ((1U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                       [2U]) ^ (IData)(vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_2)))) {
        ++(vlSymsp->__Vcoverage[2574]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_2 
            = ((0xfffffffffffffffeULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_2) 
               | (IData)((IData)((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                               [2U])))));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [2U] >> 1U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_2 
                                                >> 1U))))) {
        ++(vlSymsp->__Vcoverage[2575]);
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
        ++(vlSymsp->__Vcoverage[2576]);
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
        ++(vlSymsp->__Vcoverage[2577]);
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
        ++(vlSymsp->__Vcoverage[2578]);
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
        ++(vlSymsp->__Vcoverage[2579]);
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
        ++(vlSymsp->__Vcoverage[2580]);
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
        ++(vlSymsp->__Vcoverage[2581]);
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
        ++(vlSymsp->__Vcoverage[2582]);
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
        ++(vlSymsp->__Vcoverage[2583]);
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
        ++(vlSymsp->__Vcoverage[2584]);
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
        ++(vlSymsp->__Vcoverage[2585]);
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
        ++(vlSymsp->__Vcoverage[2586]);
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
        ++(vlSymsp->__Vcoverage[2587]);
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
        ++(vlSymsp->__Vcoverage[2588]);
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
        ++(vlSymsp->__Vcoverage[2589]);
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
        ++(vlSymsp->__Vcoverage[2590]);
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
        ++(vlSymsp->__Vcoverage[2591]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_2 
            = ((0xfffffffffffdffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [2U] 
                                                 >> 0x11U))))) 
                  << 0x11U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [2U] >> 0x12U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_2 
                                                   >> 0x12U))))) {
        ++(vlSymsp->__Vcoverage[2592]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_2 
            = ((0xfffffffffffbffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [2U] 
                                                 >> 0x12U))))) 
                  << 0x12U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [2U] >> 0x13U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_2 
                                                   >> 0x13U))))) {
        ++(vlSymsp->__Vcoverage[2593]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_2 
            = ((0xfffffffffff7ffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [2U] 
                                                 >> 0x13U))))) 
                  << 0x13U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [2U] >> 0x14U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_2 
                                                   >> 0x14U))))) {
        ++(vlSymsp->__Vcoverage[2594]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_2 
            = ((0xffffffffffefffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [2U] 
                                                 >> 0x14U))))) 
                  << 0x14U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [2U] >> 0x15U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_2 
                                                   >> 0x15U))))) {
        ++(vlSymsp->__Vcoverage[2595]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_2 
            = ((0xffffffffffdfffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [2U] 
                                                 >> 0x15U))))) 
                  << 0x15U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [2U] >> 0x16U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_2 
                                                   >> 0x16U))))) {
        ++(vlSymsp->__Vcoverage[2596]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_2 
            = ((0xffffffffffbfffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [2U] 
                                                 >> 0x16U))))) 
                  << 0x16U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [2U] >> 0x17U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_2 
                                                   >> 0x17U))))) {
        ++(vlSymsp->__Vcoverage[2597]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_2 
            = ((0xffffffffff7fffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [2U] 
                                                 >> 0x17U))))) 
                  << 0x17U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [2U] >> 0x18U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_2 
                                                   >> 0x18U))))) {
        ++(vlSymsp->__Vcoverage[2598]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_2 
            = ((0xfffffffffeffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [2U] 
                                                 >> 0x18U))))) 
                  << 0x18U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [2U] >> 0x19U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_2 
                                                   >> 0x19U))))) {
        ++(vlSymsp->__Vcoverage[2599]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_2 
            = ((0xfffffffffdffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [2U] 
                                                 >> 0x19U))))) 
                  << 0x19U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [2U] >> 0x1aU)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_2 
                                                   >> 0x1aU))))) {
        ++(vlSymsp->__Vcoverage[2600]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_2 
            = ((0xfffffffffbffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [2U] 
                                                 >> 0x1aU))))) 
                  << 0x1aU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [2U] >> 0x1bU)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_2 
                                                   >> 0x1bU))))) {
        ++(vlSymsp->__Vcoverage[2601]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_2 
            = ((0xfffffffff7ffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [2U] 
                                                 >> 0x1bU))))) 
                  << 0x1bU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [2U] >> 0x1cU)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_2 
                                                   >> 0x1cU))))) {
        ++(vlSymsp->__Vcoverage[2602]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_2 
            = ((0xffffffffefffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [2U] 
                                                 >> 0x1cU))))) 
                  << 0x1cU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [2U] >> 0x1dU)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_2 
                                                   >> 0x1dU))))) {
        ++(vlSymsp->__Vcoverage[2603]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_2 
            = ((0xffffffffdfffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [2U] 
                                                 >> 0x1dU))))) 
                  << 0x1dU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [2U] >> 0x1eU)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_2 
                                                   >> 0x1eU))))) {
        ++(vlSymsp->__Vcoverage[2604]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_2 
            = ((0xffffffffbfffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [2U] 
                                                 >> 0x1eU))))) 
                  << 0x1eU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [2U] >> 0x1fU)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_2 
                                                   >> 0x1fU))))) {
        ++(vlSymsp->__Vcoverage[2605]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_2 
            = ((0xffffffff7fffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [2U] 
                                                 >> 0x1fU))))) 
                  << 0x1fU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [2U] >> 0x20U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_2 
                                                   >> 0x20U))))) {
        ++(vlSymsp->__Vcoverage[2606]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_2 
            = ((0xfffffffeffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [2U] 
                                                 >> 0x20U))))) 
                  << 0x20U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [2U] >> 0x21U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_2 
                                                   >> 0x21U))))) {
        ++(vlSymsp->__Vcoverage[2607]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_2 
            = ((0xfffffffdffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [2U] 
                                                 >> 0x21U))))) 
                  << 0x21U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [2U] >> 0x22U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_2 
                                                   >> 0x22U))))) {
        ++(vlSymsp->__Vcoverage[2608]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_2 
            = ((0xfffffffbffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [2U] 
                                                 >> 0x22U))))) 
                  << 0x22U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [2U] >> 0x23U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_2 
                                                   >> 0x23U))))) {
        ++(vlSymsp->__Vcoverage[2609]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_2 
            = ((0xfffffff7ffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [2U] 
                                                 >> 0x23U))))) 
                  << 0x23U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [2U] >> 0x24U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_2 
                                                   >> 0x24U))))) {
        ++(vlSymsp->__Vcoverage[2610]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_2 
            = ((0xffffffefffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [2U] 
                                                 >> 0x24U))))) 
                  << 0x24U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [2U] >> 0x25U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_2 
                                                   >> 0x25U))))) {
        ++(vlSymsp->__Vcoverage[2611]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_2 
            = ((0xffffffdfffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [2U] 
                                                 >> 0x25U))))) 
                  << 0x25U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [2U] >> 0x26U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_2 
                                                   >> 0x26U))))) {
        ++(vlSymsp->__Vcoverage[2612]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_2 
            = ((0xffffffbfffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [2U] 
                                                 >> 0x26U))))) 
                  << 0x26U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [2U] >> 0x27U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_2 
                                                   >> 0x27U))))) {
        ++(vlSymsp->__Vcoverage[2613]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_2 
            = ((0xffffff7fffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [2U] 
                                                 >> 0x27U))))) 
                  << 0x27U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [2U] >> 0x28U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_2 
                                                   >> 0x28U))))) {
        ++(vlSymsp->__Vcoverage[2614]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_2 
            = ((0xfffffeffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [2U] 
                                                 >> 0x28U))))) 
                  << 0x28U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [2U] >> 0x29U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_2 
                                                   >> 0x29U))))) {
        ++(vlSymsp->__Vcoverage[2615]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_2 
            = ((0xfffffdffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [2U] 
                                                 >> 0x29U))))) 
                  << 0x29U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [2U] >> 0x2aU)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_2 
                                                   >> 0x2aU))))) {
        ++(vlSymsp->__Vcoverage[2616]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_2 
            = ((0xfffffbffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [2U] 
                                                 >> 0x2aU))))) 
                  << 0x2aU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [2U] >> 0x2bU)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_2 
                                                   >> 0x2bU))))) {
        ++(vlSymsp->__Vcoverage[2617]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_2 
            = ((0xfffff7ffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [2U] 
                                                 >> 0x2bU))))) 
                  << 0x2bU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [2U] >> 0x2cU)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_2 
                                                   >> 0x2cU))))) {
        ++(vlSymsp->__Vcoverage[2618]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_2 
            = ((0xffffefffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [2U] 
                                                 >> 0x2cU))))) 
                  << 0x2cU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [2U] >> 0x2dU)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_2 
                                                   >> 0x2dU))))) {
        ++(vlSymsp->__Vcoverage[2619]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_2 
            = ((0xffffdfffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [2U] 
                                                 >> 0x2dU))))) 
                  << 0x2dU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [2U] >> 0x2eU)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_2 
                                                   >> 0x2eU))))) {
        ++(vlSymsp->__Vcoverage[2620]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_2 
            = ((0xffffbfffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [2U] 
                                                 >> 0x2eU))))) 
                  << 0x2eU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [2U] >> 0x2fU)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_2 
                                                   >> 0x2fU))))) {
        ++(vlSymsp->__Vcoverage[2621]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_2 
            = ((0xffff7fffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [2U] 
                                                 >> 0x2fU))))) 
                  << 0x2fU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [2U] >> 0x30U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_2 
                                                   >> 0x30U))))) {
        ++(vlSymsp->__Vcoverage[2622]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_2 
            = ((0xfffeffffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [2U] 
                                                 >> 0x30U))))) 
                  << 0x30U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [2U] >> 0x31U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_2 
                                                   >> 0x31U))))) {
        ++(vlSymsp->__Vcoverage[2623]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_2 
            = ((0xfffdffffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [2U] 
                                                 >> 0x31U))))) 
                  << 0x31U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [2U] >> 0x32U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_2 
                                                   >> 0x32U))))) {
        ++(vlSymsp->__Vcoverage[2624]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_2 
            = ((0xfffbffffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [2U] 
                                                 >> 0x32U))))) 
                  << 0x32U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [2U] >> 0x33U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_2 
                                                   >> 0x33U))))) {
        ++(vlSymsp->__Vcoverage[2625]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_2 
            = ((0xfff7ffffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [2U] 
                                                 >> 0x33U))))) 
                  << 0x33U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [2U] >> 0x34U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_2 
                                                   >> 0x34U))))) {
        ++(vlSymsp->__Vcoverage[2626]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_2 
            = ((0xffefffffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [2U] 
                                                 >> 0x34U))))) 
                  << 0x34U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [2U] >> 0x35U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_2 
                                                   >> 0x35U))))) {
        ++(vlSymsp->__Vcoverage[2627]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_2 
            = ((0xffdfffffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [2U] 
                                                 >> 0x35U))))) 
                  << 0x35U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [2U] >> 0x36U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_2 
                                                   >> 0x36U))))) {
        ++(vlSymsp->__Vcoverage[2628]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_2 
            = ((0xffbfffffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [2U] 
                                                 >> 0x36U))))) 
                  << 0x36U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [2U] >> 0x37U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_2 
                                                   >> 0x37U))))) {
        ++(vlSymsp->__Vcoverage[2629]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_2 
            = ((0xff7fffffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [2U] 
                                                 >> 0x37U))))) 
                  << 0x37U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [2U] >> 0x38U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_2 
                                                   >> 0x38U))))) {
        ++(vlSymsp->__Vcoverage[2630]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_2 
            = ((0xfeffffffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [2U] 
                                                 >> 0x38U))))) 
                  << 0x38U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [2U] >> 0x39U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_2 
                                                   >> 0x39U))))) {
        ++(vlSymsp->__Vcoverage[2631]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_2 
            = ((0xfdffffffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [2U] 
                                                 >> 0x39U))))) 
                  << 0x39U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [2U] >> 0x3aU)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_2 
                                                   >> 0x3aU))))) {
        ++(vlSymsp->__Vcoverage[2632]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_2 
            = ((0xfbffffffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [2U] 
                                                 >> 0x3aU))))) 
                  << 0x3aU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [2U] >> 0x3bU)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_2 
                                                   >> 0x3bU))))) {
        ++(vlSymsp->__Vcoverage[2633]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_2 
            = ((0xf7ffffffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [2U] 
                                                 >> 0x3bU))))) 
                  << 0x3bU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [2U] >> 0x3cU)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_2 
                                                   >> 0x3cU))))) {
        ++(vlSymsp->__Vcoverage[2634]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_2 
            = ((0xefffffffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [2U] 
                                                 >> 0x3cU))))) 
                  << 0x3cU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [2U] >> 0x3dU)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_2 
                                                   >> 0x3dU))))) {
        ++(vlSymsp->__Vcoverage[2635]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_2 
            = ((0xdfffffffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [2U] 
                                                 >> 0x3dU))))) 
                  << 0x3dU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [2U] >> 0x3eU)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_2 
                                                   >> 0x3eU))))) {
        ++(vlSymsp->__Vcoverage[2636]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_2 
            = ((0xbfffffffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [2U] 
                                                 >> 0x3eU))))) 
                  << 0x3eU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [2U] >> 0x3fU)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_2 
                                                   >> 0x3fU))))) {
        ++(vlSymsp->__Vcoverage[2637]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_2 
            = ((0x7fffffffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [2U] 
                                                 >> 0x3fU))))) 
                  << 0x3fU));
    }
    if ((1U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                       [3U]) ^ (IData)(vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_3)))) {
        ++(vlSymsp->__Vcoverage[2638]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_3 
            = ((0xfffffffffffffffeULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_3) 
               | (IData)((IData)((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                               [3U])))));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [3U] >> 1U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_3 
                                                >> 1U))))) {
        ++(vlSymsp->__Vcoverage[2639]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_3 
            = ((0xfffffffffffffffdULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_3) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [3U] 
                                                 >> 1U))))) 
                  << 1U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [3U] >> 2U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_3 
                                                >> 2U))))) {
        ++(vlSymsp->__Vcoverage[2640]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_3 
            = ((0xfffffffffffffffbULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_3) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [3U] 
                                                 >> 2U))))) 
                  << 2U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [3U] >> 3U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_3 
                                                >> 3U))))) {
        ++(vlSymsp->__Vcoverage[2641]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_3 
            = ((0xfffffffffffffff7ULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_3) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [3U] 
                                                 >> 3U))))) 
                  << 3U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [3U] >> 4U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_3 
                                                >> 4U))))) {
        ++(vlSymsp->__Vcoverage[2642]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_3 
            = ((0xffffffffffffffefULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_3) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [3U] 
                                                 >> 4U))))) 
                  << 4U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [3U] >> 5U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_3 
                                                >> 5U))))) {
        ++(vlSymsp->__Vcoverage[2643]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_3 
            = ((0xffffffffffffffdfULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_3) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [3U] 
                                                 >> 5U))))) 
                  << 5U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [3U] >> 6U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_3 
                                                >> 6U))))) {
        ++(vlSymsp->__Vcoverage[2644]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_3 
            = ((0xffffffffffffffbfULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_3) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [3U] 
                                                 >> 6U))))) 
                  << 6U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [3U] >> 7U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_3 
                                                >> 7U))))) {
        ++(vlSymsp->__Vcoverage[2645]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_3 
            = ((0xffffffffffffff7fULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_3) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [3U] 
                                                 >> 7U))))) 
                  << 7U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [3U] >> 8U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_3 
                                                >> 8U))))) {
        ++(vlSymsp->__Vcoverage[2646]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_3 
            = ((0xfffffffffffffeffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_3) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [3U] 
                                                 >> 8U))))) 
                  << 8U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [3U] >> 9U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_3 
                                                >> 9U))))) {
        ++(vlSymsp->__Vcoverage[2647]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_3 
            = ((0xfffffffffffffdffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_3) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [3U] 
                                                 >> 9U))))) 
                  << 9U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [3U] >> 0xaU)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_3 
                                                  >> 0xaU))))) {
        ++(vlSymsp->__Vcoverage[2648]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_3 
            = ((0xfffffffffffffbffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_3) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [3U] 
                                                 >> 0xaU))))) 
                  << 0xaU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [3U] >> 0xbU)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_3 
                                                  >> 0xbU))))) {
        ++(vlSymsp->__Vcoverage[2649]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_3 
            = ((0xfffffffffffff7ffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_3) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [3U] 
                                                 >> 0xbU))))) 
                  << 0xbU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [3U] >> 0xcU)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_3 
                                                  >> 0xcU))))) {
        ++(vlSymsp->__Vcoverage[2650]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_3 
            = ((0xffffffffffffefffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_3) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [3U] 
                                                 >> 0xcU))))) 
                  << 0xcU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [3U] >> 0xdU)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_3 
                                                  >> 0xdU))))) {
        ++(vlSymsp->__Vcoverage[2651]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_3 
            = ((0xffffffffffffdfffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_3) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [3U] 
                                                 >> 0xdU))))) 
                  << 0xdU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [3U] >> 0xeU)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_3 
                                                  >> 0xeU))))) {
        ++(vlSymsp->__Vcoverage[2652]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_3 
            = ((0xffffffffffffbfffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_3) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [3U] 
                                                 >> 0xeU))))) 
                  << 0xeU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [3U] >> 0xfU)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_3 
                                                  >> 0xfU))))) {
        ++(vlSymsp->__Vcoverage[2653]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_3 
            = ((0xffffffffffff7fffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_3) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [3U] 
                                                 >> 0xfU))))) 
                  << 0xfU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [3U] >> 0x10U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_3 
                                                   >> 0x10U))))) {
        ++(vlSymsp->__Vcoverage[2654]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_3 
            = ((0xfffffffffffeffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_3) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [3U] 
                                                 >> 0x10U))))) 
                  << 0x10U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [3U] >> 0x11U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_3 
                                                   >> 0x11U))))) {
        ++(vlSymsp->__Vcoverage[2655]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_3 
            = ((0xfffffffffffdffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_3) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [3U] 
                                                 >> 0x11U))))) 
                  << 0x11U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [3U] >> 0x12U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_3 
                                                   >> 0x12U))))) {
        ++(vlSymsp->__Vcoverage[2656]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_3 
            = ((0xfffffffffffbffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_3) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [3U] 
                                                 >> 0x12U))))) 
                  << 0x12U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [3U] >> 0x13U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_3 
                                                   >> 0x13U))))) {
        ++(vlSymsp->__Vcoverage[2657]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_3 
            = ((0xfffffffffff7ffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_3) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [3U] 
                                                 >> 0x13U))))) 
                  << 0x13U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [3U] >> 0x14U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_3 
                                                   >> 0x14U))))) {
        ++(vlSymsp->__Vcoverage[2658]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_3 
            = ((0xffffffffffefffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_3) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [3U] 
                                                 >> 0x14U))))) 
                  << 0x14U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [3U] >> 0x15U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_3 
                                                   >> 0x15U))))) {
        ++(vlSymsp->__Vcoverage[2659]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_3 
            = ((0xffffffffffdfffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_3) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [3U] 
                                                 >> 0x15U))))) 
                  << 0x15U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [3U] >> 0x16U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_3 
                                                   >> 0x16U))))) {
        ++(vlSymsp->__Vcoverage[2660]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_3 
            = ((0xffffffffffbfffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_3) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [3U] 
                                                 >> 0x16U))))) 
                  << 0x16U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [3U] >> 0x17U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_3 
                                                   >> 0x17U))))) {
        ++(vlSymsp->__Vcoverage[2661]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_3 
            = ((0xffffffffff7fffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_3) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [3U] 
                                                 >> 0x17U))))) 
                  << 0x17U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [3U] >> 0x18U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_3 
                                                   >> 0x18U))))) {
        ++(vlSymsp->__Vcoverage[2662]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_3 
            = ((0xfffffffffeffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_3) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [3U] 
                                                 >> 0x18U))))) 
                  << 0x18U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [3U] >> 0x19U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_3 
                                                   >> 0x19U))))) {
        ++(vlSymsp->__Vcoverage[2663]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_3 
            = ((0xfffffffffdffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_3) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [3U] 
                                                 >> 0x19U))))) 
                  << 0x19U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [3U] >> 0x1aU)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_3 
                                                   >> 0x1aU))))) {
        ++(vlSymsp->__Vcoverage[2664]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_3 
            = ((0xfffffffffbffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_3) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [3U] 
                                                 >> 0x1aU))))) 
                  << 0x1aU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [3U] >> 0x1bU)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_3 
                                                   >> 0x1bU))))) {
        ++(vlSymsp->__Vcoverage[2665]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_3 
            = ((0xfffffffff7ffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_3) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [3U] 
                                                 >> 0x1bU))))) 
                  << 0x1bU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [3U] >> 0x1cU)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_3 
                                                   >> 0x1cU))))) {
        ++(vlSymsp->__Vcoverage[2666]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_3 
            = ((0xffffffffefffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_3) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [3U] 
                                                 >> 0x1cU))))) 
                  << 0x1cU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [3U] >> 0x1dU)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_3 
                                                   >> 0x1dU))))) {
        ++(vlSymsp->__Vcoverage[2667]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_3 
            = ((0xffffffffdfffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_3) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [3U] 
                                                 >> 0x1dU))))) 
                  << 0x1dU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [3U] >> 0x1eU)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_3 
                                                   >> 0x1eU))))) {
        ++(vlSymsp->__Vcoverage[2668]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_3 
            = ((0xffffffffbfffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_3) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [3U] 
                                                 >> 0x1eU))))) 
                  << 0x1eU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [3U] >> 0x1fU)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_3 
                                                   >> 0x1fU))))) {
        ++(vlSymsp->__Vcoverage[2669]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_3 
            = ((0xffffffff7fffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_3) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [3U] 
                                                 >> 0x1fU))))) 
                  << 0x1fU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [3U] >> 0x20U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_3 
                                                   >> 0x20U))))) {
        ++(vlSymsp->__Vcoverage[2670]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_3 
            = ((0xfffffffeffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_3) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [3U] 
                                                 >> 0x20U))))) 
                  << 0x20U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [3U] >> 0x21U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_3 
                                                   >> 0x21U))))) {
        ++(vlSymsp->__Vcoverage[2671]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_3 
            = ((0xfffffffdffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_3) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [3U] 
                                                 >> 0x21U))))) 
                  << 0x21U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [3U] >> 0x22U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_3 
                                                   >> 0x22U))))) {
        ++(vlSymsp->__Vcoverage[2672]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_3 
            = ((0xfffffffbffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_3) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [3U] 
                                                 >> 0x22U))))) 
                  << 0x22U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [3U] >> 0x23U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_3 
                                                   >> 0x23U))))) {
        ++(vlSymsp->__Vcoverage[2673]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_3 
            = ((0xfffffff7ffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_3) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [3U] 
                                                 >> 0x23U))))) 
                  << 0x23U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [3U] >> 0x24U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_3 
                                                   >> 0x24U))))) {
        ++(vlSymsp->__Vcoverage[2674]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_3 
            = ((0xffffffefffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_3) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [3U] 
                                                 >> 0x24U))))) 
                  << 0x24U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [3U] >> 0x25U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_3 
                                                   >> 0x25U))))) {
        ++(vlSymsp->__Vcoverage[2675]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_3 
            = ((0xffffffdfffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_3) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [3U] 
                                                 >> 0x25U))))) 
                  << 0x25U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [3U] >> 0x26U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_3 
                                                   >> 0x26U))))) {
        ++(vlSymsp->__Vcoverage[2676]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_3 
            = ((0xffffffbfffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_3) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [3U] 
                                                 >> 0x26U))))) 
                  << 0x26U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [3U] >> 0x27U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_3 
                                                   >> 0x27U))))) {
        ++(vlSymsp->__Vcoverage[2677]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_3 
            = ((0xffffff7fffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_3) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [3U] 
                                                 >> 0x27U))))) 
                  << 0x27U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [3U] >> 0x28U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_3 
                                                   >> 0x28U))))) {
        ++(vlSymsp->__Vcoverage[2678]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_3 
            = ((0xfffffeffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_3) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [3U] 
                                                 >> 0x28U))))) 
                  << 0x28U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [3U] >> 0x29U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_3 
                                                   >> 0x29U))))) {
        ++(vlSymsp->__Vcoverage[2679]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_3 
            = ((0xfffffdffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_3) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [3U] 
                                                 >> 0x29U))))) 
                  << 0x29U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [3U] >> 0x2aU)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_3 
                                                   >> 0x2aU))))) {
        ++(vlSymsp->__Vcoverage[2680]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_3 
            = ((0xfffffbffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_3) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [3U] 
                                                 >> 0x2aU))))) 
                  << 0x2aU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [3U] >> 0x2bU)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_3 
                                                   >> 0x2bU))))) {
        ++(vlSymsp->__Vcoverage[2681]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_3 
            = ((0xfffff7ffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_3) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [3U] 
                                                 >> 0x2bU))))) 
                  << 0x2bU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [3U] >> 0x2cU)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_3 
                                                   >> 0x2cU))))) {
        ++(vlSymsp->__Vcoverage[2682]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_3 
            = ((0xffffefffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_3) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [3U] 
                                                 >> 0x2cU))))) 
                  << 0x2cU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [3U] >> 0x2dU)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_3 
                                                   >> 0x2dU))))) {
        ++(vlSymsp->__Vcoverage[2683]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_3 
            = ((0xffffdfffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_3) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [3U] 
                                                 >> 0x2dU))))) 
                  << 0x2dU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [3U] >> 0x2eU)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_3 
                                                   >> 0x2eU))))) {
        ++(vlSymsp->__Vcoverage[2684]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_3 
            = ((0xffffbfffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_3) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [3U] 
                                                 >> 0x2eU))))) 
                  << 0x2eU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [3U] >> 0x2fU)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_3 
                                                   >> 0x2fU))))) {
        ++(vlSymsp->__Vcoverage[2685]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_3 
            = ((0xffff7fffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_3) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [3U] 
                                                 >> 0x2fU))))) 
                  << 0x2fU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [3U] >> 0x30U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_3 
                                                   >> 0x30U))))) {
        ++(vlSymsp->__Vcoverage[2686]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_3 
            = ((0xfffeffffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_3) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [3U] 
                                                 >> 0x30U))))) 
                  << 0x30U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [3U] >> 0x31U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_3 
                                                   >> 0x31U))))) {
        ++(vlSymsp->__Vcoverage[2687]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_3 
            = ((0xfffdffffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_3) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [3U] 
                                                 >> 0x31U))))) 
                  << 0x31U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [3U] >> 0x32U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_3 
                                                   >> 0x32U))))) {
        ++(vlSymsp->__Vcoverage[2688]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_3 
            = ((0xfffbffffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_3) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [3U] 
                                                 >> 0x32U))))) 
                  << 0x32U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [3U] >> 0x33U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_3 
                                                   >> 0x33U))))) {
        ++(vlSymsp->__Vcoverage[2689]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_3 
            = ((0xfff7ffffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_3) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [3U] 
                                                 >> 0x33U))))) 
                  << 0x33U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [3U] >> 0x34U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_3 
                                                   >> 0x34U))))) {
        ++(vlSymsp->__Vcoverage[2690]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_3 
            = ((0xffefffffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_3) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [3U] 
                                                 >> 0x34U))))) 
                  << 0x34U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [3U] >> 0x35U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_3 
                                                   >> 0x35U))))) {
        ++(vlSymsp->__Vcoverage[2691]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_3 
            = ((0xffdfffffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_3) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [3U] 
                                                 >> 0x35U))))) 
                  << 0x35U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [3U] >> 0x36U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_3 
                                                   >> 0x36U))))) {
        ++(vlSymsp->__Vcoverage[2692]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_3 
            = ((0xffbfffffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_3) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [3U] 
                                                 >> 0x36U))))) 
                  << 0x36U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [3U] >> 0x37U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_3 
                                                   >> 0x37U))))) {
        ++(vlSymsp->__Vcoverage[2693]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_3 
            = ((0xff7fffffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_3) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [3U] 
                                                 >> 0x37U))))) 
                  << 0x37U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [3U] >> 0x38U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_3 
                                                   >> 0x38U))))) {
        ++(vlSymsp->__Vcoverage[2694]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_3 
            = ((0xfeffffffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_3) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [3U] 
                                                 >> 0x38U))))) 
                  << 0x38U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [3U] >> 0x39U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_3 
                                                   >> 0x39U))))) {
        ++(vlSymsp->__Vcoverage[2695]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_3 
            = ((0xfdffffffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_3) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [3U] 
                                                 >> 0x39U))))) 
                  << 0x39U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [3U] >> 0x3aU)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_3 
                                                   >> 0x3aU))))) {
        ++(vlSymsp->__Vcoverage[2696]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_3 
            = ((0xfbffffffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_3) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [3U] 
                                                 >> 0x3aU))))) 
                  << 0x3aU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [3U] >> 0x3bU)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_3 
                                                   >> 0x3bU))))) {
        ++(vlSymsp->__Vcoverage[2697]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_3 
            = ((0xf7ffffffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_3) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [3U] 
                                                 >> 0x3bU))))) 
                  << 0x3bU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [3U] >> 0x3cU)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_3 
                                                   >> 0x3cU))))) {
        ++(vlSymsp->__Vcoverage[2698]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_3 
            = ((0xefffffffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_3) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [3U] 
                                                 >> 0x3cU))))) 
                  << 0x3cU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [3U] >> 0x3dU)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_3 
                                                   >> 0x3dU))))) {
        ++(vlSymsp->__Vcoverage[2699]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_3 
            = ((0xdfffffffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_3) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [3U] 
                                                 >> 0x3dU))))) 
                  << 0x3dU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [3U] >> 0x3eU)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_3 
                                                   >> 0x3eU))))) {
        ++(vlSymsp->__Vcoverage[2700]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_3 
            = ((0xbfffffffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_3) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [3U] 
                                                 >> 0x3eU))))) 
                  << 0x3eU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [3U] >> 0x3fU)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_3 
                                                   >> 0x3fU))))) {
        ++(vlSymsp->__Vcoverage[2701]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_3 
            = ((0x7fffffffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_3) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [3U] 
                                                 >> 0x3fU))))) 
                  << 0x3fU));
    }
    if ((1U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                       [4U]) ^ (IData)(vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_4)))) {
        ++(vlSymsp->__Vcoverage[2702]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_4 
            = ((0xfffffffffffffffeULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_4) 
               | (IData)((IData)((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                               [4U])))));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [4U] >> 1U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_4 
                                                >> 1U))))) {
        ++(vlSymsp->__Vcoverage[2703]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_4 
            = ((0xfffffffffffffffdULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_4) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [4U] 
                                                 >> 1U))))) 
                  << 1U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [4U] >> 2U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_4 
                                                >> 2U))))) {
        ++(vlSymsp->__Vcoverage[2704]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_4 
            = ((0xfffffffffffffffbULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_4) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [4U] 
                                                 >> 2U))))) 
                  << 2U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [4U] >> 3U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_4 
                                                >> 3U))))) {
        ++(vlSymsp->__Vcoverage[2705]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_4 
            = ((0xfffffffffffffff7ULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_4) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [4U] 
                                                 >> 3U))))) 
                  << 3U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [4U] >> 4U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_4 
                                                >> 4U))))) {
        ++(vlSymsp->__Vcoverage[2706]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_4 
            = ((0xffffffffffffffefULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_4) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [4U] 
                                                 >> 4U))))) 
                  << 4U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [4U] >> 5U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_4 
                                                >> 5U))))) {
        ++(vlSymsp->__Vcoverage[2707]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_4 
            = ((0xffffffffffffffdfULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_4) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [4U] 
                                                 >> 5U))))) 
                  << 5U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [4U] >> 6U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_4 
                                                >> 6U))))) {
        ++(vlSymsp->__Vcoverage[2708]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_4 
            = ((0xffffffffffffffbfULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_4) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [4U] 
                                                 >> 6U))))) 
                  << 6U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [4U] >> 7U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_4 
                                                >> 7U))))) {
        ++(vlSymsp->__Vcoverage[2709]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_4 
            = ((0xffffffffffffff7fULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_4) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [4U] 
                                                 >> 7U))))) 
                  << 7U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [4U] >> 8U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_4 
                                                >> 8U))))) {
        ++(vlSymsp->__Vcoverage[2710]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_4 
            = ((0xfffffffffffffeffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_4) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [4U] 
                                                 >> 8U))))) 
                  << 8U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [4U] >> 9U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_4 
                                                >> 9U))))) {
        ++(vlSymsp->__Vcoverage[2711]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_4 
            = ((0xfffffffffffffdffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_4) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [4U] 
                                                 >> 9U))))) 
                  << 9U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [4U] >> 0xaU)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_4 
                                                  >> 0xaU))))) {
        ++(vlSymsp->__Vcoverage[2712]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_4 
            = ((0xfffffffffffffbffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_4) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [4U] 
                                                 >> 0xaU))))) 
                  << 0xaU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [4U] >> 0xbU)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_4 
                                                  >> 0xbU))))) {
        ++(vlSymsp->__Vcoverage[2713]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_4 
            = ((0xfffffffffffff7ffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_4) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [4U] 
                                                 >> 0xbU))))) 
                  << 0xbU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [4U] >> 0xcU)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_4 
                                                  >> 0xcU))))) {
        ++(vlSymsp->__Vcoverage[2714]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_4 
            = ((0xffffffffffffefffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_4) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [4U] 
                                                 >> 0xcU))))) 
                  << 0xcU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [4U] >> 0xdU)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_4 
                                                  >> 0xdU))))) {
        ++(vlSymsp->__Vcoverage[2715]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_4 
            = ((0xffffffffffffdfffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_4) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [4U] 
                                                 >> 0xdU))))) 
                  << 0xdU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [4U] >> 0xeU)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_4 
                                                  >> 0xeU))))) {
        ++(vlSymsp->__Vcoverage[2716]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_4 
            = ((0xffffffffffffbfffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_4) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [4U] 
                                                 >> 0xeU))))) 
                  << 0xeU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [4U] >> 0xfU)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_4 
                                                  >> 0xfU))))) {
        ++(vlSymsp->__Vcoverage[2717]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_4 
            = ((0xffffffffffff7fffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_4) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [4U] 
                                                 >> 0xfU))))) 
                  << 0xfU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [4U] >> 0x10U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_4 
                                                   >> 0x10U))))) {
        ++(vlSymsp->__Vcoverage[2718]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_4 
            = ((0xfffffffffffeffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_4) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [4U] 
                                                 >> 0x10U))))) 
                  << 0x10U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [4U] >> 0x11U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_4 
                                                   >> 0x11U))))) {
        ++(vlSymsp->__Vcoverage[2719]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_4 
            = ((0xfffffffffffdffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_4) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [4U] 
                                                 >> 0x11U))))) 
                  << 0x11U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [4U] >> 0x12U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_4 
                                                   >> 0x12U))))) {
        ++(vlSymsp->__Vcoverage[2720]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_4 
            = ((0xfffffffffffbffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_4) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [4U] 
                                                 >> 0x12U))))) 
                  << 0x12U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [4U] >> 0x13U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_4 
                                                   >> 0x13U))))) {
        ++(vlSymsp->__Vcoverage[2721]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_4 
            = ((0xfffffffffff7ffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_4) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [4U] 
                                                 >> 0x13U))))) 
                  << 0x13U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [4U] >> 0x14U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_4 
                                                   >> 0x14U))))) {
        ++(vlSymsp->__Vcoverage[2722]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_4 
            = ((0xffffffffffefffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_4) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [4U] 
                                                 >> 0x14U))))) 
                  << 0x14U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [4U] >> 0x15U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_4 
                                                   >> 0x15U))))) {
        ++(vlSymsp->__Vcoverage[2723]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_4 
            = ((0xffffffffffdfffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_4) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [4U] 
                                                 >> 0x15U))))) 
                  << 0x15U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [4U] >> 0x16U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_4 
                                                   >> 0x16U))))) {
        ++(vlSymsp->__Vcoverage[2724]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_4 
            = ((0xffffffffffbfffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_4) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [4U] 
                                                 >> 0x16U))))) 
                  << 0x16U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [4U] >> 0x17U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_4 
                                                   >> 0x17U))))) {
        ++(vlSymsp->__Vcoverage[2725]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_4 
            = ((0xffffffffff7fffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_4) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [4U] 
                                                 >> 0x17U))))) 
                  << 0x17U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [4U] >> 0x18U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_4 
                                                   >> 0x18U))))) {
        ++(vlSymsp->__Vcoverage[2726]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_4 
            = ((0xfffffffffeffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_4) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [4U] 
                                                 >> 0x18U))))) 
                  << 0x18U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [4U] >> 0x19U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_4 
                                                   >> 0x19U))))) {
        ++(vlSymsp->__Vcoverage[2727]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_4 
            = ((0xfffffffffdffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_4) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [4U] 
                                                 >> 0x19U))))) 
                  << 0x19U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [4U] >> 0x1aU)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_4 
                                                   >> 0x1aU))))) {
        ++(vlSymsp->__Vcoverage[2728]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_4 
            = ((0xfffffffffbffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_4) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [4U] 
                                                 >> 0x1aU))))) 
                  << 0x1aU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [4U] >> 0x1bU)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_4 
                                                   >> 0x1bU))))) {
        ++(vlSymsp->__Vcoverage[2729]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_4 
            = ((0xfffffffff7ffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_4) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [4U] 
                                                 >> 0x1bU))))) 
                  << 0x1bU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [4U] >> 0x1cU)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_4 
                                                   >> 0x1cU))))) {
        ++(vlSymsp->__Vcoverage[2730]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_4 
            = ((0xffffffffefffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_4) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [4U] 
                                                 >> 0x1cU))))) 
                  << 0x1cU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [4U] >> 0x1dU)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_4 
                                                   >> 0x1dU))))) {
        ++(vlSymsp->__Vcoverage[2731]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_4 
            = ((0xffffffffdfffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_4) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [4U] 
                                                 >> 0x1dU))))) 
                  << 0x1dU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [4U] >> 0x1eU)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_4 
                                                   >> 0x1eU))))) {
        ++(vlSymsp->__Vcoverage[2732]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_4 
            = ((0xffffffffbfffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_4) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [4U] 
                                                 >> 0x1eU))))) 
                  << 0x1eU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [4U] >> 0x1fU)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_4 
                                                   >> 0x1fU))))) {
        ++(vlSymsp->__Vcoverage[2733]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_4 
            = ((0xffffffff7fffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_4) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [4U] 
                                                 >> 0x1fU))))) 
                  << 0x1fU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [4U] >> 0x20U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_4 
                                                   >> 0x20U))))) {
        ++(vlSymsp->__Vcoverage[2734]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_4 
            = ((0xfffffffeffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_4) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [4U] 
                                                 >> 0x20U))))) 
                  << 0x20U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [4U] >> 0x21U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_4 
                                                   >> 0x21U))))) {
        ++(vlSymsp->__Vcoverage[2735]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_4 
            = ((0xfffffffdffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_4) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [4U] 
                                                 >> 0x21U))))) 
                  << 0x21U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [4U] >> 0x22U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_4 
                                                   >> 0x22U))))) {
        ++(vlSymsp->__Vcoverage[2736]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_4 
            = ((0xfffffffbffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_4) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [4U] 
                                                 >> 0x22U))))) 
                  << 0x22U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [4U] >> 0x23U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_4 
                                                   >> 0x23U))))) {
        ++(vlSymsp->__Vcoverage[2737]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_4 
            = ((0xfffffff7ffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_4) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [4U] 
                                                 >> 0x23U))))) 
                  << 0x23U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [4U] >> 0x24U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_4 
                                                   >> 0x24U))))) {
        ++(vlSymsp->__Vcoverage[2738]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_4 
            = ((0xffffffefffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_4) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [4U] 
                                                 >> 0x24U))))) 
                  << 0x24U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [4U] >> 0x25U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_4 
                                                   >> 0x25U))))) {
        ++(vlSymsp->__Vcoverage[2739]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_4 
            = ((0xffffffdfffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_4) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [4U] 
                                                 >> 0x25U))))) 
                  << 0x25U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [4U] >> 0x26U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_4 
                                                   >> 0x26U))))) {
        ++(vlSymsp->__Vcoverage[2740]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_4 
            = ((0xffffffbfffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_4) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [4U] 
                                                 >> 0x26U))))) 
                  << 0x26U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [4U] >> 0x27U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_4 
                                                   >> 0x27U))))) {
        ++(vlSymsp->__Vcoverage[2741]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_4 
            = ((0xffffff7fffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_4) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [4U] 
                                                 >> 0x27U))))) 
                  << 0x27U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [4U] >> 0x28U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_4 
                                                   >> 0x28U))))) {
        ++(vlSymsp->__Vcoverage[2742]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_4 
            = ((0xfffffeffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_4) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [4U] 
                                                 >> 0x28U))))) 
                  << 0x28U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [4U] >> 0x29U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_4 
                                                   >> 0x29U))))) {
        ++(vlSymsp->__Vcoverage[2743]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_4 
            = ((0xfffffdffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_4) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [4U] 
                                                 >> 0x29U))))) 
                  << 0x29U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [4U] >> 0x2aU)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_4 
                                                   >> 0x2aU))))) {
        ++(vlSymsp->__Vcoverage[2744]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_4 
            = ((0xfffffbffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_4) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [4U] 
                                                 >> 0x2aU))))) 
                  << 0x2aU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [4U] >> 0x2bU)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_4 
                                                   >> 0x2bU))))) {
        ++(vlSymsp->__Vcoverage[2745]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_4 
            = ((0xfffff7ffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_4) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [4U] 
                                                 >> 0x2bU))))) 
                  << 0x2bU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [4U] >> 0x2cU)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_4 
                                                   >> 0x2cU))))) {
        ++(vlSymsp->__Vcoverage[2746]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_4 
            = ((0xffffefffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_4) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [4U] 
                                                 >> 0x2cU))))) 
                  << 0x2cU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [4U] >> 0x2dU)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_4 
                                                   >> 0x2dU))))) {
        ++(vlSymsp->__Vcoverage[2747]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_4 
            = ((0xffffdfffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_4) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [4U] 
                                                 >> 0x2dU))))) 
                  << 0x2dU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [4U] >> 0x2eU)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_4 
                                                   >> 0x2eU))))) {
        ++(vlSymsp->__Vcoverage[2748]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_4 
            = ((0xffffbfffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_4) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [4U] 
                                                 >> 0x2eU))))) 
                  << 0x2eU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [4U] >> 0x2fU)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_4 
                                                   >> 0x2fU))))) {
        ++(vlSymsp->__Vcoverage[2749]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_4 
            = ((0xffff7fffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_4) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [4U] 
                                                 >> 0x2fU))))) 
                  << 0x2fU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [4U] >> 0x30U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_4 
                                                   >> 0x30U))))) {
        ++(vlSymsp->__Vcoverage[2750]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_4 
            = ((0xfffeffffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_4) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [4U] 
                                                 >> 0x30U))))) 
                  << 0x30U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [4U] >> 0x31U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_4 
                                                   >> 0x31U))))) {
        ++(vlSymsp->__Vcoverage[2751]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_4 
            = ((0xfffdffffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_4) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [4U] 
                                                 >> 0x31U))))) 
                  << 0x31U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [4U] >> 0x32U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_4 
                                                   >> 0x32U))))) {
        ++(vlSymsp->__Vcoverage[2752]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_4 
            = ((0xfffbffffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_4) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [4U] 
                                                 >> 0x32U))))) 
                  << 0x32U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [4U] >> 0x33U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_4 
                                                   >> 0x33U))))) {
        ++(vlSymsp->__Vcoverage[2753]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_4 
            = ((0xfff7ffffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_4) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [4U] 
                                                 >> 0x33U))))) 
                  << 0x33U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [4U] >> 0x34U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_4 
                                                   >> 0x34U))))) {
        ++(vlSymsp->__Vcoverage[2754]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_4 
            = ((0xffefffffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_4) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [4U] 
                                                 >> 0x34U))))) 
                  << 0x34U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [4U] >> 0x35U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_4 
                                                   >> 0x35U))))) {
        ++(vlSymsp->__Vcoverage[2755]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_4 
            = ((0xffdfffffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_4) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [4U] 
                                                 >> 0x35U))))) 
                  << 0x35U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [4U] >> 0x36U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_4 
                                                   >> 0x36U))))) {
        ++(vlSymsp->__Vcoverage[2756]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_4 
            = ((0xffbfffffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_4) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [4U] 
                                                 >> 0x36U))))) 
                  << 0x36U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [4U] >> 0x37U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_4 
                                                   >> 0x37U))))) {
        ++(vlSymsp->__Vcoverage[2757]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_4 
            = ((0xff7fffffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_4) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [4U] 
                                                 >> 0x37U))))) 
                  << 0x37U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [4U] >> 0x38U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_4 
                                                   >> 0x38U))))) {
        ++(vlSymsp->__Vcoverage[2758]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_4 
            = ((0xfeffffffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_4) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [4U] 
                                                 >> 0x38U))))) 
                  << 0x38U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [4U] >> 0x39U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_4 
                                                   >> 0x39U))))) {
        ++(vlSymsp->__Vcoverage[2759]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_4 
            = ((0xfdffffffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_4) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [4U] 
                                                 >> 0x39U))))) 
                  << 0x39U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [4U] >> 0x3aU)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_4 
                                                   >> 0x3aU))))) {
        ++(vlSymsp->__Vcoverage[2760]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_4 
            = ((0xfbffffffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_4) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [4U] 
                                                 >> 0x3aU))))) 
                  << 0x3aU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [4U] >> 0x3bU)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_4 
                                                   >> 0x3bU))))) {
        ++(vlSymsp->__Vcoverage[2761]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_4 
            = ((0xf7ffffffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_4) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [4U] 
                                                 >> 0x3bU))))) 
                  << 0x3bU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [4U] >> 0x3cU)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_4 
                                                   >> 0x3cU))))) {
        ++(vlSymsp->__Vcoverage[2762]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_4 
            = ((0xefffffffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_4) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [4U] 
                                                 >> 0x3cU))))) 
                  << 0x3cU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [4U] >> 0x3dU)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_4 
                                                   >> 0x3dU))))) {
        ++(vlSymsp->__Vcoverage[2763]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_4 
            = ((0xdfffffffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_4) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [4U] 
                                                 >> 0x3dU))))) 
                  << 0x3dU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [4U] >> 0x3eU)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_4 
                                                   >> 0x3eU))))) {
        ++(vlSymsp->__Vcoverage[2764]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_4 
            = ((0xbfffffffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_4) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [4U] 
                                                 >> 0x3eU))))) 
                  << 0x3eU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [4U] >> 0x3fU)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_4 
                                                   >> 0x3fU))))) {
        ++(vlSymsp->__Vcoverage[2765]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_4 
            = ((0x7fffffffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_4) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [4U] 
                                                 >> 0x3fU))))) 
                  << 0x3fU));
    }
    if ((1U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                       [5U]) ^ (IData)(vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_5)))) {
        ++(vlSymsp->__Vcoverage[2766]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_5 
            = ((0xfffffffffffffffeULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_5) 
               | (IData)((IData)((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                               [5U])))));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [5U] >> 1U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_5 
                                                >> 1U))))) {
        ++(vlSymsp->__Vcoverage[2767]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_5 
            = ((0xfffffffffffffffdULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_5) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [5U] 
                                                 >> 1U))))) 
                  << 1U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [5U] >> 2U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_5 
                                                >> 2U))))) {
        ++(vlSymsp->__Vcoverage[2768]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_5 
            = ((0xfffffffffffffffbULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_5) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [5U] 
                                                 >> 2U))))) 
                  << 2U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [5U] >> 3U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_5 
                                                >> 3U))))) {
        ++(vlSymsp->__Vcoverage[2769]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_5 
            = ((0xfffffffffffffff7ULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_5) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [5U] 
                                                 >> 3U))))) 
                  << 3U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [5U] >> 4U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_5 
                                                >> 4U))))) {
        ++(vlSymsp->__Vcoverage[2770]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_5 
            = ((0xffffffffffffffefULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_5) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [5U] 
                                                 >> 4U))))) 
                  << 4U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [5U] >> 5U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_5 
                                                >> 5U))))) {
        ++(vlSymsp->__Vcoverage[2771]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_5 
            = ((0xffffffffffffffdfULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_5) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [5U] 
                                                 >> 5U))))) 
                  << 5U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [5U] >> 6U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_5 
                                                >> 6U))))) {
        ++(vlSymsp->__Vcoverage[2772]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_5 
            = ((0xffffffffffffffbfULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_5) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [5U] 
                                                 >> 6U))))) 
                  << 6U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [5U] >> 7U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_5 
                                                >> 7U))))) {
        ++(vlSymsp->__Vcoverage[2773]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_5 
            = ((0xffffffffffffff7fULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_5) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [5U] 
                                                 >> 7U))))) 
                  << 7U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [5U] >> 8U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_5 
                                                >> 8U))))) {
        ++(vlSymsp->__Vcoverage[2774]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_5 
            = ((0xfffffffffffffeffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_5) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [5U] 
                                                 >> 8U))))) 
                  << 8U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [5U] >> 9U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_5 
                                                >> 9U))))) {
        ++(vlSymsp->__Vcoverage[2775]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_5 
            = ((0xfffffffffffffdffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_5) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [5U] 
                                                 >> 9U))))) 
                  << 9U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [5U] >> 0xaU)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_5 
                                                  >> 0xaU))))) {
        ++(vlSymsp->__Vcoverage[2776]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_5 
            = ((0xfffffffffffffbffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_5) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [5U] 
                                                 >> 0xaU))))) 
                  << 0xaU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [5U] >> 0xbU)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_5 
                                                  >> 0xbU))))) {
        ++(vlSymsp->__Vcoverage[2777]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_5 
            = ((0xfffffffffffff7ffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_5) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [5U] 
                                                 >> 0xbU))))) 
                  << 0xbU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [5U] >> 0xcU)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_5 
                                                  >> 0xcU))))) {
        ++(vlSymsp->__Vcoverage[2778]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_5 
            = ((0xffffffffffffefffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_5) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [5U] 
                                                 >> 0xcU))))) 
                  << 0xcU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [5U] >> 0xdU)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_5 
                                                  >> 0xdU))))) {
        ++(vlSymsp->__Vcoverage[2779]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_5 
            = ((0xffffffffffffdfffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_5) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [5U] 
                                                 >> 0xdU))))) 
                  << 0xdU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [5U] >> 0xeU)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_5 
                                                  >> 0xeU))))) {
        ++(vlSymsp->__Vcoverage[2780]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_5 
            = ((0xffffffffffffbfffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_5) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [5U] 
                                                 >> 0xeU))))) 
                  << 0xeU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [5U] >> 0xfU)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_5 
                                                  >> 0xfU))))) {
        ++(vlSymsp->__Vcoverage[2781]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_5 
            = ((0xffffffffffff7fffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_5) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [5U] 
                                                 >> 0xfU))))) 
                  << 0xfU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [5U] >> 0x10U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_5 
                                                   >> 0x10U))))) {
        ++(vlSymsp->__Vcoverage[2782]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_5 
            = ((0xfffffffffffeffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_5) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [5U] 
                                                 >> 0x10U))))) 
                  << 0x10U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [5U] >> 0x11U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_5 
                                                   >> 0x11U))))) {
        ++(vlSymsp->__Vcoverage[2783]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_5 
            = ((0xfffffffffffdffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_5) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [5U] 
                                                 >> 0x11U))))) 
                  << 0x11U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [5U] >> 0x12U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_5 
                                                   >> 0x12U))))) {
        ++(vlSymsp->__Vcoverage[2784]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_5 
            = ((0xfffffffffffbffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_5) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [5U] 
                                                 >> 0x12U))))) 
                  << 0x12U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [5U] >> 0x13U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_5 
                                                   >> 0x13U))))) {
        ++(vlSymsp->__Vcoverage[2785]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_5 
            = ((0xfffffffffff7ffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_5) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [5U] 
                                                 >> 0x13U))))) 
                  << 0x13U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [5U] >> 0x14U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_5 
                                                   >> 0x14U))))) {
        ++(vlSymsp->__Vcoverage[2786]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_5 
            = ((0xffffffffffefffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_5) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [5U] 
                                                 >> 0x14U))))) 
                  << 0x14U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [5U] >> 0x15U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_5 
                                                   >> 0x15U))))) {
        ++(vlSymsp->__Vcoverage[2787]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_5 
            = ((0xffffffffffdfffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_5) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [5U] 
                                                 >> 0x15U))))) 
                  << 0x15U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [5U] >> 0x16U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_5 
                                                   >> 0x16U))))) {
        ++(vlSymsp->__Vcoverage[2788]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_5 
            = ((0xffffffffffbfffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_5) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [5U] 
                                                 >> 0x16U))))) 
                  << 0x16U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [5U] >> 0x17U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_5 
                                                   >> 0x17U))))) {
        ++(vlSymsp->__Vcoverage[2789]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_5 
            = ((0xffffffffff7fffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_5) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [5U] 
                                                 >> 0x17U))))) 
                  << 0x17U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [5U] >> 0x18U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_5 
                                                   >> 0x18U))))) {
        ++(vlSymsp->__Vcoverage[2790]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_5 
            = ((0xfffffffffeffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_5) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [5U] 
                                                 >> 0x18U))))) 
                  << 0x18U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [5U] >> 0x19U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_5 
                                                   >> 0x19U))))) {
        ++(vlSymsp->__Vcoverage[2791]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_5 
            = ((0xfffffffffdffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_5) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [5U] 
                                                 >> 0x19U))))) 
                  << 0x19U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [5U] >> 0x1aU)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_5 
                                                   >> 0x1aU))))) {
        ++(vlSymsp->__Vcoverage[2792]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_5 
            = ((0xfffffffffbffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_5) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [5U] 
                                                 >> 0x1aU))))) 
                  << 0x1aU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [5U] >> 0x1bU)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_5 
                                                   >> 0x1bU))))) {
        ++(vlSymsp->__Vcoverage[2793]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_5 
            = ((0xfffffffff7ffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_5) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [5U] 
                                                 >> 0x1bU))))) 
                  << 0x1bU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [5U] >> 0x1cU)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_5 
                                                   >> 0x1cU))))) {
        ++(vlSymsp->__Vcoverage[2794]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_5 
            = ((0xffffffffefffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_5) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [5U] 
                                                 >> 0x1cU))))) 
                  << 0x1cU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [5U] >> 0x1dU)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_5 
                                                   >> 0x1dU))))) {
        ++(vlSymsp->__Vcoverage[2795]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_5 
            = ((0xffffffffdfffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_5) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [5U] 
                                                 >> 0x1dU))))) 
                  << 0x1dU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [5U] >> 0x1eU)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_5 
                                                   >> 0x1eU))))) {
        ++(vlSymsp->__Vcoverage[2796]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_5 
            = ((0xffffffffbfffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_5) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [5U] 
                                                 >> 0x1eU))))) 
                  << 0x1eU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [5U] >> 0x1fU)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_5 
                                                   >> 0x1fU))))) {
        ++(vlSymsp->__Vcoverage[2797]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_5 
            = ((0xffffffff7fffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_5) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [5U] 
                                                 >> 0x1fU))))) 
                  << 0x1fU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [5U] >> 0x20U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_5 
                                                   >> 0x20U))))) {
        ++(vlSymsp->__Vcoverage[2798]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_5 
            = ((0xfffffffeffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_5) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [5U] 
                                                 >> 0x20U))))) 
                  << 0x20U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [5U] >> 0x21U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_5 
                                                   >> 0x21U))))) {
        ++(vlSymsp->__Vcoverage[2799]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_5 
            = ((0xfffffffdffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_5) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [5U] 
                                                 >> 0x21U))))) 
                  << 0x21U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [5U] >> 0x22U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_5 
                                                   >> 0x22U))))) {
        ++(vlSymsp->__Vcoverage[2800]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_5 
            = ((0xfffffffbffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_5) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [5U] 
                                                 >> 0x22U))))) 
                  << 0x22U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [5U] >> 0x23U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_5 
                                                   >> 0x23U))))) {
        ++(vlSymsp->__Vcoverage[2801]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_5 
            = ((0xfffffff7ffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_5) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [5U] 
                                                 >> 0x23U))))) 
                  << 0x23U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [5U] >> 0x24U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_5 
                                                   >> 0x24U))))) {
        ++(vlSymsp->__Vcoverage[2802]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_5 
            = ((0xffffffefffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_5) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [5U] 
                                                 >> 0x24U))))) 
                  << 0x24U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [5U] >> 0x25U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_5 
                                                   >> 0x25U))))) {
        ++(vlSymsp->__Vcoverage[2803]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_5 
            = ((0xffffffdfffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_5) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [5U] 
                                                 >> 0x25U))))) 
                  << 0x25U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [5U] >> 0x26U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_5 
                                                   >> 0x26U))))) {
        ++(vlSymsp->__Vcoverage[2804]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_5 
            = ((0xffffffbfffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_5) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [5U] 
                                                 >> 0x26U))))) 
                  << 0x26U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [5U] >> 0x27U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_5 
                                                   >> 0x27U))))) {
        ++(vlSymsp->__Vcoverage[2805]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_5 
            = ((0xffffff7fffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_5) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [5U] 
                                                 >> 0x27U))))) 
                  << 0x27U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [5U] >> 0x28U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_5 
                                                   >> 0x28U))))) {
        ++(vlSymsp->__Vcoverage[2806]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_5 
            = ((0xfffffeffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_5) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [5U] 
                                                 >> 0x28U))))) 
                  << 0x28U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [5U] >> 0x29U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_5 
                                                   >> 0x29U))))) {
        ++(vlSymsp->__Vcoverage[2807]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_5 
            = ((0xfffffdffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_5) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [5U] 
                                                 >> 0x29U))))) 
                  << 0x29U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [5U] >> 0x2aU)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_5 
                                                   >> 0x2aU))))) {
        ++(vlSymsp->__Vcoverage[2808]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_5 
            = ((0xfffffbffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_5) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [5U] 
                                                 >> 0x2aU))))) 
                  << 0x2aU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [5U] >> 0x2bU)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_5 
                                                   >> 0x2bU))))) {
        ++(vlSymsp->__Vcoverage[2809]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_5 
            = ((0xfffff7ffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_5) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [5U] 
                                                 >> 0x2bU))))) 
                  << 0x2bU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [5U] >> 0x2cU)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_5 
                                                   >> 0x2cU))))) {
        ++(vlSymsp->__Vcoverage[2810]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_5 
            = ((0xffffefffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_5) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [5U] 
                                                 >> 0x2cU))))) 
                  << 0x2cU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [5U] >> 0x2dU)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_5 
                                                   >> 0x2dU))))) {
        ++(vlSymsp->__Vcoverage[2811]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_5 
            = ((0xffffdfffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_5) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [5U] 
                                                 >> 0x2dU))))) 
                  << 0x2dU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [5U] >> 0x2eU)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_5 
                                                   >> 0x2eU))))) {
        ++(vlSymsp->__Vcoverage[2812]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_5 
            = ((0xffffbfffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_5) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [5U] 
                                                 >> 0x2eU))))) 
                  << 0x2eU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [5U] >> 0x2fU)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_5 
                                                   >> 0x2fU))))) {
        ++(vlSymsp->__Vcoverage[2813]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_5 
            = ((0xffff7fffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_5) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [5U] 
                                                 >> 0x2fU))))) 
                  << 0x2fU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [5U] >> 0x30U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_5 
                                                   >> 0x30U))))) {
        ++(vlSymsp->__Vcoverage[2814]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_5 
            = ((0xfffeffffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_5) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [5U] 
                                                 >> 0x30U))))) 
                  << 0x30U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [5U] >> 0x31U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_5 
                                                   >> 0x31U))))) {
        ++(vlSymsp->__Vcoverage[2815]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_5 
            = ((0xfffdffffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_5) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [5U] 
                                                 >> 0x31U))))) 
                  << 0x31U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [5U] >> 0x32U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_5 
                                                   >> 0x32U))))) {
        ++(vlSymsp->__Vcoverage[2816]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_5 
            = ((0xfffbffffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_5) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [5U] 
                                                 >> 0x32U))))) 
                  << 0x32U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [5U] >> 0x33U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_5 
                                                   >> 0x33U))))) {
        ++(vlSymsp->__Vcoverage[2817]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_5 
            = ((0xfff7ffffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_5) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [5U] 
                                                 >> 0x33U))))) 
                  << 0x33U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [5U] >> 0x34U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_5 
                                                   >> 0x34U))))) {
        ++(vlSymsp->__Vcoverage[2818]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_5 
            = ((0xffefffffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_5) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [5U] 
                                                 >> 0x34U))))) 
                  << 0x34U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [5U] >> 0x35U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_5 
                                                   >> 0x35U))))) {
        ++(vlSymsp->__Vcoverage[2819]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_5 
            = ((0xffdfffffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_5) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [5U] 
                                                 >> 0x35U))))) 
                  << 0x35U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [5U] >> 0x36U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_5 
                                                   >> 0x36U))))) {
        ++(vlSymsp->__Vcoverage[2820]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_5 
            = ((0xffbfffffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_5) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [5U] 
                                                 >> 0x36U))))) 
                  << 0x36U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [5U] >> 0x37U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_5 
                                                   >> 0x37U))))) {
        ++(vlSymsp->__Vcoverage[2821]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_5 
            = ((0xff7fffffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_5) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [5U] 
                                                 >> 0x37U))))) 
                  << 0x37U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [5U] >> 0x38U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_5 
                                                   >> 0x38U))))) {
        ++(vlSymsp->__Vcoverage[2822]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_5 
            = ((0xfeffffffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_5) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [5U] 
                                                 >> 0x38U))))) 
                  << 0x38U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [5U] >> 0x39U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_5 
                                                   >> 0x39U))))) {
        ++(vlSymsp->__Vcoverage[2823]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_5 
            = ((0xfdffffffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_5) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [5U] 
                                                 >> 0x39U))))) 
                  << 0x39U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [5U] >> 0x3aU)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_5 
                                                   >> 0x3aU))))) {
        ++(vlSymsp->__Vcoverage[2824]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_5 
            = ((0xfbffffffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_5) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [5U] 
                                                 >> 0x3aU))))) 
                  << 0x3aU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [5U] >> 0x3bU)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_5 
                                                   >> 0x3bU))))) {
        ++(vlSymsp->__Vcoverage[2825]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_5 
            = ((0xf7ffffffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_5) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [5U] 
                                                 >> 0x3bU))))) 
                  << 0x3bU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [5U] >> 0x3cU)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_5 
                                                   >> 0x3cU))))) {
        ++(vlSymsp->__Vcoverage[2826]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_5 
            = ((0xefffffffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_5) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [5U] 
                                                 >> 0x3cU))))) 
                  << 0x3cU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [5U] >> 0x3dU)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_5 
                                                   >> 0x3dU))))) {
        ++(vlSymsp->__Vcoverage[2827]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_5 
            = ((0xdfffffffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_5) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [5U] 
                                                 >> 0x3dU))))) 
                  << 0x3dU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [5U] >> 0x3eU)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_5 
                                                   >> 0x3eU))))) {
        ++(vlSymsp->__Vcoverage[2828]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_5 
            = ((0xbfffffffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_5) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [5U] 
                                                 >> 0x3eU))))) 
                  << 0x3eU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [5U] >> 0x3fU)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_5 
                                                   >> 0x3fU))))) {
        ++(vlSymsp->__Vcoverage[2829]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_5 
            = ((0x7fffffffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_5) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [5U] 
                                                 >> 0x3fU))))) 
                  << 0x3fU));
    }
    if ((1U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                       [6U]) ^ (IData)(vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_6)))) {
        ++(vlSymsp->__Vcoverage[2830]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_6 
            = ((0xfffffffffffffffeULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_6) 
               | (IData)((IData)((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                               [6U])))));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [6U] >> 1U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_6 
                                                >> 1U))))) {
        ++(vlSymsp->__Vcoverage[2831]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_6 
            = ((0xfffffffffffffffdULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_6) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [6U] 
                                                 >> 1U))))) 
                  << 1U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [6U] >> 2U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_6 
                                                >> 2U))))) {
        ++(vlSymsp->__Vcoverage[2832]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_6 
            = ((0xfffffffffffffffbULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_6) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [6U] 
                                                 >> 2U))))) 
                  << 2U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [6U] >> 3U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_6 
                                                >> 3U))))) {
        ++(vlSymsp->__Vcoverage[2833]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_6 
            = ((0xfffffffffffffff7ULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_6) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [6U] 
                                                 >> 3U))))) 
                  << 3U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [6U] >> 4U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_6 
                                                >> 4U))))) {
        ++(vlSymsp->__Vcoverage[2834]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_6 
            = ((0xffffffffffffffefULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_6) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [6U] 
                                                 >> 4U))))) 
                  << 4U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [6U] >> 5U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_6 
                                                >> 5U))))) {
        ++(vlSymsp->__Vcoverage[2835]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_6 
            = ((0xffffffffffffffdfULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_6) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [6U] 
                                                 >> 5U))))) 
                  << 5U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [6U] >> 6U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_6 
                                                >> 6U))))) {
        ++(vlSymsp->__Vcoverage[2836]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_6 
            = ((0xffffffffffffffbfULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_6) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [6U] 
                                                 >> 6U))))) 
                  << 6U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [6U] >> 7U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_6 
                                                >> 7U))))) {
        ++(vlSymsp->__Vcoverage[2837]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_6 
            = ((0xffffffffffffff7fULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_6) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [6U] 
                                                 >> 7U))))) 
                  << 7U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [6U] >> 8U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_6 
                                                >> 8U))))) {
        ++(vlSymsp->__Vcoverage[2838]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_6 
            = ((0xfffffffffffffeffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_6) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [6U] 
                                                 >> 8U))))) 
                  << 8U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [6U] >> 9U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_6 
                                                >> 9U))))) {
        ++(vlSymsp->__Vcoverage[2839]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_6 
            = ((0xfffffffffffffdffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_6) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [6U] 
                                                 >> 9U))))) 
                  << 9U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [6U] >> 0xaU)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_6 
                                                  >> 0xaU))))) {
        ++(vlSymsp->__Vcoverage[2840]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_6 
            = ((0xfffffffffffffbffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_6) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [6U] 
                                                 >> 0xaU))))) 
                  << 0xaU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [6U] >> 0xbU)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_6 
                                                  >> 0xbU))))) {
        ++(vlSymsp->__Vcoverage[2841]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_6 
            = ((0xfffffffffffff7ffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_6) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [6U] 
                                                 >> 0xbU))))) 
                  << 0xbU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [6U] >> 0xcU)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_6 
                                                  >> 0xcU))))) {
        ++(vlSymsp->__Vcoverage[2842]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_6 
            = ((0xffffffffffffefffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_6) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [6U] 
                                                 >> 0xcU))))) 
                  << 0xcU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [6U] >> 0xdU)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_6 
                                                  >> 0xdU))))) {
        ++(vlSymsp->__Vcoverage[2843]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_6 
            = ((0xffffffffffffdfffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_6) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [6U] 
                                                 >> 0xdU))))) 
                  << 0xdU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [6U] >> 0xeU)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_6 
                                                  >> 0xeU))))) {
        ++(vlSymsp->__Vcoverage[2844]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_6 
            = ((0xffffffffffffbfffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_6) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [6U] 
                                                 >> 0xeU))))) 
                  << 0xeU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [6U] >> 0xfU)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_6 
                                                  >> 0xfU))))) {
        ++(vlSymsp->__Vcoverage[2845]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_6 
            = ((0xffffffffffff7fffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_6) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [6U] 
                                                 >> 0xfU))))) 
                  << 0xfU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [6U] >> 0x10U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_6 
                                                   >> 0x10U))))) {
        ++(vlSymsp->__Vcoverage[2846]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_6 
            = ((0xfffffffffffeffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_6) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [6U] 
                                                 >> 0x10U))))) 
                  << 0x10U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [6U] >> 0x11U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_6 
                                                   >> 0x11U))))) {
        ++(vlSymsp->__Vcoverage[2847]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_6 
            = ((0xfffffffffffdffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_6) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [6U] 
                                                 >> 0x11U))))) 
                  << 0x11U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [6U] >> 0x12U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_6 
                                                   >> 0x12U))))) {
        ++(vlSymsp->__Vcoverage[2848]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_6 
            = ((0xfffffffffffbffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_6) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [6U] 
                                                 >> 0x12U))))) 
                  << 0x12U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [6U] >> 0x13U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_6 
                                                   >> 0x13U))))) {
        ++(vlSymsp->__Vcoverage[2849]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_6 
            = ((0xfffffffffff7ffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_6) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [6U] 
                                                 >> 0x13U))))) 
                  << 0x13U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [6U] >> 0x14U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_6 
                                                   >> 0x14U))))) {
        ++(vlSymsp->__Vcoverage[2850]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_6 
            = ((0xffffffffffefffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_6) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [6U] 
                                                 >> 0x14U))))) 
                  << 0x14U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [6U] >> 0x15U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_6 
                                                   >> 0x15U))))) {
        ++(vlSymsp->__Vcoverage[2851]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_6 
            = ((0xffffffffffdfffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_6) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [6U] 
                                                 >> 0x15U))))) 
                  << 0x15U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [6U] >> 0x16U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_6 
                                                   >> 0x16U))))) {
        ++(vlSymsp->__Vcoverage[2852]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_6 
            = ((0xffffffffffbfffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_6) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [6U] 
                                                 >> 0x16U))))) 
                  << 0x16U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [6U] >> 0x17U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_6 
                                                   >> 0x17U))))) {
        ++(vlSymsp->__Vcoverage[2853]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_6 
            = ((0xffffffffff7fffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_6) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [6U] 
                                                 >> 0x17U))))) 
                  << 0x17U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [6U] >> 0x18U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_6 
                                                   >> 0x18U))))) {
        ++(vlSymsp->__Vcoverage[2854]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_6 
            = ((0xfffffffffeffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_6) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [6U] 
                                                 >> 0x18U))))) 
                  << 0x18U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [6U] >> 0x19U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_6 
                                                   >> 0x19U))))) {
        ++(vlSymsp->__Vcoverage[2855]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_6 
            = ((0xfffffffffdffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_6) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [6U] 
                                                 >> 0x19U))))) 
                  << 0x19U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [6U] >> 0x1aU)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_6 
                                                   >> 0x1aU))))) {
        ++(vlSymsp->__Vcoverage[2856]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_6 
            = ((0xfffffffffbffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_6) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [6U] 
                                                 >> 0x1aU))))) 
                  << 0x1aU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [6U] >> 0x1bU)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_6 
                                                   >> 0x1bU))))) {
        ++(vlSymsp->__Vcoverage[2857]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_6 
            = ((0xfffffffff7ffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_6) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [6U] 
                                                 >> 0x1bU))))) 
                  << 0x1bU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [6U] >> 0x1cU)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_6 
                                                   >> 0x1cU))))) {
        ++(vlSymsp->__Vcoverage[2858]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_6 
            = ((0xffffffffefffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_6) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [6U] 
                                                 >> 0x1cU))))) 
                  << 0x1cU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [6U] >> 0x1dU)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_6 
                                                   >> 0x1dU))))) {
        ++(vlSymsp->__Vcoverage[2859]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_6 
            = ((0xffffffffdfffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_6) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [6U] 
                                                 >> 0x1dU))))) 
                  << 0x1dU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [6U] >> 0x1eU)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_6 
                                                   >> 0x1eU))))) {
        ++(vlSymsp->__Vcoverage[2860]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_6 
            = ((0xffffffffbfffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_6) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [6U] 
                                                 >> 0x1eU))))) 
                  << 0x1eU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [6U] >> 0x1fU)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_6 
                                                   >> 0x1fU))))) {
        ++(vlSymsp->__Vcoverage[2861]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_6 
            = ((0xffffffff7fffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_6) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [6U] 
                                                 >> 0x1fU))))) 
                  << 0x1fU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [6U] >> 0x20U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_6 
                                                   >> 0x20U))))) {
        ++(vlSymsp->__Vcoverage[2862]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_6 
            = ((0xfffffffeffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_6) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [6U] 
                                                 >> 0x20U))))) 
                  << 0x20U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [6U] >> 0x21U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_6 
                                                   >> 0x21U))))) {
        ++(vlSymsp->__Vcoverage[2863]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_6 
            = ((0xfffffffdffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_6) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [6U] 
                                                 >> 0x21U))))) 
                  << 0x21U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [6U] >> 0x22U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_6 
                                                   >> 0x22U))))) {
        ++(vlSymsp->__Vcoverage[2864]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_6 
            = ((0xfffffffbffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_6) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [6U] 
                                                 >> 0x22U))))) 
                  << 0x22U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [6U] >> 0x23U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_6 
                                                   >> 0x23U))))) {
        ++(vlSymsp->__Vcoverage[2865]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_6 
            = ((0xfffffff7ffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_6) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [6U] 
                                                 >> 0x23U))))) 
                  << 0x23U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [6U] >> 0x24U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_6 
                                                   >> 0x24U))))) {
        ++(vlSymsp->__Vcoverage[2866]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_6 
            = ((0xffffffefffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_6) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [6U] 
                                                 >> 0x24U))))) 
                  << 0x24U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [6U] >> 0x25U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_6 
                                                   >> 0x25U))))) {
        ++(vlSymsp->__Vcoverage[2867]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_6 
            = ((0xffffffdfffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_6) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [6U] 
                                                 >> 0x25U))))) 
                  << 0x25U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [6U] >> 0x26U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_6 
                                                   >> 0x26U))))) {
        ++(vlSymsp->__Vcoverage[2868]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_6 
            = ((0xffffffbfffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_6) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [6U] 
                                                 >> 0x26U))))) 
                  << 0x26U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [6U] >> 0x27U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_6 
                                                   >> 0x27U))))) {
        ++(vlSymsp->__Vcoverage[2869]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_6 
            = ((0xffffff7fffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_6) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [6U] 
                                                 >> 0x27U))))) 
                  << 0x27U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [6U] >> 0x28U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_6 
                                                   >> 0x28U))))) {
        ++(vlSymsp->__Vcoverage[2870]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_6 
            = ((0xfffffeffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_6) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [6U] 
                                                 >> 0x28U))))) 
                  << 0x28U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [6U] >> 0x29U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_6 
                                                   >> 0x29U))))) {
        ++(vlSymsp->__Vcoverage[2871]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_6 
            = ((0xfffffdffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_6) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [6U] 
                                                 >> 0x29U))))) 
                  << 0x29U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [6U] >> 0x2aU)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_6 
                                                   >> 0x2aU))))) {
        ++(vlSymsp->__Vcoverage[2872]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_6 
            = ((0xfffffbffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_6) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [6U] 
                                                 >> 0x2aU))))) 
                  << 0x2aU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [6U] >> 0x2bU)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_6 
                                                   >> 0x2bU))))) {
        ++(vlSymsp->__Vcoverage[2873]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_6 
            = ((0xfffff7ffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_6) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [6U] 
                                                 >> 0x2bU))))) 
                  << 0x2bU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [6U] >> 0x2cU)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_6 
                                                   >> 0x2cU))))) {
        ++(vlSymsp->__Vcoverage[2874]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_6 
            = ((0xffffefffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_6) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [6U] 
                                                 >> 0x2cU))))) 
                  << 0x2cU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [6U] >> 0x2dU)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_6 
                                                   >> 0x2dU))))) {
        ++(vlSymsp->__Vcoverage[2875]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_6 
            = ((0xffffdfffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_6) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [6U] 
                                                 >> 0x2dU))))) 
                  << 0x2dU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [6U] >> 0x2eU)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_6 
                                                   >> 0x2eU))))) {
        ++(vlSymsp->__Vcoverage[2876]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_6 
            = ((0xffffbfffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_6) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [6U] 
                                                 >> 0x2eU))))) 
                  << 0x2eU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [6U] >> 0x2fU)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_6 
                                                   >> 0x2fU))))) {
        ++(vlSymsp->__Vcoverage[2877]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_6 
            = ((0xffff7fffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_6) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [6U] 
                                                 >> 0x2fU))))) 
                  << 0x2fU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [6U] >> 0x30U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_6 
                                                   >> 0x30U))))) {
        ++(vlSymsp->__Vcoverage[2878]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_6 
            = ((0xfffeffffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_6) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [6U] 
                                                 >> 0x30U))))) 
                  << 0x30U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [6U] >> 0x31U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_6 
                                                   >> 0x31U))))) {
        ++(vlSymsp->__Vcoverage[2879]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_6 
            = ((0xfffdffffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_6) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [6U] 
                                                 >> 0x31U))))) 
                  << 0x31U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [6U] >> 0x32U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_6 
                                                   >> 0x32U))))) {
        ++(vlSymsp->__Vcoverage[2880]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_6 
            = ((0xfffbffffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_6) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [6U] 
                                                 >> 0x32U))))) 
                  << 0x32U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [6U] >> 0x33U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_6 
                                                   >> 0x33U))))) {
        ++(vlSymsp->__Vcoverage[2881]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_6 
            = ((0xfff7ffffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_6) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [6U] 
                                                 >> 0x33U))))) 
                  << 0x33U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [6U] >> 0x34U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_6 
                                                   >> 0x34U))))) {
        ++(vlSymsp->__Vcoverage[2882]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_6 
            = ((0xffefffffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_6) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [6U] 
                                                 >> 0x34U))))) 
                  << 0x34U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [6U] >> 0x35U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_6 
                                                   >> 0x35U))))) {
        ++(vlSymsp->__Vcoverage[2883]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_6 
            = ((0xffdfffffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_6) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [6U] 
                                                 >> 0x35U))))) 
                  << 0x35U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [6U] >> 0x36U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_6 
                                                   >> 0x36U))))) {
        ++(vlSymsp->__Vcoverage[2884]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_6 
            = ((0xffbfffffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_6) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [6U] 
                                                 >> 0x36U))))) 
                  << 0x36U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [6U] >> 0x37U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_6 
                                                   >> 0x37U))))) {
        ++(vlSymsp->__Vcoverage[2885]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_6 
            = ((0xff7fffffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_6) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [6U] 
                                                 >> 0x37U))))) 
                  << 0x37U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [6U] >> 0x38U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_6 
                                                   >> 0x38U))))) {
        ++(vlSymsp->__Vcoverage[2886]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_6 
            = ((0xfeffffffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_6) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [6U] 
                                                 >> 0x38U))))) 
                  << 0x38U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [6U] >> 0x39U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_6 
                                                   >> 0x39U))))) {
        ++(vlSymsp->__Vcoverage[2887]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_6 
            = ((0xfdffffffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_6) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [6U] 
                                                 >> 0x39U))))) 
                  << 0x39U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [6U] >> 0x3aU)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_6 
                                                   >> 0x3aU))))) {
        ++(vlSymsp->__Vcoverage[2888]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_6 
            = ((0xfbffffffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_6) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [6U] 
                                                 >> 0x3aU))))) 
                  << 0x3aU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [6U] >> 0x3bU)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_6 
                                                   >> 0x3bU))))) {
        ++(vlSymsp->__Vcoverage[2889]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_6 
            = ((0xf7ffffffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_6) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [6U] 
                                                 >> 0x3bU))))) 
                  << 0x3bU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [6U] >> 0x3cU)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_6 
                                                   >> 0x3cU))))) {
        ++(vlSymsp->__Vcoverage[2890]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_6 
            = ((0xefffffffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_6) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [6U] 
                                                 >> 0x3cU))))) 
                  << 0x3cU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [6U] >> 0x3dU)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_6 
                                                   >> 0x3dU))))) {
        ++(vlSymsp->__Vcoverage[2891]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_6 
            = ((0xdfffffffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_6) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [6U] 
                                                 >> 0x3dU))))) 
                  << 0x3dU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [6U] >> 0x3eU)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_6 
                                                   >> 0x3eU))))) {
        ++(vlSymsp->__Vcoverage[2892]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_6 
            = ((0xbfffffffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_6) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [6U] 
                                                 >> 0x3eU))))) 
                  << 0x3eU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [6U] >> 0x3fU)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_6 
                                                   >> 0x3fU))))) {
        ++(vlSymsp->__Vcoverage[2893]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_6 
            = ((0x7fffffffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_6) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [6U] 
                                                 >> 0x3fU))))) 
                  << 0x3fU));
    }
    if ((1U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                       [7U]) ^ (IData)(vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_7)))) {
        ++(vlSymsp->__Vcoverage[2894]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_7 
            = ((0xfffffffffffffffeULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_7) 
               | (IData)((IData)((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                               [7U])))));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [7U] >> 1U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_7 
                                                >> 1U))))) {
        ++(vlSymsp->__Vcoverage[2895]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_7 
            = ((0xfffffffffffffffdULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_7) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [7U] 
                                                 >> 1U))))) 
                  << 1U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [7U] >> 2U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_7 
                                                >> 2U))))) {
        ++(vlSymsp->__Vcoverage[2896]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_7 
            = ((0xfffffffffffffffbULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_7) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [7U] 
                                                 >> 2U))))) 
                  << 2U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [7U] >> 3U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_7 
                                                >> 3U))))) {
        ++(vlSymsp->__Vcoverage[2897]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_7 
            = ((0xfffffffffffffff7ULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_7) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [7U] 
                                                 >> 3U))))) 
                  << 3U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [7U] >> 4U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_7 
                                                >> 4U))))) {
        ++(vlSymsp->__Vcoverage[2898]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_7 
            = ((0xffffffffffffffefULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_7) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [7U] 
                                                 >> 4U))))) 
                  << 4U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [7U] >> 5U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_7 
                                                >> 5U))))) {
        ++(vlSymsp->__Vcoverage[2899]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_7 
            = ((0xffffffffffffffdfULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_7) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [7U] 
                                                 >> 5U))))) 
                  << 5U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [7U] >> 6U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_7 
                                                >> 6U))))) {
        ++(vlSymsp->__Vcoverage[2900]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_7 
            = ((0xffffffffffffffbfULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_7) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [7U] 
                                                 >> 6U))))) 
                  << 6U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [7U] >> 7U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_7 
                                                >> 7U))))) {
        ++(vlSymsp->__Vcoverage[2901]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_7 
            = ((0xffffffffffffff7fULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_7) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [7U] 
                                                 >> 7U))))) 
                  << 7U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [7U] >> 8U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_7 
                                                >> 8U))))) {
        ++(vlSymsp->__Vcoverage[2902]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_7 
            = ((0xfffffffffffffeffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_7) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [7U] 
                                                 >> 8U))))) 
                  << 8U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [7U] >> 9U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_7 
                                                >> 9U))))) {
        ++(vlSymsp->__Vcoverage[2903]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_7 
            = ((0xfffffffffffffdffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_7) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [7U] 
                                                 >> 9U))))) 
                  << 9U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [7U] >> 0xaU)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_7 
                                                  >> 0xaU))))) {
        ++(vlSymsp->__Vcoverage[2904]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_7 
            = ((0xfffffffffffffbffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_7) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [7U] 
                                                 >> 0xaU))))) 
                  << 0xaU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [7U] >> 0xbU)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_7 
                                                  >> 0xbU))))) {
        ++(vlSymsp->__Vcoverage[2905]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_7 
            = ((0xfffffffffffff7ffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_7) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [7U] 
                                                 >> 0xbU))))) 
                  << 0xbU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [7U] >> 0xcU)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_7 
                                                  >> 0xcU))))) {
        ++(vlSymsp->__Vcoverage[2906]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_7 
            = ((0xffffffffffffefffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_7) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [7U] 
                                                 >> 0xcU))))) 
                  << 0xcU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [7U] >> 0xdU)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_7 
                                                  >> 0xdU))))) {
        ++(vlSymsp->__Vcoverage[2907]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_7 
            = ((0xffffffffffffdfffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_7) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [7U] 
                                                 >> 0xdU))))) 
                  << 0xdU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [7U] >> 0xeU)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_7 
                                                  >> 0xeU))))) {
        ++(vlSymsp->__Vcoverage[2908]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_7 
            = ((0xffffffffffffbfffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_7) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [7U] 
                                                 >> 0xeU))))) 
                  << 0xeU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [7U] >> 0xfU)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_7 
                                                  >> 0xfU))))) {
        ++(vlSymsp->__Vcoverage[2909]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_7 
            = ((0xffffffffffff7fffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_7) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [7U] 
                                                 >> 0xfU))))) 
                  << 0xfU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [7U] >> 0x10U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_7 
                                                   >> 0x10U))))) {
        ++(vlSymsp->__Vcoverage[2910]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_7 
            = ((0xfffffffffffeffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_7) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [7U] 
                                                 >> 0x10U))))) 
                  << 0x10U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [7U] >> 0x11U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_7 
                                                   >> 0x11U))))) {
        ++(vlSymsp->__Vcoverage[2911]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_7 
            = ((0xfffffffffffdffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_7) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [7U] 
                                                 >> 0x11U))))) 
                  << 0x11U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [7U] >> 0x12U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_7 
                                                   >> 0x12U))))) {
        ++(vlSymsp->__Vcoverage[2912]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_7 
            = ((0xfffffffffffbffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_7) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [7U] 
                                                 >> 0x12U))))) 
                  << 0x12U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [7U] >> 0x13U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_7 
                                                   >> 0x13U))))) {
        ++(vlSymsp->__Vcoverage[2913]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_7 
            = ((0xfffffffffff7ffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_7) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [7U] 
                                                 >> 0x13U))))) 
                  << 0x13U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [7U] >> 0x14U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_7 
                                                   >> 0x14U))))) {
        ++(vlSymsp->__Vcoverage[2914]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_7 
            = ((0xffffffffffefffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_7) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [7U] 
                                                 >> 0x14U))))) 
                  << 0x14U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [7U] >> 0x15U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_7 
                                                   >> 0x15U))))) {
        ++(vlSymsp->__Vcoverage[2915]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_7 
            = ((0xffffffffffdfffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_7) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [7U] 
                                                 >> 0x15U))))) 
                  << 0x15U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [7U] >> 0x16U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_7 
                                                   >> 0x16U))))) {
        ++(vlSymsp->__Vcoverage[2916]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_7 
            = ((0xffffffffffbfffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_7) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [7U] 
                                                 >> 0x16U))))) 
                  << 0x16U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [7U] >> 0x17U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_7 
                                                   >> 0x17U))))) {
        ++(vlSymsp->__Vcoverage[2917]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_7 
            = ((0xffffffffff7fffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_7) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [7U] 
                                                 >> 0x17U))))) 
                  << 0x17U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [7U] >> 0x18U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_7 
                                                   >> 0x18U))))) {
        ++(vlSymsp->__Vcoverage[2918]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_7 
            = ((0xfffffffffeffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_7) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [7U] 
                                                 >> 0x18U))))) 
                  << 0x18U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [7U] >> 0x19U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_7 
                                                   >> 0x19U))))) {
        ++(vlSymsp->__Vcoverage[2919]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_7 
            = ((0xfffffffffdffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_7) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [7U] 
                                                 >> 0x19U))))) 
                  << 0x19U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [7U] >> 0x1aU)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_7 
                                                   >> 0x1aU))))) {
        ++(vlSymsp->__Vcoverage[2920]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_7 
            = ((0xfffffffffbffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_7) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [7U] 
                                                 >> 0x1aU))))) 
                  << 0x1aU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [7U] >> 0x1bU)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_7 
                                                   >> 0x1bU))))) {
        ++(vlSymsp->__Vcoverage[2921]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_7 
            = ((0xfffffffff7ffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_7) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [7U] 
                                                 >> 0x1bU))))) 
                  << 0x1bU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [7U] >> 0x1cU)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_7 
                                                   >> 0x1cU))))) {
        ++(vlSymsp->__Vcoverage[2922]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_7 
            = ((0xffffffffefffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_7) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [7U] 
                                                 >> 0x1cU))))) 
                  << 0x1cU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [7U] >> 0x1dU)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_7 
                                                   >> 0x1dU))))) {
        ++(vlSymsp->__Vcoverage[2923]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_7 
            = ((0xffffffffdfffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_7) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [7U] 
                                                 >> 0x1dU))))) 
                  << 0x1dU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [7U] >> 0x1eU)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_7 
                                                   >> 0x1eU))))) {
        ++(vlSymsp->__Vcoverage[2924]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_7 
            = ((0xffffffffbfffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_7) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [7U] 
                                                 >> 0x1eU))))) 
                  << 0x1eU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [7U] >> 0x1fU)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_7 
                                                   >> 0x1fU))))) {
        ++(vlSymsp->__Vcoverage[2925]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_7 
            = ((0xffffffff7fffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_7) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [7U] 
                                                 >> 0x1fU))))) 
                  << 0x1fU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [7U] >> 0x20U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_7 
                                                   >> 0x20U))))) {
        ++(vlSymsp->__Vcoverage[2926]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_7 
            = ((0xfffffffeffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_7) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [7U] 
                                                 >> 0x20U))))) 
                  << 0x20U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [7U] >> 0x21U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_7 
                                                   >> 0x21U))))) {
        ++(vlSymsp->__Vcoverage[2927]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_7 
            = ((0xfffffffdffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_7) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [7U] 
                                                 >> 0x21U))))) 
                  << 0x21U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [7U] >> 0x22U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_7 
                                                   >> 0x22U))))) {
        ++(vlSymsp->__Vcoverage[2928]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_7 
            = ((0xfffffffbffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_7) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [7U] 
                                                 >> 0x22U))))) 
                  << 0x22U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [7U] >> 0x23U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_7 
                                                   >> 0x23U))))) {
        ++(vlSymsp->__Vcoverage[2929]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_7 
            = ((0xfffffff7ffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_7) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [7U] 
                                                 >> 0x23U))))) 
                  << 0x23U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [7U] >> 0x24U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_7 
                                                   >> 0x24U))))) {
        ++(vlSymsp->__Vcoverage[2930]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_7 
            = ((0xffffffefffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_7) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [7U] 
                                                 >> 0x24U))))) 
                  << 0x24U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [7U] >> 0x25U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_7 
                                                   >> 0x25U))))) {
        ++(vlSymsp->__Vcoverage[2931]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_7 
            = ((0xffffffdfffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_7) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [7U] 
                                                 >> 0x25U))))) 
                  << 0x25U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [7U] >> 0x26U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_7 
                                                   >> 0x26U))))) {
        ++(vlSymsp->__Vcoverage[2932]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_7 
            = ((0xffffffbfffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_7) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [7U] 
                                                 >> 0x26U))))) 
                  << 0x26U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [7U] >> 0x27U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_7 
                                                   >> 0x27U))))) {
        ++(vlSymsp->__Vcoverage[2933]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_7 
            = ((0xffffff7fffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_7) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [7U] 
                                                 >> 0x27U))))) 
                  << 0x27U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [7U] >> 0x28U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_7 
                                                   >> 0x28U))))) {
        ++(vlSymsp->__Vcoverage[2934]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_7 
            = ((0xfffffeffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_7) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [7U] 
                                                 >> 0x28U))))) 
                  << 0x28U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [7U] >> 0x29U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_7 
                                                   >> 0x29U))))) {
        ++(vlSymsp->__Vcoverage[2935]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_7 
            = ((0xfffffdffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_7) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [7U] 
                                                 >> 0x29U))))) 
                  << 0x29U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [7U] >> 0x2aU)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_7 
                                                   >> 0x2aU))))) {
        ++(vlSymsp->__Vcoverage[2936]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_7 
            = ((0xfffffbffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_7) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [7U] 
                                                 >> 0x2aU))))) 
                  << 0x2aU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [7U] >> 0x2bU)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_7 
                                                   >> 0x2bU))))) {
        ++(vlSymsp->__Vcoverage[2937]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_7 
            = ((0xfffff7ffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_7) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [7U] 
                                                 >> 0x2bU))))) 
                  << 0x2bU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [7U] >> 0x2cU)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_7 
                                                   >> 0x2cU))))) {
        ++(vlSymsp->__Vcoverage[2938]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_7 
            = ((0xffffefffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_7) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [7U] 
                                                 >> 0x2cU))))) 
                  << 0x2cU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [7U] >> 0x2dU)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_7 
                                                   >> 0x2dU))))) {
        ++(vlSymsp->__Vcoverage[2939]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_7 
            = ((0xffffdfffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_7) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [7U] 
                                                 >> 0x2dU))))) 
                  << 0x2dU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [7U] >> 0x2eU)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_7 
                                                   >> 0x2eU))))) {
        ++(vlSymsp->__Vcoverage[2940]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_7 
            = ((0xffffbfffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_7) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [7U] 
                                                 >> 0x2eU))))) 
                  << 0x2eU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [7U] >> 0x2fU)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_7 
                                                   >> 0x2fU))))) {
        ++(vlSymsp->__Vcoverage[2941]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_7 
            = ((0xffff7fffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_7) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [7U] 
                                                 >> 0x2fU))))) 
                  << 0x2fU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [7U] >> 0x30U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_7 
                                                   >> 0x30U))))) {
        ++(vlSymsp->__Vcoverage[2942]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_7 
            = ((0xfffeffffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_7) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [7U] 
                                                 >> 0x30U))))) 
                  << 0x30U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [7U] >> 0x31U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_7 
                                                   >> 0x31U))))) {
        ++(vlSymsp->__Vcoverage[2943]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_7 
            = ((0xfffdffffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_7) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [7U] 
                                                 >> 0x31U))))) 
                  << 0x31U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [7U] >> 0x32U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_7 
                                                   >> 0x32U))))) {
        ++(vlSymsp->__Vcoverage[2944]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_7 
            = ((0xfffbffffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_7) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [7U] 
                                                 >> 0x32U))))) 
                  << 0x32U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [7U] >> 0x33U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_7 
                                                   >> 0x33U))))) {
        ++(vlSymsp->__Vcoverage[2945]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_7 
            = ((0xfff7ffffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_7) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [7U] 
                                                 >> 0x33U))))) 
                  << 0x33U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [7U] >> 0x34U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_7 
                                                   >> 0x34U))))) {
        ++(vlSymsp->__Vcoverage[2946]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_7 
            = ((0xffefffffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_7) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [7U] 
                                                 >> 0x34U))))) 
                  << 0x34U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [7U] >> 0x35U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_7 
                                                   >> 0x35U))))) {
        ++(vlSymsp->__Vcoverage[2947]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_7 
            = ((0xffdfffffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_7) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [7U] 
                                                 >> 0x35U))))) 
                  << 0x35U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [7U] >> 0x36U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_7 
                                                   >> 0x36U))))) {
        ++(vlSymsp->__Vcoverage[2948]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_7 
            = ((0xffbfffffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_7) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [7U] 
                                                 >> 0x36U))))) 
                  << 0x36U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [7U] >> 0x37U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_7 
                                                   >> 0x37U))))) {
        ++(vlSymsp->__Vcoverage[2949]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_7 
            = ((0xff7fffffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_7) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [7U] 
                                                 >> 0x37U))))) 
                  << 0x37U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [7U] >> 0x38U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_7 
                                                   >> 0x38U))))) {
        ++(vlSymsp->__Vcoverage[2950]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_7 
            = ((0xfeffffffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_7) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [7U] 
                                                 >> 0x38U))))) 
                  << 0x38U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [7U] >> 0x39U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_7 
                                                   >> 0x39U))))) {
        ++(vlSymsp->__Vcoverage[2951]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_7 
            = ((0xfdffffffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_7) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [7U] 
                                                 >> 0x39U))))) 
                  << 0x39U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [7U] >> 0x3aU)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_7 
                                                   >> 0x3aU))))) {
        ++(vlSymsp->__Vcoverage[2952]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_7 
            = ((0xfbffffffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_7) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [7U] 
                                                 >> 0x3aU))))) 
                  << 0x3aU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [7U] >> 0x3bU)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_7 
                                                   >> 0x3bU))))) {
        ++(vlSymsp->__Vcoverage[2953]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_7 
            = ((0xf7ffffffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_7) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [7U] 
                                                 >> 0x3bU))))) 
                  << 0x3bU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [7U] >> 0x3cU)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_7 
                                                   >> 0x3cU))))) {
        ++(vlSymsp->__Vcoverage[2954]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_7 
            = ((0xefffffffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_7) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [7U] 
                                                 >> 0x3cU))))) 
                  << 0x3cU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [7U] >> 0x3dU)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_7 
                                                   >> 0x3dU))))) {
        ++(vlSymsp->__Vcoverage[2955]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_7 
            = ((0xdfffffffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_7) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [7U] 
                                                 >> 0x3dU))))) 
                  << 0x3dU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [7U] >> 0x3eU)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_7 
                                                   >> 0x3eU))))) {
        ++(vlSymsp->__Vcoverage[2956]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_7 
            = ((0xbfffffffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_7) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [7U] 
                                                 >> 0x3eU))))) 
                  << 0x3eU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [7U] >> 0x3fU)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_7 
                                                   >> 0x3fU))))) {
        ++(vlSymsp->__Vcoverage[2957]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_7 
            = ((0x7fffffffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_7) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [7U] 
                                                 >> 0x3fU))))) 
                  << 0x3fU));
    }
    if ((1U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                       [8U]) ^ (IData)(vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_8)))) {
        ++(vlSymsp->__Vcoverage[2958]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_8 
            = ((0xfffffffffffffffeULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_8) 
               | (IData)((IData)((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                               [8U])))));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [8U] >> 1U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_8 
                                                >> 1U))))) {
        ++(vlSymsp->__Vcoverage[2959]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_8 
            = ((0xfffffffffffffffdULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_8) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [8U] 
                                                 >> 1U))))) 
                  << 1U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [8U] >> 2U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_8 
                                                >> 2U))))) {
        ++(vlSymsp->__Vcoverage[2960]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_8 
            = ((0xfffffffffffffffbULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_8) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [8U] 
                                                 >> 2U))))) 
                  << 2U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [8U] >> 3U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_8 
                                                >> 3U))))) {
        ++(vlSymsp->__Vcoverage[2961]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_8 
            = ((0xfffffffffffffff7ULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_8) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [8U] 
                                                 >> 3U))))) 
                  << 3U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [8U] >> 4U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_8 
                                                >> 4U))))) {
        ++(vlSymsp->__Vcoverage[2962]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_8 
            = ((0xffffffffffffffefULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_8) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [8U] 
                                                 >> 4U))))) 
                  << 4U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [8U] >> 5U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_8 
                                                >> 5U))))) {
        ++(vlSymsp->__Vcoverage[2963]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_8 
            = ((0xffffffffffffffdfULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_8) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [8U] 
                                                 >> 5U))))) 
                  << 5U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [8U] >> 6U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_8 
                                                >> 6U))))) {
        ++(vlSymsp->__Vcoverage[2964]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_8 
            = ((0xffffffffffffffbfULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_8) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [8U] 
                                                 >> 6U))))) 
                  << 6U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [8U] >> 7U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_8 
                                                >> 7U))))) {
        ++(vlSymsp->__Vcoverage[2965]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_8 
            = ((0xffffffffffffff7fULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_8) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [8U] 
                                                 >> 7U))))) 
                  << 7U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [8U] >> 8U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_8 
                                                >> 8U))))) {
        ++(vlSymsp->__Vcoverage[2966]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_8 
            = ((0xfffffffffffffeffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_8) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [8U] 
                                                 >> 8U))))) 
                  << 8U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [8U] >> 9U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_8 
                                                >> 9U))))) {
        ++(vlSymsp->__Vcoverage[2967]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_8 
            = ((0xfffffffffffffdffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_8) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [8U] 
                                                 >> 9U))))) 
                  << 9U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [8U] >> 0xaU)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_8 
                                                  >> 0xaU))))) {
        ++(vlSymsp->__Vcoverage[2968]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_8 
            = ((0xfffffffffffffbffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_8) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [8U] 
                                                 >> 0xaU))))) 
                  << 0xaU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [8U] >> 0xbU)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_8 
                                                  >> 0xbU))))) {
        ++(vlSymsp->__Vcoverage[2969]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_8 
            = ((0xfffffffffffff7ffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_8) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [8U] 
                                                 >> 0xbU))))) 
                  << 0xbU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [8U] >> 0xcU)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_8 
                                                  >> 0xcU))))) {
        ++(vlSymsp->__Vcoverage[2970]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_8 
            = ((0xffffffffffffefffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_8) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [8U] 
                                                 >> 0xcU))))) 
                  << 0xcU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [8U] >> 0xdU)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_8 
                                                  >> 0xdU))))) {
        ++(vlSymsp->__Vcoverage[2971]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_8 
            = ((0xffffffffffffdfffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_8) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [8U] 
                                                 >> 0xdU))))) 
                  << 0xdU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [8U] >> 0xeU)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_8 
                                                  >> 0xeU))))) {
        ++(vlSymsp->__Vcoverage[2972]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_8 
            = ((0xffffffffffffbfffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_8) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [8U] 
                                                 >> 0xeU))))) 
                  << 0xeU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [8U] >> 0xfU)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_8 
                                                  >> 0xfU))))) {
        ++(vlSymsp->__Vcoverage[2973]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_8 
            = ((0xffffffffffff7fffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_8) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [8U] 
                                                 >> 0xfU))))) 
                  << 0xfU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [8U] >> 0x10U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_8 
                                                   >> 0x10U))))) {
        ++(vlSymsp->__Vcoverage[2974]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_8 
            = ((0xfffffffffffeffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_8) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [8U] 
                                                 >> 0x10U))))) 
                  << 0x10U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [8U] >> 0x11U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_8 
                                                   >> 0x11U))))) {
        ++(vlSymsp->__Vcoverage[2975]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_8 
            = ((0xfffffffffffdffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_8) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [8U] 
                                                 >> 0x11U))))) 
                  << 0x11U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [8U] >> 0x12U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_8 
                                                   >> 0x12U))))) {
        ++(vlSymsp->__Vcoverage[2976]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_8 
            = ((0xfffffffffffbffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_8) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [8U] 
                                                 >> 0x12U))))) 
                  << 0x12U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [8U] >> 0x13U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_8 
                                                   >> 0x13U))))) {
        ++(vlSymsp->__Vcoverage[2977]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_8 
            = ((0xfffffffffff7ffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_8) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [8U] 
                                                 >> 0x13U))))) 
                  << 0x13U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [8U] >> 0x14U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_8 
                                                   >> 0x14U))))) {
        ++(vlSymsp->__Vcoverage[2978]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_8 
            = ((0xffffffffffefffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_8) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [8U] 
                                                 >> 0x14U))))) 
                  << 0x14U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [8U] >> 0x15U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_8 
                                                   >> 0x15U))))) {
        ++(vlSymsp->__Vcoverage[2979]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_8 
            = ((0xffffffffffdfffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_8) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [8U] 
                                                 >> 0x15U))))) 
                  << 0x15U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [8U] >> 0x16U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_8 
                                                   >> 0x16U))))) {
        ++(vlSymsp->__Vcoverage[2980]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_8 
            = ((0xffffffffffbfffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_8) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [8U] 
                                                 >> 0x16U))))) 
                  << 0x16U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [8U] >> 0x17U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_8 
                                                   >> 0x17U))))) {
        ++(vlSymsp->__Vcoverage[2981]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_8 
            = ((0xffffffffff7fffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_8) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [8U] 
                                                 >> 0x17U))))) 
                  << 0x17U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [8U] >> 0x18U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_8 
                                                   >> 0x18U))))) {
        ++(vlSymsp->__Vcoverage[2982]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_8 
            = ((0xfffffffffeffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_8) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [8U] 
                                                 >> 0x18U))))) 
                  << 0x18U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [8U] >> 0x19U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_8 
                                                   >> 0x19U))))) {
        ++(vlSymsp->__Vcoverage[2983]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_8 
            = ((0xfffffffffdffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_8) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [8U] 
                                                 >> 0x19U))))) 
                  << 0x19U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [8U] >> 0x1aU)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_8 
                                                   >> 0x1aU))))) {
        ++(vlSymsp->__Vcoverage[2984]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_8 
            = ((0xfffffffffbffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_8) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [8U] 
                                                 >> 0x1aU))))) 
                  << 0x1aU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [8U] >> 0x1bU)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_8 
                                                   >> 0x1bU))))) {
        ++(vlSymsp->__Vcoverage[2985]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_8 
            = ((0xfffffffff7ffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_8) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [8U] 
                                                 >> 0x1bU))))) 
                  << 0x1bU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [8U] >> 0x1cU)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_8 
                                                   >> 0x1cU))))) {
        ++(vlSymsp->__Vcoverage[2986]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_8 
            = ((0xffffffffefffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_8) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [8U] 
                                                 >> 0x1cU))))) 
                  << 0x1cU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [8U] >> 0x1dU)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_8 
                                                   >> 0x1dU))))) {
        ++(vlSymsp->__Vcoverage[2987]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_8 
            = ((0xffffffffdfffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_8) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [8U] 
                                                 >> 0x1dU))))) 
                  << 0x1dU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [8U] >> 0x1eU)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_8 
                                                   >> 0x1eU))))) {
        ++(vlSymsp->__Vcoverage[2988]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_8 
            = ((0xffffffffbfffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_8) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [8U] 
                                                 >> 0x1eU))))) 
                  << 0x1eU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [8U] >> 0x1fU)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_8 
                                                   >> 0x1fU))))) {
        ++(vlSymsp->__Vcoverage[2989]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_8 
            = ((0xffffffff7fffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_8) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [8U] 
                                                 >> 0x1fU))))) 
                  << 0x1fU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [8U] >> 0x20U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_8 
                                                   >> 0x20U))))) {
        ++(vlSymsp->__Vcoverage[2990]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_8 
            = ((0xfffffffeffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_8) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [8U] 
                                                 >> 0x20U))))) 
                  << 0x20U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [8U] >> 0x21U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_8 
                                                   >> 0x21U))))) {
        ++(vlSymsp->__Vcoverage[2991]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_8 
            = ((0xfffffffdffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_8) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [8U] 
                                                 >> 0x21U))))) 
                  << 0x21U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [8U] >> 0x22U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_8 
                                                   >> 0x22U))))) {
        ++(vlSymsp->__Vcoverage[2992]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_8 
            = ((0xfffffffbffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_8) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [8U] 
                                                 >> 0x22U))))) 
                  << 0x22U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [8U] >> 0x23U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_8 
                                                   >> 0x23U))))) {
        ++(vlSymsp->__Vcoverage[2993]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_8 
            = ((0xfffffff7ffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_8) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [8U] 
                                                 >> 0x23U))))) 
                  << 0x23U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [8U] >> 0x24U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_8 
                                                   >> 0x24U))))) {
        ++(vlSymsp->__Vcoverage[2994]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_8 
            = ((0xffffffefffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_8) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [8U] 
                                                 >> 0x24U))))) 
                  << 0x24U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [8U] >> 0x25U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_8 
                                                   >> 0x25U))))) {
        ++(vlSymsp->__Vcoverage[2995]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_8 
            = ((0xffffffdfffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_8) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [8U] 
                                                 >> 0x25U))))) 
                  << 0x25U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [8U] >> 0x26U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_8 
                                                   >> 0x26U))))) {
        ++(vlSymsp->__Vcoverage[2996]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_8 
            = ((0xffffffbfffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_8) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [8U] 
                                                 >> 0x26U))))) 
                  << 0x26U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [8U] >> 0x27U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_8 
                                                   >> 0x27U))))) {
        ++(vlSymsp->__Vcoverage[2997]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_8 
            = ((0xffffff7fffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_8) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [8U] 
                                                 >> 0x27U))))) 
                  << 0x27U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [8U] >> 0x28U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_8 
                                                   >> 0x28U))))) {
        ++(vlSymsp->__Vcoverage[2998]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_8 
            = ((0xfffffeffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_8) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [8U] 
                                                 >> 0x28U))))) 
                  << 0x28U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [8U] >> 0x29U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_8 
                                                   >> 0x29U))))) {
        ++(vlSymsp->__Vcoverage[2999]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_8 
            = ((0xfffffdffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_8) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [8U] 
                                                 >> 0x29U))))) 
                  << 0x29U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [8U] >> 0x2aU)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_8 
                                                   >> 0x2aU))))) {
        ++(vlSymsp->__Vcoverage[3000]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_8 
            = ((0xfffffbffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_8) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [8U] 
                                                 >> 0x2aU))))) 
                  << 0x2aU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [8U] >> 0x2bU)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_8 
                                                   >> 0x2bU))))) {
        ++(vlSymsp->__Vcoverage[3001]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_8 
            = ((0xfffff7ffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_8) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [8U] 
                                                 >> 0x2bU))))) 
                  << 0x2bU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [8U] >> 0x2cU)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_8 
                                                   >> 0x2cU))))) {
        ++(vlSymsp->__Vcoverage[3002]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_8 
            = ((0xffffefffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_8) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [8U] 
                                                 >> 0x2cU))))) 
                  << 0x2cU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [8U] >> 0x2dU)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_8 
                                                   >> 0x2dU))))) {
        ++(vlSymsp->__Vcoverage[3003]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_8 
            = ((0xffffdfffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_8) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [8U] 
                                                 >> 0x2dU))))) 
                  << 0x2dU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [8U] >> 0x2eU)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_8 
                                                   >> 0x2eU))))) {
        ++(vlSymsp->__Vcoverage[3004]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_8 
            = ((0xffffbfffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_8) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [8U] 
                                                 >> 0x2eU))))) 
                  << 0x2eU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [8U] >> 0x2fU)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_8 
                                                   >> 0x2fU))))) {
        ++(vlSymsp->__Vcoverage[3005]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_8 
            = ((0xffff7fffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_8) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [8U] 
                                                 >> 0x2fU))))) 
                  << 0x2fU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [8U] >> 0x30U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_8 
                                                   >> 0x30U))))) {
        ++(vlSymsp->__Vcoverage[3006]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_8 
            = ((0xfffeffffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_8) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [8U] 
                                                 >> 0x30U))))) 
                  << 0x30U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [8U] >> 0x31U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_8 
                                                   >> 0x31U))))) {
        ++(vlSymsp->__Vcoverage[3007]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_8 
            = ((0xfffdffffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_8) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [8U] 
                                                 >> 0x31U))))) 
                  << 0x31U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [8U] >> 0x32U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_8 
                                                   >> 0x32U))))) {
        ++(vlSymsp->__Vcoverage[3008]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_8 
            = ((0xfffbffffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_8) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [8U] 
                                                 >> 0x32U))))) 
                  << 0x32U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [8U] >> 0x33U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_8 
                                                   >> 0x33U))))) {
        ++(vlSymsp->__Vcoverage[3009]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_8 
            = ((0xfff7ffffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_8) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [8U] 
                                                 >> 0x33U))))) 
                  << 0x33U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [8U] >> 0x34U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_8 
                                                   >> 0x34U))))) {
        ++(vlSymsp->__Vcoverage[3010]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_8 
            = ((0xffefffffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_8) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [8U] 
                                                 >> 0x34U))))) 
                  << 0x34U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [8U] >> 0x35U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_8 
                                                   >> 0x35U))))) {
        ++(vlSymsp->__Vcoverage[3011]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_8 
            = ((0xffdfffffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_8) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [8U] 
                                                 >> 0x35U))))) 
                  << 0x35U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [8U] >> 0x36U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_8 
                                                   >> 0x36U))))) {
        ++(vlSymsp->__Vcoverage[3012]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_8 
            = ((0xffbfffffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_8) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [8U] 
                                                 >> 0x36U))))) 
                  << 0x36U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [8U] >> 0x37U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_8 
                                                   >> 0x37U))))) {
        ++(vlSymsp->__Vcoverage[3013]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_8 
            = ((0xff7fffffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_8) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [8U] 
                                                 >> 0x37U))))) 
                  << 0x37U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [8U] >> 0x38U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_8 
                                                   >> 0x38U))))) {
        ++(vlSymsp->__Vcoverage[3014]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_8 
            = ((0xfeffffffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_8) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [8U] 
                                                 >> 0x38U))))) 
                  << 0x38U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [8U] >> 0x39U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_8 
                                                   >> 0x39U))))) {
        ++(vlSymsp->__Vcoverage[3015]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_8 
            = ((0xfdffffffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_8) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [8U] 
                                                 >> 0x39U))))) 
                  << 0x39U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [8U] >> 0x3aU)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_8 
                                                   >> 0x3aU))))) {
        ++(vlSymsp->__Vcoverage[3016]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_8 
            = ((0xfbffffffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_8) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [8U] 
                                                 >> 0x3aU))))) 
                  << 0x3aU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [8U] >> 0x3bU)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_8 
                                                   >> 0x3bU))))) {
        ++(vlSymsp->__Vcoverage[3017]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_8 
            = ((0xf7ffffffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_8) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [8U] 
                                                 >> 0x3bU))))) 
                  << 0x3bU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [8U] >> 0x3cU)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_8 
                                                   >> 0x3cU))))) {
        ++(vlSymsp->__Vcoverage[3018]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_8 
            = ((0xefffffffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_8) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [8U] 
                                                 >> 0x3cU))))) 
                  << 0x3cU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [8U] >> 0x3dU)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_8 
                                                   >> 0x3dU))))) {
        ++(vlSymsp->__Vcoverage[3019]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_8 
            = ((0xdfffffffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_8) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [8U] 
                                                 >> 0x3dU))))) 
                  << 0x3dU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [8U] >> 0x3eU)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_8 
                                                   >> 0x3eU))))) {
        ++(vlSymsp->__Vcoverage[3020]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_8 
            = ((0xbfffffffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_8) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [8U] 
                                                 >> 0x3eU))))) 
                  << 0x3eU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [8U] >> 0x3fU)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_8 
                                                   >> 0x3fU))))) {
        ++(vlSymsp->__Vcoverage[3021]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_8 
            = ((0x7fffffffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_8) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [8U] 
                                                 >> 0x3fU))))) 
                  << 0x3fU));
    }
    if ((1U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                       [9U]) ^ (IData)(vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_9)))) {
        ++(vlSymsp->__Vcoverage[3022]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_9 
            = ((0xfffffffffffffffeULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_9) 
               | (IData)((IData)((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                               [9U])))));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [9U] >> 1U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_9 
                                                >> 1U))))) {
        ++(vlSymsp->__Vcoverage[3023]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_9 
            = ((0xfffffffffffffffdULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_9) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [9U] 
                                                 >> 1U))))) 
                  << 1U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [9U] >> 2U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_9 
                                                >> 2U))))) {
        ++(vlSymsp->__Vcoverage[3024]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_9 
            = ((0xfffffffffffffffbULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_9) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [9U] 
                                                 >> 2U))))) 
                  << 2U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [9U] >> 3U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_9 
                                                >> 3U))))) {
        ++(vlSymsp->__Vcoverage[3025]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_9 
            = ((0xfffffffffffffff7ULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_9) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [9U] 
                                                 >> 3U))))) 
                  << 3U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [9U] >> 4U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_9 
                                                >> 4U))))) {
        ++(vlSymsp->__Vcoverage[3026]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_9 
            = ((0xffffffffffffffefULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_9) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [9U] 
                                                 >> 4U))))) 
                  << 4U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [9U] >> 5U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_9 
                                                >> 5U))))) {
        ++(vlSymsp->__Vcoverage[3027]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_9 
            = ((0xffffffffffffffdfULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_9) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [9U] 
                                                 >> 5U))))) 
                  << 5U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [9U] >> 6U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_9 
                                                >> 6U))))) {
        ++(vlSymsp->__Vcoverage[3028]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_9 
            = ((0xffffffffffffffbfULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_9) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [9U] 
                                                 >> 6U))))) 
                  << 6U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [9U] >> 7U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_9 
                                                >> 7U))))) {
        ++(vlSymsp->__Vcoverage[3029]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_9 
            = ((0xffffffffffffff7fULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_9) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [9U] 
                                                 >> 7U))))) 
                  << 7U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [9U] >> 8U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_9 
                                                >> 8U))))) {
        ++(vlSymsp->__Vcoverage[3030]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_9 
            = ((0xfffffffffffffeffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_9) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [9U] 
                                                 >> 8U))))) 
                  << 8U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [9U] >> 9U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_9 
                                                >> 9U))))) {
        ++(vlSymsp->__Vcoverage[3031]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_9 
            = ((0xfffffffffffffdffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_9) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [9U] 
                                                 >> 9U))))) 
                  << 9U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [9U] >> 0xaU)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_9 
                                                  >> 0xaU))))) {
        ++(vlSymsp->__Vcoverage[3032]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_9 
            = ((0xfffffffffffffbffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_9) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [9U] 
                                                 >> 0xaU))))) 
                  << 0xaU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [9U] >> 0xbU)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_9 
                                                  >> 0xbU))))) {
        ++(vlSymsp->__Vcoverage[3033]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_9 
            = ((0xfffffffffffff7ffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_9) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [9U] 
                                                 >> 0xbU))))) 
                  << 0xbU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [9U] >> 0xcU)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_9 
                                                  >> 0xcU))))) {
        ++(vlSymsp->__Vcoverage[3034]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_9 
            = ((0xffffffffffffefffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_9) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [9U] 
                                                 >> 0xcU))))) 
                  << 0xcU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [9U] >> 0xdU)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_9 
                                                  >> 0xdU))))) {
        ++(vlSymsp->__Vcoverage[3035]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_9 
            = ((0xffffffffffffdfffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_9) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [9U] 
                                                 >> 0xdU))))) 
                  << 0xdU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [9U] >> 0xeU)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_9 
                                                  >> 0xeU))))) {
        ++(vlSymsp->__Vcoverage[3036]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_9 
            = ((0xffffffffffffbfffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_9) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [9U] 
                                                 >> 0xeU))))) 
                  << 0xeU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [9U] >> 0xfU)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_9 
                                                  >> 0xfU))))) {
        ++(vlSymsp->__Vcoverage[3037]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_9 
            = ((0xffffffffffff7fffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_9) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [9U] 
                                                 >> 0xfU))))) 
                  << 0xfU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [9U] >> 0x10U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_9 
                                                   >> 0x10U))))) {
        ++(vlSymsp->__Vcoverage[3038]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_9 
            = ((0xfffffffffffeffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_9) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [9U] 
                                                 >> 0x10U))))) 
                  << 0x10U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [9U] >> 0x11U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_9 
                                                   >> 0x11U))))) {
        ++(vlSymsp->__Vcoverage[3039]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_9 
            = ((0xfffffffffffdffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_9) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [9U] 
                                                 >> 0x11U))))) 
                  << 0x11U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [9U] >> 0x12U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_9 
                                                   >> 0x12U))))) {
        ++(vlSymsp->__Vcoverage[3040]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_9 
            = ((0xfffffffffffbffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_9) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [9U] 
                                                 >> 0x12U))))) 
                  << 0x12U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [9U] >> 0x13U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_9 
                                                   >> 0x13U))))) {
        ++(vlSymsp->__Vcoverage[3041]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_9 
            = ((0xfffffffffff7ffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_9) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [9U] 
                                                 >> 0x13U))))) 
                  << 0x13U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [9U] >> 0x14U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_9 
                                                   >> 0x14U))))) {
        ++(vlSymsp->__Vcoverage[3042]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_9 
            = ((0xffffffffffefffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_9) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [9U] 
                                                 >> 0x14U))))) 
                  << 0x14U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [9U] >> 0x15U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_9 
                                                   >> 0x15U))))) {
        ++(vlSymsp->__Vcoverage[3043]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_9 
            = ((0xffffffffffdfffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_9) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [9U] 
                                                 >> 0x15U))))) 
                  << 0x15U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [9U] >> 0x16U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_9 
                                                   >> 0x16U))))) {
        ++(vlSymsp->__Vcoverage[3044]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_9 
            = ((0xffffffffffbfffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_9) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [9U] 
                                                 >> 0x16U))))) 
                  << 0x16U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [9U] >> 0x17U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_9 
                                                   >> 0x17U))))) {
        ++(vlSymsp->__Vcoverage[3045]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_9 
            = ((0xffffffffff7fffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_9) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [9U] 
                                                 >> 0x17U))))) 
                  << 0x17U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [9U] >> 0x18U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_9 
                                                   >> 0x18U))))) {
        ++(vlSymsp->__Vcoverage[3046]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_9 
            = ((0xfffffffffeffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_9) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [9U] 
                                                 >> 0x18U))))) 
                  << 0x18U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [9U] >> 0x19U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_9 
                                                   >> 0x19U))))) {
        ++(vlSymsp->__Vcoverage[3047]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_9 
            = ((0xfffffffffdffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_9) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [9U] 
                                                 >> 0x19U))))) 
                  << 0x19U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [9U] >> 0x1aU)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_9 
                                                   >> 0x1aU))))) {
        ++(vlSymsp->__Vcoverage[3048]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_9 
            = ((0xfffffffffbffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_9) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [9U] 
                                                 >> 0x1aU))))) 
                  << 0x1aU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [9U] >> 0x1bU)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_9 
                                                   >> 0x1bU))))) {
        ++(vlSymsp->__Vcoverage[3049]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_9 
            = ((0xfffffffff7ffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_9) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [9U] 
                                                 >> 0x1bU))))) 
                  << 0x1bU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [9U] >> 0x1cU)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_9 
                                                   >> 0x1cU))))) {
        ++(vlSymsp->__Vcoverage[3050]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_9 
            = ((0xffffffffefffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_9) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [9U] 
                                                 >> 0x1cU))))) 
                  << 0x1cU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [9U] >> 0x1dU)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_9 
                                                   >> 0x1dU))))) {
        ++(vlSymsp->__Vcoverage[3051]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_9 
            = ((0xffffffffdfffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_9) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [9U] 
                                                 >> 0x1dU))))) 
                  << 0x1dU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [9U] >> 0x1eU)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_9 
                                                   >> 0x1eU))))) {
        ++(vlSymsp->__Vcoverage[3052]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_9 
            = ((0xffffffffbfffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_9) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [9U] 
                                                 >> 0x1eU))))) 
                  << 0x1eU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [9U] >> 0x1fU)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_9 
                                                   >> 0x1fU))))) {
        ++(vlSymsp->__Vcoverage[3053]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_9 
            = ((0xffffffff7fffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_9) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [9U] 
                                                 >> 0x1fU))))) 
                  << 0x1fU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [9U] >> 0x20U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_9 
                                                   >> 0x20U))))) {
        ++(vlSymsp->__Vcoverage[3054]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_9 
            = ((0xfffffffeffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_9) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [9U] 
                                                 >> 0x20U))))) 
                  << 0x20U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [9U] >> 0x21U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_9 
                                                   >> 0x21U))))) {
        ++(vlSymsp->__Vcoverage[3055]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_9 
            = ((0xfffffffdffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_9) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [9U] 
                                                 >> 0x21U))))) 
                  << 0x21U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [9U] >> 0x22U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_9 
                                                   >> 0x22U))))) {
        ++(vlSymsp->__Vcoverage[3056]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_9 
            = ((0xfffffffbffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_9) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [9U] 
                                                 >> 0x22U))))) 
                  << 0x22U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [9U] >> 0x23U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_9 
                                                   >> 0x23U))))) {
        ++(vlSymsp->__Vcoverage[3057]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_9 
            = ((0xfffffff7ffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_9) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [9U] 
                                                 >> 0x23U))))) 
                  << 0x23U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [9U] >> 0x24U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_9 
                                                   >> 0x24U))))) {
        ++(vlSymsp->__Vcoverage[3058]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_9 
            = ((0xffffffefffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_9) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [9U] 
                                                 >> 0x24U))))) 
                  << 0x24U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [9U] >> 0x25U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_9 
                                                   >> 0x25U))))) {
        ++(vlSymsp->__Vcoverage[3059]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_9 
            = ((0xffffffdfffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_9) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [9U] 
                                                 >> 0x25U))))) 
                  << 0x25U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [9U] >> 0x26U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_9 
                                                   >> 0x26U))))) {
        ++(vlSymsp->__Vcoverage[3060]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_9 
            = ((0xffffffbfffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_9) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [9U] 
                                                 >> 0x26U))))) 
                  << 0x26U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [9U] >> 0x27U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_9 
                                                   >> 0x27U))))) {
        ++(vlSymsp->__Vcoverage[3061]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_9 
            = ((0xffffff7fffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_9) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [9U] 
                                                 >> 0x27U))))) 
                  << 0x27U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [9U] >> 0x28U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_9 
                                                   >> 0x28U))))) {
        ++(vlSymsp->__Vcoverage[3062]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_9 
            = ((0xfffffeffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_9) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [9U] 
                                                 >> 0x28U))))) 
                  << 0x28U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [9U] >> 0x29U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_9 
                                                   >> 0x29U))))) {
        ++(vlSymsp->__Vcoverage[3063]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_9 
            = ((0xfffffdffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_9) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [9U] 
                                                 >> 0x29U))))) 
                  << 0x29U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [9U] >> 0x2aU)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_9 
                                                   >> 0x2aU))))) {
        ++(vlSymsp->__Vcoverage[3064]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_9 
            = ((0xfffffbffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_9) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [9U] 
                                                 >> 0x2aU))))) 
                  << 0x2aU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [9U] >> 0x2bU)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_9 
                                                   >> 0x2bU))))) {
        ++(vlSymsp->__Vcoverage[3065]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_9 
            = ((0xfffff7ffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_9) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [9U] 
                                                 >> 0x2bU))))) 
                  << 0x2bU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [9U] >> 0x2cU)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_9 
                                                   >> 0x2cU))))) {
        ++(vlSymsp->__Vcoverage[3066]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_9 
            = ((0xffffefffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_9) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [9U] 
                                                 >> 0x2cU))))) 
                  << 0x2cU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [9U] >> 0x2dU)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_9 
                                                   >> 0x2dU))))) {
        ++(vlSymsp->__Vcoverage[3067]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_9 
            = ((0xffffdfffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_9) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [9U] 
                                                 >> 0x2dU))))) 
                  << 0x2dU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [9U] >> 0x2eU)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_9 
                                                   >> 0x2eU))))) {
        ++(vlSymsp->__Vcoverage[3068]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_9 
            = ((0xffffbfffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_9) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [9U] 
                                                 >> 0x2eU))))) 
                  << 0x2eU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [9U] >> 0x2fU)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_9 
                                                   >> 0x2fU))))) {
        ++(vlSymsp->__Vcoverage[3069]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_9 
            = ((0xffff7fffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_9) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [9U] 
                                                 >> 0x2fU))))) 
                  << 0x2fU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [9U] >> 0x30U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_9 
                                                   >> 0x30U))))) {
        ++(vlSymsp->__Vcoverage[3070]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_9 
            = ((0xfffeffffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_9) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [9U] 
                                                 >> 0x30U))))) 
                  << 0x30U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [9U] >> 0x31U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_9 
                                                   >> 0x31U))))) {
        ++(vlSymsp->__Vcoverage[3071]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_9 
            = ((0xfffdffffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_9) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [9U] 
                                                 >> 0x31U))))) 
                  << 0x31U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [9U] >> 0x32U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_9 
                                                   >> 0x32U))))) {
        ++(vlSymsp->__Vcoverage[3072]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_9 
            = ((0xfffbffffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_9) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [9U] 
                                                 >> 0x32U))))) 
                  << 0x32U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [9U] >> 0x33U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_9 
                                                   >> 0x33U))))) {
        ++(vlSymsp->__Vcoverage[3073]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_9 
            = ((0xfff7ffffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_9) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [9U] 
                                                 >> 0x33U))))) 
                  << 0x33U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [9U] >> 0x34U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_9 
                                                   >> 0x34U))))) {
        ++(vlSymsp->__Vcoverage[3074]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_9 
            = ((0xffefffffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_9) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [9U] 
                                                 >> 0x34U))))) 
                  << 0x34U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [9U] >> 0x35U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_9 
                                                   >> 0x35U))))) {
        ++(vlSymsp->__Vcoverage[3075]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_9 
            = ((0xffdfffffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_9) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [9U] 
                                                 >> 0x35U))))) 
                  << 0x35U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [9U] >> 0x36U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_9 
                                                   >> 0x36U))))) {
        ++(vlSymsp->__Vcoverage[3076]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_9 
            = ((0xffbfffffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_9) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [9U] 
                                                 >> 0x36U))))) 
                  << 0x36U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [9U] >> 0x37U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_9 
                                                   >> 0x37U))))) {
        ++(vlSymsp->__Vcoverage[3077]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_9 
            = ((0xff7fffffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_9) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [9U] 
                                                 >> 0x37U))))) 
                  << 0x37U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [9U] >> 0x38U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_9 
                                                   >> 0x38U))))) {
        ++(vlSymsp->__Vcoverage[3078]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_9 
            = ((0xfeffffffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_9) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [9U] 
                                                 >> 0x38U))))) 
                  << 0x38U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [9U] >> 0x39U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_9 
                                                   >> 0x39U))))) {
        ++(vlSymsp->__Vcoverage[3079]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_9 
            = ((0xfdffffffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_9) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [9U] 
                                                 >> 0x39U))))) 
                  << 0x39U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [9U] >> 0x3aU)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_9 
                                                   >> 0x3aU))))) {
        ++(vlSymsp->__Vcoverage[3080]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_9 
            = ((0xfbffffffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_9) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [9U] 
                                                 >> 0x3aU))))) 
                  << 0x3aU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [9U] >> 0x3bU)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_9 
                                                   >> 0x3bU))))) {
        ++(vlSymsp->__Vcoverage[3081]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_9 
            = ((0xf7ffffffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_9) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [9U] 
                                                 >> 0x3bU))))) 
                  << 0x3bU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [9U] >> 0x3cU)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_9 
                                                   >> 0x3cU))))) {
        ++(vlSymsp->__Vcoverage[3082]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_9 
            = ((0xefffffffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_9) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [9U] 
                                                 >> 0x3cU))))) 
                  << 0x3cU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [9U] >> 0x3dU)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_9 
                                                   >> 0x3dU))))) {
        ++(vlSymsp->__Vcoverage[3083]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_9 
            = ((0xdfffffffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_9) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [9U] 
                                                 >> 0x3dU))))) 
                  << 0x3dU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [9U] >> 0x3eU)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_9 
                                                   >> 0x3eU))))) {
        ++(vlSymsp->__Vcoverage[3084]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_9 
            = ((0xbfffffffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_9) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [9U] 
                                                 >> 0x3eU))))) 
                  << 0x3eU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [9U] >> 0x3fU)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_9 
                                                   >> 0x3fU))))) {
        ++(vlSymsp->__Vcoverage[3085]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_9 
            = ((0x7fffffffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_9) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [9U] 
                                                 >> 0x3fU))))) 
                  << 0x3fU));
    }
    if ((1U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                       [0xaU]) ^ (IData)(vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_10)))) {
        ++(vlSymsp->__Vcoverage[3086]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_10 
            = ((0xfffffffffffffffeULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_10) 
               | (IData)((IData)((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                               [0xaU])))));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [0xaU] >> 1U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_10 
                                                  >> 1U))))) {
        ++(vlSymsp->__Vcoverage[3087]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_10 
            = ((0xfffffffffffffffdULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_10) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [0xaU] 
                                                 >> 1U))))) 
                  << 1U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [0xaU] >> 2U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_10 
                                                  >> 2U))))) {
        ++(vlSymsp->__Vcoverage[3088]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_10 
            = ((0xfffffffffffffffbULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_10) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [0xaU] 
                                                 >> 2U))))) 
                  << 2U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [0xaU] >> 3U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_10 
                                                  >> 3U))))) {
        ++(vlSymsp->__Vcoverage[3089]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_10 
            = ((0xfffffffffffffff7ULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_10) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [0xaU] 
                                                 >> 3U))))) 
                  << 3U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [0xaU] >> 4U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_10 
                                                  >> 4U))))) {
        ++(vlSymsp->__Vcoverage[3090]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_10 
            = ((0xffffffffffffffefULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_10) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [0xaU] 
                                                 >> 4U))))) 
                  << 4U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [0xaU] >> 5U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_10 
                                                  >> 5U))))) {
        ++(vlSymsp->__Vcoverage[3091]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_10 
            = ((0xffffffffffffffdfULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_10) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [0xaU] 
                                                 >> 5U))))) 
                  << 5U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [0xaU] >> 6U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_10 
                                                  >> 6U))))) {
        ++(vlSymsp->__Vcoverage[3092]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_10 
            = ((0xffffffffffffffbfULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_10) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [0xaU] 
                                                 >> 6U))))) 
                  << 6U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [0xaU] >> 7U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_10 
                                                  >> 7U))))) {
        ++(vlSymsp->__Vcoverage[3093]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_10 
            = ((0xffffffffffffff7fULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_10) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [0xaU] 
                                                 >> 7U))))) 
                  << 7U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [0xaU] >> 8U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_10 
                                                  >> 8U))))) {
        ++(vlSymsp->__Vcoverage[3094]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_10 
            = ((0xfffffffffffffeffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_10) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [0xaU] 
                                                 >> 8U))))) 
                  << 8U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [0xaU] >> 9U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_10 
                                                  >> 9U))))) {
        ++(vlSymsp->__Vcoverage[3095]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_10 
            = ((0xfffffffffffffdffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_10) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [0xaU] 
                                                 >> 9U))))) 
                  << 9U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [0xaU] >> 0xaU)) ^ (IData)(
                                                   (vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_10 
                                                    >> 0xaU))))) {
        ++(vlSymsp->__Vcoverage[3096]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_10 
            = ((0xfffffffffffffbffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_10) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [0xaU] 
                                                 >> 0xaU))))) 
                  << 0xaU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [0xaU] >> 0xbU)) ^ (IData)(
                                                   (vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_10 
                                                    >> 0xbU))))) {
        ++(vlSymsp->__Vcoverage[3097]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_10 
            = ((0xfffffffffffff7ffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_10) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [0xaU] 
                                                 >> 0xbU))))) 
                  << 0xbU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [0xaU] >> 0xcU)) ^ (IData)(
                                                   (vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_10 
                                                    >> 0xcU))))) {
        ++(vlSymsp->__Vcoverage[3098]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_10 
            = ((0xffffffffffffefffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_10) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [0xaU] 
                                                 >> 0xcU))))) 
                  << 0xcU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [0xaU] >> 0xdU)) ^ (IData)(
                                                   (vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_10 
                                                    >> 0xdU))))) {
        ++(vlSymsp->__Vcoverage[3099]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_10 
            = ((0xffffffffffffdfffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_10) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [0xaU] 
                                                 >> 0xdU))))) 
                  << 0xdU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [0xaU] >> 0xeU)) ^ (IData)(
                                                   (vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_10 
                                                    >> 0xeU))))) {
        ++(vlSymsp->__Vcoverage[3100]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_10 
            = ((0xffffffffffffbfffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_10) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [0xaU] 
                                                 >> 0xeU))))) 
                  << 0xeU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [0xaU] >> 0xfU)) ^ (IData)(
                                                   (vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_10 
                                                    >> 0xfU))))) {
        ++(vlSymsp->__Vcoverage[3101]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_10 
            = ((0xffffffffffff7fffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_10) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [0xaU] 
                                                 >> 0xfU))))) 
                  << 0xfU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [0xaU] >> 0x10U)) ^ (IData)(
                                                    (vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_10 
                                                     >> 0x10U))))) {
        ++(vlSymsp->__Vcoverage[3102]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_10 
            = ((0xfffffffffffeffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_10) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [0xaU] 
                                                 >> 0x10U))))) 
                  << 0x10U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [0xaU] >> 0x11U)) ^ (IData)(
                                                    (vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_10 
                                                     >> 0x11U))))) {
        ++(vlSymsp->__Vcoverage[3103]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_10 
            = ((0xfffffffffffdffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_10) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [0xaU] 
                                                 >> 0x11U))))) 
                  << 0x11U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [0xaU] >> 0x12U)) ^ (IData)(
                                                    (vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_10 
                                                     >> 0x12U))))) {
        ++(vlSymsp->__Vcoverage[3104]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_10 
            = ((0xfffffffffffbffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_10) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [0xaU] 
                                                 >> 0x12U))))) 
                  << 0x12U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [0xaU] >> 0x13U)) ^ (IData)(
                                                    (vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_10 
                                                     >> 0x13U))))) {
        ++(vlSymsp->__Vcoverage[3105]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_10 
            = ((0xfffffffffff7ffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_10) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [0xaU] 
                                                 >> 0x13U))))) 
                  << 0x13U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [0xaU] >> 0x14U)) ^ (IData)(
                                                    (vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_10 
                                                     >> 0x14U))))) {
        ++(vlSymsp->__Vcoverage[3106]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_10 
            = ((0xffffffffffefffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_10) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [0xaU] 
                                                 >> 0x14U))))) 
                  << 0x14U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [0xaU] >> 0x15U)) ^ (IData)(
                                                    (vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_10 
                                                     >> 0x15U))))) {
        ++(vlSymsp->__Vcoverage[3107]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_10 
            = ((0xffffffffffdfffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_10) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [0xaU] 
                                                 >> 0x15U))))) 
                  << 0x15U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [0xaU] >> 0x16U)) ^ (IData)(
                                                    (vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_10 
                                                     >> 0x16U))))) {
        ++(vlSymsp->__Vcoverage[3108]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_10 
            = ((0xffffffffffbfffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_10) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [0xaU] 
                                                 >> 0x16U))))) 
                  << 0x16U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [0xaU] >> 0x17U)) ^ (IData)(
                                                    (vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_10 
                                                     >> 0x17U))))) {
        ++(vlSymsp->__Vcoverage[3109]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_10 
            = ((0xffffffffff7fffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_10) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [0xaU] 
                                                 >> 0x17U))))) 
                  << 0x17U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [0xaU] >> 0x18U)) ^ (IData)(
                                                    (vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_10 
                                                     >> 0x18U))))) {
        ++(vlSymsp->__Vcoverage[3110]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_10 
            = ((0xfffffffffeffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_10) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [0xaU] 
                                                 >> 0x18U))))) 
                  << 0x18U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [0xaU] >> 0x19U)) ^ (IData)(
                                                    (vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_10 
                                                     >> 0x19U))))) {
        ++(vlSymsp->__Vcoverage[3111]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_10 
            = ((0xfffffffffdffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_10) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [0xaU] 
                                                 >> 0x19U))))) 
                  << 0x19U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [0xaU] >> 0x1aU)) ^ (IData)(
                                                    (vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_10 
                                                     >> 0x1aU))))) {
        ++(vlSymsp->__Vcoverage[3112]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_10 
            = ((0xfffffffffbffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_10) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [0xaU] 
                                                 >> 0x1aU))))) 
                  << 0x1aU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [0xaU] >> 0x1bU)) ^ (IData)(
                                                    (vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_10 
                                                     >> 0x1bU))))) {
        ++(vlSymsp->__Vcoverage[3113]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_10 
            = ((0xfffffffff7ffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_10) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [0xaU] 
                                                 >> 0x1bU))))) 
                  << 0x1bU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [0xaU] >> 0x1cU)) ^ (IData)(
                                                    (vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_10 
                                                     >> 0x1cU))))) {
        ++(vlSymsp->__Vcoverage[3114]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_10 
            = ((0xffffffffefffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_10) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [0xaU] 
                                                 >> 0x1cU))))) 
                  << 0x1cU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [0xaU] >> 0x1dU)) ^ (IData)(
                                                    (vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_10 
                                                     >> 0x1dU))))) {
        ++(vlSymsp->__Vcoverage[3115]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_10 
            = ((0xffffffffdfffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_10) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [0xaU] 
                                                 >> 0x1dU))))) 
                  << 0x1dU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [0xaU] >> 0x1eU)) ^ (IData)(
                                                    (vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_10 
                                                     >> 0x1eU))))) {
        ++(vlSymsp->__Vcoverage[3116]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_10 
            = ((0xffffffffbfffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_10) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [0xaU] 
                                                 >> 0x1eU))))) 
                  << 0x1eU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [0xaU] >> 0x1fU)) ^ (IData)(
                                                    (vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_10 
                                                     >> 0x1fU))))) {
        ++(vlSymsp->__Vcoverage[3117]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_10 
            = ((0xffffffff7fffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_10) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [0xaU] 
                                                 >> 0x1fU))))) 
                  << 0x1fU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [0xaU] >> 0x20U)) ^ (IData)(
                                                    (vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_10 
                                                     >> 0x20U))))) {
        ++(vlSymsp->__Vcoverage[3118]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_10 
            = ((0xfffffffeffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_10) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [0xaU] 
                                                 >> 0x20U))))) 
                  << 0x20U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [0xaU] >> 0x21U)) ^ (IData)(
                                                    (vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_10 
                                                     >> 0x21U))))) {
        ++(vlSymsp->__Vcoverage[3119]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_10 
            = ((0xfffffffdffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_10) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [0xaU] 
                                                 >> 0x21U))))) 
                  << 0x21U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [0xaU] >> 0x22U)) ^ (IData)(
                                                    (vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_10 
                                                     >> 0x22U))))) {
        ++(vlSymsp->__Vcoverage[3120]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_10 
            = ((0xfffffffbffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_10) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [0xaU] 
                                                 >> 0x22U))))) 
                  << 0x22U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [0xaU] >> 0x23U)) ^ (IData)(
                                                    (vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_10 
                                                     >> 0x23U))))) {
        ++(vlSymsp->__Vcoverage[3121]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_10 
            = ((0xfffffff7ffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_10) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [0xaU] 
                                                 >> 0x23U))))) 
                  << 0x23U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [0xaU] >> 0x24U)) ^ (IData)(
                                                    (vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_10 
                                                     >> 0x24U))))) {
        ++(vlSymsp->__Vcoverage[3122]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_10 
            = ((0xffffffefffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_10) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [0xaU] 
                                                 >> 0x24U))))) 
                  << 0x24U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [0xaU] >> 0x25U)) ^ (IData)(
                                                    (vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_10 
                                                     >> 0x25U))))) {
        ++(vlSymsp->__Vcoverage[3123]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_10 
            = ((0xffffffdfffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_10) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [0xaU] 
                                                 >> 0x25U))))) 
                  << 0x25U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [0xaU] >> 0x26U)) ^ (IData)(
                                                    (vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_10 
                                                     >> 0x26U))))) {
        ++(vlSymsp->__Vcoverage[3124]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_10 
            = ((0xffffffbfffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_10) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [0xaU] 
                                                 >> 0x26U))))) 
                  << 0x26U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [0xaU] >> 0x27U)) ^ (IData)(
                                                    (vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_10 
                                                     >> 0x27U))))) {
        ++(vlSymsp->__Vcoverage[3125]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_10 
            = ((0xffffff7fffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_10) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [0xaU] 
                                                 >> 0x27U))))) 
                  << 0x27U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [0xaU] >> 0x28U)) ^ (IData)(
                                                    (vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_10 
                                                     >> 0x28U))))) {
        ++(vlSymsp->__Vcoverage[3126]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_10 
            = ((0xfffffeffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_10) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [0xaU] 
                                                 >> 0x28U))))) 
                  << 0x28U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [0xaU] >> 0x29U)) ^ (IData)(
                                                    (vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_10 
                                                     >> 0x29U))))) {
        ++(vlSymsp->__Vcoverage[3127]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_10 
            = ((0xfffffdffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_10) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [0xaU] 
                                                 >> 0x29U))))) 
                  << 0x29U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [0xaU] >> 0x2aU)) ^ (IData)(
                                                    (vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_10 
                                                     >> 0x2aU))))) {
        ++(vlSymsp->__Vcoverage[3128]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_10 
            = ((0xfffffbffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_10) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [0xaU] 
                                                 >> 0x2aU))))) 
                  << 0x2aU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [0xaU] >> 0x2bU)) ^ (IData)(
                                                    (vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_10 
                                                     >> 0x2bU))))) {
        ++(vlSymsp->__Vcoverage[3129]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_10 
            = ((0xfffff7ffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_10) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [0xaU] 
                                                 >> 0x2bU))))) 
                  << 0x2bU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [0xaU] >> 0x2cU)) ^ (IData)(
                                                    (vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_10 
                                                     >> 0x2cU))))) {
        ++(vlSymsp->__Vcoverage[3130]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_10 
            = ((0xffffefffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_10) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [0xaU] 
                                                 >> 0x2cU))))) 
                  << 0x2cU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [0xaU] >> 0x2dU)) ^ (IData)(
                                                    (vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_10 
                                                     >> 0x2dU))))) {
        ++(vlSymsp->__Vcoverage[3131]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_10 
            = ((0xffffdfffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_10) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [0xaU] 
                                                 >> 0x2dU))))) 
                  << 0x2dU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [0xaU] >> 0x2eU)) ^ (IData)(
                                                    (vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_10 
                                                     >> 0x2eU))))) {
        ++(vlSymsp->__Vcoverage[3132]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_10 
            = ((0xffffbfffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_10) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [0xaU] 
                                                 >> 0x2eU))))) 
                  << 0x2eU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [0xaU] >> 0x2fU)) ^ (IData)(
                                                    (vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_10 
                                                     >> 0x2fU))))) {
        ++(vlSymsp->__Vcoverage[3133]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_10 
            = ((0xffff7fffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_10) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [0xaU] 
                                                 >> 0x2fU))))) 
                  << 0x2fU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [0xaU] >> 0x30U)) ^ (IData)(
                                                    (vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_10 
                                                     >> 0x30U))))) {
        ++(vlSymsp->__Vcoverage[3134]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_10 
            = ((0xfffeffffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_10) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [0xaU] 
                                                 >> 0x30U))))) 
                  << 0x30U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [0xaU] >> 0x31U)) ^ (IData)(
                                                    (vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_10 
                                                     >> 0x31U))))) {
        ++(vlSymsp->__Vcoverage[3135]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_10 
            = ((0xfffdffffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_10) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [0xaU] 
                                                 >> 0x31U))))) 
                  << 0x31U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [0xaU] >> 0x32U)) ^ (IData)(
                                                    (vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_10 
                                                     >> 0x32U))))) {
        ++(vlSymsp->__Vcoverage[3136]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_10 
            = ((0xfffbffffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_10) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [0xaU] 
                                                 >> 0x32U))))) 
                  << 0x32U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [0xaU] >> 0x33U)) ^ (IData)(
                                                    (vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_10 
                                                     >> 0x33U))))) {
        ++(vlSymsp->__Vcoverage[3137]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_10 
            = ((0xfff7ffffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_10) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [0xaU] 
                                                 >> 0x33U))))) 
                  << 0x33U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [0xaU] >> 0x34U)) ^ (IData)(
                                                    (vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_10 
                                                     >> 0x34U))))) {
        ++(vlSymsp->__Vcoverage[3138]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_10 
            = ((0xffefffffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_10) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [0xaU] 
                                                 >> 0x34U))))) 
                  << 0x34U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [0xaU] >> 0x35U)) ^ (IData)(
                                                    (vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_10 
                                                     >> 0x35U))))) {
        ++(vlSymsp->__Vcoverage[3139]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_10 
            = ((0xffdfffffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_10) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [0xaU] 
                                                 >> 0x35U))))) 
                  << 0x35U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [0xaU] >> 0x36U)) ^ (IData)(
                                                    (vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_10 
                                                     >> 0x36U))))) {
        ++(vlSymsp->__Vcoverage[3140]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_10 
            = ((0xffbfffffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_10) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [0xaU] 
                                                 >> 0x36U))))) 
                  << 0x36U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [0xaU] >> 0x37U)) ^ (IData)(
                                                    (vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_10 
                                                     >> 0x37U))))) {
        ++(vlSymsp->__Vcoverage[3141]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_10 
            = ((0xff7fffffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_10) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [0xaU] 
                                                 >> 0x37U))))) 
                  << 0x37U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [0xaU] >> 0x38U)) ^ (IData)(
                                                    (vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_10 
                                                     >> 0x38U))))) {
        ++(vlSymsp->__Vcoverage[3142]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_10 
            = ((0xfeffffffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_10) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [0xaU] 
                                                 >> 0x38U))))) 
                  << 0x38U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [0xaU] >> 0x39U)) ^ (IData)(
                                                    (vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_10 
                                                     >> 0x39U))))) {
        ++(vlSymsp->__Vcoverage[3143]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_10 
            = ((0xfdffffffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_10) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [0xaU] 
                                                 >> 0x39U))))) 
                  << 0x39U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [0xaU] >> 0x3aU)) ^ (IData)(
                                                    (vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_10 
                                                     >> 0x3aU))))) {
        ++(vlSymsp->__Vcoverage[3144]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_10 
            = ((0xfbffffffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_10) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [0xaU] 
                                                 >> 0x3aU))))) 
                  << 0x3aU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [0xaU] >> 0x3bU)) ^ (IData)(
                                                    (vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_10 
                                                     >> 0x3bU))))) {
        ++(vlSymsp->__Vcoverage[3145]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_10 
            = ((0xf7ffffffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_10) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [0xaU] 
                                                 >> 0x3bU))))) 
                  << 0x3bU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [0xaU] >> 0x3cU)) ^ (IData)(
                                                    (vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_10 
                                                     >> 0x3cU))))) {
        ++(vlSymsp->__Vcoverage[3146]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_10 
            = ((0xefffffffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_10) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [0xaU] 
                                                 >> 0x3cU))))) 
                  << 0x3cU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [0xaU] >> 0x3dU)) ^ (IData)(
                                                    (vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_10 
                                                     >> 0x3dU))))) {
        ++(vlSymsp->__Vcoverage[3147]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_10 
            = ((0xdfffffffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_10) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [0xaU] 
                                                 >> 0x3dU))))) 
                  << 0x3dU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [0xaU] >> 0x3eU)) ^ (IData)(
                                                    (vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_10 
                                                     >> 0x3eU))))) {
        ++(vlSymsp->__Vcoverage[3148]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_10 
            = ((0xbfffffffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_10) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [0xaU] 
                                                 >> 0x3eU))))) 
                  << 0x3eU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [0xaU] >> 0x3fU)) ^ (IData)(
                                                    (vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_10 
                                                     >> 0x3fU))))) {
        ++(vlSymsp->__Vcoverage[3149]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_10 
            = ((0x7fffffffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_10) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [0xaU] 
                                                 >> 0x3fU))))) 
                  << 0x3fU));
    }
    if ((1U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                       [0xbU]) ^ (IData)(vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_11)))) {
        ++(vlSymsp->__Vcoverage[3150]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_11 
            = ((0xfffffffffffffffeULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_11) 
               | (IData)((IData)((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                               [0xbU])))));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [0xbU] >> 1U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_11 
                                                  >> 1U))))) {
        ++(vlSymsp->__Vcoverage[3151]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_11 
            = ((0xfffffffffffffffdULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_11) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [0xbU] 
                                                 >> 1U))))) 
                  << 1U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [0xbU] >> 2U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_11 
                                                  >> 2U))))) {
        ++(vlSymsp->__Vcoverage[3152]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_11 
            = ((0xfffffffffffffffbULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_11) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [0xbU] 
                                                 >> 2U))))) 
                  << 2U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [0xbU] >> 3U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_11 
                                                  >> 3U))))) {
        ++(vlSymsp->__Vcoverage[3153]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_11 
            = ((0xfffffffffffffff7ULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_11) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [0xbU] 
                                                 >> 3U))))) 
                  << 3U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [0xbU] >> 4U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_11 
                                                  >> 4U))))) {
        ++(vlSymsp->__Vcoverage[3154]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_11 
            = ((0xffffffffffffffefULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_11) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [0xbU] 
                                                 >> 4U))))) 
                  << 4U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [0xbU] >> 5U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_11 
                                                  >> 5U))))) {
        ++(vlSymsp->__Vcoverage[3155]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_11 
            = ((0xffffffffffffffdfULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_11) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [0xbU] 
                                                 >> 5U))))) 
                  << 5U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [0xbU] >> 6U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_11 
                                                  >> 6U))))) {
        ++(vlSymsp->__Vcoverage[3156]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_11 
            = ((0xffffffffffffffbfULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_11) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [0xbU] 
                                                 >> 6U))))) 
                  << 6U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [0xbU] >> 7U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_11 
                                                  >> 7U))))) {
        ++(vlSymsp->__Vcoverage[3157]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_11 
            = ((0xffffffffffffff7fULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_11) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [0xbU] 
                                                 >> 7U))))) 
                  << 7U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [0xbU] >> 8U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_11 
                                                  >> 8U))))) {
        ++(vlSymsp->__Vcoverage[3158]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_11 
            = ((0xfffffffffffffeffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_11) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [0xbU] 
                                                 >> 8U))))) 
                  << 8U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [0xbU] >> 9U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_11 
                                                  >> 9U))))) {
        ++(vlSymsp->__Vcoverage[3159]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_11 
            = ((0xfffffffffffffdffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_11) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [0xbU] 
                                                 >> 9U))))) 
                  << 9U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [0xbU] >> 0xaU)) ^ (IData)(
                                                   (vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_11 
                                                    >> 0xaU))))) {
        ++(vlSymsp->__Vcoverage[3160]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_11 
            = ((0xfffffffffffffbffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_11) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [0xbU] 
                                                 >> 0xaU))))) 
                  << 0xaU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [0xbU] >> 0xbU)) ^ (IData)(
                                                   (vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_11 
                                                    >> 0xbU))))) {
        ++(vlSymsp->__Vcoverage[3161]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_11 
            = ((0xfffffffffffff7ffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_11) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [0xbU] 
                                                 >> 0xbU))))) 
                  << 0xbU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [0xbU] >> 0xcU)) ^ (IData)(
                                                   (vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_11 
                                                    >> 0xcU))))) {
        ++(vlSymsp->__Vcoverage[3162]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_11 
            = ((0xffffffffffffefffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_11) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [0xbU] 
                                                 >> 0xcU))))) 
                  << 0xcU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [0xbU] >> 0xdU)) ^ (IData)(
                                                   (vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_11 
                                                    >> 0xdU))))) {
        ++(vlSymsp->__Vcoverage[3163]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_11 
            = ((0xffffffffffffdfffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_11) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [0xbU] 
                                                 >> 0xdU))))) 
                  << 0xdU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [0xbU] >> 0xeU)) ^ (IData)(
                                                   (vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_11 
                                                    >> 0xeU))))) {
        ++(vlSymsp->__Vcoverage[3164]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_11 
            = ((0xffffffffffffbfffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_11) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [0xbU] 
                                                 >> 0xeU))))) 
                  << 0xeU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [0xbU] >> 0xfU)) ^ (IData)(
                                                   (vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_11 
                                                    >> 0xfU))))) {
        ++(vlSymsp->__Vcoverage[3165]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_11 
            = ((0xffffffffffff7fffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_11) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [0xbU] 
                                                 >> 0xfU))))) 
                  << 0xfU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [0xbU] >> 0x10U)) ^ (IData)(
                                                    (vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_11 
                                                     >> 0x10U))))) {
        ++(vlSymsp->__Vcoverage[3166]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_11 
            = ((0xfffffffffffeffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_11) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [0xbU] 
                                                 >> 0x10U))))) 
                  << 0x10U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [0xbU] >> 0x11U)) ^ (IData)(
                                                    (vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_11 
                                                     >> 0x11U))))) {
        ++(vlSymsp->__Vcoverage[3167]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_11 
            = ((0xfffffffffffdffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_11) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [0xbU] 
                                                 >> 0x11U))))) 
                  << 0x11U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [0xbU] >> 0x12U)) ^ (IData)(
                                                    (vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_11 
                                                     >> 0x12U))))) {
        ++(vlSymsp->__Vcoverage[3168]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_11 
            = ((0xfffffffffffbffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_11) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [0xbU] 
                                                 >> 0x12U))))) 
                  << 0x12U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [0xbU] >> 0x13U)) ^ (IData)(
                                                    (vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_11 
                                                     >> 0x13U))))) {
        ++(vlSymsp->__Vcoverage[3169]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_11 
            = ((0xfffffffffff7ffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_11) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [0xbU] 
                                                 >> 0x13U))))) 
                  << 0x13U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [0xbU] >> 0x14U)) ^ (IData)(
                                                    (vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_11 
                                                     >> 0x14U))))) {
        ++(vlSymsp->__Vcoverage[3170]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_11 
            = ((0xffffffffffefffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_11) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [0xbU] 
                                                 >> 0x14U))))) 
                  << 0x14U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [0xbU] >> 0x15U)) ^ (IData)(
                                                    (vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_11 
                                                     >> 0x15U))))) {
        ++(vlSymsp->__Vcoverage[3171]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_11 
            = ((0xffffffffffdfffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_11) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [0xbU] 
                                                 >> 0x15U))))) 
                  << 0x15U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [0xbU] >> 0x16U)) ^ (IData)(
                                                    (vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_11 
                                                     >> 0x16U))))) {
        ++(vlSymsp->__Vcoverage[3172]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_11 
            = ((0xffffffffffbfffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_11) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [0xbU] 
                                                 >> 0x16U))))) 
                  << 0x16U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [0xbU] >> 0x17U)) ^ (IData)(
                                                    (vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_11 
                                                     >> 0x17U))))) {
        ++(vlSymsp->__Vcoverage[3173]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_11 
            = ((0xffffffffff7fffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_11) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [0xbU] 
                                                 >> 0x17U))))) 
                  << 0x17U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [0xbU] >> 0x18U)) ^ (IData)(
                                                    (vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_11 
                                                     >> 0x18U))))) {
        ++(vlSymsp->__Vcoverage[3174]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_11 
            = ((0xfffffffffeffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_11) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [0xbU] 
                                                 >> 0x18U))))) 
                  << 0x18U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [0xbU] >> 0x19U)) ^ (IData)(
                                                    (vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_11 
                                                     >> 0x19U))))) {
        ++(vlSymsp->__Vcoverage[3175]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_11 
            = ((0xfffffffffdffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_11) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [0xbU] 
                                                 >> 0x19U))))) 
                  << 0x19U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [0xbU] >> 0x1aU)) ^ (IData)(
                                                    (vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_11 
                                                     >> 0x1aU))))) {
        ++(vlSymsp->__Vcoverage[3176]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_11 
            = ((0xfffffffffbffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_11) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [0xbU] 
                                                 >> 0x1aU))))) 
                  << 0x1aU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [0xbU] >> 0x1bU)) ^ (IData)(
                                                    (vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_11 
                                                     >> 0x1bU))))) {
        ++(vlSymsp->__Vcoverage[3177]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_11 
            = ((0xfffffffff7ffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_11) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [0xbU] 
                                                 >> 0x1bU))))) 
                  << 0x1bU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [0xbU] >> 0x1cU)) ^ (IData)(
                                                    (vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_11 
                                                     >> 0x1cU))))) {
        ++(vlSymsp->__Vcoverage[3178]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_11 
            = ((0xffffffffefffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_11) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [0xbU] 
                                                 >> 0x1cU))))) 
                  << 0x1cU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [0xbU] >> 0x1dU)) ^ (IData)(
                                                    (vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_11 
                                                     >> 0x1dU))))) {
        ++(vlSymsp->__Vcoverage[3179]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_11 
            = ((0xffffffffdfffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_11) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [0xbU] 
                                                 >> 0x1dU))))) 
                  << 0x1dU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [0xbU] >> 0x1eU)) ^ (IData)(
                                                    (vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_11 
                                                     >> 0x1eU))))) {
        ++(vlSymsp->__Vcoverage[3180]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_11 
            = ((0xffffffffbfffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_11) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [0xbU] 
                                                 >> 0x1eU))))) 
                  << 0x1eU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [0xbU] >> 0x1fU)) ^ (IData)(
                                                    (vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_11 
                                                     >> 0x1fU))))) {
        ++(vlSymsp->__Vcoverage[3181]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_11 
            = ((0xffffffff7fffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_11) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [0xbU] 
                                                 >> 0x1fU))))) 
                  << 0x1fU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [0xbU] >> 0x20U)) ^ (IData)(
                                                    (vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_11 
                                                     >> 0x20U))))) {
        ++(vlSymsp->__Vcoverage[3182]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_11 
            = ((0xfffffffeffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_11) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [0xbU] 
                                                 >> 0x20U))))) 
                  << 0x20U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [0xbU] >> 0x21U)) ^ (IData)(
                                                    (vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_11 
                                                     >> 0x21U))))) {
        ++(vlSymsp->__Vcoverage[3183]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_11 
            = ((0xfffffffdffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_11) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [0xbU] 
                                                 >> 0x21U))))) 
                  << 0x21U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [0xbU] >> 0x22U)) ^ (IData)(
                                                    (vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_11 
                                                     >> 0x22U))))) {
        ++(vlSymsp->__Vcoverage[3184]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_11 
            = ((0xfffffffbffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_11) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [0xbU] 
                                                 >> 0x22U))))) 
                  << 0x22U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [0xbU] >> 0x23U)) ^ (IData)(
                                                    (vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_11 
                                                     >> 0x23U))))) {
        ++(vlSymsp->__Vcoverage[3185]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_11 
            = ((0xfffffff7ffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_11) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [0xbU] 
                                                 >> 0x23U))))) 
                  << 0x23U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [0xbU] >> 0x24U)) ^ (IData)(
                                                    (vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_11 
                                                     >> 0x24U))))) {
        ++(vlSymsp->__Vcoverage[3186]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_11 
            = ((0xffffffefffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_11) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [0xbU] 
                                                 >> 0x24U))))) 
                  << 0x24U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [0xbU] >> 0x25U)) ^ (IData)(
                                                    (vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_11 
                                                     >> 0x25U))))) {
        ++(vlSymsp->__Vcoverage[3187]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_11 
            = ((0xffffffdfffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_11) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [0xbU] 
                                                 >> 0x25U))))) 
                  << 0x25U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [0xbU] >> 0x26U)) ^ (IData)(
                                                    (vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_11 
                                                     >> 0x26U))))) {
        ++(vlSymsp->__Vcoverage[3188]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_11 
            = ((0xffffffbfffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_11) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [0xbU] 
                                                 >> 0x26U))))) 
                  << 0x26U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [0xbU] >> 0x27U)) ^ (IData)(
                                                    (vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_11 
                                                     >> 0x27U))))) {
        ++(vlSymsp->__Vcoverage[3189]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_11 
            = ((0xffffff7fffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_11) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [0xbU] 
                                                 >> 0x27U))))) 
                  << 0x27U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [0xbU] >> 0x28U)) ^ (IData)(
                                                    (vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_11 
                                                     >> 0x28U))))) {
        ++(vlSymsp->__Vcoverage[3190]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_11 
            = ((0xfffffeffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_11) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [0xbU] 
                                                 >> 0x28U))))) 
                  << 0x28U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [0xbU] >> 0x29U)) ^ (IData)(
                                                    (vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_11 
                                                     >> 0x29U))))) {
        ++(vlSymsp->__Vcoverage[3191]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_11 
            = ((0xfffffdffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_11) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [0xbU] 
                                                 >> 0x29U))))) 
                  << 0x29U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [0xbU] >> 0x2aU)) ^ (IData)(
                                                    (vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_11 
                                                     >> 0x2aU))))) {
        ++(vlSymsp->__Vcoverage[3192]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_11 
            = ((0xfffffbffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_11) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [0xbU] 
                                                 >> 0x2aU))))) 
                  << 0x2aU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [0xbU] >> 0x2bU)) ^ (IData)(
                                                    (vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_11 
                                                     >> 0x2bU))))) {
        ++(vlSymsp->__Vcoverage[3193]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_11 
            = ((0xfffff7ffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_11) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [0xbU] 
                                                 >> 0x2bU))))) 
                  << 0x2bU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [0xbU] >> 0x2cU)) ^ (IData)(
                                                    (vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_11 
                                                     >> 0x2cU))))) {
        ++(vlSymsp->__Vcoverage[3194]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_11 
            = ((0xffffefffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_11) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [0xbU] 
                                                 >> 0x2cU))))) 
                  << 0x2cU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [0xbU] >> 0x2dU)) ^ (IData)(
                                                    (vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_11 
                                                     >> 0x2dU))))) {
        ++(vlSymsp->__Vcoverage[3195]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_11 
            = ((0xffffdfffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_11) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [0xbU] 
                                                 >> 0x2dU))))) 
                  << 0x2dU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [0xbU] >> 0x2eU)) ^ (IData)(
                                                    (vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_11 
                                                     >> 0x2eU))))) {
        ++(vlSymsp->__Vcoverage[3196]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_11 
            = ((0xffffbfffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_11) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [0xbU] 
                                                 >> 0x2eU))))) 
                  << 0x2eU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [0xbU] >> 0x2fU)) ^ (IData)(
                                                    (vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_11 
                                                     >> 0x2fU))))) {
        ++(vlSymsp->__Vcoverage[3197]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_11 
            = ((0xffff7fffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_11) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [0xbU] 
                                                 >> 0x2fU))))) 
                  << 0x2fU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [0xbU] >> 0x30U)) ^ (IData)(
                                                    (vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_11 
                                                     >> 0x30U))))) {
        ++(vlSymsp->__Vcoverage[3198]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_11 
            = ((0xfffeffffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_11) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [0xbU] 
                                                 >> 0x30U))))) 
                  << 0x30U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [0xbU] >> 0x31U)) ^ (IData)(
                                                    (vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_11 
                                                     >> 0x31U))))) {
        ++(vlSymsp->__Vcoverage[3199]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_11 
            = ((0xfffdffffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_11) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [0xbU] 
                                                 >> 0x31U))))) 
                  << 0x31U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [0xbU] >> 0x32U)) ^ (IData)(
                                                    (vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_11 
                                                     >> 0x32U))))) {
        ++(vlSymsp->__Vcoverage[3200]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_11 
            = ((0xfffbffffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_11) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [0xbU] 
                                                 >> 0x32U))))) 
                  << 0x32U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [0xbU] >> 0x33U)) ^ (IData)(
                                                    (vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_11 
                                                     >> 0x33U))))) {
        ++(vlSymsp->__Vcoverage[3201]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_11 
            = ((0xfff7ffffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_11) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [0xbU] 
                                                 >> 0x33U))))) 
                  << 0x33U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [0xbU] >> 0x34U)) ^ (IData)(
                                                    (vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_11 
                                                     >> 0x34U))))) {
        ++(vlSymsp->__Vcoverage[3202]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_11 
            = ((0xffefffffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_11) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [0xbU] 
                                                 >> 0x34U))))) 
                  << 0x34U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [0xbU] >> 0x35U)) ^ (IData)(
                                                    (vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_11 
                                                     >> 0x35U))))) {
        ++(vlSymsp->__Vcoverage[3203]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_11 
            = ((0xffdfffffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_11) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [0xbU] 
                                                 >> 0x35U))))) 
                  << 0x35U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [0xbU] >> 0x36U)) ^ (IData)(
                                                    (vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_11 
                                                     >> 0x36U))))) {
        ++(vlSymsp->__Vcoverage[3204]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_11 
            = ((0xffbfffffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_11) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [0xbU] 
                                                 >> 0x36U))))) 
                  << 0x36U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [0xbU] >> 0x37U)) ^ (IData)(
                                                    (vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_11 
                                                     >> 0x37U))))) {
        ++(vlSymsp->__Vcoverage[3205]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_11 
            = ((0xff7fffffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_11) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [0xbU] 
                                                 >> 0x37U))))) 
                  << 0x37U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [0xbU] >> 0x38U)) ^ (IData)(
                                                    (vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_11 
                                                     >> 0x38U))))) {
        ++(vlSymsp->__Vcoverage[3206]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_11 
            = ((0xfeffffffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_11) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [0xbU] 
                                                 >> 0x38U))))) 
                  << 0x38U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [0xbU] >> 0x39U)) ^ (IData)(
                                                    (vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_11 
                                                     >> 0x39U))))) {
        ++(vlSymsp->__Vcoverage[3207]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_11 
            = ((0xfdffffffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_11) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [0xbU] 
                                                 >> 0x39U))))) 
                  << 0x39U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [0xbU] >> 0x3aU)) ^ (IData)(
                                                    (vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_11 
                                                     >> 0x3aU))))) {
        ++(vlSymsp->__Vcoverage[3208]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_11 
            = ((0xfbffffffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_11) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [0xbU] 
                                                 >> 0x3aU))))) 
                  << 0x3aU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [0xbU] >> 0x3bU)) ^ (IData)(
                                                    (vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_11 
                                                     >> 0x3bU))))) {
        ++(vlSymsp->__Vcoverage[3209]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_11 
            = ((0xf7ffffffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_11) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [0xbU] 
                                                 >> 0x3bU))))) 
                  << 0x3bU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [0xbU] >> 0x3cU)) ^ (IData)(
                                                    (vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_11 
                                                     >> 0x3cU))))) {
        ++(vlSymsp->__Vcoverage[3210]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_11 
            = ((0xefffffffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_11) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [0xbU] 
                                                 >> 0x3cU))))) 
                  << 0x3cU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [0xbU] >> 0x3dU)) ^ (IData)(
                                                    (vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_11 
                                                     >> 0x3dU))))) {
        ++(vlSymsp->__Vcoverage[3211]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_11 
            = ((0xdfffffffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_11) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [0xbU] 
                                                 >> 0x3dU))))) 
                  << 0x3dU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [0xbU] >> 0x3eU)) ^ (IData)(
                                                    (vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_11 
                                                     >> 0x3eU))))) {
        ++(vlSymsp->__Vcoverage[3212]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_11 
            = ((0xbfffffffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_11) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [0xbU] 
                                                 >> 0x3eU))))) 
                  << 0x3eU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [0xbU] >> 0x3fU)) ^ (IData)(
                                                    (vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_11 
                                                     >> 0x3fU))))) {
        ++(vlSymsp->__Vcoverage[3213]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_11 
            = ((0x7fffffffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_11) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [0xbU] 
                                                 >> 0x3fU))))) 
                  << 0x3fU));
    }
    if ((1U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                       [0xcU]) ^ (IData)(vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_12)))) {
        ++(vlSymsp->__Vcoverage[3214]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_12 
            = ((0xfffffffffffffffeULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_12) 
               | (IData)((IData)((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                               [0xcU])))));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [0xcU] >> 1U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_12 
                                                  >> 1U))))) {
        ++(vlSymsp->__Vcoverage[3215]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_12 
            = ((0xfffffffffffffffdULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_12) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [0xcU] 
                                                 >> 1U))))) 
                  << 1U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [0xcU] >> 2U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_12 
                                                  >> 2U))))) {
        ++(vlSymsp->__Vcoverage[3216]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_12 
            = ((0xfffffffffffffffbULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_12) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [0xcU] 
                                                 >> 2U))))) 
                  << 2U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [0xcU] >> 3U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_12 
                                                  >> 3U))))) {
        ++(vlSymsp->__Vcoverage[3217]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_12 
            = ((0xfffffffffffffff7ULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_12) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [0xcU] 
                                                 >> 3U))))) 
                  << 3U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [0xcU] >> 4U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_12 
                                                  >> 4U))))) {
        ++(vlSymsp->__Vcoverage[3218]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_12 
            = ((0xffffffffffffffefULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_12) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [0xcU] 
                                                 >> 4U))))) 
                  << 4U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [0xcU] >> 5U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_12 
                                                  >> 5U))))) {
        ++(vlSymsp->__Vcoverage[3219]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_12 
            = ((0xffffffffffffffdfULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_12) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [0xcU] 
                                                 >> 5U))))) 
                  << 5U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [0xcU] >> 6U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_12 
                                                  >> 6U))))) {
        ++(vlSymsp->__Vcoverage[3220]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_12 
            = ((0xffffffffffffffbfULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_12) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [0xcU] 
                                                 >> 6U))))) 
                  << 6U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [0xcU] >> 7U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_12 
                                                  >> 7U))))) {
        ++(vlSymsp->__Vcoverage[3221]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_12 
            = ((0xffffffffffffff7fULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_12) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [0xcU] 
                                                 >> 7U))))) 
                  << 7U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [0xcU] >> 8U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_12 
                                                  >> 8U))))) {
        ++(vlSymsp->__Vcoverage[3222]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_12 
            = ((0xfffffffffffffeffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_12) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [0xcU] 
                                                 >> 8U))))) 
                  << 8U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [0xcU] >> 9U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_12 
                                                  >> 9U))))) {
        ++(vlSymsp->__Vcoverage[3223]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_12 
            = ((0xfffffffffffffdffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_12) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [0xcU] 
                                                 >> 9U))))) 
                  << 9U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [0xcU] >> 0xaU)) ^ (IData)(
                                                   (vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_12 
                                                    >> 0xaU))))) {
        ++(vlSymsp->__Vcoverage[3224]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_12 
            = ((0xfffffffffffffbffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_12) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [0xcU] 
                                                 >> 0xaU))))) 
                  << 0xaU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [0xcU] >> 0xbU)) ^ (IData)(
                                                   (vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_12 
                                                    >> 0xbU))))) {
        ++(vlSymsp->__Vcoverage[3225]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_12 
            = ((0xfffffffffffff7ffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_12) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [0xcU] 
                                                 >> 0xbU))))) 
                  << 0xbU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [0xcU] >> 0xcU)) ^ (IData)(
                                                   (vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_12 
                                                    >> 0xcU))))) {
        ++(vlSymsp->__Vcoverage[3226]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_12 
            = ((0xffffffffffffefffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_12) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [0xcU] 
                                                 >> 0xcU))))) 
                  << 0xcU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [0xcU] >> 0xdU)) ^ (IData)(
                                                   (vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_12 
                                                    >> 0xdU))))) {
        ++(vlSymsp->__Vcoverage[3227]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_12 
            = ((0xffffffffffffdfffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_12) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [0xcU] 
                                                 >> 0xdU))))) 
                  << 0xdU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [0xcU] >> 0xeU)) ^ (IData)(
                                                   (vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_12 
                                                    >> 0xeU))))) {
        ++(vlSymsp->__Vcoverage[3228]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_12 
            = ((0xffffffffffffbfffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_12) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [0xcU] 
                                                 >> 0xeU))))) 
                  << 0xeU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [0xcU] >> 0xfU)) ^ (IData)(
                                                   (vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_12 
                                                    >> 0xfU))))) {
        ++(vlSymsp->__Vcoverage[3229]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_12 
            = ((0xffffffffffff7fffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_12) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [0xcU] 
                                                 >> 0xfU))))) 
                  << 0xfU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [0xcU] >> 0x10U)) ^ (IData)(
                                                    (vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_12 
                                                     >> 0x10U))))) {
        ++(vlSymsp->__Vcoverage[3230]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_12 
            = ((0xfffffffffffeffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_12) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [0xcU] 
                                                 >> 0x10U))))) 
                  << 0x10U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [0xcU] >> 0x11U)) ^ (IData)(
                                                    (vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_12 
                                                     >> 0x11U))))) {
        ++(vlSymsp->__Vcoverage[3231]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_12 
            = ((0xfffffffffffdffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_12) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [0xcU] 
                                                 >> 0x11U))))) 
                  << 0x11U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [0xcU] >> 0x12U)) ^ (IData)(
                                                    (vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_12 
                                                     >> 0x12U))))) {
        ++(vlSymsp->__Vcoverage[3232]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_12 
            = ((0xfffffffffffbffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_12) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [0xcU] 
                                                 >> 0x12U))))) 
                  << 0x12U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [0xcU] >> 0x13U)) ^ (IData)(
                                                    (vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_12 
                                                     >> 0x13U))))) {
        ++(vlSymsp->__Vcoverage[3233]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_12 
            = ((0xfffffffffff7ffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_12) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [0xcU] 
                                                 >> 0x13U))))) 
                  << 0x13U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [0xcU] >> 0x14U)) ^ (IData)(
                                                    (vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_12 
                                                     >> 0x14U))))) {
        ++(vlSymsp->__Vcoverage[3234]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_12 
            = ((0xffffffffffefffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_12) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [0xcU] 
                                                 >> 0x14U))))) 
                  << 0x14U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [0xcU] >> 0x15U)) ^ (IData)(
                                                    (vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_12 
                                                     >> 0x15U))))) {
        ++(vlSymsp->__Vcoverage[3235]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_12 
            = ((0xffffffffffdfffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_12) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [0xcU] 
                                                 >> 0x15U))))) 
                  << 0x15U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [0xcU] >> 0x16U)) ^ (IData)(
                                                    (vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_12 
                                                     >> 0x16U))))) {
        ++(vlSymsp->__Vcoverage[3236]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_12 
            = ((0xffffffffffbfffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_12) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [0xcU] 
                                                 >> 0x16U))))) 
                  << 0x16U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [0xcU] >> 0x17U)) ^ (IData)(
                                                    (vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_12 
                                                     >> 0x17U))))) {
        ++(vlSymsp->__Vcoverage[3237]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_12 
            = ((0xffffffffff7fffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_12) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [0xcU] 
                                                 >> 0x17U))))) 
                  << 0x17U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [0xcU] >> 0x18U)) ^ (IData)(
                                                    (vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_12 
                                                     >> 0x18U))))) {
        ++(vlSymsp->__Vcoverage[3238]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_12 
            = ((0xfffffffffeffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_12) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [0xcU] 
                                                 >> 0x18U))))) 
                  << 0x18U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [0xcU] >> 0x19U)) ^ (IData)(
                                                    (vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_12 
                                                     >> 0x19U))))) {
        ++(vlSymsp->__Vcoverage[3239]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_12 
            = ((0xfffffffffdffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_12) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [0xcU] 
                                                 >> 0x19U))))) 
                  << 0x19U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [0xcU] >> 0x1aU)) ^ (IData)(
                                                    (vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_12 
                                                     >> 0x1aU))))) {
        ++(vlSymsp->__Vcoverage[3240]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_12 
            = ((0xfffffffffbffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_12) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [0xcU] 
                                                 >> 0x1aU))))) 
                  << 0x1aU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [0xcU] >> 0x1bU)) ^ (IData)(
                                                    (vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_12 
                                                     >> 0x1bU))))) {
        ++(vlSymsp->__Vcoverage[3241]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_12 
            = ((0xfffffffff7ffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_12) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [0xcU] 
                                                 >> 0x1bU))))) 
                  << 0x1bU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [0xcU] >> 0x1cU)) ^ (IData)(
                                                    (vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_12 
                                                     >> 0x1cU))))) {
        ++(vlSymsp->__Vcoverage[3242]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_12 
            = ((0xffffffffefffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_12) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [0xcU] 
                                                 >> 0x1cU))))) 
                  << 0x1cU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [0xcU] >> 0x1dU)) ^ (IData)(
                                                    (vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_12 
                                                     >> 0x1dU))))) {
        ++(vlSymsp->__Vcoverage[3243]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_12 
            = ((0xffffffffdfffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_12) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [0xcU] 
                                                 >> 0x1dU))))) 
                  << 0x1dU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [0xcU] >> 0x1eU)) ^ (IData)(
                                                    (vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_12 
                                                     >> 0x1eU))))) {
        ++(vlSymsp->__Vcoverage[3244]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_12 
            = ((0xffffffffbfffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_12) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [0xcU] 
                                                 >> 0x1eU))))) 
                  << 0x1eU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [0xcU] >> 0x1fU)) ^ (IData)(
                                                    (vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_12 
                                                     >> 0x1fU))))) {
        ++(vlSymsp->__Vcoverage[3245]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_12 
            = ((0xffffffff7fffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_12) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [0xcU] 
                                                 >> 0x1fU))))) 
                  << 0x1fU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [0xcU] >> 0x20U)) ^ (IData)(
                                                    (vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_12 
                                                     >> 0x20U))))) {
        ++(vlSymsp->__Vcoverage[3246]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_12 
            = ((0xfffffffeffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_12) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [0xcU] 
                                                 >> 0x20U))))) 
                  << 0x20U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [0xcU] >> 0x21U)) ^ (IData)(
                                                    (vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_12 
                                                     >> 0x21U))))) {
        ++(vlSymsp->__Vcoverage[3247]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_12 
            = ((0xfffffffdffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_12) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [0xcU] 
                                                 >> 0x21U))))) 
                  << 0x21U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [0xcU] >> 0x22U)) ^ (IData)(
                                                    (vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_12 
                                                     >> 0x22U))))) {
        ++(vlSymsp->__Vcoverage[3248]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_12 
            = ((0xfffffffbffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_12) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [0xcU] 
                                                 >> 0x22U))))) 
                  << 0x22U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [0xcU] >> 0x23U)) ^ (IData)(
                                                    (vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_12 
                                                     >> 0x23U))))) {
        ++(vlSymsp->__Vcoverage[3249]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_12 
            = ((0xfffffff7ffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_12) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [0xcU] 
                                                 >> 0x23U))))) 
                  << 0x23U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [0xcU] >> 0x24U)) ^ (IData)(
                                                    (vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_12 
                                                     >> 0x24U))))) {
        ++(vlSymsp->__Vcoverage[3250]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_12 
            = ((0xffffffefffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_12) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [0xcU] 
                                                 >> 0x24U))))) 
                  << 0x24U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [0xcU] >> 0x25U)) ^ (IData)(
                                                    (vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_12 
                                                     >> 0x25U))))) {
        ++(vlSymsp->__Vcoverage[3251]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_12 
            = ((0xffffffdfffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_12) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [0xcU] 
                                                 >> 0x25U))))) 
                  << 0x25U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [0xcU] >> 0x26U)) ^ (IData)(
                                                    (vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_12 
                                                     >> 0x26U))))) {
        ++(vlSymsp->__Vcoverage[3252]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_12 
            = ((0xffffffbfffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_12) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [0xcU] 
                                                 >> 0x26U))))) 
                  << 0x26U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [0xcU] >> 0x27U)) ^ (IData)(
                                                    (vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_12 
                                                     >> 0x27U))))) {
        ++(vlSymsp->__Vcoverage[3253]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_12 
            = ((0xffffff7fffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_12) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [0xcU] 
                                                 >> 0x27U))))) 
                  << 0x27U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [0xcU] >> 0x28U)) ^ (IData)(
                                                    (vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_12 
                                                     >> 0x28U))))) {
        ++(vlSymsp->__Vcoverage[3254]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_12 
            = ((0xfffffeffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_12) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [0xcU] 
                                                 >> 0x28U))))) 
                  << 0x28U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [0xcU] >> 0x29U)) ^ (IData)(
                                                    (vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_12 
                                                     >> 0x29U))))) {
        ++(vlSymsp->__Vcoverage[3255]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_12 
            = ((0xfffffdffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_12) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [0xcU] 
                                                 >> 0x29U))))) 
                  << 0x29U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [0xcU] >> 0x2aU)) ^ (IData)(
                                                    (vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_12 
                                                     >> 0x2aU))))) {
        ++(vlSymsp->__Vcoverage[3256]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_12 
            = ((0xfffffbffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_12) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [0xcU] 
                                                 >> 0x2aU))))) 
                  << 0x2aU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [0xcU] >> 0x2bU)) ^ (IData)(
                                                    (vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_12 
                                                     >> 0x2bU))))) {
        ++(vlSymsp->__Vcoverage[3257]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_12 
            = ((0xfffff7ffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_12) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [0xcU] 
                                                 >> 0x2bU))))) 
                  << 0x2bU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [0xcU] >> 0x2cU)) ^ (IData)(
                                                    (vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_12 
                                                     >> 0x2cU))))) {
        ++(vlSymsp->__Vcoverage[3258]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_12 
            = ((0xffffefffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_12) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [0xcU] 
                                                 >> 0x2cU))))) 
                  << 0x2cU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [0xcU] >> 0x2dU)) ^ (IData)(
                                                    (vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_12 
                                                     >> 0x2dU))))) {
        ++(vlSymsp->__Vcoverage[3259]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_12 
            = ((0xffffdfffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_12) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [0xcU] 
                                                 >> 0x2dU))))) 
                  << 0x2dU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [0xcU] >> 0x2eU)) ^ (IData)(
                                                    (vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_12 
                                                     >> 0x2eU))))) {
        ++(vlSymsp->__Vcoverage[3260]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_12 
            = ((0xffffbfffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_12) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [0xcU] 
                                                 >> 0x2eU))))) 
                  << 0x2eU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [0xcU] >> 0x2fU)) ^ (IData)(
                                                    (vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_12 
                                                     >> 0x2fU))))) {
        ++(vlSymsp->__Vcoverage[3261]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_12 
            = ((0xffff7fffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_12) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [0xcU] 
                                                 >> 0x2fU))))) 
                  << 0x2fU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [0xcU] >> 0x30U)) ^ (IData)(
                                                    (vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_12 
                                                     >> 0x30U))))) {
        ++(vlSymsp->__Vcoverage[3262]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_12 
            = ((0xfffeffffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_12) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [0xcU] 
                                                 >> 0x30U))))) 
                  << 0x30U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [0xcU] >> 0x31U)) ^ (IData)(
                                                    (vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_12 
                                                     >> 0x31U))))) {
        ++(vlSymsp->__Vcoverage[3263]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_12 
            = ((0xfffdffffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_12) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [0xcU] 
                                                 >> 0x31U))))) 
                  << 0x31U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [0xcU] >> 0x32U)) ^ (IData)(
                                                    (vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_12 
                                                     >> 0x32U))))) {
        ++(vlSymsp->__Vcoverage[3264]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_12 
            = ((0xfffbffffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_12) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [0xcU] 
                                                 >> 0x32U))))) 
                  << 0x32U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [0xcU] >> 0x33U)) ^ (IData)(
                                                    (vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_12 
                                                     >> 0x33U))))) {
        ++(vlSymsp->__Vcoverage[3265]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_12 
            = ((0xfff7ffffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_12) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [0xcU] 
                                                 >> 0x33U))))) 
                  << 0x33U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [0xcU] >> 0x34U)) ^ (IData)(
                                                    (vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_12 
                                                     >> 0x34U))))) {
        ++(vlSymsp->__Vcoverage[3266]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_12 
            = ((0xffefffffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_12) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [0xcU] 
                                                 >> 0x34U))))) 
                  << 0x34U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [0xcU] >> 0x35U)) ^ (IData)(
                                                    (vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_12 
                                                     >> 0x35U))))) {
        ++(vlSymsp->__Vcoverage[3267]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_12 
            = ((0xffdfffffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_12) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [0xcU] 
                                                 >> 0x35U))))) 
                  << 0x35U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [0xcU] >> 0x36U)) ^ (IData)(
                                                    (vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_12 
                                                     >> 0x36U))))) {
        ++(vlSymsp->__Vcoverage[3268]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_12 
            = ((0xffbfffffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_12) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [0xcU] 
                                                 >> 0x36U))))) 
                  << 0x36U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [0xcU] >> 0x37U)) ^ (IData)(
                                                    (vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_12 
                                                     >> 0x37U))))) {
        ++(vlSymsp->__Vcoverage[3269]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_12 
            = ((0xff7fffffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_12) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [0xcU] 
                                                 >> 0x37U))))) 
                  << 0x37U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [0xcU] >> 0x38U)) ^ (IData)(
                                                    (vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_12 
                                                     >> 0x38U))))) {
        ++(vlSymsp->__Vcoverage[3270]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_12 
            = ((0xfeffffffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_12) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [0xcU] 
                                                 >> 0x38U))))) 
                  << 0x38U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [0xcU] >> 0x39U)) ^ (IData)(
                                                    (vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_12 
                                                     >> 0x39U))))) {
        ++(vlSymsp->__Vcoverage[3271]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_12 
            = ((0xfdffffffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_12) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [0xcU] 
                                                 >> 0x39U))))) 
                  << 0x39U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [0xcU] >> 0x3aU)) ^ (IData)(
                                                    (vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_12 
                                                     >> 0x3aU))))) {
        ++(vlSymsp->__Vcoverage[3272]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_12 
            = ((0xfbffffffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_12) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [0xcU] 
                                                 >> 0x3aU))))) 
                  << 0x3aU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [0xcU] >> 0x3bU)) ^ (IData)(
                                                    (vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_12 
                                                     >> 0x3bU))))) {
        ++(vlSymsp->__Vcoverage[3273]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_12 
            = ((0xf7ffffffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_12) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [0xcU] 
                                                 >> 0x3bU))))) 
                  << 0x3bU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [0xcU] >> 0x3cU)) ^ (IData)(
                                                    (vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_12 
                                                     >> 0x3cU))))) {
        ++(vlSymsp->__Vcoverage[3274]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_12 
            = ((0xefffffffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_12) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [0xcU] 
                                                 >> 0x3cU))))) 
                  << 0x3cU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [0xcU] >> 0x3dU)) ^ (IData)(
                                                    (vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_12 
                                                     >> 0x3dU))))) {
        ++(vlSymsp->__Vcoverage[3275]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_12 
            = ((0xdfffffffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_12) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [0xcU] 
                                                 >> 0x3dU))))) 
                  << 0x3dU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [0xcU] >> 0x3eU)) ^ (IData)(
                                                    (vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_12 
                                                     >> 0x3eU))))) {
        ++(vlSymsp->__Vcoverage[3276]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_12 
            = ((0xbfffffffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_12) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [0xcU] 
                                                 >> 0x3eU))))) 
                  << 0x3eU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [0xcU] >> 0x3fU)) ^ (IData)(
                                                    (vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_12 
                                                     >> 0x3fU))))) {
        ++(vlSymsp->__Vcoverage[3277]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_12 
            = ((0x7fffffffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_12) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [0xcU] 
                                                 >> 0x3fU))))) 
                  << 0x3fU));
    }
    if ((1U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                       [0xdU]) ^ (IData)(vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_13)))) {
        ++(vlSymsp->__Vcoverage[3278]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_13 
            = ((0xfffffffffffffffeULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_13) 
               | (IData)((IData)((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                               [0xdU])))));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [0xdU] >> 1U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_13 
                                                  >> 1U))))) {
        ++(vlSymsp->__Vcoverage[3279]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_13 
            = ((0xfffffffffffffffdULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_13) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [0xdU] 
                                                 >> 1U))))) 
                  << 1U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [0xdU] >> 2U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_13 
                                                  >> 2U))))) {
        ++(vlSymsp->__Vcoverage[3280]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_13 
            = ((0xfffffffffffffffbULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_13) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [0xdU] 
                                                 >> 2U))))) 
                  << 2U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [0xdU] >> 3U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_13 
                                                  >> 3U))))) {
        ++(vlSymsp->__Vcoverage[3281]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_13 
            = ((0xfffffffffffffff7ULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_13) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [0xdU] 
                                                 >> 3U))))) 
                  << 3U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [0xdU] >> 4U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_13 
                                                  >> 4U))))) {
        ++(vlSymsp->__Vcoverage[3282]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_13 
            = ((0xffffffffffffffefULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_13) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [0xdU] 
                                                 >> 4U))))) 
                  << 4U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [0xdU] >> 5U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_13 
                                                  >> 5U))))) {
        ++(vlSymsp->__Vcoverage[3283]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_13 
            = ((0xffffffffffffffdfULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_13) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [0xdU] 
                                                 >> 5U))))) 
                  << 5U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [0xdU] >> 6U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_13 
                                                  >> 6U))))) {
        ++(vlSymsp->__Vcoverage[3284]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_13 
            = ((0xffffffffffffffbfULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_13) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [0xdU] 
                                                 >> 6U))))) 
                  << 6U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [0xdU] >> 7U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_13 
                                                  >> 7U))))) {
        ++(vlSymsp->__Vcoverage[3285]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_13 
            = ((0xffffffffffffff7fULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_13) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [0xdU] 
                                                 >> 7U))))) 
                  << 7U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [0xdU] >> 8U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_13 
                                                  >> 8U))))) {
        ++(vlSymsp->__Vcoverage[3286]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_13 
            = ((0xfffffffffffffeffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_13) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [0xdU] 
                                                 >> 8U))))) 
                  << 8U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [0xdU] >> 9U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_13 
                                                  >> 9U))))) {
        ++(vlSymsp->__Vcoverage[3287]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_13 
            = ((0xfffffffffffffdffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_13) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [0xdU] 
                                                 >> 9U))))) 
                  << 9U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [0xdU] >> 0xaU)) ^ (IData)(
                                                   (vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_13 
                                                    >> 0xaU))))) {
        ++(vlSymsp->__Vcoverage[3288]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_13 
            = ((0xfffffffffffffbffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_13) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [0xdU] 
                                                 >> 0xaU))))) 
                  << 0xaU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [0xdU] >> 0xbU)) ^ (IData)(
                                                   (vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_13 
                                                    >> 0xbU))))) {
        ++(vlSymsp->__Vcoverage[3289]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_13 
            = ((0xfffffffffffff7ffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_13) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [0xdU] 
                                                 >> 0xbU))))) 
                  << 0xbU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [0xdU] >> 0xcU)) ^ (IData)(
                                                   (vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_13 
                                                    >> 0xcU))))) {
        ++(vlSymsp->__Vcoverage[3290]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_13 
            = ((0xffffffffffffefffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_13) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [0xdU] 
                                                 >> 0xcU))))) 
                  << 0xcU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [0xdU] >> 0xdU)) ^ (IData)(
                                                   (vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_13 
                                                    >> 0xdU))))) {
        ++(vlSymsp->__Vcoverage[3291]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_13 
            = ((0xffffffffffffdfffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_13) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [0xdU] 
                                                 >> 0xdU))))) 
                  << 0xdU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [0xdU] >> 0xeU)) ^ (IData)(
                                                   (vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_13 
                                                    >> 0xeU))))) {
        ++(vlSymsp->__Vcoverage[3292]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_13 
            = ((0xffffffffffffbfffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_13) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [0xdU] 
                                                 >> 0xeU))))) 
                  << 0xeU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [0xdU] >> 0xfU)) ^ (IData)(
                                                   (vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_13 
                                                    >> 0xfU))))) {
        ++(vlSymsp->__Vcoverage[3293]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_13 
            = ((0xffffffffffff7fffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_13) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [0xdU] 
                                                 >> 0xfU))))) 
                  << 0xfU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [0xdU] >> 0x10U)) ^ (IData)(
                                                    (vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_13 
                                                     >> 0x10U))))) {
        ++(vlSymsp->__Vcoverage[3294]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_13 
            = ((0xfffffffffffeffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_13) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [0xdU] 
                                                 >> 0x10U))))) 
                  << 0x10U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [0xdU] >> 0x11U)) ^ (IData)(
                                                    (vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_13 
                                                     >> 0x11U))))) {
        ++(vlSymsp->__Vcoverage[3295]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_13 
            = ((0xfffffffffffdffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_13) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [0xdU] 
                                                 >> 0x11U))))) 
                  << 0x11U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [0xdU] >> 0x12U)) ^ (IData)(
                                                    (vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_13 
                                                     >> 0x12U))))) {
        ++(vlSymsp->__Vcoverage[3296]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_13 
            = ((0xfffffffffffbffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_13) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [0xdU] 
                                                 >> 0x12U))))) 
                  << 0x12U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [0xdU] >> 0x13U)) ^ (IData)(
                                                    (vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_13 
                                                     >> 0x13U))))) {
        ++(vlSymsp->__Vcoverage[3297]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_13 
            = ((0xfffffffffff7ffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_13) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [0xdU] 
                                                 >> 0x13U))))) 
                  << 0x13U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [0xdU] >> 0x14U)) ^ (IData)(
                                                    (vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_13 
                                                     >> 0x14U))))) {
        ++(vlSymsp->__Vcoverage[3298]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_13 
            = ((0xffffffffffefffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_13) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [0xdU] 
                                                 >> 0x14U))))) 
                  << 0x14U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [0xdU] >> 0x15U)) ^ (IData)(
                                                    (vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_13 
                                                     >> 0x15U))))) {
        ++(vlSymsp->__Vcoverage[3299]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_13 
            = ((0xffffffffffdfffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_13) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [0xdU] 
                                                 >> 0x15U))))) 
                  << 0x15U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [0xdU] >> 0x16U)) ^ (IData)(
                                                    (vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_13 
                                                     >> 0x16U))))) {
        ++(vlSymsp->__Vcoverage[3300]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_13 
            = ((0xffffffffffbfffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_13) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [0xdU] 
                                                 >> 0x16U))))) 
                  << 0x16U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [0xdU] >> 0x17U)) ^ (IData)(
                                                    (vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_13 
                                                     >> 0x17U))))) {
        ++(vlSymsp->__Vcoverage[3301]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_13 
            = ((0xffffffffff7fffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_13) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [0xdU] 
                                                 >> 0x17U))))) 
                  << 0x17U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [0xdU] >> 0x18U)) ^ (IData)(
                                                    (vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_13 
                                                     >> 0x18U))))) {
        ++(vlSymsp->__Vcoverage[3302]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_13 
            = ((0xfffffffffeffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_13) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [0xdU] 
                                                 >> 0x18U))))) 
                  << 0x18U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [0xdU] >> 0x19U)) ^ (IData)(
                                                    (vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_13 
                                                     >> 0x19U))))) {
        ++(vlSymsp->__Vcoverage[3303]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_13 
            = ((0xfffffffffdffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_13) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [0xdU] 
                                                 >> 0x19U))))) 
                  << 0x19U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [0xdU] >> 0x1aU)) ^ (IData)(
                                                    (vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_13 
                                                     >> 0x1aU))))) {
        ++(vlSymsp->__Vcoverage[3304]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_13 
            = ((0xfffffffffbffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_13) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [0xdU] 
                                                 >> 0x1aU))))) 
                  << 0x1aU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [0xdU] >> 0x1bU)) ^ (IData)(
                                                    (vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_13 
                                                     >> 0x1bU))))) {
        ++(vlSymsp->__Vcoverage[3305]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_13 
            = ((0xfffffffff7ffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_13) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [0xdU] 
                                                 >> 0x1bU))))) 
                  << 0x1bU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [0xdU] >> 0x1cU)) ^ (IData)(
                                                    (vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_13 
                                                     >> 0x1cU))))) {
        ++(vlSymsp->__Vcoverage[3306]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_13 
            = ((0xffffffffefffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_13) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [0xdU] 
                                                 >> 0x1cU))))) 
                  << 0x1cU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [0xdU] >> 0x1dU)) ^ (IData)(
                                                    (vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_13 
                                                     >> 0x1dU))))) {
        ++(vlSymsp->__Vcoverage[3307]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_13 
            = ((0xffffffffdfffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_13) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [0xdU] 
                                                 >> 0x1dU))))) 
                  << 0x1dU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [0xdU] >> 0x1eU)) ^ (IData)(
                                                    (vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_13 
                                                     >> 0x1eU))))) {
        ++(vlSymsp->__Vcoverage[3308]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_13 
            = ((0xffffffffbfffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_13) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [0xdU] 
                                                 >> 0x1eU))))) 
                  << 0x1eU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [0xdU] >> 0x1fU)) ^ (IData)(
                                                    (vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_13 
                                                     >> 0x1fU))))) {
        ++(vlSymsp->__Vcoverage[3309]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_13 
            = ((0xffffffff7fffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_13) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [0xdU] 
                                                 >> 0x1fU))))) 
                  << 0x1fU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [0xdU] >> 0x20U)) ^ (IData)(
                                                    (vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_13 
                                                     >> 0x20U))))) {
        ++(vlSymsp->__Vcoverage[3310]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_13 
            = ((0xfffffffeffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_13) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [0xdU] 
                                                 >> 0x20U))))) 
                  << 0x20U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [0xdU] >> 0x21U)) ^ (IData)(
                                                    (vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_13 
                                                     >> 0x21U))))) {
        ++(vlSymsp->__Vcoverage[3311]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_13 
            = ((0xfffffffdffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_13) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [0xdU] 
                                                 >> 0x21U))))) 
                  << 0x21U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [0xdU] >> 0x22U)) ^ (IData)(
                                                    (vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_13 
                                                     >> 0x22U))))) {
        ++(vlSymsp->__Vcoverage[3312]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_13 
            = ((0xfffffffbffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_13) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [0xdU] 
                                                 >> 0x22U))))) 
                  << 0x22U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [0xdU] >> 0x23U)) ^ (IData)(
                                                    (vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_13 
                                                     >> 0x23U))))) {
        ++(vlSymsp->__Vcoverage[3313]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_13 
            = ((0xfffffff7ffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_13) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [0xdU] 
                                                 >> 0x23U))))) 
                  << 0x23U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [0xdU] >> 0x24U)) ^ (IData)(
                                                    (vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_13 
                                                     >> 0x24U))))) {
        ++(vlSymsp->__Vcoverage[3314]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_13 
            = ((0xffffffefffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_13) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [0xdU] 
                                                 >> 0x24U))))) 
                  << 0x24U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [0xdU] >> 0x25U)) ^ (IData)(
                                                    (vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_13 
                                                     >> 0x25U))))) {
        ++(vlSymsp->__Vcoverage[3315]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_13 
            = ((0xffffffdfffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_13) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [0xdU] 
                                                 >> 0x25U))))) 
                  << 0x25U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [0xdU] >> 0x26U)) ^ (IData)(
                                                    (vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_13 
                                                     >> 0x26U))))) {
        ++(vlSymsp->__Vcoverage[3316]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_13 
            = ((0xffffffbfffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_13) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [0xdU] 
                                                 >> 0x26U))))) 
                  << 0x26U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [0xdU] >> 0x27U)) ^ (IData)(
                                                    (vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_13 
                                                     >> 0x27U))))) {
        ++(vlSymsp->__Vcoverage[3317]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_13 
            = ((0xffffff7fffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_13) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [0xdU] 
                                                 >> 0x27U))))) 
                  << 0x27U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [0xdU] >> 0x28U)) ^ (IData)(
                                                    (vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_13 
                                                     >> 0x28U))))) {
        ++(vlSymsp->__Vcoverage[3318]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_13 
            = ((0xfffffeffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_13) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [0xdU] 
                                                 >> 0x28U))))) 
                  << 0x28U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [0xdU] >> 0x29U)) ^ (IData)(
                                                    (vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_13 
                                                     >> 0x29U))))) {
        ++(vlSymsp->__Vcoverage[3319]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_13 
            = ((0xfffffdffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_13) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [0xdU] 
                                                 >> 0x29U))))) 
                  << 0x29U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [0xdU] >> 0x2aU)) ^ (IData)(
                                                    (vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_13 
                                                     >> 0x2aU))))) {
        ++(vlSymsp->__Vcoverage[3320]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_13 
            = ((0xfffffbffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_13) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [0xdU] 
                                                 >> 0x2aU))))) 
                  << 0x2aU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [0xdU] >> 0x2bU)) ^ (IData)(
                                                    (vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_13 
                                                     >> 0x2bU))))) {
        ++(vlSymsp->__Vcoverage[3321]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_13 
            = ((0xfffff7ffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_13) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [0xdU] 
                                                 >> 0x2bU))))) 
                  << 0x2bU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [0xdU] >> 0x2cU)) ^ (IData)(
                                                    (vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_13 
                                                     >> 0x2cU))))) {
        ++(vlSymsp->__Vcoverage[3322]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_13 
            = ((0xffffefffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_13) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [0xdU] 
                                                 >> 0x2cU))))) 
                  << 0x2cU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [0xdU] >> 0x2dU)) ^ (IData)(
                                                    (vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_13 
                                                     >> 0x2dU))))) {
        ++(vlSymsp->__Vcoverage[3323]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_13 
            = ((0xffffdfffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_13) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [0xdU] 
                                                 >> 0x2dU))))) 
                  << 0x2dU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [0xdU] >> 0x2eU)) ^ (IData)(
                                                    (vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_13 
                                                     >> 0x2eU))))) {
        ++(vlSymsp->__Vcoverage[3324]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_13 
            = ((0xffffbfffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_13) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [0xdU] 
                                                 >> 0x2eU))))) 
                  << 0x2eU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [0xdU] >> 0x2fU)) ^ (IData)(
                                                    (vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_13 
                                                     >> 0x2fU))))) {
        ++(vlSymsp->__Vcoverage[3325]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_13 
            = ((0xffff7fffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_13) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [0xdU] 
                                                 >> 0x2fU))))) 
                  << 0x2fU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [0xdU] >> 0x30U)) ^ (IData)(
                                                    (vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_13 
                                                     >> 0x30U))))) {
        ++(vlSymsp->__Vcoverage[3326]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_13 
            = ((0xfffeffffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_13) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [0xdU] 
                                                 >> 0x30U))))) 
                  << 0x30U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [0xdU] >> 0x31U)) ^ (IData)(
                                                    (vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_13 
                                                     >> 0x31U))))) {
        ++(vlSymsp->__Vcoverage[3327]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_13 
            = ((0xfffdffffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_13) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [0xdU] 
                                                 >> 0x31U))))) 
                  << 0x31U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [0xdU] >> 0x32U)) ^ (IData)(
                                                    (vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_13 
                                                     >> 0x32U))))) {
        ++(vlSymsp->__Vcoverage[3328]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_13 
            = ((0xfffbffffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_13) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [0xdU] 
                                                 >> 0x32U))))) 
                  << 0x32U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [0xdU] >> 0x33U)) ^ (IData)(
                                                    (vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_13 
                                                     >> 0x33U))))) {
        ++(vlSymsp->__Vcoverage[3329]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_13 
            = ((0xfff7ffffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_13) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [0xdU] 
                                                 >> 0x33U))))) 
                  << 0x33U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [0xdU] >> 0x34U)) ^ (IData)(
                                                    (vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_13 
                                                     >> 0x34U))))) {
        ++(vlSymsp->__Vcoverage[3330]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_13 
            = ((0xffefffffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_13) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [0xdU] 
                                                 >> 0x34U))))) 
                  << 0x34U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [0xdU] >> 0x35U)) ^ (IData)(
                                                    (vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_13 
                                                     >> 0x35U))))) {
        ++(vlSymsp->__Vcoverage[3331]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_13 
            = ((0xffdfffffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_13) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [0xdU] 
                                                 >> 0x35U))))) 
                  << 0x35U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [0xdU] >> 0x36U)) ^ (IData)(
                                                    (vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_13 
                                                     >> 0x36U))))) {
        ++(vlSymsp->__Vcoverage[3332]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_13 
            = ((0xffbfffffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_13) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [0xdU] 
                                                 >> 0x36U))))) 
                  << 0x36U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [0xdU] >> 0x37U)) ^ (IData)(
                                                    (vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_13 
                                                     >> 0x37U))))) {
        ++(vlSymsp->__Vcoverage[3333]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_13 
            = ((0xff7fffffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_13) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [0xdU] 
                                                 >> 0x37U))))) 
                  << 0x37U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [0xdU] >> 0x38U)) ^ (IData)(
                                                    (vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_13 
                                                     >> 0x38U))))) {
        ++(vlSymsp->__Vcoverage[3334]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_13 
            = ((0xfeffffffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_13) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [0xdU] 
                                                 >> 0x38U))))) 
                  << 0x38U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [0xdU] >> 0x39U)) ^ (IData)(
                                                    (vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_13 
                                                     >> 0x39U))))) {
        ++(vlSymsp->__Vcoverage[3335]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_13 
            = ((0xfdffffffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_13) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [0xdU] 
                                                 >> 0x39U))))) 
                  << 0x39U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [0xdU] >> 0x3aU)) ^ (IData)(
                                                    (vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_13 
                                                     >> 0x3aU))))) {
        ++(vlSymsp->__Vcoverage[3336]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_13 
            = ((0xfbffffffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_13) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [0xdU] 
                                                 >> 0x3aU))))) 
                  << 0x3aU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [0xdU] >> 0x3bU)) ^ (IData)(
                                                    (vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_13 
                                                     >> 0x3bU))))) {
        ++(vlSymsp->__Vcoverage[3337]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_13 
            = ((0xf7ffffffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_13) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [0xdU] 
                                                 >> 0x3bU))))) 
                  << 0x3bU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [0xdU] >> 0x3cU)) ^ (IData)(
                                                    (vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_13 
                                                     >> 0x3cU))))) {
        ++(vlSymsp->__Vcoverage[3338]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_13 
            = ((0xefffffffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_13) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [0xdU] 
                                                 >> 0x3cU))))) 
                  << 0x3cU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [0xdU] >> 0x3dU)) ^ (IData)(
                                                    (vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_13 
                                                     >> 0x3dU))))) {
        ++(vlSymsp->__Vcoverage[3339]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_13 
            = ((0xdfffffffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_13) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [0xdU] 
                                                 >> 0x3dU))))) 
                  << 0x3dU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [0xdU] >> 0x3eU)) ^ (IData)(
                                                    (vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_13 
                                                     >> 0x3eU))))) {
        ++(vlSymsp->__Vcoverage[3340]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_13 
            = ((0xbfffffffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_13) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [0xdU] 
                                                 >> 0x3eU))))) 
                  << 0x3eU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [0xdU] >> 0x3fU)) ^ (IData)(
                                                    (vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_13 
                                                     >> 0x3fU))))) {
        ++(vlSymsp->__Vcoverage[3341]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_13 
            = ((0x7fffffffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_13) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [0xdU] 
                                                 >> 0x3fU))))) 
                  << 0x3fU));
    }
    if ((1U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                       [0xeU]) ^ (IData)(vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_14)))) {
        ++(vlSymsp->__Vcoverage[3342]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_14 
            = ((0xfffffffffffffffeULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_14) 
               | (IData)((IData)((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                               [0xeU])))));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [0xeU] >> 1U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_14 
                                                  >> 1U))))) {
        ++(vlSymsp->__Vcoverage[3343]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_14 
            = ((0xfffffffffffffffdULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_14) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [0xeU] 
                                                 >> 1U))))) 
                  << 1U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [0xeU] >> 2U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_14 
                                                  >> 2U))))) {
        ++(vlSymsp->__Vcoverage[3344]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_14 
            = ((0xfffffffffffffffbULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_14) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [0xeU] 
                                                 >> 2U))))) 
                  << 2U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [0xeU] >> 3U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_14 
                                                  >> 3U))))) {
        ++(vlSymsp->__Vcoverage[3345]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_14 
            = ((0xfffffffffffffff7ULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_14) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [0xeU] 
                                                 >> 3U))))) 
                  << 3U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [0xeU] >> 4U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_14 
                                                  >> 4U))))) {
        ++(vlSymsp->__Vcoverage[3346]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_14 
            = ((0xffffffffffffffefULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_14) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [0xeU] 
                                                 >> 4U))))) 
                  << 4U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [0xeU] >> 5U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_14 
                                                  >> 5U))))) {
        ++(vlSymsp->__Vcoverage[3347]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_14 
            = ((0xffffffffffffffdfULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_14) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [0xeU] 
                                                 >> 5U))))) 
                  << 5U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [0xeU] >> 6U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_14 
                                                  >> 6U))))) {
        ++(vlSymsp->__Vcoverage[3348]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_14 
            = ((0xffffffffffffffbfULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_14) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [0xeU] 
                                                 >> 6U))))) 
                  << 6U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [0xeU] >> 7U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_14 
                                                  >> 7U))))) {
        ++(vlSymsp->__Vcoverage[3349]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_14 
            = ((0xffffffffffffff7fULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_14) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [0xeU] 
                                                 >> 7U))))) 
                  << 7U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [0xeU] >> 8U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_14 
                                                  >> 8U))))) {
        ++(vlSymsp->__Vcoverage[3350]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_14 
            = ((0xfffffffffffffeffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_14) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [0xeU] 
                                                 >> 8U))))) 
                  << 8U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [0xeU] >> 9U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_14 
                                                  >> 9U))))) {
        ++(vlSymsp->__Vcoverage[3351]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_14 
            = ((0xfffffffffffffdffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_14) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [0xeU] 
                                                 >> 9U))))) 
                  << 9U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [0xeU] >> 0xaU)) ^ (IData)(
                                                   (vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_14 
                                                    >> 0xaU))))) {
        ++(vlSymsp->__Vcoverage[3352]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_14 
            = ((0xfffffffffffffbffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_14) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [0xeU] 
                                                 >> 0xaU))))) 
                  << 0xaU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [0xeU] >> 0xbU)) ^ (IData)(
                                                   (vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_14 
                                                    >> 0xbU))))) {
        ++(vlSymsp->__Vcoverage[3353]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_14 
            = ((0xfffffffffffff7ffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_14) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [0xeU] 
                                                 >> 0xbU))))) 
                  << 0xbU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [0xeU] >> 0xcU)) ^ (IData)(
                                                   (vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_14 
                                                    >> 0xcU))))) {
        ++(vlSymsp->__Vcoverage[3354]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_14 
            = ((0xffffffffffffefffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_14) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [0xeU] 
                                                 >> 0xcU))))) 
                  << 0xcU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [0xeU] >> 0xdU)) ^ (IData)(
                                                   (vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_14 
                                                    >> 0xdU))))) {
        ++(vlSymsp->__Vcoverage[3355]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_14 
            = ((0xffffffffffffdfffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_14) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [0xeU] 
                                                 >> 0xdU))))) 
                  << 0xdU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [0xeU] >> 0xeU)) ^ (IData)(
                                                   (vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_14 
                                                    >> 0xeU))))) {
        ++(vlSymsp->__Vcoverage[3356]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_14 
            = ((0xffffffffffffbfffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_14) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [0xeU] 
                                                 >> 0xeU))))) 
                  << 0xeU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [0xeU] >> 0xfU)) ^ (IData)(
                                                   (vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_14 
                                                    >> 0xfU))))) {
        ++(vlSymsp->__Vcoverage[3357]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_14 
            = ((0xffffffffffff7fffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_14) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [0xeU] 
                                                 >> 0xfU))))) 
                  << 0xfU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [0xeU] >> 0x10U)) ^ (IData)(
                                                    (vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_14 
                                                     >> 0x10U))))) {
        ++(vlSymsp->__Vcoverage[3358]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_14 
            = ((0xfffffffffffeffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_14) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [0xeU] 
                                                 >> 0x10U))))) 
                  << 0x10U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [0xeU] >> 0x11U)) ^ (IData)(
                                                    (vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_14 
                                                     >> 0x11U))))) {
        ++(vlSymsp->__Vcoverage[3359]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_14 
            = ((0xfffffffffffdffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_14) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [0xeU] 
                                                 >> 0x11U))))) 
                  << 0x11U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [0xeU] >> 0x12U)) ^ (IData)(
                                                    (vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_14 
                                                     >> 0x12U))))) {
        ++(vlSymsp->__Vcoverage[3360]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_14 
            = ((0xfffffffffffbffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_14) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [0xeU] 
                                                 >> 0x12U))))) 
                  << 0x12U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [0xeU] >> 0x13U)) ^ (IData)(
                                                    (vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_14 
                                                     >> 0x13U))))) {
        ++(vlSymsp->__Vcoverage[3361]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_14 
            = ((0xfffffffffff7ffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_14) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [0xeU] 
                                                 >> 0x13U))))) 
                  << 0x13U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [0xeU] >> 0x14U)) ^ (IData)(
                                                    (vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_14 
                                                     >> 0x14U))))) {
        ++(vlSymsp->__Vcoverage[3362]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_14 
            = ((0xffffffffffefffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_14) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [0xeU] 
                                                 >> 0x14U))))) 
                  << 0x14U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [0xeU] >> 0x15U)) ^ (IData)(
                                                    (vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_14 
                                                     >> 0x15U))))) {
        ++(vlSymsp->__Vcoverage[3363]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_14 
            = ((0xffffffffffdfffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_14) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [0xeU] 
                                                 >> 0x15U))))) 
                  << 0x15U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [0xeU] >> 0x16U)) ^ (IData)(
                                                    (vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_14 
                                                     >> 0x16U))))) {
        ++(vlSymsp->__Vcoverage[3364]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_14 
            = ((0xffffffffffbfffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_14) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [0xeU] 
                                                 >> 0x16U))))) 
                  << 0x16U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [0xeU] >> 0x17U)) ^ (IData)(
                                                    (vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_14 
                                                     >> 0x17U))))) {
        ++(vlSymsp->__Vcoverage[3365]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_14 
            = ((0xffffffffff7fffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_14) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [0xeU] 
                                                 >> 0x17U))))) 
                  << 0x17U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [0xeU] >> 0x18U)) ^ (IData)(
                                                    (vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_14 
                                                     >> 0x18U))))) {
        ++(vlSymsp->__Vcoverage[3366]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_14 
            = ((0xfffffffffeffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_14) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [0xeU] 
                                                 >> 0x18U))))) 
                  << 0x18U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [0xeU] >> 0x19U)) ^ (IData)(
                                                    (vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_14 
                                                     >> 0x19U))))) {
        ++(vlSymsp->__Vcoverage[3367]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_14 
            = ((0xfffffffffdffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_14) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [0xeU] 
                                                 >> 0x19U))))) 
                  << 0x19U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [0xeU] >> 0x1aU)) ^ (IData)(
                                                    (vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_14 
                                                     >> 0x1aU))))) {
        ++(vlSymsp->__Vcoverage[3368]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_14 
            = ((0xfffffffffbffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_14) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [0xeU] 
                                                 >> 0x1aU))))) 
                  << 0x1aU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [0xeU] >> 0x1bU)) ^ (IData)(
                                                    (vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_14 
                                                     >> 0x1bU))))) {
        ++(vlSymsp->__Vcoverage[3369]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_14 
            = ((0xfffffffff7ffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_14) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [0xeU] 
                                                 >> 0x1bU))))) 
                  << 0x1bU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [0xeU] >> 0x1cU)) ^ (IData)(
                                                    (vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_14 
                                                     >> 0x1cU))))) {
        ++(vlSymsp->__Vcoverage[3370]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_14 
            = ((0xffffffffefffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_14) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [0xeU] 
                                                 >> 0x1cU))))) 
                  << 0x1cU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [0xeU] >> 0x1dU)) ^ (IData)(
                                                    (vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_14 
                                                     >> 0x1dU))))) {
        ++(vlSymsp->__Vcoverage[3371]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_14 
            = ((0xffffffffdfffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_14) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [0xeU] 
                                                 >> 0x1dU))))) 
                  << 0x1dU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [0xeU] >> 0x1eU)) ^ (IData)(
                                                    (vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_14 
                                                     >> 0x1eU))))) {
        ++(vlSymsp->__Vcoverage[3372]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_14 
            = ((0xffffffffbfffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_14) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [0xeU] 
                                                 >> 0x1eU))))) 
                  << 0x1eU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [0xeU] >> 0x1fU)) ^ (IData)(
                                                    (vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_14 
                                                     >> 0x1fU))))) {
        ++(vlSymsp->__Vcoverage[3373]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_14 
            = ((0xffffffff7fffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_14) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [0xeU] 
                                                 >> 0x1fU))))) 
                  << 0x1fU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [0xeU] >> 0x20U)) ^ (IData)(
                                                    (vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_14 
                                                     >> 0x20U))))) {
        ++(vlSymsp->__Vcoverage[3374]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_14 
            = ((0xfffffffeffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_14) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [0xeU] 
                                                 >> 0x20U))))) 
                  << 0x20U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [0xeU] >> 0x21U)) ^ (IData)(
                                                    (vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_14 
                                                     >> 0x21U))))) {
        ++(vlSymsp->__Vcoverage[3375]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_14 
            = ((0xfffffffdffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_14) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [0xeU] 
                                                 >> 0x21U))))) 
                  << 0x21U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [0xeU] >> 0x22U)) ^ (IData)(
                                                    (vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_14 
                                                     >> 0x22U))))) {
        ++(vlSymsp->__Vcoverage[3376]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_14 
            = ((0xfffffffbffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_14) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [0xeU] 
                                                 >> 0x22U))))) 
                  << 0x22U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [0xeU] >> 0x23U)) ^ (IData)(
                                                    (vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_14 
                                                     >> 0x23U))))) {
        ++(vlSymsp->__Vcoverage[3377]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_14 
            = ((0xfffffff7ffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_14) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [0xeU] 
                                                 >> 0x23U))))) 
                  << 0x23U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [0xeU] >> 0x24U)) ^ (IData)(
                                                    (vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_14 
                                                     >> 0x24U))))) {
        ++(vlSymsp->__Vcoverage[3378]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_14 
            = ((0xffffffefffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_14) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [0xeU] 
                                                 >> 0x24U))))) 
                  << 0x24U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [0xeU] >> 0x25U)) ^ (IData)(
                                                    (vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_14 
                                                     >> 0x25U))))) {
        ++(vlSymsp->__Vcoverage[3379]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_14 
            = ((0xffffffdfffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_14) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [0xeU] 
                                                 >> 0x25U))))) 
                  << 0x25U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [0xeU] >> 0x26U)) ^ (IData)(
                                                    (vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_14 
                                                     >> 0x26U))))) {
        ++(vlSymsp->__Vcoverage[3380]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_14 
            = ((0xffffffbfffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_14) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [0xeU] 
                                                 >> 0x26U))))) 
                  << 0x26U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [0xeU] >> 0x27U)) ^ (IData)(
                                                    (vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_14 
                                                     >> 0x27U))))) {
        ++(vlSymsp->__Vcoverage[3381]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_14 
            = ((0xffffff7fffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_14) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [0xeU] 
                                                 >> 0x27U))))) 
                  << 0x27U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [0xeU] >> 0x28U)) ^ (IData)(
                                                    (vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_14 
                                                     >> 0x28U))))) {
        ++(vlSymsp->__Vcoverage[3382]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_14 
            = ((0xfffffeffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_14) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [0xeU] 
                                                 >> 0x28U))))) 
                  << 0x28U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [0xeU] >> 0x29U)) ^ (IData)(
                                                    (vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_14 
                                                     >> 0x29U))))) {
        ++(vlSymsp->__Vcoverage[3383]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_14 
            = ((0xfffffdffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_14) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [0xeU] 
                                                 >> 0x29U))))) 
                  << 0x29U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [0xeU] >> 0x2aU)) ^ (IData)(
                                                    (vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_14 
                                                     >> 0x2aU))))) {
        ++(vlSymsp->__Vcoverage[3384]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_14 
            = ((0xfffffbffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_14) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [0xeU] 
                                                 >> 0x2aU))))) 
                  << 0x2aU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [0xeU] >> 0x2bU)) ^ (IData)(
                                                    (vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_14 
                                                     >> 0x2bU))))) {
        ++(vlSymsp->__Vcoverage[3385]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_14 
            = ((0xfffff7ffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_14) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [0xeU] 
                                                 >> 0x2bU))))) 
                  << 0x2bU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [0xeU] >> 0x2cU)) ^ (IData)(
                                                    (vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_14 
                                                     >> 0x2cU))))) {
        ++(vlSymsp->__Vcoverage[3386]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_14 
            = ((0xffffefffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_14) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [0xeU] 
                                                 >> 0x2cU))))) 
                  << 0x2cU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [0xeU] >> 0x2dU)) ^ (IData)(
                                                    (vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_14 
                                                     >> 0x2dU))))) {
        ++(vlSymsp->__Vcoverage[3387]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_14 
            = ((0xffffdfffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_14) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [0xeU] 
                                                 >> 0x2dU))))) 
                  << 0x2dU));
    }
}
