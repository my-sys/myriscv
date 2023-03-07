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
    VlWide<4>/*127:0*/ __Vtemp4336;
    VlWide<4>/*127:0*/ __Vtemp4337;
    VlWide<4>/*127:0*/ __Vtemp4338;
    VlWide<4>/*127:0*/ __Vtemp4339;
    VlWide<3>/*95:0*/ __Vtemp4341;
    VlWide<3>/*95:0*/ __Vtemp4342;
    VlWide<3>/*95:0*/ __Vtemp4343;
    VlWide<3>/*95:0*/ __Vtemp4345;
    VlWide<3>/*95:0*/ __Vtemp4346;
    VlWide<3>/*95:0*/ __Vtemp4348;
    VlWide<3>/*95:0*/ __Vtemp4350;
    VlWide<3>/*95:0*/ __Vtemp4351;
    VlWide<3>/*95:0*/ __Vtemp4352;
    VlWide<3>/*95:0*/ __Vtemp4353;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode + 1);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
            tracep->chgBit(oldp+0,(vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_aw_ready));
            tracep->chgBit(oldp+1,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_AXI_Bus_aw_valid));
            tracep->chgQData(oldp+2,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_AXI_Bus_aw_bits_awaddr),64);
            tracep->chgBit(oldp+4,(vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_w_ready));
            tracep->chgBit(oldp+5,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_AXI_Bus_w_valid));
            tracep->chgQData(oldp+6,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_AXI_Bus_w_bits_wdata),64);
            tracep->chgCData(oldp+8,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_AXI_Bus_w_bits_wstrb),8);
            tracep->chgBit(oldp+9,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_AXI_Bus_w_bits_wlast));
            tracep->chgBit(oldp+10,(vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_b_valid));
            tracep->chgBit(oldp+11,(vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_ar_ready));
            tracep->chgBit(oldp+12,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_AXI_Bus_ar_valid));
            tracep->chgQData(oldp+13,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_AXI_Bus_ar_bits_araddr),64);
            tracep->chgCData(oldp+15,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT___GEN_59),8);
            tracep->chgBit(oldp+16,(vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_r_valid));
            tracep->chgQData(oldp+17,(vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata),64);
            tracep->chgBit(oldp+19,(vlSelf->riscv_soc__DOT__axi_ram_io_ram_bus_r_bits_rlast));
            tracep->chgBit(oldp+20,(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__difftest_irq));
            tracep->chgBit(oldp+21,(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__difftest_peripheral));
            tracep->chgBit(oldp+22,(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__difftest_commit));
            tracep->chgQData(oldp+23,(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__difftest_pc),64);
            tracep->chgQData(oldp+25,(vlSelf->riscv_soc__DOT__core__DOT__csr_reg__DOT__reg_mepc),64);
            tracep->chgQData(oldp+27,(vlSelf->riscv_soc__DOT__core__DOT__csr_reg__DOT__reg_mstatus),64);
            tracep->chgIData(oldp+29,(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__difftest_inst),32);
            tracep->chgQData(oldp+30,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                      [1U]),64);
            tracep->chgQData(oldp+32,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                      [2U]),64);
            tracep->chgQData(oldp+34,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                      [3U]),64);
            tracep->chgQData(oldp+36,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                      [4U]),64);
            tracep->chgQData(oldp+38,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                      [5U]),64);
            tracep->chgQData(oldp+40,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                      [6U]),64);
            tracep->chgQData(oldp+42,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                      [7U]),64);
            tracep->chgQData(oldp+44,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                      [8U]),64);
            tracep->chgQData(oldp+46,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                      [9U]),64);
            tracep->chgQData(oldp+48,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                      [0xaU]),64);
            tracep->chgQData(oldp+50,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                      [0xbU]),64);
            tracep->chgQData(oldp+52,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                      [0xcU]),64);
            tracep->chgQData(oldp+54,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                      [0xdU]),64);
            tracep->chgQData(oldp+56,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                      [0xeU]),64);
            tracep->chgQData(oldp+58,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                      [0xfU]),64);
            tracep->chgQData(oldp+60,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                      [0x10U]),64);
            tracep->chgQData(oldp+62,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                      [0x11U]),64);
            tracep->chgQData(oldp+64,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                      [0x12U]),64);
            tracep->chgQData(oldp+66,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                      [0x13U]),64);
            tracep->chgQData(oldp+68,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                      [0x14U]),64);
            tracep->chgQData(oldp+70,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                      [0x15U]),64);
            tracep->chgQData(oldp+72,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                      [0x16U]),64);
            tracep->chgQData(oldp+74,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                      [0x17U]),64);
            tracep->chgQData(oldp+76,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                      [0x18U]),64);
            tracep->chgQData(oldp+78,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                      [0x19U]),64);
            tracep->chgQData(oldp+80,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                      [0x1aU]),64);
            tracep->chgQData(oldp+82,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                      [0x1bU]),64);
            tracep->chgQData(oldp+84,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                      [0x1cU]),64);
            tracep->chgQData(oldp+86,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                      [0x1dU]),64);
            tracep->chgQData(oldp+88,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                      [0x1eU]),64);
            tracep->chgQData(oldp+90,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                      [0x1fU]),64);
            tracep->chgQData(oldp+92,(vlSelf->riscv_soc__DOT__core__DOT__csr_reg__DOT__reg_mcause),64);
            tracep->chgQData(oldp+94,(vlSelf->riscv_soc__DOT__core__DOT__csr_reg__DOT__reg_mtvec),64);
            tracep->chgQData(oldp+96,(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__inst_counter),64);
            tracep->chgQData(oldp+98,((QData)((IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__difftest_inst))),64);
            tracep->chgBit(oldp+100,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1_io_ICache_valid));
            tracep->chgQData(oldp+101,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0),64);
            tracep->chgQData(oldp+103,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_rdata),64);
            tracep->chgBit(oldp+105,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_ready));
            tracep->chgBit(oldp+106,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_w_valid));
            tracep->chgQData(oldp+107,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_w_waddr),64);
            tracep->chgQData(oldp+109,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_w_wdata),64);
            tracep->chgBit(oldp+111,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_w_wlast));
            tracep->chgBit(oldp+112,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_b_ready));
            tracep->chgBit(oldp+113,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_r_valid));
            tracep->chgQData(oldp+114,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_r_raddr),64);
            tracep->chgBit(oldp+116,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_ICache_bus_r_bits_rlast));
            tracep->chgBit(oldp+117,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_ICache_bus_r_ready));
            tracep->chgBit(oldp+118,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1_io_DCache_valid));
            tracep->chgQData(oldp+119,(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_bus_addr),64);
            tracep->chgQData(oldp+121,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_rdata),64);
            tracep->chgQData(oldp+123,(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_bus_wdata),64);
            tracep->chgCData(oldp+125,(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_bus_wstrb),8);
            tracep->chgBit(oldp+126,(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_bus_is_w));
            tracep->chgBit(oldp+127,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_ready));
            tracep->chgBit(oldp+128,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_DCache_bus_w_ready));
            tracep->chgBit(oldp+129,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_w_valid));
            tracep->chgQData(oldp+130,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_w_waddr),64);
            tracep->chgQData(oldp+132,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_w_wdata),64);
            tracep->chgBit(oldp+134,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_w_wlast));
            tracep->chgBit(oldp+135,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_b_ready));
            tracep->chgBit(oldp+136,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_DCache_bus_b_valid));
            tracep->chgBit(oldp+137,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_r_valid));
            tracep->chgQData(oldp+138,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_r_raddr),64);
            tracep->chgBit(oldp+140,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_DCache_bus_r_bits_rlast));
            tracep->chgBit(oldp+141,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_DCache_bus_r_ready));
            tracep->chgBit(oldp+142,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1_io_bus1_valid));
            tracep->chgBit(oldp+143,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_bus1_ready));
            tracep->chgBit(oldp+144,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1_io_bus2_valid));
            tracep->chgBit(oldp+145,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_bus2_ready));
            tracep->chgBit(oldp+146,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_valid));
            tracep->chgQData(oldp+147,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1_io_fetch_bits_rdata),64);
            tracep->chgBit(oldp+149,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1_io_fetch_ready));
            tracep->chgBit(oldp+150,(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_bus_valid));
            tracep->chgQData(oldp+151,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1_io_wb_bits_rdata),64);
            tracep->chgBit(oldp+153,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1_io_wb_ready));
            tracep->chgBit(oldp+154,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1_io_clint_bus_valid));
            tracep->chgQData(oldp+155,(vlSelf->riscv_soc__DOT__core__DOT__clint_de__DOT__red_rdata),64);
            tracep->chgBit(oldp+157,(vlSelf->riscv_soc__DOT__core__DOT__clint_de__DOT__reg_ready));
            tracep->chgBit(oldp+158,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_stall));
            tracep->chgBit(oldp+159,(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_stall));
            tracep->chgBit(oldp+160,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu_io_stall));
            tracep->chgQData(oldp+161,(vlSelf->riscv_soc__DOT__core__DOT__fetch_io_in_next_pc),64);
            tracep->chgBit(oldp+163,(vlSelf->riscv_soc__DOT__core__DOT__fetch_io_in_flush));
            tracep->chgQData(oldp+164,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_1),64);
            tracep->chgIData(oldp+166,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_inst),32);
            tracep->chgCData(oldp+167,(vlSelf->riscv_soc__DOT__core__DOT__decode_io_out_opType),3);
            tracep->chgCData(oldp+168,(vlSelf->riscv_soc__DOT__core__DOT__decode_io_out_exuType),6);
            tracep->chgCData(oldp+169,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs1_addr),5);
            tracep->chgQData(oldp+170,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs1_data),64);
            tracep->chgCData(oldp+172,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs2_addr),5);
            tracep->chgQData(oldp+173,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs2_data),64);
            tracep->chgQData(oldp+175,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_imm),64);
            tracep->chgQData(oldp+177,(vlSelf->riscv_soc__DOT__core__DOT__decode_io_out_pc),64);
            tracep->chgIData(oldp+179,(vlSelf->riscv_soc__DOT__core__DOT__decode_io_out_inst),32);
            tracep->chgCData(oldp+180,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_dest_rs_addr),5);
            tracep->chgSData(oldp+181,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_csr_addr),12);
            tracep->chgQData(oldp+182,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_csr_data),64);
            tracep->chgQData(oldp+184,(vlSelf->riscv_soc__DOT__core__DOT__write_back_io_out_result_data),64);
            tracep->chgCData(oldp+186,(vlSelf->riscv_soc__DOT__core__DOT__write_back_io_out_rs_addr),5);
            tracep->chgBit(oldp+187,(vlSelf->riscv_soc__DOT__core__DOT__write_back_io_out_w_rs_en));
            tracep->chgSData(oldp+188,((0xfffU & (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_csr_addr))),12);
            tracep->chgQData(oldp+189,(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_csr_data),64);
            tracep->chgBit(oldp+191,(vlSelf->riscv_soc__DOT__core__DOT__write_back_io_out_w_csr_en));
            tracep->chgBit(oldp+192,(vlSelf->riscv_soc__DOT__core__DOT__write_back_io_out_flush));
            tracep->chgCData(oldp+193,((0x1fU & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_rs_addr))),5);
            tracep->chgQData(oldp+194,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_rs_data),64);
            tracep->chgBit(oldp+196,(vlSelf->riscv_soc__DOT__core__DOT__execute_io_out_w_rs_en));
            tracep->chgCData(oldp+197,(vlSelf->riscv_soc__DOT__core__DOT__execute_io_out_exuType),6);
            tracep->chgQData(oldp+198,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_pc),64);
            tracep->chgIData(oldp+200,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_inst),32);
            tracep->chgCData(oldp+201,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_rs2_addr),5);
            tracep->chgQData(oldp+202,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_rs2_data),64);
            tracep->chgQData(oldp+204,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__lsu_exu__DOT__reg_address_result),64);
            tracep->chgBit(oldp+206,(vlSelf->riscv_soc__DOT__core__DOT__execute_io_out_mem_avalid));
            tracep->chgBit(oldp+207,(vlSelf->riscv_soc__DOT__core__DOT__execute_io_out_w_mem_en));
            tracep->chgSData(oldp+208,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_csr_addr),12);
            tracep->chgQData(oldp+209,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__csr_exu__DOT__reg_csr_result),64);
            tracep->chgBit(oldp+211,(vlSelf->riscv_soc__DOT__core__DOT__execute_io_out_w_csr_en));
            tracep->chgCData(oldp+212,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__abn_exu__DOT__reg_exception),5);
            tracep->chgBit(oldp+213,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__abn_exu__DOT__reg_is_exception));
            tracep->chgBit(oldp+214,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__abn_exu__DOT__reg_is_mret));
            tracep->chgQData(oldp+215,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__reg_result_pc),64);
            tracep->chgBit(oldp+217,(vlSelf->riscv_soc__DOT__core__DOT__execute_io_out_flush));
            tracep->chgQData(oldp+218,(vlSelf->riscv_soc__DOT__core__DOT__csr_reg_io_r_csr_rdata),64);
            tracep->chgBit(oldp+220,(vlSelf->riscv_soc__DOT__core__DOT__decode_io_in_stall));
            tracep->chgSData(oldp+221,((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_inst 
                                        >> 0x14U)),12);
            tracep->chgQData(oldp+222,(vlSelf->riscv_soc__DOT__core__DOT__csr_reg_io_r_csr_mtvec),64);
            tracep->chgQData(oldp+224,(vlSelf->riscv_soc__DOT__core__DOT__csr_reg_io_r_csr_mepc),64);
            tracep->chgQData(oldp+226,(vlSelf->riscv_soc__DOT__core__DOT__csr_reg_io_r_csr_mstatus),64);
            tracep->chgQData(oldp+228,(vlSelf->riscv_soc__DOT__core__DOT__csr_reg_io_r_csr_mie),64);
            tracep->chgBit(oldp+230,(vlSelf->riscv_soc__DOT__core__DOT__clint_de_io_time_irq));
            tracep->chgBit(oldp+231,(vlSelf->riscv_soc__DOT__core__DOT__clint_de__DOT__reg_msip));
            tracep->chgBit(oldp+232,(vlSelf->riscv_soc__DOT__core__DOT__write_back_io_out_time_irq));
            tracep->chgBit(oldp+233,(vlSelf->riscv_soc__DOT__core__DOT__write_back_io_out_soft_irq));
            tracep->chgCData(oldp+234,(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_exception),5);
            tracep->chgBit(oldp+235,(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_is_exception));
            tracep->chgQData(oldp+236,(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_pc),64);
            tracep->chgBit(oldp+238,(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_commit));
            tracep->chgQData(oldp+239,(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_next_pc),64);
            tracep->chgWData(oldp+241,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_data__DOT__sram_Q),128);
            tracep->chgBit(oldp+245,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_data_io_WEN));
            __Vtemp4336[0U] = (~ vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_mask[0U]);
            __Vtemp4336[1U] = (~ vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_mask[1U]);
            __Vtemp4336[2U] = (~ vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_mask[2U]);
            __Vtemp4336[3U] = (~ vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_mask[3U]);
            tracep->chgWData(oldp+246,(__Vtemp4336),128);
            tracep->chgCData(oldp+250,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_data_io_A),6);
            tracep->chgWData(oldp+251,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_wdata),128);
            tracep->chgWData(oldp+255,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_tag__DOT__sram_Q),128);
            tracep->chgBit(oldp+259,((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___sram1_data_io_WEN_T_1)))));
            tracep->chgCData(oldp+260,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_tag_io_A),6);
            VL_EXTEND_WQ(128,56, __Vtemp4337, vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___sram1_tag_io_D_T_1);
            tracep->chgWData(oldp+261,(__Vtemp4337),128);
            tracep->chgWData(oldp+265,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_data__DOT__sram_Q),128);
            tracep->chgBit(oldp+269,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_data_io_WEN));
            tracep->chgCData(oldp+270,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_data_io_A),6);
            tracep->chgWData(oldp+271,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_tag__DOT__sram_Q),128);
            tracep->chgBit(oldp+275,((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___sram2_data_io_WEN_T_1)))));
            tracep->chgCData(oldp+276,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_tag_io_A),6);
            tracep->chgQData(oldp+277,((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0 
                                        >> 0xaU)),54);
            tracep->chgCData(oldp+279,((0x3fU & (IData)(
                                                        (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0 
                                                         >> 4U)))),6);
            tracep->chgCData(oldp+280,((0xfU & (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0))),4);
            tracep->chgCData(oldp+281,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_state),2);
            tracep->chgQData(oldp+282,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_wdata),64);
            tracep->chgCData(oldp+284,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_wstrb),8);
            tracep->chgBit(oldp+285,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_is_w));
            tracep->chgQData(oldp+286,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_tag),54);
            tracep->chgCData(oldp+288,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_index),6);
            tracep->chgCData(oldp+289,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_offset),4);
            tracep->chgBit(oldp+290,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_write));
            tracep->chgSData(oldp+291,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cache_wstrb),16);
            tracep->chgBit(oldp+292,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_chosen_tag));
            tracep->chgQData(oldp+293,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_mask_lo),64);
            tracep->chgWData(oldp+295,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_mask),128);
            tracep->chgWData(oldp+299,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_wdata),128);
            tracep->chgQData(oldp+303,((0x3fffffffffffffULL 
                                        & (((QData)((IData)(
                                                            vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_tag__DOT__sram_Q[1U])) 
                                            << 0x1eU) 
                                           | ((QData)((IData)(
                                                              vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_tag__DOT__sram_Q[0U])) 
                                              >> 2U)))),54);
            tracep->chgQData(oldp+305,((0x3fffffffffffffULL 
                                        & (((QData)((IData)(
                                                            vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_tag__DOT__sram_Q[1U])) 
                                            << 0x1eU) 
                                           | ((QData)((IData)(
                                                              vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_tag__DOT__sram_Q[0U])) 
                                              >> 2U)))),54);
            tracep->chgBit(oldp+307,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_1));
            tracep->chgBit(oldp+308,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__hit_2));
            tracep->chgBit(oldp+309,((1U & (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_tag__DOT__sram_Q[0U] 
                                            >> 1U))));
            tracep->chgBit(oldp+310,((1U & (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_tag__DOT__sram_Q[0U] 
                                            >> 1U))));
            tracep->chgBit(oldp+311,((1U & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_tag__DOT__sram_Q[0U])));
            tracep->chgBit(oldp+312,((1U & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_tag__DOT__sram_Q[0U])));
            tracep->chgQData(oldp+313,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__rdata1),64);
            tracep->chgQData(oldp+315,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__rdata2),64);
            tracep->chgCData(oldp+317,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_0),2);
            tracep->chgCData(oldp+318,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_1),2);
            tracep->chgCData(oldp+319,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_2),2);
            tracep->chgCData(oldp+320,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_3),2);
            tracep->chgCData(oldp+321,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_4),2);
            tracep->chgCData(oldp+322,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_5),2);
            tracep->chgCData(oldp+323,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_6),2);
            tracep->chgCData(oldp+324,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_7),2);
            tracep->chgCData(oldp+325,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_8),2);
            tracep->chgCData(oldp+326,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_9),2);
            tracep->chgCData(oldp+327,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_10),2);
            tracep->chgCData(oldp+328,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_11),2);
            tracep->chgCData(oldp+329,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_12),2);
            tracep->chgCData(oldp+330,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_13),2);
            tracep->chgCData(oldp+331,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_14),2);
            tracep->chgCData(oldp+332,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_15),2);
            tracep->chgCData(oldp+333,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_16),2);
            tracep->chgCData(oldp+334,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_17),2);
            tracep->chgCData(oldp+335,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_18),2);
            tracep->chgCData(oldp+336,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_19),2);
            tracep->chgCData(oldp+337,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_20),2);
            tracep->chgCData(oldp+338,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_21),2);
            tracep->chgCData(oldp+339,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_22),2);
            tracep->chgCData(oldp+340,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_23),2);
            tracep->chgCData(oldp+341,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_24),2);
            tracep->chgCData(oldp+342,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_25),2);
            tracep->chgCData(oldp+343,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_26),2);
            tracep->chgCData(oldp+344,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_27),2);
            tracep->chgCData(oldp+345,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_28),2);
            tracep->chgCData(oldp+346,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_29),2);
            tracep->chgCData(oldp+347,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_30),2);
            tracep->chgCData(oldp+348,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_31),2);
            tracep->chgCData(oldp+349,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_32),2);
            tracep->chgCData(oldp+350,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_33),2);
            tracep->chgCData(oldp+351,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_34),2);
            tracep->chgCData(oldp+352,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_35),2);
            tracep->chgCData(oldp+353,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_36),2);
            tracep->chgCData(oldp+354,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_37),2);
            tracep->chgCData(oldp+355,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_38),2);
            tracep->chgCData(oldp+356,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_39),2);
            tracep->chgCData(oldp+357,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_40),2);
            tracep->chgCData(oldp+358,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_41),2);
            tracep->chgCData(oldp+359,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_42),2);
            tracep->chgCData(oldp+360,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_43),2);
            tracep->chgCData(oldp+361,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_44),2);
            tracep->chgCData(oldp+362,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_45),2);
            tracep->chgCData(oldp+363,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_46),2);
            tracep->chgCData(oldp+364,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_47),2);
            tracep->chgCData(oldp+365,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_48),2);
            tracep->chgCData(oldp+366,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_49),2);
            tracep->chgCData(oldp+367,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_50),2);
            tracep->chgCData(oldp+368,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_51),2);
            tracep->chgCData(oldp+369,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_52),2);
            tracep->chgCData(oldp+370,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_53),2);
            tracep->chgCData(oldp+371,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_54),2);
            tracep->chgCData(oldp+372,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_55),2);
            tracep->chgCData(oldp+373,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_56),2);
            tracep->chgCData(oldp+374,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_57),2);
            tracep->chgCData(oldp+375,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_58),2);
            tracep->chgCData(oldp+376,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_59),2);
            tracep->chgCData(oldp+377,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_60),2);
            tracep->chgCData(oldp+378,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_61),2);
            tracep->chgCData(oldp+379,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_62),2);
            tracep->chgCData(oldp+380,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_lru_63),2);
            tracep->chgBit(oldp+381,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_start_operation));
            tracep->chgCData(oldp+382,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_cnt),2);
            tracep->chgBit(oldp+383,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_rbus_finish));
            tracep->chgBit(oldp+384,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_wbus_finish));
            tracep->chgBit(oldp+385,((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram1_data_io_WEN)))));
            tracep->chgBit(oldp+386,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___sram1_data_io_WEN_T_1));
            tracep->chgBit(oldp+387,((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram2_data_io_WEN)))));
            tracep->chgBit(oldp+388,(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___sram2_data_io_WEN_T_1));
            tracep->chgWData(oldp+389,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_data__DOT__sram_Q),128);
            tracep->chgBit(oldp+393,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_data_io_WEN));
            __Vtemp4338[0U] = (~ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__cache_mask[0U]);
            __Vtemp4338[1U] = (~ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__cache_mask[1U]);
            __Vtemp4338[2U] = (~ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__cache_mask[2U]);
            __Vtemp4338[3U] = (~ vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__cache_mask[3U]);
            tracep->chgWData(oldp+394,(__Vtemp4338),128);
            tracep->chgCData(oldp+398,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_data_io_A),6);
            tracep->chgWData(oldp+399,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_wdata),128);
            tracep->chgWData(oldp+403,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_tag__DOT__sram_Q),128);
            tracep->chgBit(oldp+407,((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___sram1_data_io_WEN_T_1)))));
            tracep->chgCData(oldp+408,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_tag_io_A),6);
            VL_EXTEND_WQ(128,56, __Vtemp4339, vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___sram1_tag_io_D_T_1);
            tracep->chgWData(oldp+409,(__Vtemp4339),128);
            tracep->chgWData(oldp+413,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_data__DOT__sram_Q),128);
            tracep->chgBit(oldp+417,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_data_io_WEN));
            tracep->chgCData(oldp+418,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_data_io_A),6);
            tracep->chgWData(oldp+419,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_tag__DOT__sram_Q),128);
            tracep->chgBit(oldp+423,((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___sram2_data_io_WEN_T_1)))));
            tracep->chgCData(oldp+424,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_tag_io_A),6);
            tracep->chgQData(oldp+425,((vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_bus_addr 
                                        >> 0xaU)),54);
            tracep->chgCData(oldp+427,((0x3fU & (IData)(
                                                        (vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_bus_addr 
                                                         >> 4U)))),6);
            tracep->chgCData(oldp+428,((0xfU & (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_bus_addr))),4);
            tracep->chgCData(oldp+429,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state),2);
            tracep->chgQData(oldp+430,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_wdata),64);
            tracep->chgCData(oldp+432,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_wstrb),8);
            tracep->chgBit(oldp+433,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_is_w));
            tracep->chgQData(oldp+434,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag),54);
            tracep->chgCData(oldp+436,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index),6);
            tracep->chgCData(oldp+437,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_offset),4);
            tracep->chgBit(oldp+438,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_write));
            tracep->chgSData(oldp+439,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_wstrb),16);
            tracep->chgBit(oldp+440,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_chosen_tag));
            tracep->chgQData(oldp+441,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__cache_mask_lo),64);
            tracep->chgWData(oldp+443,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__cache_mask),128);
            tracep->chgWData(oldp+447,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__cache_wdata),128);
            tracep->chgQData(oldp+451,((0x3fffffffffffffULL 
                                        & (((QData)((IData)(
                                                            vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_tag__DOT__sram_Q[1U])) 
                                            << 0x1eU) 
                                           | ((QData)((IData)(
                                                              vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_tag__DOT__sram_Q[0U])) 
                                              >> 2U)))),54);
            tracep->chgQData(oldp+453,((0x3fffffffffffffULL 
                                        & (((QData)((IData)(
                                                            vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_tag__DOT__sram_Q[1U])) 
                                            << 0x1eU) 
                                           | ((QData)((IData)(
                                                              vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_tag__DOT__sram_Q[0U])) 
                                              >> 2U)))),54);
            tracep->chgBit(oldp+455,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_1));
            tracep->chgBit(oldp+456,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2));
            tracep->chgBit(oldp+457,((1U & (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_tag__DOT__sram_Q[0U] 
                                            >> 1U))));
            tracep->chgBit(oldp+458,((1U & (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_tag__DOT__sram_Q[0U] 
                                            >> 1U))));
            tracep->chgBit(oldp+459,((1U & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_tag__DOT__sram_Q[0U])));
            tracep->chgBit(oldp+460,((1U & vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_tag__DOT__sram_Q[0U])));
            tracep->chgQData(oldp+461,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__rdata1),64);
            tracep->chgQData(oldp+463,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__rdata2),64);
            tracep->chgCData(oldp+465,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_0),2);
            tracep->chgCData(oldp+466,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_1),2);
            tracep->chgCData(oldp+467,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_2),2);
            tracep->chgCData(oldp+468,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_3),2);
            tracep->chgCData(oldp+469,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_4),2);
            tracep->chgCData(oldp+470,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_5),2);
            tracep->chgCData(oldp+471,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_6),2);
            tracep->chgCData(oldp+472,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_7),2);
            tracep->chgCData(oldp+473,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_8),2);
            tracep->chgCData(oldp+474,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_9),2);
            tracep->chgCData(oldp+475,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_10),2);
            tracep->chgCData(oldp+476,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_11),2);
            tracep->chgCData(oldp+477,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_12),2);
            tracep->chgCData(oldp+478,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_13),2);
            tracep->chgCData(oldp+479,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_14),2);
            tracep->chgCData(oldp+480,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_15),2);
            tracep->chgCData(oldp+481,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_16),2);
            tracep->chgCData(oldp+482,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_17),2);
            tracep->chgCData(oldp+483,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_18),2);
            tracep->chgCData(oldp+484,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_19),2);
            tracep->chgCData(oldp+485,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_20),2);
            tracep->chgCData(oldp+486,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_21),2);
            tracep->chgCData(oldp+487,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_22),2);
            tracep->chgCData(oldp+488,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_23),2);
            tracep->chgCData(oldp+489,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_24),2);
            tracep->chgCData(oldp+490,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_25),2);
            tracep->chgCData(oldp+491,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_26),2);
            tracep->chgCData(oldp+492,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_27),2);
            tracep->chgCData(oldp+493,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_28),2);
            tracep->chgCData(oldp+494,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_29),2);
            tracep->chgCData(oldp+495,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_30),2);
            tracep->chgCData(oldp+496,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_31),2);
            tracep->chgCData(oldp+497,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_32),2);
            tracep->chgCData(oldp+498,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_33),2);
            tracep->chgCData(oldp+499,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_34),2);
            tracep->chgCData(oldp+500,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_35),2);
            tracep->chgCData(oldp+501,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_36),2);
            tracep->chgCData(oldp+502,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_37),2);
            tracep->chgCData(oldp+503,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_38),2);
            tracep->chgCData(oldp+504,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_39),2);
            tracep->chgCData(oldp+505,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_40),2);
            tracep->chgCData(oldp+506,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_41),2);
            tracep->chgCData(oldp+507,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_42),2);
            tracep->chgCData(oldp+508,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_43),2);
            tracep->chgCData(oldp+509,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_44),2);
            tracep->chgCData(oldp+510,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_45),2);
            tracep->chgCData(oldp+511,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_46),2);
            tracep->chgCData(oldp+512,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_47),2);
            tracep->chgCData(oldp+513,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_48),2);
            tracep->chgCData(oldp+514,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_49),2);
            tracep->chgCData(oldp+515,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_50),2);
            tracep->chgCData(oldp+516,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_51),2);
            tracep->chgCData(oldp+517,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_52),2);
            tracep->chgCData(oldp+518,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_53),2);
            tracep->chgCData(oldp+519,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_54),2);
            tracep->chgCData(oldp+520,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_55),2);
            tracep->chgCData(oldp+521,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_56),2);
            tracep->chgCData(oldp+522,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_57),2);
            tracep->chgCData(oldp+523,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_58),2);
            tracep->chgCData(oldp+524,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_59),2);
            tracep->chgCData(oldp+525,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_60),2);
            tracep->chgCData(oldp+526,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_61),2);
            tracep->chgCData(oldp+527,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_62),2);
            tracep->chgCData(oldp+528,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_63),2);
            tracep->chgBit(oldp+529,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation));
            tracep->chgCData(oldp+530,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cnt),2);
            tracep->chgBit(oldp+531,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_rbus_finish));
            tracep->chgBit(oldp+532,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_wbus_finish));
            tracep->chgBit(oldp+533,((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram1_data_io_WEN)))));
            tracep->chgBit(oldp+534,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___sram1_data_io_WEN_T_1));
            tracep->chgBit(oldp+535,((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram2_data_io_WEN)))));
            tracep->chgBit(oldp+536,(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___sram2_data_io_WEN_T_1));
            tracep->chgCData(oldp+537,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__reg_w_cnt),2);
            tracep->chgBit(oldp+538,((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__reg_w_cnt))));
            tracep->chgCData(oldp+539,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__w_lockId),2);
            tracep->chgCData(oldp+540,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__w_chosen),2);
            tracep->chgCData(oldp+541,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__reg_r_cnt),2);
            tracep->chgBit(oldp+542,((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__reg_r_cnt))));
            tracep->chgCData(oldp+543,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__r_lockId),2);
            tracep->chgCData(oldp+544,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__r_chosen),2);
            tracep->chgBit(oldp+545,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__reg_aw_ok));
            tracep->chgBit(oldp+546,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__reg_ar_ok));
            tracep->chgBit(oldp+547,((0ULL == (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0 
                                               >> 0x1fU))));
            tracep->chgBit(oldp+548,((0ULL == (vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_bus_addr 
                                               >> 0x1fU))));
            tracep->chgBit(oldp+549,(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1__DOT__not_clint));
            tracep->chgBit(oldp+550,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__stall));
            tracep->chgQData(oldp+551,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_temp_pc_1),64);
            tracep->chgIData(oldp+553,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_temp_inst),32);
            tracep->chgBit(oldp+554,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_flush));
            tracep->chgQData(oldp+555,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_next_pc),64);
            tracep->chgBit(oldp+557,(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__need_update));
            tracep->chgBit(oldp+558,((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__valid))));
            tracep->chgQData(oldp+559,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu_io_op_data1),64);
            tracep->chgQData(oldp+561,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu_io_op_data2),64);
            tracep->chgQData(oldp+563,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__reg_result_data),64);
            tracep->chgBit(oldp+565,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__reg_next_pc_valid));
            tracep->chgBit(oldp+566,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__reg_w_rs_en));
            tracep->chgBit(oldp+567,((1U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__valid) 
                                            >> 1U))));
            tracep->chgBit(oldp+568,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__lsu_exu__DOT__reg_avalid));
            tracep->chgBit(oldp+569,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__lsu_exu__DOT__reg_w_mem_en));
            tracep->chgQData(oldp+570,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu_io_result_data),64);
            tracep->chgBit(oldp+572,((1U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__valid) 
                                            >> 3U))));
            tracep->chgBit(oldp+573,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu_io_out_valid));
            tracep->chgBit(oldp+574,((1U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__valid) 
                                            >> 2U))));
            tracep->chgQData(oldp+575,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__csr_exu_io_csr_data),64);
            tracep->chgQData(oldp+577,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__csr_exu_io_rs1_data),64);
            tracep->chgQData(oldp+579,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__csr_exu__DOT__reg_rd_result),64);
            tracep->chgBit(oldp+581,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__csr_exu__DOT__reg_w_rs_en));
            tracep->chgBit(oldp+582,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__csr_exu__DOT__reg_w_csr_en));
            tracep->chgBit(oldp+583,((1U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__valid) 
                                            >> 4U))));
            tracep->chgQData(oldp+584,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_rs_addr),64);
            tracep->chgCData(oldp+586,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_exuType),6);
            tracep->chgCData(oldp+587,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__valid),5);
            tracep->chgCData(oldp+588,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_valid),5);
            tracep->chgBit(oldp+589,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_w_rs_en));
            tracep->chgQData(oldp+590,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__rs2_data),64);
            tracep->chgQData(oldp+592,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__rs2_data),64);
            __Vtemp4341[0U] = 1U;
            __Vtemp4341[1U] = 0U;
            __Vtemp4341[2U] = 0U;
            VL_ADD_W(3, __Vtemp4342, __Vtemp4341, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___subresult_T_3);
            __Vtemp4343[0U] = __Vtemp4342[0U];
            __Vtemp4343[1U] = __Vtemp4342[1U];
            __Vtemp4343[2U] = (1U & __Vtemp4342[2U]);
            tracep->chgWData(oldp+594,(__Vtemp4343),65);
            __Vtemp4345[0U] = 1U;
            __Vtemp4345[1U] = 0U;
            __Vtemp4345[2U] = 0U;
            VL_ADD_W(3, __Vtemp4346, __Vtemp4345, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___subresult_T_3);
            tracep->chgBit(oldp+597,((1U & (~ (1U & 
                                               __Vtemp4346[2U])))));
            tracep->chgBit(oldp+598,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__s_rs1_l_rs2));
            tracep->chgQData(oldp+599,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sllw_temp),63);
            tracep->chgIData(oldp+601,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__srlw_temp),32);
            tracep->chgIData(oldp+602,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sraw_temp),32);
            tracep->chgQData(oldp+603,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__add_temp),64);
            tracep->chgWData(oldp+605,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data),65);
            tracep->chgBit(oldp+608,((1U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[2U])));
            tracep->chgQData(oldp+609,((((QData)((IData)(
                                                         vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[1U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[0U])))),64);
            __Vtemp4348[0U] = (IData)((0xfffffffffffffffeULL 
                                       & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___next_pc3_T_1));
            __Vtemp4348[1U] = (IData)(((0xfffffffffffffffeULL 
                                        & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___next_pc3_T_1) 
                                       >> 0x20U));
            __Vtemp4348[2U] = 1U;
            tracep->chgWData(oldp+611,(__Vtemp4348),65);
            tracep->chgWData(oldp+614,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc),65);
            tracep->chgBit(oldp+617,((1U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[2U])));
            tracep->chgQData(oldp+618,((((QData)((IData)(
                                                         vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[1U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[0U])))),64);
            tracep->chgQData(oldp+620,((((QData)((IData)(
                                                         vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT___io_result_T_1[1U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT___io_result_T_1[0U])))),64);
            tracep->chgBit(oldp+622,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div_io_valid));
            tracep->chgBit(oldp+623,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_stall));
            tracep->chgBit(oldp+624,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_out_valid));
            tracep->chgQData(oldp+625,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul_io_result),64);
            tracep->chgBit(oldp+627,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_stall));
            tracep->chgBit(oldp+628,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul_io_valid));
            tracep->chgBit(oldp+629,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_out_valid));
            tracep->chgWData(oldp+630,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__dividend),65);
            tracep->chgWData(oldp+633,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__divisor),65);
            tracep->chgWData(oldp+636,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__rem),65);
            tracep->chgWData(oldp+639,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor),65);
            tracep->chgWData(oldp+642,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_dividend),65);
            tracep->chgWData(oldp+645,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem),65);
            tracep->chgWData(oldp+648,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_q),65);
            __Vtemp4350[0U] = 1U;
            __Vtemp4350[1U] = 0U;
            __Vtemp4350[2U] = 0U;
            __Vtemp4351[0U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[0U]);
            __Vtemp4351[1U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[1U]);
            __Vtemp4351[2U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[2U]);
            VL_ADD_W(3, __Vtemp4352, __Vtemp4350, __Vtemp4351);
            __Vtemp4353[0U] = __Vtemp4352[0U];
            __Vtemp4353[1U] = __Vtemp4352[1U];
            __Vtemp4353[2U] = (1U & __Vtemp4352[2U]);
            tracep->chgWData(oldp+651,(__Vtemp4353),65);
            tracep->chgCData(oldp+654,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state),2);
            tracep->chgCData(oldp+655,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_cnt),7);
            tracep->chgCData(oldp+656,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_exuType),6);
            tracep->chgWData(oldp+657,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__temp_result),131);
            tracep->chgWData(oldp+662,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__mul_data1),130);
            tracep->chgWData(oldp+667,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__mul_data2),65);
            tracep->chgWData(oldp+670,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__temp_mul2),67);
            tracep->chgCData(oldp+673,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_cnt),6);
            tracep->chgCData(oldp+674,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_state),2);
            tracep->chgWData(oldp+675,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2),67);
            tracep->chgWData(oldp+678,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1),130);
            tracep->chgWData(oldp+683,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_result),130);
            tracep->chgBit(oldp+688,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_exuType));
            tracep->chgWData(oldp+689,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__pp),131);
            tracep->chgWData(oldp+694,(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__csr_exu__DOT__temp_csr_result_data),65);
            tracep->chgQData(oldp+697,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile[0]),64);
            tracep->chgQData(oldp+699,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile[1]),64);
            tracep->chgQData(oldp+701,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile[2]),64);
            tracep->chgQData(oldp+703,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile[3]),64);
            tracep->chgQData(oldp+705,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile[4]),64);
            tracep->chgQData(oldp+707,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile[5]),64);
            tracep->chgQData(oldp+709,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile[6]),64);
            tracep->chgQData(oldp+711,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile[7]),64);
            tracep->chgQData(oldp+713,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile[8]),64);
            tracep->chgQData(oldp+715,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile[9]),64);
            tracep->chgQData(oldp+717,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile[10]),64);
            tracep->chgQData(oldp+719,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile[11]),64);
            tracep->chgQData(oldp+721,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile[12]),64);
            tracep->chgQData(oldp+723,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile[13]),64);
            tracep->chgQData(oldp+725,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile[14]),64);
            tracep->chgQData(oldp+727,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile[15]),64);
            tracep->chgQData(oldp+729,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile[16]),64);
            tracep->chgQData(oldp+731,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile[17]),64);
            tracep->chgQData(oldp+733,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile[18]),64);
            tracep->chgQData(oldp+735,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile[19]),64);
            tracep->chgQData(oldp+737,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile[20]),64);
            tracep->chgQData(oldp+739,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile[21]),64);
            tracep->chgQData(oldp+741,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile[22]),64);
            tracep->chgQData(oldp+743,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile[23]),64);
            tracep->chgQData(oldp+745,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile[24]),64);
            tracep->chgQData(oldp+747,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile[25]),64);
            tracep->chgQData(oldp+749,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile[26]),64);
            tracep->chgQData(oldp+751,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile[27]),64);
            tracep->chgQData(oldp+753,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile[28]),64);
            tracep->chgQData(oldp+755,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile[29]),64);
            tracep->chgQData(oldp+757,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile[30]),64);
            tracep->chgQData(oldp+759,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile[31]),64);
            tracep->chgQData(oldp+761,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                       [0U]),64);
            tracep->chgCData(oldp+763,((0x1fU & (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_inst 
                                                 >> 0xfU))),5);
            tracep->chgQData(oldp+764,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile_rs1_data_MPORT_data),64);
            tracep->chgCData(oldp+766,((0x1fU & (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_inst 
                                                 >> 0x14U))),5);
            tracep->chgQData(oldp+767,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile_rs2_data_MPORT_data),64);
            tracep->chgCData(oldp+769,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_opType),3);
            tracep->chgCData(oldp+770,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType),6);
            tracep->chgQData(oldp+771,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_pc),64);
            tracep->chgIData(oldp+773,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_inst),32);
            tracep->chgBit(oldp+774,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__stall));
            tracep->chgCData(oldp+775,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__instType),4);
            tracep->chgCData(oldp+776,((0x1fU & (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_inst 
                                                 >> 7U))),5);
            tracep->chgBit(oldp+777,(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__temp_stall));
            tracep->chgCData(oldp+778,(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_rs_addr),5);
            tracep->chgQData(oldp+779,(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_result_data),64);
            tracep->chgBit(oldp+781,(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_w_rs_en));
            tracep->chgCData(oldp+782,(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_exuType),6);
            tracep->chgQData(oldp+783,(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__mem_r_data),64);
            tracep->chgQData(oldp+785,(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__mem_data_result),64);
            tracep->chgQData(oldp+787,(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__mem_wstrb),64);
            tracep->chgBit(oldp+789,(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_ls_state));
            tracep->chgQData(oldp+790,(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__rs2_data),64);
            tracep->chgWData(oldp+792,(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__mem_w_data),127);
            tracep->chgBit(oldp+796,(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__test_is_peripheral));
            tracep->chgQData(oldp+797,(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_csr_addr),64);
            tracep->chgBit(oldp+799,(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_w_csr_en));
            tracep->chgBit(oldp+800,(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__is_time_irq));
            tracep->chgBit(oldp+801,(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__is_soft_irq));
            tracep->chgBit(oldp+802,(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_flush));
            tracep->chgBit(oldp+803,(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__temp_except));
            tracep->chgIData(oldp+804,(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_inst),32);
            tracep->chgBit(oldp+805,(vlSelf->riscv_soc__DOT__core__DOT__csr_reg__DOT__irq));
            tracep->chgQData(oldp+806,(vlSelf->riscv_soc__DOT__core__DOT__csr_reg__DOT__reg_mie),64);
            tracep->chgQData(oldp+808,(vlSelf->riscv_soc__DOT__core__DOT__csr_reg__DOT__reg_mscratch),64);
            tracep->chgQData(oldp+810,(vlSelf->riscv_soc__DOT__core__DOT__csr_reg__DOT__reg_mtval),64);
            tracep->chgQData(oldp+812,(vlSelf->riscv_soc__DOT__core__DOT__csr_reg__DOT__reg_mcycle),64);
            tracep->chgQData(oldp+814,(vlSelf->riscv_soc__DOT__core__DOT__csr_reg__DOT__reg_minstret),64);
            tracep->chgQData(oldp+816,(vlSelf->riscv_soc__DOT__core__DOT__csr_reg__DOT__csr_rdata),64);
            tracep->chgQData(oldp+818,(vlSelf->riscv_soc__DOT__core__DOT__clint_de__DOT__reg_mtime),64);
            tracep->chgQData(oldp+820,(vlSelf->riscv_soc__DOT__core__DOT__clint_de__DOT__reg_mtimecmp),64);
            tracep->chgBit(oldp+822,(vlSelf->riscv_soc__DOT__core__DOT__clint_de__DOT__reg_state));
            tracep->chgBit(oldp+823,((0U == (0xffU 
                                             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_bus_addr)))));
            tracep->chgBit(oldp+824,((0x30U == (0xffU 
                                                & (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_bus_addr)))));
            tracep->chgQData(oldp+825,(vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_raddr),64);
            tracep->chgQData(oldp+827,(vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_w_addr),64);
            tracep->chgQData(oldp+829,(vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_wmask),64);
            tracep->chgBit(oldp+831,(vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_wen));
            tracep->chgQData(oldp+832,(vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_raddr),64);
            tracep->chgCData(oldp+834,(vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_rlen),4);
            tracep->chgBit(oldp+835,(vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_r_state));
            tracep->chgBit(oldp+836,(vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_is_w));
            tracep->chgIData(oldp+837,(vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_io_wmask_lo),32);
            tracep->chgIData(oldp+838,(vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_io_wmask_hi),32);
        }
        tracep->chgBit(oldp+839,(vlSelf->clock));
        tracep->chgBit(oldp+840,(vlSelf->reset));
        tracep->chgQData(oldp+841,(vlSelf->io_difftest_reg_0),64);
        tracep->chgQData(oldp+843,(vlSelf->io_difftest_reg_1),64);
        tracep->chgQData(oldp+845,(vlSelf->io_difftest_reg_2),64);
        tracep->chgQData(oldp+847,(vlSelf->io_difftest_reg_3),64);
        tracep->chgQData(oldp+849,(vlSelf->io_difftest_reg_4),64);
        tracep->chgQData(oldp+851,(vlSelf->io_difftest_reg_5),64);
        tracep->chgQData(oldp+853,(vlSelf->io_difftest_reg_6),64);
        tracep->chgQData(oldp+855,(vlSelf->io_difftest_reg_7),64);
        tracep->chgQData(oldp+857,(vlSelf->io_difftest_reg_8),64);
        tracep->chgQData(oldp+859,(vlSelf->io_difftest_reg_9),64);
        tracep->chgQData(oldp+861,(vlSelf->io_difftest_reg_10),64);
        tracep->chgQData(oldp+863,(vlSelf->io_difftest_reg_11),64);
        tracep->chgQData(oldp+865,(vlSelf->io_difftest_reg_12),64);
        tracep->chgQData(oldp+867,(vlSelf->io_difftest_reg_13),64);
        tracep->chgQData(oldp+869,(vlSelf->io_difftest_reg_14),64);
        tracep->chgQData(oldp+871,(vlSelf->io_difftest_reg_15),64);
        tracep->chgQData(oldp+873,(vlSelf->io_difftest_reg_16),64);
        tracep->chgQData(oldp+875,(vlSelf->io_difftest_reg_17),64);
        tracep->chgQData(oldp+877,(vlSelf->io_difftest_reg_18),64);
        tracep->chgQData(oldp+879,(vlSelf->io_difftest_reg_19),64);
        tracep->chgQData(oldp+881,(vlSelf->io_difftest_reg_20),64);
        tracep->chgQData(oldp+883,(vlSelf->io_difftest_reg_21),64);
        tracep->chgQData(oldp+885,(vlSelf->io_difftest_reg_22),64);
        tracep->chgQData(oldp+887,(vlSelf->io_difftest_reg_23),64);
        tracep->chgQData(oldp+889,(vlSelf->io_difftest_reg_24),64);
        tracep->chgQData(oldp+891,(vlSelf->io_difftest_reg_25),64);
        tracep->chgQData(oldp+893,(vlSelf->io_difftest_reg_26),64);
        tracep->chgQData(oldp+895,(vlSelf->io_difftest_reg_27),64);
        tracep->chgQData(oldp+897,(vlSelf->io_difftest_reg_28),64);
        tracep->chgQData(oldp+899,(vlSelf->io_difftest_reg_29),64);
        tracep->chgQData(oldp+901,(vlSelf->io_difftest_reg_30),64);
        tracep->chgQData(oldp+903,(vlSelf->io_difftest_reg_31),64);
        tracep->chgQData(oldp+905,(vlSelf->io_difftest_pc),64);
        tracep->chgIData(oldp+907,(vlSelf->io_difftest_inst),32);
        tracep->chgBit(oldp+908,(vlSelf->io_difftest_commit));
        tracep->chgQData(oldp+909,(vlSelf->io_inst_counter),64);
        tracep->chgBit(oldp+911,(vlSelf->io_difftest_irq));
        tracep->chgQData(oldp+912,(vlSelf->io_difftest_mstatus),64);
        tracep->chgQData(oldp+914,(vlSelf->io_difftest_mcause),64);
        tracep->chgQData(oldp+916,(vlSelf->io_difftest_mepc),64);
        tracep->chgQData(oldp+918,(vlSelf->io_difftest_mtvec),64);
        tracep->chgBit(oldp+920,(vlSelf->io_difftest_peripheral));
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
