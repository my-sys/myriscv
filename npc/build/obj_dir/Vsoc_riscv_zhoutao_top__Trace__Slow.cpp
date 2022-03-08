// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vsoc_riscv_zhoutao_top__Syms.h"


void Vsoc_riscv_zhoutao_top___024root__traceInitSub0(Vsoc_riscv_zhoutao_top___024root* vlSelf, VerilatedVcd* tracep) VL_ATTR_COLD;

void Vsoc_riscv_zhoutao_top___024root__traceInitTop(Vsoc_riscv_zhoutao_top___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vsoc_riscv_zhoutao_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        Vsoc_riscv_zhoutao_top___024root__traceInitSub0(vlSelf, tracep);
    }
}

void Vsoc_riscv_zhoutao_top___024root__traceInitSub0(Vsoc_riscv_zhoutao_top___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vsoc_riscv_zhoutao_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    const int c = vlSymsp->__Vm_baseCode;
    if (false && tracep && c) {}  // Prevent unused
    // Body
    {
        tracep->declBit(c+444,"clk", false,-1);
        tracep->declBit(c+445,"reset", false,-1);
        tracep->declBit(c+446,"ps2_clk", false,-1);
        tracep->declBit(c+447,"ps2_data", false,-1);
        tracep->declBus(c+448,"seg0_o", false,-1, 7,0);
        tracep->declBus(c+449,"seg1_o", false,-1, 7,0);
        tracep->declBus(c+450,"seg2_o", false,-1, 7,0);
        tracep->declBus(c+451,"seg3_o", false,-1, 7,0);
        tracep->declBus(c+452,"seg4_o", false,-1, 7,0);
        tracep->declBus(c+453,"seg5_o", false,-1, 7,0);
        tracep->declBus(c+454,"seg6_o", false,-1, 7,0);
        tracep->declBus(c+455,"seg7_o", false,-1, 7,0);
        tracep->declBit(c+444,"soc_riscv_zhoutao_top clk", false,-1);
        tracep->declBit(c+445,"soc_riscv_zhoutao_top reset", false,-1);
        tracep->declBit(c+446,"soc_riscv_zhoutao_top ps2_clk", false,-1);
        tracep->declBit(c+447,"soc_riscv_zhoutao_top ps2_data", false,-1);
        tracep->declBus(c+448,"soc_riscv_zhoutao_top seg0_o", false,-1, 7,0);
        tracep->declBus(c+449,"soc_riscv_zhoutao_top seg1_o", false,-1, 7,0);
        tracep->declBus(c+450,"soc_riscv_zhoutao_top seg2_o", false,-1, 7,0);
        tracep->declBus(c+451,"soc_riscv_zhoutao_top seg3_o", false,-1, 7,0);
        tracep->declBus(c+452,"soc_riscv_zhoutao_top seg4_o", false,-1, 7,0);
        tracep->declBus(c+453,"soc_riscv_zhoutao_top seg5_o", false,-1, 7,0);
        tracep->declBus(c+454,"soc_riscv_zhoutao_top seg6_o", false,-1, 7,0);
        tracep->declBus(c+455,"soc_riscv_zhoutao_top seg7_o", false,-1, 7,0);
        tracep->declBit(c+409,"soc_riscv_zhoutao_top clrn", false,-1);
        tracep->declBus(c+410,"soc_riscv_zhoutao_top select", false,-1, 7,0);
        tracep->declBit(c+411,"soc_riscv_zhoutao_top nextdata_n", false,-1);
        tracep->declBus(c+412,"soc_riscv_zhoutao_top digital_data", false,-1, 31,0);
        tracep->declBus(c+413,"soc_riscv_zhoutao_top data", false,-1, 7,0);
        tracep->declBit(c+414,"soc_riscv_zhoutao_top ready", false,-1);
        tracep->declBit(c+415,"soc_riscv_zhoutao_top overflow", false,-1);
        tracep->declBus(c+416,"soc_riscv_zhoutao_top count", false,-1, 6,0);
        tracep->declBit(c+417,"soc_riscv_zhoutao_top cnt", false,-1);
        tracep->declBus(c+418,"soc_riscv_zhoutao_top A", false,-1, 3,0);
        tracep->declBus(c+419,"soc_riscv_zhoutao_top B", false,-1, 3,0);
        tracep->declBus(c+420,"soc_riscv_zhoutao_top C", false,-1, 3,0);
        tracep->declBus(c+421,"soc_riscv_zhoutao_top BCD_1 binary", false,-1, 7,0);
        tracep->declBus(c+418,"soc_riscv_zhoutao_top BCD_1 A", false,-1, 3,0);
        tracep->declBus(c+419,"soc_riscv_zhoutao_top BCD_1 B", false,-1, 3,0);
        tracep->declBus(c+420,"soc_riscv_zhoutao_top BCD_1 C", false,-1, 3,0);
        tracep->declBus(c+456,"soc_riscv_zhoutao_top BCD_1 i", false,-1, 31,0);
        tracep->declBit(c+444,"soc_riscv_zhoutao_top ps2_keybpard_1 clk", false,-1);
        tracep->declBit(c+409,"soc_riscv_zhoutao_top ps2_keybpard_1 clrn", false,-1);
        tracep->declBit(c+446,"soc_riscv_zhoutao_top ps2_keybpard_1 ps2_clk", false,-1);
        tracep->declBit(c+447,"soc_riscv_zhoutao_top ps2_keybpard_1 ps2_data", false,-1);
        tracep->declBit(c+411,"soc_riscv_zhoutao_top ps2_keybpard_1 nextdata_n", false,-1);
        tracep->declBus(c+413,"soc_riscv_zhoutao_top ps2_keybpard_1 data", false,-1, 7,0);
        tracep->declBit(c+414,"soc_riscv_zhoutao_top ps2_keybpard_1 ready", false,-1);
        tracep->declBit(c+415,"soc_riscv_zhoutao_top ps2_keybpard_1 overflow", false,-1);
        tracep->declBus(c+422,"soc_riscv_zhoutao_top ps2_keybpard_1 buffer", false,-1, 9,0);
        {int i; for (i=0; i<8; i++) {
                tracep->declBus(c+423+i*1,"soc_riscv_zhoutao_top ps2_keybpard_1 fifo", true,(i+0), 7,0);}}
        tracep->declBus(c+431,"soc_riscv_zhoutao_top ps2_keybpard_1 w_ptr", false,-1, 2,0);
        tracep->declBus(c+432,"soc_riscv_zhoutao_top ps2_keybpard_1 r_ptr", false,-1, 2,0);
        tracep->declBus(c+433,"soc_riscv_zhoutao_top ps2_keybpard_1 count", false,-1, 3,0);
        tracep->declBus(c+434,"soc_riscv_zhoutao_top ps2_keybpard_1 ps2_clk_sync", false,-1, 2,0);
        tracep->declBit(c+435,"soc_riscv_zhoutao_top ps2_keybpard_1 sampling", false,-1);
        tracep->declBit(c+444,"soc_riscv_zhoutao_top digital_led_1 clk", false,-1);
        tracep->declBus(c+457,"soc_riscv_zhoutao_top digital_led_1 data_in", false,-1, 31,0);
        tracep->declBus(c+410,"soc_riscv_zhoutao_top digital_led_1 select", false,-1, 7,0);
        tracep->declBus(c+448,"soc_riscv_zhoutao_top digital_led_1 seg0_o", false,-1, 7,0);
        tracep->declBus(c+449,"soc_riscv_zhoutao_top digital_led_1 seg1_o", false,-1, 7,0);
        tracep->declBus(c+450,"soc_riscv_zhoutao_top digital_led_1 seg2_o", false,-1, 7,0);
        tracep->declBus(c+451,"soc_riscv_zhoutao_top digital_led_1 seg3_o", false,-1, 7,0);
        tracep->declBus(c+452,"soc_riscv_zhoutao_top digital_led_1 seg4_o", false,-1, 7,0);
        tracep->declBus(c+453,"soc_riscv_zhoutao_top digital_led_1 seg5_o", false,-1, 7,0);
        tracep->declBus(c+454,"soc_riscv_zhoutao_top digital_led_1 seg6_o", false,-1, 7,0);
        tracep->declBus(c+455,"soc_riscv_zhoutao_top digital_led_1 seg7_o", false,-1, 7,0);
        tracep->declBus(c+458,"soc_riscv_zhoutao_top digital_led_1 S_0", false,-1, 3,0);
        tracep->declBus(c+459,"soc_riscv_zhoutao_top digital_led_1 S_1", false,-1, 3,0);
        tracep->declBus(c+460,"soc_riscv_zhoutao_top digital_led_1 S_2", false,-1, 3,0);
        tracep->declBus(c+461,"soc_riscv_zhoutao_top digital_led_1 S_3", false,-1, 3,0);
        tracep->declBus(c+462,"soc_riscv_zhoutao_top digital_led_1 S_4", false,-1, 3,0);
        tracep->declBus(c+463,"soc_riscv_zhoutao_top digital_led_1 S_5", false,-1, 3,0);
        tracep->declBus(c+464,"soc_riscv_zhoutao_top digital_led_1 S_6", false,-1, 3,0);
        tracep->declBus(c+465,"soc_riscv_zhoutao_top digital_led_1 S_7", false,-1, 3,0);
        tracep->declBus(c+466,"soc_riscv_zhoutao_top digital_led_1 S_8", false,-1, 3,0);
        tracep->declBus(c+467,"soc_riscv_zhoutao_top digital_led_1 S_9", false,-1, 3,0);
        tracep->declBus(c+468,"soc_riscv_zhoutao_top digital_led_1 S_a", false,-1, 3,0);
        tracep->declBus(c+469,"soc_riscv_zhoutao_top digital_led_1 S_b", false,-1, 3,0);
        tracep->declBus(c+470,"soc_riscv_zhoutao_top digital_led_1 S_c", false,-1, 3,0);
        tracep->declBus(c+471,"soc_riscv_zhoutao_top digital_led_1 S_d", false,-1, 3,0);
        tracep->declBus(c+472,"soc_riscv_zhoutao_top digital_led_1 S_e", false,-1, 3,0);
        tracep->declBus(c+473,"soc_riscv_zhoutao_top digital_led_1 S_f", false,-1, 3,0);
        tracep->declBus(c+1,"soc_riscv_zhoutao_top digital_led_1 seg0_line", false,-1, 7,0);
        tracep->declBus(c+2,"soc_riscv_zhoutao_top digital_led_1 seg1_line", false,-1, 7,0);
        tracep->declBus(c+3,"soc_riscv_zhoutao_top digital_led_1 seg2_line", false,-1, 7,0);
        tracep->declBus(c+4,"soc_riscv_zhoutao_top digital_led_1 seg3_line", false,-1, 7,0);
        tracep->declBus(c+5,"soc_riscv_zhoutao_top digital_led_1 seg4_line", false,-1, 7,0);
        tracep->declBus(c+6,"soc_riscv_zhoutao_top digital_led_1 seg5_line", false,-1, 7,0);
        tracep->declBus(c+7,"soc_riscv_zhoutao_top digital_led_1 seg6_line", false,-1, 7,0);
        tracep->declBus(c+8,"soc_riscv_zhoutao_top digital_led_1 seg7_line", false,-1, 7,0);
        tracep->declBus(c+436,"soc_riscv_zhoutao_top digital_led_1 seg0", false,-1, 7,0);
        tracep->declBus(c+437,"soc_riscv_zhoutao_top digital_led_1 seg1", false,-1, 7,0);
        tracep->declBus(c+438,"soc_riscv_zhoutao_top digital_led_1 seg2", false,-1, 7,0);
        tracep->declBus(c+439,"soc_riscv_zhoutao_top digital_led_1 seg3", false,-1, 7,0);
        tracep->declBus(c+440,"soc_riscv_zhoutao_top digital_led_1 seg4", false,-1, 7,0);
        tracep->declBus(c+441,"soc_riscv_zhoutao_top digital_led_1 seg5", false,-1, 7,0);
        tracep->declBus(c+442,"soc_riscv_zhoutao_top digital_led_1 seg6", false,-1, 7,0);
        tracep->declBus(c+443,"soc_riscv_zhoutao_top digital_led_1 seg7", false,-1, 7,0);
        tracep->declBus(c+474,"soc_riscv_zhoutao_top digital_led_1 decode_data_0 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+475,"soc_riscv_zhoutao_top digital_led_1 decode_data_0 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+476,"soc_riscv_zhoutao_top digital_led_1 decode_data_0 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+1,"soc_riscv_zhoutao_top digital_led_1 decode_data_0 out", false,-1, 7,0);
        tracep->declBus(c+463,"soc_riscv_zhoutao_top digital_led_1 decode_data_0 key", false,-1, 3,0);
        tracep->declArray(c+477,"soc_riscv_zhoutao_top digital_led_1 decode_data_0 lut", false,-1, 191,0);
        tracep->declBus(c+474,"soc_riscv_zhoutao_top digital_led_1 decode_data_0 i0 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+475,"soc_riscv_zhoutao_top digital_led_1 decode_data_0 i0 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+476,"soc_riscv_zhoutao_top digital_led_1 decode_data_0 i0 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+483,"soc_riscv_zhoutao_top digital_led_1 decode_data_0 i0 HAS_DEFAULT", false,-1, 31,0);
        tracep->declBus(c+1,"soc_riscv_zhoutao_top digital_led_1 decode_data_0 i0 out", false,-1, 7,0);
        tracep->declBus(c+463,"soc_riscv_zhoutao_top digital_led_1 decode_data_0 i0 key", false,-1, 3,0);
        tracep->declBus(c+484,"soc_riscv_zhoutao_top digital_led_1 decode_data_0 i0 default_out", false,-1, 7,0);
        tracep->declArray(c+477,"soc_riscv_zhoutao_top digital_led_1 decode_data_0 i0 lut", false,-1, 191,0);
        tracep->declBus(c+485,"soc_riscv_zhoutao_top digital_led_1 decode_data_0 i0 PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<16; i++) {
                tracep->declBus(c+9+i*1,"soc_riscv_zhoutao_top digital_led_1 decode_data_0 i0 pair_list", true,(i+0), 11,0);}}
        {int i; for (i=0; i<16; i++) {
                tracep->declBus(c+25+i*1,"soc_riscv_zhoutao_top digital_led_1 decode_data_0 i0 key_list", true,(i+0), 3,0);}}
        {int i; for (i=0; i<16; i++) {
                tracep->declBus(c+41+i*1,"soc_riscv_zhoutao_top digital_led_1 decode_data_0 i0 data_list", true,(i+0), 7,0);}}
        tracep->declBus(c+57,"soc_riscv_zhoutao_top digital_led_1 decode_data_0 i0 lut_out", false,-1, 7,0);
        tracep->declBit(c+58,"soc_riscv_zhoutao_top digital_led_1 decode_data_0 i0 hit", false,-1);
        tracep->declBus(c+486,"soc_riscv_zhoutao_top digital_led_1 decode_data_0 i0 i", false,-1, 31,0);
        tracep->declBus(c+474,"soc_riscv_zhoutao_top digital_led_1 decode_data_1 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+475,"soc_riscv_zhoutao_top digital_led_1 decode_data_1 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+476,"soc_riscv_zhoutao_top digital_led_1 decode_data_1 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+2,"soc_riscv_zhoutao_top digital_led_1 decode_data_1 out", false,-1, 7,0);
        tracep->declBus(c+468,"soc_riscv_zhoutao_top digital_led_1 decode_data_1 key", false,-1, 3,0);
        tracep->declArray(c+477,"soc_riscv_zhoutao_top digital_led_1 decode_data_1 lut", false,-1, 191,0);
        tracep->declBus(c+474,"soc_riscv_zhoutao_top digital_led_1 decode_data_1 i0 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+475,"soc_riscv_zhoutao_top digital_led_1 decode_data_1 i0 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+476,"soc_riscv_zhoutao_top digital_led_1 decode_data_1 i0 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+483,"soc_riscv_zhoutao_top digital_led_1 decode_data_1 i0 HAS_DEFAULT", false,-1, 31,0);
        tracep->declBus(c+2,"soc_riscv_zhoutao_top digital_led_1 decode_data_1 i0 out", false,-1, 7,0);
        tracep->declBus(c+468,"soc_riscv_zhoutao_top digital_led_1 decode_data_1 i0 key", false,-1, 3,0);
        tracep->declBus(c+484,"soc_riscv_zhoutao_top digital_led_1 decode_data_1 i0 default_out", false,-1, 7,0);
        tracep->declArray(c+477,"soc_riscv_zhoutao_top digital_led_1 decode_data_1 i0 lut", false,-1, 191,0);
        tracep->declBus(c+485,"soc_riscv_zhoutao_top digital_led_1 decode_data_1 i0 PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<16; i++) {
                tracep->declBus(c+59+i*1,"soc_riscv_zhoutao_top digital_led_1 decode_data_1 i0 pair_list", true,(i+0), 11,0);}}
        {int i; for (i=0; i<16; i++) {
                tracep->declBus(c+75+i*1,"soc_riscv_zhoutao_top digital_led_1 decode_data_1 i0 key_list", true,(i+0), 3,0);}}
        {int i; for (i=0; i<16; i++) {
                tracep->declBus(c+91+i*1,"soc_riscv_zhoutao_top digital_led_1 decode_data_1 i0 data_list", true,(i+0), 7,0);}}
        tracep->declBus(c+107,"soc_riscv_zhoutao_top digital_led_1 decode_data_1 i0 lut_out", false,-1, 7,0);
        tracep->declBit(c+108,"soc_riscv_zhoutao_top digital_led_1 decode_data_1 i0 hit", false,-1);
        tracep->declBus(c+486,"soc_riscv_zhoutao_top digital_led_1 decode_data_1 i0 i", false,-1, 31,0);
        tracep->declBus(c+474,"soc_riscv_zhoutao_top digital_led_1 decode_data_2 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+475,"soc_riscv_zhoutao_top digital_led_1 decode_data_2 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+476,"soc_riscv_zhoutao_top digital_led_1 decode_data_2 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+3,"soc_riscv_zhoutao_top digital_led_1 decode_data_2 out", false,-1, 7,0);
        tracep->declBus(c+467,"soc_riscv_zhoutao_top digital_led_1 decode_data_2 key", false,-1, 3,0);
        tracep->declArray(c+477,"soc_riscv_zhoutao_top digital_led_1 decode_data_2 lut", false,-1, 191,0);
        tracep->declBus(c+474,"soc_riscv_zhoutao_top digital_led_1 decode_data_2 i0 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+475,"soc_riscv_zhoutao_top digital_led_1 decode_data_2 i0 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+476,"soc_riscv_zhoutao_top digital_led_1 decode_data_2 i0 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+483,"soc_riscv_zhoutao_top digital_led_1 decode_data_2 i0 HAS_DEFAULT", false,-1, 31,0);
        tracep->declBus(c+3,"soc_riscv_zhoutao_top digital_led_1 decode_data_2 i0 out", false,-1, 7,0);
        tracep->declBus(c+467,"soc_riscv_zhoutao_top digital_led_1 decode_data_2 i0 key", false,-1, 3,0);
        tracep->declBus(c+484,"soc_riscv_zhoutao_top digital_led_1 decode_data_2 i0 default_out", false,-1, 7,0);
        tracep->declArray(c+477,"soc_riscv_zhoutao_top digital_led_1 decode_data_2 i0 lut", false,-1, 191,0);
        tracep->declBus(c+485,"soc_riscv_zhoutao_top digital_led_1 decode_data_2 i0 PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<16; i++) {
                tracep->declBus(c+109+i*1,"soc_riscv_zhoutao_top digital_led_1 decode_data_2 i0 pair_list", true,(i+0), 11,0);}}
        {int i; for (i=0; i<16; i++) {
                tracep->declBus(c+125+i*1,"soc_riscv_zhoutao_top digital_led_1 decode_data_2 i0 key_list", true,(i+0), 3,0);}}
        {int i; for (i=0; i<16; i++) {
                tracep->declBus(c+141+i*1,"soc_riscv_zhoutao_top digital_led_1 decode_data_2 i0 data_list", true,(i+0), 7,0);}}
        tracep->declBus(c+157,"soc_riscv_zhoutao_top digital_led_1 decode_data_2 i0 lut_out", false,-1, 7,0);
        tracep->declBit(c+158,"soc_riscv_zhoutao_top digital_led_1 decode_data_2 i0 hit", false,-1);
        tracep->declBus(c+486,"soc_riscv_zhoutao_top digital_led_1 decode_data_2 i0 i", false,-1, 31,0);
        tracep->declBus(c+474,"soc_riscv_zhoutao_top digital_led_1 decode_data_3 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+475,"soc_riscv_zhoutao_top digital_led_1 decode_data_3 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+476,"soc_riscv_zhoutao_top digital_led_1 decode_data_3 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+4,"soc_riscv_zhoutao_top digital_led_1 decode_data_3 out", false,-1, 7,0);
        tracep->declBus(c+473,"soc_riscv_zhoutao_top digital_led_1 decode_data_3 key", false,-1, 3,0);
        tracep->declArray(c+477,"soc_riscv_zhoutao_top digital_led_1 decode_data_3 lut", false,-1, 191,0);
        tracep->declBus(c+474,"soc_riscv_zhoutao_top digital_led_1 decode_data_3 i0 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+475,"soc_riscv_zhoutao_top digital_led_1 decode_data_3 i0 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+476,"soc_riscv_zhoutao_top digital_led_1 decode_data_3 i0 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+483,"soc_riscv_zhoutao_top digital_led_1 decode_data_3 i0 HAS_DEFAULT", false,-1, 31,0);
        tracep->declBus(c+4,"soc_riscv_zhoutao_top digital_led_1 decode_data_3 i0 out", false,-1, 7,0);
        tracep->declBus(c+473,"soc_riscv_zhoutao_top digital_led_1 decode_data_3 i0 key", false,-1, 3,0);
        tracep->declBus(c+484,"soc_riscv_zhoutao_top digital_led_1 decode_data_3 i0 default_out", false,-1, 7,0);
        tracep->declArray(c+477,"soc_riscv_zhoutao_top digital_led_1 decode_data_3 i0 lut", false,-1, 191,0);
        tracep->declBus(c+485,"soc_riscv_zhoutao_top digital_led_1 decode_data_3 i0 PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<16; i++) {
                tracep->declBus(c+159+i*1,"soc_riscv_zhoutao_top digital_led_1 decode_data_3 i0 pair_list", true,(i+0), 11,0);}}
        {int i; for (i=0; i<16; i++) {
                tracep->declBus(c+175+i*1,"soc_riscv_zhoutao_top digital_led_1 decode_data_3 i0 key_list", true,(i+0), 3,0);}}
        {int i; for (i=0; i<16; i++) {
                tracep->declBus(c+191+i*1,"soc_riscv_zhoutao_top digital_led_1 decode_data_3 i0 data_list", true,(i+0), 7,0);}}
        tracep->declBus(c+207,"soc_riscv_zhoutao_top digital_led_1 decode_data_3 i0 lut_out", false,-1, 7,0);
        tracep->declBit(c+208,"soc_riscv_zhoutao_top digital_led_1 decode_data_3 i0 hit", false,-1);
        tracep->declBus(c+486,"soc_riscv_zhoutao_top digital_led_1 decode_data_3 i0 i", false,-1, 31,0);
        tracep->declBus(c+474,"soc_riscv_zhoutao_top digital_led_1 decode_data_4 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+475,"soc_riscv_zhoutao_top digital_led_1 decode_data_4 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+476,"soc_riscv_zhoutao_top digital_led_1 decode_data_4 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+5,"soc_riscv_zhoutao_top digital_led_1 decode_data_4 out", false,-1, 7,0);
        tracep->declBus(c+461,"soc_riscv_zhoutao_top digital_led_1 decode_data_4 key", false,-1, 3,0);
        tracep->declArray(c+477,"soc_riscv_zhoutao_top digital_led_1 decode_data_4 lut", false,-1, 191,0);
        tracep->declBus(c+474,"soc_riscv_zhoutao_top digital_led_1 decode_data_4 i0 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+475,"soc_riscv_zhoutao_top digital_led_1 decode_data_4 i0 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+476,"soc_riscv_zhoutao_top digital_led_1 decode_data_4 i0 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+483,"soc_riscv_zhoutao_top digital_led_1 decode_data_4 i0 HAS_DEFAULT", false,-1, 31,0);
        tracep->declBus(c+5,"soc_riscv_zhoutao_top digital_led_1 decode_data_4 i0 out", false,-1, 7,0);
        tracep->declBus(c+461,"soc_riscv_zhoutao_top digital_led_1 decode_data_4 i0 key", false,-1, 3,0);
        tracep->declBus(c+484,"soc_riscv_zhoutao_top digital_led_1 decode_data_4 i0 default_out", false,-1, 7,0);
        tracep->declArray(c+477,"soc_riscv_zhoutao_top digital_led_1 decode_data_4 i0 lut", false,-1, 191,0);
        tracep->declBus(c+485,"soc_riscv_zhoutao_top digital_led_1 decode_data_4 i0 PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<16; i++) {
                tracep->declBus(c+209+i*1,"soc_riscv_zhoutao_top digital_led_1 decode_data_4 i0 pair_list", true,(i+0), 11,0);}}
        {int i; for (i=0; i<16; i++) {
                tracep->declBus(c+225+i*1,"soc_riscv_zhoutao_top digital_led_1 decode_data_4 i0 key_list", true,(i+0), 3,0);}}
        {int i; for (i=0; i<16; i++) {
                tracep->declBus(c+241+i*1,"soc_riscv_zhoutao_top digital_led_1 decode_data_4 i0 data_list", true,(i+0), 7,0);}}
        tracep->declBus(c+257,"soc_riscv_zhoutao_top digital_led_1 decode_data_4 i0 lut_out", false,-1, 7,0);
        tracep->declBit(c+258,"soc_riscv_zhoutao_top digital_led_1 decode_data_4 i0 hit", false,-1);
        tracep->declBus(c+486,"soc_riscv_zhoutao_top digital_led_1 decode_data_4 i0 i", false,-1, 31,0);
        tracep->declBus(c+474,"soc_riscv_zhoutao_top digital_led_1 decode_data_5 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+475,"soc_riscv_zhoutao_top digital_led_1 decode_data_5 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+476,"soc_riscv_zhoutao_top digital_led_1 decode_data_5 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+6,"soc_riscv_zhoutao_top digital_led_1 decode_data_5 out", false,-1, 7,0);
        tracep->declBus(c+460,"soc_riscv_zhoutao_top digital_led_1 decode_data_5 key", false,-1, 3,0);
        tracep->declArray(c+477,"soc_riscv_zhoutao_top digital_led_1 decode_data_5 lut", false,-1, 191,0);
        tracep->declBus(c+474,"soc_riscv_zhoutao_top digital_led_1 decode_data_5 i0 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+475,"soc_riscv_zhoutao_top digital_led_1 decode_data_5 i0 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+476,"soc_riscv_zhoutao_top digital_led_1 decode_data_5 i0 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+483,"soc_riscv_zhoutao_top digital_led_1 decode_data_5 i0 HAS_DEFAULT", false,-1, 31,0);
        tracep->declBus(c+6,"soc_riscv_zhoutao_top digital_led_1 decode_data_5 i0 out", false,-1, 7,0);
        tracep->declBus(c+460,"soc_riscv_zhoutao_top digital_led_1 decode_data_5 i0 key", false,-1, 3,0);
        tracep->declBus(c+484,"soc_riscv_zhoutao_top digital_led_1 decode_data_5 i0 default_out", false,-1, 7,0);
        tracep->declArray(c+477,"soc_riscv_zhoutao_top digital_led_1 decode_data_5 i0 lut", false,-1, 191,0);
        tracep->declBus(c+485,"soc_riscv_zhoutao_top digital_led_1 decode_data_5 i0 PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<16; i++) {
                tracep->declBus(c+259+i*1,"soc_riscv_zhoutao_top digital_led_1 decode_data_5 i0 pair_list", true,(i+0), 11,0);}}
        {int i; for (i=0; i<16; i++) {
                tracep->declBus(c+275+i*1,"soc_riscv_zhoutao_top digital_led_1 decode_data_5 i0 key_list", true,(i+0), 3,0);}}
        {int i; for (i=0; i<16; i++) {
                tracep->declBus(c+291+i*1,"soc_riscv_zhoutao_top digital_led_1 decode_data_5 i0 data_list", true,(i+0), 7,0);}}
        tracep->declBus(c+307,"soc_riscv_zhoutao_top digital_led_1 decode_data_5 i0 lut_out", false,-1, 7,0);
        tracep->declBit(c+308,"soc_riscv_zhoutao_top digital_led_1 decode_data_5 i0 hit", false,-1);
        tracep->declBus(c+486,"soc_riscv_zhoutao_top digital_led_1 decode_data_5 i0 i", false,-1, 31,0);
        tracep->declBus(c+474,"soc_riscv_zhoutao_top digital_led_1 decode_data_6 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+475,"soc_riscv_zhoutao_top digital_led_1 decode_data_6 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+476,"soc_riscv_zhoutao_top digital_led_1 decode_data_6 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+7,"soc_riscv_zhoutao_top digital_led_1 decode_data_6 out", false,-1, 7,0);
        tracep->declBus(c+459,"soc_riscv_zhoutao_top digital_led_1 decode_data_6 key", false,-1, 3,0);
        tracep->declArray(c+477,"soc_riscv_zhoutao_top digital_led_1 decode_data_6 lut", false,-1, 191,0);
        tracep->declBus(c+474,"soc_riscv_zhoutao_top digital_led_1 decode_data_6 i0 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+475,"soc_riscv_zhoutao_top digital_led_1 decode_data_6 i0 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+476,"soc_riscv_zhoutao_top digital_led_1 decode_data_6 i0 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+483,"soc_riscv_zhoutao_top digital_led_1 decode_data_6 i0 HAS_DEFAULT", false,-1, 31,0);
        tracep->declBus(c+7,"soc_riscv_zhoutao_top digital_led_1 decode_data_6 i0 out", false,-1, 7,0);
        tracep->declBus(c+459,"soc_riscv_zhoutao_top digital_led_1 decode_data_6 i0 key", false,-1, 3,0);
        tracep->declBus(c+484,"soc_riscv_zhoutao_top digital_led_1 decode_data_6 i0 default_out", false,-1, 7,0);
        tracep->declArray(c+477,"soc_riscv_zhoutao_top digital_led_1 decode_data_6 i0 lut", false,-1, 191,0);
        tracep->declBus(c+485,"soc_riscv_zhoutao_top digital_led_1 decode_data_6 i0 PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<16; i++) {
                tracep->declBus(c+309+i*1,"soc_riscv_zhoutao_top digital_led_1 decode_data_6 i0 pair_list", true,(i+0), 11,0);}}
        {int i; for (i=0; i<16; i++) {
                tracep->declBus(c+325+i*1,"soc_riscv_zhoutao_top digital_led_1 decode_data_6 i0 key_list", true,(i+0), 3,0);}}
        {int i; for (i=0; i<16; i++) {
                tracep->declBus(c+341+i*1,"soc_riscv_zhoutao_top digital_led_1 decode_data_6 i0 data_list", true,(i+0), 7,0);}}
        tracep->declBus(c+357,"soc_riscv_zhoutao_top digital_led_1 decode_data_6 i0 lut_out", false,-1, 7,0);
        tracep->declBit(c+358,"soc_riscv_zhoutao_top digital_led_1 decode_data_6 i0 hit", false,-1);
        tracep->declBus(c+486,"soc_riscv_zhoutao_top digital_led_1 decode_data_6 i0 i", false,-1, 31,0);
        tracep->declBus(c+474,"soc_riscv_zhoutao_top digital_led_1 decode_data_7 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+475,"soc_riscv_zhoutao_top digital_led_1 decode_data_7 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+476,"soc_riscv_zhoutao_top digital_led_1 decode_data_7 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+8,"soc_riscv_zhoutao_top digital_led_1 decode_data_7 out", false,-1, 7,0);
        tracep->declBus(c+458,"soc_riscv_zhoutao_top digital_led_1 decode_data_7 key", false,-1, 3,0);
        tracep->declArray(c+477,"soc_riscv_zhoutao_top digital_led_1 decode_data_7 lut", false,-1, 191,0);
        tracep->declBus(c+474,"soc_riscv_zhoutao_top digital_led_1 decode_data_7 i0 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+475,"soc_riscv_zhoutao_top digital_led_1 decode_data_7 i0 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+476,"soc_riscv_zhoutao_top digital_led_1 decode_data_7 i0 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+483,"soc_riscv_zhoutao_top digital_led_1 decode_data_7 i0 HAS_DEFAULT", false,-1, 31,0);
        tracep->declBus(c+8,"soc_riscv_zhoutao_top digital_led_1 decode_data_7 i0 out", false,-1, 7,0);
        tracep->declBus(c+458,"soc_riscv_zhoutao_top digital_led_1 decode_data_7 i0 key", false,-1, 3,0);
        tracep->declBus(c+484,"soc_riscv_zhoutao_top digital_led_1 decode_data_7 i0 default_out", false,-1, 7,0);
        tracep->declArray(c+477,"soc_riscv_zhoutao_top digital_led_1 decode_data_7 i0 lut", false,-1, 191,0);
        tracep->declBus(c+485,"soc_riscv_zhoutao_top digital_led_1 decode_data_7 i0 PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<16; i++) {
                tracep->declBus(c+359+i*1,"soc_riscv_zhoutao_top digital_led_1 decode_data_7 i0 pair_list", true,(i+0), 11,0);}}
        {int i; for (i=0; i<16; i++) {
                tracep->declBus(c+375+i*1,"soc_riscv_zhoutao_top digital_led_1 decode_data_7 i0 key_list", true,(i+0), 3,0);}}
        {int i; for (i=0; i<16; i++) {
                tracep->declBus(c+391+i*1,"soc_riscv_zhoutao_top digital_led_1 decode_data_7 i0 data_list", true,(i+0), 7,0);}}
        tracep->declBus(c+407,"soc_riscv_zhoutao_top digital_led_1 decode_data_7 i0 lut_out", false,-1, 7,0);
        tracep->declBit(c+408,"soc_riscv_zhoutao_top digital_led_1 decode_data_7 i0 hit", false,-1);
        tracep->declBus(c+486,"soc_riscv_zhoutao_top digital_led_1 decode_data_7 i0 i", false,-1, 31,0);
    }
}

void Vsoc_riscv_zhoutao_top___024root__traceFullTop0(void* voidSelf, VerilatedVcd* tracep) VL_ATTR_COLD;
void Vsoc_riscv_zhoutao_top___024root__traceChgTop0(void* voidSelf, VerilatedVcd* tracep);
void Vsoc_riscv_zhoutao_top___024root__traceCleanup(void* voidSelf, VerilatedVcd* /*unused*/);

void Vsoc_riscv_zhoutao_top___024root__traceRegister(Vsoc_riscv_zhoutao_top___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vsoc_riscv_zhoutao_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        tracep->addFullCb(&Vsoc_riscv_zhoutao_top___024root__traceFullTop0, vlSelf);
        tracep->addChgCb(&Vsoc_riscv_zhoutao_top___024root__traceChgTop0, vlSelf);
        tracep->addCleanupCb(&Vsoc_riscv_zhoutao_top___024root__traceCleanup, vlSelf);
    }
}

void Vsoc_riscv_zhoutao_top___024root__traceFullSub0(Vsoc_riscv_zhoutao_top___024root* vlSelf, VerilatedVcd* tracep) VL_ATTR_COLD;

void Vsoc_riscv_zhoutao_top___024root__traceFullTop0(void* voidSelf, VerilatedVcd* tracep) {
    Vsoc_riscv_zhoutao_top___024root* const __restrict vlSelf = static_cast<Vsoc_riscv_zhoutao_top___024root*>(voidSelf);
    Vsoc_riscv_zhoutao_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        Vsoc_riscv_zhoutao_top___024root__traceFullSub0((&vlSymsp->TOP), tracep);
    }
}

void Vsoc_riscv_zhoutao_top___024root__traceFullSub0(Vsoc_riscv_zhoutao_top___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vsoc_riscv_zhoutao_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VlWide<6>/*191:0*/ __Vtemp511;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->fullCData(oldp+1,(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__seg0_line),8);
        tracep->fullCData(oldp+2,(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__seg1_line),8);
        tracep->fullCData(oldp+3,(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__seg2_line),8);
        tracep->fullCData(oldp+4,(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__seg3_line),8);
        tracep->fullCData(oldp+5,(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__seg4_line),8);
        tracep->fullCData(oldp+6,(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__seg5_line),8);
        tracep->fullCData(oldp+7,(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__seg6_line),8);
        tracep->fullCData(oldp+8,(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__seg7_line),8);
        tracep->fullSData(oldp+9,(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_0__DOT__i0__DOT__pair_list[0]),12);
        tracep->fullSData(oldp+10,(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_0__DOT__i0__DOT__pair_list[1]),12);
        tracep->fullSData(oldp+11,(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_0__DOT__i0__DOT__pair_list[2]),12);
        tracep->fullSData(oldp+12,(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_0__DOT__i0__DOT__pair_list[3]),12);
        tracep->fullSData(oldp+13,(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_0__DOT__i0__DOT__pair_list[4]),12);
        tracep->fullSData(oldp+14,(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_0__DOT__i0__DOT__pair_list[5]),12);
        tracep->fullSData(oldp+15,(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_0__DOT__i0__DOT__pair_list[6]),12);
        tracep->fullSData(oldp+16,(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_0__DOT__i0__DOT__pair_list[7]),12);
        tracep->fullSData(oldp+17,(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_0__DOT__i0__DOT__pair_list[8]),12);
        tracep->fullSData(oldp+18,(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_0__DOT__i0__DOT__pair_list[9]),12);
        tracep->fullSData(oldp+19,(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_0__DOT__i0__DOT__pair_list[10]),12);
        tracep->fullSData(oldp+20,(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_0__DOT__i0__DOT__pair_list[11]),12);
        tracep->fullSData(oldp+21,(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_0__DOT__i0__DOT__pair_list[12]),12);
        tracep->fullSData(oldp+22,(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_0__DOT__i0__DOT__pair_list[13]),12);
        tracep->fullSData(oldp+23,(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_0__DOT__i0__DOT__pair_list[14]),12);
        tracep->fullSData(oldp+24,(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_0__DOT__i0__DOT__pair_list[15]),12);
        tracep->fullCData(oldp+25,(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_0__DOT__i0__DOT__key_list[0]),4);
        tracep->fullCData(oldp+26,(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_0__DOT__i0__DOT__key_list[1]),4);
        tracep->fullCData(oldp+27,(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_0__DOT__i0__DOT__key_list[2]),4);
        tracep->fullCData(oldp+28,(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_0__DOT__i0__DOT__key_list[3]),4);
        tracep->fullCData(oldp+29,(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_0__DOT__i0__DOT__key_list[4]),4);
        tracep->fullCData(oldp+30,(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_0__DOT__i0__DOT__key_list[5]),4);
        tracep->fullCData(oldp+31,(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_0__DOT__i0__DOT__key_list[6]),4);
        tracep->fullCData(oldp+32,(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_0__DOT__i0__DOT__key_list[7]),4);
        tracep->fullCData(oldp+33,(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_0__DOT__i0__DOT__key_list[8]),4);
        tracep->fullCData(oldp+34,(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_0__DOT__i0__DOT__key_list[9]),4);
        tracep->fullCData(oldp+35,(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_0__DOT__i0__DOT__key_list[10]),4);
        tracep->fullCData(oldp+36,(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_0__DOT__i0__DOT__key_list[11]),4);
        tracep->fullCData(oldp+37,(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_0__DOT__i0__DOT__key_list[12]),4);
        tracep->fullCData(oldp+38,(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_0__DOT__i0__DOT__key_list[13]),4);
        tracep->fullCData(oldp+39,(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_0__DOT__i0__DOT__key_list[14]),4);
        tracep->fullCData(oldp+40,(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_0__DOT__i0__DOT__key_list[15]),4);
        tracep->fullCData(oldp+41,(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_0__DOT__i0__DOT__data_list[0]),8);
        tracep->fullCData(oldp+42,(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_0__DOT__i0__DOT__data_list[1]),8);
        tracep->fullCData(oldp+43,(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_0__DOT__i0__DOT__data_list[2]),8);
        tracep->fullCData(oldp+44,(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_0__DOT__i0__DOT__data_list[3]),8);
        tracep->fullCData(oldp+45,(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_0__DOT__i0__DOT__data_list[4]),8);
        tracep->fullCData(oldp+46,(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_0__DOT__i0__DOT__data_list[5]),8);
        tracep->fullCData(oldp+47,(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_0__DOT__i0__DOT__data_list[6]),8);
        tracep->fullCData(oldp+48,(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_0__DOT__i0__DOT__data_list[7]),8);
        tracep->fullCData(oldp+49,(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_0__DOT__i0__DOT__data_list[8]),8);
        tracep->fullCData(oldp+50,(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_0__DOT__i0__DOT__data_list[9]),8);
        tracep->fullCData(oldp+51,(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_0__DOT__i0__DOT__data_list[10]),8);
        tracep->fullCData(oldp+52,(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_0__DOT__i0__DOT__data_list[11]),8);
        tracep->fullCData(oldp+53,(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_0__DOT__i0__DOT__data_list[12]),8);
        tracep->fullCData(oldp+54,(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_0__DOT__i0__DOT__data_list[13]),8);
        tracep->fullCData(oldp+55,(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_0__DOT__i0__DOT__data_list[14]),8);
        tracep->fullCData(oldp+56,(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_0__DOT__i0__DOT__data_list[15]),8);
        tracep->fullCData(oldp+57,(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_0__DOT__i0__DOT__lut_out),8);
        tracep->fullBit(oldp+58,(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_0__DOT__i0__DOT__hit));
        tracep->fullSData(oldp+59,(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_1__DOT__i0__DOT__pair_list[0]),12);
        tracep->fullSData(oldp+60,(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_1__DOT__i0__DOT__pair_list[1]),12);
        tracep->fullSData(oldp+61,(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_1__DOT__i0__DOT__pair_list[2]),12);
        tracep->fullSData(oldp+62,(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_1__DOT__i0__DOT__pair_list[3]),12);
        tracep->fullSData(oldp+63,(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_1__DOT__i0__DOT__pair_list[4]),12);
        tracep->fullSData(oldp+64,(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_1__DOT__i0__DOT__pair_list[5]),12);
        tracep->fullSData(oldp+65,(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_1__DOT__i0__DOT__pair_list[6]),12);
        tracep->fullSData(oldp+66,(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_1__DOT__i0__DOT__pair_list[7]),12);
        tracep->fullSData(oldp+67,(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_1__DOT__i0__DOT__pair_list[8]),12);
        tracep->fullSData(oldp+68,(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_1__DOT__i0__DOT__pair_list[9]),12);
        tracep->fullSData(oldp+69,(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_1__DOT__i0__DOT__pair_list[10]),12);
        tracep->fullSData(oldp+70,(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_1__DOT__i0__DOT__pair_list[11]),12);
        tracep->fullSData(oldp+71,(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_1__DOT__i0__DOT__pair_list[12]),12);
        tracep->fullSData(oldp+72,(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_1__DOT__i0__DOT__pair_list[13]),12);
        tracep->fullSData(oldp+73,(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_1__DOT__i0__DOT__pair_list[14]),12);
        tracep->fullSData(oldp+74,(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_1__DOT__i0__DOT__pair_list[15]),12);
        tracep->fullCData(oldp+75,(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_1__DOT__i0__DOT__key_list[0]),4);
        tracep->fullCData(oldp+76,(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_1__DOT__i0__DOT__key_list[1]),4);
        tracep->fullCData(oldp+77,(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_1__DOT__i0__DOT__key_list[2]),4);
        tracep->fullCData(oldp+78,(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_1__DOT__i0__DOT__key_list[3]),4);
        tracep->fullCData(oldp+79,(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_1__DOT__i0__DOT__key_list[4]),4);
        tracep->fullCData(oldp+80,(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_1__DOT__i0__DOT__key_list[5]),4);
        tracep->fullCData(oldp+81,(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_1__DOT__i0__DOT__key_list[6]),4);
        tracep->fullCData(oldp+82,(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_1__DOT__i0__DOT__key_list[7]),4);
        tracep->fullCData(oldp+83,(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_1__DOT__i0__DOT__key_list[8]),4);
        tracep->fullCData(oldp+84,(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_1__DOT__i0__DOT__key_list[9]),4);
        tracep->fullCData(oldp+85,(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_1__DOT__i0__DOT__key_list[10]),4);
        tracep->fullCData(oldp+86,(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_1__DOT__i0__DOT__key_list[11]),4);
        tracep->fullCData(oldp+87,(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_1__DOT__i0__DOT__key_list[12]),4);
        tracep->fullCData(oldp+88,(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_1__DOT__i0__DOT__key_list[13]),4);
        tracep->fullCData(oldp+89,(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_1__DOT__i0__DOT__key_list[14]),4);
        tracep->fullCData(oldp+90,(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_1__DOT__i0__DOT__key_list[15]),4);
        tracep->fullCData(oldp+91,(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_1__DOT__i0__DOT__data_list[0]),8);
        tracep->fullCData(oldp+92,(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_1__DOT__i0__DOT__data_list[1]),8);
        tracep->fullCData(oldp+93,(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_1__DOT__i0__DOT__data_list[2]),8);
        tracep->fullCData(oldp+94,(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_1__DOT__i0__DOT__data_list[3]),8);
        tracep->fullCData(oldp+95,(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_1__DOT__i0__DOT__data_list[4]),8);
        tracep->fullCData(oldp+96,(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_1__DOT__i0__DOT__data_list[5]),8);
        tracep->fullCData(oldp+97,(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_1__DOT__i0__DOT__data_list[6]),8);
        tracep->fullCData(oldp+98,(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_1__DOT__i0__DOT__data_list[7]),8);
        tracep->fullCData(oldp+99,(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_1__DOT__i0__DOT__data_list[8]),8);
        tracep->fullCData(oldp+100,(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_1__DOT__i0__DOT__data_list[9]),8);
        tracep->fullCData(oldp+101,(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_1__DOT__i0__DOT__data_list[10]),8);
        tracep->fullCData(oldp+102,(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_1__DOT__i0__DOT__data_list[11]),8);
        tracep->fullCData(oldp+103,(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_1__DOT__i0__DOT__data_list[12]),8);
        tracep->fullCData(oldp+104,(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_1__DOT__i0__DOT__data_list[13]),8);
        tracep->fullCData(oldp+105,(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_1__DOT__i0__DOT__data_list[14]),8);
        tracep->fullCData(oldp+106,(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_1__DOT__i0__DOT__data_list[15]),8);
        tracep->fullCData(oldp+107,(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_1__DOT__i0__DOT__lut_out),8);
        tracep->fullBit(oldp+108,(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_1__DOT__i0__DOT__hit));
        tracep->fullSData(oldp+109,(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_2__DOT__i0__DOT__pair_list[0]),12);
        tracep->fullSData(oldp+110,(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_2__DOT__i0__DOT__pair_list[1]),12);
        tracep->fullSData(oldp+111,(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_2__DOT__i0__DOT__pair_list[2]),12);
        tracep->fullSData(oldp+112,(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_2__DOT__i0__DOT__pair_list[3]),12);
        tracep->fullSData(oldp+113,(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_2__DOT__i0__DOT__pair_list[4]),12);
        tracep->fullSData(oldp+114,(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_2__DOT__i0__DOT__pair_list[5]),12);
        tracep->fullSData(oldp+115,(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_2__DOT__i0__DOT__pair_list[6]),12);
        tracep->fullSData(oldp+116,(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_2__DOT__i0__DOT__pair_list[7]),12);
        tracep->fullSData(oldp+117,(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_2__DOT__i0__DOT__pair_list[8]),12);
        tracep->fullSData(oldp+118,(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_2__DOT__i0__DOT__pair_list[9]),12);
        tracep->fullSData(oldp+119,(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_2__DOT__i0__DOT__pair_list[10]),12);
        tracep->fullSData(oldp+120,(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_2__DOT__i0__DOT__pair_list[11]),12);
        tracep->fullSData(oldp+121,(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_2__DOT__i0__DOT__pair_list[12]),12);
        tracep->fullSData(oldp+122,(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_2__DOT__i0__DOT__pair_list[13]),12);
        tracep->fullSData(oldp+123,(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_2__DOT__i0__DOT__pair_list[14]),12);
        tracep->fullSData(oldp+124,(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_2__DOT__i0__DOT__pair_list[15]),12);
        tracep->fullCData(oldp+125,(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_2__DOT__i0__DOT__key_list[0]),4);
        tracep->fullCData(oldp+126,(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_2__DOT__i0__DOT__key_list[1]),4);
        tracep->fullCData(oldp+127,(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_2__DOT__i0__DOT__key_list[2]),4);
        tracep->fullCData(oldp+128,(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_2__DOT__i0__DOT__key_list[3]),4);
        tracep->fullCData(oldp+129,(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_2__DOT__i0__DOT__key_list[4]),4);
        tracep->fullCData(oldp+130,(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_2__DOT__i0__DOT__key_list[5]),4);
        tracep->fullCData(oldp+131,(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_2__DOT__i0__DOT__key_list[6]),4);
        tracep->fullCData(oldp+132,(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_2__DOT__i0__DOT__key_list[7]),4);
        tracep->fullCData(oldp+133,(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_2__DOT__i0__DOT__key_list[8]),4);
        tracep->fullCData(oldp+134,(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_2__DOT__i0__DOT__key_list[9]),4);
        tracep->fullCData(oldp+135,(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_2__DOT__i0__DOT__key_list[10]),4);
        tracep->fullCData(oldp+136,(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_2__DOT__i0__DOT__key_list[11]),4);
        tracep->fullCData(oldp+137,(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_2__DOT__i0__DOT__key_list[12]),4);
        tracep->fullCData(oldp+138,(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_2__DOT__i0__DOT__key_list[13]),4);
        tracep->fullCData(oldp+139,(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_2__DOT__i0__DOT__key_list[14]),4);
        tracep->fullCData(oldp+140,(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_2__DOT__i0__DOT__key_list[15]),4);
        tracep->fullCData(oldp+141,(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_2__DOT__i0__DOT__data_list[0]),8);
        tracep->fullCData(oldp+142,(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_2__DOT__i0__DOT__data_list[1]),8);
        tracep->fullCData(oldp+143,(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_2__DOT__i0__DOT__data_list[2]),8);
        tracep->fullCData(oldp+144,(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_2__DOT__i0__DOT__data_list[3]),8);
        tracep->fullCData(oldp+145,(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_2__DOT__i0__DOT__data_list[4]),8);
        tracep->fullCData(oldp+146,(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_2__DOT__i0__DOT__data_list[5]),8);
        tracep->fullCData(oldp+147,(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_2__DOT__i0__DOT__data_list[6]),8);
        tracep->fullCData(oldp+148,(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_2__DOT__i0__DOT__data_list[7]),8);
        tracep->fullCData(oldp+149,(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_2__DOT__i0__DOT__data_list[8]),8);
        tracep->fullCData(oldp+150,(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_2__DOT__i0__DOT__data_list[9]),8);
        tracep->fullCData(oldp+151,(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_2__DOT__i0__DOT__data_list[10]),8);
        tracep->fullCData(oldp+152,(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_2__DOT__i0__DOT__data_list[11]),8);
        tracep->fullCData(oldp+153,(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_2__DOT__i0__DOT__data_list[12]),8);
        tracep->fullCData(oldp+154,(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_2__DOT__i0__DOT__data_list[13]),8);
        tracep->fullCData(oldp+155,(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_2__DOT__i0__DOT__data_list[14]),8);
        tracep->fullCData(oldp+156,(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_2__DOT__i0__DOT__data_list[15]),8);
        tracep->fullCData(oldp+157,(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_2__DOT__i0__DOT__lut_out),8);
        tracep->fullBit(oldp+158,(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_2__DOT__i0__DOT__hit));
        tracep->fullSData(oldp+159,(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_3__DOT__i0__DOT__pair_list[0]),12);
        tracep->fullSData(oldp+160,(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_3__DOT__i0__DOT__pair_list[1]),12);
        tracep->fullSData(oldp+161,(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_3__DOT__i0__DOT__pair_list[2]),12);
        tracep->fullSData(oldp+162,(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_3__DOT__i0__DOT__pair_list[3]),12);
        tracep->fullSData(oldp+163,(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_3__DOT__i0__DOT__pair_list[4]),12);
        tracep->fullSData(oldp+164,(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_3__DOT__i0__DOT__pair_list[5]),12);
        tracep->fullSData(oldp+165,(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_3__DOT__i0__DOT__pair_list[6]),12);
        tracep->fullSData(oldp+166,(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_3__DOT__i0__DOT__pair_list[7]),12);
        tracep->fullSData(oldp+167,(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_3__DOT__i0__DOT__pair_list[8]),12);
        tracep->fullSData(oldp+168,(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_3__DOT__i0__DOT__pair_list[9]),12);
        tracep->fullSData(oldp+169,(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_3__DOT__i0__DOT__pair_list[10]),12);
        tracep->fullSData(oldp+170,(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_3__DOT__i0__DOT__pair_list[11]),12);
        tracep->fullSData(oldp+171,(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_3__DOT__i0__DOT__pair_list[12]),12);
        tracep->fullSData(oldp+172,(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_3__DOT__i0__DOT__pair_list[13]),12);
        tracep->fullSData(oldp+173,(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_3__DOT__i0__DOT__pair_list[14]),12);
        tracep->fullSData(oldp+174,(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_3__DOT__i0__DOT__pair_list[15]),12);
        tracep->fullCData(oldp+175,(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_3__DOT__i0__DOT__key_list[0]),4);
        tracep->fullCData(oldp+176,(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_3__DOT__i0__DOT__key_list[1]),4);
        tracep->fullCData(oldp+177,(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_3__DOT__i0__DOT__key_list[2]),4);
        tracep->fullCData(oldp+178,(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_3__DOT__i0__DOT__key_list[3]),4);
        tracep->fullCData(oldp+179,(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_3__DOT__i0__DOT__key_list[4]),4);
        tracep->fullCData(oldp+180,(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_3__DOT__i0__DOT__key_list[5]),4);
        tracep->fullCData(oldp+181,(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_3__DOT__i0__DOT__key_list[6]),4);
        tracep->fullCData(oldp+182,(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_3__DOT__i0__DOT__key_list[7]),4);
        tracep->fullCData(oldp+183,(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_3__DOT__i0__DOT__key_list[8]),4);
        tracep->fullCData(oldp+184,(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_3__DOT__i0__DOT__key_list[9]),4);
        tracep->fullCData(oldp+185,(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_3__DOT__i0__DOT__key_list[10]),4);
        tracep->fullCData(oldp+186,(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_3__DOT__i0__DOT__key_list[11]),4);
        tracep->fullCData(oldp+187,(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_3__DOT__i0__DOT__key_list[12]),4);
        tracep->fullCData(oldp+188,(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_3__DOT__i0__DOT__key_list[13]),4);
        tracep->fullCData(oldp+189,(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_3__DOT__i0__DOT__key_list[14]),4);
        tracep->fullCData(oldp+190,(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_3__DOT__i0__DOT__key_list[15]),4);
        tracep->fullCData(oldp+191,(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_3__DOT__i0__DOT__data_list[0]),8);
        tracep->fullCData(oldp+192,(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_3__DOT__i0__DOT__data_list[1]),8);
        tracep->fullCData(oldp+193,(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_3__DOT__i0__DOT__data_list[2]),8);
        tracep->fullCData(oldp+194,(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_3__DOT__i0__DOT__data_list[3]),8);
        tracep->fullCData(oldp+195,(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_3__DOT__i0__DOT__data_list[4]),8);
        tracep->fullCData(oldp+196,(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_3__DOT__i0__DOT__data_list[5]),8);
        tracep->fullCData(oldp+197,(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_3__DOT__i0__DOT__data_list[6]),8);
        tracep->fullCData(oldp+198,(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_3__DOT__i0__DOT__data_list[7]),8);
        tracep->fullCData(oldp+199,(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_3__DOT__i0__DOT__data_list[8]),8);
        tracep->fullCData(oldp+200,(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_3__DOT__i0__DOT__data_list[9]),8);
        tracep->fullCData(oldp+201,(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_3__DOT__i0__DOT__data_list[10]),8);
        tracep->fullCData(oldp+202,(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_3__DOT__i0__DOT__data_list[11]),8);
        tracep->fullCData(oldp+203,(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_3__DOT__i0__DOT__data_list[12]),8);
        tracep->fullCData(oldp+204,(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_3__DOT__i0__DOT__data_list[13]),8);
        tracep->fullCData(oldp+205,(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_3__DOT__i0__DOT__data_list[14]),8);
        tracep->fullCData(oldp+206,(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_3__DOT__i0__DOT__data_list[15]),8);
        tracep->fullCData(oldp+207,(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_3__DOT__i0__DOT__lut_out),8);
        tracep->fullBit(oldp+208,(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_3__DOT__i0__DOT__hit));
        tracep->fullSData(oldp+209,(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_4__DOT__i0__DOT__pair_list[0]),12);
        tracep->fullSData(oldp+210,(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_4__DOT__i0__DOT__pair_list[1]),12);
        tracep->fullSData(oldp+211,(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_4__DOT__i0__DOT__pair_list[2]),12);
        tracep->fullSData(oldp+212,(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_4__DOT__i0__DOT__pair_list[3]),12);
        tracep->fullSData(oldp+213,(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_4__DOT__i0__DOT__pair_list[4]),12);
        tracep->fullSData(oldp+214,(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_4__DOT__i0__DOT__pair_list[5]),12);
        tracep->fullSData(oldp+215,(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_4__DOT__i0__DOT__pair_list[6]),12);
        tracep->fullSData(oldp+216,(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_4__DOT__i0__DOT__pair_list[7]),12);
        tracep->fullSData(oldp+217,(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_4__DOT__i0__DOT__pair_list[8]),12);
        tracep->fullSData(oldp+218,(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_4__DOT__i0__DOT__pair_list[9]),12);
        tracep->fullSData(oldp+219,(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_4__DOT__i0__DOT__pair_list[10]),12);
        tracep->fullSData(oldp+220,(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_4__DOT__i0__DOT__pair_list[11]),12);
        tracep->fullSData(oldp+221,(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_4__DOT__i0__DOT__pair_list[12]),12);
        tracep->fullSData(oldp+222,(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_4__DOT__i0__DOT__pair_list[13]),12);
        tracep->fullSData(oldp+223,(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_4__DOT__i0__DOT__pair_list[14]),12);
        tracep->fullSData(oldp+224,(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_4__DOT__i0__DOT__pair_list[15]),12);
        tracep->fullCData(oldp+225,(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_4__DOT__i0__DOT__key_list[0]),4);
        tracep->fullCData(oldp+226,(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_4__DOT__i0__DOT__key_list[1]),4);
        tracep->fullCData(oldp+227,(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_4__DOT__i0__DOT__key_list[2]),4);
        tracep->fullCData(oldp+228,(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_4__DOT__i0__DOT__key_list[3]),4);
        tracep->fullCData(oldp+229,(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_4__DOT__i0__DOT__key_list[4]),4);
        tracep->fullCData(oldp+230,(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_4__DOT__i0__DOT__key_list[5]),4);
        tracep->fullCData(oldp+231,(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_4__DOT__i0__DOT__key_list[6]),4);
        tracep->fullCData(oldp+232,(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_4__DOT__i0__DOT__key_list[7]),4);
        tracep->fullCData(oldp+233,(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_4__DOT__i0__DOT__key_list[8]),4);
        tracep->fullCData(oldp+234,(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_4__DOT__i0__DOT__key_list[9]),4);
        tracep->fullCData(oldp+235,(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_4__DOT__i0__DOT__key_list[10]),4);
        tracep->fullCData(oldp+236,(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_4__DOT__i0__DOT__key_list[11]),4);
        tracep->fullCData(oldp+237,(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_4__DOT__i0__DOT__key_list[12]),4);
        tracep->fullCData(oldp+238,(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_4__DOT__i0__DOT__key_list[13]),4);
        tracep->fullCData(oldp+239,(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_4__DOT__i0__DOT__key_list[14]),4);
        tracep->fullCData(oldp+240,(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_4__DOT__i0__DOT__key_list[15]),4);
        tracep->fullCData(oldp+241,(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_4__DOT__i0__DOT__data_list[0]),8);
        tracep->fullCData(oldp+242,(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_4__DOT__i0__DOT__data_list[1]),8);
        tracep->fullCData(oldp+243,(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_4__DOT__i0__DOT__data_list[2]),8);
        tracep->fullCData(oldp+244,(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_4__DOT__i0__DOT__data_list[3]),8);
        tracep->fullCData(oldp+245,(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_4__DOT__i0__DOT__data_list[4]),8);
        tracep->fullCData(oldp+246,(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_4__DOT__i0__DOT__data_list[5]),8);
        tracep->fullCData(oldp+247,(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_4__DOT__i0__DOT__data_list[6]),8);
        tracep->fullCData(oldp+248,(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_4__DOT__i0__DOT__data_list[7]),8);
        tracep->fullCData(oldp+249,(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_4__DOT__i0__DOT__data_list[8]),8);
        tracep->fullCData(oldp+250,(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_4__DOT__i0__DOT__data_list[9]),8);
        tracep->fullCData(oldp+251,(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_4__DOT__i0__DOT__data_list[10]),8);
        tracep->fullCData(oldp+252,(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_4__DOT__i0__DOT__data_list[11]),8);
        tracep->fullCData(oldp+253,(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_4__DOT__i0__DOT__data_list[12]),8);
        tracep->fullCData(oldp+254,(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_4__DOT__i0__DOT__data_list[13]),8);
        tracep->fullCData(oldp+255,(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_4__DOT__i0__DOT__data_list[14]),8);
        tracep->fullCData(oldp+256,(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_4__DOT__i0__DOT__data_list[15]),8);
        tracep->fullCData(oldp+257,(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_4__DOT__i0__DOT__lut_out),8);
        tracep->fullBit(oldp+258,(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_4__DOT__i0__DOT__hit));
        tracep->fullSData(oldp+259,(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_5__DOT__i0__DOT__pair_list[0]),12);
        tracep->fullSData(oldp+260,(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_5__DOT__i0__DOT__pair_list[1]),12);
        tracep->fullSData(oldp+261,(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_5__DOT__i0__DOT__pair_list[2]),12);
        tracep->fullSData(oldp+262,(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_5__DOT__i0__DOT__pair_list[3]),12);
        tracep->fullSData(oldp+263,(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_5__DOT__i0__DOT__pair_list[4]),12);
        tracep->fullSData(oldp+264,(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_5__DOT__i0__DOT__pair_list[5]),12);
        tracep->fullSData(oldp+265,(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_5__DOT__i0__DOT__pair_list[6]),12);
        tracep->fullSData(oldp+266,(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_5__DOT__i0__DOT__pair_list[7]),12);
        tracep->fullSData(oldp+267,(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_5__DOT__i0__DOT__pair_list[8]),12);
        tracep->fullSData(oldp+268,(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_5__DOT__i0__DOT__pair_list[9]),12);
        tracep->fullSData(oldp+269,(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_5__DOT__i0__DOT__pair_list[10]),12);
        tracep->fullSData(oldp+270,(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_5__DOT__i0__DOT__pair_list[11]),12);
        tracep->fullSData(oldp+271,(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_5__DOT__i0__DOT__pair_list[12]),12);
        tracep->fullSData(oldp+272,(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_5__DOT__i0__DOT__pair_list[13]),12);
        tracep->fullSData(oldp+273,(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_5__DOT__i0__DOT__pair_list[14]),12);
        tracep->fullSData(oldp+274,(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_5__DOT__i0__DOT__pair_list[15]),12);
        tracep->fullCData(oldp+275,(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_5__DOT__i0__DOT__key_list[0]),4);
        tracep->fullCData(oldp+276,(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_5__DOT__i0__DOT__key_list[1]),4);
        tracep->fullCData(oldp+277,(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_5__DOT__i0__DOT__key_list[2]),4);
        tracep->fullCData(oldp+278,(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_5__DOT__i0__DOT__key_list[3]),4);
        tracep->fullCData(oldp+279,(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_5__DOT__i0__DOT__key_list[4]),4);
        tracep->fullCData(oldp+280,(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_5__DOT__i0__DOT__key_list[5]),4);
        tracep->fullCData(oldp+281,(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_5__DOT__i0__DOT__key_list[6]),4);
        tracep->fullCData(oldp+282,(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_5__DOT__i0__DOT__key_list[7]),4);
        tracep->fullCData(oldp+283,(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_5__DOT__i0__DOT__key_list[8]),4);
        tracep->fullCData(oldp+284,(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_5__DOT__i0__DOT__key_list[9]),4);
        tracep->fullCData(oldp+285,(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_5__DOT__i0__DOT__key_list[10]),4);
        tracep->fullCData(oldp+286,(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_5__DOT__i0__DOT__key_list[11]),4);
        tracep->fullCData(oldp+287,(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_5__DOT__i0__DOT__key_list[12]),4);
        tracep->fullCData(oldp+288,(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_5__DOT__i0__DOT__key_list[13]),4);
        tracep->fullCData(oldp+289,(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_5__DOT__i0__DOT__key_list[14]),4);
        tracep->fullCData(oldp+290,(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_5__DOT__i0__DOT__key_list[15]),4);
        tracep->fullCData(oldp+291,(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_5__DOT__i0__DOT__data_list[0]),8);
        tracep->fullCData(oldp+292,(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_5__DOT__i0__DOT__data_list[1]),8);
        tracep->fullCData(oldp+293,(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_5__DOT__i0__DOT__data_list[2]),8);
        tracep->fullCData(oldp+294,(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_5__DOT__i0__DOT__data_list[3]),8);
        tracep->fullCData(oldp+295,(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_5__DOT__i0__DOT__data_list[4]),8);
        tracep->fullCData(oldp+296,(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_5__DOT__i0__DOT__data_list[5]),8);
        tracep->fullCData(oldp+297,(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_5__DOT__i0__DOT__data_list[6]),8);
        tracep->fullCData(oldp+298,(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_5__DOT__i0__DOT__data_list[7]),8);
        tracep->fullCData(oldp+299,(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_5__DOT__i0__DOT__data_list[8]),8);
        tracep->fullCData(oldp+300,(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_5__DOT__i0__DOT__data_list[9]),8);
        tracep->fullCData(oldp+301,(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_5__DOT__i0__DOT__data_list[10]),8);
        tracep->fullCData(oldp+302,(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_5__DOT__i0__DOT__data_list[11]),8);
        tracep->fullCData(oldp+303,(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_5__DOT__i0__DOT__data_list[12]),8);
        tracep->fullCData(oldp+304,(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_5__DOT__i0__DOT__data_list[13]),8);
        tracep->fullCData(oldp+305,(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_5__DOT__i0__DOT__data_list[14]),8);
        tracep->fullCData(oldp+306,(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_5__DOT__i0__DOT__data_list[15]),8);
        tracep->fullCData(oldp+307,(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_5__DOT__i0__DOT__lut_out),8);
        tracep->fullBit(oldp+308,(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_5__DOT__i0__DOT__hit));
        tracep->fullSData(oldp+309,(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_6__DOT__i0__DOT__pair_list[0]),12);
        tracep->fullSData(oldp+310,(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_6__DOT__i0__DOT__pair_list[1]),12);
        tracep->fullSData(oldp+311,(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_6__DOT__i0__DOT__pair_list[2]),12);
        tracep->fullSData(oldp+312,(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_6__DOT__i0__DOT__pair_list[3]),12);
        tracep->fullSData(oldp+313,(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_6__DOT__i0__DOT__pair_list[4]),12);
        tracep->fullSData(oldp+314,(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_6__DOT__i0__DOT__pair_list[5]),12);
        tracep->fullSData(oldp+315,(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_6__DOT__i0__DOT__pair_list[6]),12);
        tracep->fullSData(oldp+316,(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_6__DOT__i0__DOT__pair_list[7]),12);
        tracep->fullSData(oldp+317,(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_6__DOT__i0__DOT__pair_list[8]),12);
        tracep->fullSData(oldp+318,(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_6__DOT__i0__DOT__pair_list[9]),12);
        tracep->fullSData(oldp+319,(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_6__DOT__i0__DOT__pair_list[10]),12);
        tracep->fullSData(oldp+320,(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_6__DOT__i0__DOT__pair_list[11]),12);
        tracep->fullSData(oldp+321,(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_6__DOT__i0__DOT__pair_list[12]),12);
        tracep->fullSData(oldp+322,(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_6__DOT__i0__DOT__pair_list[13]),12);
        tracep->fullSData(oldp+323,(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_6__DOT__i0__DOT__pair_list[14]),12);
        tracep->fullSData(oldp+324,(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_6__DOT__i0__DOT__pair_list[15]),12);
        tracep->fullCData(oldp+325,(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_6__DOT__i0__DOT__key_list[0]),4);
        tracep->fullCData(oldp+326,(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_6__DOT__i0__DOT__key_list[1]),4);
        tracep->fullCData(oldp+327,(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_6__DOT__i0__DOT__key_list[2]),4);
        tracep->fullCData(oldp+328,(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_6__DOT__i0__DOT__key_list[3]),4);
        tracep->fullCData(oldp+329,(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_6__DOT__i0__DOT__key_list[4]),4);
        tracep->fullCData(oldp+330,(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_6__DOT__i0__DOT__key_list[5]),4);
        tracep->fullCData(oldp+331,(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_6__DOT__i0__DOT__key_list[6]),4);
        tracep->fullCData(oldp+332,(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_6__DOT__i0__DOT__key_list[7]),4);
        tracep->fullCData(oldp+333,(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_6__DOT__i0__DOT__key_list[8]),4);
        tracep->fullCData(oldp+334,(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_6__DOT__i0__DOT__key_list[9]),4);
        tracep->fullCData(oldp+335,(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_6__DOT__i0__DOT__key_list[10]),4);
        tracep->fullCData(oldp+336,(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_6__DOT__i0__DOT__key_list[11]),4);
        tracep->fullCData(oldp+337,(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_6__DOT__i0__DOT__key_list[12]),4);
        tracep->fullCData(oldp+338,(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_6__DOT__i0__DOT__key_list[13]),4);
        tracep->fullCData(oldp+339,(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_6__DOT__i0__DOT__key_list[14]),4);
        tracep->fullCData(oldp+340,(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_6__DOT__i0__DOT__key_list[15]),4);
        tracep->fullCData(oldp+341,(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_6__DOT__i0__DOT__data_list[0]),8);
        tracep->fullCData(oldp+342,(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_6__DOT__i0__DOT__data_list[1]),8);
        tracep->fullCData(oldp+343,(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_6__DOT__i0__DOT__data_list[2]),8);
        tracep->fullCData(oldp+344,(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_6__DOT__i0__DOT__data_list[3]),8);
        tracep->fullCData(oldp+345,(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_6__DOT__i0__DOT__data_list[4]),8);
        tracep->fullCData(oldp+346,(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_6__DOT__i0__DOT__data_list[5]),8);
        tracep->fullCData(oldp+347,(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_6__DOT__i0__DOT__data_list[6]),8);
        tracep->fullCData(oldp+348,(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_6__DOT__i0__DOT__data_list[7]),8);
        tracep->fullCData(oldp+349,(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_6__DOT__i0__DOT__data_list[8]),8);
        tracep->fullCData(oldp+350,(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_6__DOT__i0__DOT__data_list[9]),8);
        tracep->fullCData(oldp+351,(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_6__DOT__i0__DOT__data_list[10]),8);
        tracep->fullCData(oldp+352,(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_6__DOT__i0__DOT__data_list[11]),8);
        tracep->fullCData(oldp+353,(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_6__DOT__i0__DOT__data_list[12]),8);
        tracep->fullCData(oldp+354,(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_6__DOT__i0__DOT__data_list[13]),8);
        tracep->fullCData(oldp+355,(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_6__DOT__i0__DOT__data_list[14]),8);
        tracep->fullCData(oldp+356,(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_6__DOT__i0__DOT__data_list[15]),8);
        tracep->fullCData(oldp+357,(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_6__DOT__i0__DOT__lut_out),8);
        tracep->fullBit(oldp+358,(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_6__DOT__i0__DOT__hit));
        tracep->fullSData(oldp+359,(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_7__DOT__i0__DOT__pair_list[0]),12);
        tracep->fullSData(oldp+360,(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_7__DOT__i0__DOT__pair_list[1]),12);
        tracep->fullSData(oldp+361,(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_7__DOT__i0__DOT__pair_list[2]),12);
        tracep->fullSData(oldp+362,(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_7__DOT__i0__DOT__pair_list[3]),12);
        tracep->fullSData(oldp+363,(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_7__DOT__i0__DOT__pair_list[4]),12);
        tracep->fullSData(oldp+364,(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_7__DOT__i0__DOT__pair_list[5]),12);
        tracep->fullSData(oldp+365,(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_7__DOT__i0__DOT__pair_list[6]),12);
        tracep->fullSData(oldp+366,(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_7__DOT__i0__DOT__pair_list[7]),12);
        tracep->fullSData(oldp+367,(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_7__DOT__i0__DOT__pair_list[8]),12);
        tracep->fullSData(oldp+368,(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_7__DOT__i0__DOT__pair_list[9]),12);
        tracep->fullSData(oldp+369,(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_7__DOT__i0__DOT__pair_list[10]),12);
        tracep->fullSData(oldp+370,(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_7__DOT__i0__DOT__pair_list[11]),12);
        tracep->fullSData(oldp+371,(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_7__DOT__i0__DOT__pair_list[12]),12);
        tracep->fullSData(oldp+372,(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_7__DOT__i0__DOT__pair_list[13]),12);
        tracep->fullSData(oldp+373,(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_7__DOT__i0__DOT__pair_list[14]),12);
        tracep->fullSData(oldp+374,(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_7__DOT__i0__DOT__pair_list[15]),12);
        tracep->fullCData(oldp+375,(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_7__DOT__i0__DOT__key_list[0]),4);
        tracep->fullCData(oldp+376,(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_7__DOT__i0__DOT__key_list[1]),4);
        tracep->fullCData(oldp+377,(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_7__DOT__i0__DOT__key_list[2]),4);
        tracep->fullCData(oldp+378,(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_7__DOT__i0__DOT__key_list[3]),4);
        tracep->fullCData(oldp+379,(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_7__DOT__i0__DOT__key_list[4]),4);
        tracep->fullCData(oldp+380,(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_7__DOT__i0__DOT__key_list[5]),4);
        tracep->fullCData(oldp+381,(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_7__DOT__i0__DOT__key_list[6]),4);
        tracep->fullCData(oldp+382,(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_7__DOT__i0__DOT__key_list[7]),4);
        tracep->fullCData(oldp+383,(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_7__DOT__i0__DOT__key_list[8]),4);
        tracep->fullCData(oldp+384,(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_7__DOT__i0__DOT__key_list[9]),4);
        tracep->fullCData(oldp+385,(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_7__DOT__i0__DOT__key_list[10]),4);
        tracep->fullCData(oldp+386,(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_7__DOT__i0__DOT__key_list[11]),4);
        tracep->fullCData(oldp+387,(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_7__DOT__i0__DOT__key_list[12]),4);
        tracep->fullCData(oldp+388,(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_7__DOT__i0__DOT__key_list[13]),4);
        tracep->fullCData(oldp+389,(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_7__DOT__i0__DOT__key_list[14]),4);
        tracep->fullCData(oldp+390,(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_7__DOT__i0__DOT__key_list[15]),4);
        tracep->fullCData(oldp+391,(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_7__DOT__i0__DOT__data_list[0]),8);
        tracep->fullCData(oldp+392,(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_7__DOT__i0__DOT__data_list[1]),8);
        tracep->fullCData(oldp+393,(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_7__DOT__i0__DOT__data_list[2]),8);
        tracep->fullCData(oldp+394,(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_7__DOT__i0__DOT__data_list[3]),8);
        tracep->fullCData(oldp+395,(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_7__DOT__i0__DOT__data_list[4]),8);
        tracep->fullCData(oldp+396,(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_7__DOT__i0__DOT__data_list[5]),8);
        tracep->fullCData(oldp+397,(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_7__DOT__i0__DOT__data_list[6]),8);
        tracep->fullCData(oldp+398,(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_7__DOT__i0__DOT__data_list[7]),8);
        tracep->fullCData(oldp+399,(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_7__DOT__i0__DOT__data_list[8]),8);
        tracep->fullCData(oldp+400,(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_7__DOT__i0__DOT__data_list[9]),8);
        tracep->fullCData(oldp+401,(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_7__DOT__i0__DOT__data_list[10]),8);
        tracep->fullCData(oldp+402,(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_7__DOT__i0__DOT__data_list[11]),8);
        tracep->fullCData(oldp+403,(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_7__DOT__i0__DOT__data_list[12]),8);
        tracep->fullCData(oldp+404,(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_7__DOT__i0__DOT__data_list[13]),8);
        tracep->fullCData(oldp+405,(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_7__DOT__i0__DOT__data_list[14]),8);
        tracep->fullCData(oldp+406,(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_7__DOT__i0__DOT__data_list[15]),8);
        tracep->fullCData(oldp+407,(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_7__DOT__i0__DOT__lut_out),8);
        tracep->fullBit(oldp+408,(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__decode_data_7__DOT__i0__DOT__hit));
        tracep->fullBit(oldp+409,(vlSelf->soc_riscv_zhoutao_top__DOT__clrn));
        tracep->fullCData(oldp+410,(vlSelf->soc_riscv_zhoutao_top__DOT__select),8);
        tracep->fullBit(oldp+411,(vlSelf->soc_riscv_zhoutao_top__DOT__nextdata_n));
        tracep->fullIData(oldp+412,(vlSelf->soc_riscv_zhoutao_top__DOT__digital_data),32);
        tracep->fullCData(oldp+413,(vlSelf->soc_riscv_zhoutao_top__DOT__data),8);
        tracep->fullBit(oldp+414,(vlSelf->soc_riscv_zhoutao_top__DOT__ready));
        tracep->fullBit(oldp+415,(vlSelf->soc_riscv_zhoutao_top__DOT__overflow));
        tracep->fullCData(oldp+416,(vlSelf->soc_riscv_zhoutao_top__DOT__count),7);
        tracep->fullBit(oldp+417,(vlSelf->soc_riscv_zhoutao_top__DOT__cnt));
        tracep->fullCData(oldp+418,(vlSelf->soc_riscv_zhoutao_top__DOT__A),4);
        tracep->fullCData(oldp+419,(vlSelf->soc_riscv_zhoutao_top__DOT__B),4);
        tracep->fullCData(oldp+420,(vlSelf->soc_riscv_zhoutao_top__DOT__C),4);
        tracep->fullCData(oldp+421,(vlSelf->soc_riscv_zhoutao_top__DOT__count),8);
        tracep->fullSData(oldp+422,(vlSelf->soc_riscv_zhoutao_top__DOT__ps2_keybpard_1__DOT__buffer),10);
        tracep->fullCData(oldp+423,(vlSelf->soc_riscv_zhoutao_top__DOT__ps2_keybpard_1__DOT__fifo[0]),8);
        tracep->fullCData(oldp+424,(vlSelf->soc_riscv_zhoutao_top__DOT__ps2_keybpard_1__DOT__fifo[1]),8);
        tracep->fullCData(oldp+425,(vlSelf->soc_riscv_zhoutao_top__DOT__ps2_keybpard_1__DOT__fifo[2]),8);
        tracep->fullCData(oldp+426,(vlSelf->soc_riscv_zhoutao_top__DOT__ps2_keybpard_1__DOT__fifo[3]),8);
        tracep->fullCData(oldp+427,(vlSelf->soc_riscv_zhoutao_top__DOT__ps2_keybpard_1__DOT__fifo[4]),8);
        tracep->fullCData(oldp+428,(vlSelf->soc_riscv_zhoutao_top__DOT__ps2_keybpard_1__DOT__fifo[5]),8);
        tracep->fullCData(oldp+429,(vlSelf->soc_riscv_zhoutao_top__DOT__ps2_keybpard_1__DOT__fifo[6]),8);
        tracep->fullCData(oldp+430,(vlSelf->soc_riscv_zhoutao_top__DOT__ps2_keybpard_1__DOT__fifo[7]),8);
        tracep->fullCData(oldp+431,(vlSelf->soc_riscv_zhoutao_top__DOT__ps2_keybpard_1__DOT__w_ptr),3);
        tracep->fullCData(oldp+432,(vlSelf->soc_riscv_zhoutao_top__DOT__ps2_keybpard_1__DOT__r_ptr),3);
        tracep->fullCData(oldp+433,(vlSelf->soc_riscv_zhoutao_top__DOT__ps2_keybpard_1__DOT__count),4);
        tracep->fullCData(oldp+434,(vlSelf->soc_riscv_zhoutao_top__DOT__ps2_keybpard_1__DOT__ps2_clk_sync),3);
        tracep->fullBit(oldp+435,((IData)((4U == (6U 
                                                  & (IData)(vlSelf->soc_riscv_zhoutao_top__DOT__ps2_keybpard_1__DOT__ps2_clk_sync))))));
        tracep->fullCData(oldp+436,(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__seg0),8);
        tracep->fullCData(oldp+437,(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__seg1),8);
        tracep->fullCData(oldp+438,(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__seg2),8);
        tracep->fullCData(oldp+439,(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__seg3),8);
        tracep->fullCData(oldp+440,(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__seg4),8);
        tracep->fullCData(oldp+441,(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__seg5),8);
        tracep->fullCData(oldp+442,(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__seg6),8);
        tracep->fullCData(oldp+443,(vlSelf->soc_riscv_zhoutao_top__DOT__digital_led_1__DOT__seg7),8);
        tracep->fullBit(oldp+444,(vlSelf->clk));
        tracep->fullBit(oldp+445,(vlSelf->reset));
        tracep->fullBit(oldp+446,(vlSelf->ps2_clk));
        tracep->fullBit(oldp+447,(vlSelf->ps2_data));
        tracep->fullCData(oldp+448,(vlSelf->seg0_o),8);
        tracep->fullCData(oldp+449,(vlSelf->seg1_o),8);
        tracep->fullCData(oldp+450,(vlSelf->seg2_o),8);
        tracep->fullCData(oldp+451,(vlSelf->seg3_o),8);
        tracep->fullCData(oldp+452,(vlSelf->seg4_o),8);
        tracep->fullCData(oldp+453,(vlSelf->seg5_o),8);
        tracep->fullCData(oldp+454,(vlSelf->seg6_o),8);
        tracep->fullCData(oldp+455,(vlSelf->seg7_o),8);
        tracep->fullIData(oldp+456,(0xffffffffU),32);
        tracep->fullIData(oldp+457,(0x123f9a5U),32);
        tracep->fullCData(oldp+458,(0U),4);
        tracep->fullCData(oldp+459,(1U),4);
        tracep->fullCData(oldp+460,(2U),4);
        tracep->fullCData(oldp+461,(3U),4);
        tracep->fullCData(oldp+462,(4U),4);
        tracep->fullCData(oldp+463,(5U),4);
        tracep->fullCData(oldp+464,(6U),4);
        tracep->fullCData(oldp+465,(7U),4);
        tracep->fullCData(oldp+466,(8U),4);
        tracep->fullCData(oldp+467,(9U),4);
        tracep->fullCData(oldp+468,(0xaU),4);
        tracep->fullCData(oldp+469,(0xbU),4);
        tracep->fullCData(oldp+470,(0xcU),4);
        tracep->fullCData(oldp+471,(0xdU),4);
        tracep->fullCData(oldp+472,(0xeU),4);
        tracep->fullCData(oldp+473,(0xfU),4);
        tracep->fullIData(oldp+474,(0x10U),32);
        tracep->fullIData(oldp+475,(4U),32);
        tracep->fullIData(oldp+476,(8U),32);
        __Vtemp511[0U] = 0x7ae9ef8eU;
        __Vtemp511[1U] = 0xfb3ec9cdU;
        __Vtemp511[2U] = 0x8fc9f6aeU;
        __Vtemp511[3U] = 0xb66be7e0U;
        __Vtemp511[4U] = 0xa3f24665U;
        __Vtemp511[5U] = 0xfc1602dU;
        tracep->fullWData(oldp+477,(__Vtemp511),192);
        tracep->fullIData(oldp+483,(0U),32);
        tracep->fullCData(oldp+484,(0U),8);
        tracep->fullIData(oldp+485,(0xcU),32);
        tracep->fullIData(oldp+486,(0x10U),32);
    }
}
