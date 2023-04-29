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

void Vriscv_soc___024root___settle__TOP__5(Vriscv_soc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vriscv_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv_soc___024root___settle__TOP__5\n"); );
    // Variables
    VlWide<4>/*127:0*/ riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___GEN;
    CData/*3:0*/ riscv_soc__DOT__core__DOT__execute__DOT__valid;
    CData/*0:0*/ riscv_soc__DOT__core__DOT__execute__DOT____Vcellinp__mu_exu__io_valid;
    CData/*0:0*/ riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__s_rs1_l_rs2;
    CData/*5:0*/ riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__shift_rs2_data;
    CData/*0:0*/ riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__is_eq;
    CData/*0:0*/ riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__chose_chancel;
    VlWide<3>/*64:0*/ riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___GEN;
    VlWide<3>/*95:0*/ __Vtemp952;
    VlWide<3>/*95:0*/ __Vtemp954;
    VlWide<64>/*2047:0*/ __Vtemp970;
    VlWide<68>/*2175:0*/ __Vtemp971;
    VlWide<72>/*2303:0*/ __Vtemp972;
    VlWide<76>/*2431:0*/ __Vtemp973;
    VlWide<80>/*2559:0*/ __Vtemp974;
    VlWide<84>/*2687:0*/ __Vtemp975;
    VlWide<88>/*2815:0*/ __Vtemp976;
    VlWide<92>/*2943:0*/ __Vtemp977;
    VlWide<96>/*3071:0*/ __Vtemp978;
    VlWide<100>/*3199:0*/ __Vtemp979;
    VlWide<104>/*3327:0*/ __Vtemp980;
    VlWide<108>/*3455:0*/ __Vtemp981;
    VlWide<112>/*3583:0*/ __Vtemp982;
    VlWide<116>/*3711:0*/ __Vtemp983;
    VlWide<120>/*3839:0*/ __Vtemp984;
    VlWide<124>/*3967:0*/ __Vtemp985;
    VlWide<128>/*4095:0*/ __Vtemp986;
    VlWide<132>/*4223:0*/ __Vtemp987;
    VlWide<136>/*4351:0*/ __Vtemp988;
    VlWide<140>/*4479:0*/ __Vtemp989;
    VlWide<144>/*4607:0*/ __Vtemp990;
    VlWide<148>/*4735:0*/ __Vtemp991;
    VlWide<152>/*4863:0*/ __Vtemp992;
    VlWide<156>/*4991:0*/ __Vtemp993;
    VlWide<160>/*5119:0*/ __Vtemp994;
    VlWide<164>/*5247:0*/ __Vtemp995;
    VlWide<168>/*5375:0*/ __Vtemp996;
    VlWide<172>/*5503:0*/ __Vtemp997;
    VlWide<176>/*5631:0*/ __Vtemp998;
    VlWide<180>/*5759:0*/ __Vtemp999;
    VlWide<184>/*5887:0*/ __Vtemp1000;
    VlWide<188>/*6015:0*/ __Vtemp1001;
    VlWide<192>/*6143:0*/ __Vtemp1002;
    VlWide<196>/*6271:0*/ __Vtemp1003;
    VlWide<200>/*6399:0*/ __Vtemp1004;
    VlWide<204>/*6527:0*/ __Vtemp1005;
    VlWide<208>/*6655:0*/ __Vtemp1006;
    VlWide<212>/*6783:0*/ __Vtemp1007;
    VlWide<216>/*6911:0*/ __Vtemp1008;
    VlWide<220>/*7039:0*/ __Vtemp1009;
    VlWide<224>/*7167:0*/ __Vtemp1010;
    VlWide<228>/*7295:0*/ __Vtemp1011;
    VlWide<232>/*7423:0*/ __Vtemp1012;
    VlWide<236>/*7551:0*/ __Vtemp1013;
    VlWide<240>/*7679:0*/ __Vtemp1014;
    VlWide<244>/*7807:0*/ __Vtemp1015;
    VlWide<248>/*7935:0*/ __Vtemp1016;
    VlWide<252>/*8063:0*/ __Vtemp1017;
    VlWide<256>/*8191:0*/ __Vtemp1018;
    VlWide<4>/*127:0*/ __Vtemp1052;
    VlWide<12>/*383:0*/ __Vtemp1057;
    VlWide<4>/*127:0*/ __Vtemp1059;
    VlWide<4>/*127:0*/ __Vtemp1060;
    VlWide<4>/*127:0*/ __Vtemp1061;
    VlWide<4>/*127:0*/ __Vtemp1062;
    VlWide<3>/*95:0*/ __Vtemp1065;
    VlWide<3>/*95:0*/ __Vtemp1066;
    VlWide<3>/*95:0*/ __Vtemp1067;
    VlWide<3>/*95:0*/ __Vtemp1068;
    VlWide<3>/*95:0*/ __Vtemp1069;
    VlWide<64>/*2047:0*/ __Vtemp1085;
    VlWide<68>/*2175:0*/ __Vtemp1086;
    VlWide<72>/*2303:0*/ __Vtemp1087;
    VlWide<76>/*2431:0*/ __Vtemp1088;
    VlWide<80>/*2559:0*/ __Vtemp1089;
    VlWide<84>/*2687:0*/ __Vtemp1090;
    VlWide<88>/*2815:0*/ __Vtemp1091;
    VlWide<92>/*2943:0*/ __Vtemp1092;
    VlWide<96>/*3071:0*/ __Vtemp1093;
    VlWide<100>/*3199:0*/ __Vtemp1094;
    VlWide<104>/*3327:0*/ __Vtemp1095;
    VlWide<108>/*3455:0*/ __Vtemp1096;
    VlWide<112>/*3583:0*/ __Vtemp1097;
    VlWide<116>/*3711:0*/ __Vtemp1098;
    VlWide<120>/*3839:0*/ __Vtemp1099;
    VlWide<124>/*3967:0*/ __Vtemp1100;
    VlWide<128>/*4095:0*/ __Vtemp1101;
    VlWide<132>/*4223:0*/ __Vtemp1102;
    VlWide<136>/*4351:0*/ __Vtemp1103;
    VlWide<140>/*4479:0*/ __Vtemp1104;
    VlWide<144>/*4607:0*/ __Vtemp1105;
    VlWide<148>/*4735:0*/ __Vtemp1106;
    VlWide<152>/*4863:0*/ __Vtemp1107;
    VlWide<156>/*4991:0*/ __Vtemp1108;
    VlWide<160>/*5119:0*/ __Vtemp1109;
    VlWide<164>/*5247:0*/ __Vtemp1110;
    VlWide<168>/*5375:0*/ __Vtemp1111;
    VlWide<172>/*5503:0*/ __Vtemp1112;
    VlWide<176>/*5631:0*/ __Vtemp1113;
    VlWide<180>/*5759:0*/ __Vtemp1114;
    VlWide<184>/*5887:0*/ __Vtemp1115;
    VlWide<188>/*6015:0*/ __Vtemp1116;
    VlWide<192>/*6143:0*/ __Vtemp1117;
    VlWide<196>/*6271:0*/ __Vtemp1118;
    VlWide<200>/*6399:0*/ __Vtemp1119;
    VlWide<204>/*6527:0*/ __Vtemp1120;
    VlWide<208>/*6655:0*/ __Vtemp1121;
    VlWide<212>/*6783:0*/ __Vtemp1122;
    VlWide<216>/*6911:0*/ __Vtemp1123;
    VlWide<220>/*7039:0*/ __Vtemp1124;
    VlWide<224>/*7167:0*/ __Vtemp1125;
    VlWide<228>/*7295:0*/ __Vtemp1126;
    VlWide<232>/*7423:0*/ __Vtemp1127;
    VlWide<236>/*7551:0*/ __Vtemp1128;
    VlWide<240>/*7679:0*/ __Vtemp1129;
    VlWide<244>/*7807:0*/ __Vtemp1130;
    VlWide<248>/*7935:0*/ __Vtemp1131;
    VlWide<252>/*8063:0*/ __Vtemp1132;
    VlWide<256>/*8191:0*/ __Vtemp1133;
    VlWide<64>/*2047:0*/ __Vtemp1149;
    VlWide<68>/*2175:0*/ __Vtemp1150;
    VlWide<72>/*2303:0*/ __Vtemp1151;
    VlWide<76>/*2431:0*/ __Vtemp1152;
    VlWide<80>/*2559:0*/ __Vtemp1153;
    VlWide<84>/*2687:0*/ __Vtemp1154;
    VlWide<88>/*2815:0*/ __Vtemp1155;
    VlWide<92>/*2943:0*/ __Vtemp1156;
    VlWide<96>/*3071:0*/ __Vtemp1157;
    VlWide<100>/*3199:0*/ __Vtemp1158;
    VlWide<104>/*3327:0*/ __Vtemp1159;
    VlWide<108>/*3455:0*/ __Vtemp1160;
    VlWide<112>/*3583:0*/ __Vtemp1161;
    VlWide<116>/*3711:0*/ __Vtemp1162;
    VlWide<120>/*3839:0*/ __Vtemp1163;
    VlWide<124>/*3967:0*/ __Vtemp1164;
    VlWide<128>/*4095:0*/ __Vtemp1165;
    VlWide<132>/*4223:0*/ __Vtemp1166;
    VlWide<136>/*4351:0*/ __Vtemp1167;
    VlWide<140>/*4479:0*/ __Vtemp1168;
    VlWide<144>/*4607:0*/ __Vtemp1169;
    VlWide<148>/*4735:0*/ __Vtemp1170;
    VlWide<152>/*4863:0*/ __Vtemp1171;
    VlWide<156>/*4991:0*/ __Vtemp1172;
    VlWide<160>/*5119:0*/ __Vtemp1173;
    VlWide<164>/*5247:0*/ __Vtemp1174;
    VlWide<168>/*5375:0*/ __Vtemp1175;
    VlWide<172>/*5503:0*/ __Vtemp1176;
    VlWide<176>/*5631:0*/ __Vtemp1177;
    VlWide<180>/*5759:0*/ __Vtemp1178;
    VlWide<184>/*5887:0*/ __Vtemp1179;
    VlWide<188>/*6015:0*/ __Vtemp1180;
    VlWide<192>/*6143:0*/ __Vtemp1181;
    VlWide<196>/*6271:0*/ __Vtemp1182;
    VlWide<200>/*6399:0*/ __Vtemp1183;
    VlWide<204>/*6527:0*/ __Vtemp1184;
    VlWide<208>/*6655:0*/ __Vtemp1185;
    VlWide<212>/*6783:0*/ __Vtemp1186;
    VlWide<216>/*6911:0*/ __Vtemp1187;
    VlWide<220>/*7039:0*/ __Vtemp1188;
    VlWide<224>/*7167:0*/ __Vtemp1189;
    VlWide<228>/*7295:0*/ __Vtemp1190;
    VlWide<232>/*7423:0*/ __Vtemp1191;
    VlWide<236>/*7551:0*/ __Vtemp1192;
    VlWide<240>/*7679:0*/ __Vtemp1193;
    VlWide<244>/*7807:0*/ __Vtemp1194;
    VlWide<248>/*7935:0*/ __Vtemp1195;
    VlWide<252>/*8063:0*/ __Vtemp1196;
    VlWide<256>/*8191:0*/ __Vtemp1197;
    VlWide<64>/*2047:0*/ __Vtemp1213;
    VlWide<68>/*2175:0*/ __Vtemp1214;
    VlWide<72>/*2303:0*/ __Vtemp1215;
    VlWide<76>/*2431:0*/ __Vtemp1216;
    VlWide<80>/*2559:0*/ __Vtemp1217;
    VlWide<84>/*2687:0*/ __Vtemp1218;
    VlWide<88>/*2815:0*/ __Vtemp1219;
    VlWide<92>/*2943:0*/ __Vtemp1220;
    VlWide<96>/*3071:0*/ __Vtemp1221;
    VlWide<100>/*3199:0*/ __Vtemp1222;
    VlWide<104>/*3327:0*/ __Vtemp1223;
    VlWide<108>/*3455:0*/ __Vtemp1224;
    VlWide<112>/*3583:0*/ __Vtemp1225;
    VlWide<116>/*3711:0*/ __Vtemp1226;
    VlWide<120>/*3839:0*/ __Vtemp1227;
    VlWide<124>/*3967:0*/ __Vtemp1228;
    VlWide<128>/*4095:0*/ __Vtemp1229;
    VlWide<132>/*4223:0*/ __Vtemp1230;
    VlWide<136>/*4351:0*/ __Vtemp1231;
    VlWide<140>/*4479:0*/ __Vtemp1232;
    VlWide<144>/*4607:0*/ __Vtemp1233;
    VlWide<148>/*4735:0*/ __Vtemp1234;
    VlWide<152>/*4863:0*/ __Vtemp1235;
    VlWide<156>/*4991:0*/ __Vtemp1236;
    VlWide<160>/*5119:0*/ __Vtemp1237;
    VlWide<164>/*5247:0*/ __Vtemp1238;
    VlWide<168>/*5375:0*/ __Vtemp1239;
    VlWide<172>/*5503:0*/ __Vtemp1240;
    VlWide<176>/*5631:0*/ __Vtemp1241;
    VlWide<180>/*5759:0*/ __Vtemp1242;
    VlWide<184>/*5887:0*/ __Vtemp1243;
    VlWide<188>/*6015:0*/ __Vtemp1244;
    VlWide<192>/*6143:0*/ __Vtemp1245;
    VlWide<196>/*6271:0*/ __Vtemp1246;
    VlWide<200>/*6399:0*/ __Vtemp1247;
    VlWide<204>/*6527:0*/ __Vtemp1248;
    VlWide<208>/*6655:0*/ __Vtemp1249;
    VlWide<212>/*6783:0*/ __Vtemp1250;
    VlWide<216>/*6911:0*/ __Vtemp1251;
    VlWide<220>/*7039:0*/ __Vtemp1252;
    VlWide<224>/*7167:0*/ __Vtemp1253;
    VlWide<228>/*7295:0*/ __Vtemp1254;
    VlWide<232>/*7423:0*/ __Vtemp1255;
    VlWide<236>/*7551:0*/ __Vtemp1256;
    VlWide<240>/*7679:0*/ __Vtemp1257;
    VlWide<244>/*7807:0*/ __Vtemp1258;
    VlWide<248>/*7935:0*/ __Vtemp1259;
    VlWide<252>/*8063:0*/ __Vtemp1260;
    VlWide<256>/*8191:0*/ __Vtemp1261;
    VlWide<64>/*2047:0*/ __Vtemp1277;
    VlWide<68>/*2175:0*/ __Vtemp1278;
    VlWide<72>/*2303:0*/ __Vtemp1279;
    VlWide<76>/*2431:0*/ __Vtemp1280;
    VlWide<80>/*2559:0*/ __Vtemp1281;
    VlWide<84>/*2687:0*/ __Vtemp1282;
    VlWide<88>/*2815:0*/ __Vtemp1283;
    VlWide<92>/*2943:0*/ __Vtemp1284;
    VlWide<96>/*3071:0*/ __Vtemp1285;
    VlWide<100>/*3199:0*/ __Vtemp1286;
    VlWide<104>/*3327:0*/ __Vtemp1287;
    VlWide<108>/*3455:0*/ __Vtemp1288;
    VlWide<112>/*3583:0*/ __Vtemp1289;
    VlWide<116>/*3711:0*/ __Vtemp1290;
    VlWide<120>/*3839:0*/ __Vtemp1291;
    VlWide<124>/*3967:0*/ __Vtemp1292;
    VlWide<128>/*4095:0*/ __Vtemp1293;
    VlWide<132>/*4223:0*/ __Vtemp1294;
    VlWide<136>/*4351:0*/ __Vtemp1295;
    VlWide<140>/*4479:0*/ __Vtemp1296;
    VlWide<144>/*4607:0*/ __Vtemp1297;
    VlWide<148>/*4735:0*/ __Vtemp1298;
    VlWide<152>/*4863:0*/ __Vtemp1299;
    VlWide<156>/*4991:0*/ __Vtemp1300;
    VlWide<160>/*5119:0*/ __Vtemp1301;
    VlWide<164>/*5247:0*/ __Vtemp1302;
    VlWide<168>/*5375:0*/ __Vtemp1303;
    VlWide<172>/*5503:0*/ __Vtemp1304;
    VlWide<176>/*5631:0*/ __Vtemp1305;
    VlWide<180>/*5759:0*/ __Vtemp1306;
    VlWide<184>/*5887:0*/ __Vtemp1307;
    VlWide<188>/*6015:0*/ __Vtemp1308;
    VlWide<192>/*6143:0*/ __Vtemp1309;
    VlWide<196>/*6271:0*/ __Vtemp1310;
    VlWide<200>/*6399:0*/ __Vtemp1311;
    VlWide<204>/*6527:0*/ __Vtemp1312;
    VlWide<208>/*6655:0*/ __Vtemp1313;
    VlWide<212>/*6783:0*/ __Vtemp1314;
    VlWide<216>/*6911:0*/ __Vtemp1315;
    VlWide<220>/*7039:0*/ __Vtemp1316;
    VlWide<224>/*7167:0*/ __Vtemp1317;
    VlWide<228>/*7295:0*/ __Vtemp1318;
    VlWide<232>/*7423:0*/ __Vtemp1319;
    VlWide<236>/*7551:0*/ __Vtemp1320;
    VlWide<240>/*7679:0*/ __Vtemp1321;
    VlWide<244>/*7807:0*/ __Vtemp1322;
    VlWide<248>/*7935:0*/ __Vtemp1323;
    VlWide<252>/*8063:0*/ __Vtemp1324;
    VlWide<256>/*8191:0*/ __Vtemp1325;
    VlWide<4>/*127:0*/ __Vtemp1328;
    VlWide<4>/*127:0*/ __Vtemp1329;
    VlWide<4>/*127:0*/ __Vtemp1332;
    VlWide<4>/*127:0*/ __Vtemp1333;
    VlWide<4>/*127:0*/ __Vtemp1341;
    VlWide<4>/*127:0*/ __Vtemp1342;
    VlWide<16>/*511:0*/ __Vtemp1345;
    VlWide<3>/*95:0*/ __Vtemp1348;
    VlWide<3>/*95:0*/ __Vtemp1351;
    VlWide<3>/*95:0*/ __Vtemp1355;
    VlWide<3>/*95:0*/ __Vtemp1359;
    VlWide<3>/*95:0*/ __Vtemp1366;
    VlWide<3>/*95:0*/ __Vtemp1370;
    VlWide<5>/*159:0*/ __Vtemp1372;
    VlWide<5>/*159:0*/ __Vtemp1373;
    VlWide<17>/*543:0*/ __Vtemp1375;
    VlWide<3>/*95:0*/ __Vtemp1379;
    VlWide<64>/*2047:0*/ __Vtemp1398;
    VlWide<68>/*2175:0*/ __Vtemp1399;
    VlWide<72>/*2303:0*/ __Vtemp1400;
    VlWide<76>/*2431:0*/ __Vtemp1401;
    VlWide<80>/*2559:0*/ __Vtemp1402;
    VlWide<84>/*2687:0*/ __Vtemp1403;
    VlWide<88>/*2815:0*/ __Vtemp1404;
    VlWide<92>/*2943:0*/ __Vtemp1405;
    VlWide<96>/*3071:0*/ __Vtemp1406;
    VlWide<100>/*3199:0*/ __Vtemp1407;
    VlWide<104>/*3327:0*/ __Vtemp1408;
    VlWide<108>/*3455:0*/ __Vtemp1409;
    VlWide<112>/*3583:0*/ __Vtemp1410;
    VlWide<116>/*3711:0*/ __Vtemp1411;
    VlWide<120>/*3839:0*/ __Vtemp1412;
    VlWide<124>/*3967:0*/ __Vtemp1413;
    VlWide<128>/*4095:0*/ __Vtemp1414;
    VlWide<132>/*4223:0*/ __Vtemp1415;
    VlWide<136>/*4351:0*/ __Vtemp1416;
    VlWide<140>/*4479:0*/ __Vtemp1417;
    VlWide<144>/*4607:0*/ __Vtemp1418;
    VlWide<148>/*4735:0*/ __Vtemp1419;
    VlWide<152>/*4863:0*/ __Vtemp1420;
    VlWide<156>/*4991:0*/ __Vtemp1421;
    VlWide<160>/*5119:0*/ __Vtemp1422;
    VlWide<164>/*5247:0*/ __Vtemp1423;
    VlWide<168>/*5375:0*/ __Vtemp1424;
    VlWide<172>/*5503:0*/ __Vtemp1425;
    VlWide<176>/*5631:0*/ __Vtemp1426;
    VlWide<180>/*5759:0*/ __Vtemp1427;
    VlWide<184>/*5887:0*/ __Vtemp1428;
    VlWide<188>/*6015:0*/ __Vtemp1429;
    VlWide<192>/*6143:0*/ __Vtemp1430;
    VlWide<196>/*6271:0*/ __Vtemp1431;
    VlWide<200>/*6399:0*/ __Vtemp1432;
    VlWide<204>/*6527:0*/ __Vtemp1433;
    VlWide<208>/*6655:0*/ __Vtemp1434;
    VlWide<212>/*6783:0*/ __Vtemp1435;
    VlWide<216>/*6911:0*/ __Vtemp1436;
    VlWide<220>/*7039:0*/ __Vtemp1437;
    VlWide<224>/*7167:0*/ __Vtemp1438;
    VlWide<228>/*7295:0*/ __Vtemp1439;
    VlWide<232>/*7423:0*/ __Vtemp1440;
    VlWide<236>/*7551:0*/ __Vtemp1441;
    VlWide<240>/*7679:0*/ __Vtemp1442;
    VlWide<244>/*7807:0*/ __Vtemp1443;
    VlWide<248>/*7935:0*/ __Vtemp1444;
    VlWide<252>/*8063:0*/ __Vtemp1445;
    VlWide<256>/*8191:0*/ __Vtemp1446;
    VlWide<64>/*2047:0*/ __Vtemp1462;
    VlWide<68>/*2175:0*/ __Vtemp1463;
    VlWide<72>/*2303:0*/ __Vtemp1464;
    VlWide<76>/*2431:0*/ __Vtemp1465;
    VlWide<80>/*2559:0*/ __Vtemp1466;
    VlWide<84>/*2687:0*/ __Vtemp1467;
    VlWide<88>/*2815:0*/ __Vtemp1468;
    VlWide<92>/*2943:0*/ __Vtemp1469;
    VlWide<96>/*3071:0*/ __Vtemp1470;
    VlWide<100>/*3199:0*/ __Vtemp1471;
    VlWide<104>/*3327:0*/ __Vtemp1472;
    VlWide<108>/*3455:0*/ __Vtemp1473;
    VlWide<112>/*3583:0*/ __Vtemp1474;
    VlWide<116>/*3711:0*/ __Vtemp1475;
    VlWide<120>/*3839:0*/ __Vtemp1476;
    VlWide<124>/*3967:0*/ __Vtemp1477;
    VlWide<128>/*4095:0*/ __Vtemp1478;
    VlWide<132>/*4223:0*/ __Vtemp1479;
    VlWide<136>/*4351:0*/ __Vtemp1480;
    VlWide<140>/*4479:0*/ __Vtemp1481;
    VlWide<144>/*4607:0*/ __Vtemp1482;
    VlWide<148>/*4735:0*/ __Vtemp1483;
    VlWide<152>/*4863:0*/ __Vtemp1484;
    VlWide<156>/*4991:0*/ __Vtemp1485;
    VlWide<160>/*5119:0*/ __Vtemp1486;
    VlWide<164>/*5247:0*/ __Vtemp1487;
    VlWide<168>/*5375:0*/ __Vtemp1488;
    VlWide<172>/*5503:0*/ __Vtemp1489;
    VlWide<176>/*5631:0*/ __Vtemp1490;
    VlWide<180>/*5759:0*/ __Vtemp1491;
    VlWide<184>/*5887:0*/ __Vtemp1492;
    VlWide<188>/*6015:0*/ __Vtemp1493;
    VlWide<192>/*6143:0*/ __Vtemp1494;
    VlWide<196>/*6271:0*/ __Vtemp1495;
    VlWide<200>/*6399:0*/ __Vtemp1496;
    VlWide<204>/*6527:0*/ __Vtemp1497;
    VlWide<208>/*6655:0*/ __Vtemp1498;
    VlWide<212>/*6783:0*/ __Vtemp1499;
    VlWide<216>/*6911:0*/ __Vtemp1500;
    VlWide<220>/*7039:0*/ __Vtemp1501;
    VlWide<224>/*7167:0*/ __Vtemp1502;
    VlWide<228>/*7295:0*/ __Vtemp1503;
    VlWide<232>/*7423:0*/ __Vtemp1504;
    VlWide<236>/*7551:0*/ __Vtemp1505;
    VlWide<240>/*7679:0*/ __Vtemp1506;
    VlWide<244>/*7807:0*/ __Vtemp1507;
    VlWide<248>/*7935:0*/ __Vtemp1508;
    VlWide<252>/*8063:0*/ __Vtemp1509;
    VlWide<256>/*8191:0*/ __Vtemp1510;
    VlWide<64>/*2047:0*/ __Vtemp1526;
    VlWide<68>/*2175:0*/ __Vtemp1527;
    VlWide<72>/*2303:0*/ __Vtemp1528;
    VlWide<76>/*2431:0*/ __Vtemp1529;
    VlWide<80>/*2559:0*/ __Vtemp1530;
    VlWide<84>/*2687:0*/ __Vtemp1531;
    VlWide<88>/*2815:0*/ __Vtemp1532;
    VlWide<92>/*2943:0*/ __Vtemp1533;
    VlWide<96>/*3071:0*/ __Vtemp1534;
    VlWide<100>/*3199:0*/ __Vtemp1535;
    VlWide<104>/*3327:0*/ __Vtemp1536;
    VlWide<108>/*3455:0*/ __Vtemp1537;
    VlWide<112>/*3583:0*/ __Vtemp1538;
    VlWide<116>/*3711:0*/ __Vtemp1539;
    VlWide<120>/*3839:0*/ __Vtemp1540;
    VlWide<124>/*3967:0*/ __Vtemp1541;
    VlWide<128>/*4095:0*/ __Vtemp1542;
    VlWide<132>/*4223:0*/ __Vtemp1543;
    VlWide<136>/*4351:0*/ __Vtemp1544;
    VlWide<140>/*4479:0*/ __Vtemp1545;
    VlWide<144>/*4607:0*/ __Vtemp1546;
    VlWide<148>/*4735:0*/ __Vtemp1547;
    VlWide<152>/*4863:0*/ __Vtemp1548;
    VlWide<156>/*4991:0*/ __Vtemp1549;
    VlWide<160>/*5119:0*/ __Vtemp1550;
    VlWide<164>/*5247:0*/ __Vtemp1551;
    VlWide<168>/*5375:0*/ __Vtemp1552;
    VlWide<172>/*5503:0*/ __Vtemp1553;
    VlWide<176>/*5631:0*/ __Vtemp1554;
    VlWide<180>/*5759:0*/ __Vtemp1555;
    VlWide<184>/*5887:0*/ __Vtemp1556;
    VlWide<188>/*6015:0*/ __Vtemp1557;
    VlWide<192>/*6143:0*/ __Vtemp1558;
    VlWide<196>/*6271:0*/ __Vtemp1559;
    VlWide<200>/*6399:0*/ __Vtemp1560;
    VlWide<204>/*6527:0*/ __Vtemp1561;
    VlWide<208>/*6655:0*/ __Vtemp1562;
    VlWide<212>/*6783:0*/ __Vtemp1563;
    VlWide<216>/*6911:0*/ __Vtemp1564;
    VlWide<220>/*7039:0*/ __Vtemp1565;
    VlWide<224>/*7167:0*/ __Vtemp1566;
    VlWide<228>/*7295:0*/ __Vtemp1567;
    VlWide<232>/*7423:0*/ __Vtemp1568;
    VlWide<236>/*7551:0*/ __Vtemp1569;
    VlWide<240>/*7679:0*/ __Vtemp1570;
    VlWide<244>/*7807:0*/ __Vtemp1571;
    VlWide<248>/*7935:0*/ __Vtemp1572;
    VlWide<252>/*8063:0*/ __Vtemp1573;
    VlWide<256>/*8191:0*/ __Vtemp1574;
    VlWide<64>/*2047:0*/ __Vtemp1590;
    VlWide<68>/*2175:0*/ __Vtemp1591;
    VlWide<72>/*2303:0*/ __Vtemp1592;
    VlWide<76>/*2431:0*/ __Vtemp1593;
    VlWide<80>/*2559:0*/ __Vtemp1594;
    VlWide<84>/*2687:0*/ __Vtemp1595;
    VlWide<88>/*2815:0*/ __Vtemp1596;
    VlWide<92>/*2943:0*/ __Vtemp1597;
    VlWide<96>/*3071:0*/ __Vtemp1598;
    VlWide<100>/*3199:0*/ __Vtemp1599;
    VlWide<104>/*3327:0*/ __Vtemp1600;
    VlWide<108>/*3455:0*/ __Vtemp1601;
    VlWide<112>/*3583:0*/ __Vtemp1602;
    VlWide<116>/*3711:0*/ __Vtemp1603;
    VlWide<120>/*3839:0*/ __Vtemp1604;
    VlWide<124>/*3967:0*/ __Vtemp1605;
    VlWide<128>/*4095:0*/ __Vtemp1606;
    VlWide<132>/*4223:0*/ __Vtemp1607;
    VlWide<136>/*4351:0*/ __Vtemp1608;
    VlWide<140>/*4479:0*/ __Vtemp1609;
    VlWide<144>/*4607:0*/ __Vtemp1610;
    VlWide<148>/*4735:0*/ __Vtemp1611;
    VlWide<152>/*4863:0*/ __Vtemp1612;
    VlWide<156>/*4991:0*/ __Vtemp1613;
    VlWide<160>/*5119:0*/ __Vtemp1614;
    VlWide<164>/*5247:0*/ __Vtemp1615;
    VlWide<168>/*5375:0*/ __Vtemp1616;
    VlWide<172>/*5503:0*/ __Vtemp1617;
    VlWide<176>/*5631:0*/ __Vtemp1618;
    VlWide<180>/*5759:0*/ __Vtemp1619;
    VlWide<184>/*5887:0*/ __Vtemp1620;
    VlWide<188>/*6015:0*/ __Vtemp1621;
    VlWide<192>/*6143:0*/ __Vtemp1622;
    VlWide<196>/*6271:0*/ __Vtemp1623;
    VlWide<200>/*6399:0*/ __Vtemp1624;
    VlWide<204>/*6527:0*/ __Vtemp1625;
    VlWide<208>/*6655:0*/ __Vtemp1626;
    VlWide<212>/*6783:0*/ __Vtemp1627;
    VlWide<216>/*6911:0*/ __Vtemp1628;
    VlWide<220>/*7039:0*/ __Vtemp1629;
    VlWide<224>/*7167:0*/ __Vtemp1630;
    VlWide<228>/*7295:0*/ __Vtemp1631;
    VlWide<232>/*7423:0*/ __Vtemp1632;
    VlWide<236>/*7551:0*/ __Vtemp1633;
    VlWide<240>/*7679:0*/ __Vtemp1634;
    VlWide<244>/*7807:0*/ __Vtemp1635;
    VlWide<248>/*7935:0*/ __Vtemp1636;
    VlWide<252>/*8063:0*/ __Vtemp1637;
    VlWide<256>/*8191:0*/ __Vtemp1638;
    VlWide<8>/*255:0*/ __Vtemp1642;
    VlWide<8>/*255:0*/ __Vtemp1645;
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
    __Vtemp952[1U] = (IData)((((QData)((IData)((((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_63) 
                                                 << 0x1eU) 
                                                | (((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_62) 
                                                    << 0x1cU) 
                                                   | (((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_61) 
                                                       << 0x1aU) 
                                                      | (((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_60) 
                                                          << 0x18U) 
                                                         | (((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_59) 
                                                             << 0x16U) 
                                                            | (((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_58) 
                                                                << 0x14U) 
                                                               | (((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_57) 
                                                                   << 0x12U) 
                                                                  | (((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_56) 
                                                                      << 0x10U) 
                                                                     | (((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_55) 
                                                                         << 0xeU) 
                                                                        | (((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_54) 
                                                                            << 0xcU) 
                                                                           | (((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_53) 
                                                                               << 0xaU) 
                                                                              | (((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_52) 
                                                                                << 8U) 
                                                                                | (((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_51) 
                                                                                << 6U) 
                                                                                | (((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_50) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_49) 
                                                                                << 2U) 
                                                                                | (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_48)))))))))))))))))) 
                               << 0x20U) | (QData)((IData)(
                                                           (((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_47) 
                                                             << 0x1eU) 
                                                            | (((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_46) 
                                                                << 0x1cU) 
                                                               | (((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_45) 
                                                                   << 0x1aU) 
                                                                  | (((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_44) 
                                                                      << 0x18U) 
                                                                     | (((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_43) 
                                                                         << 0x16U) 
                                                                        | (((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_42) 
                                                                            << 0x14U) 
                                                                           | (((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_41) 
                                                                               << 0x12U) 
                                                                              | (((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_40) 
                                                                                << 0x10U) 
                                                                                | (((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_39) 
                                                                                << 0xeU) 
                                                                                | (((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_38) 
                                                                                << 0xcU) 
                                                                                | (((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_37) 
                                                                                << 0xaU) 
                                                                                | (((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_36) 
                                                                                << 8U) 
                                                                                | (((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_35) 
                                                                                << 6U) 
                                                                                | (((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_34) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_33) 
                                                                                << 2U) 
                                                                                | (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_32))))))))))))))))))));
    __Vtemp952[2U] = (IData)(((((QData)((IData)((((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_63) 
                                                  << 0x1eU) 
                                                 | (((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_62) 
                                                     << 0x1cU) 
                                                    | (((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_61) 
                                                        << 0x1aU) 
                                                       | (((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_60) 
                                                           << 0x18U) 
                                                          | (((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_59) 
                                                              << 0x16U) 
                                                             | (((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_58) 
                                                                 << 0x14U) 
                                                                | (((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_57) 
                                                                    << 0x12U) 
                                                                   | (((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_56) 
                                                                       << 0x10U) 
                                                                      | (((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_55) 
                                                                          << 0xeU) 
                                                                         | (((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_54) 
                                                                             << 0xcU) 
                                                                            | (((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_53) 
                                                                                << 0xaU) 
                                                                               | (((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_52) 
                                                                                << 8U) 
                                                                                | (((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_51) 
                                                                                << 6U) 
                                                                                | (((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_50) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_49) 
                                                                                << 2U) 
                                                                                | (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_48)))))))))))))))))) 
                                << 0x20U) | (QData)((IData)(
                                                            (((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_47) 
                                                              << 0x1eU) 
                                                             | (((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_46) 
                                                                 << 0x1cU) 
                                                                | (((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_45) 
                                                                    << 0x1aU) 
                                                                   | (((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_44) 
                                                                       << 0x18U) 
                                                                      | (((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_43) 
                                                                          << 0x16U) 
                                                                         | (((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_42) 
                                                                             << 0x14U) 
                                                                            | (((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_41) 
                                                                                << 0x12U) 
                                                                               | (((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_40) 
                                                                                << 0x10U) 
                                                                                | (((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_39) 
                                                                                << 0xeU) 
                                                                                | (((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_38) 
                                                                                << 0xcU) 
                                                                                | (((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_37) 
                                                                                << 0xaU) 
                                                                                | (((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_36) 
                                                                                << 8U) 
                                                                                | (((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_35) 
                                                                                << 6U) 
                                                                                | (((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_34) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_33) 
                                                                                << 2U) 
                                                                                | (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_32))))))))))))))))))) 
                              >> 0x20U));
    riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___GEN[0U] 
        = (((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_15) 
            << 0x1eU) | (((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_14) 
                          << 0x1cU) | (((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_13) 
                                        << 0x1aU) | 
                                       (((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_12) 
                                         << 0x18U) 
                                        | (((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_11) 
                                            << 0x16U) 
                                           | (((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_10) 
                                               << 0x14U) 
                                              | (((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_9) 
                                                  << 0x12U) 
                                                 | (((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_8) 
                                                     << 0x10U) 
                                                    | (((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_7) 
                                                        << 0xeU) 
                                                       | (((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_6) 
                                                           << 0xcU) 
                                                          | (((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_5) 
                                                              << 0xaU) 
                                                             | (((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_4) 
                                                                 << 8U) 
                                                                | (((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_3) 
                                                                    << 6U) 
                                                                   | (((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_2) 
                                                                       << 4U) 
                                                                      | (((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_1) 
                                                                          << 2U) 
                                                                         | (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_0))))))))))))))));
    riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___GEN[1U] 
        = (((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_31) 
            << 0x1eU) | (((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_30) 
                          << 0x1cU) | (((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_29) 
                                        << 0x1aU) | 
                                       (((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_28) 
                                         << 0x18U) 
                                        | (((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_27) 
                                            << 0x16U) 
                                           | (((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_26) 
                                               << 0x14U) 
                                              | (((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_25) 
                                                  << 0x12U) 
                                                 | (((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_24) 
                                                     << 0x10U) 
                                                    | (((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_23) 
                                                        << 0xeU) 
                                                       | (((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_22) 
                                                           << 0xcU) 
                                                          | (((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_21) 
                                                              << 0xaU) 
                                                             | (((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_20) 
                                                                 << 8U) 
                                                                | (((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_19) 
                                                                    << 6U) 
                                                                   | (((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_18) 
                                                                       << 4U) 
                                                                      | (((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_17) 
                                                                          << 2U) 
                                                                         | (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_16))))))))))))))));
    riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___GEN[2U] 
        = __Vtemp952[1U];
    riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___GEN[3U] 
        = __Vtemp952[2U];
    __Vtemp954[1U] = (IData)((((QData)((IData)((((- (IData)(
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
    __Vtemp954[2U] = (IData)(((((QData)((IData)((((- (IData)(
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
        = __Vtemp954[1U];
    vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__cache_mask[3U] 
        = __Vtemp954[2U];
    vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___w_r_pass1_val_T 
        = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_temp_r_index) 
           == (0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                >> 4U))));
    vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram0_write 
        = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_write) 
           & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_chosen_tag)));
    vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram2_write 
        = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_write) 
           & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_chosen_tag));
    vlSelf->riscv_soc__DOT__core__DOT___cross_bar_1_io_fetch_cpu_data_bits_data 
        = ((0U != (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0 
                   >> 0x1fU)) ? vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_rdata
            : vlSelf->riscv_soc__DOT___axi_ram_io_ram_bus_r_bits_rdata);
    __Vtemp970[0U] = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_48[0U];
    __Vtemp970[1U] = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_48[1U];
    __Vtemp970[2U] = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_48[2U];
    __Vtemp970[3U] = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_48[3U];
    __Vtemp970[4U] = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_49[0U];
    __Vtemp970[5U] = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_49[1U];
    __Vtemp970[6U] = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_49[2U];
    __Vtemp970[7U] = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_49[3U];
    __Vtemp970[8U] = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_50[0U];
    __Vtemp970[9U] = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_50[1U];
    __Vtemp970[0xaU] = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_50[2U];
    __Vtemp970[0xbU] = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_50[3U];
    __Vtemp970[0xcU] = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_51[0U];
    __Vtemp970[0xdU] = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_51[1U];
    __Vtemp970[0xeU] = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_51[2U];
    __Vtemp970[0xfU] = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_51[3U];
    __Vtemp970[0x10U] = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_52[0U];
    __Vtemp970[0x11U] = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_52[1U];
    __Vtemp970[0x12U] = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_52[2U];
    __Vtemp970[0x13U] = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_52[3U];
    __Vtemp970[0x14U] = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_53[0U];
    __Vtemp970[0x15U] = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_53[1U];
    __Vtemp970[0x16U] = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_53[2U];
    __Vtemp970[0x17U] = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_53[3U];
    __Vtemp970[0x18U] = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_54[0U];
    __Vtemp970[0x19U] = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_54[1U];
    __Vtemp970[0x1aU] = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_54[2U];
    __Vtemp970[0x1bU] = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_54[3U];
    __Vtemp970[0x1cU] = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_55[0U];
    __Vtemp970[0x1dU] = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_55[1U];
    __Vtemp970[0x1eU] = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_55[2U];
    __Vtemp970[0x1fU] = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_55[3U];
    __Vtemp970[0x20U] = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_56[0U];
    __Vtemp970[0x21U] = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_56[1U];
    __Vtemp970[0x22U] = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_56[2U];
    __Vtemp970[0x23U] = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_56[3U];
    __Vtemp970[0x24U] = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_57[0U];
    __Vtemp970[0x25U] = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_57[1U];
    __Vtemp970[0x26U] = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_57[2U];
    __Vtemp970[0x27U] = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_57[3U];
    __Vtemp970[0x28U] = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_58[0U];
    __Vtemp970[0x29U] = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_58[1U];
    __Vtemp970[0x2aU] = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_58[2U];
    __Vtemp970[0x2bU] = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_58[3U];
    __Vtemp970[0x2cU] = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_59[0U];
    __Vtemp970[0x2dU] = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_59[1U];
    __Vtemp970[0x2eU] = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_59[2U];
    __Vtemp970[0x2fU] = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_59[3U];
    __Vtemp970[0x30U] = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_60[0U];
    __Vtemp970[0x31U] = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_60[1U];
    __Vtemp970[0x32U] = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_60[2U];
    __Vtemp970[0x33U] = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_60[3U];
    __Vtemp970[0x34U] = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_61[0U];
    __Vtemp970[0x35U] = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_61[1U];
    __Vtemp970[0x36U] = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_61[2U];
    __Vtemp970[0x37U] = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_61[3U];
    __Vtemp970[0x38U] = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_62[0U];
    __Vtemp970[0x39U] = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_62[1U];
    __Vtemp970[0x3aU] = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_62[2U];
    __Vtemp970[0x3bU] = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_62[3U];
    __Vtemp970[0x3cU] = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_63[0U];
    __Vtemp970[0x3dU] = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_63[1U];
    __Vtemp970[0x3eU] = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_63[2U];
    __Vtemp970[0x3fU] = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_63[3U];
    VL_CONCAT_WWW(2176,2048,128, __Vtemp971, __Vtemp970, vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_47);
    VL_CONCAT_WWW(2304,2176,128, __Vtemp972, __Vtemp971, vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_46);
    VL_CONCAT_WWW(2432,2304,128, __Vtemp973, __Vtemp972, vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_45);
    VL_CONCAT_WWW(2560,2432,128, __Vtemp974, __Vtemp973, vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_44);
    VL_CONCAT_WWW(2688,2560,128, __Vtemp975, __Vtemp974, vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_43);
    VL_CONCAT_WWW(2816,2688,128, __Vtemp976, __Vtemp975, vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_42);
    VL_CONCAT_WWW(2944,2816,128, __Vtemp977, __Vtemp976, vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_41);
    VL_CONCAT_WWW(3072,2944,128, __Vtemp978, __Vtemp977, vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_40);
    VL_CONCAT_WWW(3200,3072,128, __Vtemp979, __Vtemp978, vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_39);
    VL_CONCAT_WWW(3328,3200,128, __Vtemp980, __Vtemp979, vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_38);
    VL_CONCAT_WWW(3456,3328,128, __Vtemp981, __Vtemp980, vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_37);
    VL_CONCAT_WWW(3584,3456,128, __Vtemp982, __Vtemp981, vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_36);
    VL_CONCAT_WWW(3712,3584,128, __Vtemp983, __Vtemp982, vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_35);
    VL_CONCAT_WWW(3840,3712,128, __Vtemp984, __Vtemp983, vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_34);
    VL_CONCAT_WWW(3968,3840,128, __Vtemp985, __Vtemp984, vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_33);
    VL_CONCAT_WWW(4096,3968,128, __Vtemp986, __Vtemp985, vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_32);
    VL_CONCAT_WWW(4224,4096,128, __Vtemp987, __Vtemp986, vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_31);
    VL_CONCAT_WWW(4352,4224,128, __Vtemp988, __Vtemp987, vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_30);
    VL_CONCAT_WWW(4480,4352,128, __Vtemp989, __Vtemp988, vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_29);
    VL_CONCAT_WWW(4608,4480,128, __Vtemp990, __Vtemp989, vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_28);
    VL_CONCAT_WWW(4736,4608,128, __Vtemp991, __Vtemp990, vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_27);
    VL_CONCAT_WWW(4864,4736,128, __Vtemp992, __Vtemp991, vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_26);
    VL_CONCAT_WWW(4992,4864,128, __Vtemp993, __Vtemp992, vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_25);
    VL_CONCAT_WWW(5120,4992,128, __Vtemp994, __Vtemp993, vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_24);
    VL_CONCAT_WWW(5248,5120,128, __Vtemp995, __Vtemp994, vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_23);
    VL_CONCAT_WWW(5376,5248,128, __Vtemp996, __Vtemp995, vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_22);
    VL_CONCAT_WWW(5504,5376,128, __Vtemp997, __Vtemp996, vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_21);
    VL_CONCAT_WWW(5632,5504,128, __Vtemp998, __Vtemp997, vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_20);
    VL_CONCAT_WWW(5760,5632,128, __Vtemp999, __Vtemp998, vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_19);
    VL_CONCAT_WWW(5888,5760,128, __Vtemp1000, __Vtemp999, vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_18);
    VL_CONCAT_WWW(6016,5888,128, __Vtemp1001, __Vtemp1000, vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_17);
    VL_CONCAT_WWW(6144,6016,128, __Vtemp1002, __Vtemp1001, vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_16);
    VL_CONCAT_WWW(6272,6144,128, __Vtemp1003, __Vtemp1002, vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_15);
    VL_CONCAT_WWW(6400,6272,128, __Vtemp1004, __Vtemp1003, vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_14);
    VL_CONCAT_WWW(6528,6400,128, __Vtemp1005, __Vtemp1004, vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_13);
    VL_CONCAT_WWW(6656,6528,128, __Vtemp1006, __Vtemp1005, vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_12);
    VL_CONCAT_WWW(6784,6656,128, __Vtemp1007, __Vtemp1006, vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_11);
    VL_CONCAT_WWW(6912,6784,128, __Vtemp1008, __Vtemp1007, vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_10);
    VL_CONCAT_WWW(7040,6912,128, __Vtemp1009, __Vtemp1008, vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_9);
    VL_CONCAT_WWW(7168,7040,128, __Vtemp1010, __Vtemp1009, vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_8);
    VL_CONCAT_WWW(7296,7168,128, __Vtemp1011, __Vtemp1010, vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_7);
    VL_CONCAT_WWW(7424,7296,128, __Vtemp1012, __Vtemp1011, vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_6);
    VL_CONCAT_WWW(7552,7424,128, __Vtemp1013, __Vtemp1012, vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_5);
    VL_CONCAT_WWW(7680,7552,128, __Vtemp1014, __Vtemp1013, vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_4);
    VL_CONCAT_WWW(7808,7680,128, __Vtemp1015, __Vtemp1014, vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_3);
    VL_CONCAT_WWW(7936,7808,128, __Vtemp1016, __Vtemp1015, vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_2);
    VL_CONCAT_WWW(8064,7936,128, __Vtemp1017, __Vtemp1016, vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_1);
    VL_CONCAT_WWW(8192,8064,128, __Vtemp1018, __Vtemp1017, vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_0);
    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___GEN_3[0U] 
        = __Vtemp1018[(0xfcU & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0 
                                         >> 3U)) << 2U))];
    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___GEN_3[1U] 
        = __Vtemp1018[((IData)(1U) + (0xfcU & ((IData)(
                                                       (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0 
                                                        >> 3U)) 
                                               << 2U)))];
    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___GEN_3[2U] 
        = __Vtemp1018[((IData)(2U) + (0xfcU & ((IData)(
                                                       (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0 
                                                        >> 3U)) 
                                               << 2U)))];
    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___GEN_3[3U] 
        = __Vtemp1018[((IData)(3U) + (0xfcU & ((IData)(
                                                       (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0 
                                                        >> 3U)) 
                                               << 2U)))];
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
    __Vtemp1052[0U] = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_0;
    __Vtemp1052[1U] = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_1;
    __Vtemp1052[2U] = (IData)((((QData)((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_3)) 
                                << 0x20U) | (QData)((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_2))));
    __Vtemp1052[3U] = (IData)(((((QData)((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_3)) 
                                 << 0x20U) | (QData)((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_2))) 
                               >> 0x20U));
    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT___GEN_4 
        = (((0U == (0x1fU & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__reg_tail) 
                             << 5U))) ? 0U : (__Vtemp1052[
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
           | (__Vtemp1052[(3U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__reg_tail))] 
              >> (0x1fU & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__reg_tail) 
                           << 5U))));
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__ready 
        = (((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_ready) 
            & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_ready)) 
           & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_ready));
    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___GEN_0 
        = (3U & (((0U == (0x1eU & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                            >> 3U)) 
                                   << 1U))) ? 0U : 
                  (riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___GEN[
                   (((IData)(1U) + (0x7eU & ((IData)(
                                                     (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                                      >> 3U)) 
                                             << 1U))) 
                    >> 5U)] << ((IData)(0x20U) - (0x1eU 
                                                  & ((IData)(
                                                             (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                                              >> 3U)) 
                                                     << 1U))))) 
                 | (riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___GEN[
                    (3U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                    >> 3U)) >> 4U))] 
                    >> (0x1eU & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                          >> 3U)) << 1U)))));
    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__pre_valid 
        = (((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___GEN_3[3U] 
             >> 0x1aU) & ((0xffffffffffffffULL & (((QData)((IData)(
                                                                   vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___GEN_3[3U])) 
                                                   << 0x1eU) 
                                                  | ((QData)((IData)(
                                                                     vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___GEN_3[2U])) 
                                                     >> 2U))) 
                          == ((0xfffffffffffffeULL 
                               & (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0 
                                  >> 8U)) | (QData)((IData)(
                                                            (1U 
                                                             & (IData)(
                                                                       (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0 
                                                                        >> 2U)))))))) 
           & (riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___GEN[
              (3U & (((IData)(1U) + (0x7eU & ((IData)(
                                                      (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0 
                                                       >> 3U)) 
                                              << 1U))) 
                     >> 5U))] >> (0x1fU & ((IData)(1U) 
                                           + (0x7eU 
                                              & ((IData)(
                                                         (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0 
                                                          >> 3U)) 
                                                 << 1U))))));
    riscv_soc__DOT__core__DOT__execute__DOT__valid 
        = ((4U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_opType))
            ? 8U : (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT___GEN));
    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vcellinp__ibuf__io_cache_buf_bits_inst 
        = ((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT___cross_bar_1_io_fetch_cpu_data_bits_pc 
                          >> 2U))) ? (IData)((vlSelf->riscv_soc__DOT__core__DOT___cross_bar_1_io_fetch_cpu_data_bits_data 
                                              >> 0x20U))
            : (IData)(vlSelf->riscv_soc__DOT__core__DOT___cross_bar_1_io_fetch_cpu_data_bits_data));
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
    __Vtemp1057[0U] = (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__RAS_0);
    __Vtemp1057[1U] = (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__RAS_0 
                               >> 0x20U));
    __Vtemp1057[2U] = (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__RAS_1);
    __Vtemp1057[3U] = (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__RAS_1 
                               >> 0x20U));
    __Vtemp1057[4U] = (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__RAS_2);
    __Vtemp1057[5U] = (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__RAS_2 
                               >> 0x20U));
    __Vtemp1057[6U] = (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__RAS_3);
    __Vtemp1057[7U] = (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__RAS_3 
                               >> 0x20U));
    __Vtemp1057[8U] = (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__RAS_4);
    __Vtemp1057[9U] = (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__RAS_4 
                               >> 0x20U));
    __Vtemp1057[0xaU] = (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__RAS_5);
    __Vtemp1057[0xbU] = (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__RAS_5 
                                 >> 0x20U));
    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT___br_predictor_io_pre_next_pc 
        = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__pre_valid)
            ? ((2U == (3U & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___GEN_3[0U]))
                ? ((5U < (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__reg_head))
                    ? vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__RAS_0
                    : ((0x17fU >= (0x1ffU & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__reg_head) 
                                             << 6U)))
                        ? (((QData)((IData)(__Vtemp1057[
                                            (((IData)(0x3fU) 
                                              + (0x1ffU 
                                                 & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__reg_head) 
                                                    << 6U))) 
                                             >> 5U)])) 
                            << ((0U == (0x1fU & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__reg_head) 
                                                 << 6U)))
                                 ? 0x20U : ((IData)(0x40U) 
                                            - (0x1fU 
                                               & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__reg_head) 
                                                  << 6U))))) 
                           | (((0U == (0x1fU & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__reg_head) 
                                                << 6U)))
                                ? 0ULL : ((QData)((IData)(
                                                          __Vtemp1057[
                                                          (((IData)(0x1fU) 
                                                            + 
                                                            (0x1ffU 
                                                             & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__reg_head) 
                                                                << 6U))) 
                                                           >> 5U)])) 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__reg_head) 
                                                    << 6U))))) 
                              | ((QData)((IData)(__Vtemp1057[
                                                 (0xeU 
                                                  & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__reg_head) 
                                                     << 1U))])) 
                                 >> (0x1fU & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__reg_head) 
                                              << 6U)))))
                        : 0ULL)) : (((QData)((IData)(
                                                     vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___GEN_3[2U])) 
                                     << 0x3eU) | (((QData)((IData)(
                                                                   vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___GEN_3[1U])) 
                                                   << 0x1eU) 
                                                  | ((QData)((IData)(
                                                                     vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___GEN_3[0U])) 
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
    VL_EXTEND_WQ(127,64, __Vtemp1059, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__rs2_data);
    VL_EXTEND_WI(124,3, __Vtemp1060, (7U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__mem_addr)));
    __Vtemp1061[0U] = (__Vtemp1060[0U] << 3U);
    __Vtemp1061[1U] = ((__Vtemp1060[0U] >> 0x1dU) | 
                       (__Vtemp1060[1U] << 3U));
    __Vtemp1061[2U] = ((__Vtemp1060[1U] >> 0x1dU) | 
                       (__Vtemp1060[2U] << 3U));
    __Vtemp1061[3U] = ((__Vtemp1060[2U] >> 0x1dU) | 
                       (__Vtemp1060[3U] << 3U));
    VL_SHIFTL_WWW(127,127,127, __Vtemp1062, __Vtemp1059, __Vtemp1061);
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__mem_w_data[0U] 
        = __Vtemp1062[0U];
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__mem_w_data[1U] 
        = __Vtemp1062[1U];
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__mem_w_data[2U] 
        = __Vtemp1062[2U];
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__mem_w_data[3U] 
        = (0x7fffffffU & __Vtemp1062[3U]);
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
    VL_EXTEND_WQ(65,64, __Vtemp1065, riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__rs1_data);
    VL_EXTEND_WQ(65,64, __Vtemp1066, ((- (QData)((IData)(
                                                         (1U 
                                                          == 
                                                          (3U 
                                                           & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                                              >> 5U)))))) 
                                      ^ riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__rs2_data));
    VL_ADD_W(3, __Vtemp1067, __Vtemp1065, __Vtemp1066);
    VL_EXTEND_WI(65,1, __Vtemp1068, (1U == (3U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                                  >> 5U))));
    VL_ADD_W(3, __Vtemp1069, __Vtemp1067, __Vtemp1068);
    riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___GEN[0U] 
        = __Vtemp1069[0U];
    riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___GEN[1U] 
        = __Vtemp1069[1U];
    riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___GEN[2U] 
        = (1U & __Vtemp1069[2U]);
    vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__w_r_pass0_val 
        = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram0_write) 
           & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___w_r_pass1_val_T));
    vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__w_r_pass1_val 
        = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram1_write) 
           & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___w_r_pass1_val_T));
    __Vtemp1085[0U] = vlSelf->riscv_soc__DOT__sram0__DOT__sram_48[0U];
    __Vtemp1085[1U] = vlSelf->riscv_soc__DOT__sram0__DOT__sram_48[1U];
    __Vtemp1085[2U] = vlSelf->riscv_soc__DOT__sram0__DOT__sram_48[2U];
    __Vtemp1085[3U] = vlSelf->riscv_soc__DOT__sram0__DOT__sram_48[3U];
    __Vtemp1085[4U] = vlSelf->riscv_soc__DOT__sram0__DOT__sram_49[0U];
    __Vtemp1085[5U] = vlSelf->riscv_soc__DOT__sram0__DOT__sram_49[1U];
    __Vtemp1085[6U] = vlSelf->riscv_soc__DOT__sram0__DOT__sram_49[2U];
    __Vtemp1085[7U] = vlSelf->riscv_soc__DOT__sram0__DOT__sram_49[3U];
    __Vtemp1085[8U] = vlSelf->riscv_soc__DOT__sram0__DOT__sram_50[0U];
    __Vtemp1085[9U] = vlSelf->riscv_soc__DOT__sram0__DOT__sram_50[1U];
    __Vtemp1085[0xaU] = vlSelf->riscv_soc__DOT__sram0__DOT__sram_50[2U];
    __Vtemp1085[0xbU] = vlSelf->riscv_soc__DOT__sram0__DOT__sram_50[3U];
    __Vtemp1085[0xcU] = vlSelf->riscv_soc__DOT__sram0__DOT__sram_51[0U];
    __Vtemp1085[0xdU] = vlSelf->riscv_soc__DOT__sram0__DOT__sram_51[1U];
    __Vtemp1085[0xeU] = vlSelf->riscv_soc__DOT__sram0__DOT__sram_51[2U];
    __Vtemp1085[0xfU] = vlSelf->riscv_soc__DOT__sram0__DOT__sram_51[3U];
    __Vtemp1085[0x10U] = vlSelf->riscv_soc__DOT__sram0__DOT__sram_52[0U];
    __Vtemp1085[0x11U] = vlSelf->riscv_soc__DOT__sram0__DOT__sram_52[1U];
    __Vtemp1085[0x12U] = vlSelf->riscv_soc__DOT__sram0__DOT__sram_52[2U];
    __Vtemp1085[0x13U] = vlSelf->riscv_soc__DOT__sram0__DOT__sram_52[3U];
    __Vtemp1085[0x14U] = vlSelf->riscv_soc__DOT__sram0__DOT__sram_53[0U];
    __Vtemp1085[0x15U] = vlSelf->riscv_soc__DOT__sram0__DOT__sram_53[1U];
    __Vtemp1085[0x16U] = vlSelf->riscv_soc__DOT__sram0__DOT__sram_53[2U];
    __Vtemp1085[0x17U] = vlSelf->riscv_soc__DOT__sram0__DOT__sram_53[3U];
    __Vtemp1085[0x18U] = vlSelf->riscv_soc__DOT__sram0__DOT__sram_54[0U];
    __Vtemp1085[0x19U] = vlSelf->riscv_soc__DOT__sram0__DOT__sram_54[1U];
    __Vtemp1085[0x1aU] = vlSelf->riscv_soc__DOT__sram0__DOT__sram_54[2U];
    __Vtemp1085[0x1bU] = vlSelf->riscv_soc__DOT__sram0__DOT__sram_54[3U];
    __Vtemp1085[0x1cU] = vlSelf->riscv_soc__DOT__sram0__DOT__sram_55[0U];
    __Vtemp1085[0x1dU] = vlSelf->riscv_soc__DOT__sram0__DOT__sram_55[1U];
    __Vtemp1085[0x1eU] = vlSelf->riscv_soc__DOT__sram0__DOT__sram_55[2U];
    __Vtemp1085[0x1fU] = vlSelf->riscv_soc__DOT__sram0__DOT__sram_55[3U];
    __Vtemp1085[0x20U] = vlSelf->riscv_soc__DOT__sram0__DOT__sram_56[0U];
    __Vtemp1085[0x21U] = vlSelf->riscv_soc__DOT__sram0__DOT__sram_56[1U];
    __Vtemp1085[0x22U] = vlSelf->riscv_soc__DOT__sram0__DOT__sram_56[2U];
    __Vtemp1085[0x23U] = vlSelf->riscv_soc__DOT__sram0__DOT__sram_56[3U];
    __Vtemp1085[0x24U] = vlSelf->riscv_soc__DOT__sram0__DOT__sram_57[0U];
    __Vtemp1085[0x25U] = vlSelf->riscv_soc__DOT__sram0__DOT__sram_57[1U];
    __Vtemp1085[0x26U] = vlSelf->riscv_soc__DOT__sram0__DOT__sram_57[2U];
    __Vtemp1085[0x27U] = vlSelf->riscv_soc__DOT__sram0__DOT__sram_57[3U];
    __Vtemp1085[0x28U] = vlSelf->riscv_soc__DOT__sram0__DOT__sram_58[0U];
    __Vtemp1085[0x29U] = vlSelf->riscv_soc__DOT__sram0__DOT__sram_58[1U];
    __Vtemp1085[0x2aU] = vlSelf->riscv_soc__DOT__sram0__DOT__sram_58[2U];
    __Vtemp1085[0x2bU] = vlSelf->riscv_soc__DOT__sram0__DOT__sram_58[3U];
    __Vtemp1085[0x2cU] = vlSelf->riscv_soc__DOT__sram0__DOT__sram_59[0U];
    __Vtemp1085[0x2dU] = vlSelf->riscv_soc__DOT__sram0__DOT__sram_59[1U];
    __Vtemp1085[0x2eU] = vlSelf->riscv_soc__DOT__sram0__DOT__sram_59[2U];
    __Vtemp1085[0x2fU] = vlSelf->riscv_soc__DOT__sram0__DOT__sram_59[3U];
    __Vtemp1085[0x30U] = vlSelf->riscv_soc__DOT__sram0__DOT__sram_60[0U];
    __Vtemp1085[0x31U] = vlSelf->riscv_soc__DOT__sram0__DOT__sram_60[1U];
    __Vtemp1085[0x32U] = vlSelf->riscv_soc__DOT__sram0__DOT__sram_60[2U];
    __Vtemp1085[0x33U] = vlSelf->riscv_soc__DOT__sram0__DOT__sram_60[3U];
    __Vtemp1085[0x34U] = vlSelf->riscv_soc__DOT__sram0__DOT__sram_61[0U];
    __Vtemp1085[0x35U] = vlSelf->riscv_soc__DOT__sram0__DOT__sram_61[1U];
    __Vtemp1085[0x36U] = vlSelf->riscv_soc__DOT__sram0__DOT__sram_61[2U];
    __Vtemp1085[0x37U] = vlSelf->riscv_soc__DOT__sram0__DOT__sram_61[3U];
    __Vtemp1085[0x38U] = vlSelf->riscv_soc__DOT__sram0__DOT__sram_62[0U];
    __Vtemp1085[0x39U] = vlSelf->riscv_soc__DOT__sram0__DOT__sram_62[1U];
    __Vtemp1085[0x3aU] = vlSelf->riscv_soc__DOT__sram0__DOT__sram_62[2U];
    __Vtemp1085[0x3bU] = vlSelf->riscv_soc__DOT__sram0__DOT__sram_62[3U];
    __Vtemp1085[0x3cU] = vlSelf->riscv_soc__DOT__sram0__DOT__sram_63[0U];
    __Vtemp1085[0x3dU] = vlSelf->riscv_soc__DOT__sram0__DOT__sram_63[1U];
    __Vtemp1085[0x3eU] = vlSelf->riscv_soc__DOT__sram0__DOT__sram_63[2U];
    __Vtemp1085[0x3fU] = vlSelf->riscv_soc__DOT__sram0__DOT__sram_63[3U];
    VL_CONCAT_WWW(2176,2048,128, __Vtemp1086, __Vtemp1085, vlSelf->riscv_soc__DOT__sram0__DOT__sram_47);
    VL_CONCAT_WWW(2304,2176,128, __Vtemp1087, __Vtemp1086, vlSelf->riscv_soc__DOT__sram0__DOT__sram_46);
    VL_CONCAT_WWW(2432,2304,128, __Vtemp1088, __Vtemp1087, vlSelf->riscv_soc__DOT__sram0__DOT__sram_45);
    VL_CONCAT_WWW(2560,2432,128, __Vtemp1089, __Vtemp1088, vlSelf->riscv_soc__DOT__sram0__DOT__sram_44);
    VL_CONCAT_WWW(2688,2560,128, __Vtemp1090, __Vtemp1089, vlSelf->riscv_soc__DOT__sram0__DOT__sram_43);
    VL_CONCAT_WWW(2816,2688,128, __Vtemp1091, __Vtemp1090, vlSelf->riscv_soc__DOT__sram0__DOT__sram_42);
    VL_CONCAT_WWW(2944,2816,128, __Vtemp1092, __Vtemp1091, vlSelf->riscv_soc__DOT__sram0__DOT__sram_41);
    VL_CONCAT_WWW(3072,2944,128, __Vtemp1093, __Vtemp1092, vlSelf->riscv_soc__DOT__sram0__DOT__sram_40);
    VL_CONCAT_WWW(3200,3072,128, __Vtemp1094, __Vtemp1093, vlSelf->riscv_soc__DOT__sram0__DOT__sram_39);
    VL_CONCAT_WWW(3328,3200,128, __Vtemp1095, __Vtemp1094, vlSelf->riscv_soc__DOT__sram0__DOT__sram_38);
    VL_CONCAT_WWW(3456,3328,128, __Vtemp1096, __Vtemp1095, vlSelf->riscv_soc__DOT__sram0__DOT__sram_37);
    VL_CONCAT_WWW(3584,3456,128, __Vtemp1097, __Vtemp1096, vlSelf->riscv_soc__DOT__sram0__DOT__sram_36);
    VL_CONCAT_WWW(3712,3584,128, __Vtemp1098, __Vtemp1097, vlSelf->riscv_soc__DOT__sram0__DOT__sram_35);
    VL_CONCAT_WWW(3840,3712,128, __Vtemp1099, __Vtemp1098, vlSelf->riscv_soc__DOT__sram0__DOT__sram_34);
    VL_CONCAT_WWW(3968,3840,128, __Vtemp1100, __Vtemp1099, vlSelf->riscv_soc__DOT__sram0__DOT__sram_33);
    VL_CONCAT_WWW(4096,3968,128, __Vtemp1101, __Vtemp1100, vlSelf->riscv_soc__DOT__sram0__DOT__sram_32);
    VL_CONCAT_WWW(4224,4096,128, __Vtemp1102, __Vtemp1101, vlSelf->riscv_soc__DOT__sram0__DOT__sram_31);
    VL_CONCAT_WWW(4352,4224,128, __Vtemp1103, __Vtemp1102, vlSelf->riscv_soc__DOT__sram0__DOT__sram_30);
    VL_CONCAT_WWW(4480,4352,128, __Vtemp1104, __Vtemp1103, vlSelf->riscv_soc__DOT__sram0__DOT__sram_29);
    VL_CONCAT_WWW(4608,4480,128, __Vtemp1105, __Vtemp1104, vlSelf->riscv_soc__DOT__sram0__DOT__sram_28);
    VL_CONCAT_WWW(4736,4608,128, __Vtemp1106, __Vtemp1105, vlSelf->riscv_soc__DOT__sram0__DOT__sram_27);
    VL_CONCAT_WWW(4864,4736,128, __Vtemp1107, __Vtemp1106, vlSelf->riscv_soc__DOT__sram0__DOT__sram_26);
    VL_CONCAT_WWW(4992,4864,128, __Vtemp1108, __Vtemp1107, vlSelf->riscv_soc__DOT__sram0__DOT__sram_25);
    VL_CONCAT_WWW(5120,4992,128, __Vtemp1109, __Vtemp1108, vlSelf->riscv_soc__DOT__sram0__DOT__sram_24);
    VL_CONCAT_WWW(5248,5120,128, __Vtemp1110, __Vtemp1109, vlSelf->riscv_soc__DOT__sram0__DOT__sram_23);
    VL_CONCAT_WWW(5376,5248,128, __Vtemp1111, __Vtemp1110, vlSelf->riscv_soc__DOT__sram0__DOT__sram_22);
    VL_CONCAT_WWW(5504,5376,128, __Vtemp1112, __Vtemp1111, vlSelf->riscv_soc__DOT__sram0__DOT__sram_21);
    VL_CONCAT_WWW(5632,5504,128, __Vtemp1113, __Vtemp1112, vlSelf->riscv_soc__DOT__sram0__DOT__sram_20);
    VL_CONCAT_WWW(5760,5632,128, __Vtemp1114, __Vtemp1113, vlSelf->riscv_soc__DOT__sram0__DOT__sram_19);
    VL_CONCAT_WWW(5888,5760,128, __Vtemp1115, __Vtemp1114, vlSelf->riscv_soc__DOT__sram0__DOT__sram_18);
    VL_CONCAT_WWW(6016,5888,128, __Vtemp1116, __Vtemp1115, vlSelf->riscv_soc__DOT__sram0__DOT__sram_17);
    VL_CONCAT_WWW(6144,6016,128, __Vtemp1117, __Vtemp1116, vlSelf->riscv_soc__DOT__sram0__DOT__sram_16);
    VL_CONCAT_WWW(6272,6144,128, __Vtemp1118, __Vtemp1117, vlSelf->riscv_soc__DOT__sram0__DOT__sram_15);
    VL_CONCAT_WWW(6400,6272,128, __Vtemp1119, __Vtemp1118, vlSelf->riscv_soc__DOT__sram0__DOT__sram_14);
    VL_CONCAT_WWW(6528,6400,128, __Vtemp1120, __Vtemp1119, vlSelf->riscv_soc__DOT__sram0__DOT__sram_13);
    VL_CONCAT_WWW(6656,6528,128, __Vtemp1121, __Vtemp1120, vlSelf->riscv_soc__DOT__sram0__DOT__sram_12);
    VL_CONCAT_WWW(6784,6656,128, __Vtemp1122, __Vtemp1121, vlSelf->riscv_soc__DOT__sram0__DOT__sram_11);
    VL_CONCAT_WWW(6912,6784,128, __Vtemp1123, __Vtemp1122, vlSelf->riscv_soc__DOT__sram0__DOT__sram_10);
    VL_CONCAT_WWW(7040,6912,128, __Vtemp1124, __Vtemp1123, vlSelf->riscv_soc__DOT__sram0__DOT__sram_9);
    VL_CONCAT_WWW(7168,7040,128, __Vtemp1125, __Vtemp1124, vlSelf->riscv_soc__DOT__sram0__DOT__sram_8);
    VL_CONCAT_WWW(7296,7168,128, __Vtemp1126, __Vtemp1125, vlSelf->riscv_soc__DOT__sram0__DOT__sram_7);
    VL_CONCAT_WWW(7424,7296,128, __Vtemp1127, __Vtemp1126, vlSelf->riscv_soc__DOT__sram0__DOT__sram_6);
    VL_CONCAT_WWW(7552,7424,128, __Vtemp1128, __Vtemp1127, vlSelf->riscv_soc__DOT__sram0__DOT__sram_5);
    VL_CONCAT_WWW(7680,7552,128, __Vtemp1129, __Vtemp1128, vlSelf->riscv_soc__DOT__sram0__DOT__sram_4);
    VL_CONCAT_WWW(7808,7680,128, __Vtemp1130, __Vtemp1129, vlSelf->riscv_soc__DOT__sram0__DOT__sram_3);
    VL_CONCAT_WWW(7936,7808,128, __Vtemp1131, __Vtemp1130, vlSelf->riscv_soc__DOT__sram0__DOT__sram_2);
    VL_CONCAT_WWW(8064,7936,128, __Vtemp1132, __Vtemp1131, vlSelf->riscv_soc__DOT__sram0__DOT__sram_1);
    VL_CONCAT_WWW(8192,8064,128, __Vtemp1133, __Vtemp1132, vlSelf->riscv_soc__DOT__sram0__DOT__sram_0);
    vlSelf->riscv_soc__DOT__sram0__DOT___GEN_1[0U] 
        = (((0U == (0x1fU & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram_addr) 
                             << 7U))) ? 0U : (__Vtemp1133[
                                              ((IData)(1U) 
                                               + (0xfcU 
                                                  & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram_addr) 
                                                     << 2U)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram_addr) 
                                                      << 7U))))) 
           | (__Vtemp1133[(0xfcU & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram_addr) 
                                    << 2U))] >> (0x1fU 
                                                 & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram_addr) 
                                                    << 7U))));
    vlSelf->riscv_soc__DOT__sram0__DOT___GEN_1[1U] 
        = (((0U == (0x1fU & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram_addr) 
                             << 7U))) ? 0U : (__Vtemp1133[
                                              ((IData)(2U) 
                                               + (0xfcU 
                                                  & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram_addr) 
                                                     << 2U)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram_addr) 
                                                      << 7U))))) 
           | (__Vtemp1133[((IData)(1U) + (0xfcU & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram_addr) 
                                                   << 2U)))] 
              >> (0x1fU & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram_addr) 
                           << 7U))));
    vlSelf->riscv_soc__DOT__sram0__DOT___GEN_1[2U] 
        = (((0U == (0x1fU & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram_addr) 
                             << 7U))) ? 0U : (__Vtemp1133[
                                              ((IData)(3U) 
                                               + (0xfcU 
                                                  & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram_addr) 
                                                     << 2U)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram_addr) 
                                                      << 7U))))) 
           | (__Vtemp1133[((IData)(2U) + (0xfcU & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram_addr) 
                                                   << 2U)))] 
              >> (0x1fU & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram_addr) 
                           << 7U))));
    vlSelf->riscv_soc__DOT__sram0__DOT___GEN_1[3U] 
        = (((0U == (0x1fU & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram_addr) 
                             << 7U))) ? 0U : (__Vtemp1133[
                                              ((IData)(4U) 
                                               + (0xfcU 
                                                  & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram_addr) 
                                                     << 2U)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram_addr) 
                                                      << 7U))))) 
           | (__Vtemp1133[((IData)(3U) + (0xfcU & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram_addr) 
                                                   << 2U)))] 
              >> (0x1fU & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram_addr) 
                           << 7U))));
    __Vtemp1149[0U] = vlSelf->riscv_soc__DOT__sram1__DOT__sram_48[0U];
    __Vtemp1149[1U] = vlSelf->riscv_soc__DOT__sram1__DOT__sram_48[1U];
    __Vtemp1149[2U] = vlSelf->riscv_soc__DOT__sram1__DOT__sram_48[2U];
    __Vtemp1149[3U] = vlSelf->riscv_soc__DOT__sram1__DOT__sram_48[3U];
    __Vtemp1149[4U] = vlSelf->riscv_soc__DOT__sram1__DOT__sram_49[0U];
    __Vtemp1149[5U] = vlSelf->riscv_soc__DOT__sram1__DOT__sram_49[1U];
    __Vtemp1149[6U] = vlSelf->riscv_soc__DOT__sram1__DOT__sram_49[2U];
    __Vtemp1149[7U] = vlSelf->riscv_soc__DOT__sram1__DOT__sram_49[3U];
    __Vtemp1149[8U] = vlSelf->riscv_soc__DOT__sram1__DOT__sram_50[0U];
    __Vtemp1149[9U] = vlSelf->riscv_soc__DOT__sram1__DOT__sram_50[1U];
    __Vtemp1149[0xaU] = vlSelf->riscv_soc__DOT__sram1__DOT__sram_50[2U];
    __Vtemp1149[0xbU] = vlSelf->riscv_soc__DOT__sram1__DOT__sram_50[3U];
    __Vtemp1149[0xcU] = vlSelf->riscv_soc__DOT__sram1__DOT__sram_51[0U];
    __Vtemp1149[0xdU] = vlSelf->riscv_soc__DOT__sram1__DOT__sram_51[1U];
    __Vtemp1149[0xeU] = vlSelf->riscv_soc__DOT__sram1__DOT__sram_51[2U];
    __Vtemp1149[0xfU] = vlSelf->riscv_soc__DOT__sram1__DOT__sram_51[3U];
    __Vtemp1149[0x10U] = vlSelf->riscv_soc__DOT__sram1__DOT__sram_52[0U];
    __Vtemp1149[0x11U] = vlSelf->riscv_soc__DOT__sram1__DOT__sram_52[1U];
    __Vtemp1149[0x12U] = vlSelf->riscv_soc__DOT__sram1__DOT__sram_52[2U];
    __Vtemp1149[0x13U] = vlSelf->riscv_soc__DOT__sram1__DOT__sram_52[3U];
    __Vtemp1149[0x14U] = vlSelf->riscv_soc__DOT__sram1__DOT__sram_53[0U];
    __Vtemp1149[0x15U] = vlSelf->riscv_soc__DOT__sram1__DOT__sram_53[1U];
    __Vtemp1149[0x16U] = vlSelf->riscv_soc__DOT__sram1__DOT__sram_53[2U];
    __Vtemp1149[0x17U] = vlSelf->riscv_soc__DOT__sram1__DOT__sram_53[3U];
    __Vtemp1149[0x18U] = vlSelf->riscv_soc__DOT__sram1__DOT__sram_54[0U];
    __Vtemp1149[0x19U] = vlSelf->riscv_soc__DOT__sram1__DOT__sram_54[1U];
    __Vtemp1149[0x1aU] = vlSelf->riscv_soc__DOT__sram1__DOT__sram_54[2U];
    __Vtemp1149[0x1bU] = vlSelf->riscv_soc__DOT__sram1__DOT__sram_54[3U];
    __Vtemp1149[0x1cU] = vlSelf->riscv_soc__DOT__sram1__DOT__sram_55[0U];
    __Vtemp1149[0x1dU] = vlSelf->riscv_soc__DOT__sram1__DOT__sram_55[1U];
    __Vtemp1149[0x1eU] = vlSelf->riscv_soc__DOT__sram1__DOT__sram_55[2U];
    __Vtemp1149[0x1fU] = vlSelf->riscv_soc__DOT__sram1__DOT__sram_55[3U];
    __Vtemp1149[0x20U] = vlSelf->riscv_soc__DOT__sram1__DOT__sram_56[0U];
    __Vtemp1149[0x21U] = vlSelf->riscv_soc__DOT__sram1__DOT__sram_56[1U];
    __Vtemp1149[0x22U] = vlSelf->riscv_soc__DOT__sram1__DOT__sram_56[2U];
    __Vtemp1149[0x23U] = vlSelf->riscv_soc__DOT__sram1__DOT__sram_56[3U];
    __Vtemp1149[0x24U] = vlSelf->riscv_soc__DOT__sram1__DOT__sram_57[0U];
    __Vtemp1149[0x25U] = vlSelf->riscv_soc__DOT__sram1__DOT__sram_57[1U];
    __Vtemp1149[0x26U] = vlSelf->riscv_soc__DOT__sram1__DOT__sram_57[2U];
    __Vtemp1149[0x27U] = vlSelf->riscv_soc__DOT__sram1__DOT__sram_57[3U];
    __Vtemp1149[0x28U] = vlSelf->riscv_soc__DOT__sram1__DOT__sram_58[0U];
    __Vtemp1149[0x29U] = vlSelf->riscv_soc__DOT__sram1__DOT__sram_58[1U];
    __Vtemp1149[0x2aU] = vlSelf->riscv_soc__DOT__sram1__DOT__sram_58[2U];
    __Vtemp1149[0x2bU] = vlSelf->riscv_soc__DOT__sram1__DOT__sram_58[3U];
    __Vtemp1149[0x2cU] = vlSelf->riscv_soc__DOT__sram1__DOT__sram_59[0U];
    __Vtemp1149[0x2dU] = vlSelf->riscv_soc__DOT__sram1__DOT__sram_59[1U];
    __Vtemp1149[0x2eU] = vlSelf->riscv_soc__DOT__sram1__DOT__sram_59[2U];
    __Vtemp1149[0x2fU] = vlSelf->riscv_soc__DOT__sram1__DOT__sram_59[3U];
    __Vtemp1149[0x30U] = vlSelf->riscv_soc__DOT__sram1__DOT__sram_60[0U];
    __Vtemp1149[0x31U] = vlSelf->riscv_soc__DOT__sram1__DOT__sram_60[1U];
    __Vtemp1149[0x32U] = vlSelf->riscv_soc__DOT__sram1__DOT__sram_60[2U];
    __Vtemp1149[0x33U] = vlSelf->riscv_soc__DOT__sram1__DOT__sram_60[3U];
    __Vtemp1149[0x34U] = vlSelf->riscv_soc__DOT__sram1__DOT__sram_61[0U];
    __Vtemp1149[0x35U] = vlSelf->riscv_soc__DOT__sram1__DOT__sram_61[1U];
    __Vtemp1149[0x36U] = vlSelf->riscv_soc__DOT__sram1__DOT__sram_61[2U];
    __Vtemp1149[0x37U] = vlSelf->riscv_soc__DOT__sram1__DOT__sram_61[3U];
    __Vtemp1149[0x38U] = vlSelf->riscv_soc__DOT__sram1__DOT__sram_62[0U];
    __Vtemp1149[0x39U] = vlSelf->riscv_soc__DOT__sram1__DOT__sram_62[1U];
    __Vtemp1149[0x3aU] = vlSelf->riscv_soc__DOT__sram1__DOT__sram_62[2U];
    __Vtemp1149[0x3bU] = vlSelf->riscv_soc__DOT__sram1__DOT__sram_62[3U];
    __Vtemp1149[0x3cU] = vlSelf->riscv_soc__DOT__sram1__DOT__sram_63[0U];
    __Vtemp1149[0x3dU] = vlSelf->riscv_soc__DOT__sram1__DOT__sram_63[1U];
    __Vtemp1149[0x3eU] = vlSelf->riscv_soc__DOT__sram1__DOT__sram_63[2U];
    __Vtemp1149[0x3fU] = vlSelf->riscv_soc__DOT__sram1__DOT__sram_63[3U];
    VL_CONCAT_WWW(2176,2048,128, __Vtemp1150, __Vtemp1149, vlSelf->riscv_soc__DOT__sram1__DOT__sram_47);
    VL_CONCAT_WWW(2304,2176,128, __Vtemp1151, __Vtemp1150, vlSelf->riscv_soc__DOT__sram1__DOT__sram_46);
    VL_CONCAT_WWW(2432,2304,128, __Vtemp1152, __Vtemp1151, vlSelf->riscv_soc__DOT__sram1__DOT__sram_45);
    VL_CONCAT_WWW(2560,2432,128, __Vtemp1153, __Vtemp1152, vlSelf->riscv_soc__DOT__sram1__DOT__sram_44);
    VL_CONCAT_WWW(2688,2560,128, __Vtemp1154, __Vtemp1153, vlSelf->riscv_soc__DOT__sram1__DOT__sram_43);
    VL_CONCAT_WWW(2816,2688,128, __Vtemp1155, __Vtemp1154, vlSelf->riscv_soc__DOT__sram1__DOT__sram_42);
    VL_CONCAT_WWW(2944,2816,128, __Vtemp1156, __Vtemp1155, vlSelf->riscv_soc__DOT__sram1__DOT__sram_41);
    VL_CONCAT_WWW(3072,2944,128, __Vtemp1157, __Vtemp1156, vlSelf->riscv_soc__DOT__sram1__DOT__sram_40);
    VL_CONCAT_WWW(3200,3072,128, __Vtemp1158, __Vtemp1157, vlSelf->riscv_soc__DOT__sram1__DOT__sram_39);
    VL_CONCAT_WWW(3328,3200,128, __Vtemp1159, __Vtemp1158, vlSelf->riscv_soc__DOT__sram1__DOT__sram_38);
    VL_CONCAT_WWW(3456,3328,128, __Vtemp1160, __Vtemp1159, vlSelf->riscv_soc__DOT__sram1__DOT__sram_37);
    VL_CONCAT_WWW(3584,3456,128, __Vtemp1161, __Vtemp1160, vlSelf->riscv_soc__DOT__sram1__DOT__sram_36);
    VL_CONCAT_WWW(3712,3584,128, __Vtemp1162, __Vtemp1161, vlSelf->riscv_soc__DOT__sram1__DOT__sram_35);
    VL_CONCAT_WWW(3840,3712,128, __Vtemp1163, __Vtemp1162, vlSelf->riscv_soc__DOT__sram1__DOT__sram_34);
    VL_CONCAT_WWW(3968,3840,128, __Vtemp1164, __Vtemp1163, vlSelf->riscv_soc__DOT__sram1__DOT__sram_33);
    VL_CONCAT_WWW(4096,3968,128, __Vtemp1165, __Vtemp1164, vlSelf->riscv_soc__DOT__sram1__DOT__sram_32);
    VL_CONCAT_WWW(4224,4096,128, __Vtemp1166, __Vtemp1165, vlSelf->riscv_soc__DOT__sram1__DOT__sram_31);
    VL_CONCAT_WWW(4352,4224,128, __Vtemp1167, __Vtemp1166, vlSelf->riscv_soc__DOT__sram1__DOT__sram_30);
    VL_CONCAT_WWW(4480,4352,128, __Vtemp1168, __Vtemp1167, vlSelf->riscv_soc__DOT__sram1__DOT__sram_29);
    VL_CONCAT_WWW(4608,4480,128, __Vtemp1169, __Vtemp1168, vlSelf->riscv_soc__DOT__sram1__DOT__sram_28);
    VL_CONCAT_WWW(4736,4608,128, __Vtemp1170, __Vtemp1169, vlSelf->riscv_soc__DOT__sram1__DOT__sram_27);
    VL_CONCAT_WWW(4864,4736,128, __Vtemp1171, __Vtemp1170, vlSelf->riscv_soc__DOT__sram1__DOT__sram_26);
    VL_CONCAT_WWW(4992,4864,128, __Vtemp1172, __Vtemp1171, vlSelf->riscv_soc__DOT__sram1__DOT__sram_25);
    VL_CONCAT_WWW(5120,4992,128, __Vtemp1173, __Vtemp1172, vlSelf->riscv_soc__DOT__sram1__DOT__sram_24);
    VL_CONCAT_WWW(5248,5120,128, __Vtemp1174, __Vtemp1173, vlSelf->riscv_soc__DOT__sram1__DOT__sram_23);
    VL_CONCAT_WWW(5376,5248,128, __Vtemp1175, __Vtemp1174, vlSelf->riscv_soc__DOT__sram1__DOT__sram_22);
    VL_CONCAT_WWW(5504,5376,128, __Vtemp1176, __Vtemp1175, vlSelf->riscv_soc__DOT__sram1__DOT__sram_21);
    VL_CONCAT_WWW(5632,5504,128, __Vtemp1177, __Vtemp1176, vlSelf->riscv_soc__DOT__sram1__DOT__sram_20);
    VL_CONCAT_WWW(5760,5632,128, __Vtemp1178, __Vtemp1177, vlSelf->riscv_soc__DOT__sram1__DOT__sram_19);
    VL_CONCAT_WWW(5888,5760,128, __Vtemp1179, __Vtemp1178, vlSelf->riscv_soc__DOT__sram1__DOT__sram_18);
    VL_CONCAT_WWW(6016,5888,128, __Vtemp1180, __Vtemp1179, vlSelf->riscv_soc__DOT__sram1__DOT__sram_17);
    VL_CONCAT_WWW(6144,6016,128, __Vtemp1181, __Vtemp1180, vlSelf->riscv_soc__DOT__sram1__DOT__sram_16);
    VL_CONCAT_WWW(6272,6144,128, __Vtemp1182, __Vtemp1181, vlSelf->riscv_soc__DOT__sram1__DOT__sram_15);
    VL_CONCAT_WWW(6400,6272,128, __Vtemp1183, __Vtemp1182, vlSelf->riscv_soc__DOT__sram1__DOT__sram_14);
    VL_CONCAT_WWW(6528,6400,128, __Vtemp1184, __Vtemp1183, vlSelf->riscv_soc__DOT__sram1__DOT__sram_13);
    VL_CONCAT_WWW(6656,6528,128, __Vtemp1185, __Vtemp1184, vlSelf->riscv_soc__DOT__sram1__DOT__sram_12);
    VL_CONCAT_WWW(6784,6656,128, __Vtemp1186, __Vtemp1185, vlSelf->riscv_soc__DOT__sram1__DOT__sram_11);
    VL_CONCAT_WWW(6912,6784,128, __Vtemp1187, __Vtemp1186, vlSelf->riscv_soc__DOT__sram1__DOT__sram_10);
    VL_CONCAT_WWW(7040,6912,128, __Vtemp1188, __Vtemp1187, vlSelf->riscv_soc__DOT__sram1__DOT__sram_9);
    VL_CONCAT_WWW(7168,7040,128, __Vtemp1189, __Vtemp1188, vlSelf->riscv_soc__DOT__sram1__DOT__sram_8);
    VL_CONCAT_WWW(7296,7168,128, __Vtemp1190, __Vtemp1189, vlSelf->riscv_soc__DOT__sram1__DOT__sram_7);
    VL_CONCAT_WWW(7424,7296,128, __Vtemp1191, __Vtemp1190, vlSelf->riscv_soc__DOT__sram1__DOT__sram_6);
    VL_CONCAT_WWW(7552,7424,128, __Vtemp1192, __Vtemp1191, vlSelf->riscv_soc__DOT__sram1__DOT__sram_5);
    VL_CONCAT_WWW(7680,7552,128, __Vtemp1193, __Vtemp1192, vlSelf->riscv_soc__DOT__sram1__DOT__sram_4);
    VL_CONCAT_WWW(7808,7680,128, __Vtemp1194, __Vtemp1193, vlSelf->riscv_soc__DOT__sram1__DOT__sram_3);
    VL_CONCAT_WWW(7936,7808,128, __Vtemp1195, __Vtemp1194, vlSelf->riscv_soc__DOT__sram1__DOT__sram_2);
    VL_CONCAT_WWW(8064,7936,128, __Vtemp1196, __Vtemp1195, vlSelf->riscv_soc__DOT__sram1__DOT__sram_1);
    VL_CONCAT_WWW(8192,8064,128, __Vtemp1197, __Vtemp1196, vlSelf->riscv_soc__DOT__sram1__DOT__sram_0);
    vlSelf->riscv_soc__DOT__sram1__DOT___GEN_1[0U] 
        = (((0U == (0x1fU & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram_addr) 
                             << 7U))) ? 0U : (__Vtemp1197[
                                              ((IData)(1U) 
                                               + (0xfcU 
                                                  & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram_addr) 
                                                     << 2U)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram_addr) 
                                                      << 7U))))) 
           | (__Vtemp1197[(0xfcU & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram_addr) 
                                    << 2U))] >> (0x1fU 
                                                 & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram_addr) 
                                                    << 7U))));
    vlSelf->riscv_soc__DOT__sram1__DOT___GEN_1[1U] 
        = (((0U == (0x1fU & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram_addr) 
                             << 7U))) ? 0U : (__Vtemp1197[
                                              ((IData)(2U) 
                                               + (0xfcU 
                                                  & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram_addr) 
                                                     << 2U)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram_addr) 
                                                      << 7U))))) 
           | (__Vtemp1197[((IData)(1U) + (0xfcU & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram_addr) 
                                                   << 2U)))] 
              >> (0x1fU & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram_addr) 
                           << 7U))));
    vlSelf->riscv_soc__DOT__sram1__DOT___GEN_1[2U] 
        = (((0U == (0x1fU & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram_addr) 
                             << 7U))) ? 0U : (__Vtemp1197[
                                              ((IData)(3U) 
                                               + (0xfcU 
                                                  & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram_addr) 
                                                     << 2U)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram_addr) 
                                                      << 7U))))) 
           | (__Vtemp1197[((IData)(2U) + (0xfcU & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram_addr) 
                                                   << 2U)))] 
              >> (0x1fU & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram_addr) 
                           << 7U))));
    vlSelf->riscv_soc__DOT__sram1__DOT___GEN_1[3U] 
        = (((0U == (0x1fU & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram_addr) 
                             << 7U))) ? 0U : (__Vtemp1197[
                                              ((IData)(4U) 
                                               + (0xfcU 
                                                  & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram_addr) 
                                                     << 2U)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram_addr) 
                                                      << 7U))))) 
           | (__Vtemp1197[((IData)(3U) + (0xfcU & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram_addr) 
                                                   << 2U)))] 
              >> (0x1fU & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram_addr) 
                           << 7U))));
    __Vtemp1213[0U] = vlSelf->riscv_soc__DOT__sram2__DOT__sram_48[0U];
    __Vtemp1213[1U] = vlSelf->riscv_soc__DOT__sram2__DOT__sram_48[1U];
    __Vtemp1213[2U] = vlSelf->riscv_soc__DOT__sram2__DOT__sram_48[2U];
    __Vtemp1213[3U] = vlSelf->riscv_soc__DOT__sram2__DOT__sram_48[3U];
    __Vtemp1213[4U] = vlSelf->riscv_soc__DOT__sram2__DOT__sram_49[0U];
    __Vtemp1213[5U] = vlSelf->riscv_soc__DOT__sram2__DOT__sram_49[1U];
    __Vtemp1213[6U] = vlSelf->riscv_soc__DOT__sram2__DOT__sram_49[2U];
    __Vtemp1213[7U] = vlSelf->riscv_soc__DOT__sram2__DOT__sram_49[3U];
    __Vtemp1213[8U] = vlSelf->riscv_soc__DOT__sram2__DOT__sram_50[0U];
    __Vtemp1213[9U] = vlSelf->riscv_soc__DOT__sram2__DOT__sram_50[1U];
    __Vtemp1213[0xaU] = vlSelf->riscv_soc__DOT__sram2__DOT__sram_50[2U];
    __Vtemp1213[0xbU] = vlSelf->riscv_soc__DOT__sram2__DOT__sram_50[3U];
    __Vtemp1213[0xcU] = vlSelf->riscv_soc__DOT__sram2__DOT__sram_51[0U];
    __Vtemp1213[0xdU] = vlSelf->riscv_soc__DOT__sram2__DOT__sram_51[1U];
    __Vtemp1213[0xeU] = vlSelf->riscv_soc__DOT__sram2__DOT__sram_51[2U];
    __Vtemp1213[0xfU] = vlSelf->riscv_soc__DOT__sram2__DOT__sram_51[3U];
    __Vtemp1213[0x10U] = vlSelf->riscv_soc__DOT__sram2__DOT__sram_52[0U];
    __Vtemp1213[0x11U] = vlSelf->riscv_soc__DOT__sram2__DOT__sram_52[1U];
    __Vtemp1213[0x12U] = vlSelf->riscv_soc__DOT__sram2__DOT__sram_52[2U];
    __Vtemp1213[0x13U] = vlSelf->riscv_soc__DOT__sram2__DOT__sram_52[3U];
    __Vtemp1213[0x14U] = vlSelf->riscv_soc__DOT__sram2__DOT__sram_53[0U];
    __Vtemp1213[0x15U] = vlSelf->riscv_soc__DOT__sram2__DOT__sram_53[1U];
    __Vtemp1213[0x16U] = vlSelf->riscv_soc__DOT__sram2__DOT__sram_53[2U];
    __Vtemp1213[0x17U] = vlSelf->riscv_soc__DOT__sram2__DOT__sram_53[3U];
    __Vtemp1213[0x18U] = vlSelf->riscv_soc__DOT__sram2__DOT__sram_54[0U];
    __Vtemp1213[0x19U] = vlSelf->riscv_soc__DOT__sram2__DOT__sram_54[1U];
    __Vtemp1213[0x1aU] = vlSelf->riscv_soc__DOT__sram2__DOT__sram_54[2U];
    __Vtemp1213[0x1bU] = vlSelf->riscv_soc__DOT__sram2__DOT__sram_54[3U];
    __Vtemp1213[0x1cU] = vlSelf->riscv_soc__DOT__sram2__DOT__sram_55[0U];
    __Vtemp1213[0x1dU] = vlSelf->riscv_soc__DOT__sram2__DOT__sram_55[1U];
    __Vtemp1213[0x1eU] = vlSelf->riscv_soc__DOT__sram2__DOT__sram_55[2U];
    __Vtemp1213[0x1fU] = vlSelf->riscv_soc__DOT__sram2__DOT__sram_55[3U];
    __Vtemp1213[0x20U] = vlSelf->riscv_soc__DOT__sram2__DOT__sram_56[0U];
    __Vtemp1213[0x21U] = vlSelf->riscv_soc__DOT__sram2__DOT__sram_56[1U];
    __Vtemp1213[0x22U] = vlSelf->riscv_soc__DOT__sram2__DOT__sram_56[2U];
    __Vtemp1213[0x23U] = vlSelf->riscv_soc__DOT__sram2__DOT__sram_56[3U];
    __Vtemp1213[0x24U] = vlSelf->riscv_soc__DOT__sram2__DOT__sram_57[0U];
    __Vtemp1213[0x25U] = vlSelf->riscv_soc__DOT__sram2__DOT__sram_57[1U];
    __Vtemp1213[0x26U] = vlSelf->riscv_soc__DOT__sram2__DOT__sram_57[2U];
    __Vtemp1213[0x27U] = vlSelf->riscv_soc__DOT__sram2__DOT__sram_57[3U];
    __Vtemp1213[0x28U] = vlSelf->riscv_soc__DOT__sram2__DOT__sram_58[0U];
    __Vtemp1213[0x29U] = vlSelf->riscv_soc__DOT__sram2__DOT__sram_58[1U];
    __Vtemp1213[0x2aU] = vlSelf->riscv_soc__DOT__sram2__DOT__sram_58[2U];
    __Vtemp1213[0x2bU] = vlSelf->riscv_soc__DOT__sram2__DOT__sram_58[3U];
    __Vtemp1213[0x2cU] = vlSelf->riscv_soc__DOT__sram2__DOT__sram_59[0U];
    __Vtemp1213[0x2dU] = vlSelf->riscv_soc__DOT__sram2__DOT__sram_59[1U];
    __Vtemp1213[0x2eU] = vlSelf->riscv_soc__DOT__sram2__DOT__sram_59[2U];
    __Vtemp1213[0x2fU] = vlSelf->riscv_soc__DOT__sram2__DOT__sram_59[3U];
    __Vtemp1213[0x30U] = vlSelf->riscv_soc__DOT__sram2__DOT__sram_60[0U];
    __Vtemp1213[0x31U] = vlSelf->riscv_soc__DOT__sram2__DOT__sram_60[1U];
    __Vtemp1213[0x32U] = vlSelf->riscv_soc__DOT__sram2__DOT__sram_60[2U];
    __Vtemp1213[0x33U] = vlSelf->riscv_soc__DOT__sram2__DOT__sram_60[3U];
    __Vtemp1213[0x34U] = vlSelf->riscv_soc__DOT__sram2__DOT__sram_61[0U];
    __Vtemp1213[0x35U] = vlSelf->riscv_soc__DOT__sram2__DOT__sram_61[1U];
    __Vtemp1213[0x36U] = vlSelf->riscv_soc__DOT__sram2__DOT__sram_61[2U];
    __Vtemp1213[0x37U] = vlSelf->riscv_soc__DOT__sram2__DOT__sram_61[3U];
    __Vtemp1213[0x38U] = vlSelf->riscv_soc__DOT__sram2__DOT__sram_62[0U];
    __Vtemp1213[0x39U] = vlSelf->riscv_soc__DOT__sram2__DOT__sram_62[1U];
    __Vtemp1213[0x3aU] = vlSelf->riscv_soc__DOT__sram2__DOT__sram_62[2U];
    __Vtemp1213[0x3bU] = vlSelf->riscv_soc__DOT__sram2__DOT__sram_62[3U];
    __Vtemp1213[0x3cU] = vlSelf->riscv_soc__DOT__sram2__DOT__sram_63[0U];
    __Vtemp1213[0x3dU] = vlSelf->riscv_soc__DOT__sram2__DOT__sram_63[1U];
    __Vtemp1213[0x3eU] = vlSelf->riscv_soc__DOT__sram2__DOT__sram_63[2U];
    __Vtemp1213[0x3fU] = vlSelf->riscv_soc__DOT__sram2__DOT__sram_63[3U];
    VL_CONCAT_WWW(2176,2048,128, __Vtemp1214, __Vtemp1213, vlSelf->riscv_soc__DOT__sram2__DOT__sram_47);
    VL_CONCAT_WWW(2304,2176,128, __Vtemp1215, __Vtemp1214, vlSelf->riscv_soc__DOT__sram2__DOT__sram_46);
    VL_CONCAT_WWW(2432,2304,128, __Vtemp1216, __Vtemp1215, vlSelf->riscv_soc__DOT__sram2__DOT__sram_45);
    VL_CONCAT_WWW(2560,2432,128, __Vtemp1217, __Vtemp1216, vlSelf->riscv_soc__DOT__sram2__DOT__sram_44);
    VL_CONCAT_WWW(2688,2560,128, __Vtemp1218, __Vtemp1217, vlSelf->riscv_soc__DOT__sram2__DOT__sram_43);
    VL_CONCAT_WWW(2816,2688,128, __Vtemp1219, __Vtemp1218, vlSelf->riscv_soc__DOT__sram2__DOT__sram_42);
    VL_CONCAT_WWW(2944,2816,128, __Vtemp1220, __Vtemp1219, vlSelf->riscv_soc__DOT__sram2__DOT__sram_41);
    VL_CONCAT_WWW(3072,2944,128, __Vtemp1221, __Vtemp1220, vlSelf->riscv_soc__DOT__sram2__DOT__sram_40);
    VL_CONCAT_WWW(3200,3072,128, __Vtemp1222, __Vtemp1221, vlSelf->riscv_soc__DOT__sram2__DOT__sram_39);
    VL_CONCAT_WWW(3328,3200,128, __Vtemp1223, __Vtemp1222, vlSelf->riscv_soc__DOT__sram2__DOT__sram_38);
    VL_CONCAT_WWW(3456,3328,128, __Vtemp1224, __Vtemp1223, vlSelf->riscv_soc__DOT__sram2__DOT__sram_37);
    VL_CONCAT_WWW(3584,3456,128, __Vtemp1225, __Vtemp1224, vlSelf->riscv_soc__DOT__sram2__DOT__sram_36);
    VL_CONCAT_WWW(3712,3584,128, __Vtemp1226, __Vtemp1225, vlSelf->riscv_soc__DOT__sram2__DOT__sram_35);
    VL_CONCAT_WWW(3840,3712,128, __Vtemp1227, __Vtemp1226, vlSelf->riscv_soc__DOT__sram2__DOT__sram_34);
    VL_CONCAT_WWW(3968,3840,128, __Vtemp1228, __Vtemp1227, vlSelf->riscv_soc__DOT__sram2__DOT__sram_33);
    VL_CONCAT_WWW(4096,3968,128, __Vtemp1229, __Vtemp1228, vlSelf->riscv_soc__DOT__sram2__DOT__sram_32);
    VL_CONCAT_WWW(4224,4096,128, __Vtemp1230, __Vtemp1229, vlSelf->riscv_soc__DOT__sram2__DOT__sram_31);
    VL_CONCAT_WWW(4352,4224,128, __Vtemp1231, __Vtemp1230, vlSelf->riscv_soc__DOT__sram2__DOT__sram_30);
    VL_CONCAT_WWW(4480,4352,128, __Vtemp1232, __Vtemp1231, vlSelf->riscv_soc__DOT__sram2__DOT__sram_29);
    VL_CONCAT_WWW(4608,4480,128, __Vtemp1233, __Vtemp1232, vlSelf->riscv_soc__DOT__sram2__DOT__sram_28);
    VL_CONCAT_WWW(4736,4608,128, __Vtemp1234, __Vtemp1233, vlSelf->riscv_soc__DOT__sram2__DOT__sram_27);
    VL_CONCAT_WWW(4864,4736,128, __Vtemp1235, __Vtemp1234, vlSelf->riscv_soc__DOT__sram2__DOT__sram_26);
    VL_CONCAT_WWW(4992,4864,128, __Vtemp1236, __Vtemp1235, vlSelf->riscv_soc__DOT__sram2__DOT__sram_25);
    VL_CONCAT_WWW(5120,4992,128, __Vtemp1237, __Vtemp1236, vlSelf->riscv_soc__DOT__sram2__DOT__sram_24);
    VL_CONCAT_WWW(5248,5120,128, __Vtemp1238, __Vtemp1237, vlSelf->riscv_soc__DOT__sram2__DOT__sram_23);
    VL_CONCAT_WWW(5376,5248,128, __Vtemp1239, __Vtemp1238, vlSelf->riscv_soc__DOT__sram2__DOT__sram_22);
    VL_CONCAT_WWW(5504,5376,128, __Vtemp1240, __Vtemp1239, vlSelf->riscv_soc__DOT__sram2__DOT__sram_21);
    VL_CONCAT_WWW(5632,5504,128, __Vtemp1241, __Vtemp1240, vlSelf->riscv_soc__DOT__sram2__DOT__sram_20);
    VL_CONCAT_WWW(5760,5632,128, __Vtemp1242, __Vtemp1241, vlSelf->riscv_soc__DOT__sram2__DOT__sram_19);
    VL_CONCAT_WWW(5888,5760,128, __Vtemp1243, __Vtemp1242, vlSelf->riscv_soc__DOT__sram2__DOT__sram_18);
    VL_CONCAT_WWW(6016,5888,128, __Vtemp1244, __Vtemp1243, vlSelf->riscv_soc__DOT__sram2__DOT__sram_17);
    VL_CONCAT_WWW(6144,6016,128, __Vtemp1245, __Vtemp1244, vlSelf->riscv_soc__DOT__sram2__DOT__sram_16);
    VL_CONCAT_WWW(6272,6144,128, __Vtemp1246, __Vtemp1245, vlSelf->riscv_soc__DOT__sram2__DOT__sram_15);
    VL_CONCAT_WWW(6400,6272,128, __Vtemp1247, __Vtemp1246, vlSelf->riscv_soc__DOT__sram2__DOT__sram_14);
    VL_CONCAT_WWW(6528,6400,128, __Vtemp1248, __Vtemp1247, vlSelf->riscv_soc__DOT__sram2__DOT__sram_13);
    VL_CONCAT_WWW(6656,6528,128, __Vtemp1249, __Vtemp1248, vlSelf->riscv_soc__DOT__sram2__DOT__sram_12);
    VL_CONCAT_WWW(6784,6656,128, __Vtemp1250, __Vtemp1249, vlSelf->riscv_soc__DOT__sram2__DOT__sram_11);
    VL_CONCAT_WWW(6912,6784,128, __Vtemp1251, __Vtemp1250, vlSelf->riscv_soc__DOT__sram2__DOT__sram_10);
    VL_CONCAT_WWW(7040,6912,128, __Vtemp1252, __Vtemp1251, vlSelf->riscv_soc__DOT__sram2__DOT__sram_9);
    VL_CONCAT_WWW(7168,7040,128, __Vtemp1253, __Vtemp1252, vlSelf->riscv_soc__DOT__sram2__DOT__sram_8);
    VL_CONCAT_WWW(7296,7168,128, __Vtemp1254, __Vtemp1253, vlSelf->riscv_soc__DOT__sram2__DOT__sram_7);
    VL_CONCAT_WWW(7424,7296,128, __Vtemp1255, __Vtemp1254, vlSelf->riscv_soc__DOT__sram2__DOT__sram_6);
    VL_CONCAT_WWW(7552,7424,128, __Vtemp1256, __Vtemp1255, vlSelf->riscv_soc__DOT__sram2__DOT__sram_5);
    VL_CONCAT_WWW(7680,7552,128, __Vtemp1257, __Vtemp1256, vlSelf->riscv_soc__DOT__sram2__DOT__sram_4);
    VL_CONCAT_WWW(7808,7680,128, __Vtemp1258, __Vtemp1257, vlSelf->riscv_soc__DOT__sram2__DOT__sram_3);
    VL_CONCAT_WWW(7936,7808,128, __Vtemp1259, __Vtemp1258, vlSelf->riscv_soc__DOT__sram2__DOT__sram_2);
    VL_CONCAT_WWW(8064,7936,128, __Vtemp1260, __Vtemp1259, vlSelf->riscv_soc__DOT__sram2__DOT__sram_1);
    VL_CONCAT_WWW(8192,8064,128, __Vtemp1261, __Vtemp1260, vlSelf->riscv_soc__DOT__sram2__DOT__sram_0);
    vlSelf->riscv_soc__DOT__sram2__DOT___GEN_1[0U] 
        = (((0U == (0x1fU & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram_addr) 
                             << 7U))) ? 0U : (__Vtemp1261[
                                              ((IData)(1U) 
                                               + (0xfcU 
                                                  & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram_addr) 
                                                     << 2U)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram_addr) 
                                                      << 7U))))) 
           | (__Vtemp1261[(0xfcU & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram_addr) 
                                    << 2U))] >> (0x1fU 
                                                 & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram_addr) 
                                                    << 7U))));
    vlSelf->riscv_soc__DOT__sram2__DOT___GEN_1[1U] 
        = (((0U == (0x1fU & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram_addr) 
                             << 7U))) ? 0U : (__Vtemp1261[
                                              ((IData)(2U) 
                                               + (0xfcU 
                                                  & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram_addr) 
                                                     << 2U)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram_addr) 
                                                      << 7U))))) 
           | (__Vtemp1261[((IData)(1U) + (0xfcU & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram_addr) 
                                                   << 2U)))] 
              >> (0x1fU & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram_addr) 
                           << 7U))));
    vlSelf->riscv_soc__DOT__sram2__DOT___GEN_1[2U] 
        = (((0U == (0x1fU & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram_addr) 
                             << 7U))) ? 0U : (__Vtemp1261[
                                              ((IData)(3U) 
                                               + (0xfcU 
                                                  & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram_addr) 
                                                     << 2U)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram_addr) 
                                                      << 7U))))) 
           | (__Vtemp1261[((IData)(2U) + (0xfcU & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram_addr) 
                                                   << 2U)))] 
              >> (0x1fU & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram_addr) 
                           << 7U))));
    vlSelf->riscv_soc__DOT__sram2__DOT___GEN_1[3U] 
        = (((0U == (0x1fU & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram_addr) 
                             << 7U))) ? 0U : (__Vtemp1261[
                                              ((IData)(4U) 
                                               + (0xfcU 
                                                  & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram_addr) 
                                                     << 2U)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram_addr) 
                                                      << 7U))))) 
           | (__Vtemp1261[((IData)(3U) + (0xfcU & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram_addr) 
                                                   << 2U)))] 
              >> (0x1fU & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram_addr) 
                           << 7U))));
    __Vtemp1277[0U] = vlSelf->riscv_soc__DOT__sram3__DOT__sram_48[0U];
    __Vtemp1277[1U] = vlSelf->riscv_soc__DOT__sram3__DOT__sram_48[1U];
    __Vtemp1277[2U] = vlSelf->riscv_soc__DOT__sram3__DOT__sram_48[2U];
    __Vtemp1277[3U] = vlSelf->riscv_soc__DOT__sram3__DOT__sram_48[3U];
    __Vtemp1277[4U] = vlSelf->riscv_soc__DOT__sram3__DOT__sram_49[0U];
    __Vtemp1277[5U] = vlSelf->riscv_soc__DOT__sram3__DOT__sram_49[1U];
    __Vtemp1277[6U] = vlSelf->riscv_soc__DOT__sram3__DOT__sram_49[2U];
    __Vtemp1277[7U] = vlSelf->riscv_soc__DOT__sram3__DOT__sram_49[3U];
    __Vtemp1277[8U] = vlSelf->riscv_soc__DOT__sram3__DOT__sram_50[0U];
    __Vtemp1277[9U] = vlSelf->riscv_soc__DOT__sram3__DOT__sram_50[1U];
    __Vtemp1277[0xaU] = vlSelf->riscv_soc__DOT__sram3__DOT__sram_50[2U];
    __Vtemp1277[0xbU] = vlSelf->riscv_soc__DOT__sram3__DOT__sram_50[3U];
    __Vtemp1277[0xcU] = vlSelf->riscv_soc__DOT__sram3__DOT__sram_51[0U];
    __Vtemp1277[0xdU] = vlSelf->riscv_soc__DOT__sram3__DOT__sram_51[1U];
    __Vtemp1277[0xeU] = vlSelf->riscv_soc__DOT__sram3__DOT__sram_51[2U];
    __Vtemp1277[0xfU] = vlSelf->riscv_soc__DOT__sram3__DOT__sram_51[3U];
    __Vtemp1277[0x10U] = vlSelf->riscv_soc__DOT__sram3__DOT__sram_52[0U];
    __Vtemp1277[0x11U] = vlSelf->riscv_soc__DOT__sram3__DOT__sram_52[1U];
    __Vtemp1277[0x12U] = vlSelf->riscv_soc__DOT__sram3__DOT__sram_52[2U];
    __Vtemp1277[0x13U] = vlSelf->riscv_soc__DOT__sram3__DOT__sram_52[3U];
    __Vtemp1277[0x14U] = vlSelf->riscv_soc__DOT__sram3__DOT__sram_53[0U];
    __Vtemp1277[0x15U] = vlSelf->riscv_soc__DOT__sram3__DOT__sram_53[1U];
    __Vtemp1277[0x16U] = vlSelf->riscv_soc__DOT__sram3__DOT__sram_53[2U];
    __Vtemp1277[0x17U] = vlSelf->riscv_soc__DOT__sram3__DOT__sram_53[3U];
    __Vtemp1277[0x18U] = vlSelf->riscv_soc__DOT__sram3__DOT__sram_54[0U];
    __Vtemp1277[0x19U] = vlSelf->riscv_soc__DOT__sram3__DOT__sram_54[1U];
    __Vtemp1277[0x1aU] = vlSelf->riscv_soc__DOT__sram3__DOT__sram_54[2U];
    __Vtemp1277[0x1bU] = vlSelf->riscv_soc__DOT__sram3__DOT__sram_54[3U];
    __Vtemp1277[0x1cU] = vlSelf->riscv_soc__DOT__sram3__DOT__sram_55[0U];
    __Vtemp1277[0x1dU] = vlSelf->riscv_soc__DOT__sram3__DOT__sram_55[1U];
    __Vtemp1277[0x1eU] = vlSelf->riscv_soc__DOT__sram3__DOT__sram_55[2U];
    __Vtemp1277[0x1fU] = vlSelf->riscv_soc__DOT__sram3__DOT__sram_55[3U];
    __Vtemp1277[0x20U] = vlSelf->riscv_soc__DOT__sram3__DOT__sram_56[0U];
    __Vtemp1277[0x21U] = vlSelf->riscv_soc__DOT__sram3__DOT__sram_56[1U];
    __Vtemp1277[0x22U] = vlSelf->riscv_soc__DOT__sram3__DOT__sram_56[2U];
    __Vtemp1277[0x23U] = vlSelf->riscv_soc__DOT__sram3__DOT__sram_56[3U];
    __Vtemp1277[0x24U] = vlSelf->riscv_soc__DOT__sram3__DOT__sram_57[0U];
    __Vtemp1277[0x25U] = vlSelf->riscv_soc__DOT__sram3__DOT__sram_57[1U];
    __Vtemp1277[0x26U] = vlSelf->riscv_soc__DOT__sram3__DOT__sram_57[2U];
    __Vtemp1277[0x27U] = vlSelf->riscv_soc__DOT__sram3__DOT__sram_57[3U];
    __Vtemp1277[0x28U] = vlSelf->riscv_soc__DOT__sram3__DOT__sram_58[0U];
    __Vtemp1277[0x29U] = vlSelf->riscv_soc__DOT__sram3__DOT__sram_58[1U];
    __Vtemp1277[0x2aU] = vlSelf->riscv_soc__DOT__sram3__DOT__sram_58[2U];
    __Vtemp1277[0x2bU] = vlSelf->riscv_soc__DOT__sram3__DOT__sram_58[3U];
    __Vtemp1277[0x2cU] = vlSelf->riscv_soc__DOT__sram3__DOT__sram_59[0U];
    __Vtemp1277[0x2dU] = vlSelf->riscv_soc__DOT__sram3__DOT__sram_59[1U];
    __Vtemp1277[0x2eU] = vlSelf->riscv_soc__DOT__sram3__DOT__sram_59[2U];
    __Vtemp1277[0x2fU] = vlSelf->riscv_soc__DOT__sram3__DOT__sram_59[3U];
    __Vtemp1277[0x30U] = vlSelf->riscv_soc__DOT__sram3__DOT__sram_60[0U];
    __Vtemp1277[0x31U] = vlSelf->riscv_soc__DOT__sram3__DOT__sram_60[1U];
    __Vtemp1277[0x32U] = vlSelf->riscv_soc__DOT__sram3__DOT__sram_60[2U];
    __Vtemp1277[0x33U] = vlSelf->riscv_soc__DOT__sram3__DOT__sram_60[3U];
    __Vtemp1277[0x34U] = vlSelf->riscv_soc__DOT__sram3__DOT__sram_61[0U];
    __Vtemp1277[0x35U] = vlSelf->riscv_soc__DOT__sram3__DOT__sram_61[1U];
    __Vtemp1277[0x36U] = vlSelf->riscv_soc__DOT__sram3__DOT__sram_61[2U];
    __Vtemp1277[0x37U] = vlSelf->riscv_soc__DOT__sram3__DOT__sram_61[3U];
    __Vtemp1277[0x38U] = vlSelf->riscv_soc__DOT__sram3__DOT__sram_62[0U];
    __Vtemp1277[0x39U] = vlSelf->riscv_soc__DOT__sram3__DOT__sram_62[1U];
    __Vtemp1277[0x3aU] = vlSelf->riscv_soc__DOT__sram3__DOT__sram_62[2U];
    __Vtemp1277[0x3bU] = vlSelf->riscv_soc__DOT__sram3__DOT__sram_62[3U];
    __Vtemp1277[0x3cU] = vlSelf->riscv_soc__DOT__sram3__DOT__sram_63[0U];
    __Vtemp1277[0x3dU] = vlSelf->riscv_soc__DOT__sram3__DOT__sram_63[1U];
    __Vtemp1277[0x3eU] = vlSelf->riscv_soc__DOT__sram3__DOT__sram_63[2U];
    __Vtemp1277[0x3fU] = vlSelf->riscv_soc__DOT__sram3__DOT__sram_63[3U];
    VL_CONCAT_WWW(2176,2048,128, __Vtemp1278, __Vtemp1277, vlSelf->riscv_soc__DOT__sram3__DOT__sram_47);
    VL_CONCAT_WWW(2304,2176,128, __Vtemp1279, __Vtemp1278, vlSelf->riscv_soc__DOT__sram3__DOT__sram_46);
    VL_CONCAT_WWW(2432,2304,128, __Vtemp1280, __Vtemp1279, vlSelf->riscv_soc__DOT__sram3__DOT__sram_45);
    VL_CONCAT_WWW(2560,2432,128, __Vtemp1281, __Vtemp1280, vlSelf->riscv_soc__DOT__sram3__DOT__sram_44);
    VL_CONCAT_WWW(2688,2560,128, __Vtemp1282, __Vtemp1281, vlSelf->riscv_soc__DOT__sram3__DOT__sram_43);
    VL_CONCAT_WWW(2816,2688,128, __Vtemp1283, __Vtemp1282, vlSelf->riscv_soc__DOT__sram3__DOT__sram_42);
    VL_CONCAT_WWW(2944,2816,128, __Vtemp1284, __Vtemp1283, vlSelf->riscv_soc__DOT__sram3__DOT__sram_41);
    VL_CONCAT_WWW(3072,2944,128, __Vtemp1285, __Vtemp1284, vlSelf->riscv_soc__DOT__sram3__DOT__sram_40);
    VL_CONCAT_WWW(3200,3072,128, __Vtemp1286, __Vtemp1285, vlSelf->riscv_soc__DOT__sram3__DOT__sram_39);
    VL_CONCAT_WWW(3328,3200,128, __Vtemp1287, __Vtemp1286, vlSelf->riscv_soc__DOT__sram3__DOT__sram_38);
    VL_CONCAT_WWW(3456,3328,128, __Vtemp1288, __Vtemp1287, vlSelf->riscv_soc__DOT__sram3__DOT__sram_37);
    VL_CONCAT_WWW(3584,3456,128, __Vtemp1289, __Vtemp1288, vlSelf->riscv_soc__DOT__sram3__DOT__sram_36);
    VL_CONCAT_WWW(3712,3584,128, __Vtemp1290, __Vtemp1289, vlSelf->riscv_soc__DOT__sram3__DOT__sram_35);
    VL_CONCAT_WWW(3840,3712,128, __Vtemp1291, __Vtemp1290, vlSelf->riscv_soc__DOT__sram3__DOT__sram_34);
    VL_CONCAT_WWW(3968,3840,128, __Vtemp1292, __Vtemp1291, vlSelf->riscv_soc__DOT__sram3__DOT__sram_33);
    VL_CONCAT_WWW(4096,3968,128, __Vtemp1293, __Vtemp1292, vlSelf->riscv_soc__DOT__sram3__DOT__sram_32);
    VL_CONCAT_WWW(4224,4096,128, __Vtemp1294, __Vtemp1293, vlSelf->riscv_soc__DOT__sram3__DOT__sram_31);
    VL_CONCAT_WWW(4352,4224,128, __Vtemp1295, __Vtemp1294, vlSelf->riscv_soc__DOT__sram3__DOT__sram_30);
    VL_CONCAT_WWW(4480,4352,128, __Vtemp1296, __Vtemp1295, vlSelf->riscv_soc__DOT__sram3__DOT__sram_29);
    VL_CONCAT_WWW(4608,4480,128, __Vtemp1297, __Vtemp1296, vlSelf->riscv_soc__DOT__sram3__DOT__sram_28);
    VL_CONCAT_WWW(4736,4608,128, __Vtemp1298, __Vtemp1297, vlSelf->riscv_soc__DOT__sram3__DOT__sram_27);
    VL_CONCAT_WWW(4864,4736,128, __Vtemp1299, __Vtemp1298, vlSelf->riscv_soc__DOT__sram3__DOT__sram_26);
    VL_CONCAT_WWW(4992,4864,128, __Vtemp1300, __Vtemp1299, vlSelf->riscv_soc__DOT__sram3__DOT__sram_25);
    VL_CONCAT_WWW(5120,4992,128, __Vtemp1301, __Vtemp1300, vlSelf->riscv_soc__DOT__sram3__DOT__sram_24);
    VL_CONCAT_WWW(5248,5120,128, __Vtemp1302, __Vtemp1301, vlSelf->riscv_soc__DOT__sram3__DOT__sram_23);
    VL_CONCAT_WWW(5376,5248,128, __Vtemp1303, __Vtemp1302, vlSelf->riscv_soc__DOT__sram3__DOT__sram_22);
    VL_CONCAT_WWW(5504,5376,128, __Vtemp1304, __Vtemp1303, vlSelf->riscv_soc__DOT__sram3__DOT__sram_21);
    VL_CONCAT_WWW(5632,5504,128, __Vtemp1305, __Vtemp1304, vlSelf->riscv_soc__DOT__sram3__DOT__sram_20);
    VL_CONCAT_WWW(5760,5632,128, __Vtemp1306, __Vtemp1305, vlSelf->riscv_soc__DOT__sram3__DOT__sram_19);
    VL_CONCAT_WWW(5888,5760,128, __Vtemp1307, __Vtemp1306, vlSelf->riscv_soc__DOT__sram3__DOT__sram_18);
    VL_CONCAT_WWW(6016,5888,128, __Vtemp1308, __Vtemp1307, vlSelf->riscv_soc__DOT__sram3__DOT__sram_17);
    VL_CONCAT_WWW(6144,6016,128, __Vtemp1309, __Vtemp1308, vlSelf->riscv_soc__DOT__sram3__DOT__sram_16);
    VL_CONCAT_WWW(6272,6144,128, __Vtemp1310, __Vtemp1309, vlSelf->riscv_soc__DOT__sram3__DOT__sram_15);
    VL_CONCAT_WWW(6400,6272,128, __Vtemp1311, __Vtemp1310, vlSelf->riscv_soc__DOT__sram3__DOT__sram_14);
    VL_CONCAT_WWW(6528,6400,128, __Vtemp1312, __Vtemp1311, vlSelf->riscv_soc__DOT__sram3__DOT__sram_13);
    VL_CONCAT_WWW(6656,6528,128, __Vtemp1313, __Vtemp1312, vlSelf->riscv_soc__DOT__sram3__DOT__sram_12);
    VL_CONCAT_WWW(6784,6656,128, __Vtemp1314, __Vtemp1313, vlSelf->riscv_soc__DOT__sram3__DOT__sram_11);
    VL_CONCAT_WWW(6912,6784,128, __Vtemp1315, __Vtemp1314, vlSelf->riscv_soc__DOT__sram3__DOT__sram_10);
    VL_CONCAT_WWW(7040,6912,128, __Vtemp1316, __Vtemp1315, vlSelf->riscv_soc__DOT__sram3__DOT__sram_9);
    VL_CONCAT_WWW(7168,7040,128, __Vtemp1317, __Vtemp1316, vlSelf->riscv_soc__DOT__sram3__DOT__sram_8);
    VL_CONCAT_WWW(7296,7168,128, __Vtemp1318, __Vtemp1317, vlSelf->riscv_soc__DOT__sram3__DOT__sram_7);
    VL_CONCAT_WWW(7424,7296,128, __Vtemp1319, __Vtemp1318, vlSelf->riscv_soc__DOT__sram3__DOT__sram_6);
    VL_CONCAT_WWW(7552,7424,128, __Vtemp1320, __Vtemp1319, vlSelf->riscv_soc__DOT__sram3__DOT__sram_5);
    VL_CONCAT_WWW(7680,7552,128, __Vtemp1321, __Vtemp1320, vlSelf->riscv_soc__DOT__sram3__DOT__sram_4);
    VL_CONCAT_WWW(7808,7680,128, __Vtemp1322, __Vtemp1321, vlSelf->riscv_soc__DOT__sram3__DOT__sram_3);
    VL_CONCAT_WWW(7936,7808,128, __Vtemp1323, __Vtemp1322, vlSelf->riscv_soc__DOT__sram3__DOT__sram_2);
    VL_CONCAT_WWW(8064,7936,128, __Vtemp1324, __Vtemp1323, vlSelf->riscv_soc__DOT__sram3__DOT__sram_1);
    VL_CONCAT_WWW(8192,8064,128, __Vtemp1325, __Vtemp1324, vlSelf->riscv_soc__DOT__sram3__DOT__sram_0);
    vlSelf->riscv_soc__DOT__sram3__DOT___GEN_1[0U] 
        = (((0U == (0x1fU & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram_addr) 
                             << 7U))) ? 0U : (__Vtemp1325[
                                              ((IData)(1U) 
                                               + (0xfcU 
                                                  & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram_addr) 
                                                     << 2U)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram_addr) 
                                                      << 7U))))) 
           | (__Vtemp1325[(0xfcU & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram_addr) 
                                    << 2U))] >> (0x1fU 
                                                 & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram_addr) 
                                                    << 7U))));
    vlSelf->riscv_soc__DOT__sram3__DOT___GEN_1[1U] 
        = (((0U == (0x1fU & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram_addr) 
                             << 7U))) ? 0U : (__Vtemp1325[
                                              ((IData)(2U) 
                                               + (0xfcU 
                                                  & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram_addr) 
                                                     << 2U)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram_addr) 
                                                      << 7U))))) 
           | (__Vtemp1325[((IData)(1U) + (0xfcU & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram_addr) 
                                                   << 2U)))] 
              >> (0x1fU & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram_addr) 
                           << 7U))));
    vlSelf->riscv_soc__DOT__sram3__DOT___GEN_1[2U] 
        = (((0U == (0x1fU & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram_addr) 
                             << 7U))) ? 0U : (__Vtemp1325[
                                              ((IData)(3U) 
                                               + (0xfcU 
                                                  & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram_addr) 
                                                     << 2U)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram_addr) 
                                                      << 7U))))) 
           | (__Vtemp1325[((IData)(2U) + (0xfcU & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram_addr) 
                                                   << 2U)))] 
              >> (0x1fU & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram_addr) 
                           << 7U))));
    vlSelf->riscv_soc__DOT__sram3__DOT___GEN_1[3U] 
        = (((0U == (0x1fU & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram_addr) 
                             << 7U))) ? 0U : (__Vtemp1325[
                                              ((IData)(4U) 
                                               + (0xfcU 
                                                  & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram_addr) 
                                                     << 2U)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram_addr) 
                                                      << 7U))))) 
           | (__Vtemp1325[((IData)(3U) + (0xfcU & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__sram_addr) 
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
    VL_EXTEND_WQ(128,54, __Vtemp1328, (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                       >> 0xaU));
    VL_EXTEND_WQ(128,54, __Vtemp1329, (0x3fffffffffffffULL 
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
                                                                  __Vtemp1328[1U]
                                                                   : 
                                                                  __Vtemp1329[1U]))) 
                                                 << 0x20U) 
                                                | (QData)((IData)(
                                                                  ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__w_r_pass0_val)
                                                                    ? 
                                                                   __Vtemp1328[0U]
                                                                    : 
                                                                   __Vtemp1329[0U]))))));
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
    VL_EXTEND_WQ(128,54, __Vtemp1332, (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                       >> 0xaU));
    VL_EXTEND_WQ(128,54, __Vtemp1333, (0x3fffffffffffffULL 
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
                                                                  __Vtemp1332[1U]
                                                                   : 
                                                                  __Vtemp1333[1U]))) 
                                                 << 0x20U) 
                                                | (QData)((IData)(
                                                                  ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__w_r_pass1_val)
                                                                    ? 
                                                                   __Vtemp1332[0U]
                                                                    : 
                                                                   __Vtemp1333[0U]))))));
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
    VL_EXTEND_WQ(127,64, __Vtemp1341, riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__op_data1);
    VL_SHIFTL_WWI(127,127,6, __Vtemp1342, __Vtemp1341, (IData)(riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__shift_rs2_data));
    __Vtemp1345[0U] = (IData)((((QData)((IData)(riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___GEN[1U])) 
                                << 0x20U) | (QData)((IData)(
                                                            riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___GEN[0U]))));
    __Vtemp1345[1U] = (IData)(((((QData)((IData)(riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___GEN[1U])) 
                                 << 0x20U) | (QData)((IData)(
                                                             riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___GEN[0U]))) 
                               >> 0x20U));
    __Vtemp1345[2U] = (IData)((((QData)((IData)(__Vtemp1342[1U])) 
                                << 0x20U) | (QData)((IData)(
                                                            __Vtemp1342[0U]))));
    __Vtemp1345[3U] = (IData)(((((QData)((IData)(__Vtemp1342[1U])) 
                                 << 0x20U) | (QData)((IData)(
                                                             __Vtemp1342[0U]))) 
                               >> 0x20U));
    __Vtemp1345[4U] = (IData)((QData)((IData)(riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__s_rs1_l_rs2)));
    __Vtemp1345[5U] = (IData)(((QData)((IData)(riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__s_rs1_l_rs2)) 
                               >> 0x20U));
    __Vtemp1345[6U] = (IData)((QData)((IData)((1U & 
                                               (~ riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___GEN[2U])))));
    __Vtemp1345[7U] = (IData)(((QData)((IData)((1U 
                                                & (~ 
                                                   riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___GEN[2U])))) 
                               >> 0x20U));
    __Vtemp1345[8U] = (IData)((riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__op_data1 
                               ^ riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__rs2_data));
    __Vtemp1345[9U] = (IData)(((riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__op_data1 
                                ^ riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__rs2_data) 
                               >> 0x20U));
    __Vtemp1345[0xaU] = (IData)(((1U == (3U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                               >> 5U)))
                                  ? VL_SHIFTRS_QQQ(64,64,64, riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__op_data1, (QData)((IData)(riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__shift_rs2_data)))
                                  : VL_SHIFTR_QQQ(64,64,64, 
                                                  ((1U 
                                                    & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType))
                                                    ? (QData)((IData)(riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__op_data1))
                                                    : vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__rs1_data), (QData)((IData)(riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__shift_rs2_data)))));
    __Vtemp1345[0xbU] = (IData)((((1U == (3U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                                >> 5U)))
                                   ? VL_SHIFTRS_QQQ(64,64,64, riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__op_data1, (QData)((IData)(riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__shift_rs2_data)))
                                   : VL_SHIFTR_QQQ(64,64,64, 
                                                   ((1U 
                                                     & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType))
                                                     ? (QData)((IData)(riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__op_data1))
                                                     : vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__rs1_data), (QData)((IData)(riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__shift_rs2_data)))) 
                                 >> 0x20U));
    __Vtemp1345[0xcU] = (IData)((riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__op_data1 
                                 | riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__rs2_data));
    __Vtemp1345[0xdU] = (IData)(((riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__op_data1 
                                  | riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__rs2_data) 
                                 >> 0x20U));
    __Vtemp1345[0xeU] = (IData)((riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__op_data1 
                                 & riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__rs2_data));
    __Vtemp1345[0xfU] = (IData)(((riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__op_data1 
                                  & riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__rs2_data) 
                                 >> 0x20U));
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__dst_data 
        = ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_opType))
            ? (4ULL + vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_pc)
            : (((QData)((IData)(__Vtemp1345[(((IData)(0x3fU) 
                                              + (0x1c0U 
                                                 & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                                    << 4U))) 
                                             >> 5U)])) 
                << 0x20U) | (QData)((IData)(__Vtemp1345[
                                            (0xeU & 
                                             ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                              >> 1U))]))));
    VL_EXTEND_WQ(65,64, __Vtemp1348, (4ULL + vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_pc));
    VL_EXTEND_WQ(65,64, __Vtemp1351, (4ULL + vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_pc));
    VL_EXTEND_WQ(65,64, __Vtemp1355, (4ULL + vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_pc));
    VL_EXTEND_WQ(65,64, __Vtemp1359, (4ULL + vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_pc));
    VL_EXTEND_WQ(65,64, __Vtemp1366, (4ULL + vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_pc));
    VL_EXTEND_WQ(65,64, __Vtemp1370, (4ULL + vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_pc));
    if (riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__is_eq) {
        __Vtemp1372[0U] = (IData)(riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___add_pc_T_1);
        __Vtemp1372[1U] = (IData)((riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___add_pc_T_1 
                                   >> 0x20U));
    } else {
        __Vtemp1372[0U] = __Vtemp1370[0U];
        __Vtemp1372[1U] = __Vtemp1370[1U];
    }
    __Vtemp1372[2U] = ((((IData)(riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__is_eq)
                          ? __Vtemp1366[0U] : (IData)(riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___add_pc_T_1)) 
                        << 1U) | ((IData)(riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__is_eq)
                                   ? 1U : __Vtemp1370[2U]));
    __Vtemp1372[3U] = ((((IData)(riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__is_eq)
                          ? __Vtemp1366[0U] : (IData)(riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___add_pc_T_1)) 
                        >> 0x1fU) | (((IData)(riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__is_eq)
                                       ? __Vtemp1366[1U]
                                       : (IData)((riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___add_pc_T_1 
                                                  >> 0x20U))) 
                                     << 1U));
    __Vtemp1372[4U] = ((((IData)(riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__is_eq)
                          ? __Vtemp1366[1U] : (IData)(
                                                      (riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___add_pc_T_1 
                                                       >> 0x20U))) 
                        >> 0x1fU) | (((IData)(riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__is_eq)
                                       ? __Vtemp1366[2U]
                                       : 1U) << 1U));
    VL_EXTEND_WW(131,130, __Vtemp1373, __Vtemp1372);
    __Vtemp1375[0U] = __Vtemp1373[0U];
    __Vtemp1375[1U] = __Vtemp1373[1U];
    __Vtemp1375[2U] = __Vtemp1373[2U];
    __Vtemp1375[3U] = __Vtemp1373[3U];
    __Vtemp1375[4U] = (((IData)((0x8000000000000000ULL 
                                 | (riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___add_pc_T_1 
                                    >> 1U))) << 3U) 
                       | __Vtemp1373[4U]);
    __Vtemp1375[5U] = (((IData)((0x8000000000000000ULL 
                                 | (riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___add_pc_T_1 
                                    >> 1U))) >> 0x1dU) 
                       | ((IData)(((0x8000000000000000ULL 
                                    | (riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___add_pc_T_1 
                                       >> 1U)) >> 0x20U)) 
                          << 3U));
    __Vtemp1375[6U] = (((IData)(riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___add_pc_T_1) 
                        << 3U) | ((IData)(((0x8000000000000000ULL 
                                            | (riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___add_pc_T_1 
                                               >> 1U)) 
                                           >> 0x20U)) 
                                  >> 0x1dU));
    __Vtemp1375[7U] = (((IData)(riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___add_pc_T_1) 
                        >> 0x1dU) | ((IData)((riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___add_pc_T_1 
                                              >> 0x20U)) 
                                     << 3U));
    __Vtemp1375[8U] = (8U | (((IData)((riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___add_pc_T_1 
                                       >> 0x20U)) >> 0x1dU) 
                             | (((IData)(riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__s_rs1_l_rs2)
                                  ? (IData)(riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___add_pc_T_1)
                                  : __Vtemp1359[0U]) 
                                << 4U)));
    __Vtemp1375[9U] = ((7U & (((IData)(riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__s_rs1_l_rs2)
                                ? (IData)(riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___add_pc_T_1)
                                : __Vtemp1359[0U]) 
                              >> 0x1cU)) | ((8U & (
                                                   ((IData)(riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__s_rs1_l_rs2)
                                                     ? (IData)(riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___add_pc_T_1)
                                                     : 
                                                    __Vtemp1359[0U]) 
                                                   >> 0x1cU)) 
                                            | (((IData)(riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__s_rs1_l_rs2)
                                                 ? (IData)(
                                                           (riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___add_pc_T_1 
                                                            >> 0x20U))
                                                 : 
                                                __Vtemp1359[1U]) 
                                               << 4U)));
    __Vtemp1375[0xaU] = ((7U & (((IData)(riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__s_rs1_l_rs2)
                                  ? (IData)((riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___add_pc_T_1 
                                             >> 0x20U))
                                  : __Vtemp1359[1U]) 
                                >> 0x1cU)) | ((((IData)(riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__s_rs1_l_rs2)
                                                 ? 
                                                __Vtemp1355[0U]
                                                 : (IData)(riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___add_pc_T_1)) 
                                               << 5U) 
                                              | ((8U 
                                                  & (((IData)(riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__s_rs1_l_rs2)
                                                       ? (IData)(
                                                                 (riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___add_pc_T_1 
                                                                  >> 0x20U))
                                                       : 
                                                      __Vtemp1359[1U]) 
                                                     >> 0x1cU)) 
                                                 | (((IData)(riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__s_rs1_l_rs2)
                                                      ? 1U
                                                      : 
                                                     __Vtemp1359[2U]) 
                                                    << 4U))));
    __Vtemp1375[0xbU] = ((7U & ((((IData)(riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__s_rs1_l_rs2)
                                   ? __Vtemp1355[0U]
                                   : (IData)(riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___add_pc_T_1)) 
                                 >> 0x1bU) | (((IData)(riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__s_rs1_l_rs2)
                                                ? 1U
                                                : __Vtemp1359[2U]) 
                                              >> 0x1cU))) 
                         | ((0x18U & (((IData)(riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__s_rs1_l_rs2)
                                        ? __Vtemp1355[0U]
                                        : (IData)(riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___add_pc_T_1)) 
                                      >> 0x1bU)) | 
                            (((IData)(riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__s_rs1_l_rs2)
                               ? __Vtemp1355[1U] : (IData)(
                                                           (riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___add_pc_T_1 
                                                            >> 0x20U))) 
                             << 5U)));
    __Vtemp1375[0xcU] = ((7U & (((IData)(riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__s_rs1_l_rs2)
                                  ? __Vtemp1355[1U]
                                  : (IData)((riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___add_pc_T_1 
                                             >> 0x20U))) 
                                >> 0x1bU)) | ((((1U 
                                                 & riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___GEN[2U])
                                                 ? 
                                                __Vtemp1351[0U]
                                                 : (IData)(riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___add_pc_T_1)) 
                                               << 6U) 
                                              | ((0x18U 
                                                  & (((IData)(riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__s_rs1_l_rs2)
                                                       ? 
                                                      __Vtemp1355[1U]
                                                       : (IData)(
                                                                 (riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___add_pc_T_1 
                                                                  >> 0x20U))) 
                                                     >> 0x1bU)) 
                                                 | (((IData)(riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__s_rs1_l_rs2)
                                                      ? 
                                                     __Vtemp1355[2U]
                                                      : 1U) 
                                                    << 5U))));
    __Vtemp1375[0xdU] = ((7U & ((((1U & riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___GEN[2U])
                                   ? __Vtemp1351[0U]
                                   : (IData)(riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___add_pc_T_1)) 
                                 >> 0x1aU) | (((IData)(riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__s_rs1_l_rs2)
                                                ? __Vtemp1355[2U]
                                                : 1U) 
                                              >> 0x1bU))) 
                         | ((0x38U & (((1U & riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___GEN[2U])
                                        ? __Vtemp1351[0U]
                                        : (IData)(riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___add_pc_T_1)) 
                                      >> 0x1aU)) | 
                            (((1U & riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___GEN[2U])
                               ? __Vtemp1351[1U] : (IData)(
                                                           (riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___add_pc_T_1 
                                                            >> 0x20U))) 
                             << 6U)));
    __Vtemp1375[0xeU] = ((7U & (((1U & riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___GEN[2U])
                                  ? __Vtemp1351[1U]
                                  : (IData)((riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___add_pc_T_1 
                                             >> 0x20U))) 
                                >> 0x1aU)) | ((((1U 
                                                 & riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___GEN[2U])
                                                 ? (IData)(riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___add_pc_T_1)
                                                 : 
                                                __Vtemp1348[0U]) 
                                               << 7U) 
                                              | ((0x38U 
                                                  & (((1U 
                                                       & riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___GEN[2U])
                                                       ? 
                                                      __Vtemp1351[1U]
                                                       : (IData)(
                                                                 (riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___add_pc_T_1 
                                                                  >> 0x20U))) 
                                                     >> 0x1aU)) 
                                                 | (((1U 
                                                      & riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___GEN[2U])
                                                      ? 
                                                     __Vtemp1351[2U]
                                                      : 1U) 
                                                    << 6U))));
    __Vtemp1375[0xfU] = ((7U & ((((1U & riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___GEN[2U])
                                   ? (IData)(riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___add_pc_T_1)
                                   : __Vtemp1348[0U]) 
                                 >> 0x19U) | (((1U 
                                                & riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___GEN[2U])
                                                ? __Vtemp1351[2U]
                                                : 1U) 
                                              >> 0x1aU))) 
                         | ((0x78U & (((1U & riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___GEN[2U])
                                        ? (IData)(riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___add_pc_T_1)
                                        : __Vtemp1348[0U]) 
                                      >> 0x19U)) | 
                            (((1U & riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___GEN[2U])
                               ? (IData)((riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___add_pc_T_1 
                                          >> 0x20U))
                               : __Vtemp1348[1U]) << 7U)));
    __Vtemp1375[0x10U] = ((7U & (((1U & riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___GEN[2U])
                                   ? (IData)((riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___add_pc_T_1 
                                              >> 0x20U))
                                   : __Vtemp1348[1U]) 
                                 >> 0x19U)) | ((0x78U 
                                                & (((1U 
                                                     & riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___GEN[2U])
                                                     ? (IData)(
                                                               (riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___add_pc_T_1 
                                                                >> 0x20U))
                                                     : 
                                                    __Vtemp1348[1U]) 
                                                   >> 0x19U)) 
                                               | (((1U 
                                                    & riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___GEN[2U])
                                                    ? 1U
                                                    : 
                                                   __Vtemp1348[2U]) 
                                                  << 7U)));
    if ((0x207U >= (0x3ffU & ((IData)(0x41U) * (7U 
                                                & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                                   >> 2U)))))) {
        __Vtemp1379[0U] = (((0U == (0x1fU & ((IData)(0x41U) 
                                             * (7U 
                                                & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                                   >> 2U)))))
                             ? 0U : (__Vtemp1375[((IData)(1U) 
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
                           | (__Vtemp1375[(0x1fU & 
                                           (((IData)(0x41U) 
                                             * (7U 
                                                & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                                   >> 2U))) 
                                            >> 5U))] 
                              >> (0x1fU & ((IData)(0x41U) 
                                           * (7U & 
                                              ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                               >> 2U))))));
        __Vtemp1379[1U] = (((0U == (0x1fU & ((IData)(0x41U) 
                                             * (7U 
                                                & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                                   >> 2U)))))
                             ? 0U : (__Vtemp1375[((IData)(2U) 
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
                           | (__Vtemp1375[((IData)(1U) 
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
        __Vtemp1379[2U] = (((0U == (0x1fU & ((IData)(0x41U) 
                                             * (7U 
                                                & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                                   >> 2U)))))
                             ? 0U : (__Vtemp1375[((IData)(3U) 
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
                           | (__Vtemp1375[((IData)(2U) 
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
        __Vtemp1379[0U] = 0U;
        __Vtemp1379[1U] = 0U;
        __Vtemp1379[2U] = 0U;
    }
    if ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_opType))) {
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___GEN_4[0U] 
            = __Vtemp1379[0U];
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___GEN_4[1U] 
            = __Vtemp1379[1U];
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___GEN_4[2U] 
            = (1U & __Vtemp1379[2U]);
    } else {
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___GEN_4[0U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___GEN_4[1U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___GEN_4[2U] = 0U;
    }
    __Vtemp1398[0U] = vlSelf->riscv_soc__DOT__sram4__DOT__sram_48[0U];
    __Vtemp1398[1U] = vlSelf->riscv_soc__DOT__sram4__DOT__sram_48[1U];
    __Vtemp1398[2U] = vlSelf->riscv_soc__DOT__sram4__DOT__sram_48[2U];
    __Vtemp1398[3U] = vlSelf->riscv_soc__DOT__sram4__DOT__sram_48[3U];
    __Vtemp1398[4U] = vlSelf->riscv_soc__DOT__sram4__DOT__sram_49[0U];
    __Vtemp1398[5U] = vlSelf->riscv_soc__DOT__sram4__DOT__sram_49[1U];
    __Vtemp1398[6U] = vlSelf->riscv_soc__DOT__sram4__DOT__sram_49[2U];
    __Vtemp1398[7U] = vlSelf->riscv_soc__DOT__sram4__DOT__sram_49[3U];
    __Vtemp1398[8U] = vlSelf->riscv_soc__DOT__sram4__DOT__sram_50[0U];
    __Vtemp1398[9U] = vlSelf->riscv_soc__DOT__sram4__DOT__sram_50[1U];
    __Vtemp1398[0xaU] = vlSelf->riscv_soc__DOT__sram4__DOT__sram_50[2U];
    __Vtemp1398[0xbU] = vlSelf->riscv_soc__DOT__sram4__DOT__sram_50[3U];
    __Vtemp1398[0xcU] = vlSelf->riscv_soc__DOT__sram4__DOT__sram_51[0U];
    __Vtemp1398[0xdU] = vlSelf->riscv_soc__DOT__sram4__DOT__sram_51[1U];
    __Vtemp1398[0xeU] = vlSelf->riscv_soc__DOT__sram4__DOT__sram_51[2U];
    __Vtemp1398[0xfU] = vlSelf->riscv_soc__DOT__sram4__DOT__sram_51[3U];
    __Vtemp1398[0x10U] = vlSelf->riscv_soc__DOT__sram4__DOT__sram_52[0U];
    __Vtemp1398[0x11U] = vlSelf->riscv_soc__DOT__sram4__DOT__sram_52[1U];
    __Vtemp1398[0x12U] = vlSelf->riscv_soc__DOT__sram4__DOT__sram_52[2U];
    __Vtemp1398[0x13U] = vlSelf->riscv_soc__DOT__sram4__DOT__sram_52[3U];
    __Vtemp1398[0x14U] = vlSelf->riscv_soc__DOT__sram4__DOT__sram_53[0U];
    __Vtemp1398[0x15U] = vlSelf->riscv_soc__DOT__sram4__DOT__sram_53[1U];
    __Vtemp1398[0x16U] = vlSelf->riscv_soc__DOT__sram4__DOT__sram_53[2U];
    __Vtemp1398[0x17U] = vlSelf->riscv_soc__DOT__sram4__DOT__sram_53[3U];
    __Vtemp1398[0x18U] = vlSelf->riscv_soc__DOT__sram4__DOT__sram_54[0U];
    __Vtemp1398[0x19U] = vlSelf->riscv_soc__DOT__sram4__DOT__sram_54[1U];
    __Vtemp1398[0x1aU] = vlSelf->riscv_soc__DOT__sram4__DOT__sram_54[2U];
    __Vtemp1398[0x1bU] = vlSelf->riscv_soc__DOT__sram4__DOT__sram_54[3U];
    __Vtemp1398[0x1cU] = vlSelf->riscv_soc__DOT__sram4__DOT__sram_55[0U];
    __Vtemp1398[0x1dU] = vlSelf->riscv_soc__DOT__sram4__DOT__sram_55[1U];
    __Vtemp1398[0x1eU] = vlSelf->riscv_soc__DOT__sram4__DOT__sram_55[2U];
    __Vtemp1398[0x1fU] = vlSelf->riscv_soc__DOT__sram4__DOT__sram_55[3U];
    __Vtemp1398[0x20U] = vlSelf->riscv_soc__DOT__sram4__DOT__sram_56[0U];
    __Vtemp1398[0x21U] = vlSelf->riscv_soc__DOT__sram4__DOT__sram_56[1U];
    __Vtemp1398[0x22U] = vlSelf->riscv_soc__DOT__sram4__DOT__sram_56[2U];
    __Vtemp1398[0x23U] = vlSelf->riscv_soc__DOT__sram4__DOT__sram_56[3U];
    __Vtemp1398[0x24U] = vlSelf->riscv_soc__DOT__sram4__DOT__sram_57[0U];
    __Vtemp1398[0x25U] = vlSelf->riscv_soc__DOT__sram4__DOT__sram_57[1U];
    __Vtemp1398[0x26U] = vlSelf->riscv_soc__DOT__sram4__DOT__sram_57[2U];
    __Vtemp1398[0x27U] = vlSelf->riscv_soc__DOT__sram4__DOT__sram_57[3U];
    __Vtemp1398[0x28U] = vlSelf->riscv_soc__DOT__sram4__DOT__sram_58[0U];
    __Vtemp1398[0x29U] = vlSelf->riscv_soc__DOT__sram4__DOT__sram_58[1U];
    __Vtemp1398[0x2aU] = vlSelf->riscv_soc__DOT__sram4__DOT__sram_58[2U];
    __Vtemp1398[0x2bU] = vlSelf->riscv_soc__DOT__sram4__DOT__sram_58[3U];
    __Vtemp1398[0x2cU] = vlSelf->riscv_soc__DOT__sram4__DOT__sram_59[0U];
    __Vtemp1398[0x2dU] = vlSelf->riscv_soc__DOT__sram4__DOT__sram_59[1U];
    __Vtemp1398[0x2eU] = vlSelf->riscv_soc__DOT__sram4__DOT__sram_59[2U];
    __Vtemp1398[0x2fU] = vlSelf->riscv_soc__DOT__sram4__DOT__sram_59[3U];
    __Vtemp1398[0x30U] = vlSelf->riscv_soc__DOT__sram4__DOT__sram_60[0U];
    __Vtemp1398[0x31U] = vlSelf->riscv_soc__DOT__sram4__DOT__sram_60[1U];
    __Vtemp1398[0x32U] = vlSelf->riscv_soc__DOT__sram4__DOT__sram_60[2U];
    __Vtemp1398[0x33U] = vlSelf->riscv_soc__DOT__sram4__DOT__sram_60[3U];
    __Vtemp1398[0x34U] = vlSelf->riscv_soc__DOT__sram4__DOT__sram_61[0U];
    __Vtemp1398[0x35U] = vlSelf->riscv_soc__DOT__sram4__DOT__sram_61[1U];
    __Vtemp1398[0x36U] = vlSelf->riscv_soc__DOT__sram4__DOT__sram_61[2U];
    __Vtemp1398[0x37U] = vlSelf->riscv_soc__DOT__sram4__DOT__sram_61[3U];
    __Vtemp1398[0x38U] = vlSelf->riscv_soc__DOT__sram4__DOT__sram_62[0U];
    __Vtemp1398[0x39U] = vlSelf->riscv_soc__DOT__sram4__DOT__sram_62[1U];
    __Vtemp1398[0x3aU] = vlSelf->riscv_soc__DOT__sram4__DOT__sram_62[2U];
    __Vtemp1398[0x3bU] = vlSelf->riscv_soc__DOT__sram4__DOT__sram_62[3U];
    __Vtemp1398[0x3cU] = vlSelf->riscv_soc__DOT__sram4__DOT__sram_63[0U];
    __Vtemp1398[0x3dU] = vlSelf->riscv_soc__DOT__sram4__DOT__sram_63[1U];
    __Vtemp1398[0x3eU] = vlSelf->riscv_soc__DOT__sram4__DOT__sram_63[2U];
    __Vtemp1398[0x3fU] = vlSelf->riscv_soc__DOT__sram4__DOT__sram_63[3U];
    VL_CONCAT_WWW(2176,2048,128, __Vtemp1399, __Vtemp1398, vlSelf->riscv_soc__DOT__sram4__DOT__sram_47);
    VL_CONCAT_WWW(2304,2176,128, __Vtemp1400, __Vtemp1399, vlSelf->riscv_soc__DOT__sram4__DOT__sram_46);
    VL_CONCAT_WWW(2432,2304,128, __Vtemp1401, __Vtemp1400, vlSelf->riscv_soc__DOT__sram4__DOT__sram_45);
    VL_CONCAT_WWW(2560,2432,128, __Vtemp1402, __Vtemp1401, vlSelf->riscv_soc__DOT__sram4__DOT__sram_44);
    VL_CONCAT_WWW(2688,2560,128, __Vtemp1403, __Vtemp1402, vlSelf->riscv_soc__DOT__sram4__DOT__sram_43);
    VL_CONCAT_WWW(2816,2688,128, __Vtemp1404, __Vtemp1403, vlSelf->riscv_soc__DOT__sram4__DOT__sram_42);
    VL_CONCAT_WWW(2944,2816,128, __Vtemp1405, __Vtemp1404, vlSelf->riscv_soc__DOT__sram4__DOT__sram_41);
    VL_CONCAT_WWW(3072,2944,128, __Vtemp1406, __Vtemp1405, vlSelf->riscv_soc__DOT__sram4__DOT__sram_40);
    VL_CONCAT_WWW(3200,3072,128, __Vtemp1407, __Vtemp1406, vlSelf->riscv_soc__DOT__sram4__DOT__sram_39);
    VL_CONCAT_WWW(3328,3200,128, __Vtemp1408, __Vtemp1407, vlSelf->riscv_soc__DOT__sram4__DOT__sram_38);
    VL_CONCAT_WWW(3456,3328,128, __Vtemp1409, __Vtemp1408, vlSelf->riscv_soc__DOT__sram4__DOT__sram_37);
    VL_CONCAT_WWW(3584,3456,128, __Vtemp1410, __Vtemp1409, vlSelf->riscv_soc__DOT__sram4__DOT__sram_36);
    VL_CONCAT_WWW(3712,3584,128, __Vtemp1411, __Vtemp1410, vlSelf->riscv_soc__DOT__sram4__DOT__sram_35);
    VL_CONCAT_WWW(3840,3712,128, __Vtemp1412, __Vtemp1411, vlSelf->riscv_soc__DOT__sram4__DOT__sram_34);
    VL_CONCAT_WWW(3968,3840,128, __Vtemp1413, __Vtemp1412, vlSelf->riscv_soc__DOT__sram4__DOT__sram_33);
    VL_CONCAT_WWW(4096,3968,128, __Vtemp1414, __Vtemp1413, vlSelf->riscv_soc__DOT__sram4__DOT__sram_32);
    VL_CONCAT_WWW(4224,4096,128, __Vtemp1415, __Vtemp1414, vlSelf->riscv_soc__DOT__sram4__DOT__sram_31);
    VL_CONCAT_WWW(4352,4224,128, __Vtemp1416, __Vtemp1415, vlSelf->riscv_soc__DOT__sram4__DOT__sram_30);
    VL_CONCAT_WWW(4480,4352,128, __Vtemp1417, __Vtemp1416, vlSelf->riscv_soc__DOT__sram4__DOT__sram_29);
    VL_CONCAT_WWW(4608,4480,128, __Vtemp1418, __Vtemp1417, vlSelf->riscv_soc__DOT__sram4__DOT__sram_28);
    VL_CONCAT_WWW(4736,4608,128, __Vtemp1419, __Vtemp1418, vlSelf->riscv_soc__DOT__sram4__DOT__sram_27);
    VL_CONCAT_WWW(4864,4736,128, __Vtemp1420, __Vtemp1419, vlSelf->riscv_soc__DOT__sram4__DOT__sram_26);
    VL_CONCAT_WWW(4992,4864,128, __Vtemp1421, __Vtemp1420, vlSelf->riscv_soc__DOT__sram4__DOT__sram_25);
    VL_CONCAT_WWW(5120,4992,128, __Vtemp1422, __Vtemp1421, vlSelf->riscv_soc__DOT__sram4__DOT__sram_24);
    VL_CONCAT_WWW(5248,5120,128, __Vtemp1423, __Vtemp1422, vlSelf->riscv_soc__DOT__sram4__DOT__sram_23);
    VL_CONCAT_WWW(5376,5248,128, __Vtemp1424, __Vtemp1423, vlSelf->riscv_soc__DOT__sram4__DOT__sram_22);
    VL_CONCAT_WWW(5504,5376,128, __Vtemp1425, __Vtemp1424, vlSelf->riscv_soc__DOT__sram4__DOT__sram_21);
    VL_CONCAT_WWW(5632,5504,128, __Vtemp1426, __Vtemp1425, vlSelf->riscv_soc__DOT__sram4__DOT__sram_20);
    VL_CONCAT_WWW(5760,5632,128, __Vtemp1427, __Vtemp1426, vlSelf->riscv_soc__DOT__sram4__DOT__sram_19);
    VL_CONCAT_WWW(5888,5760,128, __Vtemp1428, __Vtemp1427, vlSelf->riscv_soc__DOT__sram4__DOT__sram_18);
    VL_CONCAT_WWW(6016,5888,128, __Vtemp1429, __Vtemp1428, vlSelf->riscv_soc__DOT__sram4__DOT__sram_17);
    VL_CONCAT_WWW(6144,6016,128, __Vtemp1430, __Vtemp1429, vlSelf->riscv_soc__DOT__sram4__DOT__sram_16);
    VL_CONCAT_WWW(6272,6144,128, __Vtemp1431, __Vtemp1430, vlSelf->riscv_soc__DOT__sram4__DOT__sram_15);
    VL_CONCAT_WWW(6400,6272,128, __Vtemp1432, __Vtemp1431, vlSelf->riscv_soc__DOT__sram4__DOT__sram_14);
    VL_CONCAT_WWW(6528,6400,128, __Vtemp1433, __Vtemp1432, vlSelf->riscv_soc__DOT__sram4__DOT__sram_13);
    VL_CONCAT_WWW(6656,6528,128, __Vtemp1434, __Vtemp1433, vlSelf->riscv_soc__DOT__sram4__DOT__sram_12);
    VL_CONCAT_WWW(6784,6656,128, __Vtemp1435, __Vtemp1434, vlSelf->riscv_soc__DOT__sram4__DOT__sram_11);
    VL_CONCAT_WWW(6912,6784,128, __Vtemp1436, __Vtemp1435, vlSelf->riscv_soc__DOT__sram4__DOT__sram_10);
    VL_CONCAT_WWW(7040,6912,128, __Vtemp1437, __Vtemp1436, vlSelf->riscv_soc__DOT__sram4__DOT__sram_9);
    VL_CONCAT_WWW(7168,7040,128, __Vtemp1438, __Vtemp1437, vlSelf->riscv_soc__DOT__sram4__DOT__sram_8);
    VL_CONCAT_WWW(7296,7168,128, __Vtemp1439, __Vtemp1438, vlSelf->riscv_soc__DOT__sram4__DOT__sram_7);
    VL_CONCAT_WWW(7424,7296,128, __Vtemp1440, __Vtemp1439, vlSelf->riscv_soc__DOT__sram4__DOT__sram_6);
    VL_CONCAT_WWW(7552,7424,128, __Vtemp1441, __Vtemp1440, vlSelf->riscv_soc__DOT__sram4__DOT__sram_5);
    VL_CONCAT_WWW(7680,7552,128, __Vtemp1442, __Vtemp1441, vlSelf->riscv_soc__DOT__sram4__DOT__sram_4);
    VL_CONCAT_WWW(7808,7680,128, __Vtemp1443, __Vtemp1442, vlSelf->riscv_soc__DOT__sram4__DOT__sram_3);
    VL_CONCAT_WWW(7936,7808,128, __Vtemp1444, __Vtemp1443, vlSelf->riscv_soc__DOT__sram4__DOT__sram_2);
    VL_CONCAT_WWW(8064,7936,128, __Vtemp1445, __Vtemp1444, vlSelf->riscv_soc__DOT__sram4__DOT__sram_1);
    VL_CONCAT_WWW(8192,8064,128, __Vtemp1446, __Vtemp1445, vlSelf->riscv_soc__DOT__sram4__DOT__sram_0);
    vlSelf->riscv_soc__DOT__sram4__DOT___GEN_1[0U] 
        = (((0U == (0x1fU & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram0_A) 
                             << 7U))) ? 0U : (__Vtemp1446[
                                              ((IData)(1U) 
                                               + (0xfcU 
                                                  & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram0_A) 
                                                     << 2U)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram0_A) 
                                                      << 7U))))) 
           | (__Vtemp1446[(0xfcU & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram0_A) 
                                    << 2U))] >> (0x1fU 
                                                 & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram0_A) 
                                                    << 7U))));
    vlSelf->riscv_soc__DOT__sram4__DOT___GEN_1[1U] 
        = (((0U == (0x1fU & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram0_A) 
                             << 7U))) ? 0U : (__Vtemp1446[
                                              ((IData)(2U) 
                                               + (0xfcU 
                                                  & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram0_A) 
                                                     << 2U)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram0_A) 
                                                      << 7U))))) 
           | (__Vtemp1446[((IData)(1U) + (0xfcU & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram0_A) 
                                                   << 2U)))] 
              >> (0x1fU & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram0_A) 
                           << 7U))));
    vlSelf->riscv_soc__DOT__sram4__DOT___GEN_1[2U] 
        = (((0U == (0x1fU & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram0_A) 
                             << 7U))) ? 0U : (__Vtemp1446[
                                              ((IData)(3U) 
                                               + (0xfcU 
                                                  & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram0_A) 
                                                     << 2U)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram0_A) 
                                                      << 7U))))) 
           | (__Vtemp1446[((IData)(2U) + (0xfcU & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram0_A) 
                                                   << 2U)))] 
              >> (0x1fU & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram0_A) 
                           << 7U))));
    vlSelf->riscv_soc__DOT__sram4__DOT___GEN_1[3U] 
        = (((0U == (0x1fU & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram0_A) 
                             << 7U))) ? 0U : (__Vtemp1446[
                                              ((IData)(4U) 
                                               + (0xfcU 
                                                  & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram0_A) 
                                                     << 2U)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram0_A) 
                                                      << 7U))))) 
           | (__Vtemp1446[((IData)(3U) + (0xfcU & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram0_A) 
                                                   << 2U)))] 
              >> (0x1fU & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram0_A) 
                           << 7U))));
    __Vtemp1462[0U] = vlSelf->riscv_soc__DOT__sram5__DOT__sram_48[0U];
    __Vtemp1462[1U] = vlSelf->riscv_soc__DOT__sram5__DOT__sram_48[1U];
    __Vtemp1462[2U] = vlSelf->riscv_soc__DOT__sram5__DOT__sram_48[2U];
    __Vtemp1462[3U] = vlSelf->riscv_soc__DOT__sram5__DOT__sram_48[3U];
    __Vtemp1462[4U] = vlSelf->riscv_soc__DOT__sram5__DOT__sram_49[0U];
    __Vtemp1462[5U] = vlSelf->riscv_soc__DOT__sram5__DOT__sram_49[1U];
    __Vtemp1462[6U] = vlSelf->riscv_soc__DOT__sram5__DOT__sram_49[2U];
    __Vtemp1462[7U] = vlSelf->riscv_soc__DOT__sram5__DOT__sram_49[3U];
    __Vtemp1462[8U] = vlSelf->riscv_soc__DOT__sram5__DOT__sram_50[0U];
    __Vtemp1462[9U] = vlSelf->riscv_soc__DOT__sram5__DOT__sram_50[1U];
    __Vtemp1462[0xaU] = vlSelf->riscv_soc__DOT__sram5__DOT__sram_50[2U];
    __Vtemp1462[0xbU] = vlSelf->riscv_soc__DOT__sram5__DOT__sram_50[3U];
    __Vtemp1462[0xcU] = vlSelf->riscv_soc__DOT__sram5__DOT__sram_51[0U];
    __Vtemp1462[0xdU] = vlSelf->riscv_soc__DOT__sram5__DOT__sram_51[1U];
    __Vtemp1462[0xeU] = vlSelf->riscv_soc__DOT__sram5__DOT__sram_51[2U];
    __Vtemp1462[0xfU] = vlSelf->riscv_soc__DOT__sram5__DOT__sram_51[3U];
    __Vtemp1462[0x10U] = vlSelf->riscv_soc__DOT__sram5__DOT__sram_52[0U];
    __Vtemp1462[0x11U] = vlSelf->riscv_soc__DOT__sram5__DOT__sram_52[1U];
    __Vtemp1462[0x12U] = vlSelf->riscv_soc__DOT__sram5__DOT__sram_52[2U];
    __Vtemp1462[0x13U] = vlSelf->riscv_soc__DOT__sram5__DOT__sram_52[3U];
    __Vtemp1462[0x14U] = vlSelf->riscv_soc__DOT__sram5__DOT__sram_53[0U];
    __Vtemp1462[0x15U] = vlSelf->riscv_soc__DOT__sram5__DOT__sram_53[1U];
    __Vtemp1462[0x16U] = vlSelf->riscv_soc__DOT__sram5__DOT__sram_53[2U];
    __Vtemp1462[0x17U] = vlSelf->riscv_soc__DOT__sram5__DOT__sram_53[3U];
    __Vtemp1462[0x18U] = vlSelf->riscv_soc__DOT__sram5__DOT__sram_54[0U];
    __Vtemp1462[0x19U] = vlSelf->riscv_soc__DOT__sram5__DOT__sram_54[1U];
    __Vtemp1462[0x1aU] = vlSelf->riscv_soc__DOT__sram5__DOT__sram_54[2U];
    __Vtemp1462[0x1bU] = vlSelf->riscv_soc__DOT__sram5__DOT__sram_54[3U];
    __Vtemp1462[0x1cU] = vlSelf->riscv_soc__DOT__sram5__DOT__sram_55[0U];
    __Vtemp1462[0x1dU] = vlSelf->riscv_soc__DOT__sram5__DOT__sram_55[1U];
    __Vtemp1462[0x1eU] = vlSelf->riscv_soc__DOT__sram5__DOT__sram_55[2U];
    __Vtemp1462[0x1fU] = vlSelf->riscv_soc__DOT__sram5__DOT__sram_55[3U];
    __Vtemp1462[0x20U] = vlSelf->riscv_soc__DOT__sram5__DOT__sram_56[0U];
    __Vtemp1462[0x21U] = vlSelf->riscv_soc__DOT__sram5__DOT__sram_56[1U];
    __Vtemp1462[0x22U] = vlSelf->riscv_soc__DOT__sram5__DOT__sram_56[2U];
    __Vtemp1462[0x23U] = vlSelf->riscv_soc__DOT__sram5__DOT__sram_56[3U];
    __Vtemp1462[0x24U] = vlSelf->riscv_soc__DOT__sram5__DOT__sram_57[0U];
    __Vtemp1462[0x25U] = vlSelf->riscv_soc__DOT__sram5__DOT__sram_57[1U];
    __Vtemp1462[0x26U] = vlSelf->riscv_soc__DOT__sram5__DOT__sram_57[2U];
    __Vtemp1462[0x27U] = vlSelf->riscv_soc__DOT__sram5__DOT__sram_57[3U];
    __Vtemp1462[0x28U] = vlSelf->riscv_soc__DOT__sram5__DOT__sram_58[0U];
    __Vtemp1462[0x29U] = vlSelf->riscv_soc__DOT__sram5__DOT__sram_58[1U];
    __Vtemp1462[0x2aU] = vlSelf->riscv_soc__DOT__sram5__DOT__sram_58[2U];
    __Vtemp1462[0x2bU] = vlSelf->riscv_soc__DOT__sram5__DOT__sram_58[3U];
    __Vtemp1462[0x2cU] = vlSelf->riscv_soc__DOT__sram5__DOT__sram_59[0U];
    __Vtemp1462[0x2dU] = vlSelf->riscv_soc__DOT__sram5__DOT__sram_59[1U];
    __Vtemp1462[0x2eU] = vlSelf->riscv_soc__DOT__sram5__DOT__sram_59[2U];
    __Vtemp1462[0x2fU] = vlSelf->riscv_soc__DOT__sram5__DOT__sram_59[3U];
    __Vtemp1462[0x30U] = vlSelf->riscv_soc__DOT__sram5__DOT__sram_60[0U];
    __Vtemp1462[0x31U] = vlSelf->riscv_soc__DOT__sram5__DOT__sram_60[1U];
    __Vtemp1462[0x32U] = vlSelf->riscv_soc__DOT__sram5__DOT__sram_60[2U];
    __Vtemp1462[0x33U] = vlSelf->riscv_soc__DOT__sram5__DOT__sram_60[3U];
    __Vtemp1462[0x34U] = vlSelf->riscv_soc__DOT__sram5__DOT__sram_61[0U];
    __Vtemp1462[0x35U] = vlSelf->riscv_soc__DOT__sram5__DOT__sram_61[1U];
    __Vtemp1462[0x36U] = vlSelf->riscv_soc__DOT__sram5__DOT__sram_61[2U];
    __Vtemp1462[0x37U] = vlSelf->riscv_soc__DOT__sram5__DOT__sram_61[3U];
    __Vtemp1462[0x38U] = vlSelf->riscv_soc__DOT__sram5__DOT__sram_62[0U];
    __Vtemp1462[0x39U] = vlSelf->riscv_soc__DOT__sram5__DOT__sram_62[1U];
    __Vtemp1462[0x3aU] = vlSelf->riscv_soc__DOT__sram5__DOT__sram_62[2U];
    __Vtemp1462[0x3bU] = vlSelf->riscv_soc__DOT__sram5__DOT__sram_62[3U];
    __Vtemp1462[0x3cU] = vlSelf->riscv_soc__DOT__sram5__DOT__sram_63[0U];
    __Vtemp1462[0x3dU] = vlSelf->riscv_soc__DOT__sram5__DOT__sram_63[1U];
    __Vtemp1462[0x3eU] = vlSelf->riscv_soc__DOT__sram5__DOT__sram_63[2U];
    __Vtemp1462[0x3fU] = vlSelf->riscv_soc__DOT__sram5__DOT__sram_63[3U];
    VL_CONCAT_WWW(2176,2048,128, __Vtemp1463, __Vtemp1462, vlSelf->riscv_soc__DOT__sram5__DOT__sram_47);
    VL_CONCAT_WWW(2304,2176,128, __Vtemp1464, __Vtemp1463, vlSelf->riscv_soc__DOT__sram5__DOT__sram_46);
    VL_CONCAT_WWW(2432,2304,128, __Vtemp1465, __Vtemp1464, vlSelf->riscv_soc__DOT__sram5__DOT__sram_45);
    VL_CONCAT_WWW(2560,2432,128, __Vtemp1466, __Vtemp1465, vlSelf->riscv_soc__DOT__sram5__DOT__sram_44);
    VL_CONCAT_WWW(2688,2560,128, __Vtemp1467, __Vtemp1466, vlSelf->riscv_soc__DOT__sram5__DOT__sram_43);
    VL_CONCAT_WWW(2816,2688,128, __Vtemp1468, __Vtemp1467, vlSelf->riscv_soc__DOT__sram5__DOT__sram_42);
    VL_CONCAT_WWW(2944,2816,128, __Vtemp1469, __Vtemp1468, vlSelf->riscv_soc__DOT__sram5__DOT__sram_41);
    VL_CONCAT_WWW(3072,2944,128, __Vtemp1470, __Vtemp1469, vlSelf->riscv_soc__DOT__sram5__DOT__sram_40);
    VL_CONCAT_WWW(3200,3072,128, __Vtemp1471, __Vtemp1470, vlSelf->riscv_soc__DOT__sram5__DOT__sram_39);
    VL_CONCAT_WWW(3328,3200,128, __Vtemp1472, __Vtemp1471, vlSelf->riscv_soc__DOT__sram5__DOT__sram_38);
    VL_CONCAT_WWW(3456,3328,128, __Vtemp1473, __Vtemp1472, vlSelf->riscv_soc__DOT__sram5__DOT__sram_37);
    VL_CONCAT_WWW(3584,3456,128, __Vtemp1474, __Vtemp1473, vlSelf->riscv_soc__DOT__sram5__DOT__sram_36);
    VL_CONCAT_WWW(3712,3584,128, __Vtemp1475, __Vtemp1474, vlSelf->riscv_soc__DOT__sram5__DOT__sram_35);
    VL_CONCAT_WWW(3840,3712,128, __Vtemp1476, __Vtemp1475, vlSelf->riscv_soc__DOT__sram5__DOT__sram_34);
    VL_CONCAT_WWW(3968,3840,128, __Vtemp1477, __Vtemp1476, vlSelf->riscv_soc__DOT__sram5__DOT__sram_33);
    VL_CONCAT_WWW(4096,3968,128, __Vtemp1478, __Vtemp1477, vlSelf->riscv_soc__DOT__sram5__DOT__sram_32);
    VL_CONCAT_WWW(4224,4096,128, __Vtemp1479, __Vtemp1478, vlSelf->riscv_soc__DOT__sram5__DOT__sram_31);
    VL_CONCAT_WWW(4352,4224,128, __Vtemp1480, __Vtemp1479, vlSelf->riscv_soc__DOT__sram5__DOT__sram_30);
    VL_CONCAT_WWW(4480,4352,128, __Vtemp1481, __Vtemp1480, vlSelf->riscv_soc__DOT__sram5__DOT__sram_29);
    VL_CONCAT_WWW(4608,4480,128, __Vtemp1482, __Vtemp1481, vlSelf->riscv_soc__DOT__sram5__DOT__sram_28);
    VL_CONCAT_WWW(4736,4608,128, __Vtemp1483, __Vtemp1482, vlSelf->riscv_soc__DOT__sram5__DOT__sram_27);
    VL_CONCAT_WWW(4864,4736,128, __Vtemp1484, __Vtemp1483, vlSelf->riscv_soc__DOT__sram5__DOT__sram_26);
    VL_CONCAT_WWW(4992,4864,128, __Vtemp1485, __Vtemp1484, vlSelf->riscv_soc__DOT__sram5__DOT__sram_25);
    VL_CONCAT_WWW(5120,4992,128, __Vtemp1486, __Vtemp1485, vlSelf->riscv_soc__DOT__sram5__DOT__sram_24);
    VL_CONCAT_WWW(5248,5120,128, __Vtemp1487, __Vtemp1486, vlSelf->riscv_soc__DOT__sram5__DOT__sram_23);
    VL_CONCAT_WWW(5376,5248,128, __Vtemp1488, __Vtemp1487, vlSelf->riscv_soc__DOT__sram5__DOT__sram_22);
    VL_CONCAT_WWW(5504,5376,128, __Vtemp1489, __Vtemp1488, vlSelf->riscv_soc__DOT__sram5__DOT__sram_21);
    VL_CONCAT_WWW(5632,5504,128, __Vtemp1490, __Vtemp1489, vlSelf->riscv_soc__DOT__sram5__DOT__sram_20);
    VL_CONCAT_WWW(5760,5632,128, __Vtemp1491, __Vtemp1490, vlSelf->riscv_soc__DOT__sram5__DOT__sram_19);
    VL_CONCAT_WWW(5888,5760,128, __Vtemp1492, __Vtemp1491, vlSelf->riscv_soc__DOT__sram5__DOT__sram_18);
    VL_CONCAT_WWW(6016,5888,128, __Vtemp1493, __Vtemp1492, vlSelf->riscv_soc__DOT__sram5__DOT__sram_17);
    VL_CONCAT_WWW(6144,6016,128, __Vtemp1494, __Vtemp1493, vlSelf->riscv_soc__DOT__sram5__DOT__sram_16);
    VL_CONCAT_WWW(6272,6144,128, __Vtemp1495, __Vtemp1494, vlSelf->riscv_soc__DOT__sram5__DOT__sram_15);
    VL_CONCAT_WWW(6400,6272,128, __Vtemp1496, __Vtemp1495, vlSelf->riscv_soc__DOT__sram5__DOT__sram_14);
    VL_CONCAT_WWW(6528,6400,128, __Vtemp1497, __Vtemp1496, vlSelf->riscv_soc__DOT__sram5__DOT__sram_13);
    VL_CONCAT_WWW(6656,6528,128, __Vtemp1498, __Vtemp1497, vlSelf->riscv_soc__DOT__sram5__DOT__sram_12);
    VL_CONCAT_WWW(6784,6656,128, __Vtemp1499, __Vtemp1498, vlSelf->riscv_soc__DOT__sram5__DOT__sram_11);
    VL_CONCAT_WWW(6912,6784,128, __Vtemp1500, __Vtemp1499, vlSelf->riscv_soc__DOT__sram5__DOT__sram_10);
    VL_CONCAT_WWW(7040,6912,128, __Vtemp1501, __Vtemp1500, vlSelf->riscv_soc__DOT__sram5__DOT__sram_9);
    VL_CONCAT_WWW(7168,7040,128, __Vtemp1502, __Vtemp1501, vlSelf->riscv_soc__DOT__sram5__DOT__sram_8);
    VL_CONCAT_WWW(7296,7168,128, __Vtemp1503, __Vtemp1502, vlSelf->riscv_soc__DOT__sram5__DOT__sram_7);
    VL_CONCAT_WWW(7424,7296,128, __Vtemp1504, __Vtemp1503, vlSelf->riscv_soc__DOT__sram5__DOT__sram_6);
    VL_CONCAT_WWW(7552,7424,128, __Vtemp1505, __Vtemp1504, vlSelf->riscv_soc__DOT__sram5__DOT__sram_5);
    VL_CONCAT_WWW(7680,7552,128, __Vtemp1506, __Vtemp1505, vlSelf->riscv_soc__DOT__sram5__DOT__sram_4);
    VL_CONCAT_WWW(7808,7680,128, __Vtemp1507, __Vtemp1506, vlSelf->riscv_soc__DOT__sram5__DOT__sram_3);
    VL_CONCAT_WWW(7936,7808,128, __Vtemp1508, __Vtemp1507, vlSelf->riscv_soc__DOT__sram5__DOT__sram_2);
    VL_CONCAT_WWW(8064,7936,128, __Vtemp1509, __Vtemp1508, vlSelf->riscv_soc__DOT__sram5__DOT__sram_1);
    VL_CONCAT_WWW(8192,8064,128, __Vtemp1510, __Vtemp1509, vlSelf->riscv_soc__DOT__sram5__DOT__sram_0);
    vlSelf->riscv_soc__DOT__sram5__DOT___GEN_1[0U] 
        = (((0U == (0x1fU & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram0_A) 
                             << 7U))) ? 0U : (__Vtemp1510[
                                              ((IData)(1U) 
                                               + (0xfcU 
                                                  & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram0_A) 
                                                     << 2U)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram0_A) 
                                                      << 7U))))) 
           | (__Vtemp1510[(0xfcU & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram0_A) 
                                    << 2U))] >> (0x1fU 
                                                 & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram0_A) 
                                                    << 7U))));
    vlSelf->riscv_soc__DOT__sram5__DOT___GEN_1[1U] 
        = (((0U == (0x1fU & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram0_A) 
                             << 7U))) ? 0U : (__Vtemp1510[
                                              ((IData)(2U) 
                                               + (0xfcU 
                                                  & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram0_A) 
                                                     << 2U)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram0_A) 
                                                      << 7U))))) 
           | (__Vtemp1510[((IData)(1U) + (0xfcU & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram0_A) 
                                                   << 2U)))] 
              >> (0x1fU & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram0_A) 
                           << 7U))));
    vlSelf->riscv_soc__DOT__sram5__DOT___GEN_1[2U] 
        = (((0U == (0x1fU & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram0_A) 
                             << 7U))) ? 0U : (__Vtemp1510[
                                              ((IData)(3U) 
                                               + (0xfcU 
                                                  & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram0_A) 
                                                     << 2U)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram0_A) 
                                                      << 7U))))) 
           | (__Vtemp1510[((IData)(2U) + (0xfcU & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram0_A) 
                                                   << 2U)))] 
              >> (0x1fU & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram0_A) 
                           << 7U))));
    vlSelf->riscv_soc__DOT__sram5__DOT___GEN_1[3U] 
        = (((0U == (0x1fU & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram0_A) 
                             << 7U))) ? 0U : (__Vtemp1510[
                                              ((IData)(4U) 
                                               + (0xfcU 
                                                  & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram0_A) 
                                                     << 2U)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram0_A) 
                                                      << 7U))))) 
           | (__Vtemp1510[((IData)(3U) + (0xfcU & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram0_A) 
                                                   << 2U)))] 
              >> (0x1fU & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram0_A) 
                           << 7U))));
    __Vtemp1526[0U] = vlSelf->riscv_soc__DOT__sram6__DOT__sram_48[0U];
    __Vtemp1526[1U] = vlSelf->riscv_soc__DOT__sram6__DOT__sram_48[1U];
    __Vtemp1526[2U] = vlSelf->riscv_soc__DOT__sram6__DOT__sram_48[2U];
    __Vtemp1526[3U] = vlSelf->riscv_soc__DOT__sram6__DOT__sram_48[3U];
    __Vtemp1526[4U] = vlSelf->riscv_soc__DOT__sram6__DOT__sram_49[0U];
    __Vtemp1526[5U] = vlSelf->riscv_soc__DOT__sram6__DOT__sram_49[1U];
    __Vtemp1526[6U] = vlSelf->riscv_soc__DOT__sram6__DOT__sram_49[2U];
    __Vtemp1526[7U] = vlSelf->riscv_soc__DOT__sram6__DOT__sram_49[3U];
    __Vtemp1526[8U] = vlSelf->riscv_soc__DOT__sram6__DOT__sram_50[0U];
    __Vtemp1526[9U] = vlSelf->riscv_soc__DOT__sram6__DOT__sram_50[1U];
    __Vtemp1526[0xaU] = vlSelf->riscv_soc__DOT__sram6__DOT__sram_50[2U];
    __Vtemp1526[0xbU] = vlSelf->riscv_soc__DOT__sram6__DOT__sram_50[3U];
    __Vtemp1526[0xcU] = vlSelf->riscv_soc__DOT__sram6__DOT__sram_51[0U];
    __Vtemp1526[0xdU] = vlSelf->riscv_soc__DOT__sram6__DOT__sram_51[1U];
    __Vtemp1526[0xeU] = vlSelf->riscv_soc__DOT__sram6__DOT__sram_51[2U];
    __Vtemp1526[0xfU] = vlSelf->riscv_soc__DOT__sram6__DOT__sram_51[3U];
    __Vtemp1526[0x10U] = vlSelf->riscv_soc__DOT__sram6__DOT__sram_52[0U];
    __Vtemp1526[0x11U] = vlSelf->riscv_soc__DOT__sram6__DOT__sram_52[1U];
    __Vtemp1526[0x12U] = vlSelf->riscv_soc__DOT__sram6__DOT__sram_52[2U];
    __Vtemp1526[0x13U] = vlSelf->riscv_soc__DOT__sram6__DOT__sram_52[3U];
    __Vtemp1526[0x14U] = vlSelf->riscv_soc__DOT__sram6__DOT__sram_53[0U];
    __Vtemp1526[0x15U] = vlSelf->riscv_soc__DOT__sram6__DOT__sram_53[1U];
    __Vtemp1526[0x16U] = vlSelf->riscv_soc__DOT__sram6__DOT__sram_53[2U];
    __Vtemp1526[0x17U] = vlSelf->riscv_soc__DOT__sram6__DOT__sram_53[3U];
    __Vtemp1526[0x18U] = vlSelf->riscv_soc__DOT__sram6__DOT__sram_54[0U];
    __Vtemp1526[0x19U] = vlSelf->riscv_soc__DOT__sram6__DOT__sram_54[1U];
    __Vtemp1526[0x1aU] = vlSelf->riscv_soc__DOT__sram6__DOT__sram_54[2U];
    __Vtemp1526[0x1bU] = vlSelf->riscv_soc__DOT__sram6__DOT__sram_54[3U];
    __Vtemp1526[0x1cU] = vlSelf->riscv_soc__DOT__sram6__DOT__sram_55[0U];
    __Vtemp1526[0x1dU] = vlSelf->riscv_soc__DOT__sram6__DOT__sram_55[1U];
    __Vtemp1526[0x1eU] = vlSelf->riscv_soc__DOT__sram6__DOT__sram_55[2U];
    __Vtemp1526[0x1fU] = vlSelf->riscv_soc__DOT__sram6__DOT__sram_55[3U];
    __Vtemp1526[0x20U] = vlSelf->riscv_soc__DOT__sram6__DOT__sram_56[0U];
    __Vtemp1526[0x21U] = vlSelf->riscv_soc__DOT__sram6__DOT__sram_56[1U];
    __Vtemp1526[0x22U] = vlSelf->riscv_soc__DOT__sram6__DOT__sram_56[2U];
    __Vtemp1526[0x23U] = vlSelf->riscv_soc__DOT__sram6__DOT__sram_56[3U];
    __Vtemp1526[0x24U] = vlSelf->riscv_soc__DOT__sram6__DOT__sram_57[0U];
    __Vtemp1526[0x25U] = vlSelf->riscv_soc__DOT__sram6__DOT__sram_57[1U];
    __Vtemp1526[0x26U] = vlSelf->riscv_soc__DOT__sram6__DOT__sram_57[2U];
    __Vtemp1526[0x27U] = vlSelf->riscv_soc__DOT__sram6__DOT__sram_57[3U];
    __Vtemp1526[0x28U] = vlSelf->riscv_soc__DOT__sram6__DOT__sram_58[0U];
    __Vtemp1526[0x29U] = vlSelf->riscv_soc__DOT__sram6__DOT__sram_58[1U];
    __Vtemp1526[0x2aU] = vlSelf->riscv_soc__DOT__sram6__DOT__sram_58[2U];
    __Vtemp1526[0x2bU] = vlSelf->riscv_soc__DOT__sram6__DOT__sram_58[3U];
    __Vtemp1526[0x2cU] = vlSelf->riscv_soc__DOT__sram6__DOT__sram_59[0U];
    __Vtemp1526[0x2dU] = vlSelf->riscv_soc__DOT__sram6__DOT__sram_59[1U];
    __Vtemp1526[0x2eU] = vlSelf->riscv_soc__DOT__sram6__DOT__sram_59[2U];
    __Vtemp1526[0x2fU] = vlSelf->riscv_soc__DOT__sram6__DOT__sram_59[3U];
    __Vtemp1526[0x30U] = vlSelf->riscv_soc__DOT__sram6__DOT__sram_60[0U];
    __Vtemp1526[0x31U] = vlSelf->riscv_soc__DOT__sram6__DOT__sram_60[1U];
    __Vtemp1526[0x32U] = vlSelf->riscv_soc__DOT__sram6__DOT__sram_60[2U];
    __Vtemp1526[0x33U] = vlSelf->riscv_soc__DOT__sram6__DOT__sram_60[3U];
    __Vtemp1526[0x34U] = vlSelf->riscv_soc__DOT__sram6__DOT__sram_61[0U];
    __Vtemp1526[0x35U] = vlSelf->riscv_soc__DOT__sram6__DOT__sram_61[1U];
    __Vtemp1526[0x36U] = vlSelf->riscv_soc__DOT__sram6__DOT__sram_61[2U];
    __Vtemp1526[0x37U] = vlSelf->riscv_soc__DOT__sram6__DOT__sram_61[3U];
    __Vtemp1526[0x38U] = vlSelf->riscv_soc__DOT__sram6__DOT__sram_62[0U];
    __Vtemp1526[0x39U] = vlSelf->riscv_soc__DOT__sram6__DOT__sram_62[1U];
    __Vtemp1526[0x3aU] = vlSelf->riscv_soc__DOT__sram6__DOT__sram_62[2U];
    __Vtemp1526[0x3bU] = vlSelf->riscv_soc__DOT__sram6__DOT__sram_62[3U];
    __Vtemp1526[0x3cU] = vlSelf->riscv_soc__DOT__sram6__DOT__sram_63[0U];
    __Vtemp1526[0x3dU] = vlSelf->riscv_soc__DOT__sram6__DOT__sram_63[1U];
    __Vtemp1526[0x3eU] = vlSelf->riscv_soc__DOT__sram6__DOT__sram_63[2U];
    __Vtemp1526[0x3fU] = vlSelf->riscv_soc__DOT__sram6__DOT__sram_63[3U];
    VL_CONCAT_WWW(2176,2048,128, __Vtemp1527, __Vtemp1526, vlSelf->riscv_soc__DOT__sram6__DOT__sram_47);
    VL_CONCAT_WWW(2304,2176,128, __Vtemp1528, __Vtemp1527, vlSelf->riscv_soc__DOT__sram6__DOT__sram_46);
    VL_CONCAT_WWW(2432,2304,128, __Vtemp1529, __Vtemp1528, vlSelf->riscv_soc__DOT__sram6__DOT__sram_45);
    VL_CONCAT_WWW(2560,2432,128, __Vtemp1530, __Vtemp1529, vlSelf->riscv_soc__DOT__sram6__DOT__sram_44);
    VL_CONCAT_WWW(2688,2560,128, __Vtemp1531, __Vtemp1530, vlSelf->riscv_soc__DOT__sram6__DOT__sram_43);
    VL_CONCAT_WWW(2816,2688,128, __Vtemp1532, __Vtemp1531, vlSelf->riscv_soc__DOT__sram6__DOT__sram_42);
    VL_CONCAT_WWW(2944,2816,128, __Vtemp1533, __Vtemp1532, vlSelf->riscv_soc__DOT__sram6__DOT__sram_41);
    VL_CONCAT_WWW(3072,2944,128, __Vtemp1534, __Vtemp1533, vlSelf->riscv_soc__DOT__sram6__DOT__sram_40);
    VL_CONCAT_WWW(3200,3072,128, __Vtemp1535, __Vtemp1534, vlSelf->riscv_soc__DOT__sram6__DOT__sram_39);
    VL_CONCAT_WWW(3328,3200,128, __Vtemp1536, __Vtemp1535, vlSelf->riscv_soc__DOT__sram6__DOT__sram_38);
    VL_CONCAT_WWW(3456,3328,128, __Vtemp1537, __Vtemp1536, vlSelf->riscv_soc__DOT__sram6__DOT__sram_37);
    VL_CONCAT_WWW(3584,3456,128, __Vtemp1538, __Vtemp1537, vlSelf->riscv_soc__DOT__sram6__DOT__sram_36);
    VL_CONCAT_WWW(3712,3584,128, __Vtemp1539, __Vtemp1538, vlSelf->riscv_soc__DOT__sram6__DOT__sram_35);
    VL_CONCAT_WWW(3840,3712,128, __Vtemp1540, __Vtemp1539, vlSelf->riscv_soc__DOT__sram6__DOT__sram_34);
    VL_CONCAT_WWW(3968,3840,128, __Vtemp1541, __Vtemp1540, vlSelf->riscv_soc__DOT__sram6__DOT__sram_33);
    VL_CONCAT_WWW(4096,3968,128, __Vtemp1542, __Vtemp1541, vlSelf->riscv_soc__DOT__sram6__DOT__sram_32);
    VL_CONCAT_WWW(4224,4096,128, __Vtemp1543, __Vtemp1542, vlSelf->riscv_soc__DOT__sram6__DOT__sram_31);
    VL_CONCAT_WWW(4352,4224,128, __Vtemp1544, __Vtemp1543, vlSelf->riscv_soc__DOT__sram6__DOT__sram_30);
    VL_CONCAT_WWW(4480,4352,128, __Vtemp1545, __Vtemp1544, vlSelf->riscv_soc__DOT__sram6__DOT__sram_29);
    VL_CONCAT_WWW(4608,4480,128, __Vtemp1546, __Vtemp1545, vlSelf->riscv_soc__DOT__sram6__DOT__sram_28);
    VL_CONCAT_WWW(4736,4608,128, __Vtemp1547, __Vtemp1546, vlSelf->riscv_soc__DOT__sram6__DOT__sram_27);
    VL_CONCAT_WWW(4864,4736,128, __Vtemp1548, __Vtemp1547, vlSelf->riscv_soc__DOT__sram6__DOT__sram_26);
    VL_CONCAT_WWW(4992,4864,128, __Vtemp1549, __Vtemp1548, vlSelf->riscv_soc__DOT__sram6__DOT__sram_25);
    VL_CONCAT_WWW(5120,4992,128, __Vtemp1550, __Vtemp1549, vlSelf->riscv_soc__DOT__sram6__DOT__sram_24);
    VL_CONCAT_WWW(5248,5120,128, __Vtemp1551, __Vtemp1550, vlSelf->riscv_soc__DOT__sram6__DOT__sram_23);
    VL_CONCAT_WWW(5376,5248,128, __Vtemp1552, __Vtemp1551, vlSelf->riscv_soc__DOT__sram6__DOT__sram_22);
    VL_CONCAT_WWW(5504,5376,128, __Vtemp1553, __Vtemp1552, vlSelf->riscv_soc__DOT__sram6__DOT__sram_21);
    VL_CONCAT_WWW(5632,5504,128, __Vtemp1554, __Vtemp1553, vlSelf->riscv_soc__DOT__sram6__DOT__sram_20);
    VL_CONCAT_WWW(5760,5632,128, __Vtemp1555, __Vtemp1554, vlSelf->riscv_soc__DOT__sram6__DOT__sram_19);
    VL_CONCAT_WWW(5888,5760,128, __Vtemp1556, __Vtemp1555, vlSelf->riscv_soc__DOT__sram6__DOT__sram_18);
    VL_CONCAT_WWW(6016,5888,128, __Vtemp1557, __Vtemp1556, vlSelf->riscv_soc__DOT__sram6__DOT__sram_17);
    VL_CONCAT_WWW(6144,6016,128, __Vtemp1558, __Vtemp1557, vlSelf->riscv_soc__DOT__sram6__DOT__sram_16);
    VL_CONCAT_WWW(6272,6144,128, __Vtemp1559, __Vtemp1558, vlSelf->riscv_soc__DOT__sram6__DOT__sram_15);
    VL_CONCAT_WWW(6400,6272,128, __Vtemp1560, __Vtemp1559, vlSelf->riscv_soc__DOT__sram6__DOT__sram_14);
    VL_CONCAT_WWW(6528,6400,128, __Vtemp1561, __Vtemp1560, vlSelf->riscv_soc__DOT__sram6__DOT__sram_13);
    VL_CONCAT_WWW(6656,6528,128, __Vtemp1562, __Vtemp1561, vlSelf->riscv_soc__DOT__sram6__DOT__sram_12);
    VL_CONCAT_WWW(6784,6656,128, __Vtemp1563, __Vtemp1562, vlSelf->riscv_soc__DOT__sram6__DOT__sram_11);
    VL_CONCAT_WWW(6912,6784,128, __Vtemp1564, __Vtemp1563, vlSelf->riscv_soc__DOT__sram6__DOT__sram_10);
    VL_CONCAT_WWW(7040,6912,128, __Vtemp1565, __Vtemp1564, vlSelf->riscv_soc__DOT__sram6__DOT__sram_9);
    VL_CONCAT_WWW(7168,7040,128, __Vtemp1566, __Vtemp1565, vlSelf->riscv_soc__DOT__sram6__DOT__sram_8);
    VL_CONCAT_WWW(7296,7168,128, __Vtemp1567, __Vtemp1566, vlSelf->riscv_soc__DOT__sram6__DOT__sram_7);
    VL_CONCAT_WWW(7424,7296,128, __Vtemp1568, __Vtemp1567, vlSelf->riscv_soc__DOT__sram6__DOT__sram_6);
    VL_CONCAT_WWW(7552,7424,128, __Vtemp1569, __Vtemp1568, vlSelf->riscv_soc__DOT__sram6__DOT__sram_5);
    VL_CONCAT_WWW(7680,7552,128, __Vtemp1570, __Vtemp1569, vlSelf->riscv_soc__DOT__sram6__DOT__sram_4);
    VL_CONCAT_WWW(7808,7680,128, __Vtemp1571, __Vtemp1570, vlSelf->riscv_soc__DOT__sram6__DOT__sram_3);
    VL_CONCAT_WWW(7936,7808,128, __Vtemp1572, __Vtemp1571, vlSelf->riscv_soc__DOT__sram6__DOT__sram_2);
    VL_CONCAT_WWW(8064,7936,128, __Vtemp1573, __Vtemp1572, vlSelf->riscv_soc__DOT__sram6__DOT__sram_1);
    VL_CONCAT_WWW(8192,8064,128, __Vtemp1574, __Vtemp1573, vlSelf->riscv_soc__DOT__sram6__DOT__sram_0);
    vlSelf->riscv_soc__DOT__sram6__DOT___GEN_1[0U] 
        = (((0U == (0x1fU & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram0_A) 
                             << 7U))) ? 0U : (__Vtemp1574[
                                              ((IData)(1U) 
                                               + (0xfcU 
                                                  & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram0_A) 
                                                     << 2U)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram0_A) 
                                                      << 7U))))) 
           | (__Vtemp1574[(0xfcU & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram0_A) 
                                    << 2U))] >> (0x1fU 
                                                 & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram0_A) 
                                                    << 7U))));
    vlSelf->riscv_soc__DOT__sram6__DOT___GEN_1[1U] 
        = (((0U == (0x1fU & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram0_A) 
                             << 7U))) ? 0U : (__Vtemp1574[
                                              ((IData)(2U) 
                                               + (0xfcU 
                                                  & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram0_A) 
                                                     << 2U)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram0_A) 
                                                      << 7U))))) 
           | (__Vtemp1574[((IData)(1U) + (0xfcU & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram0_A) 
                                                   << 2U)))] 
              >> (0x1fU & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram0_A) 
                           << 7U))));
    vlSelf->riscv_soc__DOT__sram6__DOT___GEN_1[2U] 
        = (((0U == (0x1fU & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram0_A) 
                             << 7U))) ? 0U : (__Vtemp1574[
                                              ((IData)(3U) 
                                               + (0xfcU 
                                                  & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram0_A) 
                                                     << 2U)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram0_A) 
                                                      << 7U))))) 
           | (__Vtemp1574[((IData)(2U) + (0xfcU & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram0_A) 
                                                   << 2U)))] 
              >> (0x1fU & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram0_A) 
                           << 7U))));
    vlSelf->riscv_soc__DOT__sram6__DOT___GEN_1[3U] 
        = (((0U == (0x1fU & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram0_A) 
                             << 7U))) ? 0U : (__Vtemp1574[
                                              ((IData)(4U) 
                                               + (0xfcU 
                                                  & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram0_A) 
                                                     << 2U)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram0_A) 
                                                      << 7U))))) 
           | (__Vtemp1574[((IData)(3U) + (0xfcU & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram0_A) 
                                                   << 2U)))] 
              >> (0x1fU & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram0_A) 
                           << 7U))));
    __Vtemp1590[0U] = vlSelf->riscv_soc__DOT__sram7__DOT__sram_48[0U];
    __Vtemp1590[1U] = vlSelf->riscv_soc__DOT__sram7__DOT__sram_48[1U];
    __Vtemp1590[2U] = vlSelf->riscv_soc__DOT__sram7__DOT__sram_48[2U];
    __Vtemp1590[3U] = vlSelf->riscv_soc__DOT__sram7__DOT__sram_48[3U];
    __Vtemp1590[4U] = vlSelf->riscv_soc__DOT__sram7__DOT__sram_49[0U];
    __Vtemp1590[5U] = vlSelf->riscv_soc__DOT__sram7__DOT__sram_49[1U];
    __Vtemp1590[6U] = vlSelf->riscv_soc__DOT__sram7__DOT__sram_49[2U];
    __Vtemp1590[7U] = vlSelf->riscv_soc__DOT__sram7__DOT__sram_49[3U];
    __Vtemp1590[8U] = vlSelf->riscv_soc__DOT__sram7__DOT__sram_50[0U];
    __Vtemp1590[9U] = vlSelf->riscv_soc__DOT__sram7__DOT__sram_50[1U];
    __Vtemp1590[0xaU] = vlSelf->riscv_soc__DOT__sram7__DOT__sram_50[2U];
    __Vtemp1590[0xbU] = vlSelf->riscv_soc__DOT__sram7__DOT__sram_50[3U];
    __Vtemp1590[0xcU] = vlSelf->riscv_soc__DOT__sram7__DOT__sram_51[0U];
    __Vtemp1590[0xdU] = vlSelf->riscv_soc__DOT__sram7__DOT__sram_51[1U];
    __Vtemp1590[0xeU] = vlSelf->riscv_soc__DOT__sram7__DOT__sram_51[2U];
    __Vtemp1590[0xfU] = vlSelf->riscv_soc__DOT__sram7__DOT__sram_51[3U];
    __Vtemp1590[0x10U] = vlSelf->riscv_soc__DOT__sram7__DOT__sram_52[0U];
    __Vtemp1590[0x11U] = vlSelf->riscv_soc__DOT__sram7__DOT__sram_52[1U];
    __Vtemp1590[0x12U] = vlSelf->riscv_soc__DOT__sram7__DOT__sram_52[2U];
    __Vtemp1590[0x13U] = vlSelf->riscv_soc__DOT__sram7__DOT__sram_52[3U];
    __Vtemp1590[0x14U] = vlSelf->riscv_soc__DOT__sram7__DOT__sram_53[0U];
    __Vtemp1590[0x15U] = vlSelf->riscv_soc__DOT__sram7__DOT__sram_53[1U];
    __Vtemp1590[0x16U] = vlSelf->riscv_soc__DOT__sram7__DOT__sram_53[2U];
    __Vtemp1590[0x17U] = vlSelf->riscv_soc__DOT__sram7__DOT__sram_53[3U];
    __Vtemp1590[0x18U] = vlSelf->riscv_soc__DOT__sram7__DOT__sram_54[0U];
    __Vtemp1590[0x19U] = vlSelf->riscv_soc__DOT__sram7__DOT__sram_54[1U];
    __Vtemp1590[0x1aU] = vlSelf->riscv_soc__DOT__sram7__DOT__sram_54[2U];
    __Vtemp1590[0x1bU] = vlSelf->riscv_soc__DOT__sram7__DOT__sram_54[3U];
    __Vtemp1590[0x1cU] = vlSelf->riscv_soc__DOT__sram7__DOT__sram_55[0U];
    __Vtemp1590[0x1dU] = vlSelf->riscv_soc__DOT__sram7__DOT__sram_55[1U];
    __Vtemp1590[0x1eU] = vlSelf->riscv_soc__DOT__sram7__DOT__sram_55[2U];
    __Vtemp1590[0x1fU] = vlSelf->riscv_soc__DOT__sram7__DOT__sram_55[3U];
    __Vtemp1590[0x20U] = vlSelf->riscv_soc__DOT__sram7__DOT__sram_56[0U];
    __Vtemp1590[0x21U] = vlSelf->riscv_soc__DOT__sram7__DOT__sram_56[1U];
    __Vtemp1590[0x22U] = vlSelf->riscv_soc__DOT__sram7__DOT__sram_56[2U];
    __Vtemp1590[0x23U] = vlSelf->riscv_soc__DOT__sram7__DOT__sram_56[3U];
    __Vtemp1590[0x24U] = vlSelf->riscv_soc__DOT__sram7__DOT__sram_57[0U];
    __Vtemp1590[0x25U] = vlSelf->riscv_soc__DOT__sram7__DOT__sram_57[1U];
    __Vtemp1590[0x26U] = vlSelf->riscv_soc__DOT__sram7__DOT__sram_57[2U];
    __Vtemp1590[0x27U] = vlSelf->riscv_soc__DOT__sram7__DOT__sram_57[3U];
    __Vtemp1590[0x28U] = vlSelf->riscv_soc__DOT__sram7__DOT__sram_58[0U];
    __Vtemp1590[0x29U] = vlSelf->riscv_soc__DOT__sram7__DOT__sram_58[1U];
    __Vtemp1590[0x2aU] = vlSelf->riscv_soc__DOT__sram7__DOT__sram_58[2U];
    __Vtemp1590[0x2bU] = vlSelf->riscv_soc__DOT__sram7__DOT__sram_58[3U];
    __Vtemp1590[0x2cU] = vlSelf->riscv_soc__DOT__sram7__DOT__sram_59[0U];
    __Vtemp1590[0x2dU] = vlSelf->riscv_soc__DOT__sram7__DOT__sram_59[1U];
    __Vtemp1590[0x2eU] = vlSelf->riscv_soc__DOT__sram7__DOT__sram_59[2U];
    __Vtemp1590[0x2fU] = vlSelf->riscv_soc__DOT__sram7__DOT__sram_59[3U];
    __Vtemp1590[0x30U] = vlSelf->riscv_soc__DOT__sram7__DOT__sram_60[0U];
    __Vtemp1590[0x31U] = vlSelf->riscv_soc__DOT__sram7__DOT__sram_60[1U];
    __Vtemp1590[0x32U] = vlSelf->riscv_soc__DOT__sram7__DOT__sram_60[2U];
    __Vtemp1590[0x33U] = vlSelf->riscv_soc__DOT__sram7__DOT__sram_60[3U];
    __Vtemp1590[0x34U] = vlSelf->riscv_soc__DOT__sram7__DOT__sram_61[0U];
    __Vtemp1590[0x35U] = vlSelf->riscv_soc__DOT__sram7__DOT__sram_61[1U];
    __Vtemp1590[0x36U] = vlSelf->riscv_soc__DOT__sram7__DOT__sram_61[2U];
    __Vtemp1590[0x37U] = vlSelf->riscv_soc__DOT__sram7__DOT__sram_61[3U];
    __Vtemp1590[0x38U] = vlSelf->riscv_soc__DOT__sram7__DOT__sram_62[0U];
    __Vtemp1590[0x39U] = vlSelf->riscv_soc__DOT__sram7__DOT__sram_62[1U];
    __Vtemp1590[0x3aU] = vlSelf->riscv_soc__DOT__sram7__DOT__sram_62[2U];
    __Vtemp1590[0x3bU] = vlSelf->riscv_soc__DOT__sram7__DOT__sram_62[3U];
    __Vtemp1590[0x3cU] = vlSelf->riscv_soc__DOT__sram7__DOT__sram_63[0U];
    __Vtemp1590[0x3dU] = vlSelf->riscv_soc__DOT__sram7__DOT__sram_63[1U];
    __Vtemp1590[0x3eU] = vlSelf->riscv_soc__DOT__sram7__DOT__sram_63[2U];
    __Vtemp1590[0x3fU] = vlSelf->riscv_soc__DOT__sram7__DOT__sram_63[3U];
    VL_CONCAT_WWW(2176,2048,128, __Vtemp1591, __Vtemp1590, vlSelf->riscv_soc__DOT__sram7__DOT__sram_47);
    VL_CONCAT_WWW(2304,2176,128, __Vtemp1592, __Vtemp1591, vlSelf->riscv_soc__DOT__sram7__DOT__sram_46);
    VL_CONCAT_WWW(2432,2304,128, __Vtemp1593, __Vtemp1592, vlSelf->riscv_soc__DOT__sram7__DOT__sram_45);
    VL_CONCAT_WWW(2560,2432,128, __Vtemp1594, __Vtemp1593, vlSelf->riscv_soc__DOT__sram7__DOT__sram_44);
    VL_CONCAT_WWW(2688,2560,128, __Vtemp1595, __Vtemp1594, vlSelf->riscv_soc__DOT__sram7__DOT__sram_43);
    VL_CONCAT_WWW(2816,2688,128, __Vtemp1596, __Vtemp1595, vlSelf->riscv_soc__DOT__sram7__DOT__sram_42);
    VL_CONCAT_WWW(2944,2816,128, __Vtemp1597, __Vtemp1596, vlSelf->riscv_soc__DOT__sram7__DOT__sram_41);
    VL_CONCAT_WWW(3072,2944,128, __Vtemp1598, __Vtemp1597, vlSelf->riscv_soc__DOT__sram7__DOT__sram_40);
    VL_CONCAT_WWW(3200,3072,128, __Vtemp1599, __Vtemp1598, vlSelf->riscv_soc__DOT__sram7__DOT__sram_39);
    VL_CONCAT_WWW(3328,3200,128, __Vtemp1600, __Vtemp1599, vlSelf->riscv_soc__DOT__sram7__DOT__sram_38);
    VL_CONCAT_WWW(3456,3328,128, __Vtemp1601, __Vtemp1600, vlSelf->riscv_soc__DOT__sram7__DOT__sram_37);
    VL_CONCAT_WWW(3584,3456,128, __Vtemp1602, __Vtemp1601, vlSelf->riscv_soc__DOT__sram7__DOT__sram_36);
    VL_CONCAT_WWW(3712,3584,128, __Vtemp1603, __Vtemp1602, vlSelf->riscv_soc__DOT__sram7__DOT__sram_35);
    VL_CONCAT_WWW(3840,3712,128, __Vtemp1604, __Vtemp1603, vlSelf->riscv_soc__DOT__sram7__DOT__sram_34);
    VL_CONCAT_WWW(3968,3840,128, __Vtemp1605, __Vtemp1604, vlSelf->riscv_soc__DOT__sram7__DOT__sram_33);
    VL_CONCAT_WWW(4096,3968,128, __Vtemp1606, __Vtemp1605, vlSelf->riscv_soc__DOT__sram7__DOT__sram_32);
    VL_CONCAT_WWW(4224,4096,128, __Vtemp1607, __Vtemp1606, vlSelf->riscv_soc__DOT__sram7__DOT__sram_31);
    VL_CONCAT_WWW(4352,4224,128, __Vtemp1608, __Vtemp1607, vlSelf->riscv_soc__DOT__sram7__DOT__sram_30);
    VL_CONCAT_WWW(4480,4352,128, __Vtemp1609, __Vtemp1608, vlSelf->riscv_soc__DOT__sram7__DOT__sram_29);
    VL_CONCAT_WWW(4608,4480,128, __Vtemp1610, __Vtemp1609, vlSelf->riscv_soc__DOT__sram7__DOT__sram_28);
    VL_CONCAT_WWW(4736,4608,128, __Vtemp1611, __Vtemp1610, vlSelf->riscv_soc__DOT__sram7__DOT__sram_27);
    VL_CONCAT_WWW(4864,4736,128, __Vtemp1612, __Vtemp1611, vlSelf->riscv_soc__DOT__sram7__DOT__sram_26);
    VL_CONCAT_WWW(4992,4864,128, __Vtemp1613, __Vtemp1612, vlSelf->riscv_soc__DOT__sram7__DOT__sram_25);
    VL_CONCAT_WWW(5120,4992,128, __Vtemp1614, __Vtemp1613, vlSelf->riscv_soc__DOT__sram7__DOT__sram_24);
    VL_CONCAT_WWW(5248,5120,128, __Vtemp1615, __Vtemp1614, vlSelf->riscv_soc__DOT__sram7__DOT__sram_23);
    VL_CONCAT_WWW(5376,5248,128, __Vtemp1616, __Vtemp1615, vlSelf->riscv_soc__DOT__sram7__DOT__sram_22);
    VL_CONCAT_WWW(5504,5376,128, __Vtemp1617, __Vtemp1616, vlSelf->riscv_soc__DOT__sram7__DOT__sram_21);
    VL_CONCAT_WWW(5632,5504,128, __Vtemp1618, __Vtemp1617, vlSelf->riscv_soc__DOT__sram7__DOT__sram_20);
    VL_CONCAT_WWW(5760,5632,128, __Vtemp1619, __Vtemp1618, vlSelf->riscv_soc__DOT__sram7__DOT__sram_19);
    VL_CONCAT_WWW(5888,5760,128, __Vtemp1620, __Vtemp1619, vlSelf->riscv_soc__DOT__sram7__DOT__sram_18);
    VL_CONCAT_WWW(6016,5888,128, __Vtemp1621, __Vtemp1620, vlSelf->riscv_soc__DOT__sram7__DOT__sram_17);
    VL_CONCAT_WWW(6144,6016,128, __Vtemp1622, __Vtemp1621, vlSelf->riscv_soc__DOT__sram7__DOT__sram_16);
    VL_CONCAT_WWW(6272,6144,128, __Vtemp1623, __Vtemp1622, vlSelf->riscv_soc__DOT__sram7__DOT__sram_15);
    VL_CONCAT_WWW(6400,6272,128, __Vtemp1624, __Vtemp1623, vlSelf->riscv_soc__DOT__sram7__DOT__sram_14);
    VL_CONCAT_WWW(6528,6400,128, __Vtemp1625, __Vtemp1624, vlSelf->riscv_soc__DOT__sram7__DOT__sram_13);
    VL_CONCAT_WWW(6656,6528,128, __Vtemp1626, __Vtemp1625, vlSelf->riscv_soc__DOT__sram7__DOT__sram_12);
    VL_CONCAT_WWW(6784,6656,128, __Vtemp1627, __Vtemp1626, vlSelf->riscv_soc__DOT__sram7__DOT__sram_11);
    VL_CONCAT_WWW(6912,6784,128, __Vtemp1628, __Vtemp1627, vlSelf->riscv_soc__DOT__sram7__DOT__sram_10);
    VL_CONCAT_WWW(7040,6912,128, __Vtemp1629, __Vtemp1628, vlSelf->riscv_soc__DOT__sram7__DOT__sram_9);
    VL_CONCAT_WWW(7168,7040,128, __Vtemp1630, __Vtemp1629, vlSelf->riscv_soc__DOT__sram7__DOT__sram_8);
    VL_CONCAT_WWW(7296,7168,128, __Vtemp1631, __Vtemp1630, vlSelf->riscv_soc__DOT__sram7__DOT__sram_7);
    VL_CONCAT_WWW(7424,7296,128, __Vtemp1632, __Vtemp1631, vlSelf->riscv_soc__DOT__sram7__DOT__sram_6);
    VL_CONCAT_WWW(7552,7424,128, __Vtemp1633, __Vtemp1632, vlSelf->riscv_soc__DOT__sram7__DOT__sram_5);
    VL_CONCAT_WWW(7680,7552,128, __Vtemp1634, __Vtemp1633, vlSelf->riscv_soc__DOT__sram7__DOT__sram_4);
    VL_CONCAT_WWW(7808,7680,128, __Vtemp1635, __Vtemp1634, vlSelf->riscv_soc__DOT__sram7__DOT__sram_3);
    VL_CONCAT_WWW(7936,7808,128, __Vtemp1636, __Vtemp1635, vlSelf->riscv_soc__DOT__sram7__DOT__sram_2);
    VL_CONCAT_WWW(8064,7936,128, __Vtemp1637, __Vtemp1636, vlSelf->riscv_soc__DOT__sram7__DOT__sram_1);
    VL_CONCAT_WWW(8192,8064,128, __Vtemp1638, __Vtemp1637, vlSelf->riscv_soc__DOT__sram7__DOT__sram_0);
    vlSelf->riscv_soc__DOT__sram7__DOT___GEN_1[0U] 
        = (((0U == (0x1fU & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram0_A) 
                             << 7U))) ? 0U : (__Vtemp1638[
                                              ((IData)(1U) 
                                               + (0xfcU 
                                                  & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram0_A) 
                                                     << 2U)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram0_A) 
                                                      << 7U))))) 
           | (__Vtemp1638[(0xfcU & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram0_A) 
                                    << 2U))] >> (0x1fU 
                                                 & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram0_A) 
                                                    << 7U))));
    vlSelf->riscv_soc__DOT__sram7__DOT___GEN_1[1U] 
        = (((0U == (0x1fU & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram0_A) 
                             << 7U))) ? 0U : (__Vtemp1638[
                                              ((IData)(2U) 
                                               + (0xfcU 
                                                  & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram0_A) 
                                                     << 2U)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram0_A) 
                                                      << 7U))))) 
           | (__Vtemp1638[((IData)(1U) + (0xfcU & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram0_A) 
                                                   << 2U)))] 
              >> (0x1fU & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram0_A) 
                           << 7U))));
    vlSelf->riscv_soc__DOT__sram7__DOT___GEN_1[2U] 
        = (((0U == (0x1fU & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram0_A) 
                             << 7U))) ? 0U : (__Vtemp1638[
                                              ((IData)(3U) 
                                               + (0xfcU 
                                                  & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram0_A) 
                                                     << 2U)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram0_A) 
                                                      << 7U))))) 
           | (__Vtemp1638[((IData)(2U) + (0xfcU & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram0_A) 
                                                   << 2U)))] 
              >> (0x1fU & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram0_A) 
                           << 7U))));
    vlSelf->riscv_soc__DOT__sram7__DOT___GEN_1[3U] 
        = (((0U == (0x1fU & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram0_A) 
                             << 7U))) ? 0U : (__Vtemp1638[
                                              ((IData)(4U) 
                                               + (0xfcU 
                                                  & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram0_A) 
                                                     << 2U)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram0_A) 
                                                      << 7U))))) 
           | (__Vtemp1638[((IData)(3U) + (0xfcU & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__sram0_A) 
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
    __Vtemp1642[0U] = (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__pre_info_fifo_0);
    __Vtemp1642[1U] = (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__pre_info_fifo_0 
                               >> 0x20U));
    __Vtemp1642[2U] = (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__pre_info_fifo_1);
    __Vtemp1642[3U] = (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__pre_info_fifo_1 
                               >> 0x20U));
    __Vtemp1642[4U] = (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__pre_info_fifo_2);
    __Vtemp1642[5U] = (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__pre_info_fifo_2 
                               >> 0x20U));
    __Vtemp1642[6U] = (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__pre_info_fifo_3);
    __Vtemp1642[7U] = (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__pre_info_fifo_3 
                               >> 0x20U));
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___io_br_info_mispredict_T 
        = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__br_valid) 
           & (((((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__is_pre) 
                 & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___GEN_4[2U]) 
                & ((((QData)((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___GEN_4[1U])) 
                     << 0x20U) | (QData)((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___GEN_4[0U]))) 
                   != ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__is_pre)
                        ? (((QData)((IData)(__Vtemp1642[
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
                                                          __Vtemp1642[
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
                              | ((QData)((IData)(__Vtemp1642[
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
    __Vtemp1645[0U] = (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_r_raddr);
    __Vtemp1645[1U] = (IData)((vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_r_raddr 
                               >> 0x20U));
    __Vtemp1645[2U] = (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_r_raddr);
    __Vtemp1645[3U] = (IData)((vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_r_raddr 
                               >> 0x20U));
    __Vtemp1645[4U] = (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0);
    __Vtemp1645[5U] = (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0 
                               >> 0x20U));
    __Vtemp1645[6U] = (IData)(vlSelf->riscv_soc__DOT__core__DOT___execute_io_bus_bits_addr);
    __Vtemp1645[7U] = (IData)((vlSelf->riscv_soc__DOT__core__DOT___execute_io_bus_bits_addr 
                               >> 0x20U));
    vlSelf->riscv_soc__DOT___core_io_axi_bus_ar_bits_araddr 
        = (((QData)((IData)(__Vtemp1645[(((IData)(0x3fU) 
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
                                                                   __Vtemp1645[
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
              | ((QData)((IData)(__Vtemp1645[(6U & 
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
    Vriscv_soc___024root___settle__TOP__5(vlSelf);
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
    vlSelf->riscv_soc__DOT__core__DOT___cross_bar_1_io_fetch_cpu_data_bits_data = VL_RAND_RESET_Q(64);
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
    vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___w_r_pass1_val_T = VL_RAND_RESET_I(1);
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
    VL_RAND_RESET_W(128, vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_0);
    VL_RAND_RESET_W(128, vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_1);
    VL_RAND_RESET_W(128, vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_2);
    VL_RAND_RESET_W(128, vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_3);
    VL_RAND_RESET_W(128, vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_4);
    VL_RAND_RESET_W(128, vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_5);
    VL_RAND_RESET_W(128, vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_6);
    VL_RAND_RESET_W(128, vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_7);
    VL_RAND_RESET_W(128, vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_8);
    VL_RAND_RESET_W(128, vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_9);
    VL_RAND_RESET_W(128, vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_10);
    VL_RAND_RESET_W(128, vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_11);
    VL_RAND_RESET_W(128, vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_12);
    VL_RAND_RESET_W(128, vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_13);
    VL_RAND_RESET_W(128, vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_14);
    VL_RAND_RESET_W(128, vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_15);
    VL_RAND_RESET_W(128, vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_16);
    VL_RAND_RESET_W(128, vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_17);
    VL_RAND_RESET_W(128, vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_18);
    VL_RAND_RESET_W(128, vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_19);
    VL_RAND_RESET_W(128, vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_20);
    VL_RAND_RESET_W(128, vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_21);
    VL_RAND_RESET_W(128, vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_22);
    VL_RAND_RESET_W(128, vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_23);
    VL_RAND_RESET_W(128, vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_24);
    VL_RAND_RESET_W(128, vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_25);
    VL_RAND_RESET_W(128, vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_26);
    VL_RAND_RESET_W(128, vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_27);
    VL_RAND_RESET_W(128, vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_28);
    VL_RAND_RESET_W(128, vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_29);
    VL_RAND_RESET_W(128, vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_30);
    VL_RAND_RESET_W(128, vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_31);
    VL_RAND_RESET_W(128, vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_32);
    VL_RAND_RESET_W(128, vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_33);
    VL_RAND_RESET_W(128, vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_34);
    VL_RAND_RESET_W(128, vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_35);
    VL_RAND_RESET_W(128, vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_36);
    VL_RAND_RESET_W(128, vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_37);
    VL_RAND_RESET_W(128, vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_38);
    VL_RAND_RESET_W(128, vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_39);
    VL_RAND_RESET_W(128, vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_40);
    VL_RAND_RESET_W(128, vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_41);
    VL_RAND_RESET_W(128, vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_42);
    VL_RAND_RESET_W(128, vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_43);
    VL_RAND_RESET_W(128, vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_44);
    VL_RAND_RESET_W(128, vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_45);
    VL_RAND_RESET_W(128, vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_46);
    VL_RAND_RESET_W(128, vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_47);
    VL_RAND_RESET_W(128, vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_48);
    VL_RAND_RESET_W(128, vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_49);
    VL_RAND_RESET_W(128, vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_50);
    VL_RAND_RESET_W(128, vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_51);
    VL_RAND_RESET_W(128, vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_52);
    VL_RAND_RESET_W(128, vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_53);
    VL_RAND_RESET_W(128, vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_54);
    VL_RAND_RESET_W(128, vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_55);
    VL_RAND_RESET_W(128, vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_56);
    VL_RAND_RESET_W(128, vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_57);
    VL_RAND_RESET_W(128, vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_58);
    VL_RAND_RESET_W(128, vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_59);
    VL_RAND_RESET_W(128, vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_60);
    VL_RAND_RESET_W(128, vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_61);
    VL_RAND_RESET_W(128, vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_62);
    VL_RAND_RESET_W(128, vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_63);
    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__RAS_0 = VL_RAND_RESET_Q(64);
    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__RAS_1 = VL_RAND_RESET_Q(64);
    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__RAS_2 = VL_RAND_RESET_Q(64);
    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__RAS_3 = VL_RAND_RESET_Q(64);
    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__RAS_4 = VL_RAND_RESET_Q(64);
    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__RAS_5 = VL_RAND_RESET_Q(64);
    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_0 = VL_RAND_RESET_I(2);
    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_1 = VL_RAND_RESET_I(2);
    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_2 = VL_RAND_RESET_I(2);
    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_3 = VL_RAND_RESET_I(2);
    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_4 = VL_RAND_RESET_I(2);
    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_5 = VL_RAND_RESET_I(2);
    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_6 = VL_RAND_RESET_I(2);
    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_7 = VL_RAND_RESET_I(2);
    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_8 = VL_RAND_RESET_I(2);
    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_9 = VL_RAND_RESET_I(2);
    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_10 = VL_RAND_RESET_I(2);
    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_11 = VL_RAND_RESET_I(2);
    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_12 = VL_RAND_RESET_I(2);
    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_13 = VL_RAND_RESET_I(2);
    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_14 = VL_RAND_RESET_I(2);
    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_15 = VL_RAND_RESET_I(2);
    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_16 = VL_RAND_RESET_I(2);
    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_17 = VL_RAND_RESET_I(2);
    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_18 = VL_RAND_RESET_I(2);
    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_19 = VL_RAND_RESET_I(2);
    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_20 = VL_RAND_RESET_I(2);
    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_21 = VL_RAND_RESET_I(2);
    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_22 = VL_RAND_RESET_I(2);
    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_23 = VL_RAND_RESET_I(2);
    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_24 = VL_RAND_RESET_I(2);
    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_25 = VL_RAND_RESET_I(2);
    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_26 = VL_RAND_RESET_I(2);
    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_27 = VL_RAND_RESET_I(2);
    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_28 = VL_RAND_RESET_I(2);
    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_29 = VL_RAND_RESET_I(2);
    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_30 = VL_RAND_RESET_I(2);
    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_31 = VL_RAND_RESET_I(2);
    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_32 = VL_RAND_RESET_I(2);
    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_33 = VL_RAND_RESET_I(2);
    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_34 = VL_RAND_RESET_I(2);
    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_35 = VL_RAND_RESET_I(2);
    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_36 = VL_RAND_RESET_I(2);
    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_37 = VL_RAND_RESET_I(2);
    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_38 = VL_RAND_RESET_I(2);
    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_39 = VL_RAND_RESET_I(2);
    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_40 = VL_RAND_RESET_I(2);
    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_41 = VL_RAND_RESET_I(2);
    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_42 = VL_RAND_RESET_I(2);
    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_43 = VL_RAND_RESET_I(2);
    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_44 = VL_RAND_RESET_I(2);
    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_45 = VL_RAND_RESET_I(2);
    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_46 = VL_RAND_RESET_I(2);
    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_47 = VL_RAND_RESET_I(2);
    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_48 = VL_RAND_RESET_I(2);
    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_49 = VL_RAND_RESET_I(2);
    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_50 = VL_RAND_RESET_I(2);
    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_51 = VL_RAND_RESET_I(2);
    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_52 = VL_RAND_RESET_I(2);
    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_53 = VL_RAND_RESET_I(2);
    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_54 = VL_RAND_RESET_I(2);
    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_55 = VL_RAND_RESET_I(2);
    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_56 = VL_RAND_RESET_I(2);
    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_57 = VL_RAND_RESET_I(2);
    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_58 = VL_RAND_RESET_I(2);
    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_59 = VL_RAND_RESET_I(2);
    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_60 = VL_RAND_RESET_I(2);
    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_61 = VL_RAND_RESET_I(2);
    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_62 = VL_RAND_RESET_I(2);
    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_63 = VL_RAND_RESET_I(2);
    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__reg_head = VL_RAND_RESET_I(3);
    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___GEN_0 = VL_RAND_RESET_I(2);
    VL_RAND_RESET_W(128, vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___GEN_3);
    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__pre_valid = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__unnamedblk1__DOT___chage_pht_counter_T_2 = VL_RAND_RESET_I(2);
    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__unnamedblk1__DOT___chage_pht_counter_T_4 = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__unnamedblk1__DOT___chage_pht_counter_T_6 = VL_RAND_RESET_I(2);
    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__unnamedblk1__DOT___GEN_6 = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__unnamedblk1__DOT___GEN_7 = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__unnamedblk1__DOT___GEN_8 = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__unnamedblk1__DOT___GEN_9 = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__unnamedblk1__DOT___GEN_10 = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__unnamedblk1__DOT___GEN_11 = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__unnamedblk1__DOT___GEN_12 = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__unnamedblk1__DOT___GEN_13 = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__unnamedblk1__DOT___GEN_14 = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__unnamedblk1__DOT___GEN_15 = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__unnamedblk1__DOT___GEN_16 = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__unnamedblk1__DOT___GEN_17 = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__unnamedblk1__DOT___GEN_18 = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__unnamedblk1__DOT___GEN_19 = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__unnamedblk1__DOT___GEN_20 = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__unnamedblk1__DOT___GEN_21 = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__unnamedblk1__DOT___GEN_22 = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__unnamedblk1__DOT___GEN_23 = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__unnamedblk1__DOT___GEN_24 = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__unnamedblk1__DOT___GEN_25 = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__unnamedblk1__DOT___GEN_26 = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__unnamedblk1__DOT___GEN_27 = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__unnamedblk1__DOT___GEN_28 = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__unnamedblk1__DOT___GEN_29 = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__unnamedblk1__DOT___GEN_30 = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__unnamedblk1__DOT___GEN_31 = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__unnamedblk1__DOT___GEN_32 = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__unnamedblk1__DOT___GEN_33 = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__unnamedblk1__DOT___GEN_34 = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__unnamedblk1__DOT___GEN_35 = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__unnamedblk1__DOT___GEN_36 = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__unnamedblk1__DOT___GEN_37 = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__unnamedblk1__DOT___GEN_38 = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__unnamedblk1__DOT___GEN_39 = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__unnamedblk1__DOT___GEN_40 = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__unnamedblk1__DOT___GEN_41 = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__unnamedblk1__DOT___GEN_42 = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__unnamedblk1__DOT___GEN_43 = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__unnamedblk1__DOT___GEN_44 = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__unnamedblk1__DOT___GEN_45 = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__unnamedblk1__DOT___GEN_46 = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__unnamedblk1__DOT___GEN_47 = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__unnamedblk1__DOT___GEN_48 = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__unnamedblk1__DOT___GEN_49 = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__unnamedblk1__DOT___GEN_50 = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__unnamedblk1__DOT___GEN_51 = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__unnamedblk1__DOT___GEN_52 = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__unnamedblk1__DOT___GEN_53 = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__unnamedblk1__DOT___GEN_54 = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__unnamedblk1__DOT___GEN_55 = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__unnamedblk1__DOT___GEN_56 = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__unnamedblk1__DOT___GEN_57 = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__unnamedblk1__DOT___GEN_58 = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__unnamedblk1__DOT___GEN_59 = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__unnamedblk1__DOT___GEN_60 = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__unnamedblk1__DOT___GEN_61 = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__unnamedblk1__DOT___GEN_62 = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__unnamedblk1__DOT___GEN_63 = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__unnamedblk1__DOT___GEN_64 = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__unnamedblk1__DOT___GEN_65 = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__unnamedblk1__DOT___GEN_66 = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__unnamedblk1__DOT___GEN_67 = VL_RAND_RESET_I(1);
    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__unnamedblk1__DOT___GEN_68 = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(128, vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__unnamedblk1__DOT___GEN_69);
    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__unnamedblk1__DOT___T_1 = VL_RAND_RESET_I(1);
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
    vlSelf->__Vdly__riscv_soc__DOT__core__DOT__fetch__DOT__reg_flush = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_valid_0 = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_valid_1 = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_valid_2 = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_valid_3 = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__reg_head = VL_RAND_RESET_I(2);
    vlSelf->__Vdly__riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__reg_tail = VL_RAND_RESET_I(2);
    vlSelf->__Vdly__riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__reg_ibuf_size = VL_RAND_RESET_I(3);
}
