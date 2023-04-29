// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vriscv_soc__Syms.h"


void Vriscv_soc___024root__traceChgSub0(Vriscv_soc___024root* vlSelf, VerilatedVcd* tracep);

void Vriscv_soc___024root__traceChgTop0(void* voidSelf, VerilatedVcd* tracep) {
    Vriscv_soc___024root* const __restrict vlSelf = static_cast<Vriscv_soc___024root*>(voidSelf);
    Vriscv_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    {
        Vriscv_soc___024root__traceChgSub0((&vlSymsp->TOP), tracep);
    }
}

void Vriscv_soc___024root__traceChgSub0(Vriscv_soc___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vriscv_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VlWide<4>/*127:0*/ __Vtemp3369;
    VlWide<4>/*127:0*/ __Vtemp3370;
    VlWide<4>/*127:0*/ __Vtemp3371;
    VlWide<4>/*127:0*/ __Vtemp3372;
    VlWide<4>/*127:0*/ __Vtemp3373;
    VlWide<4>/*127:0*/ __Vtemp3374;
    VlWide<4>/*127:0*/ __Vtemp3375;
    VlWide<4>/*127:0*/ __Vtemp3376;
    VlWide<4>/*127:0*/ __Vtemp3377;
    VlWide<4>/*127:0*/ __Vtemp3379;
    VlWide<4>/*127:0*/ __Vtemp3380;
    VlWide<4>/*127:0*/ __Vtemp3382;
    VlWide<4>/*127:0*/ __Vtemp3383;
    VlWide<4>/*127:0*/ __Vtemp3385;
    VlWide<4>/*127:0*/ __Vtemp3386;
    VlWide<4>/*127:0*/ __Vtemp3387;
    VlWide<3>/*95:0*/ __Vtemp3388;
    VlWide<3>/*95:0*/ __Vtemp3390;
    VlWide<3>/*95:0*/ __Vtemp3391;
    VlWide<3>/*95:0*/ __Vtemp3392;
    VlWide<3>/*95:0*/ __Vtemp3393;
    VlWide<3>/*95:0*/ __Vtemp3396;
    VlWide<3>/*95:0*/ __Vtemp3397;
    VlWide<3>/*95:0*/ __Vtemp3398;
    VlWide<5>/*159:0*/ __Vtemp3410;
    VlWide<5>/*159:0*/ __Vtemp3414;
    VlWide<3>/*95:0*/ __Vtemp3416;
    VlWide<5>/*159:0*/ __Vtemp3418;
    VlWide<5>/*159:0*/ __Vtemp3419;
    VlWide<5>/*159:0*/ __Vtemp3420;
    VlWide<5>/*159:0*/ __Vtemp3421;
    VlWide<5>/*159:0*/ __Vtemp3422;
    VlWide<5>/*159:0*/ __Vtemp3424;
    VlWide<5>/*159:0*/ __Vtemp3425;
    VlWide<5>/*159:0*/ __Vtemp3426;
    VlWide<5>/*159:0*/ __Vtemp3427;
    VlWide<5>/*159:0*/ __Vtemp3428;
    VlWide<5>/*159:0*/ __Vtemp3430;
    VlWide<5>/*159:0*/ __Vtemp3431;
    VlWide<5>/*159:0*/ __Vtemp3432;
    VlWide<5>/*159:0*/ __Vtemp3440;
    VlWide<5>/*159:0*/ __Vtemp3441;
    VlWide<5>/*159:0*/ __Vtemp3449;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode + 1);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
            tracep->chgBit(oldp+0,(vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_aw_ready));
            tracep->chgBit(oldp+1,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_AXI_Bus_aw_valid));
            tracep->chgQData(oldp+2,(((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__w_chosen))
                                       ? vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_w_waddr
                                       : ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__w_chosen))
                                           ? vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu_io_bus_bits_addr
                                           : 0ULL))),64);
            tracep->chgBit(oldp+4,(vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_w_ready));
            tracep->chgBit(oldp+5,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_AXI_Bus_w_valid));
            tracep->chgQData(oldp+6,(((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__w_chosen))
                                       ? vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_w_wdata
                                       : ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__w_chosen))
                                           ? (((QData)((IData)(
                                                               vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT___io_bus_bits_wdata_T[1U])) 
                                               << 0x20U) 
                                              | (QData)((IData)(
                                                                vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT___io_bus_bits_wdata_T[0U])))
                                           : 0ULL))),64);
            tracep->chgCData(oldp+8,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_AXI_Bus_w_bits_wstrb),8);
            tracep->chgBit(oldp+9,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_AXI_Bus_w_bits_wlast));
            tracep->chgBit(oldp+10,(vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_b_valid));
            tracep->chgBit(oldp+11,(vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_ar_ready));
            tracep->chgBit(oldp+12,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_AXI_Bus_ar_valid));
            tracep->chgQData(oldp+13,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_AXI_Bus_ar_bits_araddr),64);
            tracep->chgCData(oldp+15,(((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__r_chosen)) 
                                       | (1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__r_chosen)))),8);
            tracep->chgBit(oldp+16,(vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_r_valid));
            tracep->chgQData(oldp+17,(vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata),64);
            tracep->chgBit(oldp+19,(vlSelf->riscv_soc__DOT__axi_ram_io_ram_bus_r_bits_rlast));
            tracep->chgBit(oldp+20,(vlSelf->riscv_soc__DOT__core__DOT__fetch_io_out_flush));
            tracep->chgBit(oldp+21,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1_io_cpu_addr_ready));
            tracep->chgBit(oldp+22,(((0ULL != (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0 
                                               >> 0x1fU)) 
                                     & (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_bus_valid))));
            tracep->chgQData(oldp+23,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0),64);
            tracep->chgBit(oldp+25,((3U > (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__reg_ibuf_size))));
            tracep->chgBit(oldp+26,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_valid));
            tracep->chgQData(oldp+27,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_rdata),64);
            tracep->chgQData(oldp+29,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr),64);
            tracep->chgBit(oldp+31,(vlSelf->riscv_soc__DOT__core__DOT__execute_io_fence_i));
            tracep->chgBit(oldp+32,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_r_valid));
            tracep->chgQData(oldp+33,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_r_raddr),64);
            tracep->chgBit(oldp+35,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_ICache_bus_r_bits_rlast));
            tracep->chgBit(oldp+36,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_ICache_bus_r_ready));
            tracep->chgBit(oldp+37,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1_io_DCache_valid));
            tracep->chgQData(oldp+38,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu_io_bus_bits_addr),64);
            tracep->chgQData(oldp+40,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_rdata),64);
            tracep->chgQData(oldp+42,((((QData)((IData)(
                                                        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT___io_bus_bits_wdata_T[1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT___io_bus_bits_wdata_T[0U])))),64);
            tracep->chgCData(oldp+44,((0xffU & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT___io_bus_bits_wstrb_T))),8);
            tracep->chgBit(oldp+45,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu_io_bus_bits_is_w));
            tracep->chgBit(oldp+46,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_ready));
            tracep->chgBit(oldp+47,(((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__w_chosen)) 
                                     & (IData)(vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_w_ready))));
            tracep->chgBit(oldp+48,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_w_valid));
            tracep->chgQData(oldp+49,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_w_waddr),64);
            tracep->chgQData(oldp+51,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_w_wdata),64);
            tracep->chgBit(oldp+53,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_w_wlast));
            tracep->chgBit(oldp+54,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_b_ready));
            tracep->chgBit(oldp+55,(((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__w_chosen)) 
                                     & (IData)(vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_b_valid))));
            tracep->chgBit(oldp+56,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_r_valid));
            tracep->chgQData(oldp+57,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_r_raddr),64);
            tracep->chgBit(oldp+59,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_DCache_bus_r_bits_rlast));
            tracep->chgBit(oldp+60,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_DCache_bus_r_ready));
            tracep->chgBit(oldp+61,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1_io_bus1_valid));
            tracep->chgBit(oldp+62,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_bus1_ready));
            tracep->chgBit(oldp+63,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1_io_bus2_valid));
            tracep->chgBit(oldp+64,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_bus2_ready));
            tracep->chgBit(oldp+65,(((0ULL != (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0 
                                               >> 0x1fU))
                                      ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1_io_cpu_addr_ready)
                                      : (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_bus1_ready))));
            tracep->chgBit(oldp+66,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_bus_valid));
            tracep->chgBit(oldp+67,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1_io_fetch_cpu_data_valid));
            tracep->chgQData(oldp+68,(((0ULL != (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0 
                                                 >> 0x1fU))
                                        ? vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_rdata
                                        : vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata)),64);
            tracep->chgQData(oldp+70,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1_io_fetch_cpu_data_bits_pc),64);
            tracep->chgBit(oldp+72,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu_io_bus_valid));
            tracep->chgQData(oldp+73,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1_io_wb_bits_rdata),64);
            tracep->chgBit(oldp+75,(((0ULL != (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu_io_bus_bits_addr 
                                               >> 0x1fU))
                                      ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_ready)
                                      : ((IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1__DOT__not_clint)
                                          ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_bus2_ready)
                                          : (IData)(vlSelf->riscv_soc__DOT__core__DOT__clint_de__DOT__reg_ready)))));
            tracep->chgBit(oldp+76,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1_io_clint_bus_valid));
            tracep->chgQData(oldp+77,(vlSelf->riscv_soc__DOT__core__DOT__clint_de__DOT__red_rdata),64);
            tracep->chgBit(oldp+79,(vlSelf->riscv_soc__DOT__core__DOT__clint_de__DOT__reg_ready));
            tracep->chgBit(oldp+80,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_valid));
            tracep->chgBit(oldp+81,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_mispredict));
            tracep->chgQData(oldp+82,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc),64);
            tracep->chgBit(oldp+84,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_taken));
            tracep->chgQData(oldp+85,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_next_pc),64);
            tracep->chgBit(oldp+87,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu_io_get_pre_info_valid));
            tracep->chgQData(oldp+88,(((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu_io_get_pre_info_valid)
                                        ? ((3U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__pre_info_tail))
                                            ? vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__pre_info_fifo_3
                                            : ((2U 
                                                == (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__pre_info_tail))
                                                ? vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__pre_info_fifo_2
                                                : (
                                                   (1U 
                                                    == (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__pre_info_tail))
                                                    ? vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__pre_info_fifo_1
                                                    : vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__pre_info_fifo_0)))
                                        : 0ULL)),64);
            tracep->chgQData(oldp+90,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_next_pc),64);
            tracep->chgBit(oldp+92,(vlSelf->riscv_soc__DOT__core__DOT__execute_io_flush));
            tracep->chgBit(oldp+93,(vlSelf->riscv_soc__DOT__core__DOT__execute_io_op_datas_ready));
            tracep->chgBit(oldp+94,(((3U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__reg_tail))
                                      ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_valid_3)
                                      : (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT___GEN_2))));
            tracep->chgIData(oldp+95,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst),32);
            tracep->chgQData(oldp+96,(((3U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__reg_tail))
                                        ? vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_pc_3
                                        : ((2U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__reg_tail))
                                            ? vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_pc_2
                                            : ((1U 
                                                == (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__reg_tail))
                                                ? vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_pc_1
                                                : vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_pc_0)))),64);
            tracep->chgBit(oldp+98,(((3U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__reg_tail))
                                      ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_is_pre_3)
                                      : ((2U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__reg_tail))
                                          ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_is_pre_2)
                                          : ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__reg_tail))
                                              ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_is_pre_1)
                                              : (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_is_pre_0))))));
            tracep->chgBit(oldp+99,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_valid));
            tracep->chgCData(oldp+100,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_opType),3);
            tracep->chgCData(oldp+101,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType),7);
            tracep->chgCData(oldp+102,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs1_addr),5);
            tracep->chgQData(oldp+103,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs1_data),64);
            tracep->chgCData(oldp+105,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs2_addr),5);
            tracep->chgQData(oldp+106,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs2_data),64);
            tracep->chgIData(oldp+108,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_imm),32);
            tracep->chgQData(oldp+109,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_pc),64);
            tracep->chgCData(oldp+111,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_dest_addr),5);
            tracep->chgBit(oldp+112,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_dest_is_reg));
            tracep->chgBit(oldp+113,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_is_pre));
            tracep->chgSData(oldp+114,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_csr_addr),12);
            tracep->chgQData(oldp+115,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_csr_data),64);
            tracep->chgBit(oldp+117,((vlSelf->riscv_soc__DOT__core__DOT__clint_de__DOT__reg_mtimecmp 
                                      <= vlSelf->riscv_soc__DOT__core__DOT__clint_de__DOT__reg_mtime)));
            tracep->chgBit(oldp+118,(vlSelf->riscv_soc__DOT__core__DOT__clint_de__DOT__reg_msip));
            tracep->chgQData(oldp+119,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg_io_r_csr_mstatus),64);
            tracep->chgQData(oldp+121,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg_io_r_csr_mie),64);
            tracep->chgQData(oldp+123,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg_io_r_csr_mepc),64);
            tracep->chgQData(oldp+125,((((0x305U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_csr_addr)) 
                                         & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute_io_csr_valid))
                                         ? vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_csr_data
                                         : vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__reg_mtvec)),64);
            tracep->chgBit(oldp+127,(vlSelf->riscv_soc__DOT__core__DOT__execute_io_wb_valid));
            tracep->chgCData(oldp+128,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_dest_addr),5);
            tracep->chgQData(oldp+129,(vlSelf->riscv_soc__DOT__core__DOT__execute_io_wb_dest_data),64);
            tracep->chgBit(oldp+131,(vlSelf->riscv_soc__DOT__core__DOT__execute_io_csr_valid));
            tracep->chgSData(oldp+132,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_csr_addr),12);
            tracep->chgQData(oldp+133,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_csr_data),64);
            tracep->chgBit(oldp+135,(vlSelf->riscv_soc__DOT__core__DOT__execute_io_csr_except_is_except));
            tracep->chgBit(oldp+136,(vlSelf->riscv_soc__DOT__core__DOT__execute_io_csr_except_is_time_irq));
            tracep->chgBit(oldp+137,(((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_is_soft_irq) 
                                      & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__ready))));
            tracep->chgCData(oldp+138,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_exception),6);
            tracep->chgQData(oldp+139,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_except_next_pc),64);
            tracep->chgQData(oldp+141,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_except_pc),64);
            tracep->chgBit(oldp+143,(((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_commit) 
                                      & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__ready))));
            tracep->chgCData(oldp+144,((0x1fU & (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst 
                                                 >> 0xfU))),5);
            tracep->chgQData(oldp+145,(((((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_dest_addr) 
                                          == (0x1fU 
                                              & (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst 
                                                 >> 0xfU))) 
                                         & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute_io_wb_valid))
                                         ? vlSelf->riscv_soc__DOT__core__DOT__execute_io_wb_dest_data
                                         : ((0x1fU 
                                             == (0x1fU 
                                                 & (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst 
                                                    >> 0xfU)))
                                             ? vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_31
                                             : ((0x1eU 
                                                 == 
                                                 (0x1fU 
                                                  & (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst 
                                                     >> 0xfU)))
                                                 ? vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_30
                                                 : 
                                                ((0x1dU 
                                                  == 
                                                  (0x1fU 
                                                   & (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst 
                                                      >> 0xfU)))
                                                  ? vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_29
                                                  : 
                                                 ((0x1cU 
                                                   == 
                                                   (0x1fU 
                                                    & (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst 
                                                       >> 0xfU)))
                                                   ? vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_28
                                                   : 
                                                  ((0x1bU 
                                                    == 
                                                    (0x1fU 
                                                     & (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst 
                                                        >> 0xfU)))
                                                    ? vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_27
                                                    : vlSelf->riscv_soc__DOT__core__DOT__commit__DOT___GEN_26))))))),64);
            tracep->chgCData(oldp+147,((0x1fU & (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst 
                                                 >> 0x14U))),5);
            tracep->chgQData(oldp+148,(((((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_dest_addr) 
                                          == (0x1fU 
                                              & (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst 
                                                 >> 0x14U))) 
                                         & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute_io_wb_valid))
                                         ? vlSelf->riscv_soc__DOT__core__DOT__execute_io_wb_dest_data
                                         : ((0x1fU 
                                             == (0x1fU 
                                                 & (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst 
                                                    >> 0x14U)))
                                             ? vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_31
                                             : ((0x1eU 
                                                 == 
                                                 (0x1fU 
                                                  & (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst 
                                                     >> 0x14U)))
                                                 ? vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_30
                                                 : 
                                                ((0x1dU 
                                                  == 
                                                  (0x1fU 
                                                   & (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst 
                                                      >> 0x14U)))
                                                  ? vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_29
                                                  : 
                                                 ((0x1cU 
                                                   == 
                                                   (0x1fU 
                                                    & (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst 
                                                       >> 0x14U)))
                                                   ? vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_28
                                                   : 
                                                  ((0x1bU 
                                                    == 
                                                    (0x1fU 
                                                     & (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst 
                                                        >> 0x14U)))
                                                    ? vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_27
                                                    : vlSelf->riscv_soc__DOT__core__DOT__commit__DOT___GEN_58))))))),64);
            tracep->chgSData(oldp+150,((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst 
                                        >> 0x14U)),12);
            tracep->chgQData(oldp+151,(((((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst 
                                           >> 0x14U) 
                                          == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_csr_addr)) 
                                         & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute_io_csr_valid))
                                         ? vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_csr_data
                                         : ((0xb02U 
                                             == (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst 
                                                 >> 0x14U))
                                             ? vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__reg_minstret
                                             : vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT___csr_rdata_T_33))),64);
            tracep->chgBit(oldp+153,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage0__DOT__reg_valid));
            tracep->chgQData(oldp+154,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage0__DOT__reg_addr),64);
            tracep->chgCData(oldp+156,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1_io_tag_valid_index),6);
            tracep->chgBit(oldp+157,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1_io_tag_valid_tag_valid_0));
            tracep->chgBit(oldp+158,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1_io_tag_valid_tag_valid_1));
            tracep->chgBit(oldp+159,(((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage0__DOT__reg_valid) 
                                      & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch_io_out_flush)))));
            tracep->chgWData(oldp+160,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1_io_sram_sram_data_0),128);
            tracep->chgWData(oldp+164,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1_io_sram_sram_data_1),128);
            VL_EXTEND_WQ(128,54, __Vtemp3369, (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                               >> 0xaU));
            VL_EXTEND_WQ(128,54, __Vtemp3370, (0x3fffffffffffffULL 
                                               & (((QData)((IData)(
                                                                   vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_1__DOT__Q[1U])) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(
                                                                    vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_1__DOT__Q[0U])))));
            if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__w_r_pass0_val) {
                __Vtemp3371[0U] = __Vtemp3369[0U];
                __Vtemp3371[1U] = __Vtemp3369[1U];
                __Vtemp3371[2U] = __Vtemp3369[2U];
                __Vtemp3371[3U] = __Vtemp3369[3U];
            } else {
                __Vtemp3371[0U] = __Vtemp3370[0U];
                __Vtemp3371[1U] = __Vtemp3370[1U];
                __Vtemp3371[2U] = __Vtemp3370[2U];
                __Vtemp3371[3U] = __Vtemp3370[3U];
            }
            tracep->chgWData(oldp+168,(__Vtemp3371),128);
            VL_EXTEND_WQ(128,54, __Vtemp3372, (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                               >> 0xaU));
            VL_EXTEND_WQ(128,54, __Vtemp3373, (0x3fffffffffffffULL 
                                               & (((QData)((IData)(
                                                                   vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_3__DOT__Q[1U])) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(
                                                                    vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_3__DOT__Q[0U])))));
            if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__w_r_pass1_val) {
                __Vtemp3374[0U] = __Vtemp3372[0U];
                __Vtemp3374[1U] = __Vtemp3372[1U];
                __Vtemp3374[2U] = __Vtemp3372[2U];
                __Vtemp3374[3U] = __Vtemp3372[3U];
            } else {
                __Vtemp3374[0U] = __Vtemp3373[0U];
                __Vtemp3374[1U] = __Vtemp3373[1U];
                __Vtemp3374[2U] = __Vtemp3373[2U];
                __Vtemp3374[3U] = __Vtemp3373[3U];
            }
            tracep->chgWData(oldp+172,(__Vtemp3374),128);
            tracep->chgBit(oldp+176,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_sram_r_ready));
            tracep->chgBit(oldp+177,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2_io_cache_stage1_ready));
            tracep->chgBit(oldp+178,(((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1__DOT__reg_valid) 
                                      & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_sram_r_ready))));
            tracep->chgQData(oldp+179,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1__DOT__reg_cpu_addr),64);
            tracep->chgBit(oldp+181,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1_io_cache_stage1_bits_sram_0_hit));
            tracep->chgQData(oldp+182,(((1U & (IData)(
                                                      (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1__DOT__reg_cpu_addr 
                                                       >> 3U)))
                                         ? (((QData)((IData)(
                                                             vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1_io_sram_sram_data_0[3U])) 
                                             << 0x20U) 
                                            | (QData)((IData)(
                                                              vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1_io_sram_sram_data_0[2U])))
                                         : (((QData)((IData)(
                                                             vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1_io_sram_sram_data_0[1U])) 
                                             << 0x20U) 
                                            | (QData)((IData)(
                                                              vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1_io_sram_sram_data_0[0U]))))),64);
            tracep->chgBit(oldp+184,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1_io_cache_stage1_bits_sram_1_hit));
            tracep->chgQData(oldp+185,(((1U & (IData)(
                                                      (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1__DOT__reg_cpu_addr 
                                                       >> 3U)))
                                         ? (((QData)((IData)(
                                                             vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1_io_sram_sram_data_1[3U])) 
                                             << 0x20U) 
                                            | (QData)((IData)(
                                                              vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1_io_sram_sram_data_1[2U])))
                                         : (((QData)((IData)(
                                                             vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1_io_sram_sram_data_1[1U])) 
                                             << 0x20U) 
                                            | (QData)((IData)(
                                                              vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1_io_sram_sram_data_1[0U]))))),64);
            tracep->chgBit(oldp+187,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_write));
            tracep->chgCData(oldp+188,((0x3fU & (IData)(
                                                        (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                                         >> 4U)))),6);
            tracep->chgWData(oldp+189,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata),128);
            VL_EXTEND_WQ(128,54, __Vtemp3375, (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                               >> 0xaU));
            tracep->chgWData(oldp+193,(__Vtemp3375),128);
            tracep->chgBit(oldp+197,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_chosen_tag));
            tracep->chgCData(oldp+198,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_io_addr),6);
            tracep->chgBit(oldp+199,((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram0_write)))));
            tracep->chgWData(oldp+200,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM__DOT__Q),128);
            tracep->chgCData(oldp+204,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_1_io_addr),6);
            tracep->chgWData(oldp+205,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_1__DOT__Q),128);
            tracep->chgCData(oldp+209,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_2_io_addr),6);
            tracep->chgBit(oldp+210,((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram1_write)))));
            tracep->chgWData(oldp+211,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_2__DOT__Q),128);
            tracep->chgCData(oldp+215,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_3_io_addr),6);
            tracep->chgWData(oldp+216,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_3__DOT__Q),128);
            tracep->chgQData(oldp+220,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_sram0_valid),64);
            tracep->chgQData(oldp+222,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_sram1_valid),64);
            tracep->chgBit(oldp+224,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_w_sram));
            tracep->chgBit(oldp+225,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram0_write));
            tracep->chgBit(oldp+226,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram1_write));
            tracep->chgQData(oldp+227,((1ULL << (0x3fU 
                                                 & (IData)(
                                                           (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                                            >> 4U))))),64);
            tracep->chgBit(oldp+229,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_temp_sram0_valid));
            tracep->chgBit(oldp+230,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_temp_sram1_valid));
            tracep->chgCData(oldp+231,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_temp_r_index),6);
            tracep->chgBit(oldp+232,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__w_r_pass0_val));
            tracep->chgBit(oldp+233,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__w_r_pass1_val));
            tracep->chgBit(oldp+234,((((0ULL != (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0 
                                                 >> 0x1fU)) 
                                       & (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_bus_valid)) 
                                      & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch_io_out_flush)))));
            tracep->chgBit(oldp+235,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1__DOT__ready));
            tracep->chgBit(oldp+236,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1__DOT__reg_valid));
            tracep->chgQData(oldp+237,((vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1__DOT__reg_cpu_addr 
                                        >> 0xaU)),54);
            tracep->chgCData(oldp+239,((0x3fU & (IData)(
                                                        (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1__DOT__reg_cpu_addr 
                                                         >> 4U)))),6);
            tracep->chgCData(oldp+240,((0xfU & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1__DOT__reg_cpu_addr))),4);
            VL_EXTEND_WQ(128,54, __Vtemp3376, (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                               >> 0xaU));
            VL_EXTEND_WQ(128,54, __Vtemp3377, (0x3fffffffffffffULL 
                                               & (((QData)((IData)(
                                                                   vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_1__DOT__Q[1U])) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(
                                                                    vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_1__DOT__Q[0U])))));
            tracep->chgQData(oldp+241,((0x3fffffffffffffULL 
                                        & (((QData)((IData)(
                                                            ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__w_r_pass0_val)
                                                              ? 
                                                             __Vtemp3376[1U]
                                                              : 
                                                             __Vtemp3377[1U]))) 
                                            << 0x20U) 
                                           | (QData)((IData)(
                                                             ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__w_r_pass0_val)
                                                               ? 
                                                              __Vtemp3376[0U]
                                                               : 
                                                              __Vtemp3377[0U])))))),54);
            VL_EXTEND_WQ(128,54, __Vtemp3379, (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                               >> 0xaU));
            VL_EXTEND_WQ(128,54, __Vtemp3380, (0x3fffffffffffffULL 
                                               & (((QData)((IData)(
                                                                   vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_3__DOT__Q[1U])) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(
                                                                    vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_3__DOT__Q[0U])))));
            tracep->chgQData(oldp+243,((0x3fffffffffffffULL 
                                        & (((QData)((IData)(
                                                            ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__w_r_pass1_val)
                                                              ? 
                                                             __Vtemp3379[1U]
                                                              : 
                                                             __Vtemp3380[1U]))) 
                                            << 0x20U) 
                                           | (QData)((IData)(
                                                             ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__w_r_pass1_val)
                                                               ? 
                                                              __Vtemp3379[0U]
                                                               : 
                                                              __Vtemp3380[0U])))))),54);
            tracep->chgBit(oldp+245,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__valid));
            tracep->chgBit(oldp+246,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_ready));
            tracep->chgQData(oldp+247,((0xfffffffffffffff0ULL 
                                        & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1__DOT__reg_cpu_addr)),64);
            tracep->chgQData(oldp+249,((vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                        >> 0xaU)),54);
            tracep->chgCData(oldp+251,((0xfU & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr))),4);
            tracep->chgQData(oldp+252,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_lru_1),64);
            tracep->chgBit(oldp+254,((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT___LRU_1_T))));
            tracep->chgQData(oldp+255,((1ULL << (0x3fU 
                                                 & (IData)(
                                                           (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1__DOT__reg_cpu_addr 
                                                            >> 4U))))),64);
            tracep->chgQData(oldp+257,((~ (1ULL << 
                                           (0x3fU & (IData)(
                                                            (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1__DOT__reg_cpu_addr 
                                                             >> 4U)))))),64);
            tracep->chgCData(oldp+259,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_bus_state),2);
            tracep->chgWData(oldp+260,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM__DOT__sram_0),128);
            tracep->chgWData(oldp+264,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM__DOT__sram_1),128);
            tracep->chgWData(oldp+268,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM__DOT__sram_2),128);
            tracep->chgWData(oldp+272,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM__DOT__sram_3),128);
            tracep->chgWData(oldp+276,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM__DOT__sram_4),128);
            tracep->chgWData(oldp+280,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM__DOT__sram_5),128);
            tracep->chgWData(oldp+284,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM__DOT__sram_6),128);
            tracep->chgWData(oldp+288,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM__DOT__sram_7),128);
            tracep->chgWData(oldp+292,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM__DOT__sram_8),128);
            tracep->chgWData(oldp+296,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM__DOT__sram_9),128);
            tracep->chgWData(oldp+300,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM__DOT__sram_10),128);
            tracep->chgWData(oldp+304,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM__DOT__sram_11),128);
            tracep->chgWData(oldp+308,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM__DOT__sram_12),128);
            tracep->chgWData(oldp+312,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM__DOT__sram_13),128);
            tracep->chgWData(oldp+316,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM__DOT__sram_14),128);
            tracep->chgWData(oldp+320,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM__DOT__sram_15),128);
            tracep->chgWData(oldp+324,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM__DOT__sram_16),128);
            tracep->chgWData(oldp+328,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM__DOT__sram_17),128);
            tracep->chgWData(oldp+332,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM__DOT__sram_18),128);
            tracep->chgWData(oldp+336,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM__DOT__sram_19),128);
            tracep->chgWData(oldp+340,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM__DOT__sram_20),128);
            tracep->chgWData(oldp+344,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM__DOT__sram_21),128);
            tracep->chgWData(oldp+348,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM__DOT__sram_22),128);
            tracep->chgWData(oldp+352,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM__DOT__sram_23),128);
            tracep->chgWData(oldp+356,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM__DOT__sram_24),128);
            tracep->chgWData(oldp+360,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM__DOT__sram_25),128);
            tracep->chgWData(oldp+364,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM__DOT__sram_26),128);
            tracep->chgWData(oldp+368,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM__DOT__sram_27),128);
            tracep->chgWData(oldp+372,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM__DOT__sram_28),128);
            tracep->chgWData(oldp+376,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM__DOT__sram_29),128);
            tracep->chgWData(oldp+380,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM__DOT__sram_30),128);
            tracep->chgWData(oldp+384,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM__DOT__sram_31),128);
            tracep->chgWData(oldp+388,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM__DOT__sram_32),128);
            tracep->chgWData(oldp+392,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM__DOT__sram_33),128);
            tracep->chgWData(oldp+396,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM__DOT__sram_34),128);
            tracep->chgWData(oldp+400,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM__DOT__sram_35),128);
            tracep->chgWData(oldp+404,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM__DOT__sram_36),128);
            tracep->chgWData(oldp+408,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM__DOT__sram_37),128);
            tracep->chgWData(oldp+412,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM__DOT__sram_38),128);
            tracep->chgWData(oldp+416,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM__DOT__sram_39),128);
            tracep->chgWData(oldp+420,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM__DOT__sram_40),128);
            tracep->chgWData(oldp+424,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM__DOT__sram_41),128);
            tracep->chgWData(oldp+428,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM__DOT__sram_42),128);
            tracep->chgWData(oldp+432,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM__DOT__sram_43),128);
            tracep->chgWData(oldp+436,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM__DOT__sram_44),128);
            tracep->chgWData(oldp+440,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM__DOT__sram_45),128);
            tracep->chgWData(oldp+444,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM__DOT__sram_46),128);
            tracep->chgWData(oldp+448,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM__DOT__sram_47),128);
            tracep->chgWData(oldp+452,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM__DOT__sram_48),128);
            tracep->chgWData(oldp+456,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM__DOT__sram_49),128);
            tracep->chgWData(oldp+460,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM__DOT__sram_50),128);
            tracep->chgWData(oldp+464,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM__DOT__sram_51),128);
            tracep->chgWData(oldp+468,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM__DOT__sram_52),128);
            tracep->chgWData(oldp+472,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM__DOT__sram_53),128);
            tracep->chgWData(oldp+476,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM__DOT__sram_54),128);
            tracep->chgWData(oldp+480,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM__DOT__sram_55),128);
            tracep->chgWData(oldp+484,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM__DOT__sram_56),128);
            tracep->chgWData(oldp+488,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM__DOT__sram_57),128);
            tracep->chgWData(oldp+492,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM__DOT__sram_58),128);
            tracep->chgWData(oldp+496,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM__DOT__sram_59),128);
            tracep->chgWData(oldp+500,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM__DOT__sram_60),128);
            tracep->chgWData(oldp+504,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM__DOT__sram_61),128);
            tracep->chgWData(oldp+508,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM__DOT__sram_62),128);
            tracep->chgWData(oldp+512,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM__DOT__sram_63),128);
            tracep->chgWData(oldp+516,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_1__DOT__sram_0),128);
            tracep->chgWData(oldp+520,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_1__DOT__sram_1),128);
            tracep->chgWData(oldp+524,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_1__DOT__sram_2),128);
            tracep->chgWData(oldp+528,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_1__DOT__sram_3),128);
            tracep->chgWData(oldp+532,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_1__DOT__sram_4),128);
            tracep->chgWData(oldp+536,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_1__DOT__sram_5),128);
            tracep->chgWData(oldp+540,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_1__DOT__sram_6),128);
            tracep->chgWData(oldp+544,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_1__DOT__sram_7),128);
            tracep->chgWData(oldp+548,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_1__DOT__sram_8),128);
            tracep->chgWData(oldp+552,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_1__DOT__sram_9),128);
            tracep->chgWData(oldp+556,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_1__DOT__sram_10),128);
            tracep->chgWData(oldp+560,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_1__DOT__sram_11),128);
            tracep->chgWData(oldp+564,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_1__DOT__sram_12),128);
            tracep->chgWData(oldp+568,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_1__DOT__sram_13),128);
            tracep->chgWData(oldp+572,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_1__DOT__sram_14),128);
            tracep->chgWData(oldp+576,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_1__DOT__sram_15),128);
            tracep->chgWData(oldp+580,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_1__DOT__sram_16),128);
            tracep->chgWData(oldp+584,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_1__DOT__sram_17),128);
            tracep->chgWData(oldp+588,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_1__DOT__sram_18),128);
            tracep->chgWData(oldp+592,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_1__DOT__sram_19),128);
            tracep->chgWData(oldp+596,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_1__DOT__sram_20),128);
            tracep->chgWData(oldp+600,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_1__DOT__sram_21),128);
            tracep->chgWData(oldp+604,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_1__DOT__sram_22),128);
            tracep->chgWData(oldp+608,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_1__DOT__sram_23),128);
            tracep->chgWData(oldp+612,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_1__DOT__sram_24),128);
            tracep->chgWData(oldp+616,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_1__DOT__sram_25),128);
            tracep->chgWData(oldp+620,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_1__DOT__sram_26),128);
            tracep->chgWData(oldp+624,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_1__DOT__sram_27),128);
            tracep->chgWData(oldp+628,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_1__DOT__sram_28),128);
            tracep->chgWData(oldp+632,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_1__DOT__sram_29),128);
            tracep->chgWData(oldp+636,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_1__DOT__sram_30),128);
            tracep->chgWData(oldp+640,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_1__DOT__sram_31),128);
            tracep->chgWData(oldp+644,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_1__DOT__sram_32),128);
            tracep->chgWData(oldp+648,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_1__DOT__sram_33),128);
            tracep->chgWData(oldp+652,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_1__DOT__sram_34),128);
            tracep->chgWData(oldp+656,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_1__DOT__sram_35),128);
            tracep->chgWData(oldp+660,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_1__DOT__sram_36),128);
            tracep->chgWData(oldp+664,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_1__DOT__sram_37),128);
            tracep->chgWData(oldp+668,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_1__DOT__sram_38),128);
            tracep->chgWData(oldp+672,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_1__DOT__sram_39),128);
            tracep->chgWData(oldp+676,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_1__DOT__sram_40),128);
            tracep->chgWData(oldp+680,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_1__DOT__sram_41),128);
            tracep->chgWData(oldp+684,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_1__DOT__sram_42),128);
            tracep->chgWData(oldp+688,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_1__DOT__sram_43),128);
            tracep->chgWData(oldp+692,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_1__DOT__sram_44),128);
            tracep->chgWData(oldp+696,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_1__DOT__sram_45),128);
            tracep->chgWData(oldp+700,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_1__DOT__sram_46),128);
            tracep->chgWData(oldp+704,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_1__DOT__sram_47),128);
            tracep->chgWData(oldp+708,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_1__DOT__sram_48),128);
            tracep->chgWData(oldp+712,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_1__DOT__sram_49),128);
            tracep->chgWData(oldp+716,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_1__DOT__sram_50),128);
            tracep->chgWData(oldp+720,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_1__DOT__sram_51),128);
            tracep->chgWData(oldp+724,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_1__DOT__sram_52),128);
            tracep->chgWData(oldp+728,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_1__DOT__sram_53),128);
            tracep->chgWData(oldp+732,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_1__DOT__sram_54),128);
            tracep->chgWData(oldp+736,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_1__DOT__sram_55),128);
            tracep->chgWData(oldp+740,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_1__DOT__sram_56),128);
            tracep->chgWData(oldp+744,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_1__DOT__sram_57),128);
            tracep->chgWData(oldp+748,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_1__DOT__sram_58),128);
            tracep->chgWData(oldp+752,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_1__DOT__sram_59),128);
            tracep->chgWData(oldp+756,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_1__DOT__sram_60),128);
            tracep->chgWData(oldp+760,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_1__DOT__sram_61),128);
            tracep->chgWData(oldp+764,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_1__DOT__sram_62),128);
            tracep->chgWData(oldp+768,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_1__DOT__sram_63),128);
            tracep->chgWData(oldp+772,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_2__DOT__sram_0),128);
            tracep->chgWData(oldp+776,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_2__DOT__sram_1),128);
            tracep->chgWData(oldp+780,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_2__DOT__sram_2),128);
            tracep->chgWData(oldp+784,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_2__DOT__sram_3),128);
            tracep->chgWData(oldp+788,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_2__DOT__sram_4),128);
            tracep->chgWData(oldp+792,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_2__DOT__sram_5),128);
            tracep->chgWData(oldp+796,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_2__DOT__sram_6),128);
            tracep->chgWData(oldp+800,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_2__DOT__sram_7),128);
            tracep->chgWData(oldp+804,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_2__DOT__sram_8),128);
            tracep->chgWData(oldp+808,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_2__DOT__sram_9),128);
            tracep->chgWData(oldp+812,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_2__DOT__sram_10),128);
            tracep->chgWData(oldp+816,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_2__DOT__sram_11),128);
            tracep->chgWData(oldp+820,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_2__DOT__sram_12),128);
            tracep->chgWData(oldp+824,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_2__DOT__sram_13),128);
            tracep->chgWData(oldp+828,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_2__DOT__sram_14),128);
            tracep->chgWData(oldp+832,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_2__DOT__sram_15),128);
            tracep->chgWData(oldp+836,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_2__DOT__sram_16),128);
            tracep->chgWData(oldp+840,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_2__DOT__sram_17),128);
            tracep->chgWData(oldp+844,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_2__DOT__sram_18),128);
            tracep->chgWData(oldp+848,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_2__DOT__sram_19),128);
            tracep->chgWData(oldp+852,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_2__DOT__sram_20),128);
            tracep->chgWData(oldp+856,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_2__DOT__sram_21),128);
            tracep->chgWData(oldp+860,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_2__DOT__sram_22),128);
            tracep->chgWData(oldp+864,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_2__DOT__sram_23),128);
            tracep->chgWData(oldp+868,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_2__DOT__sram_24),128);
            tracep->chgWData(oldp+872,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_2__DOT__sram_25),128);
            tracep->chgWData(oldp+876,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_2__DOT__sram_26),128);
            tracep->chgWData(oldp+880,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_2__DOT__sram_27),128);
            tracep->chgWData(oldp+884,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_2__DOT__sram_28),128);
            tracep->chgWData(oldp+888,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_2__DOT__sram_29),128);
            tracep->chgWData(oldp+892,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_2__DOT__sram_30),128);
            tracep->chgWData(oldp+896,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_2__DOT__sram_31),128);
            tracep->chgWData(oldp+900,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_2__DOT__sram_32),128);
            tracep->chgWData(oldp+904,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_2__DOT__sram_33),128);
            tracep->chgWData(oldp+908,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_2__DOT__sram_34),128);
            tracep->chgWData(oldp+912,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_2__DOT__sram_35),128);
            tracep->chgWData(oldp+916,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_2__DOT__sram_36),128);
            tracep->chgWData(oldp+920,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_2__DOT__sram_37),128);
            tracep->chgWData(oldp+924,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_2__DOT__sram_38),128);
            tracep->chgWData(oldp+928,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_2__DOT__sram_39),128);
            tracep->chgWData(oldp+932,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_2__DOT__sram_40),128);
            tracep->chgWData(oldp+936,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_2__DOT__sram_41),128);
            tracep->chgWData(oldp+940,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_2__DOT__sram_42),128);
            tracep->chgWData(oldp+944,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_2__DOT__sram_43),128);
            tracep->chgWData(oldp+948,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_2__DOT__sram_44),128);
            tracep->chgWData(oldp+952,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_2__DOT__sram_45),128);
            tracep->chgWData(oldp+956,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_2__DOT__sram_46),128);
            tracep->chgWData(oldp+960,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_2__DOT__sram_47),128);
            tracep->chgWData(oldp+964,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_2__DOT__sram_48),128);
            tracep->chgWData(oldp+968,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_2__DOT__sram_49),128);
            tracep->chgWData(oldp+972,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_2__DOT__sram_50),128);
            tracep->chgWData(oldp+976,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_2__DOT__sram_51),128);
            tracep->chgWData(oldp+980,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_2__DOT__sram_52),128);
            tracep->chgWData(oldp+984,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_2__DOT__sram_53),128);
            tracep->chgWData(oldp+988,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_2__DOT__sram_54),128);
            tracep->chgWData(oldp+992,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_2__DOT__sram_55),128);
            tracep->chgWData(oldp+996,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_2__DOT__sram_56),128);
            tracep->chgWData(oldp+1000,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_2__DOT__sram_57),128);
            tracep->chgWData(oldp+1004,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_2__DOT__sram_58),128);
            tracep->chgWData(oldp+1008,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_2__DOT__sram_59),128);
            tracep->chgWData(oldp+1012,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_2__DOT__sram_60),128);
            tracep->chgWData(oldp+1016,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_2__DOT__sram_61),128);
            tracep->chgWData(oldp+1020,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_2__DOT__sram_62),128);
            tracep->chgWData(oldp+1024,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_2__DOT__sram_63),128);
            tracep->chgWData(oldp+1028,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_3__DOT__sram_0),128);
            tracep->chgWData(oldp+1032,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_3__DOT__sram_1),128);
            tracep->chgWData(oldp+1036,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_3__DOT__sram_2),128);
            tracep->chgWData(oldp+1040,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_3__DOT__sram_3),128);
            tracep->chgWData(oldp+1044,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_3__DOT__sram_4),128);
            tracep->chgWData(oldp+1048,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_3__DOT__sram_5),128);
            tracep->chgWData(oldp+1052,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_3__DOT__sram_6),128);
            tracep->chgWData(oldp+1056,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_3__DOT__sram_7),128);
            tracep->chgWData(oldp+1060,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_3__DOT__sram_8),128);
            tracep->chgWData(oldp+1064,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_3__DOT__sram_9),128);
            tracep->chgWData(oldp+1068,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_3__DOT__sram_10),128);
            tracep->chgWData(oldp+1072,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_3__DOT__sram_11),128);
            tracep->chgWData(oldp+1076,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_3__DOT__sram_12),128);
            tracep->chgWData(oldp+1080,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_3__DOT__sram_13),128);
            tracep->chgWData(oldp+1084,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_3__DOT__sram_14),128);
            tracep->chgWData(oldp+1088,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_3__DOT__sram_15),128);
            tracep->chgWData(oldp+1092,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_3__DOT__sram_16),128);
            tracep->chgWData(oldp+1096,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_3__DOT__sram_17),128);
            tracep->chgWData(oldp+1100,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_3__DOT__sram_18),128);
            tracep->chgWData(oldp+1104,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_3__DOT__sram_19),128);
            tracep->chgWData(oldp+1108,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_3__DOT__sram_20),128);
            tracep->chgWData(oldp+1112,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_3__DOT__sram_21),128);
            tracep->chgWData(oldp+1116,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_3__DOT__sram_22),128);
            tracep->chgWData(oldp+1120,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_3__DOT__sram_23),128);
            tracep->chgWData(oldp+1124,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_3__DOT__sram_24),128);
            tracep->chgWData(oldp+1128,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_3__DOT__sram_25),128);
            tracep->chgWData(oldp+1132,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_3__DOT__sram_26),128);
            tracep->chgWData(oldp+1136,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_3__DOT__sram_27),128);
            tracep->chgWData(oldp+1140,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_3__DOT__sram_28),128);
            tracep->chgWData(oldp+1144,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_3__DOT__sram_29),128);
            tracep->chgWData(oldp+1148,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_3__DOT__sram_30),128);
            tracep->chgWData(oldp+1152,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_3__DOT__sram_31),128);
            tracep->chgWData(oldp+1156,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_3__DOT__sram_32),128);
            tracep->chgWData(oldp+1160,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_3__DOT__sram_33),128);
            tracep->chgWData(oldp+1164,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_3__DOT__sram_34),128);
            tracep->chgWData(oldp+1168,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_3__DOT__sram_35),128);
            tracep->chgWData(oldp+1172,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_3__DOT__sram_36),128);
            tracep->chgWData(oldp+1176,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_3__DOT__sram_37),128);
            tracep->chgWData(oldp+1180,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_3__DOT__sram_38),128);
            tracep->chgWData(oldp+1184,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_3__DOT__sram_39),128);
            tracep->chgWData(oldp+1188,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_3__DOT__sram_40),128);
            tracep->chgWData(oldp+1192,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_3__DOT__sram_41),128);
            tracep->chgWData(oldp+1196,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_3__DOT__sram_42),128);
            tracep->chgWData(oldp+1200,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_3__DOT__sram_43),128);
            tracep->chgWData(oldp+1204,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_3__DOT__sram_44),128);
            tracep->chgWData(oldp+1208,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_3__DOT__sram_45),128);
            tracep->chgWData(oldp+1212,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_3__DOT__sram_46),128);
            tracep->chgWData(oldp+1216,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_3__DOT__sram_47),128);
            tracep->chgWData(oldp+1220,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_3__DOT__sram_48),128);
            tracep->chgWData(oldp+1224,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_3__DOT__sram_49),128);
            tracep->chgWData(oldp+1228,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_3__DOT__sram_50),128);
            tracep->chgWData(oldp+1232,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_3__DOT__sram_51),128);
            tracep->chgWData(oldp+1236,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_3__DOT__sram_52),128);
            tracep->chgWData(oldp+1240,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_3__DOT__sram_53),128);
            tracep->chgWData(oldp+1244,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_3__DOT__sram_54),128);
            tracep->chgWData(oldp+1248,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_3__DOT__sram_55),128);
            tracep->chgWData(oldp+1252,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_3__DOT__sram_56),128);
            tracep->chgWData(oldp+1256,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_3__DOT__sram_57),128);
            tracep->chgWData(oldp+1260,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_3__DOT__sram_58),128);
            tracep->chgWData(oldp+1264,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_3__DOT__sram_59),128);
            tracep->chgWData(oldp+1268,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_3__DOT__sram_60),128);
            tracep->chgWData(oldp+1272,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_3__DOT__sram_61),128);
            tracep->chgWData(oldp+1276,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_3__DOT__sram_62),128);
            tracep->chgWData(oldp+1280,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_3__DOT__sram_63),128);
            tracep->chgCData(oldp+1284,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_io_addr),6);
            tracep->chgBit(oldp+1285,((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram0_write)))));
            __Vtemp3382[0U] = (~ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__cache_mask[0U]);
            __Vtemp3382[1U] = (~ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__cache_mask[1U]);
            __Vtemp3382[2U] = (~ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__cache_mask[2U]);
            __Vtemp3382[3U] = (~ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__cache_mask[3U]);
            tracep->chgWData(oldp+1286,(__Vtemp3382),128);
            tracep->chgWData(oldp+1290,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_wdata),128);
            tracep->chgWData(oldp+1294,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM__DOT__Q),128);
            tracep->chgCData(oldp+1298,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_1_io_addr),6);
            VL_EXTEND_WQ(128,54, __Vtemp3383, vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag);
            tracep->chgWData(oldp+1299,(__Vtemp3383),128);
            tracep->chgWData(oldp+1303,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_1__DOT__Q),128);
            tracep->chgCData(oldp+1307,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_2_io_addr),6);
            tracep->chgBit(oldp+1308,((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram2_write)))));
            tracep->chgWData(oldp+1309,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_2__DOT__Q),128);
            tracep->chgCData(oldp+1313,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_3_io_addr),6);
            tracep->chgWData(oldp+1314,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_3__DOT__Q),128);
            tracep->chgQData(oldp+1318,((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu_io_bus_bits_addr 
                                         >> 0xaU)),54);
            tracep->chgCData(oldp+1320,((0x3fU & (IData)(
                                                         (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu_io_bus_bits_addr 
                                                          >> 4U)))),6);
            tracep->chgCData(oldp+1321,((0xfU & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu_io_bus_bits_addr))),4);
            tracep->chgCData(oldp+1322,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state),2);
            tracep->chgQData(oldp+1323,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_wdata),64);
            tracep->chgCData(oldp+1325,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_wstrb),8);
            tracep->chgBit(oldp+1326,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_is_w));
            tracep->chgQData(oldp+1327,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag),54);
            tracep->chgCData(oldp+1329,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index),6);
            tracep->chgCData(oldp+1330,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_offset),4);
            tracep->chgBit(oldp+1331,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_write));
            tracep->chgSData(oldp+1332,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_wstrb),16);
            tracep->chgBit(oldp+1333,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_chosen_tag));
            tracep->chgQData(oldp+1334,((((QData)((IData)(
                                                          ((((0x80U 
                                                              & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_wstrb))
                                                              ? 0xffU
                                                              : 0U) 
                                                            << 0x18U) 
                                                           | ((((0x40U 
                                                                 & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_wstrb))
                                                                 ? 0xffU
                                                                 : 0U) 
                                                               << 0x10U) 
                                                              | ((((0x20U 
                                                                    & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_wstrb))
                                                                    ? 0xffU
                                                                    : 0U) 
                                                                  << 8U) 
                                                                 | ((0x10U 
                                                                     & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_wstrb))
                                                                     ? 0xffU
                                                                     : 0U)))))) 
                                          << 0x20U) 
                                         | (QData)((IData)(
                                                           ((((8U 
                                                               & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_wstrb))
                                                               ? 0xffU
                                                               : 0U) 
                                                             << 0x18U) 
                                                            | ((((4U 
                                                                  & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_wstrb))
                                                                  ? 0xffU
                                                                  : 0U) 
                                                                << 0x10U) 
                                                               | ((((2U 
                                                                     & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_wstrb))
                                                                     ? 0xffU
                                                                     : 0U) 
                                                                   << 8U) 
                                                                  | ((1U 
                                                                      & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_wstrb))
                                                                      ? 0xffU
                                                                      : 0U)))))))),64);
            tracep->chgWData(oldp+1336,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__cache_mask),128);
            tracep->chgWData(oldp+1340,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__cache_wdata),128);
            tracep->chgBit(oldp+1344,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram0_write));
            tracep->chgQData(oldp+1345,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_sram0_valid),64);
            tracep->chgQData(oldp+1347,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_sram0_dirty),64);
            tracep->chgQData(oldp+1349,((1ULL << (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index))),64);
            tracep->chgQData(oldp+1351,((~ (1ULL << (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)))),64);
            tracep->chgBit(oldp+1353,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram2_write));
            tracep->chgQData(oldp+1354,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_sram2_valid),64);
            tracep->chgQData(oldp+1356,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_sram2_dirty),64);
            tracep->chgQData(oldp+1358,((0x3fffffffffffffULL 
                                         & (((QData)((IData)(
                                                             vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_1__DOT__Q[1U])) 
                                             << 0x20U) 
                                            | (QData)((IData)(
                                                              vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_1__DOT__Q[0U]))))),54);
            tracep->chgQData(oldp+1360,((0x3fffffffffffffULL 
                                         & (((QData)((IData)(
                                                             vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_3__DOT__Q[1U])) 
                                             << 0x20U) 
                                            | (QData)((IData)(
                                                              vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_3__DOT__Q[0U]))))),54);
            tracep->chgBit(oldp+1362,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_0));
            tracep->chgBit(oldp+1363,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2));
            tracep->chgBit(oldp+1364,((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___tag_valid_0_T))));
            tracep->chgBit(oldp+1365,((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___tag_valid_2_T))));
            tracep->chgBit(oldp+1366,((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___tag_dirty_0_T))));
            tracep->chgBit(oldp+1367,((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___tag_dirty_2_T))));
            tracep->chgQData(oldp+1368,(((8U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_offset))
                                          ? (((QData)((IData)(
                                                              vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM__DOT__Q[3U])) 
                                              << 0x20U) 
                                             | (QData)((IData)(
                                                               vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM__DOT__Q[2U])))
                                          : (((QData)((IData)(
                                                              vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM__DOT__Q[1U])) 
                                              << 0x20U) 
                                             | (QData)((IData)(
                                                               vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM__DOT__Q[0U]))))),64);
            tracep->chgQData(oldp+1370,(((8U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_offset))
                                          ? (((QData)((IData)(
                                                              vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_2__DOT__Q[3U])) 
                                              << 0x20U) 
                                             | (QData)((IData)(
                                                               vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_2__DOT__Q[2U])))
                                          : (((QData)((IData)(
                                                              vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_2__DOT__Q[1U])) 
                                              << 0x20U) 
                                             | (QData)((IData)(
                                                               vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_2__DOT__Q[0U]))))),64);
            tracep->chgQData(oldp+1372,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_2),64);
            tracep->chgBit(oldp+1374,((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___LRU_2_T))));
            tracep->chgBit(oldp+1375,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation));
            tracep->chgCData(oldp+1376,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cnt),2);
            tracep->chgBit(oldp+1377,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_rbus_finish));
            tracep->chgBit(oldp+1378,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_wbus_finish));
            tracep->chgWData(oldp+1379,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM__DOT__sram_0),128);
            tracep->chgWData(oldp+1383,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM__DOT__sram_1),128);
            tracep->chgWData(oldp+1387,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM__DOT__sram_2),128);
            tracep->chgWData(oldp+1391,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM__DOT__sram_3),128);
            tracep->chgWData(oldp+1395,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM__DOT__sram_4),128);
            tracep->chgWData(oldp+1399,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM__DOT__sram_5),128);
            tracep->chgWData(oldp+1403,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM__DOT__sram_6),128);
            tracep->chgWData(oldp+1407,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM__DOT__sram_7),128);
            tracep->chgWData(oldp+1411,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM__DOT__sram_8),128);
            tracep->chgWData(oldp+1415,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM__DOT__sram_9),128);
            tracep->chgWData(oldp+1419,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM__DOT__sram_10),128);
            tracep->chgWData(oldp+1423,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM__DOT__sram_11),128);
            tracep->chgWData(oldp+1427,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM__DOT__sram_12),128);
            tracep->chgWData(oldp+1431,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM__DOT__sram_13),128);
            tracep->chgWData(oldp+1435,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM__DOT__sram_14),128);
            tracep->chgWData(oldp+1439,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM__DOT__sram_15),128);
            tracep->chgWData(oldp+1443,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM__DOT__sram_16),128);
            tracep->chgWData(oldp+1447,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM__DOT__sram_17),128);
            tracep->chgWData(oldp+1451,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM__DOT__sram_18),128);
            tracep->chgWData(oldp+1455,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM__DOT__sram_19),128);
            tracep->chgWData(oldp+1459,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM__DOT__sram_20),128);
            tracep->chgWData(oldp+1463,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM__DOT__sram_21),128);
            tracep->chgWData(oldp+1467,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM__DOT__sram_22),128);
            tracep->chgWData(oldp+1471,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM__DOT__sram_23),128);
            tracep->chgWData(oldp+1475,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM__DOT__sram_24),128);
            tracep->chgWData(oldp+1479,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM__DOT__sram_25),128);
            tracep->chgWData(oldp+1483,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM__DOT__sram_26),128);
            tracep->chgWData(oldp+1487,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM__DOT__sram_27),128);
            tracep->chgWData(oldp+1491,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM__DOT__sram_28),128);
            tracep->chgWData(oldp+1495,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM__DOT__sram_29),128);
            tracep->chgWData(oldp+1499,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM__DOT__sram_30),128);
            tracep->chgWData(oldp+1503,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM__DOT__sram_31),128);
            tracep->chgWData(oldp+1507,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM__DOT__sram_32),128);
            tracep->chgWData(oldp+1511,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM__DOT__sram_33),128);
            tracep->chgWData(oldp+1515,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM__DOT__sram_34),128);
            tracep->chgWData(oldp+1519,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM__DOT__sram_35),128);
            tracep->chgWData(oldp+1523,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM__DOT__sram_36),128);
            tracep->chgWData(oldp+1527,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM__DOT__sram_37),128);
            tracep->chgWData(oldp+1531,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM__DOT__sram_38),128);
            tracep->chgWData(oldp+1535,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM__DOT__sram_39),128);
            tracep->chgWData(oldp+1539,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM__DOT__sram_40),128);
            tracep->chgWData(oldp+1543,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM__DOT__sram_41),128);
            tracep->chgWData(oldp+1547,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM__DOT__sram_42),128);
            tracep->chgWData(oldp+1551,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM__DOT__sram_43),128);
            tracep->chgWData(oldp+1555,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM__DOT__sram_44),128);
            tracep->chgWData(oldp+1559,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM__DOT__sram_45),128);
            tracep->chgWData(oldp+1563,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM__DOT__sram_46),128);
            tracep->chgWData(oldp+1567,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM__DOT__sram_47),128);
            tracep->chgWData(oldp+1571,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM__DOT__sram_48),128);
            tracep->chgWData(oldp+1575,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM__DOT__sram_49),128);
            tracep->chgWData(oldp+1579,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM__DOT__sram_50),128);
            tracep->chgWData(oldp+1583,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM__DOT__sram_51),128);
            tracep->chgWData(oldp+1587,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM__DOT__sram_52),128);
            tracep->chgWData(oldp+1591,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM__DOT__sram_53),128);
            tracep->chgWData(oldp+1595,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM__DOT__sram_54),128);
            tracep->chgWData(oldp+1599,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM__DOT__sram_55),128);
            tracep->chgWData(oldp+1603,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM__DOT__sram_56),128);
            tracep->chgWData(oldp+1607,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM__DOT__sram_57),128);
            tracep->chgWData(oldp+1611,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM__DOT__sram_58),128);
            tracep->chgWData(oldp+1615,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM__DOT__sram_59),128);
            tracep->chgWData(oldp+1619,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM__DOT__sram_60),128);
            tracep->chgWData(oldp+1623,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM__DOT__sram_61),128);
            tracep->chgWData(oldp+1627,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM__DOT__sram_62),128);
            tracep->chgWData(oldp+1631,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM__DOT__sram_63),128);
            tracep->chgWData(oldp+1635,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_1__DOT__sram_0),128);
            tracep->chgWData(oldp+1639,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_1__DOT__sram_1),128);
            tracep->chgWData(oldp+1643,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_1__DOT__sram_2),128);
            tracep->chgWData(oldp+1647,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_1__DOT__sram_3),128);
            tracep->chgWData(oldp+1651,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_1__DOT__sram_4),128);
            tracep->chgWData(oldp+1655,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_1__DOT__sram_5),128);
            tracep->chgWData(oldp+1659,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_1__DOT__sram_6),128);
            tracep->chgWData(oldp+1663,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_1__DOT__sram_7),128);
            tracep->chgWData(oldp+1667,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_1__DOT__sram_8),128);
            tracep->chgWData(oldp+1671,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_1__DOT__sram_9),128);
            tracep->chgWData(oldp+1675,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_1__DOT__sram_10),128);
            tracep->chgWData(oldp+1679,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_1__DOT__sram_11),128);
            tracep->chgWData(oldp+1683,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_1__DOT__sram_12),128);
            tracep->chgWData(oldp+1687,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_1__DOT__sram_13),128);
            tracep->chgWData(oldp+1691,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_1__DOT__sram_14),128);
            tracep->chgWData(oldp+1695,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_1__DOT__sram_15),128);
            tracep->chgWData(oldp+1699,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_1__DOT__sram_16),128);
            tracep->chgWData(oldp+1703,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_1__DOT__sram_17),128);
            tracep->chgWData(oldp+1707,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_1__DOT__sram_18),128);
            tracep->chgWData(oldp+1711,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_1__DOT__sram_19),128);
            tracep->chgWData(oldp+1715,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_1__DOT__sram_20),128);
            tracep->chgWData(oldp+1719,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_1__DOT__sram_21),128);
            tracep->chgWData(oldp+1723,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_1__DOT__sram_22),128);
            tracep->chgWData(oldp+1727,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_1__DOT__sram_23),128);
            tracep->chgWData(oldp+1731,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_1__DOT__sram_24),128);
            tracep->chgWData(oldp+1735,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_1__DOT__sram_25),128);
            tracep->chgWData(oldp+1739,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_1__DOT__sram_26),128);
            tracep->chgWData(oldp+1743,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_1__DOT__sram_27),128);
            tracep->chgWData(oldp+1747,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_1__DOT__sram_28),128);
            tracep->chgWData(oldp+1751,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_1__DOT__sram_29),128);
            tracep->chgWData(oldp+1755,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_1__DOT__sram_30),128);
            tracep->chgWData(oldp+1759,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_1__DOT__sram_31),128);
            tracep->chgWData(oldp+1763,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_1__DOT__sram_32),128);
            tracep->chgWData(oldp+1767,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_1__DOT__sram_33),128);
            tracep->chgWData(oldp+1771,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_1__DOT__sram_34),128);
            tracep->chgWData(oldp+1775,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_1__DOT__sram_35),128);
            tracep->chgWData(oldp+1779,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_1__DOT__sram_36),128);
            tracep->chgWData(oldp+1783,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_1__DOT__sram_37),128);
            tracep->chgWData(oldp+1787,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_1__DOT__sram_38),128);
            tracep->chgWData(oldp+1791,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_1__DOT__sram_39),128);
            tracep->chgWData(oldp+1795,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_1__DOT__sram_40),128);
            tracep->chgWData(oldp+1799,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_1__DOT__sram_41),128);
            tracep->chgWData(oldp+1803,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_1__DOT__sram_42),128);
            tracep->chgWData(oldp+1807,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_1__DOT__sram_43),128);
            tracep->chgWData(oldp+1811,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_1__DOT__sram_44),128);
            tracep->chgWData(oldp+1815,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_1__DOT__sram_45),128);
            tracep->chgWData(oldp+1819,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_1__DOT__sram_46),128);
            tracep->chgWData(oldp+1823,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_1__DOT__sram_47),128);
            tracep->chgWData(oldp+1827,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_1__DOT__sram_48),128);
            tracep->chgWData(oldp+1831,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_1__DOT__sram_49),128);
            tracep->chgWData(oldp+1835,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_1__DOT__sram_50),128);
            tracep->chgWData(oldp+1839,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_1__DOT__sram_51),128);
            tracep->chgWData(oldp+1843,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_1__DOT__sram_52),128);
            tracep->chgWData(oldp+1847,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_1__DOT__sram_53),128);
            tracep->chgWData(oldp+1851,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_1__DOT__sram_54),128);
            tracep->chgWData(oldp+1855,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_1__DOT__sram_55),128);
            tracep->chgWData(oldp+1859,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_1__DOT__sram_56),128);
            tracep->chgWData(oldp+1863,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_1__DOT__sram_57),128);
            tracep->chgWData(oldp+1867,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_1__DOT__sram_58),128);
            tracep->chgWData(oldp+1871,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_1__DOT__sram_59),128);
            tracep->chgWData(oldp+1875,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_1__DOT__sram_60),128);
            tracep->chgWData(oldp+1879,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_1__DOT__sram_61),128);
            tracep->chgWData(oldp+1883,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_1__DOT__sram_62),128);
            tracep->chgWData(oldp+1887,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_1__DOT__sram_63),128);
            tracep->chgWData(oldp+1891,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_2__DOT__sram_0),128);
            tracep->chgWData(oldp+1895,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_2__DOT__sram_1),128);
            tracep->chgWData(oldp+1899,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_2__DOT__sram_2),128);
            tracep->chgWData(oldp+1903,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_2__DOT__sram_3),128);
            tracep->chgWData(oldp+1907,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_2__DOT__sram_4),128);
            tracep->chgWData(oldp+1911,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_2__DOT__sram_5),128);
            tracep->chgWData(oldp+1915,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_2__DOT__sram_6),128);
            tracep->chgWData(oldp+1919,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_2__DOT__sram_7),128);
            tracep->chgWData(oldp+1923,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_2__DOT__sram_8),128);
            tracep->chgWData(oldp+1927,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_2__DOT__sram_9),128);
            tracep->chgWData(oldp+1931,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_2__DOT__sram_10),128);
            tracep->chgWData(oldp+1935,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_2__DOT__sram_11),128);
            tracep->chgWData(oldp+1939,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_2__DOT__sram_12),128);
            tracep->chgWData(oldp+1943,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_2__DOT__sram_13),128);
            tracep->chgWData(oldp+1947,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_2__DOT__sram_14),128);
            tracep->chgWData(oldp+1951,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_2__DOT__sram_15),128);
            tracep->chgWData(oldp+1955,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_2__DOT__sram_16),128);
            tracep->chgWData(oldp+1959,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_2__DOT__sram_17),128);
            tracep->chgWData(oldp+1963,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_2__DOT__sram_18),128);
            tracep->chgWData(oldp+1967,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_2__DOT__sram_19),128);
            tracep->chgWData(oldp+1971,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_2__DOT__sram_20),128);
            tracep->chgWData(oldp+1975,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_2__DOT__sram_21),128);
            tracep->chgWData(oldp+1979,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_2__DOT__sram_22),128);
            tracep->chgWData(oldp+1983,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_2__DOT__sram_23),128);
            tracep->chgWData(oldp+1987,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_2__DOT__sram_24),128);
            tracep->chgWData(oldp+1991,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_2__DOT__sram_25),128);
            tracep->chgWData(oldp+1995,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_2__DOT__sram_26),128);
            tracep->chgWData(oldp+1999,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_2__DOT__sram_27),128);
            tracep->chgWData(oldp+2003,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_2__DOT__sram_28),128);
            tracep->chgWData(oldp+2007,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_2__DOT__sram_29),128);
            tracep->chgWData(oldp+2011,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_2__DOT__sram_30),128);
            tracep->chgWData(oldp+2015,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_2__DOT__sram_31),128);
            tracep->chgWData(oldp+2019,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_2__DOT__sram_32),128);
            tracep->chgWData(oldp+2023,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_2__DOT__sram_33),128);
            tracep->chgWData(oldp+2027,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_2__DOT__sram_34),128);
            tracep->chgWData(oldp+2031,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_2__DOT__sram_35),128);
            tracep->chgWData(oldp+2035,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_2__DOT__sram_36),128);
            tracep->chgWData(oldp+2039,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_2__DOT__sram_37),128);
            tracep->chgWData(oldp+2043,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_2__DOT__sram_38),128);
            tracep->chgWData(oldp+2047,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_2__DOT__sram_39),128);
            tracep->chgWData(oldp+2051,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_2__DOT__sram_40),128);
            tracep->chgWData(oldp+2055,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_2__DOT__sram_41),128);
            tracep->chgWData(oldp+2059,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_2__DOT__sram_42),128);
            tracep->chgWData(oldp+2063,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_2__DOT__sram_43),128);
            tracep->chgWData(oldp+2067,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_2__DOT__sram_44),128);
            tracep->chgWData(oldp+2071,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_2__DOT__sram_45),128);
            tracep->chgWData(oldp+2075,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_2__DOT__sram_46),128);
            tracep->chgWData(oldp+2079,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_2__DOT__sram_47),128);
            tracep->chgWData(oldp+2083,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_2__DOT__sram_48),128);
            tracep->chgWData(oldp+2087,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_2__DOT__sram_49),128);
            tracep->chgWData(oldp+2091,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_2__DOT__sram_50),128);
            tracep->chgWData(oldp+2095,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_2__DOT__sram_51),128);
            tracep->chgWData(oldp+2099,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_2__DOT__sram_52),128);
            tracep->chgWData(oldp+2103,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_2__DOT__sram_53),128);
            tracep->chgWData(oldp+2107,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_2__DOT__sram_54),128);
            tracep->chgWData(oldp+2111,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_2__DOT__sram_55),128);
            tracep->chgWData(oldp+2115,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_2__DOT__sram_56),128);
            tracep->chgWData(oldp+2119,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_2__DOT__sram_57),128);
            tracep->chgWData(oldp+2123,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_2__DOT__sram_58),128);
            tracep->chgWData(oldp+2127,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_2__DOT__sram_59),128);
            tracep->chgWData(oldp+2131,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_2__DOT__sram_60),128);
            tracep->chgWData(oldp+2135,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_2__DOT__sram_61),128);
            tracep->chgWData(oldp+2139,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_2__DOT__sram_62),128);
            tracep->chgWData(oldp+2143,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_2__DOT__sram_63),128);
            tracep->chgWData(oldp+2147,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_3__DOT__sram_0),128);
            tracep->chgWData(oldp+2151,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_3__DOT__sram_1),128);
            tracep->chgWData(oldp+2155,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_3__DOT__sram_2),128);
            tracep->chgWData(oldp+2159,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_3__DOT__sram_3),128);
            tracep->chgWData(oldp+2163,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_3__DOT__sram_4),128);
            tracep->chgWData(oldp+2167,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_3__DOT__sram_5),128);
            tracep->chgWData(oldp+2171,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_3__DOT__sram_6),128);
            tracep->chgWData(oldp+2175,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_3__DOT__sram_7),128);
            tracep->chgWData(oldp+2179,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_3__DOT__sram_8),128);
            tracep->chgWData(oldp+2183,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_3__DOT__sram_9),128);
            tracep->chgWData(oldp+2187,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_3__DOT__sram_10),128);
            tracep->chgWData(oldp+2191,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_3__DOT__sram_11),128);
            tracep->chgWData(oldp+2195,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_3__DOT__sram_12),128);
            tracep->chgWData(oldp+2199,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_3__DOT__sram_13),128);
            tracep->chgWData(oldp+2203,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_3__DOT__sram_14),128);
            tracep->chgWData(oldp+2207,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_3__DOT__sram_15),128);
            tracep->chgWData(oldp+2211,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_3__DOT__sram_16),128);
            tracep->chgWData(oldp+2215,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_3__DOT__sram_17),128);
            tracep->chgWData(oldp+2219,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_3__DOT__sram_18),128);
            tracep->chgWData(oldp+2223,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_3__DOT__sram_19),128);
            tracep->chgWData(oldp+2227,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_3__DOT__sram_20),128);
            tracep->chgWData(oldp+2231,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_3__DOT__sram_21),128);
            tracep->chgWData(oldp+2235,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_3__DOT__sram_22),128);
            tracep->chgWData(oldp+2239,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_3__DOT__sram_23),128);
            tracep->chgWData(oldp+2243,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_3__DOT__sram_24),128);
            tracep->chgWData(oldp+2247,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_3__DOT__sram_25),128);
            tracep->chgWData(oldp+2251,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_3__DOT__sram_26),128);
            tracep->chgWData(oldp+2255,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_3__DOT__sram_27),128);
            tracep->chgWData(oldp+2259,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_3__DOT__sram_28),128);
            tracep->chgWData(oldp+2263,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_3__DOT__sram_29),128);
            tracep->chgWData(oldp+2267,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_3__DOT__sram_30),128);
            tracep->chgWData(oldp+2271,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_3__DOT__sram_31),128);
            tracep->chgWData(oldp+2275,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_3__DOT__sram_32),128);
            tracep->chgWData(oldp+2279,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_3__DOT__sram_33),128);
            tracep->chgWData(oldp+2283,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_3__DOT__sram_34),128);
            tracep->chgWData(oldp+2287,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_3__DOT__sram_35),128);
            tracep->chgWData(oldp+2291,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_3__DOT__sram_36),128);
            tracep->chgWData(oldp+2295,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_3__DOT__sram_37),128);
            tracep->chgWData(oldp+2299,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_3__DOT__sram_38),128);
            tracep->chgWData(oldp+2303,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_3__DOT__sram_39),128);
            tracep->chgWData(oldp+2307,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_3__DOT__sram_40),128);
            tracep->chgWData(oldp+2311,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_3__DOT__sram_41),128);
            tracep->chgWData(oldp+2315,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_3__DOT__sram_42),128);
            tracep->chgWData(oldp+2319,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_3__DOT__sram_43),128);
            tracep->chgWData(oldp+2323,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_3__DOT__sram_44),128);
            tracep->chgWData(oldp+2327,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_3__DOT__sram_45),128);
            tracep->chgWData(oldp+2331,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_3__DOT__sram_46),128);
            tracep->chgWData(oldp+2335,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_3__DOT__sram_47),128);
            tracep->chgWData(oldp+2339,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_3__DOT__sram_48),128);
            tracep->chgWData(oldp+2343,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_3__DOT__sram_49),128);
            tracep->chgWData(oldp+2347,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_3__DOT__sram_50),128);
            tracep->chgWData(oldp+2351,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_3__DOT__sram_51),128);
            tracep->chgWData(oldp+2355,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_3__DOT__sram_52),128);
            tracep->chgWData(oldp+2359,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_3__DOT__sram_53),128);
            tracep->chgWData(oldp+2363,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_3__DOT__sram_54),128);
            tracep->chgWData(oldp+2367,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_3__DOT__sram_55),128);
            tracep->chgWData(oldp+2371,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_3__DOT__sram_56),128);
            tracep->chgWData(oldp+2375,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_3__DOT__sram_57),128);
            tracep->chgWData(oldp+2379,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_3__DOT__sram_58),128);
            tracep->chgWData(oldp+2383,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_3__DOT__sram_59),128);
            tracep->chgWData(oldp+2387,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_3__DOT__sram_60),128);
            tracep->chgWData(oldp+2391,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_3__DOT__sram_61),128);
            tracep->chgWData(oldp+2395,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_3__DOT__sram_62),128);
            tracep->chgWData(oldp+2399,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_3__DOT__sram_63),128);
            tracep->chgBit(oldp+2403,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__w_locked));
            tracep->chgCData(oldp+2404,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__w_lockId),2);
            tracep->chgCData(oldp+2405,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__w_chosen),2);
            tracep->chgCData(oldp+2406,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__reg_r_cnt),2);
            tracep->chgBit(oldp+2407,((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__reg_r_cnt))));
            tracep->chgCData(oldp+2408,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__r_lockId),2);
            tracep->chgCData(oldp+2409,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__r_chosen),2);
            tracep->chgBit(oldp+2410,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__reg_aw_ok));
            tracep->chgBit(oldp+2411,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__reg_ar_ok));
            tracep->chgBit(oldp+2412,((0ULL == (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0 
                                                >> 0x1fU))));
            tracep->chgBit(oldp+2413,((0ULL == (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu_io_bus_bits_addr 
                                                >> 0x1fU))));
            tracep->chgBit(oldp+2414,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1__DOT__not_clint));
            tracep->chgBit(oldp+2415,((((IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1_io_fetch_cpu_data_valid) 
                                        & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_flush))) 
                                       & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute_io_flush)))));
            tracep->chgIData(oldp+2416,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_cache_buf_bits_inst),32);
            tracep->chgBit(oldp+2417,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_cache_buf_bits_is_pre));
            tracep->chgQData(oldp+2418,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor_io_pre_next_pc),64);
            tracep->chgBit(oldp+2420,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor_io_pre_valid));
            tracep->chgBit(oldp+2421,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_flush));
            tracep->chgQData(oldp+2422,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_next_pc),64);
            tracep->chgCData(oldp+2424,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__pre_info_head),2);
            tracep->chgCData(oldp+2425,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__pre_info_tail),2);
            tracep->chgQData(oldp+2426,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__pre_info_fifo_0),64);
            tracep->chgQData(oldp+2428,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__pre_info_fifo_1),64);
            tracep->chgQData(oldp+2430,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__pre_info_fifo_2),64);
            tracep->chgQData(oldp+2432,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__pre_info_fifo_3),64);
            tracep->chgBit(oldp+2434,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__pre_enq));
            tracep->chgCData(oldp+2435,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__is_pre_head),2);
            tracep->chgCData(oldp+2436,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__is_pre_tail),2);
            tracep->chgBit(oldp+2437,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__is_pre_fifo_0));
            tracep->chgBit(oldp+2438,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__is_pre_fifo_1));
            tracep->chgBit(oldp+2439,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__is_pre_fifo_2));
            tracep->chgBit(oldp+2440,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__is_pre_fifo_3));
            tracep->chgQData(oldp+2441,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_pc_0),64);
            tracep->chgQData(oldp+2443,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_pc_1),64);
            tracep->chgQData(oldp+2445,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_pc_2),64);
            tracep->chgQData(oldp+2447,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_pc_3),64);
            tracep->chgIData(oldp+2449,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_0),32);
            tracep->chgIData(oldp+2450,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_1),32);
            tracep->chgIData(oldp+2451,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_2),32);
            tracep->chgIData(oldp+2452,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_3),32);
            tracep->chgBit(oldp+2453,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_is_pre_0));
            tracep->chgBit(oldp+2454,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_is_pre_1));
            tracep->chgBit(oldp+2455,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_is_pre_2));
            tracep->chgBit(oldp+2456,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_is_pre_3));
            tracep->chgBit(oldp+2457,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_valid_0));
            tracep->chgBit(oldp+2458,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_valid_1));
            tracep->chgBit(oldp+2459,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_valid_2));
            tracep->chgBit(oldp+2460,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_valid_3));
            tracep->chgCData(oldp+2461,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__reg_head),2);
            tracep->chgCData(oldp+2462,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__reg_tail),2);
            tracep->chgCData(oldp+2463,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__reg_ibuf_size),3);
            tracep->chgBit(oldp+2464,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__enq_size));
            tracep->chgBit(oldp+2465,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__can_deq));
            tracep->chgCData(oldp+2466,((7U & (((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__reg_ibuf_size) 
                                                + (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__enq_size)) 
                                               - (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__can_deq)))),3);
            tracep->chgWData(oldp+2467,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_0),128);
            tracep->chgWData(oldp+2471,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_1),128);
            tracep->chgWData(oldp+2475,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_2),128);
            tracep->chgWData(oldp+2479,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_3),128);
            tracep->chgWData(oldp+2483,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_4),128);
            tracep->chgWData(oldp+2487,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_5),128);
            tracep->chgWData(oldp+2491,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_6),128);
            tracep->chgWData(oldp+2495,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_7),128);
            tracep->chgWData(oldp+2499,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_8),128);
            tracep->chgWData(oldp+2503,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_9),128);
            tracep->chgWData(oldp+2507,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_10),128);
            tracep->chgWData(oldp+2511,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_11),128);
            tracep->chgWData(oldp+2515,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_12),128);
            tracep->chgWData(oldp+2519,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_13),128);
            tracep->chgWData(oldp+2523,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_14),128);
            tracep->chgWData(oldp+2527,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_15),128);
            tracep->chgWData(oldp+2531,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_16),128);
            tracep->chgWData(oldp+2535,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_17),128);
            tracep->chgWData(oldp+2539,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_18),128);
            tracep->chgWData(oldp+2543,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_19),128);
            tracep->chgWData(oldp+2547,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_20),128);
            tracep->chgWData(oldp+2551,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_21),128);
            tracep->chgWData(oldp+2555,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_22),128);
            tracep->chgWData(oldp+2559,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_23),128);
            tracep->chgWData(oldp+2563,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_24),128);
            tracep->chgWData(oldp+2567,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_25),128);
            tracep->chgWData(oldp+2571,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_26),128);
            tracep->chgWData(oldp+2575,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_27),128);
            tracep->chgWData(oldp+2579,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_28),128);
            tracep->chgWData(oldp+2583,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_29),128);
            tracep->chgWData(oldp+2587,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_30),128);
            tracep->chgWData(oldp+2591,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_31),128);
            tracep->chgWData(oldp+2595,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_32),128);
            tracep->chgWData(oldp+2599,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_33),128);
            tracep->chgWData(oldp+2603,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_34),128);
            tracep->chgWData(oldp+2607,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_35),128);
            tracep->chgWData(oldp+2611,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_36),128);
            tracep->chgWData(oldp+2615,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_37),128);
            tracep->chgWData(oldp+2619,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_38),128);
            tracep->chgWData(oldp+2623,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_39),128);
            tracep->chgWData(oldp+2627,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_40),128);
            tracep->chgWData(oldp+2631,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_41),128);
            tracep->chgWData(oldp+2635,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_42),128);
            tracep->chgWData(oldp+2639,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_43),128);
            tracep->chgWData(oldp+2643,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_44),128);
            tracep->chgWData(oldp+2647,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_45),128);
            tracep->chgWData(oldp+2651,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_46),128);
            tracep->chgWData(oldp+2655,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_47),128);
            tracep->chgWData(oldp+2659,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_48),128);
            tracep->chgWData(oldp+2663,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_49),128);
            tracep->chgWData(oldp+2667,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_50),128);
            tracep->chgWData(oldp+2671,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_51),128);
            tracep->chgWData(oldp+2675,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_52),128);
            tracep->chgWData(oldp+2679,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_53),128);
            tracep->chgWData(oldp+2683,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_54),128);
            tracep->chgWData(oldp+2687,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_55),128);
            tracep->chgWData(oldp+2691,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_56),128);
            tracep->chgWData(oldp+2695,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_57),128);
            tracep->chgWData(oldp+2699,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_58),128);
            tracep->chgWData(oldp+2703,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_59),128);
            tracep->chgWData(oldp+2707,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_60),128);
            tracep->chgWData(oldp+2711,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_61),128);
            tracep->chgWData(oldp+2715,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_62),128);
            tracep->chgWData(oldp+2719,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_63),128);
            tracep->chgQData(oldp+2723,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__RAS_0),64);
            tracep->chgQData(oldp+2725,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__RAS_1),64);
            tracep->chgQData(oldp+2727,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__RAS_2),64);
            tracep->chgQData(oldp+2729,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__RAS_3),64);
            tracep->chgQData(oldp+2731,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__RAS_4),64);
            tracep->chgQData(oldp+2733,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__RAS_5),64);
            tracep->chgCData(oldp+2735,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_0),2);
            tracep->chgCData(oldp+2736,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_1),2);
            tracep->chgCData(oldp+2737,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_2),2);
            tracep->chgCData(oldp+2738,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_3),2);
            tracep->chgCData(oldp+2739,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_4),2);
            tracep->chgCData(oldp+2740,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_5),2);
            tracep->chgCData(oldp+2741,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_6),2);
            tracep->chgCData(oldp+2742,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_7),2);
            tracep->chgCData(oldp+2743,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_8),2);
            tracep->chgCData(oldp+2744,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_9),2);
            tracep->chgCData(oldp+2745,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_10),2);
            tracep->chgCData(oldp+2746,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_11),2);
            tracep->chgCData(oldp+2747,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_12),2);
            tracep->chgCData(oldp+2748,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_13),2);
            tracep->chgCData(oldp+2749,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_14),2);
            tracep->chgCData(oldp+2750,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_15),2);
            tracep->chgCData(oldp+2751,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_16),2);
            tracep->chgCData(oldp+2752,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_17),2);
            tracep->chgCData(oldp+2753,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_18),2);
            tracep->chgCData(oldp+2754,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_19),2);
            tracep->chgCData(oldp+2755,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_20),2);
            tracep->chgCData(oldp+2756,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_21),2);
            tracep->chgCData(oldp+2757,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_22),2);
            tracep->chgCData(oldp+2758,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_23),2);
            tracep->chgCData(oldp+2759,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_24),2);
            tracep->chgCData(oldp+2760,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_25),2);
            tracep->chgCData(oldp+2761,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_26),2);
            tracep->chgCData(oldp+2762,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_27),2);
            tracep->chgCData(oldp+2763,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_28),2);
            tracep->chgCData(oldp+2764,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_29),2);
            tracep->chgCData(oldp+2765,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_30),2);
            tracep->chgCData(oldp+2766,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_31),2);
            tracep->chgCData(oldp+2767,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_32),2);
            tracep->chgCData(oldp+2768,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_33),2);
            tracep->chgCData(oldp+2769,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_34),2);
            tracep->chgCData(oldp+2770,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_35),2);
            tracep->chgCData(oldp+2771,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_36),2);
            tracep->chgCData(oldp+2772,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_37),2);
            tracep->chgCData(oldp+2773,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_38),2);
            tracep->chgCData(oldp+2774,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_39),2);
            tracep->chgCData(oldp+2775,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_40),2);
            tracep->chgCData(oldp+2776,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_41),2);
            tracep->chgCData(oldp+2777,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_42),2);
            tracep->chgCData(oldp+2778,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_43),2);
            tracep->chgCData(oldp+2779,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_44),2);
            tracep->chgCData(oldp+2780,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_45),2);
            tracep->chgCData(oldp+2781,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_46),2);
            tracep->chgCData(oldp+2782,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_47),2);
            tracep->chgCData(oldp+2783,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_48),2);
            tracep->chgCData(oldp+2784,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_49),2);
            tracep->chgCData(oldp+2785,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_50),2);
            tracep->chgCData(oldp+2786,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_51),2);
            tracep->chgCData(oldp+2787,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_52),2);
            tracep->chgCData(oldp+2788,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_53),2);
            tracep->chgCData(oldp+2789,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_54),2);
            tracep->chgCData(oldp+2790,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_55),2);
            tracep->chgCData(oldp+2791,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_56),2);
            tracep->chgCData(oldp+2792,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_57),2);
            tracep->chgCData(oldp+2793,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_58),2);
            tracep->chgCData(oldp+2794,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_59),2);
            tracep->chgCData(oldp+2795,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_60),2);
            tracep->chgCData(oldp+2796,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_61),2);
            tracep->chgCData(oldp+2797,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_62),2);
            tracep->chgCData(oldp+2798,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_63),2);
            tracep->chgCData(oldp+2799,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__reg_head),3);
            tracep->chgCData(oldp+2800,((0x3fU & (IData)(
                                                         (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                                          >> 3U)))),6);
            tracep->chgWData(oldp+2801,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__update_btb_data),123);
            tracep->chgCData(oldp+2805,((0x3fU & (IData)(
                                                         (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0 
                                                          >> 3U)))),6);
            tracep->chgQData(oldp+2806,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__tag),56);
            tracep->chgBit(oldp+2808,((1U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___GEN_447) 
                                             >> 1U))));
            tracep->chgBit(oldp+2809,((1U & (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___GEN_511[3U] 
                                             >> 0x1aU))));
            tracep->chgQData(oldp+2810,((0xffffffffffffffULL 
                                         & (((QData)((IData)(
                                                             vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___GEN_511[3U])) 
                                             << 0x1eU) 
                                            | ((QData)((IData)(
                                                               vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___GEN_511[2U])) 
                                               >> 2U)))),56);
            tracep->chgQData(oldp+2812,((((QData)((IData)(
                                                          vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___GEN_511[2U])) 
                                          << 0x3eU) 
                                         | (((QData)((IData)(
                                                             vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___GEN_511[1U])) 
                                             << 0x1eU) 
                                            | ((QData)((IData)(
                                                               vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___GEN_511[0U])) 
                                               >> 2U)))),64);
            tracep->chgCData(oldp+2814,((3U & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___GEN_511[0U])),2);
            tracep->chgBit(oldp+2815,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__pre_valid));
            tracep->chgBit(oldp+2816,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu_io_valid));
            tracep->chgBit(oldp+2817,(((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_opType)) 
                                       & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu_io_valid))));
            tracep->chgBit(oldp+2818,(((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__br_valid) 
                                       & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__flush))));
            tracep->chgQData(oldp+2819,(((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__br_valid)
                                          ? vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_pc
                                          : 0ULL)),64);
            tracep->chgBit(oldp+2821,(((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__br_valid) 
                                       & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[2U])));
            tracep->chgQData(oldp+2822,(((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__br_valid)
                                          ? (((QData)((IData)(
                                                              vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[1U])) 
                                              << 0x20U) 
                                             | (QData)((IData)(
                                                               vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[0U])))
                                          : 0ULL)),64);
            tracep->chgQData(oldp+2824,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu_io_op_data1),64);
            tracep->chgQData(oldp+2826,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu_io_op_data2),64);
            tracep->chgQData(oldp+2828,(((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu_io_valid)
                                          ? ((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType))
                                              ? (((QData)((IData)(
                                                                  ((1U 
                                                                    & (IData)(
                                                                              (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__dst_data 
                                                                               >> 0x1fU)))
                                                                    ? 0xffffffffU
                                                                    : 0U))) 
                                                  << 0x20U) 
                                                 | (QData)((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__dst_data)))
                                              : vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__dst_data)
                                          : 0ULL)),64);
            tracep->chgBit(oldp+2830,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu_io_valid_next_pc));
            tracep->chgQData(oldp+2831,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu_io_next_pc),64);
            tracep->chgBit(oldp+2833,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu_io_valid));
            tracep->chgQData(oldp+2834,((((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute_io_wb_valid) 
                                          & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_dest_addr) 
                                             == (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs1_addr)))
                                          ? vlSelf->riscv_soc__DOT__core__DOT__execute_io_wb_dest_data
                                          : vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs1_data)),64);
            tracep->chgQData(oldp+2836,((((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute_io_wb_valid) 
                                          & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_dest_addr) 
                                             == (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs2_addr)))
                                          ? vlSelf->riscv_soc__DOT__core__DOT__execute_io_wb_dest_data
                                          : vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs2_data)),64);
            tracep->chgQData(oldp+2838,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_result_data),64);
            tracep->chgBit(oldp+2840,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_w_rs_en));
            tracep->chgBit(oldp+2841,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_ready));
            tracep->chgBit(oldp+2842,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu_io_valid));
            tracep->chgQData(oldp+2843,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu_io_rs1_data),64);
            tracep->chgQData(oldp+2845,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu_io_rs2_data),64);
            tracep->chgQData(oldp+2847,(((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_dest_is_w)
                                          ? ((8U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_exuType))
                                              ? ((1U 
                                                  & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_exuType))
                                                  ? 
                                                 (((QData)((IData)(
                                                                   ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[0U] 
                                                                     >> 0x1fU)
                                                                     ? 0xffffffffU
                                                                     : 0U))) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(
                                                                    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[0U])))
                                                  : 
                                                 (((QData)((IData)(
                                                                   vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[1U])) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(
                                                                    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[0U]))))
                                              : ((1U 
                                                  & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_exuType))
                                                  ? 
                                                 (((QData)((IData)(
                                                                   ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_q[0U] 
                                                                     >> 0x1fU)
                                                                     ? 0xffffffffU
                                                                     : 0U))) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(
                                                                    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_q[0U])))
                                                  : 
                                                 (((QData)((IData)(
                                                                   vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_q[1U])) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(
                                                                    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_q[0U])))))
                                          : ((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_exuType))
                                              ? (((QData)((IData)(
                                                                  ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_result[0U] 
                                                                    >> 0x1fU)
                                                                    ? 0xffffffffU
                                                                    : 0U))) 
                                                  << 0x20U) 
                                                 | (QData)((IData)(
                                                                   vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_result[0U])))
                                              : ((0U 
                                                  == 
                                                  (3U 
                                                   & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_exuType) 
                                                      >> 2U)))
                                                  ? 
                                                 (((QData)((IData)(
                                                                   vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_result[1U])) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(
                                                                    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_result[0U])))
                                                  : 
                                                 (((QData)((IData)(
                                                                   vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_result[3U])) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(
                                                                    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_result[2U]))))))),64);
            tracep->chgBit(oldp+2849,(((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_dest_is_w) 
                                       | (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_dest_is_w))));
            tracep->chgBit(oldp+2850,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu_io_ready));
            tracep->chgBit(oldp+2851,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu_io_valid));
            tracep->chgQData(oldp+2852,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu_io_csr_data),64);
            tracep->chgBit(oldp+2854,(((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu_io_valid) 
                                       & ((0U != (7U 
                                                  & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                                     >> 2U))) 
                                          | (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu__DOT__is_ret)))));
            tracep->chgQData(oldp+2855,(((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu__DOT__is_ret)
                                          ? ((0xffffffffffffff77ULL 
                                              & vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg_io_r_csr_mstatus) 
                                             | (QData)((IData)(
                                                               ((1U 
                                                                 & (IData)(
                                                                           (vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg_io_r_csr_mstatus 
                                                                            >> 7U)))
                                                                 ? 0x88U
                                                                 : 0x80U))))
                                          : ((7U == 
                                              (7U & 
                                               ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                                >> 2U)))
                                              ? vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu__DOT__and_result
                                              : ((3U 
                                                  == 
                                                  (7U 
                                                   & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                                      >> 2U)))
                                                  ? vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu__DOT__and_result
                                                  : 
                                                 ((5U 
                                                   == 
                                                   (7U 
                                                    & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                                       >> 2U)))
                                                   ? 
                                                  ((0xffffffffffffffe0ULL 
                                                    & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu_io_csr_data) 
                                                   | (QData)((IData)(
                                                                     (0x1fU 
                                                                      & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu__DOT__imm)))))
                                                   : 
                                                  ((1U 
                                                    == 
                                                    (7U 
                                                     & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                                        >> 2U)))
                                                    ? vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu__DOT__op_data
                                                    : 
                                                   ((6U 
                                                     == 
                                                     (7U 
                                                      & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                                         >> 2U)))
                                                     ? vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu__DOT__or_result
                                                     : 
                                                    ((2U 
                                                      == 
                                                      (7U 
                                                       & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                                          >> 2U)))
                                                      ? vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu__DOT__or_result
                                                      : 0ULL)))))))),64);
            tracep->chgSData(oldp+2857,(((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu__DOT__is_ret)
                                          ? 0x300U : (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_csr_addr))),12);
            tracep->chgBit(oldp+2858,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu_io_is_except));
            tracep->chgCData(oldp+2859,(((0U == (0x1fU 
                                                 & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                                    >> 2U)))
                                          ? 0xbU : 
                                         ((8U == (0x1fU 
                                                  & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                                     >> 2U)))
                                           ? 3U : 0U))),6);
            tracep->chgBit(oldp+2860,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu_io_valid_next_pc));
            tracep->chgBit(oldp+2861,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__in_data_valid));
            tracep->chgBit(oldp+2862,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__ready));
            tracep->chgCData(oldp+2863,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_valid),4);
            tracep->chgBit(oldp+2864,((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_valid))));
            tracep->chgBit(oldp+2865,((1U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_valid) 
                                             >> 1U))));
            tracep->chgBit(oldp+2866,((1U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_valid) 
                                             >> 2U))));
            tracep->chgBit(oldp+2867,((1U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_valid) 
                                             >> 3U))));
            tracep->chgCData(oldp+2868,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__valid),4);
            tracep->chgBit(oldp+2869,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_sys_alu_w_valid));
            tracep->chgQData(oldp+2870,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_sys_alu_wdata),64);
            tracep->chgBit(oldp+2872,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_csr_is_w));
            tracep->chgBit(oldp+2873,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_is_except));
            tracep->chgBit(oldp+2874,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_is_time_irq));
            tracep->chgBit(oldp+2875,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_is_soft_irq));
            tracep->chgBit(oldp+2876,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__time_irq));
            tracep->chgBit(oldp+2877,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__soft_irq));
            tracep->chgBit(oldp+2878,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__irq));
            tracep->chgBit(oldp+2879,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_valid_next_pc));
            tracep->chgBit(oldp+2880,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_fence_i));
            tracep->chgBit(oldp+2881,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_commit));
            tracep->chgBit(oldp+2882,((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType))));
            tracep->chgQData(oldp+2883,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__op_data1),64);
            tracep->chgQData(oldp+2885,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__op_data2),64);
            tracep->chgQData(oldp+2887,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__op_imm),64);
            tracep->chgBit(oldp+2889,((1U & (~ ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                                >> 1U)))));
            tracep->chgQData(oldp+2890,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__rs2_data),64);
            tracep->chgBit(oldp+2892,((3U == (3U & 
                                              ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                               >> 5U)))));
            tracep->chgBit(oldp+2893,((1U == (3U & 
                                              ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                               >> 5U)))));
            tracep->chgQData(oldp+2894,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__rs1_data),64);
            tracep->chgQData(oldp+2896,(((1U == (3U 
                                                 & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                                    >> 5U)))
                                          ? (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__rs2_data)
                                          : vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__rs2_data)),64);
            tracep->chgWData(oldp+2898,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__add_sub_result),65);
            tracep->chgBit(oldp+2901,((1U & (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__add_sub_result[2U]))));
            tracep->chgBit(oldp+2902,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__s_rs1_l_rs2));
            tracep->chgCData(oldp+2903,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__shift_rs2_data),6);
            VL_EXTEND_WQ(127,64, __Vtemp3385, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__op_data1);
            VL_SHIFTL_WWI(127,127,6, __Vtemp3386, __Vtemp3385, (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__shift_rs2_data));
            __Vtemp3387[0U] = __Vtemp3386[0U];
            __Vtemp3387[1U] = __Vtemp3386[1U];
            __Vtemp3387[2U] = __Vtemp3386[2U];
            __Vtemp3387[3U] = (0x7fffffffU & __Vtemp3386[3U]);
            tracep->chgWData(oldp+2904,(__Vtemp3387),127);
            tracep->chgQData(oldp+2908,((((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType))
                                           ? (QData)((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__op_data1))
                                           : vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__op_data1) 
                                         >> (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__shift_rs2_data))),64);
            tracep->chgQData(oldp+2910,(VL_SHIFTRS_QQI(64,64,6, 
                                                       ((1U 
                                                         & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType))
                                                         ? vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___op_data1_T_4
                                                         : vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu_io_op_data1), (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__shift_rs2_data))),64);
            tracep->chgQData(oldp+2912,(((1U == (3U 
                                                 & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                                    >> 5U)))
                                          ? VL_SHIFTRS_QQI(64,64,6, 
                                                           ((1U 
                                                             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType))
                                                             ? vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___op_data1_T_4
                                                             : vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu_io_op_data1), (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__shift_rs2_data))
                                          : (((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType))
                                               ? (QData)((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__op_data1))
                                               : vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__op_data1) 
                                             >> (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__shift_rs2_data)))),64);
            tracep->chgCData(oldp+2914,((7U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                               >> 2U))),3);
            tracep->chgQData(oldp+2915,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__result_data),64);
            tracep->chgBit(oldp+2917,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__is_pre));
            tracep->chgBit(oldp+2918,((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_opType))));
            tracep->chgBit(oldp+2919,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__is_eq));
            tracep->chgQData(oldp+2920,(((2U == (7U 
                                                 & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                                    >> 2U)))
                                          ? vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu_io_op_data1
                                          : vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_pc)),64);
            __Vtemp3388[0U] = (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___add_pc_T_1);
            __Vtemp3388[1U] = (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___add_pc_T_1 
                                       >> 0x20U));
            __Vtemp3388[2U] = 1U;
            tracep->chgWData(oldp+2922,(__Vtemp3388),65);
            tracep->chgQData(oldp+2925,((4ULL + vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_pc)),64);
            tracep->chgWData(oldp+2927,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc),65);
            tracep->chgQData(oldp+2930,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__dst_data),64);
            tracep->chgQData(oldp+2932,((((QData)((IData)(
                                                          vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[1U])) 
                                          << 0x20U) 
                                         | (QData)((IData)(
                                                           vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[0U])))),64);
            tracep->chgBit(oldp+2934,((1U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[2U])));
            tracep->chgBit(oldp+2935,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__br_valid));
            tracep->chgBit(oldp+2936,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__flush));
            tracep->chgQData(oldp+2937,((((QData)((IData)(
                                                          ((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_imm 
                                                            >> 0x1fU)
                                                            ? 0xffffffffU
                                                            : 0U))) 
                                          << 0x20U) 
                                         | (QData)((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_imm)))),64);
            tracep->chgQData(oldp+2939,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_bus_addr),64);
            tracep->chgQData(oldp+2941,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_bus_wdata),64);
            tracep->chgCData(oldp+2943,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_bus_wstrb),8);
            tracep->chgBit(oldp+2944,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_bus_is_w));
            tracep->chgBit(oldp+2945,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_bus_valid));
            tracep->chgCData(oldp+2946,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_exuType),7);
            tracep->chgQData(oldp+2947,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__mem_r_data),64);
            tracep->chgQData(oldp+2949,(((0x18U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_exuType))
                                          ? (QData)((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__mem_r_data))
                                          : ((8U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_exuType))
                                              ? (((QData)((IData)(
                                                                  ((1U 
                                                                    & (IData)(
                                                                              (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__mem_r_data 
                                                                               >> 0x1fU)))
                                                                    ? 0xffffffffU
                                                                    : 0U))) 
                                                  << 0x20U) 
                                                 | (QData)((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__mem_r_data)))
                                              : ((0x14U 
                                                  == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_exuType))
                                                  ? (QData)((IData)(
                                                                    (0xffffU 
                                                                     & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__mem_r_data))))
                                                  : 
                                                 ((4U 
                                                   == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_exuType))
                                                   ? 
                                                  ((((1U 
                                                      & (IData)(
                                                                (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__mem_r_data 
                                                                 >> 0xfU)))
                                                      ? 0xffffffffffffULL
                                                      : 0ULL) 
                                                    << 0x10U) 
                                                   | (QData)((IData)(
                                                                     (0xffffU 
                                                                      & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__mem_r_data)))))
                                                   : 
                                                  ((0x10U 
                                                    == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_exuType))
                                                    ? (QData)((IData)(
                                                                      (0xffU 
                                                                       & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__mem_r_data))))
                                                    : 
                                                   ((0U 
                                                     == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_exuType))
                                                     ? 
                                                    ((((1U 
                                                        & (IData)(
                                                                  (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__mem_r_data 
                                                                   >> 7U)))
                                                        ? 0xffffffffffffffULL
                                                        : 0ULL) 
                                                      << 8U) 
                                                     | (QData)((IData)(
                                                                       (0xffU 
                                                                        & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__mem_r_data)))))
                                                     : 
                                                    ((0xcU 
                                                      == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_exuType))
                                                      ? vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__mem_r_data
                                                      : 0ULL)))))))),64);
            tracep->chgQData(oldp+2951,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__mem_addr),64);
            tracep->chgBit(oldp+2953,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__w_mem_en));
            tracep->chgQData(oldp+2954,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__mem_wstrb),64);
            tracep->chgBit(oldp+2956,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_ls_state));
            tracep->chgWData(oldp+2957,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__mem_w_data),127);
            tracep->chgBit(oldp+2961,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__chose_chancel));
            tracep->chgBit(oldp+2962,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div_io_valid));
            tracep->chgQData(oldp+2963,(((8U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_exuType))
                                          ? ((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_exuType))
                                              ? (((QData)((IData)(
                                                                  ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[0U] 
                                                                    >> 0x1fU)
                                                                    ? 0xffffffffU
                                                                    : 0U))) 
                                                  << 0x20U) 
                                                 | (QData)((IData)(
                                                                   vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[0U])))
                                              : (((QData)((IData)(
                                                                  vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[1U])) 
                                                  << 0x20U) 
                                                 | (QData)((IData)(
                                                                   vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[0U]))))
                                          : ((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_exuType))
                                              ? (((QData)((IData)(
                                                                  ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_q[0U] 
                                                                    >> 0x1fU)
                                                                    ? 0xffffffffU
                                                                    : 0U))) 
                                                  << 0x20U) 
                                                 | (QData)((IData)(
                                                                   vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_q[0U])))
                                              : (((QData)((IData)(
                                                                  vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_q[1U])) 
                                                  << 0x20U) 
                                                 | (QData)((IData)(
                                                                   vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_q[0U])))))),64);
            tracep->chgBit(oldp+2965,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_dest_is_w));
            tracep->chgBit(oldp+2966,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_ready));
            tracep->chgBit(oldp+2967,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul_io_valid));
            tracep->chgQData(oldp+2968,(((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_exuType))
                                          ? (((QData)((IData)(
                                                              ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_result[0U] 
                                                                >> 0x1fU)
                                                                ? 0xffffffffU
                                                                : 0U))) 
                                              << 0x20U) 
                                             | (QData)((IData)(
                                                               vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_result[0U])))
                                          : ((0U == 
                                              (3U & 
                                               ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_exuType) 
                                                >> 2U)))
                                              ? (((QData)((IData)(
                                                                  vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_result[1U])) 
                                                  << 0x20U) 
                                                 | (QData)((IData)(
                                                                   vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_result[0U])))
                                              : (((QData)((IData)(
                                                                  vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_result[3U])) 
                                                  << 0x20U) 
                                                 | (QData)((IData)(
                                                                   vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_result[2U])))))),64);
            tracep->chgBit(oldp+2970,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_dest_is_w));
            tracep->chgBit(oldp+2971,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_ready));
            tracep->chgBit(oldp+2972,((1U & (~ ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                                >> 2U)))));
            tracep->chgWData(oldp+2973,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__dividend),65);
            tracep->chgWData(oldp+2976,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__divisor),65);
            tracep->chgWData(oldp+2979,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__rem),65);
            tracep->chgWData(oldp+2982,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor),65);
            tracep->chgWData(oldp+2985,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_dividend),66);
            tracep->chgWData(oldp+2988,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem),65);
            tracep->chgWData(oldp+2991,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_q),66);
            __Vtemp3390[0U] = 1U;
            __Vtemp3390[1U] = 0U;
            __Vtemp3390[2U] = 0U;
            __Vtemp3391[0U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[0U]);
            __Vtemp3391[1U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[1U]);
            __Vtemp3391[2U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[2U]);
            VL_ADD_W(3, __Vtemp3392, __Vtemp3390, __Vtemp3391);
            __Vtemp3393[0U] = __Vtemp3392[0U];
            __Vtemp3393[1U] = __Vtemp3392[1U];
            __Vtemp3393[2U] = (1U & __Vtemp3392[2U]);
            tracep->chgWData(oldp+2994,(__Vtemp3393),65);
            tracep->chgCData(oldp+2997,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state),2);
            tracep->chgCData(oldp+2998,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_cnt),7);
            tracep->chgCData(oldp+2999,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_exuType),7);
            tracep->chgWData(oldp+3000,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__temp_result),132);
            tracep->chgBit(oldp+3005,((0U == ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[0U] 
                                               | vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[1U]) 
                                              | vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[2U]))));
            __Vtemp3396[0U] = 1U;
            __Vtemp3396[1U] = 0U;
            __Vtemp3396[2U] = 0U;
            __Vtemp3397[0U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[0U]);
            __Vtemp3397[1U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[1U]);
            __Vtemp3397[2U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[2U]);
            VL_ADD_W(3, __Vtemp3398, __Vtemp3396, __Vtemp3397);
            tracep->chgBit(oldp+3006,((0U == (((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[0U] 
                                                ^ __Vtemp3398[0U]) 
                                               | (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[1U] 
                                                  ^ 
                                                  __Vtemp3398[1U])) 
                                              | (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[2U] 
                                                 ^ 
                                                 (1U 
                                                  & __Vtemp3398[2U]))))));
            tracep->chgBit(oldp+3007,((0U == (((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[0U] 
                                                ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[0U]) 
                                               | (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[1U] 
                                                  ^ 
                                                  vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[1U])) 
                                              | (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[2U] 
                                                 ^ 
                                                 vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[2U])))));
            tracep->chgBit(oldp+3008,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__is_need_correct));
            tracep->chgBit(oldp+3009,((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_exuType))));
            tracep->chgBit(oldp+3010,((1U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_exuType) 
                                             >> 3U))));
            tracep->chgQData(oldp+3011,(((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_exuType))
                                          ? (((QData)((IData)(
                                                              ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[0U] 
                                                                >> 0x1fU)
                                                                ? 0xffffffffU
                                                                : 0U))) 
                                              << 0x20U) 
                                             | (QData)((IData)(
                                                               vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[0U])))
                                          : (((QData)((IData)(
                                                              vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[1U])) 
                                              << 0x20U) 
                                             | (QData)((IData)(
                                                               vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[0U]))))),64);
            tracep->chgQData(oldp+3013,(((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_exuType))
                                          ? (((QData)((IData)(
                                                              ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_q[0U] 
                                                                >> 0x1fU)
                                                                ? 0xffffffffU
                                                                : 0U))) 
                                              << 0x20U) 
                                             | (QData)((IData)(
                                                               vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_q[0U])))
                                          : (((QData)((IData)(
                                                              vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_q[1U])) 
                                              << 0x20U) 
                                             | (QData)((IData)(
                                                               vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_q[0U]))))),64);
            tracep->chgBit(oldp+3015,((1U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                             >> 2U))));
            tracep->chgBit(oldp+3016,((1U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                             >> 1U))));
            VL_EXTEND_WQ(130,64, __Vtemp3410, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu_io_rs1_data);
            if ((4U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType))) {
                __Vtemp3414[0U] = (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu_io_rs1_data);
                __Vtemp3414[1U] = ((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu_io_rs1_data 
                                                  >> 0x1fU)))
                                    ? 0xffffffffU : 0U);
                __Vtemp3414[2U] = ((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu_io_rs1_data 
                                                  >> 0x1fU)))
                                    ? 0xffffffffU : 0U);
                __Vtemp3414[3U] = ((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu_io_rs1_data 
                                                  >> 0x1fU)))
                                    ? 0xffffffffU : 0U);
                __Vtemp3414[4U] = ((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu_io_rs1_data 
                                                  >> 0x1fU)))
                                    ? 3U : 0U);
            } else {
                __Vtemp3414[0U] = ((2U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType))
                                    ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu_io_rs1_data)
                                    : __Vtemp3410[0U]);
                __Vtemp3414[1U] = ((2U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType))
                                    ? (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu_io_rs1_data 
                                               >> 0x20U))
                                    : __Vtemp3410[1U]);
                __Vtemp3414[2U] = ((2U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType))
                                    ? ((1U & (IData)(
                                                     (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu_io_rs1_data 
                                                      >> 0x3fU)))
                                        ? 0xffffffffU
                                        : 0U) : __Vtemp3410[2U]);
                __Vtemp3414[3U] = ((2U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType))
                                    ? ((1U & (IData)(
                                                     (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu_io_rs1_data 
                                                      >> 0x3fU)))
                                        ? 0xffffffffU
                                        : 0U) : __Vtemp3410[3U]);
                __Vtemp3414[4U] = ((2U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType))
                                    ? ((1U & (IData)(
                                                     (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu_io_rs1_data 
                                                      >> 0x3fU)))
                                        ? 3U : 0U) : 
                                   __Vtemp3410[4U]);
            }
            tracep->chgWData(oldp+3017,(__Vtemp3414),130);
            tracep->chgWData(oldp+3022,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__mul_data2),65);
            __Vtemp3416[0U] = (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__mul_data2[0U] 
                               << 1U);
            __Vtemp3416[1U] = ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__mul_data2[0U] 
                                >> 0x1fU) | (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__mul_data2[1U] 
                                             << 1U));
            __Vtemp3416[2U] = ((4U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__mul_data2[2U] 
                                      << 2U)) | ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__mul_data2[1U] 
                                                  >> 0x1fU) 
                                                 | (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__mul_data2[2U] 
                                                    << 1U)));
            tracep->chgWData(oldp+3025,(__Vtemp3416),67);
            tracep->chgCData(oldp+3028,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_state),2);
            tracep->chgWData(oldp+3029,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2),67);
            tracep->chgWData(oldp+3032,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1),130);
            tracep->chgWData(oldp+3037,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_result),130);
            tracep->chgCData(oldp+3042,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_exuType),7);
            __Vtemp3418[0U] = 1U;
            __Vtemp3418[1U] = 0U;
            __Vtemp3418[2U] = 0U;
            __Vtemp3418[3U] = 0U;
            __Vtemp3418[4U] = 0U;
            __Vtemp3419[0U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[0U]);
            __Vtemp3419[1U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[1U]);
            __Vtemp3419[2U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[2U]);
            __Vtemp3419[3U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[3U]);
            __Vtemp3419[4U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[4U]);
            VL_ADD_W(5, __Vtemp3420, __Vtemp3418, __Vtemp3419);
            __Vtemp3421[0U] = __Vtemp3420[0U];
            __Vtemp3421[1U] = __Vtemp3420[1U];
            __Vtemp3421[2U] = __Vtemp3420[2U];
            __Vtemp3421[3U] = __Vtemp3420[3U];
            __Vtemp3421[4U] = (3U & __Vtemp3420[4U]);
            VL_EXTEND_WW(131,130, __Vtemp3422, __Vtemp3421);
            __Vtemp3424[0U] = 1U;
            __Vtemp3424[1U] = 0U;
            __Vtemp3424[2U] = 0U;
            __Vtemp3424[3U] = 0U;
            __Vtemp3424[4U] = 0U;
            __Vtemp3425[0U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[0U]);
            __Vtemp3425[1U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[1U]);
            __Vtemp3425[2U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[2U]);
            __Vtemp3425[3U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[3U]);
            __Vtemp3425[4U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[4U]);
            VL_ADD_W(5, __Vtemp3426, __Vtemp3424, __Vtemp3425);
            __Vtemp3427[0U] = __Vtemp3426[0U];
            __Vtemp3427[1U] = __Vtemp3426[1U];
            __Vtemp3427[2U] = __Vtemp3426[2U];
            __Vtemp3427[3U] = __Vtemp3426[3U];
            __Vtemp3427[4U] = (3U & __Vtemp3426[4U]);
            VL_EXTEND_WW(131,130, __Vtemp3428, __Vtemp3427);
            __Vtemp3430[0U] = 1U;
            __Vtemp3430[1U] = 0U;
            __Vtemp3430[2U] = 0U;
            __Vtemp3430[3U] = 0U;
            __Vtemp3430[4U] = 0U;
            __Vtemp3431[0U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[0U]);
            __Vtemp3431[1U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[1U]);
            __Vtemp3431[2U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[2U]);
            __Vtemp3431[3U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[3U]);
            __Vtemp3431[4U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[4U]);
            VL_ADD_W(5, __Vtemp3432, __Vtemp3430, __Vtemp3431);
            if ((2U == (7U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[0U]))) {
                __Vtemp3440[0U] = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[0U];
                __Vtemp3440[1U] = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[1U];
                __Vtemp3440[2U] = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[2U];
                __Vtemp3440[3U] = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[3U];
                __Vtemp3440[4U] = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[4U];
            } else {
                __Vtemp3440[0U] = ((1U == (7U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[0U]))
                                    ? vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[0U]
                                    : 0U);
                __Vtemp3440[1U] = ((1U == (7U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[0U]))
                                    ? vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[1U]
                                    : 0U);
                __Vtemp3440[2U] = ((1U == (7U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[0U]))
                                    ? vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[2U]
                                    : 0U);
                __Vtemp3440[3U] = ((1U == (7U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[0U]))
                                    ? vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[3U]
                                    : 0U);
                __Vtemp3440[4U] = ((1U == (7U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[0U]))
                                    ? vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[4U]
                                    : 0U);
            }
            VL_EXTEND_WW(131,130, __Vtemp3441, __Vtemp3440);
            if ((6U == (7U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[0U]))) {
                __Vtemp3449[0U] = __Vtemp3422[0U];
                __Vtemp3449[1U] = __Vtemp3422[1U];
                __Vtemp3449[2U] = __Vtemp3422[2U];
                __Vtemp3449[3U] = __Vtemp3422[3U];
                __Vtemp3449[4U] = __Vtemp3422[4U];
            } else {
                __Vtemp3449[0U] = ((5U == (7U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[0U]))
                                    ? __Vtemp3428[0U]
                                    : ((4U == (7U & 
                                               vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[0U]))
                                        ? (__Vtemp3432[0U] 
                                           << 1U) : 
                                       ((3U == (7U 
                                                & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[0U]))
                                         ? (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[0U] 
                                            << 1U) : 
                                        __Vtemp3441[0U])));
                __Vtemp3449[1U] = ((5U == (7U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[0U]))
                                    ? __Vtemp3428[1U]
                                    : ((4U == (7U & 
                                               vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[0U]))
                                        ? ((__Vtemp3432[0U] 
                                            >> 0x1fU) 
                                           | (__Vtemp3432[1U] 
                                              << 1U))
                                        : ((3U == (7U 
                                                   & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[0U]))
                                            ? ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[0U] 
                                                >> 0x1fU) 
                                               | (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[1U] 
                                                  << 1U))
                                            : __Vtemp3441[1U])));
                __Vtemp3449[2U] = ((5U == (7U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[0U]))
                                    ? __Vtemp3428[2U]
                                    : ((4U == (7U & 
                                               vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[0U]))
                                        ? ((__Vtemp3432[1U] 
                                            >> 0x1fU) 
                                           | (__Vtemp3432[2U] 
                                              << 1U))
                                        : ((3U == (7U 
                                                   & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[0U]))
                                            ? ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[1U] 
                                                >> 0x1fU) 
                                               | (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[2U] 
                                                  << 1U))
                                            : __Vtemp3441[2U])));
                __Vtemp3449[3U] = ((5U == (7U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[0U]))
                                    ? __Vtemp3428[3U]
                                    : ((4U == (7U & 
                                               vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[0U]))
                                        ? ((__Vtemp3432[2U] 
                                            >> 0x1fU) 
                                           | (__Vtemp3432[3U] 
                                              << 1U))
                                        : ((3U == (7U 
                                                   & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[0U]))
                                            ? ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[2U] 
                                                >> 0x1fU) 
                                               | (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[3U] 
                                                  << 1U))
                                            : __Vtemp3441[3U])));
                __Vtemp3449[4U] = ((5U == (7U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[0U]))
                                    ? __Vtemp3428[4U]
                                    : ((4U == (7U & 
                                               vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[0U]))
                                        ? ((__Vtemp3432[3U] 
                                            >> 0x1fU) 
                                           | (6U & 
                                              (__Vtemp3432[4U] 
                                               << 1U)))
                                        : ((3U == (7U 
                                                   & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[0U]))
                                            ? ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[3U] 
                                                >> 0x1fU) 
                                               | (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[4U] 
                                                  << 1U))
                                            : __Vtemp3441[4U])));
            }
            tracep->chgWData(oldp+3043,(__Vtemp3449),131);
            tracep->chgCData(oldp+3048,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_cnt),7);
            tracep->chgBit(oldp+3049,((0U == (3U & 
                                              ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_exuType) 
                                               >> 2U)))));
            tracep->chgBit(oldp+3050,((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_exuType))));
            tracep->chgQData(oldp+3051,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu__DOT__imm),64);
            tracep->chgBit(oldp+3053,((1U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                             >> 4U))));
            tracep->chgQData(oldp+3054,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu__DOT__op_data),64);
            tracep->chgQData(oldp+3056,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu__DOT__or_result),64);
            tracep->chgQData(oldp+3058,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu__DOT__and_result),64);
            tracep->chgQData(oldp+3060,(((7U == (7U 
                                                 & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                                    >> 2U)))
                                          ? vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu__DOT__and_result
                                          : ((3U == 
                                              (7U & 
                                               ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                                >> 2U)))
                                              ? vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu__DOT__and_result
                                              : ((5U 
                                                  == 
                                                  (7U 
                                                   & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                                      >> 2U)))
                                                  ? 
                                                 ((0xffffffffffffffe0ULL 
                                                   & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu_io_csr_data) 
                                                  | (QData)((IData)(
                                                                    (0x1fU 
                                                                     & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu__DOT__imm)))))
                                                  : 
                                                 ((1U 
                                                   == 
                                                   (7U 
                                                    & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                                       >> 2U)))
                                                   ? vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu__DOT__op_data
                                                   : 
                                                  ((6U 
                                                    == 
                                                    (7U 
                                                     & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                                        >> 2U)))
                                                    ? vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu__DOT__or_result
                                                    : 
                                                   ((2U 
                                                     == 
                                                     (7U 
                                                      & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                                         >> 2U)))
                                                     ? vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu__DOT__or_result
                                                     : 0ULL))))))),64);
            tracep->chgBit(oldp+3062,((0x10U == (0x1fU 
                                                 & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                                    >> 2U)))));
            tracep->chgBit(oldp+3063,((0x18U == (0x1fU 
                                                 & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                                    >> 2U)))));
            tracep->chgBit(oldp+3064,((0U == (0x1fU 
                                              & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                                 >> 2U)))));
            tracep->chgBit(oldp+3065,((8U == (0x1fU 
                                              & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                                 >> 2U)))));
            tracep->chgBit(oldp+3066,(((0U == (0x1fU 
                                               & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                                  >> 2U))) 
                                       | (8U == (0x1fU 
                                                 & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                                    >> 2U))))));
            tracep->chgCData(oldp+3067,(((0U == (0x1fU 
                                                 & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                                    >> 2U)))
                                          ? 0xbU : 
                                         ((8U == (0x1fU 
                                                  & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                                     >> 2U)))
                                           ? 3U : 0U))),4);
            tracep->chgBit(oldp+3068,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu__DOT__is_ret));
            tracep->chgQData(oldp+3069,(((0xffffffffffffff77ULL 
                                          & vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg_io_r_csr_mstatus) 
                                         | (QData)((IData)(
                                                           ((1U 
                                                             & (IData)(
                                                                       (vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg_io_r_csr_mstatus 
                                                                        >> 7U)))
                                                             ? 0x88U
                                                             : 0x80U))))),64);
            tracep->chgCData(oldp+3071,((0x1fU & (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst 
                                                  >> 7U))),5);
            tracep->chgCData(oldp+3072,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__instType),4);
            tracep->chgCData(oldp+3073,(((0x33U == 
                                          (0xfe00707fU 
                                           & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst))
                                          ? 1U : ((0x13U 
                                                   == 
                                                   (0x707fU 
                                                    & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst))
                                                   ? 1U
                                                   : 
                                                  ((0x1bU 
                                                    == 
                                                    (0x707fU 
                                                     & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst))
                                                    ? 1U
                                                    : 
                                                   ((0x3bU 
                                                     == 
                                                     (0xfe00707fU 
                                                      & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst))
                                                     ? 1U
                                                     : 
                                                    ((0x7033U 
                                                      == 
                                                      (0xfe00707fU 
                                                       & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst))
                                                      ? 1U
                                                      : 
                                                     ((0x7013U 
                                                       == 
                                                       (0x707fU 
                                                        & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst))
                                                       ? 1U
                                                       : 
                                                      ((0x17U 
                                                        == 
                                                        (0x7fU 
                                                         & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst))
                                                        ? 1U
                                                        : 
                                                       ((0x63U 
                                                         == 
                                                         (0x707fU 
                                                          & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst))
                                                         ? 0U
                                                         : (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT___T_438)))))))))),2);
            tracep->chgCData(oldp+3074,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__rs1_is_reg),2);
            tracep->chgCData(oldp+3075,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__rs2_is_reg),2);
            tracep->chgBit(oldp+3076,((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__rs1_is_reg))));
            tracep->chgBit(oldp+3077,((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__rs2_is_reg))));
            tracep->chgCData(oldp+3078,((0x1fU & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_exception))),5);
            tracep->chgQData(oldp+3079,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_0),64);
            tracep->chgQData(oldp+3081,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_1),64);
            tracep->chgQData(oldp+3083,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_2),64);
            tracep->chgQData(oldp+3085,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_3),64);
            tracep->chgQData(oldp+3087,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_4),64);
            tracep->chgQData(oldp+3089,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_5),64);
            tracep->chgQData(oldp+3091,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_6),64);
            tracep->chgQData(oldp+3093,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_7),64);
            tracep->chgQData(oldp+3095,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_8),64);
            tracep->chgQData(oldp+3097,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_9),64);
            tracep->chgQData(oldp+3099,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_10),64);
            tracep->chgQData(oldp+3101,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_11),64);
            tracep->chgQData(oldp+3103,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_12),64);
            tracep->chgQData(oldp+3105,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_13),64);
            tracep->chgQData(oldp+3107,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_14),64);
            tracep->chgQData(oldp+3109,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_15),64);
            tracep->chgQData(oldp+3111,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_16),64);
            tracep->chgQData(oldp+3113,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_17),64);
            tracep->chgQData(oldp+3115,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_18),64);
            tracep->chgQData(oldp+3117,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_19),64);
            tracep->chgQData(oldp+3119,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_20),64);
            tracep->chgQData(oldp+3121,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_21),64);
            tracep->chgQData(oldp+3123,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_22),64);
            tracep->chgQData(oldp+3125,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_23),64);
            tracep->chgQData(oldp+3127,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_24),64);
            tracep->chgQData(oldp+3129,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_25),64);
            tracep->chgQData(oldp+3131,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_26),64);
            tracep->chgQData(oldp+3133,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_27),64);
            tracep->chgQData(oldp+3135,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_28),64);
            tracep->chgQData(oldp+3137,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_29),64);
            tracep->chgQData(oldp+3139,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_30),64);
            tracep->chgQData(oldp+3141,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_31),64);
            tracep->chgBit(oldp+3143,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__irq));
            tracep->chgQData(oldp+3144,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__reg_mstatus),64);
            tracep->chgQData(oldp+3146,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__reg_mie),64);
            tracep->chgQData(oldp+3148,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__reg_mtvec),64);
            tracep->chgQData(oldp+3150,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__reg_mscratch),64);
            tracep->chgQData(oldp+3152,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__reg_mepc),64);
            tracep->chgQData(oldp+3154,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__reg_mcause),64);
            tracep->chgQData(oldp+3156,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__reg_mtval),64);
            tracep->chgQData(oldp+3158,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__reg_mcycle),64);
            tracep->chgQData(oldp+3160,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__reg_minstret),64);
            tracep->chgQData(oldp+3162,(((0xb02U == 
                                          (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst 
                                           >> 0x14U))
                                          ? vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__reg_minstret
                                          : vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT___csr_rdata_T_33)),64);
            tracep->chgQData(oldp+3164,(vlSelf->riscv_soc__DOT__core__DOT__clint_de__DOT__reg_mtime),64);
            tracep->chgQData(oldp+3166,(vlSelf->riscv_soc__DOT__core__DOT__clint_de__DOT__reg_mtimecmp),64);
            tracep->chgBit(oldp+3168,(vlSelf->riscv_soc__DOT__core__DOT__clint_de__DOT__reg_state));
            tracep->chgBit(oldp+3169,((0U == (0xffffU 
                                              & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu_io_bus_bits_addr)))));
            tracep->chgBit(oldp+3170,((0x4000U == (0xffffU 
                                                   & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu_io_bus_bits_addr)))));
            tracep->chgQData(oldp+3171,(((IData)(vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_r_valid)
                                          ? vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_raddr
                                          : vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_AXI_Bus_ar_bits_araddr)),64);
            tracep->chgQData(oldp+3173,(vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_w_addr),64);
            tracep->chgQData(oldp+3175,((((QData)((IData)(
                                                          ((((0x80U 
                                                              & (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_AXI_Bus_w_bits_wstrb))
                                                              ? 0xffU
                                                              : 0U) 
                                                            << 0x18U) 
                                                           | ((((0x40U 
                                                                 & (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_AXI_Bus_w_bits_wstrb))
                                                                 ? 0xffU
                                                                 : 0U) 
                                                               << 0x10U) 
                                                              | ((((0x20U 
                                                                    & (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_AXI_Bus_w_bits_wstrb))
                                                                    ? 0xffU
                                                                    : 0U) 
                                                                  << 8U) 
                                                                 | ((0x10U 
                                                                     & (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_AXI_Bus_w_bits_wstrb))
                                                                     ? 0xffU
                                                                     : 0U)))))) 
                                          << 0x20U) 
                                         | (QData)((IData)(
                                                           ((((8U 
                                                               & (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_AXI_Bus_w_bits_wstrb))
                                                               ? 0xffU
                                                               : 0U) 
                                                             << 0x18U) 
                                                            | ((((4U 
                                                                  & (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_AXI_Bus_w_bits_wstrb))
                                                                  ? 0xffU
                                                                  : 0U) 
                                                                << 0x10U) 
                                                               | ((((2U 
                                                                     & (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_AXI_Bus_w_bits_wstrb))
                                                                     ? 0xffU
                                                                     : 0U) 
                                                                   << 8U) 
                                                                  | ((1U 
                                                                      & (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_AXI_Bus_w_bits_wstrb))
                                                                      ? 0xffU
                                                                      : 0U)))))))),64);
            tracep->chgBit(oldp+3177,(((IData)(vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_is_w) 
                                       & (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_AXI_Bus_w_valid))));
            tracep->chgQData(oldp+3178,(vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_raddr),64);
            tracep->chgCData(oldp+3180,(vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_rlen),4);
            tracep->chgBit(oldp+3181,(vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_r_state));
            tracep->chgBit(oldp+3182,(vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_is_w));
            tracep->chgIData(oldp+3183,(((((8U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_AXI_Bus_w_bits_wstrb))
                                            ? 0xffU
                                            : 0U) << 0x18U) 
                                         | ((((4U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_AXI_Bus_w_bits_wstrb))
                                               ? 0xffU
                                               : 0U) 
                                             << 0x10U) 
                                            | ((((2U 
                                                  & (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_AXI_Bus_w_bits_wstrb))
                                                  ? 0xffU
                                                  : 0U) 
                                                << 8U) 
                                               | ((1U 
                                                   & (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_AXI_Bus_w_bits_wstrb))
                                                   ? 0xffU
                                                   : 0U))))),32);
            tracep->chgIData(oldp+3184,(((((0x80U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_AXI_Bus_w_bits_wstrb))
                                            ? 0xffU
                                            : 0U) << 0x18U) 
                                         | ((((0x40U 
                                               & (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_AXI_Bus_w_bits_wstrb))
                                               ? 0xffU
                                               : 0U) 
                                             << 0x10U) 
                                            | ((((0x20U 
                                                  & (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_AXI_Bus_w_bits_wstrb))
                                                  ? 0xffU
                                                  : 0U) 
                                                << 8U) 
                                               | ((0x10U 
                                                   & (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_AXI_Bus_w_bits_wstrb))
                                                   ? 0xffU
                                                   : 0U))))),32);
        }
        tracep->chgBit(oldp+3185,(vlSelf->clock));
        tracep->chgBit(oldp+3186,(vlSelf->reset));
    }
}

void Vriscv_soc___024root__traceCleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    Vriscv_soc___024root* const __restrict vlSelf = static_cast<Vriscv_soc___024root*>(voidSelf);
    Vriscv_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        vlSymsp->__Vm_activity = false;
        vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
        vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    }
}
