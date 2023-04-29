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
    VlWide<4>/*127:0*/ __Vtemp3378;
    VlWide<4>/*127:0*/ __Vtemp3379;
    VlWide<4>/*127:0*/ __Vtemp3381;
    VlWide<4>/*127:0*/ __Vtemp3382;
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
            tracep->chgCData(oldp+20,(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_data_addr),6);
            tracep->chgBit(oldp+21,((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram0_write)))));
            tracep->chgWData(oldp+22,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata),128);
            tracep->chgWData(oldp+26,(vlSelf->riscv_soc__DOT__sram0__DOT__Q),128);
            tracep->chgCData(oldp+30,(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_tag_addr),6);
            VL_EXTEND_WQ(128,54, __Vtemp3369, (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                               >> 0xaU));
            tracep->chgWData(oldp+31,(__Vtemp3369),128);
            tracep->chgWData(oldp+35,(vlSelf->riscv_soc__DOT__sram1__DOT__Q),128);
            tracep->chgCData(oldp+39,(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_data_addr),6);
            tracep->chgBit(oldp+40,((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram1_write)))));
            tracep->chgWData(oldp+41,(vlSelf->riscv_soc__DOT__sram2__DOT__Q),128);
            tracep->chgCData(oldp+45,(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_tag_addr),6);
            tracep->chgWData(oldp+46,(vlSelf->riscv_soc__DOT__sram3__DOT__Q),128);
            tracep->chgCData(oldp+50,(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_data_addr),6);
            tracep->chgBit(oldp+51,((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram0_write)))));
            __Vtemp3370[0U] = (~ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__cache_mask[0U]);
            __Vtemp3370[1U] = (~ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__cache_mask[1U]);
            __Vtemp3370[2U] = (~ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__cache_mask[2U]);
            __Vtemp3370[3U] = (~ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__cache_mask[3U]);
            tracep->chgWData(oldp+52,(__Vtemp3370),128);
            tracep->chgWData(oldp+56,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_wdata),128);
            tracep->chgWData(oldp+60,(vlSelf->riscv_soc__DOT__sram4__DOT__Q),128);
            tracep->chgCData(oldp+64,(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_tag_addr),6);
            VL_EXTEND_WQ(128,54, __Vtemp3371, vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag);
            tracep->chgWData(oldp+65,(__Vtemp3371),128);
            tracep->chgWData(oldp+69,(vlSelf->riscv_soc__DOT__sram5__DOT__Q),128);
            tracep->chgCData(oldp+73,(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_data_addr),6);
            tracep->chgBit(oldp+74,((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram2_write)))));
            tracep->chgWData(oldp+75,(vlSelf->riscv_soc__DOT__sram6__DOT__Q),128);
            tracep->chgCData(oldp+79,(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_tag_addr),6);
            tracep->chgWData(oldp+80,(vlSelf->riscv_soc__DOT__sram7__DOT__Q),128);
            tracep->chgBit(oldp+84,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__difftest_irq));
            tracep->chgBit(oldp+85,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__difftest_peripheral));
            tracep->chgBit(oldp+86,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__difftest_commit));
            tracep->chgQData(oldp+87,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__difftest_pc),64);
            tracep->chgIData(oldp+89,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__difftest_inst),32);
            tracep->chgQData(oldp+90,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_0),64);
            tracep->chgQData(oldp+92,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_1),64);
            tracep->chgQData(oldp+94,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_2),64);
            tracep->chgQData(oldp+96,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_3),64);
            tracep->chgQData(oldp+98,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_4),64);
            tracep->chgQData(oldp+100,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_5),64);
            tracep->chgQData(oldp+102,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_6),64);
            tracep->chgQData(oldp+104,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_7),64);
            tracep->chgQData(oldp+106,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_8),64);
            tracep->chgQData(oldp+108,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_9),64);
            tracep->chgQData(oldp+110,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_10),64);
            tracep->chgQData(oldp+112,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_11),64);
            tracep->chgQData(oldp+114,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_12),64);
            tracep->chgQData(oldp+116,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_13),64);
            tracep->chgQData(oldp+118,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_14),64);
            tracep->chgQData(oldp+120,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_15),64);
            tracep->chgQData(oldp+122,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_16),64);
            tracep->chgQData(oldp+124,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_17),64);
            tracep->chgQData(oldp+126,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_18),64);
            tracep->chgQData(oldp+128,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_19),64);
            tracep->chgQData(oldp+130,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_20),64);
            tracep->chgQData(oldp+132,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_21),64);
            tracep->chgQData(oldp+134,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_22),64);
            tracep->chgQData(oldp+136,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_23),64);
            tracep->chgQData(oldp+138,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_24),64);
            tracep->chgQData(oldp+140,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_25),64);
            tracep->chgQData(oldp+142,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_26),64);
            tracep->chgQData(oldp+144,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_27),64);
            tracep->chgQData(oldp+146,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_28),64);
            tracep->chgQData(oldp+148,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_29),64);
            tracep->chgQData(oldp+150,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_30),64);
            tracep->chgQData(oldp+152,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_31),64);
            tracep->chgQData(oldp+154,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__inst_counter),64);
            tracep->chgQData(oldp+156,((QData)((IData)(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__difftest_inst))),64);
            tracep->chgBit(oldp+158,(vlSelf->riscv_soc__DOT__core__DOT__fetch_io_out_flush));
            tracep->chgBit(oldp+159,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1_io_cpu_addr_ready));
            tracep->chgBit(oldp+160,(((0ULL != (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0 
                                                >> 0x1fU)) 
                                      & (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_bus_valid))));
            tracep->chgQData(oldp+161,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0),64);
            tracep->chgBit(oldp+163,((3U > (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__reg_ibuf_size))));
            tracep->chgBit(oldp+164,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_valid));
            tracep->chgQData(oldp+165,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_rdata),64);
            tracep->chgQData(oldp+167,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr),64);
            tracep->chgBit(oldp+169,(vlSelf->riscv_soc__DOT__core__DOT__execute_io_fence_i));
            tracep->chgBit(oldp+170,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_r_valid));
            tracep->chgQData(oldp+171,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_r_raddr),64);
            tracep->chgBit(oldp+173,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_ICache_bus_r_bits_rlast));
            tracep->chgBit(oldp+174,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_ICache_bus_r_ready));
            tracep->chgBit(oldp+175,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1_io_DCache_valid));
            tracep->chgQData(oldp+176,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu_io_bus_bits_addr),64);
            tracep->chgQData(oldp+178,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_rdata),64);
            tracep->chgQData(oldp+180,((((QData)((IData)(
                                                         vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT___io_bus_bits_wdata_T[1U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT___io_bus_bits_wdata_T[0U])))),64);
            tracep->chgCData(oldp+182,((0xffU & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT___io_bus_bits_wstrb_T))),8);
            tracep->chgBit(oldp+183,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu_io_bus_bits_is_w));
            tracep->chgBit(oldp+184,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_ready));
            tracep->chgBit(oldp+185,(((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__w_chosen)) 
                                      & (IData)(vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_w_ready))));
            tracep->chgBit(oldp+186,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_w_valid));
            tracep->chgQData(oldp+187,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_w_waddr),64);
            tracep->chgQData(oldp+189,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_w_wdata),64);
            tracep->chgBit(oldp+191,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_w_wlast));
            tracep->chgBit(oldp+192,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_b_ready));
            tracep->chgBit(oldp+193,(((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__w_chosen)) 
                                      & (IData)(vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_b_valid))));
            tracep->chgBit(oldp+194,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_r_valid));
            tracep->chgQData(oldp+195,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_r_raddr),64);
            tracep->chgBit(oldp+197,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_DCache_bus_r_bits_rlast));
            tracep->chgBit(oldp+198,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_DCache_bus_r_ready));
            tracep->chgBit(oldp+199,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1_io_bus1_valid));
            tracep->chgBit(oldp+200,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_bus1_ready));
            tracep->chgBit(oldp+201,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1_io_bus2_valid));
            tracep->chgBit(oldp+202,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_bus2_ready));
            tracep->chgBit(oldp+203,(((0ULL != (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0 
                                                >> 0x1fU))
                                       ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1_io_cpu_addr_ready)
                                       : (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_bus1_ready))));
            tracep->chgBit(oldp+204,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_bus_valid));
            tracep->chgBit(oldp+205,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1_io_fetch_cpu_data_valid));
            tracep->chgQData(oldp+206,(((0ULL != (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0 
                                                  >> 0x1fU))
                                         ? vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_rdata
                                         : vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata)),64);
            tracep->chgQData(oldp+208,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1_io_fetch_cpu_data_bits_pc),64);
            tracep->chgBit(oldp+210,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu_io_bus_valid));
            tracep->chgQData(oldp+211,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1_io_wb_bits_rdata),64);
            tracep->chgBit(oldp+213,(((0ULL != (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu_io_bus_bits_addr 
                                                >> 0x1fU))
                                       ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_ready)
                                       : ((IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1__DOT__not_clint)
                                           ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_bus2_ready)
                                           : (IData)(vlSelf->riscv_soc__DOT__core__DOT__clint_de__DOT__reg_ready)))));
            tracep->chgBit(oldp+214,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1_io_clint_bus_valid));
            tracep->chgQData(oldp+215,(vlSelf->riscv_soc__DOT__core__DOT__clint_de__DOT__red_rdata),64);
            tracep->chgBit(oldp+217,(vlSelf->riscv_soc__DOT__core__DOT__clint_de__DOT__reg_ready));
            tracep->chgBit(oldp+218,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_valid));
            tracep->chgBit(oldp+219,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_mispredict));
            tracep->chgQData(oldp+220,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc),64);
            tracep->chgBit(oldp+222,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_taken));
            tracep->chgQData(oldp+223,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_next_pc),64);
            tracep->chgBit(oldp+225,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__is_pre));
            tracep->chgQData(oldp+226,(((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__is_pre)
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
            tracep->chgQData(oldp+228,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_next_pc),64);
            tracep->chgBit(oldp+230,(vlSelf->riscv_soc__DOT__core__DOT__execute_io_flush));
            tracep->chgBit(oldp+231,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__ready));
            tracep->chgBit(oldp+232,(((3U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__reg_tail))
                                       ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_valid_3)
                                       : (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT___GEN_2))));
            tracep->chgIData(oldp+233,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst),32);
            tracep->chgQData(oldp+234,(((3U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__reg_tail))
                                         ? vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_pc_3
                                         : ((2U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__reg_tail))
                                             ? vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_pc_2
                                             : ((1U 
                                                 == (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__reg_tail))
                                                 ? vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_pc_1
                                                 : vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_pc_0)))),64);
            tracep->chgBit(oldp+236,(((3U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__reg_tail))
                                       ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_is_pre_3)
                                       : ((2U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__reg_tail))
                                           ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_is_pre_2)
                                           : ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__reg_tail))
                                               ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_is_pre_1)
                                               : (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_is_pre_0))))));
            tracep->chgBit(oldp+237,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_valid));
            tracep->chgCData(oldp+238,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_opType),3);
            tracep->chgCData(oldp+239,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType),7);
            tracep->chgCData(oldp+240,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs1_addr),5);
            tracep->chgQData(oldp+241,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs1_data),64);
            tracep->chgCData(oldp+243,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs2_addr),5);
            tracep->chgQData(oldp+244,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs2_data),64);
            tracep->chgIData(oldp+246,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_imm),32);
            tracep->chgQData(oldp+247,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_pc),64);
            tracep->chgIData(oldp+249,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_inst),32);
            tracep->chgCData(oldp+250,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_dest_addr),5);
            tracep->chgBit(oldp+251,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_dest_is_reg));
            tracep->chgBit(oldp+252,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_is_pre));
            tracep->chgSData(oldp+253,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_csr_addr),12);
            tracep->chgQData(oldp+254,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_csr_data),64);
            tracep->chgBit(oldp+256,((vlSelf->riscv_soc__DOT__core__DOT__clint_de__DOT__reg_mtimecmp 
                                      <= vlSelf->riscv_soc__DOT__core__DOT__clint_de__DOT__reg_mtime)));
            tracep->chgBit(oldp+257,(vlSelf->riscv_soc__DOT__core__DOT__clint_de__DOT__reg_msip));
            tracep->chgQData(oldp+258,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg_io_r_csr_mstatus),64);
            tracep->chgQData(oldp+260,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg_io_r_csr_mie),64);
            tracep->chgQData(oldp+262,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg_io_r_csr_mepc),64);
            tracep->chgQData(oldp+264,((((0x305U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_csr_addr)) 
                                         & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute_io_csr_valid))
                                         ? vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_csr_data
                                         : vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__reg_mtvec)),64);
            tracep->chgBit(oldp+266,(vlSelf->riscv_soc__DOT__core__DOT__execute_io_wb_valid));
            tracep->chgCData(oldp+267,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_dest_addr),5);
            tracep->chgQData(oldp+268,(vlSelf->riscv_soc__DOT__core__DOT__execute_io_wb_dest_data),64);
            tracep->chgBit(oldp+270,(vlSelf->riscv_soc__DOT__core__DOT__execute_io_csr_valid));
            tracep->chgSData(oldp+271,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_csr_addr),12);
            tracep->chgQData(oldp+272,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_csr_data),64);
            tracep->chgBit(oldp+274,(vlSelf->riscv_soc__DOT__core__DOT__execute_io_csr_except_is_except));
            tracep->chgBit(oldp+275,(vlSelf->riscv_soc__DOT__core__DOT__execute_io_csr_except_is_time_irq));
            tracep->chgBit(oldp+276,(vlSelf->riscv_soc__DOT__core__DOT__execute_io_csr_except_is_soft_irq));
            tracep->chgCData(oldp+277,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_exception),6);
            tracep->chgQData(oldp+278,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_except_next_pc),64);
            tracep->chgQData(oldp+280,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_except_pc),64);
            tracep->chgBit(oldp+282,(vlSelf->riscv_soc__DOT__core__DOT__execute_io_commit));
            tracep->chgIData(oldp+283,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_difftest_inst),32);
            tracep->chgBit(oldp+284,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_difftest_peripheral));
            tracep->chgCData(oldp+285,((0x1fU & (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst 
                                                 >> 0xfU))),5);
            tracep->chgQData(oldp+286,(((((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_dest_addr) 
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
            tracep->chgCData(oldp+288,((0x1fU & (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst 
                                                 >> 0x14U))),5);
            tracep->chgQData(oldp+289,(((((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_dest_addr) 
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
            tracep->chgSData(oldp+291,((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst 
                                        >> 0x14U)),12);
            tracep->chgQData(oldp+292,(((((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst 
                                           >> 0x14U) 
                                          == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_csr_addr)) 
                                         & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute_io_csr_valid))
                                         ? vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_csr_data
                                         : ((0xb02U 
                                             == (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst 
                                                 >> 0x14U))
                                             ? vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__reg_minstret
                                             : vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT___csr_rdata_T_33))),64);
            tracep->chgBit(oldp+294,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage0__DOT__reg_valid));
            tracep->chgQData(oldp+295,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage0__DOT__reg_addr),64);
            tracep->chgCData(oldp+297,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1_io_tag_valid_index),6);
            tracep->chgBit(oldp+298,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1_io_tag_valid_tag_valid_0));
            tracep->chgBit(oldp+299,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1_io_tag_valid_tag_valid_1));
            tracep->chgBit(oldp+300,(((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage0__DOT__reg_valid) 
                                      & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch_io_out_flush)))));
            tracep->chgWData(oldp+301,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1_io_sram_sram_data_0),128);
            tracep->chgWData(oldp+305,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1_io_sram_sram_data_1),128);
            VL_EXTEND_WQ(128,54, __Vtemp3372, (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                               >> 0xaU));
            VL_EXTEND_WQ(128,54, __Vtemp3373, (0x3fffffffffffffULL 
                                               & (((QData)((IData)(
                                                                   vlSelf->riscv_soc__DOT__sram1__DOT__Q[1U])) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(
                                                                    vlSelf->riscv_soc__DOT__sram1__DOT__Q[0U])))));
            if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__w_r_pass0_val) {
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
            tracep->chgWData(oldp+309,(__Vtemp3374),128);
            VL_EXTEND_WQ(128,54, __Vtemp3375, (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                               >> 0xaU));
            VL_EXTEND_WQ(128,54, __Vtemp3376, (0x3fffffffffffffULL 
                                               & (((QData)((IData)(
                                                                   vlSelf->riscv_soc__DOT__sram3__DOT__Q[1U])) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(
                                                                    vlSelf->riscv_soc__DOT__sram3__DOT__Q[0U])))));
            if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__w_r_pass1_val) {
                __Vtemp3377[0U] = __Vtemp3375[0U];
                __Vtemp3377[1U] = __Vtemp3375[1U];
                __Vtemp3377[2U] = __Vtemp3375[2U];
                __Vtemp3377[3U] = __Vtemp3375[3U];
            } else {
                __Vtemp3377[0U] = __Vtemp3376[0U];
                __Vtemp3377[1U] = __Vtemp3376[1U];
                __Vtemp3377[2U] = __Vtemp3376[2U];
                __Vtemp3377[3U] = __Vtemp3376[3U];
            }
            tracep->chgWData(oldp+313,(__Vtemp3377),128);
            tracep->chgBit(oldp+317,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_sram_r_ready));
            tracep->chgBit(oldp+318,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2_io_cache_stage1_ready));
            tracep->chgBit(oldp+319,(((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1__DOT__reg_valid) 
                                      & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_sram_r_ready))));
            tracep->chgQData(oldp+320,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1__DOT__reg_cpu_addr),64);
            tracep->chgBit(oldp+322,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1_io_cache_stage1_bits_sram_0_hit));
            tracep->chgQData(oldp+323,(((1U & (IData)(
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
            tracep->chgBit(oldp+325,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1_io_cache_stage1_bits_sram_1_hit));
            tracep->chgQData(oldp+326,(((1U & (IData)(
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
            tracep->chgBit(oldp+328,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_write));
            tracep->chgCData(oldp+329,((0x3fU & (IData)(
                                                        (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                                         >> 4U)))),6);
            tracep->chgBit(oldp+330,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_chosen_tag));
            tracep->chgQData(oldp+331,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_sram0_valid),64);
            tracep->chgQData(oldp+333,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_sram1_valid),64);
            tracep->chgBit(oldp+335,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_w_sram));
            tracep->chgBit(oldp+336,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram0_write));
            tracep->chgBit(oldp+337,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram1_write));
            tracep->chgQData(oldp+338,((1ULL << (0x3fU 
                                                 & (IData)(
                                                           (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                                            >> 4U))))),64);
            tracep->chgBit(oldp+340,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_temp_sram0_valid));
            tracep->chgBit(oldp+341,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_temp_sram1_valid));
            tracep->chgCData(oldp+342,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_temp_r_index),6);
            tracep->chgBit(oldp+343,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__w_r_pass0_val));
            tracep->chgBit(oldp+344,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__w_r_pass1_val));
            tracep->chgBit(oldp+345,((((0ULL != (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0 
                                                 >> 0x1fU)) 
                                       & (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_bus_valid)) 
                                      & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch_io_out_flush)))));
            tracep->chgBit(oldp+346,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1__DOT__ready));
            tracep->chgBit(oldp+347,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1__DOT__reg_valid));
            tracep->chgQData(oldp+348,((vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1__DOT__reg_cpu_addr 
                                        >> 0xaU)),54);
            tracep->chgCData(oldp+350,((0x3fU & (IData)(
                                                        (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1__DOT__reg_cpu_addr 
                                                         >> 4U)))),6);
            tracep->chgCData(oldp+351,((0xfU & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1__DOT__reg_cpu_addr))),4);
            VL_EXTEND_WQ(128,54, __Vtemp3378, (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                               >> 0xaU));
            VL_EXTEND_WQ(128,54, __Vtemp3379, (0x3fffffffffffffULL 
                                               & (((QData)((IData)(
                                                                   vlSelf->riscv_soc__DOT__sram1__DOT__Q[1U])) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(
                                                                    vlSelf->riscv_soc__DOT__sram1__DOT__Q[0U])))));
            tracep->chgQData(oldp+352,((0x3fffffffffffffULL 
                                        & (((QData)((IData)(
                                                            ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__w_r_pass0_val)
                                                              ? 
                                                             __Vtemp3378[1U]
                                                              : 
                                                             __Vtemp3379[1U]))) 
                                            << 0x20U) 
                                           | (QData)((IData)(
                                                             ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__w_r_pass0_val)
                                                               ? 
                                                              __Vtemp3378[0U]
                                                               : 
                                                              __Vtemp3379[0U])))))),54);
            VL_EXTEND_WQ(128,54, __Vtemp3381, (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                               >> 0xaU));
            VL_EXTEND_WQ(128,54, __Vtemp3382, (0x3fffffffffffffULL 
                                               & (((QData)((IData)(
                                                                   vlSelf->riscv_soc__DOT__sram3__DOT__Q[1U])) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(
                                                                    vlSelf->riscv_soc__DOT__sram3__DOT__Q[0U])))));
            tracep->chgQData(oldp+354,((0x3fffffffffffffULL 
                                        & (((QData)((IData)(
                                                            ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__w_r_pass1_val)
                                                              ? 
                                                             __Vtemp3381[1U]
                                                              : 
                                                             __Vtemp3382[1U]))) 
                                            << 0x20U) 
                                           | (QData)((IData)(
                                                             ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__w_r_pass1_val)
                                                               ? 
                                                              __Vtemp3381[0U]
                                                               : 
                                                              __Vtemp3382[0U])))))),54);
            tracep->chgBit(oldp+356,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__valid));
            tracep->chgBit(oldp+357,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_ready));
            tracep->chgQData(oldp+358,((0xfffffffffffffff0ULL 
                                        & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1__DOT__reg_cpu_addr)),64);
            tracep->chgQData(oldp+360,((vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                        >> 0xaU)),54);
            tracep->chgCData(oldp+362,((0xfU & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr))),4);
            tracep->chgQData(oldp+363,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_lru_1),64);
            tracep->chgBit(oldp+365,((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT___LRU_1_T))));
            tracep->chgQData(oldp+366,((1ULL << (0x3fU 
                                                 & (IData)(
                                                           (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1__DOT__reg_cpu_addr 
                                                            >> 4U))))),64);
            tracep->chgQData(oldp+368,((~ (1ULL << 
                                           (0x3fU & (IData)(
                                                            (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1__DOT__reg_cpu_addr 
                                                             >> 4U)))))),64);
            tracep->chgCData(oldp+370,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_bus_state),2);
            tracep->chgQData(oldp+371,((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu_io_bus_bits_addr 
                                        >> 0xaU)),54);
            tracep->chgCData(oldp+373,((0x3fU & (IData)(
                                                        (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu_io_bus_bits_addr 
                                                         >> 4U)))),6);
            tracep->chgCData(oldp+374,((0xfU & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu_io_bus_bits_addr))),4);
            tracep->chgCData(oldp+375,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state),2);
            tracep->chgQData(oldp+376,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_wdata),64);
            tracep->chgCData(oldp+378,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_wstrb),8);
            tracep->chgBit(oldp+379,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_is_w));
            tracep->chgQData(oldp+380,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag),54);
            tracep->chgCData(oldp+382,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index),6);
            tracep->chgCData(oldp+383,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_offset),4);
            tracep->chgBit(oldp+384,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_write));
            tracep->chgSData(oldp+385,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_wstrb),16);
            tracep->chgBit(oldp+386,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_chosen_tag));
            tracep->chgQData(oldp+387,((((QData)((IData)(
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
            tracep->chgWData(oldp+389,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__cache_mask),128);
            tracep->chgWData(oldp+393,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__cache_wdata),128);
            tracep->chgBit(oldp+397,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram0_write));
            tracep->chgQData(oldp+398,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_sram0_valid),64);
            tracep->chgQData(oldp+400,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_sram0_dirty),64);
            tracep->chgQData(oldp+402,((1ULL << (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index))),64);
            tracep->chgQData(oldp+404,((~ (1ULL << (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)))),64);
            tracep->chgBit(oldp+406,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram2_write));
            tracep->chgQData(oldp+407,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_sram2_valid),64);
            tracep->chgQData(oldp+409,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_sram2_dirty),64);
            tracep->chgQData(oldp+411,((0x3fffffffffffffULL 
                                        & (((QData)((IData)(
                                                            vlSelf->riscv_soc__DOT__sram5__DOT__Q[1U])) 
                                            << 0x20U) 
                                           | (QData)((IData)(
                                                             vlSelf->riscv_soc__DOT__sram5__DOT__Q[0U]))))),54);
            tracep->chgQData(oldp+413,((0x3fffffffffffffULL 
                                        & (((QData)((IData)(
                                                            vlSelf->riscv_soc__DOT__sram7__DOT__Q[1U])) 
                                            << 0x20U) 
                                           | (QData)((IData)(
                                                             vlSelf->riscv_soc__DOT__sram7__DOT__Q[0U]))))),54);
            tracep->chgBit(oldp+415,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_0));
            tracep->chgBit(oldp+416,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2));
            tracep->chgBit(oldp+417,((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___tag_valid_0_T))));
            tracep->chgBit(oldp+418,((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___tag_valid_2_T))));
            tracep->chgBit(oldp+419,((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___tag_dirty_0_T))));
            tracep->chgBit(oldp+420,((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___tag_dirty_2_T))));
            tracep->chgQData(oldp+421,(((8U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_offset))
                                         ? (((QData)((IData)(
                                                             vlSelf->riscv_soc__DOT__sram4__DOT__Q[3U])) 
                                             << 0x20U) 
                                            | (QData)((IData)(
                                                              vlSelf->riscv_soc__DOT__sram4__DOT__Q[2U])))
                                         : (((QData)((IData)(
                                                             vlSelf->riscv_soc__DOT__sram4__DOT__Q[1U])) 
                                             << 0x20U) 
                                            | (QData)((IData)(
                                                              vlSelf->riscv_soc__DOT__sram4__DOT__Q[0U]))))),64);
            tracep->chgQData(oldp+423,(((8U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_offset))
                                         ? (((QData)((IData)(
                                                             vlSelf->riscv_soc__DOT__sram6__DOT__Q[3U])) 
                                             << 0x20U) 
                                            | (QData)((IData)(
                                                              vlSelf->riscv_soc__DOT__sram6__DOT__Q[2U])))
                                         : (((QData)((IData)(
                                                             vlSelf->riscv_soc__DOT__sram6__DOT__Q[1U])) 
                                             << 0x20U) 
                                            | (QData)((IData)(
                                                              vlSelf->riscv_soc__DOT__sram6__DOT__Q[0U]))))),64);
            tracep->chgQData(oldp+425,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_2),64);
            tracep->chgBit(oldp+427,((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___LRU_2_T))));
            tracep->chgBit(oldp+428,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation));
            tracep->chgCData(oldp+429,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cnt),2);
            tracep->chgBit(oldp+430,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_rbus_finish));
            tracep->chgBit(oldp+431,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_wbus_finish));
            tracep->chgBit(oldp+432,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__w_locked));
            tracep->chgCData(oldp+433,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__w_lockId),2);
            tracep->chgCData(oldp+434,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__w_chosen),2);
            tracep->chgCData(oldp+435,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__reg_r_cnt),2);
            tracep->chgBit(oldp+436,((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__reg_r_cnt))));
            tracep->chgCData(oldp+437,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__r_lockId),2);
            tracep->chgCData(oldp+438,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__r_chosen),2);
            tracep->chgBit(oldp+439,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__reg_aw_ok));
            tracep->chgBit(oldp+440,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__reg_ar_ok));
            tracep->chgBit(oldp+441,((0ULL == (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0 
                                               >> 0x1fU))));
            tracep->chgBit(oldp+442,((0ULL == (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu_io_bus_bits_addr 
                                               >> 0x1fU))));
            tracep->chgBit(oldp+443,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1__DOT__not_clint));
            tracep->chgBit(oldp+444,((((IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1_io_fetch_cpu_data_valid) 
                                       & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_flush))) 
                                      & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute_io_flush)))));
            tracep->chgIData(oldp+445,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_cache_buf_bits_inst),32);
            tracep->chgBit(oldp+446,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_cache_buf_bits_is_pre));
            tracep->chgQData(oldp+447,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor_io_pre_next_pc),64);
            tracep->chgBit(oldp+449,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor_io_pre_valid));
            tracep->chgBit(oldp+450,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_flush));
            tracep->chgQData(oldp+451,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_next_pc),64);
            tracep->chgCData(oldp+453,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__pre_info_head),2);
            tracep->chgCData(oldp+454,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__pre_info_tail),2);
            tracep->chgQData(oldp+455,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__pre_info_fifo_0),64);
            tracep->chgQData(oldp+457,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__pre_info_fifo_1),64);
            tracep->chgQData(oldp+459,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__pre_info_fifo_2),64);
            tracep->chgQData(oldp+461,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__pre_info_fifo_3),64);
            tracep->chgBit(oldp+463,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__pre_enq));
            tracep->chgCData(oldp+464,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__is_pre_head),2);
            tracep->chgCData(oldp+465,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__is_pre_tail),2);
            tracep->chgBit(oldp+466,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__is_pre_fifo_0));
            tracep->chgBit(oldp+467,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__is_pre_fifo_1));
            tracep->chgBit(oldp+468,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__is_pre_fifo_2));
            tracep->chgBit(oldp+469,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__is_pre_fifo_3));
            tracep->chgQData(oldp+470,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_pc_0),64);
            tracep->chgQData(oldp+472,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_pc_1),64);
            tracep->chgQData(oldp+474,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_pc_2),64);
            tracep->chgQData(oldp+476,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_pc_3),64);
            tracep->chgIData(oldp+478,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_0),32);
            tracep->chgIData(oldp+479,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_1),32);
            tracep->chgIData(oldp+480,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_2),32);
            tracep->chgIData(oldp+481,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_3),32);
            tracep->chgBit(oldp+482,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_is_pre_0));
            tracep->chgBit(oldp+483,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_is_pre_1));
            tracep->chgBit(oldp+484,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_is_pre_2));
            tracep->chgBit(oldp+485,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_is_pre_3));
            tracep->chgBit(oldp+486,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_valid_0));
            tracep->chgBit(oldp+487,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_valid_1));
            tracep->chgBit(oldp+488,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_valid_2));
            tracep->chgBit(oldp+489,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_valid_3));
            tracep->chgCData(oldp+490,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__reg_head),2);
            tracep->chgCData(oldp+491,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__reg_tail),2);
            tracep->chgCData(oldp+492,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__reg_ibuf_size),3);
            tracep->chgBit(oldp+493,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__enq_size));
            tracep->chgBit(oldp+494,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__can_deq));
            tracep->chgCData(oldp+495,((7U & (((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__reg_ibuf_size) 
                                               + (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__enq_size)) 
                                              - (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__can_deq)))),3);
            tracep->chgWData(oldp+496,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_0),128);
            tracep->chgWData(oldp+500,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_1),128);
            tracep->chgWData(oldp+504,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_2),128);
            tracep->chgWData(oldp+508,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_3),128);
            tracep->chgWData(oldp+512,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_4),128);
            tracep->chgWData(oldp+516,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_5),128);
            tracep->chgWData(oldp+520,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_6),128);
            tracep->chgWData(oldp+524,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_7),128);
            tracep->chgWData(oldp+528,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_8),128);
            tracep->chgWData(oldp+532,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_9),128);
            tracep->chgWData(oldp+536,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_10),128);
            tracep->chgWData(oldp+540,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_11),128);
            tracep->chgWData(oldp+544,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_12),128);
            tracep->chgWData(oldp+548,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_13),128);
            tracep->chgWData(oldp+552,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_14),128);
            tracep->chgWData(oldp+556,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_15),128);
            tracep->chgWData(oldp+560,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_16),128);
            tracep->chgWData(oldp+564,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_17),128);
            tracep->chgWData(oldp+568,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_18),128);
            tracep->chgWData(oldp+572,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_19),128);
            tracep->chgWData(oldp+576,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_20),128);
            tracep->chgWData(oldp+580,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_21),128);
            tracep->chgWData(oldp+584,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_22),128);
            tracep->chgWData(oldp+588,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_23),128);
            tracep->chgWData(oldp+592,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_24),128);
            tracep->chgWData(oldp+596,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_25),128);
            tracep->chgWData(oldp+600,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_26),128);
            tracep->chgWData(oldp+604,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_27),128);
            tracep->chgWData(oldp+608,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_28),128);
            tracep->chgWData(oldp+612,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_29),128);
            tracep->chgWData(oldp+616,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_30),128);
            tracep->chgWData(oldp+620,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_31),128);
            tracep->chgWData(oldp+624,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_32),128);
            tracep->chgWData(oldp+628,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_33),128);
            tracep->chgWData(oldp+632,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_34),128);
            tracep->chgWData(oldp+636,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_35),128);
            tracep->chgWData(oldp+640,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_36),128);
            tracep->chgWData(oldp+644,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_37),128);
            tracep->chgWData(oldp+648,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_38),128);
            tracep->chgWData(oldp+652,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_39),128);
            tracep->chgWData(oldp+656,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_40),128);
            tracep->chgWData(oldp+660,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_41),128);
            tracep->chgWData(oldp+664,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_42),128);
            tracep->chgWData(oldp+668,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_43),128);
            tracep->chgWData(oldp+672,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_44),128);
            tracep->chgWData(oldp+676,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_45),128);
            tracep->chgWData(oldp+680,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_46),128);
            tracep->chgWData(oldp+684,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_47),128);
            tracep->chgWData(oldp+688,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_48),128);
            tracep->chgWData(oldp+692,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_49),128);
            tracep->chgWData(oldp+696,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_50),128);
            tracep->chgWData(oldp+700,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_51),128);
            tracep->chgWData(oldp+704,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_52),128);
            tracep->chgWData(oldp+708,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_53),128);
            tracep->chgWData(oldp+712,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_54),128);
            tracep->chgWData(oldp+716,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_55),128);
            tracep->chgWData(oldp+720,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_56),128);
            tracep->chgWData(oldp+724,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_57),128);
            tracep->chgWData(oldp+728,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_58),128);
            tracep->chgWData(oldp+732,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_59),128);
            tracep->chgWData(oldp+736,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_60),128);
            tracep->chgWData(oldp+740,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_61),128);
            tracep->chgWData(oldp+744,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_62),128);
            tracep->chgWData(oldp+748,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_63),128);
            tracep->chgQData(oldp+752,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__RAS_0),64);
            tracep->chgQData(oldp+754,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__RAS_1),64);
            tracep->chgQData(oldp+756,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__RAS_2),64);
            tracep->chgQData(oldp+758,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__RAS_3),64);
            tracep->chgQData(oldp+760,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__RAS_4),64);
            tracep->chgQData(oldp+762,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__RAS_5),64);
            tracep->chgCData(oldp+764,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_0),2);
            tracep->chgCData(oldp+765,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_1),2);
            tracep->chgCData(oldp+766,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_2),2);
            tracep->chgCData(oldp+767,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_3),2);
            tracep->chgCData(oldp+768,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_4),2);
            tracep->chgCData(oldp+769,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_5),2);
            tracep->chgCData(oldp+770,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_6),2);
            tracep->chgCData(oldp+771,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_7),2);
            tracep->chgCData(oldp+772,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_8),2);
            tracep->chgCData(oldp+773,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_9),2);
            tracep->chgCData(oldp+774,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_10),2);
            tracep->chgCData(oldp+775,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_11),2);
            tracep->chgCData(oldp+776,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_12),2);
            tracep->chgCData(oldp+777,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_13),2);
            tracep->chgCData(oldp+778,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_14),2);
            tracep->chgCData(oldp+779,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_15),2);
            tracep->chgCData(oldp+780,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_16),2);
            tracep->chgCData(oldp+781,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_17),2);
            tracep->chgCData(oldp+782,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_18),2);
            tracep->chgCData(oldp+783,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_19),2);
            tracep->chgCData(oldp+784,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_20),2);
            tracep->chgCData(oldp+785,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_21),2);
            tracep->chgCData(oldp+786,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_22),2);
            tracep->chgCData(oldp+787,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_23),2);
            tracep->chgCData(oldp+788,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_24),2);
            tracep->chgCData(oldp+789,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_25),2);
            tracep->chgCData(oldp+790,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_26),2);
            tracep->chgCData(oldp+791,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_27),2);
            tracep->chgCData(oldp+792,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_28),2);
            tracep->chgCData(oldp+793,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_29),2);
            tracep->chgCData(oldp+794,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_30),2);
            tracep->chgCData(oldp+795,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_31),2);
            tracep->chgCData(oldp+796,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_32),2);
            tracep->chgCData(oldp+797,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_33),2);
            tracep->chgCData(oldp+798,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_34),2);
            tracep->chgCData(oldp+799,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_35),2);
            tracep->chgCData(oldp+800,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_36),2);
            tracep->chgCData(oldp+801,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_37),2);
            tracep->chgCData(oldp+802,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_38),2);
            tracep->chgCData(oldp+803,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_39),2);
            tracep->chgCData(oldp+804,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_40),2);
            tracep->chgCData(oldp+805,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_41),2);
            tracep->chgCData(oldp+806,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_42),2);
            tracep->chgCData(oldp+807,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_43),2);
            tracep->chgCData(oldp+808,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_44),2);
            tracep->chgCData(oldp+809,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_45),2);
            tracep->chgCData(oldp+810,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_46),2);
            tracep->chgCData(oldp+811,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_47),2);
            tracep->chgCData(oldp+812,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_48),2);
            tracep->chgCData(oldp+813,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_49),2);
            tracep->chgCData(oldp+814,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_50),2);
            tracep->chgCData(oldp+815,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_51),2);
            tracep->chgCData(oldp+816,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_52),2);
            tracep->chgCData(oldp+817,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_53),2);
            tracep->chgCData(oldp+818,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_54),2);
            tracep->chgCData(oldp+819,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_55),2);
            tracep->chgCData(oldp+820,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_56),2);
            tracep->chgCData(oldp+821,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_57),2);
            tracep->chgCData(oldp+822,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_58),2);
            tracep->chgCData(oldp+823,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_59),2);
            tracep->chgCData(oldp+824,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_60),2);
            tracep->chgCData(oldp+825,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_61),2);
            tracep->chgCData(oldp+826,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_62),2);
            tracep->chgCData(oldp+827,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_63),2);
            tracep->chgCData(oldp+828,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__reg_head),3);
            tracep->chgCData(oldp+829,((0x3fU & (IData)(
                                                        (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                                         >> 3U)))),6);
            tracep->chgWData(oldp+830,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__update_btb_data),123);
            tracep->chgCData(oldp+834,((0x3fU & (IData)(
                                                        (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0 
                                                         >> 3U)))),6);
            tracep->chgQData(oldp+835,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__tag),56);
            tracep->chgBit(oldp+837,((1U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___GEN_447) 
                                            >> 1U))));
            tracep->chgBit(oldp+838,((1U & (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___GEN_511[3U] 
                                            >> 0x1aU))));
            tracep->chgQData(oldp+839,((0xffffffffffffffULL 
                                        & (((QData)((IData)(
                                                            vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___GEN_511[3U])) 
                                            << 0x1eU) 
                                           | ((QData)((IData)(
                                                              vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___GEN_511[2U])) 
                                              >> 2U)))),56);
            tracep->chgQData(oldp+841,((((QData)((IData)(
                                                         vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___GEN_511[2U])) 
                                         << 0x3eU) 
                                        | (((QData)((IData)(
                                                            vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___GEN_511[1U])) 
                                            << 0x1eU) 
                                           | ((QData)((IData)(
                                                              vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___GEN_511[0U])) 
                                              >> 2U)))),64);
            tracep->chgCData(oldp+843,((3U & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___GEN_511[0U])),2);
            tracep->chgBit(oldp+844,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__pre_valid));
            tracep->chgBit(oldp+845,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu_io_valid));
            tracep->chgBit(oldp+846,(((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_opType)) 
                                      & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu_io_valid))));
            tracep->chgBit(oldp+847,(((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__br_valid) 
                                      & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__flush))));
            tracep->chgQData(oldp+848,(((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__br_valid)
                                         ? vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_pc
                                         : 0ULL)),64);
            tracep->chgBit(oldp+850,(((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__br_valid) 
                                      & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[2U])));
            tracep->chgQData(oldp+851,(((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__br_valid)
                                         ? (((QData)((IData)(
                                                             vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[1U])) 
                                             << 0x20U) 
                                            | (QData)((IData)(
                                                              vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[0U])))
                                         : 0ULL)),64);
            tracep->chgQData(oldp+853,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu_io_op_data1),64);
            tracep->chgQData(oldp+855,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu_io_op_data2),64);
            tracep->chgQData(oldp+857,(((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu_io_valid)
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
            tracep->chgBit(oldp+859,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu_io_valid_next_pc));
            tracep->chgQData(oldp+860,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu_io_next_pc),64);
            tracep->chgBit(oldp+862,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu_io_valid));
            tracep->chgQData(oldp+863,((((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute_io_wb_valid) 
                                         & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_dest_addr) 
                                            == (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs1_addr)))
                                         ? vlSelf->riscv_soc__DOT__core__DOT__execute_io_wb_dest_data
                                         : vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs1_data)),64);
            tracep->chgQData(oldp+865,((((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute_io_wb_valid) 
                                         & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_dest_addr) 
                                            == (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs2_addr)))
                                         ? vlSelf->riscv_soc__DOT__core__DOT__execute_io_wb_dest_data
                                         : vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs2_data)),64);
            tracep->chgQData(oldp+867,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_result_data),64);
            tracep->chgBit(oldp+869,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_w_rs_en));
            tracep->chgBit(oldp+870,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_ready));
            tracep->chgBit(oldp+871,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu_io_valid));
            tracep->chgQData(oldp+872,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu_io_rs2_data),64);
            tracep->chgQData(oldp+874,(((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_dest_is_w)
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
            tracep->chgBit(oldp+876,(((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_dest_is_w) 
                                      | (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_dest_is_w))));
            tracep->chgBit(oldp+877,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu_io_ready));
            tracep->chgBit(oldp+878,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu_io_valid));
            tracep->chgQData(oldp+879,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu_io_csr_data),64);
            tracep->chgBit(oldp+881,(((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu_io_valid) 
                                      & ((0U != (7U 
                                                 & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                                    >> 2U))) 
                                         | (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu__DOT__is_ret)))));
            tracep->chgQData(oldp+882,(((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu__DOT__is_ret)
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
            tracep->chgSData(oldp+884,(((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu__DOT__is_ret)
                                         ? 0x300U : (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_csr_addr))),12);
            tracep->chgBit(oldp+885,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu_io_is_except));
            tracep->chgCData(oldp+886,(((0U == (0x1fU 
                                                & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                                   >> 2U)))
                                         ? 0xbU : (
                                                   (8U 
                                                    == 
                                                    (0x1fU 
                                                     & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                                        >> 2U)))
                                                    ? 3U
                                                    : 0U))),6);
            tracep->chgBit(oldp+887,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu_io_valid_next_pc));
            tracep->chgBit(oldp+888,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__in_data_valid));
            tracep->chgCData(oldp+889,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_valid),4);
            tracep->chgBit(oldp+890,((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_valid))));
            tracep->chgBit(oldp+891,((1U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_valid) 
                                            >> 1U))));
            tracep->chgBit(oldp+892,((1U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_valid) 
                                            >> 2U))));
            tracep->chgBit(oldp+893,((1U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_valid) 
                                            >> 3U))));
            tracep->chgCData(oldp+894,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__valid),4);
            tracep->chgBit(oldp+895,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_sys_alu_w_valid));
            tracep->chgQData(oldp+896,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_sys_alu_wdata),64);
            tracep->chgBit(oldp+898,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_csr_is_w));
            tracep->chgBit(oldp+899,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_is_except));
            tracep->chgBit(oldp+900,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_is_time_irq));
            tracep->chgBit(oldp+901,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_is_soft_irq));
            tracep->chgBit(oldp+902,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__time_irq));
            tracep->chgBit(oldp+903,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__soft_irq));
            tracep->chgBit(oldp+904,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__irq));
            tracep->chgBit(oldp+905,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_valid_next_pc));
            tracep->chgBit(oldp+906,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_fence_i));
            tracep->chgBit(oldp+907,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_commit));
            tracep->chgBit(oldp+908,((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType))));
            tracep->chgQData(oldp+909,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__op_data1),64);
            tracep->chgQData(oldp+911,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__op_data2),64);
            tracep->chgQData(oldp+913,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__op_imm),64);
            tracep->chgBit(oldp+915,((1U & (~ ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                               >> 1U)))));
            tracep->chgQData(oldp+916,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__rs2_data),64);
            tracep->chgBit(oldp+918,((3U == (3U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                                   >> 5U)))));
            tracep->chgBit(oldp+919,((1U == (3U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                                   >> 5U)))));
            tracep->chgQData(oldp+920,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__rs1_data),64);
            tracep->chgQData(oldp+922,(((1U == (3U 
                                                & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                                   >> 5U)))
                                         ? (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__rs2_data)
                                         : vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__rs2_data)),64);
            tracep->chgWData(oldp+924,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__add_sub_result),65);
            tracep->chgBit(oldp+927,((1U & (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__add_sub_result[2U]))));
            tracep->chgBit(oldp+928,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__s_rs1_l_rs2));
            tracep->chgCData(oldp+929,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__shift_rs2_data),6);
            VL_EXTEND_WQ(127,64, __Vtemp3385, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__op_data1);
            VL_SHIFTL_WWI(127,127,6, __Vtemp3386, __Vtemp3385, (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__shift_rs2_data));
            __Vtemp3387[0U] = __Vtemp3386[0U];
            __Vtemp3387[1U] = __Vtemp3386[1U];
            __Vtemp3387[2U] = __Vtemp3386[2U];
            __Vtemp3387[3U] = (0x7fffffffU & __Vtemp3386[3U]);
            tracep->chgWData(oldp+930,(__Vtemp3387),127);
            tracep->chgQData(oldp+934,((((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType))
                                          ? (QData)((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__op_data1))
                                          : vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__op_data1) 
                                        >> (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__shift_rs2_data))),64);
            tracep->chgQData(oldp+936,(VL_SHIFTRS_QQI(64,64,6, 
                                                      ((1U 
                                                        & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType))
                                                        ? vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___op_data1_T_4
                                                        : vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu_io_op_data1), (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__shift_rs2_data))),64);
            tracep->chgQData(oldp+938,(((1U == (3U 
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
            tracep->chgCData(oldp+940,((7U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                              >> 2U))),3);
            tracep->chgQData(oldp+941,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__result_data),64);
            tracep->chgBit(oldp+943,((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_opType))));
            tracep->chgBit(oldp+944,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__is_eq));
            tracep->chgQData(oldp+945,(((2U == (7U 
                                                & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                                   >> 2U)))
                                         ? vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu_io_op_data1
                                         : vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_pc)),64);
            __Vtemp3388[0U] = (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___add_pc_T_1);
            __Vtemp3388[1U] = (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___add_pc_T_1 
                                       >> 0x20U));
            __Vtemp3388[2U] = 1U;
            tracep->chgWData(oldp+947,(__Vtemp3388),65);
            tracep->chgQData(oldp+950,((4ULL + vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_pc)),64);
            tracep->chgWData(oldp+952,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc),65);
            tracep->chgQData(oldp+955,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__dst_data),64);
            tracep->chgQData(oldp+957,((((QData)((IData)(
                                                         vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[1U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[0U])))),64);
            tracep->chgBit(oldp+959,((1U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[2U])));
            tracep->chgBit(oldp+960,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__br_valid));
            tracep->chgBit(oldp+961,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__flush));
            tracep->chgQData(oldp+962,((((QData)((IData)(
                                                         ((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_imm 
                                                           >> 0x1fU)
                                                           ? 0xffffffffU
                                                           : 0U))) 
                                         << 0x20U) 
                                        | (QData)((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_imm)))),64);
            tracep->chgQData(oldp+964,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_bus_addr),64);
            tracep->chgQData(oldp+966,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_bus_wdata),64);
            tracep->chgCData(oldp+968,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_bus_wstrb),8);
            tracep->chgBit(oldp+969,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_bus_is_w));
            tracep->chgBit(oldp+970,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_bus_valid));
            tracep->chgCData(oldp+971,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_exuType),7);
            tracep->chgQData(oldp+972,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__mem_r_data),64);
            tracep->chgQData(oldp+974,(((0x18U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_exuType))
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
            tracep->chgQData(oldp+976,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__mem_addr),64);
            tracep->chgBit(oldp+978,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__w_mem_en));
            tracep->chgQData(oldp+979,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__mem_wstrb),64);
            tracep->chgBit(oldp+981,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_ls_state));
            tracep->chgWData(oldp+982,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__mem_w_data),127);
            tracep->chgBit(oldp+986,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__chose_chancel));
            tracep->chgBit(oldp+987,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div_io_valid));
            tracep->chgQData(oldp+988,(((8U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_exuType))
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
            tracep->chgBit(oldp+990,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_dest_is_w));
            tracep->chgBit(oldp+991,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_ready));
            tracep->chgBit(oldp+992,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul_io_valid));
            tracep->chgQData(oldp+993,(((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_exuType))
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
            tracep->chgBit(oldp+995,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_dest_is_w));
            tracep->chgBit(oldp+996,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_ready));
            tracep->chgBit(oldp+997,((1U & (~ ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                               >> 2U)))));
            tracep->chgWData(oldp+998,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__dividend),65);
            tracep->chgWData(oldp+1001,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__divisor),65);
            tracep->chgWData(oldp+1004,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__rem),65);
            tracep->chgWData(oldp+1007,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor),65);
            tracep->chgWData(oldp+1010,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_dividend),66);
            tracep->chgWData(oldp+1013,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem),65);
            tracep->chgWData(oldp+1016,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_q),66);
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
            tracep->chgWData(oldp+1019,(__Vtemp3393),65);
            tracep->chgCData(oldp+1022,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state),2);
            tracep->chgCData(oldp+1023,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_cnt),7);
            tracep->chgCData(oldp+1024,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_exuType),7);
            tracep->chgWData(oldp+1025,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__temp_result),132);
            tracep->chgBit(oldp+1030,((0U == ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[0U] 
                                               | vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[1U]) 
                                              | vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[2U]))));
            __Vtemp3396[0U] = 1U;
            __Vtemp3396[1U] = 0U;
            __Vtemp3396[2U] = 0U;
            __Vtemp3397[0U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[0U]);
            __Vtemp3397[1U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[1U]);
            __Vtemp3397[2U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[2U]);
            VL_ADD_W(3, __Vtemp3398, __Vtemp3396, __Vtemp3397);
            tracep->chgBit(oldp+1031,((0U == (((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[0U] 
                                                ^ __Vtemp3398[0U]) 
                                               | (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[1U] 
                                                  ^ 
                                                  __Vtemp3398[1U])) 
                                              | (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[2U] 
                                                 ^ 
                                                 (1U 
                                                  & __Vtemp3398[2U]))))));
            tracep->chgBit(oldp+1032,((0U == (((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[0U] 
                                                ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[0U]) 
                                               | (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[1U] 
                                                  ^ 
                                                  vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[1U])) 
                                              | (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[2U] 
                                                 ^ 
                                                 vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[2U])))));
            tracep->chgBit(oldp+1033,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__is_need_correct));
            tracep->chgBit(oldp+1034,((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_exuType))));
            tracep->chgBit(oldp+1035,((1U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_exuType) 
                                             >> 3U))));
            tracep->chgQData(oldp+1036,(((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_exuType))
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
            tracep->chgQData(oldp+1038,(((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_exuType))
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
            tracep->chgBit(oldp+1040,((1U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                             >> 2U))));
            tracep->chgBit(oldp+1041,((1U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
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
            tracep->chgWData(oldp+1042,(__Vtemp3414),130);
            tracep->chgWData(oldp+1047,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__mul_data2),65);
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
            tracep->chgWData(oldp+1050,(__Vtemp3416),67);
            tracep->chgCData(oldp+1053,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_state),2);
            tracep->chgWData(oldp+1054,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2),67);
            tracep->chgWData(oldp+1057,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1),130);
            tracep->chgWData(oldp+1062,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_result),130);
            tracep->chgCData(oldp+1067,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_exuType),7);
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
            tracep->chgWData(oldp+1068,(__Vtemp3449),131);
            tracep->chgCData(oldp+1073,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_cnt),7);
            tracep->chgBit(oldp+1074,((0U == (3U & 
                                              ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_exuType) 
                                               >> 2U)))));
            tracep->chgBit(oldp+1075,((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_exuType))));
            tracep->chgQData(oldp+1076,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu__DOT__imm),64);
            tracep->chgBit(oldp+1078,((1U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                             >> 4U))));
            tracep->chgQData(oldp+1079,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu__DOT__op_data),64);
            tracep->chgQData(oldp+1081,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu__DOT__or_result),64);
            tracep->chgQData(oldp+1083,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu__DOT__and_result),64);
            tracep->chgQData(oldp+1085,(((7U == (7U 
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
            tracep->chgBit(oldp+1087,((0x10U == (0x1fU 
                                                 & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                                    >> 2U)))));
            tracep->chgBit(oldp+1088,((0x18U == (0x1fU 
                                                 & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                                    >> 2U)))));
            tracep->chgBit(oldp+1089,((0U == (0x1fU 
                                              & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                                 >> 2U)))));
            tracep->chgBit(oldp+1090,((8U == (0x1fU 
                                              & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                                 >> 2U)))));
            tracep->chgBit(oldp+1091,(((0U == (0x1fU 
                                               & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                                  >> 2U))) 
                                       | (8U == (0x1fU 
                                                 & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                                    >> 2U))))));
            tracep->chgCData(oldp+1092,(((0U == (0x1fU 
                                                 & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                                    >> 2U)))
                                          ? 0xbU : 
                                         ((8U == (0x1fU 
                                                  & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                                     >> 2U)))
                                           ? 3U : 0U))),4);
            tracep->chgBit(oldp+1093,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu__DOT__is_ret));
            tracep->chgQData(oldp+1094,(((0xffffffffffffff77ULL 
                                          & vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg_io_r_csr_mstatus) 
                                         | (QData)((IData)(
                                                           ((1U 
                                                             & (IData)(
                                                                       (vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg_io_r_csr_mstatus 
                                                                        >> 7U)))
                                                             ? 0x88U
                                                             : 0x80U))))),64);
            tracep->chgCData(oldp+1096,((0x1fU & (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst 
                                                  >> 7U))),5);
            tracep->chgCData(oldp+1097,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__instType),4);
            tracep->chgCData(oldp+1098,(((0x33U == 
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
            tracep->chgCData(oldp+1099,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__rs1_is_reg),2);
            tracep->chgCData(oldp+1100,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__rs2_is_reg),2);
            tracep->chgBit(oldp+1101,((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__rs1_is_reg))));
            tracep->chgBit(oldp+1102,((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__rs2_is_reg))));
            tracep->chgCData(oldp+1103,((0x1fU & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_exception))),5);
            tracep->chgBit(oldp+1104,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__irq));
            tracep->chgQData(oldp+1105,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__reg_mstatus),64);
            tracep->chgQData(oldp+1107,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__reg_mie),64);
            tracep->chgQData(oldp+1109,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__reg_mtvec),64);
            tracep->chgQData(oldp+1111,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__reg_mscratch),64);
            tracep->chgQData(oldp+1113,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__reg_mepc),64);
            tracep->chgQData(oldp+1115,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__reg_mcause),64);
            tracep->chgQData(oldp+1117,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__reg_mtval),64);
            tracep->chgQData(oldp+1119,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__reg_mcycle),64);
            tracep->chgQData(oldp+1121,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__reg_minstret),64);
            tracep->chgQData(oldp+1123,(((0xb02U == 
                                          (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst 
                                           >> 0x14U))
                                          ? vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__reg_minstret
                                          : vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT___csr_rdata_T_33)),64);
            tracep->chgQData(oldp+1125,(vlSelf->riscv_soc__DOT__core__DOT__clint_de__DOT__reg_mtime),64);
            tracep->chgQData(oldp+1127,(vlSelf->riscv_soc__DOT__core__DOT__clint_de__DOT__reg_mtimecmp),64);
            tracep->chgBit(oldp+1129,(vlSelf->riscv_soc__DOT__core__DOT__clint_de__DOT__reg_state));
            tracep->chgBit(oldp+1130,((0U == (0xffffU 
                                              & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu_io_bus_bits_addr)))));
            tracep->chgBit(oldp+1131,((0x4000U == (0xffffU 
                                                   & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu_io_bus_bits_addr)))));
            tracep->chgQData(oldp+1132,(((IData)(vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_r_valid)
                                          ? vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_raddr
                                          : vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_AXI_Bus_ar_bits_araddr)),64);
            tracep->chgQData(oldp+1134,(vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_w_addr),64);
            tracep->chgQData(oldp+1136,((((QData)((IData)(
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
            tracep->chgBit(oldp+1138,(((IData)(vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_is_w) 
                                       & (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_AXI_Bus_w_valid))));
            tracep->chgQData(oldp+1139,(vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_raddr),64);
            tracep->chgCData(oldp+1141,(vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_rlen),4);
            tracep->chgBit(oldp+1142,(vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_r_state));
            tracep->chgBit(oldp+1143,(vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_is_w));
            tracep->chgIData(oldp+1144,(((((8U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_AXI_Bus_w_bits_wstrb))
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
            tracep->chgIData(oldp+1145,(((((0x80U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_AXI_Bus_w_bits_wstrb))
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
            tracep->chgWData(oldp+1146,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_0),128);
            tracep->chgWData(oldp+1150,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_1),128);
            tracep->chgWData(oldp+1154,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_2),128);
            tracep->chgWData(oldp+1158,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_3),128);
            tracep->chgWData(oldp+1162,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_4),128);
            tracep->chgWData(oldp+1166,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_5),128);
            tracep->chgWData(oldp+1170,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_6),128);
            tracep->chgWData(oldp+1174,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_7),128);
            tracep->chgWData(oldp+1178,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_8),128);
            tracep->chgWData(oldp+1182,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_9),128);
            tracep->chgWData(oldp+1186,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_10),128);
            tracep->chgWData(oldp+1190,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_11),128);
            tracep->chgWData(oldp+1194,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_12),128);
            tracep->chgWData(oldp+1198,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_13),128);
            tracep->chgWData(oldp+1202,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_14),128);
            tracep->chgWData(oldp+1206,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_15),128);
            tracep->chgWData(oldp+1210,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_16),128);
            tracep->chgWData(oldp+1214,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_17),128);
            tracep->chgWData(oldp+1218,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_18),128);
            tracep->chgWData(oldp+1222,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_19),128);
            tracep->chgWData(oldp+1226,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_20),128);
            tracep->chgWData(oldp+1230,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_21),128);
            tracep->chgWData(oldp+1234,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_22),128);
            tracep->chgWData(oldp+1238,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_23),128);
            tracep->chgWData(oldp+1242,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_24),128);
            tracep->chgWData(oldp+1246,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_25),128);
            tracep->chgWData(oldp+1250,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_26),128);
            tracep->chgWData(oldp+1254,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_27),128);
            tracep->chgWData(oldp+1258,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_28),128);
            tracep->chgWData(oldp+1262,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_29),128);
            tracep->chgWData(oldp+1266,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_30),128);
            tracep->chgWData(oldp+1270,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_31),128);
            tracep->chgWData(oldp+1274,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_32),128);
            tracep->chgWData(oldp+1278,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_33),128);
            tracep->chgWData(oldp+1282,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_34),128);
            tracep->chgWData(oldp+1286,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_35),128);
            tracep->chgWData(oldp+1290,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_36),128);
            tracep->chgWData(oldp+1294,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_37),128);
            tracep->chgWData(oldp+1298,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_38),128);
            tracep->chgWData(oldp+1302,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_39),128);
            tracep->chgWData(oldp+1306,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_40),128);
            tracep->chgWData(oldp+1310,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_41),128);
            tracep->chgWData(oldp+1314,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_42),128);
            tracep->chgWData(oldp+1318,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_43),128);
            tracep->chgWData(oldp+1322,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_44),128);
            tracep->chgWData(oldp+1326,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_45),128);
            tracep->chgWData(oldp+1330,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_46),128);
            tracep->chgWData(oldp+1334,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_47),128);
            tracep->chgWData(oldp+1338,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_48),128);
            tracep->chgWData(oldp+1342,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_49),128);
            tracep->chgWData(oldp+1346,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_50),128);
            tracep->chgWData(oldp+1350,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_51),128);
            tracep->chgWData(oldp+1354,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_52),128);
            tracep->chgWData(oldp+1358,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_53),128);
            tracep->chgWData(oldp+1362,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_54),128);
            tracep->chgWData(oldp+1366,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_55),128);
            tracep->chgWData(oldp+1370,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_56),128);
            tracep->chgWData(oldp+1374,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_57),128);
            tracep->chgWData(oldp+1378,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_58),128);
            tracep->chgWData(oldp+1382,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_59),128);
            tracep->chgWData(oldp+1386,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_60),128);
            tracep->chgWData(oldp+1390,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_61),128);
            tracep->chgWData(oldp+1394,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_62),128);
            tracep->chgWData(oldp+1398,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_63),128);
            tracep->chgWData(oldp+1402,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_0),128);
            tracep->chgWData(oldp+1406,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_1),128);
            tracep->chgWData(oldp+1410,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_2),128);
            tracep->chgWData(oldp+1414,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_3),128);
            tracep->chgWData(oldp+1418,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_4),128);
            tracep->chgWData(oldp+1422,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_5),128);
            tracep->chgWData(oldp+1426,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_6),128);
            tracep->chgWData(oldp+1430,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_7),128);
            tracep->chgWData(oldp+1434,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_8),128);
            tracep->chgWData(oldp+1438,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_9),128);
            tracep->chgWData(oldp+1442,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_10),128);
            tracep->chgWData(oldp+1446,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_11),128);
            tracep->chgWData(oldp+1450,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_12),128);
            tracep->chgWData(oldp+1454,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_13),128);
            tracep->chgWData(oldp+1458,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_14),128);
            tracep->chgWData(oldp+1462,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_15),128);
            tracep->chgWData(oldp+1466,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_16),128);
            tracep->chgWData(oldp+1470,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_17),128);
            tracep->chgWData(oldp+1474,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_18),128);
            tracep->chgWData(oldp+1478,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_19),128);
            tracep->chgWData(oldp+1482,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_20),128);
            tracep->chgWData(oldp+1486,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_21),128);
            tracep->chgWData(oldp+1490,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_22),128);
            tracep->chgWData(oldp+1494,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_23),128);
            tracep->chgWData(oldp+1498,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_24),128);
            tracep->chgWData(oldp+1502,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_25),128);
            tracep->chgWData(oldp+1506,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_26),128);
            tracep->chgWData(oldp+1510,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_27),128);
            tracep->chgWData(oldp+1514,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_28),128);
            tracep->chgWData(oldp+1518,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_29),128);
            tracep->chgWData(oldp+1522,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_30),128);
            tracep->chgWData(oldp+1526,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_31),128);
            tracep->chgWData(oldp+1530,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_32),128);
            tracep->chgWData(oldp+1534,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_33),128);
            tracep->chgWData(oldp+1538,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_34),128);
            tracep->chgWData(oldp+1542,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_35),128);
            tracep->chgWData(oldp+1546,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_36),128);
            tracep->chgWData(oldp+1550,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_37),128);
            tracep->chgWData(oldp+1554,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_38),128);
            tracep->chgWData(oldp+1558,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_39),128);
            tracep->chgWData(oldp+1562,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_40),128);
            tracep->chgWData(oldp+1566,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_41),128);
            tracep->chgWData(oldp+1570,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_42),128);
            tracep->chgWData(oldp+1574,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_43),128);
            tracep->chgWData(oldp+1578,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_44),128);
            tracep->chgWData(oldp+1582,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_45),128);
            tracep->chgWData(oldp+1586,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_46),128);
            tracep->chgWData(oldp+1590,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_47),128);
            tracep->chgWData(oldp+1594,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_48),128);
            tracep->chgWData(oldp+1598,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_49),128);
            tracep->chgWData(oldp+1602,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_50),128);
            tracep->chgWData(oldp+1606,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_51),128);
            tracep->chgWData(oldp+1610,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_52),128);
            tracep->chgWData(oldp+1614,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_53),128);
            tracep->chgWData(oldp+1618,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_54),128);
            tracep->chgWData(oldp+1622,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_55),128);
            tracep->chgWData(oldp+1626,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_56),128);
            tracep->chgWData(oldp+1630,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_57),128);
            tracep->chgWData(oldp+1634,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_58),128);
            tracep->chgWData(oldp+1638,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_59),128);
            tracep->chgWData(oldp+1642,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_60),128);
            tracep->chgWData(oldp+1646,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_61),128);
            tracep->chgWData(oldp+1650,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_62),128);
            tracep->chgWData(oldp+1654,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_63),128);
            tracep->chgWData(oldp+1658,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_0),128);
            tracep->chgWData(oldp+1662,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_1),128);
            tracep->chgWData(oldp+1666,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_2),128);
            tracep->chgWData(oldp+1670,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_3),128);
            tracep->chgWData(oldp+1674,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_4),128);
            tracep->chgWData(oldp+1678,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_5),128);
            tracep->chgWData(oldp+1682,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_6),128);
            tracep->chgWData(oldp+1686,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_7),128);
            tracep->chgWData(oldp+1690,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_8),128);
            tracep->chgWData(oldp+1694,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_9),128);
            tracep->chgWData(oldp+1698,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_10),128);
            tracep->chgWData(oldp+1702,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_11),128);
            tracep->chgWData(oldp+1706,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_12),128);
            tracep->chgWData(oldp+1710,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_13),128);
            tracep->chgWData(oldp+1714,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_14),128);
            tracep->chgWData(oldp+1718,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_15),128);
            tracep->chgWData(oldp+1722,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_16),128);
            tracep->chgWData(oldp+1726,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_17),128);
            tracep->chgWData(oldp+1730,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_18),128);
            tracep->chgWData(oldp+1734,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_19),128);
            tracep->chgWData(oldp+1738,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_20),128);
            tracep->chgWData(oldp+1742,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_21),128);
            tracep->chgWData(oldp+1746,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_22),128);
            tracep->chgWData(oldp+1750,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_23),128);
            tracep->chgWData(oldp+1754,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_24),128);
            tracep->chgWData(oldp+1758,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_25),128);
            tracep->chgWData(oldp+1762,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_26),128);
            tracep->chgWData(oldp+1766,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_27),128);
            tracep->chgWData(oldp+1770,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_28),128);
            tracep->chgWData(oldp+1774,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_29),128);
            tracep->chgWData(oldp+1778,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_30),128);
            tracep->chgWData(oldp+1782,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_31),128);
            tracep->chgWData(oldp+1786,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_32),128);
            tracep->chgWData(oldp+1790,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_33),128);
            tracep->chgWData(oldp+1794,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_34),128);
            tracep->chgWData(oldp+1798,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_35),128);
            tracep->chgWData(oldp+1802,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_36),128);
            tracep->chgWData(oldp+1806,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_37),128);
            tracep->chgWData(oldp+1810,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_38),128);
            tracep->chgWData(oldp+1814,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_39),128);
            tracep->chgWData(oldp+1818,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_40),128);
            tracep->chgWData(oldp+1822,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_41),128);
            tracep->chgWData(oldp+1826,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_42),128);
            tracep->chgWData(oldp+1830,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_43),128);
            tracep->chgWData(oldp+1834,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_44),128);
            tracep->chgWData(oldp+1838,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_45),128);
            tracep->chgWData(oldp+1842,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_46),128);
            tracep->chgWData(oldp+1846,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_47),128);
            tracep->chgWData(oldp+1850,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_48),128);
            tracep->chgWData(oldp+1854,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_49),128);
            tracep->chgWData(oldp+1858,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_50),128);
            tracep->chgWData(oldp+1862,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_51),128);
            tracep->chgWData(oldp+1866,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_52),128);
            tracep->chgWData(oldp+1870,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_53),128);
            tracep->chgWData(oldp+1874,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_54),128);
            tracep->chgWData(oldp+1878,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_55),128);
            tracep->chgWData(oldp+1882,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_56),128);
            tracep->chgWData(oldp+1886,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_57),128);
            tracep->chgWData(oldp+1890,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_58),128);
            tracep->chgWData(oldp+1894,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_59),128);
            tracep->chgWData(oldp+1898,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_60),128);
            tracep->chgWData(oldp+1902,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_61),128);
            tracep->chgWData(oldp+1906,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_62),128);
            tracep->chgWData(oldp+1910,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_63),128);
            tracep->chgWData(oldp+1914,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_0),128);
            tracep->chgWData(oldp+1918,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_1),128);
            tracep->chgWData(oldp+1922,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_2),128);
            tracep->chgWData(oldp+1926,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_3),128);
            tracep->chgWData(oldp+1930,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_4),128);
            tracep->chgWData(oldp+1934,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_5),128);
            tracep->chgWData(oldp+1938,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_6),128);
            tracep->chgWData(oldp+1942,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_7),128);
            tracep->chgWData(oldp+1946,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_8),128);
            tracep->chgWData(oldp+1950,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_9),128);
            tracep->chgWData(oldp+1954,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_10),128);
            tracep->chgWData(oldp+1958,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_11),128);
            tracep->chgWData(oldp+1962,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_12),128);
            tracep->chgWData(oldp+1966,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_13),128);
            tracep->chgWData(oldp+1970,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_14),128);
            tracep->chgWData(oldp+1974,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_15),128);
            tracep->chgWData(oldp+1978,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_16),128);
            tracep->chgWData(oldp+1982,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_17),128);
            tracep->chgWData(oldp+1986,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_18),128);
            tracep->chgWData(oldp+1990,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_19),128);
            tracep->chgWData(oldp+1994,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_20),128);
            tracep->chgWData(oldp+1998,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_21),128);
            tracep->chgWData(oldp+2002,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_22),128);
            tracep->chgWData(oldp+2006,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_23),128);
            tracep->chgWData(oldp+2010,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_24),128);
            tracep->chgWData(oldp+2014,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_25),128);
            tracep->chgWData(oldp+2018,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_26),128);
            tracep->chgWData(oldp+2022,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_27),128);
            tracep->chgWData(oldp+2026,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_28),128);
            tracep->chgWData(oldp+2030,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_29),128);
            tracep->chgWData(oldp+2034,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_30),128);
            tracep->chgWData(oldp+2038,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_31),128);
            tracep->chgWData(oldp+2042,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_32),128);
            tracep->chgWData(oldp+2046,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_33),128);
            tracep->chgWData(oldp+2050,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_34),128);
            tracep->chgWData(oldp+2054,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_35),128);
            tracep->chgWData(oldp+2058,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_36),128);
            tracep->chgWData(oldp+2062,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_37),128);
            tracep->chgWData(oldp+2066,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_38),128);
            tracep->chgWData(oldp+2070,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_39),128);
            tracep->chgWData(oldp+2074,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_40),128);
            tracep->chgWData(oldp+2078,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_41),128);
            tracep->chgWData(oldp+2082,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_42),128);
            tracep->chgWData(oldp+2086,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_43),128);
            tracep->chgWData(oldp+2090,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_44),128);
            tracep->chgWData(oldp+2094,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_45),128);
            tracep->chgWData(oldp+2098,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_46),128);
            tracep->chgWData(oldp+2102,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_47),128);
            tracep->chgWData(oldp+2106,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_48),128);
            tracep->chgWData(oldp+2110,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_49),128);
            tracep->chgWData(oldp+2114,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_50),128);
            tracep->chgWData(oldp+2118,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_51),128);
            tracep->chgWData(oldp+2122,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_52),128);
            tracep->chgWData(oldp+2126,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_53),128);
            tracep->chgWData(oldp+2130,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_54),128);
            tracep->chgWData(oldp+2134,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_55),128);
            tracep->chgWData(oldp+2138,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_56),128);
            tracep->chgWData(oldp+2142,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_57),128);
            tracep->chgWData(oldp+2146,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_58),128);
            tracep->chgWData(oldp+2150,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_59),128);
            tracep->chgWData(oldp+2154,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_60),128);
            tracep->chgWData(oldp+2158,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_61),128);
            tracep->chgWData(oldp+2162,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_62),128);
            tracep->chgWData(oldp+2166,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_63),128);
            tracep->chgWData(oldp+2170,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_0),128);
            tracep->chgWData(oldp+2174,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_1),128);
            tracep->chgWData(oldp+2178,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_2),128);
            tracep->chgWData(oldp+2182,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_3),128);
            tracep->chgWData(oldp+2186,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_4),128);
            tracep->chgWData(oldp+2190,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_5),128);
            tracep->chgWData(oldp+2194,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_6),128);
            tracep->chgWData(oldp+2198,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_7),128);
            tracep->chgWData(oldp+2202,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_8),128);
            tracep->chgWData(oldp+2206,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_9),128);
            tracep->chgWData(oldp+2210,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_10),128);
            tracep->chgWData(oldp+2214,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_11),128);
            tracep->chgWData(oldp+2218,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_12),128);
            tracep->chgWData(oldp+2222,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_13),128);
            tracep->chgWData(oldp+2226,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_14),128);
            tracep->chgWData(oldp+2230,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_15),128);
            tracep->chgWData(oldp+2234,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_16),128);
            tracep->chgWData(oldp+2238,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_17),128);
            tracep->chgWData(oldp+2242,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_18),128);
            tracep->chgWData(oldp+2246,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_19),128);
            tracep->chgWData(oldp+2250,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_20),128);
            tracep->chgWData(oldp+2254,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_21),128);
            tracep->chgWData(oldp+2258,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_22),128);
            tracep->chgWData(oldp+2262,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_23),128);
            tracep->chgWData(oldp+2266,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_24),128);
            tracep->chgWData(oldp+2270,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_25),128);
            tracep->chgWData(oldp+2274,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_26),128);
            tracep->chgWData(oldp+2278,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_27),128);
            tracep->chgWData(oldp+2282,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_28),128);
            tracep->chgWData(oldp+2286,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_29),128);
            tracep->chgWData(oldp+2290,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_30),128);
            tracep->chgWData(oldp+2294,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_31),128);
            tracep->chgWData(oldp+2298,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_32),128);
            tracep->chgWData(oldp+2302,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_33),128);
            tracep->chgWData(oldp+2306,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_34),128);
            tracep->chgWData(oldp+2310,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_35),128);
            tracep->chgWData(oldp+2314,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_36),128);
            tracep->chgWData(oldp+2318,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_37),128);
            tracep->chgWData(oldp+2322,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_38),128);
            tracep->chgWData(oldp+2326,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_39),128);
            tracep->chgWData(oldp+2330,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_40),128);
            tracep->chgWData(oldp+2334,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_41),128);
            tracep->chgWData(oldp+2338,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_42),128);
            tracep->chgWData(oldp+2342,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_43),128);
            tracep->chgWData(oldp+2346,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_44),128);
            tracep->chgWData(oldp+2350,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_45),128);
            tracep->chgWData(oldp+2354,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_46),128);
            tracep->chgWData(oldp+2358,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_47),128);
            tracep->chgWData(oldp+2362,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_48),128);
            tracep->chgWData(oldp+2366,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_49),128);
            tracep->chgWData(oldp+2370,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_50),128);
            tracep->chgWData(oldp+2374,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_51),128);
            tracep->chgWData(oldp+2378,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_52),128);
            tracep->chgWData(oldp+2382,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_53),128);
            tracep->chgWData(oldp+2386,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_54),128);
            tracep->chgWData(oldp+2390,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_55),128);
            tracep->chgWData(oldp+2394,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_56),128);
            tracep->chgWData(oldp+2398,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_57),128);
            tracep->chgWData(oldp+2402,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_58),128);
            tracep->chgWData(oldp+2406,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_59),128);
            tracep->chgWData(oldp+2410,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_60),128);
            tracep->chgWData(oldp+2414,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_61),128);
            tracep->chgWData(oldp+2418,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_62),128);
            tracep->chgWData(oldp+2422,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_63),128);
            tracep->chgWData(oldp+2426,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_0),128);
            tracep->chgWData(oldp+2430,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_1),128);
            tracep->chgWData(oldp+2434,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_2),128);
            tracep->chgWData(oldp+2438,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_3),128);
            tracep->chgWData(oldp+2442,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_4),128);
            tracep->chgWData(oldp+2446,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_5),128);
            tracep->chgWData(oldp+2450,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_6),128);
            tracep->chgWData(oldp+2454,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_7),128);
            tracep->chgWData(oldp+2458,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_8),128);
            tracep->chgWData(oldp+2462,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_9),128);
            tracep->chgWData(oldp+2466,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_10),128);
            tracep->chgWData(oldp+2470,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_11),128);
            tracep->chgWData(oldp+2474,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_12),128);
            tracep->chgWData(oldp+2478,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_13),128);
            tracep->chgWData(oldp+2482,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_14),128);
            tracep->chgWData(oldp+2486,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_15),128);
            tracep->chgWData(oldp+2490,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_16),128);
            tracep->chgWData(oldp+2494,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_17),128);
            tracep->chgWData(oldp+2498,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_18),128);
            tracep->chgWData(oldp+2502,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_19),128);
            tracep->chgWData(oldp+2506,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_20),128);
            tracep->chgWData(oldp+2510,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_21),128);
            tracep->chgWData(oldp+2514,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_22),128);
            tracep->chgWData(oldp+2518,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_23),128);
            tracep->chgWData(oldp+2522,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_24),128);
            tracep->chgWData(oldp+2526,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_25),128);
            tracep->chgWData(oldp+2530,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_26),128);
            tracep->chgWData(oldp+2534,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_27),128);
            tracep->chgWData(oldp+2538,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_28),128);
            tracep->chgWData(oldp+2542,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_29),128);
            tracep->chgWData(oldp+2546,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_30),128);
            tracep->chgWData(oldp+2550,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_31),128);
            tracep->chgWData(oldp+2554,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_32),128);
            tracep->chgWData(oldp+2558,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_33),128);
            tracep->chgWData(oldp+2562,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_34),128);
            tracep->chgWData(oldp+2566,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_35),128);
            tracep->chgWData(oldp+2570,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_36),128);
            tracep->chgWData(oldp+2574,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_37),128);
            tracep->chgWData(oldp+2578,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_38),128);
            tracep->chgWData(oldp+2582,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_39),128);
            tracep->chgWData(oldp+2586,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_40),128);
            tracep->chgWData(oldp+2590,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_41),128);
            tracep->chgWData(oldp+2594,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_42),128);
            tracep->chgWData(oldp+2598,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_43),128);
            tracep->chgWData(oldp+2602,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_44),128);
            tracep->chgWData(oldp+2606,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_45),128);
            tracep->chgWData(oldp+2610,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_46),128);
            tracep->chgWData(oldp+2614,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_47),128);
            tracep->chgWData(oldp+2618,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_48),128);
            tracep->chgWData(oldp+2622,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_49),128);
            tracep->chgWData(oldp+2626,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_50),128);
            tracep->chgWData(oldp+2630,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_51),128);
            tracep->chgWData(oldp+2634,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_52),128);
            tracep->chgWData(oldp+2638,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_53),128);
            tracep->chgWData(oldp+2642,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_54),128);
            tracep->chgWData(oldp+2646,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_55),128);
            tracep->chgWData(oldp+2650,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_56),128);
            tracep->chgWData(oldp+2654,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_57),128);
            tracep->chgWData(oldp+2658,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_58),128);
            tracep->chgWData(oldp+2662,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_59),128);
            tracep->chgWData(oldp+2666,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_60),128);
            tracep->chgWData(oldp+2670,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_61),128);
            tracep->chgWData(oldp+2674,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_62),128);
            tracep->chgWData(oldp+2678,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_63),128);
            tracep->chgWData(oldp+2682,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_0),128);
            tracep->chgWData(oldp+2686,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_1),128);
            tracep->chgWData(oldp+2690,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_2),128);
            tracep->chgWData(oldp+2694,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_3),128);
            tracep->chgWData(oldp+2698,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_4),128);
            tracep->chgWData(oldp+2702,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_5),128);
            tracep->chgWData(oldp+2706,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_6),128);
            tracep->chgWData(oldp+2710,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_7),128);
            tracep->chgWData(oldp+2714,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_8),128);
            tracep->chgWData(oldp+2718,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_9),128);
            tracep->chgWData(oldp+2722,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_10),128);
            tracep->chgWData(oldp+2726,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_11),128);
            tracep->chgWData(oldp+2730,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_12),128);
            tracep->chgWData(oldp+2734,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_13),128);
            tracep->chgWData(oldp+2738,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_14),128);
            tracep->chgWData(oldp+2742,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_15),128);
            tracep->chgWData(oldp+2746,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_16),128);
            tracep->chgWData(oldp+2750,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_17),128);
            tracep->chgWData(oldp+2754,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_18),128);
            tracep->chgWData(oldp+2758,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_19),128);
            tracep->chgWData(oldp+2762,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_20),128);
            tracep->chgWData(oldp+2766,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_21),128);
            tracep->chgWData(oldp+2770,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_22),128);
            tracep->chgWData(oldp+2774,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_23),128);
            tracep->chgWData(oldp+2778,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_24),128);
            tracep->chgWData(oldp+2782,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_25),128);
            tracep->chgWData(oldp+2786,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_26),128);
            tracep->chgWData(oldp+2790,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_27),128);
            tracep->chgWData(oldp+2794,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_28),128);
            tracep->chgWData(oldp+2798,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_29),128);
            tracep->chgWData(oldp+2802,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_30),128);
            tracep->chgWData(oldp+2806,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_31),128);
            tracep->chgWData(oldp+2810,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_32),128);
            tracep->chgWData(oldp+2814,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_33),128);
            tracep->chgWData(oldp+2818,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_34),128);
            tracep->chgWData(oldp+2822,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_35),128);
            tracep->chgWData(oldp+2826,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_36),128);
            tracep->chgWData(oldp+2830,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_37),128);
            tracep->chgWData(oldp+2834,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_38),128);
            tracep->chgWData(oldp+2838,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_39),128);
            tracep->chgWData(oldp+2842,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_40),128);
            tracep->chgWData(oldp+2846,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_41),128);
            tracep->chgWData(oldp+2850,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_42),128);
            tracep->chgWData(oldp+2854,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_43),128);
            tracep->chgWData(oldp+2858,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_44),128);
            tracep->chgWData(oldp+2862,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_45),128);
            tracep->chgWData(oldp+2866,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_46),128);
            tracep->chgWData(oldp+2870,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_47),128);
            tracep->chgWData(oldp+2874,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_48),128);
            tracep->chgWData(oldp+2878,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_49),128);
            tracep->chgWData(oldp+2882,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_50),128);
            tracep->chgWData(oldp+2886,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_51),128);
            tracep->chgWData(oldp+2890,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_52),128);
            tracep->chgWData(oldp+2894,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_53),128);
            tracep->chgWData(oldp+2898,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_54),128);
            tracep->chgWData(oldp+2902,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_55),128);
            tracep->chgWData(oldp+2906,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_56),128);
            tracep->chgWData(oldp+2910,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_57),128);
            tracep->chgWData(oldp+2914,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_58),128);
            tracep->chgWData(oldp+2918,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_59),128);
            tracep->chgWData(oldp+2922,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_60),128);
            tracep->chgWData(oldp+2926,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_61),128);
            tracep->chgWData(oldp+2930,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_62),128);
            tracep->chgWData(oldp+2934,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_63),128);
            tracep->chgWData(oldp+2938,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_0),128);
            tracep->chgWData(oldp+2942,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_1),128);
            tracep->chgWData(oldp+2946,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_2),128);
            tracep->chgWData(oldp+2950,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_3),128);
            tracep->chgWData(oldp+2954,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_4),128);
            tracep->chgWData(oldp+2958,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_5),128);
            tracep->chgWData(oldp+2962,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_6),128);
            tracep->chgWData(oldp+2966,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_7),128);
            tracep->chgWData(oldp+2970,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_8),128);
            tracep->chgWData(oldp+2974,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_9),128);
            tracep->chgWData(oldp+2978,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_10),128);
            tracep->chgWData(oldp+2982,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_11),128);
            tracep->chgWData(oldp+2986,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_12),128);
            tracep->chgWData(oldp+2990,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_13),128);
            tracep->chgWData(oldp+2994,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_14),128);
            tracep->chgWData(oldp+2998,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_15),128);
            tracep->chgWData(oldp+3002,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_16),128);
            tracep->chgWData(oldp+3006,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_17),128);
            tracep->chgWData(oldp+3010,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_18),128);
            tracep->chgWData(oldp+3014,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_19),128);
            tracep->chgWData(oldp+3018,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_20),128);
            tracep->chgWData(oldp+3022,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_21),128);
            tracep->chgWData(oldp+3026,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_22),128);
            tracep->chgWData(oldp+3030,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_23),128);
            tracep->chgWData(oldp+3034,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_24),128);
            tracep->chgWData(oldp+3038,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_25),128);
            tracep->chgWData(oldp+3042,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_26),128);
            tracep->chgWData(oldp+3046,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_27),128);
            tracep->chgWData(oldp+3050,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_28),128);
            tracep->chgWData(oldp+3054,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_29),128);
            tracep->chgWData(oldp+3058,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_30),128);
            tracep->chgWData(oldp+3062,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_31),128);
            tracep->chgWData(oldp+3066,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_32),128);
            tracep->chgWData(oldp+3070,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_33),128);
            tracep->chgWData(oldp+3074,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_34),128);
            tracep->chgWData(oldp+3078,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_35),128);
            tracep->chgWData(oldp+3082,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_36),128);
            tracep->chgWData(oldp+3086,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_37),128);
            tracep->chgWData(oldp+3090,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_38),128);
            tracep->chgWData(oldp+3094,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_39),128);
            tracep->chgWData(oldp+3098,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_40),128);
            tracep->chgWData(oldp+3102,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_41),128);
            tracep->chgWData(oldp+3106,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_42),128);
            tracep->chgWData(oldp+3110,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_43),128);
            tracep->chgWData(oldp+3114,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_44),128);
            tracep->chgWData(oldp+3118,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_45),128);
            tracep->chgWData(oldp+3122,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_46),128);
            tracep->chgWData(oldp+3126,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_47),128);
            tracep->chgWData(oldp+3130,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_48),128);
            tracep->chgWData(oldp+3134,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_49),128);
            tracep->chgWData(oldp+3138,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_50),128);
            tracep->chgWData(oldp+3142,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_51),128);
            tracep->chgWData(oldp+3146,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_52),128);
            tracep->chgWData(oldp+3150,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_53),128);
            tracep->chgWData(oldp+3154,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_54),128);
            tracep->chgWData(oldp+3158,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_55),128);
            tracep->chgWData(oldp+3162,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_56),128);
            tracep->chgWData(oldp+3166,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_57),128);
            tracep->chgWData(oldp+3170,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_58),128);
            tracep->chgWData(oldp+3174,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_59),128);
            tracep->chgWData(oldp+3178,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_60),128);
            tracep->chgWData(oldp+3182,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_61),128);
            tracep->chgWData(oldp+3186,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_62),128);
            tracep->chgWData(oldp+3190,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_63),128);
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
