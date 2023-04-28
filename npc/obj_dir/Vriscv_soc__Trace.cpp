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
    VlWide<4>/*127:0*/ __Vtemp3061;
    VlWide<4>/*127:0*/ __Vtemp3062;
    VlWide<4>/*127:0*/ __Vtemp3063;
    VlWide<4>/*127:0*/ __Vtemp3064;
    VlWide<4>/*127:0*/ __Vtemp3065;
    VlWide<4>/*127:0*/ __Vtemp3066;
    VlWide<4>/*127:0*/ __Vtemp3067;
    VlWide<4>/*127:0*/ __Vtemp3068;
    VlWide<4>/*127:0*/ __Vtemp3069;
    VlWide<4>/*127:0*/ __Vtemp3070;
    VlWide<4>/*127:0*/ __Vtemp3071;
    VlWide<4>/*127:0*/ __Vtemp3073;
    VlWide<4>/*127:0*/ __Vtemp3074;
    VlWide<4>/*127:0*/ __Vtemp3079;
    VlWide<4>/*127:0*/ __Vtemp3080;
    VlWide<4>/*127:0*/ __Vtemp3084;
    VlWide<4>/*127:0*/ __Vtemp3086;
    VlWide<4>/*127:0*/ __Vtemp3087;
    VlWide<4>/*127:0*/ __Vtemp3088;
    VlWide<3>/*95:0*/ __Vtemp3089;
    VlWide<3>/*95:0*/ __Vtemp3091;
    VlWide<3>/*95:0*/ __Vtemp3092;
    VlWide<3>/*95:0*/ __Vtemp3093;
    VlWide<3>/*95:0*/ __Vtemp3094;
    VlWide<3>/*95:0*/ __Vtemp3097;
    VlWide<3>/*95:0*/ __Vtemp3098;
    VlWide<3>/*95:0*/ __Vtemp3099;
    VlWide<5>/*159:0*/ __Vtemp3111;
    VlWide<5>/*159:0*/ __Vtemp3115;
    VlWide<3>/*95:0*/ __Vtemp3117;
    VlWide<5>/*159:0*/ __Vtemp3119;
    VlWide<5>/*159:0*/ __Vtemp3120;
    VlWide<5>/*159:0*/ __Vtemp3121;
    VlWide<5>/*159:0*/ __Vtemp3122;
    VlWide<5>/*159:0*/ __Vtemp3123;
    VlWide<5>/*159:0*/ __Vtemp3125;
    VlWide<5>/*159:0*/ __Vtemp3126;
    VlWide<5>/*159:0*/ __Vtemp3127;
    VlWide<5>/*159:0*/ __Vtemp3128;
    VlWide<5>/*159:0*/ __Vtemp3129;
    VlWide<5>/*159:0*/ __Vtemp3131;
    VlWide<5>/*159:0*/ __Vtemp3132;
    VlWide<5>/*159:0*/ __Vtemp3133;
    VlWide<5>/*159:0*/ __Vtemp3141;
    VlWide<5>/*159:0*/ __Vtemp3142;
    VlWide<5>/*159:0*/ __Vtemp3150;
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
            VL_EXTEND_WQ(128,54, __Vtemp3061, (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                               >> 0xaU));
            tracep->chgWData(oldp+31,(__Vtemp3061),128);
            tracep->chgWData(oldp+35,(vlSelf->riscv_soc__DOT__sram1__DOT__Q),128);
            tracep->chgCData(oldp+39,(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_data_addr),6);
            tracep->chgBit(oldp+40,((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram1_write)))));
            tracep->chgWData(oldp+41,(vlSelf->riscv_soc__DOT__sram2__DOT__Q),128);
            tracep->chgCData(oldp+45,(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_tag_addr),6);
            tracep->chgWData(oldp+46,(vlSelf->riscv_soc__DOT__sram3__DOT__Q),128);
            tracep->chgCData(oldp+50,(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_data_addr),6);
            tracep->chgBit(oldp+51,((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram0_write)))));
            __Vtemp3062[0U] = (~ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__cache_mask[0U]);
            __Vtemp3062[1U] = (~ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__cache_mask[1U]);
            __Vtemp3062[2U] = (~ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__cache_mask[2U]);
            __Vtemp3062[3U] = (~ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__cache_mask[3U]);
            tracep->chgWData(oldp+52,(__Vtemp3062),128);
            tracep->chgWData(oldp+56,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_wdata),128);
            tracep->chgWData(oldp+60,(vlSelf->riscv_soc__DOT__sram4__DOT__Q),128);
            tracep->chgCData(oldp+64,(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_tag_addr),6);
            VL_EXTEND_WQ(128,54, __Vtemp3063, vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag);
            tracep->chgWData(oldp+65,(__Vtemp3063),128);
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
            tracep->chgQData(oldp+90,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__regfile
                                      [1U]),64);
            tracep->chgQData(oldp+92,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__regfile
                                      [2U]),64);
            tracep->chgQData(oldp+94,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__regfile
                                      [3U]),64);
            tracep->chgQData(oldp+96,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__regfile
                                      [4U]),64);
            tracep->chgQData(oldp+98,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__regfile
                                      [5U]),64);
            tracep->chgQData(oldp+100,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__regfile
                                       [6U]),64);
            tracep->chgQData(oldp+102,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__regfile
                                       [7U]),64);
            tracep->chgQData(oldp+104,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__regfile
                                       [8U]),64);
            tracep->chgQData(oldp+106,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__regfile
                                       [9U]),64);
            tracep->chgQData(oldp+108,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__regfile
                                       [0xaU]),64);
            tracep->chgQData(oldp+110,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__regfile
                                       [0xbU]),64);
            tracep->chgQData(oldp+112,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__regfile
                                       [0xcU]),64);
            tracep->chgQData(oldp+114,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__regfile
                                       [0xdU]),64);
            tracep->chgQData(oldp+116,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__regfile
                                       [0xeU]),64);
            tracep->chgQData(oldp+118,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__regfile
                                       [0xfU]),64);
            tracep->chgQData(oldp+120,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__regfile
                                       [0x10U]),64);
            tracep->chgQData(oldp+122,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__regfile
                                       [0x11U]),64);
            tracep->chgQData(oldp+124,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__regfile
                                       [0x12U]),64);
            tracep->chgQData(oldp+126,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__regfile
                                       [0x13U]),64);
            tracep->chgQData(oldp+128,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__regfile
                                       [0x14U]),64);
            tracep->chgQData(oldp+130,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__regfile
                                       [0x15U]),64);
            tracep->chgQData(oldp+132,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__regfile
                                       [0x16U]),64);
            tracep->chgQData(oldp+134,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__regfile
                                       [0x17U]),64);
            tracep->chgQData(oldp+136,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__regfile
                                       [0x18U]),64);
            tracep->chgQData(oldp+138,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__regfile
                                       [0x19U]),64);
            tracep->chgQData(oldp+140,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__regfile
                                       [0x1aU]),64);
            tracep->chgQData(oldp+142,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__regfile
                                       [0x1bU]),64);
            tracep->chgQData(oldp+144,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__regfile
                                       [0x1cU]),64);
            tracep->chgQData(oldp+146,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__regfile
                                       [0x1dU]),64);
            tracep->chgQData(oldp+148,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__regfile
                                       [0x1eU]),64);
            tracep->chgQData(oldp+150,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__regfile
                                       [0x1fU]),64);
            tracep->chgQData(oldp+152,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__inst_counter),64);
            tracep->chgQData(oldp+154,((QData)((IData)(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__difftest_inst))),64);
            tracep->chgBit(oldp+156,(vlSelf->riscv_soc__DOT__core__DOT__fetch_io_out_flush));
            tracep->chgBit(oldp+157,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1_io_cpu_addr_ready));
            tracep->chgBit(oldp+158,(((0ULL != (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0 
                                                >> 0x1fU)) 
                                      & (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_bus_valid))));
            tracep->chgQData(oldp+159,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0),64);
            tracep->chgBit(oldp+161,((3U > (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__reg_ibuf_size))));
            tracep->chgBit(oldp+162,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_valid));
            tracep->chgQData(oldp+163,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_rdata),64);
            tracep->chgQData(oldp+165,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr),64);
            tracep->chgBit(oldp+167,(vlSelf->riscv_soc__DOT__core__DOT__execute_io_fence_i));
            tracep->chgBit(oldp+168,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_r_valid));
            tracep->chgQData(oldp+169,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_r_raddr),64);
            tracep->chgBit(oldp+171,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_ICache_bus_r_bits_rlast));
            tracep->chgBit(oldp+172,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_ICache_bus_r_ready));
            tracep->chgBit(oldp+173,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1_io_DCache_valid));
            tracep->chgQData(oldp+174,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu_io_bus_bits_addr),64);
            tracep->chgQData(oldp+176,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_rdata),64);
            tracep->chgQData(oldp+178,((((QData)((IData)(
                                                         vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT___io_bus_bits_wdata_T[1U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT___io_bus_bits_wdata_T[0U])))),64);
            tracep->chgCData(oldp+180,((0xffU & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT___io_bus_bits_wstrb_T))),8);
            tracep->chgBit(oldp+181,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu_io_bus_bits_is_w));
            tracep->chgBit(oldp+182,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_ready));
            tracep->chgBit(oldp+183,(((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__w_chosen)) 
                                      & (IData)(vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_w_ready))));
            tracep->chgBit(oldp+184,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_w_valid));
            tracep->chgQData(oldp+185,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_w_waddr),64);
            tracep->chgQData(oldp+187,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_w_wdata),64);
            tracep->chgBit(oldp+189,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_w_wlast));
            tracep->chgBit(oldp+190,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_b_ready));
            tracep->chgBit(oldp+191,(((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__w_chosen)) 
                                      & (IData)(vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_b_valid))));
            tracep->chgBit(oldp+192,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_r_valid));
            tracep->chgQData(oldp+193,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_r_raddr),64);
            tracep->chgBit(oldp+195,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_DCache_bus_r_bits_rlast));
            tracep->chgBit(oldp+196,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_DCache_bus_r_ready));
            tracep->chgBit(oldp+197,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1_io_bus1_valid));
            tracep->chgBit(oldp+198,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_bus1_ready));
            tracep->chgBit(oldp+199,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1_io_bus2_valid));
            tracep->chgBit(oldp+200,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_bus2_ready));
            tracep->chgBit(oldp+201,(((0ULL != (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0 
                                                >> 0x1fU))
                                       ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1_io_cpu_addr_ready)
                                       : (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_bus1_ready))));
            tracep->chgBit(oldp+202,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_bus_valid));
            tracep->chgBit(oldp+203,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1_io_fetch_cpu_data_valid));
            tracep->chgQData(oldp+204,(((0ULL != (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0 
                                                  >> 0x1fU))
                                         ? vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_rdata
                                         : vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata)),64);
            tracep->chgQData(oldp+206,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1_io_fetch_cpu_data_bits_pc),64);
            tracep->chgBit(oldp+208,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu_io_bus_valid));
            tracep->chgQData(oldp+209,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1_io_wb_bits_rdata),64);
            tracep->chgBit(oldp+211,(((0ULL != (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu_io_bus_bits_addr 
                                                >> 0x1fU))
                                       ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_ready)
                                       : ((IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1__DOT__not_clint)
                                           ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_bus2_ready)
                                           : (IData)(vlSelf->riscv_soc__DOT__core__DOT__clint_de__DOT__reg_ready)))));
            tracep->chgBit(oldp+212,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1_io_clint_bus_valid));
            tracep->chgQData(oldp+213,(vlSelf->riscv_soc__DOT__core__DOT__clint_de__DOT__red_rdata),64);
            tracep->chgBit(oldp+215,(vlSelf->riscv_soc__DOT__core__DOT__clint_de__DOT__reg_ready));
            tracep->chgBit(oldp+216,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_valid));
            tracep->chgBit(oldp+217,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_mispredict));
            tracep->chgQData(oldp+218,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc),64);
            tracep->chgBit(oldp+220,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_taken));
            tracep->chgQData(oldp+221,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_next_pc),64);
            tracep->chgBit(oldp+223,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__is_pre));
            tracep->chgQData(oldp+224,(((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__is_pre)
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
            tracep->chgQData(oldp+226,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_next_pc),64);
            tracep->chgBit(oldp+228,(vlSelf->riscv_soc__DOT__core__DOT__execute_io_flush));
            tracep->chgBit(oldp+229,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__ready));
            tracep->chgBit(oldp+230,(((3U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__reg_tail))
                                       ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_valid_3)
                                       : (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT___GEN_2))));
            tracep->chgIData(oldp+231,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst),32);
            tracep->chgQData(oldp+232,(((3U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__reg_tail))
                                         ? vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_pc_3
                                         : ((2U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__reg_tail))
                                             ? vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_pc_2
                                             : ((1U 
                                                 == (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__reg_tail))
                                                 ? vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_pc_1
                                                 : vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_pc_0)))),64);
            tracep->chgBit(oldp+234,(((3U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__reg_tail))
                                       ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_is_pre_3)
                                       : ((2U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__reg_tail))
                                           ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_is_pre_2)
                                           : ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__reg_tail))
                                               ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_is_pre_1)
                                               : (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_is_pre_0))))));
            tracep->chgBit(oldp+235,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_valid));
            tracep->chgCData(oldp+236,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_opType),3);
            tracep->chgCData(oldp+237,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType),7);
            tracep->chgCData(oldp+238,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs1_addr),5);
            tracep->chgQData(oldp+239,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs1_data),64);
            tracep->chgCData(oldp+241,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs2_addr),5);
            tracep->chgQData(oldp+242,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs2_data),64);
            tracep->chgIData(oldp+244,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_imm),32);
            tracep->chgQData(oldp+245,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_pc),64);
            tracep->chgIData(oldp+247,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_inst),32);
            tracep->chgCData(oldp+248,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_dest_addr),5);
            tracep->chgBit(oldp+249,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_dest_is_reg));
            tracep->chgBit(oldp+250,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_is_pre));
            tracep->chgSData(oldp+251,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_csr_addr),12);
            tracep->chgQData(oldp+252,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_csr_data),64);
            tracep->chgBit(oldp+254,((vlSelf->riscv_soc__DOT__core__DOT__clint_de__DOT__reg_mtimecmp 
                                      <= vlSelf->riscv_soc__DOT__core__DOT__clint_de__DOT__reg_mtime)));
            tracep->chgBit(oldp+255,(vlSelf->riscv_soc__DOT__core__DOT__clint_de__DOT__reg_msip));
            tracep->chgQData(oldp+256,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg_io_r_csr_mstatus),64);
            tracep->chgQData(oldp+258,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg_io_r_csr_mie),64);
            tracep->chgQData(oldp+260,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg_io_r_csr_mepc),64);
            tracep->chgQData(oldp+262,((((0x305U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_csr_addr)) 
                                         & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute_io_csr_valid))
                                         ? vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_csr_data
                                         : vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__reg_mtvec)),64);
            tracep->chgBit(oldp+264,(vlSelf->riscv_soc__DOT__core__DOT__execute_io_wb_valid));
            tracep->chgCData(oldp+265,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_dest_addr),5);
            tracep->chgQData(oldp+266,(vlSelf->riscv_soc__DOT__core__DOT__execute_io_wb_dest_data),64);
            tracep->chgBit(oldp+268,(vlSelf->riscv_soc__DOT__core__DOT__execute_io_csr_valid));
            tracep->chgSData(oldp+269,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_csr_addr),12);
            tracep->chgQData(oldp+270,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_csr_data),64);
            tracep->chgBit(oldp+272,(vlSelf->riscv_soc__DOT__core__DOT__execute_io_csr_except_is_except));
            tracep->chgBit(oldp+273,(vlSelf->riscv_soc__DOT__core__DOT__execute_io_csr_except_is_time_irq));
            tracep->chgBit(oldp+274,(vlSelf->riscv_soc__DOT__core__DOT__execute_io_csr_except_is_soft_irq));
            tracep->chgCData(oldp+275,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_exception),6);
            tracep->chgQData(oldp+276,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_except_next_pc),64);
            tracep->chgQData(oldp+278,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_except_pc),64);
            tracep->chgBit(oldp+280,(vlSelf->riscv_soc__DOT__core__DOT__execute_io_commit));
            tracep->chgIData(oldp+281,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_difftest_inst),32);
            tracep->chgBit(oldp+282,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_difftest_peripheral));
            tracep->chgCData(oldp+283,((0x1fU & (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst 
                                                 >> 0xfU))),5);
            tracep->chgQData(oldp+284,(((((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_dest_addr) 
                                          == (0x1fU 
                                              & (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst 
                                                 >> 0xfU))) 
                                         & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute_io_wb_valid))
                                         ? vlSelf->riscv_soc__DOT__core__DOT__execute_io_wb_dest_data
                                         : ((0U == 
                                             (0x1fU 
                                              & (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst 
                                                 >> 0xfU)))
                                             ? 0ULL
                                             : vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__regfile
                                            [(0x1fU 
                                              & (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst 
                                                 >> 0xfU))]))),64);
            tracep->chgCData(oldp+286,((0x1fU & (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst 
                                                 >> 0x14U))),5);
            tracep->chgQData(oldp+287,(((((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_dest_addr) 
                                          == (0x1fU 
                                              & (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst 
                                                 >> 0x14U))) 
                                         & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute_io_wb_valid))
                                         ? vlSelf->riscv_soc__DOT__core__DOT__execute_io_wb_dest_data
                                         : ((0U == 
                                             (0x1fU 
                                              & (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst 
                                                 >> 0x14U)))
                                             ? 0ULL
                                             : vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__regfile
                                            [(0x1fU 
                                              & (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst 
                                                 >> 0x14U))]))),64);
            tracep->chgSData(oldp+289,((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst 
                                        >> 0x14U)),12);
            tracep->chgQData(oldp+290,(((((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst 
                                           >> 0x14U) 
                                          == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_csr_addr)) 
                                         & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute_io_csr_valid))
                                         ? vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_csr_data
                                         : ((0xb02U 
                                             == (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst 
                                                 >> 0x14U))
                                             ? vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__reg_minstret
                                             : vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT___csr_rdata_T_33))),64);
            tracep->chgBit(oldp+292,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage0__DOT__reg_valid));
            tracep->chgQData(oldp+293,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage0__DOT__reg_addr),64);
            tracep->chgCData(oldp+295,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1_io_tag_valid_index),6);
            tracep->chgBit(oldp+296,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1_io_tag_valid_tag_valid_0));
            tracep->chgBit(oldp+297,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1_io_tag_valid_tag_valid_1));
            tracep->chgBit(oldp+298,(((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage0__DOT__reg_valid) 
                                      & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch_io_out_flush)))));
            tracep->chgWData(oldp+299,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1_io_sram_sram_data_0),128);
            tracep->chgWData(oldp+303,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1_io_sram_sram_data_1),128);
            VL_EXTEND_WQ(128,54, __Vtemp3064, (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                               >> 0xaU));
            VL_EXTEND_WQ(128,54, __Vtemp3065, (0x3fffffffffffffULL 
                                               & (((QData)((IData)(
                                                                   vlSelf->riscv_soc__DOT__sram1__DOT__Q[1U])) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(
                                                                    vlSelf->riscv_soc__DOT__sram1__DOT__Q[0U])))));
            if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__w_r_pass0_val) {
                __Vtemp3066[0U] = __Vtemp3064[0U];
                __Vtemp3066[1U] = __Vtemp3064[1U];
                __Vtemp3066[2U] = __Vtemp3064[2U];
                __Vtemp3066[3U] = __Vtemp3064[3U];
            } else {
                __Vtemp3066[0U] = __Vtemp3065[0U];
                __Vtemp3066[1U] = __Vtemp3065[1U];
                __Vtemp3066[2U] = __Vtemp3065[2U];
                __Vtemp3066[3U] = __Vtemp3065[3U];
            }
            tracep->chgWData(oldp+307,(__Vtemp3066),128);
            VL_EXTEND_WQ(128,54, __Vtemp3067, (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                               >> 0xaU));
            VL_EXTEND_WQ(128,54, __Vtemp3068, (0x3fffffffffffffULL 
                                               & (((QData)((IData)(
                                                                   vlSelf->riscv_soc__DOT__sram3__DOT__Q[1U])) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(
                                                                    vlSelf->riscv_soc__DOT__sram3__DOT__Q[0U])))));
            if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__w_r_pass1_val) {
                __Vtemp3069[0U] = __Vtemp3067[0U];
                __Vtemp3069[1U] = __Vtemp3067[1U];
                __Vtemp3069[2U] = __Vtemp3067[2U];
                __Vtemp3069[3U] = __Vtemp3067[3U];
            } else {
                __Vtemp3069[0U] = __Vtemp3068[0U];
                __Vtemp3069[1U] = __Vtemp3068[1U];
                __Vtemp3069[2U] = __Vtemp3068[2U];
                __Vtemp3069[3U] = __Vtemp3068[3U];
            }
            tracep->chgWData(oldp+311,(__Vtemp3069),128);
            tracep->chgBit(oldp+315,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_sram_r_ready));
            tracep->chgBit(oldp+316,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2_io_cache_stage1_ready));
            tracep->chgBit(oldp+317,(((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1__DOT__reg_valid) 
                                      & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_sram_r_ready))));
            tracep->chgQData(oldp+318,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1__DOT__reg_cpu_addr),64);
            tracep->chgBit(oldp+320,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1_io_cache_stage1_bits_sram_0_hit));
            tracep->chgQData(oldp+321,(((1U & (IData)(
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
            tracep->chgBit(oldp+323,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1_io_cache_stage1_bits_sram_1_hit));
            tracep->chgQData(oldp+324,(((1U & (IData)(
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
            tracep->chgBit(oldp+326,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_write));
            tracep->chgCData(oldp+327,((0x3fU & (IData)(
                                                        (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                                         >> 4U)))),6);
            tracep->chgBit(oldp+328,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_chosen_tag));
            tracep->chgQData(oldp+329,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_sram0_valid),64);
            tracep->chgQData(oldp+331,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_sram1_valid),64);
            tracep->chgBit(oldp+333,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_w_sram));
            tracep->chgBit(oldp+334,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram0_write));
            tracep->chgBit(oldp+335,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram1_write));
            tracep->chgQData(oldp+336,((1ULL << (0x3fU 
                                                 & (IData)(
                                                           (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                                            >> 4U))))),64);
            tracep->chgBit(oldp+338,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_temp_sram0_valid));
            tracep->chgBit(oldp+339,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_temp_sram1_valid));
            tracep->chgCData(oldp+340,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_temp_r_index),6);
            tracep->chgBit(oldp+341,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__w_r_pass0_val));
            tracep->chgBit(oldp+342,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__w_r_pass1_val));
            tracep->chgBit(oldp+343,((((0ULL != (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0 
                                                 >> 0x1fU)) 
                                       & (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_bus_valid)) 
                                      & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch_io_out_flush)))));
            tracep->chgBit(oldp+344,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1__DOT__ready));
            tracep->chgBit(oldp+345,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1__DOT__reg_valid));
            tracep->chgQData(oldp+346,((vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1__DOT__reg_cpu_addr 
                                        >> 0xaU)),54);
            tracep->chgCData(oldp+348,((0x3fU & (IData)(
                                                        (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1__DOT__reg_cpu_addr 
                                                         >> 4U)))),6);
            tracep->chgCData(oldp+349,((0xfU & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1__DOT__reg_cpu_addr))),4);
            VL_EXTEND_WQ(128,54, __Vtemp3070, (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                               >> 0xaU));
            VL_EXTEND_WQ(128,54, __Vtemp3071, (0x3fffffffffffffULL 
                                               & (((QData)((IData)(
                                                                   vlSelf->riscv_soc__DOT__sram1__DOT__Q[1U])) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(
                                                                    vlSelf->riscv_soc__DOT__sram1__DOT__Q[0U])))));
            tracep->chgQData(oldp+350,((0x3fffffffffffffULL 
                                        & (((QData)((IData)(
                                                            ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__w_r_pass0_val)
                                                              ? 
                                                             __Vtemp3070[1U]
                                                              : 
                                                             __Vtemp3071[1U]))) 
                                            << 0x20U) 
                                           | (QData)((IData)(
                                                             ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__w_r_pass0_val)
                                                               ? 
                                                              __Vtemp3070[0U]
                                                               : 
                                                              __Vtemp3071[0U])))))),54);
            VL_EXTEND_WQ(128,54, __Vtemp3073, (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                               >> 0xaU));
            VL_EXTEND_WQ(128,54, __Vtemp3074, (0x3fffffffffffffULL 
                                               & (((QData)((IData)(
                                                                   vlSelf->riscv_soc__DOT__sram3__DOT__Q[1U])) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(
                                                                    vlSelf->riscv_soc__DOT__sram3__DOT__Q[0U])))));
            tracep->chgQData(oldp+352,((0x3fffffffffffffULL 
                                        & (((QData)((IData)(
                                                            ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__w_r_pass1_val)
                                                              ? 
                                                             __Vtemp3073[1U]
                                                              : 
                                                             __Vtemp3074[1U]))) 
                                            << 0x20U) 
                                           | (QData)((IData)(
                                                             ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__w_r_pass1_val)
                                                               ? 
                                                              __Vtemp3073[0U]
                                                               : 
                                                              __Vtemp3074[0U])))))),54);
            tracep->chgBit(oldp+354,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__valid));
            tracep->chgBit(oldp+355,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_ready));
            tracep->chgQData(oldp+356,((0xfffffffffffffff0ULL 
                                        & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1__DOT__reg_cpu_addr)),64);
            tracep->chgQData(oldp+358,((vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                        >> 0xaU)),54);
            tracep->chgCData(oldp+360,((0xfU & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr))),4);
            tracep->chgQData(oldp+361,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_lru_1),64);
            tracep->chgBit(oldp+363,((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT___LRU_1_T))));
            tracep->chgQData(oldp+364,((1ULL << (0x3fU 
                                                 & (IData)(
                                                           (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1__DOT__reg_cpu_addr 
                                                            >> 4U))))),64);
            tracep->chgQData(oldp+366,((~ (1ULL << 
                                           (0x3fU & (IData)(
                                                            (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1__DOT__reg_cpu_addr 
                                                             >> 4U)))))),64);
            tracep->chgCData(oldp+368,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_bus_state),2);
            tracep->chgQData(oldp+369,((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu_io_bus_bits_addr 
                                        >> 0xaU)),54);
            tracep->chgCData(oldp+371,((0x3fU & (IData)(
                                                        (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu_io_bus_bits_addr 
                                                         >> 4U)))),6);
            tracep->chgCData(oldp+372,((0xfU & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu_io_bus_bits_addr))),4);
            tracep->chgCData(oldp+373,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state),2);
            tracep->chgQData(oldp+374,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_wdata),64);
            tracep->chgCData(oldp+376,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_wstrb),8);
            tracep->chgBit(oldp+377,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_is_w));
            tracep->chgQData(oldp+378,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag),54);
            tracep->chgCData(oldp+380,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index),6);
            tracep->chgCData(oldp+381,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_offset),4);
            tracep->chgBit(oldp+382,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_write));
            tracep->chgSData(oldp+383,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_wstrb),16);
            tracep->chgBit(oldp+384,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_chosen_tag));
            tracep->chgQData(oldp+385,((((QData)((IData)(
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
            tracep->chgWData(oldp+387,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__cache_mask),128);
            tracep->chgWData(oldp+391,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__cache_wdata),128);
            tracep->chgBit(oldp+395,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram0_write));
            tracep->chgQData(oldp+396,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_sram0_valid),64);
            tracep->chgQData(oldp+398,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_sram0_dirty),64);
            tracep->chgQData(oldp+400,((1ULL << (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index))),64);
            tracep->chgQData(oldp+402,((~ (1ULL << (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)))),64);
            tracep->chgBit(oldp+404,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram2_write));
            tracep->chgQData(oldp+405,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_sram2_valid),64);
            tracep->chgQData(oldp+407,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_sram2_dirty),64);
            tracep->chgQData(oldp+409,((0x3fffffffffffffULL 
                                        & (((QData)((IData)(
                                                            vlSelf->riscv_soc__DOT__sram5__DOT__Q[1U])) 
                                            << 0x20U) 
                                           | (QData)((IData)(
                                                             vlSelf->riscv_soc__DOT__sram5__DOT__Q[0U]))))),54);
            tracep->chgQData(oldp+411,((0x3fffffffffffffULL 
                                        & (((QData)((IData)(
                                                            vlSelf->riscv_soc__DOT__sram7__DOT__Q[1U])) 
                                            << 0x20U) 
                                           | (QData)((IData)(
                                                             vlSelf->riscv_soc__DOT__sram7__DOT__Q[0U]))))),54);
            tracep->chgBit(oldp+413,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_0));
            tracep->chgBit(oldp+414,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2));
            tracep->chgBit(oldp+415,((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___tag_valid_0_T))));
            tracep->chgBit(oldp+416,((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___tag_valid_2_T))));
            tracep->chgBit(oldp+417,((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___tag_dirty_0_T))));
            tracep->chgBit(oldp+418,((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___tag_dirty_2_T))));
            tracep->chgQData(oldp+419,(((8U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_offset))
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
            tracep->chgQData(oldp+421,(((8U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_offset))
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
            tracep->chgQData(oldp+423,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_2),64);
            tracep->chgBit(oldp+425,((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___LRU_2_T))));
            tracep->chgBit(oldp+426,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation));
            tracep->chgCData(oldp+427,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cnt),2);
            tracep->chgBit(oldp+428,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_rbus_finish));
            tracep->chgBit(oldp+429,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_wbus_finish));
            tracep->chgBit(oldp+430,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__w_locked));
            tracep->chgCData(oldp+431,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__w_lockId),2);
            tracep->chgCData(oldp+432,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__w_chosen),2);
            tracep->chgCData(oldp+433,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__reg_r_cnt),2);
            tracep->chgBit(oldp+434,((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__reg_r_cnt))));
            tracep->chgCData(oldp+435,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__r_lockId),2);
            tracep->chgCData(oldp+436,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__r_chosen),2);
            tracep->chgBit(oldp+437,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__reg_aw_ok));
            tracep->chgBit(oldp+438,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__reg_ar_ok));
            tracep->chgBit(oldp+439,((0ULL == (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0 
                                               >> 0x1fU))));
            tracep->chgBit(oldp+440,((0ULL == (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu_io_bus_bits_addr 
                                               >> 0x1fU))));
            tracep->chgBit(oldp+441,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1__DOT__not_clint));
            tracep->chgBit(oldp+442,((((IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1_io_fetch_cpu_data_valid) 
                                       & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_flush))) 
                                      & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute_io_flush)))));
            tracep->chgIData(oldp+443,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_cache_buf_bits_inst),32);
            tracep->chgBit(oldp+444,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_cache_buf_bits_is_pre));
            tracep->chgQData(oldp+445,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor_io_pre_next_pc),64);
            tracep->chgBit(oldp+447,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor_io_pre_valid));
            tracep->chgBit(oldp+448,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_flush));
            tracep->chgQData(oldp+449,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_next_pc),64);
            tracep->chgCData(oldp+451,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__pre_info_head),2);
            tracep->chgCData(oldp+452,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__pre_info_tail),2);
            tracep->chgQData(oldp+453,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__pre_info_fifo_0),64);
            tracep->chgQData(oldp+455,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__pre_info_fifo_1),64);
            tracep->chgQData(oldp+457,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__pre_info_fifo_2),64);
            tracep->chgQData(oldp+459,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__pre_info_fifo_3),64);
            tracep->chgBit(oldp+461,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__pre_enq));
            tracep->chgCData(oldp+462,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__is_pre_head),2);
            tracep->chgCData(oldp+463,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__is_pre_tail),2);
            tracep->chgBit(oldp+464,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__is_pre_fifo_0));
            tracep->chgBit(oldp+465,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__is_pre_fifo_1));
            tracep->chgBit(oldp+466,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__is_pre_fifo_2));
            tracep->chgBit(oldp+467,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__is_pre_fifo_3));
            tracep->chgQData(oldp+468,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_pc_0),64);
            tracep->chgQData(oldp+470,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_pc_1),64);
            tracep->chgQData(oldp+472,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_pc_2),64);
            tracep->chgQData(oldp+474,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_pc_3),64);
            tracep->chgIData(oldp+476,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_0),32);
            tracep->chgIData(oldp+477,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_1),32);
            tracep->chgIData(oldp+478,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_2),32);
            tracep->chgIData(oldp+479,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_3),32);
            tracep->chgBit(oldp+480,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_is_pre_0));
            tracep->chgBit(oldp+481,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_is_pre_1));
            tracep->chgBit(oldp+482,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_is_pre_2));
            tracep->chgBit(oldp+483,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_is_pre_3));
            tracep->chgBit(oldp+484,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_valid_0));
            tracep->chgBit(oldp+485,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_valid_1));
            tracep->chgBit(oldp+486,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_valid_2));
            tracep->chgBit(oldp+487,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_valid_3));
            tracep->chgCData(oldp+488,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__reg_head),2);
            tracep->chgCData(oldp+489,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__reg_tail),2);
            tracep->chgCData(oldp+490,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__reg_ibuf_size),3);
            tracep->chgBit(oldp+491,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__enq_size));
            tracep->chgBit(oldp+492,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__can_deq));
            tracep->chgCData(oldp+493,((7U & (((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__reg_ibuf_size) 
                                               + (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__enq_size)) 
                                              - (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__can_deq)))),3);
            tracep->chgCData(oldp+494,((0x3fU & (IData)(
                                                        (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0 
                                                         >> 3U)))),6);
            tracep->chgWData(oldp+495,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_btb_data_data),128);
            __Vtemp3079[0U] = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_next_pc) 
                               << 2U);
            __Vtemp3079[1U] = (((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_next_pc) 
                                >> 0x1eU) | ((IData)(
                                                     (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_next_pc 
                                                      >> 0x20U)) 
                                             << 2U));
            __Vtemp3079[2U] = (((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                         >> 9U)) << 3U) 
                               | ((4U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                                  >> 2U)) 
                                         << 2U)) | 
                                  ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_next_pc 
                                            >> 0x20U)) 
                                   >> 0x1eU)));
            __Vtemp3079[3U] = (0x4000000U | (((IData)(
                                                      (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                                       >> 9U)) 
                                              >> 0x1dU) 
                                             | ((IData)(
                                                        ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                                          >> 9U) 
                                                         >> 0x20U)) 
                                                << 3U)));
            VL_EXTEND_WW(128,123, __Vtemp3080, __Vtemp3079);
            tracep->chgWData(oldp+499,(__Vtemp3080),128);
            tracep->chgCData(oldp+503,((0x3fU & (IData)(
                                                        (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                                         >> 3U)))),6);
            tracep->chgBit(oldp+504,(((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_valid) 
                                      & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_mispredict))));
            tracep->chgQData(oldp+505,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__RAS[0]),64);
            tracep->chgQData(oldp+507,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__RAS[1]),64);
            tracep->chgQData(oldp+509,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__RAS[2]),64);
            tracep->chgQData(oldp+511,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__RAS[3]),64);
            tracep->chgQData(oldp+513,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__RAS[4]),64);
            tracep->chgQData(oldp+515,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__RAS[5]),64);
            tracep->chgBit(oldp+517,(((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__pre_valid) 
                                      & (2U == (3U 
                                                & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_btb_data_data[0U])))));
            tracep->chgCData(oldp+518,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__reg_head),3);
            tracep->chgQData(oldp+519,(((5U >= (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__reg_head))
                                         ? vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__RAS
                                        [vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__reg_head]
                                         : 0ULL)),64);
            tracep->chgBit(oldp+521,(((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__pre_valid) 
                                      & ((2U != (3U 
                                                 & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_btb_data_data[0U])) 
                                         & (1U == (3U 
                                                   & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_btb_data_data[0U]))))));
            tracep->chgCData(oldp+522,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_0),2);
            tracep->chgCData(oldp+523,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_1),2);
            tracep->chgCData(oldp+524,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_2),2);
            tracep->chgCData(oldp+525,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_3),2);
            tracep->chgCData(oldp+526,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_4),2);
            tracep->chgCData(oldp+527,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_5),2);
            tracep->chgCData(oldp+528,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_6),2);
            tracep->chgCData(oldp+529,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_7),2);
            tracep->chgCData(oldp+530,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_8),2);
            tracep->chgCData(oldp+531,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_9),2);
            tracep->chgCData(oldp+532,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_10),2);
            tracep->chgCData(oldp+533,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_11),2);
            tracep->chgCData(oldp+534,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_12),2);
            tracep->chgCData(oldp+535,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_13),2);
            tracep->chgCData(oldp+536,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_14),2);
            tracep->chgCData(oldp+537,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_15),2);
            tracep->chgCData(oldp+538,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_16),2);
            tracep->chgCData(oldp+539,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_17),2);
            tracep->chgCData(oldp+540,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_18),2);
            tracep->chgCData(oldp+541,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_19),2);
            tracep->chgCData(oldp+542,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_20),2);
            tracep->chgCData(oldp+543,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_21),2);
            tracep->chgCData(oldp+544,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_22),2);
            tracep->chgCData(oldp+545,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_23),2);
            tracep->chgCData(oldp+546,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_24),2);
            tracep->chgCData(oldp+547,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_25),2);
            tracep->chgCData(oldp+548,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_26),2);
            tracep->chgCData(oldp+549,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_27),2);
            tracep->chgCData(oldp+550,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_28),2);
            tracep->chgCData(oldp+551,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_29),2);
            tracep->chgCData(oldp+552,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_30),2);
            tracep->chgCData(oldp+553,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_31),2);
            tracep->chgCData(oldp+554,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_32),2);
            tracep->chgCData(oldp+555,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_33),2);
            tracep->chgCData(oldp+556,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_34),2);
            tracep->chgCData(oldp+557,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_35),2);
            tracep->chgCData(oldp+558,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_36),2);
            tracep->chgCData(oldp+559,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_37),2);
            tracep->chgCData(oldp+560,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_38),2);
            tracep->chgCData(oldp+561,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_39),2);
            tracep->chgCData(oldp+562,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_40),2);
            tracep->chgCData(oldp+563,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_41),2);
            tracep->chgCData(oldp+564,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_42),2);
            tracep->chgCData(oldp+565,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_43),2);
            tracep->chgCData(oldp+566,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_44),2);
            tracep->chgCData(oldp+567,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_45),2);
            tracep->chgCData(oldp+568,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_46),2);
            tracep->chgCData(oldp+569,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_47),2);
            tracep->chgCData(oldp+570,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_48),2);
            tracep->chgCData(oldp+571,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_49),2);
            tracep->chgCData(oldp+572,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_50),2);
            tracep->chgCData(oldp+573,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_51),2);
            tracep->chgCData(oldp+574,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_52),2);
            tracep->chgCData(oldp+575,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_53),2);
            tracep->chgCData(oldp+576,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_54),2);
            tracep->chgCData(oldp+577,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_55),2);
            tracep->chgCData(oldp+578,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_56),2);
            tracep->chgCData(oldp+579,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_57),2);
            tracep->chgCData(oldp+580,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_58),2);
            tracep->chgCData(oldp+581,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_59),2);
            tracep->chgCData(oldp+582,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_60),2);
            tracep->chgCData(oldp+583,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_61),2);
            tracep->chgCData(oldp+584,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_62),2);
            tracep->chgCData(oldp+585,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_63),2);
            __Vtemp3084[0U] = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_next_pc) 
                               << 2U);
            __Vtemp3084[1U] = (((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_next_pc) 
                                >> 0x1eU) | ((IData)(
                                                     (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_next_pc 
                                                      >> 0x20U)) 
                                             << 2U));
            __Vtemp3084[2U] = (((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                         >> 9U)) << 3U) 
                               | ((4U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                                  >> 2U)) 
                                         << 2U)) | 
                                  ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_next_pc 
                                            >> 0x20U)) 
                                   >> 0x1eU)));
            __Vtemp3084[3U] = (0x4000000U | (((IData)(
                                                      (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                                       >> 9U)) 
                                              >> 0x1dU) 
                                             | ((IData)(
                                                        ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                                          >> 9U) 
                                                         >> 0x20U)) 
                                                << 3U)));
            tracep->chgWData(oldp+586,(__Vtemp3084),123);
            tracep->chgQData(oldp+590,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__tag),56);
            tracep->chgBit(oldp+592,((1U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___GEN_265) 
                                            >> 1U))));
            tracep->chgBit(oldp+593,((1U & (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_btb_data_data[3U] 
                                            >> 0x1aU))));
            tracep->chgQData(oldp+594,((0xffffffffffffffULL 
                                        & (((QData)((IData)(
                                                            vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_btb_data_data[3U])) 
                                            << 0x1eU) 
                                           | ((QData)((IData)(
                                                              vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_btb_data_data[2U])) 
                                              >> 2U)))),56);
            tracep->chgQData(oldp+596,((((QData)((IData)(
                                                         vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_btb_data_data[2U])) 
                                         << 0x3eU) 
                                        | (((QData)((IData)(
                                                            vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_btb_data_data[1U])) 
                                            << 0x1eU) 
                                           | ((QData)((IData)(
                                                              vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_btb_data_data[0U])) 
                                              >> 2U)))),64);
            tracep->chgCData(oldp+598,((3U & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_btb_data_data[0U])),2);
            tracep->chgBit(oldp+599,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__pre_valid));
            tracep->chgBit(oldp+600,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu_io_valid));
            tracep->chgBit(oldp+601,(((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_opType)) 
                                      & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu_io_valid))));
            tracep->chgBit(oldp+602,(((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__br_valid) 
                                      & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__flush))));
            tracep->chgQData(oldp+603,(((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__br_valid)
                                         ? vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_pc
                                         : 0ULL)),64);
            tracep->chgBit(oldp+605,(((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__br_valid) 
                                      & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[2U])));
            tracep->chgQData(oldp+606,(((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__br_valid)
                                         ? (((QData)((IData)(
                                                             vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[1U])) 
                                             << 0x20U) 
                                            | (QData)((IData)(
                                                              vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[0U])))
                                         : 0ULL)),64);
            tracep->chgQData(oldp+608,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu_io_rs1_data),64);
            tracep->chgQData(oldp+610,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu_io_rs2_data),64);
            tracep->chgQData(oldp+612,(((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu_io_valid)
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
            tracep->chgBit(oldp+614,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu_io_valid_next_pc));
            tracep->chgQData(oldp+615,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu_io_next_pc),64);
            tracep->chgBit(oldp+617,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu_io_valid));
            tracep->chgQData(oldp+618,((((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute_io_wb_valid) 
                                         & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_dest_addr) 
                                            == (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs1_addr)))
                                         ? vlSelf->riscv_soc__DOT__core__DOT__execute_io_wb_dest_data
                                         : vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs1_data)),64);
            tracep->chgQData(oldp+620,((((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute_io_wb_valid) 
                                         & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_dest_addr) 
                                            == (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs2_addr)))
                                         ? vlSelf->riscv_soc__DOT__core__DOT__execute_io_wb_dest_data
                                         : vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs2_data)),64);
            tracep->chgQData(oldp+622,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_result_data),64);
            tracep->chgBit(oldp+624,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_w_rs_en));
            tracep->chgBit(oldp+625,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_ready));
            tracep->chgBit(oldp+626,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu_io_valid));
            tracep->chgQData(oldp+627,(((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_dest_is_w)
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
            tracep->chgBit(oldp+629,(((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_dest_is_w) 
                                      | (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_dest_is_w))));
            tracep->chgBit(oldp+630,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu_io_ready));
            tracep->chgBit(oldp+631,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu_io_valid));
            tracep->chgQData(oldp+632,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu_io_csr_data),64);
            tracep->chgBit(oldp+634,(((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu_io_valid) 
                                      & ((0U != (7U 
                                                 & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                                    >> 2U))) 
                                         | (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu__DOT__is_ret)))));
            tracep->chgQData(oldp+635,(((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu__DOT__is_ret)
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
            tracep->chgSData(oldp+637,(((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu__DOT__is_ret)
                                         ? 0x300U : (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_csr_addr))),12);
            tracep->chgBit(oldp+638,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu_io_is_except));
            tracep->chgCData(oldp+639,(((0U == (0x1fU 
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
            tracep->chgBit(oldp+640,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu_io_valid_next_pc));
            tracep->chgBit(oldp+641,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__in_data_valid));
            tracep->chgCData(oldp+642,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_valid),4);
            tracep->chgBit(oldp+643,((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_valid))));
            tracep->chgBit(oldp+644,((1U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_valid) 
                                            >> 1U))));
            tracep->chgBit(oldp+645,((1U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_valid) 
                                            >> 2U))));
            tracep->chgBit(oldp+646,((1U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_valid) 
                                            >> 3U))));
            tracep->chgCData(oldp+647,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__valid),4);
            tracep->chgBit(oldp+648,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_sys_alu_w_valid));
            tracep->chgQData(oldp+649,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_sys_alu_wdata),64);
            tracep->chgBit(oldp+651,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_csr_is_w));
            tracep->chgBit(oldp+652,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_is_except));
            tracep->chgBit(oldp+653,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_is_time_irq));
            tracep->chgBit(oldp+654,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_is_soft_irq));
            tracep->chgBit(oldp+655,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__time_irq));
            tracep->chgBit(oldp+656,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__soft_irq));
            tracep->chgBit(oldp+657,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__irq));
            tracep->chgBit(oldp+658,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_valid_next_pc));
            tracep->chgBit(oldp+659,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_fence_i));
            tracep->chgBit(oldp+660,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_commit));
            tracep->chgBit(oldp+661,((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType))));
            tracep->chgQData(oldp+662,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__op_data1),64);
            tracep->chgQData(oldp+664,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__op_data2),64);
            tracep->chgQData(oldp+666,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu__DOT__imm),64);
            tracep->chgBit(oldp+668,((1U & (~ ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                               >> 1U)))));
            tracep->chgQData(oldp+669,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__rs2_data),64);
            tracep->chgBit(oldp+671,((3U == (3U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                                   >> 5U)))));
            tracep->chgBit(oldp+672,((1U == (3U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                                   >> 5U)))));
            tracep->chgQData(oldp+673,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__rs1_data),64);
            tracep->chgQData(oldp+675,(((1U == (3U 
                                                & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                                   >> 5U)))
                                         ? (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__rs2_data)
                                         : vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__rs2_data)),64);
            tracep->chgWData(oldp+677,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__add_sub_result),65);
            tracep->chgBit(oldp+680,((1U & (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__add_sub_result[2U]))));
            tracep->chgBit(oldp+681,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__s_rs1_l_rs2));
            tracep->chgCData(oldp+682,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__shift_rs2_data),6);
            VL_EXTEND_WQ(127,64, __Vtemp3086, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__op_data1);
            VL_SHIFTL_WWI(127,127,6, __Vtemp3087, __Vtemp3086, (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__shift_rs2_data));
            __Vtemp3088[0U] = __Vtemp3087[0U];
            __Vtemp3088[1U] = __Vtemp3087[1U];
            __Vtemp3088[2U] = __Vtemp3087[2U];
            __Vtemp3088[3U] = (0x7fffffffU & __Vtemp3087[3U]);
            tracep->chgWData(oldp+683,(__Vtemp3088),127);
            tracep->chgQData(oldp+687,((((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType))
                                          ? (QData)((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__op_data1))
                                          : vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__op_data1) 
                                        >> (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__shift_rs2_data))),64);
            tracep->chgQData(oldp+689,(VL_SHIFTRS_QQI(64,64,6, 
                                                      ((1U 
                                                        & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType))
                                                        ? vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___op_data1_T_4
                                                        : vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu_io_rs1_data), (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__shift_rs2_data))),64);
            tracep->chgQData(oldp+691,(((1U == (3U 
                                                & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                                   >> 5U)))
                                         ? VL_SHIFTRS_QQI(64,64,6, 
                                                          ((1U 
                                                            & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType))
                                                            ? vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___op_data1_T_4
                                                            : vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu_io_rs1_data), (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__shift_rs2_data))
                                         : (((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType))
                                              ? (QData)((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__op_data1))
                                              : vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__op_data1) 
                                            >> (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__shift_rs2_data)))),64);
            tracep->chgCData(oldp+693,((7U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                              >> 2U))),3);
            tracep->chgQData(oldp+694,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__result_data),64);
            tracep->chgBit(oldp+696,((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_opType))));
            tracep->chgBit(oldp+697,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__is_eq));
            tracep->chgQData(oldp+698,(((2U == (7U 
                                                & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                                   >> 2U)))
                                         ? vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu_io_rs1_data
                                         : vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_pc)),64);
            __Vtemp3089[0U] = (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___add_pc_T_1);
            __Vtemp3089[1U] = (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___add_pc_T_1 
                                       >> 0x20U));
            __Vtemp3089[2U] = 1U;
            tracep->chgWData(oldp+700,(__Vtemp3089),65);
            tracep->chgQData(oldp+703,((4ULL + vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_pc)),64);
            tracep->chgWData(oldp+705,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc),65);
            tracep->chgQData(oldp+708,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__dst_data),64);
            tracep->chgQData(oldp+710,((((QData)((IData)(
                                                         vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[1U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[0U])))),64);
            tracep->chgBit(oldp+712,((1U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[2U])));
            tracep->chgBit(oldp+713,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__br_valid));
            tracep->chgBit(oldp+714,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__flush));
            tracep->chgQData(oldp+715,((((QData)((IData)(
                                                         ((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_imm 
                                                           >> 0x1fU)
                                                           ? 0xffffffffU
                                                           : 0U))) 
                                         << 0x20U) 
                                        | (QData)((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_imm)))),64);
            tracep->chgQData(oldp+717,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_bus_addr),64);
            tracep->chgQData(oldp+719,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_bus_wdata),64);
            tracep->chgCData(oldp+721,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_bus_wstrb),8);
            tracep->chgBit(oldp+722,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_bus_is_w));
            tracep->chgBit(oldp+723,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_bus_valid));
            tracep->chgCData(oldp+724,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_exuType),7);
            tracep->chgQData(oldp+725,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__mem_r_data),64);
            tracep->chgQData(oldp+727,(((0x18U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_exuType))
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
            tracep->chgQData(oldp+729,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__mem_addr),64);
            tracep->chgBit(oldp+731,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__w_mem_en));
            tracep->chgQData(oldp+732,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__mem_wstrb),64);
            tracep->chgBit(oldp+734,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_ls_state));
            tracep->chgWData(oldp+735,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__mem_w_data),127);
            tracep->chgBit(oldp+739,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__chose_chancel));
            tracep->chgBit(oldp+740,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div_io_valid));
            tracep->chgQData(oldp+741,(((8U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_exuType))
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
            tracep->chgBit(oldp+743,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_dest_is_w));
            tracep->chgBit(oldp+744,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_ready));
            tracep->chgBit(oldp+745,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul_io_valid));
            tracep->chgQData(oldp+746,(((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_exuType))
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
            tracep->chgBit(oldp+748,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_dest_is_w));
            tracep->chgBit(oldp+749,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_ready));
            tracep->chgBit(oldp+750,((1U & (~ ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                               >> 2U)))));
            tracep->chgWData(oldp+751,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__dividend),65);
            tracep->chgWData(oldp+754,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__divisor),65);
            tracep->chgWData(oldp+757,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__rem),65);
            tracep->chgWData(oldp+760,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor),65);
            tracep->chgWData(oldp+763,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_dividend),66);
            tracep->chgWData(oldp+766,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem),65);
            tracep->chgWData(oldp+769,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_q),66);
            __Vtemp3091[0U] = 1U;
            __Vtemp3091[1U] = 0U;
            __Vtemp3091[2U] = 0U;
            __Vtemp3092[0U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[0U]);
            __Vtemp3092[1U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[1U]);
            __Vtemp3092[2U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[2U]);
            VL_ADD_W(3, __Vtemp3093, __Vtemp3091, __Vtemp3092);
            __Vtemp3094[0U] = __Vtemp3093[0U];
            __Vtemp3094[1U] = __Vtemp3093[1U];
            __Vtemp3094[2U] = (1U & __Vtemp3093[2U]);
            tracep->chgWData(oldp+772,(__Vtemp3094),65);
            tracep->chgCData(oldp+775,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state),2);
            tracep->chgCData(oldp+776,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_cnt),7);
            tracep->chgCData(oldp+777,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_exuType),7);
            tracep->chgWData(oldp+778,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__temp_result),132);
            tracep->chgBit(oldp+783,((0U == ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[0U] 
                                              | vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[1U]) 
                                             | vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[2U]))));
            __Vtemp3097[0U] = 1U;
            __Vtemp3097[1U] = 0U;
            __Vtemp3097[2U] = 0U;
            __Vtemp3098[0U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[0U]);
            __Vtemp3098[1U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[1U]);
            __Vtemp3098[2U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[2U]);
            VL_ADD_W(3, __Vtemp3099, __Vtemp3097, __Vtemp3098);
            tracep->chgBit(oldp+784,((0U == (((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[0U] 
                                               ^ __Vtemp3099[0U]) 
                                              | (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[1U] 
                                                 ^ 
                                                 __Vtemp3099[1U])) 
                                             | (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[2U] 
                                                ^ (1U 
                                                   & __Vtemp3099[2U]))))));
            tracep->chgBit(oldp+785,((0U == (((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[0U] 
                                               ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[0U]) 
                                              | (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[1U] 
                                                 ^ 
                                                 vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[1U])) 
                                             | (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[2U] 
                                                ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[2U])))));
            tracep->chgBit(oldp+786,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__is_need_correct));
            tracep->chgBit(oldp+787,((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_exuType))));
            tracep->chgBit(oldp+788,((1U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_exuType) 
                                            >> 3U))));
            tracep->chgQData(oldp+789,(((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_exuType))
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
            tracep->chgQData(oldp+791,(((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_exuType))
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
            tracep->chgBit(oldp+793,((1U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                            >> 2U))));
            tracep->chgBit(oldp+794,((1U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                            >> 1U))));
            VL_EXTEND_WQ(130,64, __Vtemp3111, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu_io_rs1_data);
            if ((4U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType))) {
                __Vtemp3115[0U] = (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu_io_rs1_data);
                __Vtemp3115[1U] = ((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu_io_rs1_data 
                                                  >> 0x1fU)))
                                    ? 0xffffffffU : 0U);
                __Vtemp3115[2U] = ((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu_io_rs1_data 
                                                  >> 0x1fU)))
                                    ? 0xffffffffU : 0U);
                __Vtemp3115[3U] = ((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu_io_rs1_data 
                                                  >> 0x1fU)))
                                    ? 0xffffffffU : 0U);
                __Vtemp3115[4U] = ((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu_io_rs1_data 
                                                  >> 0x1fU)))
                                    ? 3U : 0U);
            } else {
                __Vtemp3115[0U] = ((2U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType))
                                    ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu_io_rs1_data)
                                    : __Vtemp3111[0U]);
                __Vtemp3115[1U] = ((2U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType))
                                    ? (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu_io_rs1_data 
                                               >> 0x20U))
                                    : __Vtemp3111[1U]);
                __Vtemp3115[2U] = ((2U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType))
                                    ? ((1U & (IData)(
                                                     (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu_io_rs1_data 
                                                      >> 0x3fU)))
                                        ? 0xffffffffU
                                        : 0U) : __Vtemp3111[2U]);
                __Vtemp3115[3U] = ((2U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType))
                                    ? ((1U & (IData)(
                                                     (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu_io_rs1_data 
                                                      >> 0x3fU)))
                                        ? 0xffffffffU
                                        : 0U) : __Vtemp3111[3U]);
                __Vtemp3115[4U] = ((2U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType))
                                    ? ((1U & (IData)(
                                                     (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu_io_rs1_data 
                                                      >> 0x3fU)))
                                        ? 3U : 0U) : 
                                   __Vtemp3111[4U]);
            }
            tracep->chgWData(oldp+795,(__Vtemp3115),130);
            tracep->chgWData(oldp+800,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__mul_data2),65);
            __Vtemp3117[0U] = (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__mul_data2[0U] 
                               << 1U);
            __Vtemp3117[1U] = ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__mul_data2[0U] 
                                >> 0x1fU) | (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__mul_data2[1U] 
                                             << 1U));
            __Vtemp3117[2U] = ((4U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__mul_data2[2U] 
                                      << 2U)) | ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__mul_data2[1U] 
                                                  >> 0x1fU) 
                                                 | (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__mul_data2[2U] 
                                                    << 1U)));
            tracep->chgWData(oldp+803,(__Vtemp3117),67);
            tracep->chgCData(oldp+806,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_state),2);
            tracep->chgWData(oldp+807,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2),67);
            tracep->chgWData(oldp+810,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1),130);
            tracep->chgWData(oldp+815,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_result),130);
            tracep->chgCData(oldp+820,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_exuType),7);
            __Vtemp3119[0U] = 1U;
            __Vtemp3119[1U] = 0U;
            __Vtemp3119[2U] = 0U;
            __Vtemp3119[3U] = 0U;
            __Vtemp3119[4U] = 0U;
            __Vtemp3120[0U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[0U]);
            __Vtemp3120[1U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[1U]);
            __Vtemp3120[2U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[2U]);
            __Vtemp3120[3U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[3U]);
            __Vtemp3120[4U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[4U]);
            VL_ADD_W(5, __Vtemp3121, __Vtemp3119, __Vtemp3120);
            __Vtemp3122[0U] = __Vtemp3121[0U];
            __Vtemp3122[1U] = __Vtemp3121[1U];
            __Vtemp3122[2U] = __Vtemp3121[2U];
            __Vtemp3122[3U] = __Vtemp3121[3U];
            __Vtemp3122[4U] = (3U & __Vtemp3121[4U]);
            VL_EXTEND_WW(131,130, __Vtemp3123, __Vtemp3122);
            __Vtemp3125[0U] = 1U;
            __Vtemp3125[1U] = 0U;
            __Vtemp3125[2U] = 0U;
            __Vtemp3125[3U] = 0U;
            __Vtemp3125[4U] = 0U;
            __Vtemp3126[0U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[0U]);
            __Vtemp3126[1U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[1U]);
            __Vtemp3126[2U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[2U]);
            __Vtemp3126[3U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[3U]);
            __Vtemp3126[4U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[4U]);
            VL_ADD_W(5, __Vtemp3127, __Vtemp3125, __Vtemp3126);
            __Vtemp3128[0U] = __Vtemp3127[0U];
            __Vtemp3128[1U] = __Vtemp3127[1U];
            __Vtemp3128[2U] = __Vtemp3127[2U];
            __Vtemp3128[3U] = __Vtemp3127[3U];
            __Vtemp3128[4U] = (3U & __Vtemp3127[4U]);
            VL_EXTEND_WW(131,130, __Vtemp3129, __Vtemp3128);
            __Vtemp3131[0U] = 1U;
            __Vtemp3131[1U] = 0U;
            __Vtemp3131[2U] = 0U;
            __Vtemp3131[3U] = 0U;
            __Vtemp3131[4U] = 0U;
            __Vtemp3132[0U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[0U]);
            __Vtemp3132[1U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[1U]);
            __Vtemp3132[2U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[2U]);
            __Vtemp3132[3U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[3U]);
            __Vtemp3132[4U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[4U]);
            VL_ADD_W(5, __Vtemp3133, __Vtemp3131, __Vtemp3132);
            if ((2U == (7U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[0U]))) {
                __Vtemp3141[0U] = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[0U];
                __Vtemp3141[1U] = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[1U];
                __Vtemp3141[2U] = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[2U];
                __Vtemp3141[3U] = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[3U];
                __Vtemp3141[4U] = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[4U];
            } else {
                __Vtemp3141[0U] = ((1U == (7U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[0U]))
                                    ? vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[0U]
                                    : 0U);
                __Vtemp3141[1U] = ((1U == (7U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[0U]))
                                    ? vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[1U]
                                    : 0U);
                __Vtemp3141[2U] = ((1U == (7U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[0U]))
                                    ? vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[2U]
                                    : 0U);
                __Vtemp3141[3U] = ((1U == (7U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[0U]))
                                    ? vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[3U]
                                    : 0U);
                __Vtemp3141[4U] = ((1U == (7U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[0U]))
                                    ? vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[4U]
                                    : 0U);
            }
            VL_EXTEND_WW(131,130, __Vtemp3142, __Vtemp3141);
            if ((6U == (7U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[0U]))) {
                __Vtemp3150[0U] = __Vtemp3123[0U];
                __Vtemp3150[1U] = __Vtemp3123[1U];
                __Vtemp3150[2U] = __Vtemp3123[2U];
                __Vtemp3150[3U] = __Vtemp3123[3U];
                __Vtemp3150[4U] = __Vtemp3123[4U];
            } else {
                __Vtemp3150[0U] = ((5U == (7U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[0U]))
                                    ? __Vtemp3129[0U]
                                    : ((4U == (7U & 
                                               vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[0U]))
                                        ? (__Vtemp3133[0U] 
                                           << 1U) : 
                                       ((3U == (7U 
                                                & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[0U]))
                                         ? (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[0U] 
                                            << 1U) : 
                                        __Vtemp3142[0U])));
                __Vtemp3150[1U] = ((5U == (7U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[0U]))
                                    ? __Vtemp3129[1U]
                                    : ((4U == (7U & 
                                               vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[0U]))
                                        ? ((__Vtemp3133[0U] 
                                            >> 0x1fU) 
                                           | (__Vtemp3133[1U] 
                                              << 1U))
                                        : ((3U == (7U 
                                                   & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[0U]))
                                            ? ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[0U] 
                                                >> 0x1fU) 
                                               | (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[1U] 
                                                  << 1U))
                                            : __Vtemp3142[1U])));
                __Vtemp3150[2U] = ((5U == (7U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[0U]))
                                    ? __Vtemp3129[2U]
                                    : ((4U == (7U & 
                                               vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[0U]))
                                        ? ((__Vtemp3133[1U] 
                                            >> 0x1fU) 
                                           | (__Vtemp3133[2U] 
                                              << 1U))
                                        : ((3U == (7U 
                                                   & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[0U]))
                                            ? ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[1U] 
                                                >> 0x1fU) 
                                               | (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[2U] 
                                                  << 1U))
                                            : __Vtemp3142[2U])));
                __Vtemp3150[3U] = ((5U == (7U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[0U]))
                                    ? __Vtemp3129[3U]
                                    : ((4U == (7U & 
                                               vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[0U]))
                                        ? ((__Vtemp3133[2U] 
                                            >> 0x1fU) 
                                           | (__Vtemp3133[3U] 
                                              << 1U))
                                        : ((3U == (7U 
                                                   & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[0U]))
                                            ? ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[2U] 
                                                >> 0x1fU) 
                                               | (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[3U] 
                                                  << 1U))
                                            : __Vtemp3142[3U])));
                __Vtemp3150[4U] = ((5U == (7U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[0U]))
                                    ? __Vtemp3129[4U]
                                    : ((4U == (7U & 
                                               vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[0U]))
                                        ? ((__Vtemp3133[3U] 
                                            >> 0x1fU) 
                                           | (6U & 
                                              (__Vtemp3133[4U] 
                                               << 1U)))
                                        : ((3U == (7U 
                                                   & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[0U]))
                                            ? ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[3U] 
                                                >> 0x1fU) 
                                               | (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[4U] 
                                                  << 1U))
                                            : __Vtemp3142[4U])));
            }
            tracep->chgWData(oldp+821,(__Vtemp3150),131);
            tracep->chgCData(oldp+826,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_cnt),7);
            tracep->chgBit(oldp+827,((0U == (3U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_exuType) 
                                                   >> 2U)))));
            tracep->chgBit(oldp+828,((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_exuType))));
            tracep->chgBit(oldp+829,((1U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                            >> 4U))));
            tracep->chgQData(oldp+830,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu__DOT__op_data),64);
            tracep->chgQData(oldp+832,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu__DOT__or_result),64);
            tracep->chgQData(oldp+834,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu__DOT__and_result),64);
            tracep->chgQData(oldp+836,(((7U == (7U 
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
            tracep->chgBit(oldp+838,((0x10U == (0x1fU 
                                                & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                                   >> 2U)))));
            tracep->chgBit(oldp+839,((0x18U == (0x1fU 
                                                & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                                   >> 2U)))));
            tracep->chgBit(oldp+840,((0U == (0x1fU 
                                             & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                                >> 2U)))));
            tracep->chgBit(oldp+841,((8U == (0x1fU 
                                             & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                                >> 2U)))));
            tracep->chgBit(oldp+842,(((0U == (0x1fU 
                                              & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                                 >> 2U))) 
                                      | (8U == (0x1fU 
                                                & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                                   >> 2U))))));
            tracep->chgCData(oldp+843,(((0U == (0x1fU 
                                                & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                                   >> 2U)))
                                         ? 0xbU : (
                                                   (8U 
                                                    == 
                                                    (0x1fU 
                                                     & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                                        >> 2U)))
                                                    ? 3U
                                                    : 0U))),4);
            tracep->chgBit(oldp+844,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu__DOT__is_ret));
            tracep->chgQData(oldp+845,(((0xffffffffffffff77ULL 
                                         & vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg_io_r_csr_mstatus) 
                                        | (QData)((IData)(
                                                          ((1U 
                                                            & (IData)(
                                                                      (vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg_io_r_csr_mstatus 
                                                                       >> 7U)))
                                                            ? 0x88U
                                                            : 0x80U))))),64);
            tracep->chgCData(oldp+847,((0x1fU & (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst 
                                                 >> 7U))),5);
            tracep->chgCData(oldp+848,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__instType),4);
            tracep->chgBit(oldp+849,(((0x33U == (0xfe00707fU 
                                                 & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst)) 
                                      | ((0x13U == 
                                          (0x707fU 
                                           & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst)) 
                                         | ((0x1bU 
                                             == (0x707fU 
                                                 & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst)) 
                                            | ((0x3bU 
                                                == 
                                                (0xfe00707fU 
                                                 & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst)) 
                                               | ((0x7033U 
                                                   == 
                                                   (0xfe00707fU 
                                                    & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst)) 
                                                  | ((0x7013U 
                                                      == 
                                                      (0x707fU 
                                                       & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst)) 
                                                     | ((0x17U 
                                                         == 
                                                         (0x7fU 
                                                          & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst)) 
                                                        | ((0x63U 
                                                            != 
                                                            (0x707fU 
                                                             & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst)) 
                                                           & ((0x5063U 
                                                               != 
                                                               (0x707fU 
                                                                & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst)) 
                                                              & ((0x7063U 
                                                                  != 
                                                                  (0x707fU 
                                                                   & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst)) 
                                                                 & ((0x4063U 
                                                                     != 
                                                                     (0x707fU 
                                                                      & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst)) 
                                                                    & ((0x6063U 
                                                                        != 
                                                                        (0x707fU 
                                                                         & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst)) 
                                                                       & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT___T_434)))))))))))))));
            tracep->chgBit(oldp+850,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__rs1_is_reg));
            tracep->chgBit(oldp+851,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__rs2_is_reg));
            tracep->chgCData(oldp+852,((0x1fU & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_exception))),5);
            tracep->chgQData(oldp+853,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__regfile[0]),64);
            tracep->chgQData(oldp+855,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__regfile[1]),64);
            tracep->chgQData(oldp+857,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__regfile[2]),64);
            tracep->chgQData(oldp+859,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__regfile[3]),64);
            tracep->chgQData(oldp+861,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__regfile[4]),64);
            tracep->chgQData(oldp+863,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__regfile[5]),64);
            tracep->chgQData(oldp+865,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__regfile[6]),64);
            tracep->chgQData(oldp+867,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__regfile[7]),64);
            tracep->chgQData(oldp+869,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__regfile[8]),64);
            tracep->chgQData(oldp+871,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__regfile[9]),64);
            tracep->chgQData(oldp+873,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__regfile[10]),64);
            tracep->chgQData(oldp+875,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__regfile[11]),64);
            tracep->chgQData(oldp+877,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__regfile[12]),64);
            tracep->chgQData(oldp+879,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__regfile[13]),64);
            tracep->chgQData(oldp+881,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__regfile[14]),64);
            tracep->chgQData(oldp+883,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__regfile[15]),64);
            tracep->chgQData(oldp+885,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__regfile[16]),64);
            tracep->chgQData(oldp+887,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__regfile[17]),64);
            tracep->chgQData(oldp+889,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__regfile[18]),64);
            tracep->chgQData(oldp+891,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__regfile[19]),64);
            tracep->chgQData(oldp+893,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__regfile[20]),64);
            tracep->chgQData(oldp+895,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__regfile[21]),64);
            tracep->chgQData(oldp+897,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__regfile[22]),64);
            tracep->chgQData(oldp+899,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__regfile[23]),64);
            tracep->chgQData(oldp+901,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__regfile[24]),64);
            tracep->chgQData(oldp+903,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__regfile[25]),64);
            tracep->chgQData(oldp+905,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__regfile[26]),64);
            tracep->chgQData(oldp+907,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__regfile[27]),64);
            tracep->chgQData(oldp+909,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__regfile[28]),64);
            tracep->chgQData(oldp+911,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__regfile[29]),64);
            tracep->chgQData(oldp+913,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__regfile[30]),64);
            tracep->chgQData(oldp+915,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__regfile[31]),64);
            tracep->chgQData(oldp+917,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__regfile
                                       [(0x1fU & (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst 
                                                  >> 0xfU))]),64);
            tracep->chgQData(oldp+919,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__regfile
                                       [(0x1fU & (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst 
                                                  >> 0x14U))]),64);
            tracep->chgQData(oldp+921,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__regfile
                                       [0U]),64);
            tracep->chgBit(oldp+923,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__irq));
            tracep->chgQData(oldp+924,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__reg_mstatus),64);
            tracep->chgQData(oldp+926,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__reg_mie),64);
            tracep->chgQData(oldp+928,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__reg_mtvec),64);
            tracep->chgQData(oldp+930,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__reg_mscratch),64);
            tracep->chgQData(oldp+932,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__reg_mepc),64);
            tracep->chgQData(oldp+934,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__reg_mcause),64);
            tracep->chgQData(oldp+936,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__reg_mtval),64);
            tracep->chgQData(oldp+938,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__reg_mcycle),64);
            tracep->chgQData(oldp+940,(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__reg_minstret),64);
            tracep->chgQData(oldp+942,(((0xb02U == 
                                         (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst 
                                          >> 0x14U))
                                         ? vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__reg_minstret
                                         : vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT___csr_rdata_T_33)),64);
            tracep->chgQData(oldp+944,(vlSelf->riscv_soc__DOT__core__DOT__clint_de__DOT__reg_mtime),64);
            tracep->chgQData(oldp+946,(vlSelf->riscv_soc__DOT__core__DOT__clint_de__DOT__reg_mtimecmp),64);
            tracep->chgBit(oldp+948,(vlSelf->riscv_soc__DOT__core__DOT__clint_de__DOT__reg_state));
            tracep->chgBit(oldp+949,((0U == (0xffffU 
                                             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu_io_bus_bits_addr)))));
            tracep->chgBit(oldp+950,((0x4000U == (0xffffU 
                                                  & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu_io_bus_bits_addr)))));
            tracep->chgQData(oldp+951,(((IData)(vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_r_valid)
                                         ? vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_raddr
                                         : vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_AXI_Bus_ar_bits_araddr)),64);
            tracep->chgQData(oldp+953,(vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_w_addr),64);
            tracep->chgQData(oldp+955,((((QData)((IData)(
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
            tracep->chgBit(oldp+957,(((IData)(vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_is_w) 
                                      & (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_AXI_Bus_w_valid))));
            tracep->chgQData(oldp+958,(vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_raddr),64);
            tracep->chgCData(oldp+960,(vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_rlen),4);
            tracep->chgBit(oldp+961,(vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_r_state));
            tracep->chgBit(oldp+962,(vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_is_w));
            tracep->chgIData(oldp+963,(((((8U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_AXI_Bus_w_bits_wstrb))
                                           ? 0xffU : 0U) 
                                         << 0x18U) 
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
            tracep->chgIData(oldp+964,(((((0x80U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_AXI_Bus_w_bits_wstrb))
                                           ? 0xffU : 0U) 
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
                                                  : 0U))))),32);
            tracep->chgWData(oldp+965,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_0),128);
            tracep->chgWData(oldp+969,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_1),128);
            tracep->chgWData(oldp+973,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_2),128);
            tracep->chgWData(oldp+977,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_3),128);
            tracep->chgWData(oldp+981,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_4),128);
            tracep->chgWData(oldp+985,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_5),128);
            tracep->chgWData(oldp+989,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_6),128);
            tracep->chgWData(oldp+993,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_7),128);
            tracep->chgWData(oldp+997,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_8),128);
            tracep->chgWData(oldp+1001,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_9),128);
            tracep->chgWData(oldp+1005,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_10),128);
            tracep->chgWData(oldp+1009,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_11),128);
            tracep->chgWData(oldp+1013,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_12),128);
            tracep->chgWData(oldp+1017,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_13),128);
            tracep->chgWData(oldp+1021,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_14),128);
            tracep->chgWData(oldp+1025,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_15),128);
            tracep->chgWData(oldp+1029,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_16),128);
            tracep->chgWData(oldp+1033,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_17),128);
            tracep->chgWData(oldp+1037,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_18),128);
            tracep->chgWData(oldp+1041,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_19),128);
            tracep->chgWData(oldp+1045,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_20),128);
            tracep->chgWData(oldp+1049,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_21),128);
            tracep->chgWData(oldp+1053,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_22),128);
            tracep->chgWData(oldp+1057,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_23),128);
            tracep->chgWData(oldp+1061,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_24),128);
            tracep->chgWData(oldp+1065,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_25),128);
            tracep->chgWData(oldp+1069,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_26),128);
            tracep->chgWData(oldp+1073,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_27),128);
            tracep->chgWData(oldp+1077,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_28),128);
            tracep->chgWData(oldp+1081,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_29),128);
            tracep->chgWData(oldp+1085,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_30),128);
            tracep->chgWData(oldp+1089,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_31),128);
            tracep->chgWData(oldp+1093,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_32),128);
            tracep->chgWData(oldp+1097,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_33),128);
            tracep->chgWData(oldp+1101,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_34),128);
            tracep->chgWData(oldp+1105,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_35),128);
            tracep->chgWData(oldp+1109,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_36),128);
            tracep->chgWData(oldp+1113,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_37),128);
            tracep->chgWData(oldp+1117,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_38),128);
            tracep->chgWData(oldp+1121,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_39),128);
            tracep->chgWData(oldp+1125,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_40),128);
            tracep->chgWData(oldp+1129,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_41),128);
            tracep->chgWData(oldp+1133,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_42),128);
            tracep->chgWData(oldp+1137,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_43),128);
            tracep->chgWData(oldp+1141,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_44),128);
            tracep->chgWData(oldp+1145,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_45),128);
            tracep->chgWData(oldp+1149,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_46),128);
            tracep->chgWData(oldp+1153,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_47),128);
            tracep->chgWData(oldp+1157,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_48),128);
            tracep->chgWData(oldp+1161,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_49),128);
            tracep->chgWData(oldp+1165,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_50),128);
            tracep->chgWData(oldp+1169,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_51),128);
            tracep->chgWData(oldp+1173,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_52),128);
            tracep->chgWData(oldp+1177,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_53),128);
            tracep->chgWData(oldp+1181,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_54),128);
            tracep->chgWData(oldp+1185,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_55),128);
            tracep->chgWData(oldp+1189,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_56),128);
            tracep->chgWData(oldp+1193,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_57),128);
            tracep->chgWData(oldp+1197,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_58),128);
            tracep->chgWData(oldp+1201,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_59),128);
            tracep->chgWData(oldp+1205,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_60),128);
            tracep->chgWData(oldp+1209,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_61),128);
            tracep->chgWData(oldp+1213,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_62),128);
            tracep->chgWData(oldp+1217,(vlSelf->riscv_soc__DOT__sram0__DOT__sram_63),128);
            tracep->chgWData(oldp+1221,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_0),128);
            tracep->chgWData(oldp+1225,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_1),128);
            tracep->chgWData(oldp+1229,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_2),128);
            tracep->chgWData(oldp+1233,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_3),128);
            tracep->chgWData(oldp+1237,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_4),128);
            tracep->chgWData(oldp+1241,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_5),128);
            tracep->chgWData(oldp+1245,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_6),128);
            tracep->chgWData(oldp+1249,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_7),128);
            tracep->chgWData(oldp+1253,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_8),128);
            tracep->chgWData(oldp+1257,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_9),128);
            tracep->chgWData(oldp+1261,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_10),128);
            tracep->chgWData(oldp+1265,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_11),128);
            tracep->chgWData(oldp+1269,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_12),128);
            tracep->chgWData(oldp+1273,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_13),128);
            tracep->chgWData(oldp+1277,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_14),128);
            tracep->chgWData(oldp+1281,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_15),128);
            tracep->chgWData(oldp+1285,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_16),128);
            tracep->chgWData(oldp+1289,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_17),128);
            tracep->chgWData(oldp+1293,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_18),128);
            tracep->chgWData(oldp+1297,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_19),128);
            tracep->chgWData(oldp+1301,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_20),128);
            tracep->chgWData(oldp+1305,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_21),128);
            tracep->chgWData(oldp+1309,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_22),128);
            tracep->chgWData(oldp+1313,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_23),128);
            tracep->chgWData(oldp+1317,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_24),128);
            tracep->chgWData(oldp+1321,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_25),128);
            tracep->chgWData(oldp+1325,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_26),128);
            tracep->chgWData(oldp+1329,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_27),128);
            tracep->chgWData(oldp+1333,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_28),128);
            tracep->chgWData(oldp+1337,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_29),128);
            tracep->chgWData(oldp+1341,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_30),128);
            tracep->chgWData(oldp+1345,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_31),128);
            tracep->chgWData(oldp+1349,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_32),128);
            tracep->chgWData(oldp+1353,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_33),128);
            tracep->chgWData(oldp+1357,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_34),128);
            tracep->chgWData(oldp+1361,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_35),128);
            tracep->chgWData(oldp+1365,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_36),128);
            tracep->chgWData(oldp+1369,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_37),128);
            tracep->chgWData(oldp+1373,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_38),128);
            tracep->chgWData(oldp+1377,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_39),128);
            tracep->chgWData(oldp+1381,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_40),128);
            tracep->chgWData(oldp+1385,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_41),128);
            tracep->chgWData(oldp+1389,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_42),128);
            tracep->chgWData(oldp+1393,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_43),128);
            tracep->chgWData(oldp+1397,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_44),128);
            tracep->chgWData(oldp+1401,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_45),128);
            tracep->chgWData(oldp+1405,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_46),128);
            tracep->chgWData(oldp+1409,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_47),128);
            tracep->chgWData(oldp+1413,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_48),128);
            tracep->chgWData(oldp+1417,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_49),128);
            tracep->chgWData(oldp+1421,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_50),128);
            tracep->chgWData(oldp+1425,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_51),128);
            tracep->chgWData(oldp+1429,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_52),128);
            tracep->chgWData(oldp+1433,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_53),128);
            tracep->chgWData(oldp+1437,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_54),128);
            tracep->chgWData(oldp+1441,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_55),128);
            tracep->chgWData(oldp+1445,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_56),128);
            tracep->chgWData(oldp+1449,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_57),128);
            tracep->chgWData(oldp+1453,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_58),128);
            tracep->chgWData(oldp+1457,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_59),128);
            tracep->chgWData(oldp+1461,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_60),128);
            tracep->chgWData(oldp+1465,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_61),128);
            tracep->chgWData(oldp+1469,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_62),128);
            tracep->chgWData(oldp+1473,(vlSelf->riscv_soc__DOT__sram1__DOT__sram_63),128);
            tracep->chgWData(oldp+1477,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_0),128);
            tracep->chgWData(oldp+1481,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_1),128);
            tracep->chgWData(oldp+1485,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_2),128);
            tracep->chgWData(oldp+1489,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_3),128);
            tracep->chgWData(oldp+1493,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_4),128);
            tracep->chgWData(oldp+1497,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_5),128);
            tracep->chgWData(oldp+1501,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_6),128);
            tracep->chgWData(oldp+1505,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_7),128);
            tracep->chgWData(oldp+1509,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_8),128);
            tracep->chgWData(oldp+1513,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_9),128);
            tracep->chgWData(oldp+1517,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_10),128);
            tracep->chgWData(oldp+1521,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_11),128);
            tracep->chgWData(oldp+1525,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_12),128);
            tracep->chgWData(oldp+1529,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_13),128);
            tracep->chgWData(oldp+1533,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_14),128);
            tracep->chgWData(oldp+1537,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_15),128);
            tracep->chgWData(oldp+1541,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_16),128);
            tracep->chgWData(oldp+1545,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_17),128);
            tracep->chgWData(oldp+1549,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_18),128);
            tracep->chgWData(oldp+1553,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_19),128);
            tracep->chgWData(oldp+1557,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_20),128);
            tracep->chgWData(oldp+1561,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_21),128);
            tracep->chgWData(oldp+1565,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_22),128);
            tracep->chgWData(oldp+1569,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_23),128);
            tracep->chgWData(oldp+1573,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_24),128);
            tracep->chgWData(oldp+1577,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_25),128);
            tracep->chgWData(oldp+1581,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_26),128);
            tracep->chgWData(oldp+1585,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_27),128);
            tracep->chgWData(oldp+1589,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_28),128);
            tracep->chgWData(oldp+1593,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_29),128);
            tracep->chgWData(oldp+1597,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_30),128);
            tracep->chgWData(oldp+1601,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_31),128);
            tracep->chgWData(oldp+1605,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_32),128);
            tracep->chgWData(oldp+1609,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_33),128);
            tracep->chgWData(oldp+1613,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_34),128);
            tracep->chgWData(oldp+1617,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_35),128);
            tracep->chgWData(oldp+1621,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_36),128);
            tracep->chgWData(oldp+1625,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_37),128);
            tracep->chgWData(oldp+1629,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_38),128);
            tracep->chgWData(oldp+1633,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_39),128);
            tracep->chgWData(oldp+1637,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_40),128);
            tracep->chgWData(oldp+1641,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_41),128);
            tracep->chgWData(oldp+1645,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_42),128);
            tracep->chgWData(oldp+1649,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_43),128);
            tracep->chgWData(oldp+1653,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_44),128);
            tracep->chgWData(oldp+1657,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_45),128);
            tracep->chgWData(oldp+1661,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_46),128);
            tracep->chgWData(oldp+1665,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_47),128);
            tracep->chgWData(oldp+1669,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_48),128);
            tracep->chgWData(oldp+1673,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_49),128);
            tracep->chgWData(oldp+1677,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_50),128);
            tracep->chgWData(oldp+1681,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_51),128);
            tracep->chgWData(oldp+1685,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_52),128);
            tracep->chgWData(oldp+1689,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_53),128);
            tracep->chgWData(oldp+1693,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_54),128);
            tracep->chgWData(oldp+1697,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_55),128);
            tracep->chgWData(oldp+1701,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_56),128);
            tracep->chgWData(oldp+1705,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_57),128);
            tracep->chgWData(oldp+1709,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_58),128);
            tracep->chgWData(oldp+1713,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_59),128);
            tracep->chgWData(oldp+1717,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_60),128);
            tracep->chgWData(oldp+1721,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_61),128);
            tracep->chgWData(oldp+1725,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_62),128);
            tracep->chgWData(oldp+1729,(vlSelf->riscv_soc__DOT__sram2__DOT__sram_63),128);
            tracep->chgWData(oldp+1733,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_0),128);
            tracep->chgWData(oldp+1737,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_1),128);
            tracep->chgWData(oldp+1741,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_2),128);
            tracep->chgWData(oldp+1745,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_3),128);
            tracep->chgWData(oldp+1749,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_4),128);
            tracep->chgWData(oldp+1753,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_5),128);
            tracep->chgWData(oldp+1757,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_6),128);
            tracep->chgWData(oldp+1761,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_7),128);
            tracep->chgWData(oldp+1765,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_8),128);
            tracep->chgWData(oldp+1769,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_9),128);
            tracep->chgWData(oldp+1773,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_10),128);
            tracep->chgWData(oldp+1777,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_11),128);
            tracep->chgWData(oldp+1781,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_12),128);
            tracep->chgWData(oldp+1785,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_13),128);
            tracep->chgWData(oldp+1789,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_14),128);
            tracep->chgWData(oldp+1793,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_15),128);
            tracep->chgWData(oldp+1797,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_16),128);
            tracep->chgWData(oldp+1801,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_17),128);
            tracep->chgWData(oldp+1805,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_18),128);
            tracep->chgWData(oldp+1809,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_19),128);
            tracep->chgWData(oldp+1813,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_20),128);
            tracep->chgWData(oldp+1817,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_21),128);
            tracep->chgWData(oldp+1821,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_22),128);
            tracep->chgWData(oldp+1825,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_23),128);
            tracep->chgWData(oldp+1829,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_24),128);
            tracep->chgWData(oldp+1833,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_25),128);
            tracep->chgWData(oldp+1837,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_26),128);
            tracep->chgWData(oldp+1841,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_27),128);
            tracep->chgWData(oldp+1845,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_28),128);
            tracep->chgWData(oldp+1849,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_29),128);
            tracep->chgWData(oldp+1853,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_30),128);
            tracep->chgWData(oldp+1857,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_31),128);
            tracep->chgWData(oldp+1861,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_32),128);
            tracep->chgWData(oldp+1865,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_33),128);
            tracep->chgWData(oldp+1869,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_34),128);
            tracep->chgWData(oldp+1873,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_35),128);
            tracep->chgWData(oldp+1877,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_36),128);
            tracep->chgWData(oldp+1881,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_37),128);
            tracep->chgWData(oldp+1885,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_38),128);
            tracep->chgWData(oldp+1889,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_39),128);
            tracep->chgWData(oldp+1893,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_40),128);
            tracep->chgWData(oldp+1897,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_41),128);
            tracep->chgWData(oldp+1901,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_42),128);
            tracep->chgWData(oldp+1905,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_43),128);
            tracep->chgWData(oldp+1909,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_44),128);
            tracep->chgWData(oldp+1913,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_45),128);
            tracep->chgWData(oldp+1917,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_46),128);
            tracep->chgWData(oldp+1921,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_47),128);
            tracep->chgWData(oldp+1925,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_48),128);
            tracep->chgWData(oldp+1929,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_49),128);
            tracep->chgWData(oldp+1933,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_50),128);
            tracep->chgWData(oldp+1937,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_51),128);
            tracep->chgWData(oldp+1941,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_52),128);
            tracep->chgWData(oldp+1945,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_53),128);
            tracep->chgWData(oldp+1949,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_54),128);
            tracep->chgWData(oldp+1953,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_55),128);
            tracep->chgWData(oldp+1957,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_56),128);
            tracep->chgWData(oldp+1961,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_57),128);
            tracep->chgWData(oldp+1965,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_58),128);
            tracep->chgWData(oldp+1969,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_59),128);
            tracep->chgWData(oldp+1973,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_60),128);
            tracep->chgWData(oldp+1977,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_61),128);
            tracep->chgWData(oldp+1981,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_62),128);
            tracep->chgWData(oldp+1985,(vlSelf->riscv_soc__DOT__sram3__DOT__sram_63),128);
            tracep->chgWData(oldp+1989,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_0),128);
            tracep->chgWData(oldp+1993,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_1),128);
            tracep->chgWData(oldp+1997,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_2),128);
            tracep->chgWData(oldp+2001,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_3),128);
            tracep->chgWData(oldp+2005,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_4),128);
            tracep->chgWData(oldp+2009,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_5),128);
            tracep->chgWData(oldp+2013,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_6),128);
            tracep->chgWData(oldp+2017,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_7),128);
            tracep->chgWData(oldp+2021,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_8),128);
            tracep->chgWData(oldp+2025,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_9),128);
            tracep->chgWData(oldp+2029,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_10),128);
            tracep->chgWData(oldp+2033,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_11),128);
            tracep->chgWData(oldp+2037,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_12),128);
            tracep->chgWData(oldp+2041,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_13),128);
            tracep->chgWData(oldp+2045,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_14),128);
            tracep->chgWData(oldp+2049,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_15),128);
            tracep->chgWData(oldp+2053,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_16),128);
            tracep->chgWData(oldp+2057,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_17),128);
            tracep->chgWData(oldp+2061,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_18),128);
            tracep->chgWData(oldp+2065,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_19),128);
            tracep->chgWData(oldp+2069,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_20),128);
            tracep->chgWData(oldp+2073,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_21),128);
            tracep->chgWData(oldp+2077,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_22),128);
            tracep->chgWData(oldp+2081,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_23),128);
            tracep->chgWData(oldp+2085,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_24),128);
            tracep->chgWData(oldp+2089,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_25),128);
            tracep->chgWData(oldp+2093,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_26),128);
            tracep->chgWData(oldp+2097,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_27),128);
            tracep->chgWData(oldp+2101,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_28),128);
            tracep->chgWData(oldp+2105,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_29),128);
            tracep->chgWData(oldp+2109,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_30),128);
            tracep->chgWData(oldp+2113,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_31),128);
            tracep->chgWData(oldp+2117,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_32),128);
            tracep->chgWData(oldp+2121,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_33),128);
            tracep->chgWData(oldp+2125,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_34),128);
            tracep->chgWData(oldp+2129,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_35),128);
            tracep->chgWData(oldp+2133,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_36),128);
            tracep->chgWData(oldp+2137,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_37),128);
            tracep->chgWData(oldp+2141,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_38),128);
            tracep->chgWData(oldp+2145,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_39),128);
            tracep->chgWData(oldp+2149,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_40),128);
            tracep->chgWData(oldp+2153,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_41),128);
            tracep->chgWData(oldp+2157,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_42),128);
            tracep->chgWData(oldp+2161,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_43),128);
            tracep->chgWData(oldp+2165,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_44),128);
            tracep->chgWData(oldp+2169,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_45),128);
            tracep->chgWData(oldp+2173,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_46),128);
            tracep->chgWData(oldp+2177,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_47),128);
            tracep->chgWData(oldp+2181,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_48),128);
            tracep->chgWData(oldp+2185,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_49),128);
            tracep->chgWData(oldp+2189,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_50),128);
            tracep->chgWData(oldp+2193,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_51),128);
            tracep->chgWData(oldp+2197,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_52),128);
            tracep->chgWData(oldp+2201,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_53),128);
            tracep->chgWData(oldp+2205,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_54),128);
            tracep->chgWData(oldp+2209,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_55),128);
            tracep->chgWData(oldp+2213,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_56),128);
            tracep->chgWData(oldp+2217,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_57),128);
            tracep->chgWData(oldp+2221,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_58),128);
            tracep->chgWData(oldp+2225,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_59),128);
            tracep->chgWData(oldp+2229,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_60),128);
            tracep->chgWData(oldp+2233,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_61),128);
            tracep->chgWData(oldp+2237,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_62),128);
            tracep->chgWData(oldp+2241,(vlSelf->riscv_soc__DOT__sram4__DOT__sram_63),128);
            tracep->chgWData(oldp+2245,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_0),128);
            tracep->chgWData(oldp+2249,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_1),128);
            tracep->chgWData(oldp+2253,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_2),128);
            tracep->chgWData(oldp+2257,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_3),128);
            tracep->chgWData(oldp+2261,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_4),128);
            tracep->chgWData(oldp+2265,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_5),128);
            tracep->chgWData(oldp+2269,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_6),128);
            tracep->chgWData(oldp+2273,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_7),128);
            tracep->chgWData(oldp+2277,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_8),128);
            tracep->chgWData(oldp+2281,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_9),128);
            tracep->chgWData(oldp+2285,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_10),128);
            tracep->chgWData(oldp+2289,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_11),128);
            tracep->chgWData(oldp+2293,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_12),128);
            tracep->chgWData(oldp+2297,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_13),128);
            tracep->chgWData(oldp+2301,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_14),128);
            tracep->chgWData(oldp+2305,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_15),128);
            tracep->chgWData(oldp+2309,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_16),128);
            tracep->chgWData(oldp+2313,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_17),128);
            tracep->chgWData(oldp+2317,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_18),128);
            tracep->chgWData(oldp+2321,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_19),128);
            tracep->chgWData(oldp+2325,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_20),128);
            tracep->chgWData(oldp+2329,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_21),128);
            tracep->chgWData(oldp+2333,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_22),128);
            tracep->chgWData(oldp+2337,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_23),128);
            tracep->chgWData(oldp+2341,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_24),128);
            tracep->chgWData(oldp+2345,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_25),128);
            tracep->chgWData(oldp+2349,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_26),128);
            tracep->chgWData(oldp+2353,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_27),128);
            tracep->chgWData(oldp+2357,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_28),128);
            tracep->chgWData(oldp+2361,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_29),128);
            tracep->chgWData(oldp+2365,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_30),128);
            tracep->chgWData(oldp+2369,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_31),128);
            tracep->chgWData(oldp+2373,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_32),128);
            tracep->chgWData(oldp+2377,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_33),128);
            tracep->chgWData(oldp+2381,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_34),128);
            tracep->chgWData(oldp+2385,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_35),128);
            tracep->chgWData(oldp+2389,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_36),128);
            tracep->chgWData(oldp+2393,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_37),128);
            tracep->chgWData(oldp+2397,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_38),128);
            tracep->chgWData(oldp+2401,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_39),128);
            tracep->chgWData(oldp+2405,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_40),128);
            tracep->chgWData(oldp+2409,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_41),128);
            tracep->chgWData(oldp+2413,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_42),128);
            tracep->chgWData(oldp+2417,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_43),128);
            tracep->chgWData(oldp+2421,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_44),128);
            tracep->chgWData(oldp+2425,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_45),128);
            tracep->chgWData(oldp+2429,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_46),128);
            tracep->chgWData(oldp+2433,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_47),128);
            tracep->chgWData(oldp+2437,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_48),128);
            tracep->chgWData(oldp+2441,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_49),128);
            tracep->chgWData(oldp+2445,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_50),128);
            tracep->chgWData(oldp+2449,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_51),128);
            tracep->chgWData(oldp+2453,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_52),128);
            tracep->chgWData(oldp+2457,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_53),128);
            tracep->chgWData(oldp+2461,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_54),128);
            tracep->chgWData(oldp+2465,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_55),128);
            tracep->chgWData(oldp+2469,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_56),128);
            tracep->chgWData(oldp+2473,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_57),128);
            tracep->chgWData(oldp+2477,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_58),128);
            tracep->chgWData(oldp+2481,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_59),128);
            tracep->chgWData(oldp+2485,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_60),128);
            tracep->chgWData(oldp+2489,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_61),128);
            tracep->chgWData(oldp+2493,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_62),128);
            tracep->chgWData(oldp+2497,(vlSelf->riscv_soc__DOT__sram5__DOT__sram_63),128);
            tracep->chgWData(oldp+2501,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_0),128);
            tracep->chgWData(oldp+2505,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_1),128);
            tracep->chgWData(oldp+2509,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_2),128);
            tracep->chgWData(oldp+2513,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_3),128);
            tracep->chgWData(oldp+2517,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_4),128);
            tracep->chgWData(oldp+2521,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_5),128);
            tracep->chgWData(oldp+2525,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_6),128);
            tracep->chgWData(oldp+2529,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_7),128);
            tracep->chgWData(oldp+2533,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_8),128);
            tracep->chgWData(oldp+2537,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_9),128);
            tracep->chgWData(oldp+2541,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_10),128);
            tracep->chgWData(oldp+2545,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_11),128);
            tracep->chgWData(oldp+2549,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_12),128);
            tracep->chgWData(oldp+2553,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_13),128);
            tracep->chgWData(oldp+2557,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_14),128);
            tracep->chgWData(oldp+2561,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_15),128);
            tracep->chgWData(oldp+2565,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_16),128);
            tracep->chgWData(oldp+2569,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_17),128);
            tracep->chgWData(oldp+2573,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_18),128);
            tracep->chgWData(oldp+2577,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_19),128);
            tracep->chgWData(oldp+2581,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_20),128);
            tracep->chgWData(oldp+2585,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_21),128);
            tracep->chgWData(oldp+2589,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_22),128);
            tracep->chgWData(oldp+2593,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_23),128);
            tracep->chgWData(oldp+2597,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_24),128);
            tracep->chgWData(oldp+2601,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_25),128);
            tracep->chgWData(oldp+2605,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_26),128);
            tracep->chgWData(oldp+2609,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_27),128);
            tracep->chgWData(oldp+2613,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_28),128);
            tracep->chgWData(oldp+2617,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_29),128);
            tracep->chgWData(oldp+2621,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_30),128);
            tracep->chgWData(oldp+2625,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_31),128);
            tracep->chgWData(oldp+2629,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_32),128);
            tracep->chgWData(oldp+2633,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_33),128);
            tracep->chgWData(oldp+2637,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_34),128);
            tracep->chgWData(oldp+2641,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_35),128);
            tracep->chgWData(oldp+2645,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_36),128);
            tracep->chgWData(oldp+2649,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_37),128);
            tracep->chgWData(oldp+2653,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_38),128);
            tracep->chgWData(oldp+2657,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_39),128);
            tracep->chgWData(oldp+2661,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_40),128);
            tracep->chgWData(oldp+2665,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_41),128);
            tracep->chgWData(oldp+2669,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_42),128);
            tracep->chgWData(oldp+2673,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_43),128);
            tracep->chgWData(oldp+2677,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_44),128);
            tracep->chgWData(oldp+2681,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_45),128);
            tracep->chgWData(oldp+2685,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_46),128);
            tracep->chgWData(oldp+2689,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_47),128);
            tracep->chgWData(oldp+2693,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_48),128);
            tracep->chgWData(oldp+2697,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_49),128);
            tracep->chgWData(oldp+2701,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_50),128);
            tracep->chgWData(oldp+2705,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_51),128);
            tracep->chgWData(oldp+2709,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_52),128);
            tracep->chgWData(oldp+2713,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_53),128);
            tracep->chgWData(oldp+2717,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_54),128);
            tracep->chgWData(oldp+2721,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_55),128);
            tracep->chgWData(oldp+2725,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_56),128);
            tracep->chgWData(oldp+2729,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_57),128);
            tracep->chgWData(oldp+2733,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_58),128);
            tracep->chgWData(oldp+2737,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_59),128);
            tracep->chgWData(oldp+2741,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_60),128);
            tracep->chgWData(oldp+2745,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_61),128);
            tracep->chgWData(oldp+2749,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_62),128);
            tracep->chgWData(oldp+2753,(vlSelf->riscv_soc__DOT__sram6__DOT__sram_63),128);
            tracep->chgWData(oldp+2757,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_0),128);
            tracep->chgWData(oldp+2761,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_1),128);
            tracep->chgWData(oldp+2765,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_2),128);
            tracep->chgWData(oldp+2769,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_3),128);
            tracep->chgWData(oldp+2773,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_4),128);
            tracep->chgWData(oldp+2777,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_5),128);
            tracep->chgWData(oldp+2781,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_6),128);
            tracep->chgWData(oldp+2785,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_7),128);
            tracep->chgWData(oldp+2789,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_8),128);
            tracep->chgWData(oldp+2793,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_9),128);
            tracep->chgWData(oldp+2797,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_10),128);
            tracep->chgWData(oldp+2801,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_11),128);
            tracep->chgWData(oldp+2805,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_12),128);
            tracep->chgWData(oldp+2809,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_13),128);
            tracep->chgWData(oldp+2813,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_14),128);
            tracep->chgWData(oldp+2817,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_15),128);
            tracep->chgWData(oldp+2821,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_16),128);
            tracep->chgWData(oldp+2825,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_17),128);
            tracep->chgWData(oldp+2829,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_18),128);
            tracep->chgWData(oldp+2833,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_19),128);
            tracep->chgWData(oldp+2837,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_20),128);
            tracep->chgWData(oldp+2841,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_21),128);
            tracep->chgWData(oldp+2845,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_22),128);
            tracep->chgWData(oldp+2849,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_23),128);
            tracep->chgWData(oldp+2853,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_24),128);
            tracep->chgWData(oldp+2857,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_25),128);
            tracep->chgWData(oldp+2861,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_26),128);
            tracep->chgWData(oldp+2865,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_27),128);
            tracep->chgWData(oldp+2869,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_28),128);
            tracep->chgWData(oldp+2873,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_29),128);
            tracep->chgWData(oldp+2877,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_30),128);
            tracep->chgWData(oldp+2881,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_31),128);
            tracep->chgWData(oldp+2885,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_32),128);
            tracep->chgWData(oldp+2889,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_33),128);
            tracep->chgWData(oldp+2893,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_34),128);
            tracep->chgWData(oldp+2897,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_35),128);
            tracep->chgWData(oldp+2901,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_36),128);
            tracep->chgWData(oldp+2905,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_37),128);
            tracep->chgWData(oldp+2909,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_38),128);
            tracep->chgWData(oldp+2913,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_39),128);
            tracep->chgWData(oldp+2917,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_40),128);
            tracep->chgWData(oldp+2921,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_41),128);
            tracep->chgWData(oldp+2925,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_42),128);
            tracep->chgWData(oldp+2929,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_43),128);
            tracep->chgWData(oldp+2933,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_44),128);
            tracep->chgWData(oldp+2937,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_45),128);
            tracep->chgWData(oldp+2941,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_46),128);
            tracep->chgWData(oldp+2945,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_47),128);
            tracep->chgWData(oldp+2949,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_48),128);
            tracep->chgWData(oldp+2953,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_49),128);
            tracep->chgWData(oldp+2957,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_50),128);
            tracep->chgWData(oldp+2961,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_51),128);
            tracep->chgWData(oldp+2965,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_52),128);
            tracep->chgWData(oldp+2969,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_53),128);
            tracep->chgWData(oldp+2973,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_54),128);
            tracep->chgWData(oldp+2977,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_55),128);
            tracep->chgWData(oldp+2981,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_56),128);
            tracep->chgWData(oldp+2985,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_57),128);
            tracep->chgWData(oldp+2989,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_58),128);
            tracep->chgWData(oldp+2993,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_59),128);
            tracep->chgWData(oldp+2997,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_60),128);
            tracep->chgWData(oldp+3001,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_61),128);
            tracep->chgWData(oldp+3005,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_62),128);
            tracep->chgWData(oldp+3009,(vlSelf->riscv_soc__DOT__sram7__DOT__sram_63),128);
        }
        tracep->chgBit(oldp+3013,(vlSelf->clock));
        tracep->chgBit(oldp+3014,(vlSelf->reset));
        tracep->chgQData(oldp+3015,(vlSelf->io_difftest_reg_0),64);
        tracep->chgQData(oldp+3017,(vlSelf->io_difftest_reg_1),64);
        tracep->chgQData(oldp+3019,(vlSelf->io_difftest_reg_2),64);
        tracep->chgQData(oldp+3021,(vlSelf->io_difftest_reg_3),64);
        tracep->chgQData(oldp+3023,(vlSelf->io_difftest_reg_4),64);
        tracep->chgQData(oldp+3025,(vlSelf->io_difftest_reg_5),64);
        tracep->chgQData(oldp+3027,(vlSelf->io_difftest_reg_6),64);
        tracep->chgQData(oldp+3029,(vlSelf->io_difftest_reg_7),64);
        tracep->chgQData(oldp+3031,(vlSelf->io_difftest_reg_8),64);
        tracep->chgQData(oldp+3033,(vlSelf->io_difftest_reg_9),64);
        tracep->chgQData(oldp+3035,(vlSelf->io_difftest_reg_10),64);
        tracep->chgQData(oldp+3037,(vlSelf->io_difftest_reg_11),64);
        tracep->chgQData(oldp+3039,(vlSelf->io_difftest_reg_12),64);
        tracep->chgQData(oldp+3041,(vlSelf->io_difftest_reg_13),64);
        tracep->chgQData(oldp+3043,(vlSelf->io_difftest_reg_14),64);
        tracep->chgQData(oldp+3045,(vlSelf->io_difftest_reg_15),64);
        tracep->chgQData(oldp+3047,(vlSelf->io_difftest_reg_16),64);
        tracep->chgQData(oldp+3049,(vlSelf->io_difftest_reg_17),64);
        tracep->chgQData(oldp+3051,(vlSelf->io_difftest_reg_18),64);
        tracep->chgQData(oldp+3053,(vlSelf->io_difftest_reg_19),64);
        tracep->chgQData(oldp+3055,(vlSelf->io_difftest_reg_20),64);
        tracep->chgQData(oldp+3057,(vlSelf->io_difftest_reg_21),64);
        tracep->chgQData(oldp+3059,(vlSelf->io_difftest_reg_22),64);
        tracep->chgQData(oldp+3061,(vlSelf->io_difftest_reg_23),64);
        tracep->chgQData(oldp+3063,(vlSelf->io_difftest_reg_24),64);
        tracep->chgQData(oldp+3065,(vlSelf->io_difftest_reg_25),64);
        tracep->chgQData(oldp+3067,(vlSelf->io_difftest_reg_26),64);
        tracep->chgQData(oldp+3069,(vlSelf->io_difftest_reg_27),64);
        tracep->chgQData(oldp+3071,(vlSelf->io_difftest_reg_28),64);
        tracep->chgQData(oldp+3073,(vlSelf->io_difftest_reg_29),64);
        tracep->chgQData(oldp+3075,(vlSelf->io_difftest_reg_30),64);
        tracep->chgQData(oldp+3077,(vlSelf->io_difftest_reg_31),64);
        tracep->chgQData(oldp+3079,(vlSelf->io_difftest_pc),64);
        tracep->chgIData(oldp+3081,(vlSelf->io_difftest_inst),32);
        tracep->chgBit(oldp+3082,(vlSelf->io_difftest_commit));
        tracep->chgQData(oldp+3083,(vlSelf->io_inst_counter),64);
        tracep->chgBit(oldp+3085,(vlSelf->io_difftest_irq));
        tracep->chgQData(oldp+3086,(vlSelf->io_difftest_mstatus),64);
        tracep->chgQData(oldp+3088,(vlSelf->io_difftest_mcause),64);
        tracep->chgQData(oldp+3090,(vlSelf->io_difftest_mepc),64);
        tracep->chgQData(oldp+3092,(vlSelf->io_difftest_mtvec),64);
        tracep->chgBit(oldp+3094,(vlSelf->io_difftest_peripheral));
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
