// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vriscv_soc.h for the primary calling header

#include "Vriscv_soc___024root.h"
#include "Vriscv_soc__Syms.h"

#include "verilated_dpi.h"

//==========


void Vriscv_soc___024root___ctor_var_reset(Vriscv_soc___024root* vlSelf);

Vriscv_soc___024root::Vriscv_soc___024root(const char* _vcname__)
    : VerilatedModule(_vcname__)
 {
    // Reset structure values
    Vriscv_soc___024root___ctor_var_reset(this);
}

void Vriscv_soc___024root::__Vconfigure(Vriscv_soc__Syms* _vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->vlSymsp = _vlSymsp;
}

Vriscv_soc___024root::~Vriscv_soc___024root() {
}

void Vriscv_soc___024root___initial__TOP__1(Vriscv_soc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vriscv_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv_soc___024root___initial__TOP__1\n"); );
    // Body
    vlSelf->io_difftest_reg_0 = 0ULL;
    vlSelf->io_difftest_reg_1 = 0ULL;
    vlSelf->io_difftest_reg_2 = 0ULL;
    vlSelf->io_difftest_reg_3 = 0ULL;
    vlSelf->io_difftest_reg_4 = 0ULL;
    vlSelf->io_difftest_reg_5 = 0ULL;
    vlSelf->io_difftest_reg_6 = 0ULL;
    vlSelf->io_difftest_reg_7 = 0ULL;
    vlSelf->io_difftest_reg_8 = 0ULL;
    vlSelf->io_difftest_reg_9 = 0ULL;
    vlSelf->io_difftest_reg_10 = 0ULL;
    vlSelf->io_difftest_reg_11 = 0ULL;
    vlSelf->io_difftest_reg_12 = 0ULL;
    vlSelf->io_difftest_reg_13 = 0ULL;
    vlSelf->io_difftest_reg_14 = 0ULL;
    vlSelf->io_difftest_reg_15 = 0ULL;
    vlSelf->io_difftest_reg_16 = 0ULL;
    vlSelf->io_difftest_reg_17 = 0ULL;
    vlSelf->io_difftest_reg_18 = 0ULL;
    vlSelf->io_difftest_reg_19 = 0ULL;
    vlSelf->io_difftest_reg_20 = 0ULL;
    vlSelf->io_difftest_reg_21 = 0ULL;
    vlSelf->io_difftest_reg_22 = 0ULL;
    vlSelf->io_difftest_reg_23 = 0ULL;
    vlSelf->io_difftest_reg_24 = 0ULL;
    vlSelf->io_difftest_reg_25 = 0ULL;
    vlSelf->io_difftest_reg_26 = 0ULL;
    vlSelf->io_difftest_reg_27 = 0ULL;
    vlSelf->io_difftest_reg_28 = 0ULL;
    vlSelf->io_difftest_reg_29 = 0ULL;
    vlSelf->io_difftest_reg_30 = 0ULL;
    vlSelf->io_difftest_reg_31 = 0ULL;
    vlSelf->io_difftest_pc = 0ULL;
    vlSelf->io_difftest_inst = 2U;
    vlSelf->io_difftest_commit = 0U;
    vlSelf->io_inst_counter = 0ULL;
    vlSelf->io_difftest_irq = 0U;
    vlSelf->io_difftest_mstatus = 0ULL;
    vlSelf->io_difftest_mcause = 0ULL;
    vlSelf->io_difftest_mepc = 0ULL;
    vlSelf->io_difftest_mtvec = 0ULL;
    vlSelf->io_difftest_peripheral = 0U;
}

void Vriscv_soc___024root___settle__TOP__4(Vriscv_soc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vriscv_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv_soc___024root___settle__TOP__4\n"); );
    // Variables
    CData/*0:0*/ riscv_soc__DOT__core__DOT__i_cache__DOT___w_r_pass1_val_T;
    CData/*3:0*/ riscv_soc__DOT__core__DOT__execute__DOT__valid;
    CData/*0:0*/ riscv_soc__DOT__core__DOT__execute__DOT____Vcellinp__mu_exu__io_valid;
    CData/*0:0*/ riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__s_rs1_l_rs2;
    CData/*5:0*/ riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__shift_rs2_data;
    CData/*0:0*/ riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__is_eq;
    CData/*0:0*/ riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__chose_chancel;
    VlWide<3>/*64:0*/ riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___GEN;
    VlWide<3>/*95:0*/ __Vtemp882;
    VlWide<4>/*127:0*/ __Vtemp917;
    VlWide<4>/*127:0*/ __Vtemp919;
    VlWide<4>/*127:0*/ __Vtemp920;
    VlWide<4>/*127:0*/ __Vtemp921;
    VlWide<4>/*127:0*/ __Vtemp922;
    VlWide<3>/*95:0*/ __Vtemp925;
    VlWide<3>/*95:0*/ __Vtemp926;
    VlWide<3>/*95:0*/ __Vtemp927;
    VlWide<3>/*95:0*/ __Vtemp928;
    VlWide<3>/*95:0*/ __Vtemp929;
    VlWide<64>/*2047:0*/ __Vtemp945;
    VlWide<68>/*2175:0*/ __Vtemp946;
    VlWide<72>/*2303:0*/ __Vtemp947;
    VlWide<76>/*2431:0*/ __Vtemp948;
    VlWide<80>/*2559:0*/ __Vtemp949;
    VlWide<84>/*2687:0*/ __Vtemp950;
    VlWide<88>/*2815:0*/ __Vtemp951;
    VlWide<92>/*2943:0*/ __Vtemp952;
    VlWide<96>/*3071:0*/ __Vtemp953;
    VlWide<100>/*3199:0*/ __Vtemp954;
    VlWide<104>/*3327:0*/ __Vtemp955;
    VlWide<108>/*3455:0*/ __Vtemp956;
    VlWide<112>/*3583:0*/ __Vtemp957;
    VlWide<116>/*3711:0*/ __Vtemp958;
    VlWide<120>/*3839:0*/ __Vtemp959;
    VlWide<124>/*3967:0*/ __Vtemp960;
    VlWide<128>/*4095:0*/ __Vtemp961;
    VlWide<132>/*4223:0*/ __Vtemp962;
    VlWide<136>/*4351:0*/ __Vtemp963;
    VlWide<140>/*4479:0*/ __Vtemp964;
    VlWide<144>/*4607:0*/ __Vtemp965;
    VlWide<148>/*4735:0*/ __Vtemp966;
    VlWide<152>/*4863:0*/ __Vtemp967;
    VlWide<156>/*4991:0*/ __Vtemp968;
    VlWide<160>/*5119:0*/ __Vtemp969;
    VlWide<164>/*5247:0*/ __Vtemp970;
    VlWide<168>/*5375:0*/ __Vtemp971;
    VlWide<172>/*5503:0*/ __Vtemp972;
    VlWide<176>/*5631:0*/ __Vtemp973;
    VlWide<180>/*5759:0*/ __Vtemp974;
    VlWide<184>/*5887:0*/ __Vtemp975;
    VlWide<188>/*6015:0*/ __Vtemp976;
    VlWide<192>/*6143:0*/ __Vtemp977;
    VlWide<196>/*6271:0*/ __Vtemp978;
    VlWide<200>/*6399:0*/ __Vtemp979;
    VlWide<204>/*6527:0*/ __Vtemp980;
    VlWide<208>/*6655:0*/ __Vtemp981;
    VlWide<212>/*6783:0*/ __Vtemp982;
    VlWide<216>/*6911:0*/ __Vtemp983;
    VlWide<220>/*7039:0*/ __Vtemp984;
    VlWide<224>/*7167:0*/ __Vtemp985;
    VlWide<228>/*7295:0*/ __Vtemp986;
    VlWide<232>/*7423:0*/ __Vtemp987;
    VlWide<236>/*7551:0*/ __Vtemp988;
    VlWide<240>/*7679:0*/ __Vtemp989;
    VlWide<244>/*7807:0*/ __Vtemp990;
    VlWide<248>/*7935:0*/ __Vtemp991;
    VlWide<252>/*8063:0*/ __Vtemp992;
    VlWide<256>/*8191:0*/ __Vtemp993;
    VlWide<64>/*2047:0*/ __Vtemp1009;
    VlWide<68>/*2175:0*/ __Vtemp1010;
    VlWide<72>/*2303:0*/ __Vtemp1011;
    VlWide<76>/*2431:0*/ __Vtemp1012;
    VlWide<80>/*2559:0*/ __Vtemp1013;
    VlWide<84>/*2687:0*/ __Vtemp1014;
    VlWide<88>/*2815:0*/ __Vtemp1015;
    VlWide<92>/*2943:0*/ __Vtemp1016;
    VlWide<96>/*3071:0*/ __Vtemp1017;
    VlWide<100>/*3199:0*/ __Vtemp1018;
    VlWide<104>/*3327:0*/ __Vtemp1019;
    VlWide<108>/*3455:0*/ __Vtemp1020;
    VlWide<112>/*3583:0*/ __Vtemp1021;
    VlWide<116>/*3711:0*/ __Vtemp1022;
    VlWide<120>/*3839:0*/ __Vtemp1023;
    VlWide<124>/*3967:0*/ __Vtemp1024;
    VlWide<128>/*4095:0*/ __Vtemp1025;
    VlWide<132>/*4223:0*/ __Vtemp1026;
    VlWide<136>/*4351:0*/ __Vtemp1027;
    VlWide<140>/*4479:0*/ __Vtemp1028;
    VlWide<144>/*4607:0*/ __Vtemp1029;
    VlWide<148>/*4735:0*/ __Vtemp1030;
    VlWide<152>/*4863:0*/ __Vtemp1031;
    VlWide<156>/*4991:0*/ __Vtemp1032;
    VlWide<160>/*5119:0*/ __Vtemp1033;
    VlWide<164>/*5247:0*/ __Vtemp1034;
    VlWide<168>/*5375:0*/ __Vtemp1035;
    VlWide<172>/*5503:0*/ __Vtemp1036;
    VlWide<176>/*5631:0*/ __Vtemp1037;
    VlWide<180>/*5759:0*/ __Vtemp1038;
    VlWide<184>/*5887:0*/ __Vtemp1039;
    VlWide<188>/*6015:0*/ __Vtemp1040;
    VlWide<192>/*6143:0*/ __Vtemp1041;
    VlWide<196>/*6271:0*/ __Vtemp1042;
    VlWide<200>/*6399:0*/ __Vtemp1043;
    VlWide<204>/*6527:0*/ __Vtemp1044;
    VlWide<208>/*6655:0*/ __Vtemp1045;
    VlWide<212>/*6783:0*/ __Vtemp1046;
    VlWide<216>/*6911:0*/ __Vtemp1047;
    VlWide<220>/*7039:0*/ __Vtemp1048;
    VlWide<224>/*7167:0*/ __Vtemp1049;
    VlWide<228>/*7295:0*/ __Vtemp1050;
    VlWide<232>/*7423:0*/ __Vtemp1051;
    VlWide<236>/*7551:0*/ __Vtemp1052;
    VlWide<240>/*7679:0*/ __Vtemp1053;
    VlWide<244>/*7807:0*/ __Vtemp1054;
    VlWide<248>/*7935:0*/ __Vtemp1055;
    VlWide<252>/*8063:0*/ __Vtemp1056;
    VlWide<256>/*8191:0*/ __Vtemp1057;
    VlWide<64>/*2047:0*/ __Vtemp1073;
    VlWide<68>/*2175:0*/ __Vtemp1074;
    VlWide<72>/*2303:0*/ __Vtemp1075;
    VlWide<76>/*2431:0*/ __Vtemp1076;
    VlWide<80>/*2559:0*/ __Vtemp1077;
    VlWide<84>/*2687:0*/ __Vtemp1078;
    VlWide<88>/*2815:0*/ __Vtemp1079;
    VlWide<92>/*2943:0*/ __Vtemp1080;
    VlWide<96>/*3071:0*/ __Vtemp1081;
    VlWide<100>/*3199:0*/ __Vtemp1082;
    VlWide<104>/*3327:0*/ __Vtemp1083;
    VlWide<108>/*3455:0*/ __Vtemp1084;
    VlWide<112>/*3583:0*/ __Vtemp1085;
    VlWide<116>/*3711:0*/ __Vtemp1086;
    VlWide<120>/*3839:0*/ __Vtemp1087;
    VlWide<124>/*3967:0*/ __Vtemp1088;
    VlWide<128>/*4095:0*/ __Vtemp1089;
    VlWide<132>/*4223:0*/ __Vtemp1090;
    VlWide<136>/*4351:0*/ __Vtemp1091;
    VlWide<140>/*4479:0*/ __Vtemp1092;
    VlWide<144>/*4607:0*/ __Vtemp1093;
    VlWide<148>/*4735:0*/ __Vtemp1094;
    VlWide<152>/*4863:0*/ __Vtemp1095;
    VlWide<156>/*4991:0*/ __Vtemp1096;
    VlWide<160>/*5119:0*/ __Vtemp1097;
    VlWide<164>/*5247:0*/ __Vtemp1098;
    VlWide<168>/*5375:0*/ __Vtemp1099;
    VlWide<172>/*5503:0*/ __Vtemp1100;
    VlWide<176>/*5631:0*/ __Vtemp1101;
    VlWide<180>/*5759:0*/ __Vtemp1102;
    VlWide<184>/*5887:0*/ __Vtemp1103;
    VlWide<188>/*6015:0*/ __Vtemp1104;
    VlWide<192>/*6143:0*/ __Vtemp1105;
    VlWide<196>/*6271:0*/ __Vtemp1106;
    VlWide<200>/*6399:0*/ __Vtemp1107;
    VlWide<204>/*6527:0*/ __Vtemp1108;
    VlWide<208>/*6655:0*/ __Vtemp1109;
    VlWide<212>/*6783:0*/ __Vtemp1110;
    VlWide<216>/*6911:0*/ __Vtemp1111;
    VlWide<220>/*7039:0*/ __Vtemp1112;
    VlWide<224>/*7167:0*/ __Vtemp1113;
    VlWide<228>/*7295:0*/ __Vtemp1114;
    VlWide<232>/*7423:0*/ __Vtemp1115;
    VlWide<236>/*7551:0*/ __Vtemp1116;
    VlWide<240>/*7679:0*/ __Vtemp1117;
    VlWide<244>/*7807:0*/ __Vtemp1118;
    VlWide<248>/*7935:0*/ __Vtemp1119;
    VlWide<252>/*8063:0*/ __Vtemp1120;
    VlWide<256>/*8191:0*/ __Vtemp1121;
    VlWide<64>/*2047:0*/ __Vtemp1137;
    VlWide<68>/*2175:0*/ __Vtemp1138;
    VlWide<72>/*2303:0*/ __Vtemp1139;
    VlWide<76>/*2431:0*/ __Vtemp1140;
    VlWide<80>/*2559:0*/ __Vtemp1141;
    VlWide<84>/*2687:0*/ __Vtemp1142;
    VlWide<88>/*2815:0*/ __Vtemp1143;
    VlWide<92>/*2943:0*/ __Vtemp1144;
    VlWide<96>/*3071:0*/ __Vtemp1145;
    VlWide<100>/*3199:0*/ __Vtemp1146;
    VlWide<104>/*3327:0*/ __Vtemp1147;
    VlWide<108>/*3455:0*/ __Vtemp1148;
    VlWide<112>/*3583:0*/ __Vtemp1149;
    VlWide<116>/*3711:0*/ __Vtemp1150;
    VlWide<120>/*3839:0*/ __Vtemp1151;
    VlWide<124>/*3967:0*/ __Vtemp1152;
    VlWide<128>/*4095:0*/ __Vtemp1153;
    VlWide<132>/*4223:0*/ __Vtemp1154;
    VlWide<136>/*4351:0*/ __Vtemp1155;
    VlWide<140>/*4479:0*/ __Vtemp1156;
    VlWide<144>/*4607:0*/ __Vtemp1157;
    VlWide<148>/*4735:0*/ __Vtemp1158;
    VlWide<152>/*4863:0*/ __Vtemp1159;
    VlWide<156>/*4991:0*/ __Vtemp1160;
    VlWide<160>/*5119:0*/ __Vtemp1161;
    VlWide<164>/*5247:0*/ __Vtemp1162;
    VlWide<168>/*5375:0*/ __Vtemp1163;
    VlWide<172>/*5503:0*/ __Vtemp1164;
    VlWide<176>/*5631:0*/ __Vtemp1165;
    VlWide<180>/*5759:0*/ __Vtemp1166;
    VlWide<184>/*5887:0*/ __Vtemp1167;
    VlWide<188>/*6015:0*/ __Vtemp1168;
    VlWide<192>/*6143:0*/ __Vtemp1169;
    VlWide<196>/*6271:0*/ __Vtemp1170;
    VlWide<200>/*6399:0*/ __Vtemp1171;
    VlWide<204>/*6527:0*/ __Vtemp1172;
    VlWide<208>/*6655:0*/ __Vtemp1173;
    VlWide<212>/*6783:0*/ __Vtemp1174;
    VlWide<216>/*6911:0*/ __Vtemp1175;
    VlWide<220>/*7039:0*/ __Vtemp1176;
    VlWide<224>/*7167:0*/ __Vtemp1177;
    VlWide<228>/*7295:0*/ __Vtemp1178;
    VlWide<232>/*7423:0*/ __Vtemp1179;
    VlWide<236>/*7551:0*/ __Vtemp1180;
    VlWide<240>/*7679:0*/ __Vtemp1181;
    VlWide<244>/*7807:0*/ __Vtemp1182;
    VlWide<248>/*7935:0*/ __Vtemp1183;
    VlWide<252>/*8063:0*/ __Vtemp1184;
    VlWide<256>/*8191:0*/ __Vtemp1185;
    VlWide<4>/*127:0*/ __Vtemp1188;
    VlWide<4>/*127:0*/ __Vtemp1189;
    VlWide<4>/*127:0*/ __Vtemp1192;
    VlWide<4>/*127:0*/ __Vtemp1193;
    VlWide<4>/*127:0*/ __Vtemp1201;
    VlWide<4>/*127:0*/ __Vtemp1202;
    VlWide<16>/*511:0*/ __Vtemp1205;
    VlWide<3>/*95:0*/ __Vtemp1208;
    VlWide<3>/*95:0*/ __Vtemp1211;
    VlWide<3>/*95:0*/ __Vtemp1215;
    VlWide<3>/*95:0*/ __Vtemp1219;
    VlWide<3>/*95:0*/ __Vtemp1226;
    VlWide<3>/*95:0*/ __Vtemp1230;
    VlWide<5>/*159:0*/ __Vtemp1232;
    VlWide<5>/*159:0*/ __Vtemp1233;
    VlWide<17>/*543:0*/ __Vtemp1235;
    VlWide<3>/*95:0*/ __Vtemp1239;
    VlWide<64>/*2047:0*/ __Vtemp1258;
    VlWide<68>/*2175:0*/ __Vtemp1259;
    VlWide<72>/*2303:0*/ __Vtemp1260;
    VlWide<76>/*2431:0*/ __Vtemp1261;
    VlWide<80>/*2559:0*/ __Vtemp1262;
    VlWide<84>/*2687:0*/ __Vtemp1263;
    VlWide<88>/*2815:0*/ __Vtemp1264;
    VlWide<92>/*2943:0*/ __Vtemp1265;
    VlWide<96>/*3071:0*/ __Vtemp1266;
    VlWide<100>/*3199:0*/ __Vtemp1267;
    VlWide<104>/*3327:0*/ __Vtemp1268;
    VlWide<108>/*3455:0*/ __Vtemp1269;
    VlWide<112>/*3583:0*/ __Vtemp1270;
    VlWide<116>/*3711:0*/ __Vtemp1271;
    VlWide<120>/*3839:0*/ __Vtemp1272;
    VlWide<124>/*3967:0*/ __Vtemp1273;
    VlWide<128>/*4095:0*/ __Vtemp1274;
    VlWide<132>/*4223:0*/ __Vtemp1275;
    VlWide<136>/*4351:0*/ __Vtemp1276;
    VlWide<140>/*4479:0*/ __Vtemp1277;
    VlWide<144>/*4607:0*/ __Vtemp1278;
    VlWide<148>/*4735:0*/ __Vtemp1279;
    VlWide<152>/*4863:0*/ __Vtemp1280;
    VlWide<156>/*4991:0*/ __Vtemp1281;
    VlWide<160>/*5119:0*/ __Vtemp1282;
    VlWide<164>/*5247:0*/ __Vtemp1283;
    VlWide<168>/*5375:0*/ __Vtemp1284;
    VlWide<172>/*5503:0*/ __Vtemp1285;
    VlWide<176>/*5631:0*/ __Vtemp1286;
    VlWide<180>/*5759:0*/ __Vtemp1287;
    VlWide<184>/*5887:0*/ __Vtemp1288;
    VlWide<188>/*6015:0*/ __Vtemp1289;
    VlWide<192>/*6143:0*/ __Vtemp1290;
    VlWide<196>/*6271:0*/ __Vtemp1291;
    VlWide<200>/*6399:0*/ __Vtemp1292;
    VlWide<204>/*6527:0*/ __Vtemp1293;
    VlWide<208>/*6655:0*/ __Vtemp1294;
    VlWide<212>/*6783:0*/ __Vtemp1295;
    VlWide<216>/*6911:0*/ __Vtemp1296;
    VlWide<220>/*7039:0*/ __Vtemp1297;
    VlWide<224>/*7167:0*/ __Vtemp1298;
    VlWide<228>/*7295:0*/ __Vtemp1299;
    VlWide<232>/*7423:0*/ __Vtemp1300;
    VlWide<236>/*7551:0*/ __Vtemp1301;
    VlWide<240>/*7679:0*/ __Vtemp1302;
    VlWide<244>/*7807:0*/ __Vtemp1303;
    VlWide<248>/*7935:0*/ __Vtemp1304;
    VlWide<252>/*8063:0*/ __Vtemp1305;
    VlWide<256>/*8191:0*/ __Vtemp1306;
    VlWide<64>/*2047:0*/ __Vtemp1322;
    VlWide<68>/*2175:0*/ __Vtemp1323;
    VlWide<72>/*2303:0*/ __Vtemp1324;
    VlWide<76>/*2431:0*/ __Vtemp1325;
    VlWide<80>/*2559:0*/ __Vtemp1326;
    VlWide<84>/*2687:0*/ __Vtemp1327;
    VlWide<88>/*2815:0*/ __Vtemp1328;
    VlWide<92>/*2943:0*/ __Vtemp1329;
    VlWide<96>/*3071:0*/ __Vtemp1330;
    VlWide<100>/*3199:0*/ __Vtemp1331;
    VlWide<104>/*3327:0*/ __Vtemp1332;
    VlWide<108>/*3455:0*/ __Vtemp1333;
    VlWide<112>/*3583:0*/ __Vtemp1334;
    VlWide<116>/*3711:0*/ __Vtemp1335;
    VlWide<120>/*3839:0*/ __Vtemp1336;
    VlWide<124>/*3967:0*/ __Vtemp1337;
    VlWide<128>/*4095:0*/ __Vtemp1338;
    VlWide<132>/*4223:0*/ __Vtemp1339;
    VlWide<136>/*4351:0*/ __Vtemp1340;
    VlWide<140>/*4479:0*/ __Vtemp1341;
    VlWide<144>/*4607:0*/ __Vtemp1342;
    VlWide<148>/*4735:0*/ __Vtemp1343;
    VlWide<152>/*4863:0*/ __Vtemp1344;
    VlWide<156>/*4991:0*/ __Vtemp1345;
    VlWide<160>/*5119:0*/ __Vtemp1346;
    VlWide<164>/*5247:0*/ __Vtemp1347;
    VlWide<168>/*5375:0*/ __Vtemp1348;
    VlWide<172>/*5503:0*/ __Vtemp1349;
    VlWide<176>/*5631:0*/ __Vtemp1350;
    VlWide<180>/*5759:0*/ __Vtemp1351;
    VlWide<184>/*5887:0*/ __Vtemp1352;
    VlWide<188>/*6015:0*/ __Vtemp1353;
    VlWide<192>/*6143:0*/ __Vtemp1354;
    VlWide<196>/*6271:0*/ __Vtemp1355;
    VlWide<200>/*6399:0*/ __Vtemp1356;
    VlWide<204>/*6527:0*/ __Vtemp1357;
    VlWide<208>/*6655:0*/ __Vtemp1358;
    VlWide<212>/*6783:0*/ __Vtemp1359;
    VlWide<216>/*6911:0*/ __Vtemp1360;
    VlWide<220>/*7039:0*/ __Vtemp1361;
    VlWide<224>/*7167:0*/ __Vtemp1362;
    VlWide<228>/*7295:0*/ __Vtemp1363;
    VlWide<232>/*7423:0*/ __Vtemp1364;
    VlWide<236>/*7551:0*/ __Vtemp1365;
    VlWide<240>/*7679:0*/ __Vtemp1366;
    VlWide<244>/*7807:0*/ __Vtemp1367;
    VlWide<248>/*7935:0*/ __Vtemp1368;
    VlWide<252>/*8063:0*/ __Vtemp1369;
    VlWide<256>/*8191:0*/ __Vtemp1370;
    VlWide<64>/*2047:0*/ __Vtemp1386;
    VlWide<68>/*2175:0*/ __Vtemp1387;
    VlWide<72>/*2303:0*/ __Vtemp1388;
    VlWide<76>/*2431:0*/ __Vtemp1389;
    VlWide<80>/*2559:0*/ __Vtemp1390;
    VlWide<84>/*2687:0*/ __Vtemp1391;
    VlWide<88>/*2815:0*/ __Vtemp1392;
    VlWide<92>/*2943:0*/ __Vtemp1393;
    VlWide<96>/*3071:0*/ __Vtemp1394;
    VlWide<100>/*3199:0*/ __Vtemp1395;
    VlWide<104>/*3327:0*/ __Vtemp1396;
    VlWide<108>/*3455:0*/ __Vtemp1397;
    VlWide<112>/*3583:0*/ __Vtemp1398;
    VlWide<116>/*3711:0*/ __Vtemp1399;
    VlWide<120>/*3839:0*/ __Vtemp1400;
    VlWide<124>/*3967:0*/ __Vtemp1401;
    VlWide<128>/*4095:0*/ __Vtemp1402;
    VlWide<132>/*4223:0*/ __Vtemp1403;
    VlWide<136>/*4351:0*/ __Vtemp1404;
    VlWide<140>/*4479:0*/ __Vtemp1405;
    VlWide<144>/*4607:0*/ __Vtemp1406;
    VlWide<148>/*4735:0*/ __Vtemp1407;
    VlWide<152>/*4863:0*/ __Vtemp1408;
    VlWide<156>/*4991:0*/ __Vtemp1409;
    VlWide<160>/*5119:0*/ __Vtemp1410;
    VlWide<164>/*5247:0*/ __Vtemp1411;
    VlWide<168>/*5375:0*/ __Vtemp1412;
    VlWide<172>/*5503:0*/ __Vtemp1413;
    VlWide<176>/*5631:0*/ __Vtemp1414;
    VlWide<180>/*5759:0*/ __Vtemp1415;
    VlWide<184>/*5887:0*/ __Vtemp1416;
    VlWide<188>/*6015:0*/ __Vtemp1417;
    VlWide<192>/*6143:0*/ __Vtemp1418;
    VlWide<196>/*6271:0*/ __Vtemp1419;
    VlWide<200>/*6399:0*/ __Vtemp1420;
    VlWide<204>/*6527:0*/ __Vtemp1421;
    VlWide<208>/*6655:0*/ __Vtemp1422;
    VlWide<212>/*6783:0*/ __Vtemp1423;
    VlWide<216>/*6911:0*/ __Vtemp1424;
    VlWide<220>/*7039:0*/ __Vtemp1425;
    VlWide<224>/*7167:0*/ __Vtemp1426;
    VlWide<228>/*7295:0*/ __Vtemp1427;
    VlWide<232>/*7423:0*/ __Vtemp1428;
    VlWide<236>/*7551:0*/ __Vtemp1429;
    VlWide<240>/*7679:0*/ __Vtemp1430;
    VlWide<244>/*7807:0*/ __Vtemp1431;
    VlWide<248>/*7935:0*/ __Vtemp1432;
    VlWide<252>/*8063:0*/ __Vtemp1433;
    VlWide<256>/*8191:0*/ __Vtemp1434;
    VlWide<64>/*2047:0*/ __Vtemp1450;
    VlWide<68>/*2175:0*/ __Vtemp1451;
    VlWide<72>/*2303:0*/ __Vtemp1452;
    VlWide<76>/*2431:0*/ __Vtemp1453;
    VlWide<80>/*2559:0*/ __Vtemp1454;
    VlWide<84>/*2687:0*/ __Vtemp1455;
    VlWide<88>/*2815:0*/ __Vtemp1456;
    VlWide<92>/*2943:0*/ __Vtemp1457;
    VlWide<96>/*3071:0*/ __Vtemp1458;
    VlWide<100>/*3199:0*/ __Vtemp1459;
    VlWide<104>/*3327:0*/ __Vtemp1460;
    VlWide<108>/*3455:0*/ __Vtemp1461;
    VlWide<112>/*3583:0*/ __Vtemp1462;
    VlWide<116>/*3711:0*/ __Vtemp1463;
    VlWide<120>/*3839:0*/ __Vtemp1464;
    VlWide<124>/*3967:0*/ __Vtemp1465;
    VlWide<128>/*4095:0*/ __Vtemp1466;
    VlWide<132>/*4223:0*/ __Vtemp1467;
    VlWide<136>/*4351:0*/ __Vtemp1468;
    VlWide<140>/*4479:0*/ __Vtemp1469;
    VlWide<144>/*4607:0*/ __Vtemp1470;
    VlWide<148>/*4735:0*/ __Vtemp1471;
    VlWide<152>/*4863:0*/ __Vtemp1472;
    VlWide<156>/*4991:0*/ __Vtemp1473;
    VlWide<160>/*5119:0*/ __Vtemp1474;
    VlWide<164>/*5247:0*/ __Vtemp1475;
    VlWide<168>/*5375:0*/ __Vtemp1476;
    VlWide<172>/*5503:0*/ __Vtemp1477;
    VlWide<176>/*5631:0*/ __Vtemp1478;
    VlWide<180>/*5759:0*/ __Vtemp1479;
    VlWide<184>/*5887:0*/ __Vtemp1480;
    VlWide<188>/*6015:0*/ __Vtemp1481;
    VlWide<192>/*6143:0*/ __Vtemp1482;
    VlWide<196>/*6271:0*/ __Vtemp1483;
    VlWide<200>/*6399:0*/ __Vtemp1484;
    VlWide<204>/*6527:0*/ __Vtemp1485;
    VlWide<208>/*6655:0*/ __Vtemp1486;
    VlWide<212>/*6783:0*/ __Vtemp1487;
    VlWide<216>/*6911:0*/ __Vtemp1488;
    VlWide<220>/*7039:0*/ __Vtemp1489;
    VlWide<224>/*7167:0*/ __Vtemp1490;
    VlWide<228>/*7295:0*/ __Vtemp1491;
    VlWide<232>/*7423:0*/ __Vtemp1492;
    VlWide<236>/*7551:0*/ __Vtemp1493;
    VlWide<240>/*7679:0*/ __Vtemp1494;
    VlWide<244>/*7807:0*/ __Vtemp1495;
    VlWide<248>/*7935:0*/ __Vtemp1496;
    VlWide<252>/*8063:0*/ __Vtemp1497;
    VlWide<256>/*8191:0*/ __Vtemp1498;
    VlWide<8>/*255:0*/ __Vtemp1502;
    VlWide<8>/*255:0*/ __Vtemp1505;
    QData/*63:0*/ riscv_soc__DOT__core__DOT___cross_bar_1_io_fetch_cpu_data_bits_data;
    QData/*63:0*/ riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__op_data1;
    QData/*63:0*/ riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__op_data2;
    QData/*63:0*/ riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__rs2_data;
    QData/*63:0*/ riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__rs1_data;
    QData/*63:0*/ riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___add_pc_T_1;
    // Body
    vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT___T_7 
        = (0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__reg_r_cnt));
    vlSelf->riscv_soc__DOT__axi_ram__DOT___T_4 = (0U 
                                                  == (IData)(vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_rlen));
    vlSelf->riscv_soc__DOT___axi_ram_io_ram_bus_r_bits_rlast 
        = ((0U == (IData)(vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_rlen)) 
           & (IData)(vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_r_valid));
    __Vtemp882[1U] = (IData)((((QData)((IData)((((- (IData)(
                                                            (1U 
                                                             & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_wstrb) 
                                                                >> 0xfU)))) 
                                                 << 0x18U) 
                                                | ((0xff0000U 
                                                    & ((- (IData)(
                                                                  (1U 
                                                                   & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_wstrb) 
                                                                      >> 0xeU)))) 
                                                       << 0x10U)) 
                                                   | ((0xff00U 
                                                       & ((- (IData)(
                                                                     (1U 
                                                                      & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_wstrb) 
                                                                         >> 0xdU)))) 
                                                          << 8U)) 
                                                      | (0xffU 
                                                         & (- (IData)(
                                                                      (1U 
                                                                       & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_wstrb) 
                                                                          >> 0xcU)))))))))) 
                               << 0x20U) | (QData)((IData)(
                                                           (((- (IData)(
                                                                        (1U 
                                                                         & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_wstrb) 
                                                                            >> 0xbU)))) 
                                                             << 0x18U) 
                                                            | ((0xff0000U 
                                                                & ((- (IData)(
                                                                              (1U 
                                                                               & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_wstrb) 
                                                                                >> 0xaU)))) 
                                                                   << 0x10U)) 
                                                               | ((0xff00U 
                                                                   & ((- (IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_wstrb) 
                                                                                >> 9U)))) 
                                                                      << 8U)) 
                                                                  | (0xffU 
                                                                     & (- (IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_wstrb) 
                                                                                >> 8U))))))))))));
    __Vtemp882[2U] = (IData)(((((QData)((IData)((((- (IData)(
                                                             (1U 
                                                              & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_wstrb) 
                                                                 >> 0xfU)))) 
                                                  << 0x18U) 
                                                 | ((0xff0000U 
                                                     & ((- (IData)(
                                                                   (1U 
                                                                    & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_wstrb) 
                                                                       >> 0xeU)))) 
                                                        << 0x10U)) 
                                                    | ((0xff00U 
                                                        & ((- (IData)(
                                                                      (1U 
                                                                       & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_wstrb) 
                                                                          >> 0xdU)))) 
                                                           << 8U)) 
                                                       | (0xffU 
                                                          & (- (IData)(
                                                                       (1U 
                                                                        & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_wstrb) 
                                                                           >> 0xcU)))))))))) 
                                << 0x20U) | (QData)((IData)(
                                                            (((- (IData)(
                                                                         (1U 
                                                                          & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_wstrb) 
                                                                             >> 0xbU)))) 
                                                              << 0x18U) 
                                                             | ((0xff0000U 
                                                                 & ((- (IData)(
                                                                               (1U 
                                                                                & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_wstrb) 
                                                                                >> 0xaU)))) 
                                                                    << 0x10U)) 
                                                                | ((0xff00U 
                                                                    & ((- (IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_wstrb) 
                                                                                >> 9U)))) 
                                                                       << 8U)) 
                                                                   | (0xffU 
                                                                      & (- (IData)(
                                                                                (1U 
                                                                                & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_wstrb) 
                                                                                >> 8U))))))))))) 
                              >> 0x20U));
    vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__cache_mask[0U] 
        = (((- (IData)((1U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_wstrb) 
                              >> 3U)))) << 0x18U) | 
           ((0xff0000U & ((- (IData)((1U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_wstrb) 
                                            >> 2U)))) 
                          << 0x10U)) | ((0xff00U & 
                                         ((- (IData)(
                                                     (1U 
                                                      & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_wstrb) 
                                                         >> 1U)))) 
                                          << 8U)) | 
                                        (0xffU & (- (IData)(
                                                            (1U 
                                                             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_wstrb))))))));
    vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__cache_mask[1U] 
        = (((- (IData)((1U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_wstrb) 
                              >> 7U)))) << 0x18U) | 
           ((0xff0000U & ((- (IData)((1U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_wstrb) 
                                            >> 6U)))) 
                          << 0x10U)) | ((0xff00U & 
                                         ((- (IData)(
                                                     (1U 
                                                      & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_wstrb) 
                                                         >> 5U)))) 
                                          << 8U)) | 
                                        (0xffU & (- (IData)(
                                                            (1U 
                                                             & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_wstrb) 
                                                                >> 4U))))))));
    vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__cache_mask[2U] 
        = __Vtemp882[1U];
    vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__cache_mask[3U] 
        = __Vtemp882[2U];
    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___PHT_ext_R1_data 
        = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_ext__DOT__Memory
        [(0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                           >> 3U)))];
    riscv_soc__DOT__core__DOT__i_cache__DOT___w_r_pass1_val_T 
        = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_temp_r_index) 
           == (0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                >> 4U))));
    vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram0_write 
        = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_write) 
           & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_chosen_tag)));
    vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram2_write 
        = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_write) 
           & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_chosen_tag));
    riscv_soc__DOT__core__DOT___cross_bar_1_io_fetch_cpu_data_bits_data 
        = ((0U != (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0 
                   >> 0x1fU)) ? vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_rdata
            : vlSelf->riscv_soc__DOT___axi_ram_io_ram_bus_r_bits_rdata);
    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___BTB_ext_R0_data[0U] 
        = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_ext__DOT__Memory
        [(0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0 
                           >> 3U)))][0U];
    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___BTB_ext_R0_data[1U] 
        = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_ext__DOT__Memory
        [(0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0 
                           >> 3U)))][1U];
    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___BTB_ext_R0_data[2U] 
        = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_ext__DOT__Memory
        [(0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0 
                           >> 3U)))][2U];
    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___BTB_ext_R0_data[3U] 
        = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_ext__DOT__Memory
        [(0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0 
                           >> 3U)))][3U];
    vlSelf->riscv_soc__DOT__core__DOT___cross_bar_1_io_bus1_valid 
        = ((~ (IData)((0U != (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0 
                              >> 0x1fU)))) & (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_bus_valid));
    vlSelf->riscv_soc__DOT__core__DOT__commit__DOT___GEN[0U] 
        = (IData)(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_0);
    vlSelf->riscv_soc__DOT__core__DOT__commit__DOT___GEN[1U] 
        = (IData)((vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_0 
                   >> 0x20U));
    vlSelf->riscv_soc__DOT__core__DOT__commit__DOT___GEN[2U] 
        = (IData)(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_1);
    vlSelf->riscv_soc__DOT__core__DOT__commit__DOT___GEN[3U] 
        = (IData)((vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_1 
                   >> 0x20U));
    vlSelf->riscv_soc__DOT__core__DOT__commit__DOT___GEN[4U] 
        = (IData)(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_2);
    vlSelf->riscv_soc__DOT__core__DOT__commit__DOT___GEN[5U] 
        = (IData)((vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_2 
                   >> 0x20U));
    vlSelf->riscv_soc__DOT__core__DOT__commit__DOT___GEN[6U] 
        = (IData)(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_3);
    vlSelf->riscv_soc__DOT__core__DOT__commit__DOT___GEN[7U] 
        = (IData)((vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_3 
                   >> 0x20U));
    vlSelf->riscv_soc__DOT__core__DOT__commit__DOT___GEN[8U] 
        = (IData)(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_4);
    vlSelf->riscv_soc__DOT__core__DOT__commit__DOT___GEN[9U] 
        = (IData)((vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_4 
                   >> 0x20U));
    vlSelf->riscv_soc__DOT__core__DOT__commit__DOT___GEN[0xaU] 
        = (IData)(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_5);
    vlSelf->riscv_soc__DOT__core__DOT__commit__DOT___GEN[0xbU] 
        = (IData)((vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_5 
                   >> 0x20U));
    vlSelf->riscv_soc__DOT__core__DOT__commit__DOT___GEN[0xcU] 
        = (IData)(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_6);
    vlSelf->riscv_soc__DOT__core__DOT__commit__DOT___GEN[0xdU] 
        = (IData)((vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_6 
                   >> 0x20U));
    vlSelf->riscv_soc__DOT__core__DOT__commit__DOT___GEN[0xeU] 
        = (IData)(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_7);
    vlSelf->riscv_soc__DOT__core__DOT__commit__DOT___GEN[0xfU] 
        = (IData)((vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_7 
                   >> 0x20U));
    vlSelf->riscv_soc__DOT__core__DOT__commit__DOT___GEN[0x10U] 
        = (IData)(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_8);
    vlSelf->riscv_soc__DOT__core__DOT__commit__DOT___GEN[0x11U] 
        = (IData)((vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_8 
                   >> 0x20U));
    vlSelf->riscv_soc__DOT__core__DOT__commit__DOT___GEN[0x12U] 
        = (IData)(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_9);
    vlSelf->riscv_soc__DOT__core__DOT__commit__DOT___GEN[0x13U] 
        = (IData)((vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_9 
                   >> 0x20U));
    vlSelf->riscv_soc__DOT__core__DOT__commit__DOT___GEN[0x14U] 
        = (IData)(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_10);
    vlSelf->riscv_soc__DOT__core__DOT__commit__DOT___GEN[0x15U] 
        = (IData)((vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_10 
                   >> 0x20U));
    vlSelf->riscv_soc__DOT__core__DOT__commit__DOT___GEN[0x16U] 
        = (IData)(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_11);
    vlSelf->riscv_soc__DOT__core__DOT__commit__DOT___GEN[0x17U] 
        = (IData)((vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_11 
                   >> 0x20U));
    vlSelf->riscv_soc__DOT__core__DOT__commit__DOT___GEN[0x18U] 
        = (IData)(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_12);
    vlSelf->riscv_soc__DOT__core__DOT__commit__DOT___GEN[0x19U] 
        = (IData)((vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_12 
                   >> 0x20U));
    vlSelf->riscv_soc__DOT__core__DOT__commit__DOT___GEN[0x1aU] 
        = (IData)(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_13);
    vlSelf->riscv_soc__DOT__core__DOT__commit__DOT___GEN[0x1bU] 
        = (IData)((vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_13 
                   >> 0x20U));
    vlSelf->riscv_soc__DOT__core__DOT__commit__DOT___GEN[0x1cU] 
        = (IData)(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_14);
    vlSelf->riscv_soc__DOT__core__DOT__commit__DOT___GEN[0x1dU] 
        = (IData)((vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_14 
                   >> 0x20U));
    vlSelf->riscv_soc__DOT__core__DOT__commit__DOT___GEN[0x1eU] 
        = (IData)(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_15);
    vlSelf->riscv_soc__DOT__core__DOT__commit__DOT___GEN[0x1fU] 
        = (IData)((vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_15 
                   >> 0x20U));
    vlSelf->riscv_soc__DOT__core__DOT__commit__DOT___GEN[0x20U] 
        = (IData)(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_16);
    vlSelf->riscv_soc__DOT__core__DOT__commit__DOT___GEN[0x21U] 
        = (IData)((vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_16 
                   >> 0x20U));
    vlSelf->riscv_soc__DOT__core__DOT__commit__DOT___GEN[0x22U] 
        = (IData)(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_17);
    vlSelf->riscv_soc__DOT__core__DOT__commit__DOT___GEN[0x23U] 
        = (IData)((vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_17 
                   >> 0x20U));
    vlSelf->riscv_soc__DOT__core__DOT__commit__DOT___GEN[0x24U] 
        = (IData)(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_18);
    vlSelf->riscv_soc__DOT__core__DOT__commit__DOT___GEN[0x25U] 
        = (IData)((vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_18 
                   >> 0x20U));
    vlSelf->riscv_soc__DOT__core__DOT__commit__DOT___GEN[0x26U] 
        = (IData)(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_19);
    vlSelf->riscv_soc__DOT__core__DOT__commit__DOT___GEN[0x27U] 
        = (IData)((vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_19 
                   >> 0x20U));
    vlSelf->riscv_soc__DOT__core__DOT__commit__DOT___GEN[0x28U] 
        = (IData)(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_20);
    vlSelf->riscv_soc__DOT__core__DOT__commit__DOT___GEN[0x29U] 
        = (IData)((vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_20 
                   >> 0x20U));
    vlSelf->riscv_soc__DOT__core__DOT__commit__DOT___GEN[0x2aU] 
        = (IData)(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_21);
    vlSelf->riscv_soc__DOT__core__DOT__commit__DOT___GEN[0x2bU] 
        = (IData)((vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_21 
                   >> 0x20U));
    vlSelf->riscv_soc__DOT__core__DOT__commit__DOT___GEN[0x2cU] 
        = (IData)(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_22);
    vlSelf->riscv_soc__DOT__core__DOT__commit__DOT___GEN[0x2dU] 
        = (IData)((vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_22 
                   >> 0x20U));
    vlSelf->riscv_soc__DOT__core__DOT__commit__DOT___GEN[0x2eU] 
        = (IData)(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_23);
    vlSelf->riscv_soc__DOT__core__DOT__commit__DOT___GEN[0x2fU] 
        = (IData)((vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_23 
                   >> 0x20U));
    vlSelf->riscv_soc__DOT__core__DOT__commit__DOT___GEN[0x30U] 
        = (IData)(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_24);
    vlSelf->riscv_soc__DOT__core__DOT__commit__DOT___GEN[0x31U] 
        = (IData)((vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_24 
                   >> 0x20U));
    vlSelf->riscv_soc__DOT__core__DOT__commit__DOT___GEN[0x32U] 
        = (IData)(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_25);
    vlSelf->riscv_soc__DOT__core__DOT__commit__DOT___GEN[0x33U] 
        = (IData)((vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_25 
                   >> 0x20U));
    vlSelf->riscv_soc__DOT__core__DOT__commit__DOT___GEN[0x34U] 
        = (IData)(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_26);
    vlSelf->riscv_soc__DOT__core__DOT__commit__DOT___GEN[0x35U] 
        = (IData)((vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_26 
                   >> 0x20U));
    vlSelf->riscv_soc__DOT__core__DOT__commit__DOT___GEN[0x36U] 
        = (IData)(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_27);
    vlSelf->riscv_soc__DOT__core__DOT__commit__DOT___GEN[0x37U] 
        = (IData)((vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_27 
                   >> 0x20U));
    vlSelf->riscv_soc__DOT__core__DOT__commit__DOT___GEN[0x38U] 
        = (IData)(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_28);
    vlSelf->riscv_soc__DOT__core__DOT__commit__DOT___GEN[0x39U] 
        = (IData)((vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_28 
                   >> 0x20U));
    vlSelf->riscv_soc__DOT__core__DOT__commit__DOT___GEN[0x3aU] 
        = (IData)(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_29);
    vlSelf->riscv_soc__DOT__core__DOT__commit__DOT___GEN[0x3bU] 
        = (IData)((vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_29 
                   >> 0x20U));
    vlSelf->riscv_soc__DOT__core__DOT__commit__DOT___GEN[0x3cU] 
        = (IData)(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_30);
    vlSelf->riscv_soc__DOT__core__DOT__commit__DOT___GEN[0x3dU] 
        = (IData)((vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_30 
                   >> 0x20U));
    vlSelf->riscv_soc__DOT__core__DOT__commit__DOT___GEN[0x3eU] 
        = (IData)(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_31);
    vlSelf->riscv_soc__DOT__core__DOT__commit__DOT___GEN[0x3fU] 
        = (IData)((vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_31 
                   >> 0x20U));
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT___io_wb_dest_data_T_3 
        = ((IData)((0U != (9U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_valid))))
            ? vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_sys_alu_wdata
            : ((2U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_valid))
                ? vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_result_data
                : ((4U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_valid))
                    ? ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_dest_is_w)
                        ? ((8U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_exuType))
                            ? ((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_exuType))
                                ? (((QData)((IData)(
                                                    (- (IData)(
                                                               (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[0U] 
                                                                >> 0x1fU))))) 
                                    << 0x20U) | (QData)((IData)(
                                                                vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[0U])))
                                : (((QData)((IData)(
                                                    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[1U])) 
                                    << 0x20U) | (QData)((IData)(
                                                                vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[0U]))))
                            : ((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_exuType))
                                ? (((QData)((IData)(
                                                    (- (IData)(
                                                               (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_q[0U] 
                                                                >> 0x1fU))))) 
                                    << 0x20U) | (QData)((IData)(
                                                                vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_q[0U])))
                                : (((QData)((IData)(
                                                    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_q[1U])) 
                                    << 0x20U) | (QData)((IData)(
                                                                vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_q[0U])))))
                        : ((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_exuType))
                            ? (((QData)((IData)((- (IData)(
                                                           (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_result[0U] 
                                                            >> 0x1fU))))) 
                                << 0x20U) | (QData)((IData)(
                                                            vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_result[0U])))
                            : ((0U == (3U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_exuType) 
                                             >> 2U)))
                                ? (((QData)((IData)(
                                                    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_result[1U])) 
                                    << 0x20U) | (QData)((IData)(
                                                                vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_result[0U])))
                                : (((QData)((IData)(
                                                    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_result[3U])) 
                                    << 0x20U) | (QData)((IData)(
                                                                vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_result[2U]))))))
                    : 0ULL)));
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu__DOT__is_ret 
        = ((0x10U == (0x1fU & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                               >> 2U))) | (0x18U == 
                                           (0x1fU & 
                                            ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                             >> 2U))));
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT___GEN 
        = ((3U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_opType))
            ? 4U : (((6U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_opType)) 
                     | (5U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_opType)))
                     ? 2U : ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_opType)) 
                             | (2U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_opType)))));
    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT___GEN_2 
        = (1U & ((((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__is_pre_fifo_3) 
                   << 3U) | (((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__is_pre_fifo_2) 
                              << 2U) | (((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__is_pre_fifo_1) 
                                         << 1U) | (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__is_pre_fifo_0)))) 
                 >> (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__is_pre_tail)));
    vlSelf->riscv_soc__DOT__core__DOT___cross_bar_1_io_fetch_cpu_data_bits_pc 
        = ((0U != (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0 
                   >> 0x1fU)) ? vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr
            : vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0);
    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__allow_in 
        = (3U > (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__reg_ibuf_size));
    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT___GEN_0 
        = (1U & ((((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_valid_3) 
                   << 3U) | (((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_valid_2) 
                              << 2U) | (((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_valid_1) 
                                         << 1U) | (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_valid_0)))) 
                 >> (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__reg_tail)));
    vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1__DOT__ready 
        = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_sram_r_ready) 
           & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_ready) 
              & (3U > (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__reg_ibuf_size))));
    __Vtemp917[0U] = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_0;
    __Vtemp917[1U] = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_1;
    __Vtemp917[2U] = (IData)((((QData)((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_3)) 
                               << 0x20U) | (QData)((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_2))));
    __Vtemp917[3U] = (IData)(((((QData)((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_3)) 
                                << 0x20U) | (QData)((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_2))) 
                              >> 0x20U));
    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT___GEN_4 
        = (((0U == (0x1fU & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__reg_tail) 
                             << 5U))) ? 0U : (__Vtemp917[
                                              (((IData)(0x1fU) 
                                                + (0x7fU 
                                                   & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__reg_tail) 
                                                      << 5U))) 
                                               >> 5U)] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__reg_tail) 
                                                      << 5U))))) 
           | (__Vtemp917[(3U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__reg_tail))] 
              >> (0x1fU & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__reg_tail) 
                           << 5U))));
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__ready 
        = (((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_ready) 
            & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_ready)) 
           & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_ready));
    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__pre_valid 
        = (((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___BTB_ext_R0_data[3U] 
             >> 0x1aU) & ((0xffffffffffffffULL & (((QData)((IData)(
                                                                   vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___BTB_ext_R0_data[3U])) 
                                                   << 0x1eU) 
                                                  | ((QData)((IData)(
                                                                     vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___BTB_ext_R0_data[2U])) 
                                                     >> 2U))) 
                          == ((0xfffffffffffffeULL 
                               & (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0 
                                  >> 8U)) | (QData)((IData)(
                                                            (1U 
                                                             & (IData)(
                                                                       (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0 
                                                                        >> 2U)))))))) 
           & (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_ext__DOT__Memory
              [(0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0 
                                 >> 3U)))] >> 1U));
    riscv_soc__DOT__core__DOT__execute__DOT__valid 
        = ((4U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_opType))
            ? 8U : (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT___GEN));
    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vcellinp__ibuf__io_cache_buf_bits_inst 
        = ((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT___cross_bar_1_io_fetch_cpu_data_bits_pc 
                          >> 2U))) ? (IData)((riscv_soc__DOT__core__DOT___cross_bar_1_io_fetch_cpu_data_bits_data 
                                              >> 0x20U))
            : (IData)(riscv_soc__DOT__core__DOT___cross_bar_1_io_fetch_cpu_data_bits_data));
    vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___cache_stage1_io_tag_valid_index 
        = (0x3fU & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1__DOT__ready)
                     ? (IData)((vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage0__DOT__reg_addr 
                                >> 4U)) : (IData)((vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1__DOT__reg_cpu_addr 
                                                   >> 4U))));
    vlSelf->riscv_soc__DOT__core__DOT___execute_io_csr_except_is_except 
        = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_is_except) 
           & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__ready));
    vlSelf->riscv_soc__DOT__core__DOT___execute_io_csr_except_is_time_irq 
        = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_is_time_irq) 
           & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__ready));
    vlSelf->riscv_soc__DOT__core__DOT___execute_io_csr_except_is_soft_irq 
        = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_is_soft_irq) 
           & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__ready));
    vlSelf->riscv_soc__DOT__core__DOT___execute_io_commit 
        = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_commit) 
           & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__ready));
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT___io_csr_valid_T 
        = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_csr_is_w) 
           & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__ready));
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT___io_wb_valid_T_2 
        = ((((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_sys_alu_w_valid) 
             | ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_dest_is_w) 
                | (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_dest_is_w))) 
            | (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_w_rs_en)) 
           & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__ready));
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT___io_flush_T 
        = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_valid_next_pc) 
           & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__ready));
    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT___br_predictor_io_pre_next_pc 
        = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__pre_valid)
            ? ((2U == (3U & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___BTB_ext_R0_data[0U]))
                ? ((5U >= (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__reg_head))
                    ? vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__RAS_ext__DOT__Memory
                   [vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__reg_head]
                    : 0ULL) : (((QData)((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___BTB_ext_R0_data[2U])) 
                                << 0x3eU) | (((QData)((IData)(
                                                              vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___BTB_ext_R0_data[1U])) 
                                              << 0x1eU) 
                                             | ((QData)((IData)(
                                                                vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___BTB_ext_R0_data[0U])) 
                                                >> 2U))))
            : 0ULL);
    vlSelf->riscv_soc__DOT__core__DOT___commit_io_csr_pass_csr_mepc 
        = (((0x341U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_csr_addr)) 
            & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT___io_csr_valid_T))
            ? vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_csr_data
            : vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__reg_mepc);
    vlSelf->riscv_soc__DOT__core__DOT___commit_io_csr_pass_csr_mstatus 
        = (((0x300U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_csr_addr)) 
            & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT___io_csr_valid_T))
            ? vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_csr_data
            : vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__reg_mstatus);
    vlSelf->riscv_soc__DOT__core__DOT___commit_io_csr_pass_csr_mie 
        = (((0x304U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_csr_addr)) 
            & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT___io_csr_valid_T))
            ? vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_csr_data
            : vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__reg_mie);
    vlSelf->riscv_soc__DOT__core__DOT___commit_io_csr_rd_csr_data 
        = ((((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT___GEN_4 
              >> 0x14U) == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_csr_addr)) 
            & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT___io_csr_valid_T))
            ? vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_csr_data
            : ((0xb02U == (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT___GEN_4 
                           >> 0x14U)) ? vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__reg_minstret
                : ((0xb00U == (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT___GEN_4 
                               >> 0x14U)) ? vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__reg_mcycle
                    : ((0x344U == (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT___GEN_4 
                                   >> 0x14U)) ? 0ULL
                        : ((0x343U == (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT___GEN_4 
                                       >> 0x14U)) ? vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__reg_mtval
                            : ((0x342U == (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT___GEN_4 
                                           >> 0x14U))
                                ? vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__reg_mcause
                                : ((0x341U == (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT___GEN_4 
                                               >> 0x14U))
                                    ? vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__reg_mepc
                                    : ((0x340U == (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT___GEN_4 
                                                   >> 0x14U))
                                        ? vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__reg_mscratch
                                        : ((0x306U 
                                            == (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT___GEN_4 
                                                >> 0x14U))
                                            ? 0ULL : 
                                           ((0x305U 
                                             == (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT___GEN_4 
                                                 >> 0x14U))
                                             ? vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__reg_mtvec
                                             : ((0x304U 
                                                 == 
                                                 (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT___GEN_4 
                                                  >> 0x14U))
                                                 ? vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__reg_mie
                                                 : 
                                                (((((0x303U 
                                                     == 
                                                     (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT___GEN_4 
                                                      >> 0x14U)) 
                                                    | (0x302U 
                                                       == 
                                                       (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT___GEN_4 
                                                        >> 0x14U))) 
                                                   | (0x301U 
                                                      == 
                                                      (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT___GEN_4 
                                                       >> 0x14U))) 
                                                  | (0x300U 
                                                     != 
                                                     (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT___GEN_4 
                                                      >> 0x14U)))
                                                  ? 0ULL
                                                  : vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__reg_mstatus))))))))))));
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vcellinp__system_exu__io_csr_data 
        = (((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT___io_csr_valid_T) 
            & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_csr_addr) 
               == (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_csr_addr)))
            ? vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_csr_data
            : vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_csr_data);
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__rs2_data 
        = (((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT___io_wb_valid_T_2) 
            & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_dest_addr) 
               == (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs2_addr)))
            ? vlSelf->riscv_soc__DOT__core__DOT__execute__DOT___io_wb_dest_data_T_3
            : vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs2_data);
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__rs1_data 
        = (((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT___io_wb_valid_T_2) 
            & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_dest_addr) 
               == (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs1_addr)))
            ? vlSelf->riscv_soc__DOT__core__DOT__execute__DOT___io_wb_dest_data_T_3
            : vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs1_data);
    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT___io_out_flush_T 
        = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_flush) 
           | (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT___io_flush_T));
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__in_data_valid 
        = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_valid) 
           & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT___io_flush_T)));
    riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__op_data2 
        = ((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType))
            ? (((QData)((IData)((- (IData)((1U & (IData)(
                                                         (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__rs2_data 
                                                          >> 0x1fU))))))) 
                << 0x20U) | (QData)((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__rs2_data)))
            : vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__rs2_data);
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu__DOT__op_data 
        = ((0x10U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType))
            ? (((QData)((IData)((- (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_imm 
                                            >> 0x1fU))))) 
                << 0x20U) | (QData)((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_imm)))
            : vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__rs1_data);
    riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___add_pc_T_1 
        = (((2U == (7U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                          >> 2U))) ? vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__rs1_data
             : vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_pc) 
           + (((QData)((IData)((- (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_imm 
                                           >> 0x1fU))))) 
               << 0x20U) | (QData)((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_imm))));
    riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__op_data1 
        = ((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType))
            ? (((QData)((IData)((- (IData)((1U & (IData)(
                                                         (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__rs1_data 
                                                          >> 0x1fU))))))) 
                << 0x20U) | (QData)((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__rs1_data)))
            : vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__rs1_data);
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__mem_addr 
        = (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__rs1_data 
           + (((QData)((IData)((- (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_imm 
                                           >> 0x1fU))))) 
               << 0x20U) | (QData)((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_imm))));
    vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1__DOT__valid 
        = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage0__DOT__reg_valid) 
           & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT___io_out_flush_T)));
    vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_w_sram 
        = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_write) 
           & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT___io_out_flush_T)));
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT___system_exu_io_valid_T_2 
        = ((((IData)(riscv_soc__DOT__core__DOT__execute__DOT__valid) 
             >> 3U) & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__in_data_valid)) 
           & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__ready));
    riscv_soc__DOT__core__DOT__execute__DOT____Vcellinp__mu_exu__io_valid 
        = ((((IData)(riscv_soc__DOT__core__DOT__execute__DOT__valid) 
             >> 2U) & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__in_data_valid)) 
           & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__ready));
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT___alu_exu_io_valid_T_2 
        = (((IData)(riscv_soc__DOT__core__DOT__execute__DOT__valid) 
            & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__in_data_valid)) 
           & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__ready));
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vcellinp__mem_exu__io_valid 
        = (((((IData)(riscv_soc__DOT__core__DOT__execute__DOT__valid) 
              >> 1U) & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__in_data_valid)) 
            & (6U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_opType))) 
           & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__ready));
    riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__rs2_data 
        = ((2U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType))
            ? riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__op_data2
            : (((QData)((IData)((- (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_imm 
                                            >> 0x1fU))))) 
                << 0x20U) | (QData)((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_imm))));
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu__DOT__or_result 
        = (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vcellinp__system_exu__io_csr_data 
           | vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu__DOT__op_data);
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu__DOT__and_result 
        = ((~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu__DOT__op_data) 
           & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vcellinp__system_exu__io_csr_data);
    riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__is_eq 
        = (riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__op_data1 
           == riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__op_data2);
    riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__rs1_data 
        = ((3U == (3U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                         >> 5U))) ? vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_pc
            : riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__op_data1);
    VL_EXTEND_WQ(127,64, __Vtemp919, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__rs2_data);
    VL_EXTEND_WI(124,3, __Vtemp920, (7U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__mem_addr)));
    __Vtemp921[0U] = (__Vtemp920[0U] << 3U);
    __Vtemp921[1U] = ((__Vtemp920[0U] >> 0x1dU) | (
                                                   __Vtemp920[1U] 
                                                   << 3U));
    __Vtemp921[2U] = ((__Vtemp920[1U] >> 0x1dU) | (
                                                   __Vtemp920[2U] 
                                                   << 3U));
    __Vtemp921[3U] = ((__Vtemp920[2U] >> 0x1dU) | (
                                                   __Vtemp920[3U] 
                                                   << 3U));
    VL_SHIFTL_WWW(127,127,127, __Vtemp922, __Vtemp919, __Vtemp921);
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__mem_w_data[0U] 
        = __Vtemp922[0U];
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__mem_w_data[1U] 
        = __Vtemp922[1U];
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__mem_w_data[2U] 
        = __Vtemp922[2U];
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__mem_w_data[3U] 
        = (0x7fffffffU & __Vtemp922[3U]);
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT___GEN 
        = (0xffU & ((0xaU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType))
                     ? (0x7ffU & ((IData)(0xfU) << 
                                  (7U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__mem_addr))))
                     : ((6U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType))
                         ? (0x1ffU & ((IData)(3U) << 
                                      (7U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__mem_addr))))
                         : ((0xeU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType))
                             ? (0x7fffU & ((IData)(0xffU) 
                                           << (7U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__mem_addr))))
                             : ((2U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType))
                                 ? ((IData)(1U) << 
                                    (7U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__mem_addr)))
                                 : 0U)))));
    vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram0_write 
        = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_w_sram) 
           & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_chosen_tag)));
    vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram1_write 
        = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_w_sram) 
           & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_chosen_tag));
    vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram_addr 
        = (0x3fU & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_w_sram)
                     ? (IData)((vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                >> 4U)) : (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___cache_stage1_io_tag_valid_index)));
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT___system_exu_io_is_except 
        = (((0U == (0x1fU & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                             >> 2U))) | (8U == (0x1fU 
                                                & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                                   >> 2U)))) 
           & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT___system_exu_io_valid_T_2));
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT___system_exu_io_valid_next_pc 
        = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu__DOT__is_ret) 
           & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT___system_exu_io_valid_T_2));
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT____Vcellinp__div__io_valid 
        = ((IData)(riscv_soc__DOT__core__DOT__execute__DOT____Vcellinp__mu_exu__io_valid) 
           & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
              >> 4U));
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT____Vcellinp__mul__io_valid 
        = ((IData)(riscv_soc__DOT__core__DOT__execute__DOT____Vcellinp__mu_exu__io_valid) 
           & (~ ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                 >> 4U)));
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__is_pre 
        = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_is_pre) 
           & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT___alu_exu_io_valid_T_2));
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__br_valid 
        = ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_opType)) 
           & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT___alu_exu_io_valid_T_2));
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__w_mem_en 
        = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vcellinp__mem_exu__io_valid) 
           & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
              >> 1U));
    riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__chose_chancel 
        = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vcellinp__mem_exu__io_valid) 
           & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_ls_state)));
    riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__shift_rs2_data 
        = (0x3fU & ((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType))
                     ? (0x1fU & (IData)(riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__rs2_data))
                     : (IData)(riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__rs2_data)));
    VL_EXTEND_WQ(65,64, __Vtemp925, riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__rs1_data);
    VL_EXTEND_WQ(65,64, __Vtemp926, ((- (QData)((IData)(
                                                        (1U 
                                                         == 
                                                         (3U 
                                                          & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                                             >> 5U)))))) 
                                     ^ riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__rs2_data));
    VL_ADD_W(3, __Vtemp927, __Vtemp925, __Vtemp926);
    VL_EXTEND_WI(65,1, __Vtemp928, (1U == (3U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                                 >> 5U))));
    VL_ADD_W(3, __Vtemp929, __Vtemp927, __Vtemp928);
    riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___GEN[0U] 
        = __Vtemp929[0U];
    riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___GEN[1U] 
        = __Vtemp929[1U];
    riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___GEN[2U] 
        = (1U & __Vtemp929[2U]);
    vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__w_r_pass0_val 
        = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram0_write) 
           & (IData)(riscv_soc__DOT__core__DOT__i_cache__DOT___w_r_pass1_val_T));
    vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__w_r_pass1_val 
        = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram1_write) 
           & (IData)(riscv_soc__DOT__core__DOT__i_cache__DOT___w_r_pass1_val_T));
    __Vtemp945[0U] = vlSelf->riscv_soc__DOT__sram0__DOT__sram_48[0U];
    __Vtemp945[1U] = vlSelf->riscv_soc__DOT__sram0__DOT__sram_48[1U];
    __Vtemp945[2U] = vlSelf->riscv_soc__DOT__sram0__DOT__sram_48[2U];
    __Vtemp945[3U] = vlSelf->riscv_soc__DOT__sram0__DOT__sram_48[3U];
    __Vtemp945[4U] = vlSelf->riscv_soc__DOT__sram0__DOT__sram_49[0U];
    __Vtemp945[5U] = vlSelf->riscv_soc__DOT__sram0__DOT__sram_49[1U];
    __Vtemp945[6U] = vlSelf->riscv_soc__DOT__sram0__DOT__sram_49[2U];
    __Vtemp945[7U] = vlSelf->riscv_soc__DOT__sram0__DOT__sram_49[3U];
    __Vtemp945[8U] = vlSelf->riscv_soc__DOT__sram0__DOT__sram_50[0U];
    __Vtemp945[9U] = vlSelf->riscv_soc__DOT__sram0__DOT__sram_50[1U];
    __Vtemp945[0xaU] = vlSelf->riscv_soc__DOT__sram0__DOT__sram_50[2U];
    __Vtemp945[0xbU] = vlSelf->riscv_soc__DOT__sram0__DOT__sram_50[3U];
    __Vtemp945[0xcU] = vlSelf->riscv_soc__DOT__sram0__DOT__sram_51[0U];
    __Vtemp945[0xdU] = vlSelf->riscv_soc__DOT__sram0__DOT__sram_51[1U];
    __Vtemp945[0xeU] = vlSelf->riscv_soc__DOT__sram0__DOT__sram_51[2U];
    __Vtemp945[0xfU] = vlSelf->riscv_soc__DOT__sram0__DOT__sram_51[3U];
    __Vtemp945[0x10U] = vlSelf->riscv_soc__DOT__sram0__DOT__sram_52[0U];
    __Vtemp945[0x11U] = vlSelf->riscv_soc__DOT__sram0__DOT__sram_52[1U];
    __Vtemp945[0x12U] = vlSelf->riscv_soc__DOT__sram0__DOT__sram_52[2U];
    __Vtemp945[0x13U] = vlSelf->riscv_soc__DOT__sram0__DOT__sram_52[3U];
    __Vtemp945[0x14U] = vlSelf->riscv_soc__DOT__sram0__DOT__sram_53[0U];
    __Vtemp945[0x15U] = vlSelf->riscv_soc__DOT__sram0__DOT__sram_53[1U];
    __Vtemp945[0x16U] = vlSelf->riscv_soc__DOT__sram0__DOT__sram_53[2U];
    __Vtemp945[0x17U] = vlSelf->riscv_soc__DOT__sram0__DOT__sram_53[3U];
    __Vtemp945[0x18U] = vlSelf->riscv_soc__DOT__sram0__DOT__sram_54[0U];
    __Vtemp945[0x19U] = vlSelf->riscv_soc__DOT__sram0__DOT__sram_54[1U];
    __Vtemp945[0x1aU] = vlSelf->riscv_soc__DOT__sram0__DOT__sram_54[2U];
    __Vtemp945[0x1bU] = vlSelf->riscv_soc__DOT__sram0__DOT__sram_54[3U];
    __Vtemp945[0x1cU] = vlSelf->riscv_soc__DOT__sram0__DOT__sram_55[0U];
    __Vtemp945[0x1dU] = vlSelf->riscv_soc__DOT__sram0__DOT__sram_55[1U];
    __Vtemp945[0x1eU] = vlSelf->riscv_soc__DOT__sram0__DOT__sram_55[2U];
    __Vtemp945[0x1fU] = vlSelf->riscv_soc__DOT__sram0__DOT__sram_55[3U];
    __Vtemp945[0x20U] = vlSelf->riscv_soc__DOT__sram0__DOT__sram_56[0U];
    __Vtemp945[0x21U] = vlSelf->riscv_soc__DOT__sram0__DOT__sram_56[1U];
    __Vtemp945[0x22U] = vlSelf->riscv_soc__DOT__sram0__DOT__sram_56[2U];
    __Vtemp945[0x23U] = vlSelf->riscv_soc__DOT__sram0__DOT__sram_56[3U];
    __Vtemp945[0x24U] = vlSelf->riscv_soc__DOT__sram0__DOT__sram_57[0U];
    __Vtemp945[0x25U] = vlSelf->riscv_soc__DOT__sram0__DOT__sram_57[1U];
    __Vtemp945[0x26U] = vlSelf->riscv_soc__DOT__sram0__DOT__sram_57[2U];
    __Vtemp945[0x27U] = vlSelf->riscv_soc__DOT__sram0__DOT__sram_57[3U];
    __Vtemp945[0x28U] = vlSelf->riscv_soc__DOT__sram0__DOT__sram_58[0U];
    __Vtemp945[0x29U] = vlSelf->riscv_soc__DOT__sram0__DOT__sram_58[1U];
    __Vtemp945[0x2aU] = vlSelf->riscv_soc__DOT__sram0__DOT__sram_58[2U];
    __Vtemp945[0x2bU] = vlSelf->riscv_soc__DOT__sram0__DOT__sram_58[3U];
    __Vtemp945[0x2cU] = vlSelf->riscv_soc__DOT__sram0__DOT__sram_59[0U];
    __Vtemp945[0x2dU] = vlSelf->riscv_soc__DOT__sram0__DOT__sram_59[1U];
    __Vtemp945[0x2eU] = vlSelf->riscv_soc__DOT__sram0__DOT__sram_59[2U];
    __Vtemp945[0x2fU] = vlSelf->riscv_soc__DOT__sram0__DOT__sram_59[3U];
    __Vtemp945[0x30U] = vlSelf->riscv_soc__DOT__sram0__DOT__sram_60[0U];
    __Vtemp945[0x31U] = vlSelf->riscv_soc__DOT__sram0__DOT__sram_60[1U];
    __Vtemp945[0x32U] = vlSelf->riscv_soc__DOT__sram0__DOT__sram_60[2U];
    __Vtemp945[0x33U] = vlSelf->riscv_soc__DOT__sram0__DOT__sram_60[3U];
    __Vtemp945[0x34U] = vlSelf->riscv_soc__DOT__sram0__DOT__sram_61[0U];
    __Vtemp945[0x35U] = vlSelf->riscv_soc__DOT__sram0__DOT__sram_61[1U];
    __Vtemp945[0x36U] = vlSelf->riscv_soc__DOT__sram0__DOT__sram_61[2U];
    __Vtemp945[0x37U] = vlSelf->riscv_soc__DOT__sram0__DOT__sram_61[3U];
    __Vtemp945[0x38U] = vlSelf->riscv_soc__DOT__sram0__DOT__sram_62[0U];
    __Vtemp945[0x39U] = vlSelf->riscv_soc__DOT__sram0__DOT__sram_62[1U];
    __Vtemp945[0x3aU] = vlSelf->riscv_soc__DOT__sram0__DOT__sram_62[2U];
    __Vtemp945[0x3bU] = vlSelf->riscv_soc__DOT__sram0__DOT__sram_62[3U];
    __Vtemp945[0x3cU] = vlSelf->riscv_soc__DOT__sram0__DOT__sram_63[0U];
    __Vtemp945[0x3dU] = vlSelf->riscv_soc__DOT__sram0__DOT__sram_63[1U];
    __Vtemp945[0x3eU] = vlSelf->riscv_soc__DOT__sram0__DOT__sram_63[2U];
    __Vtemp945[0x3fU] = vlSelf->riscv_soc__DOT__sram0__DOT__sram_63[3U];
    VL_CONCAT_WWW(2176,2048,128, __Vtemp946, __Vtemp945, vlSelf->riscv_soc__DOT__sram0__DOT__sram_47);
    VL_CONCAT_WWW(2304,2176,128, __Vtemp947, __Vtemp946, vlSelf->riscv_soc__DOT__sram0__DOT__sram_46);
    VL_CONCAT_WWW(2432,2304,128, __Vtemp948, __Vtemp947, vlSelf->riscv_soc__DOT__sram0__DOT__sram_45);
    VL_CONCAT_WWW(2560,2432,128, __Vtemp949, __Vtemp948, vlSelf->riscv_soc__DOT__sram0__DOT__sram_44);
    VL_CONCAT_WWW(2688,2560,128, __Vtemp950, __Vtemp949, vlSelf->riscv_soc__DOT__sram0__DOT__sram_43);
    VL_CONCAT_WWW(2816,2688,128, __Vtemp951, __Vtemp950, vlSelf->riscv_soc__DOT__sram0__DOT__sram_42);
    VL_CONCAT_WWW(2944,2816,128, __Vtemp952, __Vtemp951, vlSelf->riscv_soc__DOT__sram0__DOT__sram_41);
    VL_CONCAT_WWW(3072,2944,128, __Vtemp953, __Vtemp952, vlSelf->riscv_soc__DOT__sram0__DOT__sram_40);
    VL_CONCAT_WWW(3200,3072,128, __Vtemp954, __Vtemp953, vlSelf->riscv_soc__DOT__sram0__DOT__sram_39);
    VL_CONCAT_WWW(3328,3200,128, __Vtemp955, __Vtemp954, vlSelf->riscv_soc__DOT__sram0__DOT__sram_38);
    VL_CONCAT_WWW(3456,3328,128, __Vtemp956, __Vtemp955, vlSelf->riscv_soc__DOT__sram0__DOT__sram_37);
    VL_CONCAT_WWW(3584,3456,128, __Vtemp957, __Vtemp956, vlSelf->riscv_soc__DOT__sram0__DOT__sram_36);
    VL_CONCAT_WWW(3712,3584,128, __Vtemp958, __Vtemp957, vlSelf->riscv_soc__DOT__sram0__DOT__sram_35);
    VL_CONCAT_WWW(3840,3712,128, __Vtemp959, __Vtemp958, vlSelf->riscv_soc__DOT__sram0__DOT__sram_34);
    VL_CONCAT_WWW(3968,3840,128, __Vtemp960, __Vtemp959, vlSelf->riscv_soc__DOT__sram0__DOT__sram_33);
    VL_CONCAT_WWW(4096,3968,128, __Vtemp961, __Vtemp960, vlSelf->riscv_soc__DOT__sram0__DOT__sram_32);
    VL_CONCAT_WWW(4224,4096,128, __Vtemp962, __Vtemp961, vlSelf->riscv_soc__DOT__sram0__DOT__sram_31);
    VL_CONCAT_WWW(4352,4224,128, __Vtemp963, __Vtemp962, vlSelf->riscv_soc__DOT__sram0__DOT__sram_30);
    VL_CONCAT_WWW(4480,4352,128, __Vtemp964, __Vtemp963, vlSelf->riscv_soc__DOT__sram0__DOT__sram_29);
    VL_CONCAT_WWW(4608,4480,128, __Vtemp965, __Vtemp964, vlSelf->riscv_soc__DOT__sram0__DOT__sram_28);
    VL_CONCAT_WWW(4736,4608,128, __Vtemp966, __Vtemp965, vlSelf->riscv_soc__DOT__sram0__DOT__sram_27);
    VL_CONCAT_WWW(4864,4736,128, __Vtemp967, __Vtemp966, vlSelf->riscv_soc__DOT__sram0__DOT__sram_26);
    VL_CONCAT_WWW(4992,4864,128, __Vtemp968, __Vtemp967, vlSelf->riscv_soc__DOT__sram0__DOT__sram_25);
    VL_CONCAT_WWW(5120,4992,128, __Vtemp969, __Vtemp968, vlSelf->riscv_soc__DOT__sram0__DOT__sram_24);
    VL_CONCAT_WWW(5248,5120,128, __Vtemp970, __Vtemp969, vlSelf->riscv_soc__DOT__sram0__DOT__sram_23);
    VL_CONCAT_WWW(5376,5248,128, __Vtemp971, __Vtemp970, vlSelf->riscv_soc__DOT__sram0__DOT__sram_22);
    VL_CONCAT_WWW(5504,5376,128, __Vtemp972, __Vtemp971, vlSelf->riscv_soc__DOT__sram0__DOT__sram_21);
    VL_CONCAT_WWW(5632,5504,128, __Vtemp973, __Vtemp972, vlSelf->riscv_soc__DOT__sram0__DOT__sram_20);
    VL_CONCAT_WWW(5760,5632,128, __Vtemp974, __Vtemp973, vlSelf->riscv_soc__DOT__sram0__DOT__sram_19);
    VL_CONCAT_WWW(5888,5760,128, __Vtemp975, __Vtemp974, vlSelf->riscv_soc__DOT__sram0__DOT__sram_18);
    VL_CONCAT_WWW(6016,5888,128, __Vtemp976, __Vtemp975, vlSelf->riscv_soc__DOT__sram0__DOT__sram_17);
    VL_CONCAT_WWW(6144,6016,128, __Vtemp977, __Vtemp976, vlSelf->riscv_soc__DOT__sram0__DOT__sram_16);
    VL_CONCAT_WWW(6272,6144,128, __Vtemp978, __Vtemp977, vlSelf->riscv_soc__DOT__sram0__DOT__sram_15);
    VL_CONCAT_WWW(6400,6272,128, __Vtemp979, __Vtemp978, vlSelf->riscv_soc__DOT__sram0__DOT__sram_14);
    VL_CONCAT_WWW(6528,6400,128, __Vtemp980, __Vtemp979, vlSelf->riscv_soc__DOT__sram0__DOT__sram_13);
    VL_CONCAT_WWW(6656,6528,128, __Vtemp981, __Vtemp980, vlSelf->riscv_soc__DOT__sram0__DOT__sram_12);
    VL_CONCAT_WWW(6784,6656,128, __Vtemp982, __Vtemp981, vlSelf->riscv_soc__DOT__sram0__DOT__sram_11);
    VL_CONCAT_WWW(6912,6784,128, __Vtemp983, __Vtemp982, vlSelf->riscv_soc__DOT__sram0__DOT__sram_10);
    VL_CONCAT_WWW(7040,6912,128, __Vtemp984, __Vtemp983, vlSelf->riscv_soc__DOT__sram0__DOT__sram_9);
    VL_CONCAT_WWW(7168,7040,128, __Vtemp985, __Vtemp984, vlSelf->riscv_soc__DOT__sram0__DOT__sram_8);
    VL_CONCAT_WWW(7296,7168,128, __Vtemp986, __Vtemp985, vlSelf->riscv_soc__DOT__sram0__DOT__sram_7);
    VL_CONCAT_WWW(7424,7296,128, __Vtemp987, __Vtemp986, vlSelf->riscv_soc__DOT__sram0__DOT__sram_6);
    VL_CONCAT_WWW(7552,7424,128, __Vtemp988, __Vtemp987, vlSelf->riscv_soc__DOT__sram0__DOT__sram_5);
    VL_CONCAT_WWW(7680,7552,128, __Vtemp989, __Vtemp988, vlSelf->riscv_soc__DOT__sram0__DOT__sram_4);
    VL_CONCAT_WWW(7808,7680,128, __Vtemp990, __Vtemp989, vlSelf->riscv_soc__DOT__sram0__DOT__sram_3);
    VL_CONCAT_WWW(7936,7808,128, __Vtemp991, __Vtemp990, vlSelf->riscv_soc__DOT__sram0__DOT__sram_2);
    VL_CONCAT_WWW(8064,7936,128, __Vtemp992, __Vtemp991, vlSelf->riscv_soc__DOT__sram0__DOT__sram_1);
    VL_CONCAT_WWW(8192,8064,128, __Vtemp993, __Vtemp992, vlSelf->riscv_soc__DOT__sram0__DOT__sram_0);
    vlSelf->riscv_soc__DOT__sram0__DOT___GEN_1[0U] 
        = (((0U == (0x1fU & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram_addr) 
                             << 7U))) ? 0U : (__Vtemp993[
                                              ((IData)(1U) 
                                               + (0xfcU 
                                                  & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram_addr) 
                                                     << 2U)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram_addr) 
                                                      << 7U))))) 
           | (__Vtemp993[(0xfcU & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram_addr) 
                                   << 2U))] >> (0x1fU 
                                                & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram_addr) 
                                                   << 7U))));
    vlSelf->riscv_soc__DOT__sram0__DOT___GEN_1[1U] 
        = (((0U == (0x1fU & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram_addr) 
                             << 7U))) ? 0U : (__Vtemp993[
                                              ((IData)(2U) 
                                               + (0xfcU 
                                                  & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram_addr) 
                                                     << 2U)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram_addr) 
                                                      << 7U))))) 
           | (__Vtemp993[((IData)(1U) + (0xfcU & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram_addr) 
                                                  << 2U)))] 
              >> (0x1fU & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram_addr) 
                           << 7U))));
    vlSelf->riscv_soc__DOT__sram0__DOT___GEN_1[2U] 
        = (((0U == (0x1fU & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram_addr) 
                             << 7U))) ? 0U : (__Vtemp993[
                                              ((IData)(3U) 
                                               + (0xfcU 
                                                  & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram_addr) 
                                                     << 2U)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram_addr) 
                                                      << 7U))))) 
           | (__Vtemp993[((IData)(2U) + (0xfcU & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram_addr) 
                                                  << 2U)))] 
              >> (0x1fU & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram_addr) 
                           << 7U))));
    vlSelf->riscv_soc__DOT__sram0__DOT___GEN_1[3U] 
        = (((0U == (0x1fU & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram_addr) 
                             << 7U))) ? 0U : (__Vtemp993[
                                              ((IData)(4U) 
                                               + (0xfcU 
                                                  & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram_addr) 
                                                     << 2U)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram_addr) 
                                                      << 7U))))) 
           | (__Vtemp993[((IData)(3U) + (0xfcU & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram_addr) 
                                                  << 2U)))] 
              >> (0x1fU & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram_addr) 
                           << 7U))));
    __Vtemp1009[0U] = vlSelf->riscv_soc__DOT__sram1__DOT__sram_48[0U];
    __Vtemp1009[1U] = vlSelf->riscv_soc__DOT__sram1__DOT__sram_48[1U];
    __Vtemp1009[2U] = vlSelf->riscv_soc__DOT__sram1__DOT__sram_48[2U];
    __Vtemp1009[3U] = vlSelf->riscv_soc__DOT__sram1__DOT__sram_48[3U];
    __Vtemp1009[4U] = vlSelf->riscv_soc__DOT__sram1__DOT__sram_49[0U];
    __Vtemp1009[5U] = vlSelf->riscv_soc__DOT__sram1__DOT__sram_49[1U];
    __Vtemp1009[6U] = vlSelf->riscv_soc__DOT__sram1__DOT__sram_49[2U];
    __Vtemp1009[7U] = vlSelf->riscv_soc__DOT__sram1__DOT__sram_49[3U];
    __Vtemp1009[8U] = vlSelf->riscv_soc__DOT__sram1__DOT__sram_50[0U];
    __Vtemp1009[9U] = vlSelf->riscv_soc__DOT__sram1__DOT__sram_50[1U];
    __Vtemp1009[0xaU] = vlSelf->riscv_soc__DOT__sram1__DOT__sram_50[2U];
    __Vtemp1009[0xbU] = vlSelf->riscv_soc__DOT__sram1__DOT__sram_50[3U];
    __Vtemp1009[0xcU] = vlSelf->riscv_soc__DOT__sram1__DOT__sram_51[0U];
    __Vtemp1009[0xdU] = vlSelf->riscv_soc__DOT__sram1__DOT__sram_51[1U];
    __Vtemp1009[0xeU] = vlSelf->riscv_soc__DOT__sram1__DOT__sram_51[2U];
    __Vtemp1009[0xfU] = vlSelf->riscv_soc__DOT__sram1__DOT__sram_51[3U];
    __Vtemp1009[0x10U] = vlSelf->riscv_soc__DOT__sram1__DOT__sram_52[0U];
    __Vtemp1009[0x11U] = vlSelf->riscv_soc__DOT__sram1__DOT__sram_52[1U];
    __Vtemp1009[0x12U] = vlSelf->riscv_soc__DOT__sram1__DOT__sram_52[2U];
    __Vtemp1009[0x13U] = vlSelf->riscv_soc__DOT__sram1__DOT__sram_52[3U];
    __Vtemp1009[0x14U] = vlSelf->riscv_soc__DOT__sram1__DOT__sram_53[0U];
    __Vtemp1009[0x15U] = vlSelf->riscv_soc__DOT__sram1__DOT__sram_53[1U];
    __Vtemp1009[0x16U] = vlSelf->riscv_soc__DOT__sram1__DOT__sram_53[2U];
    __Vtemp1009[0x17U] = vlSelf->riscv_soc__DOT__sram1__DOT__sram_53[3U];
    __Vtemp1009[0x18U] = vlSelf->riscv_soc__DOT__sram1__DOT__sram_54[0U];
    __Vtemp1009[0x19U] = vlSelf->riscv_soc__DOT__sram1__DOT__sram_54[1U];
    __Vtemp1009[0x1aU] = vlSelf->riscv_soc__DOT__sram1__DOT__sram_54[2U];
    __Vtemp1009[0x1bU] = vlSelf->riscv_soc__DOT__sram1__DOT__sram_54[3U];
    __Vtemp1009[0x1cU] = vlSelf->riscv_soc__DOT__sram1__DOT__sram_55[0U];
    __Vtemp1009[0x1dU] = vlSelf->riscv_soc__DOT__sram1__DOT__sram_55[1U];
    __Vtemp1009[0x1eU] = vlSelf->riscv_soc__DOT__sram1__DOT__sram_55[2U];
    __Vtemp1009[0x1fU] = vlSelf->riscv_soc__DOT__sram1__DOT__sram_55[3U];
    __Vtemp1009[0x20U] = vlSelf->riscv_soc__DOT__sram1__DOT__sram_56[0U];
    __Vtemp1009[0x21U] = vlSelf->riscv_soc__DOT__sram1__DOT__sram_56[1U];
    __Vtemp1009[0x22U] = vlSelf->riscv_soc__DOT__sram1__DOT__sram_56[2U];
    __Vtemp1009[0x23U] = vlSelf->riscv_soc__DOT__sram1__DOT__sram_56[3U];
    __Vtemp1009[0x24U] = vlSelf->riscv_soc__DOT__sram1__DOT__sram_57[0U];
    __Vtemp1009[0x25U] = vlSelf->riscv_soc__DOT__sram1__DOT__sram_57[1U];
    __Vtemp1009[0x26U] = vlSelf->riscv_soc__DOT__sram1__DOT__sram_57[2U];
    __Vtemp1009[0x27U] = vlSelf->riscv_soc__DOT__sram1__DOT__sram_57[3U];
    __Vtemp1009[0x28U] = vlSelf->riscv_soc__DOT__sram1__DOT__sram_58[0U];
    __Vtemp1009[0x29U] = vlSelf->riscv_soc__DOT__sram1__DOT__sram_58[1U];
    __Vtemp1009[0x2aU] = vlSelf->riscv_soc__DOT__sram1__DOT__sram_58[2U];
    __Vtemp1009[0x2bU] = vlSelf->riscv_soc__DOT__sram1__DOT__sram_58[3U];
    __Vtemp1009[0x2cU] = vlSelf->riscv_soc__DOT__sram1__DOT__sram_59[0U];
    __Vtemp1009[0x2dU] = vlSelf->riscv_soc__DOT__sram1__DOT__sram_59[1U];
    __Vtemp1009[0x2eU] = vlSelf->riscv_soc__DOT__sram1__DOT__sram_59[2U];
    __Vtemp1009[0x2fU] = vlSelf->riscv_soc__DOT__sram1__DOT__sram_59[3U];
    __Vtemp1009[0x30U] = vlSelf->riscv_soc__DOT__sram1__DOT__sram_60[0U];
    __Vtemp1009[0x31U] = vlSelf->riscv_soc__DOT__sram1__DOT__sram_60[1U];
    __Vtemp1009[0x32U] = vlSelf->riscv_soc__DOT__sram1__DOT__sram_60[2U];
    __Vtemp1009[0x33U] = vlSelf->riscv_soc__DOT__sram1__DOT__sram_60[3U];
    __Vtemp1009[0x34U] = vlSelf->riscv_soc__DOT__sram1__DOT__sram_61[0U];
    __Vtemp1009[0x35U] = vlSelf->riscv_soc__DOT__sram1__DOT__sram_61[1U];
    __Vtemp1009[0x36U] = vlSelf->riscv_soc__DOT__sram1__DOT__sram_61[2U];
    __Vtemp1009[0x37U] = vlSelf->riscv_soc__DOT__sram1__DOT__sram_61[3U];
    __Vtemp1009[0x38U] = vlSelf->riscv_soc__DOT__sram1__DOT__sram_62[0U];
    __Vtemp1009[0x39U] = vlSelf->riscv_soc__DOT__sram1__DOT__sram_62[1U];
    __Vtemp1009[0x3aU] = vlSelf->riscv_soc__DOT__sram1__DOT__sram_62[2U];
    __Vtemp1009[0x3bU] = vlSelf->riscv_soc__DOT__sram1__DOT__sram_62[3U];
    __Vtemp1009[0x3cU] = vlSelf->riscv_soc__DOT__sram1__DOT__sram_63[0U];
    __Vtemp1009[0x3dU] = vlSelf->riscv_soc__DOT__sram1__DOT__sram_63[1U];
    __Vtemp1009[0x3eU] = vlSelf->riscv_soc__DOT__sram1__DOT__sram_63[2U];
    __Vtemp1009[0x3fU] = vlSelf->riscv_soc__DOT__sram1__DOT__sram_63[3U];
    VL_CONCAT_WWW(2176,2048,128, __Vtemp1010, __Vtemp1009, vlSelf->riscv_soc__DOT__sram1__DOT__sram_47);
    VL_CONCAT_WWW(2304,2176,128, __Vtemp1011, __Vtemp1010, vlSelf->riscv_soc__DOT__sram1__DOT__sram_46);
    VL_CONCAT_WWW(2432,2304,128, __Vtemp1012, __Vtemp1011, vlSelf->riscv_soc__DOT__sram1__DOT__sram_45);
    VL_CONCAT_WWW(2560,2432,128, __Vtemp1013, __Vtemp1012, vlSelf->riscv_soc__DOT__sram1__DOT__sram_44);
    VL_CONCAT_WWW(2688,2560,128, __Vtemp1014, __Vtemp1013, vlSelf->riscv_soc__DOT__sram1__DOT__sram_43);
    VL_CONCAT_WWW(2816,2688,128, __Vtemp1015, __Vtemp1014, vlSelf->riscv_soc__DOT__sram1__DOT__sram_42);
    VL_CONCAT_WWW(2944,2816,128, __Vtemp1016, __Vtemp1015, vlSelf->riscv_soc__DOT__sram1__DOT__sram_41);
    VL_CONCAT_WWW(3072,2944,128, __Vtemp1017, __Vtemp1016, vlSelf->riscv_soc__DOT__sram1__DOT__sram_40);
    VL_CONCAT_WWW(3200,3072,128, __Vtemp1018, __Vtemp1017, vlSelf->riscv_soc__DOT__sram1__DOT__sram_39);
    VL_CONCAT_WWW(3328,3200,128, __Vtemp1019, __Vtemp1018, vlSelf->riscv_soc__DOT__sram1__DOT__sram_38);
    VL_CONCAT_WWW(3456,3328,128, __Vtemp1020, __Vtemp1019, vlSelf->riscv_soc__DOT__sram1__DOT__sram_37);
    VL_CONCAT_WWW(3584,3456,128, __Vtemp1021, __Vtemp1020, vlSelf->riscv_soc__DOT__sram1__DOT__sram_36);
    VL_CONCAT_WWW(3712,3584,128, __Vtemp1022, __Vtemp1021, vlSelf->riscv_soc__DOT__sram1__DOT__sram_35);
    VL_CONCAT_WWW(3840,3712,128, __Vtemp1023, __Vtemp1022, vlSelf->riscv_soc__DOT__sram1__DOT__sram_34);
    VL_CONCAT_WWW(3968,3840,128, __Vtemp1024, __Vtemp1023, vlSelf->riscv_soc__DOT__sram1__DOT__sram_33);
    VL_CONCAT_WWW(4096,3968,128, __Vtemp1025, __Vtemp1024, vlSelf->riscv_soc__DOT__sram1__DOT__sram_32);
    VL_CONCAT_WWW(4224,4096,128, __Vtemp1026, __Vtemp1025, vlSelf->riscv_soc__DOT__sram1__DOT__sram_31);
    VL_CONCAT_WWW(4352,4224,128, __Vtemp1027, __Vtemp1026, vlSelf->riscv_soc__DOT__sram1__DOT__sram_30);
    VL_CONCAT_WWW(4480,4352,128, __Vtemp1028, __Vtemp1027, vlSelf->riscv_soc__DOT__sram1__DOT__sram_29);
    VL_CONCAT_WWW(4608,4480,128, __Vtemp1029, __Vtemp1028, vlSelf->riscv_soc__DOT__sram1__DOT__sram_28);
    VL_CONCAT_WWW(4736,4608,128, __Vtemp1030, __Vtemp1029, vlSelf->riscv_soc__DOT__sram1__DOT__sram_27);
    VL_CONCAT_WWW(4864,4736,128, __Vtemp1031, __Vtemp1030, vlSelf->riscv_soc__DOT__sram1__DOT__sram_26);
    VL_CONCAT_WWW(4992,4864,128, __Vtemp1032, __Vtemp1031, vlSelf->riscv_soc__DOT__sram1__DOT__sram_25);
    VL_CONCAT_WWW(5120,4992,128, __Vtemp1033, __Vtemp1032, vlSelf->riscv_soc__DOT__sram1__DOT__sram_24);
    VL_CONCAT_WWW(5248,5120,128, __Vtemp1034, __Vtemp1033, vlSelf->riscv_soc__DOT__sram1__DOT__sram_23);
    VL_CONCAT_WWW(5376,5248,128, __Vtemp1035, __Vtemp1034, vlSelf->riscv_soc__DOT__sram1__DOT__sram_22);
    VL_CONCAT_WWW(5504,5376,128, __Vtemp1036, __Vtemp1035, vlSelf->riscv_soc__DOT__sram1__DOT__sram_21);
    VL_CONCAT_WWW(5632,5504,128, __Vtemp1037, __Vtemp1036, vlSelf->riscv_soc__DOT__sram1__DOT__sram_20);
    VL_CONCAT_WWW(5760,5632,128, __Vtemp1038, __Vtemp1037, vlSelf->riscv_soc__DOT__sram1__DOT__sram_19);
    VL_CONCAT_WWW(5888,5760,128, __Vtemp1039, __Vtemp1038, vlSelf->riscv_soc__DOT__sram1__DOT__sram_18);
    VL_CONCAT_WWW(6016,5888,128, __Vtemp1040, __Vtemp1039, vlSelf->riscv_soc__DOT__sram1__DOT__sram_17);
    VL_CONCAT_WWW(6144,6016,128, __Vtemp1041, __Vtemp1040, vlSelf->riscv_soc__DOT__sram1__DOT__sram_16);
    VL_CONCAT_WWW(6272,6144,128, __Vtemp1042, __Vtemp1041, vlSelf->riscv_soc__DOT__sram1__DOT__sram_15);
    VL_CONCAT_WWW(6400,6272,128, __Vtemp1043, __Vtemp1042, vlSelf->riscv_soc__DOT__sram1__DOT__sram_14);
    VL_CONCAT_WWW(6528,6400,128, __Vtemp1044, __Vtemp1043, vlSelf->riscv_soc__DOT__sram1__DOT__sram_13);
    VL_CONCAT_WWW(6656,6528,128, __Vtemp1045, __Vtemp1044, vlSelf->riscv_soc__DOT__sram1__DOT__sram_12);
    VL_CONCAT_WWW(6784,6656,128, __Vtemp1046, __Vtemp1045, vlSelf->riscv_soc__DOT__sram1__DOT__sram_11);
    VL_CONCAT_WWW(6912,6784,128, __Vtemp1047, __Vtemp1046, vlSelf->riscv_soc__DOT__sram1__DOT__sram_10);
    VL_CONCAT_WWW(7040,6912,128, __Vtemp1048, __Vtemp1047, vlSelf->riscv_soc__DOT__sram1__DOT__sram_9);
    VL_CONCAT_WWW(7168,7040,128, __Vtemp1049, __Vtemp1048, vlSelf->riscv_soc__DOT__sram1__DOT__sram_8);
    VL_CONCAT_WWW(7296,7168,128, __Vtemp1050, __Vtemp1049, vlSelf->riscv_soc__DOT__sram1__DOT__sram_7);
    VL_CONCAT_WWW(7424,7296,128, __Vtemp1051, __Vtemp1050, vlSelf->riscv_soc__DOT__sram1__DOT__sram_6);
    VL_CONCAT_WWW(7552,7424,128, __Vtemp1052, __Vtemp1051, vlSelf->riscv_soc__DOT__sram1__DOT__sram_5);
    VL_CONCAT_WWW(7680,7552,128, __Vtemp1053, __Vtemp1052, vlSelf->riscv_soc__DOT__sram1__DOT__sram_4);
    VL_CONCAT_WWW(7808,7680,128, __Vtemp1054, __Vtemp1053, vlSelf->riscv_soc__DOT__sram1__DOT__sram_3);
    VL_CONCAT_WWW(7936,7808,128, __Vtemp1055, __Vtemp1054, vlSelf->riscv_soc__DOT__sram1__DOT__sram_2);
    VL_CONCAT_WWW(8064,7936,128, __Vtemp1056, __Vtemp1055, vlSelf->riscv_soc__DOT__sram1__DOT__sram_1);
    VL_CONCAT_WWW(8192,8064,128, __Vtemp1057, __Vtemp1056, vlSelf->riscv_soc__DOT__sram1__DOT__sram_0);
    vlSelf->riscv_soc__DOT__sram1__DOT___GEN_1[0U] 
        = (((0U == (0x1fU & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram_addr) 
                             << 7U))) ? 0U : (__Vtemp1057[
                                              ((IData)(1U) 
                                               + (0xfcU 
                                                  & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram_addr) 
                                                     << 2U)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram_addr) 
                                                      << 7U))))) 
           | (__Vtemp1057[(0xfcU & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram_addr) 
                                    << 2U))] >> (0x1fU 
                                                 & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram_addr) 
                                                    << 7U))));
    vlSelf->riscv_soc__DOT__sram1__DOT___GEN_1[1U] 
        = (((0U == (0x1fU & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram_addr) 
                             << 7U))) ? 0U : (__Vtemp1057[
                                              ((IData)(2U) 
                                               + (0xfcU 
                                                  & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram_addr) 
                                                     << 2U)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram_addr) 
                                                      << 7U))))) 
           | (__Vtemp1057[((IData)(1U) + (0xfcU & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram_addr) 
                                                   << 2U)))] 
              >> (0x1fU & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram_addr) 
                           << 7U))));
    vlSelf->riscv_soc__DOT__sram1__DOT___GEN_1[2U] 
        = (((0U == (0x1fU & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram_addr) 
                             << 7U))) ? 0U : (__Vtemp1057[
                                              ((IData)(3U) 
                                               + (0xfcU 
                                                  & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram_addr) 
                                                     << 2U)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram_addr) 
                                                      << 7U))))) 
           | (__Vtemp1057[((IData)(2U) + (0xfcU & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram_addr) 
                                                   << 2U)))] 
              >> (0x1fU & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram_addr) 
                           << 7U))));
    vlSelf->riscv_soc__DOT__sram1__DOT___GEN_1[3U] 
        = (((0U == (0x1fU & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram_addr) 
                             << 7U))) ? 0U : (__Vtemp1057[
                                              ((IData)(4U) 
                                               + (0xfcU 
                                                  & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram_addr) 
                                                     << 2U)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram_addr) 
                                                      << 7U))))) 
           | (__Vtemp1057[((IData)(3U) + (0xfcU & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram_addr) 
                                                   << 2U)))] 
              >> (0x1fU & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram_addr) 
                           << 7U))));
    __Vtemp1073[0U] = vlSelf->riscv_soc__DOT__sram2__DOT__sram_48[0U];
    __Vtemp1073[1U] = vlSelf->riscv_soc__DOT__sram2__DOT__sram_48[1U];
    __Vtemp1073[2U] = vlSelf->riscv_soc__DOT__sram2__DOT__sram_48[2U];
    __Vtemp1073[3U] = vlSelf->riscv_soc__DOT__sram2__DOT__sram_48[3U];
    __Vtemp1073[4U] = vlSelf->riscv_soc__DOT__sram2__DOT__sram_49[0U];
    __Vtemp1073[5U] = vlSelf->riscv_soc__DOT__sram2__DOT__sram_49[1U];
    __Vtemp1073[6U] = vlSelf->riscv_soc__DOT__sram2__DOT__sram_49[2U];
    __Vtemp1073[7U] = vlSelf->riscv_soc__DOT__sram2__DOT__sram_49[3U];
    __Vtemp1073[8U] = vlSelf->riscv_soc__DOT__sram2__DOT__sram_50[0U];
    __Vtemp1073[9U] = vlSelf->riscv_soc__DOT__sram2__DOT__sram_50[1U];
    __Vtemp1073[0xaU] = vlSelf->riscv_soc__DOT__sram2__DOT__sram_50[2U];
    __Vtemp1073[0xbU] = vlSelf->riscv_soc__DOT__sram2__DOT__sram_50[3U];
    __Vtemp1073[0xcU] = vlSelf->riscv_soc__DOT__sram2__DOT__sram_51[0U];
    __Vtemp1073[0xdU] = vlSelf->riscv_soc__DOT__sram2__DOT__sram_51[1U];
    __Vtemp1073[0xeU] = vlSelf->riscv_soc__DOT__sram2__DOT__sram_51[2U];
    __Vtemp1073[0xfU] = vlSelf->riscv_soc__DOT__sram2__DOT__sram_51[3U];
    __Vtemp1073[0x10U] = vlSelf->riscv_soc__DOT__sram2__DOT__sram_52[0U];
    __Vtemp1073[0x11U] = vlSelf->riscv_soc__DOT__sram2__DOT__sram_52[1U];
    __Vtemp1073[0x12U] = vlSelf->riscv_soc__DOT__sram2__DOT__sram_52[2U];
    __Vtemp1073[0x13U] = vlSelf->riscv_soc__DOT__sram2__DOT__sram_52[3U];
    __Vtemp1073[0x14U] = vlSelf->riscv_soc__DOT__sram2__DOT__sram_53[0U];
    __Vtemp1073[0x15U] = vlSelf->riscv_soc__DOT__sram2__DOT__sram_53[1U];
    __Vtemp1073[0x16U] = vlSelf->riscv_soc__DOT__sram2__DOT__sram_53[2U];
    __Vtemp1073[0x17U] = vlSelf->riscv_soc__DOT__sram2__DOT__sram_53[3U];
    __Vtemp1073[0x18U] = vlSelf->riscv_soc__DOT__sram2__DOT__sram_54[0U];
    __Vtemp1073[0x19U] = vlSelf->riscv_soc__DOT__sram2__DOT__sram_54[1U];
    __Vtemp1073[0x1aU] = vlSelf->riscv_soc__DOT__sram2__DOT__sram_54[2U];
    __Vtemp1073[0x1bU] = vlSelf->riscv_soc__DOT__sram2__DOT__sram_54[3U];
    __Vtemp1073[0x1cU] = vlSelf->riscv_soc__DOT__sram2__DOT__sram_55[0U];
    __Vtemp1073[0x1dU] = vlSelf->riscv_soc__DOT__sram2__DOT__sram_55[1U];
    __Vtemp1073[0x1eU] = vlSelf->riscv_soc__DOT__sram2__DOT__sram_55[2U];
    __Vtemp1073[0x1fU] = vlSelf->riscv_soc__DOT__sram2__DOT__sram_55[3U];
    __Vtemp1073[0x20U] = vlSelf->riscv_soc__DOT__sram2__DOT__sram_56[0U];
    __Vtemp1073[0x21U] = vlSelf->riscv_soc__DOT__sram2__DOT__sram_56[1U];
    __Vtemp1073[0x22U] = vlSelf->riscv_soc__DOT__sram2__DOT__sram_56[2U];
    __Vtemp1073[0x23U] = vlSelf->riscv_soc__DOT__sram2__DOT__sram_56[3U];
    __Vtemp1073[0x24U] = vlSelf->riscv_soc__DOT__sram2__DOT__sram_57[0U];
    __Vtemp1073[0x25U] = vlSelf->riscv_soc__DOT__sram2__DOT__sram_57[1U];
    __Vtemp1073[0x26U] = vlSelf->riscv_soc__DOT__sram2__DOT__sram_57[2U];
    __Vtemp1073[0x27U] = vlSelf->riscv_soc__DOT__sram2__DOT__sram_57[3U];
    __Vtemp1073[0x28U] = vlSelf->riscv_soc__DOT__sram2__DOT__sram_58[0U];
    __Vtemp1073[0x29U] = vlSelf->riscv_soc__DOT__sram2__DOT__sram_58[1U];
    __Vtemp1073[0x2aU] = vlSelf->riscv_soc__DOT__sram2__DOT__sram_58[2U];
    __Vtemp1073[0x2bU] = vlSelf->riscv_soc__DOT__sram2__DOT__sram_58[3U];
    __Vtemp1073[0x2cU] = vlSelf->riscv_soc__DOT__sram2__DOT__sram_59[0U];
    __Vtemp1073[0x2dU] = vlSelf->riscv_soc__DOT__sram2__DOT__sram_59[1U];
    __Vtemp1073[0x2eU] = vlSelf->riscv_soc__DOT__sram2__DOT__sram_59[2U];
    __Vtemp1073[0x2fU] = vlSelf->riscv_soc__DOT__sram2__DOT__sram_59[3U];
    __Vtemp1073[0x30U] = vlSelf->riscv_soc__DOT__sram2__DOT__sram_60[0U];
    __Vtemp1073[0x31U] = vlSelf->riscv_soc__DOT__sram2__DOT__sram_60[1U];
    __Vtemp1073[0x32U] = vlSelf->riscv_soc__DOT__sram2__DOT__sram_60[2U];
    __Vtemp1073[0x33U] = vlSelf->riscv_soc__DOT__sram2__DOT__sram_60[3U];
    __Vtemp1073[0x34U] = vlSelf->riscv_soc__DOT__sram2__DOT__sram_61[0U];
    __Vtemp1073[0x35U] = vlSelf->riscv_soc__DOT__sram2__DOT__sram_61[1U];
    __Vtemp1073[0x36U] = vlSelf->riscv_soc__DOT__sram2__DOT__sram_61[2U];
    __Vtemp1073[0x37U] = vlSelf->riscv_soc__DOT__sram2__DOT__sram_61[3U];
    __Vtemp1073[0x38U] = vlSelf->riscv_soc__DOT__sram2__DOT__sram_62[0U];
    __Vtemp1073[0x39U] = vlSelf->riscv_soc__DOT__sram2__DOT__sram_62[1U];
    __Vtemp1073[0x3aU] = vlSelf->riscv_soc__DOT__sram2__DOT__sram_62[2U];
    __Vtemp1073[0x3bU] = vlSelf->riscv_soc__DOT__sram2__DOT__sram_62[3U];
    __Vtemp1073[0x3cU] = vlSelf->riscv_soc__DOT__sram2__DOT__sram_63[0U];
    __Vtemp1073[0x3dU] = vlSelf->riscv_soc__DOT__sram2__DOT__sram_63[1U];
    __Vtemp1073[0x3eU] = vlSelf->riscv_soc__DOT__sram2__DOT__sram_63[2U];
    __Vtemp1073[0x3fU] = vlSelf->riscv_soc__DOT__sram2__DOT__sram_63[3U];
    VL_CONCAT_WWW(2176,2048,128, __Vtemp1074, __Vtemp1073, vlSelf->riscv_soc__DOT__sram2__DOT__sram_47);
    VL_CONCAT_WWW(2304,2176,128, __Vtemp1075, __Vtemp1074, vlSelf->riscv_soc__DOT__sram2__DOT__sram_46);
    VL_CONCAT_WWW(2432,2304,128, __Vtemp1076, __Vtemp1075, vlSelf->riscv_soc__DOT__sram2__DOT__sram_45);
    VL_CONCAT_WWW(2560,2432,128, __Vtemp1077, __Vtemp1076, vlSelf->riscv_soc__DOT__sram2__DOT__sram_44);
    VL_CONCAT_WWW(2688,2560,128, __Vtemp1078, __Vtemp1077, vlSelf->riscv_soc__DOT__sram2__DOT__sram_43);
    VL_CONCAT_WWW(2816,2688,128, __Vtemp1079, __Vtemp1078, vlSelf->riscv_soc__DOT__sram2__DOT__sram_42);
    VL_CONCAT_WWW(2944,2816,128, __Vtemp1080, __Vtemp1079, vlSelf->riscv_soc__DOT__sram2__DOT__sram_41);
    VL_CONCAT_WWW(3072,2944,128, __Vtemp1081, __Vtemp1080, vlSelf->riscv_soc__DOT__sram2__DOT__sram_40);
    VL_CONCAT_WWW(3200,3072,128, __Vtemp1082, __Vtemp1081, vlSelf->riscv_soc__DOT__sram2__DOT__sram_39);
    VL_CONCAT_WWW(3328,3200,128, __Vtemp1083, __Vtemp1082, vlSelf->riscv_soc__DOT__sram2__DOT__sram_38);
    VL_CONCAT_WWW(3456,3328,128, __Vtemp1084, __Vtemp1083, vlSelf->riscv_soc__DOT__sram2__DOT__sram_37);
    VL_CONCAT_WWW(3584,3456,128, __Vtemp1085, __Vtemp1084, vlSelf->riscv_soc__DOT__sram2__DOT__sram_36);
    VL_CONCAT_WWW(3712,3584,128, __Vtemp1086, __Vtemp1085, vlSelf->riscv_soc__DOT__sram2__DOT__sram_35);
    VL_CONCAT_WWW(3840,3712,128, __Vtemp1087, __Vtemp1086, vlSelf->riscv_soc__DOT__sram2__DOT__sram_34);
    VL_CONCAT_WWW(3968,3840,128, __Vtemp1088, __Vtemp1087, vlSelf->riscv_soc__DOT__sram2__DOT__sram_33);
    VL_CONCAT_WWW(4096,3968,128, __Vtemp1089, __Vtemp1088, vlSelf->riscv_soc__DOT__sram2__DOT__sram_32);
    VL_CONCAT_WWW(4224,4096,128, __Vtemp1090, __Vtemp1089, vlSelf->riscv_soc__DOT__sram2__DOT__sram_31);
    VL_CONCAT_WWW(4352,4224,128, __Vtemp1091, __Vtemp1090, vlSelf->riscv_soc__DOT__sram2__DOT__sram_30);
    VL_CONCAT_WWW(4480,4352,128, __Vtemp1092, __Vtemp1091, vlSelf->riscv_soc__DOT__sram2__DOT__sram_29);
    VL_CONCAT_WWW(4608,4480,128, __Vtemp1093, __Vtemp1092, vlSelf->riscv_soc__DOT__sram2__DOT__sram_28);
    VL_CONCAT_WWW(4736,4608,128, __Vtemp1094, __Vtemp1093, vlSelf->riscv_soc__DOT__sram2__DOT__sram_27);
    VL_CONCAT_WWW(4864,4736,128, __Vtemp1095, __Vtemp1094, vlSelf->riscv_soc__DOT__sram2__DOT__sram_26);
    VL_CONCAT_WWW(4992,4864,128, __Vtemp1096, __Vtemp1095, vlSelf->riscv_soc__DOT__sram2__DOT__sram_25);
    VL_CONCAT_WWW(5120,4992,128, __Vtemp1097, __Vtemp1096, vlSelf->riscv_soc__DOT__sram2__DOT__sram_24);
    VL_CONCAT_WWW(5248,5120,128, __Vtemp1098, __Vtemp1097, vlSelf->riscv_soc__DOT__sram2__DOT__sram_23);
    VL_CONCAT_WWW(5376,5248,128, __Vtemp1099, __Vtemp1098, vlSelf->riscv_soc__DOT__sram2__DOT__sram_22);
    VL_CONCAT_WWW(5504,5376,128, __Vtemp1100, __Vtemp1099, vlSelf->riscv_soc__DOT__sram2__DOT__sram_21);
    VL_CONCAT_WWW(5632,5504,128, __Vtemp1101, __Vtemp1100, vlSelf->riscv_soc__DOT__sram2__DOT__sram_20);
    VL_CONCAT_WWW(5760,5632,128, __Vtemp1102, __Vtemp1101, vlSelf->riscv_soc__DOT__sram2__DOT__sram_19);
    VL_CONCAT_WWW(5888,5760,128, __Vtemp1103, __Vtemp1102, vlSelf->riscv_soc__DOT__sram2__DOT__sram_18);
    VL_CONCAT_WWW(6016,5888,128, __Vtemp1104, __Vtemp1103, vlSelf->riscv_soc__DOT__sram2__DOT__sram_17);
    VL_CONCAT_WWW(6144,6016,128, __Vtemp1105, __Vtemp1104, vlSelf->riscv_soc__DOT__sram2__DOT__sram_16);
    VL_CONCAT_WWW(6272,6144,128, __Vtemp1106, __Vtemp1105, vlSelf->riscv_soc__DOT__sram2__DOT__sram_15);
    VL_CONCAT_WWW(6400,6272,128, __Vtemp1107, __Vtemp1106, vlSelf->riscv_soc__DOT__sram2__DOT__sram_14);
    VL_CONCAT_WWW(6528,6400,128, __Vtemp1108, __Vtemp1107, vlSelf->riscv_soc__DOT__sram2__DOT__sram_13);
    VL_CONCAT_WWW(6656,6528,128, __Vtemp1109, __Vtemp1108, vlSelf->riscv_soc__DOT__sram2__DOT__sram_12);
    VL_CONCAT_WWW(6784,6656,128, __Vtemp1110, __Vtemp1109, vlSelf->riscv_soc__DOT__sram2__DOT__sram_11);
    VL_CONCAT_WWW(6912,6784,128, __Vtemp1111, __Vtemp1110, vlSelf->riscv_soc__DOT__sram2__DOT__sram_10);
    VL_CONCAT_WWW(7040,6912,128, __Vtemp1112, __Vtemp1111, vlSelf->riscv_soc__DOT__sram2__DOT__sram_9);
    VL_CONCAT_WWW(7168,7040,128, __Vtemp1113, __Vtemp1112, vlSelf->riscv_soc__DOT__sram2__DOT__sram_8);
    VL_CONCAT_WWW(7296,7168,128, __Vtemp1114, __Vtemp1113, vlSelf->riscv_soc__DOT__sram2__DOT__sram_7);
    VL_CONCAT_WWW(7424,7296,128, __Vtemp1115, __Vtemp1114, vlSelf->riscv_soc__DOT__sram2__DOT__sram_6);
    VL_CONCAT_WWW(7552,7424,128, __Vtemp1116, __Vtemp1115, vlSelf->riscv_soc__DOT__sram2__DOT__sram_5);
    VL_CONCAT_WWW(7680,7552,128, __Vtemp1117, __Vtemp1116, vlSelf->riscv_soc__DOT__sram2__DOT__sram_4);
    VL_CONCAT_WWW(7808,7680,128, __Vtemp1118, __Vtemp1117, vlSelf->riscv_soc__DOT__sram2__DOT__sram_3);
    VL_CONCAT_WWW(7936,7808,128, __Vtemp1119, __Vtemp1118, vlSelf->riscv_soc__DOT__sram2__DOT__sram_2);
    VL_CONCAT_WWW(8064,7936,128, __Vtemp1120, __Vtemp1119, vlSelf->riscv_soc__DOT__sram2__DOT__sram_1);
    VL_CONCAT_WWW(8192,8064,128, __Vtemp1121, __Vtemp1120, vlSelf->riscv_soc__DOT__sram2__DOT__sram_0);
    vlSelf->riscv_soc__DOT__sram2__DOT___GEN_1[0U] 
        = (((0U == (0x1fU & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram_addr) 
                             << 7U))) ? 0U : (__Vtemp1121[
                                              ((IData)(1U) 
                                               + (0xfcU 
                                                  & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram_addr) 
                                                     << 2U)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram_addr) 
                                                      << 7U))))) 
           | (__Vtemp1121[(0xfcU & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram_addr) 
                                    << 2U))] >> (0x1fU 
                                                 & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram_addr) 
                                                    << 7U))));
    vlSelf->riscv_soc__DOT__sram2__DOT___GEN_1[1U] 
        = (((0U == (0x1fU & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram_addr) 
                             << 7U))) ? 0U : (__Vtemp1121[
                                              ((IData)(2U) 
                                               + (0xfcU 
                                                  & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram_addr) 
                                                     << 2U)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram_addr) 
                                                      << 7U))))) 
           | (__Vtemp1121[((IData)(1U) + (0xfcU & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram_addr) 
                                                   << 2U)))] 
              >> (0x1fU & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram_addr) 
                           << 7U))));
    vlSelf->riscv_soc__DOT__sram2__DOT___GEN_1[2U] 
        = (((0U == (0x1fU & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram_addr) 
                             << 7U))) ? 0U : (__Vtemp1121[
                                              ((IData)(3U) 
                                               + (0xfcU 
                                                  & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram_addr) 
                                                     << 2U)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram_addr) 
                                                      << 7U))))) 
           | (__Vtemp1121[((IData)(2U) + (0xfcU & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram_addr) 
                                                   << 2U)))] 
              >> (0x1fU & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram_addr) 
                           << 7U))));
    vlSelf->riscv_soc__DOT__sram2__DOT___GEN_1[3U] 
        = (((0U == (0x1fU & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram_addr) 
                             << 7U))) ? 0U : (__Vtemp1121[
                                              ((IData)(4U) 
                                               + (0xfcU 
                                                  & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram_addr) 
                                                     << 2U)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram_addr) 
                                                      << 7U))))) 
           | (__Vtemp1121[((IData)(3U) + (0xfcU & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram_addr) 
                                                   << 2U)))] 
              >> (0x1fU & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram_addr) 
                           << 7U))));
    __Vtemp1137[0U] = vlSelf->riscv_soc__DOT__sram3__DOT__sram_48[0U];
    __Vtemp1137[1U] = vlSelf->riscv_soc__DOT__sram3__DOT__sram_48[1U];
    __Vtemp1137[2U] = vlSelf->riscv_soc__DOT__sram3__DOT__sram_48[2U];
    __Vtemp1137[3U] = vlSelf->riscv_soc__DOT__sram3__DOT__sram_48[3U];
    __Vtemp1137[4U] = vlSelf->riscv_soc__DOT__sram3__DOT__sram_49[0U];
    __Vtemp1137[5U] = vlSelf->riscv_soc__DOT__sram3__DOT__sram_49[1U];
    __Vtemp1137[6U] = vlSelf->riscv_soc__DOT__sram3__DOT__sram_49[2U];
    __Vtemp1137[7U] = vlSelf->riscv_soc__DOT__sram3__DOT__sram_49[3U];
    __Vtemp1137[8U] = vlSelf->riscv_soc__DOT__sram3__DOT__sram_50[0U];
    __Vtemp1137[9U] = vlSelf->riscv_soc__DOT__sram3__DOT__sram_50[1U];
    __Vtemp1137[0xaU] = vlSelf->riscv_soc__DOT__sram3__DOT__sram_50[2U];
    __Vtemp1137[0xbU] = vlSelf->riscv_soc__DOT__sram3__DOT__sram_50[3U];
    __Vtemp1137[0xcU] = vlSelf->riscv_soc__DOT__sram3__DOT__sram_51[0U];
    __Vtemp1137[0xdU] = vlSelf->riscv_soc__DOT__sram3__DOT__sram_51[1U];
    __Vtemp1137[0xeU] = vlSelf->riscv_soc__DOT__sram3__DOT__sram_51[2U];
    __Vtemp1137[0xfU] = vlSelf->riscv_soc__DOT__sram3__DOT__sram_51[3U];
    __Vtemp1137[0x10U] = vlSelf->riscv_soc__DOT__sram3__DOT__sram_52[0U];
    __Vtemp1137[0x11U] = vlSelf->riscv_soc__DOT__sram3__DOT__sram_52[1U];
    __Vtemp1137[0x12U] = vlSelf->riscv_soc__DOT__sram3__DOT__sram_52[2U];
    __Vtemp1137[0x13U] = vlSelf->riscv_soc__DOT__sram3__DOT__sram_52[3U];
    __Vtemp1137[0x14U] = vlSelf->riscv_soc__DOT__sram3__DOT__sram_53[0U];
    __Vtemp1137[0x15U] = vlSelf->riscv_soc__DOT__sram3__DOT__sram_53[1U];
    __Vtemp1137[0x16U] = vlSelf->riscv_soc__DOT__sram3__DOT__sram_53[2U];
    __Vtemp1137[0x17U] = vlSelf->riscv_soc__DOT__sram3__DOT__sram_53[3U];
    __Vtemp1137[0x18U] = vlSelf->riscv_soc__DOT__sram3__DOT__sram_54[0U];
    __Vtemp1137[0x19U] = vlSelf->riscv_soc__DOT__sram3__DOT__sram_54[1U];
    __Vtemp1137[0x1aU] = vlSelf->riscv_soc__DOT__sram3__DOT__sram_54[2U];
    __Vtemp1137[0x1bU] = vlSelf->riscv_soc__DOT__sram3__DOT__sram_54[3U];
    __Vtemp1137[0x1cU] = vlSelf->riscv_soc__DOT__sram3__DOT__sram_55[0U];
    __Vtemp1137[0x1dU] = vlSelf->riscv_soc__DOT__sram3__DOT__sram_55[1U];
    __Vtemp1137[0x1eU] = vlSelf->riscv_soc__DOT__sram3__DOT__sram_55[2U];
    __Vtemp1137[0x1fU] = vlSelf->riscv_soc__DOT__sram3__DOT__sram_55[3U];
    __Vtemp1137[0x20U] = vlSelf->riscv_soc__DOT__sram3__DOT__sram_56[0U];
    __Vtemp1137[0x21U] = vlSelf->riscv_soc__DOT__sram3__DOT__sram_56[1U];
    __Vtemp1137[0x22U] = vlSelf->riscv_soc__DOT__sram3__DOT__sram_56[2U];
    __Vtemp1137[0x23U] = vlSelf->riscv_soc__DOT__sram3__DOT__sram_56[3U];
    __Vtemp1137[0x24U] = vlSelf->riscv_soc__DOT__sram3__DOT__sram_57[0U];
    __Vtemp1137[0x25U] = vlSelf->riscv_soc__DOT__sram3__DOT__sram_57[1U];
    __Vtemp1137[0x26U] = vlSelf->riscv_soc__DOT__sram3__DOT__sram_57[2U];
    __Vtemp1137[0x27U] = vlSelf->riscv_soc__DOT__sram3__DOT__sram_57[3U];
    __Vtemp1137[0x28U] = vlSelf->riscv_soc__DOT__sram3__DOT__sram_58[0U];
    __Vtemp1137[0x29U] = vlSelf->riscv_soc__DOT__sram3__DOT__sram_58[1U];
    __Vtemp1137[0x2aU] = vlSelf->riscv_soc__DOT__sram3__DOT__sram_58[2U];
    __Vtemp1137[0x2bU] = vlSelf->riscv_soc__DOT__sram3__DOT__sram_58[3U];
    __Vtemp1137[0x2cU] = vlSelf->riscv_soc__DOT__sram3__DOT__sram_59[0U];
    __Vtemp1137[0x2dU] = vlSelf->riscv_soc__DOT__sram3__DOT__sram_59[1U];
    __Vtemp1137[0x2eU] = vlSelf->riscv_soc__DOT__sram3__DOT__sram_59[2U];
    __Vtemp1137[0x2fU] = vlSelf->riscv_soc__DOT__sram3__DOT__sram_59[3U];
    __Vtemp1137[0x30U] = vlSelf->riscv_soc__DOT__sram3__DOT__sram_60[0U];
    __Vtemp1137[0x31U] = vlSelf->riscv_soc__DOT__sram3__DOT__sram_60[1U];
    __Vtemp1137[0x32U] = vlSelf->riscv_soc__DOT__sram3__DOT__sram_60[2U];
    __Vtemp1137[0x33U] = vlSelf->riscv_soc__DOT__sram3__DOT__sram_60[3U];
    __Vtemp1137[0x34U] = vlSelf->riscv_soc__DOT__sram3__DOT__sram_61[0U];
    __Vtemp1137[0x35U] = vlSelf->riscv_soc__DOT__sram3__DOT__sram_61[1U];
    __Vtemp1137[0x36U] = vlSelf->riscv_soc__DOT__sram3__DOT__sram_61[2U];
    __Vtemp1137[0x37U] = vlSelf->riscv_soc__DOT__sram3__DOT__sram_61[3U];
    __Vtemp1137[0x38U] = vlSelf->riscv_soc__DOT__sram3__DOT__sram_62[0U];
    __Vtemp1137[0x39U] = vlSelf->riscv_soc__DOT__sram3__DOT__sram_62[1U];
    __Vtemp1137[0x3aU] = vlSelf->riscv_soc__DOT__sram3__DOT__sram_62[2U];
    __Vtemp1137[0x3bU] = vlSelf->riscv_soc__DOT__sram3__DOT__sram_62[3U];
    __Vtemp1137[0x3cU] = vlSelf->riscv_soc__DOT__sram3__DOT__sram_63[0U];
    __Vtemp1137[0x3dU] = vlSelf->riscv_soc__DOT__sram3__DOT__sram_63[1U];
    __Vtemp1137[0x3eU] = vlSelf->riscv_soc__DOT__sram3__DOT__sram_63[2U];
    __Vtemp1137[0x3fU] = vlSelf->riscv_soc__DOT__sram3__DOT__sram_63[3U];
    VL_CONCAT_WWW(2176,2048,128, __Vtemp1138, __Vtemp1137, vlSelf->riscv_soc__DOT__sram3__DOT__sram_47);
    VL_CONCAT_WWW(2304,2176,128, __Vtemp1139, __Vtemp1138, vlSelf->riscv_soc__DOT__sram3__DOT__sram_46);
    VL_CONCAT_WWW(2432,2304,128, __Vtemp1140, __Vtemp1139, vlSelf->riscv_soc__DOT__sram3__DOT__sram_45);
    VL_CONCAT_WWW(2560,2432,128, __Vtemp1141, __Vtemp1140, vlSelf->riscv_soc__DOT__sram3__DOT__sram_44);
    VL_CONCAT_WWW(2688,2560,128, __Vtemp1142, __Vtemp1141, vlSelf->riscv_soc__DOT__sram3__DOT__sram_43);
    VL_CONCAT_WWW(2816,2688,128, __Vtemp1143, __Vtemp1142, vlSelf->riscv_soc__DOT__sram3__DOT__sram_42);
    VL_CONCAT_WWW(2944,2816,128, __Vtemp1144, __Vtemp1143, vlSelf->riscv_soc__DOT__sram3__DOT__sram_41);
    VL_CONCAT_WWW(3072,2944,128, __Vtemp1145, __Vtemp1144, vlSelf->riscv_soc__DOT__sram3__DOT__sram_40);
    VL_CONCAT_WWW(3200,3072,128, __Vtemp1146, __Vtemp1145, vlSelf->riscv_soc__DOT__sram3__DOT__sram_39);
    VL_CONCAT_WWW(3328,3200,128, __Vtemp1147, __Vtemp1146, vlSelf->riscv_soc__DOT__sram3__DOT__sram_38);
    VL_CONCAT_WWW(3456,3328,128, __Vtemp1148, __Vtemp1147, vlSelf->riscv_soc__DOT__sram3__DOT__sram_37);
    VL_CONCAT_WWW(3584,3456,128, __Vtemp1149, __Vtemp1148, vlSelf->riscv_soc__DOT__sram3__DOT__sram_36);
    VL_CONCAT_WWW(3712,3584,128, __Vtemp1150, __Vtemp1149, vlSelf->riscv_soc__DOT__sram3__DOT__sram_35);
    VL_CONCAT_WWW(3840,3712,128, __Vtemp1151, __Vtemp1150, vlSelf->riscv_soc__DOT__sram3__DOT__sram_34);
    VL_CONCAT_WWW(3968,3840,128, __Vtemp1152, __Vtemp1151, vlSelf->riscv_soc__DOT__sram3__DOT__sram_33);
    VL_CONCAT_WWW(4096,3968,128, __Vtemp1153, __Vtemp1152, vlSelf->riscv_soc__DOT__sram3__DOT__sram_32);
    VL_CONCAT_WWW(4224,4096,128, __Vtemp1154, __Vtemp1153, vlSelf->riscv_soc__DOT__sram3__DOT__sram_31);
    VL_CONCAT_WWW(4352,4224,128, __Vtemp1155, __Vtemp1154, vlSelf->riscv_soc__DOT__sram3__DOT__sram_30);
    VL_CONCAT_WWW(4480,4352,128, __Vtemp1156, __Vtemp1155, vlSelf->riscv_soc__DOT__sram3__DOT__sram_29);
    VL_CONCAT_WWW(4608,4480,128, __Vtemp1157, __Vtemp1156, vlSelf->riscv_soc__DOT__sram3__DOT__sram_28);
    VL_CONCAT_WWW(4736,4608,128, __Vtemp1158, __Vtemp1157, vlSelf->riscv_soc__DOT__sram3__DOT__sram_27);
    VL_CONCAT_WWW(4864,4736,128, __Vtemp1159, __Vtemp1158, vlSelf->riscv_soc__DOT__sram3__DOT__sram_26);
    VL_CONCAT_WWW(4992,4864,128, __Vtemp1160, __Vtemp1159, vlSelf->riscv_soc__DOT__sram3__DOT__sram_25);
    VL_CONCAT_WWW(5120,4992,128, __Vtemp1161, __Vtemp1160, vlSelf->riscv_soc__DOT__sram3__DOT__sram_24);
    VL_CONCAT_WWW(5248,5120,128, __Vtemp1162, __Vtemp1161, vlSelf->riscv_soc__DOT__sram3__DOT__sram_23);
    VL_CONCAT_WWW(5376,5248,128, __Vtemp1163, __Vtemp1162, vlSelf->riscv_soc__DOT__sram3__DOT__sram_22);
    VL_CONCAT_WWW(5504,5376,128, __Vtemp1164, __Vtemp1163, vlSelf->riscv_soc__DOT__sram3__DOT__sram_21);
    VL_CONCAT_WWW(5632,5504,128, __Vtemp1165, __Vtemp1164, vlSelf->riscv_soc__DOT__sram3__DOT__sram_20);
    VL_CONCAT_WWW(5760,5632,128, __Vtemp1166, __Vtemp1165, vlSelf->riscv_soc__DOT__sram3__DOT__sram_19);
    VL_CONCAT_WWW(5888,5760,128, __Vtemp1167, __Vtemp1166, vlSelf->riscv_soc__DOT__sram3__DOT__sram_18);
    VL_CONCAT_WWW(6016,5888,128, __Vtemp1168, __Vtemp1167, vlSelf->riscv_soc__DOT__sram3__DOT__sram_17);
    VL_CONCAT_WWW(6144,6016,128, __Vtemp1169, __Vtemp1168, vlSelf->riscv_soc__DOT__sram3__DOT__sram_16);
    VL_CONCAT_WWW(6272,6144,128, __Vtemp1170, __Vtemp1169, vlSelf->riscv_soc__DOT__sram3__DOT__sram_15);
    VL_CONCAT_WWW(6400,6272,128, __Vtemp1171, __Vtemp1170, vlSelf->riscv_soc__DOT__sram3__DOT__sram_14);
    VL_CONCAT_WWW(6528,6400,128, __Vtemp1172, __Vtemp1171, vlSelf->riscv_soc__DOT__sram3__DOT__sram_13);
    VL_CONCAT_WWW(6656,6528,128, __Vtemp1173, __Vtemp1172, vlSelf->riscv_soc__DOT__sram3__DOT__sram_12);
    VL_CONCAT_WWW(6784,6656,128, __Vtemp1174, __Vtemp1173, vlSelf->riscv_soc__DOT__sram3__DOT__sram_11);
    VL_CONCAT_WWW(6912,6784,128, __Vtemp1175, __Vtemp1174, vlSelf->riscv_soc__DOT__sram3__DOT__sram_10);
    VL_CONCAT_WWW(7040,6912,128, __Vtemp1176, __Vtemp1175, vlSelf->riscv_soc__DOT__sram3__DOT__sram_9);
    VL_CONCAT_WWW(7168,7040,128, __Vtemp1177, __Vtemp1176, vlSelf->riscv_soc__DOT__sram3__DOT__sram_8);
    VL_CONCAT_WWW(7296,7168,128, __Vtemp1178, __Vtemp1177, vlSelf->riscv_soc__DOT__sram3__DOT__sram_7);
    VL_CONCAT_WWW(7424,7296,128, __Vtemp1179, __Vtemp1178, vlSelf->riscv_soc__DOT__sram3__DOT__sram_6);
    VL_CONCAT_WWW(7552,7424,128, __Vtemp1180, __Vtemp1179, vlSelf->riscv_soc__DOT__sram3__DOT__sram_5);
    VL_CONCAT_WWW(7680,7552,128, __Vtemp1181, __Vtemp1180, vlSelf->riscv_soc__DOT__sram3__DOT__sram_4);
    VL_CONCAT_WWW(7808,7680,128, __Vtemp1182, __Vtemp1181, vlSelf->riscv_soc__DOT__sram3__DOT__sram_3);
    VL_CONCAT_WWW(7936,7808,128, __Vtemp1183, __Vtemp1182, vlSelf->riscv_soc__DOT__sram3__DOT__sram_2);
    VL_CONCAT_WWW(8064,7936,128, __Vtemp1184, __Vtemp1183, vlSelf->riscv_soc__DOT__sram3__DOT__sram_1);
    VL_CONCAT_WWW(8192,8064,128, __Vtemp1185, __Vtemp1184, vlSelf->riscv_soc__DOT__sram3__DOT__sram_0);
    vlSelf->riscv_soc__DOT__sram3__DOT___GEN_1[0U] 
        = (((0U == (0x1fU & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram_addr) 
                             << 7U))) ? 0U : (__Vtemp1185[
                                              ((IData)(1U) 
                                               + (0xfcU 
                                                  & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram_addr) 
                                                     << 2U)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram_addr) 
                                                      << 7U))))) 
           | (__Vtemp1185[(0xfcU & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram_addr) 
                                    << 2U))] >> (0x1fU 
                                                 & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram_addr) 
                                                    << 7U))));
    vlSelf->riscv_soc__DOT__sram3__DOT___GEN_1[1U] 
        = (((0U == (0x1fU & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram_addr) 
                             << 7U))) ? 0U : (__Vtemp1185[
                                              ((IData)(2U) 
                                               + (0xfcU 
                                                  & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram_addr) 
                                                     << 2U)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram_addr) 
                                                      << 7U))))) 
           | (__Vtemp1185[((IData)(1U) + (0xfcU & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram_addr) 
                                                   << 2U)))] 
              >> (0x1fU & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram_addr) 
                           << 7U))));
    vlSelf->riscv_soc__DOT__sram3__DOT___GEN_1[2U] 
        = (((0U == (0x1fU & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram_addr) 
                             << 7U))) ? 0U : (__Vtemp1185[
                                              ((IData)(3U) 
                                               + (0xfcU 
                                                  & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram_addr) 
                                                     << 2U)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram_addr) 
                                                      << 7U))))) 
           | (__Vtemp1185[((IData)(2U) + (0xfcU & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram_addr) 
                                                   << 2U)))] 
              >> (0x1fU & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram_addr) 
                           << 7U))));
    vlSelf->riscv_soc__DOT__sram3__DOT___GEN_1[3U] 
        = (((0U == (0x1fU & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram_addr) 
                             << 7U))) ? 0U : (__Vtemp1185[
                                              ((IData)(4U) 
                                               + (0xfcU 
                                                  & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram_addr) 
                                                     << 2U)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram_addr) 
                                                      << 7U))))) 
           | (__Vtemp1185[((IData)(3U) + (0xfcU & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram_addr) 
                                                   << 2U)))] 
              >> (0x1fU & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram_addr) 
                           << 7U))));
    if (riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__chose_chancel) {
        vlSelf->riscv_soc__DOT__core__DOT___execute_io_bus_bits_wdata 
            = (((QData)((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__mem_w_data[1U])) 
                << 0x20U) | (QData)((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__mem_w_data[0U])));
        vlSelf->riscv_soc__DOT__core__DOT___execute_io_bus_bits_wstrb 
            = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT___GEN;
        vlSelf->riscv_soc__DOT__core__DOT___execute_io_bus_bits_is_w 
            = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__w_mem_en;
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT___io_bus_valid_T 
            = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vcellinp__mem_exu__io_valid;
        vlSelf->riscv_soc__DOT__core__DOT___execute_io_bus_bits_addr 
            = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__mem_addr;
    } else {
        vlSelf->riscv_soc__DOT__core__DOT___execute_io_bus_bits_wdata 
            = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_bus_wdata;
        vlSelf->riscv_soc__DOT__core__DOT___execute_io_bus_bits_wstrb 
            = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_bus_wstrb;
        vlSelf->riscv_soc__DOT__core__DOT___execute_io_bus_bits_is_w 
            = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_bus_is_w;
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT___io_bus_valid_T 
            = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_bus_valid;
        vlSelf->riscv_soc__DOT__core__DOT___execute_io_bus_bits_addr 
            = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_bus_addr;
    }
    riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__s_rs1_l_rs2 
        = (1U & ((1U & ((IData)((riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__rs1_data 
                                 >> 0x3fU)) ^ (IData)(
                                                      (riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__rs2_data 
                                                       >> 0x3fU))))
                  ? (IData)((riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__rs1_data 
                             >> 0x3fU)) : (riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___GEN[1U] 
                                           >> 0x1fU)));
    if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__w_r_pass0_val) {
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vcellinp__cache_stage1__io_sram_sram_data_0[0U] 
            = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[0U];
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vcellinp__cache_stage1__io_sram_sram_data_0[1U] 
            = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[1U];
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vcellinp__cache_stage1__io_sram_sram_data_0[2U] 
            = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[2U];
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vcellinp__cache_stage1__io_sram_sram_data_0[3U] 
            = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[3U];
    } else {
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vcellinp__cache_stage1__io_sram_sram_data_0[0U] 
            = vlSelf->riscv_soc__DOT__sram0__DOT__Q[0U];
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vcellinp__cache_stage1__io_sram_sram_data_0[1U] 
            = vlSelf->riscv_soc__DOT__sram0__DOT__Q[1U];
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vcellinp__cache_stage1__io_sram_sram_data_0[2U] 
            = vlSelf->riscv_soc__DOT__sram0__DOT__Q[2U];
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vcellinp__cache_stage1__io_sram_sram_data_0[3U] 
            = vlSelf->riscv_soc__DOT__sram0__DOT__Q[3U];
    }
    VL_EXTEND_WQ(128,54, __Vtemp1188, (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                       >> 0xaU));
    VL_EXTEND_WQ(128,54, __Vtemp1189, (0x3fffffffffffffULL 
                                       & (((QData)((IData)(
                                                           vlSelf->riscv_soc__DOT__sram1__DOT__Q[1U])) 
                                           << 0x20U) 
                                          | (QData)((IData)(
                                                            vlSelf->riscv_soc__DOT__sram1__DOT__Q[0U])))));
    vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___cache_stage1_io_cache_stage1_bits_sram_0_hit 
        = ((vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1__DOT__reg_cpu_addr 
            >> 0xaU) == (0x3fffffffffffffULL & (((QData)((IData)(
                                                                 ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__w_r_pass0_val)
                                                                   ? 
                                                                  __Vtemp1188[1U]
                                                                   : 
                                                                  __Vtemp1189[1U]))) 
                                                 << 0x20U) 
                                                | (QData)((IData)(
                                                                  ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__w_r_pass0_val)
                                                                    ? 
                                                                   __Vtemp1188[0U]
                                                                    : 
                                                                   __Vtemp1189[0U]))))));
    if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__w_r_pass1_val) {
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vcellinp__cache_stage1__io_sram_sram_data_1[0U] 
            = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[0U];
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vcellinp__cache_stage1__io_sram_sram_data_1[1U] 
            = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[1U];
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vcellinp__cache_stage1__io_sram_sram_data_1[2U] 
            = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[2U];
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vcellinp__cache_stage1__io_sram_sram_data_1[3U] 
            = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[3U];
    } else {
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vcellinp__cache_stage1__io_sram_sram_data_1[0U] 
            = vlSelf->riscv_soc__DOT__sram2__DOT__Q[0U];
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vcellinp__cache_stage1__io_sram_sram_data_1[1U] 
            = vlSelf->riscv_soc__DOT__sram2__DOT__Q[1U];
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vcellinp__cache_stage1__io_sram_sram_data_1[2U] 
            = vlSelf->riscv_soc__DOT__sram2__DOT__Q[2U];
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vcellinp__cache_stage1__io_sram_sram_data_1[3U] 
            = vlSelf->riscv_soc__DOT__sram2__DOT__Q[3U];
    }
    VL_EXTEND_WQ(128,54, __Vtemp1192, (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                       >> 0xaU));
    VL_EXTEND_WQ(128,54, __Vtemp1193, (0x3fffffffffffffULL 
                                       & (((QData)((IData)(
                                                           vlSelf->riscv_soc__DOT__sram3__DOT__Q[1U])) 
                                           << 0x20U) 
                                          | (QData)((IData)(
                                                            vlSelf->riscv_soc__DOT__sram3__DOT__Q[0U])))));
    vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___cache_stage1_io_cache_stage1_bits_sram_1_hit 
        = ((vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1__DOT__reg_cpu_addr 
            >> 0xaU) == (0x3fffffffffffffULL & (((QData)((IData)(
                                                                 ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__w_r_pass1_val)
                                                                   ? 
                                                                  __Vtemp1192[1U]
                                                                   : 
                                                                  __Vtemp1193[1U]))) 
                                                 << 0x20U) 
                                                | (QData)((IData)(
                                                                  ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__w_r_pass1_val)
                                                                    ? 
                                                                   __Vtemp1192[0U]
                                                                    : 
                                                                   __Vtemp1193[0U]))))));
    vlSelf->riscv_soc__DOT__core__DOT___cross_bar_1_io_DCache_valid 
        = ((0U != (vlSelf->riscv_soc__DOT__core__DOT___execute_io_bus_bits_addr 
                   >> 0x1fU)) & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT___io_bus_valid_T));
    vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram0_A 
        = (0x3fU & ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))
                     ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)
                     : (IData)((vlSelf->riscv_soc__DOT__core__DOT___execute_io_bus_bits_addr 
                                >> 4U))));
    vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1__DOT__not_clint 
        = ((0x2000000U > (0x7fffffffU & (IData)(vlSelf->riscv_soc__DOT__core__DOT___execute_io_bus_bits_addr))) 
           | (0x200ffffU < (0x7fffffffU & (IData)(vlSelf->riscv_soc__DOT__core__DOT___execute_io_bus_bits_addr))));
    VL_EXTEND_WQ(127,64, __Vtemp1201, riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__op_data1);
    VL_SHIFTL_WWI(127,127,6, __Vtemp1202, __Vtemp1201, (IData)(riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__shift_rs2_data));
    __Vtemp1205[0U] = (IData)((((QData)((IData)(riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___GEN[1U])) 
                                << 0x20U) | (QData)((IData)(
                                                            riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___GEN[0U]))));
    __Vtemp1205[1U] = (IData)(((((QData)((IData)(riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___GEN[1U])) 
                                 << 0x20U) | (QData)((IData)(
                                                             riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___GEN[0U]))) 
                               >> 0x20U));
    __Vtemp1205[2U] = (IData)((((QData)((IData)(__Vtemp1202[1U])) 
                                << 0x20U) | (QData)((IData)(
                                                            __Vtemp1202[0U]))));
    __Vtemp1205[3U] = (IData)(((((QData)((IData)(__Vtemp1202[1U])) 
                                 << 0x20U) | (QData)((IData)(
                                                             __Vtemp1202[0U]))) 
                               >> 0x20U));
    __Vtemp1205[4U] = (IData)((QData)((IData)(riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__s_rs1_l_rs2)));
    __Vtemp1205[5U] = (IData)(((QData)((IData)(riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__s_rs1_l_rs2)) 
                               >> 0x20U));
    __Vtemp1205[6U] = (IData)((QData)((IData)((1U & 
                                               (~ riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___GEN[2U])))));
    __Vtemp1205[7U] = (IData)(((QData)((IData)((1U 
                                                & (~ 
                                                   riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___GEN[2U])))) 
                               >> 0x20U));
    __Vtemp1205[8U] = (IData)((riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__op_data1 
                               ^ riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__rs2_data));
    __Vtemp1205[9U] = (IData)(((riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__op_data1 
                                ^ riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__rs2_data) 
                               >> 0x20U));
    __Vtemp1205[0xaU] = (IData)(((1U == (3U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                               >> 5U)))
                                  ? VL_SHIFTRS_QQQ(64,64,64, riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__op_data1, (QData)((IData)(riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__shift_rs2_data)))
                                  : VL_SHIFTR_QQQ(64,64,64, 
                                                  ((1U 
                                                    & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType))
                                                    ? (QData)((IData)(riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__op_data1))
                                                    : vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__rs1_data), (QData)((IData)(riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__shift_rs2_data)))));
    __Vtemp1205[0xbU] = (IData)((((1U == (3U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                                >> 5U)))
                                   ? VL_SHIFTRS_QQQ(64,64,64, riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__op_data1, (QData)((IData)(riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__shift_rs2_data)))
                                   : VL_SHIFTR_QQQ(64,64,64, 
                                                   ((1U 
                                                     & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType))
                                                     ? (QData)((IData)(riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__op_data1))
                                                     : vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__rs1_data), (QData)((IData)(riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__shift_rs2_data)))) 
                                 >> 0x20U));
    __Vtemp1205[0xcU] = (IData)((riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__op_data1 
                                 | riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__rs2_data));
    __Vtemp1205[0xdU] = (IData)(((riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__op_data1 
                                  | riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__rs2_data) 
                                 >> 0x20U));
    __Vtemp1205[0xeU] = (IData)((riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__op_data1 
                                 & riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__rs2_data));
    __Vtemp1205[0xfU] = (IData)(((riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__op_data1 
                                  & riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__rs2_data) 
                                 >> 0x20U));
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__dst_data 
        = ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_opType))
            ? (4ULL + vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_pc)
            : (((QData)((IData)(__Vtemp1205[(((IData)(0x3fU) 
                                              + (0x1c0U 
                                                 & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                                    << 4U))) 
                                             >> 5U)])) 
                << 0x20U) | (QData)((IData)(__Vtemp1205[
                                            (0xeU & 
                                             ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                              >> 1U))]))));
    VL_EXTEND_WQ(65,64, __Vtemp1208, (4ULL + vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_pc));
    VL_EXTEND_WQ(65,64, __Vtemp1211, (4ULL + vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_pc));
    VL_EXTEND_WQ(65,64, __Vtemp1215, (4ULL + vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_pc));
    VL_EXTEND_WQ(65,64, __Vtemp1219, (4ULL + vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_pc));
    VL_EXTEND_WQ(65,64, __Vtemp1226, (4ULL + vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_pc));
    VL_EXTEND_WQ(65,64, __Vtemp1230, (4ULL + vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_pc));
    if (riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__is_eq) {
        __Vtemp1232[0U] = (IData)(riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___add_pc_T_1);
        __Vtemp1232[1U] = (IData)((riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___add_pc_T_1 
                                   >> 0x20U));
    } else {
        __Vtemp1232[0U] = __Vtemp1230[0U];
        __Vtemp1232[1U] = __Vtemp1230[1U];
    }
    __Vtemp1232[2U] = ((((IData)(riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__is_eq)
                          ? __Vtemp1226[0U] : (IData)(riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___add_pc_T_1)) 
                        << 1U) | ((IData)(riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__is_eq)
                                   ? 1U : __Vtemp1230[2U]));
    __Vtemp1232[3U] = ((((IData)(riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__is_eq)
                          ? __Vtemp1226[0U] : (IData)(riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___add_pc_T_1)) 
                        >> 0x1fU) | (((IData)(riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__is_eq)
                                       ? __Vtemp1226[1U]
                                       : (IData)((riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___add_pc_T_1 
                                                  >> 0x20U))) 
                                     << 1U));
    __Vtemp1232[4U] = ((((IData)(riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__is_eq)
                          ? __Vtemp1226[1U] : (IData)(
                                                      (riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___add_pc_T_1 
                                                       >> 0x20U))) 
                        >> 0x1fU) | (((IData)(riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__is_eq)
                                       ? __Vtemp1226[2U]
                                       : 1U) << 1U));
    VL_EXTEND_WW(131,130, __Vtemp1233, __Vtemp1232);
    __Vtemp1235[0U] = __Vtemp1233[0U];
    __Vtemp1235[1U] = __Vtemp1233[1U];
    __Vtemp1235[2U] = __Vtemp1233[2U];
    __Vtemp1235[3U] = __Vtemp1233[3U];
    __Vtemp1235[4U] = (((IData)((0x8000000000000000ULL 
                                 | (riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___add_pc_T_1 
                                    >> 1U))) << 3U) 
                       | __Vtemp1233[4U]);
    __Vtemp1235[5U] = (((IData)((0x8000000000000000ULL 
                                 | (riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___add_pc_T_1 
                                    >> 1U))) >> 0x1dU) 
                       | ((IData)(((0x8000000000000000ULL 
                                    | (riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___add_pc_T_1 
                                       >> 1U)) >> 0x20U)) 
                          << 3U));
    __Vtemp1235[6U] = (((IData)(riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___add_pc_T_1) 
                        << 3U) | ((IData)(((0x8000000000000000ULL 
                                            | (riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___add_pc_T_1 
                                               >> 1U)) 
                                           >> 0x20U)) 
                                  >> 0x1dU));
    __Vtemp1235[7U] = (((IData)(riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___add_pc_T_1) 
                        >> 0x1dU) | ((IData)((riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___add_pc_T_1 
                                              >> 0x20U)) 
                                     << 3U));
    __Vtemp1235[8U] = (8U | (((IData)((riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___add_pc_T_1 
                                       >> 0x20U)) >> 0x1dU) 
                             | (((IData)(riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__s_rs1_l_rs2)
                                  ? (IData)(riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___add_pc_T_1)
                                  : __Vtemp1219[0U]) 
                                << 4U)));
    __Vtemp1235[9U] = ((7U & (((IData)(riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__s_rs1_l_rs2)
                                ? (IData)(riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___add_pc_T_1)
                                : __Vtemp1219[0U]) 
                              >> 0x1cU)) | ((8U & (
                                                   ((IData)(riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__s_rs1_l_rs2)
                                                     ? (IData)(riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___add_pc_T_1)
                                                     : 
                                                    __Vtemp1219[0U]) 
                                                   >> 0x1cU)) 
                                            | (((IData)(riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__s_rs1_l_rs2)
                                                 ? (IData)(
                                                           (riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___add_pc_T_1 
                                                            >> 0x20U))
                                                 : 
                                                __Vtemp1219[1U]) 
                                               << 4U)));
    __Vtemp1235[0xaU] = ((7U & (((IData)(riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__s_rs1_l_rs2)
                                  ? (IData)((riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___add_pc_T_1 
                                             >> 0x20U))
                                  : __Vtemp1219[1U]) 
                                >> 0x1cU)) | ((((IData)(riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__s_rs1_l_rs2)
                                                 ? 
                                                __Vtemp1215[0U]
                                                 : (IData)(riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___add_pc_T_1)) 
                                               << 5U) 
                                              | ((8U 
                                                  & (((IData)(riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__s_rs1_l_rs2)
                                                       ? (IData)(
                                                                 (riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___add_pc_T_1 
                                                                  >> 0x20U))
                                                       : 
                                                      __Vtemp1219[1U]) 
                                                     >> 0x1cU)) 
                                                 | (((IData)(riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__s_rs1_l_rs2)
                                                      ? 1U
                                                      : 
                                                     __Vtemp1219[2U]) 
                                                    << 4U))));
    __Vtemp1235[0xbU] = ((7U & ((((IData)(riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__s_rs1_l_rs2)
                                   ? __Vtemp1215[0U]
                                   : (IData)(riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___add_pc_T_1)) 
                                 >> 0x1bU) | (((IData)(riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__s_rs1_l_rs2)
                                                ? 1U
                                                : __Vtemp1219[2U]) 
                                              >> 0x1cU))) 
                         | ((0x18U & (((IData)(riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__s_rs1_l_rs2)
                                        ? __Vtemp1215[0U]
                                        : (IData)(riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___add_pc_T_1)) 
                                      >> 0x1bU)) | 
                            (((IData)(riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__s_rs1_l_rs2)
                               ? __Vtemp1215[1U] : (IData)(
                                                           (riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___add_pc_T_1 
                                                            >> 0x20U))) 
                             << 5U)));
    __Vtemp1235[0xcU] = ((7U & (((IData)(riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__s_rs1_l_rs2)
                                  ? __Vtemp1215[1U]
                                  : (IData)((riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___add_pc_T_1 
                                             >> 0x20U))) 
                                >> 0x1bU)) | ((((1U 
                                                 & riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___GEN[2U])
                                                 ? 
                                                __Vtemp1211[0U]
                                                 : (IData)(riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___add_pc_T_1)) 
                                               << 6U) 
                                              | ((0x18U 
                                                  & (((IData)(riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__s_rs1_l_rs2)
                                                       ? 
                                                      __Vtemp1215[1U]
                                                       : (IData)(
                                                                 (riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___add_pc_T_1 
                                                                  >> 0x20U))) 
                                                     >> 0x1bU)) 
                                                 | (((IData)(riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__s_rs1_l_rs2)
                                                      ? 
                                                     __Vtemp1215[2U]
                                                      : 1U) 
                                                    << 5U))));
    __Vtemp1235[0xdU] = ((7U & ((((1U & riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___GEN[2U])
                                   ? __Vtemp1211[0U]
                                   : (IData)(riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___add_pc_T_1)) 
                                 >> 0x1aU) | (((IData)(riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__s_rs1_l_rs2)
                                                ? __Vtemp1215[2U]
                                                : 1U) 
                                              >> 0x1bU))) 
                         | ((0x38U & (((1U & riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___GEN[2U])
                                        ? __Vtemp1211[0U]
                                        : (IData)(riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___add_pc_T_1)) 
                                      >> 0x1aU)) | 
                            (((1U & riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___GEN[2U])
                               ? __Vtemp1211[1U] : (IData)(
                                                           (riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___add_pc_T_1 
                                                            >> 0x20U))) 
                             << 6U)));
    __Vtemp1235[0xeU] = ((7U & (((1U & riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___GEN[2U])
                                  ? __Vtemp1211[1U]
                                  : (IData)((riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___add_pc_T_1 
                                             >> 0x20U))) 
                                >> 0x1aU)) | ((((1U 
                                                 & riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___GEN[2U])
                                                 ? (IData)(riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___add_pc_T_1)
                                                 : 
                                                __Vtemp1208[0U]) 
                                               << 7U) 
                                              | ((0x38U 
                                                  & (((1U 
                                                       & riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___GEN[2U])
                                                       ? 
                                                      __Vtemp1211[1U]
                                                       : (IData)(
                                                                 (riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___add_pc_T_1 
                                                                  >> 0x20U))) 
                                                     >> 0x1aU)) 
                                                 | (((1U 
                                                      & riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___GEN[2U])
                                                      ? 
                                                     __Vtemp1211[2U]
                                                      : 1U) 
                                                    << 6U))));
    __Vtemp1235[0xfU] = ((7U & ((((1U & riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___GEN[2U])
                                   ? (IData)(riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___add_pc_T_1)
                                   : __Vtemp1208[0U]) 
                                 >> 0x19U) | (((1U 
                                                & riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___GEN[2U])
                                                ? __Vtemp1211[2U]
                                                : 1U) 
                                              >> 0x1aU))) 
                         | ((0x78U & (((1U & riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___GEN[2U])
                                        ? (IData)(riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___add_pc_T_1)
                                        : __Vtemp1208[0U]) 
                                      >> 0x19U)) | 
                            (((1U & riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___GEN[2U])
                               ? (IData)((riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___add_pc_T_1 
                                          >> 0x20U))
                               : __Vtemp1208[1U]) << 7U)));
    __Vtemp1235[0x10U] = ((7U & (((1U & riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___GEN[2U])
                                   ? (IData)((riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___add_pc_T_1 
                                              >> 0x20U))
                                   : __Vtemp1208[1U]) 
                                 >> 0x19U)) | ((0x78U 
                                                & (((1U 
                                                     & riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___GEN[2U])
                                                     ? (IData)(
                                                               (riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___add_pc_T_1 
                                                                >> 0x20U))
                                                     : 
                                                    __Vtemp1208[1U]) 
                                                   >> 0x19U)) 
                                               | (((1U 
                                                    & riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___GEN[2U])
                                                    ? 1U
                                                    : 
                                                   __Vtemp1208[2U]) 
                                                  << 7U)));
    if ((0x207U >= (0x3ffU & ((IData)(0x41U) * (7U 
                                                & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                                   >> 2U)))))) {
        __Vtemp1239[0U] = (((0U == (0x1fU & ((IData)(0x41U) 
                                             * (7U 
                                                & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                                   >> 2U)))))
                             ? 0U : (__Vtemp1235[((IData)(1U) 
                                                  + 
                                                  (0x1fU 
                                                   & (((IData)(0x41U) 
                                                       * 
                                                       (7U 
                                                        & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                                           >> 2U))) 
                                                      >> 5U)))] 
                                     << ((IData)(0x20U) 
                                         - (0x1fU & 
                                            ((IData)(0x41U) 
                                             * (7U 
                                                & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                                   >> 2U))))))) 
                           | (__Vtemp1235[(0x1fU & 
                                           (((IData)(0x41U) 
                                             * (7U 
                                                & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                                   >> 2U))) 
                                            >> 5U))] 
                              >> (0x1fU & ((IData)(0x41U) 
                                           * (7U & 
                                              ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                               >> 2U))))));
        __Vtemp1239[1U] = (((0U == (0x1fU & ((IData)(0x41U) 
                                             * (7U 
                                                & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                                   >> 2U)))))
                             ? 0U : (__Vtemp1235[((IData)(2U) 
                                                  + 
                                                  (0x1fU 
                                                   & (((IData)(0x41U) 
                                                       * 
                                                       (7U 
                                                        & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                                           >> 2U))) 
                                                      >> 5U)))] 
                                     << ((IData)(0x20U) 
                                         - (0x1fU & 
                                            ((IData)(0x41U) 
                                             * (7U 
                                                & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                                   >> 2U))))))) 
                           | (__Vtemp1235[((IData)(1U) 
                                           + (0x1fU 
                                              & (((IData)(0x41U) 
                                                  * 
                                                  (7U 
                                                   & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                                      >> 2U))) 
                                                 >> 5U)))] 
                              >> (0x1fU & ((IData)(0x41U) 
                                           * (7U & 
                                              ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                               >> 2U))))));
        __Vtemp1239[2U] = (((0U == (0x1fU & ((IData)(0x41U) 
                                             * (7U 
                                                & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                                   >> 2U)))))
                             ? 0U : (__Vtemp1235[((IData)(3U) 
                                                  + 
                                                  (0x1fU 
                                                   & (((IData)(0x41U) 
                                                       * 
                                                       (7U 
                                                        & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                                           >> 2U))) 
                                                      >> 5U)))] 
                                     << ((IData)(0x20U) 
                                         - (0x1fU & 
                                            ((IData)(0x41U) 
                                             * (7U 
                                                & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                                   >> 2U))))))) 
                           | (__Vtemp1235[((IData)(2U) 
                                           + (0x1fU 
                                              & (((IData)(0x41U) 
                                                  * 
                                                  (7U 
                                                   & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                                      >> 2U))) 
                                                 >> 5U)))] 
                              >> (0x1fU & ((IData)(0x41U) 
                                           * (7U & 
                                              ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                               >> 2U))))));
    } else {
        __Vtemp1239[0U] = 0U;
        __Vtemp1239[1U] = 0U;
        __Vtemp1239[2U] = 0U;
    }
    if ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_opType))) {
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___GEN_4[0U] 
            = __Vtemp1239[0U];
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___GEN_4[1U] 
            = __Vtemp1239[1U];
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___GEN_4[2U] 
            = (1U & __Vtemp1239[2U]);
    } else {
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___GEN_4[0U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___GEN_4[1U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___GEN_4[2U] = 0U;
    }
    __Vtemp1258[0U] = vlSelf->riscv_soc__DOT__sram4__DOT__sram_48[0U];
    __Vtemp1258[1U] = vlSelf->riscv_soc__DOT__sram4__DOT__sram_48[1U];
    __Vtemp1258[2U] = vlSelf->riscv_soc__DOT__sram4__DOT__sram_48[2U];
    __Vtemp1258[3U] = vlSelf->riscv_soc__DOT__sram4__DOT__sram_48[3U];
    __Vtemp1258[4U] = vlSelf->riscv_soc__DOT__sram4__DOT__sram_49[0U];
    __Vtemp1258[5U] = vlSelf->riscv_soc__DOT__sram4__DOT__sram_49[1U];
    __Vtemp1258[6U] = vlSelf->riscv_soc__DOT__sram4__DOT__sram_49[2U];
    __Vtemp1258[7U] = vlSelf->riscv_soc__DOT__sram4__DOT__sram_49[3U];
    __Vtemp1258[8U] = vlSelf->riscv_soc__DOT__sram4__DOT__sram_50[0U];
    __Vtemp1258[9U] = vlSelf->riscv_soc__DOT__sram4__DOT__sram_50[1U];
    __Vtemp1258[0xaU] = vlSelf->riscv_soc__DOT__sram4__DOT__sram_50[2U];
    __Vtemp1258[0xbU] = vlSelf->riscv_soc__DOT__sram4__DOT__sram_50[3U];
    __Vtemp1258[0xcU] = vlSelf->riscv_soc__DOT__sram4__DOT__sram_51[0U];
    __Vtemp1258[0xdU] = vlSelf->riscv_soc__DOT__sram4__DOT__sram_51[1U];
    __Vtemp1258[0xeU] = vlSelf->riscv_soc__DOT__sram4__DOT__sram_51[2U];
    __Vtemp1258[0xfU] = vlSelf->riscv_soc__DOT__sram4__DOT__sram_51[3U];
    __Vtemp1258[0x10U] = vlSelf->riscv_soc__DOT__sram4__DOT__sram_52[0U];
    __Vtemp1258[0x11U] = vlSelf->riscv_soc__DOT__sram4__DOT__sram_52[1U];
    __Vtemp1258[0x12U] = vlSelf->riscv_soc__DOT__sram4__DOT__sram_52[2U];
    __Vtemp1258[0x13U] = vlSelf->riscv_soc__DOT__sram4__DOT__sram_52[3U];
    __Vtemp1258[0x14U] = vlSelf->riscv_soc__DOT__sram4__DOT__sram_53[0U];
    __Vtemp1258[0x15U] = vlSelf->riscv_soc__DOT__sram4__DOT__sram_53[1U];
    __Vtemp1258[0x16U] = vlSelf->riscv_soc__DOT__sram4__DOT__sram_53[2U];
    __Vtemp1258[0x17U] = vlSelf->riscv_soc__DOT__sram4__DOT__sram_53[3U];
    __Vtemp1258[0x18U] = vlSelf->riscv_soc__DOT__sram4__DOT__sram_54[0U];
    __Vtemp1258[0x19U] = vlSelf->riscv_soc__DOT__sram4__DOT__sram_54[1U];
    __Vtemp1258[0x1aU] = vlSelf->riscv_soc__DOT__sram4__DOT__sram_54[2U];
    __Vtemp1258[0x1bU] = vlSelf->riscv_soc__DOT__sram4__DOT__sram_54[3U];
    __Vtemp1258[0x1cU] = vlSelf->riscv_soc__DOT__sram4__DOT__sram_55[0U];
    __Vtemp1258[0x1dU] = vlSelf->riscv_soc__DOT__sram4__DOT__sram_55[1U];
    __Vtemp1258[0x1eU] = vlSelf->riscv_soc__DOT__sram4__DOT__sram_55[2U];
    __Vtemp1258[0x1fU] = vlSelf->riscv_soc__DOT__sram4__DOT__sram_55[3U];
    __Vtemp1258[0x20U] = vlSelf->riscv_soc__DOT__sram4__DOT__sram_56[0U];
    __Vtemp1258[0x21U] = vlSelf->riscv_soc__DOT__sram4__DOT__sram_56[1U];
    __Vtemp1258[0x22U] = vlSelf->riscv_soc__DOT__sram4__DOT__sram_56[2U];
    __Vtemp1258[0x23U] = vlSelf->riscv_soc__DOT__sram4__DOT__sram_56[3U];
    __Vtemp1258[0x24U] = vlSelf->riscv_soc__DOT__sram4__DOT__sram_57[0U];
    __Vtemp1258[0x25U] = vlSelf->riscv_soc__DOT__sram4__DOT__sram_57[1U];
    __Vtemp1258[0x26U] = vlSelf->riscv_soc__DOT__sram4__DOT__sram_57[2U];
    __Vtemp1258[0x27U] = vlSelf->riscv_soc__DOT__sram4__DOT__sram_57[3U];
    __Vtemp1258[0x28U] = vlSelf->riscv_soc__DOT__sram4__DOT__sram_58[0U];
    __Vtemp1258[0x29U] = vlSelf->riscv_soc__DOT__sram4__DOT__sram_58[1U];
    __Vtemp1258[0x2aU] = vlSelf->riscv_soc__DOT__sram4__DOT__sram_58[2U];
    __Vtemp1258[0x2bU] = vlSelf->riscv_soc__DOT__sram4__DOT__sram_58[3U];
    __Vtemp1258[0x2cU] = vlSelf->riscv_soc__DOT__sram4__DOT__sram_59[0U];
    __Vtemp1258[0x2dU] = vlSelf->riscv_soc__DOT__sram4__DOT__sram_59[1U];
    __Vtemp1258[0x2eU] = vlSelf->riscv_soc__DOT__sram4__DOT__sram_59[2U];
    __Vtemp1258[0x2fU] = vlSelf->riscv_soc__DOT__sram4__DOT__sram_59[3U];
    __Vtemp1258[0x30U] = vlSelf->riscv_soc__DOT__sram4__DOT__sram_60[0U];
    __Vtemp1258[0x31U] = vlSelf->riscv_soc__DOT__sram4__DOT__sram_60[1U];
    __Vtemp1258[0x32U] = vlSelf->riscv_soc__DOT__sram4__DOT__sram_60[2U];
    __Vtemp1258[0x33U] = vlSelf->riscv_soc__DOT__sram4__DOT__sram_60[3U];
    __Vtemp1258[0x34U] = vlSelf->riscv_soc__DOT__sram4__DOT__sram_61[0U];
    __Vtemp1258[0x35U] = vlSelf->riscv_soc__DOT__sram4__DOT__sram_61[1U];
    __Vtemp1258[0x36U] = vlSelf->riscv_soc__DOT__sram4__DOT__sram_61[2U];
    __Vtemp1258[0x37U] = vlSelf->riscv_soc__DOT__sram4__DOT__sram_61[3U];
    __Vtemp1258[0x38U] = vlSelf->riscv_soc__DOT__sram4__DOT__sram_62[0U];
    __Vtemp1258[0x39U] = vlSelf->riscv_soc__DOT__sram4__DOT__sram_62[1U];
    __Vtemp1258[0x3aU] = vlSelf->riscv_soc__DOT__sram4__DOT__sram_62[2U];
    __Vtemp1258[0x3bU] = vlSelf->riscv_soc__DOT__sram4__DOT__sram_62[3U];
    __Vtemp1258[0x3cU] = vlSelf->riscv_soc__DOT__sram4__DOT__sram_63[0U];
    __Vtemp1258[0x3dU] = vlSelf->riscv_soc__DOT__sram4__DOT__sram_63[1U];
    __Vtemp1258[0x3eU] = vlSelf->riscv_soc__DOT__sram4__DOT__sram_63[2U];
    __Vtemp1258[0x3fU] = vlSelf->riscv_soc__DOT__sram4__DOT__sram_63[3U];
    VL_CONCAT_WWW(2176,2048,128, __Vtemp1259, __Vtemp1258, vlSelf->riscv_soc__DOT__sram4__DOT__sram_47);
    VL_CONCAT_WWW(2304,2176,128, __Vtemp1260, __Vtemp1259, vlSelf->riscv_soc__DOT__sram4__DOT__sram_46);
    VL_CONCAT_WWW(2432,2304,128, __Vtemp1261, __Vtemp1260, vlSelf->riscv_soc__DOT__sram4__DOT__sram_45);
    VL_CONCAT_WWW(2560,2432,128, __Vtemp1262, __Vtemp1261, vlSelf->riscv_soc__DOT__sram4__DOT__sram_44);
    VL_CONCAT_WWW(2688,2560,128, __Vtemp1263, __Vtemp1262, vlSelf->riscv_soc__DOT__sram4__DOT__sram_43);
    VL_CONCAT_WWW(2816,2688,128, __Vtemp1264, __Vtemp1263, vlSelf->riscv_soc__DOT__sram4__DOT__sram_42);
    VL_CONCAT_WWW(2944,2816,128, __Vtemp1265, __Vtemp1264, vlSelf->riscv_soc__DOT__sram4__DOT__sram_41);
    VL_CONCAT_WWW(3072,2944,128, __Vtemp1266, __Vtemp1265, vlSelf->riscv_soc__DOT__sram4__DOT__sram_40);
    VL_CONCAT_WWW(3200,3072,128, __Vtemp1267, __Vtemp1266, vlSelf->riscv_soc__DOT__sram4__DOT__sram_39);
    VL_CONCAT_WWW(3328,3200,128, __Vtemp1268, __Vtemp1267, vlSelf->riscv_soc__DOT__sram4__DOT__sram_38);
    VL_CONCAT_WWW(3456,3328,128, __Vtemp1269, __Vtemp1268, vlSelf->riscv_soc__DOT__sram4__DOT__sram_37);
    VL_CONCAT_WWW(3584,3456,128, __Vtemp1270, __Vtemp1269, vlSelf->riscv_soc__DOT__sram4__DOT__sram_36);
    VL_CONCAT_WWW(3712,3584,128, __Vtemp1271, __Vtemp1270, vlSelf->riscv_soc__DOT__sram4__DOT__sram_35);
    VL_CONCAT_WWW(3840,3712,128, __Vtemp1272, __Vtemp1271, vlSelf->riscv_soc__DOT__sram4__DOT__sram_34);
    VL_CONCAT_WWW(3968,3840,128, __Vtemp1273, __Vtemp1272, vlSelf->riscv_soc__DOT__sram4__DOT__sram_33);
    VL_CONCAT_WWW(4096,3968,128, __Vtemp1274, __Vtemp1273, vlSelf->riscv_soc__DOT__sram4__DOT__sram_32);
    VL_CONCAT_WWW(4224,4096,128, __Vtemp1275, __Vtemp1274, vlSelf->riscv_soc__DOT__sram4__DOT__sram_31);
    VL_CONCAT_WWW(4352,4224,128, __Vtemp1276, __Vtemp1275, vlSelf->riscv_soc__DOT__sram4__DOT__sram_30);
    VL_CONCAT_WWW(4480,4352,128, __Vtemp1277, __Vtemp1276, vlSelf->riscv_soc__DOT__sram4__DOT__sram_29);
    VL_CONCAT_WWW(4608,4480,128, __Vtemp1278, __Vtemp1277, vlSelf->riscv_soc__DOT__sram4__DOT__sram_28);
    VL_CONCAT_WWW(4736,4608,128, __Vtemp1279, __Vtemp1278, vlSelf->riscv_soc__DOT__sram4__DOT__sram_27);
    VL_CONCAT_WWW(4864,4736,128, __Vtemp1280, __Vtemp1279, vlSelf->riscv_soc__DOT__sram4__DOT__sram_26);
    VL_CONCAT_WWW(4992,4864,128, __Vtemp1281, __Vtemp1280, vlSelf->riscv_soc__DOT__sram4__DOT__sram_25);
    VL_CONCAT_WWW(5120,4992,128, __Vtemp1282, __Vtemp1281, vlSelf->riscv_soc__DOT__sram4__DOT__sram_24);
    VL_CONCAT_WWW(5248,5120,128, __Vtemp1283, __Vtemp1282, vlSelf->riscv_soc__DOT__sram4__DOT__sram_23);
    VL_CONCAT_WWW(5376,5248,128, __Vtemp1284, __Vtemp1283, vlSelf->riscv_soc__DOT__sram4__DOT__sram_22);
    VL_CONCAT_WWW(5504,5376,128, __Vtemp1285, __Vtemp1284, vlSelf->riscv_soc__DOT__sram4__DOT__sram_21);
    VL_CONCAT_WWW(5632,5504,128, __Vtemp1286, __Vtemp1285, vlSelf->riscv_soc__DOT__sram4__DOT__sram_20);
    VL_CONCAT_WWW(5760,5632,128, __Vtemp1287, __Vtemp1286, vlSelf->riscv_soc__DOT__sram4__DOT__sram_19);
    VL_CONCAT_WWW(5888,5760,128, __Vtemp1288, __Vtemp1287, vlSelf->riscv_soc__DOT__sram4__DOT__sram_18);
    VL_CONCAT_WWW(6016,5888,128, __Vtemp1289, __Vtemp1288, vlSelf->riscv_soc__DOT__sram4__DOT__sram_17);
    VL_CONCAT_WWW(6144,6016,128, __Vtemp1290, __Vtemp1289, vlSelf->riscv_soc__DOT__sram4__DOT__sram_16);
    VL_CONCAT_WWW(6272,6144,128, __Vtemp1291, __Vtemp1290, vlSelf->riscv_soc__DOT__sram4__DOT__sram_15);
    VL_CONCAT_WWW(6400,6272,128, __Vtemp1292, __Vtemp1291, vlSelf->riscv_soc__DOT__sram4__DOT__sram_14);
    VL_CONCAT_WWW(6528,6400,128, __Vtemp1293, __Vtemp1292, vlSelf->riscv_soc__DOT__sram4__DOT__sram_13);
    VL_CONCAT_WWW(6656,6528,128, __Vtemp1294, __Vtemp1293, vlSelf->riscv_soc__DOT__sram4__DOT__sram_12);
    VL_CONCAT_WWW(6784,6656,128, __Vtemp1295, __Vtemp1294, vlSelf->riscv_soc__DOT__sram4__DOT__sram_11);
    VL_CONCAT_WWW(6912,6784,128, __Vtemp1296, __Vtemp1295, vlSelf->riscv_soc__DOT__sram4__DOT__sram_10);
    VL_CONCAT_WWW(7040,6912,128, __Vtemp1297, __Vtemp1296, vlSelf->riscv_soc__DOT__sram4__DOT__sram_9);
    VL_CONCAT_WWW(7168,7040,128, __Vtemp1298, __Vtemp1297, vlSelf->riscv_soc__DOT__sram4__DOT__sram_8);
    VL_CONCAT_WWW(7296,7168,128, __Vtemp1299, __Vtemp1298, vlSelf->riscv_soc__DOT__sram4__DOT__sram_7);
    VL_CONCAT_WWW(7424,7296,128, __Vtemp1300, __Vtemp1299, vlSelf->riscv_soc__DOT__sram4__DOT__sram_6);
    VL_CONCAT_WWW(7552,7424,128, __Vtemp1301, __Vtemp1300, vlSelf->riscv_soc__DOT__sram4__DOT__sram_5);
    VL_CONCAT_WWW(7680,7552,128, __Vtemp1302, __Vtemp1301, vlSelf->riscv_soc__DOT__sram4__DOT__sram_4);
    VL_CONCAT_WWW(7808,7680,128, __Vtemp1303, __Vtemp1302, vlSelf->riscv_soc__DOT__sram4__DOT__sram_3);
    VL_CONCAT_WWW(7936,7808,128, __Vtemp1304, __Vtemp1303, vlSelf->riscv_soc__DOT__sram4__DOT__sram_2);
    VL_CONCAT_WWW(8064,7936,128, __Vtemp1305, __Vtemp1304, vlSelf->riscv_soc__DOT__sram4__DOT__sram_1);
    VL_CONCAT_WWW(8192,8064,128, __Vtemp1306, __Vtemp1305, vlSelf->riscv_soc__DOT__sram4__DOT__sram_0);
    vlSelf->riscv_soc__DOT__sram4__DOT___GEN_1[0U] 
        = (((0U == (0x1fU & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram0_A) 
                             << 7U))) ? 0U : (__Vtemp1306[
                                              ((IData)(1U) 
                                               + (0xfcU 
                                                  & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram0_A) 
                                                     << 2U)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram0_A) 
                                                      << 7U))))) 
           | (__Vtemp1306[(0xfcU & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram0_A) 
                                    << 2U))] >> (0x1fU 
                                                 & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram0_A) 
                                                    << 7U))));
    vlSelf->riscv_soc__DOT__sram4__DOT___GEN_1[1U] 
        = (((0U == (0x1fU & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram0_A) 
                             << 7U))) ? 0U : (__Vtemp1306[
                                              ((IData)(2U) 
                                               + (0xfcU 
                                                  & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram0_A) 
                                                     << 2U)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram0_A) 
                                                      << 7U))))) 
           | (__Vtemp1306[((IData)(1U) + (0xfcU & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram0_A) 
                                                   << 2U)))] 
              >> (0x1fU & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram0_A) 
                           << 7U))));
    vlSelf->riscv_soc__DOT__sram4__DOT___GEN_1[2U] 
        = (((0U == (0x1fU & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram0_A) 
                             << 7U))) ? 0U : (__Vtemp1306[
                                              ((IData)(3U) 
                                               + (0xfcU 
                                                  & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram0_A) 
                                                     << 2U)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram0_A) 
                                                      << 7U))))) 
           | (__Vtemp1306[((IData)(2U) + (0xfcU & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram0_A) 
                                                   << 2U)))] 
              >> (0x1fU & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram0_A) 
                           << 7U))));
    vlSelf->riscv_soc__DOT__sram4__DOT___GEN_1[3U] 
        = (((0U == (0x1fU & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram0_A) 
                             << 7U))) ? 0U : (__Vtemp1306[
                                              ((IData)(4U) 
                                               + (0xfcU 
                                                  & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram0_A) 
                                                     << 2U)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram0_A) 
                                                      << 7U))))) 
           | (__Vtemp1306[((IData)(3U) + (0xfcU & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram0_A) 
                                                   << 2U)))] 
              >> (0x1fU & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram0_A) 
                           << 7U))));
    __Vtemp1322[0U] = vlSelf->riscv_soc__DOT__sram5__DOT__sram_48[0U];
    __Vtemp1322[1U] = vlSelf->riscv_soc__DOT__sram5__DOT__sram_48[1U];
    __Vtemp1322[2U] = vlSelf->riscv_soc__DOT__sram5__DOT__sram_48[2U];
    __Vtemp1322[3U] = vlSelf->riscv_soc__DOT__sram5__DOT__sram_48[3U];
    __Vtemp1322[4U] = vlSelf->riscv_soc__DOT__sram5__DOT__sram_49[0U];
    __Vtemp1322[5U] = vlSelf->riscv_soc__DOT__sram5__DOT__sram_49[1U];
    __Vtemp1322[6U] = vlSelf->riscv_soc__DOT__sram5__DOT__sram_49[2U];
    __Vtemp1322[7U] = vlSelf->riscv_soc__DOT__sram5__DOT__sram_49[3U];
    __Vtemp1322[8U] = vlSelf->riscv_soc__DOT__sram5__DOT__sram_50[0U];
    __Vtemp1322[9U] = vlSelf->riscv_soc__DOT__sram5__DOT__sram_50[1U];
    __Vtemp1322[0xaU] = vlSelf->riscv_soc__DOT__sram5__DOT__sram_50[2U];
    __Vtemp1322[0xbU] = vlSelf->riscv_soc__DOT__sram5__DOT__sram_50[3U];
    __Vtemp1322[0xcU] = vlSelf->riscv_soc__DOT__sram5__DOT__sram_51[0U];
    __Vtemp1322[0xdU] = vlSelf->riscv_soc__DOT__sram5__DOT__sram_51[1U];
    __Vtemp1322[0xeU] = vlSelf->riscv_soc__DOT__sram5__DOT__sram_51[2U];
    __Vtemp1322[0xfU] = vlSelf->riscv_soc__DOT__sram5__DOT__sram_51[3U];
    __Vtemp1322[0x10U] = vlSelf->riscv_soc__DOT__sram5__DOT__sram_52[0U];
    __Vtemp1322[0x11U] = vlSelf->riscv_soc__DOT__sram5__DOT__sram_52[1U];
    __Vtemp1322[0x12U] = vlSelf->riscv_soc__DOT__sram5__DOT__sram_52[2U];
    __Vtemp1322[0x13U] = vlSelf->riscv_soc__DOT__sram5__DOT__sram_52[3U];
    __Vtemp1322[0x14U] = vlSelf->riscv_soc__DOT__sram5__DOT__sram_53[0U];
    __Vtemp1322[0x15U] = vlSelf->riscv_soc__DOT__sram5__DOT__sram_53[1U];
    __Vtemp1322[0x16U] = vlSelf->riscv_soc__DOT__sram5__DOT__sram_53[2U];
    __Vtemp1322[0x17U] = vlSelf->riscv_soc__DOT__sram5__DOT__sram_53[3U];
    __Vtemp1322[0x18U] = vlSelf->riscv_soc__DOT__sram5__DOT__sram_54[0U];
    __Vtemp1322[0x19U] = vlSelf->riscv_soc__DOT__sram5__DOT__sram_54[1U];
    __Vtemp1322[0x1aU] = vlSelf->riscv_soc__DOT__sram5__DOT__sram_54[2U];
    __Vtemp1322[0x1bU] = vlSelf->riscv_soc__DOT__sram5__DOT__sram_54[3U];
    __Vtemp1322[0x1cU] = vlSelf->riscv_soc__DOT__sram5__DOT__sram_55[0U];
    __Vtemp1322[0x1dU] = vlSelf->riscv_soc__DOT__sram5__DOT__sram_55[1U];
    __Vtemp1322[0x1eU] = vlSelf->riscv_soc__DOT__sram5__DOT__sram_55[2U];
    __Vtemp1322[0x1fU] = vlSelf->riscv_soc__DOT__sram5__DOT__sram_55[3U];
    __Vtemp1322[0x20U] = vlSelf->riscv_soc__DOT__sram5__DOT__sram_56[0U];
    __Vtemp1322[0x21U] = vlSelf->riscv_soc__DOT__sram5__DOT__sram_56[1U];
    __Vtemp1322[0x22U] = vlSelf->riscv_soc__DOT__sram5__DOT__sram_56[2U];
    __Vtemp1322[0x23U] = vlSelf->riscv_soc__DOT__sram5__DOT__sram_56[3U];
    __Vtemp1322[0x24U] = vlSelf->riscv_soc__DOT__sram5__DOT__sram_57[0U];
    __Vtemp1322[0x25U] = vlSelf->riscv_soc__DOT__sram5__DOT__sram_57[1U];
    __Vtemp1322[0x26U] = vlSelf->riscv_soc__DOT__sram5__DOT__sram_57[2U];
    __Vtemp1322[0x27U] = vlSelf->riscv_soc__DOT__sram5__DOT__sram_57[3U];
    __Vtemp1322[0x28U] = vlSelf->riscv_soc__DOT__sram5__DOT__sram_58[0U];
    __Vtemp1322[0x29U] = vlSelf->riscv_soc__DOT__sram5__DOT__sram_58[1U];
    __Vtemp1322[0x2aU] = vlSelf->riscv_soc__DOT__sram5__DOT__sram_58[2U];
    __Vtemp1322[0x2bU] = vlSelf->riscv_soc__DOT__sram5__DOT__sram_58[3U];
    __Vtemp1322[0x2cU] = vlSelf->riscv_soc__DOT__sram5__DOT__sram_59[0U];
    __Vtemp1322[0x2dU] = vlSelf->riscv_soc__DOT__sram5__DOT__sram_59[1U];
    __Vtemp1322[0x2eU] = vlSelf->riscv_soc__DOT__sram5__DOT__sram_59[2U];
    __Vtemp1322[0x2fU] = vlSelf->riscv_soc__DOT__sram5__DOT__sram_59[3U];
    __Vtemp1322[0x30U] = vlSelf->riscv_soc__DOT__sram5__DOT__sram_60[0U];
    __Vtemp1322[0x31U] = vlSelf->riscv_soc__DOT__sram5__DOT__sram_60[1U];
    __Vtemp1322[0x32U] = vlSelf->riscv_soc__DOT__sram5__DOT__sram_60[2U];
    __Vtemp1322[0x33U] = vlSelf->riscv_soc__DOT__sram5__DOT__sram_60[3U];
    __Vtemp1322[0x34U] = vlSelf->riscv_soc__DOT__sram5__DOT__sram_61[0U];
    __Vtemp1322[0x35U] = vlSelf->riscv_soc__DOT__sram5__DOT__sram_61[1U];
    __Vtemp1322[0x36U] = vlSelf->riscv_soc__DOT__sram5__DOT__sram_61[2U];
    __Vtemp1322[0x37U] = vlSelf->riscv_soc__DOT__sram5__DOT__sram_61[3U];
    __Vtemp1322[0x38U] = vlSelf->riscv_soc__DOT__sram5__DOT__sram_62[0U];
    __Vtemp1322[0x39U] = vlSelf->riscv_soc__DOT__sram5__DOT__sram_62[1U];
    __Vtemp1322[0x3aU] = vlSelf->riscv_soc__DOT__sram5__DOT__sram_62[2U];
    __Vtemp1322[0x3bU] = vlSelf->riscv_soc__DOT__sram5__DOT__sram_62[3U];
    __Vtemp1322[0x3cU] = vlSelf->riscv_soc__DOT__sram5__DOT__sram_63[0U];
    __Vtemp1322[0x3dU] = vlSelf->riscv_soc__DOT__sram5__DOT__sram_63[1U];
    __Vtemp1322[0x3eU] = vlSelf->riscv_soc__DOT__sram5__DOT__sram_63[2U];
    __Vtemp1322[0x3fU] = vlSelf->riscv_soc__DOT__sram5__DOT__sram_63[3U];
    VL_CONCAT_WWW(2176,2048,128, __Vtemp1323, __Vtemp1322, vlSelf->riscv_soc__DOT__sram5__DOT__sram_47);
    VL_CONCAT_WWW(2304,2176,128, __Vtemp1324, __Vtemp1323, vlSelf->riscv_soc__DOT__sram5__DOT__sram_46);
    VL_CONCAT_WWW(2432,2304,128, __Vtemp1325, __Vtemp1324, vlSelf->riscv_soc__DOT__sram5__DOT__sram_45);
    VL_CONCAT_WWW(2560,2432,128, __Vtemp1326, __Vtemp1325, vlSelf->riscv_soc__DOT__sram5__DOT__sram_44);
    VL_CONCAT_WWW(2688,2560,128, __Vtemp1327, __Vtemp1326, vlSelf->riscv_soc__DOT__sram5__DOT__sram_43);
    VL_CONCAT_WWW(2816,2688,128, __Vtemp1328, __Vtemp1327, vlSelf->riscv_soc__DOT__sram5__DOT__sram_42);
    VL_CONCAT_WWW(2944,2816,128, __Vtemp1329, __Vtemp1328, vlSelf->riscv_soc__DOT__sram5__DOT__sram_41);
    VL_CONCAT_WWW(3072,2944,128, __Vtemp1330, __Vtemp1329, vlSelf->riscv_soc__DOT__sram5__DOT__sram_40);
    VL_CONCAT_WWW(3200,3072,128, __Vtemp1331, __Vtemp1330, vlSelf->riscv_soc__DOT__sram5__DOT__sram_39);
    VL_CONCAT_WWW(3328,3200,128, __Vtemp1332, __Vtemp1331, vlSelf->riscv_soc__DOT__sram5__DOT__sram_38);
    VL_CONCAT_WWW(3456,3328,128, __Vtemp1333, __Vtemp1332, vlSelf->riscv_soc__DOT__sram5__DOT__sram_37);
    VL_CONCAT_WWW(3584,3456,128, __Vtemp1334, __Vtemp1333, vlSelf->riscv_soc__DOT__sram5__DOT__sram_36);
    VL_CONCAT_WWW(3712,3584,128, __Vtemp1335, __Vtemp1334, vlSelf->riscv_soc__DOT__sram5__DOT__sram_35);
    VL_CONCAT_WWW(3840,3712,128, __Vtemp1336, __Vtemp1335, vlSelf->riscv_soc__DOT__sram5__DOT__sram_34);
    VL_CONCAT_WWW(3968,3840,128, __Vtemp1337, __Vtemp1336, vlSelf->riscv_soc__DOT__sram5__DOT__sram_33);
    VL_CONCAT_WWW(4096,3968,128, __Vtemp1338, __Vtemp1337, vlSelf->riscv_soc__DOT__sram5__DOT__sram_32);
    VL_CONCAT_WWW(4224,4096,128, __Vtemp1339, __Vtemp1338, vlSelf->riscv_soc__DOT__sram5__DOT__sram_31);
    VL_CONCAT_WWW(4352,4224,128, __Vtemp1340, __Vtemp1339, vlSelf->riscv_soc__DOT__sram5__DOT__sram_30);
    VL_CONCAT_WWW(4480,4352,128, __Vtemp1341, __Vtemp1340, vlSelf->riscv_soc__DOT__sram5__DOT__sram_29);
    VL_CONCAT_WWW(4608,4480,128, __Vtemp1342, __Vtemp1341, vlSelf->riscv_soc__DOT__sram5__DOT__sram_28);
    VL_CONCAT_WWW(4736,4608,128, __Vtemp1343, __Vtemp1342, vlSelf->riscv_soc__DOT__sram5__DOT__sram_27);
    VL_CONCAT_WWW(4864,4736,128, __Vtemp1344, __Vtemp1343, vlSelf->riscv_soc__DOT__sram5__DOT__sram_26);
    VL_CONCAT_WWW(4992,4864,128, __Vtemp1345, __Vtemp1344, vlSelf->riscv_soc__DOT__sram5__DOT__sram_25);
    VL_CONCAT_WWW(5120,4992,128, __Vtemp1346, __Vtemp1345, vlSelf->riscv_soc__DOT__sram5__DOT__sram_24);
    VL_CONCAT_WWW(5248,5120,128, __Vtemp1347, __Vtemp1346, vlSelf->riscv_soc__DOT__sram5__DOT__sram_23);
    VL_CONCAT_WWW(5376,5248,128, __Vtemp1348, __Vtemp1347, vlSelf->riscv_soc__DOT__sram5__DOT__sram_22);
    VL_CONCAT_WWW(5504,5376,128, __Vtemp1349, __Vtemp1348, vlSelf->riscv_soc__DOT__sram5__DOT__sram_21);
    VL_CONCAT_WWW(5632,5504,128, __Vtemp1350, __Vtemp1349, vlSelf->riscv_soc__DOT__sram5__DOT__sram_20);
    VL_CONCAT_WWW(5760,5632,128, __Vtemp1351, __Vtemp1350, vlSelf->riscv_soc__DOT__sram5__DOT__sram_19);
    VL_CONCAT_WWW(5888,5760,128, __Vtemp1352, __Vtemp1351, vlSelf->riscv_soc__DOT__sram5__DOT__sram_18);
    VL_CONCAT_WWW(6016,5888,128, __Vtemp1353, __Vtemp1352, vlSelf->riscv_soc__DOT__sram5__DOT__sram_17);
    VL_CONCAT_WWW(6144,6016,128, __Vtemp1354, __Vtemp1353, vlSelf->riscv_soc__DOT__sram5__DOT__sram_16);
    VL_CONCAT_WWW(6272,6144,128, __Vtemp1355, __Vtemp1354, vlSelf->riscv_soc__DOT__sram5__DOT__sram_15);
    VL_CONCAT_WWW(6400,6272,128, __Vtemp1356, __Vtemp1355, vlSelf->riscv_soc__DOT__sram5__DOT__sram_14);
    VL_CONCAT_WWW(6528,6400,128, __Vtemp1357, __Vtemp1356, vlSelf->riscv_soc__DOT__sram5__DOT__sram_13);
    VL_CONCAT_WWW(6656,6528,128, __Vtemp1358, __Vtemp1357, vlSelf->riscv_soc__DOT__sram5__DOT__sram_12);
    VL_CONCAT_WWW(6784,6656,128, __Vtemp1359, __Vtemp1358, vlSelf->riscv_soc__DOT__sram5__DOT__sram_11);
    VL_CONCAT_WWW(6912,6784,128, __Vtemp1360, __Vtemp1359, vlSelf->riscv_soc__DOT__sram5__DOT__sram_10);
    VL_CONCAT_WWW(7040,6912,128, __Vtemp1361, __Vtemp1360, vlSelf->riscv_soc__DOT__sram5__DOT__sram_9);
    VL_CONCAT_WWW(7168,7040,128, __Vtemp1362, __Vtemp1361, vlSelf->riscv_soc__DOT__sram5__DOT__sram_8);
    VL_CONCAT_WWW(7296,7168,128, __Vtemp1363, __Vtemp1362, vlSelf->riscv_soc__DOT__sram5__DOT__sram_7);
    VL_CONCAT_WWW(7424,7296,128, __Vtemp1364, __Vtemp1363, vlSelf->riscv_soc__DOT__sram5__DOT__sram_6);
    VL_CONCAT_WWW(7552,7424,128, __Vtemp1365, __Vtemp1364, vlSelf->riscv_soc__DOT__sram5__DOT__sram_5);
    VL_CONCAT_WWW(7680,7552,128, __Vtemp1366, __Vtemp1365, vlSelf->riscv_soc__DOT__sram5__DOT__sram_4);
    VL_CONCAT_WWW(7808,7680,128, __Vtemp1367, __Vtemp1366, vlSelf->riscv_soc__DOT__sram5__DOT__sram_3);
    VL_CONCAT_WWW(7936,7808,128, __Vtemp1368, __Vtemp1367, vlSelf->riscv_soc__DOT__sram5__DOT__sram_2);
    VL_CONCAT_WWW(8064,7936,128, __Vtemp1369, __Vtemp1368, vlSelf->riscv_soc__DOT__sram5__DOT__sram_1);
    VL_CONCAT_WWW(8192,8064,128, __Vtemp1370, __Vtemp1369, vlSelf->riscv_soc__DOT__sram5__DOT__sram_0);
    vlSelf->riscv_soc__DOT__sram5__DOT___GEN_1[0U] 
        = (((0U == (0x1fU & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram0_A) 
                             << 7U))) ? 0U : (__Vtemp1370[
                                              ((IData)(1U) 
                                               + (0xfcU 
                                                  & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram0_A) 
                                                     << 2U)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram0_A) 
                                                      << 7U))))) 
           | (__Vtemp1370[(0xfcU & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram0_A) 
                                    << 2U))] >> (0x1fU 
                                                 & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram0_A) 
                                                    << 7U))));
    vlSelf->riscv_soc__DOT__sram5__DOT___GEN_1[1U] 
        = (((0U == (0x1fU & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram0_A) 
                             << 7U))) ? 0U : (__Vtemp1370[
                                              ((IData)(2U) 
                                               + (0xfcU 
                                                  & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram0_A) 
                                                     << 2U)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram0_A) 
                                                      << 7U))))) 
           | (__Vtemp1370[((IData)(1U) + (0xfcU & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram0_A) 
                                                   << 2U)))] 
              >> (0x1fU & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram0_A) 
                           << 7U))));
    vlSelf->riscv_soc__DOT__sram5__DOT___GEN_1[2U] 
        = (((0U == (0x1fU & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram0_A) 
                             << 7U))) ? 0U : (__Vtemp1370[
                                              ((IData)(3U) 
                                               + (0xfcU 
                                                  & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram0_A) 
                                                     << 2U)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram0_A) 
                                                      << 7U))))) 
           | (__Vtemp1370[((IData)(2U) + (0xfcU & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram0_A) 
                                                   << 2U)))] 
              >> (0x1fU & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram0_A) 
                           << 7U))));
    vlSelf->riscv_soc__DOT__sram5__DOT___GEN_1[3U] 
        = (((0U == (0x1fU & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram0_A) 
                             << 7U))) ? 0U : (__Vtemp1370[
                                              ((IData)(4U) 
                                               + (0xfcU 
                                                  & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram0_A) 
                                                     << 2U)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram0_A) 
                                                      << 7U))))) 
           | (__Vtemp1370[((IData)(3U) + (0xfcU & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram0_A) 
                                                   << 2U)))] 
              >> (0x1fU & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram0_A) 
                           << 7U))));
    __Vtemp1386[0U] = vlSelf->riscv_soc__DOT__sram6__DOT__sram_48[0U];
    __Vtemp1386[1U] = vlSelf->riscv_soc__DOT__sram6__DOT__sram_48[1U];
    __Vtemp1386[2U] = vlSelf->riscv_soc__DOT__sram6__DOT__sram_48[2U];
    __Vtemp1386[3U] = vlSelf->riscv_soc__DOT__sram6__DOT__sram_48[3U];
    __Vtemp1386[4U] = vlSelf->riscv_soc__DOT__sram6__DOT__sram_49[0U];
    __Vtemp1386[5U] = vlSelf->riscv_soc__DOT__sram6__DOT__sram_49[1U];
    __Vtemp1386[6U] = vlSelf->riscv_soc__DOT__sram6__DOT__sram_49[2U];
    __Vtemp1386[7U] = vlSelf->riscv_soc__DOT__sram6__DOT__sram_49[3U];
    __Vtemp1386[8U] = vlSelf->riscv_soc__DOT__sram6__DOT__sram_50[0U];
    __Vtemp1386[9U] = vlSelf->riscv_soc__DOT__sram6__DOT__sram_50[1U];
    __Vtemp1386[0xaU] = vlSelf->riscv_soc__DOT__sram6__DOT__sram_50[2U];
    __Vtemp1386[0xbU] = vlSelf->riscv_soc__DOT__sram6__DOT__sram_50[3U];
    __Vtemp1386[0xcU] = vlSelf->riscv_soc__DOT__sram6__DOT__sram_51[0U];
    __Vtemp1386[0xdU] = vlSelf->riscv_soc__DOT__sram6__DOT__sram_51[1U];
    __Vtemp1386[0xeU] = vlSelf->riscv_soc__DOT__sram6__DOT__sram_51[2U];
    __Vtemp1386[0xfU] = vlSelf->riscv_soc__DOT__sram6__DOT__sram_51[3U];
    __Vtemp1386[0x10U] = vlSelf->riscv_soc__DOT__sram6__DOT__sram_52[0U];
    __Vtemp1386[0x11U] = vlSelf->riscv_soc__DOT__sram6__DOT__sram_52[1U];
    __Vtemp1386[0x12U] = vlSelf->riscv_soc__DOT__sram6__DOT__sram_52[2U];
    __Vtemp1386[0x13U] = vlSelf->riscv_soc__DOT__sram6__DOT__sram_52[3U];
    __Vtemp1386[0x14U] = vlSelf->riscv_soc__DOT__sram6__DOT__sram_53[0U];
    __Vtemp1386[0x15U] = vlSelf->riscv_soc__DOT__sram6__DOT__sram_53[1U];
    __Vtemp1386[0x16U] = vlSelf->riscv_soc__DOT__sram6__DOT__sram_53[2U];
    __Vtemp1386[0x17U] = vlSelf->riscv_soc__DOT__sram6__DOT__sram_53[3U];
    __Vtemp1386[0x18U] = vlSelf->riscv_soc__DOT__sram6__DOT__sram_54[0U];
    __Vtemp1386[0x19U] = vlSelf->riscv_soc__DOT__sram6__DOT__sram_54[1U];
    __Vtemp1386[0x1aU] = vlSelf->riscv_soc__DOT__sram6__DOT__sram_54[2U];
    __Vtemp1386[0x1bU] = vlSelf->riscv_soc__DOT__sram6__DOT__sram_54[3U];
    __Vtemp1386[0x1cU] = vlSelf->riscv_soc__DOT__sram6__DOT__sram_55[0U];
    __Vtemp1386[0x1dU] = vlSelf->riscv_soc__DOT__sram6__DOT__sram_55[1U];
    __Vtemp1386[0x1eU] = vlSelf->riscv_soc__DOT__sram6__DOT__sram_55[2U];
    __Vtemp1386[0x1fU] = vlSelf->riscv_soc__DOT__sram6__DOT__sram_55[3U];
    __Vtemp1386[0x20U] = vlSelf->riscv_soc__DOT__sram6__DOT__sram_56[0U];
    __Vtemp1386[0x21U] = vlSelf->riscv_soc__DOT__sram6__DOT__sram_56[1U];
    __Vtemp1386[0x22U] = vlSelf->riscv_soc__DOT__sram6__DOT__sram_56[2U];
    __Vtemp1386[0x23U] = vlSelf->riscv_soc__DOT__sram6__DOT__sram_56[3U];
    __Vtemp1386[0x24U] = vlSelf->riscv_soc__DOT__sram6__DOT__sram_57[0U];
    __Vtemp1386[0x25U] = vlSelf->riscv_soc__DOT__sram6__DOT__sram_57[1U];
    __Vtemp1386[0x26U] = vlSelf->riscv_soc__DOT__sram6__DOT__sram_57[2U];
    __Vtemp1386[0x27U] = vlSelf->riscv_soc__DOT__sram6__DOT__sram_57[3U];
    __Vtemp1386[0x28U] = vlSelf->riscv_soc__DOT__sram6__DOT__sram_58[0U];
    __Vtemp1386[0x29U] = vlSelf->riscv_soc__DOT__sram6__DOT__sram_58[1U];
    __Vtemp1386[0x2aU] = vlSelf->riscv_soc__DOT__sram6__DOT__sram_58[2U];
    __Vtemp1386[0x2bU] = vlSelf->riscv_soc__DOT__sram6__DOT__sram_58[3U];
    __Vtemp1386[0x2cU] = vlSelf->riscv_soc__DOT__sram6__DOT__sram_59[0U];
    __Vtemp1386[0x2dU] = vlSelf->riscv_soc__DOT__sram6__DOT__sram_59[1U];
    __Vtemp1386[0x2eU] = vlSelf->riscv_soc__DOT__sram6__DOT__sram_59[2U];
    __Vtemp1386[0x2fU] = vlSelf->riscv_soc__DOT__sram6__DOT__sram_59[3U];
    __Vtemp1386[0x30U] = vlSelf->riscv_soc__DOT__sram6__DOT__sram_60[0U];
    __Vtemp1386[0x31U] = vlSelf->riscv_soc__DOT__sram6__DOT__sram_60[1U];
    __Vtemp1386[0x32U] = vlSelf->riscv_soc__DOT__sram6__DOT__sram_60[2U];
    __Vtemp1386[0x33U] = vlSelf->riscv_soc__DOT__sram6__DOT__sram_60[3U];
    __Vtemp1386[0x34U] = vlSelf->riscv_soc__DOT__sram6__DOT__sram_61[0U];
    __Vtemp1386[0x35U] = vlSelf->riscv_soc__DOT__sram6__DOT__sram_61[1U];
    __Vtemp1386[0x36U] = vlSelf->riscv_soc__DOT__sram6__DOT__sram_61[2U];
    __Vtemp1386[0x37U] = vlSelf->riscv_soc__DOT__sram6__DOT__sram_61[3U];
    __Vtemp1386[0x38U] = vlSelf->riscv_soc__DOT__sram6__DOT__sram_62[0U];
    __Vtemp1386[0x39U] = vlSelf->riscv_soc__DOT__sram6__DOT__sram_62[1U];
    __Vtemp1386[0x3aU] = vlSelf->riscv_soc__DOT__sram6__DOT__sram_62[2U];
    __Vtemp1386[0x3bU] = vlSelf->riscv_soc__DOT__sram6__DOT__sram_62[3U];
    __Vtemp1386[0x3cU] = vlSelf->riscv_soc__DOT__sram6__DOT__sram_63[0U];
    __Vtemp1386[0x3dU] = vlSelf->riscv_soc__DOT__sram6__DOT__sram_63[1U];
    __Vtemp1386[0x3eU] = vlSelf->riscv_soc__DOT__sram6__DOT__sram_63[2U];
    __Vtemp1386[0x3fU] = vlSelf->riscv_soc__DOT__sram6__DOT__sram_63[3U];
    VL_CONCAT_WWW(2176,2048,128, __Vtemp1387, __Vtemp1386, vlSelf->riscv_soc__DOT__sram6__DOT__sram_47);
    VL_CONCAT_WWW(2304,2176,128, __Vtemp1388, __Vtemp1387, vlSelf->riscv_soc__DOT__sram6__DOT__sram_46);
    VL_CONCAT_WWW(2432,2304,128, __Vtemp1389, __Vtemp1388, vlSelf->riscv_soc__DOT__sram6__DOT__sram_45);
    VL_CONCAT_WWW(2560,2432,128, __Vtemp1390, __Vtemp1389, vlSelf->riscv_soc__DOT__sram6__DOT__sram_44);
    VL_CONCAT_WWW(2688,2560,128, __Vtemp1391, __Vtemp1390, vlSelf->riscv_soc__DOT__sram6__DOT__sram_43);
    VL_CONCAT_WWW(2816,2688,128, __Vtemp1392, __Vtemp1391, vlSelf->riscv_soc__DOT__sram6__DOT__sram_42);
    VL_CONCAT_WWW(2944,2816,128, __Vtemp1393, __Vtemp1392, vlSelf->riscv_soc__DOT__sram6__DOT__sram_41);
    VL_CONCAT_WWW(3072,2944,128, __Vtemp1394, __Vtemp1393, vlSelf->riscv_soc__DOT__sram6__DOT__sram_40);
    VL_CONCAT_WWW(3200,3072,128, __Vtemp1395, __Vtemp1394, vlSelf->riscv_soc__DOT__sram6__DOT__sram_39);
    VL_CONCAT_WWW(3328,3200,128, __Vtemp1396, __Vtemp1395, vlSelf->riscv_soc__DOT__sram6__DOT__sram_38);
    VL_CONCAT_WWW(3456,3328,128, __Vtemp1397, __Vtemp1396, vlSelf->riscv_soc__DOT__sram6__DOT__sram_37);
    VL_CONCAT_WWW(3584,3456,128, __Vtemp1398, __Vtemp1397, vlSelf->riscv_soc__DOT__sram6__DOT__sram_36);
    VL_CONCAT_WWW(3712,3584,128, __Vtemp1399, __Vtemp1398, vlSelf->riscv_soc__DOT__sram6__DOT__sram_35);
    VL_CONCAT_WWW(3840,3712,128, __Vtemp1400, __Vtemp1399, vlSelf->riscv_soc__DOT__sram6__DOT__sram_34);
    VL_CONCAT_WWW(3968,3840,128, __Vtemp1401, __Vtemp1400, vlSelf->riscv_soc__DOT__sram6__DOT__sram_33);
    VL_CONCAT_WWW(4096,3968,128, __Vtemp1402, __Vtemp1401, vlSelf->riscv_soc__DOT__sram6__DOT__sram_32);
    VL_CONCAT_WWW(4224,4096,128, __Vtemp1403, __Vtemp1402, vlSelf->riscv_soc__DOT__sram6__DOT__sram_31);
    VL_CONCAT_WWW(4352,4224,128, __Vtemp1404, __Vtemp1403, vlSelf->riscv_soc__DOT__sram6__DOT__sram_30);
    VL_CONCAT_WWW(4480,4352,128, __Vtemp1405, __Vtemp1404, vlSelf->riscv_soc__DOT__sram6__DOT__sram_29);
    VL_CONCAT_WWW(4608,4480,128, __Vtemp1406, __Vtemp1405, vlSelf->riscv_soc__DOT__sram6__DOT__sram_28);
    VL_CONCAT_WWW(4736,4608,128, __Vtemp1407, __Vtemp1406, vlSelf->riscv_soc__DOT__sram6__DOT__sram_27);
    VL_CONCAT_WWW(4864,4736,128, __Vtemp1408, __Vtemp1407, vlSelf->riscv_soc__DOT__sram6__DOT__sram_26);
    VL_CONCAT_WWW(4992,4864,128, __Vtemp1409, __Vtemp1408, vlSelf->riscv_soc__DOT__sram6__DOT__sram_25);
    VL_CONCAT_WWW(5120,4992,128, __Vtemp1410, __Vtemp1409, vlSelf->riscv_soc__DOT__sram6__DOT__sram_24);
    VL_CONCAT_WWW(5248,5120,128, __Vtemp1411, __Vtemp1410, vlSelf->riscv_soc__DOT__sram6__DOT__sram_23);
    VL_CONCAT_WWW(5376,5248,128, __Vtemp1412, __Vtemp1411, vlSelf->riscv_soc__DOT__sram6__DOT__sram_22);
    VL_CONCAT_WWW(5504,5376,128, __Vtemp1413, __Vtemp1412, vlSelf->riscv_soc__DOT__sram6__DOT__sram_21);
    VL_CONCAT_WWW(5632,5504,128, __Vtemp1414, __Vtemp1413, vlSelf->riscv_soc__DOT__sram6__DOT__sram_20);
    VL_CONCAT_WWW(5760,5632,128, __Vtemp1415, __Vtemp1414, vlSelf->riscv_soc__DOT__sram6__DOT__sram_19);
    VL_CONCAT_WWW(5888,5760,128, __Vtemp1416, __Vtemp1415, vlSelf->riscv_soc__DOT__sram6__DOT__sram_18);
    VL_CONCAT_WWW(6016,5888,128, __Vtemp1417, __Vtemp1416, vlSelf->riscv_soc__DOT__sram6__DOT__sram_17);
    VL_CONCAT_WWW(6144,6016,128, __Vtemp1418, __Vtemp1417, vlSelf->riscv_soc__DOT__sram6__DOT__sram_16);
    VL_CONCAT_WWW(6272,6144,128, __Vtemp1419, __Vtemp1418, vlSelf->riscv_soc__DOT__sram6__DOT__sram_15);
    VL_CONCAT_WWW(6400,6272,128, __Vtemp1420, __Vtemp1419, vlSelf->riscv_soc__DOT__sram6__DOT__sram_14);
    VL_CONCAT_WWW(6528,6400,128, __Vtemp1421, __Vtemp1420, vlSelf->riscv_soc__DOT__sram6__DOT__sram_13);
    VL_CONCAT_WWW(6656,6528,128, __Vtemp1422, __Vtemp1421, vlSelf->riscv_soc__DOT__sram6__DOT__sram_12);
    VL_CONCAT_WWW(6784,6656,128, __Vtemp1423, __Vtemp1422, vlSelf->riscv_soc__DOT__sram6__DOT__sram_11);
    VL_CONCAT_WWW(6912,6784,128, __Vtemp1424, __Vtemp1423, vlSelf->riscv_soc__DOT__sram6__DOT__sram_10);
    VL_CONCAT_WWW(7040,6912,128, __Vtemp1425, __Vtemp1424, vlSelf->riscv_soc__DOT__sram6__DOT__sram_9);
    VL_CONCAT_WWW(7168,7040,128, __Vtemp1426, __Vtemp1425, vlSelf->riscv_soc__DOT__sram6__DOT__sram_8);
    VL_CONCAT_WWW(7296,7168,128, __Vtemp1427, __Vtemp1426, vlSelf->riscv_soc__DOT__sram6__DOT__sram_7);
    VL_CONCAT_WWW(7424,7296,128, __Vtemp1428, __Vtemp1427, vlSelf->riscv_soc__DOT__sram6__DOT__sram_6);
    VL_CONCAT_WWW(7552,7424,128, __Vtemp1429, __Vtemp1428, vlSelf->riscv_soc__DOT__sram6__DOT__sram_5);
    VL_CONCAT_WWW(7680,7552,128, __Vtemp1430, __Vtemp1429, vlSelf->riscv_soc__DOT__sram6__DOT__sram_4);
    VL_CONCAT_WWW(7808,7680,128, __Vtemp1431, __Vtemp1430, vlSelf->riscv_soc__DOT__sram6__DOT__sram_3);
    VL_CONCAT_WWW(7936,7808,128, __Vtemp1432, __Vtemp1431, vlSelf->riscv_soc__DOT__sram6__DOT__sram_2);
    VL_CONCAT_WWW(8064,7936,128, __Vtemp1433, __Vtemp1432, vlSelf->riscv_soc__DOT__sram6__DOT__sram_1);
    VL_CONCAT_WWW(8192,8064,128, __Vtemp1434, __Vtemp1433, vlSelf->riscv_soc__DOT__sram6__DOT__sram_0);
    vlSelf->riscv_soc__DOT__sram6__DOT___GEN_1[0U] 
        = (((0U == (0x1fU & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram0_A) 
                             << 7U))) ? 0U : (__Vtemp1434[
                                              ((IData)(1U) 
                                               + (0xfcU 
                                                  & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram0_A) 
                                                     << 2U)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram0_A) 
                                                      << 7U))))) 
           | (__Vtemp1434[(0xfcU & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram0_A) 
                                    << 2U))] >> (0x1fU 
                                                 & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram0_A) 
                                                    << 7U))));
    vlSelf->riscv_soc__DOT__sram6__DOT___GEN_1[1U] 
        = (((0U == (0x1fU & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram0_A) 
                             << 7U))) ? 0U : (__Vtemp1434[
                                              ((IData)(2U) 
                                               + (0xfcU 
                                                  & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram0_A) 
                                                     << 2U)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram0_A) 
                                                      << 7U))))) 
           | (__Vtemp1434[((IData)(1U) + (0xfcU & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram0_A) 
                                                   << 2U)))] 
              >> (0x1fU & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram0_A) 
                           << 7U))));
    vlSelf->riscv_soc__DOT__sram6__DOT___GEN_1[2U] 
        = (((0U == (0x1fU & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram0_A) 
                             << 7U))) ? 0U : (__Vtemp1434[
                                              ((IData)(3U) 
                                               + (0xfcU 
                                                  & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram0_A) 
                                                     << 2U)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram0_A) 
                                                      << 7U))))) 
           | (__Vtemp1434[((IData)(2U) + (0xfcU & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram0_A) 
                                                   << 2U)))] 
              >> (0x1fU & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram0_A) 
                           << 7U))));
    vlSelf->riscv_soc__DOT__sram6__DOT___GEN_1[3U] 
        = (((0U == (0x1fU & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram0_A) 
                             << 7U))) ? 0U : (__Vtemp1434[
                                              ((IData)(4U) 
                                               + (0xfcU 
                                                  & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram0_A) 
                                                     << 2U)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram0_A) 
                                                      << 7U))))) 
           | (__Vtemp1434[((IData)(3U) + (0xfcU & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram0_A) 
                                                   << 2U)))] 
              >> (0x1fU & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram0_A) 
                           << 7U))));
    __Vtemp1450[0U] = vlSelf->riscv_soc__DOT__sram7__DOT__sram_48[0U];
    __Vtemp1450[1U] = vlSelf->riscv_soc__DOT__sram7__DOT__sram_48[1U];
    __Vtemp1450[2U] = vlSelf->riscv_soc__DOT__sram7__DOT__sram_48[2U];
    __Vtemp1450[3U] = vlSelf->riscv_soc__DOT__sram7__DOT__sram_48[3U];
    __Vtemp1450[4U] = vlSelf->riscv_soc__DOT__sram7__DOT__sram_49[0U];
    __Vtemp1450[5U] = vlSelf->riscv_soc__DOT__sram7__DOT__sram_49[1U];
    __Vtemp1450[6U] = vlSelf->riscv_soc__DOT__sram7__DOT__sram_49[2U];
    __Vtemp1450[7U] = vlSelf->riscv_soc__DOT__sram7__DOT__sram_49[3U];
    __Vtemp1450[8U] = vlSelf->riscv_soc__DOT__sram7__DOT__sram_50[0U];
    __Vtemp1450[9U] = vlSelf->riscv_soc__DOT__sram7__DOT__sram_50[1U];
    __Vtemp1450[0xaU] = vlSelf->riscv_soc__DOT__sram7__DOT__sram_50[2U];
    __Vtemp1450[0xbU] = vlSelf->riscv_soc__DOT__sram7__DOT__sram_50[3U];
    __Vtemp1450[0xcU] = vlSelf->riscv_soc__DOT__sram7__DOT__sram_51[0U];
    __Vtemp1450[0xdU] = vlSelf->riscv_soc__DOT__sram7__DOT__sram_51[1U];
    __Vtemp1450[0xeU] = vlSelf->riscv_soc__DOT__sram7__DOT__sram_51[2U];
    __Vtemp1450[0xfU] = vlSelf->riscv_soc__DOT__sram7__DOT__sram_51[3U];
    __Vtemp1450[0x10U] = vlSelf->riscv_soc__DOT__sram7__DOT__sram_52[0U];
    __Vtemp1450[0x11U] = vlSelf->riscv_soc__DOT__sram7__DOT__sram_52[1U];
    __Vtemp1450[0x12U] = vlSelf->riscv_soc__DOT__sram7__DOT__sram_52[2U];
    __Vtemp1450[0x13U] = vlSelf->riscv_soc__DOT__sram7__DOT__sram_52[3U];
    __Vtemp1450[0x14U] = vlSelf->riscv_soc__DOT__sram7__DOT__sram_53[0U];
    __Vtemp1450[0x15U] = vlSelf->riscv_soc__DOT__sram7__DOT__sram_53[1U];
    __Vtemp1450[0x16U] = vlSelf->riscv_soc__DOT__sram7__DOT__sram_53[2U];
    __Vtemp1450[0x17U] = vlSelf->riscv_soc__DOT__sram7__DOT__sram_53[3U];
    __Vtemp1450[0x18U] = vlSelf->riscv_soc__DOT__sram7__DOT__sram_54[0U];
    __Vtemp1450[0x19U] = vlSelf->riscv_soc__DOT__sram7__DOT__sram_54[1U];
    __Vtemp1450[0x1aU] = vlSelf->riscv_soc__DOT__sram7__DOT__sram_54[2U];
    __Vtemp1450[0x1bU] = vlSelf->riscv_soc__DOT__sram7__DOT__sram_54[3U];
    __Vtemp1450[0x1cU] = vlSelf->riscv_soc__DOT__sram7__DOT__sram_55[0U];
    __Vtemp1450[0x1dU] = vlSelf->riscv_soc__DOT__sram7__DOT__sram_55[1U];
    __Vtemp1450[0x1eU] = vlSelf->riscv_soc__DOT__sram7__DOT__sram_55[2U];
    __Vtemp1450[0x1fU] = vlSelf->riscv_soc__DOT__sram7__DOT__sram_55[3U];
    __Vtemp1450[0x20U] = vlSelf->riscv_soc__DOT__sram7__DOT__sram_56[0U];
    __Vtemp1450[0x21U] = vlSelf->riscv_soc__DOT__sram7__DOT__sram_56[1U];
    __Vtemp1450[0x22U] = vlSelf->riscv_soc__DOT__sram7__DOT__sram_56[2U];
    __Vtemp1450[0x23U] = vlSelf->riscv_soc__DOT__sram7__DOT__sram_56[3U];
    __Vtemp1450[0x24U] = vlSelf->riscv_soc__DOT__sram7__DOT__sram_57[0U];
    __Vtemp1450[0x25U] = vlSelf->riscv_soc__DOT__sram7__DOT__sram_57[1U];
    __Vtemp1450[0x26U] = vlSelf->riscv_soc__DOT__sram7__DOT__sram_57[2U];
    __Vtemp1450[0x27U] = vlSelf->riscv_soc__DOT__sram7__DOT__sram_57[3U];
    __Vtemp1450[0x28U] = vlSelf->riscv_soc__DOT__sram7__DOT__sram_58[0U];
    __Vtemp1450[0x29U] = vlSelf->riscv_soc__DOT__sram7__DOT__sram_58[1U];
    __Vtemp1450[0x2aU] = vlSelf->riscv_soc__DOT__sram7__DOT__sram_58[2U];
    __Vtemp1450[0x2bU] = vlSelf->riscv_soc__DOT__sram7__DOT__sram_58[3U];
    __Vtemp1450[0x2cU] = vlSelf->riscv_soc__DOT__sram7__DOT__sram_59[0U];
    __Vtemp1450[0x2dU] = vlSelf->riscv_soc__DOT__sram7__DOT__sram_59[1U];
    __Vtemp1450[0x2eU] = vlSelf->riscv_soc__DOT__sram7__DOT__sram_59[2U];
    __Vtemp1450[0x2fU] = vlSelf->riscv_soc__DOT__sram7__DOT__sram_59[3U];
    __Vtemp1450[0x30U] = vlSelf->riscv_soc__DOT__sram7__DOT__sram_60[0U];
    __Vtemp1450[0x31U] = vlSelf->riscv_soc__DOT__sram7__DOT__sram_60[1U];
    __Vtemp1450[0x32U] = vlSelf->riscv_soc__DOT__sram7__DOT__sram_60[2U];
    __Vtemp1450[0x33U] = vlSelf->riscv_soc__DOT__sram7__DOT__sram_60[3U];
    __Vtemp1450[0x34U] = vlSelf->riscv_soc__DOT__sram7__DOT__sram_61[0U];
    __Vtemp1450[0x35U] = vlSelf->riscv_soc__DOT__sram7__DOT__sram_61[1U];
    __Vtemp1450[0x36U] = vlSelf->riscv_soc__DOT__sram7__DOT__sram_61[2U];
    __Vtemp1450[0x37U] = vlSelf->riscv_soc__DOT__sram7__DOT__sram_61[3U];
    __Vtemp1450[0x38U] = vlSelf->riscv_soc__DOT__sram7__DOT__sram_62[0U];
    __Vtemp1450[0x39U] = vlSelf->riscv_soc__DOT__sram7__DOT__sram_62[1U];
    __Vtemp1450[0x3aU] = vlSelf->riscv_soc__DOT__sram7__DOT__sram_62[2U];
    __Vtemp1450[0x3bU] = vlSelf->riscv_soc__DOT__sram7__DOT__sram_62[3U];
    __Vtemp1450[0x3cU] = vlSelf->riscv_soc__DOT__sram7__DOT__sram_63[0U];
    __Vtemp1450[0x3dU] = vlSelf->riscv_soc__DOT__sram7__DOT__sram_63[1U];
    __Vtemp1450[0x3eU] = vlSelf->riscv_soc__DOT__sram7__DOT__sram_63[2U];
    __Vtemp1450[0x3fU] = vlSelf->riscv_soc__DOT__sram7__DOT__sram_63[3U];
    VL_CONCAT_WWW(2176,2048,128, __Vtemp1451, __Vtemp1450, vlSelf->riscv_soc__DOT__sram7__DOT__sram_47);
    VL_CONCAT_WWW(2304,2176,128, __Vtemp1452, __Vtemp1451, vlSelf->riscv_soc__DOT__sram7__DOT__sram_46);
    VL_CONCAT_WWW(2432,2304,128, __Vtemp1453, __Vtemp1452, vlSelf->riscv_soc__DOT__sram7__DOT__sram_45);
    VL_CONCAT_WWW(2560,2432,128, __Vtemp1454, __Vtemp1453, vlSelf->riscv_soc__DOT__sram7__DOT__sram_44);
    VL_CONCAT_WWW(2688,2560,128, __Vtemp1455, __Vtemp1454, vlSelf->riscv_soc__DOT__sram7__DOT__sram_43);
    VL_CONCAT_WWW(2816,2688,128, __Vtemp1456, __Vtemp1455, vlSelf->riscv_soc__DOT__sram7__DOT__sram_42);
    VL_CONCAT_WWW(2944,2816,128, __Vtemp1457, __Vtemp1456, vlSelf->riscv_soc__DOT__sram7__DOT__sram_41);
    VL_CONCAT_WWW(3072,2944,128, __Vtemp1458, __Vtemp1457, vlSelf->riscv_soc__DOT__sram7__DOT__sram_40);
    VL_CONCAT_WWW(3200,3072,128, __Vtemp1459, __Vtemp1458, vlSelf->riscv_soc__DOT__sram7__DOT__sram_39);
    VL_CONCAT_WWW(3328,3200,128, __Vtemp1460, __Vtemp1459, vlSelf->riscv_soc__DOT__sram7__DOT__sram_38);
    VL_CONCAT_WWW(3456,3328,128, __Vtemp1461, __Vtemp1460, vlSelf->riscv_soc__DOT__sram7__DOT__sram_37);
    VL_CONCAT_WWW(3584,3456,128, __Vtemp1462, __Vtemp1461, vlSelf->riscv_soc__DOT__sram7__DOT__sram_36);
    VL_CONCAT_WWW(3712,3584,128, __Vtemp1463, __Vtemp1462, vlSelf->riscv_soc__DOT__sram7__DOT__sram_35);
    VL_CONCAT_WWW(3840,3712,128, __Vtemp1464, __Vtemp1463, vlSelf->riscv_soc__DOT__sram7__DOT__sram_34);
    VL_CONCAT_WWW(3968,3840,128, __Vtemp1465, __Vtemp1464, vlSelf->riscv_soc__DOT__sram7__DOT__sram_33);
    VL_CONCAT_WWW(4096,3968,128, __Vtemp1466, __Vtemp1465, vlSelf->riscv_soc__DOT__sram7__DOT__sram_32);
    VL_CONCAT_WWW(4224,4096,128, __Vtemp1467, __Vtemp1466, vlSelf->riscv_soc__DOT__sram7__DOT__sram_31);
    VL_CONCAT_WWW(4352,4224,128, __Vtemp1468, __Vtemp1467, vlSelf->riscv_soc__DOT__sram7__DOT__sram_30);
    VL_CONCAT_WWW(4480,4352,128, __Vtemp1469, __Vtemp1468, vlSelf->riscv_soc__DOT__sram7__DOT__sram_29);
    VL_CONCAT_WWW(4608,4480,128, __Vtemp1470, __Vtemp1469, vlSelf->riscv_soc__DOT__sram7__DOT__sram_28);
    VL_CONCAT_WWW(4736,4608,128, __Vtemp1471, __Vtemp1470, vlSelf->riscv_soc__DOT__sram7__DOT__sram_27);
    VL_CONCAT_WWW(4864,4736,128, __Vtemp1472, __Vtemp1471, vlSelf->riscv_soc__DOT__sram7__DOT__sram_26);
    VL_CONCAT_WWW(4992,4864,128, __Vtemp1473, __Vtemp1472, vlSelf->riscv_soc__DOT__sram7__DOT__sram_25);
    VL_CONCAT_WWW(5120,4992,128, __Vtemp1474, __Vtemp1473, vlSelf->riscv_soc__DOT__sram7__DOT__sram_24);
    VL_CONCAT_WWW(5248,5120,128, __Vtemp1475, __Vtemp1474, vlSelf->riscv_soc__DOT__sram7__DOT__sram_23);
    VL_CONCAT_WWW(5376,5248,128, __Vtemp1476, __Vtemp1475, vlSelf->riscv_soc__DOT__sram7__DOT__sram_22);
    VL_CONCAT_WWW(5504,5376,128, __Vtemp1477, __Vtemp1476, vlSelf->riscv_soc__DOT__sram7__DOT__sram_21);
    VL_CONCAT_WWW(5632,5504,128, __Vtemp1478, __Vtemp1477, vlSelf->riscv_soc__DOT__sram7__DOT__sram_20);
    VL_CONCAT_WWW(5760,5632,128, __Vtemp1479, __Vtemp1478, vlSelf->riscv_soc__DOT__sram7__DOT__sram_19);
    VL_CONCAT_WWW(5888,5760,128, __Vtemp1480, __Vtemp1479, vlSelf->riscv_soc__DOT__sram7__DOT__sram_18);
    VL_CONCAT_WWW(6016,5888,128, __Vtemp1481, __Vtemp1480, vlSelf->riscv_soc__DOT__sram7__DOT__sram_17);
    VL_CONCAT_WWW(6144,6016,128, __Vtemp1482, __Vtemp1481, vlSelf->riscv_soc__DOT__sram7__DOT__sram_16);
    VL_CONCAT_WWW(6272,6144,128, __Vtemp1483, __Vtemp1482, vlSelf->riscv_soc__DOT__sram7__DOT__sram_15);
    VL_CONCAT_WWW(6400,6272,128, __Vtemp1484, __Vtemp1483, vlSelf->riscv_soc__DOT__sram7__DOT__sram_14);
    VL_CONCAT_WWW(6528,6400,128, __Vtemp1485, __Vtemp1484, vlSelf->riscv_soc__DOT__sram7__DOT__sram_13);
    VL_CONCAT_WWW(6656,6528,128, __Vtemp1486, __Vtemp1485, vlSelf->riscv_soc__DOT__sram7__DOT__sram_12);
    VL_CONCAT_WWW(6784,6656,128, __Vtemp1487, __Vtemp1486, vlSelf->riscv_soc__DOT__sram7__DOT__sram_11);
    VL_CONCAT_WWW(6912,6784,128, __Vtemp1488, __Vtemp1487, vlSelf->riscv_soc__DOT__sram7__DOT__sram_10);
    VL_CONCAT_WWW(7040,6912,128, __Vtemp1489, __Vtemp1488, vlSelf->riscv_soc__DOT__sram7__DOT__sram_9);
    VL_CONCAT_WWW(7168,7040,128, __Vtemp1490, __Vtemp1489, vlSelf->riscv_soc__DOT__sram7__DOT__sram_8);
    VL_CONCAT_WWW(7296,7168,128, __Vtemp1491, __Vtemp1490, vlSelf->riscv_soc__DOT__sram7__DOT__sram_7);
    VL_CONCAT_WWW(7424,7296,128, __Vtemp1492, __Vtemp1491, vlSelf->riscv_soc__DOT__sram7__DOT__sram_6);
    VL_CONCAT_WWW(7552,7424,128, __Vtemp1493, __Vtemp1492, vlSelf->riscv_soc__DOT__sram7__DOT__sram_5);
    VL_CONCAT_WWW(7680,7552,128, __Vtemp1494, __Vtemp1493, vlSelf->riscv_soc__DOT__sram7__DOT__sram_4);
    VL_CONCAT_WWW(7808,7680,128, __Vtemp1495, __Vtemp1494, vlSelf->riscv_soc__DOT__sram7__DOT__sram_3);
    VL_CONCAT_WWW(7936,7808,128, __Vtemp1496, __Vtemp1495, vlSelf->riscv_soc__DOT__sram7__DOT__sram_2);
    VL_CONCAT_WWW(8064,7936,128, __Vtemp1497, __Vtemp1496, vlSelf->riscv_soc__DOT__sram7__DOT__sram_1);
    VL_CONCAT_WWW(8192,8064,128, __Vtemp1498, __Vtemp1497, vlSelf->riscv_soc__DOT__sram7__DOT__sram_0);
    vlSelf->riscv_soc__DOT__sram7__DOT___GEN_1[0U] 
        = (((0U == (0x1fU & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram0_A) 
                             << 7U))) ? 0U : (__Vtemp1498[
                                              ((IData)(1U) 
                                               + (0xfcU 
                                                  & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram0_A) 
                                                     << 2U)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram0_A) 
                                                      << 7U))))) 
           | (__Vtemp1498[(0xfcU & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram0_A) 
                                    << 2U))] >> (0x1fU 
                                                 & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram0_A) 
                                                    << 7U))));
    vlSelf->riscv_soc__DOT__sram7__DOT___GEN_1[1U] 
        = (((0U == (0x1fU & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram0_A) 
                             << 7U))) ? 0U : (__Vtemp1498[
                                              ((IData)(2U) 
                                               + (0xfcU 
                                                  & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram0_A) 
                                                     << 2U)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram0_A) 
                                                      << 7U))))) 
           | (__Vtemp1498[((IData)(1U) + (0xfcU & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram0_A) 
                                                   << 2U)))] 
              >> (0x1fU & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram0_A) 
                           << 7U))));
    vlSelf->riscv_soc__DOT__sram7__DOT___GEN_1[2U] 
        = (((0U == (0x1fU & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram0_A) 
                             << 7U))) ? 0U : (__Vtemp1498[
                                              ((IData)(3U) 
                                               + (0xfcU 
                                                  & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram0_A) 
                                                     << 2U)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram0_A) 
                                                      << 7U))))) 
           | (__Vtemp1498[((IData)(2U) + (0xfcU & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram0_A) 
                                                   << 2U)))] 
              >> (0x1fU & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram0_A) 
                           << 7U))));
    vlSelf->riscv_soc__DOT__sram7__DOT___GEN_1[3U] 
        = (((0U == (0x1fU & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram0_A) 
                             << 7U))) ? 0U : (__Vtemp1498[
                                              ((IData)(4U) 
                                               + (0xfcU 
                                                  & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram0_A) 
                                                     << 2U)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram0_A) 
                                                      << 7U))))) 
           | (__Vtemp1498[((IData)(3U) + (0xfcU & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram0_A) 
                                                   << 2U)))] 
              >> (0x1fU & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram0_A) 
                           << 7U))));
    vlSelf->riscv_soc__DOT__core__DOT___cross_bar_1_io_clint_bus_valid 
        = (((~ (IData)((0U != (vlSelf->riscv_soc__DOT__core__DOT___execute_io_bus_bits_addr 
                               >> 0x1fU)))) & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1__DOT__not_clint))) 
           & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT___io_bus_valid_T));
    vlSelf->riscv_soc__DOT__core__DOT___cross_bar_1_io_wb_bits_rdata 
        = ((0U != (vlSelf->riscv_soc__DOT__core__DOT___execute_io_bus_bits_addr 
                   >> 0x1fU)) ? vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_rdata
            : ((IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1__DOT__not_clint)
                ? vlSelf->riscv_soc__DOT___axi_ram_io_ram_bus_r_bits_rdata
                : vlSelf->riscv_soc__DOT__core__DOT__clint_de__DOT__red_rdata));
    vlSelf->riscv_soc__DOT__core__DOT___cross_bar_1_io_bus2_valid 
        = (((~ (IData)((0U != (vlSelf->riscv_soc__DOT__core__DOT___execute_io_bus_bits_addr 
                               >> 0x1fU)))) & (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1__DOT__not_clint)) 
           & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT___io_bus_valid_T));
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___io_br_info_target_next_pc_T 
        = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__br_valid)
            ? (((QData)((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___GEN_4[1U])) 
                << 0x20U) | (QData)((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___GEN_4[0U])))
            : 0ULL);
    __Vtemp1502[0U] = (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__pre_info_fifo_0);
    __Vtemp1502[1U] = (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__pre_info_fifo_0 
                               >> 0x20U));
    __Vtemp1502[2U] = (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__pre_info_fifo_1);
    __Vtemp1502[3U] = (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__pre_info_fifo_1 
                               >> 0x20U));
    __Vtemp1502[4U] = (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__pre_info_fifo_2);
    __Vtemp1502[5U] = (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__pre_info_fifo_2 
                               >> 0x20U));
    __Vtemp1502[6U] = (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__pre_info_fifo_3);
    __Vtemp1502[7U] = (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__pre_info_fifo_3 
                               >> 0x20U));
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___io_br_info_mispredict_T 
        = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__br_valid) 
           & (((((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__is_pre) 
                 & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___GEN_4[2U]) 
                & ((((QData)((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___GEN_4[1U])) 
                     << 0x20U) | (QData)((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___GEN_4[0U]))) 
                   != ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__is_pre)
                        ? (((QData)((IData)(__Vtemp1502[
                                            (((IData)(0x3fU) 
                                              + (0xffU 
                                                 & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__pre_info_tail) 
                                                    << 6U))) 
                                             >> 5U)])) 
                            << ((0U == (0x1fU & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__pre_info_tail) 
                                                 << 6U)))
                                 ? 0x20U : ((IData)(0x40U) 
                                            - (0x1fU 
                                               & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__pre_info_tail) 
                                                  << 6U))))) 
                           | (((0U == (0x1fU & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__pre_info_tail) 
                                                << 6U)))
                                ? 0ULL : ((QData)((IData)(
                                                          __Vtemp1502[
                                                          (((IData)(0x1fU) 
                                                            + 
                                                            (0xffU 
                                                             & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__pre_info_tail) 
                                                                << 6U))) 
                                                           >> 5U)])) 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__pre_info_tail) 
                                                    << 6U))))) 
                              | ((QData)((IData)(__Vtemp1502[
                                                 (6U 
                                                  & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__pre_info_tail) 
                                                     << 1U))])) 
                                 >> (0x1fU & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__pre_info_tail) 
                                              << 6U)))))
                        : 0ULL))) | (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___GEN_4[2U] 
                                     & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__is_pre)))) 
              | ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__is_pre) 
                 & (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___GEN_4[2U]))));
    vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT___GEN 
        = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__w_locked)
            ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__w_lockId)
            : ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_w_valid)
                ? 0U : (((IData)(vlSelf->riscv_soc__DOT__core__DOT___cross_bar_1_io_bus2_valid) 
                         & (IData)(vlSelf->riscv_soc__DOT__core__DOT___execute_io_bus_bits_is_w))
                         ? 1U : 2U)));
    vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT___GEN_0 
        = (3U & ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__reg_r_cnt))
                  ? ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_r_valid)
                      ? 0U : ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_r_valid)
                               ? 1U : ((IData)(vlSelf->riscv_soc__DOT__core__DOT___cross_bar_1_io_bus1_valid)
                                        ? 2U : (- (IData)(
                                                          ((IData)(vlSelf->riscv_soc__DOT__core__DOT___cross_bar_1_io_bus2_valid) 
                                                           & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT___execute_io_bus_bits_is_w))))))))
                  : (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__r_lockId)));
    if ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT___GEN))) {
        vlSelf->riscv_soc__DOT___core_io_axi_bus_w_bits_wstrb = 0xffU;
        vlSelf->riscv_soc__DOT___core_io_axi_bus_w_bits_wlast 
            = vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_w_wlast;
        vlSelf->riscv_soc__DOT___core_io_axi_bus_w_valid 
            = vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_w_valid;
    } else {
        vlSelf->riscv_soc__DOT___core_io_axi_bus_w_bits_wstrb 
            = ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT___GEN))
                ? (IData)(vlSelf->riscv_soc__DOT__core__DOT___execute_io_bus_bits_wstrb)
                : 0U);
        vlSelf->riscv_soc__DOT___core_io_axi_bus_w_bits_wlast 
            = (1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT___GEN));
        vlSelf->riscv_soc__DOT___core_io_axi_bus_w_valid 
            = (((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT___GEN)) 
                & (IData)(vlSelf->riscv_soc__DOT__core__DOT___cross_bar_1_io_bus2_valid)) 
               & (IData)(vlSelf->riscv_soc__DOT__core__DOT___execute_io_bus_bits_is_w));
    }
    vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT___io_AXI_Bus_aw_valid_T_9 
        = ((((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT___GEN)) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_w_valid)) 
            & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__reg_aw_ok))) 
           | ((((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT___GEN)) 
                & (IData)(vlSelf->riscv_soc__DOT__core__DOT___cross_bar_1_io_bus2_valid)) 
               & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__reg_aw_ok))) 
              & (IData)(vlSelf->riscv_soc__DOT__core__DOT___execute_io_bus_bits_is_w)));
    vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT___io_ICache_bus_r_ready_T_1 
        = ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT___GEN_0)) 
           & (IData)(vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_r_valid));
    vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT___io_DCache_bus_r_ready_T_1 
        = ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT___GEN_0)) 
           & (IData)(vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_r_valid));
    vlSelf->riscv_soc__DOT__core__DOT___cross_bar_io_ICache_bus_r_bits_rlast 
        = ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT___GEN_0)) 
           & (IData)(vlSelf->riscv_soc__DOT___axi_ram_io_ram_bus_r_bits_rlast));
    vlSelf->riscv_soc__DOT__core__DOT___cross_bar_io_DCache_bus_r_bits_rlast 
        = ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT___GEN_0)) 
           & (IData)(vlSelf->riscv_soc__DOT___axi_ram_io_ram_bus_r_bits_rlast));
    vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT___io_bus2_ready_T_4 
        = (((3U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT___GEN_0)) 
            & (IData)(vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_r_valid)) 
           | ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT___GEN)) 
              & (IData)(vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_w_ready)));
    __Vtemp1505[0U] = (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_r_raddr);
    __Vtemp1505[1U] = (IData)((vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_r_raddr 
                               >> 0x20U));
    __Vtemp1505[2U] = (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_r_raddr);
    __Vtemp1505[3U] = (IData)((vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_r_raddr 
                               >> 0x20U));
    __Vtemp1505[4U] = (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0);
    __Vtemp1505[5U] = (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0 
                               >> 0x20U));
    __Vtemp1505[6U] = (IData)(vlSelf->riscv_soc__DOT__core__DOT___execute_io_bus_bits_addr);
    __Vtemp1505[7U] = (IData)((vlSelf->riscv_soc__DOT__core__DOT___execute_io_bus_bits_addr 
                               >> 0x20U));
    vlSelf->riscv_soc__DOT___core_io_axi_bus_ar_bits_araddr 
        = (((QData)((IData)(__Vtemp1505[(((IData)(0x3fU) 
                                          + (0xffU 
                                             & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT___GEN_0) 
                                                << 6U))) 
                                         >> 5U)])) 
            << ((0U == (0x1fU & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT___GEN_0) 
                                 << 6U))) ? 0x20U : 
                ((IData)(0x40U) - (0x1fU & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT___GEN_0) 
                                            << 6U))))) 
           | (((0U == (0x1fU & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT___GEN_0) 
                                << 6U))) ? 0ULL : ((QData)((IData)(
                                                                   __Vtemp1505[
                                                                   (((IData)(0x1fU) 
                                                                     + 
                                                                     (0xffU 
                                                                      & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT___GEN_0) 
                                                                         << 6U))) 
                                                                    >> 5U)])) 
                                                   << 
                                                   ((IData)(0x20U) 
                                                    - 
                                                    (0x1fU 
                                                     & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT___GEN_0) 
                                                        << 6U))))) 
              | ((QData)((IData)(__Vtemp1505[(6U & 
                                              ((IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT___GEN_0) 
                                               << 1U))])) 
                 >> (0x1fU & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT___GEN_0) 
                              << 6U)))));
    vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT___GEN_2 
        = (1U & ((((((3U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT___GEN_0)) 
                     & (IData)(vlSelf->riscv_soc__DOT__core__DOT___cross_bar_1_io_bus2_valid)) 
                    & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__reg_ar_ok))) 
                   << 3U) | ((((IData)(vlSelf->riscv_soc__DOT__core__DOT___cross_bar_1_io_bus1_valid) 
                               & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__reg_ar_ok))) 
                              << 2U) | ((((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_r_valid) 
                                          & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__reg_ar_ok))) 
                                         << 1U) | ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_r_valid) 
                                                   & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__reg_ar_ok)))))) 
                 >> (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT___GEN_0)));
    vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT___io_bus1_ready_T_1 
        = ((2U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT___GEN_0)) 
           & (IData)(vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_r_valid));
    if ((0U != (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0 
                >> 0x1fU))) {
        vlSelf->riscv_soc__DOT__core__DOT___cross_bar_1_io_fetch_cpu_addr_ready 
            = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1__DOT__ready;
        vlSelf->riscv_soc__DOT__core__DOT___cross_bar_1_io_fetch_cpu_data_valid 
            = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_valid;
    } else {
        vlSelf->riscv_soc__DOT__core__DOT___cross_bar_1_io_fetch_cpu_addr_ready 
            = vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT___io_bus1_ready_T_1;
        vlSelf->riscv_soc__DOT__core__DOT___cross_bar_1_io_fetch_cpu_data_valid 
            = vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT___io_bus1_ready_T_1;
    }
}

void Vriscv_soc___024root___eval_initial(Vriscv_soc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vriscv_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv_soc___024root___eval_initial\n"); );
    // Body
    Vriscv_soc___024root___initial__TOP__1(vlSelf);
    vlSelf->__Vclklast__TOP__clock = vlSelf->clock;
}

void Vriscv_soc___024root___eval_settle(Vriscv_soc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vriscv_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv_soc___024root___eval_settle\n"); );
    // Body
    Vriscv_soc___024root___settle__TOP__4(vlSelf);
}

void Vriscv_soc___024root___final(Vriscv_soc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vriscv_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv_soc___024root___final\n"); );
}

void Vriscv_soc___024root___ctor_var_reset(Vriscv_soc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vriscv_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv_soc___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clock = VL_RAND_RESET_I(1);
    vlSelf->reset = VL_RAND_RESET_I(1);
    vlSelf->io_difftest_reg_0 = VL_RAND_RESET_Q(64);
    vlSelf->io_difftest_reg_1 = VL_RAND_RESET_Q(64);
    vlSelf->io_difftest_reg_2 = VL_RAND_RESET_Q(64);
    vlSelf->io_difftest_reg_3 = VL_RAND_RESET_Q(64);
    vlSelf->io_difftest_reg_4 = VL_RAND_RESET_Q(64);
    vlSelf->io_difftest_reg_5 = VL_RAND_RESET_Q(64);
    vlSelf->io_difftest_reg_6 = VL_RAND_RESET_Q(64);
    vlSelf->io_difftest_reg_7 = VL_RAND_RESET_Q(64);
    vlSelf->io_difftest_reg_8 = VL_RAND_RESET_Q(64);
    vlSelf->io_difftest_reg_9 = VL_RAND_RESET_Q(64);
    vlSelf->io_difftest_reg_10 = VL_RAND_RESET_Q(64);
    vlSelf->io_difftest_reg_11 = VL_RAND_RESET_Q(64);
    vlSelf->io_difftest_reg_12 = VL_RAND_RESET_Q(64);
    vlSelf->io_difftest_reg_13 = VL_RAND_RESET_Q(64);
    vlSelf->io_difftest_reg_14 = VL_RAND_RESET_Q(64);
    vlSelf->io_difftest_reg_15 = VL_RAND_RESET_Q(64);
    vlSelf->io_difftest_reg_16 = VL_RAND_RESET_Q(64);
    vlSelf->io_difftest_reg_17 = VL_RAND_RESET_Q(64);
    vlSelf->io_difftest_reg_18 = VL_RAND_RESET_Q(64);
    vlSelf->io_difftest_reg_19 = VL_RAND_RESET_Q(64);
    vlSelf->io_difftest_reg_20 = VL_RAND_RESET_Q(64);
    vlSelf->io_difftest_reg_21 = VL_RAND_RESET_Q(64);
    vlSelf->io_difftest_reg_22 = VL_RAND_RESET_Q(64);
    vlSelf->io_difftest_reg_23 = VL_RAND_RESET_Q(64);
    vlSelf->io_difftest_reg_24 = VL_RAND_RESET_Q(64);
    vlSelf->io_difftest_reg_25 = VL_RAND_RESET_Q(64);
    vlSelf->io_difftest_reg_26 = VL_RAND_RESET_Q(64);
    vlSelf->io_difftest_reg_27 = VL_RAND_RESET_Q(64);
    vlSelf->io_difftest_reg_28 = VL_RAND_RESET_Q(64);
    vlSelf->io_difftest_reg_29 = VL_RAND_RESET_Q(64);
    vlSelf->io_difftest_reg_30 = VL_RAND_RESET_Q(64);
    vlSelf->io_difftest_reg_31 = VL_RAND_RESET_Q(64);
    vlSelf->io_difftest_pc = VL_RAND_RESET_Q(64);
    vlSelf->io_difftest_inst = VL_RAND_RESET_I(32);
    vlSelf->io_difftest_commit = VL_RAND_RESET_I(1);
    vlSelf->io_inst_counter = VL_RAND_RESET_Q(64);
    vlSelf->io_difftest_irq = VL_RAND_RESET_I(1);
    vlSelf->io_difftest_mstatus = VL_RAND_RESET_Q(64);
    vlSelf->io_difftest_mcause = VL_RAND_RESET_Q(64);
    vlSelf->io_difftest_mepc = VL_RAND_RESET_Q(64);
    vlSelf->io_difftest_mtvec = VL_RAND_RESET_Q(64);
    vlSelf->io_difftest_peripheral = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT___axi_ram_io_ram_bus_r_bits_rdata = VL_RAND_RESET_Q(64);
    vlSelf->riscv_soc__DOT___axi_ram_io_ram_bus_r_bits_rlast = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT___core_io_axi_bus_w_valid = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT___core_io_axi_bus_w_bits_wstrb = VL_RAND_RESET_I(8);
    vlSelf->riscv_soc__DOT___core_io_axi_bus_w_bits_wlast = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT___core_io_axi_bus_ar_bits_araddr = VL_RAND_RESET_Q(64);
    vlSelf->riscv_soc__DOT__core__DOT___commit_io_csr_rd_csr_data = VL_RAND_RESET_Q(64);
    vlSelf->riscv_soc__DOT__core__DOT___commit_io_csr_pass_csr_mepc = VL_RAND_RESET_Q(64);
    vlSelf->riscv_soc__DOT__core__DOT___commit_io_csr_pass_csr_mstatus = VL_RAND_RESET_Q(64);
    vlSelf->riscv_soc__DOT__core__DOT___commit_io_csr_pass_csr_mie = VL_RAND_RESET_Q(64);
    vlSelf->riscv_soc__DOT__core__DOT___execute_io_csr_except_is_except = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT___execute_io_csr_except_is_time_irq = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT___execute_io_csr_except_is_soft_irq = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT___execute_io_commit = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT___execute_io_bus_bits_addr = VL_RAND_RESET_Q(64);
    vlSelf->riscv_soc__DOT__core__DOT___execute_io_bus_bits_wdata = VL_RAND_RESET_Q(64);
    vlSelf->riscv_soc__DOT__core__DOT___execute_io_bus_bits_wstrb = VL_RAND_RESET_I(8);
    vlSelf->riscv_soc__DOT__core__DOT___execute_io_bus_bits_is_w = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT___cross_bar_1_io_fetch_cpu_addr_ready = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT___cross_bar_1_io_fetch_cpu_data_valid = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT___cross_bar_1_io_fetch_cpu_data_bits_pc = VL_RAND_RESET_Q(64);
    vlSelf->riscv_soc__DOT__core__DOT___cross_bar_1_io_wb_bits_rdata = VL_RAND_RESET_Q(64);
    vlSelf->riscv_soc__DOT__core__DOT___cross_bar_1_io_DCache_valid = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT___cross_bar_1_io_bus1_valid = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT___cross_bar_1_io_bus2_valid = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT___cross_bar_1_io_clint_bus_valid = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT___cross_bar_io_ICache_bus_r_bits_rlast = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT___cross_bar_io_DCache_bus_r_bits_rlast = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___cache_stage1_io_tag_valid_index = VL_RAND_RESET_I(6);
    vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___cache_stage1_io_cache_stage1_bits_sram_0_hit = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___cache_stage1_io_cache_stage1_bits_sram_1_hit = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_sram0_valid = VL_RAND_RESET_Q(64);
    vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_sram1_valid = VL_RAND_RESET_Q(64);
    vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_w_sram = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram0_write = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram1_write = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram_addr = VL_RAND_RESET_I(6);
    vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_temp_sram0_valid = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_temp_sram1_valid = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_temp_r_index = VL_RAND_RESET_I(6);
    vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__w_r_pass0_val = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__w_r_pass1_val = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_sram_r_ready = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(128, vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vcellinp__cache_stage1__io_sram_sram_data_1);
    VL_RAND_RESET_W(128, vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT____Vcellinp__cache_stage1__io_sram_sram_data_0);
    vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__unnamedblk1__DOT___GEN = VL_RAND_RESET_Q(64);
    vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__unnamedblk1__DOT___reg_temp_sram0_valid_T = VL_RAND_RESET_Q(64);
    vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__unnamedblk1__DOT___reg_temp_sram1_valid_T = VL_RAND_RESET_Q(64);
    vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__unnamedblk1__DOT__unnamedblk2__DOT__chose_bit = VL_RAND_RESET_Q(64);
    vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage0__DOT__reg_valid = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage0__DOT__reg_addr = VL_RAND_RESET_Q(64);
    vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1__DOT__valid = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1__DOT__ready = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1__DOT__reg_cpu_addr = VL_RAND_RESET_Q(64);
    vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1__DOT__reg_valid = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_chosen_tag = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_rdata = VL_RAND_RESET_Q(64);
    vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_valid = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_ready = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_r_raddr = VL_RAND_RESET_Q(64);
    vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_r_valid = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(128, vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata);
    vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_write = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr = VL_RAND_RESET_Q(64);
    vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_lru_1 = VL_RAND_RESET_Q(64);
    vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_bus_state = VL_RAND_RESET_I(2);
    vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__unnamedblk1__DOT__valid = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__unnamedblk1__DOT___GEN = VL_RAND_RESET_Q(64);
    vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__unnamedblk1__DOT___LRU_1_T = VL_RAND_RESET_Q(64);
    vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__unnamedblk1__DOT___T_3 = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__unnamedblk1__DOT___T_4 = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__unnamedblk1__DOT___T_7 = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__unnamedblk1__DOT___GEN_0 = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__unnamedblk1__DOT___T_9 = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__unnamedblk1__DOT___T_10 = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__unnamedblk1__DOT___GEN_1 = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_2 = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__unnamedblk1__DOT__unnamedblk3__DOT__chose_bit = VL_RAND_RESET_Q(64);
    vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state = VL_RAND_RESET_I(2);
    vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_wdata = VL_RAND_RESET_Q(64);
    vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_wstrb = VL_RAND_RESET_I(8);
    vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_is_w = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag = VL_RAND_RESET_Q(54);
    vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index = VL_RAND_RESET_I(6);
    vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_offset = VL_RAND_RESET_I(4);
    vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_ready = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_rdata = VL_RAND_RESET_Q(64);
    vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_write = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_wstrb = VL_RAND_RESET_I(16);
    VL_RAND_RESET_W(128, vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_wdata);
    vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_chosen_tag = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(128, vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__cache_mask);
    vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram0_write = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram0_A = VL_RAND_RESET_I(6);
    vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_sram0_valid = VL_RAND_RESET_Q(64);
    vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_sram0_dirty = VL_RAND_RESET_Q(64);
    vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram2_write = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_sram2_valid = VL_RAND_RESET_Q(64);
    vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_sram2_dirty = VL_RAND_RESET_Q(64);
    vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_r_raddr = VL_RAND_RESET_Q(64);
    vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_r_valid = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_w_waddr = VL_RAND_RESET_Q(64);
    vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_w_wdata = VL_RAND_RESET_Q(64);
    vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_w_wlast = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_w_valid = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_b_ready = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_2 = VL_RAND_RESET_Q(64);
    vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cnt = VL_RAND_RESET_I(2);
    vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_rbus_finish = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_wbus_finish = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__unnamedblk1__DOT___GEN_0 = VL_RAND_RESET_Q(64);
    vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__unnamedblk1__DOT__chose_bit = VL_RAND_RESET_Q(64);
    vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__unnamedblk1__DOT__hit_0 = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__unnamedblk1__DOT__hit_2 = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__unnamedblk1__DOT___tag_valid_0_T = VL_RAND_RESET_Q(64);
    vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__unnamedblk1__DOT___tag_valid_2_T = VL_RAND_RESET_Q(64);
    vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__unnamedblk1__DOT___LRU_2_T = VL_RAND_RESET_Q(64);
    vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__unnamedblk1__DOT___T_1 = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__unnamedblk1__DOT___T_2 = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__unnamedblk1__DOT___T_3 = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__unnamedblk1__DOT___T_6 = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__unnamedblk1__DOT___GEN_1 = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__unnamedblk1__DOT___T_7 = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__unnamedblk1__DOT___tag_dirty_2_T = VL_RAND_RESET_Q(64);
    vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__unnamedblk1__DOT___tag_dirty_0_T = VL_RAND_RESET_Q(64);
    vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__unnamedblk1__DOT___T_11 = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__unnamedblk1__DOT___GEN_2 = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__unnamedblk1__DOT___GEN_3 = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__unnamedblk1__DOT___T_12 = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__unnamedblk1__DOT___T_13 = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__unnamedblk1__DOT___T_14 = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__unnamedblk1__DOT___T_15 = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__unnamedblk1__DOT___T_19 = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__unnamedblk1__DOT___T_21 = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__unnamedblk1__DOT___GEN_4 = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__unnamedblk1__DOT___GEN_5 = VL_RAND_RESET_I(8);
    VL_RAND_RESET_W(128, vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___cache_wdata_T_1);
    VL_RAND_RESET_W(128, vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__unnamedblk1__DOT__unnamedblk2__DOT___cache_wdata_T_2);
    vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_6 = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk4__DOT___GEN_7 = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk4__DOT___T_16 = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__unnamedblk1__DOT__unnamedblk5__DOT___GEN_8 = VL_RAND_RESET_Q(64);
    vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__w_locked = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__w_lockId = VL_RAND_RESET_I(2);
    vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT___GEN = VL_RAND_RESET_I(2);
    vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__reg_r_cnt = VL_RAND_RESET_I(2);
    vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__r_lockId = VL_RAND_RESET_I(2);
    vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT___T_7 = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT___GEN_0 = VL_RAND_RESET_I(2);
    vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT___io_ICache_bus_r_ready_T_1 = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT___io_DCache_bus_r_ready_T_1 = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT___io_bus1_ready_T_1 = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT___io_bus2_ready_T_4 = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__reg_aw_ok = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT___io_AXI_Bus_aw_valid_T_9 = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__reg_ar_ok = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT___GEN_2 = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__unnamedblk1__DOT___T_3 = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__unnamedblk2__DOT___T_9 = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1__DOT__not_clint = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT___br_predictor_io_pre_next_pc = VL_RAND_RESET_Q(64);
    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0 = VL_RAND_RESET_Q(64);
    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_flush = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_next_pc = VL_RAND_RESET_Q(64);
    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_bus_valid = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__pre_info_head = VL_RAND_RESET_I(2);
    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__pre_info_tail = VL_RAND_RESET_I(2);
    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__pre_info_fifo_0 = VL_RAND_RESET_Q(64);
    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__pre_info_fifo_1 = VL_RAND_RESET_Q(64);
    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__pre_info_fifo_2 = VL_RAND_RESET_Q(64);
    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__pre_info_fifo_3 = VL_RAND_RESET_Q(64);
    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__is_pre_head = VL_RAND_RESET_I(2);
    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__is_pre_tail = VL_RAND_RESET_I(2);
    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__is_pre_fifo_0 = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__is_pre_fifo_1 = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__is_pre_fifo_2 = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__is_pre_fifo_3 = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT___GEN_2 = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT___io_out_flush_T = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vcellinp__ibuf__io_cache_buf_bits_inst = VL_RAND_RESET_I(32);
    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__unnamedblk1__DOT___T_3 = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__unnamedblk1__DOT__unnamedblk2__DOT__pre_enq = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_pc_0 = VL_RAND_RESET_Q(64);
    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_pc_1 = VL_RAND_RESET_Q(64);
    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_pc_2 = VL_RAND_RESET_Q(64);
    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_pc_3 = VL_RAND_RESET_Q(64);
    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_0 = VL_RAND_RESET_I(32);
    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_1 = VL_RAND_RESET_I(32);
    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_2 = VL_RAND_RESET_I(32);
    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_3 = VL_RAND_RESET_I(32);
    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_is_pre_0 = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_is_pre_1 = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_is_pre_2 = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_is_pre_3 = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_valid_0 = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_valid_1 = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_valid_2 = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_valid_3 = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__reg_head = VL_RAND_RESET_I(2);
    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__reg_tail = VL_RAND_RESET_I(2);
    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__reg_ibuf_size = VL_RAND_RESET_I(3);
    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT___GEN_0 = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__allow_in = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT___GEN_4 = VL_RAND_RESET_I(32);
    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__unnamedblk1__DOT__enq_size = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__unnamedblk1__DOT__can_deq = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__unnamedblk1__DOT___GEN_7 = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__unnamedblk1__DOT___GEN_8 = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__unnamedblk1__DOT___GEN_9 = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__unnamedblk1__DOT___GEN_10 = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___PHT_ext_R1_data = VL_RAND_RESET_I(2);
    VL_RAND_RESET_W(128, vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___BTB_ext_R0_data);
    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__reg_head = VL_RAND_RESET_I(3);
    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__pre_valid = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<64; ++__Vi0) {
        VL_RAND_RESET_W(128, vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_ext__DOT__Memory[__Vi0]);
    }
    for (int __Vi0=0; __Vi0<6; ++__Vi0) {
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__RAS_ext__DOT__Memory[__Vi0] = VL_RAND_RESET_Q(64);
    }
    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__RAS_ext__DOT____Vlvbound1 = VL_RAND_RESET_Q(64);
    for (int __Vi0=0; __Vi0<64; ++__Vi0) {
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_ext__DOT__Memory[__Vi0] = VL_RAND_RESET_I(2);
    }
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT___io_flush_T = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT___io_csr_valid_T = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT___io_wb_dest_data_T_3 = VL_RAND_RESET_Q(64);
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT___io_wb_valid_T_2 = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_csr_addr = VL_RAND_RESET_I(12);
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_csr_data = VL_RAND_RESET_Q(64);
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_dest_addr = VL_RAND_RESET_I(5);
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT___system_exu_io_is_except = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT___system_exu_io_valid_next_pc = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__in_data_valid = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__rs1_data = VL_RAND_RESET_Q(64);
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__rs2_data = VL_RAND_RESET_Q(64);
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__ready = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_valid = VL_RAND_RESET_I(4);
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT___GEN = VL_RAND_RESET_I(4);
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT___alu_exu_io_valid_T_2 = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT___system_exu_io_valid_T_2 = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_sys_alu_w_valid = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_sys_alu_wdata = VL_RAND_RESET_Q(64);
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_valid = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_mispredict = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc = VL_RAND_RESET_Q(64);
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_taken = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_next_pc = VL_RAND_RESET_Q(64);
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_csr_is_w = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_is_except = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_exception = VL_RAND_RESET_I(6);
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_is_time_irq = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_is_soft_irq = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_except_next_pc = VL_RAND_RESET_Q(64);
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_except_pc = VL_RAND_RESET_Q(64);
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_next_pc = VL_RAND_RESET_Q(64);
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_valid_next_pc = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_fence_i = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_commit = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vcellinp__mem_exu__io_valid = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vcellinp__system_exu__io_csr_data = VL_RAND_RESET_Q(64);
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__unnamedblk1__DOT___T = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__unnamedblk1__DOT__time_irq = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__unnamedblk1__DOT__soft_irq = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__unnamedblk1__DOT___reg_valid_next_pc_T = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__is_pre = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(65, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___GEN_4);
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__dst_data = VL_RAND_RESET_Q(64);
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__br_valid = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___io_br_info_mispredict_T = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___io_br_info_target_next_pc_T = VL_RAND_RESET_Q(64);
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_ready = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_bus_addr = VL_RAND_RESET_Q(64);
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_bus_wdata = VL_RAND_RESET_Q(64);
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_bus_wstrb = VL_RAND_RESET_I(8);
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_bus_is_w = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_bus_valid = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_result_data = VL_RAND_RESET_Q(64);
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_w_rs_en = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_exuType = VL_RAND_RESET_I(7);
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__mem_addr = VL_RAND_RESET_Q(64);
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__w_mem_en = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT___GEN = VL_RAND_RESET_I(8);
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_ls_state = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(127, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__mem_w_data);
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT___io_bus_valid_T = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__unnamedblk1__DOT___T_2 = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__unnamedblk1__DOT___GEN_0 = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__unnamedblk1__DOT__unnamedblk2__DOT___GEN_1 = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(512, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT___GEN_2);
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__mem_r_data = VL_RAND_RESET_Q(64);
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT____Vcellinp__div__io_valid = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT____Vcellinp__mul__io_valid = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(65, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor);
    VL_RAND_RESET_W(66, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_dividend);
    VL_RAND_RESET_W(65, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem);
    VL_RAND_RESET_W(66, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_q);
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state = VL_RAND_RESET_I(2);
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_cnt = VL_RAND_RESET_I(7);
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_exuType = VL_RAND_RESET_I(7);
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_dest_is_w = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_ready = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(65, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__unnamedblk1__DOT__dividend);
    VL_RAND_RESET_W(65, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__unnamedblk1__DOT___divisor_T_8);
    VL_RAND_RESET_W(65, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__unnamedblk1__DOT___divisor_T_14);
    VL_RAND_RESET_W(65, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__unnamedblk1__DOT__divisor);
    VL_RAND_RESET_W(65, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__unnamedblk1__DOT__rem);
    VL_RAND_RESET_W(65, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__unnamedblk1__DOT__neg_divisor);
    VL_RAND_RESET_W(131, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__unnamedblk1__DOT___GEN);
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__unnamedblk1__DOT___T = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(66, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__unnamedblk1__DOT___reg_q_T);
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__unnamedblk1__DOT___T_2 = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__unnamedblk1__DOT___T_6 = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__unnamedblk1__DOT___GEN_0 = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__unnamedblk1__DOT___GEN_1 = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(260, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__unnamedblk1__DOT___GEN_2);
    VL_RAND_RESET_W(264, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__unnamedblk1__DOT___GEN_3);
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__unnamedblk1__DOT___GEN_4 = VL_RAND_RESET_I(8);
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__unnamedblk1__DOT___GEN_5 = VL_RAND_RESET_I(28);
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_ready = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_state = VL_RAND_RESET_I(2);
    VL_RAND_RESET_W(67, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2);
    VL_RAND_RESET_W(130, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1);
    VL_RAND_RESET_W(130, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_result);
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_exuType = VL_RAND_RESET_I(7);
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_dest_is_w = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_cnt = VL_RAND_RESET_I(7);
    VL_RAND_RESET_W(130, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__unnamedblk1__DOT___pp_T_9);
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__unnamedblk1__DOT___T = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__unnamedblk1__DOT___T_1 = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(1040, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__unnamedblk1__DOT___GEN);
    VL_RAND_RESET_W(130, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__unnamedblk1__DOT___GEN_0);
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__unnamedblk1__DOT___GEN_1 = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__unnamedblk1__DOT___GEN_2 = VL_RAND_RESET_I(8);
    VL_RAND_RESET_W(520, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__unnamedblk1__DOT___GEN_3);
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__unnamedblk1__DOT___GEN_4 = VL_RAND_RESET_I(28);
    VL_RAND_RESET_W(65, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__unnamedblk1__DOT__unnamedblk2__DOT__mul_data2);
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu__DOT__op_data = VL_RAND_RESET_Q(64);
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu__DOT__or_result = VL_RAND_RESET_Q(64);
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu__DOT__and_result = VL_RAND_RESET_Q(64);
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu__DOT__is_ret = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_valid = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_opType = VL_RAND_RESET_I(3);
    vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType = VL_RAND_RESET_I(7);
    vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs1_addr = VL_RAND_RESET_I(5);
    vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs1_data = VL_RAND_RESET_Q(64);
    vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs2_addr = VL_RAND_RESET_I(5);
    vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs2_data = VL_RAND_RESET_Q(64);
    vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_imm = VL_RAND_RESET_I(32);
    vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_pc = VL_RAND_RESET_Q(64);
    vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_dest_addr = VL_RAND_RESET_I(5);
    vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_dest_is_reg = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_csr_addr = VL_RAND_RESET_I(12);
    vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_csr_data = VL_RAND_RESET_Q(64);
    vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_is_pre = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___GEN = VL_RAND_RESET_I(17);
    vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_1 = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___GEN_0 = VL_RAND_RESET_I(10);
    vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_3 = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_5 = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_7 = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_9 = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_11 = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_13 = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_15 = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_17 = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_19 = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_21 = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_23 = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_25 = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_27 = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_29 = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_31 = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_33 = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_35 = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_37 = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_39 = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_41 = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_43 = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_45 = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_47 = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_49 = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_51 = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_53 = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_55 = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_57 = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_59 = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_61 = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___GEN_1 = VL_RAND_RESET_I(16);
    vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_63 = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_65 = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_67 = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_69 = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_71 = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_73 = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_75 = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_77 = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_79 = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_81 = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_83 = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_85 = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_87 = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_89 = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_91 = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_93 = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_95 = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_97 = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_99 = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_101 = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_103 = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_105 = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_107 = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_109 = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_111 = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_113 = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_115 = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_117 = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_119 = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_121 = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_123 = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_125 = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_127 = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_129 = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_131 = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_133 = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_135 = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_137 = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_139 = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_141 = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_143 = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_145 = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_147 = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___T_149 = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___GEN_2 = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___GEN_3 = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___GEN_4 = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___GEN_5 = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___GEN_6 = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___GEN_7 = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___GEN_8 = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___GEN_9 = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___GEN_10 = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___GEN_11 = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___GEN_12 = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___GEN_13 = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___GEN_14 = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___GEN_15 = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT__instType = VL_RAND_RESET_I(4);
    vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___GEN_16 = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___GEN_18 = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___GEN_20 = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__unnamedblk1__DOT___GEN_22 = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_0 = VL_RAND_RESET_Q(64);
    vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_1 = VL_RAND_RESET_Q(64);
    vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_2 = VL_RAND_RESET_Q(64);
    vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_3 = VL_RAND_RESET_Q(64);
    vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_4 = VL_RAND_RESET_Q(64);
    vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_5 = VL_RAND_RESET_Q(64);
    vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_6 = VL_RAND_RESET_Q(64);
    vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_7 = VL_RAND_RESET_Q(64);
    vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_8 = VL_RAND_RESET_Q(64);
    vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_9 = VL_RAND_RESET_Q(64);
    vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_10 = VL_RAND_RESET_Q(64);
    vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_11 = VL_RAND_RESET_Q(64);
    vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_12 = VL_RAND_RESET_Q(64);
    vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_13 = VL_RAND_RESET_Q(64);
    vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_14 = VL_RAND_RESET_Q(64);
    vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_15 = VL_RAND_RESET_Q(64);
    vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_16 = VL_RAND_RESET_Q(64);
    vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_17 = VL_RAND_RESET_Q(64);
    vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_18 = VL_RAND_RESET_Q(64);
    vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_19 = VL_RAND_RESET_Q(64);
    vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_20 = VL_RAND_RESET_Q(64);
    vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_21 = VL_RAND_RESET_Q(64);
    vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_22 = VL_RAND_RESET_Q(64);
    vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_23 = VL_RAND_RESET_Q(64);
    vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_24 = VL_RAND_RESET_Q(64);
    vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_25 = VL_RAND_RESET_Q(64);
    vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_26 = VL_RAND_RESET_Q(64);
    vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_27 = VL_RAND_RESET_Q(64);
    vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_28 = VL_RAND_RESET_Q(64);
    vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_29 = VL_RAND_RESET_Q(64);
    vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_30 = VL_RAND_RESET_Q(64);
    vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__reg_file_31 = VL_RAND_RESET_Q(64);
    VL_RAND_RESET_W(2048, vlSelf->riscv_soc__DOT__core__DOT__commit__DOT___GEN);
    vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__reg_mstatus = VL_RAND_RESET_Q(64);
    vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__reg_mie = VL_RAND_RESET_Q(64);
    vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__reg_mtvec = VL_RAND_RESET_Q(64);
    vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__reg_mscratch = VL_RAND_RESET_Q(64);
    vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__reg_mepc = VL_RAND_RESET_Q(64);
    vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__reg_mcause = VL_RAND_RESET_Q(64);
    vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__reg_mtval = VL_RAND_RESET_Q(64);
    vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__reg_mcycle = VL_RAND_RESET_Q(64);
    vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__reg_minstret = VL_RAND_RESET_Q(64);
    vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__unnamedblk1__DOT__irq = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__unnamedblk1__DOT___T_2 = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT__clint_de__DOT__reg_msip = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT__clint_de__DOT__reg_mtime = VL_RAND_RESET_Q(64);
    vlSelf->riscv_soc__DOT__core__DOT__clint_de__DOT__reg_mtimecmp = VL_RAND_RESET_Q(64);
    vlSelf->riscv_soc__DOT__core__DOT__clint_de__DOT__reg_ready = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT__clint_de__DOT__red_rdata = VL_RAND_RESET_Q(64);
    vlSelf->riscv_soc__DOT__core__DOT__clint_de__DOT__reg_state = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT__clint_de__DOT__unnamedblk1__DOT___GEN = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_raddr = VL_RAND_RESET_Q(64);
    vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_rlen = VL_RAND_RESET_I(4);
    vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_ar_ready = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_r_valid = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_r_state = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__axi_ram__DOT___T_4 = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_w_addr = VL_RAND_RESET_Q(64);
    vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_is_w = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_aw_ready = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_w_ready = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_b_valid = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__axi_ram__DOT__unnamedblk1__DOT___T_5 = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__axi_ram__DOT__unnamedblk1__DOT___T_6 = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__axi_ram__DOT__unnamedblk1__DOT___GEN = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__axi_ram__DOT__unnamedblk1__DOT__unnamedblk2__DOT___T_1 = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(128, vlSelf->riscv_soc__DOT__sram0__DOT__Q);
    VL_RAND_RESET_W(128, vlSelf->riscv_soc__DOT__sram0__DOT__sram_0);
    VL_RAND_RESET_W(128, vlSelf->riscv_soc__DOT__sram0__DOT__sram_1);
    VL_RAND_RESET_W(128, vlSelf->riscv_soc__DOT__sram0__DOT__sram_2);
    VL_RAND_RESET_W(128, vlSelf->riscv_soc__DOT__sram0__DOT__sram_3);
    VL_RAND_RESET_W(128, vlSelf->riscv_soc__DOT__sram0__DOT__sram_4);
    VL_RAND_RESET_W(128, vlSelf->riscv_soc__DOT__sram0__DOT__sram_5);
    VL_RAND_RESET_W(128, vlSelf->riscv_soc__DOT__sram0__DOT__sram_6);
    VL_RAND_RESET_W(128, vlSelf->riscv_soc__DOT__sram0__DOT__sram_7);
    VL_RAND_RESET_W(128, vlSelf->riscv_soc__DOT__sram0__DOT__sram_8);
    VL_RAND_RESET_W(128, vlSelf->riscv_soc__DOT__sram0__DOT__sram_9);
    VL_RAND_RESET_W(128, vlSelf->riscv_soc__DOT__sram0__DOT__sram_10);
    VL_RAND_RESET_W(128, vlSelf->riscv_soc__DOT__sram0__DOT__sram_11);
    VL_RAND_RESET_W(128, vlSelf->riscv_soc__DOT__sram0__DOT__sram_12);
    VL_RAND_RESET_W(128, vlSelf->riscv_soc__DOT__sram0__DOT__sram_13);
    VL_RAND_RESET_W(128, vlSelf->riscv_soc__DOT__sram0__DOT__sram_14);
    VL_RAND_RESET_W(128, vlSelf->riscv_soc__DOT__sram0__DOT__sram_15);
    VL_RAND_RESET_W(128, vlSelf->riscv_soc__DOT__sram0__DOT__sram_16);
    VL_RAND_RESET_W(128, vlSelf->riscv_soc__DOT__sram0__DOT__sram_17);
    VL_RAND_RESET_W(128, vlSelf->riscv_soc__DOT__sram0__DOT__sram_18);
    VL_RAND_RESET_W(128, vlSelf->riscv_soc__DOT__sram0__DOT__sram_19);
    VL_RAND_RESET_W(128, vlSelf->riscv_soc__DOT__sram0__DOT__sram_20);
    VL_RAND_RESET_W(128, vlSelf->riscv_soc__DOT__sram0__DOT__sram_21);
    VL_RAND_RESET_W(128, vlSelf->riscv_soc__DOT__sram0__DOT__sram_22);
    VL_RAND_RESET_W(128, vlSelf->riscv_soc__DOT__sram0__DOT__sram_23);
    VL_RAND_RESET_W(128, vlSelf->riscv_soc__DOT__sram0__DOT__sram_24);
    VL_RAND_RESET_W(128, vlSelf->riscv_soc__DOT__sram0__DOT__sram_25);
    VL_RAND_RESET_W(128, vlSelf->riscv_soc__DOT__sram0__DOT__sram_26);
    VL_RAND_RESET_W(128, vlSelf->riscv_soc__DOT__sram0__DOT__sram_27);
    VL_RAND_RESET_W(128, vlSelf->riscv_soc__DOT__sram0__DOT__sram_28);
    VL_RAND_RESET_W(128, vlSelf->riscv_soc__DOT__sram0__DOT__sram_29);
    VL_RAND_RESET_W(128, vlSelf->riscv_soc__DOT__sram0__DOT__sram_30);
    VL_RAND_RESET_W(128, vlSelf->riscv_soc__DOT__sram0__DOT__sram_31);
    VL_RAND_RESET_W(128, vlSelf->riscv_soc__DOT__sram0__DOT__sram_32);
    VL_RAND_RESET_W(128, vlSelf->riscv_soc__DOT__sram0__DOT__sram_33);
    VL_RAND_RESET_W(128, vlSelf->riscv_soc__DOT__sram0__DOT__sram_34);
    VL_RAND_RESET_W(128, vlSelf->riscv_soc__DOT__sram0__DOT__sram_35);
    VL_RAND_RESET_W(128, vlSelf->riscv_soc__DOT__sram0__DOT__sram_36);
    VL_RAND_RESET_W(128, vlSelf->riscv_soc__DOT__sram0__DOT__sram_37);
    VL_RAND_RESET_W(128, vlSelf->riscv_soc__DOT__sram0__DOT__sram_38);
    VL_RAND_RESET_W(128, vlSelf->riscv_soc__DOT__sram0__DOT__sram_39);
    VL_RAND_RESET_W(128, vlSelf->riscv_soc__DOT__sram0__DOT__sram_40);
    VL_RAND_RESET_W(128, vlSelf->riscv_soc__DOT__sram0__DOT__sram_41);
    VL_RAND_RESET_W(128, vlSelf->riscv_soc__DOT__sram0__DOT__sram_42);
    VL_RAND_RESET_W(128, vlSelf->riscv_soc__DOT__sram0__DOT__sram_43);
    VL_RAND_RESET_W(128, vlSelf->riscv_soc__DOT__sram0__DOT__sram_44);
    VL_RAND_RESET_W(128, vlSelf->riscv_soc__DOT__sram0__DOT__sram_45);
    VL_RAND_RESET_W(128, vlSelf->riscv_soc__DOT__sram0__DOT__sram_46);
    VL_RAND_RESET_W(128, vlSelf->riscv_soc__DOT__sram0__DOT__sram_47);
    VL_RAND_RESET_W(128, vlSelf->riscv_soc__DOT__sram0__DOT__sram_48);
    VL_RAND_RESET_W(128, vlSelf->riscv_soc__DOT__sram0__DOT__sram_49);
    VL_RAND_RESET_W(128, vlSelf->riscv_soc__DOT__sram0__DOT__sram_50);
    VL_RAND_RESET_W(128, vlSelf->riscv_soc__DOT__sram0__DOT__sram_51);
    VL_RAND_RESET_W(128, vlSelf->riscv_soc__DOT__sram0__DOT__sram_52);
    VL_RAND_RESET_W(128, vlSelf->riscv_soc__DOT__sram0__DOT__sram_53);
    VL_RAND_RESET_W(128, vlSelf->riscv_soc__DOT__sram0__DOT__sram_54);
    VL_RAND_RESET_W(128, vlSelf->riscv_soc__DOT__sram0__DOT__sram_55);
    VL_RAND_RESET_W(128, vlSelf->riscv_soc__DOT__sram0__DOT__sram_56);
    VL_RAND_RESET_W(128, vlSelf->riscv_soc__DOT__sram0__DOT__sram_57);
    VL_RAND_RESET_W(128, vlSelf->riscv_soc__DOT__sram0__DOT__sram_58);
    VL_RAND_RESET_W(128, vlSelf->riscv_soc__DOT__sram0__DOT__sram_59);
    VL_RAND_RESET_W(128, vlSelf->riscv_soc__DOT__sram0__DOT__sram_60);
    VL_RAND_RESET_W(128, vlSelf->riscv_soc__DOT__sram0__DOT__sram_61);
    VL_RAND_RESET_W(128, vlSelf->riscv_soc__DOT__sram0__DOT__sram_62);
    VL_RAND_RESET_W(128, vlSelf->riscv_soc__DOT__sram0__DOT__sram_63);
    VL_RAND_RESET_W(128, vlSelf->riscv_soc__DOT__sram0__DOT___GEN_1);
    VL_RAND_RESET_W(128, vlSelf->riscv_soc__DOT__sram0__DOT__unnamedblk1__DOT___sram_T_3);
    VL_RAND_RESET_W(128, vlSelf->riscv_soc__DOT__sram1__DOT__Q);
    VL_RAND_RESET_W(128, vlSelf->riscv_soc__DOT__sram1__DOT__sram_0);
    VL_RAND_RESET_W(128, vlSelf->riscv_soc__DOT__sram1__DOT__sram_1);
    VL_RAND_RESET_W(128, vlSelf->riscv_soc__DOT__sram1__DOT__sram_2);
    VL_RAND_RESET_W(128, vlSelf->riscv_soc__DOT__sram1__DOT__sram_3);
    VL_RAND_RESET_W(128, vlSelf->riscv_soc__DOT__sram1__DOT__sram_4);
    VL_RAND_RESET_W(128, vlSelf->riscv_soc__DOT__sram1__DOT__sram_5);
    VL_RAND_RESET_W(128, vlSelf->riscv_soc__DOT__sram1__DOT__sram_6);
    VL_RAND_RESET_W(128, vlSelf->riscv_soc__DOT__sram1__DOT__sram_7);
    VL_RAND_RESET_W(128, vlSelf->riscv_soc__DOT__sram1__DOT__sram_8);
    VL_RAND_RESET_W(128, vlSelf->riscv_soc__DOT__sram1__DOT__sram_9);
    VL_RAND_RESET_W(128, vlSelf->riscv_soc__DOT__sram1__DOT__sram_10);
    VL_RAND_RESET_W(128, vlSelf->riscv_soc__DOT__sram1__DOT__sram_11);
    VL_RAND_RESET_W(128, vlSelf->riscv_soc__DOT__sram1__DOT__sram_12);
    VL_RAND_RESET_W(128, vlSelf->riscv_soc__DOT__sram1__DOT__sram_13);
    VL_RAND_RESET_W(128, vlSelf->riscv_soc__DOT__sram1__DOT__sram_14);
    VL_RAND_RESET_W(128, vlSelf->riscv_soc__DOT__sram1__DOT__sram_15);
    VL_RAND_RESET_W(128, vlSelf->riscv_soc__DOT__sram1__DOT__sram_16);
    VL_RAND_RESET_W(128, vlSelf->riscv_soc__DOT__sram1__DOT__sram_17);
    VL_RAND_RESET_W(128, vlSelf->riscv_soc__DOT__sram1__DOT__sram_18);
    VL_RAND_RESET_W(128, vlSelf->riscv_soc__DOT__sram1__DOT__sram_19);
    VL_RAND_RESET_W(128, vlSelf->riscv_soc__DOT__sram1__DOT__sram_20);
    VL_RAND_RESET_W(128, vlSelf->riscv_soc__DOT__sram1__DOT__sram_21);
    VL_RAND_RESET_W(128, vlSelf->riscv_soc__DOT__sram1__DOT__sram_22);
    VL_RAND_RESET_W(128, vlSelf->riscv_soc__DOT__sram1__DOT__sram_23);
    VL_RAND_RESET_W(128, vlSelf->riscv_soc__DOT__sram1__DOT__sram_24);
    VL_RAND_RESET_W(128, vlSelf->riscv_soc__DOT__sram1__DOT__sram_25);
    VL_RAND_RESET_W(128, vlSelf->riscv_soc__DOT__sram1__DOT__sram_26);
    VL_RAND_RESET_W(128, vlSelf->riscv_soc__DOT__sram1__DOT__sram_27);
    VL_RAND_RESET_W(128, vlSelf->riscv_soc__DOT__sram1__DOT__sram_28);
    VL_RAND_RESET_W(128, vlSelf->riscv_soc__DOT__sram1__DOT__sram_29);
    VL_RAND_RESET_W(128, vlSelf->riscv_soc__DOT__sram1__DOT__sram_30);
    VL_RAND_RESET_W(128, vlSelf->riscv_soc__DOT__sram1__DOT__sram_31);
    VL_RAND_RESET_W(128, vlSelf->riscv_soc__DOT__sram1__DOT__sram_32);
    VL_RAND_RESET_W(128, vlSelf->riscv_soc__DOT__sram1__DOT__sram_33);
    VL_RAND_RESET_W(128, vlSelf->riscv_soc__DOT__sram1__DOT__sram_34);
    VL_RAND_RESET_W(128, vlSelf->riscv_soc__DOT__sram1__DOT__sram_35);
    VL_RAND_RESET_W(128, vlSelf->riscv_soc__DOT__sram1__DOT__sram_36);
    VL_RAND_RESET_W(128, vlSelf->riscv_soc__DOT__sram1__DOT__sram_37);
    VL_RAND_RESET_W(128, vlSelf->riscv_soc__DOT__sram1__DOT__sram_38);
    VL_RAND_RESET_W(128, vlSelf->riscv_soc__DOT__sram1__DOT__sram_39);
    VL_RAND_RESET_W(128, vlSelf->riscv_soc__DOT__sram1__DOT__sram_40);
    VL_RAND_RESET_W(128, vlSelf->riscv_soc__DOT__sram1__DOT__sram_41);
    VL_RAND_RESET_W(128, vlSelf->riscv_soc__DOT__sram1__DOT__sram_42);
    VL_RAND_RESET_W(128, vlSelf->riscv_soc__DOT__sram1__DOT__sram_43);
    VL_RAND_RESET_W(128, vlSelf->riscv_soc__DOT__sram1__DOT__sram_44);
    VL_RAND_RESET_W(128, vlSelf->riscv_soc__DOT__sram1__DOT__sram_45);
    VL_RAND_RESET_W(128, vlSelf->riscv_soc__DOT__sram1__DOT__sram_46);
    VL_RAND_RESET_W(128, vlSelf->riscv_soc__DOT__sram1__DOT__sram_47);
    VL_RAND_RESET_W(128, vlSelf->riscv_soc__DOT__sram1__DOT__sram_48);
    VL_RAND_RESET_W(128, vlSelf->riscv_soc__DOT__sram1__DOT__sram_49);
    VL_RAND_RESET_W(128, vlSelf->riscv_soc__DOT__sram1__DOT__sram_50);
    VL_RAND_RESET_W(128, vlSelf->riscv_soc__DOT__sram1__DOT__sram_51);
    VL_RAND_RESET_W(128, vlSelf->riscv_soc__DOT__sram1__DOT__sram_52);
    VL_RAND_RESET_W(128, vlSelf->riscv_soc__DOT__sram1__DOT__sram_53);
    VL_RAND_RESET_W(128, vlSelf->riscv_soc__DOT__sram1__DOT__sram_54);
    VL_RAND_RESET_W(128, vlSelf->riscv_soc__DOT__sram1__DOT__sram_55);
    VL_RAND_RESET_W(128, vlSelf->riscv_soc__DOT__sram1__DOT__sram_56);
    VL_RAND_RESET_W(128, vlSelf->riscv_soc__DOT__sram1__DOT__sram_57);
    VL_RAND_RESET_W(128, vlSelf->riscv_soc__DOT__sram1__DOT__sram_58);
    VL_RAND_RESET_W(128, vlSelf->riscv_soc__DOT__sram1__DOT__sram_59);
    VL_RAND_RESET_W(128, vlSelf->riscv_soc__DOT__sram1__DOT__sram_60);
    VL_RAND_RESET_W(128, vlSelf->riscv_soc__DOT__sram1__DOT__sram_61);
    VL_RAND_RESET_W(128, vlSelf->riscv_soc__DOT__sram1__DOT__sram_62);
    VL_RAND_RESET_W(128, vlSelf->riscv_soc__DOT__sram1__DOT__sram_63);
    VL_RAND_RESET_W(128, vlSelf->riscv_soc__DOT__sram1__DOT___GEN_1);
    VL_RAND_RESET_W(128, vlSelf->riscv_soc__DOT__sram1__DOT__unnamedblk1__DOT___sram_T_3);
    VL_RAND_RESET_W(128, vlSelf->riscv_soc__DOT__sram2__DOT__Q);
    VL_RAND_RESET_W(128, vlSelf->riscv_soc__DOT__sram2__DOT__sram_0);
    VL_RAND_RESET_W(128, vlSelf->riscv_soc__DOT__sram2__DOT__sram_1);
    VL_RAND_RESET_W(128, vlSelf->riscv_soc__DOT__sram2__DOT__sram_2);
    VL_RAND_RESET_W(128, vlSelf->riscv_soc__DOT__sram2__DOT__sram_3);
    VL_RAND_RESET_W(128, vlSelf->riscv_soc__DOT__sram2__DOT__sram_4);
    VL_RAND_RESET_W(128, vlSelf->riscv_soc__DOT__sram2__DOT__sram_5);
    VL_RAND_RESET_W(128, vlSelf->riscv_soc__DOT__sram2__DOT__sram_6);
    VL_RAND_RESET_W(128, vlSelf->riscv_soc__DOT__sram2__DOT__sram_7);
    VL_RAND_RESET_W(128, vlSelf->riscv_soc__DOT__sram2__DOT__sram_8);
    VL_RAND_RESET_W(128, vlSelf->riscv_soc__DOT__sram2__DOT__sram_9);
    VL_RAND_RESET_W(128, vlSelf->riscv_soc__DOT__sram2__DOT__sram_10);
    VL_RAND_RESET_W(128, vlSelf->riscv_soc__DOT__sram2__DOT__sram_11);
    VL_RAND_RESET_W(128, vlSelf->riscv_soc__DOT__sram2__DOT__sram_12);
    VL_RAND_RESET_W(128, vlSelf->riscv_soc__DOT__sram2__DOT__sram_13);
    VL_RAND_RESET_W(128, vlSelf->riscv_soc__DOT__sram2__DOT__sram_14);
    VL_RAND_RESET_W(128, vlSelf->riscv_soc__DOT__sram2__DOT__sram_15);
    VL_RAND_RESET_W(128, vlSelf->riscv_soc__DOT__sram2__DOT__sram_16);
    VL_RAND_RESET_W(128, vlSelf->riscv_soc__DOT__sram2__DOT__sram_17);
    VL_RAND_RESET_W(128, vlSelf->riscv_soc__DOT__sram2__DOT__sram_18);
    VL_RAND_RESET_W(128, vlSelf->riscv_soc__DOT__sram2__DOT__sram_19);
    VL_RAND_RESET_W(128, vlSelf->riscv_soc__DOT__sram2__DOT__sram_20);
    VL_RAND_RESET_W(128, vlSelf->riscv_soc__DOT__sram2__DOT__sram_21);
    VL_RAND_RESET_W(128, vlSelf->riscv_soc__DOT__sram2__DOT__sram_22);
    VL_RAND_RESET_W(128, vlSelf->riscv_soc__DOT__sram2__DOT__sram_23);
    VL_RAND_RESET_W(128, vlSelf->riscv_soc__DOT__sram2__DOT__sram_24);
    VL_RAND_RESET_W(128, vlSelf->riscv_soc__DOT__sram2__DOT__sram_25);
    VL_RAND_RESET_W(128, vlSelf->riscv_soc__DOT__sram2__DOT__sram_26);
    VL_RAND_RESET_W(128, vlSelf->riscv_soc__DOT__sram2__DOT__sram_27);
    VL_RAND_RESET_W(128, vlSelf->riscv_soc__DOT__sram2__DOT__sram_28);
    VL_RAND_RESET_W(128, vlSelf->riscv_soc__DOT__sram2__DOT__sram_29);
    VL_RAND_RESET_W(128, vlSelf->riscv_soc__DOT__sram2__DOT__sram_30);
    VL_RAND_RESET_W(128, vlSelf->riscv_soc__DOT__sram2__DOT__sram_31);
    VL_RAND_RESET_W(128, vlSelf->riscv_soc__DOT__sram2__DOT__sram_32);
    VL_RAND_RESET_W(128, vlSelf->riscv_soc__DOT__sram2__DOT__sram_33);
    VL_RAND_RESET_W(128, vlSelf->riscv_soc__DOT__sram2__DOT__sram_34);
    VL_RAND_RESET_W(128, vlSelf->riscv_soc__DOT__sram2__DOT__sram_35);
    VL_RAND_RESET_W(128, vlSelf->riscv_soc__DOT__sram2__DOT__sram_36);
    VL_RAND_RESET_W(128, vlSelf->riscv_soc__DOT__sram2__DOT__sram_37);
    VL_RAND_RESET_W(128, vlSelf->riscv_soc__DOT__sram2__DOT__sram_38);
    VL_RAND_RESET_W(128, vlSelf->riscv_soc__DOT__sram2__DOT__sram_39);
    VL_RAND_RESET_W(128, vlSelf->riscv_soc__DOT__sram2__DOT__sram_40);
    VL_RAND_RESET_W(128, vlSelf->riscv_soc__DOT__sram2__DOT__sram_41);
    VL_RAND_RESET_W(128, vlSelf->riscv_soc__DOT__sram2__DOT__sram_42);
    VL_RAND_RESET_W(128, vlSelf->riscv_soc__DOT__sram2__DOT__sram_43);
    VL_RAND_RESET_W(128, vlSelf->riscv_soc__DOT__sram2__DOT__sram_44);
    VL_RAND_RESET_W(128, vlSelf->riscv_soc__DOT__sram2__DOT__sram_45);
    VL_RAND_RESET_W(128, vlSelf->riscv_soc__DOT__sram2__DOT__sram_46);
    VL_RAND_RESET_W(128, vlSelf->riscv_soc__DOT__sram2__DOT__sram_47);
    VL_RAND_RESET_W(128, vlSelf->riscv_soc__DOT__sram2__DOT__sram_48);
    VL_RAND_RESET_W(128, vlSelf->riscv_soc__DOT__sram2__DOT__sram_49);
    VL_RAND_RESET_W(128, vlSelf->riscv_soc__DOT__sram2__DOT__sram_50);
    VL_RAND_RESET_W(128, vlSelf->riscv_soc__DOT__sram2__DOT__sram_51);
    VL_RAND_RESET_W(128, vlSelf->riscv_soc__DOT__sram2__DOT__sram_52);
    VL_RAND_RESET_W(128, vlSelf->riscv_soc__DOT__sram2__DOT__sram_53);
    VL_RAND_RESET_W(128, vlSelf->riscv_soc__DOT__sram2__DOT__sram_54);
    VL_RAND_RESET_W(128, vlSelf->riscv_soc__DOT__sram2__DOT__sram_55);
    VL_RAND_RESET_W(128, vlSelf->riscv_soc__DOT__sram2__DOT__sram_56);
    VL_RAND_RESET_W(128, vlSelf->riscv_soc__DOT__sram2__DOT__sram_57);
    VL_RAND_RESET_W(128, vlSelf->riscv_soc__DOT__sram2__DOT__sram_58);
    VL_RAND_RESET_W(128, vlSelf->riscv_soc__DOT__sram2__DOT__sram_59);
    VL_RAND_RESET_W(128, vlSelf->riscv_soc__DOT__sram2__DOT__sram_60);
    VL_RAND_RESET_W(128, vlSelf->riscv_soc__DOT__sram2__DOT__sram_61);
    VL_RAND_RESET_W(128, vlSelf->riscv_soc__DOT__sram2__DOT__sram_62);
    VL_RAND_RESET_W(128, vlSelf->riscv_soc__DOT__sram2__DOT__sram_63);
    VL_RAND_RESET_W(128, vlSelf->riscv_soc__DOT__sram2__DOT___GEN_1);
    VL_RAND_RESET_W(128, vlSelf->riscv_soc__DOT__sram2__DOT__unnamedblk1__DOT___sram_T_3);
    VL_RAND_RESET_W(128, vlSelf->riscv_soc__DOT__sram3__DOT__Q);
    VL_RAND_RESET_W(128, vlSelf->riscv_soc__DOT__sram3__DOT__sram_0);
    VL_RAND_RESET_W(128, vlSelf->riscv_soc__DOT__sram3__DOT__sram_1);
    VL_RAND_RESET_W(128, vlSelf->riscv_soc__DOT__sram3__DOT__sram_2);
    VL_RAND_RESET_W(128, vlSelf->riscv_soc__DOT__sram3__DOT__sram_3);
    VL_RAND_RESET_W(128, vlSelf->riscv_soc__DOT__sram3__DOT__sram_4);
    VL_RAND_RESET_W(128, vlSelf->riscv_soc__DOT__sram3__DOT__sram_5);
    VL_RAND_RESET_W(128, vlSelf->riscv_soc__DOT__sram3__DOT__sram_6);
    VL_RAND_RESET_W(128, vlSelf->riscv_soc__DOT__sram3__DOT__sram_7);
    VL_RAND_RESET_W(128, vlSelf->riscv_soc__DOT__sram3__DOT__sram_8);
    VL_RAND_RESET_W(128, vlSelf->riscv_soc__DOT__sram3__DOT__sram_9);
    VL_RAND_RESET_W(128, vlSelf->riscv_soc__DOT__sram3__DOT__sram_10);
    VL_RAND_RESET_W(128, vlSelf->riscv_soc__DOT__sram3__DOT__sram_11);
    VL_RAND_RESET_W(128, vlSelf->riscv_soc__DOT__sram3__DOT__sram_12);
    VL_RAND_RESET_W(128, vlSelf->riscv_soc__DOT__sram3__DOT__sram_13);
    VL_RAND_RESET_W(128, vlSelf->riscv_soc__DOT__sram3__DOT__sram_14);
    VL_RAND_RESET_W(128, vlSelf->riscv_soc__DOT__sram3__DOT__sram_15);
    VL_RAND_RESET_W(128, vlSelf->riscv_soc__DOT__sram3__DOT__sram_16);
    VL_RAND_RESET_W(128, vlSelf->riscv_soc__DOT__sram3__DOT__sram_17);
    VL_RAND_RESET_W(128, vlSelf->riscv_soc__DOT__sram3__DOT__sram_18);
    VL_RAND_RESET_W(128, vlSelf->riscv_soc__DOT__sram3__DOT__sram_19);
    VL_RAND_RESET_W(128, vlSelf->riscv_soc__DOT__sram3__DOT__sram_20);
    VL_RAND_RESET_W(128, vlSelf->riscv_soc__DOT__sram3__DOT__sram_21);
    VL_RAND_RESET_W(128, vlSelf->riscv_soc__DOT__sram3__DOT__sram_22);
    VL_RAND_RESET_W(128, vlSelf->riscv_soc__DOT__sram3__DOT__sram_23);
    VL_RAND_RESET_W(128, vlSelf->riscv_soc__DOT__sram3__DOT__sram_24);
    VL_RAND_RESET_W(128, vlSelf->riscv_soc__DOT__sram3__DOT__sram_25);
    VL_RAND_RESET_W(128, vlSelf->riscv_soc__DOT__sram3__DOT__sram_26);
    VL_RAND_RESET_W(128, vlSelf->riscv_soc__DOT__sram3__DOT__sram_27);
    VL_RAND_RESET_W(128, vlSelf->riscv_soc__DOT__sram3__DOT__sram_28);
    VL_RAND_RESET_W(128, vlSelf->riscv_soc__DOT__sram3__DOT__sram_29);
    VL_RAND_RESET_W(128, vlSelf->riscv_soc__DOT__sram3__DOT__sram_30);
    VL_RAND_RESET_W(128, vlSelf->riscv_soc__DOT__sram3__DOT__sram_31);
    VL_RAND_RESET_W(128, vlSelf->riscv_soc__DOT__sram3__DOT__sram_32);
    VL_RAND_RESET_W(128, vlSelf->riscv_soc__DOT__sram3__DOT__sram_33);
    VL_RAND_RESET_W(128, vlSelf->riscv_soc__DOT__sram3__DOT__sram_34);
    VL_RAND_RESET_W(128, vlSelf->riscv_soc__DOT__sram3__DOT__sram_35);
    VL_RAND_RESET_W(128, vlSelf->riscv_soc__DOT__sram3__DOT__sram_36);
    VL_RAND_RESET_W(128, vlSelf->riscv_soc__DOT__sram3__DOT__sram_37);
    VL_RAND_RESET_W(128, vlSelf->riscv_soc__DOT__sram3__DOT__sram_38);
    VL_RAND_RESET_W(128, vlSelf->riscv_soc__DOT__sram3__DOT__sram_39);
    VL_RAND_RESET_W(128, vlSelf->riscv_soc__DOT__sram3__DOT__sram_40);
    VL_RAND_RESET_W(128, vlSelf->riscv_soc__DOT__sram3__DOT__sram_41);
    VL_RAND_RESET_W(128, vlSelf->riscv_soc__DOT__sram3__DOT__sram_42);
    VL_RAND_RESET_W(128, vlSelf->riscv_soc__DOT__sram3__DOT__sram_43);
    VL_RAND_RESET_W(128, vlSelf->riscv_soc__DOT__sram3__DOT__sram_44);
    VL_RAND_RESET_W(128, vlSelf->riscv_soc__DOT__sram3__DOT__sram_45);
    VL_RAND_RESET_W(128, vlSelf->riscv_soc__DOT__sram3__DOT__sram_46);
    VL_RAND_RESET_W(128, vlSelf->riscv_soc__DOT__sram3__DOT__sram_47);
    VL_RAND_RESET_W(128, vlSelf->riscv_soc__DOT__sram3__DOT__sram_48);
    VL_RAND_RESET_W(128, vlSelf->riscv_soc__DOT__sram3__DOT__sram_49);
    VL_RAND_RESET_W(128, vlSelf->riscv_soc__DOT__sram3__DOT__sram_50);
    VL_RAND_RESET_W(128, vlSelf->riscv_soc__DOT__sram3__DOT__sram_51);
    VL_RAND_RESET_W(128, vlSelf->riscv_soc__DOT__sram3__DOT__sram_52);
    VL_RAND_RESET_W(128, vlSelf->riscv_soc__DOT__sram3__DOT__sram_53);
    VL_RAND_RESET_W(128, vlSelf->riscv_soc__DOT__sram3__DOT__sram_54);
    VL_RAND_RESET_W(128, vlSelf->riscv_soc__DOT__sram3__DOT__sram_55);
    VL_RAND_RESET_W(128, vlSelf->riscv_soc__DOT__sram3__DOT__sram_56);
    VL_RAND_RESET_W(128, vlSelf->riscv_soc__DOT__sram3__DOT__sram_57);
    VL_RAND_RESET_W(128, vlSelf->riscv_soc__DOT__sram3__DOT__sram_58);
    VL_RAND_RESET_W(128, vlSelf->riscv_soc__DOT__sram3__DOT__sram_59);
    VL_RAND_RESET_W(128, vlSelf->riscv_soc__DOT__sram3__DOT__sram_60);
    VL_RAND_RESET_W(128, vlSelf->riscv_soc__DOT__sram3__DOT__sram_61);
    VL_RAND_RESET_W(128, vlSelf->riscv_soc__DOT__sram3__DOT__sram_62);
    VL_RAND_RESET_W(128, vlSelf->riscv_soc__DOT__sram3__DOT__sram_63);
    VL_RAND_RESET_W(128, vlSelf->riscv_soc__DOT__sram3__DOT___GEN_1);
    VL_RAND_RESET_W(128, vlSelf->riscv_soc__DOT__sram3__DOT__unnamedblk1__DOT___sram_T_3);
    VL_RAND_RESET_W(128, vlSelf->riscv_soc__DOT__sram4__DOT__Q);
    VL_RAND_RESET_W(128, vlSelf->riscv_soc__DOT__sram4__DOT__sram_0);
    VL_RAND_RESET_W(128, vlSelf->riscv_soc__DOT__sram4__DOT__sram_1);
    VL_RAND_RESET_W(128, vlSelf->riscv_soc__DOT__sram4__DOT__sram_2);
    VL_RAND_RESET_W(128, vlSelf->riscv_soc__DOT__sram4__DOT__sram_3);
    VL_RAND_RESET_W(128, vlSelf->riscv_soc__DOT__sram4__DOT__sram_4);
    VL_RAND_RESET_W(128, vlSelf->riscv_soc__DOT__sram4__DOT__sram_5);
    VL_RAND_RESET_W(128, vlSelf->riscv_soc__DOT__sram4__DOT__sram_6);
    VL_RAND_RESET_W(128, vlSelf->riscv_soc__DOT__sram4__DOT__sram_7);
    VL_RAND_RESET_W(128, vlSelf->riscv_soc__DOT__sram4__DOT__sram_8);
    VL_RAND_RESET_W(128, vlSelf->riscv_soc__DOT__sram4__DOT__sram_9);
    VL_RAND_RESET_W(128, vlSelf->riscv_soc__DOT__sram4__DOT__sram_10);
    VL_RAND_RESET_W(128, vlSelf->riscv_soc__DOT__sram4__DOT__sram_11);
    VL_RAND_RESET_W(128, vlSelf->riscv_soc__DOT__sram4__DOT__sram_12);
    VL_RAND_RESET_W(128, vlSelf->riscv_soc__DOT__sram4__DOT__sram_13);
    VL_RAND_RESET_W(128, vlSelf->riscv_soc__DOT__sram4__DOT__sram_14);
    VL_RAND_RESET_W(128, vlSelf->riscv_soc__DOT__sram4__DOT__sram_15);
    VL_RAND_RESET_W(128, vlSelf->riscv_soc__DOT__sram4__DOT__sram_16);
    VL_RAND_RESET_W(128, vlSelf->riscv_soc__DOT__sram4__DOT__sram_17);
    VL_RAND_RESET_W(128, vlSelf->riscv_soc__DOT__sram4__DOT__sram_18);
    VL_RAND_RESET_W(128, vlSelf->riscv_soc__DOT__sram4__DOT__sram_19);
    VL_RAND_RESET_W(128, vlSelf->riscv_soc__DOT__sram4__DOT__sram_20);
    VL_RAND_RESET_W(128, vlSelf->riscv_soc__DOT__sram4__DOT__sram_21);
    VL_RAND_RESET_W(128, vlSelf->riscv_soc__DOT__sram4__DOT__sram_22);
    VL_RAND_RESET_W(128, vlSelf->riscv_soc__DOT__sram4__DOT__sram_23);
    VL_RAND_RESET_W(128, vlSelf->riscv_soc__DOT__sram4__DOT__sram_24);
    VL_RAND_RESET_W(128, vlSelf->riscv_soc__DOT__sram4__DOT__sram_25);
    VL_RAND_RESET_W(128, vlSelf->riscv_soc__DOT__sram4__DOT__sram_26);
    VL_RAND_RESET_W(128, vlSelf->riscv_soc__DOT__sram4__DOT__sram_27);
    VL_RAND_RESET_W(128, vlSelf->riscv_soc__DOT__sram4__DOT__sram_28);
    VL_RAND_RESET_W(128, vlSelf->riscv_soc__DOT__sram4__DOT__sram_29);
    VL_RAND_RESET_W(128, vlSelf->riscv_soc__DOT__sram4__DOT__sram_30);
    VL_RAND_RESET_W(128, vlSelf->riscv_soc__DOT__sram4__DOT__sram_31);
    VL_RAND_RESET_W(128, vlSelf->riscv_soc__DOT__sram4__DOT__sram_32);
    VL_RAND_RESET_W(128, vlSelf->riscv_soc__DOT__sram4__DOT__sram_33);
    VL_RAND_RESET_W(128, vlSelf->riscv_soc__DOT__sram4__DOT__sram_34);
    VL_RAND_RESET_W(128, vlSelf->riscv_soc__DOT__sram4__DOT__sram_35);
    VL_RAND_RESET_W(128, vlSelf->riscv_soc__DOT__sram4__DOT__sram_36);
    VL_RAND_RESET_W(128, vlSelf->riscv_soc__DOT__sram4__DOT__sram_37);
    VL_RAND_RESET_W(128, vlSelf->riscv_soc__DOT__sram4__DOT__sram_38);
    VL_RAND_RESET_W(128, vlSelf->riscv_soc__DOT__sram4__DOT__sram_39);
    VL_RAND_RESET_W(128, vlSelf->riscv_soc__DOT__sram4__DOT__sram_40);
    VL_RAND_RESET_W(128, vlSelf->riscv_soc__DOT__sram4__DOT__sram_41);
    VL_RAND_RESET_W(128, vlSelf->riscv_soc__DOT__sram4__DOT__sram_42);
    VL_RAND_RESET_W(128, vlSelf->riscv_soc__DOT__sram4__DOT__sram_43);
    VL_RAND_RESET_W(128, vlSelf->riscv_soc__DOT__sram4__DOT__sram_44);
    VL_RAND_RESET_W(128, vlSelf->riscv_soc__DOT__sram4__DOT__sram_45);
    VL_RAND_RESET_W(128, vlSelf->riscv_soc__DOT__sram4__DOT__sram_46);
    VL_RAND_RESET_W(128, vlSelf->riscv_soc__DOT__sram4__DOT__sram_47);
    VL_RAND_RESET_W(128, vlSelf->riscv_soc__DOT__sram4__DOT__sram_48);
    VL_RAND_RESET_W(128, vlSelf->riscv_soc__DOT__sram4__DOT__sram_49);
    VL_RAND_RESET_W(128, vlSelf->riscv_soc__DOT__sram4__DOT__sram_50);
    VL_RAND_RESET_W(128, vlSelf->riscv_soc__DOT__sram4__DOT__sram_51);
    VL_RAND_RESET_W(128, vlSelf->riscv_soc__DOT__sram4__DOT__sram_52);
    VL_RAND_RESET_W(128, vlSelf->riscv_soc__DOT__sram4__DOT__sram_53);
    VL_RAND_RESET_W(128, vlSelf->riscv_soc__DOT__sram4__DOT__sram_54);
    VL_RAND_RESET_W(128, vlSelf->riscv_soc__DOT__sram4__DOT__sram_55);
    VL_RAND_RESET_W(128, vlSelf->riscv_soc__DOT__sram4__DOT__sram_56);
    VL_RAND_RESET_W(128, vlSelf->riscv_soc__DOT__sram4__DOT__sram_57);
    VL_RAND_RESET_W(128, vlSelf->riscv_soc__DOT__sram4__DOT__sram_58);
    VL_RAND_RESET_W(128, vlSelf->riscv_soc__DOT__sram4__DOT__sram_59);
    VL_RAND_RESET_W(128, vlSelf->riscv_soc__DOT__sram4__DOT__sram_60);
    VL_RAND_RESET_W(128, vlSelf->riscv_soc__DOT__sram4__DOT__sram_61);
    VL_RAND_RESET_W(128, vlSelf->riscv_soc__DOT__sram4__DOT__sram_62);
    VL_RAND_RESET_W(128, vlSelf->riscv_soc__DOT__sram4__DOT__sram_63);
    VL_RAND_RESET_W(128, vlSelf->riscv_soc__DOT__sram4__DOT___GEN_1);
    VL_RAND_RESET_W(128, vlSelf->riscv_soc__DOT__sram4__DOT__unnamedblk1__DOT___sram_T_3);
    VL_RAND_RESET_W(128, vlSelf->riscv_soc__DOT__sram5__DOT__Q);
    VL_RAND_RESET_W(128, vlSelf->riscv_soc__DOT__sram5__DOT__sram_0);
    VL_RAND_RESET_W(128, vlSelf->riscv_soc__DOT__sram5__DOT__sram_1);
    VL_RAND_RESET_W(128, vlSelf->riscv_soc__DOT__sram5__DOT__sram_2);
    VL_RAND_RESET_W(128, vlSelf->riscv_soc__DOT__sram5__DOT__sram_3);
    VL_RAND_RESET_W(128, vlSelf->riscv_soc__DOT__sram5__DOT__sram_4);
    VL_RAND_RESET_W(128, vlSelf->riscv_soc__DOT__sram5__DOT__sram_5);
    VL_RAND_RESET_W(128, vlSelf->riscv_soc__DOT__sram5__DOT__sram_6);
    VL_RAND_RESET_W(128, vlSelf->riscv_soc__DOT__sram5__DOT__sram_7);
    VL_RAND_RESET_W(128, vlSelf->riscv_soc__DOT__sram5__DOT__sram_8);
    VL_RAND_RESET_W(128, vlSelf->riscv_soc__DOT__sram5__DOT__sram_9);
    VL_RAND_RESET_W(128, vlSelf->riscv_soc__DOT__sram5__DOT__sram_10);
    VL_RAND_RESET_W(128, vlSelf->riscv_soc__DOT__sram5__DOT__sram_11);
    VL_RAND_RESET_W(128, vlSelf->riscv_soc__DOT__sram5__DOT__sram_12);
    VL_RAND_RESET_W(128, vlSelf->riscv_soc__DOT__sram5__DOT__sram_13);
    VL_RAND_RESET_W(128, vlSelf->riscv_soc__DOT__sram5__DOT__sram_14);
    VL_RAND_RESET_W(128, vlSelf->riscv_soc__DOT__sram5__DOT__sram_15);
    VL_RAND_RESET_W(128, vlSelf->riscv_soc__DOT__sram5__DOT__sram_16);
    VL_RAND_RESET_W(128, vlSelf->riscv_soc__DOT__sram5__DOT__sram_17);
    VL_RAND_RESET_W(128, vlSelf->riscv_soc__DOT__sram5__DOT__sram_18);
    VL_RAND_RESET_W(128, vlSelf->riscv_soc__DOT__sram5__DOT__sram_19);
    VL_RAND_RESET_W(128, vlSelf->riscv_soc__DOT__sram5__DOT__sram_20);
    VL_RAND_RESET_W(128, vlSelf->riscv_soc__DOT__sram5__DOT__sram_21);
    VL_RAND_RESET_W(128, vlSelf->riscv_soc__DOT__sram5__DOT__sram_22);
    VL_RAND_RESET_W(128, vlSelf->riscv_soc__DOT__sram5__DOT__sram_23);
    VL_RAND_RESET_W(128, vlSelf->riscv_soc__DOT__sram5__DOT__sram_24);
    VL_RAND_RESET_W(128, vlSelf->riscv_soc__DOT__sram5__DOT__sram_25);
    VL_RAND_RESET_W(128, vlSelf->riscv_soc__DOT__sram5__DOT__sram_26);
    VL_RAND_RESET_W(128, vlSelf->riscv_soc__DOT__sram5__DOT__sram_27);
    VL_RAND_RESET_W(128, vlSelf->riscv_soc__DOT__sram5__DOT__sram_28);
    VL_RAND_RESET_W(128, vlSelf->riscv_soc__DOT__sram5__DOT__sram_29);
    VL_RAND_RESET_W(128, vlSelf->riscv_soc__DOT__sram5__DOT__sram_30);
    VL_RAND_RESET_W(128, vlSelf->riscv_soc__DOT__sram5__DOT__sram_31);
    VL_RAND_RESET_W(128, vlSelf->riscv_soc__DOT__sram5__DOT__sram_32);
    VL_RAND_RESET_W(128, vlSelf->riscv_soc__DOT__sram5__DOT__sram_33);
    VL_RAND_RESET_W(128, vlSelf->riscv_soc__DOT__sram5__DOT__sram_34);
    VL_RAND_RESET_W(128, vlSelf->riscv_soc__DOT__sram5__DOT__sram_35);
    VL_RAND_RESET_W(128, vlSelf->riscv_soc__DOT__sram5__DOT__sram_36);
    VL_RAND_RESET_W(128, vlSelf->riscv_soc__DOT__sram5__DOT__sram_37);
    VL_RAND_RESET_W(128, vlSelf->riscv_soc__DOT__sram5__DOT__sram_38);
    VL_RAND_RESET_W(128, vlSelf->riscv_soc__DOT__sram5__DOT__sram_39);
    VL_RAND_RESET_W(128, vlSelf->riscv_soc__DOT__sram5__DOT__sram_40);
    VL_RAND_RESET_W(128, vlSelf->riscv_soc__DOT__sram5__DOT__sram_41);
    VL_RAND_RESET_W(128, vlSelf->riscv_soc__DOT__sram5__DOT__sram_42);
    VL_RAND_RESET_W(128, vlSelf->riscv_soc__DOT__sram5__DOT__sram_43);
    VL_RAND_RESET_W(128, vlSelf->riscv_soc__DOT__sram5__DOT__sram_44);
    VL_RAND_RESET_W(128, vlSelf->riscv_soc__DOT__sram5__DOT__sram_45);
    VL_RAND_RESET_W(128, vlSelf->riscv_soc__DOT__sram5__DOT__sram_46);
    VL_RAND_RESET_W(128, vlSelf->riscv_soc__DOT__sram5__DOT__sram_47);
    VL_RAND_RESET_W(128, vlSelf->riscv_soc__DOT__sram5__DOT__sram_48);
    VL_RAND_RESET_W(128, vlSelf->riscv_soc__DOT__sram5__DOT__sram_49);
    VL_RAND_RESET_W(128, vlSelf->riscv_soc__DOT__sram5__DOT__sram_50);
    VL_RAND_RESET_W(128, vlSelf->riscv_soc__DOT__sram5__DOT__sram_51);
    VL_RAND_RESET_W(128, vlSelf->riscv_soc__DOT__sram5__DOT__sram_52);
    VL_RAND_RESET_W(128, vlSelf->riscv_soc__DOT__sram5__DOT__sram_53);
    VL_RAND_RESET_W(128, vlSelf->riscv_soc__DOT__sram5__DOT__sram_54);
    VL_RAND_RESET_W(128, vlSelf->riscv_soc__DOT__sram5__DOT__sram_55);
    VL_RAND_RESET_W(128, vlSelf->riscv_soc__DOT__sram5__DOT__sram_56);
    VL_RAND_RESET_W(128, vlSelf->riscv_soc__DOT__sram5__DOT__sram_57);
    VL_RAND_RESET_W(128, vlSelf->riscv_soc__DOT__sram5__DOT__sram_58);
    VL_RAND_RESET_W(128, vlSelf->riscv_soc__DOT__sram5__DOT__sram_59);
    VL_RAND_RESET_W(128, vlSelf->riscv_soc__DOT__sram5__DOT__sram_60);
    VL_RAND_RESET_W(128, vlSelf->riscv_soc__DOT__sram5__DOT__sram_61);
    VL_RAND_RESET_W(128, vlSelf->riscv_soc__DOT__sram5__DOT__sram_62);
    VL_RAND_RESET_W(128, vlSelf->riscv_soc__DOT__sram5__DOT__sram_63);
    VL_RAND_RESET_W(128, vlSelf->riscv_soc__DOT__sram5__DOT___GEN_1);
    VL_RAND_RESET_W(128, vlSelf->riscv_soc__DOT__sram5__DOT__unnamedblk1__DOT___sram_T_3);
    VL_RAND_RESET_W(128, vlSelf->riscv_soc__DOT__sram6__DOT__Q);
    VL_RAND_RESET_W(128, vlSelf->riscv_soc__DOT__sram6__DOT__sram_0);
    VL_RAND_RESET_W(128, vlSelf->riscv_soc__DOT__sram6__DOT__sram_1);
    VL_RAND_RESET_W(128, vlSelf->riscv_soc__DOT__sram6__DOT__sram_2);
    VL_RAND_RESET_W(128, vlSelf->riscv_soc__DOT__sram6__DOT__sram_3);
    VL_RAND_RESET_W(128, vlSelf->riscv_soc__DOT__sram6__DOT__sram_4);
    VL_RAND_RESET_W(128, vlSelf->riscv_soc__DOT__sram6__DOT__sram_5);
    VL_RAND_RESET_W(128, vlSelf->riscv_soc__DOT__sram6__DOT__sram_6);
    VL_RAND_RESET_W(128, vlSelf->riscv_soc__DOT__sram6__DOT__sram_7);
    VL_RAND_RESET_W(128, vlSelf->riscv_soc__DOT__sram6__DOT__sram_8);
    VL_RAND_RESET_W(128, vlSelf->riscv_soc__DOT__sram6__DOT__sram_9);
    VL_RAND_RESET_W(128, vlSelf->riscv_soc__DOT__sram6__DOT__sram_10);
    VL_RAND_RESET_W(128, vlSelf->riscv_soc__DOT__sram6__DOT__sram_11);
    VL_RAND_RESET_W(128, vlSelf->riscv_soc__DOT__sram6__DOT__sram_12);
    VL_RAND_RESET_W(128, vlSelf->riscv_soc__DOT__sram6__DOT__sram_13);
    VL_RAND_RESET_W(128, vlSelf->riscv_soc__DOT__sram6__DOT__sram_14);
    VL_RAND_RESET_W(128, vlSelf->riscv_soc__DOT__sram6__DOT__sram_15);
    VL_RAND_RESET_W(128, vlSelf->riscv_soc__DOT__sram6__DOT__sram_16);
    VL_RAND_RESET_W(128, vlSelf->riscv_soc__DOT__sram6__DOT__sram_17);
    VL_RAND_RESET_W(128, vlSelf->riscv_soc__DOT__sram6__DOT__sram_18);
    VL_RAND_RESET_W(128, vlSelf->riscv_soc__DOT__sram6__DOT__sram_19);
    VL_RAND_RESET_W(128, vlSelf->riscv_soc__DOT__sram6__DOT__sram_20);
    VL_RAND_RESET_W(128, vlSelf->riscv_soc__DOT__sram6__DOT__sram_21);
    VL_RAND_RESET_W(128, vlSelf->riscv_soc__DOT__sram6__DOT__sram_22);
    VL_RAND_RESET_W(128, vlSelf->riscv_soc__DOT__sram6__DOT__sram_23);
    VL_RAND_RESET_W(128, vlSelf->riscv_soc__DOT__sram6__DOT__sram_24);
    VL_RAND_RESET_W(128, vlSelf->riscv_soc__DOT__sram6__DOT__sram_25);
    VL_RAND_RESET_W(128, vlSelf->riscv_soc__DOT__sram6__DOT__sram_26);
    VL_RAND_RESET_W(128, vlSelf->riscv_soc__DOT__sram6__DOT__sram_27);
    VL_RAND_RESET_W(128, vlSelf->riscv_soc__DOT__sram6__DOT__sram_28);
    VL_RAND_RESET_W(128, vlSelf->riscv_soc__DOT__sram6__DOT__sram_29);
    VL_RAND_RESET_W(128, vlSelf->riscv_soc__DOT__sram6__DOT__sram_30);
    VL_RAND_RESET_W(128, vlSelf->riscv_soc__DOT__sram6__DOT__sram_31);
    VL_RAND_RESET_W(128, vlSelf->riscv_soc__DOT__sram6__DOT__sram_32);
    VL_RAND_RESET_W(128, vlSelf->riscv_soc__DOT__sram6__DOT__sram_33);
    VL_RAND_RESET_W(128, vlSelf->riscv_soc__DOT__sram6__DOT__sram_34);
    VL_RAND_RESET_W(128, vlSelf->riscv_soc__DOT__sram6__DOT__sram_35);
    VL_RAND_RESET_W(128, vlSelf->riscv_soc__DOT__sram6__DOT__sram_36);
    VL_RAND_RESET_W(128, vlSelf->riscv_soc__DOT__sram6__DOT__sram_37);
    VL_RAND_RESET_W(128, vlSelf->riscv_soc__DOT__sram6__DOT__sram_38);
    VL_RAND_RESET_W(128, vlSelf->riscv_soc__DOT__sram6__DOT__sram_39);
    VL_RAND_RESET_W(128, vlSelf->riscv_soc__DOT__sram6__DOT__sram_40);
    VL_RAND_RESET_W(128, vlSelf->riscv_soc__DOT__sram6__DOT__sram_41);
    VL_RAND_RESET_W(128, vlSelf->riscv_soc__DOT__sram6__DOT__sram_42);
    VL_RAND_RESET_W(128, vlSelf->riscv_soc__DOT__sram6__DOT__sram_43);
    VL_RAND_RESET_W(128, vlSelf->riscv_soc__DOT__sram6__DOT__sram_44);
    VL_RAND_RESET_W(128, vlSelf->riscv_soc__DOT__sram6__DOT__sram_45);
    VL_RAND_RESET_W(128, vlSelf->riscv_soc__DOT__sram6__DOT__sram_46);
    VL_RAND_RESET_W(128, vlSelf->riscv_soc__DOT__sram6__DOT__sram_47);
    VL_RAND_RESET_W(128, vlSelf->riscv_soc__DOT__sram6__DOT__sram_48);
    VL_RAND_RESET_W(128, vlSelf->riscv_soc__DOT__sram6__DOT__sram_49);
    VL_RAND_RESET_W(128, vlSelf->riscv_soc__DOT__sram6__DOT__sram_50);
    VL_RAND_RESET_W(128, vlSelf->riscv_soc__DOT__sram6__DOT__sram_51);
    VL_RAND_RESET_W(128, vlSelf->riscv_soc__DOT__sram6__DOT__sram_52);
    VL_RAND_RESET_W(128, vlSelf->riscv_soc__DOT__sram6__DOT__sram_53);
    VL_RAND_RESET_W(128, vlSelf->riscv_soc__DOT__sram6__DOT__sram_54);
    VL_RAND_RESET_W(128, vlSelf->riscv_soc__DOT__sram6__DOT__sram_55);
    VL_RAND_RESET_W(128, vlSelf->riscv_soc__DOT__sram6__DOT__sram_56);
    VL_RAND_RESET_W(128, vlSelf->riscv_soc__DOT__sram6__DOT__sram_57);
    VL_RAND_RESET_W(128, vlSelf->riscv_soc__DOT__sram6__DOT__sram_58);
    VL_RAND_RESET_W(128, vlSelf->riscv_soc__DOT__sram6__DOT__sram_59);
    VL_RAND_RESET_W(128, vlSelf->riscv_soc__DOT__sram6__DOT__sram_60);
    VL_RAND_RESET_W(128, vlSelf->riscv_soc__DOT__sram6__DOT__sram_61);
    VL_RAND_RESET_W(128, vlSelf->riscv_soc__DOT__sram6__DOT__sram_62);
    VL_RAND_RESET_W(128, vlSelf->riscv_soc__DOT__sram6__DOT__sram_63);
    VL_RAND_RESET_W(128, vlSelf->riscv_soc__DOT__sram6__DOT___GEN_1);
    VL_RAND_RESET_W(128, vlSelf->riscv_soc__DOT__sram6__DOT__unnamedblk1__DOT___sram_T_3);
    VL_RAND_RESET_W(128, vlSelf->riscv_soc__DOT__sram7__DOT__Q);
    VL_RAND_RESET_W(128, vlSelf->riscv_soc__DOT__sram7__DOT__sram_0);
    VL_RAND_RESET_W(128, vlSelf->riscv_soc__DOT__sram7__DOT__sram_1);
    VL_RAND_RESET_W(128, vlSelf->riscv_soc__DOT__sram7__DOT__sram_2);
    VL_RAND_RESET_W(128, vlSelf->riscv_soc__DOT__sram7__DOT__sram_3);
    VL_RAND_RESET_W(128, vlSelf->riscv_soc__DOT__sram7__DOT__sram_4);
    VL_RAND_RESET_W(128, vlSelf->riscv_soc__DOT__sram7__DOT__sram_5);
    VL_RAND_RESET_W(128, vlSelf->riscv_soc__DOT__sram7__DOT__sram_6);
    VL_RAND_RESET_W(128, vlSelf->riscv_soc__DOT__sram7__DOT__sram_7);
    VL_RAND_RESET_W(128, vlSelf->riscv_soc__DOT__sram7__DOT__sram_8);
    VL_RAND_RESET_W(128, vlSelf->riscv_soc__DOT__sram7__DOT__sram_9);
    VL_RAND_RESET_W(128, vlSelf->riscv_soc__DOT__sram7__DOT__sram_10);
    VL_RAND_RESET_W(128, vlSelf->riscv_soc__DOT__sram7__DOT__sram_11);
    VL_RAND_RESET_W(128, vlSelf->riscv_soc__DOT__sram7__DOT__sram_12);
    VL_RAND_RESET_W(128, vlSelf->riscv_soc__DOT__sram7__DOT__sram_13);
    VL_RAND_RESET_W(128, vlSelf->riscv_soc__DOT__sram7__DOT__sram_14);
    VL_RAND_RESET_W(128, vlSelf->riscv_soc__DOT__sram7__DOT__sram_15);
    VL_RAND_RESET_W(128, vlSelf->riscv_soc__DOT__sram7__DOT__sram_16);
    VL_RAND_RESET_W(128, vlSelf->riscv_soc__DOT__sram7__DOT__sram_17);
    VL_RAND_RESET_W(128, vlSelf->riscv_soc__DOT__sram7__DOT__sram_18);
    VL_RAND_RESET_W(128, vlSelf->riscv_soc__DOT__sram7__DOT__sram_19);
    VL_RAND_RESET_W(128, vlSelf->riscv_soc__DOT__sram7__DOT__sram_20);
    VL_RAND_RESET_W(128, vlSelf->riscv_soc__DOT__sram7__DOT__sram_21);
    VL_RAND_RESET_W(128, vlSelf->riscv_soc__DOT__sram7__DOT__sram_22);
    VL_RAND_RESET_W(128, vlSelf->riscv_soc__DOT__sram7__DOT__sram_23);
    VL_RAND_RESET_W(128, vlSelf->riscv_soc__DOT__sram7__DOT__sram_24);
    VL_RAND_RESET_W(128, vlSelf->riscv_soc__DOT__sram7__DOT__sram_25);
    VL_RAND_RESET_W(128, vlSelf->riscv_soc__DOT__sram7__DOT__sram_26);
    VL_RAND_RESET_W(128, vlSelf->riscv_soc__DOT__sram7__DOT__sram_27);
    VL_RAND_RESET_W(128, vlSelf->riscv_soc__DOT__sram7__DOT__sram_28);
    VL_RAND_RESET_W(128, vlSelf->riscv_soc__DOT__sram7__DOT__sram_29);
    VL_RAND_RESET_W(128, vlSelf->riscv_soc__DOT__sram7__DOT__sram_30);
    VL_RAND_RESET_W(128, vlSelf->riscv_soc__DOT__sram7__DOT__sram_31);
    VL_RAND_RESET_W(128, vlSelf->riscv_soc__DOT__sram7__DOT__sram_32);
    VL_RAND_RESET_W(128, vlSelf->riscv_soc__DOT__sram7__DOT__sram_33);
    VL_RAND_RESET_W(128, vlSelf->riscv_soc__DOT__sram7__DOT__sram_34);
    VL_RAND_RESET_W(128, vlSelf->riscv_soc__DOT__sram7__DOT__sram_35);
    VL_RAND_RESET_W(128, vlSelf->riscv_soc__DOT__sram7__DOT__sram_36);
    VL_RAND_RESET_W(128, vlSelf->riscv_soc__DOT__sram7__DOT__sram_37);
    VL_RAND_RESET_W(128, vlSelf->riscv_soc__DOT__sram7__DOT__sram_38);
    VL_RAND_RESET_W(128, vlSelf->riscv_soc__DOT__sram7__DOT__sram_39);
    VL_RAND_RESET_W(128, vlSelf->riscv_soc__DOT__sram7__DOT__sram_40);
    VL_RAND_RESET_W(128, vlSelf->riscv_soc__DOT__sram7__DOT__sram_41);
    VL_RAND_RESET_W(128, vlSelf->riscv_soc__DOT__sram7__DOT__sram_42);
    VL_RAND_RESET_W(128, vlSelf->riscv_soc__DOT__sram7__DOT__sram_43);
    VL_RAND_RESET_W(128, vlSelf->riscv_soc__DOT__sram7__DOT__sram_44);
    VL_RAND_RESET_W(128, vlSelf->riscv_soc__DOT__sram7__DOT__sram_45);
    VL_RAND_RESET_W(128, vlSelf->riscv_soc__DOT__sram7__DOT__sram_46);
    VL_RAND_RESET_W(128, vlSelf->riscv_soc__DOT__sram7__DOT__sram_47);
    VL_RAND_RESET_W(128, vlSelf->riscv_soc__DOT__sram7__DOT__sram_48);
    VL_RAND_RESET_W(128, vlSelf->riscv_soc__DOT__sram7__DOT__sram_49);
    VL_RAND_RESET_W(128, vlSelf->riscv_soc__DOT__sram7__DOT__sram_50);
    VL_RAND_RESET_W(128, vlSelf->riscv_soc__DOT__sram7__DOT__sram_51);
    VL_RAND_RESET_W(128, vlSelf->riscv_soc__DOT__sram7__DOT__sram_52);
    VL_RAND_RESET_W(128, vlSelf->riscv_soc__DOT__sram7__DOT__sram_53);
    VL_RAND_RESET_W(128, vlSelf->riscv_soc__DOT__sram7__DOT__sram_54);
    VL_RAND_RESET_W(128, vlSelf->riscv_soc__DOT__sram7__DOT__sram_55);
    VL_RAND_RESET_W(128, vlSelf->riscv_soc__DOT__sram7__DOT__sram_56);
    VL_RAND_RESET_W(128, vlSelf->riscv_soc__DOT__sram7__DOT__sram_57);
    VL_RAND_RESET_W(128, vlSelf->riscv_soc__DOT__sram7__DOT__sram_58);
    VL_RAND_RESET_W(128, vlSelf->riscv_soc__DOT__sram7__DOT__sram_59);
    VL_RAND_RESET_W(128, vlSelf->riscv_soc__DOT__sram7__DOT__sram_60);
    VL_RAND_RESET_W(128, vlSelf->riscv_soc__DOT__sram7__DOT__sram_61);
    VL_RAND_RESET_W(128, vlSelf->riscv_soc__DOT__sram7__DOT__sram_62);
    VL_RAND_RESET_W(128, vlSelf->riscv_soc__DOT__sram7__DOT__sram_63);
    VL_RAND_RESET_W(128, vlSelf->riscv_soc__DOT__sram7__DOT___GEN_1);
    VL_RAND_RESET_W(128, vlSelf->riscv_soc__DOT__sram7__DOT__unnamedblk1__DOT___sram_T_3);
    vlSelf->__Vdly__riscv_soc__DOT__core__DOT__cross_bar__DOT__w_locked = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__riscv_soc__DOT__core__DOT__cross_bar__DOT__reg_r_cnt = VL_RAND_RESET_I(2);
    vlSelf->__Vdly__riscv_soc__DOT__core__DOT__cross_bar__DOT__r_lockId = VL_RAND_RESET_I(2);
    vlSelf->__Vdly__riscv_soc__DOT__core__DOT__fetch__DOT__pre_info_tail = VL_RAND_RESET_I(2);
    vlSelf->__Vdly__riscv_soc__DOT__core__DOT__fetch__DOT__is_pre_tail = VL_RAND_RESET_I(2);
    vlSelf->__Vdly__riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__reg_head = VL_RAND_RESET_I(3);
    vlSelf->__Vdlyvset__riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__RAS_ext__DOT__Memory__v0 = 0;
    vlSelf->__Vdly__riscv_soc__DOT__core__DOT__clint_de__DOT__reg_msip = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__riscv_soc__DOT__core__DOT__clint_de__DOT__reg_mtime = VL_RAND_RESET_Q(64);
    vlSelf->__Vdly__riscv_soc__DOT__core__DOT__clint_de__DOT__reg_mtimecmp = VL_RAND_RESET_Q(64);
    vlSelf->__Vdly__riscv_soc__DOT__core__DOT__clint_de__DOT__reg_ready = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__riscv_soc__DOT__core__DOT__clint_de__DOT__reg_state = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__riscv_soc__DOT__axi_ram__DOT__reg_raddr = VL_RAND_RESET_Q(64);
    vlSelf->__Vdly__riscv_soc__DOT__axi_ram__DOT__reg_rlen = VL_RAND_RESET_I(4);
    vlSelf->__Vdly__riscv_soc__DOT__axi_ram__DOT__reg_ar_ready = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__riscv_soc__DOT__axi_ram__DOT__reg_r_valid = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__riscv_soc__DOT__axi_ram__DOT__reg_r_state = VL_RAND_RESET_I(1);
}
