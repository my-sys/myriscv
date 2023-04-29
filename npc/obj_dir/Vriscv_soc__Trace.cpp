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
            tracep->chgBit(oldp+20,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__difftest_irq));
            tracep->chgBit(oldp+21,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__difftest_peripheral));
            tracep->chgBit(oldp+22,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__difftest_commit));
            tracep->chgQData(oldp+23,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__difftest_pc),64);
            tracep->chgIData(oldp+25,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__difftest_inst),32);
            tracep->chgQData(oldp+26,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_0),64);
            tracep->chgQData(oldp+28,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_1),64);
            tracep->chgQData(oldp+30,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_2),64);
            tracep->chgQData(oldp+32,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_3),64);
            tracep->chgQData(oldp+34,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_4),64);
            tracep->chgQData(oldp+36,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_5),64);
            tracep->chgQData(oldp+38,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_6),64);
            tracep->chgQData(oldp+40,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_7),64);
            tracep->chgQData(oldp+42,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_8),64);
            tracep->chgQData(oldp+44,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_9),64);
            tracep->chgQData(oldp+46,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_10),64);
            tracep->chgQData(oldp+48,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_11),64);
            tracep->chgQData(oldp+50,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_12),64);
            tracep->chgQData(oldp+52,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_13),64);
            tracep->chgQData(oldp+54,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_14),64);
            tracep->chgQData(oldp+56,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_15),64);
            tracep->chgQData(oldp+58,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_16),64);
            tracep->chgQData(oldp+60,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_17),64);
            tracep->chgQData(oldp+62,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_18),64);
            tracep->chgQData(oldp+64,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_19),64);
            tracep->chgQData(oldp+66,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_20),64);
            tracep->chgQData(oldp+68,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_21),64);
            tracep->chgQData(oldp+70,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_22),64);
            tracep->chgQData(oldp+72,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_23),64);
            tracep->chgQData(oldp+74,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_24),64);
            tracep->chgQData(oldp+76,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_25),64);
            tracep->chgQData(oldp+78,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_26),64);
            tracep->chgQData(oldp+80,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_27),64);
            tracep->chgQData(oldp+82,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_28),64);
            tracep->chgQData(oldp+84,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_29),64);
            tracep->chgQData(oldp+86,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_30),64);
            tracep->chgQData(oldp+88,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_31),64);
            tracep->chgQData(oldp+90,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__inst_counter),64);
            tracep->chgQData(oldp+92,((QData)((IData)(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__difftest_inst))),64);
            tracep->chgBit(oldp+94,(vlSelf->riscv_soc__DOT__core__DOT__fetch_io_out_flush));
            tracep->chgBit(oldp+95,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1_io_cpu_addr_ready));
            tracep->chgBit(oldp+96,(((0ULL != (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0 
                                               >> 0x1fU)) 
                                     & (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_bus_valid))));
            tracep->chgQData(oldp+97,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0),64);
            tracep->chgBit(oldp+99,((3U > (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__reg_ibuf_size))));
            tracep->chgBit(oldp+100,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_valid));
            tracep->chgQData(oldp+101,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_rdata),64);
            tracep->chgQData(oldp+103,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr),64);
            tracep->chgBit(oldp+105,(vlSelf->riscv_soc__DOT__core__DOT__execute_io_fence_i));
            tracep->chgBit(oldp+106,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_r_valid));
            tracep->chgQData(oldp+107,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_r_raddr),64);
            tracep->chgBit(oldp+109,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_ICache_bus_r_bits_rlast));
            tracep->chgBit(oldp+110,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_ICache_bus_r_ready));
            tracep->chgBit(oldp+111,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1_io_DCache_valid));
            tracep->chgQData(oldp+112,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu_io_bus_bits_addr),64);
            tracep->chgQData(oldp+114,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_rdata),64);
            tracep->chgQData(oldp+116,((((QData)((IData)(
                                                         vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT___io_bus_bits_wdata_T[1U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT___io_bus_bits_wdata_T[0U])))),64);
            tracep->chgCData(oldp+118,((0xffU & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT___io_bus_bits_wstrb_T))),8);
            tracep->chgBit(oldp+119,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu_io_bus_bits_is_w));
            tracep->chgBit(oldp+120,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_ready));
            tracep->chgBit(oldp+121,(((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__w_chosen)) 
                                      & (IData)(vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_w_ready))));
            tracep->chgBit(oldp+122,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_w_valid));
            tracep->chgQData(oldp+123,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_w_waddr),64);
            tracep->chgQData(oldp+125,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_w_wdata),64);
            tracep->chgBit(oldp+127,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_w_wlast));
            tracep->chgBit(oldp+128,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_b_ready));
            tracep->chgBit(oldp+129,(((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__w_chosen)) 
                                      & (IData)(vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_b_valid))));
            tracep->chgBit(oldp+130,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_r_valid));
            tracep->chgQData(oldp+131,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_r_raddr),64);
            tracep->chgBit(oldp+133,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_DCache_bus_r_bits_rlast));
            tracep->chgBit(oldp+134,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_DCache_bus_r_ready));
            tracep->chgBit(oldp+135,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1_io_bus1_valid));
            tracep->chgBit(oldp+136,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_bus1_ready));
            tracep->chgBit(oldp+137,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1_io_bus2_valid));
            tracep->chgBit(oldp+138,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_bus2_ready));
            tracep->chgBit(oldp+139,(((0ULL != (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0 
                                                >> 0x1fU))
                                       ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1_io_cpu_addr_ready)
                                       : (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_bus1_ready))));
            tracep->chgBit(oldp+140,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_bus_valid));
            tracep->chgBit(oldp+141,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1_io_fetch_cpu_data_valid));
            tracep->chgQData(oldp+142,(((0ULL != (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0 
                                                  >> 0x1fU))
                                         ? vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_rdata
                                         : vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata)),64);
            tracep->chgQData(oldp+144,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1_io_fetch_cpu_data_bits_pc),64);
            tracep->chgBit(oldp+146,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu_io_bus_valid));
            tracep->chgQData(oldp+147,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1_io_wb_bits_rdata),64);
            tracep->chgBit(oldp+149,(((0ULL != (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu_io_bus_bits_addr 
                                                >> 0x1fU))
                                       ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_ready)
                                       : ((IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1__DOT__not_clint)
                                           ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_bus2_ready)
                                           : (IData)(vlSelf->riscv_soc__DOT__core__DOT__clint_de__DOT__reg_ready)))));
            tracep->chgBit(oldp+150,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1_io_clint_bus_valid));
            tracep->chgQData(oldp+151,(vlSelf->riscv_soc__DOT__core__DOT__clint_de__DOT__red_rdata),64);
            tracep->chgBit(oldp+153,(vlSelf->riscv_soc__DOT__core__DOT__clint_de__DOT__reg_ready));
            tracep->chgBit(oldp+154,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_valid));
            tracep->chgBit(oldp+155,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_mispredict));
            tracep->chgQData(oldp+156,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc),64);
            tracep->chgBit(oldp+158,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_taken));
            tracep->chgQData(oldp+159,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_next_pc),64);
            tracep->chgBit(oldp+161,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__is_pre));
            tracep->chgQData(oldp+162,(((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__is_pre)
                                         ? ((3U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__pre_info_tail))
                                             ? vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__pre_info_fifo_3
                                             : ((2U 
                                                 == (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__pre_info_tail))
                                                 ? vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__pre_info_fifo_2
                                                 : 
                                                ((1U 
                                                  == (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__pre_info_tail))
                                                  ? vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__pre_info_fifo_1
                                                  : vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__pre_info_fifo_0)))
                                         : 0ULL)),64);
            tracep->chgQData(oldp+164,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_next_pc),64);
            tracep->chgBit(oldp+166,(vlSelf->riscv_soc__DOT__core__DOT__execute_io_flush));
            tracep->chgBit(oldp+167,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__ready));
            tracep->chgBit(oldp+168,(((3U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__reg_tail))
                                       ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_valid_3)
                                       : (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT___GEN_2))));
            tracep->chgIData(oldp+169,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst),32);
            tracep->chgQData(oldp+170,(((3U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__reg_tail))
                                         ? vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_pc_3
                                         : ((2U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__reg_tail))
                                             ? vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_pc_2
                                             : ((1U 
                                                 == (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__reg_tail))
                                                 ? vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_pc_1
                                                 : vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_pc_0)))),64);
            tracep->chgBit(oldp+172,(((3U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__reg_tail))
                                       ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_is_pre_3)
                                       : ((2U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__reg_tail))
                                           ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_is_pre_2)
                                           : ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__reg_tail))
                                               ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_is_pre_1)
                                               : (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_is_pre_0))))));
            tracep->chgBit(oldp+173,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_valid));
            tracep->chgCData(oldp+174,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_opType),3);
            tracep->chgCData(oldp+175,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType),7);
            tracep->chgCData(oldp+176,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs1_addr),5);
            tracep->chgQData(oldp+177,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs1_data),64);
            tracep->chgCData(oldp+179,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs2_addr),5);
            tracep->chgQData(oldp+180,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs2_data),64);
            tracep->chgIData(oldp+182,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_imm),32);
            tracep->chgQData(oldp+183,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_pc),64);
            tracep->chgIData(oldp+185,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_inst),32);
            tracep->chgCData(oldp+186,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_dest_addr),5);
            tracep->chgBit(oldp+187,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_dest_is_reg));
            tracep->chgBit(oldp+188,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_is_pre));
            tracep->chgSData(oldp+189,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_csr_addr),12);
            tracep->chgQData(oldp+190,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_csr_data),64);
            tracep->chgBit(oldp+192,((vlSelf->riscv_soc__DOT__core__DOT__clint_de__DOT__reg_mtimecmp 
                                      <= vlSelf->riscv_soc__DOT__core__DOT__clint_de__DOT__reg_mtime)));
            tracep->chgBit(oldp+193,(vlSelf->riscv_soc__DOT__core__DOT__clint_de__DOT__reg_msip));
            tracep->chgQData(oldp+194,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg_io_r_csr_mstatus),64);
            tracep->chgQData(oldp+196,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg_io_r_csr_mie),64);
            tracep->chgQData(oldp+198,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg_io_r_csr_mepc),64);
            tracep->chgQData(oldp+200,((((0x305U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_csr_addr)) 
                                         & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute_io_csr_valid))
                                         ? vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_csr_data
                                         : vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__reg_mtvec)),64);
            tracep->chgBit(oldp+202,(vlSelf->riscv_soc__DOT__core__DOT__execute_io_wb_valid));
            tracep->chgCData(oldp+203,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_dest_addr),5);
            tracep->chgQData(oldp+204,(vlSelf->riscv_soc__DOT__core__DOT__execute_io_wb_dest_data),64);
            tracep->chgBit(oldp+206,(vlSelf->riscv_soc__DOT__core__DOT__execute_io_csr_valid));
            tracep->chgSData(oldp+207,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_csr_addr),12);
            tracep->chgQData(oldp+208,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_csr_data),64);
            tracep->chgBit(oldp+210,(vlSelf->riscv_soc__DOT__core__DOT__execute_io_csr_except_is_except));
            tracep->chgBit(oldp+211,(vlSelf->riscv_soc__DOT__core__DOT__execute_io_csr_except_is_time_irq));
            tracep->chgBit(oldp+212,(vlSelf->riscv_soc__DOT__core__DOT__execute_io_csr_except_is_soft_irq));
            tracep->chgCData(oldp+213,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_exception),6);
            tracep->chgQData(oldp+214,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_except_next_pc),64);
            tracep->chgQData(oldp+216,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_except_pc),64);
            tracep->chgBit(oldp+218,(vlSelf->riscv_soc__DOT__core__DOT__execute_io_commit));
            tracep->chgIData(oldp+219,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_difftest_inst),32);
            tracep->chgBit(oldp+220,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_difftest_peripheral));
            tracep->chgCData(oldp+221,((0x1fU & (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst 
                                                 >> 0xfU))),5);
            tracep->chgQData(oldp+222,(((((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_dest_addr) 
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
            tracep->chgCData(oldp+224,((0x1fU & (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst 
                                                 >> 0x14U))),5);
            tracep->chgQData(oldp+225,(((((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_dest_addr) 
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
            tracep->chgSData(oldp+227,((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst 
                                        >> 0x14U)),12);
            tracep->chgQData(oldp+228,(((((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst 
                                           >> 0x14U) 
                                          == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_csr_addr)) 
                                         & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute_io_csr_valid))
                                         ? vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_csr_data
                                         : ((0xb02U 
                                             == (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst 
                                                 >> 0x14U))
                                             ? vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__reg_minstret
                                             : vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT___csr_rdata_T_33))),64);
            tracep->chgBit(oldp+230,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage0__DOT__reg_valid));
            tracep->chgQData(oldp+231,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage0__DOT__reg_addr),64);
            tracep->chgCData(oldp+233,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1_io_tag_valid_index),6);
            tracep->chgBit(oldp+234,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1_io_tag_valid_tag_valid_0));
            tracep->chgBit(oldp+235,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1_io_tag_valid_tag_valid_1));
            tracep->chgBit(oldp+236,(((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage0__DOT__reg_valid) 
                                      & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch_io_out_flush)))));
            tracep->chgWData(oldp+237,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1_io_sram_sram_data_0),128);
            tracep->chgWData(oldp+241,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1_io_sram_sram_data_1),128);
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
            tracep->chgWData(oldp+245,(__Vtemp3371),128);
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
            tracep->chgWData(oldp+249,(__Vtemp3374),128);
            tracep->chgBit(oldp+253,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_sram_r_ready));
            tracep->chgBit(oldp+254,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2_io_cache_stage1_ready));
            tracep->chgBit(oldp+255,(((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1__DOT__reg_valid) 
                                      & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_sram_r_ready))));
            tracep->chgQData(oldp+256,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1__DOT__reg_cpu_addr),64);
            tracep->chgBit(oldp+258,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1_io_cache_stage1_bits_sram_0_hit));
            tracep->chgQData(oldp+259,(((1U & (IData)(
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
            tracep->chgBit(oldp+261,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1_io_cache_stage1_bits_sram_1_hit));
            tracep->chgQData(oldp+262,(((1U & (IData)(
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
            tracep->chgBit(oldp+264,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_write));
            tracep->chgCData(oldp+265,((0x3fU & (IData)(
                                                        (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                                         >> 4U)))),6);
            tracep->chgWData(oldp+266,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata),128);
            VL_EXTEND_WQ(128,54, __Vtemp3375, (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                               >> 0xaU));
            tracep->chgWData(oldp+270,(__Vtemp3375),128);
            tracep->chgBit(oldp+274,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_chosen_tag));
            tracep->chgCData(oldp+275,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_io_addr),6);
            tracep->chgBit(oldp+276,((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram0_write)))));
            tracep->chgWData(oldp+277,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM__DOT__Q),128);
            tracep->chgCData(oldp+281,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_1_io_addr),6);
            tracep->chgWData(oldp+282,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_1__DOT__Q),128);
            tracep->chgCData(oldp+286,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_2_io_addr),6);
            tracep->chgBit(oldp+287,((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram1_write)))));
            tracep->chgWData(oldp+288,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_2__DOT__Q),128);
            tracep->chgCData(oldp+292,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_3_io_addr),6);
            tracep->chgWData(oldp+293,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_3__DOT__Q),128);
            tracep->chgQData(oldp+297,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_sram0_valid),64);
            tracep->chgQData(oldp+299,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_sram1_valid),64);
            tracep->chgBit(oldp+301,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_w_sram));
            tracep->chgBit(oldp+302,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram0_write));
            tracep->chgBit(oldp+303,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram1_write));
            tracep->chgQData(oldp+304,((1ULL << (0x3fU 
                                                 & (IData)(
                                                           (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                                            >> 4U))))),64);
            tracep->chgBit(oldp+306,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_temp_sram0_valid));
            tracep->chgBit(oldp+307,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_temp_sram1_valid));
            tracep->chgCData(oldp+308,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_temp_r_index),6);
            tracep->chgBit(oldp+309,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__w_r_pass0_val));
            tracep->chgBit(oldp+310,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__w_r_pass1_val));
            tracep->chgBit(oldp+311,((((0ULL != (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0 
                                                 >> 0x1fU)) 
                                       & (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_bus_valid)) 
                                      & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch_io_out_flush)))));
            tracep->chgBit(oldp+312,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1__DOT__ready));
            tracep->chgBit(oldp+313,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1__DOT__reg_valid));
            tracep->chgQData(oldp+314,((vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1__DOT__reg_cpu_addr 
                                        >> 0xaU)),54);
            tracep->chgCData(oldp+316,((0x3fU & (IData)(
                                                        (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1__DOT__reg_cpu_addr 
                                                         >> 4U)))),6);
            tracep->chgCData(oldp+317,((0xfU & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1__DOT__reg_cpu_addr))),4);
            VL_EXTEND_WQ(128,54, __Vtemp3376, (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                               >> 0xaU));
            VL_EXTEND_WQ(128,54, __Vtemp3377, (0x3fffffffffffffULL 
                                               & (((QData)((IData)(
                                                                   vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_1__DOT__Q[1U])) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(
                                                                    vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_1__DOT__Q[0U])))));
            tracep->chgQData(oldp+318,((0x3fffffffffffffULL 
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
            tracep->chgQData(oldp+320,((0x3fffffffffffffULL 
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
            tracep->chgBit(oldp+322,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__valid));
            tracep->chgBit(oldp+323,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_ready));
            tracep->chgQData(oldp+324,((0xfffffffffffffff0ULL 
                                        & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1__DOT__reg_cpu_addr)),64);
            tracep->chgQData(oldp+326,((vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                        >> 0xaU)),54);
            tracep->chgCData(oldp+328,((0xfU & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr))),4);
            tracep->chgQData(oldp+329,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_lru_1),64);
            tracep->chgBit(oldp+331,((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT___LRU_1_T))));
            tracep->chgQData(oldp+332,((1ULL << (0x3fU 
                                                 & (IData)(
                                                           (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1__DOT__reg_cpu_addr 
                                                            >> 4U))))),64);
            tracep->chgQData(oldp+334,((~ (1ULL << 
                                           (0x3fU & (IData)(
                                                            (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1__DOT__reg_cpu_addr 
                                                             >> 4U)))))),64);
            tracep->chgCData(oldp+336,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_bus_state),2);
            tracep->chgWData(oldp+337,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM__DOT__sram_0),128);
            tracep->chgWData(oldp+341,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM__DOT__sram_1),128);
            tracep->chgWData(oldp+345,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM__DOT__sram_2),128);
            tracep->chgWData(oldp+349,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM__DOT__sram_3),128);
            tracep->chgWData(oldp+353,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM__DOT__sram_4),128);
            tracep->chgWData(oldp+357,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM__DOT__sram_5),128);
            tracep->chgWData(oldp+361,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM__DOT__sram_6),128);
            tracep->chgWData(oldp+365,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM__DOT__sram_7),128);
            tracep->chgWData(oldp+369,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM__DOT__sram_8),128);
            tracep->chgWData(oldp+373,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM__DOT__sram_9),128);
            tracep->chgWData(oldp+377,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM__DOT__sram_10),128);
            tracep->chgWData(oldp+381,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM__DOT__sram_11),128);
            tracep->chgWData(oldp+385,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM__DOT__sram_12),128);
            tracep->chgWData(oldp+389,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM__DOT__sram_13),128);
            tracep->chgWData(oldp+393,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM__DOT__sram_14),128);
            tracep->chgWData(oldp+397,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM__DOT__sram_15),128);
            tracep->chgWData(oldp+401,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM__DOT__sram_16),128);
            tracep->chgWData(oldp+405,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM__DOT__sram_17),128);
            tracep->chgWData(oldp+409,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM__DOT__sram_18),128);
            tracep->chgWData(oldp+413,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM__DOT__sram_19),128);
            tracep->chgWData(oldp+417,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM__DOT__sram_20),128);
            tracep->chgWData(oldp+421,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM__DOT__sram_21),128);
            tracep->chgWData(oldp+425,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM__DOT__sram_22),128);
            tracep->chgWData(oldp+429,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM__DOT__sram_23),128);
            tracep->chgWData(oldp+433,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM__DOT__sram_24),128);
            tracep->chgWData(oldp+437,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM__DOT__sram_25),128);
            tracep->chgWData(oldp+441,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM__DOT__sram_26),128);
            tracep->chgWData(oldp+445,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM__DOT__sram_27),128);
            tracep->chgWData(oldp+449,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM__DOT__sram_28),128);
            tracep->chgWData(oldp+453,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM__DOT__sram_29),128);
            tracep->chgWData(oldp+457,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM__DOT__sram_30),128);
            tracep->chgWData(oldp+461,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM__DOT__sram_31),128);
            tracep->chgWData(oldp+465,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM__DOT__sram_32),128);
            tracep->chgWData(oldp+469,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM__DOT__sram_33),128);
            tracep->chgWData(oldp+473,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM__DOT__sram_34),128);
            tracep->chgWData(oldp+477,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM__DOT__sram_35),128);
            tracep->chgWData(oldp+481,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM__DOT__sram_36),128);
            tracep->chgWData(oldp+485,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM__DOT__sram_37),128);
            tracep->chgWData(oldp+489,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM__DOT__sram_38),128);
            tracep->chgWData(oldp+493,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM__DOT__sram_39),128);
            tracep->chgWData(oldp+497,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM__DOT__sram_40),128);
            tracep->chgWData(oldp+501,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM__DOT__sram_41),128);
            tracep->chgWData(oldp+505,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM__DOT__sram_42),128);
            tracep->chgWData(oldp+509,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM__DOT__sram_43),128);
            tracep->chgWData(oldp+513,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM__DOT__sram_44),128);
            tracep->chgWData(oldp+517,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM__DOT__sram_45),128);
            tracep->chgWData(oldp+521,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM__DOT__sram_46),128);
            tracep->chgWData(oldp+525,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM__DOT__sram_47),128);
            tracep->chgWData(oldp+529,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM__DOT__sram_48),128);
            tracep->chgWData(oldp+533,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM__DOT__sram_49),128);
            tracep->chgWData(oldp+537,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM__DOT__sram_50),128);
            tracep->chgWData(oldp+541,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM__DOT__sram_51),128);
            tracep->chgWData(oldp+545,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM__DOT__sram_52),128);
            tracep->chgWData(oldp+549,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM__DOT__sram_53),128);
            tracep->chgWData(oldp+553,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM__DOT__sram_54),128);
            tracep->chgWData(oldp+557,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM__DOT__sram_55),128);
            tracep->chgWData(oldp+561,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM__DOT__sram_56),128);
            tracep->chgWData(oldp+565,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM__DOT__sram_57),128);
            tracep->chgWData(oldp+569,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM__DOT__sram_58),128);
            tracep->chgWData(oldp+573,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM__DOT__sram_59),128);
            tracep->chgWData(oldp+577,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM__DOT__sram_60),128);
            tracep->chgWData(oldp+581,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM__DOT__sram_61),128);
            tracep->chgWData(oldp+585,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM__DOT__sram_62),128);
            tracep->chgWData(oldp+589,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM__DOT__sram_63),128);
            tracep->chgWData(oldp+593,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_1__DOT__sram_0),128);
            tracep->chgWData(oldp+597,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_1__DOT__sram_1),128);
            tracep->chgWData(oldp+601,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_1__DOT__sram_2),128);
            tracep->chgWData(oldp+605,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_1__DOT__sram_3),128);
            tracep->chgWData(oldp+609,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_1__DOT__sram_4),128);
            tracep->chgWData(oldp+613,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_1__DOT__sram_5),128);
            tracep->chgWData(oldp+617,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_1__DOT__sram_6),128);
            tracep->chgWData(oldp+621,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_1__DOT__sram_7),128);
            tracep->chgWData(oldp+625,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_1__DOT__sram_8),128);
            tracep->chgWData(oldp+629,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_1__DOT__sram_9),128);
            tracep->chgWData(oldp+633,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_1__DOT__sram_10),128);
            tracep->chgWData(oldp+637,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_1__DOT__sram_11),128);
            tracep->chgWData(oldp+641,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_1__DOT__sram_12),128);
            tracep->chgWData(oldp+645,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_1__DOT__sram_13),128);
            tracep->chgWData(oldp+649,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_1__DOT__sram_14),128);
            tracep->chgWData(oldp+653,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_1__DOT__sram_15),128);
            tracep->chgWData(oldp+657,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_1__DOT__sram_16),128);
            tracep->chgWData(oldp+661,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_1__DOT__sram_17),128);
            tracep->chgWData(oldp+665,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_1__DOT__sram_18),128);
            tracep->chgWData(oldp+669,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_1__DOT__sram_19),128);
            tracep->chgWData(oldp+673,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_1__DOT__sram_20),128);
            tracep->chgWData(oldp+677,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_1__DOT__sram_21),128);
            tracep->chgWData(oldp+681,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_1__DOT__sram_22),128);
            tracep->chgWData(oldp+685,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_1__DOT__sram_23),128);
            tracep->chgWData(oldp+689,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_1__DOT__sram_24),128);
            tracep->chgWData(oldp+693,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_1__DOT__sram_25),128);
            tracep->chgWData(oldp+697,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_1__DOT__sram_26),128);
            tracep->chgWData(oldp+701,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_1__DOT__sram_27),128);
            tracep->chgWData(oldp+705,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_1__DOT__sram_28),128);
            tracep->chgWData(oldp+709,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_1__DOT__sram_29),128);
            tracep->chgWData(oldp+713,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_1__DOT__sram_30),128);
            tracep->chgWData(oldp+717,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_1__DOT__sram_31),128);
            tracep->chgWData(oldp+721,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_1__DOT__sram_32),128);
            tracep->chgWData(oldp+725,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_1__DOT__sram_33),128);
            tracep->chgWData(oldp+729,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_1__DOT__sram_34),128);
            tracep->chgWData(oldp+733,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_1__DOT__sram_35),128);
            tracep->chgWData(oldp+737,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_1__DOT__sram_36),128);
            tracep->chgWData(oldp+741,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_1__DOT__sram_37),128);
            tracep->chgWData(oldp+745,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_1__DOT__sram_38),128);
            tracep->chgWData(oldp+749,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_1__DOT__sram_39),128);
            tracep->chgWData(oldp+753,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_1__DOT__sram_40),128);
            tracep->chgWData(oldp+757,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_1__DOT__sram_41),128);
            tracep->chgWData(oldp+761,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_1__DOT__sram_42),128);
            tracep->chgWData(oldp+765,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_1__DOT__sram_43),128);
            tracep->chgWData(oldp+769,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_1__DOT__sram_44),128);
            tracep->chgWData(oldp+773,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_1__DOT__sram_45),128);
            tracep->chgWData(oldp+777,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_1__DOT__sram_46),128);
            tracep->chgWData(oldp+781,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_1__DOT__sram_47),128);
            tracep->chgWData(oldp+785,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_1__DOT__sram_48),128);
            tracep->chgWData(oldp+789,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_1__DOT__sram_49),128);
            tracep->chgWData(oldp+793,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_1__DOT__sram_50),128);
            tracep->chgWData(oldp+797,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_1__DOT__sram_51),128);
            tracep->chgWData(oldp+801,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_1__DOT__sram_52),128);
            tracep->chgWData(oldp+805,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_1__DOT__sram_53),128);
            tracep->chgWData(oldp+809,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_1__DOT__sram_54),128);
            tracep->chgWData(oldp+813,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_1__DOT__sram_55),128);
            tracep->chgWData(oldp+817,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_1__DOT__sram_56),128);
            tracep->chgWData(oldp+821,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_1__DOT__sram_57),128);
            tracep->chgWData(oldp+825,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_1__DOT__sram_58),128);
            tracep->chgWData(oldp+829,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_1__DOT__sram_59),128);
            tracep->chgWData(oldp+833,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_1__DOT__sram_60),128);
            tracep->chgWData(oldp+837,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_1__DOT__sram_61),128);
            tracep->chgWData(oldp+841,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_1__DOT__sram_62),128);
            tracep->chgWData(oldp+845,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_1__DOT__sram_63),128);
            tracep->chgWData(oldp+849,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_2__DOT__sram_0),128);
            tracep->chgWData(oldp+853,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_2__DOT__sram_1),128);
            tracep->chgWData(oldp+857,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_2__DOT__sram_2),128);
            tracep->chgWData(oldp+861,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_2__DOT__sram_3),128);
            tracep->chgWData(oldp+865,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_2__DOT__sram_4),128);
            tracep->chgWData(oldp+869,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_2__DOT__sram_5),128);
            tracep->chgWData(oldp+873,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_2__DOT__sram_6),128);
            tracep->chgWData(oldp+877,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_2__DOT__sram_7),128);
            tracep->chgWData(oldp+881,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_2__DOT__sram_8),128);
            tracep->chgWData(oldp+885,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_2__DOT__sram_9),128);
            tracep->chgWData(oldp+889,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_2__DOT__sram_10),128);
            tracep->chgWData(oldp+893,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_2__DOT__sram_11),128);
            tracep->chgWData(oldp+897,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_2__DOT__sram_12),128);
            tracep->chgWData(oldp+901,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_2__DOT__sram_13),128);
            tracep->chgWData(oldp+905,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_2__DOT__sram_14),128);
            tracep->chgWData(oldp+909,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_2__DOT__sram_15),128);
            tracep->chgWData(oldp+913,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_2__DOT__sram_16),128);
            tracep->chgWData(oldp+917,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_2__DOT__sram_17),128);
            tracep->chgWData(oldp+921,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_2__DOT__sram_18),128);
            tracep->chgWData(oldp+925,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_2__DOT__sram_19),128);
            tracep->chgWData(oldp+929,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_2__DOT__sram_20),128);
            tracep->chgWData(oldp+933,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_2__DOT__sram_21),128);
            tracep->chgWData(oldp+937,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_2__DOT__sram_22),128);
            tracep->chgWData(oldp+941,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_2__DOT__sram_23),128);
            tracep->chgWData(oldp+945,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_2__DOT__sram_24),128);
            tracep->chgWData(oldp+949,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_2__DOT__sram_25),128);
            tracep->chgWData(oldp+953,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_2__DOT__sram_26),128);
            tracep->chgWData(oldp+957,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_2__DOT__sram_27),128);
            tracep->chgWData(oldp+961,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_2__DOT__sram_28),128);
            tracep->chgWData(oldp+965,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_2__DOT__sram_29),128);
            tracep->chgWData(oldp+969,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_2__DOT__sram_30),128);
            tracep->chgWData(oldp+973,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_2__DOT__sram_31),128);
            tracep->chgWData(oldp+977,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_2__DOT__sram_32),128);
            tracep->chgWData(oldp+981,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_2__DOT__sram_33),128);
            tracep->chgWData(oldp+985,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_2__DOT__sram_34),128);
            tracep->chgWData(oldp+989,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_2__DOT__sram_35),128);
            tracep->chgWData(oldp+993,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_2__DOT__sram_36),128);
            tracep->chgWData(oldp+997,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_2__DOT__sram_37),128);
            tracep->chgWData(oldp+1001,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_2__DOT__sram_38),128);
            tracep->chgWData(oldp+1005,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_2__DOT__sram_39),128);
            tracep->chgWData(oldp+1009,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_2__DOT__sram_40),128);
            tracep->chgWData(oldp+1013,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_2__DOT__sram_41),128);
            tracep->chgWData(oldp+1017,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_2__DOT__sram_42),128);
            tracep->chgWData(oldp+1021,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_2__DOT__sram_43),128);
            tracep->chgWData(oldp+1025,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_2__DOT__sram_44),128);
            tracep->chgWData(oldp+1029,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_2__DOT__sram_45),128);
            tracep->chgWData(oldp+1033,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_2__DOT__sram_46),128);
            tracep->chgWData(oldp+1037,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_2__DOT__sram_47),128);
            tracep->chgWData(oldp+1041,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_2__DOT__sram_48),128);
            tracep->chgWData(oldp+1045,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_2__DOT__sram_49),128);
            tracep->chgWData(oldp+1049,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_2__DOT__sram_50),128);
            tracep->chgWData(oldp+1053,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_2__DOT__sram_51),128);
            tracep->chgWData(oldp+1057,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_2__DOT__sram_52),128);
            tracep->chgWData(oldp+1061,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_2__DOT__sram_53),128);
            tracep->chgWData(oldp+1065,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_2__DOT__sram_54),128);
            tracep->chgWData(oldp+1069,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_2__DOT__sram_55),128);
            tracep->chgWData(oldp+1073,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_2__DOT__sram_56),128);
            tracep->chgWData(oldp+1077,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_2__DOT__sram_57),128);
            tracep->chgWData(oldp+1081,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_2__DOT__sram_58),128);
            tracep->chgWData(oldp+1085,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_2__DOT__sram_59),128);
            tracep->chgWData(oldp+1089,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_2__DOT__sram_60),128);
            tracep->chgWData(oldp+1093,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_2__DOT__sram_61),128);
            tracep->chgWData(oldp+1097,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_2__DOT__sram_62),128);
            tracep->chgWData(oldp+1101,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_2__DOT__sram_63),128);
            tracep->chgWData(oldp+1105,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_3__DOT__sram_0),128);
            tracep->chgWData(oldp+1109,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_3__DOT__sram_1),128);
            tracep->chgWData(oldp+1113,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_3__DOT__sram_2),128);
            tracep->chgWData(oldp+1117,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_3__DOT__sram_3),128);
            tracep->chgWData(oldp+1121,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_3__DOT__sram_4),128);
            tracep->chgWData(oldp+1125,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_3__DOT__sram_5),128);
            tracep->chgWData(oldp+1129,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_3__DOT__sram_6),128);
            tracep->chgWData(oldp+1133,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_3__DOT__sram_7),128);
            tracep->chgWData(oldp+1137,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_3__DOT__sram_8),128);
            tracep->chgWData(oldp+1141,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_3__DOT__sram_9),128);
            tracep->chgWData(oldp+1145,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_3__DOT__sram_10),128);
            tracep->chgWData(oldp+1149,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_3__DOT__sram_11),128);
            tracep->chgWData(oldp+1153,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_3__DOT__sram_12),128);
            tracep->chgWData(oldp+1157,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_3__DOT__sram_13),128);
            tracep->chgWData(oldp+1161,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_3__DOT__sram_14),128);
            tracep->chgWData(oldp+1165,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_3__DOT__sram_15),128);
            tracep->chgWData(oldp+1169,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_3__DOT__sram_16),128);
            tracep->chgWData(oldp+1173,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_3__DOT__sram_17),128);
            tracep->chgWData(oldp+1177,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_3__DOT__sram_18),128);
            tracep->chgWData(oldp+1181,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_3__DOT__sram_19),128);
            tracep->chgWData(oldp+1185,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_3__DOT__sram_20),128);
            tracep->chgWData(oldp+1189,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_3__DOT__sram_21),128);
            tracep->chgWData(oldp+1193,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_3__DOT__sram_22),128);
            tracep->chgWData(oldp+1197,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_3__DOT__sram_23),128);
            tracep->chgWData(oldp+1201,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_3__DOT__sram_24),128);
            tracep->chgWData(oldp+1205,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_3__DOT__sram_25),128);
            tracep->chgWData(oldp+1209,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_3__DOT__sram_26),128);
            tracep->chgWData(oldp+1213,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_3__DOT__sram_27),128);
            tracep->chgWData(oldp+1217,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_3__DOT__sram_28),128);
            tracep->chgWData(oldp+1221,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_3__DOT__sram_29),128);
            tracep->chgWData(oldp+1225,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_3__DOT__sram_30),128);
            tracep->chgWData(oldp+1229,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_3__DOT__sram_31),128);
            tracep->chgWData(oldp+1233,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_3__DOT__sram_32),128);
            tracep->chgWData(oldp+1237,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_3__DOT__sram_33),128);
            tracep->chgWData(oldp+1241,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_3__DOT__sram_34),128);
            tracep->chgWData(oldp+1245,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_3__DOT__sram_35),128);
            tracep->chgWData(oldp+1249,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_3__DOT__sram_36),128);
            tracep->chgWData(oldp+1253,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_3__DOT__sram_37),128);
            tracep->chgWData(oldp+1257,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_3__DOT__sram_38),128);
            tracep->chgWData(oldp+1261,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_3__DOT__sram_39),128);
            tracep->chgWData(oldp+1265,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_3__DOT__sram_40),128);
            tracep->chgWData(oldp+1269,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_3__DOT__sram_41),128);
            tracep->chgWData(oldp+1273,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_3__DOT__sram_42),128);
            tracep->chgWData(oldp+1277,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_3__DOT__sram_43),128);
            tracep->chgWData(oldp+1281,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_3__DOT__sram_44),128);
            tracep->chgWData(oldp+1285,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_3__DOT__sram_45),128);
            tracep->chgWData(oldp+1289,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_3__DOT__sram_46),128);
            tracep->chgWData(oldp+1293,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_3__DOT__sram_47),128);
            tracep->chgWData(oldp+1297,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_3__DOT__sram_48),128);
            tracep->chgWData(oldp+1301,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_3__DOT__sram_49),128);
            tracep->chgWData(oldp+1305,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_3__DOT__sram_50),128);
            tracep->chgWData(oldp+1309,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_3__DOT__sram_51),128);
            tracep->chgWData(oldp+1313,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_3__DOT__sram_52),128);
            tracep->chgWData(oldp+1317,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_3__DOT__sram_53),128);
            tracep->chgWData(oldp+1321,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_3__DOT__sram_54),128);
            tracep->chgWData(oldp+1325,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_3__DOT__sram_55),128);
            tracep->chgWData(oldp+1329,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_3__DOT__sram_56),128);
            tracep->chgWData(oldp+1333,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_3__DOT__sram_57),128);
            tracep->chgWData(oldp+1337,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_3__DOT__sram_58),128);
            tracep->chgWData(oldp+1341,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_3__DOT__sram_59),128);
            tracep->chgWData(oldp+1345,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_3__DOT__sram_60),128);
            tracep->chgWData(oldp+1349,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_3__DOT__sram_61),128);
            tracep->chgWData(oldp+1353,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_3__DOT__sram_62),128);
            tracep->chgWData(oldp+1357,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__SRAM_3__DOT__sram_63),128);
            tracep->chgCData(oldp+1361,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_io_addr),6);
            tracep->chgBit(oldp+1362,((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram0_write)))));
            __Vtemp3382[0U] = (~ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__cache_mask[0U]);
            __Vtemp3382[1U] = (~ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__cache_mask[1U]);
            __Vtemp3382[2U] = (~ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__cache_mask[2U]);
            __Vtemp3382[3U] = (~ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__cache_mask[3U]);
            tracep->chgWData(oldp+1363,(__Vtemp3382),128);
            tracep->chgWData(oldp+1367,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_wdata),128);
            tracep->chgWData(oldp+1371,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM__DOT__Q),128);
            tracep->chgCData(oldp+1375,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_1_io_addr),6);
            VL_EXTEND_WQ(128,54, __Vtemp3383, vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag);
            tracep->chgWData(oldp+1376,(__Vtemp3383),128);
            tracep->chgWData(oldp+1380,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_1__DOT__Q),128);
            tracep->chgCData(oldp+1384,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_2_io_addr),6);
            tracep->chgBit(oldp+1385,((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram2_write)))));
            tracep->chgWData(oldp+1386,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_2__DOT__Q),128);
            tracep->chgCData(oldp+1390,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_3_io_addr),6);
            tracep->chgWData(oldp+1391,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_3__DOT__Q),128);
            tracep->chgQData(oldp+1395,((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu_io_bus_bits_addr 
                                         >> 0xaU)),54);
            tracep->chgCData(oldp+1397,((0x3fU & (IData)(
                                                         (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu_io_bus_bits_addr 
                                                          >> 4U)))),6);
            tracep->chgCData(oldp+1398,((0xfU & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu_io_bus_bits_addr))),4);
            tracep->chgCData(oldp+1399,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state),2);
            tracep->chgQData(oldp+1400,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_wdata),64);
            tracep->chgCData(oldp+1402,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_wstrb),8);
            tracep->chgBit(oldp+1403,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_is_w));
            tracep->chgQData(oldp+1404,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag),54);
            tracep->chgCData(oldp+1406,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index),6);
            tracep->chgCData(oldp+1407,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_offset),4);
            tracep->chgBit(oldp+1408,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_write));
            tracep->chgSData(oldp+1409,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_wstrb),16);
            tracep->chgBit(oldp+1410,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_chosen_tag));
            tracep->chgQData(oldp+1411,((((QData)((IData)(
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
            tracep->chgWData(oldp+1413,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__cache_mask),128);
            tracep->chgWData(oldp+1417,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__cache_wdata),128);
            tracep->chgBit(oldp+1421,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram0_write));
            tracep->chgQData(oldp+1422,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_sram0_valid),64);
            tracep->chgQData(oldp+1424,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_sram0_dirty),64);
            tracep->chgQData(oldp+1426,((1ULL << (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index))),64);
            tracep->chgQData(oldp+1428,((~ (1ULL << (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)))),64);
            tracep->chgBit(oldp+1430,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram2_write));
            tracep->chgQData(oldp+1431,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_sram2_valid),64);
            tracep->chgQData(oldp+1433,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_sram2_dirty),64);
            tracep->chgQData(oldp+1435,((0x3fffffffffffffULL 
                                         & (((QData)((IData)(
                                                             vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_1__DOT__Q[1U])) 
                                             << 0x20U) 
                                            | (QData)((IData)(
                                                              vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_1__DOT__Q[0U]))))),54);
            tracep->chgQData(oldp+1437,((0x3fffffffffffffULL 
                                         & (((QData)((IData)(
                                                             vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_3__DOT__Q[1U])) 
                                             << 0x20U) 
                                            | (QData)((IData)(
                                                              vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_3__DOT__Q[0U]))))),54);
            tracep->chgBit(oldp+1439,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_0));
            tracep->chgBit(oldp+1440,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2));
            tracep->chgBit(oldp+1441,((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___tag_valid_0_T))));
            tracep->chgBit(oldp+1442,((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___tag_valid_2_T))));
            tracep->chgBit(oldp+1443,((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___tag_dirty_0_T))));
            tracep->chgBit(oldp+1444,((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___tag_dirty_2_T))));
            tracep->chgQData(oldp+1445,(((8U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_offset))
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
            tracep->chgQData(oldp+1447,(((8U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_offset))
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
            tracep->chgQData(oldp+1449,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_2),64);
            tracep->chgBit(oldp+1451,((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___LRU_2_T))));
            tracep->chgBit(oldp+1452,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation));
            tracep->chgCData(oldp+1453,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cnt),2);
            tracep->chgBit(oldp+1454,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_rbus_finish));
            tracep->chgBit(oldp+1455,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_wbus_finish));
            tracep->chgWData(oldp+1456,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM__DOT__sram_0),128);
            tracep->chgWData(oldp+1460,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM__DOT__sram_1),128);
            tracep->chgWData(oldp+1464,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM__DOT__sram_2),128);
            tracep->chgWData(oldp+1468,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM__DOT__sram_3),128);
            tracep->chgWData(oldp+1472,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM__DOT__sram_4),128);
            tracep->chgWData(oldp+1476,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM__DOT__sram_5),128);
            tracep->chgWData(oldp+1480,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM__DOT__sram_6),128);
            tracep->chgWData(oldp+1484,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM__DOT__sram_7),128);
            tracep->chgWData(oldp+1488,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM__DOT__sram_8),128);
            tracep->chgWData(oldp+1492,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM__DOT__sram_9),128);
            tracep->chgWData(oldp+1496,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM__DOT__sram_10),128);
            tracep->chgWData(oldp+1500,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM__DOT__sram_11),128);
            tracep->chgWData(oldp+1504,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM__DOT__sram_12),128);
            tracep->chgWData(oldp+1508,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM__DOT__sram_13),128);
            tracep->chgWData(oldp+1512,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM__DOT__sram_14),128);
            tracep->chgWData(oldp+1516,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM__DOT__sram_15),128);
            tracep->chgWData(oldp+1520,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM__DOT__sram_16),128);
            tracep->chgWData(oldp+1524,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM__DOT__sram_17),128);
            tracep->chgWData(oldp+1528,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM__DOT__sram_18),128);
            tracep->chgWData(oldp+1532,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM__DOT__sram_19),128);
            tracep->chgWData(oldp+1536,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM__DOT__sram_20),128);
            tracep->chgWData(oldp+1540,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM__DOT__sram_21),128);
            tracep->chgWData(oldp+1544,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM__DOT__sram_22),128);
            tracep->chgWData(oldp+1548,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM__DOT__sram_23),128);
            tracep->chgWData(oldp+1552,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM__DOT__sram_24),128);
            tracep->chgWData(oldp+1556,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM__DOT__sram_25),128);
            tracep->chgWData(oldp+1560,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM__DOT__sram_26),128);
            tracep->chgWData(oldp+1564,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM__DOT__sram_27),128);
            tracep->chgWData(oldp+1568,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM__DOT__sram_28),128);
            tracep->chgWData(oldp+1572,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM__DOT__sram_29),128);
            tracep->chgWData(oldp+1576,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM__DOT__sram_30),128);
            tracep->chgWData(oldp+1580,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM__DOT__sram_31),128);
            tracep->chgWData(oldp+1584,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM__DOT__sram_32),128);
            tracep->chgWData(oldp+1588,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM__DOT__sram_33),128);
            tracep->chgWData(oldp+1592,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM__DOT__sram_34),128);
            tracep->chgWData(oldp+1596,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM__DOT__sram_35),128);
            tracep->chgWData(oldp+1600,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM__DOT__sram_36),128);
            tracep->chgWData(oldp+1604,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM__DOT__sram_37),128);
            tracep->chgWData(oldp+1608,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM__DOT__sram_38),128);
            tracep->chgWData(oldp+1612,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM__DOT__sram_39),128);
            tracep->chgWData(oldp+1616,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM__DOT__sram_40),128);
            tracep->chgWData(oldp+1620,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM__DOT__sram_41),128);
            tracep->chgWData(oldp+1624,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM__DOT__sram_42),128);
            tracep->chgWData(oldp+1628,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM__DOT__sram_43),128);
            tracep->chgWData(oldp+1632,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM__DOT__sram_44),128);
            tracep->chgWData(oldp+1636,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM__DOT__sram_45),128);
            tracep->chgWData(oldp+1640,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM__DOT__sram_46),128);
            tracep->chgWData(oldp+1644,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM__DOT__sram_47),128);
            tracep->chgWData(oldp+1648,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM__DOT__sram_48),128);
            tracep->chgWData(oldp+1652,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM__DOT__sram_49),128);
            tracep->chgWData(oldp+1656,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM__DOT__sram_50),128);
            tracep->chgWData(oldp+1660,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM__DOT__sram_51),128);
            tracep->chgWData(oldp+1664,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM__DOT__sram_52),128);
            tracep->chgWData(oldp+1668,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM__DOT__sram_53),128);
            tracep->chgWData(oldp+1672,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM__DOT__sram_54),128);
            tracep->chgWData(oldp+1676,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM__DOT__sram_55),128);
            tracep->chgWData(oldp+1680,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM__DOT__sram_56),128);
            tracep->chgWData(oldp+1684,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM__DOT__sram_57),128);
            tracep->chgWData(oldp+1688,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM__DOT__sram_58),128);
            tracep->chgWData(oldp+1692,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM__DOT__sram_59),128);
            tracep->chgWData(oldp+1696,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM__DOT__sram_60),128);
            tracep->chgWData(oldp+1700,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM__DOT__sram_61),128);
            tracep->chgWData(oldp+1704,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM__DOT__sram_62),128);
            tracep->chgWData(oldp+1708,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM__DOT__sram_63),128);
            tracep->chgWData(oldp+1712,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_1__DOT__sram_0),128);
            tracep->chgWData(oldp+1716,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_1__DOT__sram_1),128);
            tracep->chgWData(oldp+1720,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_1__DOT__sram_2),128);
            tracep->chgWData(oldp+1724,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_1__DOT__sram_3),128);
            tracep->chgWData(oldp+1728,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_1__DOT__sram_4),128);
            tracep->chgWData(oldp+1732,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_1__DOT__sram_5),128);
            tracep->chgWData(oldp+1736,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_1__DOT__sram_6),128);
            tracep->chgWData(oldp+1740,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_1__DOT__sram_7),128);
            tracep->chgWData(oldp+1744,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_1__DOT__sram_8),128);
            tracep->chgWData(oldp+1748,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_1__DOT__sram_9),128);
            tracep->chgWData(oldp+1752,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_1__DOT__sram_10),128);
            tracep->chgWData(oldp+1756,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_1__DOT__sram_11),128);
            tracep->chgWData(oldp+1760,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_1__DOT__sram_12),128);
            tracep->chgWData(oldp+1764,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_1__DOT__sram_13),128);
            tracep->chgWData(oldp+1768,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_1__DOT__sram_14),128);
            tracep->chgWData(oldp+1772,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_1__DOT__sram_15),128);
            tracep->chgWData(oldp+1776,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_1__DOT__sram_16),128);
            tracep->chgWData(oldp+1780,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_1__DOT__sram_17),128);
            tracep->chgWData(oldp+1784,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_1__DOT__sram_18),128);
            tracep->chgWData(oldp+1788,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_1__DOT__sram_19),128);
            tracep->chgWData(oldp+1792,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_1__DOT__sram_20),128);
            tracep->chgWData(oldp+1796,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_1__DOT__sram_21),128);
            tracep->chgWData(oldp+1800,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_1__DOT__sram_22),128);
            tracep->chgWData(oldp+1804,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_1__DOT__sram_23),128);
            tracep->chgWData(oldp+1808,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_1__DOT__sram_24),128);
            tracep->chgWData(oldp+1812,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_1__DOT__sram_25),128);
            tracep->chgWData(oldp+1816,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_1__DOT__sram_26),128);
            tracep->chgWData(oldp+1820,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_1__DOT__sram_27),128);
            tracep->chgWData(oldp+1824,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_1__DOT__sram_28),128);
            tracep->chgWData(oldp+1828,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_1__DOT__sram_29),128);
            tracep->chgWData(oldp+1832,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_1__DOT__sram_30),128);
            tracep->chgWData(oldp+1836,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_1__DOT__sram_31),128);
            tracep->chgWData(oldp+1840,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_1__DOT__sram_32),128);
            tracep->chgWData(oldp+1844,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_1__DOT__sram_33),128);
            tracep->chgWData(oldp+1848,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_1__DOT__sram_34),128);
            tracep->chgWData(oldp+1852,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_1__DOT__sram_35),128);
            tracep->chgWData(oldp+1856,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_1__DOT__sram_36),128);
            tracep->chgWData(oldp+1860,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_1__DOT__sram_37),128);
            tracep->chgWData(oldp+1864,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_1__DOT__sram_38),128);
            tracep->chgWData(oldp+1868,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_1__DOT__sram_39),128);
            tracep->chgWData(oldp+1872,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_1__DOT__sram_40),128);
            tracep->chgWData(oldp+1876,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_1__DOT__sram_41),128);
            tracep->chgWData(oldp+1880,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_1__DOT__sram_42),128);
            tracep->chgWData(oldp+1884,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_1__DOT__sram_43),128);
            tracep->chgWData(oldp+1888,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_1__DOT__sram_44),128);
            tracep->chgWData(oldp+1892,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_1__DOT__sram_45),128);
            tracep->chgWData(oldp+1896,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_1__DOT__sram_46),128);
            tracep->chgWData(oldp+1900,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_1__DOT__sram_47),128);
            tracep->chgWData(oldp+1904,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_1__DOT__sram_48),128);
            tracep->chgWData(oldp+1908,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_1__DOT__sram_49),128);
            tracep->chgWData(oldp+1912,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_1__DOT__sram_50),128);
            tracep->chgWData(oldp+1916,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_1__DOT__sram_51),128);
            tracep->chgWData(oldp+1920,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_1__DOT__sram_52),128);
            tracep->chgWData(oldp+1924,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_1__DOT__sram_53),128);
            tracep->chgWData(oldp+1928,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_1__DOT__sram_54),128);
            tracep->chgWData(oldp+1932,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_1__DOT__sram_55),128);
            tracep->chgWData(oldp+1936,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_1__DOT__sram_56),128);
            tracep->chgWData(oldp+1940,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_1__DOT__sram_57),128);
            tracep->chgWData(oldp+1944,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_1__DOT__sram_58),128);
            tracep->chgWData(oldp+1948,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_1__DOT__sram_59),128);
            tracep->chgWData(oldp+1952,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_1__DOT__sram_60),128);
            tracep->chgWData(oldp+1956,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_1__DOT__sram_61),128);
            tracep->chgWData(oldp+1960,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_1__DOT__sram_62),128);
            tracep->chgWData(oldp+1964,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_1__DOT__sram_63),128);
            tracep->chgWData(oldp+1968,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_2__DOT__sram_0),128);
            tracep->chgWData(oldp+1972,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_2__DOT__sram_1),128);
            tracep->chgWData(oldp+1976,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_2__DOT__sram_2),128);
            tracep->chgWData(oldp+1980,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_2__DOT__sram_3),128);
            tracep->chgWData(oldp+1984,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_2__DOT__sram_4),128);
            tracep->chgWData(oldp+1988,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_2__DOT__sram_5),128);
            tracep->chgWData(oldp+1992,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_2__DOT__sram_6),128);
            tracep->chgWData(oldp+1996,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_2__DOT__sram_7),128);
            tracep->chgWData(oldp+2000,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_2__DOT__sram_8),128);
            tracep->chgWData(oldp+2004,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_2__DOT__sram_9),128);
            tracep->chgWData(oldp+2008,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_2__DOT__sram_10),128);
            tracep->chgWData(oldp+2012,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_2__DOT__sram_11),128);
            tracep->chgWData(oldp+2016,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_2__DOT__sram_12),128);
            tracep->chgWData(oldp+2020,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_2__DOT__sram_13),128);
            tracep->chgWData(oldp+2024,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_2__DOT__sram_14),128);
            tracep->chgWData(oldp+2028,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_2__DOT__sram_15),128);
            tracep->chgWData(oldp+2032,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_2__DOT__sram_16),128);
            tracep->chgWData(oldp+2036,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_2__DOT__sram_17),128);
            tracep->chgWData(oldp+2040,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_2__DOT__sram_18),128);
            tracep->chgWData(oldp+2044,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_2__DOT__sram_19),128);
            tracep->chgWData(oldp+2048,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_2__DOT__sram_20),128);
            tracep->chgWData(oldp+2052,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_2__DOT__sram_21),128);
            tracep->chgWData(oldp+2056,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_2__DOT__sram_22),128);
            tracep->chgWData(oldp+2060,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_2__DOT__sram_23),128);
            tracep->chgWData(oldp+2064,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_2__DOT__sram_24),128);
            tracep->chgWData(oldp+2068,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_2__DOT__sram_25),128);
            tracep->chgWData(oldp+2072,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_2__DOT__sram_26),128);
            tracep->chgWData(oldp+2076,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_2__DOT__sram_27),128);
            tracep->chgWData(oldp+2080,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_2__DOT__sram_28),128);
            tracep->chgWData(oldp+2084,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_2__DOT__sram_29),128);
            tracep->chgWData(oldp+2088,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_2__DOT__sram_30),128);
            tracep->chgWData(oldp+2092,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_2__DOT__sram_31),128);
            tracep->chgWData(oldp+2096,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_2__DOT__sram_32),128);
            tracep->chgWData(oldp+2100,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_2__DOT__sram_33),128);
            tracep->chgWData(oldp+2104,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_2__DOT__sram_34),128);
            tracep->chgWData(oldp+2108,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_2__DOT__sram_35),128);
            tracep->chgWData(oldp+2112,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_2__DOT__sram_36),128);
            tracep->chgWData(oldp+2116,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_2__DOT__sram_37),128);
            tracep->chgWData(oldp+2120,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_2__DOT__sram_38),128);
            tracep->chgWData(oldp+2124,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_2__DOT__sram_39),128);
            tracep->chgWData(oldp+2128,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_2__DOT__sram_40),128);
            tracep->chgWData(oldp+2132,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_2__DOT__sram_41),128);
            tracep->chgWData(oldp+2136,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_2__DOT__sram_42),128);
            tracep->chgWData(oldp+2140,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_2__DOT__sram_43),128);
            tracep->chgWData(oldp+2144,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_2__DOT__sram_44),128);
            tracep->chgWData(oldp+2148,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_2__DOT__sram_45),128);
            tracep->chgWData(oldp+2152,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_2__DOT__sram_46),128);
            tracep->chgWData(oldp+2156,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_2__DOT__sram_47),128);
            tracep->chgWData(oldp+2160,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_2__DOT__sram_48),128);
            tracep->chgWData(oldp+2164,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_2__DOT__sram_49),128);
            tracep->chgWData(oldp+2168,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_2__DOT__sram_50),128);
            tracep->chgWData(oldp+2172,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_2__DOT__sram_51),128);
            tracep->chgWData(oldp+2176,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_2__DOT__sram_52),128);
            tracep->chgWData(oldp+2180,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_2__DOT__sram_53),128);
            tracep->chgWData(oldp+2184,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_2__DOT__sram_54),128);
            tracep->chgWData(oldp+2188,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_2__DOT__sram_55),128);
            tracep->chgWData(oldp+2192,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_2__DOT__sram_56),128);
            tracep->chgWData(oldp+2196,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_2__DOT__sram_57),128);
            tracep->chgWData(oldp+2200,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_2__DOT__sram_58),128);
            tracep->chgWData(oldp+2204,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_2__DOT__sram_59),128);
            tracep->chgWData(oldp+2208,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_2__DOT__sram_60),128);
            tracep->chgWData(oldp+2212,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_2__DOT__sram_61),128);
            tracep->chgWData(oldp+2216,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_2__DOT__sram_62),128);
            tracep->chgWData(oldp+2220,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_2__DOT__sram_63),128);
            tracep->chgWData(oldp+2224,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_3__DOT__sram_0),128);
            tracep->chgWData(oldp+2228,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_3__DOT__sram_1),128);
            tracep->chgWData(oldp+2232,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_3__DOT__sram_2),128);
            tracep->chgWData(oldp+2236,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_3__DOT__sram_3),128);
            tracep->chgWData(oldp+2240,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_3__DOT__sram_4),128);
            tracep->chgWData(oldp+2244,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_3__DOT__sram_5),128);
            tracep->chgWData(oldp+2248,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_3__DOT__sram_6),128);
            tracep->chgWData(oldp+2252,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_3__DOT__sram_7),128);
            tracep->chgWData(oldp+2256,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_3__DOT__sram_8),128);
            tracep->chgWData(oldp+2260,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_3__DOT__sram_9),128);
            tracep->chgWData(oldp+2264,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_3__DOT__sram_10),128);
            tracep->chgWData(oldp+2268,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_3__DOT__sram_11),128);
            tracep->chgWData(oldp+2272,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_3__DOT__sram_12),128);
            tracep->chgWData(oldp+2276,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_3__DOT__sram_13),128);
            tracep->chgWData(oldp+2280,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_3__DOT__sram_14),128);
            tracep->chgWData(oldp+2284,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_3__DOT__sram_15),128);
            tracep->chgWData(oldp+2288,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_3__DOT__sram_16),128);
            tracep->chgWData(oldp+2292,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_3__DOT__sram_17),128);
            tracep->chgWData(oldp+2296,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_3__DOT__sram_18),128);
            tracep->chgWData(oldp+2300,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_3__DOT__sram_19),128);
            tracep->chgWData(oldp+2304,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_3__DOT__sram_20),128);
            tracep->chgWData(oldp+2308,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_3__DOT__sram_21),128);
            tracep->chgWData(oldp+2312,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_3__DOT__sram_22),128);
            tracep->chgWData(oldp+2316,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_3__DOT__sram_23),128);
            tracep->chgWData(oldp+2320,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_3__DOT__sram_24),128);
            tracep->chgWData(oldp+2324,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_3__DOT__sram_25),128);
            tracep->chgWData(oldp+2328,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_3__DOT__sram_26),128);
            tracep->chgWData(oldp+2332,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_3__DOT__sram_27),128);
            tracep->chgWData(oldp+2336,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_3__DOT__sram_28),128);
            tracep->chgWData(oldp+2340,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_3__DOT__sram_29),128);
            tracep->chgWData(oldp+2344,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_3__DOT__sram_30),128);
            tracep->chgWData(oldp+2348,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_3__DOT__sram_31),128);
            tracep->chgWData(oldp+2352,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_3__DOT__sram_32),128);
            tracep->chgWData(oldp+2356,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_3__DOT__sram_33),128);
            tracep->chgWData(oldp+2360,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_3__DOT__sram_34),128);
            tracep->chgWData(oldp+2364,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_3__DOT__sram_35),128);
            tracep->chgWData(oldp+2368,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_3__DOT__sram_36),128);
            tracep->chgWData(oldp+2372,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_3__DOT__sram_37),128);
            tracep->chgWData(oldp+2376,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_3__DOT__sram_38),128);
            tracep->chgWData(oldp+2380,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_3__DOT__sram_39),128);
            tracep->chgWData(oldp+2384,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_3__DOT__sram_40),128);
            tracep->chgWData(oldp+2388,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_3__DOT__sram_41),128);
            tracep->chgWData(oldp+2392,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_3__DOT__sram_42),128);
            tracep->chgWData(oldp+2396,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_3__DOT__sram_43),128);
            tracep->chgWData(oldp+2400,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_3__DOT__sram_44),128);
            tracep->chgWData(oldp+2404,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_3__DOT__sram_45),128);
            tracep->chgWData(oldp+2408,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_3__DOT__sram_46),128);
            tracep->chgWData(oldp+2412,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_3__DOT__sram_47),128);
            tracep->chgWData(oldp+2416,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_3__DOT__sram_48),128);
            tracep->chgWData(oldp+2420,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_3__DOT__sram_49),128);
            tracep->chgWData(oldp+2424,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_3__DOT__sram_50),128);
            tracep->chgWData(oldp+2428,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_3__DOT__sram_51),128);
            tracep->chgWData(oldp+2432,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_3__DOT__sram_52),128);
            tracep->chgWData(oldp+2436,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_3__DOT__sram_53),128);
            tracep->chgWData(oldp+2440,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_3__DOT__sram_54),128);
            tracep->chgWData(oldp+2444,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_3__DOT__sram_55),128);
            tracep->chgWData(oldp+2448,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_3__DOT__sram_56),128);
            tracep->chgWData(oldp+2452,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_3__DOT__sram_57),128);
            tracep->chgWData(oldp+2456,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_3__DOT__sram_58),128);
            tracep->chgWData(oldp+2460,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_3__DOT__sram_59),128);
            tracep->chgWData(oldp+2464,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_3__DOT__sram_60),128);
            tracep->chgWData(oldp+2468,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_3__DOT__sram_61),128);
            tracep->chgWData(oldp+2472,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_3__DOT__sram_62),128);
            tracep->chgWData(oldp+2476,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__SRAM_3__DOT__sram_63),128);
            tracep->chgBit(oldp+2480,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__w_locked));
            tracep->chgCData(oldp+2481,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__w_lockId),2);
            tracep->chgCData(oldp+2482,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__w_chosen),2);
            tracep->chgCData(oldp+2483,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__reg_r_cnt),2);
            tracep->chgBit(oldp+2484,((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__reg_r_cnt))));
            tracep->chgCData(oldp+2485,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__r_lockId),2);
            tracep->chgCData(oldp+2486,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__r_chosen),2);
            tracep->chgBit(oldp+2487,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__reg_aw_ok));
            tracep->chgBit(oldp+2488,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__reg_ar_ok));
            tracep->chgBit(oldp+2489,((0ULL == (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0 
                                                >> 0x1fU))));
            tracep->chgBit(oldp+2490,((0ULL == (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu_io_bus_bits_addr 
                                                >> 0x1fU))));
            tracep->chgBit(oldp+2491,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1__DOT__not_clint));
            tracep->chgBit(oldp+2492,((((IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1_io_fetch_cpu_data_valid) 
                                        & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_flush))) 
                                       & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute_io_flush)))));
            tracep->chgIData(oldp+2493,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_cache_buf_bits_inst),32);
            tracep->chgBit(oldp+2494,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_cache_buf_bits_is_pre));
            tracep->chgQData(oldp+2495,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor_io_pre_next_pc),64);
            tracep->chgBit(oldp+2497,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor_io_pre_valid));
            tracep->chgBit(oldp+2498,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_flush));
            tracep->chgQData(oldp+2499,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_next_pc),64);
            tracep->chgCData(oldp+2501,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__pre_info_head),2);
            tracep->chgCData(oldp+2502,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__pre_info_tail),2);
            tracep->chgQData(oldp+2503,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__pre_info_fifo_0),64);
            tracep->chgQData(oldp+2505,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__pre_info_fifo_1),64);
            tracep->chgQData(oldp+2507,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__pre_info_fifo_2),64);
            tracep->chgQData(oldp+2509,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__pre_info_fifo_3),64);
            tracep->chgBit(oldp+2511,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__pre_enq));
            tracep->chgCData(oldp+2512,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__is_pre_head),2);
            tracep->chgCData(oldp+2513,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__is_pre_tail),2);
            tracep->chgBit(oldp+2514,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__is_pre_fifo_0));
            tracep->chgBit(oldp+2515,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__is_pre_fifo_1));
            tracep->chgBit(oldp+2516,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__is_pre_fifo_2));
            tracep->chgBit(oldp+2517,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__is_pre_fifo_3));
            tracep->chgQData(oldp+2518,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_pc_0),64);
            tracep->chgQData(oldp+2520,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_pc_1),64);
            tracep->chgQData(oldp+2522,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_pc_2),64);
            tracep->chgQData(oldp+2524,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_pc_3),64);
            tracep->chgIData(oldp+2526,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_0),32);
            tracep->chgIData(oldp+2527,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_1),32);
            tracep->chgIData(oldp+2528,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_2),32);
            tracep->chgIData(oldp+2529,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_3),32);
            tracep->chgBit(oldp+2530,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_is_pre_0));
            tracep->chgBit(oldp+2531,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_is_pre_1));
            tracep->chgBit(oldp+2532,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_is_pre_2));
            tracep->chgBit(oldp+2533,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_is_pre_3));
            tracep->chgBit(oldp+2534,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_valid_0));
            tracep->chgBit(oldp+2535,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_valid_1));
            tracep->chgBit(oldp+2536,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_valid_2));
            tracep->chgBit(oldp+2537,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_valid_3));
            tracep->chgCData(oldp+2538,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__reg_head),2);
            tracep->chgCData(oldp+2539,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__reg_tail),2);
            tracep->chgCData(oldp+2540,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__reg_ibuf_size),3);
            tracep->chgBit(oldp+2541,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__enq_size));
            tracep->chgBit(oldp+2542,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__can_deq));
            tracep->chgCData(oldp+2543,((7U & (((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__reg_ibuf_size) 
                                                + (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__enq_size)) 
                                               - (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__can_deq)))),3);
            tracep->chgWData(oldp+2544,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_0),128);
            tracep->chgWData(oldp+2548,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_1),128);
            tracep->chgWData(oldp+2552,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_2),128);
            tracep->chgWData(oldp+2556,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_3),128);
            tracep->chgWData(oldp+2560,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_4),128);
            tracep->chgWData(oldp+2564,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_5),128);
            tracep->chgWData(oldp+2568,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_6),128);
            tracep->chgWData(oldp+2572,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_7),128);
            tracep->chgWData(oldp+2576,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_8),128);
            tracep->chgWData(oldp+2580,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_9),128);
            tracep->chgWData(oldp+2584,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_10),128);
            tracep->chgWData(oldp+2588,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_11),128);
            tracep->chgWData(oldp+2592,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_12),128);
            tracep->chgWData(oldp+2596,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_13),128);
            tracep->chgWData(oldp+2600,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_14),128);
            tracep->chgWData(oldp+2604,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_15),128);
            tracep->chgWData(oldp+2608,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_16),128);
            tracep->chgWData(oldp+2612,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_17),128);
            tracep->chgWData(oldp+2616,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_18),128);
            tracep->chgWData(oldp+2620,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_19),128);
            tracep->chgWData(oldp+2624,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_20),128);
            tracep->chgWData(oldp+2628,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_21),128);
            tracep->chgWData(oldp+2632,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_22),128);
            tracep->chgWData(oldp+2636,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_23),128);
            tracep->chgWData(oldp+2640,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_24),128);
            tracep->chgWData(oldp+2644,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_25),128);
            tracep->chgWData(oldp+2648,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_26),128);
            tracep->chgWData(oldp+2652,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_27),128);
            tracep->chgWData(oldp+2656,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_28),128);
            tracep->chgWData(oldp+2660,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_29),128);
            tracep->chgWData(oldp+2664,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_30),128);
            tracep->chgWData(oldp+2668,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_31),128);
            tracep->chgWData(oldp+2672,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_32),128);
            tracep->chgWData(oldp+2676,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_33),128);
            tracep->chgWData(oldp+2680,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_34),128);
            tracep->chgWData(oldp+2684,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_35),128);
            tracep->chgWData(oldp+2688,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_36),128);
            tracep->chgWData(oldp+2692,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_37),128);
            tracep->chgWData(oldp+2696,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_38),128);
            tracep->chgWData(oldp+2700,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_39),128);
            tracep->chgWData(oldp+2704,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_40),128);
            tracep->chgWData(oldp+2708,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_41),128);
            tracep->chgWData(oldp+2712,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_42),128);
            tracep->chgWData(oldp+2716,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_43),128);
            tracep->chgWData(oldp+2720,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_44),128);
            tracep->chgWData(oldp+2724,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_45),128);
            tracep->chgWData(oldp+2728,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_46),128);
            tracep->chgWData(oldp+2732,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_47),128);
            tracep->chgWData(oldp+2736,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_48),128);
            tracep->chgWData(oldp+2740,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_49),128);
            tracep->chgWData(oldp+2744,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_50),128);
            tracep->chgWData(oldp+2748,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_51),128);
            tracep->chgWData(oldp+2752,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_52),128);
            tracep->chgWData(oldp+2756,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_53),128);
            tracep->chgWData(oldp+2760,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_54),128);
            tracep->chgWData(oldp+2764,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_55),128);
            tracep->chgWData(oldp+2768,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_56),128);
            tracep->chgWData(oldp+2772,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_57),128);
            tracep->chgWData(oldp+2776,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_58),128);
            tracep->chgWData(oldp+2780,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_59),128);
            tracep->chgWData(oldp+2784,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_60),128);
            tracep->chgWData(oldp+2788,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_61),128);
            tracep->chgWData(oldp+2792,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_62),128);
            tracep->chgWData(oldp+2796,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_63),128);
            tracep->chgQData(oldp+2800,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__RAS_0),64);
            tracep->chgQData(oldp+2802,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__RAS_1),64);
            tracep->chgQData(oldp+2804,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__RAS_2),64);
            tracep->chgQData(oldp+2806,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__RAS_3),64);
            tracep->chgQData(oldp+2808,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__RAS_4),64);
            tracep->chgQData(oldp+2810,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__RAS_5),64);
            tracep->chgCData(oldp+2812,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_0),2);
            tracep->chgCData(oldp+2813,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_1),2);
            tracep->chgCData(oldp+2814,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_2),2);
            tracep->chgCData(oldp+2815,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_3),2);
            tracep->chgCData(oldp+2816,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_4),2);
            tracep->chgCData(oldp+2817,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_5),2);
            tracep->chgCData(oldp+2818,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_6),2);
            tracep->chgCData(oldp+2819,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_7),2);
            tracep->chgCData(oldp+2820,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_8),2);
            tracep->chgCData(oldp+2821,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_9),2);
            tracep->chgCData(oldp+2822,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_10),2);
            tracep->chgCData(oldp+2823,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_11),2);
            tracep->chgCData(oldp+2824,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_12),2);
            tracep->chgCData(oldp+2825,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_13),2);
            tracep->chgCData(oldp+2826,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_14),2);
            tracep->chgCData(oldp+2827,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_15),2);
            tracep->chgCData(oldp+2828,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_16),2);
            tracep->chgCData(oldp+2829,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_17),2);
            tracep->chgCData(oldp+2830,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_18),2);
            tracep->chgCData(oldp+2831,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_19),2);
            tracep->chgCData(oldp+2832,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_20),2);
            tracep->chgCData(oldp+2833,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_21),2);
            tracep->chgCData(oldp+2834,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_22),2);
            tracep->chgCData(oldp+2835,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_23),2);
            tracep->chgCData(oldp+2836,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_24),2);
            tracep->chgCData(oldp+2837,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_25),2);
            tracep->chgCData(oldp+2838,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_26),2);
            tracep->chgCData(oldp+2839,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_27),2);
            tracep->chgCData(oldp+2840,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_28),2);
            tracep->chgCData(oldp+2841,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_29),2);
            tracep->chgCData(oldp+2842,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_30),2);
            tracep->chgCData(oldp+2843,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_31),2);
            tracep->chgCData(oldp+2844,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_32),2);
            tracep->chgCData(oldp+2845,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_33),2);
            tracep->chgCData(oldp+2846,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_34),2);
            tracep->chgCData(oldp+2847,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_35),2);
            tracep->chgCData(oldp+2848,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_36),2);
            tracep->chgCData(oldp+2849,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_37),2);
            tracep->chgCData(oldp+2850,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_38),2);
            tracep->chgCData(oldp+2851,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_39),2);
            tracep->chgCData(oldp+2852,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_40),2);
            tracep->chgCData(oldp+2853,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_41),2);
            tracep->chgCData(oldp+2854,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_42),2);
            tracep->chgCData(oldp+2855,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_43),2);
            tracep->chgCData(oldp+2856,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_44),2);
            tracep->chgCData(oldp+2857,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_45),2);
            tracep->chgCData(oldp+2858,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_46),2);
            tracep->chgCData(oldp+2859,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_47),2);
            tracep->chgCData(oldp+2860,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_48),2);
            tracep->chgCData(oldp+2861,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_49),2);
            tracep->chgCData(oldp+2862,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_50),2);
            tracep->chgCData(oldp+2863,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_51),2);
            tracep->chgCData(oldp+2864,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_52),2);
            tracep->chgCData(oldp+2865,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_53),2);
            tracep->chgCData(oldp+2866,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_54),2);
            tracep->chgCData(oldp+2867,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_55),2);
            tracep->chgCData(oldp+2868,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_56),2);
            tracep->chgCData(oldp+2869,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_57),2);
            tracep->chgCData(oldp+2870,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_58),2);
            tracep->chgCData(oldp+2871,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_59),2);
            tracep->chgCData(oldp+2872,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_60),2);
            tracep->chgCData(oldp+2873,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_61),2);
            tracep->chgCData(oldp+2874,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_62),2);
            tracep->chgCData(oldp+2875,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_63),2);
            tracep->chgCData(oldp+2876,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__reg_head),3);
            tracep->chgCData(oldp+2877,((0x3fU & (IData)(
                                                         (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                                          >> 3U)))),6);
            tracep->chgWData(oldp+2878,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__update_btb_data),123);
            tracep->chgCData(oldp+2882,((0x3fU & (IData)(
                                                         (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0 
                                                          >> 3U)))),6);
            tracep->chgQData(oldp+2883,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__tag),56);
            tracep->chgBit(oldp+2885,((1U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___GEN_447) 
                                             >> 1U))));
            tracep->chgBit(oldp+2886,((1U & (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___GEN_511[3U] 
                                             >> 0x1aU))));
            tracep->chgQData(oldp+2887,((0xffffffffffffffULL 
                                         & (((QData)((IData)(
                                                             vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___GEN_511[3U])) 
                                             << 0x1eU) 
                                            | ((QData)((IData)(
                                                               vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___GEN_511[2U])) 
                                               >> 2U)))),56);
            tracep->chgQData(oldp+2889,((((QData)((IData)(
                                                          vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___GEN_511[2U])) 
                                          << 0x3eU) 
                                         | (((QData)((IData)(
                                                             vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___GEN_511[1U])) 
                                             << 0x1eU) 
                                            | ((QData)((IData)(
                                                               vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___GEN_511[0U])) 
                                               >> 2U)))),64);
            tracep->chgCData(oldp+2891,((3U & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___GEN_511[0U])),2);
            tracep->chgBit(oldp+2892,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__pre_valid));
            tracep->chgBit(oldp+2893,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu_io_valid));
            tracep->chgBit(oldp+2894,(((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_opType)) 
                                       & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu_io_valid))));
            tracep->chgBit(oldp+2895,(((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__br_valid) 
                                       & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__flush))));
            tracep->chgQData(oldp+2896,(((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__br_valid)
                                          ? vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_pc
                                          : 0ULL)),64);
            tracep->chgBit(oldp+2898,(((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__br_valid) 
                                       & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[2U])));
            tracep->chgQData(oldp+2899,(((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__br_valid)
                                          ? (((QData)((IData)(
                                                              vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[1U])) 
                                              << 0x20U) 
                                             | (QData)((IData)(
                                                               vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[0U])))
                                          : 0ULL)),64);
            tracep->chgQData(oldp+2901,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu_io_op_data1),64);
            tracep->chgQData(oldp+2903,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu_io_op_data2),64);
            tracep->chgQData(oldp+2905,(((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu_io_valid)
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
            tracep->chgBit(oldp+2907,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu_io_valid_next_pc));
            tracep->chgQData(oldp+2908,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu_io_next_pc),64);
            tracep->chgBit(oldp+2910,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu_io_valid));
            tracep->chgQData(oldp+2911,((((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute_io_wb_valid) 
                                          & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_dest_addr) 
                                             == (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs1_addr)))
                                          ? vlSelf->riscv_soc__DOT__core__DOT__execute_io_wb_dest_data
                                          : vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs1_data)),64);
            tracep->chgQData(oldp+2913,((((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute_io_wb_valid) 
                                          & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_dest_addr) 
                                             == (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs2_addr)))
                                          ? vlSelf->riscv_soc__DOT__core__DOT__execute_io_wb_dest_data
                                          : vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs2_data)),64);
            tracep->chgQData(oldp+2915,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_result_data),64);
            tracep->chgBit(oldp+2917,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_w_rs_en));
            tracep->chgBit(oldp+2918,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_ready));
            tracep->chgBit(oldp+2919,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu_io_valid));
            tracep->chgQData(oldp+2920,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu_io_rs2_data),64);
            tracep->chgQData(oldp+2922,(((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_dest_is_w)
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
            tracep->chgBit(oldp+2924,(((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_dest_is_w) 
                                       | (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_dest_is_w))));
            tracep->chgBit(oldp+2925,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu_io_ready));
            tracep->chgBit(oldp+2926,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu_io_valid));
            tracep->chgQData(oldp+2927,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu_io_csr_data),64);
            tracep->chgBit(oldp+2929,(((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu_io_valid) 
                                       & ((0U != (7U 
                                                  & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                                     >> 2U))) 
                                          | (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu__DOT__is_ret)))));
            tracep->chgQData(oldp+2930,(((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu__DOT__is_ret)
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
            tracep->chgSData(oldp+2932,(((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu__DOT__is_ret)
                                          ? 0x300U : (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_csr_addr))),12);
            tracep->chgBit(oldp+2933,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu_io_is_except));
            tracep->chgCData(oldp+2934,(((0U == (0x1fU 
                                                 & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                                    >> 2U)))
                                          ? 0xbU : 
                                         ((8U == (0x1fU 
                                                  & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                                     >> 2U)))
                                           ? 3U : 0U))),6);
            tracep->chgBit(oldp+2935,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu_io_valid_next_pc));
            tracep->chgBit(oldp+2936,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__in_data_valid));
            tracep->chgCData(oldp+2937,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_valid),4);
            tracep->chgBit(oldp+2938,((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_valid))));
            tracep->chgBit(oldp+2939,((1U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_valid) 
                                             >> 1U))));
            tracep->chgBit(oldp+2940,((1U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_valid) 
                                             >> 2U))));
            tracep->chgBit(oldp+2941,((1U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_valid) 
                                             >> 3U))));
            tracep->chgCData(oldp+2942,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__valid),4);
            tracep->chgBit(oldp+2943,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_sys_alu_w_valid));
            tracep->chgQData(oldp+2944,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_sys_alu_wdata),64);
            tracep->chgBit(oldp+2946,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_csr_is_w));
            tracep->chgBit(oldp+2947,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_is_except));
            tracep->chgBit(oldp+2948,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_is_time_irq));
            tracep->chgBit(oldp+2949,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_is_soft_irq));
            tracep->chgBit(oldp+2950,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__time_irq));
            tracep->chgBit(oldp+2951,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__soft_irq));
            tracep->chgBit(oldp+2952,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__irq));
            tracep->chgBit(oldp+2953,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_valid_next_pc));
            tracep->chgBit(oldp+2954,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_fence_i));
            tracep->chgBit(oldp+2955,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_commit));
            tracep->chgBit(oldp+2956,((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType))));
            tracep->chgQData(oldp+2957,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__op_data1),64);
            tracep->chgQData(oldp+2959,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__op_data2),64);
            tracep->chgQData(oldp+2961,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__op_imm),64);
            tracep->chgBit(oldp+2963,((1U & (~ ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                                >> 1U)))));
            tracep->chgQData(oldp+2964,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__rs2_data),64);
            tracep->chgBit(oldp+2966,((3U == (3U & 
                                              ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                               >> 5U)))));
            tracep->chgBit(oldp+2967,((1U == (3U & 
                                              ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                               >> 5U)))));
            tracep->chgQData(oldp+2968,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__rs1_data),64);
            tracep->chgQData(oldp+2970,(((1U == (3U 
                                                 & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                                    >> 5U)))
                                          ? (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__rs2_data)
                                          : vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__rs2_data)),64);
            tracep->chgWData(oldp+2972,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__add_sub_result),65);
            tracep->chgBit(oldp+2975,((1U & (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__add_sub_result[2U]))));
            tracep->chgBit(oldp+2976,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__s_rs1_l_rs2));
            tracep->chgCData(oldp+2977,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__shift_rs2_data),6);
            VL_EXTEND_WQ(127,64, __Vtemp3385, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__op_data1);
            VL_SHIFTL_WWI(127,127,6, __Vtemp3386, __Vtemp3385, (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__shift_rs2_data));
            __Vtemp3387[0U] = __Vtemp3386[0U];
            __Vtemp3387[1U] = __Vtemp3386[1U];
            __Vtemp3387[2U] = __Vtemp3386[2U];
            __Vtemp3387[3U] = (0x7fffffffU & __Vtemp3386[3U]);
            tracep->chgWData(oldp+2978,(__Vtemp3387),127);
            tracep->chgQData(oldp+2982,((((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType))
                                           ? (QData)((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__op_data1))
                                           : vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__op_data1) 
                                         >> (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__shift_rs2_data))),64);
            tracep->chgQData(oldp+2984,(VL_SHIFTRS_QQI(64,64,6, 
                                                       ((1U 
                                                         & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType))
                                                         ? vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___op_data1_T_4
                                                         : vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu_io_op_data1), (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__shift_rs2_data))),64);
            tracep->chgQData(oldp+2986,(((1U == (3U 
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
            tracep->chgCData(oldp+2988,((7U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                               >> 2U))),3);
            tracep->chgQData(oldp+2989,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__result_data),64);
            tracep->chgBit(oldp+2991,((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_opType))));
            tracep->chgBit(oldp+2992,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__is_eq));
            tracep->chgQData(oldp+2993,(((2U == (7U 
                                                 & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                                    >> 2U)))
                                          ? vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu_io_op_data1
                                          : vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_pc)),64);
            __Vtemp3388[0U] = (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___add_pc_T_1);
            __Vtemp3388[1U] = (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___add_pc_T_1 
                                       >> 0x20U));
            __Vtemp3388[2U] = 1U;
            tracep->chgWData(oldp+2995,(__Vtemp3388),65);
            tracep->chgQData(oldp+2998,((4ULL + vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_pc)),64);
            tracep->chgWData(oldp+3000,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc),65);
            tracep->chgQData(oldp+3003,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__dst_data),64);
            tracep->chgQData(oldp+3005,((((QData)((IData)(
                                                          vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[1U])) 
                                          << 0x20U) 
                                         | (QData)((IData)(
                                                           vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[0U])))),64);
            tracep->chgBit(oldp+3007,((1U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[2U])));
            tracep->chgBit(oldp+3008,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__br_valid));
            tracep->chgBit(oldp+3009,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__flush));
            tracep->chgQData(oldp+3010,((((QData)((IData)(
                                                          ((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_imm 
                                                            >> 0x1fU)
                                                            ? 0xffffffffU
                                                            : 0U))) 
                                          << 0x20U) 
                                         | (QData)((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_imm)))),64);
            tracep->chgQData(oldp+3012,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_bus_addr),64);
            tracep->chgQData(oldp+3014,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_bus_wdata),64);
            tracep->chgCData(oldp+3016,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_bus_wstrb),8);
            tracep->chgBit(oldp+3017,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_bus_is_w));
            tracep->chgBit(oldp+3018,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_bus_valid));
            tracep->chgCData(oldp+3019,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_exuType),7);
            tracep->chgQData(oldp+3020,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__mem_r_data),64);
            tracep->chgQData(oldp+3022,(((0x18U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_exuType))
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
            tracep->chgQData(oldp+3024,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__mem_addr),64);
            tracep->chgBit(oldp+3026,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__w_mem_en));
            tracep->chgQData(oldp+3027,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__mem_wstrb),64);
            tracep->chgBit(oldp+3029,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_ls_state));
            tracep->chgWData(oldp+3030,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__mem_w_data),127);
            tracep->chgBit(oldp+3034,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__chose_chancel));
            tracep->chgBit(oldp+3035,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div_io_valid));
            tracep->chgQData(oldp+3036,(((8U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_exuType))
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
            tracep->chgBit(oldp+3038,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_dest_is_w));
            tracep->chgBit(oldp+3039,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_ready));
            tracep->chgBit(oldp+3040,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul_io_valid));
            tracep->chgQData(oldp+3041,(((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_exuType))
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
            tracep->chgBit(oldp+3043,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_dest_is_w));
            tracep->chgBit(oldp+3044,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_ready));
            tracep->chgBit(oldp+3045,((1U & (~ ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                                >> 2U)))));
            tracep->chgWData(oldp+3046,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__dividend),65);
            tracep->chgWData(oldp+3049,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__divisor),65);
            tracep->chgWData(oldp+3052,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__rem),65);
            tracep->chgWData(oldp+3055,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor),65);
            tracep->chgWData(oldp+3058,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_dividend),66);
            tracep->chgWData(oldp+3061,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem),65);
            tracep->chgWData(oldp+3064,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_q),66);
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
            tracep->chgWData(oldp+3067,(__Vtemp3393),65);
            tracep->chgCData(oldp+3070,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state),2);
            tracep->chgCData(oldp+3071,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_cnt),7);
            tracep->chgCData(oldp+3072,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_exuType),7);
            tracep->chgWData(oldp+3073,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__temp_result),132);
            tracep->chgBit(oldp+3078,((0U == ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[0U] 
                                               | vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[1U]) 
                                              | vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[2U]))));
            __Vtemp3396[0U] = 1U;
            __Vtemp3396[1U] = 0U;
            __Vtemp3396[2U] = 0U;
            __Vtemp3397[0U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[0U]);
            __Vtemp3397[1U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[1U]);
            __Vtemp3397[2U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[2U]);
            VL_ADD_W(3, __Vtemp3398, __Vtemp3396, __Vtemp3397);
            tracep->chgBit(oldp+3079,((0U == (((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[0U] 
                                                ^ __Vtemp3398[0U]) 
                                               | (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[1U] 
                                                  ^ 
                                                  __Vtemp3398[1U])) 
                                              | (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[2U] 
                                                 ^ 
                                                 (1U 
                                                  & __Vtemp3398[2U]))))));
            tracep->chgBit(oldp+3080,((0U == (((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[0U] 
                                                ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[0U]) 
                                               | (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[1U] 
                                                  ^ 
                                                  vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[1U])) 
                                              | (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[2U] 
                                                 ^ 
                                                 vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[2U])))));
            tracep->chgBit(oldp+3081,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__is_need_correct));
            tracep->chgBit(oldp+3082,((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_exuType))));
            tracep->chgBit(oldp+3083,((1U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_exuType) 
                                             >> 3U))));
            tracep->chgQData(oldp+3084,(((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_exuType))
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
            tracep->chgQData(oldp+3086,(((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_exuType))
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
            tracep->chgBit(oldp+3088,((1U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                             >> 2U))));
            tracep->chgBit(oldp+3089,((1U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                             >> 1U))));
            VL_EXTEND_WQ(130,64, __Vtemp3410, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu_io_op_data1);
            if ((4U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType))) {
                __Vtemp3414[0U] = (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu_io_op_data1);
                __Vtemp3414[1U] = ((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu_io_op_data1 
                                                  >> 0x1fU)))
                                    ? 0xffffffffU : 0U);
                __Vtemp3414[2U] = ((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu_io_op_data1 
                                                  >> 0x1fU)))
                                    ? 0xffffffffU : 0U);
                __Vtemp3414[3U] = ((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu_io_op_data1 
                                                  >> 0x1fU)))
                                    ? 0xffffffffU : 0U);
                __Vtemp3414[4U] = ((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu_io_op_data1 
                                                  >> 0x1fU)))
                                    ? 3U : 0U);
            } else {
                __Vtemp3414[0U] = ((2U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType))
                                    ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu_io_op_data1)
                                    : __Vtemp3410[0U]);
                __Vtemp3414[1U] = ((2U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType))
                                    ? (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu_io_op_data1 
                                               >> 0x20U))
                                    : __Vtemp3410[1U]);
                __Vtemp3414[2U] = ((2U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType))
                                    ? ((1U & (IData)(
                                                     (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu_io_op_data1 
                                                      >> 0x3fU)))
                                        ? 0xffffffffU
                                        : 0U) : __Vtemp3410[2U]);
                __Vtemp3414[3U] = ((2U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType))
                                    ? ((1U & (IData)(
                                                     (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu_io_op_data1 
                                                      >> 0x3fU)))
                                        ? 0xffffffffU
                                        : 0U) : __Vtemp3410[3U]);
                __Vtemp3414[4U] = ((2U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType))
                                    ? ((1U & (IData)(
                                                     (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu_io_op_data1 
                                                      >> 0x3fU)))
                                        ? 3U : 0U) : 
                                   __Vtemp3410[4U]);
            }
            tracep->chgWData(oldp+3090,(__Vtemp3414),130);
            tracep->chgWData(oldp+3095,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__mul_data2),65);
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
            tracep->chgWData(oldp+3098,(__Vtemp3416),67);
            tracep->chgCData(oldp+3101,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_state),2);
            tracep->chgWData(oldp+3102,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2),67);
            tracep->chgWData(oldp+3105,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1),130);
            tracep->chgWData(oldp+3110,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_result),130);
            tracep->chgCData(oldp+3115,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_exuType),7);
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
            tracep->chgWData(oldp+3116,(__Vtemp3449),131);
            tracep->chgCData(oldp+3121,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_cnt),7);
            tracep->chgBit(oldp+3122,((0U == (3U & 
                                              ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_exuType) 
                                               >> 2U)))));
            tracep->chgBit(oldp+3123,((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_exuType))));
            tracep->chgQData(oldp+3124,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu__DOT__imm),64);
            tracep->chgBit(oldp+3126,((1U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                             >> 4U))));
            tracep->chgQData(oldp+3127,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu__DOT__op_data),64);
            tracep->chgQData(oldp+3129,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu__DOT__or_result),64);
            tracep->chgQData(oldp+3131,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu__DOT__and_result),64);
            tracep->chgQData(oldp+3133,(((7U == (7U 
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
            tracep->chgBit(oldp+3135,((0x10U == (0x1fU 
                                                 & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                                    >> 2U)))));
            tracep->chgBit(oldp+3136,((0x18U == (0x1fU 
                                                 & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                                    >> 2U)))));
            tracep->chgBit(oldp+3137,((0U == (0x1fU 
                                              & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                                 >> 2U)))));
            tracep->chgBit(oldp+3138,((8U == (0x1fU 
                                              & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                                 >> 2U)))));
            tracep->chgBit(oldp+3139,(((0U == (0x1fU 
                                               & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                                  >> 2U))) 
                                       | (8U == (0x1fU 
                                                 & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                                    >> 2U))))));
            tracep->chgCData(oldp+3140,(((0U == (0x1fU 
                                                 & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                                    >> 2U)))
                                          ? 0xbU : 
                                         ((8U == (0x1fU 
                                                  & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                                     >> 2U)))
                                           ? 3U : 0U))),4);
            tracep->chgBit(oldp+3141,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu__DOT__is_ret));
            tracep->chgQData(oldp+3142,(((0xffffffffffffff77ULL 
                                          & vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg_io_r_csr_mstatus) 
                                         | (QData)((IData)(
                                                           ((1U 
                                                             & (IData)(
                                                                       (vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg_io_r_csr_mstatus 
                                                                        >> 7U)))
                                                             ? 0x88U
                                                             : 0x80U))))),64);
            tracep->chgCData(oldp+3144,((0x1fU & (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst 
                                                  >> 7U))),5);
            tracep->chgCData(oldp+3145,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__instType),4);
            tracep->chgCData(oldp+3146,(((0x33U == 
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
            tracep->chgCData(oldp+3147,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__rs1_is_reg),2);
            tracep->chgCData(oldp+3148,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__rs2_is_reg),2);
            tracep->chgBit(oldp+3149,((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__rs1_is_reg))));
            tracep->chgBit(oldp+3150,((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__rs2_is_reg))));
            tracep->chgCData(oldp+3151,((0x1fU & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_exception))),5);
            tracep->chgBit(oldp+3152,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__irq));
            tracep->chgQData(oldp+3153,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__reg_mstatus),64);
            tracep->chgQData(oldp+3155,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__reg_mie),64);
            tracep->chgQData(oldp+3157,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__reg_mtvec),64);
            tracep->chgQData(oldp+3159,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__reg_mscratch),64);
            tracep->chgQData(oldp+3161,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__reg_mepc),64);
            tracep->chgQData(oldp+3163,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__reg_mcause),64);
            tracep->chgQData(oldp+3165,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__reg_mtval),64);
            tracep->chgQData(oldp+3167,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__reg_mcycle),64);
            tracep->chgQData(oldp+3169,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__reg_minstret),64);
            tracep->chgQData(oldp+3171,(((0xb02U == 
                                          (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst 
                                           >> 0x14U))
                                          ? vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__reg_minstret
                                          : vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT___csr_rdata_T_33)),64);
            tracep->chgQData(oldp+3173,(vlSelf->riscv_soc__DOT__core__DOT__clint_de__DOT__reg_mtime),64);
            tracep->chgQData(oldp+3175,(vlSelf->riscv_soc__DOT__core__DOT__clint_de__DOT__reg_mtimecmp),64);
            tracep->chgBit(oldp+3177,(vlSelf->riscv_soc__DOT__core__DOT__clint_de__DOT__reg_state));
            tracep->chgBit(oldp+3178,((0U == (0xffffU 
                                              & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu_io_bus_bits_addr)))));
            tracep->chgBit(oldp+3179,((0x4000U == (0xffffU 
                                                   & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu_io_bus_bits_addr)))));
            tracep->chgQData(oldp+3180,(((IData)(vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_r_valid)
                                          ? vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_raddr
                                          : vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_AXI_Bus_ar_bits_araddr)),64);
            tracep->chgQData(oldp+3182,(vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_w_addr),64);
            tracep->chgQData(oldp+3184,((((QData)((IData)(
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
            tracep->chgBit(oldp+3186,(((IData)(vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_is_w) 
                                       & (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_AXI_Bus_w_valid))));
            tracep->chgQData(oldp+3187,(vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_raddr),64);
            tracep->chgCData(oldp+3189,(vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_rlen),4);
            tracep->chgBit(oldp+3190,(vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_r_state));
            tracep->chgBit(oldp+3191,(vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_is_w));
            tracep->chgIData(oldp+3192,(((((8U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_AXI_Bus_w_bits_wstrb))
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
            tracep->chgIData(oldp+3193,(((((0x80U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_AXI_Bus_w_bits_wstrb))
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
        tracep->chgBit(oldp+3194,(vlSelf->clock));
        tracep->chgBit(oldp+3195,(vlSelf->reset));
        tracep->chgQData(oldp+3196,(vlSelf->io_difftest_reg_0),64);
        tracep->chgQData(oldp+3198,(vlSelf->io_difftest_reg_1),64);
        tracep->chgQData(oldp+3200,(vlSelf->io_difftest_reg_2),64);
        tracep->chgQData(oldp+3202,(vlSelf->io_difftest_reg_3),64);
        tracep->chgQData(oldp+3204,(vlSelf->io_difftest_reg_4),64);
        tracep->chgQData(oldp+3206,(vlSelf->io_difftest_reg_5),64);
        tracep->chgQData(oldp+3208,(vlSelf->io_difftest_reg_6),64);
        tracep->chgQData(oldp+3210,(vlSelf->io_difftest_reg_7),64);
        tracep->chgQData(oldp+3212,(vlSelf->io_difftest_reg_8),64);
        tracep->chgQData(oldp+3214,(vlSelf->io_difftest_reg_9),64);
        tracep->chgQData(oldp+3216,(vlSelf->io_difftest_reg_10),64);
        tracep->chgQData(oldp+3218,(vlSelf->io_difftest_reg_11),64);
        tracep->chgQData(oldp+3220,(vlSelf->io_difftest_reg_12),64);
        tracep->chgQData(oldp+3222,(vlSelf->io_difftest_reg_13),64);
        tracep->chgQData(oldp+3224,(vlSelf->io_difftest_reg_14),64);
        tracep->chgQData(oldp+3226,(vlSelf->io_difftest_reg_15),64);
        tracep->chgQData(oldp+3228,(vlSelf->io_difftest_reg_16),64);
        tracep->chgQData(oldp+3230,(vlSelf->io_difftest_reg_17),64);
        tracep->chgQData(oldp+3232,(vlSelf->io_difftest_reg_18),64);
        tracep->chgQData(oldp+3234,(vlSelf->io_difftest_reg_19),64);
        tracep->chgQData(oldp+3236,(vlSelf->io_difftest_reg_20),64);
        tracep->chgQData(oldp+3238,(vlSelf->io_difftest_reg_21),64);
        tracep->chgQData(oldp+3240,(vlSelf->io_difftest_reg_22),64);
        tracep->chgQData(oldp+3242,(vlSelf->io_difftest_reg_23),64);
        tracep->chgQData(oldp+3244,(vlSelf->io_difftest_reg_24),64);
        tracep->chgQData(oldp+3246,(vlSelf->io_difftest_reg_25),64);
        tracep->chgQData(oldp+3248,(vlSelf->io_difftest_reg_26),64);
        tracep->chgQData(oldp+3250,(vlSelf->io_difftest_reg_27),64);
        tracep->chgQData(oldp+3252,(vlSelf->io_difftest_reg_28),64);
        tracep->chgQData(oldp+3254,(vlSelf->io_difftest_reg_29),64);
        tracep->chgQData(oldp+3256,(vlSelf->io_difftest_reg_30),64);
        tracep->chgQData(oldp+3258,(vlSelf->io_difftest_reg_31),64);
        tracep->chgQData(oldp+3260,(vlSelf->io_difftest_pc),64);
        tracep->chgIData(oldp+3262,(vlSelf->io_difftest_inst),32);
        tracep->chgBit(oldp+3263,(vlSelf->io_difftest_commit));
        tracep->chgQData(oldp+3264,(vlSelf->io_inst_counter),64);
        tracep->chgBit(oldp+3266,(vlSelf->io_difftest_irq));
        tracep->chgQData(oldp+3267,(vlSelf->io_difftest_mstatus),64);
        tracep->chgQData(oldp+3269,(vlSelf->io_difftest_mcause),64);
        tracep->chgQData(oldp+3271,(vlSelf->io_difftest_mepc),64);
        tracep->chgQData(oldp+3273,(vlSelf->io_difftest_mtvec),64);
        tracep->chgBit(oldp+3275,(vlSelf->io_difftest_peripheral));
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
