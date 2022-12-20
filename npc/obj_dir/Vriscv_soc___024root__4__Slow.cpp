// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vriscv_soc.h for the primary calling header

#include "Vriscv_soc___024root.h"
#include "Vriscv_soc__Syms.h"

#include "verilated_dpi.h"

void Vriscv_soc___024root___settle__TOP__5(Vriscv_soc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vriscv_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv_soc___024root___settle__TOP__5\n"); );
    // Variables
    CData/*2:0*/ riscv_soc__DOT__core__DOT__decode__DOT___T_180;
    CData/*5:0*/ riscv_soc__DOT__core__DOT__decode__DOT___T_247;
    CData/*3:0*/ riscv_soc__DOT__core__DOT__decode__DOT___T_314;
    CData/*3:0*/ riscv_soc__DOT__core__DOT__decode__DOT___T_329;
    VlWide<3>/*65:0*/ riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___temp_result_data_T_72;
    VlWide<4>/*127:0*/ riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___temp_result_data_T_84;
    VlWide<3>/*95:0*/ __Vtemp739;
    VlWide<3>/*95:0*/ __Vtemp742;
    VlWide<3>/*95:0*/ __Vtemp750;
    VlWide<3>/*95:0*/ __Vtemp751;
    VlWide<3>/*95:0*/ __Vtemp754;
    VlWide<3>/*95:0*/ __Vtemp755;
    VlWide<3>/*95:0*/ __Vtemp758;
    VlWide<3>/*95:0*/ __Vtemp759;
    VlWide<3>/*95:0*/ __Vtemp762;
    VlWide<3>/*95:0*/ __Vtemp763;
    VlWide<3>/*95:0*/ __Vtemp766;
    VlWide<3>/*95:0*/ __Vtemp767;
    VlWide<3>/*95:0*/ __Vtemp770;
    VlWide<3>/*95:0*/ __Vtemp771;
    VlWide<3>/*95:0*/ __Vtemp774;
    VlWide<3>/*95:0*/ __Vtemp775;
    VlWide<3>/*95:0*/ __Vtemp778;
    VlWide<3>/*95:0*/ __Vtemp779;
    VlWide<3>/*95:0*/ __Vtemp782;
    VlWide<3>/*95:0*/ __Vtemp783;
    VlWide<3>/*95:0*/ __Vtemp786;
    VlWide<3>/*95:0*/ __Vtemp787;
    VlWide<3>/*95:0*/ __Vtemp790;
    VlWide<3>/*95:0*/ __Vtemp791;
    VlWide<3>/*95:0*/ __Vtemp794;
    VlWide<3>/*95:0*/ __Vtemp795;
    VlWide<3>/*95:0*/ __Vtemp798;
    VlWide<3>/*95:0*/ __Vtemp799;
    VlWide<3>/*95:0*/ __Vtemp802;
    VlWide<3>/*95:0*/ __Vtemp803;
    VlWide<3>/*95:0*/ __Vtemp806;
    VlWide<3>/*95:0*/ __Vtemp807;
    VlWide<3>/*95:0*/ __Vtemp810;
    VlWide<3>/*95:0*/ __Vtemp811;
    VlWide<3>/*95:0*/ __Vtemp814;
    VlWide<3>/*95:0*/ __Vtemp815;
    VlWide<3>/*95:0*/ __Vtemp818;
    VlWide<3>/*95:0*/ __Vtemp819;
    VlWide<3>/*95:0*/ __Vtemp822;
    VlWide<3>/*95:0*/ __Vtemp823;
    VlWide<3>/*95:0*/ __Vtemp826;
    VlWide<3>/*95:0*/ __Vtemp827;
    VlWide<3>/*95:0*/ __Vtemp830;
    VlWide<3>/*95:0*/ __Vtemp831;
    VlWide<3>/*95:0*/ __Vtemp834;
    VlWide<3>/*95:0*/ __Vtemp835;
    VlWide<3>/*95:0*/ __Vtemp838;
    VlWide<3>/*95:0*/ __Vtemp839;
    VlWide<3>/*95:0*/ __Vtemp842;
    VlWide<3>/*95:0*/ __Vtemp843;
    VlWide<3>/*95:0*/ __Vtemp846;
    VlWide<3>/*95:0*/ __Vtemp847;
    VlWide<3>/*95:0*/ __Vtemp850;
    VlWide<3>/*95:0*/ __Vtemp851;
    VlWide<3>/*95:0*/ __Vtemp854;
    VlWide<3>/*95:0*/ __Vtemp855;
    VlWide<3>/*95:0*/ __Vtemp858;
    VlWide<3>/*95:0*/ __Vtemp859;
    VlWide<3>/*95:0*/ __Vtemp862;
    VlWide<3>/*95:0*/ __Vtemp863;
    VlWide<3>/*95:0*/ __Vtemp866;
    VlWide<3>/*95:0*/ __Vtemp867;
    VlWide<3>/*95:0*/ __Vtemp870;
    VlWide<3>/*95:0*/ __Vtemp871;
    VlWide<3>/*95:0*/ __Vtemp874;
    VlWide<3>/*95:0*/ __Vtemp875;
    VlWide<3>/*95:0*/ __Vtemp878;
    VlWide<3>/*95:0*/ __Vtemp879;
    VlWide<3>/*95:0*/ __Vtemp882;
    VlWide<3>/*95:0*/ __Vtemp883;
    VlWide<3>/*95:0*/ __Vtemp886;
    VlWide<3>/*95:0*/ __Vtemp887;
    VlWide<3>/*95:0*/ __Vtemp890;
    VlWide<3>/*95:0*/ __Vtemp891;
    VlWide<3>/*95:0*/ __Vtemp894;
    VlWide<3>/*95:0*/ __Vtemp895;
    VlWide<3>/*95:0*/ __Vtemp898;
    VlWide<3>/*95:0*/ __Vtemp899;
    VlWide<3>/*95:0*/ __Vtemp902;
    VlWide<3>/*95:0*/ __Vtemp903;
    VlWide<3>/*95:0*/ __Vtemp906;
    VlWide<3>/*95:0*/ __Vtemp907;
    VlWide<3>/*95:0*/ __Vtemp910;
    VlWide<3>/*95:0*/ __Vtemp911;
    VlWide<3>/*95:0*/ __Vtemp914;
    VlWide<3>/*95:0*/ __Vtemp915;
    VlWide<3>/*95:0*/ __Vtemp918;
    VlWide<3>/*95:0*/ __Vtemp919;
    VlWide<3>/*95:0*/ __Vtemp922;
    VlWide<3>/*95:0*/ __Vtemp923;
    VlWide<3>/*95:0*/ __Vtemp926;
    VlWide<3>/*95:0*/ __Vtemp927;
    VlWide<3>/*95:0*/ __Vtemp930;
    VlWide<3>/*95:0*/ __Vtemp931;
    VlWide<3>/*95:0*/ __Vtemp934;
    VlWide<3>/*95:0*/ __Vtemp935;
    VlWide<3>/*95:0*/ __Vtemp938;
    VlWide<3>/*95:0*/ __Vtemp939;
    VlWide<3>/*95:0*/ __Vtemp942;
    VlWide<3>/*95:0*/ __Vtemp943;
    VlWide<3>/*95:0*/ __Vtemp946;
    VlWide<3>/*95:0*/ __Vtemp947;
    VlWide<3>/*95:0*/ __Vtemp950;
    VlWide<3>/*95:0*/ __Vtemp951;
    VlWide<3>/*95:0*/ __Vtemp954;
    VlWide<3>/*95:0*/ __Vtemp955;
    VlWide<3>/*95:0*/ __Vtemp958;
    VlWide<3>/*95:0*/ __Vtemp959;
    VlWide<3>/*95:0*/ __Vtemp962;
    VlWide<3>/*95:0*/ __Vtemp963;
    VlWide<3>/*95:0*/ __Vtemp966;
    VlWide<3>/*95:0*/ __Vtemp967;
    VlWide<3>/*95:0*/ __Vtemp970;
    VlWide<3>/*95:0*/ __Vtemp971;
    VlWide<3>/*95:0*/ __Vtemp974;
    VlWide<3>/*95:0*/ __Vtemp975;
    VlWide<3>/*95:0*/ __Vtemp978;
    VlWide<3>/*95:0*/ __Vtemp979;
    VlWide<3>/*95:0*/ __Vtemp982;
    VlWide<3>/*95:0*/ __Vtemp983;
    VlWide<3>/*95:0*/ __Vtemp986;
    VlWide<3>/*95:0*/ __Vtemp987;
    VlWide<3>/*95:0*/ __Vtemp990;
    VlWide<3>/*95:0*/ __Vtemp991;
    VlWide<3>/*95:0*/ __Vtemp994;
    VlWide<3>/*95:0*/ __Vtemp995;
    VlWide<3>/*95:0*/ __Vtemp998;
    VlWide<3>/*95:0*/ __Vtemp999;
    VlWide<3>/*95:0*/ __Vtemp1002;
    VlWide<3>/*95:0*/ __Vtemp1003;
    VlWide<3>/*95:0*/ __Vtemp1006;
    VlWide<3>/*95:0*/ __Vtemp1007;
    VlWide<3>/*95:0*/ __Vtemp1010;
    VlWide<3>/*95:0*/ __Vtemp1011;
    VlWide<3>/*95:0*/ __Vtemp1014;
    VlWide<3>/*95:0*/ __Vtemp1015;
    VlWide<3>/*95:0*/ __Vtemp1018;
    VlWide<3>/*95:0*/ __Vtemp1019;
    VlWide<3>/*95:0*/ __Vtemp1022;
    VlWide<3>/*95:0*/ __Vtemp1023;
    VlWide<3>/*95:0*/ __Vtemp1026;
    VlWide<3>/*95:0*/ __Vtemp1027;
    VlWide<3>/*95:0*/ __Vtemp1030;
    VlWide<3>/*95:0*/ __Vtemp1031;
    VlWide<3>/*95:0*/ __Vtemp1034;
    VlWide<3>/*95:0*/ __Vtemp1035;
    VlWide<3>/*95:0*/ __Vtemp1038;
    VlWide<3>/*95:0*/ __Vtemp1039;
    VlWide<3>/*95:0*/ __Vtemp1042;
    VlWide<3>/*95:0*/ __Vtemp1043;
    VlWide<3>/*95:0*/ __Vtemp1046;
    VlWide<3>/*95:0*/ __Vtemp1047;
    VlWide<3>/*95:0*/ __Vtemp1050;
    VlWide<3>/*95:0*/ __Vtemp1051;
    VlWide<3>/*95:0*/ __Vtemp1054;
    VlWide<3>/*95:0*/ __Vtemp1055;
    VlWide<3>/*95:0*/ __Vtemp1058;
    VlWide<3>/*95:0*/ __Vtemp1059;
    VlWide<3>/*95:0*/ __Vtemp1062;
    VlWide<3>/*95:0*/ __Vtemp1063;
    VlWide<3>/*95:0*/ __Vtemp1066;
    VlWide<3>/*95:0*/ __Vtemp1067;
    VlWide<3>/*95:0*/ __Vtemp1070;
    VlWide<3>/*95:0*/ __Vtemp1071;
    VlWide<3>/*95:0*/ __Vtemp1074;
    VlWide<3>/*95:0*/ __Vtemp1075;
    VlWide<3>/*95:0*/ __Vtemp1078;
    VlWide<3>/*95:0*/ __Vtemp1079;
    VlWide<3>/*95:0*/ __Vtemp1082;
    VlWide<3>/*95:0*/ __Vtemp1083;
    VlWide<3>/*95:0*/ __Vtemp1086;
    VlWide<3>/*95:0*/ __Vtemp1087;
    VlWide<3>/*95:0*/ __Vtemp1090;
    VlWide<3>/*95:0*/ __Vtemp1091;
    VlWide<3>/*95:0*/ __Vtemp1094;
    VlWide<3>/*95:0*/ __Vtemp1095;
    VlWide<3>/*95:0*/ __Vtemp1098;
    VlWide<3>/*95:0*/ __Vtemp1099;
    VlWide<3>/*95:0*/ __Vtemp1102;
    VlWide<3>/*95:0*/ __Vtemp1103;
    VlWide<3>/*95:0*/ __Vtemp1106;
    VlWide<3>/*95:0*/ __Vtemp1107;
    VlWide<3>/*95:0*/ __Vtemp1110;
    VlWide<3>/*95:0*/ __Vtemp1111;
    VlWide<3>/*95:0*/ __Vtemp1114;
    VlWide<3>/*95:0*/ __Vtemp1115;
    VlWide<3>/*95:0*/ __Vtemp1118;
    VlWide<3>/*95:0*/ __Vtemp1119;
    VlWide<3>/*95:0*/ __Vtemp1122;
    VlWide<3>/*95:0*/ __Vtemp1123;
    VlWide<3>/*95:0*/ __Vtemp1126;
    VlWide<3>/*95:0*/ __Vtemp1127;
    VlWide<3>/*95:0*/ __Vtemp1130;
    VlWide<3>/*95:0*/ __Vtemp1131;
    VlWide<3>/*95:0*/ __Vtemp1134;
    VlWide<3>/*95:0*/ __Vtemp1135;
    VlWide<3>/*95:0*/ __Vtemp1138;
    VlWide<3>/*95:0*/ __Vtemp1139;
    VlWide<3>/*95:0*/ __Vtemp1142;
    VlWide<3>/*95:0*/ __Vtemp1143;
    VlWide<3>/*95:0*/ __Vtemp1146;
    VlWide<3>/*95:0*/ __Vtemp1147;
    VlWide<3>/*95:0*/ __Vtemp1150;
    VlWide<3>/*95:0*/ __Vtemp1151;
    VlWide<3>/*95:0*/ __Vtemp1154;
    VlWide<3>/*95:0*/ __Vtemp1155;
    VlWide<3>/*95:0*/ __Vtemp1158;
    VlWide<3>/*95:0*/ __Vtemp1159;
    VlWide<3>/*95:0*/ __Vtemp1162;
    VlWide<3>/*95:0*/ __Vtemp1163;
    VlWide<3>/*95:0*/ __Vtemp1166;
    VlWide<3>/*95:0*/ __Vtemp1167;
    VlWide<3>/*95:0*/ __Vtemp1170;
    VlWide<3>/*95:0*/ __Vtemp1171;
    VlWide<3>/*95:0*/ __Vtemp1174;
    VlWide<3>/*95:0*/ __Vtemp1175;
    VlWide<3>/*95:0*/ __Vtemp1178;
    VlWide<3>/*95:0*/ __Vtemp1179;
    VlWide<3>/*95:0*/ __Vtemp1182;
    VlWide<3>/*95:0*/ __Vtemp1183;
    VlWide<3>/*95:0*/ __Vtemp1186;
    VlWide<3>/*95:0*/ __Vtemp1187;
    VlWide<3>/*95:0*/ __Vtemp1190;
    VlWide<3>/*95:0*/ __Vtemp1191;
    VlWide<3>/*95:0*/ __Vtemp1194;
    VlWide<3>/*95:0*/ __Vtemp1195;
    VlWide<3>/*95:0*/ __Vtemp1198;
    VlWide<3>/*95:0*/ __Vtemp1199;
    VlWide<3>/*95:0*/ __Vtemp1202;
    VlWide<3>/*95:0*/ __Vtemp1203;
    VlWide<3>/*95:0*/ __Vtemp1206;
    VlWide<3>/*95:0*/ __Vtemp1207;
    VlWide<3>/*95:0*/ __Vtemp1210;
    VlWide<3>/*95:0*/ __Vtemp1211;
    VlWide<3>/*95:0*/ __Vtemp1214;
    VlWide<3>/*95:0*/ __Vtemp1215;
    VlWide<3>/*95:0*/ __Vtemp1218;
    VlWide<3>/*95:0*/ __Vtemp1219;
    VlWide<3>/*95:0*/ __Vtemp1222;
    VlWide<3>/*95:0*/ __Vtemp1223;
    VlWide<3>/*95:0*/ __Vtemp1226;
    VlWide<3>/*95:0*/ __Vtemp1227;
    VlWide<3>/*95:0*/ __Vtemp1230;
    VlWide<3>/*95:0*/ __Vtemp1231;
    VlWide<3>/*95:0*/ __Vtemp1234;
    VlWide<3>/*95:0*/ __Vtemp1235;
    VlWide<3>/*95:0*/ __Vtemp1238;
    VlWide<3>/*95:0*/ __Vtemp1239;
    VlWide<3>/*95:0*/ __Vtemp1242;
    VlWide<3>/*95:0*/ __Vtemp1243;
    VlWide<3>/*95:0*/ __Vtemp1246;
    VlWide<3>/*95:0*/ __Vtemp1247;
    VlWide<3>/*95:0*/ __Vtemp1250;
    VlWide<3>/*95:0*/ __Vtemp1251;
    VlWide<3>/*95:0*/ __Vtemp1254;
    VlWide<3>/*95:0*/ __Vtemp1255;
    VlWide<3>/*95:0*/ __Vtemp1258;
    VlWide<3>/*95:0*/ __Vtemp1259;
    VlWide<3>/*95:0*/ __Vtemp1262;
    VlWide<3>/*95:0*/ __Vtemp1263;
    VlWide<3>/*95:0*/ __Vtemp1266;
    VlWide<3>/*95:0*/ __Vtemp1267;
    VlWide<3>/*95:0*/ __Vtemp1270;
    VlWide<3>/*95:0*/ __Vtemp1271;
    VlWide<3>/*95:0*/ __Vtemp1276;
    VlWide<3>/*95:0*/ __Vtemp1277;
    VlWide<3>/*95:0*/ __Vtemp1278;
    VlWide<3>/*95:0*/ __Vtemp1279;
    VlWide<3>/*95:0*/ __Vtemp1280;
    VlWide<3>/*95:0*/ __Vtemp1283;
    VlWide<3>/*95:0*/ __Vtemp1284;
    VlWide<3>/*95:0*/ __Vtemp1285;
    VlWide<3>/*95:0*/ __Vtemp1286;
    VlWide<3>/*95:0*/ __Vtemp1287;
    VlWide<3>/*95:0*/ __Vtemp1288;
    VlWide<3>/*95:0*/ __Vtemp1290;
    VlWide<3>/*95:0*/ __Vtemp1291;
    VlWide<3>/*95:0*/ __Vtemp1292;
    VlWide<3>/*95:0*/ __Vtemp1293;
    VlWide<3>/*95:0*/ __Vtemp1294;
    VlWide<3>/*95:0*/ __Vtemp1295;
    VlWide<3>/*95:0*/ __Vtemp1299;
    VlWide<3>/*95:0*/ __Vtemp1300;
    VlWide<3>/*95:0*/ __Vtemp1301;
    VlWide<3>/*95:0*/ __Vtemp1302;
    VlWide<3>/*95:0*/ __Vtemp1303;
    VlWide<3>/*95:0*/ __Vtemp1310;
    VlWide<3>/*95:0*/ __Vtemp1311;
    VlWide<3>/*95:0*/ __Vtemp1319;
    VlWide<3>/*95:0*/ __Vtemp1320;
    VlWide<3>/*95:0*/ __Vtemp1321;
    VlWide<3>/*95:0*/ __Vtemp1322;
    VlWide<3>/*95:0*/ __Vtemp1335;
    VlWide<3>/*95:0*/ __Vtemp1336;
    VlWide<3>/*95:0*/ __Vtemp1346;
    VlWide<3>/*95:0*/ __Vtemp1347;
    VlWide<3>/*95:0*/ __Vtemp1372;
    VlWide<3>/*95:0*/ __Vtemp1374;
    VlWide<3>/*95:0*/ __Vtemp1378;
    VlWide<3>/*95:0*/ __Vtemp1379;
    VlWide<3>/*95:0*/ __Vtemp1381;
    VlWide<3>/*95:0*/ __Vtemp1382;
    VlWide<3>/*95:0*/ __Vtemp1384;
    VlWide<3>/*95:0*/ __Vtemp1385;
    VlWide<3>/*95:0*/ __Vtemp1389;
    VlWide<3>/*95:0*/ __Vtemp1390;
    VlWide<3>/*95:0*/ __Vtemp1407;
    VlWide<3>/*95:0*/ __Vtemp1408;
    VlWide<3>/*95:0*/ __Vtemp1413;
    VlWide<4>/*127:0*/ __Vtemp1414;
    VlWide<3>/*95:0*/ __Vtemp1415;
    VlWide<4>/*127:0*/ __Vtemp1416;
    VlWide<3>/*95:0*/ __Vtemp1417;
    VlWide<4>/*127:0*/ __Vtemp1418;
    VlWide<3>/*95:0*/ __Vtemp1419;
    VlWide<4>/*127:0*/ __Vtemp1420;
    VlWide<3>/*95:0*/ __Vtemp1421;
    VlWide<4>/*127:0*/ __Vtemp1422;
    VlWide<4>/*127:0*/ __Vtemp1424;
    VlWide<4>/*127:0*/ __Vtemp1425;
    VlWide<4>/*127:0*/ __Vtemp1428;
    VlWide<3>/*95:0*/ __Vtemp1441;
    VlWide<4>/*127:0*/ __Vtemp1442;
    VlWide<3>/*95:0*/ __Vtemp1443;
    VlWide<4>/*127:0*/ __Vtemp1444;
    VlWide<3>/*95:0*/ __Vtemp1445;
    VlWide<4>/*127:0*/ __Vtemp1446;
    VlWide<3>/*95:0*/ __Vtemp1447;
    VlWide<4>/*127:0*/ __Vtemp1448;
    // Body
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___next_pc3_T_1 
                        >> 3U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__lsu_exu_io_address_result 
                                           >> 3U))))) {
        ++(vlSymsp->__Vcoverage[6011]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__lsu_exu_io_address_result 
            = ((0xfffffffffffffff7ULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__lsu_exu_io_address_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___next_pc3_T_1 
                                                 >> 3U))))) 
                  << 3U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___next_pc3_T_1 
                        >> 4U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__lsu_exu_io_address_result 
                                           >> 4U))))) {
        ++(vlSymsp->__Vcoverage[6012]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__lsu_exu_io_address_result 
            = ((0xffffffffffffffefULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__lsu_exu_io_address_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___next_pc3_T_1 
                                                 >> 4U))))) 
                  << 4U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___next_pc3_T_1 
                        >> 5U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__lsu_exu_io_address_result 
                                           >> 5U))))) {
        ++(vlSymsp->__Vcoverage[6013]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__lsu_exu_io_address_result 
            = ((0xffffffffffffffdfULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__lsu_exu_io_address_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___next_pc3_T_1 
                                                 >> 5U))))) 
                  << 5U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___next_pc3_T_1 
                        >> 6U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__lsu_exu_io_address_result 
                                           >> 6U))))) {
        ++(vlSymsp->__Vcoverage[6014]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__lsu_exu_io_address_result 
            = ((0xffffffffffffffbfULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__lsu_exu_io_address_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___next_pc3_T_1 
                                                 >> 6U))))) 
                  << 6U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___next_pc3_T_1 
                        >> 7U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__lsu_exu_io_address_result 
                                           >> 7U))))) {
        ++(vlSymsp->__Vcoverage[6015]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__lsu_exu_io_address_result 
            = ((0xffffffffffffff7fULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__lsu_exu_io_address_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___next_pc3_T_1 
                                                 >> 7U))))) 
                  << 7U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___next_pc3_T_1 
                        >> 8U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__lsu_exu_io_address_result 
                                           >> 8U))))) {
        ++(vlSymsp->__Vcoverage[6016]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__lsu_exu_io_address_result 
            = ((0xfffffffffffffeffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__lsu_exu_io_address_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___next_pc3_T_1 
                                                 >> 8U))))) 
                  << 8U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___next_pc3_T_1 
                        >> 9U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__lsu_exu_io_address_result 
                                           >> 9U))))) {
        ++(vlSymsp->__Vcoverage[6017]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__lsu_exu_io_address_result 
            = ((0xfffffffffffffdffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__lsu_exu_io_address_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___next_pc3_T_1 
                                                 >> 9U))))) 
                  << 9U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___next_pc3_T_1 
                        >> 0xaU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__lsu_exu_io_address_result 
                                             >> 0xaU))))) {
        ++(vlSymsp->__Vcoverage[6018]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__lsu_exu_io_address_result 
            = ((0xfffffffffffffbffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__lsu_exu_io_address_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___next_pc3_T_1 
                                                 >> 0xaU))))) 
                  << 0xaU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___next_pc3_T_1 
                        >> 0xbU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__lsu_exu_io_address_result 
                                             >> 0xbU))))) {
        ++(vlSymsp->__Vcoverage[6019]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__lsu_exu_io_address_result 
            = ((0xfffffffffffff7ffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__lsu_exu_io_address_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___next_pc3_T_1 
                                                 >> 0xbU))))) 
                  << 0xbU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___next_pc3_T_1 
                        >> 0xcU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__lsu_exu_io_address_result 
                                             >> 0xcU))))) {
        ++(vlSymsp->__Vcoverage[6020]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__lsu_exu_io_address_result 
            = ((0xffffffffffffefffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__lsu_exu_io_address_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___next_pc3_T_1 
                                                 >> 0xcU))))) 
                  << 0xcU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___next_pc3_T_1 
                        >> 0xdU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__lsu_exu_io_address_result 
                                             >> 0xdU))))) {
        ++(vlSymsp->__Vcoverage[6021]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__lsu_exu_io_address_result 
            = ((0xffffffffffffdfffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__lsu_exu_io_address_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___next_pc3_T_1 
                                                 >> 0xdU))))) 
                  << 0xdU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___next_pc3_T_1 
                        >> 0xeU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__lsu_exu_io_address_result 
                                             >> 0xeU))))) {
        ++(vlSymsp->__Vcoverage[6022]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__lsu_exu_io_address_result 
            = ((0xffffffffffffbfffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__lsu_exu_io_address_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___next_pc3_T_1 
                                                 >> 0xeU))))) 
                  << 0xeU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___next_pc3_T_1 
                        >> 0xfU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__lsu_exu_io_address_result 
                                             >> 0xfU))))) {
        ++(vlSymsp->__Vcoverage[6023]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__lsu_exu_io_address_result 
            = ((0xffffffffffff7fffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__lsu_exu_io_address_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___next_pc3_T_1 
                                                 >> 0xfU))))) 
                  << 0xfU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___next_pc3_T_1 
                        >> 0x10U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__lsu_exu_io_address_result 
                                              >> 0x10U))))) {
        ++(vlSymsp->__Vcoverage[6024]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__lsu_exu_io_address_result 
            = ((0xfffffffffffeffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__lsu_exu_io_address_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___next_pc3_T_1 
                                                 >> 0x10U))))) 
                  << 0x10U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___next_pc3_T_1 
                        >> 0x11U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__lsu_exu_io_address_result 
                                              >> 0x11U))))) {
        ++(vlSymsp->__Vcoverage[6025]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__lsu_exu_io_address_result 
            = ((0xfffffffffffdffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__lsu_exu_io_address_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___next_pc3_T_1 
                                                 >> 0x11U))))) 
                  << 0x11U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___next_pc3_T_1 
                        >> 0x12U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__lsu_exu_io_address_result 
                                              >> 0x12U))))) {
        ++(vlSymsp->__Vcoverage[6026]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__lsu_exu_io_address_result 
            = ((0xfffffffffffbffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__lsu_exu_io_address_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___next_pc3_T_1 
                                                 >> 0x12U))))) 
                  << 0x12U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___next_pc3_T_1 
                        >> 0x13U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__lsu_exu_io_address_result 
                                              >> 0x13U))))) {
        ++(vlSymsp->__Vcoverage[6027]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__lsu_exu_io_address_result 
            = ((0xfffffffffff7ffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__lsu_exu_io_address_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___next_pc3_T_1 
                                                 >> 0x13U))))) 
                  << 0x13U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___next_pc3_T_1 
                        >> 0x14U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__lsu_exu_io_address_result 
                                              >> 0x14U))))) {
        ++(vlSymsp->__Vcoverage[6028]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__lsu_exu_io_address_result 
            = ((0xffffffffffefffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__lsu_exu_io_address_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___next_pc3_T_1 
                                                 >> 0x14U))))) 
                  << 0x14U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___next_pc3_T_1 
                        >> 0x15U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__lsu_exu_io_address_result 
                                              >> 0x15U))))) {
        ++(vlSymsp->__Vcoverage[6029]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__lsu_exu_io_address_result 
            = ((0xffffffffffdfffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__lsu_exu_io_address_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___next_pc3_T_1 
                                                 >> 0x15U))))) 
                  << 0x15U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___next_pc3_T_1 
                        >> 0x16U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__lsu_exu_io_address_result 
                                              >> 0x16U))))) {
        ++(vlSymsp->__Vcoverage[6030]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__lsu_exu_io_address_result 
            = ((0xffffffffffbfffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__lsu_exu_io_address_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___next_pc3_T_1 
                                                 >> 0x16U))))) 
                  << 0x16U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___next_pc3_T_1 
                        >> 0x17U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__lsu_exu_io_address_result 
                                              >> 0x17U))))) {
        ++(vlSymsp->__Vcoverage[6031]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__lsu_exu_io_address_result 
            = ((0xffffffffff7fffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__lsu_exu_io_address_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___next_pc3_T_1 
                                                 >> 0x17U))))) 
                  << 0x17U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___next_pc3_T_1 
                        >> 0x18U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__lsu_exu_io_address_result 
                                              >> 0x18U))))) {
        ++(vlSymsp->__Vcoverage[6032]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__lsu_exu_io_address_result 
            = ((0xfffffffffeffffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__lsu_exu_io_address_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___next_pc3_T_1 
                                                 >> 0x18U))))) 
                  << 0x18U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___next_pc3_T_1 
                        >> 0x19U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__lsu_exu_io_address_result 
                                              >> 0x19U))))) {
        ++(vlSymsp->__Vcoverage[6033]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__lsu_exu_io_address_result 
            = ((0xfffffffffdffffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__lsu_exu_io_address_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___next_pc3_T_1 
                                                 >> 0x19U))))) 
                  << 0x19U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___next_pc3_T_1 
                        >> 0x1aU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__lsu_exu_io_address_result 
                                              >> 0x1aU))))) {
        ++(vlSymsp->__Vcoverage[6034]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__lsu_exu_io_address_result 
            = ((0xfffffffffbffffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__lsu_exu_io_address_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___next_pc3_T_1 
                                                 >> 0x1aU))))) 
                  << 0x1aU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___next_pc3_T_1 
                        >> 0x1bU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__lsu_exu_io_address_result 
                                              >> 0x1bU))))) {
        ++(vlSymsp->__Vcoverage[6035]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__lsu_exu_io_address_result 
            = ((0xfffffffff7ffffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__lsu_exu_io_address_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___next_pc3_T_1 
                                                 >> 0x1bU))))) 
                  << 0x1bU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___next_pc3_T_1 
                        >> 0x1cU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__lsu_exu_io_address_result 
                                              >> 0x1cU))))) {
        ++(vlSymsp->__Vcoverage[6036]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__lsu_exu_io_address_result 
            = ((0xffffffffefffffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__lsu_exu_io_address_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___next_pc3_T_1 
                                                 >> 0x1cU))))) 
                  << 0x1cU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___next_pc3_T_1 
                        >> 0x1dU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__lsu_exu_io_address_result 
                                              >> 0x1dU))))) {
        ++(vlSymsp->__Vcoverage[6037]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__lsu_exu_io_address_result 
            = ((0xffffffffdfffffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__lsu_exu_io_address_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___next_pc3_T_1 
                                                 >> 0x1dU))))) 
                  << 0x1dU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___next_pc3_T_1 
                        >> 0x1eU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__lsu_exu_io_address_result 
                                              >> 0x1eU))))) {
        ++(vlSymsp->__Vcoverage[6038]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__lsu_exu_io_address_result 
            = ((0xffffffffbfffffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__lsu_exu_io_address_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___next_pc3_T_1 
                                                 >> 0x1eU))))) 
                  << 0x1eU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___next_pc3_T_1 
                        >> 0x1fU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__lsu_exu_io_address_result 
                                              >> 0x1fU))))) {
        ++(vlSymsp->__Vcoverage[6039]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__lsu_exu_io_address_result 
            = ((0xffffffff7fffffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__lsu_exu_io_address_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___next_pc3_T_1 
                                                 >> 0x1fU))))) 
                  << 0x1fU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___next_pc3_T_1 
                        >> 0x20U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__lsu_exu_io_address_result 
                                              >> 0x20U))))) {
        ++(vlSymsp->__Vcoverage[6040]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__lsu_exu_io_address_result 
            = ((0xfffffffeffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__lsu_exu_io_address_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___next_pc3_T_1 
                                                 >> 0x20U))))) 
                  << 0x20U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___next_pc3_T_1 
                        >> 0x21U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__lsu_exu_io_address_result 
                                              >> 0x21U))))) {
        ++(vlSymsp->__Vcoverage[6041]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__lsu_exu_io_address_result 
            = ((0xfffffffdffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__lsu_exu_io_address_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___next_pc3_T_1 
                                                 >> 0x21U))))) 
                  << 0x21U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___next_pc3_T_1 
                        >> 0x22U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__lsu_exu_io_address_result 
                                              >> 0x22U))))) {
        ++(vlSymsp->__Vcoverage[6042]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__lsu_exu_io_address_result 
            = ((0xfffffffbffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__lsu_exu_io_address_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___next_pc3_T_1 
                                                 >> 0x22U))))) 
                  << 0x22U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___next_pc3_T_1 
                        >> 0x23U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__lsu_exu_io_address_result 
                                              >> 0x23U))))) {
        ++(vlSymsp->__Vcoverage[6043]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__lsu_exu_io_address_result 
            = ((0xfffffff7ffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__lsu_exu_io_address_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___next_pc3_T_1 
                                                 >> 0x23U))))) 
                  << 0x23U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___next_pc3_T_1 
                        >> 0x24U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__lsu_exu_io_address_result 
                                              >> 0x24U))))) {
        ++(vlSymsp->__Vcoverage[6044]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__lsu_exu_io_address_result 
            = ((0xffffffefffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__lsu_exu_io_address_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___next_pc3_T_1 
                                                 >> 0x24U))))) 
                  << 0x24U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___next_pc3_T_1 
                        >> 0x25U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__lsu_exu_io_address_result 
                                              >> 0x25U))))) {
        ++(vlSymsp->__Vcoverage[6045]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__lsu_exu_io_address_result 
            = ((0xffffffdfffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__lsu_exu_io_address_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___next_pc3_T_1 
                                                 >> 0x25U))))) 
                  << 0x25U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___next_pc3_T_1 
                        >> 0x26U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__lsu_exu_io_address_result 
                                              >> 0x26U))))) {
        ++(vlSymsp->__Vcoverage[6046]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__lsu_exu_io_address_result 
            = ((0xffffffbfffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__lsu_exu_io_address_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___next_pc3_T_1 
                                                 >> 0x26U))))) 
                  << 0x26U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___next_pc3_T_1 
                        >> 0x27U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__lsu_exu_io_address_result 
                                              >> 0x27U))))) {
        ++(vlSymsp->__Vcoverage[6047]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__lsu_exu_io_address_result 
            = ((0xffffff7fffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__lsu_exu_io_address_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___next_pc3_T_1 
                                                 >> 0x27U))))) 
                  << 0x27U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___next_pc3_T_1 
                        >> 0x28U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__lsu_exu_io_address_result 
                                              >> 0x28U))))) {
        ++(vlSymsp->__Vcoverage[6048]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__lsu_exu_io_address_result 
            = ((0xfffffeffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__lsu_exu_io_address_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___next_pc3_T_1 
                                                 >> 0x28U))))) 
                  << 0x28U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___next_pc3_T_1 
                        >> 0x29U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__lsu_exu_io_address_result 
                                              >> 0x29U))))) {
        ++(vlSymsp->__Vcoverage[6049]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__lsu_exu_io_address_result 
            = ((0xfffffdffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__lsu_exu_io_address_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___next_pc3_T_1 
                                                 >> 0x29U))))) 
                  << 0x29U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___next_pc3_T_1 
                        >> 0x2aU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__lsu_exu_io_address_result 
                                              >> 0x2aU))))) {
        ++(vlSymsp->__Vcoverage[6050]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__lsu_exu_io_address_result 
            = ((0xfffffbffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__lsu_exu_io_address_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___next_pc3_T_1 
                                                 >> 0x2aU))))) 
                  << 0x2aU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___next_pc3_T_1 
                        >> 0x2bU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__lsu_exu_io_address_result 
                                              >> 0x2bU))))) {
        ++(vlSymsp->__Vcoverage[6051]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__lsu_exu_io_address_result 
            = ((0xfffff7ffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__lsu_exu_io_address_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___next_pc3_T_1 
                                                 >> 0x2bU))))) 
                  << 0x2bU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___next_pc3_T_1 
                        >> 0x2cU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__lsu_exu_io_address_result 
                                              >> 0x2cU))))) {
        ++(vlSymsp->__Vcoverage[6052]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__lsu_exu_io_address_result 
            = ((0xffffefffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__lsu_exu_io_address_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___next_pc3_T_1 
                                                 >> 0x2cU))))) 
                  << 0x2cU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___next_pc3_T_1 
                        >> 0x2dU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__lsu_exu_io_address_result 
                                              >> 0x2dU))))) {
        ++(vlSymsp->__Vcoverage[6053]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__lsu_exu_io_address_result 
            = ((0xffffdfffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__lsu_exu_io_address_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___next_pc3_T_1 
                                                 >> 0x2dU))))) 
                  << 0x2dU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___next_pc3_T_1 
                        >> 0x2eU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__lsu_exu_io_address_result 
                                              >> 0x2eU))))) {
        ++(vlSymsp->__Vcoverage[6054]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__lsu_exu_io_address_result 
            = ((0xffffbfffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__lsu_exu_io_address_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___next_pc3_T_1 
                                                 >> 0x2eU))))) 
                  << 0x2eU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___next_pc3_T_1 
                        >> 0x2fU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__lsu_exu_io_address_result 
                                              >> 0x2fU))))) {
        ++(vlSymsp->__Vcoverage[6055]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__lsu_exu_io_address_result 
            = ((0xffff7fffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__lsu_exu_io_address_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___next_pc3_T_1 
                                                 >> 0x2fU))))) 
                  << 0x2fU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___next_pc3_T_1 
                        >> 0x30U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__lsu_exu_io_address_result 
                                              >> 0x30U))))) {
        ++(vlSymsp->__Vcoverage[6056]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__lsu_exu_io_address_result 
            = ((0xfffeffffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__lsu_exu_io_address_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___next_pc3_T_1 
                                                 >> 0x30U))))) 
                  << 0x30U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___next_pc3_T_1 
                        >> 0x31U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__lsu_exu_io_address_result 
                                              >> 0x31U))))) {
        ++(vlSymsp->__Vcoverage[6057]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__lsu_exu_io_address_result 
            = ((0xfffdffffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__lsu_exu_io_address_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___next_pc3_T_1 
                                                 >> 0x31U))))) 
                  << 0x31U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___next_pc3_T_1 
                        >> 0x32U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__lsu_exu_io_address_result 
                                              >> 0x32U))))) {
        ++(vlSymsp->__Vcoverage[6058]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__lsu_exu_io_address_result 
            = ((0xfffbffffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__lsu_exu_io_address_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___next_pc3_T_1 
                                                 >> 0x32U))))) 
                  << 0x32U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___next_pc3_T_1 
                        >> 0x33U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__lsu_exu_io_address_result 
                                              >> 0x33U))))) {
        ++(vlSymsp->__Vcoverage[6059]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__lsu_exu_io_address_result 
            = ((0xfff7ffffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__lsu_exu_io_address_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___next_pc3_T_1 
                                                 >> 0x33U))))) 
                  << 0x33U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___next_pc3_T_1 
                        >> 0x34U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__lsu_exu_io_address_result 
                                              >> 0x34U))))) {
        ++(vlSymsp->__Vcoverage[6060]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__lsu_exu_io_address_result 
            = ((0xffefffffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__lsu_exu_io_address_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___next_pc3_T_1 
                                                 >> 0x34U))))) 
                  << 0x34U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___next_pc3_T_1 
                        >> 0x35U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__lsu_exu_io_address_result 
                                              >> 0x35U))))) {
        ++(vlSymsp->__Vcoverage[6061]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__lsu_exu_io_address_result 
            = ((0xffdfffffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__lsu_exu_io_address_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___next_pc3_T_1 
                                                 >> 0x35U))))) 
                  << 0x35U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___next_pc3_T_1 
                        >> 0x36U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__lsu_exu_io_address_result 
                                              >> 0x36U))))) {
        ++(vlSymsp->__Vcoverage[6062]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__lsu_exu_io_address_result 
            = ((0xffbfffffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__lsu_exu_io_address_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___next_pc3_T_1 
                                                 >> 0x36U))))) 
                  << 0x36U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___next_pc3_T_1 
                        >> 0x37U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__lsu_exu_io_address_result 
                                              >> 0x37U))))) {
        ++(vlSymsp->__Vcoverage[6063]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__lsu_exu_io_address_result 
            = ((0xff7fffffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__lsu_exu_io_address_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___next_pc3_T_1 
                                                 >> 0x37U))))) 
                  << 0x37U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___next_pc3_T_1 
                        >> 0x38U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__lsu_exu_io_address_result 
                                              >> 0x38U))))) {
        ++(vlSymsp->__Vcoverage[6064]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__lsu_exu_io_address_result 
            = ((0xfeffffffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__lsu_exu_io_address_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___next_pc3_T_1 
                                                 >> 0x38U))))) 
                  << 0x38U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___next_pc3_T_1 
                        >> 0x39U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__lsu_exu_io_address_result 
                                              >> 0x39U))))) {
        ++(vlSymsp->__Vcoverage[6065]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__lsu_exu_io_address_result 
            = ((0xfdffffffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__lsu_exu_io_address_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___next_pc3_T_1 
                                                 >> 0x39U))))) 
                  << 0x39U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___next_pc3_T_1 
                        >> 0x3aU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__lsu_exu_io_address_result 
                                              >> 0x3aU))))) {
        ++(vlSymsp->__Vcoverage[6066]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__lsu_exu_io_address_result 
            = ((0xfbffffffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__lsu_exu_io_address_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___next_pc3_T_1 
                                                 >> 0x3aU))))) 
                  << 0x3aU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___next_pc3_T_1 
                        >> 0x3bU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__lsu_exu_io_address_result 
                                              >> 0x3bU))))) {
        ++(vlSymsp->__Vcoverage[6067]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__lsu_exu_io_address_result 
            = ((0xf7ffffffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__lsu_exu_io_address_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___next_pc3_T_1 
                                                 >> 0x3bU))))) 
                  << 0x3bU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___next_pc3_T_1 
                        >> 0x3cU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__lsu_exu_io_address_result 
                                              >> 0x3cU))))) {
        ++(vlSymsp->__Vcoverage[6068]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__lsu_exu_io_address_result 
            = ((0xefffffffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__lsu_exu_io_address_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___next_pc3_T_1 
                                                 >> 0x3cU))))) 
                  << 0x3cU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___next_pc3_T_1 
                        >> 0x3dU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__lsu_exu_io_address_result 
                                              >> 0x3dU))))) {
        ++(vlSymsp->__Vcoverage[6069]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__lsu_exu_io_address_result 
            = ((0xdfffffffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__lsu_exu_io_address_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___next_pc3_T_1 
                                                 >> 0x3dU))))) 
                  << 0x3dU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___next_pc3_T_1 
                        >> 0x3eU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__lsu_exu_io_address_result 
                                              >> 0x3eU))))) {
        ++(vlSymsp->__Vcoverage[6070]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__lsu_exu_io_address_result 
            = ((0xbfffffffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__lsu_exu_io_address_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___next_pc3_T_1 
                                                 >> 0x3eU))))) 
                  << 0x3eU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___next_pc3_T_1 
                        >> 0x3fU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__lsu_exu_io_address_result 
                                              >> 0x3fU))))) {
        ++(vlSymsp->__Vcoverage[6071]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__lsu_exu_io_address_result 
            = ((0x7fffffffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__lsu_exu_io_address_result) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___next_pc3_T_1 
                                                 >> 0x3fU))))) 
                  << 0x3fU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___next_pc3_T_1 
                        >> 1U)) ^ (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__next_pc3[0U] 
                                   >> 1U)))) {
        ++(vlSymsp->__Vcoverage[6656]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__next_pc3[0U] 
            = ((0xfffffffdU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__next_pc3[0U]) 
               | (2U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___next_pc3_T_1 
                                 >> 1U)) << 1U)));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___next_pc3_T_1 
                        >> 2U)) ^ (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__next_pc3[0U] 
                                   >> 2U)))) {
        ++(vlSymsp->__Vcoverage[6657]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__next_pc3[0U] 
            = ((0xfffffffbU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__next_pc3[0U]) 
               | (4U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___next_pc3_T_1 
                                 >> 2U)) << 2U)));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___next_pc3_T_1 
                        >> 3U)) ^ (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__next_pc3[0U] 
                                   >> 3U)))) {
        ++(vlSymsp->__Vcoverage[6658]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__next_pc3[0U] 
            = ((0xfffffff7U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__next_pc3[0U]) 
               | (8U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___next_pc3_T_1 
                                 >> 3U)) << 3U)));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___next_pc3_T_1 
                        >> 4U)) ^ (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__next_pc3[0U] 
                                   >> 4U)))) {
        ++(vlSymsp->__Vcoverage[6659]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__next_pc3[0U] 
            = ((0xffffffefU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__next_pc3[0U]) 
               | (0x10U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___next_pc3_T_1 
                                    >> 4U)) << 4U)));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___next_pc3_T_1 
                        >> 5U)) ^ (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__next_pc3[0U] 
                                   >> 5U)))) {
        ++(vlSymsp->__Vcoverage[6660]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__next_pc3[0U] 
            = ((0xffffffdfU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__next_pc3[0U]) 
               | (0x20U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___next_pc3_T_1 
                                    >> 5U)) << 5U)));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___next_pc3_T_1 
                        >> 6U)) ^ (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__next_pc3[0U] 
                                   >> 6U)))) {
        ++(vlSymsp->__Vcoverage[6661]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__next_pc3[0U] 
            = ((0xffffffbfU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__next_pc3[0U]) 
               | (0x40U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___next_pc3_T_1 
                                    >> 6U)) << 6U)));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___next_pc3_T_1 
                        >> 7U)) ^ (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__next_pc3[0U] 
                                   >> 7U)))) {
        ++(vlSymsp->__Vcoverage[6662]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__next_pc3[0U] 
            = ((0xffffff7fU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__next_pc3[0U]) 
               | (0x80U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___next_pc3_T_1 
                                    >> 7U)) << 7U)));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___next_pc3_T_1 
                        >> 8U)) ^ (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__next_pc3[0U] 
                                   >> 8U)))) {
        ++(vlSymsp->__Vcoverage[6663]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__next_pc3[0U] 
            = ((0xfffffeffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__next_pc3[0U]) 
               | (0x100U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___next_pc3_T_1 
                                     >> 8U)) << 8U)));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___next_pc3_T_1 
                        >> 9U)) ^ (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__next_pc3[0U] 
                                   >> 9U)))) {
        ++(vlSymsp->__Vcoverage[6664]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__next_pc3[0U] 
            = ((0xfffffdffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__next_pc3[0U]) 
               | (0x200U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___next_pc3_T_1 
                                     >> 9U)) << 9U)));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___next_pc3_T_1 
                        >> 0xaU)) ^ (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__next_pc3[0U] 
                                     >> 0xaU)))) {
        ++(vlSymsp->__Vcoverage[6665]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__next_pc3[0U] 
            = ((0xfffffbffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__next_pc3[0U]) 
               | (0x400U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___next_pc3_T_1 
                                     >> 0xaU)) << 0xaU)));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___next_pc3_T_1 
                        >> 0xbU)) ^ (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__next_pc3[0U] 
                                     >> 0xbU)))) {
        ++(vlSymsp->__Vcoverage[6666]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__next_pc3[0U] 
            = ((0xfffff7ffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__next_pc3[0U]) 
               | (0x800U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___next_pc3_T_1 
                                     >> 0xbU)) << 0xbU)));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___next_pc3_T_1 
                        >> 0xcU)) ^ (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__next_pc3[0U] 
                                     >> 0xcU)))) {
        ++(vlSymsp->__Vcoverage[6667]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__next_pc3[0U] 
            = ((0xffffefffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__next_pc3[0U]) 
               | (0x1000U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___next_pc3_T_1 
                                      >> 0xcU)) << 0xcU)));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___next_pc3_T_1 
                        >> 0xdU)) ^ (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__next_pc3[0U] 
                                     >> 0xdU)))) {
        ++(vlSymsp->__Vcoverage[6668]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__next_pc3[0U] 
            = ((0xffffdfffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__next_pc3[0U]) 
               | (0x2000U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___next_pc3_T_1 
                                      >> 0xdU)) << 0xdU)));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___next_pc3_T_1 
                        >> 0xeU)) ^ (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__next_pc3[0U] 
                                     >> 0xeU)))) {
        ++(vlSymsp->__Vcoverage[6669]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__next_pc3[0U] 
            = ((0xffffbfffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__next_pc3[0U]) 
               | (0x4000U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___next_pc3_T_1 
                                      >> 0xeU)) << 0xeU)));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___next_pc3_T_1 
                        >> 0xfU)) ^ (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__next_pc3[0U] 
                                     >> 0xfU)))) {
        ++(vlSymsp->__Vcoverage[6670]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__next_pc3[0U] 
            = ((0xffff7fffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__next_pc3[0U]) 
               | (0x8000U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___next_pc3_T_1 
                                      >> 0xfU)) << 0xfU)));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___next_pc3_T_1 
                        >> 0x10U)) ^ (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__next_pc3[0U] 
                                      >> 0x10U)))) {
        ++(vlSymsp->__Vcoverage[6671]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__next_pc3[0U] 
            = ((0xfffeffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__next_pc3[0U]) 
               | (0x10000U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___next_pc3_T_1 
                                       >> 0x10U)) << 0x10U)));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___next_pc3_T_1 
                        >> 0x11U)) ^ (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__next_pc3[0U] 
                                      >> 0x11U)))) {
        ++(vlSymsp->__Vcoverage[6672]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__next_pc3[0U] 
            = ((0xfffdffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__next_pc3[0U]) 
               | (0x20000U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___next_pc3_T_1 
                                       >> 0x11U)) << 0x11U)));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___next_pc3_T_1 
                        >> 0x12U)) ^ (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__next_pc3[0U] 
                                      >> 0x12U)))) {
        ++(vlSymsp->__Vcoverage[6673]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__next_pc3[0U] 
            = ((0xfffbffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__next_pc3[0U]) 
               | (0x40000U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___next_pc3_T_1 
                                       >> 0x12U)) << 0x12U)));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___next_pc3_T_1 
                        >> 0x13U)) ^ (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__next_pc3[0U] 
                                      >> 0x13U)))) {
        ++(vlSymsp->__Vcoverage[6674]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__next_pc3[0U] 
            = ((0xfff7ffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__next_pc3[0U]) 
               | (0x80000U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___next_pc3_T_1 
                                       >> 0x13U)) << 0x13U)));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___next_pc3_T_1 
                        >> 0x14U)) ^ (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__next_pc3[0U] 
                                      >> 0x14U)))) {
        ++(vlSymsp->__Vcoverage[6675]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__next_pc3[0U] 
            = ((0xffefffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__next_pc3[0U]) 
               | (0x100000U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___next_pc3_T_1 
                                        >> 0x14U)) 
                               << 0x14U)));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___next_pc3_T_1 
                        >> 0x15U)) ^ (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__next_pc3[0U] 
                                      >> 0x15U)))) {
        ++(vlSymsp->__Vcoverage[6676]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__next_pc3[0U] 
            = ((0xffdfffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__next_pc3[0U]) 
               | (0x200000U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___next_pc3_T_1 
                                        >> 0x15U)) 
                               << 0x15U)));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___next_pc3_T_1 
                        >> 0x16U)) ^ (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__next_pc3[0U] 
                                      >> 0x16U)))) {
        ++(vlSymsp->__Vcoverage[6677]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__next_pc3[0U] 
            = ((0xffbfffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__next_pc3[0U]) 
               | (0x400000U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___next_pc3_T_1 
                                        >> 0x16U)) 
                               << 0x16U)));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___next_pc3_T_1 
                        >> 0x17U)) ^ (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__next_pc3[0U] 
                                      >> 0x17U)))) {
        ++(vlSymsp->__Vcoverage[6678]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__next_pc3[0U] 
            = ((0xff7fffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__next_pc3[0U]) 
               | (0x800000U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___next_pc3_T_1 
                                        >> 0x17U)) 
                               << 0x17U)));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___next_pc3_T_1 
                        >> 0x18U)) ^ (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__next_pc3[0U] 
                                      >> 0x18U)))) {
        ++(vlSymsp->__Vcoverage[6679]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__next_pc3[0U] 
            = ((0xfeffffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__next_pc3[0U]) 
               | (0x1000000U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___next_pc3_T_1 
                                         >> 0x18U)) 
                                << 0x18U)));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___next_pc3_T_1 
                        >> 0x19U)) ^ (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__next_pc3[0U] 
                                      >> 0x19U)))) {
        ++(vlSymsp->__Vcoverage[6680]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__next_pc3[0U] 
            = ((0xfdffffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__next_pc3[0U]) 
               | (0x2000000U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___next_pc3_T_1 
                                         >> 0x19U)) 
                                << 0x19U)));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___next_pc3_T_1 
                        >> 0x1aU)) ^ (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__next_pc3[0U] 
                                      >> 0x1aU)))) {
        ++(vlSymsp->__Vcoverage[6681]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__next_pc3[0U] 
            = ((0xfbffffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__next_pc3[0U]) 
               | (0x4000000U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___next_pc3_T_1 
                                         >> 0x1aU)) 
                                << 0x1aU)));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___next_pc3_T_1 
                        >> 0x1bU)) ^ (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__next_pc3[0U] 
                                      >> 0x1bU)))) {
        ++(vlSymsp->__Vcoverage[6682]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__next_pc3[0U] 
            = ((0xf7ffffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__next_pc3[0U]) 
               | (0x8000000U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___next_pc3_T_1 
                                         >> 0x1bU)) 
                                << 0x1bU)));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___next_pc3_T_1 
                        >> 0x1cU)) ^ (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__next_pc3[0U] 
                                      >> 0x1cU)))) {
        ++(vlSymsp->__Vcoverage[6683]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__next_pc3[0U] 
            = ((0xefffffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__next_pc3[0U]) 
               | (0x10000000U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___next_pc3_T_1 
                                          >> 0x1cU)) 
                                 << 0x1cU)));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___next_pc3_T_1 
                        >> 0x1dU)) ^ (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__next_pc3[0U] 
                                      >> 0x1dU)))) {
        ++(vlSymsp->__Vcoverage[6684]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__next_pc3[0U] 
            = ((0xdfffffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__next_pc3[0U]) 
               | (0x20000000U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___next_pc3_T_1 
                                          >> 0x1dU)) 
                                 << 0x1dU)));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___next_pc3_T_1 
                        >> 0x1eU)) ^ (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__next_pc3[0U] 
                                      >> 0x1eU)))) {
        ++(vlSymsp->__Vcoverage[6685]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__next_pc3[0U] 
            = ((0xbfffffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__next_pc3[0U]) 
               | (0x40000000U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___next_pc3_T_1 
                                          >> 0x1eU)) 
                                 << 0x1eU)));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___next_pc3_T_1 
                        >> 0x1fU)) ^ (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__next_pc3[0U] 
                                      >> 0x1fU)))) {
        ++(vlSymsp->__Vcoverage[6686]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__next_pc3[0U] 
            = ((0x7fffffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__next_pc3[0U]) 
               | ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___next_pc3_T_1 
                           >> 0x1fU)) << 0x1fU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___next_pc3_T_1 
                        >> 0x20U)) ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__next_pc3[1U]))) {
        ++(vlSymsp->__Vcoverage[6687]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__next_pc3[1U] 
            = ((0xfffffffeU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__next_pc3[1U]) 
               | (1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___next_pc3_T_1 
                                >> 0x20U))));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___next_pc3_T_1 
                        >> 0x21U)) ^ (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__next_pc3[1U] 
                                      >> 1U)))) {
        ++(vlSymsp->__Vcoverage[6688]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__next_pc3[1U] 
            = ((0xfffffffdU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__next_pc3[1U]) 
               | (2U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___next_pc3_T_1 
                                 >> 0x21U)) << 1U)));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___next_pc3_T_1 
                        >> 0x22U)) ^ (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__next_pc3[1U] 
                                      >> 2U)))) {
        ++(vlSymsp->__Vcoverage[6689]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__next_pc3[1U] 
            = ((0xfffffffbU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__next_pc3[1U]) 
               | (4U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___next_pc3_T_1 
                                 >> 0x22U)) << 2U)));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___next_pc3_T_1 
                        >> 0x23U)) ^ (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__next_pc3[1U] 
                                      >> 3U)))) {
        ++(vlSymsp->__Vcoverage[6690]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__next_pc3[1U] 
            = ((0xfffffff7U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__next_pc3[1U]) 
               | (8U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___next_pc3_T_1 
                                 >> 0x23U)) << 3U)));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___next_pc3_T_1 
                        >> 0x24U)) ^ (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__next_pc3[1U] 
                                      >> 4U)))) {
        ++(vlSymsp->__Vcoverage[6691]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__next_pc3[1U] 
            = ((0xffffffefU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__next_pc3[1U]) 
               | (0x10U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___next_pc3_T_1 
                                    >> 0x24U)) << 4U)));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___next_pc3_T_1 
                        >> 0x25U)) ^ (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__next_pc3[1U] 
                                      >> 5U)))) {
        ++(vlSymsp->__Vcoverage[6692]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__next_pc3[1U] 
            = ((0xffffffdfU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__next_pc3[1U]) 
               | (0x20U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___next_pc3_T_1 
                                    >> 0x25U)) << 5U)));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___next_pc3_T_1 
                        >> 0x26U)) ^ (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__next_pc3[1U] 
                                      >> 6U)))) {
        ++(vlSymsp->__Vcoverage[6693]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__next_pc3[1U] 
            = ((0xffffffbfU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__next_pc3[1U]) 
               | (0x40U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___next_pc3_T_1 
                                    >> 0x26U)) << 6U)));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___next_pc3_T_1 
                        >> 0x27U)) ^ (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__next_pc3[1U] 
                                      >> 7U)))) {
        ++(vlSymsp->__Vcoverage[6694]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__next_pc3[1U] 
            = ((0xffffff7fU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__next_pc3[1U]) 
               | (0x80U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___next_pc3_T_1 
                                    >> 0x27U)) << 7U)));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___next_pc3_T_1 
                        >> 0x28U)) ^ (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__next_pc3[1U] 
                                      >> 8U)))) {
        ++(vlSymsp->__Vcoverage[6695]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__next_pc3[1U] 
            = ((0xfffffeffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__next_pc3[1U]) 
               | (0x100U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___next_pc3_T_1 
                                     >> 0x28U)) << 8U)));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___next_pc3_T_1 
                        >> 0x29U)) ^ (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__next_pc3[1U] 
                                      >> 9U)))) {
        ++(vlSymsp->__Vcoverage[6696]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__next_pc3[1U] 
            = ((0xfffffdffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__next_pc3[1U]) 
               | (0x200U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___next_pc3_T_1 
                                     >> 0x29U)) << 9U)));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___next_pc3_T_1 
                        >> 0x2aU)) ^ (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__next_pc3[1U] 
                                      >> 0xaU)))) {
        ++(vlSymsp->__Vcoverage[6697]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__next_pc3[1U] 
            = ((0xfffffbffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__next_pc3[1U]) 
               | (0x400U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___next_pc3_T_1 
                                     >> 0x2aU)) << 0xaU)));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___next_pc3_T_1 
                        >> 0x2bU)) ^ (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__next_pc3[1U] 
                                      >> 0xbU)))) {
        ++(vlSymsp->__Vcoverage[6698]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__next_pc3[1U] 
            = ((0xfffff7ffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__next_pc3[1U]) 
               | (0x800U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___next_pc3_T_1 
                                     >> 0x2bU)) << 0xbU)));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___next_pc3_T_1 
                        >> 0x2cU)) ^ (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__next_pc3[1U] 
                                      >> 0xcU)))) {
        ++(vlSymsp->__Vcoverage[6699]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__next_pc3[1U] 
            = ((0xffffefffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__next_pc3[1U]) 
               | (0x1000U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___next_pc3_T_1 
                                      >> 0x2cU)) << 0xcU)));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___next_pc3_T_1 
                        >> 0x2dU)) ^ (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__next_pc3[1U] 
                                      >> 0xdU)))) {
        ++(vlSymsp->__Vcoverage[6700]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__next_pc3[1U] 
            = ((0xffffdfffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__next_pc3[1U]) 
               | (0x2000U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___next_pc3_T_1 
                                      >> 0x2dU)) << 0xdU)));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___next_pc3_T_1 
                        >> 0x2eU)) ^ (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__next_pc3[1U] 
                                      >> 0xeU)))) {
        ++(vlSymsp->__Vcoverage[6701]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__next_pc3[1U] 
            = ((0xffffbfffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__next_pc3[1U]) 
               | (0x4000U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___next_pc3_T_1 
                                      >> 0x2eU)) << 0xeU)));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___next_pc3_T_1 
                        >> 0x2fU)) ^ (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__next_pc3[1U] 
                                      >> 0xfU)))) {
        ++(vlSymsp->__Vcoverage[6702]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__next_pc3[1U] 
            = ((0xffff7fffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__next_pc3[1U]) 
               | (0x8000U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___next_pc3_T_1 
                                      >> 0x2fU)) << 0xfU)));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___next_pc3_T_1 
                        >> 0x30U)) ^ (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__next_pc3[1U] 
                                      >> 0x10U)))) {
        ++(vlSymsp->__Vcoverage[6703]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__next_pc3[1U] 
            = ((0xfffeffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__next_pc3[1U]) 
               | (0x10000U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___next_pc3_T_1 
                                       >> 0x30U)) << 0x10U)));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___next_pc3_T_1 
                        >> 0x31U)) ^ (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__next_pc3[1U] 
                                      >> 0x11U)))) {
        ++(vlSymsp->__Vcoverage[6704]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__next_pc3[1U] 
            = ((0xfffdffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__next_pc3[1U]) 
               | (0x20000U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___next_pc3_T_1 
                                       >> 0x31U)) << 0x11U)));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___next_pc3_T_1 
                        >> 0x32U)) ^ (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__next_pc3[1U] 
                                      >> 0x12U)))) {
        ++(vlSymsp->__Vcoverage[6705]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__next_pc3[1U] 
            = ((0xfffbffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__next_pc3[1U]) 
               | (0x40000U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___next_pc3_T_1 
                                       >> 0x32U)) << 0x12U)));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___next_pc3_T_1 
                        >> 0x33U)) ^ (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__next_pc3[1U] 
                                      >> 0x13U)))) {
        ++(vlSymsp->__Vcoverage[6706]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__next_pc3[1U] 
            = ((0xfff7ffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__next_pc3[1U]) 
               | (0x80000U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___next_pc3_T_1 
                                       >> 0x33U)) << 0x13U)));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___next_pc3_T_1 
                        >> 0x34U)) ^ (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__next_pc3[1U] 
                                      >> 0x14U)))) {
        ++(vlSymsp->__Vcoverage[6707]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__next_pc3[1U] 
            = ((0xffefffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__next_pc3[1U]) 
               | (0x100000U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___next_pc3_T_1 
                                        >> 0x34U)) 
                               << 0x14U)));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___next_pc3_T_1 
                        >> 0x35U)) ^ (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__next_pc3[1U] 
                                      >> 0x15U)))) {
        ++(vlSymsp->__Vcoverage[6708]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__next_pc3[1U] 
            = ((0xffdfffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__next_pc3[1U]) 
               | (0x200000U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___next_pc3_T_1 
                                        >> 0x35U)) 
                               << 0x15U)));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___next_pc3_T_1 
                        >> 0x36U)) ^ (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__next_pc3[1U] 
                                      >> 0x16U)))) {
        ++(vlSymsp->__Vcoverage[6709]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__next_pc3[1U] 
            = ((0xffbfffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__next_pc3[1U]) 
               | (0x400000U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___next_pc3_T_1 
                                        >> 0x36U)) 
                               << 0x16U)));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___next_pc3_T_1 
                        >> 0x37U)) ^ (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__next_pc3[1U] 
                                      >> 0x17U)))) {
        ++(vlSymsp->__Vcoverage[6710]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__next_pc3[1U] 
            = ((0xff7fffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__next_pc3[1U]) 
               | (0x800000U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___next_pc3_T_1 
                                        >> 0x37U)) 
                               << 0x17U)));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___next_pc3_T_1 
                        >> 0x38U)) ^ (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__next_pc3[1U] 
                                      >> 0x18U)))) {
        ++(vlSymsp->__Vcoverage[6711]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__next_pc3[1U] 
            = ((0xfeffffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__next_pc3[1U]) 
               | (0x1000000U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___next_pc3_T_1 
                                         >> 0x38U)) 
                                << 0x18U)));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___next_pc3_T_1 
                        >> 0x39U)) ^ (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__next_pc3[1U] 
                                      >> 0x19U)))) {
        ++(vlSymsp->__Vcoverage[6712]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__next_pc3[1U] 
            = ((0xfdffffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__next_pc3[1U]) 
               | (0x2000000U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___next_pc3_T_1 
                                         >> 0x39U)) 
                                << 0x19U)));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___next_pc3_T_1 
                        >> 0x3aU)) ^ (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__next_pc3[1U] 
                                      >> 0x1aU)))) {
        ++(vlSymsp->__Vcoverage[6713]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__next_pc3[1U] 
            = ((0xfbffffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__next_pc3[1U]) 
               | (0x4000000U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___next_pc3_T_1 
                                         >> 0x3aU)) 
                                << 0x1aU)));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___next_pc3_T_1 
                        >> 0x3bU)) ^ (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__next_pc3[1U] 
                                      >> 0x1bU)))) {
        ++(vlSymsp->__Vcoverage[6714]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__next_pc3[1U] 
            = ((0xf7ffffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__next_pc3[1U]) 
               | (0x8000000U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___next_pc3_T_1 
                                         >> 0x3bU)) 
                                << 0x1bU)));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___next_pc3_T_1 
                        >> 0x3cU)) ^ (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__next_pc3[1U] 
                                      >> 0x1cU)))) {
        ++(vlSymsp->__Vcoverage[6715]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__next_pc3[1U] 
            = ((0xefffffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__next_pc3[1U]) 
               | (0x10000000U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___next_pc3_T_1 
                                          >> 0x3cU)) 
                                 << 0x1cU)));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___next_pc3_T_1 
                        >> 0x3dU)) ^ (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__next_pc3[1U] 
                                      >> 0x1dU)))) {
        ++(vlSymsp->__Vcoverage[6716]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__next_pc3[1U] 
            = ((0xdfffffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__next_pc3[1U]) 
               | (0x20000000U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___next_pc3_T_1 
                                          >> 0x3dU)) 
                                 << 0x1dU)));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___next_pc3_T_1 
                        >> 0x3eU)) ^ (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__next_pc3[1U] 
                                      >> 0x1eU)))) {
        ++(vlSymsp->__Vcoverage[6717]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__next_pc3[1U] 
            = ((0xbfffffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__next_pc3[1U]) 
               | (0x40000000U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___next_pc3_T_1 
                                          >> 0x3eU)) 
                                 << 0x1eU)));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___next_pc3_T_1 
                        >> 0x3fU)) ^ (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__next_pc3[1U] 
                                      >> 0x1fU)))) {
        ++(vlSymsp->__Vcoverage[6718]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__next_pc3[1U] 
            = ((0x7fffffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__next_pc3[1U]) 
               | ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___next_pc3_T_1 
                           >> 0x3fU)) << 0x1fU));
    }
    VL_EXTEND_WI(65,32, __Vtemp739, (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu_io_rs2_data));
    VL_EXTEND_WQ(65,64, __Vtemp742, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu_io_rs2_data);
    if ((2U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_out_exuType))) {
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__divisor[0U] 
            = ((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_out_exuType))
                ? vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT___divisor_T_6[0U]
                : __Vtemp739[0U]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__divisor[1U] 
            = ((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_out_exuType))
                ? vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT___divisor_T_6[1U]
                : __Vtemp739[1U]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__divisor[2U] 
            = ((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_out_exuType))
                ? vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT___divisor_T_6[2U]
                : __Vtemp739[2U]);
    } else {
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__divisor[0U] 
            = ((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_out_exuType))
                ? vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT___divisor_T_14[0U]
                : __Vtemp742[0U]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__divisor[1U] 
            = ((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_out_exuType))
                ? vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT___divisor_T_14[1U]
                : __Vtemp742[1U]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__divisor[2U] 
            = ((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_out_exuType))
                ? vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT___divisor_T_14[2U]
                : __Vtemp742[2U]);
    }
    if ((1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__mul_data2[0U] 
               ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__mul_data2[0U]))) {
        ++(vlSymsp->__Vcoverage[7372]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__mul_data2[0U] 
            = ((0xfffffffeU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__mul_data2[0U]) 
               | (1U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__mul_data2[0U]));
    }
    if ((2U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__mul_data2[0U] 
               ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__mul_data2[0U]))) {
        ++(vlSymsp->__Vcoverage[7373]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__mul_data2[0U] 
            = ((0xfffffffdU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__mul_data2[0U]) 
               | (2U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__mul_data2[0U]));
    }
    if ((4U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__mul_data2[0U] 
               ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__mul_data2[0U]))) {
        ++(vlSymsp->__Vcoverage[7374]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__mul_data2[0U] 
            = ((0xfffffffbU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__mul_data2[0U]) 
               | (4U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__mul_data2[0U]));
    }
    if ((8U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__mul_data2[0U] 
               ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__mul_data2[0U]))) {
        ++(vlSymsp->__Vcoverage[7375]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__mul_data2[0U] 
            = ((0xfffffff7U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__mul_data2[0U]) 
               | (8U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__mul_data2[0U]));
    }
    if ((0x10U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__mul_data2[0U] 
                  ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__mul_data2[0U]))) {
        ++(vlSymsp->__Vcoverage[7376]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__mul_data2[0U] 
            = ((0xffffffefU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__mul_data2[0U]) 
               | (0x10U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__mul_data2[0U]));
    }
    if ((0x20U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__mul_data2[0U] 
                  ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__mul_data2[0U]))) {
        ++(vlSymsp->__Vcoverage[7377]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__mul_data2[0U] 
            = ((0xffffffdfU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__mul_data2[0U]) 
               | (0x20U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__mul_data2[0U]));
    }
    if ((0x40U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__mul_data2[0U] 
                  ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__mul_data2[0U]))) {
        ++(vlSymsp->__Vcoverage[7378]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__mul_data2[0U] 
            = ((0xffffffbfU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__mul_data2[0U]) 
               | (0x40U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__mul_data2[0U]));
    }
    if ((0x80U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__mul_data2[0U] 
                  ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__mul_data2[0U]))) {
        ++(vlSymsp->__Vcoverage[7379]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__mul_data2[0U] 
            = ((0xffffff7fU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__mul_data2[0U]) 
               | (0x80U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__mul_data2[0U]));
    }
    if ((0x100U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__mul_data2[0U] 
                   ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__mul_data2[0U]))) {
        ++(vlSymsp->__Vcoverage[7380]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__mul_data2[0U] 
            = ((0xfffffeffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__mul_data2[0U]) 
               | (0x100U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__mul_data2[0U]));
    }
    if ((0x200U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__mul_data2[0U] 
                   ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__mul_data2[0U]))) {
        ++(vlSymsp->__Vcoverage[7381]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__mul_data2[0U] 
            = ((0xfffffdffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__mul_data2[0U]) 
               | (0x200U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__mul_data2[0U]));
    }
    if ((0x400U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__mul_data2[0U] 
                   ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__mul_data2[0U]))) {
        ++(vlSymsp->__Vcoverage[7382]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__mul_data2[0U] 
            = ((0xfffffbffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__mul_data2[0U]) 
               | (0x400U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__mul_data2[0U]));
    }
    if ((0x800U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__mul_data2[0U] 
                   ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__mul_data2[0U]))) {
        ++(vlSymsp->__Vcoverage[7383]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__mul_data2[0U] 
            = ((0xfffff7ffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__mul_data2[0U]) 
               | (0x800U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__mul_data2[0U]));
    }
    if ((0x1000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__mul_data2[0U] 
                    ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__mul_data2[0U]))) {
        ++(vlSymsp->__Vcoverage[7384]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__mul_data2[0U] 
            = ((0xffffefffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__mul_data2[0U]) 
               | (0x1000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__mul_data2[0U]));
    }
    if ((0x2000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__mul_data2[0U] 
                    ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__mul_data2[0U]))) {
        ++(vlSymsp->__Vcoverage[7385]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__mul_data2[0U] 
            = ((0xffffdfffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__mul_data2[0U]) 
               | (0x2000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__mul_data2[0U]));
    }
    if ((0x4000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__mul_data2[0U] 
                    ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__mul_data2[0U]))) {
        ++(vlSymsp->__Vcoverage[7386]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__mul_data2[0U] 
            = ((0xffffbfffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__mul_data2[0U]) 
               | (0x4000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__mul_data2[0U]));
    }
    if ((0x8000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__mul_data2[0U] 
                    ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__mul_data2[0U]))) {
        ++(vlSymsp->__Vcoverage[7387]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__mul_data2[0U] 
            = ((0xffff7fffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__mul_data2[0U]) 
               | (0x8000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__mul_data2[0U]));
    }
    if ((0x10000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__mul_data2[0U] 
                     ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__mul_data2[0U]))) {
        ++(vlSymsp->__Vcoverage[7388]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__mul_data2[0U] 
            = ((0xfffeffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__mul_data2[0U]) 
               | (0x10000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__mul_data2[0U]));
    }
    if ((0x20000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__mul_data2[0U] 
                     ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__mul_data2[0U]))) {
        ++(vlSymsp->__Vcoverage[7389]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__mul_data2[0U] 
            = ((0xfffdffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__mul_data2[0U]) 
               | (0x20000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__mul_data2[0U]));
    }
    if ((0x40000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__mul_data2[0U] 
                     ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__mul_data2[0U]))) {
        ++(vlSymsp->__Vcoverage[7390]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__mul_data2[0U] 
            = ((0xfffbffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__mul_data2[0U]) 
               | (0x40000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__mul_data2[0U]));
    }
    if ((0x80000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__mul_data2[0U] 
                     ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__mul_data2[0U]))) {
        ++(vlSymsp->__Vcoverage[7391]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__mul_data2[0U] 
            = ((0xfff7ffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__mul_data2[0U]) 
               | (0x80000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__mul_data2[0U]));
    }
    if ((0x100000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__mul_data2[0U] 
                      ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__mul_data2[0U]))) {
        ++(vlSymsp->__Vcoverage[7392]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__mul_data2[0U] 
            = ((0xffefffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__mul_data2[0U]) 
               | (0x100000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__mul_data2[0U]));
    }
    if ((0x200000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__mul_data2[0U] 
                      ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__mul_data2[0U]))) {
        ++(vlSymsp->__Vcoverage[7393]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__mul_data2[0U] 
            = ((0xffdfffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__mul_data2[0U]) 
               | (0x200000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__mul_data2[0U]));
    }
    if ((0x400000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__mul_data2[0U] 
                      ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__mul_data2[0U]))) {
        ++(vlSymsp->__Vcoverage[7394]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__mul_data2[0U] 
            = ((0xffbfffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__mul_data2[0U]) 
               | (0x400000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__mul_data2[0U]));
    }
    if ((0x800000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__mul_data2[0U] 
                      ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__mul_data2[0U]))) {
        ++(vlSymsp->__Vcoverage[7395]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__mul_data2[0U] 
            = ((0xff7fffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__mul_data2[0U]) 
               | (0x800000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__mul_data2[0U]));
    }
    if ((0x1000000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__mul_data2[0U] 
                       ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__mul_data2[0U]))) {
        ++(vlSymsp->__Vcoverage[7396]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__mul_data2[0U] 
            = ((0xfeffffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__mul_data2[0U]) 
               | (0x1000000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__mul_data2[0U]));
    }
    if ((0x2000000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__mul_data2[0U] 
                       ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__mul_data2[0U]))) {
        ++(vlSymsp->__Vcoverage[7397]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__mul_data2[0U] 
            = ((0xfdffffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__mul_data2[0U]) 
               | (0x2000000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__mul_data2[0U]));
    }
    if ((0x4000000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__mul_data2[0U] 
                       ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__mul_data2[0U]))) {
        ++(vlSymsp->__Vcoverage[7398]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__mul_data2[0U] 
            = ((0xfbffffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__mul_data2[0U]) 
               | (0x4000000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__mul_data2[0U]));
    }
    if ((0x8000000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__mul_data2[0U] 
                       ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__mul_data2[0U]))) {
        ++(vlSymsp->__Vcoverage[7399]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__mul_data2[0U] 
            = ((0xf7ffffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__mul_data2[0U]) 
               | (0x8000000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__mul_data2[0U]));
    }
    if ((0x10000000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__mul_data2[0U] 
                        ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__mul_data2[0U]))) {
        ++(vlSymsp->__Vcoverage[7400]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__mul_data2[0U] 
            = ((0xefffffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__mul_data2[0U]) 
               | (0x10000000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__mul_data2[0U]));
    }
    if ((0x20000000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__mul_data2[0U] 
                        ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__mul_data2[0U]))) {
        ++(vlSymsp->__Vcoverage[7401]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__mul_data2[0U] 
            = ((0xdfffffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__mul_data2[0U]) 
               | (0x20000000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__mul_data2[0U]));
    }
    if ((0x40000000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__mul_data2[0U] 
                        ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__mul_data2[0U]))) {
        ++(vlSymsp->__Vcoverage[7402]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__mul_data2[0U] 
            = ((0xbfffffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__mul_data2[0U]) 
               | (0x40000000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__mul_data2[0U]));
    }
    if (((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__mul_data2[0U] 
          ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__mul_data2[0U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[7403]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__mul_data2[0U] 
            = ((0x7fffffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__mul_data2[0U]) 
               | (0x80000000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__mul_data2[0U]));
    }
    if ((1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__mul_data2[1U] 
               ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__mul_data2[1U]))) {
        ++(vlSymsp->__Vcoverage[7404]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__mul_data2[1U] 
            = ((0xfffffffeU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__mul_data2[1U]) 
               | (1U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__mul_data2[1U]));
    }
    if ((2U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__mul_data2[1U] 
               ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__mul_data2[1U]))) {
        ++(vlSymsp->__Vcoverage[7405]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__mul_data2[1U] 
            = ((0xfffffffdU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__mul_data2[1U]) 
               | (2U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__mul_data2[1U]));
    }
    if ((4U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__mul_data2[1U] 
               ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__mul_data2[1U]))) {
        ++(vlSymsp->__Vcoverage[7406]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__mul_data2[1U] 
            = ((0xfffffffbU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__mul_data2[1U]) 
               | (4U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__mul_data2[1U]));
    }
    if ((8U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__mul_data2[1U] 
               ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__mul_data2[1U]))) {
        ++(vlSymsp->__Vcoverage[7407]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__mul_data2[1U] 
            = ((0xfffffff7U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__mul_data2[1U]) 
               | (8U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__mul_data2[1U]));
    }
    if ((0x10U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__mul_data2[1U] 
                  ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__mul_data2[1U]))) {
        ++(vlSymsp->__Vcoverage[7408]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__mul_data2[1U] 
            = ((0xffffffefU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__mul_data2[1U]) 
               | (0x10U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__mul_data2[1U]));
    }
    if ((0x20U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__mul_data2[1U] 
                  ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__mul_data2[1U]))) {
        ++(vlSymsp->__Vcoverage[7409]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__mul_data2[1U] 
            = ((0xffffffdfU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__mul_data2[1U]) 
               | (0x20U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__mul_data2[1U]));
    }
    if ((0x40U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__mul_data2[1U] 
                  ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__mul_data2[1U]))) {
        ++(vlSymsp->__Vcoverage[7410]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__mul_data2[1U] 
            = ((0xffffffbfU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__mul_data2[1U]) 
               | (0x40U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__mul_data2[1U]));
    }
    if ((0x80U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__mul_data2[1U] 
                  ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__mul_data2[1U]))) {
        ++(vlSymsp->__Vcoverage[7411]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__mul_data2[1U] 
            = ((0xffffff7fU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__mul_data2[1U]) 
               | (0x80U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__mul_data2[1U]));
    }
    if ((0x100U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__mul_data2[1U] 
                   ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__mul_data2[1U]))) {
        ++(vlSymsp->__Vcoverage[7412]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__mul_data2[1U] 
            = ((0xfffffeffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__mul_data2[1U]) 
               | (0x100U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__mul_data2[1U]));
    }
    if ((0x200U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__mul_data2[1U] 
                   ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__mul_data2[1U]))) {
        ++(vlSymsp->__Vcoverage[7413]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__mul_data2[1U] 
            = ((0xfffffdffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__mul_data2[1U]) 
               | (0x200U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__mul_data2[1U]));
    }
    if ((0x400U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__mul_data2[1U] 
                   ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__mul_data2[1U]))) {
        ++(vlSymsp->__Vcoverage[7414]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__mul_data2[1U] 
            = ((0xfffffbffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__mul_data2[1U]) 
               | (0x400U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__mul_data2[1U]));
    }
    if ((0x800U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__mul_data2[1U] 
                   ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__mul_data2[1U]))) {
        ++(vlSymsp->__Vcoverage[7415]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__mul_data2[1U] 
            = ((0xfffff7ffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__mul_data2[1U]) 
               | (0x800U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__mul_data2[1U]));
    }
    if ((0x1000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__mul_data2[1U] 
                    ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__mul_data2[1U]))) {
        ++(vlSymsp->__Vcoverage[7416]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__mul_data2[1U] 
            = ((0xffffefffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__mul_data2[1U]) 
               | (0x1000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__mul_data2[1U]));
    }
    if ((0x2000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__mul_data2[1U] 
                    ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__mul_data2[1U]))) {
        ++(vlSymsp->__Vcoverage[7417]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__mul_data2[1U] 
            = ((0xffffdfffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__mul_data2[1U]) 
               | (0x2000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__mul_data2[1U]));
    }
    if ((0x4000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__mul_data2[1U] 
                    ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__mul_data2[1U]))) {
        ++(vlSymsp->__Vcoverage[7418]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__mul_data2[1U] 
            = ((0xffffbfffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__mul_data2[1U]) 
               | (0x4000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__mul_data2[1U]));
    }
    if ((0x8000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__mul_data2[1U] 
                    ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__mul_data2[1U]))) {
        ++(vlSymsp->__Vcoverage[7419]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__mul_data2[1U] 
            = ((0xffff7fffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__mul_data2[1U]) 
               | (0x8000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__mul_data2[1U]));
    }
    if ((0x10000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__mul_data2[1U] 
                     ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__mul_data2[1U]))) {
        ++(vlSymsp->__Vcoverage[7420]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__mul_data2[1U] 
            = ((0xfffeffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__mul_data2[1U]) 
               | (0x10000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__mul_data2[1U]));
    }
    if ((0x20000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__mul_data2[1U] 
                     ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__mul_data2[1U]))) {
        ++(vlSymsp->__Vcoverage[7421]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__mul_data2[1U] 
            = ((0xfffdffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__mul_data2[1U]) 
               | (0x20000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__mul_data2[1U]));
    }
    if ((0x40000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__mul_data2[1U] 
                     ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__mul_data2[1U]))) {
        ++(vlSymsp->__Vcoverage[7422]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__mul_data2[1U] 
            = ((0xfffbffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__mul_data2[1U]) 
               | (0x40000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__mul_data2[1U]));
    }
    if ((0x80000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__mul_data2[1U] 
                     ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__mul_data2[1U]))) {
        ++(vlSymsp->__Vcoverage[7423]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__mul_data2[1U] 
            = ((0xfff7ffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__mul_data2[1U]) 
               | (0x80000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__mul_data2[1U]));
    }
    if ((0x100000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__mul_data2[1U] 
                      ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__mul_data2[1U]))) {
        ++(vlSymsp->__Vcoverage[7424]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__mul_data2[1U] 
            = ((0xffefffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__mul_data2[1U]) 
               | (0x100000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__mul_data2[1U]));
    }
    if ((0x200000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__mul_data2[1U] 
                      ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__mul_data2[1U]))) {
        ++(vlSymsp->__Vcoverage[7425]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__mul_data2[1U] 
            = ((0xffdfffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__mul_data2[1U]) 
               | (0x200000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__mul_data2[1U]));
    }
    if ((0x400000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__mul_data2[1U] 
                      ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__mul_data2[1U]))) {
        ++(vlSymsp->__Vcoverage[7426]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__mul_data2[1U] 
            = ((0xffbfffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__mul_data2[1U]) 
               | (0x400000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__mul_data2[1U]));
    }
    if ((0x800000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__mul_data2[1U] 
                      ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__mul_data2[1U]))) {
        ++(vlSymsp->__Vcoverage[7427]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__mul_data2[1U] 
            = ((0xff7fffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__mul_data2[1U]) 
               | (0x800000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__mul_data2[1U]));
    }
    if ((0x1000000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__mul_data2[1U] 
                       ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__mul_data2[1U]))) {
        ++(vlSymsp->__Vcoverage[7428]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__mul_data2[1U] 
            = ((0xfeffffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__mul_data2[1U]) 
               | (0x1000000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__mul_data2[1U]));
    }
    if ((0x2000000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__mul_data2[1U] 
                       ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__mul_data2[1U]))) {
        ++(vlSymsp->__Vcoverage[7429]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__mul_data2[1U] 
            = ((0xfdffffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__mul_data2[1U]) 
               | (0x2000000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__mul_data2[1U]));
    }
    if ((0x4000000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__mul_data2[1U] 
                       ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__mul_data2[1U]))) {
        ++(vlSymsp->__Vcoverage[7430]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__mul_data2[1U] 
            = ((0xfbffffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__mul_data2[1U]) 
               | (0x4000000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__mul_data2[1U]));
    }
    if ((0x8000000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__mul_data2[1U] 
                       ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__mul_data2[1U]))) {
        ++(vlSymsp->__Vcoverage[7431]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__mul_data2[1U] 
            = ((0xf7ffffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__mul_data2[1U]) 
               | (0x8000000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__mul_data2[1U]));
    }
    if ((0x10000000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__mul_data2[1U] 
                        ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__mul_data2[1U]))) {
        ++(vlSymsp->__Vcoverage[7432]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__mul_data2[1U] 
            = ((0xefffffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__mul_data2[1U]) 
               | (0x10000000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__mul_data2[1U]));
    }
    if ((0x20000000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__mul_data2[1U] 
                        ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__mul_data2[1U]))) {
        ++(vlSymsp->__Vcoverage[7433]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__mul_data2[1U] 
            = ((0xdfffffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__mul_data2[1U]) 
               | (0x20000000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__mul_data2[1U]));
    }
    if ((0x40000000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__mul_data2[1U] 
                        ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__mul_data2[1U]))) {
        ++(vlSymsp->__Vcoverage[7434]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__mul_data2[1U] 
            = ((0xbfffffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__mul_data2[1U]) 
               | (0x40000000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__mul_data2[1U]));
    }
    if (((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__mul_data2[1U] 
          ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__mul_data2[1U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[7435]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__mul_data2[1U] 
            = ((0x7fffffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__mul_data2[1U]) 
               | (0x80000000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__mul_data2[1U]));
    }
    if ((1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__mul_data2[2U] 
               ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__mul_data2[2U]))) {
        ++(vlSymsp->__Vcoverage[7436]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__mul_data2[2U] 
            = (1U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__mul_data2[2U]);
    }
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__temp_mul2[0U] 
        = (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__mul_data2[0U] 
           << 1U);
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__temp_mul2[1U] 
        = ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__mul_data2[0U] 
            >> 0x1fU) | (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__mul_data2[1U] 
                         << 1U));
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__temp_mul2[2U] 
        = ((4U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__mul_data2[2U] 
                  << 2U)) | ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__mul_data2[1U] 
                              >> 0x1fU) | (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__mul_data2[2U] 
                                           << 1U)));
    __Vtemp750[0U] = 1U;
    __Vtemp750[1U] = 0U;
    __Vtemp750[2U] = 0U;
    VL_ADD_W(3, __Vtemp751, __Vtemp750, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___subresult_T_2);
    if ((1U & ((~ (1U & __Vtemp751[2U])) ^ (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__u_rs1_l_rs2)))) {
        ++(vlSymsp->__Vcoverage[6463]);
        __Vtemp754[0U] = 1U;
        __Vtemp754[1U] = 0U;
        __Vtemp754[2U] = 0U;
        VL_ADD_W(3, __Vtemp755, __Vtemp754, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___subresult_T_2);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__u_rs1_l_rs2 
            = (1U & (~ (1U & __Vtemp755[2U])));
    }
    if ((1U & (((IData)(1U) + vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___subresult_T_2[0U]) 
               ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__subresult[0U]))) {
        ++(vlSymsp->__Vcoverage[6398]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__subresult[0U] 
            = ((0xfffffffeU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__subresult[0U]) 
               | (1U & ((IData)(1U) + vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___subresult_T_2[0U])));
    }
    __Vtemp758[0U] = 1U;
    __Vtemp758[1U] = 0U;
    __Vtemp758[2U] = 0U;
    VL_ADD_W(3, __Vtemp759, __Vtemp758, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___subresult_T_2);
    if ((2U & (__Vtemp759[0U] ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__subresult[0U]))) {
        ++(vlSymsp->__Vcoverage[6399]);
        __Vtemp762[0U] = 1U;
        __Vtemp762[1U] = 0U;
        __Vtemp762[2U] = 0U;
        VL_ADD_W(3, __Vtemp763, __Vtemp762, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___subresult_T_2);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__subresult[0U] 
            = ((0xfffffffdU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__subresult[0U]) 
               | (2U & __Vtemp763[0U]));
    }
    __Vtemp766[0U] = 1U;
    __Vtemp766[1U] = 0U;
    __Vtemp766[2U] = 0U;
    VL_ADD_W(3, __Vtemp767, __Vtemp766, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___subresult_T_2);
    if ((4U & (__Vtemp767[0U] ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__subresult[0U]))) {
        ++(vlSymsp->__Vcoverage[6400]);
        __Vtemp770[0U] = 1U;
        __Vtemp770[1U] = 0U;
        __Vtemp770[2U] = 0U;
        VL_ADD_W(3, __Vtemp771, __Vtemp770, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___subresult_T_2);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__subresult[0U] 
            = ((0xfffffffbU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__subresult[0U]) 
               | (4U & __Vtemp771[0U]));
    }
    __Vtemp774[0U] = 1U;
    __Vtemp774[1U] = 0U;
    __Vtemp774[2U] = 0U;
    VL_ADD_W(3, __Vtemp775, __Vtemp774, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___subresult_T_2);
    if ((8U & (__Vtemp775[0U] ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__subresult[0U]))) {
        ++(vlSymsp->__Vcoverage[6401]);
        __Vtemp778[0U] = 1U;
        __Vtemp778[1U] = 0U;
        __Vtemp778[2U] = 0U;
        VL_ADD_W(3, __Vtemp779, __Vtemp778, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___subresult_T_2);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__subresult[0U] 
            = ((0xfffffff7U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__subresult[0U]) 
               | (8U & __Vtemp779[0U]));
    }
    __Vtemp782[0U] = 1U;
    __Vtemp782[1U] = 0U;
    __Vtemp782[2U] = 0U;
    VL_ADD_W(3, __Vtemp783, __Vtemp782, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___subresult_T_2);
    if ((0x10U & (__Vtemp783[0U] ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__subresult[0U]))) {
        ++(vlSymsp->__Vcoverage[6402]);
        __Vtemp786[0U] = 1U;
        __Vtemp786[1U] = 0U;
        __Vtemp786[2U] = 0U;
        VL_ADD_W(3, __Vtemp787, __Vtemp786, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___subresult_T_2);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__subresult[0U] 
            = ((0xffffffefU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__subresult[0U]) 
               | (0x10U & __Vtemp787[0U]));
    }
    __Vtemp790[0U] = 1U;
    __Vtemp790[1U] = 0U;
    __Vtemp790[2U] = 0U;
    VL_ADD_W(3, __Vtemp791, __Vtemp790, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___subresult_T_2);
    if ((0x20U & (__Vtemp791[0U] ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__subresult[0U]))) {
        ++(vlSymsp->__Vcoverage[6403]);
        __Vtemp794[0U] = 1U;
        __Vtemp794[1U] = 0U;
        __Vtemp794[2U] = 0U;
        VL_ADD_W(3, __Vtemp795, __Vtemp794, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___subresult_T_2);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__subresult[0U] 
            = ((0xffffffdfU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__subresult[0U]) 
               | (0x20U & __Vtemp795[0U]));
    }
    __Vtemp798[0U] = 1U;
    __Vtemp798[1U] = 0U;
    __Vtemp798[2U] = 0U;
    VL_ADD_W(3, __Vtemp799, __Vtemp798, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___subresult_T_2);
    if ((0x40U & (__Vtemp799[0U] ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__subresult[0U]))) {
        ++(vlSymsp->__Vcoverage[6404]);
        __Vtemp802[0U] = 1U;
        __Vtemp802[1U] = 0U;
        __Vtemp802[2U] = 0U;
        VL_ADD_W(3, __Vtemp803, __Vtemp802, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___subresult_T_2);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__subresult[0U] 
            = ((0xffffffbfU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__subresult[0U]) 
               | (0x40U & __Vtemp803[0U]));
    }
    __Vtemp806[0U] = 1U;
    __Vtemp806[1U] = 0U;
    __Vtemp806[2U] = 0U;
    VL_ADD_W(3, __Vtemp807, __Vtemp806, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___subresult_T_2);
    if ((0x80U & (__Vtemp807[0U] ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__subresult[0U]))) {
        ++(vlSymsp->__Vcoverage[6405]);
        __Vtemp810[0U] = 1U;
        __Vtemp810[1U] = 0U;
        __Vtemp810[2U] = 0U;
        VL_ADD_W(3, __Vtemp811, __Vtemp810, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___subresult_T_2);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__subresult[0U] 
            = ((0xffffff7fU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__subresult[0U]) 
               | (0x80U & __Vtemp811[0U]));
    }
    __Vtemp814[0U] = 1U;
    __Vtemp814[1U] = 0U;
    __Vtemp814[2U] = 0U;
    VL_ADD_W(3, __Vtemp815, __Vtemp814, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___subresult_T_2);
    if ((0x100U & (__Vtemp815[0U] ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__subresult[0U]))) {
        ++(vlSymsp->__Vcoverage[6406]);
        __Vtemp818[0U] = 1U;
        __Vtemp818[1U] = 0U;
        __Vtemp818[2U] = 0U;
        VL_ADD_W(3, __Vtemp819, __Vtemp818, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___subresult_T_2);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__subresult[0U] 
            = ((0xfffffeffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__subresult[0U]) 
               | (0x100U & __Vtemp819[0U]));
    }
    __Vtemp822[0U] = 1U;
    __Vtemp822[1U] = 0U;
    __Vtemp822[2U] = 0U;
    VL_ADD_W(3, __Vtemp823, __Vtemp822, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___subresult_T_2);
    if ((0x200U & (__Vtemp823[0U] ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__subresult[0U]))) {
        ++(vlSymsp->__Vcoverage[6407]);
        __Vtemp826[0U] = 1U;
        __Vtemp826[1U] = 0U;
        __Vtemp826[2U] = 0U;
        VL_ADD_W(3, __Vtemp827, __Vtemp826, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___subresult_T_2);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__subresult[0U] 
            = ((0xfffffdffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__subresult[0U]) 
               | (0x200U & __Vtemp827[0U]));
    }
    __Vtemp830[0U] = 1U;
    __Vtemp830[1U] = 0U;
    __Vtemp830[2U] = 0U;
    VL_ADD_W(3, __Vtemp831, __Vtemp830, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___subresult_T_2);
    if ((0x400U & (__Vtemp831[0U] ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__subresult[0U]))) {
        ++(vlSymsp->__Vcoverage[6408]);
        __Vtemp834[0U] = 1U;
        __Vtemp834[1U] = 0U;
        __Vtemp834[2U] = 0U;
        VL_ADD_W(3, __Vtemp835, __Vtemp834, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___subresult_T_2);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__subresult[0U] 
            = ((0xfffffbffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__subresult[0U]) 
               | (0x400U & __Vtemp835[0U]));
    }
    __Vtemp838[0U] = 1U;
    __Vtemp838[1U] = 0U;
    __Vtemp838[2U] = 0U;
    VL_ADD_W(3, __Vtemp839, __Vtemp838, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___subresult_T_2);
    if ((0x800U & (__Vtemp839[0U] ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__subresult[0U]))) {
        ++(vlSymsp->__Vcoverage[6409]);
        __Vtemp842[0U] = 1U;
        __Vtemp842[1U] = 0U;
        __Vtemp842[2U] = 0U;
        VL_ADD_W(3, __Vtemp843, __Vtemp842, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___subresult_T_2);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__subresult[0U] 
            = ((0xfffff7ffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__subresult[0U]) 
               | (0x800U & __Vtemp843[0U]));
    }
    __Vtemp846[0U] = 1U;
    __Vtemp846[1U] = 0U;
    __Vtemp846[2U] = 0U;
    VL_ADD_W(3, __Vtemp847, __Vtemp846, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___subresult_T_2);
    if ((0x1000U & (__Vtemp847[0U] ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__subresult[0U]))) {
        ++(vlSymsp->__Vcoverage[6410]);
        __Vtemp850[0U] = 1U;
        __Vtemp850[1U] = 0U;
        __Vtemp850[2U] = 0U;
        VL_ADD_W(3, __Vtemp851, __Vtemp850, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___subresult_T_2);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__subresult[0U] 
            = ((0xffffefffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__subresult[0U]) 
               | (0x1000U & __Vtemp851[0U]));
    }
    __Vtemp854[0U] = 1U;
    __Vtemp854[1U] = 0U;
    __Vtemp854[2U] = 0U;
    VL_ADD_W(3, __Vtemp855, __Vtemp854, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___subresult_T_2);
    if ((0x2000U & (__Vtemp855[0U] ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__subresult[0U]))) {
        ++(vlSymsp->__Vcoverage[6411]);
        __Vtemp858[0U] = 1U;
        __Vtemp858[1U] = 0U;
        __Vtemp858[2U] = 0U;
        VL_ADD_W(3, __Vtemp859, __Vtemp858, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___subresult_T_2);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__subresult[0U] 
            = ((0xffffdfffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__subresult[0U]) 
               | (0x2000U & __Vtemp859[0U]));
    }
    __Vtemp862[0U] = 1U;
    __Vtemp862[1U] = 0U;
    __Vtemp862[2U] = 0U;
    VL_ADD_W(3, __Vtemp863, __Vtemp862, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___subresult_T_2);
    if ((0x4000U & (__Vtemp863[0U] ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__subresult[0U]))) {
        ++(vlSymsp->__Vcoverage[6412]);
        __Vtemp866[0U] = 1U;
        __Vtemp866[1U] = 0U;
        __Vtemp866[2U] = 0U;
        VL_ADD_W(3, __Vtemp867, __Vtemp866, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___subresult_T_2);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__subresult[0U] 
            = ((0xffffbfffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__subresult[0U]) 
               | (0x4000U & __Vtemp867[0U]));
    }
    __Vtemp870[0U] = 1U;
    __Vtemp870[1U] = 0U;
    __Vtemp870[2U] = 0U;
    VL_ADD_W(3, __Vtemp871, __Vtemp870, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___subresult_T_2);
    if ((0x8000U & (__Vtemp871[0U] ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__subresult[0U]))) {
        ++(vlSymsp->__Vcoverage[6413]);
        __Vtemp874[0U] = 1U;
        __Vtemp874[1U] = 0U;
        __Vtemp874[2U] = 0U;
        VL_ADD_W(3, __Vtemp875, __Vtemp874, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___subresult_T_2);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__subresult[0U] 
            = ((0xffff7fffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__subresult[0U]) 
               | (0x8000U & __Vtemp875[0U]));
    }
    __Vtemp878[0U] = 1U;
    __Vtemp878[1U] = 0U;
    __Vtemp878[2U] = 0U;
    VL_ADD_W(3, __Vtemp879, __Vtemp878, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___subresult_T_2);
    if ((0x10000U & (__Vtemp879[0U] ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__subresult[0U]))) {
        ++(vlSymsp->__Vcoverage[6414]);
        __Vtemp882[0U] = 1U;
        __Vtemp882[1U] = 0U;
        __Vtemp882[2U] = 0U;
        VL_ADD_W(3, __Vtemp883, __Vtemp882, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___subresult_T_2);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__subresult[0U] 
            = ((0xfffeffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__subresult[0U]) 
               | (0x10000U & __Vtemp883[0U]));
    }
    __Vtemp886[0U] = 1U;
    __Vtemp886[1U] = 0U;
    __Vtemp886[2U] = 0U;
    VL_ADD_W(3, __Vtemp887, __Vtemp886, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___subresult_T_2);
    if ((0x20000U & (__Vtemp887[0U] ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__subresult[0U]))) {
        ++(vlSymsp->__Vcoverage[6415]);
        __Vtemp890[0U] = 1U;
        __Vtemp890[1U] = 0U;
        __Vtemp890[2U] = 0U;
        VL_ADD_W(3, __Vtemp891, __Vtemp890, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___subresult_T_2);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__subresult[0U] 
            = ((0xfffdffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__subresult[0U]) 
               | (0x20000U & __Vtemp891[0U]));
    }
    __Vtemp894[0U] = 1U;
    __Vtemp894[1U] = 0U;
    __Vtemp894[2U] = 0U;
    VL_ADD_W(3, __Vtemp895, __Vtemp894, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___subresult_T_2);
    if ((0x40000U & (__Vtemp895[0U] ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__subresult[0U]))) {
        ++(vlSymsp->__Vcoverage[6416]);
        __Vtemp898[0U] = 1U;
        __Vtemp898[1U] = 0U;
        __Vtemp898[2U] = 0U;
        VL_ADD_W(3, __Vtemp899, __Vtemp898, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___subresult_T_2);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__subresult[0U] 
            = ((0xfffbffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__subresult[0U]) 
               | (0x40000U & __Vtemp899[0U]));
    }
    __Vtemp902[0U] = 1U;
    __Vtemp902[1U] = 0U;
    __Vtemp902[2U] = 0U;
    VL_ADD_W(3, __Vtemp903, __Vtemp902, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___subresult_T_2);
    if ((0x80000U & (__Vtemp903[0U] ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__subresult[0U]))) {
        ++(vlSymsp->__Vcoverage[6417]);
        __Vtemp906[0U] = 1U;
        __Vtemp906[1U] = 0U;
        __Vtemp906[2U] = 0U;
        VL_ADD_W(3, __Vtemp907, __Vtemp906, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___subresult_T_2);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__subresult[0U] 
            = ((0xfff7ffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__subresult[0U]) 
               | (0x80000U & __Vtemp907[0U]));
    }
    __Vtemp910[0U] = 1U;
    __Vtemp910[1U] = 0U;
    __Vtemp910[2U] = 0U;
    VL_ADD_W(3, __Vtemp911, __Vtemp910, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___subresult_T_2);
    if ((0x100000U & (__Vtemp911[0U] ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__subresult[0U]))) {
        ++(vlSymsp->__Vcoverage[6418]);
        __Vtemp914[0U] = 1U;
        __Vtemp914[1U] = 0U;
        __Vtemp914[2U] = 0U;
        VL_ADD_W(3, __Vtemp915, __Vtemp914, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___subresult_T_2);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__subresult[0U] 
            = ((0xffefffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__subresult[0U]) 
               | (0x100000U & __Vtemp915[0U]));
    }
    __Vtemp918[0U] = 1U;
    __Vtemp918[1U] = 0U;
    __Vtemp918[2U] = 0U;
    VL_ADD_W(3, __Vtemp919, __Vtemp918, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___subresult_T_2);
    if ((0x200000U & (__Vtemp919[0U] ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__subresult[0U]))) {
        ++(vlSymsp->__Vcoverage[6419]);
        __Vtemp922[0U] = 1U;
        __Vtemp922[1U] = 0U;
        __Vtemp922[2U] = 0U;
        VL_ADD_W(3, __Vtemp923, __Vtemp922, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___subresult_T_2);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__subresult[0U] 
            = ((0xffdfffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__subresult[0U]) 
               | (0x200000U & __Vtemp923[0U]));
    }
    __Vtemp926[0U] = 1U;
    __Vtemp926[1U] = 0U;
    __Vtemp926[2U] = 0U;
    VL_ADD_W(3, __Vtemp927, __Vtemp926, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___subresult_T_2);
    if ((0x400000U & (__Vtemp927[0U] ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__subresult[0U]))) {
        ++(vlSymsp->__Vcoverage[6420]);
        __Vtemp930[0U] = 1U;
        __Vtemp930[1U] = 0U;
        __Vtemp930[2U] = 0U;
        VL_ADD_W(3, __Vtemp931, __Vtemp930, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___subresult_T_2);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__subresult[0U] 
            = ((0xffbfffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__subresult[0U]) 
               | (0x400000U & __Vtemp931[0U]));
    }
    __Vtemp934[0U] = 1U;
    __Vtemp934[1U] = 0U;
    __Vtemp934[2U] = 0U;
    VL_ADD_W(3, __Vtemp935, __Vtemp934, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___subresult_T_2);
    if ((0x800000U & (__Vtemp935[0U] ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__subresult[0U]))) {
        ++(vlSymsp->__Vcoverage[6421]);
        __Vtemp938[0U] = 1U;
        __Vtemp938[1U] = 0U;
        __Vtemp938[2U] = 0U;
        VL_ADD_W(3, __Vtemp939, __Vtemp938, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___subresult_T_2);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__subresult[0U] 
            = ((0xff7fffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__subresult[0U]) 
               | (0x800000U & __Vtemp939[0U]));
    }
    __Vtemp942[0U] = 1U;
    __Vtemp942[1U] = 0U;
    __Vtemp942[2U] = 0U;
    VL_ADD_W(3, __Vtemp943, __Vtemp942, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___subresult_T_2);
    if ((0x1000000U & (__Vtemp943[0U] ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__subresult[0U]))) {
        ++(vlSymsp->__Vcoverage[6422]);
        __Vtemp946[0U] = 1U;
        __Vtemp946[1U] = 0U;
        __Vtemp946[2U] = 0U;
        VL_ADD_W(3, __Vtemp947, __Vtemp946, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___subresult_T_2);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__subresult[0U] 
            = ((0xfeffffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__subresult[0U]) 
               | (0x1000000U & __Vtemp947[0U]));
    }
    __Vtemp950[0U] = 1U;
    __Vtemp950[1U] = 0U;
    __Vtemp950[2U] = 0U;
    VL_ADD_W(3, __Vtemp951, __Vtemp950, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___subresult_T_2);
    if ((0x2000000U & (__Vtemp951[0U] ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__subresult[0U]))) {
        ++(vlSymsp->__Vcoverage[6423]);
        __Vtemp954[0U] = 1U;
        __Vtemp954[1U] = 0U;
        __Vtemp954[2U] = 0U;
        VL_ADD_W(3, __Vtemp955, __Vtemp954, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___subresult_T_2);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__subresult[0U] 
            = ((0xfdffffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__subresult[0U]) 
               | (0x2000000U & __Vtemp955[0U]));
    }
    __Vtemp958[0U] = 1U;
    __Vtemp958[1U] = 0U;
    __Vtemp958[2U] = 0U;
    VL_ADD_W(3, __Vtemp959, __Vtemp958, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___subresult_T_2);
    if ((0x4000000U & (__Vtemp959[0U] ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__subresult[0U]))) {
        ++(vlSymsp->__Vcoverage[6424]);
        __Vtemp962[0U] = 1U;
        __Vtemp962[1U] = 0U;
        __Vtemp962[2U] = 0U;
        VL_ADD_W(3, __Vtemp963, __Vtemp962, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___subresult_T_2);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__subresult[0U] 
            = ((0xfbffffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__subresult[0U]) 
               | (0x4000000U & __Vtemp963[0U]));
    }
    __Vtemp966[0U] = 1U;
    __Vtemp966[1U] = 0U;
    __Vtemp966[2U] = 0U;
    VL_ADD_W(3, __Vtemp967, __Vtemp966, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___subresult_T_2);
    if ((0x8000000U & (__Vtemp967[0U] ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__subresult[0U]))) {
        ++(vlSymsp->__Vcoverage[6425]);
        __Vtemp970[0U] = 1U;
        __Vtemp970[1U] = 0U;
        __Vtemp970[2U] = 0U;
        VL_ADD_W(3, __Vtemp971, __Vtemp970, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___subresult_T_2);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__subresult[0U] 
            = ((0xf7ffffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__subresult[0U]) 
               | (0x8000000U & __Vtemp971[0U]));
    }
    __Vtemp974[0U] = 1U;
    __Vtemp974[1U] = 0U;
    __Vtemp974[2U] = 0U;
    VL_ADD_W(3, __Vtemp975, __Vtemp974, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___subresult_T_2);
    if ((0x10000000U & (__Vtemp975[0U] ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__subresult[0U]))) {
        ++(vlSymsp->__Vcoverage[6426]);
        __Vtemp978[0U] = 1U;
        __Vtemp978[1U] = 0U;
        __Vtemp978[2U] = 0U;
        VL_ADD_W(3, __Vtemp979, __Vtemp978, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___subresult_T_2);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__subresult[0U] 
            = ((0xefffffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__subresult[0U]) 
               | (0x10000000U & __Vtemp979[0U]));
    }
    __Vtemp982[0U] = 1U;
    __Vtemp982[1U] = 0U;
    __Vtemp982[2U] = 0U;
    VL_ADD_W(3, __Vtemp983, __Vtemp982, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___subresult_T_2);
    if ((0x20000000U & (__Vtemp983[0U] ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__subresult[0U]))) {
        ++(vlSymsp->__Vcoverage[6427]);
        __Vtemp986[0U] = 1U;
        __Vtemp986[1U] = 0U;
        __Vtemp986[2U] = 0U;
        VL_ADD_W(3, __Vtemp987, __Vtemp986, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___subresult_T_2);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__subresult[0U] 
            = ((0xdfffffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__subresult[0U]) 
               | (0x20000000U & __Vtemp987[0U]));
    }
    __Vtemp990[0U] = 1U;
    __Vtemp990[1U] = 0U;
    __Vtemp990[2U] = 0U;
    VL_ADD_W(3, __Vtemp991, __Vtemp990, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___subresult_T_2);
    if ((0x40000000U & (__Vtemp991[0U] ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__subresult[0U]))) {
        ++(vlSymsp->__Vcoverage[6428]);
        __Vtemp994[0U] = 1U;
        __Vtemp994[1U] = 0U;
        __Vtemp994[2U] = 0U;
        VL_ADD_W(3, __Vtemp995, __Vtemp994, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___subresult_T_2);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__subresult[0U] 
            = ((0xbfffffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__subresult[0U]) 
               | (0x40000000U & __Vtemp995[0U]));
    }
    __Vtemp998[0U] = 1U;
    __Vtemp998[1U] = 0U;
    __Vtemp998[2U] = 0U;
    VL_ADD_W(3, __Vtemp999, __Vtemp998, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___subresult_T_2);
    if (((__Vtemp999[0U] ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__subresult[0U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[6429]);
        __Vtemp1002[0U] = 1U;
        __Vtemp1002[1U] = 0U;
        __Vtemp1002[2U] = 0U;
        VL_ADD_W(3, __Vtemp1003, __Vtemp1002, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___subresult_T_2);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__subresult[0U] 
            = ((0x7fffffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__subresult[0U]) 
               | (0x80000000U & __Vtemp1003[0U]));
    }
    __Vtemp1006[0U] = 1U;
    __Vtemp1006[1U] = 0U;
    __Vtemp1006[2U] = 0U;
    VL_ADD_W(3, __Vtemp1007, __Vtemp1006, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___subresult_T_2);
    if ((1U & (__Vtemp1007[1U] ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__subresult[1U]))) {
        ++(vlSymsp->__Vcoverage[6430]);
        __Vtemp1010[0U] = 1U;
        __Vtemp1010[1U] = 0U;
        __Vtemp1010[2U] = 0U;
        VL_ADD_W(3, __Vtemp1011, __Vtemp1010, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___subresult_T_2);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__subresult[1U] 
            = ((0xfffffffeU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__subresult[1U]) 
               | (1U & __Vtemp1011[1U]));
    }
    __Vtemp1014[0U] = 1U;
    __Vtemp1014[1U] = 0U;
    __Vtemp1014[2U] = 0U;
    VL_ADD_W(3, __Vtemp1015, __Vtemp1014, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___subresult_T_2);
    if ((2U & (__Vtemp1015[1U] ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__subresult[1U]))) {
        ++(vlSymsp->__Vcoverage[6431]);
        __Vtemp1018[0U] = 1U;
        __Vtemp1018[1U] = 0U;
        __Vtemp1018[2U] = 0U;
        VL_ADD_W(3, __Vtemp1019, __Vtemp1018, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___subresult_T_2);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__subresult[1U] 
            = ((0xfffffffdU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__subresult[1U]) 
               | (2U & __Vtemp1019[1U]));
    }
    __Vtemp1022[0U] = 1U;
    __Vtemp1022[1U] = 0U;
    __Vtemp1022[2U] = 0U;
    VL_ADD_W(3, __Vtemp1023, __Vtemp1022, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___subresult_T_2);
    if ((4U & (__Vtemp1023[1U] ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__subresult[1U]))) {
        ++(vlSymsp->__Vcoverage[6432]);
        __Vtemp1026[0U] = 1U;
        __Vtemp1026[1U] = 0U;
        __Vtemp1026[2U] = 0U;
        VL_ADD_W(3, __Vtemp1027, __Vtemp1026, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___subresult_T_2);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__subresult[1U] 
            = ((0xfffffffbU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__subresult[1U]) 
               | (4U & __Vtemp1027[1U]));
    }
    __Vtemp1030[0U] = 1U;
    __Vtemp1030[1U] = 0U;
    __Vtemp1030[2U] = 0U;
    VL_ADD_W(3, __Vtemp1031, __Vtemp1030, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___subresult_T_2);
    if ((8U & (__Vtemp1031[1U] ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__subresult[1U]))) {
        ++(vlSymsp->__Vcoverage[6433]);
        __Vtemp1034[0U] = 1U;
        __Vtemp1034[1U] = 0U;
        __Vtemp1034[2U] = 0U;
        VL_ADD_W(3, __Vtemp1035, __Vtemp1034, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___subresult_T_2);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__subresult[1U] 
            = ((0xfffffff7U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__subresult[1U]) 
               | (8U & __Vtemp1035[1U]));
    }
    __Vtemp1038[0U] = 1U;
    __Vtemp1038[1U] = 0U;
    __Vtemp1038[2U] = 0U;
    VL_ADD_W(3, __Vtemp1039, __Vtemp1038, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___subresult_T_2);
    if ((0x10U & (__Vtemp1039[1U] ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__subresult[1U]))) {
        ++(vlSymsp->__Vcoverage[6434]);
        __Vtemp1042[0U] = 1U;
        __Vtemp1042[1U] = 0U;
        __Vtemp1042[2U] = 0U;
        VL_ADD_W(3, __Vtemp1043, __Vtemp1042, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___subresult_T_2);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__subresult[1U] 
            = ((0xffffffefU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__subresult[1U]) 
               | (0x10U & __Vtemp1043[1U]));
    }
    __Vtemp1046[0U] = 1U;
    __Vtemp1046[1U] = 0U;
    __Vtemp1046[2U] = 0U;
    VL_ADD_W(3, __Vtemp1047, __Vtemp1046, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___subresult_T_2);
    if ((0x20U & (__Vtemp1047[1U] ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__subresult[1U]))) {
        ++(vlSymsp->__Vcoverage[6435]);
        __Vtemp1050[0U] = 1U;
        __Vtemp1050[1U] = 0U;
        __Vtemp1050[2U] = 0U;
        VL_ADD_W(3, __Vtemp1051, __Vtemp1050, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___subresult_T_2);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__subresult[1U] 
            = ((0xffffffdfU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__subresult[1U]) 
               | (0x20U & __Vtemp1051[1U]));
    }
    __Vtemp1054[0U] = 1U;
    __Vtemp1054[1U] = 0U;
    __Vtemp1054[2U] = 0U;
    VL_ADD_W(3, __Vtemp1055, __Vtemp1054, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___subresult_T_2);
    if ((0x40U & (__Vtemp1055[1U] ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__subresult[1U]))) {
        ++(vlSymsp->__Vcoverage[6436]);
        __Vtemp1058[0U] = 1U;
        __Vtemp1058[1U] = 0U;
        __Vtemp1058[2U] = 0U;
        VL_ADD_W(3, __Vtemp1059, __Vtemp1058, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___subresult_T_2);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__subresult[1U] 
            = ((0xffffffbfU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__subresult[1U]) 
               | (0x40U & __Vtemp1059[1U]));
    }
    __Vtemp1062[0U] = 1U;
    __Vtemp1062[1U] = 0U;
    __Vtemp1062[2U] = 0U;
    VL_ADD_W(3, __Vtemp1063, __Vtemp1062, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___subresult_T_2);
    if ((0x80U & (__Vtemp1063[1U] ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__subresult[1U]))) {
        ++(vlSymsp->__Vcoverage[6437]);
        __Vtemp1066[0U] = 1U;
        __Vtemp1066[1U] = 0U;
        __Vtemp1066[2U] = 0U;
        VL_ADD_W(3, __Vtemp1067, __Vtemp1066, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___subresult_T_2);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__subresult[1U] 
            = ((0xffffff7fU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__subresult[1U]) 
               | (0x80U & __Vtemp1067[1U]));
    }
    __Vtemp1070[0U] = 1U;
    __Vtemp1070[1U] = 0U;
    __Vtemp1070[2U] = 0U;
    VL_ADD_W(3, __Vtemp1071, __Vtemp1070, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___subresult_T_2);
    if ((0x100U & (__Vtemp1071[1U] ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__subresult[1U]))) {
        ++(vlSymsp->__Vcoverage[6438]);
        __Vtemp1074[0U] = 1U;
        __Vtemp1074[1U] = 0U;
        __Vtemp1074[2U] = 0U;
        VL_ADD_W(3, __Vtemp1075, __Vtemp1074, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___subresult_T_2);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__subresult[1U] 
            = ((0xfffffeffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__subresult[1U]) 
               | (0x100U & __Vtemp1075[1U]));
    }
    __Vtemp1078[0U] = 1U;
    __Vtemp1078[1U] = 0U;
    __Vtemp1078[2U] = 0U;
    VL_ADD_W(3, __Vtemp1079, __Vtemp1078, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___subresult_T_2);
    if ((0x200U & (__Vtemp1079[1U] ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__subresult[1U]))) {
        ++(vlSymsp->__Vcoverage[6439]);
        __Vtemp1082[0U] = 1U;
        __Vtemp1082[1U] = 0U;
        __Vtemp1082[2U] = 0U;
        VL_ADD_W(3, __Vtemp1083, __Vtemp1082, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___subresult_T_2);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__subresult[1U] 
            = ((0xfffffdffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__subresult[1U]) 
               | (0x200U & __Vtemp1083[1U]));
    }
    __Vtemp1086[0U] = 1U;
    __Vtemp1086[1U] = 0U;
    __Vtemp1086[2U] = 0U;
    VL_ADD_W(3, __Vtemp1087, __Vtemp1086, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___subresult_T_2);
    if ((0x400U & (__Vtemp1087[1U] ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__subresult[1U]))) {
        ++(vlSymsp->__Vcoverage[6440]);
        __Vtemp1090[0U] = 1U;
        __Vtemp1090[1U] = 0U;
        __Vtemp1090[2U] = 0U;
        VL_ADD_W(3, __Vtemp1091, __Vtemp1090, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___subresult_T_2);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__subresult[1U] 
            = ((0xfffffbffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__subresult[1U]) 
               | (0x400U & __Vtemp1091[1U]));
    }
    __Vtemp1094[0U] = 1U;
    __Vtemp1094[1U] = 0U;
    __Vtemp1094[2U] = 0U;
    VL_ADD_W(3, __Vtemp1095, __Vtemp1094, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___subresult_T_2);
    if ((0x800U & (__Vtemp1095[1U] ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__subresult[1U]))) {
        ++(vlSymsp->__Vcoverage[6441]);
        __Vtemp1098[0U] = 1U;
        __Vtemp1098[1U] = 0U;
        __Vtemp1098[2U] = 0U;
        VL_ADD_W(3, __Vtemp1099, __Vtemp1098, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___subresult_T_2);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__subresult[1U] 
            = ((0xfffff7ffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__subresult[1U]) 
               | (0x800U & __Vtemp1099[1U]));
    }
    __Vtemp1102[0U] = 1U;
    __Vtemp1102[1U] = 0U;
    __Vtemp1102[2U] = 0U;
    VL_ADD_W(3, __Vtemp1103, __Vtemp1102, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___subresult_T_2);
    if ((0x1000U & (__Vtemp1103[1U] ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__subresult[1U]))) {
        ++(vlSymsp->__Vcoverage[6442]);
        __Vtemp1106[0U] = 1U;
        __Vtemp1106[1U] = 0U;
        __Vtemp1106[2U] = 0U;
        VL_ADD_W(3, __Vtemp1107, __Vtemp1106, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___subresult_T_2);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__subresult[1U] 
            = ((0xffffefffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__subresult[1U]) 
               | (0x1000U & __Vtemp1107[1U]));
    }
    __Vtemp1110[0U] = 1U;
    __Vtemp1110[1U] = 0U;
    __Vtemp1110[2U] = 0U;
    VL_ADD_W(3, __Vtemp1111, __Vtemp1110, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___subresult_T_2);
    if ((0x2000U & (__Vtemp1111[1U] ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__subresult[1U]))) {
        ++(vlSymsp->__Vcoverage[6443]);
        __Vtemp1114[0U] = 1U;
        __Vtemp1114[1U] = 0U;
        __Vtemp1114[2U] = 0U;
        VL_ADD_W(3, __Vtemp1115, __Vtemp1114, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___subresult_T_2);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__subresult[1U] 
            = ((0xffffdfffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__subresult[1U]) 
               | (0x2000U & __Vtemp1115[1U]));
    }
    __Vtemp1118[0U] = 1U;
    __Vtemp1118[1U] = 0U;
    __Vtemp1118[2U] = 0U;
    VL_ADD_W(3, __Vtemp1119, __Vtemp1118, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___subresult_T_2);
    if ((0x4000U & (__Vtemp1119[1U] ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__subresult[1U]))) {
        ++(vlSymsp->__Vcoverage[6444]);
        __Vtemp1122[0U] = 1U;
        __Vtemp1122[1U] = 0U;
        __Vtemp1122[2U] = 0U;
        VL_ADD_W(3, __Vtemp1123, __Vtemp1122, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___subresult_T_2);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__subresult[1U] 
            = ((0xffffbfffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__subresult[1U]) 
               | (0x4000U & __Vtemp1123[1U]));
    }
    __Vtemp1126[0U] = 1U;
    __Vtemp1126[1U] = 0U;
    __Vtemp1126[2U] = 0U;
    VL_ADD_W(3, __Vtemp1127, __Vtemp1126, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___subresult_T_2);
    if ((0x8000U & (__Vtemp1127[1U] ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__subresult[1U]))) {
        ++(vlSymsp->__Vcoverage[6445]);
        __Vtemp1130[0U] = 1U;
        __Vtemp1130[1U] = 0U;
        __Vtemp1130[2U] = 0U;
        VL_ADD_W(3, __Vtemp1131, __Vtemp1130, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___subresult_T_2);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__subresult[1U] 
            = ((0xffff7fffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__subresult[1U]) 
               | (0x8000U & __Vtemp1131[1U]));
    }
    __Vtemp1134[0U] = 1U;
    __Vtemp1134[1U] = 0U;
    __Vtemp1134[2U] = 0U;
    VL_ADD_W(3, __Vtemp1135, __Vtemp1134, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___subresult_T_2);
    if ((0x10000U & (__Vtemp1135[1U] ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__subresult[1U]))) {
        ++(vlSymsp->__Vcoverage[6446]);
        __Vtemp1138[0U] = 1U;
        __Vtemp1138[1U] = 0U;
        __Vtemp1138[2U] = 0U;
        VL_ADD_W(3, __Vtemp1139, __Vtemp1138, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___subresult_T_2);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__subresult[1U] 
            = ((0xfffeffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__subresult[1U]) 
               | (0x10000U & __Vtemp1139[1U]));
    }
    __Vtemp1142[0U] = 1U;
    __Vtemp1142[1U] = 0U;
    __Vtemp1142[2U] = 0U;
    VL_ADD_W(3, __Vtemp1143, __Vtemp1142, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___subresult_T_2);
    if ((0x20000U & (__Vtemp1143[1U] ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__subresult[1U]))) {
        ++(vlSymsp->__Vcoverage[6447]);
        __Vtemp1146[0U] = 1U;
        __Vtemp1146[1U] = 0U;
        __Vtemp1146[2U] = 0U;
        VL_ADD_W(3, __Vtemp1147, __Vtemp1146, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___subresult_T_2);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__subresult[1U] 
            = ((0xfffdffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__subresult[1U]) 
               | (0x20000U & __Vtemp1147[1U]));
    }
    __Vtemp1150[0U] = 1U;
    __Vtemp1150[1U] = 0U;
    __Vtemp1150[2U] = 0U;
    VL_ADD_W(3, __Vtemp1151, __Vtemp1150, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___subresult_T_2);
    if ((0x40000U & (__Vtemp1151[1U] ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__subresult[1U]))) {
        ++(vlSymsp->__Vcoverage[6448]);
        __Vtemp1154[0U] = 1U;
        __Vtemp1154[1U] = 0U;
        __Vtemp1154[2U] = 0U;
        VL_ADD_W(3, __Vtemp1155, __Vtemp1154, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___subresult_T_2);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__subresult[1U] 
            = ((0xfffbffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__subresult[1U]) 
               | (0x40000U & __Vtemp1155[1U]));
    }
    __Vtemp1158[0U] = 1U;
    __Vtemp1158[1U] = 0U;
    __Vtemp1158[2U] = 0U;
    VL_ADD_W(3, __Vtemp1159, __Vtemp1158, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___subresult_T_2);
    if ((0x80000U & (__Vtemp1159[1U] ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__subresult[1U]))) {
        ++(vlSymsp->__Vcoverage[6449]);
        __Vtemp1162[0U] = 1U;
        __Vtemp1162[1U] = 0U;
        __Vtemp1162[2U] = 0U;
        VL_ADD_W(3, __Vtemp1163, __Vtemp1162, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___subresult_T_2);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__subresult[1U] 
            = ((0xfff7ffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__subresult[1U]) 
               | (0x80000U & __Vtemp1163[1U]));
    }
    __Vtemp1166[0U] = 1U;
    __Vtemp1166[1U] = 0U;
    __Vtemp1166[2U] = 0U;
    VL_ADD_W(3, __Vtemp1167, __Vtemp1166, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___subresult_T_2);
    if ((0x100000U & (__Vtemp1167[1U] ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__subresult[1U]))) {
        ++(vlSymsp->__Vcoverage[6450]);
        __Vtemp1170[0U] = 1U;
        __Vtemp1170[1U] = 0U;
        __Vtemp1170[2U] = 0U;
        VL_ADD_W(3, __Vtemp1171, __Vtemp1170, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___subresult_T_2);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__subresult[1U] 
            = ((0xffefffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__subresult[1U]) 
               | (0x100000U & __Vtemp1171[1U]));
    }
    __Vtemp1174[0U] = 1U;
    __Vtemp1174[1U] = 0U;
    __Vtemp1174[2U] = 0U;
    VL_ADD_W(3, __Vtemp1175, __Vtemp1174, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___subresult_T_2);
    if ((0x200000U & (__Vtemp1175[1U] ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__subresult[1U]))) {
        ++(vlSymsp->__Vcoverage[6451]);
        __Vtemp1178[0U] = 1U;
        __Vtemp1178[1U] = 0U;
        __Vtemp1178[2U] = 0U;
        VL_ADD_W(3, __Vtemp1179, __Vtemp1178, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___subresult_T_2);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__subresult[1U] 
            = ((0xffdfffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__subresult[1U]) 
               | (0x200000U & __Vtemp1179[1U]));
    }
    __Vtemp1182[0U] = 1U;
    __Vtemp1182[1U] = 0U;
    __Vtemp1182[2U] = 0U;
    VL_ADD_W(3, __Vtemp1183, __Vtemp1182, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___subresult_T_2);
    if ((0x400000U & (__Vtemp1183[1U] ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__subresult[1U]))) {
        ++(vlSymsp->__Vcoverage[6452]);
        __Vtemp1186[0U] = 1U;
        __Vtemp1186[1U] = 0U;
        __Vtemp1186[2U] = 0U;
        VL_ADD_W(3, __Vtemp1187, __Vtemp1186, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___subresult_T_2);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__subresult[1U] 
            = ((0xffbfffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__subresult[1U]) 
               | (0x400000U & __Vtemp1187[1U]));
    }
    __Vtemp1190[0U] = 1U;
    __Vtemp1190[1U] = 0U;
    __Vtemp1190[2U] = 0U;
    VL_ADD_W(3, __Vtemp1191, __Vtemp1190, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___subresult_T_2);
    if ((0x800000U & (__Vtemp1191[1U] ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__subresult[1U]))) {
        ++(vlSymsp->__Vcoverage[6453]);
        __Vtemp1194[0U] = 1U;
        __Vtemp1194[1U] = 0U;
        __Vtemp1194[2U] = 0U;
        VL_ADD_W(3, __Vtemp1195, __Vtemp1194, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___subresult_T_2);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__subresult[1U] 
            = ((0xff7fffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__subresult[1U]) 
               | (0x800000U & __Vtemp1195[1U]));
    }
    __Vtemp1198[0U] = 1U;
    __Vtemp1198[1U] = 0U;
    __Vtemp1198[2U] = 0U;
    VL_ADD_W(3, __Vtemp1199, __Vtemp1198, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___subresult_T_2);
    if ((0x1000000U & (__Vtemp1199[1U] ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__subresult[1U]))) {
        ++(vlSymsp->__Vcoverage[6454]);
        __Vtemp1202[0U] = 1U;
        __Vtemp1202[1U] = 0U;
        __Vtemp1202[2U] = 0U;
        VL_ADD_W(3, __Vtemp1203, __Vtemp1202, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___subresult_T_2);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__subresult[1U] 
            = ((0xfeffffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__subresult[1U]) 
               | (0x1000000U & __Vtemp1203[1U]));
    }
    __Vtemp1206[0U] = 1U;
    __Vtemp1206[1U] = 0U;
    __Vtemp1206[2U] = 0U;
    VL_ADD_W(3, __Vtemp1207, __Vtemp1206, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___subresult_T_2);
    if ((0x2000000U & (__Vtemp1207[1U] ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__subresult[1U]))) {
        ++(vlSymsp->__Vcoverage[6455]);
        __Vtemp1210[0U] = 1U;
        __Vtemp1210[1U] = 0U;
        __Vtemp1210[2U] = 0U;
        VL_ADD_W(3, __Vtemp1211, __Vtemp1210, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___subresult_T_2);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__subresult[1U] 
            = ((0xfdffffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__subresult[1U]) 
               | (0x2000000U & __Vtemp1211[1U]));
    }
    __Vtemp1214[0U] = 1U;
    __Vtemp1214[1U] = 0U;
    __Vtemp1214[2U] = 0U;
    VL_ADD_W(3, __Vtemp1215, __Vtemp1214, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___subresult_T_2);
    if ((0x4000000U & (__Vtemp1215[1U] ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__subresult[1U]))) {
        ++(vlSymsp->__Vcoverage[6456]);
        __Vtemp1218[0U] = 1U;
        __Vtemp1218[1U] = 0U;
        __Vtemp1218[2U] = 0U;
        VL_ADD_W(3, __Vtemp1219, __Vtemp1218, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___subresult_T_2);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__subresult[1U] 
            = ((0xfbffffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__subresult[1U]) 
               | (0x4000000U & __Vtemp1219[1U]));
    }
    __Vtemp1222[0U] = 1U;
    __Vtemp1222[1U] = 0U;
    __Vtemp1222[2U] = 0U;
    VL_ADD_W(3, __Vtemp1223, __Vtemp1222, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___subresult_T_2);
    if ((0x8000000U & (__Vtemp1223[1U] ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__subresult[1U]))) {
        ++(vlSymsp->__Vcoverage[6457]);
        __Vtemp1226[0U] = 1U;
        __Vtemp1226[1U] = 0U;
        __Vtemp1226[2U] = 0U;
        VL_ADD_W(3, __Vtemp1227, __Vtemp1226, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___subresult_T_2);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__subresult[1U] 
            = ((0xf7ffffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__subresult[1U]) 
               | (0x8000000U & __Vtemp1227[1U]));
    }
    __Vtemp1230[0U] = 1U;
    __Vtemp1230[1U] = 0U;
    __Vtemp1230[2U] = 0U;
    VL_ADD_W(3, __Vtemp1231, __Vtemp1230, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___subresult_T_2);
    if ((0x10000000U & (__Vtemp1231[1U] ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__subresult[1U]))) {
        ++(vlSymsp->__Vcoverage[6458]);
        __Vtemp1234[0U] = 1U;
        __Vtemp1234[1U] = 0U;
        __Vtemp1234[2U] = 0U;
        VL_ADD_W(3, __Vtemp1235, __Vtemp1234, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___subresult_T_2);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__subresult[1U] 
            = ((0xefffffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__subresult[1U]) 
               | (0x10000000U & __Vtemp1235[1U]));
    }
    __Vtemp1238[0U] = 1U;
    __Vtemp1238[1U] = 0U;
    __Vtemp1238[2U] = 0U;
    VL_ADD_W(3, __Vtemp1239, __Vtemp1238, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___subresult_T_2);
    if ((0x20000000U & (__Vtemp1239[1U] ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__subresult[1U]))) {
        ++(vlSymsp->__Vcoverage[6459]);
        __Vtemp1242[0U] = 1U;
        __Vtemp1242[1U] = 0U;
        __Vtemp1242[2U] = 0U;
        VL_ADD_W(3, __Vtemp1243, __Vtemp1242, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___subresult_T_2);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__subresult[1U] 
            = ((0xdfffffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__subresult[1U]) 
               | (0x20000000U & __Vtemp1243[1U]));
    }
    __Vtemp1246[0U] = 1U;
    __Vtemp1246[1U] = 0U;
    __Vtemp1246[2U] = 0U;
    VL_ADD_W(3, __Vtemp1247, __Vtemp1246, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___subresult_T_2);
    if ((0x40000000U & (__Vtemp1247[1U] ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__subresult[1U]))) {
        ++(vlSymsp->__Vcoverage[6460]);
        __Vtemp1250[0U] = 1U;
        __Vtemp1250[1U] = 0U;
        __Vtemp1250[2U] = 0U;
        VL_ADD_W(3, __Vtemp1251, __Vtemp1250, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___subresult_T_2);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__subresult[1U] 
            = ((0xbfffffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__subresult[1U]) 
               | (0x40000000U & __Vtemp1251[1U]));
    }
    __Vtemp1254[0U] = 1U;
    __Vtemp1254[1U] = 0U;
    __Vtemp1254[2U] = 0U;
    VL_ADD_W(3, __Vtemp1255, __Vtemp1254, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___subresult_T_2);
    if (((__Vtemp1255[1U] ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__subresult[1U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[6461]);
        __Vtemp1258[0U] = 1U;
        __Vtemp1258[1U] = 0U;
        __Vtemp1258[2U] = 0U;
        VL_ADD_W(3, __Vtemp1259, __Vtemp1258, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___subresult_T_2);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__subresult[1U] 
            = ((0x7fffffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__subresult[1U]) 
               | (0x80000000U & __Vtemp1259[1U]));
    }
    __Vtemp1262[0U] = 1U;
    __Vtemp1262[1U] = 0U;
    __Vtemp1262[2U] = 0U;
    VL_ADD_W(3, __Vtemp1263, __Vtemp1262, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___subresult_T_2);
    if ((1U & ((1U & __Vtemp1263[2U]) ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__subresult[2U]))) {
        ++(vlSymsp->__Vcoverage[6462]);
        __Vtemp1266[0U] = 1U;
        __Vtemp1266[1U] = 0U;
        __Vtemp1266[2U] = 0U;
        VL_ADD_W(3, __Vtemp1267, __Vtemp1266, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___subresult_T_2);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__subresult[2U] 
            = (1U & __Vtemp1267[2U]);
    }
    __Vtemp1270[0U] = 1U;
    __Vtemp1270[1U] = 0U;
    __Vtemp1270[2U] = 0U;
    VL_ADD_W(3, __Vtemp1271, __Vtemp1270, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___subresult_T_2);
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__s_rs1_l_rs2 
        = (1U & ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu_io_rs1_data 
                                 >> 0x3fU)) ^ (IData)(
                                                      (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu_io_rs2_data 
                                                       >> 0x3fU))))
                  ? (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu_io_rs1_data 
                             >> 0x3fU)) : (__Vtemp1271[1U] 
                                           >> 0x1fU)));
    if ((1U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__rs2_data) 
               ^ (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__rs2_data)))) {
        ++(vlSymsp->__Vcoverage[6334]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__rs2_data 
            = ((0xfffffffffffffffeULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__rs2_data) 
               | (IData)((IData)((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__rs2_data)))));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__rs2_data 
                        >> 1U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__rs2_data 
                                           >> 1U))))) {
        ++(vlSymsp->__Vcoverage[6335]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__rs2_data 
            = ((0xfffffffffffffffdULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__rs2_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__rs2_data 
                                                 >> 1U))))) 
                  << 1U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__rs2_data 
                        >> 2U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__rs2_data 
                                           >> 2U))))) {
        ++(vlSymsp->__Vcoverage[6336]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__rs2_data 
            = ((0xfffffffffffffffbULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__rs2_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__rs2_data 
                                                 >> 2U))))) 
                  << 2U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__rs2_data 
                        >> 3U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__rs2_data 
                                           >> 3U))))) {
        ++(vlSymsp->__Vcoverage[6337]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__rs2_data 
            = ((0xfffffffffffffff7ULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__rs2_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__rs2_data 
                                                 >> 3U))))) 
                  << 3U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__rs2_data 
                        >> 4U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__rs2_data 
                                           >> 4U))))) {
        ++(vlSymsp->__Vcoverage[6338]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__rs2_data 
            = ((0xffffffffffffffefULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__rs2_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__rs2_data 
                                                 >> 4U))))) 
                  << 4U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__rs2_data 
                        >> 5U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__rs2_data 
                                           >> 5U))))) {
        ++(vlSymsp->__Vcoverage[6339]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__rs2_data 
            = ((0xffffffffffffffdfULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__rs2_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__rs2_data 
                                                 >> 5U))))) 
                  << 5U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__rs2_data 
                        >> 6U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__rs2_data 
                                           >> 6U))))) {
        ++(vlSymsp->__Vcoverage[6340]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__rs2_data 
            = ((0xffffffffffffffbfULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__rs2_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__rs2_data 
                                                 >> 6U))))) 
                  << 6U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__rs2_data 
                        >> 7U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__rs2_data 
                                           >> 7U))))) {
        ++(vlSymsp->__Vcoverage[6341]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__rs2_data 
            = ((0xffffffffffffff7fULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__rs2_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__rs2_data 
                                                 >> 7U))))) 
                  << 7U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__rs2_data 
                        >> 8U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__rs2_data 
                                           >> 8U))))) {
        ++(vlSymsp->__Vcoverage[6342]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__rs2_data 
            = ((0xfffffffffffffeffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__rs2_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__rs2_data 
                                                 >> 8U))))) 
                  << 8U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__rs2_data 
                        >> 9U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__rs2_data 
                                           >> 9U))))) {
        ++(vlSymsp->__Vcoverage[6343]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__rs2_data 
            = ((0xfffffffffffffdffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__rs2_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__rs2_data 
                                                 >> 9U))))) 
                  << 9U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__rs2_data 
                        >> 0xaU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__rs2_data 
                                             >> 0xaU))))) {
        ++(vlSymsp->__Vcoverage[6344]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__rs2_data 
            = ((0xfffffffffffffbffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__rs2_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__rs2_data 
                                                 >> 0xaU))))) 
                  << 0xaU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__rs2_data 
                        >> 0xbU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__rs2_data 
                                             >> 0xbU))))) {
        ++(vlSymsp->__Vcoverage[6345]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__rs2_data 
            = ((0xfffffffffffff7ffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__rs2_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__rs2_data 
                                                 >> 0xbU))))) 
                  << 0xbU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__rs2_data 
                        >> 0xcU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__rs2_data 
                                             >> 0xcU))))) {
        ++(vlSymsp->__Vcoverage[6346]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__rs2_data 
            = ((0xffffffffffffefffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__rs2_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__rs2_data 
                                                 >> 0xcU))))) 
                  << 0xcU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__rs2_data 
                        >> 0xdU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__rs2_data 
                                             >> 0xdU))))) {
        ++(vlSymsp->__Vcoverage[6347]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__rs2_data 
            = ((0xffffffffffffdfffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__rs2_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__rs2_data 
                                                 >> 0xdU))))) 
                  << 0xdU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__rs2_data 
                        >> 0xeU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__rs2_data 
                                             >> 0xeU))))) {
        ++(vlSymsp->__Vcoverage[6348]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__rs2_data 
            = ((0xffffffffffffbfffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__rs2_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__rs2_data 
                                                 >> 0xeU))))) 
                  << 0xeU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__rs2_data 
                        >> 0xfU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__rs2_data 
                                             >> 0xfU))))) {
        ++(vlSymsp->__Vcoverage[6349]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__rs2_data 
            = ((0xffffffffffff7fffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__rs2_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__rs2_data 
                                                 >> 0xfU))))) 
                  << 0xfU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__rs2_data 
                        >> 0x10U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__rs2_data 
                                              >> 0x10U))))) {
        ++(vlSymsp->__Vcoverage[6350]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__rs2_data 
            = ((0xfffffffffffeffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__rs2_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__rs2_data 
                                                 >> 0x10U))))) 
                  << 0x10U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__rs2_data 
                        >> 0x11U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__rs2_data 
                                              >> 0x11U))))) {
        ++(vlSymsp->__Vcoverage[6351]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__rs2_data 
            = ((0xfffffffffffdffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__rs2_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__rs2_data 
                                                 >> 0x11U))))) 
                  << 0x11U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__rs2_data 
                        >> 0x12U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__rs2_data 
                                              >> 0x12U))))) {
        ++(vlSymsp->__Vcoverage[6352]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__rs2_data 
            = ((0xfffffffffffbffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__rs2_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__rs2_data 
                                                 >> 0x12U))))) 
                  << 0x12U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__rs2_data 
                        >> 0x13U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__rs2_data 
                                              >> 0x13U))))) {
        ++(vlSymsp->__Vcoverage[6353]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__rs2_data 
            = ((0xfffffffffff7ffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__rs2_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__rs2_data 
                                                 >> 0x13U))))) 
                  << 0x13U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__rs2_data 
                        >> 0x14U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__rs2_data 
                                              >> 0x14U))))) {
        ++(vlSymsp->__Vcoverage[6354]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__rs2_data 
            = ((0xffffffffffefffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__rs2_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__rs2_data 
                                                 >> 0x14U))))) 
                  << 0x14U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__rs2_data 
                        >> 0x15U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__rs2_data 
                                              >> 0x15U))))) {
        ++(vlSymsp->__Vcoverage[6355]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__rs2_data 
            = ((0xffffffffffdfffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__rs2_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__rs2_data 
                                                 >> 0x15U))))) 
                  << 0x15U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__rs2_data 
                        >> 0x16U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__rs2_data 
                                              >> 0x16U))))) {
        ++(vlSymsp->__Vcoverage[6356]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__rs2_data 
            = ((0xffffffffffbfffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__rs2_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__rs2_data 
                                                 >> 0x16U))))) 
                  << 0x16U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__rs2_data 
                        >> 0x17U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__rs2_data 
                                              >> 0x17U))))) {
        ++(vlSymsp->__Vcoverage[6357]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__rs2_data 
            = ((0xffffffffff7fffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__rs2_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__rs2_data 
                                                 >> 0x17U))))) 
                  << 0x17U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__rs2_data 
                        >> 0x18U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__rs2_data 
                                              >> 0x18U))))) {
        ++(vlSymsp->__Vcoverage[6358]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__rs2_data 
            = ((0xfffffffffeffffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__rs2_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__rs2_data 
                                                 >> 0x18U))))) 
                  << 0x18U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__rs2_data 
                        >> 0x19U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__rs2_data 
                                              >> 0x19U))))) {
        ++(vlSymsp->__Vcoverage[6359]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__rs2_data 
            = ((0xfffffffffdffffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__rs2_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__rs2_data 
                                                 >> 0x19U))))) 
                  << 0x19U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__rs2_data 
                        >> 0x1aU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__rs2_data 
                                              >> 0x1aU))))) {
        ++(vlSymsp->__Vcoverage[6360]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__rs2_data 
            = ((0xfffffffffbffffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__rs2_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__rs2_data 
                                                 >> 0x1aU))))) 
                  << 0x1aU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__rs2_data 
                        >> 0x1bU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__rs2_data 
                                              >> 0x1bU))))) {
        ++(vlSymsp->__Vcoverage[6361]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__rs2_data 
            = ((0xfffffffff7ffffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__rs2_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__rs2_data 
                                                 >> 0x1bU))))) 
                  << 0x1bU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__rs2_data 
                        >> 0x1cU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__rs2_data 
                                              >> 0x1cU))))) {
        ++(vlSymsp->__Vcoverage[6362]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__rs2_data 
            = ((0xffffffffefffffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__rs2_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__rs2_data 
                                                 >> 0x1cU))))) 
                  << 0x1cU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__rs2_data 
                        >> 0x1dU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__rs2_data 
                                              >> 0x1dU))))) {
        ++(vlSymsp->__Vcoverage[6363]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__rs2_data 
            = ((0xffffffffdfffffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__rs2_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__rs2_data 
                                                 >> 0x1dU))))) 
                  << 0x1dU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__rs2_data 
                        >> 0x1eU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__rs2_data 
                                              >> 0x1eU))))) {
        ++(vlSymsp->__Vcoverage[6364]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__rs2_data 
            = ((0xffffffffbfffffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__rs2_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__rs2_data 
                                                 >> 0x1eU))))) 
                  << 0x1eU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__rs2_data 
                        >> 0x1fU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__rs2_data 
                                              >> 0x1fU))))) {
        ++(vlSymsp->__Vcoverage[6365]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__rs2_data 
            = ((0xffffffff7fffffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__rs2_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__rs2_data 
                                                 >> 0x1fU))))) 
                  << 0x1fU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__rs2_data 
                        >> 0x20U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__rs2_data 
                                              >> 0x20U))))) {
        ++(vlSymsp->__Vcoverage[6366]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__rs2_data 
            = ((0xfffffffeffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__rs2_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__rs2_data 
                                                 >> 0x20U))))) 
                  << 0x20U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__rs2_data 
                        >> 0x21U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__rs2_data 
                                              >> 0x21U))))) {
        ++(vlSymsp->__Vcoverage[6367]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__rs2_data 
            = ((0xfffffffdffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__rs2_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__rs2_data 
                                                 >> 0x21U))))) 
                  << 0x21U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__rs2_data 
                        >> 0x22U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__rs2_data 
                                              >> 0x22U))))) {
        ++(vlSymsp->__Vcoverage[6368]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__rs2_data 
            = ((0xfffffffbffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__rs2_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__rs2_data 
                                                 >> 0x22U))))) 
                  << 0x22U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__rs2_data 
                        >> 0x23U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__rs2_data 
                                              >> 0x23U))))) {
        ++(vlSymsp->__Vcoverage[6369]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__rs2_data 
            = ((0xfffffff7ffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__rs2_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__rs2_data 
                                                 >> 0x23U))))) 
                  << 0x23U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__rs2_data 
                        >> 0x24U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__rs2_data 
                                              >> 0x24U))))) {
        ++(vlSymsp->__Vcoverage[6370]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__rs2_data 
            = ((0xffffffefffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__rs2_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__rs2_data 
                                                 >> 0x24U))))) 
                  << 0x24U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__rs2_data 
                        >> 0x25U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__rs2_data 
                                              >> 0x25U))))) {
        ++(vlSymsp->__Vcoverage[6371]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__rs2_data 
            = ((0xffffffdfffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__rs2_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__rs2_data 
                                                 >> 0x25U))))) 
                  << 0x25U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__rs2_data 
                        >> 0x26U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__rs2_data 
                                              >> 0x26U))))) {
        ++(vlSymsp->__Vcoverage[6372]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__rs2_data 
            = ((0xffffffbfffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__rs2_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__rs2_data 
                                                 >> 0x26U))))) 
                  << 0x26U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__rs2_data 
                        >> 0x27U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__rs2_data 
                                              >> 0x27U))))) {
        ++(vlSymsp->__Vcoverage[6373]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__rs2_data 
            = ((0xffffff7fffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__rs2_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__rs2_data 
                                                 >> 0x27U))))) 
                  << 0x27U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__rs2_data 
                        >> 0x28U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__rs2_data 
                                              >> 0x28U))))) {
        ++(vlSymsp->__Vcoverage[6374]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__rs2_data 
            = ((0xfffffeffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__rs2_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__rs2_data 
                                                 >> 0x28U))))) 
                  << 0x28U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__rs2_data 
                        >> 0x29U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__rs2_data 
                                              >> 0x29U))))) {
        ++(vlSymsp->__Vcoverage[6375]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__rs2_data 
            = ((0xfffffdffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__rs2_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__rs2_data 
                                                 >> 0x29U))))) 
                  << 0x29U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__rs2_data 
                        >> 0x2aU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__rs2_data 
                                              >> 0x2aU))))) {
        ++(vlSymsp->__Vcoverage[6376]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__rs2_data 
            = ((0xfffffbffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__rs2_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__rs2_data 
                                                 >> 0x2aU))))) 
                  << 0x2aU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__rs2_data 
                        >> 0x2bU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__rs2_data 
                                              >> 0x2bU))))) {
        ++(vlSymsp->__Vcoverage[6377]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__rs2_data 
            = ((0xfffff7ffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__rs2_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__rs2_data 
                                                 >> 0x2bU))))) 
                  << 0x2bU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__rs2_data 
                        >> 0x2cU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__rs2_data 
                                              >> 0x2cU))))) {
        ++(vlSymsp->__Vcoverage[6378]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__rs2_data 
            = ((0xffffefffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__rs2_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__rs2_data 
                                                 >> 0x2cU))))) 
                  << 0x2cU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__rs2_data 
                        >> 0x2dU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__rs2_data 
                                              >> 0x2dU))))) {
        ++(vlSymsp->__Vcoverage[6379]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__rs2_data 
            = ((0xffffdfffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__rs2_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__rs2_data 
                                                 >> 0x2dU))))) 
                  << 0x2dU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__rs2_data 
                        >> 0x2eU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__rs2_data 
                                              >> 0x2eU))))) {
        ++(vlSymsp->__Vcoverage[6380]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__rs2_data 
            = ((0xffffbfffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__rs2_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__rs2_data 
                                                 >> 0x2eU))))) 
                  << 0x2eU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__rs2_data 
                        >> 0x2fU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__rs2_data 
                                              >> 0x2fU))))) {
        ++(vlSymsp->__Vcoverage[6381]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__rs2_data 
            = ((0xffff7fffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__rs2_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__rs2_data 
                                                 >> 0x2fU))))) 
                  << 0x2fU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__rs2_data 
                        >> 0x30U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__rs2_data 
                                              >> 0x30U))))) {
        ++(vlSymsp->__Vcoverage[6382]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__rs2_data 
            = ((0xfffeffffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__rs2_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__rs2_data 
                                                 >> 0x30U))))) 
                  << 0x30U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__rs2_data 
                        >> 0x31U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__rs2_data 
                                              >> 0x31U))))) {
        ++(vlSymsp->__Vcoverage[6383]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__rs2_data 
            = ((0xfffdffffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__rs2_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__rs2_data 
                                                 >> 0x31U))))) 
                  << 0x31U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__rs2_data 
                        >> 0x32U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__rs2_data 
                                              >> 0x32U))))) {
        ++(vlSymsp->__Vcoverage[6384]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__rs2_data 
            = ((0xfffbffffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__rs2_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__rs2_data 
                                                 >> 0x32U))))) 
                  << 0x32U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__rs2_data 
                        >> 0x33U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__rs2_data 
                                              >> 0x33U))))) {
        ++(vlSymsp->__Vcoverage[6385]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__rs2_data 
            = ((0xfff7ffffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__rs2_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__rs2_data 
                                                 >> 0x33U))))) 
                  << 0x33U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__rs2_data 
                        >> 0x34U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__rs2_data 
                                              >> 0x34U))))) {
        ++(vlSymsp->__Vcoverage[6386]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__rs2_data 
            = ((0xffefffffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__rs2_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__rs2_data 
                                                 >> 0x34U))))) 
                  << 0x34U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__rs2_data 
                        >> 0x35U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__rs2_data 
                                              >> 0x35U))))) {
        ++(vlSymsp->__Vcoverage[6387]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__rs2_data 
            = ((0xffdfffffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__rs2_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__rs2_data 
                                                 >> 0x35U))))) 
                  << 0x35U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__rs2_data 
                        >> 0x36U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__rs2_data 
                                              >> 0x36U))))) {
        ++(vlSymsp->__Vcoverage[6388]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__rs2_data 
            = ((0xffbfffffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__rs2_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__rs2_data 
                                                 >> 0x36U))))) 
                  << 0x36U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__rs2_data 
                        >> 0x37U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__rs2_data 
                                              >> 0x37U))))) {
        ++(vlSymsp->__Vcoverage[6389]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__rs2_data 
            = ((0xff7fffffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__rs2_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__rs2_data 
                                                 >> 0x37U))))) 
                  << 0x37U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__rs2_data 
                        >> 0x38U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__rs2_data 
                                              >> 0x38U))))) {
        ++(vlSymsp->__Vcoverage[6390]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__rs2_data 
            = ((0xfeffffffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__rs2_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__rs2_data 
                                                 >> 0x38U))))) 
                  << 0x38U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__rs2_data 
                        >> 0x39U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__rs2_data 
                                              >> 0x39U))))) {
        ++(vlSymsp->__Vcoverage[6391]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__rs2_data 
            = ((0xfdffffffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__rs2_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__rs2_data 
                                                 >> 0x39U))))) 
                  << 0x39U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__rs2_data 
                        >> 0x3aU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__rs2_data 
                                              >> 0x3aU))))) {
        ++(vlSymsp->__Vcoverage[6392]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__rs2_data 
            = ((0xfbffffffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__rs2_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__rs2_data 
                                                 >> 0x3aU))))) 
                  << 0x3aU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__rs2_data 
                        >> 0x3bU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__rs2_data 
                                              >> 0x3bU))))) {
        ++(vlSymsp->__Vcoverage[6393]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__rs2_data 
            = ((0xf7ffffffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__rs2_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__rs2_data 
                                                 >> 0x3bU))))) 
                  << 0x3bU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__rs2_data 
                        >> 0x3cU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__rs2_data 
                                              >> 0x3cU))))) {
        ++(vlSymsp->__Vcoverage[6394]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__rs2_data 
            = ((0xefffffffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__rs2_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__rs2_data 
                                                 >> 0x3cU))))) 
                  << 0x3cU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__rs2_data 
                        >> 0x3dU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__rs2_data 
                                              >> 0x3dU))))) {
        ++(vlSymsp->__Vcoverage[6395]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__rs2_data 
            = ((0xdfffffffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__rs2_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__rs2_data 
                                                 >> 0x3dU))))) 
                  << 0x3dU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__rs2_data 
                        >> 0x3eU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__rs2_data 
                                              >> 0x3eU))))) {
        ++(vlSymsp->__Vcoverage[6396]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__rs2_data 
            = ((0xbfffffffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__rs2_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__rs2_data 
                                                 >> 0x3eU))))) 
                  << 0x3eU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__rs2_data 
                        >> 0x3fU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__rs2_data 
                                              >> 0x3fU))))) {
        ++(vlSymsp->__Vcoverage[6397]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__rs2_data 
            = ((0x7fffffffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__rs2_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__rs2_data 
                                                 >> 0x3fU))))) 
                  << 0x3fU));
    }
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__srlw_temp 
        = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu_io_rs1_data) 
           >> (0x1fU & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__rs2_data)));
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sraw_temp 
        = VL_SHIFTRS_IIQ(32,32,64, (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu_io_rs1_data), 
                         (0x1fULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__rs2_data));
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sllw_temp 
        = (0x7fffffffffffffffULL & ((QData)((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu_io_rs1_data)) 
                                    << (0x1fU & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__rs2_data))));
    if ((0x5003U == (0x707fU & vlSelf->riscv_soc__DOT__core__DOT__fetch_io_out_inst))) {
        riscv_soc__DOT__core__DOT__decode__DOT___T_180 = 1U;
        riscv_soc__DOT__core__DOT__decode__DOT___T_247 = 4U;
        riscv_soc__DOT__core__DOT__decode__DOT___T_314 = 0xcU;
    } else {
        riscv_soc__DOT__core__DOT__decode__DOT___T_180 
            = ((0x37U == (0x7fU & vlSelf->riscv_soc__DOT__core__DOT__fetch_io_out_inst))
                ? 4U : ((0x2003U == (0x707fU & vlSelf->riscv_soc__DOT__core__DOT__fetch_io_out_inst))
                         ? 1U : ((0x6003U == (0x707fU 
                                              & vlSelf->riscv_soc__DOT__core__DOT__fetch_io_out_inst))
                                  ? 1U : ((0x3023U 
                                           == (0x707fU 
                                               & vlSelf->riscv_soc__DOT__core__DOT__fetch_io_out_inst))
                                           ? 1U : (
                                                   (0x23U 
                                                    == 
                                                    (0x707fU 
                                                     & vlSelf->riscv_soc__DOT__core__DOT__fetch_io_out_inst))
                                                    ? 1U
                                                    : 
                                                   ((0x1023U 
                                                     == 
                                                     (0x707fU 
                                                      & vlSelf->riscv_soc__DOT__core__DOT__fetch_io_out_inst))
                                                     ? 1U
                                                     : 
                                                    ((0x1033U 
                                                      == 
                                                      (0xfe00707fU 
                                                       & vlSelf->riscv_soc__DOT__core__DOT__fetch_io_out_inst))
                                                      ? 4U
                                                      : 
                                                     ((0x1013U 
                                                       == 
                                                       (0xfc00707fU 
                                                        & vlSelf->riscv_soc__DOT__core__DOT__fetch_io_out_inst))
                                                       ? 4U
                                                       : 
                                                      ((0x101bU 
                                                        == 
                                                        (0xfe00707fU 
                                                         & vlSelf->riscv_soc__DOT__core__DOT__fetch_io_out_inst))
                                                        ? 4U
                                                        : 
                                                       ((0x103bU 
                                                         == 
                                                         (0xfe00707fU 
                                                          & vlSelf->riscv_soc__DOT__core__DOT__fetch_io_out_inst))
                                                         ? 4U
                                                         : 
                                                        ((0x2033U 
                                                          == 
                                                          (0xfe00707fU 
                                                           & vlSelf->riscv_soc__DOT__core__DOT__fetch_io_out_inst))
                                                          ? 4U
                                                          : 
                                                         ((0x2013U 
                                                           == 
                                                           (0x707fU 
                                                            & vlSelf->riscv_soc__DOT__core__DOT__fetch_io_out_inst))
                                                           ? 4U
                                                           : 
                                                          ((0x3013U 
                                                            == 
                                                            (0x707fU 
                                                             & vlSelf->riscv_soc__DOT__core__DOT__fetch_io_out_inst))
                                                            ? 4U
                                                            : 
                                                           ((0x3033U 
                                                             == 
                                                             (0xfe00707fU 
                                                              & vlSelf->riscv_soc__DOT__core__DOT__fetch_io_out_inst))
                                                             ? 4U
                                                             : (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT___T_165)))))))))))))));
        riscv_soc__DOT__core__DOT__decode__DOT___T_247 
            = ((0x37U == (0x7fU & vlSelf->riscv_soc__DOT__core__DOT__fetch_io_out_inst))
                ? 0x30U : ((0x2003U == (0x707fU & vlSelf->riscv_soc__DOT__core__DOT__fetch_io_out_inst))
                            ? 6U : ((0x6003U == (0x707fU 
                                                 & vlSelf->riscv_soc__DOT__core__DOT__fetch_io_out_inst))
                                     ? 7U : ((0x3023U 
                                              == (0x707fU 
                                                  & vlSelf->riscv_soc__DOT__core__DOT__fetch_io_out_inst))
                                              ? 8U : 
                                             ((0x23U 
                                               == (0x707fU 
                                                   & vlSelf->riscv_soc__DOT__core__DOT__fetch_io_out_inst))
                                               ? 9U
                                               : ((0x1023U 
                                                   == 
                                                   (0x707fU 
                                                    & vlSelf->riscv_soc__DOT__core__DOT__fetch_io_out_inst))
                                                   ? 0xaU
                                                   : 
                                                  ((0x1033U 
                                                    == 
                                                    (0xfe00707fU 
                                                     & vlSelf->riscv_soc__DOT__core__DOT__fetch_io_out_inst))
                                                    ? 0x18U
                                                    : 
                                                   ((0x1013U 
                                                     == 
                                                     (0xfc00707fU 
                                                      & vlSelf->riscv_soc__DOT__core__DOT__fetch_io_out_inst))
                                                     ? 0x19U
                                                     : 
                                                    ((0x101bU 
                                                      == 
                                                      (0xfe00707fU 
                                                       & vlSelf->riscv_soc__DOT__core__DOT__fetch_io_out_inst))
                                                      ? 0x1bU
                                                      : 
                                                     ((0x103bU 
                                                       == 
                                                       (0xfe00707fU 
                                                        & vlSelf->riscv_soc__DOT__core__DOT__fetch_io_out_inst))
                                                       ? 0x1aU
                                                       : 
                                                      ((0x2033U 
                                                        == 
                                                        (0xfe00707fU 
                                                         & vlSelf->riscv_soc__DOT__core__DOT__fetch_io_out_inst))
                                                        ? 0xcU
                                                        : 
                                                       ((0x2013U 
                                                         == 
                                                         (0x707fU 
                                                          & vlSelf->riscv_soc__DOT__core__DOT__fetch_io_out_inst))
                                                         ? 0xdU
                                                         : 
                                                        ((0x3013U 
                                                          == 
                                                          (0x707fU 
                                                           & vlSelf->riscv_soc__DOT__core__DOT__fetch_io_out_inst))
                                                          ? 0x11U
                                                          : 
                                                         ((0x3033U 
                                                           == 
                                                           (0xfe00707fU 
                                                            & vlSelf->riscv_soc__DOT__core__DOT__fetch_io_out_inst))
                                                           ? 0x10U
                                                           : (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT___T_232)))))))))))))));
        riscv_soc__DOT__core__DOT__decode__DOT___T_314 
            = ((0x37U == (0x7fU & vlSelf->riscv_soc__DOT__core__DOT__fetch_io_out_inst))
                ? 1U : ((0x2003U == (0x707fU & vlSelf->riscv_soc__DOT__core__DOT__fetch_io_out_inst))
                         ? 0xcU : ((0x6003U == (0x707fU 
                                                & vlSelf->riscv_soc__DOT__core__DOT__fetch_io_out_inst))
                                    ? 0xcU : ((0x3023U 
                                               == (0x707fU 
                                                   & vlSelf->riscv_soc__DOT__core__DOT__fetch_io_out_inst))
                                               ? 3U
                                               : ((0x23U 
                                                   == 
                                                   (0x707fU 
                                                    & vlSelf->riscv_soc__DOT__core__DOT__fetch_io_out_inst))
                                                   ? 3U
                                                   : 
                                                  ((0x1023U 
                                                    == 
                                                    (0x707fU 
                                                     & vlSelf->riscv_soc__DOT__core__DOT__fetch_io_out_inst))
                                                    ? 3U
                                                    : 
                                                   ((0x1033U 
                                                     == 
                                                     (0xfe00707fU 
                                                      & vlSelf->riscv_soc__DOT__core__DOT__fetch_io_out_inst))
                                                     ? 6U
                                                     : 
                                                    ((0x1013U 
                                                      == 
                                                      (0xfc00707fU 
                                                       & vlSelf->riscv_soc__DOT__core__DOT__fetch_io_out_inst))
                                                      ? 4U
                                                      : 
                                                     ((0x101bU 
                                                       == 
                                                       (0xfe00707fU 
                                                        & vlSelf->riscv_soc__DOT__core__DOT__fetch_io_out_inst))
                                                       ? 4U
                                                       : 
                                                      ((0x103bU 
                                                        == 
                                                        (0xfe00707fU 
                                                         & vlSelf->riscv_soc__DOT__core__DOT__fetch_io_out_inst))
                                                        ? 6U
                                                        : 
                                                       ((0x2033U 
                                                         == 
                                                         (0xfe00707fU 
                                                          & vlSelf->riscv_soc__DOT__core__DOT__fetch_io_out_inst))
                                                         ? 6U
                                                         : 
                                                        ((0x2013U 
                                                          == 
                                                          (0x707fU 
                                                           & vlSelf->riscv_soc__DOT__core__DOT__fetch_io_out_inst))
                                                          ? 0xcU
                                                          : 
                                                         ((0x3013U 
                                                           == 
                                                           (0x707fU 
                                                            & vlSelf->riscv_soc__DOT__core__DOT__fetch_io_out_inst))
                                                           ? 0xcU
                                                           : 
                                                          ((0x3033U 
                                                            == 
                                                            (0xfe00707fU 
                                                             & vlSelf->riscv_soc__DOT__core__DOT__fetch_io_out_inst))
                                                            ? 6U
                                                            : (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT___T_299)))))))))))))));
    }
    if ((1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__dividend[0U] 
               ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__dividend[0U]))) {
        ++(vlSymsp->__Vcoverage[6855]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__dividend[0U] 
            = ((0xfffffffeU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__dividend[0U]) 
               | (1U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__dividend[0U]));
    }
    if ((2U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__dividend[0U] 
               ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__dividend[0U]))) {
        ++(vlSymsp->__Vcoverage[6856]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__dividend[0U] 
            = ((0xfffffffdU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__dividend[0U]) 
               | (2U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__dividend[0U]));
    }
    if ((4U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__dividend[0U] 
               ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__dividend[0U]))) {
        ++(vlSymsp->__Vcoverage[6857]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__dividend[0U] 
            = ((0xfffffffbU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__dividend[0U]) 
               | (4U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__dividend[0U]));
    }
    if ((8U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__dividend[0U] 
               ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__dividend[0U]))) {
        ++(vlSymsp->__Vcoverage[6858]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__dividend[0U] 
            = ((0xfffffff7U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__dividend[0U]) 
               | (8U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__dividend[0U]));
    }
    if ((0x10U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__dividend[0U] 
                  ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__dividend[0U]))) {
        ++(vlSymsp->__Vcoverage[6859]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__dividend[0U] 
            = ((0xffffffefU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__dividend[0U]) 
               | (0x10U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__dividend[0U]));
    }
    if ((0x20U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__dividend[0U] 
                  ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__dividend[0U]))) {
        ++(vlSymsp->__Vcoverage[6860]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__dividend[0U] 
            = ((0xffffffdfU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__dividend[0U]) 
               | (0x20U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__dividend[0U]));
    }
    if ((0x40U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__dividend[0U] 
                  ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__dividend[0U]))) {
        ++(vlSymsp->__Vcoverage[6861]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__dividend[0U] 
            = ((0xffffffbfU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__dividend[0U]) 
               | (0x40U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__dividend[0U]));
    }
    if ((0x80U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__dividend[0U] 
                  ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__dividend[0U]))) {
        ++(vlSymsp->__Vcoverage[6862]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__dividend[0U] 
            = ((0xffffff7fU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__dividend[0U]) 
               | (0x80U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__dividend[0U]));
    }
    if ((0x100U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__dividend[0U] 
                   ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__dividend[0U]))) {
        ++(vlSymsp->__Vcoverage[6863]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__dividend[0U] 
            = ((0xfffffeffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__dividend[0U]) 
               | (0x100U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__dividend[0U]));
    }
    if ((0x200U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__dividend[0U] 
                   ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__dividend[0U]))) {
        ++(vlSymsp->__Vcoverage[6864]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__dividend[0U] 
            = ((0xfffffdffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__dividend[0U]) 
               | (0x200U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__dividend[0U]));
    }
    if ((0x400U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__dividend[0U] 
                   ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__dividend[0U]))) {
        ++(vlSymsp->__Vcoverage[6865]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__dividend[0U] 
            = ((0xfffffbffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__dividend[0U]) 
               | (0x400U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__dividend[0U]));
    }
    if ((0x800U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__dividend[0U] 
                   ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__dividend[0U]))) {
        ++(vlSymsp->__Vcoverage[6866]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__dividend[0U] 
            = ((0xfffff7ffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__dividend[0U]) 
               | (0x800U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__dividend[0U]));
    }
    if ((0x1000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__dividend[0U] 
                    ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__dividend[0U]))) {
        ++(vlSymsp->__Vcoverage[6867]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__dividend[0U] 
            = ((0xffffefffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__dividend[0U]) 
               | (0x1000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__dividend[0U]));
    }
    if ((0x2000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__dividend[0U] 
                    ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__dividend[0U]))) {
        ++(vlSymsp->__Vcoverage[6868]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__dividend[0U] 
            = ((0xffffdfffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__dividend[0U]) 
               | (0x2000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__dividend[0U]));
    }
    if ((0x4000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__dividend[0U] 
                    ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__dividend[0U]))) {
        ++(vlSymsp->__Vcoverage[6869]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__dividend[0U] 
            = ((0xffffbfffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__dividend[0U]) 
               | (0x4000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__dividend[0U]));
    }
    if ((0x8000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__dividend[0U] 
                    ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__dividend[0U]))) {
        ++(vlSymsp->__Vcoverage[6870]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__dividend[0U] 
            = ((0xffff7fffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__dividend[0U]) 
               | (0x8000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__dividend[0U]));
    }
    if ((0x10000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__dividend[0U] 
                     ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__dividend[0U]))) {
        ++(vlSymsp->__Vcoverage[6871]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__dividend[0U] 
            = ((0xfffeffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__dividend[0U]) 
               | (0x10000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__dividend[0U]));
    }
    if ((0x20000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__dividend[0U] 
                     ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__dividend[0U]))) {
        ++(vlSymsp->__Vcoverage[6872]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__dividend[0U] 
            = ((0xfffdffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__dividend[0U]) 
               | (0x20000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__dividend[0U]));
    }
    if ((0x40000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__dividend[0U] 
                     ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__dividend[0U]))) {
        ++(vlSymsp->__Vcoverage[6873]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__dividend[0U] 
            = ((0xfffbffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__dividend[0U]) 
               | (0x40000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__dividend[0U]));
    }
    if ((0x80000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__dividend[0U] 
                     ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__dividend[0U]))) {
        ++(vlSymsp->__Vcoverage[6874]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__dividend[0U] 
            = ((0xfff7ffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__dividend[0U]) 
               | (0x80000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__dividend[0U]));
    }
    if ((0x100000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__dividend[0U] 
                      ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__dividend[0U]))) {
        ++(vlSymsp->__Vcoverage[6875]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__dividend[0U] 
            = ((0xffefffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__dividend[0U]) 
               | (0x100000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__dividend[0U]));
    }
    if ((0x200000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__dividend[0U] 
                      ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__dividend[0U]))) {
        ++(vlSymsp->__Vcoverage[6876]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__dividend[0U] 
            = ((0xffdfffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__dividend[0U]) 
               | (0x200000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__dividend[0U]));
    }
    if ((0x400000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__dividend[0U] 
                      ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__dividend[0U]))) {
        ++(vlSymsp->__Vcoverage[6877]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__dividend[0U] 
            = ((0xffbfffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__dividend[0U]) 
               | (0x400000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__dividend[0U]));
    }
    if ((0x800000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__dividend[0U] 
                      ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__dividend[0U]))) {
        ++(vlSymsp->__Vcoverage[6878]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__dividend[0U] 
            = ((0xff7fffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__dividend[0U]) 
               | (0x800000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__dividend[0U]));
    }
    if ((0x1000000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__dividend[0U] 
                       ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__dividend[0U]))) {
        ++(vlSymsp->__Vcoverage[6879]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__dividend[0U] 
            = ((0xfeffffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__dividend[0U]) 
               | (0x1000000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__dividend[0U]));
    }
    if ((0x2000000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__dividend[0U] 
                       ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__dividend[0U]))) {
        ++(vlSymsp->__Vcoverage[6880]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__dividend[0U] 
            = ((0xfdffffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__dividend[0U]) 
               | (0x2000000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__dividend[0U]));
    }
    if ((0x4000000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__dividend[0U] 
                       ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__dividend[0U]))) {
        ++(vlSymsp->__Vcoverage[6881]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__dividend[0U] 
            = ((0xfbffffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__dividend[0U]) 
               | (0x4000000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__dividend[0U]));
    }
    if ((0x8000000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__dividend[0U] 
                       ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__dividend[0U]))) {
        ++(vlSymsp->__Vcoverage[6882]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__dividend[0U] 
            = ((0xf7ffffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__dividend[0U]) 
               | (0x8000000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__dividend[0U]));
    }
    if ((0x10000000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__dividend[0U] 
                        ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__dividend[0U]))) {
        ++(vlSymsp->__Vcoverage[6883]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__dividend[0U] 
            = ((0xefffffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__dividend[0U]) 
               | (0x10000000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__dividend[0U]));
    }
    if ((0x20000000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__dividend[0U] 
                        ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__dividend[0U]))) {
        ++(vlSymsp->__Vcoverage[6884]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__dividend[0U] 
            = ((0xdfffffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__dividend[0U]) 
               | (0x20000000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__dividend[0U]));
    }
    if ((0x40000000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__dividend[0U] 
                        ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__dividend[0U]))) {
        ++(vlSymsp->__Vcoverage[6885]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__dividend[0U] 
            = ((0xbfffffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__dividend[0U]) 
               | (0x40000000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__dividend[0U]));
    }
    if (((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__dividend[0U] 
          ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__dividend[0U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[6886]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__dividend[0U] 
            = ((0x7fffffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__dividend[0U]) 
               | (0x80000000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__dividend[0U]));
    }
    if ((1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__dividend[1U] 
               ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__dividend[1U]))) {
        ++(vlSymsp->__Vcoverage[6887]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__dividend[1U] 
            = ((0xfffffffeU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__dividend[1U]) 
               | (1U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__dividend[1U]));
    }
    if ((2U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__dividend[1U] 
               ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__dividend[1U]))) {
        ++(vlSymsp->__Vcoverage[6888]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__dividend[1U] 
            = ((0xfffffffdU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__dividend[1U]) 
               | (2U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__dividend[1U]));
    }
    if ((4U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__dividend[1U] 
               ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__dividend[1U]))) {
        ++(vlSymsp->__Vcoverage[6889]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__dividend[1U] 
            = ((0xfffffffbU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__dividend[1U]) 
               | (4U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__dividend[1U]));
    }
    if ((8U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__dividend[1U] 
               ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__dividend[1U]))) {
        ++(vlSymsp->__Vcoverage[6890]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__dividend[1U] 
            = ((0xfffffff7U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__dividend[1U]) 
               | (8U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__dividend[1U]));
    }
    if ((0x10U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__dividend[1U] 
                  ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__dividend[1U]))) {
        ++(vlSymsp->__Vcoverage[6891]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__dividend[1U] 
            = ((0xffffffefU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__dividend[1U]) 
               | (0x10U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__dividend[1U]));
    }
    if ((0x20U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__dividend[1U] 
                  ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__dividend[1U]))) {
        ++(vlSymsp->__Vcoverage[6892]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__dividend[1U] 
            = ((0xffffffdfU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__dividend[1U]) 
               | (0x20U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__dividend[1U]));
    }
    if ((0x40U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__dividend[1U] 
                  ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__dividend[1U]))) {
        ++(vlSymsp->__Vcoverage[6893]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__dividend[1U] 
            = ((0xffffffbfU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__dividend[1U]) 
               | (0x40U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__dividend[1U]));
    }
    if ((0x80U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__dividend[1U] 
                  ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__dividend[1U]))) {
        ++(vlSymsp->__Vcoverage[6894]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__dividend[1U] 
            = ((0xffffff7fU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__dividend[1U]) 
               | (0x80U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__dividend[1U]));
    }
    if ((0x100U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__dividend[1U] 
                   ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__dividend[1U]))) {
        ++(vlSymsp->__Vcoverage[6895]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__dividend[1U] 
            = ((0xfffffeffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__dividend[1U]) 
               | (0x100U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__dividend[1U]));
    }
    if ((0x200U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__dividend[1U] 
                   ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__dividend[1U]))) {
        ++(vlSymsp->__Vcoverage[6896]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__dividend[1U] 
            = ((0xfffffdffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__dividend[1U]) 
               | (0x200U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__dividend[1U]));
    }
    if ((0x400U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__dividend[1U] 
                   ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__dividend[1U]))) {
        ++(vlSymsp->__Vcoverage[6897]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__dividend[1U] 
            = ((0xfffffbffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__dividend[1U]) 
               | (0x400U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__dividend[1U]));
    }
    if ((0x800U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__dividend[1U] 
                   ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__dividend[1U]))) {
        ++(vlSymsp->__Vcoverage[6898]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__dividend[1U] 
            = ((0xfffff7ffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__dividend[1U]) 
               | (0x800U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__dividend[1U]));
    }
    if ((0x1000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__dividend[1U] 
                    ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__dividend[1U]))) {
        ++(vlSymsp->__Vcoverage[6899]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__dividend[1U] 
            = ((0xffffefffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__dividend[1U]) 
               | (0x1000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__dividend[1U]));
    }
    if ((0x2000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__dividend[1U] 
                    ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__dividend[1U]))) {
        ++(vlSymsp->__Vcoverage[6900]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__dividend[1U] 
            = ((0xffffdfffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__dividend[1U]) 
               | (0x2000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__dividend[1U]));
    }
    if ((0x4000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__dividend[1U] 
                    ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__dividend[1U]))) {
        ++(vlSymsp->__Vcoverage[6901]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__dividend[1U] 
            = ((0xffffbfffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__dividend[1U]) 
               | (0x4000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__dividend[1U]));
    }
    if ((0x8000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__dividend[1U] 
                    ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__dividend[1U]))) {
        ++(vlSymsp->__Vcoverage[6902]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__dividend[1U] 
            = ((0xffff7fffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__dividend[1U]) 
               | (0x8000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__dividend[1U]));
    }
    if ((0x10000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__dividend[1U] 
                     ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__dividend[1U]))) {
        ++(vlSymsp->__Vcoverage[6903]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__dividend[1U] 
            = ((0xfffeffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__dividend[1U]) 
               | (0x10000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__dividend[1U]));
    }
    if ((0x20000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__dividend[1U] 
                     ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__dividend[1U]))) {
        ++(vlSymsp->__Vcoverage[6904]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__dividend[1U] 
            = ((0xfffdffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__dividend[1U]) 
               | (0x20000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__dividend[1U]));
    }
    if ((0x40000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__dividend[1U] 
                     ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__dividend[1U]))) {
        ++(vlSymsp->__Vcoverage[6905]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__dividend[1U] 
            = ((0xfffbffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__dividend[1U]) 
               | (0x40000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__dividend[1U]));
    }
    if ((0x80000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__dividend[1U] 
                     ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__dividend[1U]))) {
        ++(vlSymsp->__Vcoverage[6906]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__dividend[1U] 
            = ((0xfff7ffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__dividend[1U]) 
               | (0x80000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__dividend[1U]));
    }
    if ((0x100000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__dividend[1U] 
                      ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__dividend[1U]))) {
        ++(vlSymsp->__Vcoverage[6907]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__dividend[1U] 
            = ((0xffefffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__dividend[1U]) 
               | (0x100000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__dividend[1U]));
    }
    if ((0x200000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__dividend[1U] 
                      ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__dividend[1U]))) {
        ++(vlSymsp->__Vcoverage[6908]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__dividend[1U] 
            = ((0xffdfffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__dividend[1U]) 
               | (0x200000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__dividend[1U]));
    }
    if ((0x400000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__dividend[1U] 
                      ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__dividend[1U]))) {
        ++(vlSymsp->__Vcoverage[6909]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__dividend[1U] 
            = ((0xffbfffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__dividend[1U]) 
               | (0x400000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__dividend[1U]));
    }
    if ((0x800000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__dividend[1U] 
                      ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__dividend[1U]))) {
        ++(vlSymsp->__Vcoverage[6910]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__dividend[1U] 
            = ((0xff7fffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__dividend[1U]) 
               | (0x800000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__dividend[1U]));
    }
    if ((0x1000000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__dividend[1U] 
                       ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__dividend[1U]))) {
        ++(vlSymsp->__Vcoverage[6911]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__dividend[1U] 
            = ((0xfeffffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__dividend[1U]) 
               | (0x1000000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__dividend[1U]));
    }
    if ((0x2000000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__dividend[1U] 
                       ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__dividend[1U]))) {
        ++(vlSymsp->__Vcoverage[6912]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__dividend[1U] 
            = ((0xfdffffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__dividend[1U]) 
               | (0x2000000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__dividend[1U]));
    }
    if ((0x4000000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__dividend[1U] 
                       ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__dividend[1U]))) {
        ++(vlSymsp->__Vcoverage[6913]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__dividend[1U] 
            = ((0xfbffffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__dividend[1U]) 
               | (0x4000000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__dividend[1U]));
    }
    if ((0x8000000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__dividend[1U] 
                       ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__dividend[1U]))) {
        ++(vlSymsp->__Vcoverage[6914]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__dividend[1U] 
            = ((0xf7ffffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__dividend[1U]) 
               | (0x8000000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__dividend[1U]));
    }
    if ((0x10000000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__dividend[1U] 
                        ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__dividend[1U]))) {
        ++(vlSymsp->__Vcoverage[6915]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__dividend[1U] 
            = ((0xefffffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__dividend[1U]) 
               | (0x10000000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__dividend[1U]));
    }
    if ((0x20000000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__dividend[1U] 
                        ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__dividend[1U]))) {
        ++(vlSymsp->__Vcoverage[6916]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__dividend[1U] 
            = ((0xdfffffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__dividend[1U]) 
               | (0x20000000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__dividend[1U]));
    }
    if ((0x40000000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__dividend[1U] 
                        ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__dividend[1U]))) {
        ++(vlSymsp->__Vcoverage[6917]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__dividend[1U] 
            = ((0xbfffffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__dividend[1U]) 
               | (0x40000000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__dividend[1U]));
    }
    if (((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__dividend[1U] 
          ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__dividend[1U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[6918]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__dividend[1U] 
            = ((0x7fffffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__dividend[1U]) 
               | (0x80000000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__dividend[1U]));
    }
    if ((1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__dividend[2U] 
               ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__dividend[2U]))) {
        ++(vlSymsp->__Vcoverage[6919]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__dividend[2U] 
            = (1U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__dividend[2U]);
    }
    VL_ADD_W(3, __Vtemp1276, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__divisor, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__dividend);
    __Vtemp1277[0U] = 1U;
    __Vtemp1277[1U] = 0U;
    __Vtemp1277[2U] = 0U;
    __Vtemp1278[0U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[0U]);
    __Vtemp1278[1U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[1U]);
    __Vtemp1278[2U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[2U]);
    VL_ADD_W(3, __Vtemp1279, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__dividend, __Vtemp1278);
    VL_ADD_W(3, __Vtemp1280, __Vtemp1277, __Vtemp1279);
    if ((1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__divisor[2U] 
               ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__dividend[2U]))) {
        __Vtemp1283[0U] = __Vtemp1276[0U];
        __Vtemp1283[1U] = __Vtemp1276[1U];
        __Vtemp1283[2U] = (1U & __Vtemp1276[2U]);
    } else {
        __Vtemp1283[0U] = __Vtemp1280[0U];
        __Vtemp1283[1U] = __Vtemp1280[1U];
        __Vtemp1283[2U] = (1U & __Vtemp1280[2U]);
    }
    VL_EXTEND_WW(66,65, __Vtemp1284, __Vtemp1283);
    __Vtemp1285[0U] = (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[0U] 
                       << 1U);
    __Vtemp1285[1U] = ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[0U] 
                        >> 0x1fU) | (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[1U] 
                                     << 1U));
    __Vtemp1285[2U] = ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[1U] 
                        >> 0x1fU) | (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[2U] 
                                     << 1U));
    VL_EXTEND_WW(66,65, __Vtemp1286, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor);
    VL_ADD_W(3, __Vtemp1287, __Vtemp1285, __Vtemp1286);
    __Vtemp1288[0U] = (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[0U] 
                       << 1U);
    __Vtemp1288[1U] = ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[0U] 
                        >> 0x1fU) | (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[1U] 
                                     << 1U));
    __Vtemp1288[2U] = ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[1U] 
                        >> 0x1fU) | (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[2U] 
                                     << 1U));
    __Vtemp1290[0U] = 1U;
    __Vtemp1290[1U] = 0U;
    __Vtemp1290[2U] = 0U;
    __Vtemp1291[0U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[0U]);
    __Vtemp1291[1U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[1U]);
    __Vtemp1291[2U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[2U]);
    VL_ADD_W(3, __Vtemp1292, __Vtemp1290, __Vtemp1291);
    __Vtemp1293[0U] = __Vtemp1292[0U];
    __Vtemp1293[1U] = __Vtemp1292[1U];
    __Vtemp1293[2U] = (1U & __Vtemp1292[2U]);
    VL_EXTEND_WW(66,65, __Vtemp1294, __Vtemp1293);
    VL_ADD_W(3, __Vtemp1295, __Vtemp1288, __Vtemp1294);
    __Vtemp1299[0U] = 1U;
    __Vtemp1299[1U] = 0U;
    __Vtemp1299[2U] = 0U;
    __Vtemp1300[0U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[0U]);
    __Vtemp1300[1U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[1U]);
    __Vtemp1300[2U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[2U]);
    VL_ADD_W(3, __Vtemp1301, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem, __Vtemp1300);
    VL_ADD_W(3, __Vtemp1302, __Vtemp1299, __Vtemp1301);
    VL_ADD_W(3, __Vtemp1303, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor);
    if ((2U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state))) {
        __Vtemp1310[0U] = ((1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[2U] 
                                  ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[2U]))
                            ? ((1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[2U] 
                                      ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_dividend[2U]))
                                ? __Vtemp1302[0U] : 
                               __Vtemp1303[0U]) : vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[0U]);
        __Vtemp1310[1U] = ((1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[2U] 
                                  ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[2U]))
                            ? ((1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[2U] 
                                      ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_dividend[2U]))
                                ? __Vtemp1302[1U] : 
                               __Vtemp1303[1U]) : vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[1U]);
        __Vtemp1310[2U] = (1U & ((1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[2U] 
                                        ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[2U]))
                                  ? ((1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[2U] 
                                            ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_dividend[2U]))
                                      ? __Vtemp1302[2U]
                                      : __Vtemp1303[2U])
                                  : vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[2U]));
    } else {
        __Vtemp1310[0U] = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[0U];
        __Vtemp1310[1U] = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[1U];
        __Vtemp1310[2U] = (1U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[2U]);
    }
    VL_EXTEND_WW(66,65, __Vtemp1311, __Vtemp1310);
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT___GEN_23[0U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT___GEN_23[1U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT___GEN_23[2U] = 0U;
    } else {
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT___GEN_23[0U] 
            = ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state))
                ? __Vtemp1284[0U] : ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state))
                                      ? ((1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[2U] 
                                                ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[2U]))
                                          ? __Vtemp1287[0U]
                                          : __Vtemp1295[0U])
                                      : __Vtemp1311[0U]));
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT___GEN_23[1U] 
            = ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state))
                ? __Vtemp1284[1U] : ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state))
                                      ? ((1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[2U] 
                                                ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[2U]))
                                          ? __Vtemp1287[1U]
                                          : __Vtemp1295[1U])
                                      : __Vtemp1311[1U]));
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT___GEN_23[2U] 
            = (3U & ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state))
                      ? __Vtemp1284[2U] : ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state))
                                            ? ((1U 
                                                & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[2U] 
                                                   ^ 
                                                   vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[2U]))
                                                ? __Vtemp1287[2U]
                                                : __Vtemp1295[2U])
                                            : __Vtemp1311[2U])));
    }
    if ((1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__divisor[0U] 
               ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__divisor[0U]))) {
        ++(vlSymsp->__Vcoverage[6920]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__divisor[0U] 
            = ((0xfffffffeU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__divisor[0U]) 
               | (1U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__divisor[0U]));
    }
    if ((2U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__divisor[0U] 
               ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__divisor[0U]))) {
        ++(vlSymsp->__Vcoverage[6921]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__divisor[0U] 
            = ((0xfffffffdU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__divisor[0U]) 
               | (2U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__divisor[0U]));
    }
    if ((4U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__divisor[0U] 
               ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__divisor[0U]))) {
        ++(vlSymsp->__Vcoverage[6922]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__divisor[0U] 
            = ((0xfffffffbU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__divisor[0U]) 
               | (4U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__divisor[0U]));
    }
    if ((8U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__divisor[0U] 
               ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__divisor[0U]))) {
        ++(vlSymsp->__Vcoverage[6923]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__divisor[0U] 
            = ((0xfffffff7U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__divisor[0U]) 
               | (8U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__divisor[0U]));
    }
    if ((0x10U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__divisor[0U] 
                  ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__divisor[0U]))) {
        ++(vlSymsp->__Vcoverage[6924]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__divisor[0U] 
            = ((0xffffffefU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__divisor[0U]) 
               | (0x10U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__divisor[0U]));
    }
    if ((0x20U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__divisor[0U] 
                  ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__divisor[0U]))) {
        ++(vlSymsp->__Vcoverage[6925]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__divisor[0U] 
            = ((0xffffffdfU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__divisor[0U]) 
               | (0x20U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__divisor[0U]));
    }
    if ((0x40U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__divisor[0U] 
                  ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__divisor[0U]))) {
        ++(vlSymsp->__Vcoverage[6926]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__divisor[0U] 
            = ((0xffffffbfU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__divisor[0U]) 
               | (0x40U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__divisor[0U]));
    }
    if ((0x80U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__divisor[0U] 
                  ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__divisor[0U]))) {
        ++(vlSymsp->__Vcoverage[6927]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__divisor[0U] 
            = ((0xffffff7fU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__divisor[0U]) 
               | (0x80U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__divisor[0U]));
    }
    if ((0x100U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__divisor[0U] 
                   ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__divisor[0U]))) {
        ++(vlSymsp->__Vcoverage[6928]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__divisor[0U] 
            = ((0xfffffeffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__divisor[0U]) 
               | (0x100U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__divisor[0U]));
    }
    if ((0x200U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__divisor[0U] 
                   ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__divisor[0U]))) {
        ++(vlSymsp->__Vcoverage[6929]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__divisor[0U] 
            = ((0xfffffdffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__divisor[0U]) 
               | (0x200U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__divisor[0U]));
    }
    if ((0x400U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__divisor[0U] 
                   ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__divisor[0U]))) {
        ++(vlSymsp->__Vcoverage[6930]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__divisor[0U] 
            = ((0xfffffbffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__divisor[0U]) 
               | (0x400U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__divisor[0U]));
    }
    if ((0x800U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__divisor[0U] 
                   ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__divisor[0U]))) {
        ++(vlSymsp->__Vcoverage[6931]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__divisor[0U] 
            = ((0xfffff7ffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__divisor[0U]) 
               | (0x800U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__divisor[0U]));
    }
    if ((0x1000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__divisor[0U] 
                    ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__divisor[0U]))) {
        ++(vlSymsp->__Vcoverage[6932]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__divisor[0U] 
            = ((0xffffefffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__divisor[0U]) 
               | (0x1000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__divisor[0U]));
    }
    if ((0x2000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__divisor[0U] 
                    ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__divisor[0U]))) {
        ++(vlSymsp->__Vcoverage[6933]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__divisor[0U] 
            = ((0xffffdfffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__divisor[0U]) 
               | (0x2000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__divisor[0U]));
    }
    if ((0x4000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__divisor[0U] 
                    ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__divisor[0U]))) {
        ++(vlSymsp->__Vcoverage[6934]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__divisor[0U] 
            = ((0xffffbfffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__divisor[0U]) 
               | (0x4000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__divisor[0U]));
    }
    if ((0x8000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__divisor[0U] 
                    ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__divisor[0U]))) {
        ++(vlSymsp->__Vcoverage[6935]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__divisor[0U] 
            = ((0xffff7fffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__divisor[0U]) 
               | (0x8000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__divisor[0U]));
    }
    if ((0x10000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__divisor[0U] 
                     ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__divisor[0U]))) {
        ++(vlSymsp->__Vcoverage[6936]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__divisor[0U] 
            = ((0xfffeffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__divisor[0U]) 
               | (0x10000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__divisor[0U]));
    }
    if ((0x20000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__divisor[0U] 
                     ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__divisor[0U]))) {
        ++(vlSymsp->__Vcoverage[6937]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__divisor[0U] 
            = ((0xfffdffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__divisor[0U]) 
               | (0x20000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__divisor[0U]));
    }
    if ((0x40000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__divisor[0U] 
                     ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__divisor[0U]))) {
        ++(vlSymsp->__Vcoverage[6938]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__divisor[0U] 
            = ((0xfffbffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__divisor[0U]) 
               | (0x40000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__divisor[0U]));
    }
    if ((0x80000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__divisor[0U] 
                     ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__divisor[0U]))) {
        ++(vlSymsp->__Vcoverage[6939]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__divisor[0U] 
            = ((0xfff7ffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__divisor[0U]) 
               | (0x80000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__divisor[0U]));
    }
    if ((0x100000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__divisor[0U] 
                      ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__divisor[0U]))) {
        ++(vlSymsp->__Vcoverage[6940]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__divisor[0U] 
            = ((0xffefffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__divisor[0U]) 
               | (0x100000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__divisor[0U]));
    }
    if ((0x200000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__divisor[0U] 
                      ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__divisor[0U]))) {
        ++(vlSymsp->__Vcoverage[6941]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__divisor[0U] 
            = ((0xffdfffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__divisor[0U]) 
               | (0x200000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__divisor[0U]));
    }
    if ((0x400000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__divisor[0U] 
                      ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__divisor[0U]))) {
        ++(vlSymsp->__Vcoverage[6942]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__divisor[0U] 
            = ((0xffbfffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__divisor[0U]) 
               | (0x400000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__divisor[0U]));
    }
    if ((0x800000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__divisor[0U] 
                      ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__divisor[0U]))) {
        ++(vlSymsp->__Vcoverage[6943]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__divisor[0U] 
            = ((0xff7fffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__divisor[0U]) 
               | (0x800000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__divisor[0U]));
    }
    if ((0x1000000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__divisor[0U] 
                       ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__divisor[0U]))) {
        ++(vlSymsp->__Vcoverage[6944]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__divisor[0U] 
            = ((0xfeffffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__divisor[0U]) 
               | (0x1000000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__divisor[0U]));
    }
    if ((0x2000000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__divisor[0U] 
                       ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__divisor[0U]))) {
        ++(vlSymsp->__Vcoverage[6945]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__divisor[0U] 
            = ((0xfdffffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__divisor[0U]) 
               | (0x2000000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__divisor[0U]));
    }
    if ((0x4000000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__divisor[0U] 
                       ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__divisor[0U]))) {
        ++(vlSymsp->__Vcoverage[6946]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__divisor[0U] 
            = ((0xfbffffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__divisor[0U]) 
               | (0x4000000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__divisor[0U]));
    }
    if ((0x8000000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__divisor[0U] 
                       ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__divisor[0U]))) {
        ++(vlSymsp->__Vcoverage[6947]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__divisor[0U] 
            = ((0xf7ffffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__divisor[0U]) 
               | (0x8000000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__divisor[0U]));
    }
    if ((0x10000000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__divisor[0U] 
                        ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__divisor[0U]))) {
        ++(vlSymsp->__Vcoverage[6948]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__divisor[0U] 
            = ((0xefffffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__divisor[0U]) 
               | (0x10000000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__divisor[0U]));
    }
    if ((0x20000000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__divisor[0U] 
                        ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__divisor[0U]))) {
        ++(vlSymsp->__Vcoverage[6949]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__divisor[0U] 
            = ((0xdfffffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__divisor[0U]) 
               | (0x20000000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__divisor[0U]));
    }
    if ((0x40000000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__divisor[0U] 
                        ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__divisor[0U]))) {
        ++(vlSymsp->__Vcoverage[6950]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__divisor[0U] 
            = ((0xbfffffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__divisor[0U]) 
               | (0x40000000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__divisor[0U]));
    }
    if (((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__divisor[0U] 
          ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__divisor[0U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[6951]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__divisor[0U] 
            = ((0x7fffffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__divisor[0U]) 
               | (0x80000000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__divisor[0U]));
    }
    if ((1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__divisor[1U] 
               ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__divisor[1U]))) {
        ++(vlSymsp->__Vcoverage[6952]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__divisor[1U] 
            = ((0xfffffffeU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__divisor[1U]) 
               | (1U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__divisor[1U]));
    }
    if ((2U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__divisor[1U] 
               ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__divisor[1U]))) {
        ++(vlSymsp->__Vcoverage[6953]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__divisor[1U] 
            = ((0xfffffffdU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__divisor[1U]) 
               | (2U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__divisor[1U]));
    }
    if ((4U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__divisor[1U] 
               ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__divisor[1U]))) {
        ++(vlSymsp->__Vcoverage[6954]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__divisor[1U] 
            = ((0xfffffffbU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__divisor[1U]) 
               | (4U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__divisor[1U]));
    }
    if ((8U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__divisor[1U] 
               ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__divisor[1U]))) {
        ++(vlSymsp->__Vcoverage[6955]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__divisor[1U] 
            = ((0xfffffff7U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__divisor[1U]) 
               | (8U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__divisor[1U]));
    }
    if ((0x10U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__divisor[1U] 
                  ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__divisor[1U]))) {
        ++(vlSymsp->__Vcoverage[6956]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__divisor[1U] 
            = ((0xffffffefU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__divisor[1U]) 
               | (0x10U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__divisor[1U]));
    }
    if ((0x20U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__divisor[1U] 
                  ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__divisor[1U]))) {
        ++(vlSymsp->__Vcoverage[6957]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__divisor[1U] 
            = ((0xffffffdfU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__divisor[1U]) 
               | (0x20U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__divisor[1U]));
    }
    if ((0x40U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__divisor[1U] 
                  ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__divisor[1U]))) {
        ++(vlSymsp->__Vcoverage[6958]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__divisor[1U] 
            = ((0xffffffbfU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__divisor[1U]) 
               | (0x40U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__divisor[1U]));
    }
    if ((0x80U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__divisor[1U] 
                  ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__divisor[1U]))) {
        ++(vlSymsp->__Vcoverage[6959]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__divisor[1U] 
            = ((0xffffff7fU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__divisor[1U]) 
               | (0x80U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__divisor[1U]));
    }
    if ((0x100U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__divisor[1U] 
                   ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__divisor[1U]))) {
        ++(vlSymsp->__Vcoverage[6960]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__divisor[1U] 
            = ((0xfffffeffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__divisor[1U]) 
               | (0x100U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__divisor[1U]));
    }
    if ((0x200U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__divisor[1U] 
                   ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__divisor[1U]))) {
        ++(vlSymsp->__Vcoverage[6961]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__divisor[1U] 
            = ((0xfffffdffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__divisor[1U]) 
               | (0x200U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__divisor[1U]));
    }
    if ((0x400U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__divisor[1U] 
                   ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__divisor[1U]))) {
        ++(vlSymsp->__Vcoverage[6962]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__divisor[1U] 
            = ((0xfffffbffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__divisor[1U]) 
               | (0x400U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__divisor[1U]));
    }
    if ((0x800U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__divisor[1U] 
                   ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__divisor[1U]))) {
        ++(vlSymsp->__Vcoverage[6963]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__divisor[1U] 
            = ((0xfffff7ffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__divisor[1U]) 
               | (0x800U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__divisor[1U]));
    }
    if ((0x1000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__divisor[1U] 
                    ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__divisor[1U]))) {
        ++(vlSymsp->__Vcoverage[6964]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__divisor[1U] 
            = ((0xffffefffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__divisor[1U]) 
               | (0x1000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__divisor[1U]));
    }
    if ((0x2000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__divisor[1U] 
                    ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__divisor[1U]))) {
        ++(vlSymsp->__Vcoverage[6965]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__divisor[1U] 
            = ((0xffffdfffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__divisor[1U]) 
               | (0x2000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__divisor[1U]));
    }
    if ((0x4000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__divisor[1U] 
                    ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__divisor[1U]))) {
        ++(vlSymsp->__Vcoverage[6966]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__divisor[1U] 
            = ((0xffffbfffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__divisor[1U]) 
               | (0x4000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__divisor[1U]));
    }
    if ((0x8000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__divisor[1U] 
                    ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__divisor[1U]))) {
        ++(vlSymsp->__Vcoverage[6967]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__divisor[1U] 
            = ((0xffff7fffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__divisor[1U]) 
               | (0x8000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__divisor[1U]));
    }
    if ((0x10000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__divisor[1U] 
                     ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__divisor[1U]))) {
        ++(vlSymsp->__Vcoverage[6968]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__divisor[1U] 
            = ((0xfffeffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__divisor[1U]) 
               | (0x10000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__divisor[1U]));
    }
    if ((0x20000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__divisor[1U] 
                     ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__divisor[1U]))) {
        ++(vlSymsp->__Vcoverage[6969]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__divisor[1U] 
            = ((0xfffdffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__divisor[1U]) 
               | (0x20000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__divisor[1U]));
    }
    if ((0x40000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__divisor[1U] 
                     ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__divisor[1U]))) {
        ++(vlSymsp->__Vcoverage[6970]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__divisor[1U] 
            = ((0xfffbffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__divisor[1U]) 
               | (0x40000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__divisor[1U]));
    }
    if ((0x80000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__divisor[1U] 
                     ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__divisor[1U]))) {
        ++(vlSymsp->__Vcoverage[6971]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__divisor[1U] 
            = ((0xfff7ffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__divisor[1U]) 
               | (0x80000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__divisor[1U]));
    }
    if ((0x100000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__divisor[1U] 
                      ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__divisor[1U]))) {
        ++(vlSymsp->__Vcoverage[6972]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__divisor[1U] 
            = ((0xffefffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__divisor[1U]) 
               | (0x100000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__divisor[1U]));
    }
    if ((0x200000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__divisor[1U] 
                      ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__divisor[1U]))) {
        ++(vlSymsp->__Vcoverage[6973]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__divisor[1U] 
            = ((0xffdfffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__divisor[1U]) 
               | (0x200000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__divisor[1U]));
    }
    if ((0x400000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__divisor[1U] 
                      ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__divisor[1U]))) {
        ++(vlSymsp->__Vcoverage[6974]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__divisor[1U] 
            = ((0xffbfffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__divisor[1U]) 
               | (0x400000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__divisor[1U]));
    }
    if ((0x800000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__divisor[1U] 
                      ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__divisor[1U]))) {
        ++(vlSymsp->__Vcoverage[6975]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__divisor[1U] 
            = ((0xff7fffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__divisor[1U]) 
               | (0x800000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__divisor[1U]));
    }
    if ((0x1000000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__divisor[1U] 
                       ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__divisor[1U]))) {
        ++(vlSymsp->__Vcoverage[6976]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__divisor[1U] 
            = ((0xfeffffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__divisor[1U]) 
               | (0x1000000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__divisor[1U]));
    }
    if ((0x2000000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__divisor[1U] 
                       ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__divisor[1U]))) {
        ++(vlSymsp->__Vcoverage[6977]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__divisor[1U] 
            = ((0xfdffffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__divisor[1U]) 
               | (0x2000000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__divisor[1U]));
    }
    if ((0x4000000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__divisor[1U] 
                       ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__divisor[1U]))) {
        ++(vlSymsp->__Vcoverage[6978]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__divisor[1U] 
            = ((0xfbffffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__divisor[1U]) 
               | (0x4000000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__divisor[1U]));
    }
    if ((0x8000000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__divisor[1U] 
                       ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__divisor[1U]))) {
        ++(vlSymsp->__Vcoverage[6979]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__divisor[1U] 
            = ((0xf7ffffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__divisor[1U]) 
               | (0x8000000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__divisor[1U]));
    }
    if ((0x10000000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__divisor[1U] 
                        ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__divisor[1U]))) {
        ++(vlSymsp->__Vcoverage[6980]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__divisor[1U] 
            = ((0xefffffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__divisor[1U]) 
               | (0x10000000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__divisor[1U]));
    }
    if ((0x20000000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__divisor[1U] 
                        ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__divisor[1U]))) {
        ++(vlSymsp->__Vcoverage[6981]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__divisor[1U] 
            = ((0xdfffffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__divisor[1U]) 
               | (0x20000000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__divisor[1U]));
    }
    if ((0x40000000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__divisor[1U] 
                        ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__divisor[1U]))) {
        ++(vlSymsp->__Vcoverage[6982]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__divisor[1U] 
            = ((0xbfffffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__divisor[1U]) 
               | (0x40000000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__divisor[1U]));
    }
    if (((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__divisor[1U] 
          ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__divisor[1U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[6983]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__divisor[1U] 
            = ((0x7fffffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__divisor[1U]) 
               | (0x80000000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__divisor[1U]));
    }
    if ((1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__divisor[2U] 
               ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__divisor[2U]))) {
        ++(vlSymsp->__Vcoverage[6984]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__divisor[2U] 
            = (1U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__divisor[2U]);
    }
    VL_EXTEND_WW(70,67, __Vtemp1319, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__temp_mul2);
    __Vtemp1320[0U] = (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[0U] 
                       << 2U);
    __Vtemp1320[1U] = ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[0U] 
                        >> 0x1eU) | (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[1U] 
                                     << 2U));
    __Vtemp1320[2U] = ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[1U] 
                        >> 0x1eU) | (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[2U] 
                                     << 2U));
    VL_EXTEND_WW(70,69, __Vtemp1321, __Vtemp1320);
    VL_EXTEND_WW(70,67, __Vtemp1322, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2);
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT___GEN_23[0U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT___GEN_23[1U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT___GEN_23[2U] = 0U;
    } else {
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT___GEN_23[0U] 
            = ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_state))
                ? __Vtemp1319[0U] : ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_state))
                                      ? __Vtemp1321[0U]
                                      : __Vtemp1322[0U]));
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT___GEN_23[1U] 
            = ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_state))
                ? __Vtemp1319[1U] : ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_state))
                                      ? __Vtemp1321[1U]
                                      : __Vtemp1322[1U]));
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT___GEN_23[2U] 
            = ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_state))
                ? __Vtemp1319[2U] : ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_state))
                                      ? __Vtemp1321[2U]
                                      : __Vtemp1322[2U]));
    }
    if ((1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__temp_mul2[0U] 
               ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__temp_mul2[0U]))) {
        ++(vlSymsp->__Vcoverage[7437]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__temp_mul2[0U] 
            = ((0xfffffffeU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__temp_mul2[0U]) 
               | (1U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__temp_mul2[0U]));
    }
    if ((2U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__temp_mul2[0U] 
               ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__temp_mul2[0U]))) {
        ++(vlSymsp->__Vcoverage[7438]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__temp_mul2[0U] 
            = ((0xfffffffdU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__temp_mul2[0U]) 
               | (2U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__temp_mul2[0U]));
    }
    if ((4U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__temp_mul2[0U] 
               ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__temp_mul2[0U]))) {
        ++(vlSymsp->__Vcoverage[7439]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__temp_mul2[0U] 
            = ((0xfffffffbU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__temp_mul2[0U]) 
               | (4U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__temp_mul2[0U]));
    }
    if ((8U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__temp_mul2[0U] 
               ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__temp_mul2[0U]))) {
        ++(vlSymsp->__Vcoverage[7440]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__temp_mul2[0U] 
            = ((0xfffffff7U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__temp_mul2[0U]) 
               | (8U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__temp_mul2[0U]));
    }
    if ((0x10U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__temp_mul2[0U] 
                  ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__temp_mul2[0U]))) {
        ++(vlSymsp->__Vcoverage[7441]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__temp_mul2[0U] 
            = ((0xffffffefU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__temp_mul2[0U]) 
               | (0x10U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__temp_mul2[0U]));
    }
    if ((0x20U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__temp_mul2[0U] 
                  ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__temp_mul2[0U]))) {
        ++(vlSymsp->__Vcoverage[7442]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__temp_mul2[0U] 
            = ((0xffffffdfU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__temp_mul2[0U]) 
               | (0x20U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__temp_mul2[0U]));
    }
    if ((0x40U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__temp_mul2[0U] 
                  ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__temp_mul2[0U]))) {
        ++(vlSymsp->__Vcoverage[7443]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__temp_mul2[0U] 
            = ((0xffffffbfU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__temp_mul2[0U]) 
               | (0x40U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__temp_mul2[0U]));
    }
    if ((0x80U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__temp_mul2[0U] 
                  ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__temp_mul2[0U]))) {
        ++(vlSymsp->__Vcoverage[7444]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__temp_mul2[0U] 
            = ((0xffffff7fU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__temp_mul2[0U]) 
               | (0x80U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__temp_mul2[0U]));
    }
    if ((0x100U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__temp_mul2[0U] 
                   ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__temp_mul2[0U]))) {
        ++(vlSymsp->__Vcoverage[7445]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__temp_mul2[0U] 
            = ((0xfffffeffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__temp_mul2[0U]) 
               | (0x100U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__temp_mul2[0U]));
    }
    if ((0x200U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__temp_mul2[0U] 
                   ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__temp_mul2[0U]))) {
        ++(vlSymsp->__Vcoverage[7446]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__temp_mul2[0U] 
            = ((0xfffffdffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__temp_mul2[0U]) 
               | (0x200U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__temp_mul2[0U]));
    }
    if ((0x400U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__temp_mul2[0U] 
                   ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__temp_mul2[0U]))) {
        ++(vlSymsp->__Vcoverage[7447]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__temp_mul2[0U] 
            = ((0xfffffbffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__temp_mul2[0U]) 
               | (0x400U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__temp_mul2[0U]));
    }
    if ((0x800U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__temp_mul2[0U] 
                   ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__temp_mul2[0U]))) {
        ++(vlSymsp->__Vcoverage[7448]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__temp_mul2[0U] 
            = ((0xfffff7ffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__temp_mul2[0U]) 
               | (0x800U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__temp_mul2[0U]));
    }
    if ((0x1000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__temp_mul2[0U] 
                    ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__temp_mul2[0U]))) {
        ++(vlSymsp->__Vcoverage[7449]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__temp_mul2[0U] 
            = ((0xffffefffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__temp_mul2[0U]) 
               | (0x1000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__temp_mul2[0U]));
    }
    if ((0x2000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__temp_mul2[0U] 
                    ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__temp_mul2[0U]))) {
        ++(vlSymsp->__Vcoverage[7450]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__temp_mul2[0U] 
            = ((0xffffdfffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__temp_mul2[0U]) 
               | (0x2000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__temp_mul2[0U]));
    }
    if ((0x4000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__temp_mul2[0U] 
                    ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__temp_mul2[0U]))) {
        ++(vlSymsp->__Vcoverage[7451]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__temp_mul2[0U] 
            = ((0xffffbfffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__temp_mul2[0U]) 
               | (0x4000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__temp_mul2[0U]));
    }
    if ((0x8000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__temp_mul2[0U] 
                    ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__temp_mul2[0U]))) {
        ++(vlSymsp->__Vcoverage[7452]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__temp_mul2[0U] 
            = ((0xffff7fffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__temp_mul2[0U]) 
               | (0x8000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__temp_mul2[0U]));
    }
    if ((0x10000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__temp_mul2[0U] 
                     ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__temp_mul2[0U]))) {
        ++(vlSymsp->__Vcoverage[7453]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__temp_mul2[0U] 
            = ((0xfffeffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__temp_mul2[0U]) 
               | (0x10000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__temp_mul2[0U]));
    }
    if ((0x20000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__temp_mul2[0U] 
                     ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__temp_mul2[0U]))) {
        ++(vlSymsp->__Vcoverage[7454]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__temp_mul2[0U] 
            = ((0xfffdffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__temp_mul2[0U]) 
               | (0x20000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__temp_mul2[0U]));
    }
    if ((0x40000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__temp_mul2[0U] 
                     ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__temp_mul2[0U]))) {
        ++(vlSymsp->__Vcoverage[7455]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__temp_mul2[0U] 
            = ((0xfffbffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__temp_mul2[0U]) 
               | (0x40000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__temp_mul2[0U]));
    }
    if ((0x80000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__temp_mul2[0U] 
                     ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__temp_mul2[0U]))) {
        ++(vlSymsp->__Vcoverage[7456]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__temp_mul2[0U] 
            = ((0xfff7ffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__temp_mul2[0U]) 
               | (0x80000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__temp_mul2[0U]));
    }
    if ((0x100000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__temp_mul2[0U] 
                      ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__temp_mul2[0U]))) {
        ++(vlSymsp->__Vcoverage[7457]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__temp_mul2[0U] 
            = ((0xffefffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__temp_mul2[0U]) 
               | (0x100000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__temp_mul2[0U]));
    }
    if ((0x200000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__temp_mul2[0U] 
                      ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__temp_mul2[0U]))) {
        ++(vlSymsp->__Vcoverage[7458]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__temp_mul2[0U] 
            = ((0xffdfffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__temp_mul2[0U]) 
               | (0x200000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__temp_mul2[0U]));
    }
    if ((0x400000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__temp_mul2[0U] 
                      ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__temp_mul2[0U]))) {
        ++(vlSymsp->__Vcoverage[7459]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__temp_mul2[0U] 
            = ((0xffbfffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__temp_mul2[0U]) 
               | (0x400000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__temp_mul2[0U]));
    }
    if ((0x800000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__temp_mul2[0U] 
                      ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__temp_mul2[0U]))) {
        ++(vlSymsp->__Vcoverage[7460]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__temp_mul2[0U] 
            = ((0xff7fffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__temp_mul2[0U]) 
               | (0x800000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__temp_mul2[0U]));
    }
    if ((0x1000000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__temp_mul2[0U] 
                       ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__temp_mul2[0U]))) {
        ++(vlSymsp->__Vcoverage[7461]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__temp_mul2[0U] 
            = ((0xfeffffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__temp_mul2[0U]) 
               | (0x1000000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__temp_mul2[0U]));
    }
    if ((0x2000000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__temp_mul2[0U] 
                       ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__temp_mul2[0U]))) {
        ++(vlSymsp->__Vcoverage[7462]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__temp_mul2[0U] 
            = ((0xfdffffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__temp_mul2[0U]) 
               | (0x2000000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__temp_mul2[0U]));
    }
    if ((0x4000000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__temp_mul2[0U] 
                       ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__temp_mul2[0U]))) {
        ++(vlSymsp->__Vcoverage[7463]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__temp_mul2[0U] 
            = ((0xfbffffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__temp_mul2[0U]) 
               | (0x4000000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__temp_mul2[0U]));
    }
    if ((0x8000000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__temp_mul2[0U] 
                       ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__temp_mul2[0U]))) {
        ++(vlSymsp->__Vcoverage[7464]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__temp_mul2[0U] 
            = ((0xf7ffffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__temp_mul2[0U]) 
               | (0x8000000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__temp_mul2[0U]));
    }
    if ((0x10000000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__temp_mul2[0U] 
                        ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__temp_mul2[0U]))) {
        ++(vlSymsp->__Vcoverage[7465]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__temp_mul2[0U] 
            = ((0xefffffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__temp_mul2[0U]) 
               | (0x10000000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__temp_mul2[0U]));
    }
    if ((0x20000000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__temp_mul2[0U] 
                        ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__temp_mul2[0U]))) {
        ++(vlSymsp->__Vcoverage[7466]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__temp_mul2[0U] 
            = ((0xdfffffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__temp_mul2[0U]) 
               | (0x20000000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__temp_mul2[0U]));
    }
    if ((0x40000000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__temp_mul2[0U] 
                        ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__temp_mul2[0U]))) {
        ++(vlSymsp->__Vcoverage[7467]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__temp_mul2[0U] 
            = ((0xbfffffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__temp_mul2[0U]) 
               | (0x40000000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__temp_mul2[0U]));
    }
    if (((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__temp_mul2[0U] 
          ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__temp_mul2[0U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[7468]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__temp_mul2[0U] 
            = ((0x7fffffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__temp_mul2[0U]) 
               | (0x80000000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__temp_mul2[0U]));
    }
    if ((1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__temp_mul2[1U] 
               ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__temp_mul2[1U]))) {
        ++(vlSymsp->__Vcoverage[7469]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__temp_mul2[1U] 
            = ((0xfffffffeU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__temp_mul2[1U]) 
               | (1U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__temp_mul2[1U]));
    }
    if ((2U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__temp_mul2[1U] 
               ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__temp_mul2[1U]))) {
        ++(vlSymsp->__Vcoverage[7470]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__temp_mul2[1U] 
            = ((0xfffffffdU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__temp_mul2[1U]) 
               | (2U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__temp_mul2[1U]));
    }
    if ((4U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__temp_mul2[1U] 
               ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__temp_mul2[1U]))) {
        ++(vlSymsp->__Vcoverage[7471]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__temp_mul2[1U] 
            = ((0xfffffffbU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__temp_mul2[1U]) 
               | (4U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__temp_mul2[1U]));
    }
    if ((8U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__temp_mul2[1U] 
               ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__temp_mul2[1U]))) {
        ++(vlSymsp->__Vcoverage[7472]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__temp_mul2[1U] 
            = ((0xfffffff7U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__temp_mul2[1U]) 
               | (8U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__temp_mul2[1U]));
    }
    if ((0x10U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__temp_mul2[1U] 
                  ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__temp_mul2[1U]))) {
        ++(vlSymsp->__Vcoverage[7473]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__temp_mul2[1U] 
            = ((0xffffffefU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__temp_mul2[1U]) 
               | (0x10U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__temp_mul2[1U]));
    }
    if ((0x20U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__temp_mul2[1U] 
                  ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__temp_mul2[1U]))) {
        ++(vlSymsp->__Vcoverage[7474]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__temp_mul2[1U] 
            = ((0xffffffdfU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__temp_mul2[1U]) 
               | (0x20U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__temp_mul2[1U]));
    }
    if ((0x40U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__temp_mul2[1U] 
                  ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__temp_mul2[1U]))) {
        ++(vlSymsp->__Vcoverage[7475]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__temp_mul2[1U] 
            = ((0xffffffbfU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__temp_mul2[1U]) 
               | (0x40U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__temp_mul2[1U]));
    }
    if ((0x80U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__temp_mul2[1U] 
                  ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__temp_mul2[1U]))) {
        ++(vlSymsp->__Vcoverage[7476]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__temp_mul2[1U] 
            = ((0xffffff7fU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__temp_mul2[1U]) 
               | (0x80U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__temp_mul2[1U]));
    }
    if ((0x100U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__temp_mul2[1U] 
                   ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__temp_mul2[1U]))) {
        ++(vlSymsp->__Vcoverage[7477]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__temp_mul2[1U] 
            = ((0xfffffeffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__temp_mul2[1U]) 
               | (0x100U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__temp_mul2[1U]));
    }
    if ((0x200U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__temp_mul2[1U] 
                   ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__temp_mul2[1U]))) {
        ++(vlSymsp->__Vcoverage[7478]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__temp_mul2[1U] 
            = ((0xfffffdffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__temp_mul2[1U]) 
               | (0x200U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__temp_mul2[1U]));
    }
    if ((0x400U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__temp_mul2[1U] 
                   ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__temp_mul2[1U]))) {
        ++(vlSymsp->__Vcoverage[7479]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__temp_mul2[1U] 
            = ((0xfffffbffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__temp_mul2[1U]) 
               | (0x400U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__temp_mul2[1U]));
    }
    if ((0x800U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__temp_mul2[1U] 
                   ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__temp_mul2[1U]))) {
        ++(vlSymsp->__Vcoverage[7480]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__temp_mul2[1U] 
            = ((0xfffff7ffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__temp_mul2[1U]) 
               | (0x800U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__temp_mul2[1U]));
    }
    if ((0x1000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__temp_mul2[1U] 
                    ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__temp_mul2[1U]))) {
        ++(vlSymsp->__Vcoverage[7481]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__temp_mul2[1U] 
            = ((0xffffefffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__temp_mul2[1U]) 
               | (0x1000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__temp_mul2[1U]));
    }
    if ((0x2000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__temp_mul2[1U] 
                    ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__temp_mul2[1U]))) {
        ++(vlSymsp->__Vcoverage[7482]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__temp_mul2[1U] 
            = ((0xffffdfffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__temp_mul2[1U]) 
               | (0x2000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__temp_mul2[1U]));
    }
    if ((0x4000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__temp_mul2[1U] 
                    ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__temp_mul2[1U]))) {
        ++(vlSymsp->__Vcoverage[7483]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__temp_mul2[1U] 
            = ((0xffffbfffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__temp_mul2[1U]) 
               | (0x4000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__temp_mul2[1U]));
    }
    if ((0x8000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__temp_mul2[1U] 
                    ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__temp_mul2[1U]))) {
        ++(vlSymsp->__Vcoverage[7484]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__temp_mul2[1U] 
            = ((0xffff7fffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__temp_mul2[1U]) 
               | (0x8000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__temp_mul2[1U]));
    }
    if ((0x10000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__temp_mul2[1U] 
                     ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__temp_mul2[1U]))) {
        ++(vlSymsp->__Vcoverage[7485]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__temp_mul2[1U] 
            = ((0xfffeffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__temp_mul2[1U]) 
               | (0x10000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__temp_mul2[1U]));
    }
    if ((0x20000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__temp_mul2[1U] 
                     ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__temp_mul2[1U]))) {
        ++(vlSymsp->__Vcoverage[7486]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__temp_mul2[1U] 
            = ((0xfffdffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__temp_mul2[1U]) 
               | (0x20000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__temp_mul2[1U]));
    }
    if ((0x40000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__temp_mul2[1U] 
                     ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__temp_mul2[1U]))) {
        ++(vlSymsp->__Vcoverage[7487]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__temp_mul2[1U] 
            = ((0xfffbffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__temp_mul2[1U]) 
               | (0x40000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__temp_mul2[1U]));
    }
    if ((0x80000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__temp_mul2[1U] 
                     ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__temp_mul2[1U]))) {
        ++(vlSymsp->__Vcoverage[7488]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__temp_mul2[1U] 
            = ((0xfff7ffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__temp_mul2[1U]) 
               | (0x80000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__temp_mul2[1U]));
    }
    if ((0x100000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__temp_mul2[1U] 
                      ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__temp_mul2[1U]))) {
        ++(vlSymsp->__Vcoverage[7489]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__temp_mul2[1U] 
            = ((0xffefffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__temp_mul2[1U]) 
               | (0x100000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__temp_mul2[1U]));
    }
    if ((0x200000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__temp_mul2[1U] 
                      ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__temp_mul2[1U]))) {
        ++(vlSymsp->__Vcoverage[7490]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__temp_mul2[1U] 
            = ((0xffdfffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__temp_mul2[1U]) 
               | (0x200000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__temp_mul2[1U]));
    }
    if ((0x400000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__temp_mul2[1U] 
                      ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__temp_mul2[1U]))) {
        ++(vlSymsp->__Vcoverage[7491]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__temp_mul2[1U] 
            = ((0xffbfffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__temp_mul2[1U]) 
               | (0x400000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__temp_mul2[1U]));
    }
    if ((0x800000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__temp_mul2[1U] 
                      ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__temp_mul2[1U]))) {
        ++(vlSymsp->__Vcoverage[7492]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__temp_mul2[1U] 
            = ((0xff7fffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__temp_mul2[1U]) 
               | (0x800000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__temp_mul2[1U]));
    }
    if ((0x1000000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__temp_mul2[1U] 
                       ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__temp_mul2[1U]))) {
        ++(vlSymsp->__Vcoverage[7493]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__temp_mul2[1U] 
            = ((0xfeffffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__temp_mul2[1U]) 
               | (0x1000000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__temp_mul2[1U]));
    }
    if ((0x2000000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__temp_mul2[1U] 
                       ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__temp_mul2[1U]))) {
        ++(vlSymsp->__Vcoverage[7494]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__temp_mul2[1U] 
            = ((0xfdffffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__temp_mul2[1U]) 
               | (0x2000000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__temp_mul2[1U]));
    }
    if ((0x4000000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__temp_mul2[1U] 
                       ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__temp_mul2[1U]))) {
        ++(vlSymsp->__Vcoverage[7495]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__temp_mul2[1U] 
            = ((0xfbffffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__temp_mul2[1U]) 
               | (0x4000000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__temp_mul2[1U]));
    }
    if ((0x8000000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__temp_mul2[1U] 
                       ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__temp_mul2[1U]))) {
        ++(vlSymsp->__Vcoverage[7496]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__temp_mul2[1U] 
            = ((0xf7ffffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__temp_mul2[1U]) 
               | (0x8000000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__temp_mul2[1U]));
    }
    if ((0x10000000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__temp_mul2[1U] 
                        ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__temp_mul2[1U]))) {
        ++(vlSymsp->__Vcoverage[7497]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__temp_mul2[1U] 
            = ((0xefffffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__temp_mul2[1U]) 
               | (0x10000000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__temp_mul2[1U]));
    }
    if ((0x20000000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__temp_mul2[1U] 
                        ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__temp_mul2[1U]))) {
        ++(vlSymsp->__Vcoverage[7498]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__temp_mul2[1U] 
            = ((0xdfffffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__temp_mul2[1U]) 
               | (0x20000000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__temp_mul2[1U]));
    }
    if ((0x40000000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__temp_mul2[1U] 
                        ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__temp_mul2[1U]))) {
        ++(vlSymsp->__Vcoverage[7499]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__temp_mul2[1U] 
            = ((0xbfffffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__temp_mul2[1U]) 
               | (0x40000000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__temp_mul2[1U]));
    }
    if (((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__temp_mul2[1U] 
          ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__temp_mul2[1U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[7500]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__temp_mul2[1U] 
            = ((0x7fffffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__temp_mul2[1U]) 
               | (0x80000000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__temp_mul2[1U]));
    }
    if ((1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__temp_mul2[2U] 
               ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__temp_mul2[2U]))) {
        ++(vlSymsp->__Vcoverage[7501]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__temp_mul2[2U] 
            = ((6U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__temp_mul2[2U]) 
               | (1U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__temp_mul2[2U]));
    }
    if ((2U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__temp_mul2[2U] 
               ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__temp_mul2[2U]))) {
        ++(vlSymsp->__Vcoverage[7502]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__temp_mul2[2U] 
            = ((5U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__temp_mul2[2U]) 
               | (2U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__temp_mul2[2U]));
    }
    if ((4U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__temp_mul2[2U] 
               ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__temp_mul2[2U]))) {
        ++(vlSymsp->__Vcoverage[7503]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__temp_mul2[2U] 
            = ((3U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__temp_mul2[2U]) 
               | (4U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__temp_mul2[2U]));
    }
    if (((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__s_rs1_l_rs2) 
         ^ (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__s_rs1_l_rs2))) {
        ++(vlSymsp->__Vcoverage[6464]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__s_rs1_l_rs2 
            = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__s_rs1_l_rs2;
    }
    __Vtemp1335[0U] = 1U;
    __Vtemp1335[1U] = 0U;
    __Vtemp1335[2U] = 0U;
    VL_ADD_W(3, __Vtemp1336, __Vtemp1335, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___subresult_T_2);
    __Vtemp1346[0U] = 1U;
    __Vtemp1346[1U] = 0U;
    __Vtemp1346[2U] = 0U;
    VL_ADD_W(3, __Vtemp1347, __Vtemp1346, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___subresult_T_2);
    __Vtemp1372[1U] = ((0x35U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_out_exuType))
                        ? ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu_io_rs1_data 
                            == vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu_io_rs2_data)
                            ? 0U : (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___temp_result_data_T_5 
                                            >> 0x20U)))
                        : ((0x39U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_out_exuType))
                            ? ((1U & __Vtemp1336[2U])
                                ? 0U : (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___temp_result_data_T_5 
                                                >> 0x20U)))
                            : ((0x38U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_out_exuType))
                                ? ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__s_rs1_l_rs2)
                                    ? (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___temp_result_data_T_5 
                                               >> 0x20U))
                                    : 0U) : ((0x37U 
                                              == (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_out_exuType))
                                              ? ((1U 
                                                  & __Vtemp1347[2U])
                                                  ? (IData)(
                                                            (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___temp_result_data_T_5 
                                                             >> 0x20U))
                                                  : 0U)
                                              : ((0x36U 
                                                  == (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_out_exuType))
                                                  ? 
                                                 ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__s_rs1_l_rs2)
                                                   ? 0U
                                                   : (IData)(
                                                             (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___temp_result_data_T_5 
                                                              >> 0x20U)))
                                                  : 
                                                 ((0x34U 
                                                   == (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_out_exuType))
                                                   ? 
                                                  ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu_io_rs1_data 
                                                    == vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu_io_rs2_data)
                                                    ? (IData)(
                                                              (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___temp_result_data_T_5 
                                                               >> 0x20U))
                                                    : 0U)
                                                   : 0U))))));
    __Vtemp1374[0U] = ((0x3eU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_out_exuType))
                        ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___temp_result_data_T_5)
                        : ((0x35U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_out_exuType))
                            ? ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu_io_rs1_data 
                                == vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu_io_rs2_data)
                                ? 0U : (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___temp_result_data_T_5))
                            : ((0x39U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_out_exuType))
                                ? ((1U & __Vtemp1336[2U])
                                    ? 0U : (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___temp_result_data_T_5))
                                : ((0x38U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_out_exuType))
                                    ? ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__s_rs1_l_rs2)
                                        ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___temp_result_data_T_5)
                                        : 0U) : ((0x37U 
                                                  == (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_out_exuType))
                                                  ? 
                                                 ((1U 
                                                   & __Vtemp1347[2U])
                                                   ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___temp_result_data_T_5)
                                                   : 0U)
                                                  : 
                                                 ((0x36U 
                                                   == (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_out_exuType))
                                                   ? 
                                                  ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__s_rs1_l_rs2)
                                                    ? 0U
                                                    : (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___temp_result_data_T_5))
                                                   : 
                                                  ((0x34U 
                                                    == (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_out_exuType))
                                                    ? 
                                                   ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu_io_rs1_data 
                                                     == vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu_io_rs2_data)
                                                     ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___temp_result_data_T_5)
                                                     : 0U)
                                                    : 0U)))))));
    if ((0x3fU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_out_exuType))) {
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[0U] 
            = (IData)((0xfffffffffffffffeULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___next_pc3_T_1));
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[1U] 
            = (IData)(((0xfffffffffffffffeULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___next_pc3_T_1) 
                       >> 0x20U));
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[2U] = 1U;
    } else {
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[0U] 
            = __Vtemp1374[0U];
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[1U] 
            = ((0x3eU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_out_exuType))
                ? (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___temp_result_data_T_5 
                           >> 0x20U)) : __Vtemp1372[1U]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[2U] 
            = ((0x3eU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_out_exuType))
                ? 1U : ((0x35U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_out_exuType))
                         ? ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu_io_rs1_data 
                             == vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu_io_rs2_data)
                             ? 0U : 1U) : ((0x39U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_out_exuType))
                                            ? ((1U 
                                                & __Vtemp1336[2U])
                                                ? 0U
                                                : 1U)
                                            : ((0x38U 
                                                == (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_out_exuType))
                                                ? ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__s_rs1_l_rs2)
                                                    ? 1U
                                                    : 0U)
                                                : (
                                                   (0x37U 
                                                    == (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_out_exuType))
                                                    ? 
                                                   ((1U 
                                                     & __Vtemp1347[2U])
                                                     ? 1U
                                                     : 0U)
                                                    : 
                                                   ((0x36U 
                                                     == (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_out_exuType))
                                                     ? 
                                                    ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__s_rs1_l_rs2)
                                                      ? 0U
                                                      : 1U)
                                                     : 
                                                    ((0x34U 
                                                      == (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_out_exuType))
                                                      ? 
                                                     ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu_io_rs1_data 
                                                       == vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu_io_rs2_data)
                                                       ? 1U
                                                       : 0U)
                                                      : 0U)))))));
    }
    __Vtemp1378[0U] = 1U;
    __Vtemp1378[1U] = 0U;
    __Vtemp1378[2U] = 0U;
    VL_ADD_W(3, __Vtemp1379, __Vtemp1378, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___subresult_T_2);
    __Vtemp1381[0U] = (IData)(((__Vtemp1379[0U] >> 0x1fU)
                                ? (0xffffffff00000000ULL 
                                   | (QData)((IData)(
                                                     ((IData)(1U) 
                                                      + 
                                                      vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___subresult_T_2[0U]))))
                                : (QData)((IData)(((IData)(1U) 
                                                   + 
                                                   vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___subresult_T_2[0U])))));
    __Vtemp1381[1U] = (IData)((((__Vtemp1379[0U] >> 0x1fU)
                                 ? (0xffffffff00000000ULL 
                                    | (QData)((IData)(
                                                      ((IData)(1U) 
                                                       + 
                                                       vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___subresult_T_2[0U]))))
                                 : (QData)((IData)(
                                                   ((IData)(1U) 
                                                    + 
                                                    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___subresult_T_2[0U])))) 
                               >> 0x20U));
    __Vtemp1381[2U] = 1U;
    VL_EXTEND_WW(66,65, __Vtemp1382, __Vtemp1381);
    __Vtemp1384[0U] = 1U;
    __Vtemp1384[1U] = 0U;
    __Vtemp1384[2U] = 0U;
    VL_ADD_W(3, __Vtemp1385, __Vtemp1384, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___subresult_T_2);
    __Vtemp1389[0U] = 1U;
    __Vtemp1389[1U] = 0U;
    __Vtemp1389[2U] = 0U;
    VL_ADD_W(3, __Vtemp1390, __Vtemp1389, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___subresult_T_2);
    if ((4U == (0xfU & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_out_exuType) 
                        >> 2U)))) {
        __Vtemp1407[0U] = (1U & (~ (1U & __Vtemp1390[2U])));
        __Vtemp1407[1U] = 0U;
        __Vtemp1407[2U] = 1U;
    } else {
        __Vtemp1407[0U] = ((3U == (0xfU & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_out_exuType) 
                                           >> 2U)))
                            ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__s_rs1_l_rs2)
                            : ((2U == (0xfU & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_out_exuType) 
                                               >> 2U)))
                                ? (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu_io_rs1_data 
                                           & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__rs2_data))
                                : ((1U == (0xfU & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_out_exuType) 
                                                   >> 2U)))
                                    ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___temp_result_data_T_5)
                                    : ((0xbU == (0xfU 
                                                 & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_out_exuType) 
                                                    >> 2U)))
                                        ? (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu_io_rs1_data 
                                                   + vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__rs2_data))
                                        : 0U))));
        __Vtemp1407[1U] = ((3U == (0xfU & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_out_exuType) 
                                           >> 2U)))
                            ? 0U : ((2U == (0xfU & 
                                            ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_out_exuType) 
                                             >> 2U)))
                                     ? (IData)(((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu_io_rs1_data 
                                                 & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__rs2_data) 
                                                >> 0x20U))
                                     : ((1U == (0xfU 
                                                & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_out_exuType) 
                                                   >> 2U)))
                                         ? (IData)(
                                                   (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___temp_result_data_T_5 
                                                    >> 0x20U))
                                         : ((0xbU == 
                                             (0xfU 
                                              & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_out_exuType) 
                                                 >> 2U)))
                                             ? (IData)(
                                                       ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu_io_rs1_data 
                                                         + vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__rs2_data) 
                                                        >> 0x20U))
                                             : 0U))));
        __Vtemp1407[2U] = ((3U == (0xfU & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_out_exuType) 
                                           >> 2U)))
                            ? 1U : ((2U == (0xfU & 
                                            ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_out_exuType) 
                                             >> 2U)))
                                     ? 1U : ((1U == 
                                              (0xfU 
                                               & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_out_exuType) 
                                                  >> 2U)))
                                              ? 1U : 
                                             ((0xbU 
                                               == (0xfU 
                                                   & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_out_exuType) 
                                                      >> 2U)))
                                               ? 1U
                                               : 0U))));
    }
    VL_EXTEND_WW(66,65, __Vtemp1408, __Vtemp1407);
    if ((5U == (0xfU & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_out_exuType) 
                        >> 2U)))) {
        riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___temp_result_data_T_72[0U] 
            = __Vtemp1382[0U];
        riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___temp_result_data_T_72[1U] 
            = __Vtemp1382[1U];
        riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___temp_result_data_T_72[2U] 
            = __Vtemp1382[2U];
    } else {
        riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___temp_result_data_T_72[0U] 
            = ((5U == (0xfU & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_out_exuType) 
                               >> 2U))) ? __Vtemp1385[0U]
                : __Vtemp1408[0U]);
        riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___temp_result_data_T_72[1U] 
            = ((5U == (0xfU & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_out_exuType) 
                               >> 2U))) ? __Vtemp1385[1U]
                : __Vtemp1408[1U]);
        riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___temp_result_data_T_72[2U] 
            = ((5U == (0xfU & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_out_exuType) 
                               >> 2U))) ? (2U | (1U 
                                                 & __Vtemp1385[2U]))
                : __Vtemp1408[2U]);
    }
    if ((1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__srlw_temp 
               ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__srlw_temp))) {
        ++(vlSymsp->__Vcoverage[6528]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__srlw_temp 
            = ((0xfffffffeU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__srlw_temp) 
               | (1U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__srlw_temp));
    }
    if ((2U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__srlw_temp 
               ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__srlw_temp))) {
        ++(vlSymsp->__Vcoverage[6529]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__srlw_temp 
            = ((0xfffffffdU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__srlw_temp) 
               | (2U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__srlw_temp));
    }
    if ((4U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__srlw_temp 
               ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__srlw_temp))) {
        ++(vlSymsp->__Vcoverage[6530]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__srlw_temp 
            = ((0xfffffffbU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__srlw_temp) 
               | (4U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__srlw_temp));
    }
    if ((8U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__srlw_temp 
               ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__srlw_temp))) {
        ++(vlSymsp->__Vcoverage[6531]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__srlw_temp 
            = ((0xfffffff7U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__srlw_temp) 
               | (8U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__srlw_temp));
    }
    if ((0x10U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__srlw_temp 
                  ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__srlw_temp))) {
        ++(vlSymsp->__Vcoverage[6532]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__srlw_temp 
            = ((0xffffffefU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__srlw_temp) 
               | (0x10U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__srlw_temp));
    }
    if ((0x20U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__srlw_temp 
                  ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__srlw_temp))) {
        ++(vlSymsp->__Vcoverage[6533]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__srlw_temp 
            = ((0xffffffdfU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__srlw_temp) 
               | (0x20U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__srlw_temp));
    }
    if ((0x40U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__srlw_temp 
                  ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__srlw_temp))) {
        ++(vlSymsp->__Vcoverage[6534]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__srlw_temp 
            = ((0xffffffbfU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__srlw_temp) 
               | (0x40U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__srlw_temp));
    }
    if ((0x80U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__srlw_temp 
                  ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__srlw_temp))) {
        ++(vlSymsp->__Vcoverage[6535]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__srlw_temp 
            = ((0xffffff7fU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__srlw_temp) 
               | (0x80U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__srlw_temp));
    }
    if ((0x100U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__srlw_temp 
                   ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__srlw_temp))) {
        ++(vlSymsp->__Vcoverage[6536]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__srlw_temp 
            = ((0xfffffeffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__srlw_temp) 
               | (0x100U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__srlw_temp));
    }
    if ((0x200U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__srlw_temp 
                   ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__srlw_temp))) {
        ++(vlSymsp->__Vcoverage[6537]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__srlw_temp 
            = ((0xfffffdffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__srlw_temp) 
               | (0x200U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__srlw_temp));
    }
    if ((0x400U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__srlw_temp 
                   ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__srlw_temp))) {
        ++(vlSymsp->__Vcoverage[6538]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__srlw_temp 
            = ((0xfffffbffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__srlw_temp) 
               | (0x400U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__srlw_temp));
    }
    if ((0x800U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__srlw_temp 
                   ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__srlw_temp))) {
        ++(vlSymsp->__Vcoverage[6539]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__srlw_temp 
            = ((0xfffff7ffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__srlw_temp) 
               | (0x800U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__srlw_temp));
    }
    if ((0x1000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__srlw_temp 
                    ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__srlw_temp))) {
        ++(vlSymsp->__Vcoverage[6540]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__srlw_temp 
            = ((0xffffefffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__srlw_temp) 
               | (0x1000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__srlw_temp));
    }
    if ((0x2000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__srlw_temp 
                    ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__srlw_temp))) {
        ++(vlSymsp->__Vcoverage[6541]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__srlw_temp 
            = ((0xffffdfffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__srlw_temp) 
               | (0x2000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__srlw_temp));
    }
    if ((0x4000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__srlw_temp 
                    ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__srlw_temp))) {
        ++(vlSymsp->__Vcoverage[6542]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__srlw_temp 
            = ((0xffffbfffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__srlw_temp) 
               | (0x4000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__srlw_temp));
    }
    if ((0x8000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__srlw_temp 
                    ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__srlw_temp))) {
        ++(vlSymsp->__Vcoverage[6543]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__srlw_temp 
            = ((0xffff7fffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__srlw_temp) 
               | (0x8000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__srlw_temp));
    }
    if ((0x10000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__srlw_temp 
                     ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__srlw_temp))) {
        ++(vlSymsp->__Vcoverage[6544]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__srlw_temp 
            = ((0xfffeffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__srlw_temp) 
               | (0x10000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__srlw_temp));
    }
    if ((0x20000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__srlw_temp 
                     ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__srlw_temp))) {
        ++(vlSymsp->__Vcoverage[6545]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__srlw_temp 
            = ((0xfffdffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__srlw_temp) 
               | (0x20000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__srlw_temp));
    }
    if ((0x40000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__srlw_temp 
                     ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__srlw_temp))) {
        ++(vlSymsp->__Vcoverage[6546]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__srlw_temp 
            = ((0xfffbffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__srlw_temp) 
               | (0x40000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__srlw_temp));
    }
    if ((0x80000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__srlw_temp 
                     ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__srlw_temp))) {
        ++(vlSymsp->__Vcoverage[6547]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__srlw_temp 
            = ((0xfff7ffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__srlw_temp) 
               | (0x80000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__srlw_temp));
    }
    if ((0x100000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__srlw_temp 
                      ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__srlw_temp))) {
        ++(vlSymsp->__Vcoverage[6548]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__srlw_temp 
            = ((0xffefffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__srlw_temp) 
               | (0x100000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__srlw_temp));
    }
    if ((0x200000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__srlw_temp 
                      ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__srlw_temp))) {
        ++(vlSymsp->__Vcoverage[6549]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__srlw_temp 
            = ((0xffdfffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__srlw_temp) 
               | (0x200000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__srlw_temp));
    }
    if ((0x400000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__srlw_temp 
                      ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__srlw_temp))) {
        ++(vlSymsp->__Vcoverage[6550]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__srlw_temp 
            = ((0xffbfffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__srlw_temp) 
               | (0x400000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__srlw_temp));
    }
    if ((0x800000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__srlw_temp 
                      ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__srlw_temp))) {
        ++(vlSymsp->__Vcoverage[6551]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__srlw_temp 
            = ((0xff7fffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__srlw_temp) 
               | (0x800000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__srlw_temp));
    }
    if ((0x1000000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__srlw_temp 
                       ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__srlw_temp))) {
        ++(vlSymsp->__Vcoverage[6552]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__srlw_temp 
            = ((0xfeffffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__srlw_temp) 
               | (0x1000000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__srlw_temp));
    }
    if ((0x2000000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__srlw_temp 
                       ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__srlw_temp))) {
        ++(vlSymsp->__Vcoverage[6553]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__srlw_temp 
            = ((0xfdffffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__srlw_temp) 
               | (0x2000000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__srlw_temp));
    }
    if ((0x4000000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__srlw_temp 
                       ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__srlw_temp))) {
        ++(vlSymsp->__Vcoverage[6554]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__srlw_temp 
            = ((0xfbffffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__srlw_temp) 
               | (0x4000000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__srlw_temp));
    }
    if ((0x8000000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__srlw_temp 
                       ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__srlw_temp))) {
        ++(vlSymsp->__Vcoverage[6555]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__srlw_temp 
            = ((0xf7ffffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__srlw_temp) 
               | (0x8000000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__srlw_temp));
    }
    if ((0x10000000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__srlw_temp 
                        ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__srlw_temp))) {
        ++(vlSymsp->__Vcoverage[6556]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__srlw_temp 
            = ((0xefffffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__srlw_temp) 
               | (0x10000000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__srlw_temp));
    }
    if ((0x20000000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__srlw_temp 
                        ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__srlw_temp))) {
        ++(vlSymsp->__Vcoverage[6557]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__srlw_temp 
            = ((0xdfffffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__srlw_temp) 
               | (0x20000000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__srlw_temp));
    }
    if ((0x40000000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__srlw_temp 
                        ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__srlw_temp))) {
        ++(vlSymsp->__Vcoverage[6558]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__srlw_temp 
            = ((0xbfffffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__srlw_temp) 
               | (0x40000000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__srlw_temp));
    }
    if (((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__srlw_temp 
          ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__srlw_temp) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[6559]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__srlw_temp 
            = ((0x7fffffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__srlw_temp) 
               | (0x80000000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__srlw_temp));
    }
    if ((1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sraw_temp 
               ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sraw_temp))) {
        ++(vlSymsp->__Vcoverage[6560]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sraw_temp 
            = ((0xfffffffeU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sraw_temp) 
               | (1U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sraw_temp));
    }
    if ((2U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sraw_temp 
               ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sraw_temp))) {
        ++(vlSymsp->__Vcoverage[6561]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sraw_temp 
            = ((0xfffffffdU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sraw_temp) 
               | (2U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sraw_temp));
    }
    if ((4U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sraw_temp 
               ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sraw_temp))) {
        ++(vlSymsp->__Vcoverage[6562]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sraw_temp 
            = ((0xfffffffbU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sraw_temp) 
               | (4U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sraw_temp));
    }
    if ((8U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sraw_temp 
               ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sraw_temp))) {
        ++(vlSymsp->__Vcoverage[6563]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sraw_temp 
            = ((0xfffffff7U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sraw_temp) 
               | (8U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sraw_temp));
    }
    if ((0x10U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sraw_temp 
                  ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sraw_temp))) {
        ++(vlSymsp->__Vcoverage[6564]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sraw_temp 
            = ((0xffffffefU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sraw_temp) 
               | (0x10U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sraw_temp));
    }
    if ((0x20U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sraw_temp 
                  ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sraw_temp))) {
        ++(vlSymsp->__Vcoverage[6565]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sraw_temp 
            = ((0xffffffdfU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sraw_temp) 
               | (0x20U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sraw_temp));
    }
    if ((0x40U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sraw_temp 
                  ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sraw_temp))) {
        ++(vlSymsp->__Vcoverage[6566]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sraw_temp 
            = ((0xffffffbfU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sraw_temp) 
               | (0x40U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sraw_temp));
    }
    if ((0x80U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sraw_temp 
                  ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sraw_temp))) {
        ++(vlSymsp->__Vcoverage[6567]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sraw_temp 
            = ((0xffffff7fU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sraw_temp) 
               | (0x80U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sraw_temp));
    }
    if ((0x100U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sraw_temp 
                   ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sraw_temp))) {
        ++(vlSymsp->__Vcoverage[6568]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sraw_temp 
            = ((0xfffffeffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sraw_temp) 
               | (0x100U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sraw_temp));
    }
    if ((0x200U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sraw_temp 
                   ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sraw_temp))) {
        ++(vlSymsp->__Vcoverage[6569]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sraw_temp 
            = ((0xfffffdffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sraw_temp) 
               | (0x200U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sraw_temp));
    }
    if ((0x400U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sraw_temp 
                   ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sraw_temp))) {
        ++(vlSymsp->__Vcoverage[6570]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sraw_temp 
            = ((0xfffffbffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sraw_temp) 
               | (0x400U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sraw_temp));
    }
    if ((0x800U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sraw_temp 
                   ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sraw_temp))) {
        ++(vlSymsp->__Vcoverage[6571]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sraw_temp 
            = ((0xfffff7ffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sraw_temp) 
               | (0x800U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sraw_temp));
    }
    if ((0x1000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sraw_temp 
                    ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sraw_temp))) {
        ++(vlSymsp->__Vcoverage[6572]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sraw_temp 
            = ((0xffffefffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sraw_temp) 
               | (0x1000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sraw_temp));
    }
    if ((0x2000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sraw_temp 
                    ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sraw_temp))) {
        ++(vlSymsp->__Vcoverage[6573]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sraw_temp 
            = ((0xffffdfffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sraw_temp) 
               | (0x2000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sraw_temp));
    }
    if ((0x4000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sraw_temp 
                    ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sraw_temp))) {
        ++(vlSymsp->__Vcoverage[6574]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sraw_temp 
            = ((0xffffbfffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sraw_temp) 
               | (0x4000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sraw_temp));
    }
    if ((0x8000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sraw_temp 
                    ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sraw_temp))) {
        ++(vlSymsp->__Vcoverage[6575]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sraw_temp 
            = ((0xffff7fffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sraw_temp) 
               | (0x8000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sraw_temp));
    }
    if ((0x10000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sraw_temp 
                     ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sraw_temp))) {
        ++(vlSymsp->__Vcoverage[6576]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sraw_temp 
            = ((0xfffeffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sraw_temp) 
               | (0x10000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sraw_temp));
    }
    if ((0x20000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sraw_temp 
                     ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sraw_temp))) {
        ++(vlSymsp->__Vcoverage[6577]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sraw_temp 
            = ((0xfffdffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sraw_temp) 
               | (0x20000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sraw_temp));
    }
    if ((0x40000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sraw_temp 
                     ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sraw_temp))) {
        ++(vlSymsp->__Vcoverage[6578]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sraw_temp 
            = ((0xfffbffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sraw_temp) 
               | (0x40000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sraw_temp));
    }
    if ((0x80000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sraw_temp 
                     ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sraw_temp))) {
        ++(vlSymsp->__Vcoverage[6579]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sraw_temp 
            = ((0xfff7ffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sraw_temp) 
               | (0x80000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sraw_temp));
    }
    if ((0x100000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sraw_temp 
                      ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sraw_temp))) {
        ++(vlSymsp->__Vcoverage[6580]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sraw_temp 
            = ((0xffefffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sraw_temp) 
               | (0x100000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sraw_temp));
    }
    if ((0x200000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sraw_temp 
                      ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sraw_temp))) {
        ++(vlSymsp->__Vcoverage[6581]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sraw_temp 
            = ((0xffdfffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sraw_temp) 
               | (0x200000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sraw_temp));
    }
    if ((0x400000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sraw_temp 
                      ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sraw_temp))) {
        ++(vlSymsp->__Vcoverage[6582]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sraw_temp 
            = ((0xffbfffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sraw_temp) 
               | (0x400000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sraw_temp));
    }
    if ((0x800000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sraw_temp 
                      ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sraw_temp))) {
        ++(vlSymsp->__Vcoverage[6583]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sraw_temp 
            = ((0xff7fffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sraw_temp) 
               | (0x800000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sraw_temp));
    }
    if ((0x1000000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sraw_temp 
                       ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sraw_temp))) {
        ++(vlSymsp->__Vcoverage[6584]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sraw_temp 
            = ((0xfeffffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sraw_temp) 
               | (0x1000000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sraw_temp));
    }
    if ((0x2000000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sraw_temp 
                       ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sraw_temp))) {
        ++(vlSymsp->__Vcoverage[6585]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sraw_temp 
            = ((0xfdffffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sraw_temp) 
               | (0x2000000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sraw_temp));
    }
    if ((0x4000000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sraw_temp 
                       ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sraw_temp))) {
        ++(vlSymsp->__Vcoverage[6586]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sraw_temp 
            = ((0xfbffffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sraw_temp) 
               | (0x4000000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sraw_temp));
    }
    if ((0x8000000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sraw_temp 
                       ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sraw_temp))) {
        ++(vlSymsp->__Vcoverage[6587]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sraw_temp 
            = ((0xf7ffffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sraw_temp) 
               | (0x8000000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sraw_temp));
    }
    if ((0x10000000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sraw_temp 
                        ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sraw_temp))) {
        ++(vlSymsp->__Vcoverage[6588]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sraw_temp 
            = ((0xefffffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sraw_temp) 
               | (0x10000000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sraw_temp));
    }
    if ((0x20000000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sraw_temp 
                        ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sraw_temp))) {
        ++(vlSymsp->__Vcoverage[6589]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sraw_temp 
            = ((0xdfffffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sraw_temp) 
               | (0x20000000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sraw_temp));
    }
    if ((0x40000000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sraw_temp 
                        ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sraw_temp))) {
        ++(vlSymsp->__Vcoverage[6590]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sraw_temp 
            = ((0xbfffffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sraw_temp) 
               | (0x40000000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sraw_temp));
    }
    if (((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sraw_temp 
          ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sraw_temp) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[6591]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sraw_temp 
            = ((0x7fffffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sraw_temp) 
               | (0x80000000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sraw_temp));
    }
    if ((1U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sllw_temp) 
               ^ (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp)))) {
        ++(vlSymsp->__Vcoverage[6465]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp 
            = ((0x7ffffffffffffffeULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp) 
               | (IData)((IData)((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sllw_temp)))));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sllw_temp 
                        >> 1U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp 
                                           >> 1U))))) {
        ++(vlSymsp->__Vcoverage[6466]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp 
            = ((0x7ffffffffffffffdULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sllw_temp 
                                                 >> 1U))))) 
                  << 1U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sllw_temp 
                        >> 2U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp 
                                           >> 2U))))) {
        ++(vlSymsp->__Vcoverage[6467]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp 
            = ((0x7ffffffffffffffbULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sllw_temp 
                                                 >> 2U))))) 
                  << 2U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sllw_temp 
                        >> 3U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp 
                                           >> 3U))))) {
        ++(vlSymsp->__Vcoverage[6468]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp 
            = ((0x7ffffffffffffff7ULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sllw_temp 
                                                 >> 3U))))) 
                  << 3U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sllw_temp 
                        >> 4U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp 
                                           >> 4U))))) {
        ++(vlSymsp->__Vcoverage[6469]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp 
            = ((0x7fffffffffffffefULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sllw_temp 
                                                 >> 4U))))) 
                  << 4U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sllw_temp 
                        >> 5U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp 
                                           >> 5U))))) {
        ++(vlSymsp->__Vcoverage[6470]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp 
            = ((0x7fffffffffffffdfULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sllw_temp 
                                                 >> 5U))))) 
                  << 5U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sllw_temp 
                        >> 6U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp 
                                           >> 6U))))) {
        ++(vlSymsp->__Vcoverage[6471]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp 
            = ((0x7fffffffffffffbfULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sllw_temp 
                                                 >> 6U))))) 
                  << 6U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sllw_temp 
                        >> 7U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp 
                                           >> 7U))))) {
        ++(vlSymsp->__Vcoverage[6472]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp 
            = ((0x7fffffffffffff7fULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sllw_temp 
                                                 >> 7U))))) 
                  << 7U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sllw_temp 
                        >> 8U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp 
                                           >> 8U))))) {
        ++(vlSymsp->__Vcoverage[6473]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp 
            = ((0x7ffffffffffffeffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sllw_temp 
                                                 >> 8U))))) 
                  << 8U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sllw_temp 
                        >> 9U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp 
                                           >> 9U))))) {
        ++(vlSymsp->__Vcoverage[6474]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp 
            = ((0x7ffffffffffffdffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sllw_temp 
                                                 >> 9U))))) 
                  << 9U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sllw_temp 
                        >> 0xaU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp 
                                             >> 0xaU))))) {
        ++(vlSymsp->__Vcoverage[6475]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp 
            = ((0x7ffffffffffffbffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sllw_temp 
                                                 >> 0xaU))))) 
                  << 0xaU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sllw_temp 
                        >> 0xbU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp 
                                             >> 0xbU))))) {
        ++(vlSymsp->__Vcoverage[6476]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp 
            = ((0x7ffffffffffff7ffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sllw_temp 
                                                 >> 0xbU))))) 
                  << 0xbU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sllw_temp 
                        >> 0xcU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp 
                                             >> 0xcU))))) {
        ++(vlSymsp->__Vcoverage[6477]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp 
            = ((0x7fffffffffffefffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sllw_temp 
                                                 >> 0xcU))))) 
                  << 0xcU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sllw_temp 
                        >> 0xdU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp 
                                             >> 0xdU))))) {
        ++(vlSymsp->__Vcoverage[6478]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp 
            = ((0x7fffffffffffdfffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sllw_temp 
                                                 >> 0xdU))))) 
                  << 0xdU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sllw_temp 
                        >> 0xeU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp 
                                             >> 0xeU))))) {
        ++(vlSymsp->__Vcoverage[6479]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp 
            = ((0x7fffffffffffbfffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sllw_temp 
                                                 >> 0xeU))))) 
                  << 0xeU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sllw_temp 
                        >> 0xfU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp 
                                             >> 0xfU))))) {
        ++(vlSymsp->__Vcoverage[6480]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp 
            = ((0x7fffffffffff7fffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sllw_temp 
                                                 >> 0xfU))))) 
                  << 0xfU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sllw_temp 
                        >> 0x10U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp 
                                              >> 0x10U))))) {
        ++(vlSymsp->__Vcoverage[6481]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp 
            = ((0x7ffffffffffeffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sllw_temp 
                                                 >> 0x10U))))) 
                  << 0x10U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sllw_temp 
                        >> 0x11U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp 
                                              >> 0x11U))))) {
        ++(vlSymsp->__Vcoverage[6482]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp 
            = ((0x7ffffffffffdffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sllw_temp 
                                                 >> 0x11U))))) 
                  << 0x11U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sllw_temp 
                        >> 0x12U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp 
                                              >> 0x12U))))) {
        ++(vlSymsp->__Vcoverage[6483]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp 
            = ((0x7ffffffffffbffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sllw_temp 
                                                 >> 0x12U))))) 
                  << 0x12U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sllw_temp 
                        >> 0x13U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp 
                                              >> 0x13U))))) {
        ++(vlSymsp->__Vcoverage[6484]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp 
            = ((0x7ffffffffff7ffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sllw_temp 
                                                 >> 0x13U))))) 
                  << 0x13U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sllw_temp 
                        >> 0x14U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp 
                                              >> 0x14U))))) {
        ++(vlSymsp->__Vcoverage[6485]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp 
            = ((0x7fffffffffefffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sllw_temp 
                                                 >> 0x14U))))) 
                  << 0x14U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sllw_temp 
                        >> 0x15U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp 
                                              >> 0x15U))))) {
        ++(vlSymsp->__Vcoverage[6486]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp 
            = ((0x7fffffffffdfffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sllw_temp 
                                                 >> 0x15U))))) 
                  << 0x15U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sllw_temp 
                        >> 0x16U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp 
                                              >> 0x16U))))) {
        ++(vlSymsp->__Vcoverage[6487]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp 
            = ((0x7fffffffffbfffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sllw_temp 
                                                 >> 0x16U))))) 
                  << 0x16U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sllw_temp 
                        >> 0x17U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp 
                                              >> 0x17U))))) {
        ++(vlSymsp->__Vcoverage[6488]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp 
            = ((0x7fffffffff7fffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sllw_temp 
                                                 >> 0x17U))))) 
                  << 0x17U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sllw_temp 
                        >> 0x18U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp 
                                              >> 0x18U))))) {
        ++(vlSymsp->__Vcoverage[6489]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp 
            = ((0x7ffffffffeffffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sllw_temp 
                                                 >> 0x18U))))) 
                  << 0x18U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sllw_temp 
                        >> 0x19U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp 
                                              >> 0x19U))))) {
        ++(vlSymsp->__Vcoverage[6490]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp 
            = ((0x7ffffffffdffffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sllw_temp 
                                                 >> 0x19U))))) 
                  << 0x19U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sllw_temp 
                        >> 0x1aU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp 
                                              >> 0x1aU))))) {
        ++(vlSymsp->__Vcoverage[6491]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp 
            = ((0x7ffffffffbffffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sllw_temp 
                                                 >> 0x1aU))))) 
                  << 0x1aU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sllw_temp 
                        >> 0x1bU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp 
                                              >> 0x1bU))))) {
        ++(vlSymsp->__Vcoverage[6492]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp 
            = ((0x7ffffffff7ffffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sllw_temp 
                                                 >> 0x1bU))))) 
                  << 0x1bU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sllw_temp 
                        >> 0x1cU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp 
                                              >> 0x1cU))))) {
        ++(vlSymsp->__Vcoverage[6493]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp 
            = ((0x7fffffffefffffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sllw_temp 
                                                 >> 0x1cU))))) 
                  << 0x1cU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sllw_temp 
                        >> 0x1dU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp 
                                              >> 0x1dU))))) {
        ++(vlSymsp->__Vcoverage[6494]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp 
            = ((0x7fffffffdfffffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sllw_temp 
                                                 >> 0x1dU))))) 
                  << 0x1dU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sllw_temp 
                        >> 0x1eU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp 
                                              >> 0x1eU))))) {
        ++(vlSymsp->__Vcoverage[6495]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp 
            = ((0x7fffffffbfffffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sllw_temp 
                                                 >> 0x1eU))))) 
                  << 0x1eU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sllw_temp 
                        >> 0x1fU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp 
                                              >> 0x1fU))))) {
        ++(vlSymsp->__Vcoverage[6496]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp 
            = ((0x7fffffff7fffffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sllw_temp 
                                                 >> 0x1fU))))) 
                  << 0x1fU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sllw_temp 
                        >> 0x20U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp 
                                              >> 0x20U))))) {
        ++(vlSymsp->__Vcoverage[6497]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp 
            = ((0x7ffffffeffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sllw_temp 
                                                 >> 0x20U))))) 
                  << 0x20U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sllw_temp 
                        >> 0x21U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp 
                                              >> 0x21U))))) {
        ++(vlSymsp->__Vcoverage[6498]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp 
            = ((0x7ffffffdffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sllw_temp 
                                                 >> 0x21U))))) 
                  << 0x21U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sllw_temp 
                        >> 0x22U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp 
                                              >> 0x22U))))) {
        ++(vlSymsp->__Vcoverage[6499]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp 
            = ((0x7ffffffbffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sllw_temp 
                                                 >> 0x22U))))) 
                  << 0x22U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sllw_temp 
                        >> 0x23U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp 
                                              >> 0x23U))))) {
        ++(vlSymsp->__Vcoverage[6500]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp 
            = ((0x7ffffff7ffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sllw_temp 
                                                 >> 0x23U))))) 
                  << 0x23U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sllw_temp 
                        >> 0x24U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp 
                                              >> 0x24U))))) {
        ++(vlSymsp->__Vcoverage[6501]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp 
            = ((0x7fffffefffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sllw_temp 
                                                 >> 0x24U))))) 
                  << 0x24U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sllw_temp 
                        >> 0x25U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp 
                                              >> 0x25U))))) {
        ++(vlSymsp->__Vcoverage[6502]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp 
            = ((0x7fffffdfffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sllw_temp 
                                                 >> 0x25U))))) 
                  << 0x25U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sllw_temp 
                        >> 0x26U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp 
                                              >> 0x26U))))) {
        ++(vlSymsp->__Vcoverage[6503]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp 
            = ((0x7fffffbfffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sllw_temp 
                                                 >> 0x26U))))) 
                  << 0x26U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sllw_temp 
                        >> 0x27U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp 
                                              >> 0x27U))))) {
        ++(vlSymsp->__Vcoverage[6504]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp 
            = ((0x7fffff7fffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sllw_temp 
                                                 >> 0x27U))))) 
                  << 0x27U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sllw_temp 
                        >> 0x28U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp 
                                              >> 0x28U))))) {
        ++(vlSymsp->__Vcoverage[6505]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp 
            = ((0x7ffffeffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sllw_temp 
                                                 >> 0x28U))))) 
                  << 0x28U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sllw_temp 
                        >> 0x29U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp 
                                              >> 0x29U))))) {
        ++(vlSymsp->__Vcoverage[6506]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp 
            = ((0x7ffffdffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sllw_temp 
                                                 >> 0x29U))))) 
                  << 0x29U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sllw_temp 
                        >> 0x2aU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp 
                                              >> 0x2aU))))) {
        ++(vlSymsp->__Vcoverage[6507]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp 
            = ((0x7ffffbffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sllw_temp 
                                                 >> 0x2aU))))) 
                  << 0x2aU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sllw_temp 
                        >> 0x2bU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp 
                                              >> 0x2bU))))) {
        ++(vlSymsp->__Vcoverage[6508]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp 
            = ((0x7ffff7ffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sllw_temp 
                                                 >> 0x2bU))))) 
                  << 0x2bU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sllw_temp 
                        >> 0x2cU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp 
                                              >> 0x2cU))))) {
        ++(vlSymsp->__Vcoverage[6509]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp 
            = ((0x7fffefffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sllw_temp 
                                                 >> 0x2cU))))) 
                  << 0x2cU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sllw_temp 
                        >> 0x2dU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp 
                                              >> 0x2dU))))) {
        ++(vlSymsp->__Vcoverage[6510]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp 
            = ((0x7fffdfffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sllw_temp 
                                                 >> 0x2dU))))) 
                  << 0x2dU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sllw_temp 
                        >> 0x2eU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp 
                                              >> 0x2eU))))) {
        ++(vlSymsp->__Vcoverage[6511]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp 
            = ((0x7fffbfffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sllw_temp 
                                                 >> 0x2eU))))) 
                  << 0x2eU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sllw_temp 
                        >> 0x2fU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp 
                                              >> 0x2fU))))) {
        ++(vlSymsp->__Vcoverage[6512]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp 
            = ((0x7fff7fffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sllw_temp 
                                                 >> 0x2fU))))) 
                  << 0x2fU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sllw_temp 
                        >> 0x30U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp 
                                              >> 0x30U))))) {
        ++(vlSymsp->__Vcoverage[6513]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp 
            = ((0x7ffeffffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sllw_temp 
                                                 >> 0x30U))))) 
                  << 0x30U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sllw_temp 
                        >> 0x31U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp 
                                              >> 0x31U))))) {
        ++(vlSymsp->__Vcoverage[6514]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp 
            = ((0x7ffdffffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sllw_temp 
                                                 >> 0x31U))))) 
                  << 0x31U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sllw_temp 
                        >> 0x32U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp 
                                              >> 0x32U))))) {
        ++(vlSymsp->__Vcoverage[6515]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp 
            = ((0x7ffbffffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sllw_temp 
                                                 >> 0x32U))))) 
                  << 0x32U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sllw_temp 
                        >> 0x33U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp 
                                              >> 0x33U))))) {
        ++(vlSymsp->__Vcoverage[6516]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp 
            = ((0x7ff7ffffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sllw_temp 
                                                 >> 0x33U))))) 
                  << 0x33U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sllw_temp 
                        >> 0x34U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp 
                                              >> 0x34U))))) {
        ++(vlSymsp->__Vcoverage[6517]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp 
            = ((0x7fefffffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sllw_temp 
                                                 >> 0x34U))))) 
                  << 0x34U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sllw_temp 
                        >> 0x35U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp 
                                              >> 0x35U))))) {
        ++(vlSymsp->__Vcoverage[6518]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp 
            = ((0x7fdfffffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sllw_temp 
                                                 >> 0x35U))))) 
                  << 0x35U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sllw_temp 
                        >> 0x36U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp 
                                              >> 0x36U))))) {
        ++(vlSymsp->__Vcoverage[6519]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp 
            = ((0x7fbfffffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sllw_temp 
                                                 >> 0x36U))))) 
                  << 0x36U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sllw_temp 
                        >> 0x37U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp 
                                              >> 0x37U))))) {
        ++(vlSymsp->__Vcoverage[6520]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp 
            = ((0x7f7fffffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sllw_temp 
                                                 >> 0x37U))))) 
                  << 0x37U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sllw_temp 
                        >> 0x38U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp 
                                              >> 0x38U))))) {
        ++(vlSymsp->__Vcoverage[6521]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp 
            = ((0x7effffffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sllw_temp 
                                                 >> 0x38U))))) 
                  << 0x38U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sllw_temp 
                        >> 0x39U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp 
                                              >> 0x39U))))) {
        ++(vlSymsp->__Vcoverage[6522]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp 
            = ((0x7dffffffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sllw_temp 
                                                 >> 0x39U))))) 
                  << 0x39U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sllw_temp 
                        >> 0x3aU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp 
                                              >> 0x3aU))))) {
        ++(vlSymsp->__Vcoverage[6523]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp 
            = ((0x7bffffffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sllw_temp 
                                                 >> 0x3aU))))) 
                  << 0x3aU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sllw_temp 
                        >> 0x3bU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp 
                                              >> 0x3bU))))) {
        ++(vlSymsp->__Vcoverage[6524]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp 
            = ((0x77ffffffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sllw_temp 
                                                 >> 0x3bU))))) 
                  << 0x3bU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sllw_temp 
                        >> 0x3cU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp 
                                              >> 0x3cU))))) {
        ++(vlSymsp->__Vcoverage[6525]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp 
            = ((0x6fffffffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sllw_temp 
                                                 >> 0x3cU))))) 
                  << 0x3cU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sllw_temp 
                        >> 0x3dU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp 
                                              >> 0x3dU))))) {
        ++(vlSymsp->__Vcoverage[6526]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp 
            = ((0x5fffffffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sllw_temp 
                                                 >> 0x3dU))))) 
                  << 0x3dU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sllw_temp 
                        >> 0x3eU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp 
                                              >> 0x3eU))))) {
        ++(vlSymsp->__Vcoverage[6527]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp 
            = ((0x3fffffffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__sllw_temp) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sllw_temp 
                                                 >> 0x3eU))))) 
                  << 0x3eU));
    }
    if ((0x5063U == (0x707fU & vlSelf->riscv_soc__DOT__core__DOT__fetch_io_out_inst))) {
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT___T_195 = 4U;
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT___T_262 = 0x36U;
        riscv_soc__DOT__core__DOT__decode__DOT___T_329 = 7U;
    } else {
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT___T_195 
            = ((0x7063U == (0x707fU & vlSelf->riscv_soc__DOT__core__DOT__fetch_io_out_inst))
                ? 4U : ((0x4063U == (0x707fU & vlSelf->riscv_soc__DOT__core__DOT__fetch_io_out_inst))
                         ? 4U : ((0x6063U == (0x707fU 
                                              & vlSelf->riscv_soc__DOT__core__DOT__fetch_io_out_inst))
                                  ? 4U : ((0x1063U 
                                           == (0x707fU 
                                               & vlSelf->riscv_soc__DOT__core__DOT__fetch_io_out_inst))
                                           ? 4U : (
                                                   (0x3073U 
                                                    == 
                                                    (0x707fU 
                                                     & vlSelf->riscv_soc__DOT__core__DOT__fetch_io_out_inst))
                                                    ? 2U
                                                    : 
                                                   ((0x7073U 
                                                     == 
                                                     (0x707fU 
                                                      & vlSelf->riscv_soc__DOT__core__DOT__fetch_io_out_inst))
                                                     ? 2U
                                                     : 
                                                    ((0x2073U 
                                                      == 
                                                      (0x707fU 
                                                       & vlSelf->riscv_soc__DOT__core__DOT__fetch_io_out_inst))
                                                      ? 2U
                                                      : 
                                                     ((0x6073U 
                                                       == 
                                                       (0x707fU 
                                                        & vlSelf->riscv_soc__DOT__core__DOT__fetch_io_out_inst))
                                                       ? 2U
                                                       : 
                                                      ((0x1073U 
                                                        == 
                                                        (0x707fU 
                                                         & vlSelf->riscv_soc__DOT__core__DOT__fetch_io_out_inst))
                                                        ? 2U
                                                        : 
                                                       ((0x5073U 
                                                         == 
                                                         (0x707fU 
                                                          & vlSelf->riscv_soc__DOT__core__DOT__fetch_io_out_inst))
                                                         ? 2U
                                                         : 
                                                        ((0x3003U 
                                                          == 
                                                          (0x707fU 
                                                           & vlSelf->riscv_soc__DOT__core__DOT__fetch_io_out_inst))
                                                          ? 1U
                                                          : 
                                                         ((3U 
                                                           == 
                                                           (0x707fU 
                                                            & vlSelf->riscv_soc__DOT__core__DOT__fetch_io_out_inst))
                                                           ? 1U
                                                           : 
                                                          ((0x4003U 
                                                            == 
                                                            (0x707fU 
                                                             & vlSelf->riscv_soc__DOT__core__DOT__fetch_io_out_inst))
                                                            ? 1U
                                                            : 
                                                           ((0x1003U 
                                                             == 
                                                             (0x707fU 
                                                              & vlSelf->riscv_soc__DOT__core__DOT__fetch_io_out_inst))
                                                             ? 1U
                                                             : (IData)(riscv_soc__DOT__core__DOT__decode__DOT___T_180)))))))))))))));
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT___T_262 
            = ((0x7063U == (0x707fU & vlSelf->riscv_soc__DOT__core__DOT__fetch_io_out_inst))
                ? 0x37U : ((0x4063U == (0x707fU & vlSelf->riscv_soc__DOT__core__DOT__fetch_io_out_inst))
                            ? 0x38U : ((0x6063U == 
                                        (0x707fU & vlSelf->riscv_soc__DOT__core__DOT__fetch_io_out_inst))
                                        ? 0x39U : (
                                                   (0x1063U 
                                                    == 
                                                    (0x707fU 
                                                     & vlSelf->riscv_soc__DOT__core__DOT__fetch_io_out_inst))
                                                    ? 0x35U
                                                    : 
                                                   ((0x3073U 
                                                     == 
                                                     (0x707fU 
                                                      & vlSelf->riscv_soc__DOT__core__DOT__fetch_io_out_inst))
                                                     ? 6U
                                                     : 
                                                    ((0x7073U 
                                                      == 
                                                      (0x707fU 
                                                       & vlSelf->riscv_soc__DOT__core__DOT__fetch_io_out_inst))
                                                      ? 7U
                                                      : 
                                                     ((0x2073U 
                                                       == 
                                                       (0x707fU 
                                                        & vlSelf->riscv_soc__DOT__core__DOT__fetch_io_out_inst))
                                                       ? 2U
                                                       : 
                                                      ((0x6073U 
                                                        == 
                                                        (0x707fU 
                                                         & vlSelf->riscv_soc__DOT__core__DOT__fetch_io_out_inst))
                                                        ? 3U
                                                        : 
                                                       ((0x1073U 
                                                         == 
                                                         (0x707fU 
                                                          & vlSelf->riscv_soc__DOT__core__DOT__fetch_io_out_inst))
                                                         ? 4U
                                                         : 
                                                        ((0x5073U 
                                                          == 
                                                          (0x707fU 
                                                           & vlSelf->riscv_soc__DOT__core__DOT__fetch_io_out_inst))
                                                          ? 5U
                                                          : 
                                                         ((0x3003U 
                                                           == 
                                                           (0x707fU 
                                                            & vlSelf->riscv_soc__DOT__core__DOT__fetch_io_out_inst))
                                                           ? 0xcU
                                                           : 
                                                          ((3U 
                                                            == 
                                                            (0x707fU 
                                                             & vlSelf->riscv_soc__DOT__core__DOT__fetch_io_out_inst))
                                                            ? 1U
                                                            : 
                                                           ((0x4003U 
                                                             == 
                                                             (0x707fU 
                                                              & vlSelf->riscv_soc__DOT__core__DOT__fetch_io_out_inst))
                                                             ? 2U
                                                             : 
                                                            ((0x1003U 
                                                              == 
                                                              (0x707fU 
                                                               & vlSelf->riscv_soc__DOT__core__DOT__fetch_io_out_inst))
                                                              ? 3U
                                                              : (IData)(riscv_soc__DOT__core__DOT__decode__DOT___T_247)))))))))))))));
        riscv_soc__DOT__core__DOT__decode__DOT___T_329 
            = ((0x7063U == (0x707fU & vlSelf->riscv_soc__DOT__core__DOT__fetch_io_out_inst))
                ? 7U : ((0x4063U == (0x707fU & vlSelf->riscv_soc__DOT__core__DOT__fetch_io_out_inst))
                         ? 7U : ((0x6063U == (0x707fU 
                                              & vlSelf->riscv_soc__DOT__core__DOT__fetch_io_out_inst))
                                  ? 7U : ((0x1063U 
                                           == (0x707fU 
                                               & vlSelf->riscv_soc__DOT__core__DOT__fetch_io_out_inst))
                                           ? 7U : (
                                                   (0x3073U 
                                                    == 
                                                    (0x707fU 
                                                     & vlSelf->riscv_soc__DOT__core__DOT__fetch_io_out_inst))
                                                    ? 5U
                                                    : 
                                                   ((0x7073U 
                                                     == 
                                                     (0x707fU 
                                                      & vlSelf->riscv_soc__DOT__core__DOT__fetch_io_out_inst))
                                                     ? 5U
                                                     : 
                                                    ((0x2073U 
                                                      == 
                                                      (0x707fU 
                                                       & vlSelf->riscv_soc__DOT__core__DOT__fetch_io_out_inst))
                                                      ? 5U
                                                      : 
                                                     ((0x6073U 
                                                       == 
                                                       (0x707fU 
                                                        & vlSelf->riscv_soc__DOT__core__DOT__fetch_io_out_inst))
                                                       ? 5U
                                                       : 
                                                      ((0x1073U 
                                                        == 
                                                        (0x707fU 
                                                         & vlSelf->riscv_soc__DOT__core__DOT__fetch_io_out_inst))
                                                        ? 5U
                                                        : 
                                                       ((0x5073U 
                                                         == 
                                                         (0x707fU 
                                                          & vlSelf->riscv_soc__DOT__core__DOT__fetch_io_out_inst))
                                                         ? 5U
                                                         : 
                                                        ((0x3003U 
                                                          == 
                                                          (0x707fU 
                                                           & vlSelf->riscv_soc__DOT__core__DOT__fetch_io_out_inst))
                                                          ? 0xcU
                                                          : 
                                                         ((3U 
                                                           == 
                                                           (0x707fU 
                                                            & vlSelf->riscv_soc__DOT__core__DOT__fetch_io_out_inst))
                                                           ? 0xcU
                                                           : 
                                                          ((0x4003U 
                                                            == 
                                                            (0x707fU 
                                                             & vlSelf->riscv_soc__DOT__core__DOT__fetch_io_out_inst))
                                                            ? 0xcU
                                                            : 
                                                           ((0x1003U 
                                                             == 
                                                             (0x707fU 
                                                              & vlSelf->riscv_soc__DOT__core__DOT__fetch_io_out_inst))
                                                             ? 0xcU
                                                             : (IData)(riscv_soc__DOT__core__DOT__decode__DOT___T_314)))))))))))))));
    }
    if ((1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[2U] 
               ^ (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_next_pc_valid)))) {
        ++(vlSymsp->__Vcoverage[6005]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_next_pc_valid 
            = (1U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[2U]);
    }
    if ((1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[2U] 
               ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_pc[2U]))) {
        ++(vlSymsp->__Vcoverage[6720]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_pc[2U] 
            = (1U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[2U]);
    }
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT___GEN_13 
        = (1U & ((~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_flush)) 
                 & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__stall)
                     ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_flush)
                     : vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[2U])));
    if ((1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[0U] 
               ^ (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_pc)))) {
        ++(vlSymsp->__Vcoverage[5941]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_pc 
            = ((0xfffffffffffffffeULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_pc) 
               | (IData)((IData)((1U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[0U]))));
    }
    if ((1U & ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[0U] 
                >> 1U) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_pc 
                                  >> 1U))))) {
        ++(vlSymsp->__Vcoverage[5942]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_pc 
            = ((0xfffffffffffffffdULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_pc) 
               | ((QData)((IData)((1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[0U] 
                                         >> 1U)))) 
                  << 1U));
    }
    if ((1U & ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[0U] 
                >> 2U) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_pc 
                                  >> 2U))))) {
        ++(vlSymsp->__Vcoverage[5943]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_pc 
            = ((0xfffffffffffffffbULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_pc) 
               | ((QData)((IData)((1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[0U] 
                                         >> 2U)))) 
                  << 2U));
    }
    if ((1U & ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[0U] 
                >> 3U) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_pc 
                                  >> 3U))))) {
        ++(vlSymsp->__Vcoverage[5944]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_pc 
            = ((0xfffffffffffffff7ULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_pc) 
               | ((QData)((IData)((1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[0U] 
                                         >> 3U)))) 
                  << 3U));
    }
    if ((1U & ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[0U] 
                >> 4U) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_pc 
                                  >> 4U))))) {
        ++(vlSymsp->__Vcoverage[5945]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_pc 
            = ((0xffffffffffffffefULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_pc) 
               | ((QData)((IData)((1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[0U] 
                                         >> 4U)))) 
                  << 4U));
    }
    if ((1U & ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[0U] 
                >> 5U) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_pc 
                                  >> 5U))))) {
        ++(vlSymsp->__Vcoverage[5946]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_pc 
            = ((0xffffffffffffffdfULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_pc) 
               | ((QData)((IData)((1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[0U] 
                                         >> 5U)))) 
                  << 5U));
    }
    if ((1U & ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[0U] 
                >> 6U) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_pc 
                                  >> 6U))))) {
        ++(vlSymsp->__Vcoverage[5947]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_pc 
            = ((0xffffffffffffffbfULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_pc) 
               | ((QData)((IData)((1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[0U] 
                                         >> 6U)))) 
                  << 6U));
    }
    if ((1U & ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[0U] 
                >> 7U) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_pc 
                                  >> 7U))))) {
        ++(vlSymsp->__Vcoverage[5948]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_pc 
            = ((0xffffffffffffff7fULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_pc) 
               | ((QData)((IData)((1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[0U] 
                                         >> 7U)))) 
                  << 7U));
    }
    if ((1U & ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[0U] 
                >> 8U) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_pc 
                                  >> 8U))))) {
        ++(vlSymsp->__Vcoverage[5949]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_pc 
            = ((0xfffffffffffffeffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_pc) 
               | ((QData)((IData)((1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[0U] 
                                         >> 8U)))) 
                  << 8U));
    }
    if ((1U & ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[0U] 
                >> 9U) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_pc 
                                  >> 9U))))) {
        ++(vlSymsp->__Vcoverage[5950]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_pc 
            = ((0xfffffffffffffdffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_pc) 
               | ((QData)((IData)((1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[0U] 
                                         >> 9U)))) 
                  << 9U));
    }
    if ((1U & ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[0U] 
                >> 0xaU) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_pc 
                                    >> 0xaU))))) {
        ++(vlSymsp->__Vcoverage[5951]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_pc 
            = ((0xfffffffffffffbffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_pc) 
               | ((QData)((IData)((1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[0U] 
                                         >> 0xaU)))) 
                  << 0xaU));
    }
    if ((1U & ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[0U] 
                >> 0xbU) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_pc 
                                    >> 0xbU))))) {
        ++(vlSymsp->__Vcoverage[5952]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_pc 
            = ((0xfffffffffffff7ffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_pc) 
               | ((QData)((IData)((1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[0U] 
                                         >> 0xbU)))) 
                  << 0xbU));
    }
    if ((1U & ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[0U] 
                >> 0xcU) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_pc 
                                    >> 0xcU))))) {
        ++(vlSymsp->__Vcoverage[5953]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_pc 
            = ((0xffffffffffffefffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_pc) 
               | ((QData)((IData)((1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[0U] 
                                         >> 0xcU)))) 
                  << 0xcU));
    }
    if ((1U & ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[0U] 
                >> 0xdU) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_pc 
                                    >> 0xdU))))) {
        ++(vlSymsp->__Vcoverage[5954]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_pc 
            = ((0xffffffffffffdfffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_pc) 
               | ((QData)((IData)((1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[0U] 
                                         >> 0xdU)))) 
                  << 0xdU));
    }
    if ((1U & ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[0U] 
                >> 0xeU) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_pc 
                                    >> 0xeU))))) {
        ++(vlSymsp->__Vcoverage[5955]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_pc 
            = ((0xffffffffffffbfffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_pc) 
               | ((QData)((IData)((1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[0U] 
                                         >> 0xeU)))) 
                  << 0xeU));
    }
    if ((1U & ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[0U] 
                >> 0xfU) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_pc 
                                    >> 0xfU))))) {
        ++(vlSymsp->__Vcoverage[5956]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_pc 
            = ((0xffffffffffff7fffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_pc) 
               | ((QData)((IData)((1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[0U] 
                                         >> 0xfU)))) 
                  << 0xfU));
    }
    if ((1U & ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[0U] 
                >> 0x10U) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_pc 
                                     >> 0x10U))))) {
        ++(vlSymsp->__Vcoverage[5957]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_pc 
            = ((0xfffffffffffeffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_pc) 
               | ((QData)((IData)((1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[0U] 
                                         >> 0x10U)))) 
                  << 0x10U));
    }
    if ((1U & ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[0U] 
                >> 0x11U) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_pc 
                                     >> 0x11U))))) {
        ++(vlSymsp->__Vcoverage[5958]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_pc 
            = ((0xfffffffffffdffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_pc) 
               | ((QData)((IData)((1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[0U] 
                                         >> 0x11U)))) 
                  << 0x11U));
    }
    if ((1U & ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[0U] 
                >> 0x12U) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_pc 
                                     >> 0x12U))))) {
        ++(vlSymsp->__Vcoverage[5959]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_pc 
            = ((0xfffffffffffbffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_pc) 
               | ((QData)((IData)((1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[0U] 
                                         >> 0x12U)))) 
                  << 0x12U));
    }
    if ((1U & ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[0U] 
                >> 0x13U) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_pc 
                                     >> 0x13U))))) {
        ++(vlSymsp->__Vcoverage[5960]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_pc 
            = ((0xfffffffffff7ffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_pc) 
               | ((QData)((IData)((1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[0U] 
                                         >> 0x13U)))) 
                  << 0x13U));
    }
    if ((1U & ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[0U] 
                >> 0x14U) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_pc 
                                     >> 0x14U))))) {
        ++(vlSymsp->__Vcoverage[5961]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_pc 
            = ((0xffffffffffefffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_pc) 
               | ((QData)((IData)((1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[0U] 
                                         >> 0x14U)))) 
                  << 0x14U));
    }
    if ((1U & ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[0U] 
                >> 0x15U) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_pc 
                                     >> 0x15U))))) {
        ++(vlSymsp->__Vcoverage[5962]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_pc 
            = ((0xffffffffffdfffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_pc) 
               | ((QData)((IData)((1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[0U] 
                                         >> 0x15U)))) 
                  << 0x15U));
    }
    if ((1U & ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[0U] 
                >> 0x16U) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_pc 
                                     >> 0x16U))))) {
        ++(vlSymsp->__Vcoverage[5963]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_pc 
            = ((0xffffffffffbfffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_pc) 
               | ((QData)((IData)((1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[0U] 
                                         >> 0x16U)))) 
                  << 0x16U));
    }
    if ((1U & ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[0U] 
                >> 0x17U) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_pc 
                                     >> 0x17U))))) {
        ++(vlSymsp->__Vcoverage[5964]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_pc 
            = ((0xffffffffff7fffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_pc) 
               | ((QData)((IData)((1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[0U] 
                                         >> 0x17U)))) 
                  << 0x17U));
    }
    if ((1U & ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[0U] 
                >> 0x18U) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_pc 
                                     >> 0x18U))))) {
        ++(vlSymsp->__Vcoverage[5965]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_pc 
            = ((0xfffffffffeffffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_pc) 
               | ((QData)((IData)((1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[0U] 
                                         >> 0x18U)))) 
                  << 0x18U));
    }
    if ((1U & ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[0U] 
                >> 0x19U) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_pc 
                                     >> 0x19U))))) {
        ++(vlSymsp->__Vcoverage[5966]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_pc 
            = ((0xfffffffffdffffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_pc) 
               | ((QData)((IData)((1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[0U] 
                                         >> 0x19U)))) 
                  << 0x19U));
    }
    if ((1U & ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[0U] 
                >> 0x1aU) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_pc 
                                     >> 0x1aU))))) {
        ++(vlSymsp->__Vcoverage[5967]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_pc 
            = ((0xfffffffffbffffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_pc) 
               | ((QData)((IData)((1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[0U] 
                                         >> 0x1aU)))) 
                  << 0x1aU));
    }
    if ((1U & ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[0U] 
                >> 0x1bU) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_pc 
                                     >> 0x1bU))))) {
        ++(vlSymsp->__Vcoverage[5968]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_pc 
            = ((0xfffffffff7ffffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_pc) 
               | ((QData)((IData)((1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[0U] 
                                         >> 0x1bU)))) 
                  << 0x1bU));
    }
    if ((1U & ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[0U] 
                >> 0x1cU) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_pc 
                                     >> 0x1cU))))) {
        ++(vlSymsp->__Vcoverage[5969]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_pc 
            = ((0xffffffffefffffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_pc) 
               | ((QData)((IData)((1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[0U] 
                                         >> 0x1cU)))) 
                  << 0x1cU));
    }
    if ((1U & ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[0U] 
                >> 0x1dU) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_pc 
                                     >> 0x1dU))))) {
        ++(vlSymsp->__Vcoverage[5970]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_pc 
            = ((0xffffffffdfffffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_pc) 
               | ((QData)((IData)((1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[0U] 
                                         >> 0x1dU)))) 
                  << 0x1dU));
    }
    if ((1U & ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[0U] 
                >> 0x1eU) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_pc 
                                     >> 0x1eU))))) {
        ++(vlSymsp->__Vcoverage[5971]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_pc 
            = ((0xffffffffbfffffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_pc) 
               | ((QData)((IData)((1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[0U] 
                                         >> 0x1eU)))) 
                  << 0x1eU));
    }
    if ((1U & ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[0U] 
                >> 0x1fU) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_pc 
                                     >> 0x1fU))))) {
        ++(vlSymsp->__Vcoverage[5972]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_pc 
            = ((0xffffffff7fffffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_pc) 
               | ((QData)((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[0U] 
                                   >> 0x1fU))) << 0x1fU));
    }
    if ((1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[1U] 
               ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_pc 
                          >> 0x20U))))) {
        ++(vlSymsp->__Vcoverage[5973]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_pc 
            = ((0xfffffffeffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_pc) 
               | ((QData)((IData)((1U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[1U]))) 
                  << 0x20U));
    }
    if ((1U & ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[1U] 
                >> 1U) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_pc 
                                  >> 0x21U))))) {
        ++(vlSymsp->__Vcoverage[5974]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_pc 
            = ((0xfffffffdffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_pc) 
               | ((QData)((IData)((1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[1U] 
                                         >> 1U)))) 
                  << 0x21U));
    }
    if ((1U & ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[1U] 
                >> 2U) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_pc 
                                  >> 0x22U))))) {
        ++(vlSymsp->__Vcoverage[5975]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_pc 
            = ((0xfffffffbffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_pc) 
               | ((QData)((IData)((1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[1U] 
                                         >> 2U)))) 
                  << 0x22U));
    }
    if ((1U & ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[1U] 
                >> 3U) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_pc 
                                  >> 0x23U))))) {
        ++(vlSymsp->__Vcoverage[5976]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_pc 
            = ((0xfffffff7ffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_pc) 
               | ((QData)((IData)((1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[1U] 
                                         >> 3U)))) 
                  << 0x23U));
    }
    if ((1U & ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[1U] 
                >> 4U) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_pc 
                                  >> 0x24U))))) {
        ++(vlSymsp->__Vcoverage[5977]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_pc 
            = ((0xffffffefffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_pc) 
               | ((QData)((IData)((1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[1U] 
                                         >> 4U)))) 
                  << 0x24U));
    }
    if ((1U & ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[1U] 
                >> 5U) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_pc 
                                  >> 0x25U))))) {
        ++(vlSymsp->__Vcoverage[5978]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_pc 
            = ((0xffffffdfffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_pc) 
               | ((QData)((IData)((1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[1U] 
                                         >> 5U)))) 
                  << 0x25U));
    }
    if ((1U & ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[1U] 
                >> 6U) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_pc 
                                  >> 0x26U))))) {
        ++(vlSymsp->__Vcoverage[5979]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_pc 
            = ((0xffffffbfffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_pc) 
               | ((QData)((IData)((1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[1U] 
                                         >> 6U)))) 
                  << 0x26U));
    }
    if ((1U & ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[1U] 
                >> 7U) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_pc 
                                  >> 0x27U))))) {
        ++(vlSymsp->__Vcoverage[5980]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_pc 
            = ((0xffffff7fffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_pc) 
               | ((QData)((IData)((1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[1U] 
                                         >> 7U)))) 
                  << 0x27U));
    }
    if ((1U & ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[1U] 
                >> 8U) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_pc 
                                  >> 0x28U))))) {
        ++(vlSymsp->__Vcoverage[5981]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_pc 
            = ((0xfffffeffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_pc) 
               | ((QData)((IData)((1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[1U] 
                                         >> 8U)))) 
                  << 0x28U));
    }
    if ((1U & ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[1U] 
                >> 9U) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_pc 
                                  >> 0x29U))))) {
        ++(vlSymsp->__Vcoverage[5982]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_pc 
            = ((0xfffffdffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_pc) 
               | ((QData)((IData)((1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[1U] 
                                         >> 9U)))) 
                  << 0x29U));
    }
    if ((1U & ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[1U] 
                >> 0xaU) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_pc 
                                    >> 0x2aU))))) {
        ++(vlSymsp->__Vcoverage[5983]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_pc 
            = ((0xfffffbffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_pc) 
               | ((QData)((IData)((1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[1U] 
                                         >> 0xaU)))) 
                  << 0x2aU));
    }
    if ((1U & ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[1U] 
                >> 0xbU) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_pc 
                                    >> 0x2bU))))) {
        ++(vlSymsp->__Vcoverage[5984]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_pc 
            = ((0xfffff7ffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_pc) 
               | ((QData)((IData)((1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[1U] 
                                         >> 0xbU)))) 
                  << 0x2bU));
    }
    if ((1U & ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[1U] 
                >> 0xcU) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_pc 
                                    >> 0x2cU))))) {
        ++(vlSymsp->__Vcoverage[5985]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_pc 
            = ((0xffffefffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_pc) 
               | ((QData)((IData)((1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[1U] 
                                         >> 0xcU)))) 
                  << 0x2cU));
    }
    if ((1U & ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[1U] 
                >> 0xdU) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_pc 
                                    >> 0x2dU))))) {
        ++(vlSymsp->__Vcoverage[5986]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_pc 
            = ((0xffffdfffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_pc) 
               | ((QData)((IData)((1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[1U] 
                                         >> 0xdU)))) 
                  << 0x2dU));
    }
    if ((1U & ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[1U] 
                >> 0xeU) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_pc 
                                    >> 0x2eU))))) {
        ++(vlSymsp->__Vcoverage[5987]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_pc 
            = ((0xffffbfffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_pc) 
               | ((QData)((IData)((1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[1U] 
                                         >> 0xeU)))) 
                  << 0x2eU));
    }
    if ((1U & ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[1U] 
                >> 0xfU) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_pc 
                                    >> 0x2fU))))) {
        ++(vlSymsp->__Vcoverage[5988]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_pc 
            = ((0xffff7fffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_pc) 
               | ((QData)((IData)((1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[1U] 
                                         >> 0xfU)))) 
                  << 0x2fU));
    }
    if ((1U & ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[1U] 
                >> 0x10U) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_pc 
                                     >> 0x30U))))) {
        ++(vlSymsp->__Vcoverage[5989]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_pc 
            = ((0xfffeffffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_pc) 
               | ((QData)((IData)((1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[1U] 
                                         >> 0x10U)))) 
                  << 0x30U));
    }
    if ((1U & ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[1U] 
                >> 0x11U) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_pc 
                                     >> 0x31U))))) {
        ++(vlSymsp->__Vcoverage[5990]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_pc 
            = ((0xfffdffffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_pc) 
               | ((QData)((IData)((1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[1U] 
                                         >> 0x11U)))) 
                  << 0x31U));
    }
    if ((1U & ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[1U] 
                >> 0x12U) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_pc 
                                     >> 0x32U))))) {
        ++(vlSymsp->__Vcoverage[5991]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_pc 
            = ((0xfffbffffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_pc) 
               | ((QData)((IData)((1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[1U] 
                                         >> 0x12U)))) 
                  << 0x32U));
    }
    if ((1U & ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[1U] 
                >> 0x13U) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_pc 
                                     >> 0x33U))))) {
        ++(vlSymsp->__Vcoverage[5992]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_pc 
            = ((0xfff7ffffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_pc) 
               | ((QData)((IData)((1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[1U] 
                                         >> 0x13U)))) 
                  << 0x33U));
    }
    if ((1U & ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[1U] 
                >> 0x14U) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_pc 
                                     >> 0x34U))))) {
        ++(vlSymsp->__Vcoverage[5993]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_pc 
            = ((0xffefffffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_pc) 
               | ((QData)((IData)((1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[1U] 
                                         >> 0x14U)))) 
                  << 0x34U));
    }
    if ((1U & ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[1U] 
                >> 0x15U) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_pc 
                                     >> 0x35U))))) {
        ++(vlSymsp->__Vcoverage[5994]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_pc 
            = ((0xffdfffffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_pc) 
               | ((QData)((IData)((1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[1U] 
                                         >> 0x15U)))) 
                  << 0x35U));
    }
    if ((1U & ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[1U] 
                >> 0x16U) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_pc 
                                     >> 0x36U))))) {
        ++(vlSymsp->__Vcoverage[5995]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_pc 
            = ((0xffbfffffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_pc) 
               | ((QData)((IData)((1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[1U] 
                                         >> 0x16U)))) 
                  << 0x36U));
    }
    if ((1U & ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[1U] 
                >> 0x17U) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_pc 
                                     >> 0x37U))))) {
        ++(vlSymsp->__Vcoverage[5996]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_pc 
            = ((0xff7fffffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_pc) 
               | ((QData)((IData)((1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[1U] 
                                         >> 0x17U)))) 
                  << 0x37U));
    }
    if ((1U & ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[1U] 
                >> 0x18U) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_pc 
                                     >> 0x38U))))) {
        ++(vlSymsp->__Vcoverage[5997]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_pc 
            = ((0xfeffffffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_pc) 
               | ((QData)((IData)((1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[1U] 
                                         >> 0x18U)))) 
                  << 0x38U));
    }
    if ((1U & ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[1U] 
                >> 0x19U) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_pc 
                                     >> 0x39U))))) {
        ++(vlSymsp->__Vcoverage[5998]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_pc 
            = ((0xfdffffffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_pc) 
               | ((QData)((IData)((1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[1U] 
                                         >> 0x19U)))) 
                  << 0x39U));
    }
    if ((1U & ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[1U] 
                >> 0x1aU) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_pc 
                                     >> 0x3aU))))) {
        ++(vlSymsp->__Vcoverage[5999]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_pc 
            = ((0xfbffffffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_pc) 
               | ((QData)((IData)((1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[1U] 
                                         >> 0x1aU)))) 
                  << 0x3aU));
    }
    if ((1U & ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[1U] 
                >> 0x1bU) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_pc 
                                     >> 0x3bU))))) {
        ++(vlSymsp->__Vcoverage[6000]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_pc 
            = ((0xf7ffffffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_pc) 
               | ((QData)((IData)((1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[1U] 
                                         >> 0x1bU)))) 
                  << 0x3bU));
    }
    if ((1U & ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[1U] 
                >> 0x1cU) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_pc 
                                     >> 0x3cU))))) {
        ++(vlSymsp->__Vcoverage[6001]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_pc 
            = ((0xefffffffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_pc) 
               | ((QData)((IData)((1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[1U] 
                                         >> 0x1cU)))) 
                  << 0x3cU));
    }
    if ((1U & ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[1U] 
                >> 0x1dU) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_pc 
                                     >> 0x3dU))))) {
        ++(vlSymsp->__Vcoverage[6002]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_pc 
            = ((0xdfffffffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_pc) 
               | ((QData)((IData)((1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[1U] 
                                         >> 0x1dU)))) 
                  << 0x3dU));
    }
    if ((1U & ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[1U] 
                >> 0x1eU) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_pc 
                                     >> 0x3eU))))) {
        ++(vlSymsp->__Vcoverage[6003]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_pc 
            = ((0xbfffffffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_pc) 
               | ((QData)((IData)((1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[1U] 
                                         >> 0x1eU)))) 
                  << 0x3eU));
    }
    if ((1U & ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[1U] 
                >> 0x1fU) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_pc 
                                     >> 0x3fU))))) {
        ++(vlSymsp->__Vcoverage[6004]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_pc 
            = ((0x7fffffffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_pc) 
               | ((QData)((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[1U] 
                                   >> 0x1fU))) << 0x3fU));
    }
    __Vtemp1413[0U] = (IData)((((QData)((IData)(((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sraw_temp 
                                                  >> 0x1fU)
                                                  ? 0xffffffffU
                                                  : 0U))) 
                                << 0x20U) | (QData)((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sraw_temp))));
    __Vtemp1413[1U] = (IData)(((((QData)((IData)(((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sraw_temp 
                                                   >> 0x1fU)
                                                   ? 0xffffffffU
                                                   : 0U))) 
                                 << 0x20U) | (QData)((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sraw_temp))) 
                               >> 0x20U));
    __Vtemp1413[2U] = 1U;
    VL_EXTEND_WW(128,65, __Vtemp1414, __Vtemp1413);
    __Vtemp1415[0U] = (IData)(VL_SHIFTRS_QQI(64,64,6, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu_io_rs1_data, 
                                             (0x3fU 
                                              & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__rs2_data))));
    __Vtemp1415[1U] = (IData)((VL_SHIFTRS_QQI(64,64,6, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu_io_rs1_data, 
                                              (0x3fU 
                                               & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__rs2_data))) 
                               >> 0x20U));
    __Vtemp1415[2U] = 1U;
    VL_EXTEND_WW(128,65, __Vtemp1416, __Vtemp1415);
    __Vtemp1417[0U] = (IData)((((QData)((IData)(((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__srlw_temp 
                                                  >> 0x1fU)
                                                  ? 0xffffffffU
                                                  : 0U))) 
                                << 0x20U) | (QData)((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__srlw_temp))));
    __Vtemp1417[1U] = (IData)(((((QData)((IData)(((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__srlw_temp 
                                                   >> 0x1fU)
                                                   ? 0xffffffffU
                                                   : 0U))) 
                                 << 0x20U) | (QData)((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__srlw_temp))) 
                               >> 0x20U));
    __Vtemp1417[2U] = 1U;
    VL_EXTEND_WW(128,65, __Vtemp1418, __Vtemp1417);
    __Vtemp1419[0U] = (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu_io_rs1_data 
                               >> (0x3fU & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__rs2_data))));
    __Vtemp1419[1U] = (IData)(((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu_io_rs1_data 
                                >> (0x3fU & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__rs2_data))) 
                               >> 0x20U));
    __Vtemp1419[2U] = 1U;
    VL_EXTEND_WW(128,65, __Vtemp1420, __Vtemp1419);
    __Vtemp1421[0U] = (IData)((((QData)((IData)(((1U 
                                                  & (IData)(
                                                            (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sllw_temp 
                                                             >> 0x1fU)))
                                                  ? 0xffffffffU
                                                  : 0U))) 
                                << 0x20U) | (QData)((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sllw_temp))));
    __Vtemp1421[1U] = (IData)(((((QData)((IData)(((1U 
                                                   & (IData)(
                                                             (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sllw_temp 
                                                              >> 0x1fU)))
                                                   ? 0xffffffffU
                                                   : 0U))) 
                                 << 0x20U) | (QData)((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__sllw_temp))) 
                               >> 0x20U));
    __Vtemp1421[2U] = 1U;
    VL_EXTEND_WW(128,65, __Vtemp1422, __Vtemp1421);
    VL_EXTEND_WQ(127,64, __Vtemp1424, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu_io_rs1_data);
    VL_SHIFTL_WWI(127,127,6, __Vtemp1425, __Vtemp1424, 
                  (0x3fU & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__rs2_data)));
    VL_EXTEND_WW(128,66, __Vtemp1428, riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___temp_result_data_T_72);
    if ((7U == (0xfU & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_out_exuType) 
                        >> 2U)))) {
        riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___temp_result_data_T_84[0U] 
            = __Vtemp1414[0U];
        riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___temp_result_data_T_84[1U] 
            = __Vtemp1414[1U];
        riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___temp_result_data_T_84[2U] 
            = __Vtemp1414[2U];
        riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___temp_result_data_T_84[3U] 
            = __Vtemp1414[3U];
    } else {
        riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___temp_result_data_T_84[0U] 
            = ((7U == (0xfU & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_out_exuType) 
                               >> 2U))) ? __Vtemp1416[0U]
                : ((8U == (0xfU & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_out_exuType) 
                                   >> 2U))) ? __Vtemp1418[0U]
                    : ((8U == (0xfU & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_out_exuType) 
                                       >> 2U))) ? __Vtemp1420[0U]
                        : ((6U == (0xfU & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_out_exuType) 
                                           >> 2U)))
                            ? __Vtemp1422[0U] : ((6U 
                                                  == 
                                                  (0xfU 
                                                   & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_out_exuType) 
                                                      >> 2U)))
                                                  ? 
                                                 __Vtemp1425[0U]
                                                  : 
                                                 __Vtemp1428[0U])))));
        riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___temp_result_data_T_84[1U] 
            = ((7U == (0xfU & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_out_exuType) 
                               >> 2U))) ? __Vtemp1416[1U]
                : ((8U == (0xfU & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_out_exuType) 
                                   >> 2U))) ? __Vtemp1418[1U]
                    : ((8U == (0xfU & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_out_exuType) 
                                       >> 2U))) ? __Vtemp1420[1U]
                        : ((6U == (0xfU & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_out_exuType) 
                                           >> 2U)))
                            ? __Vtemp1422[1U] : ((6U 
                                                  == 
                                                  (0xfU 
                                                   & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_out_exuType) 
                                                      >> 2U)))
                                                  ? 
                                                 __Vtemp1425[1U]
                                                  : 
                                                 __Vtemp1428[1U])))));
        riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___temp_result_data_T_84[2U] 
            = ((7U == (0xfU & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_out_exuType) 
                               >> 2U))) ? __Vtemp1416[2U]
                : ((8U == (0xfU & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_out_exuType) 
                                   >> 2U))) ? __Vtemp1418[2U]
                    : ((8U == (0xfU & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_out_exuType) 
                                       >> 2U))) ? __Vtemp1420[2U]
                        : ((6U == (0xfU & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_out_exuType) 
                                           >> 2U)))
                            ? __Vtemp1422[2U] : ((6U 
                                                  == 
                                                  (0xfU 
                                                   & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_out_exuType) 
                                                      >> 2U)))
                                                  ? 
                                                 __Vtemp1425[2U]
                                                  : 
                                                 __Vtemp1428[2U])))));
        riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___temp_result_data_T_84[3U] 
            = ((7U == (0xfU & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_out_exuType) 
                               >> 2U))) ? __Vtemp1416[3U]
                : ((8U == (0xfU & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_out_exuType) 
                                   >> 2U))) ? __Vtemp1418[3U]
                    : ((8U == (0xfU & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_out_exuType) 
                                       >> 2U))) ? __Vtemp1420[3U]
                        : ((6U == (0xfU & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_out_exuType) 
                                           >> 2U)))
                            ? __Vtemp1422[3U] : ((6U 
                                                  == 
                                                  (0xfU 
                                                   & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_out_exuType) 
                                                      >> 2U)))
                                                  ? 
                                                 (0x80000000U 
                                                  | (0x7fffffffU 
                                                     & __Vtemp1425[3U]))
                                                  : 
                                                 __Vtemp1428[3U])))));
    }
    vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__instType 
        = ((0x33U == (0xfe00707fU & vlSelf->riscv_soc__DOT__core__DOT__fetch_io_out_inst))
            ? 6U : ((0x13U == (0x707fU & vlSelf->riscv_soc__DOT__core__DOT__fetch_io_out_inst))
                     ? 0xcU : ((0x1bU == (0x707fU & vlSelf->riscv_soc__DOT__core__DOT__fetch_io_out_inst))
                                ? 0xcU : ((0x3bU == 
                                           (0xfe00707fU 
                                            & vlSelf->riscv_soc__DOT__core__DOT__fetch_io_out_inst))
                                           ? 6U : (
                                                   (0x7033U 
                                                    == 
                                                    (0xfe00707fU 
                                                     & vlSelf->riscv_soc__DOT__core__DOT__fetch_io_out_inst))
                                                    ? 6U
                                                    : 
                                                   ((0x7013U 
                                                     == 
                                                     (0x707fU 
                                                      & vlSelf->riscv_soc__DOT__core__DOT__fetch_io_out_inst))
                                                     ? 0xcU
                                                     : 
                                                    ((0x17U 
                                                      == 
                                                      (0x7fU 
                                                       & vlSelf->riscv_soc__DOT__core__DOT__fetch_io_out_inst))
                                                      ? 1U
                                                      : 
                                                     ((0x63U 
                                                       == 
                                                       (0x707fU 
                                                        & vlSelf->riscv_soc__DOT__core__DOT__fetch_io_out_inst))
                                                       ? 7U
                                                       : (IData)(riscv_soc__DOT__core__DOT__decode__DOT___T_329)))))))));
    __Vtemp1441[0U] = (IData)((4ULL + vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_pc));
    __Vtemp1441[1U] = (IData)(((4ULL + vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_pc) 
                               >> 0x20U));
    __Vtemp1441[2U] = 1U;
    VL_EXTEND_WW(128,65, __Vtemp1442, __Vtemp1441);
    __Vtemp1443[0U] = (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_imm);
    __Vtemp1443[1U] = (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_imm 
                               >> 0x20U));
    __Vtemp1443[2U] = 1U;
    VL_EXTEND_WW(128,65, __Vtemp1444, __Vtemp1443);
    __Vtemp1445[0U] = (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu_io_rs1_data 
                               | vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__rs2_data));
    __Vtemp1445[1U] = (IData)(((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu_io_rs1_data 
                                | vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__rs2_data) 
                               >> 0x20U));
    __Vtemp1445[2U] = 1U;
    VL_EXTEND_WW(128,65, __Vtemp1446, __Vtemp1445);
    __Vtemp1447[0U] = (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu_io_rs1_data 
                               ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__rs2_data));
    __Vtemp1447[1U] = (IData)(((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu_io_rs1_data 
                                ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__rs2_data) 
                               >> 0x20U));
    __Vtemp1447[2U] = 1U;
    VL_EXTEND_WW(128,65, __Vtemp1448, __Vtemp1447);
    if ((0xfU == (0xfU & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_out_exuType) 
                          >> 2U)))) {
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[0U] 
            = __Vtemp1442[0U];
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[1U] 
            = __Vtemp1442[1U];
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[2U] 
            = __Vtemp1442[2U];
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[3U] 
            = __Vtemp1442[3U];
    } else {
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[0U] 
            = ((0xcU == (0xfU & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_out_exuType) 
                                 >> 2U))) ? __Vtemp1444[0U]
                : ((9U == (0xfU & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_out_exuType) 
                                   >> 2U))) ? __Vtemp1446[0U]
                    : ((0xaU == (0xfU & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_out_exuType) 
                                         >> 2U))) ? 
                       __Vtemp1448[0U] : riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___temp_result_data_T_84[0U])));
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[1U] 
            = ((0xcU == (0xfU & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_out_exuType) 
                                 >> 2U))) ? __Vtemp1444[1U]
                : ((9U == (0xfU & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_out_exuType) 
                                   >> 2U))) ? __Vtemp1446[1U]
                    : ((0xaU == (0xfU & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_out_exuType) 
                                         >> 2U))) ? 
                       __Vtemp1448[1U] : riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___temp_result_data_T_84[1U])));
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[2U] 
            = ((0xcU == (0xfU & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_out_exuType) 
                                 >> 2U))) ? __Vtemp1444[2U]
                : ((9U == (0xfU & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_out_exuType) 
                                   >> 2U))) ? __Vtemp1446[2U]
                    : ((0xaU == (0xfU & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_out_exuType) 
                                         >> 2U))) ? 
                       __Vtemp1448[2U] : riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___temp_result_data_T_84[2U])));
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[3U] 
            = ((0xcU == (0xfU & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_out_exuType) 
                                 >> 2U))) ? __Vtemp1444[3U]
                : ((9U == (0xfU & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_out_exuType) 
                                   >> 2U))) ? __Vtemp1446[3U]
                    : ((0xaU == (0xfU & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_out_exuType) 
                                         >> 2U))) ? 
                       __Vtemp1448[3U] : riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT___temp_result_data_T_84[3U])));
    }
    vlSelf->riscv_soc__DOT__core__DOT__decode__DOT___imm_data_T_51 
        = ((7U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__instType))
            ? ((((vlSelf->riscv_soc__DOT__core__DOT__fetch_io_out_inst 
                  >> 0x1fU) ? 0xfffffffffffffULL : 0ULL) 
                << 0xcU) | (QData)((IData)(((0x800U 
                                             & (vlSelf->riscv_soc__DOT__core__DOT__fetch_io_out_inst 
                                                << 4U)) 
                                            | ((0x7e0U 
                                                & (vlSelf->riscv_soc__DOT__core__DOT__fetch_io_out_inst 
                                                   >> 0x14U)) 
                                               | (0x1eU 
                                                  & (vlSelf->riscv_soc__DOT__core__DOT__fetch_io_out_inst 
                                                     >> 7U)))))))
            : ((2U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__instType))
                ? ((((vlSelf->riscv_soc__DOT__core__DOT__fetch_io_out_inst 
                      >> 0x1fU) ? 0xfffffffffffULL : 0ULL) 
                    << 0x14U) | (QData)((IData)(((0xff000U 
                                                  & vlSelf->riscv_soc__DOT__core__DOT__fetch_io_out_inst) 
                                                 | ((0x800U 
                                                     & (vlSelf->riscv_soc__DOT__core__DOT__fetch_io_out_inst 
                                                        >> 9U)) 
                                                    | (0x7feU 
                                                       & (vlSelf->riscv_soc__DOT__core__DOT__fetch_io_out_inst 
                                                          >> 0x14U)))))))
                : ((3U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__instType))
                    ? ((((vlSelf->riscv_soc__DOT__core__DOT__fetch_io_out_inst 
                          >> 0x1fU) ? 0xfffffffffffffULL
                          : 0ULL) << 0xcU) | (QData)((IData)(
                                                             ((0xfe0U 
                                                               & (vlSelf->riscv_soc__DOT__core__DOT__fetch_io_out_inst 
                                                                  >> 0x14U)) 
                                                              | (0x1fU 
                                                                 & (vlSelf->riscv_soc__DOT__core__DOT__fetch_io_out_inst 
                                                                    >> 7U))))))
                    : ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__instType))
                        ? (((QData)((IData)(((vlSelf->riscv_soc__DOT__core__DOT__fetch_io_out_inst 
                                              >> 0x1fU)
                                              ? 0xffffffffU
                                              : 0U))) 
                            << 0x20U) | (QData)((IData)(
                                                        (0xfffff000U 
                                                         & vlSelf->riscv_soc__DOT__core__DOT__fetch_io_out_inst))))
                        : ((0xcU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__instType))
                            ? ((((vlSelf->riscv_soc__DOT__core__DOT__fetch_io_out_inst 
                                  >> 0x1fU) ? 0xfffffffffffffULL
                                  : 0ULL) << 0xcU) 
                               | (QData)((IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch_io_out_inst 
                                                  >> 0x14U))))
                            : 0ULL)))));
    if ((1U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__instType) 
               ^ (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__instType)))) {
        ++(vlSymsp->__Vcoverage[8076]);
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__instType 
            = ((0xeU & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__instType)) 
               | (1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__instType)));
    }
    if ((2U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__instType) 
               ^ (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__instType)))) {
        ++(vlSymsp->__Vcoverage[8077]);
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__instType 
            = ((0xdU & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__instType)) 
               | (2U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__instType)));
    }
    if ((4U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__instType) 
               ^ (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__instType)))) {
        ++(vlSymsp->__Vcoverage[8078]);
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__instType 
            = ((0xbU & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__instType)) 
               | (4U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__instType)));
    }
    if ((8U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__instType) 
               ^ (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__instType)))) {
        ++(vlSymsp->__Vcoverage[8079]);
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__instType 
            = ((7U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__instType)) 
               | (8U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__instType)));
    }
    if ((1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[2U] 
               ^ (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_w_rs_en)))) {
        ++(vlSymsp->__Vcoverage[6006]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_w_rs_en 
            = (1U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[2U]);
    }
    if ((1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[0U] 
               ^ (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data)))) {
        ++(vlSymsp->__Vcoverage[5877]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data 
            = ((0xfffffffffffffffeULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data) 
               | (IData)((IData)((1U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[0U]))));
    }
    if ((1U & ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[0U] 
                >> 1U) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data 
                                  >> 1U))))) {
        ++(vlSymsp->__Vcoverage[5878]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data 
            = ((0xfffffffffffffffdULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data) 
               | ((QData)((IData)((1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[0U] 
                                         >> 1U)))) 
                  << 1U));
    }
    if ((1U & ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[0U] 
                >> 2U) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data 
                                  >> 2U))))) {
        ++(vlSymsp->__Vcoverage[5879]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data 
            = ((0xfffffffffffffffbULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data) 
               | ((QData)((IData)((1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[0U] 
                                         >> 2U)))) 
                  << 2U));
    }
    if ((1U & ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[0U] 
                >> 3U) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data 
                                  >> 3U))))) {
        ++(vlSymsp->__Vcoverage[5880]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data 
            = ((0xfffffffffffffff7ULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data) 
               | ((QData)((IData)((1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[0U] 
                                         >> 3U)))) 
                  << 3U));
    }
    if ((1U & ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[0U] 
                >> 4U) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data 
                                  >> 4U))))) {
        ++(vlSymsp->__Vcoverage[5881]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data 
            = ((0xffffffffffffffefULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data) 
               | ((QData)((IData)((1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[0U] 
                                         >> 4U)))) 
                  << 4U));
    }
    if ((1U & ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[0U] 
                >> 5U) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data 
                                  >> 5U))))) {
        ++(vlSymsp->__Vcoverage[5882]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data 
            = ((0xffffffffffffffdfULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data) 
               | ((QData)((IData)((1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[0U] 
                                         >> 5U)))) 
                  << 5U));
    }
    if ((1U & ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[0U] 
                >> 6U) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data 
                                  >> 6U))))) {
        ++(vlSymsp->__Vcoverage[5883]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data 
            = ((0xffffffffffffffbfULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data) 
               | ((QData)((IData)((1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[0U] 
                                         >> 6U)))) 
                  << 6U));
    }
    if ((1U & ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[0U] 
                >> 7U) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data 
                                  >> 7U))))) {
        ++(vlSymsp->__Vcoverage[5884]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data 
            = ((0xffffffffffffff7fULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data) 
               | ((QData)((IData)((1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[0U] 
                                         >> 7U)))) 
                  << 7U));
    }
    if ((1U & ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[0U] 
                >> 8U) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data 
                                  >> 8U))))) {
        ++(vlSymsp->__Vcoverage[5885]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data 
            = ((0xfffffffffffffeffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data) 
               | ((QData)((IData)((1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[0U] 
                                         >> 8U)))) 
                  << 8U));
    }
    if ((1U & ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[0U] 
                >> 9U) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data 
                                  >> 9U))))) {
        ++(vlSymsp->__Vcoverage[5886]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data 
            = ((0xfffffffffffffdffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data) 
               | ((QData)((IData)((1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[0U] 
                                         >> 9U)))) 
                  << 9U));
    }
    if ((1U & ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[0U] 
                >> 0xaU) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data 
                                    >> 0xaU))))) {
        ++(vlSymsp->__Vcoverage[5887]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data 
            = ((0xfffffffffffffbffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data) 
               | ((QData)((IData)((1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[0U] 
                                         >> 0xaU)))) 
                  << 0xaU));
    }
    if ((1U & ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[0U] 
                >> 0xbU) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data 
                                    >> 0xbU))))) {
        ++(vlSymsp->__Vcoverage[5888]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data 
            = ((0xfffffffffffff7ffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data) 
               | ((QData)((IData)((1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[0U] 
                                         >> 0xbU)))) 
                  << 0xbU));
    }
    if ((1U & ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[0U] 
                >> 0xcU) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data 
                                    >> 0xcU))))) {
        ++(vlSymsp->__Vcoverage[5889]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data 
            = ((0xffffffffffffefffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data) 
               | ((QData)((IData)((1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[0U] 
                                         >> 0xcU)))) 
                  << 0xcU));
    }
    if ((1U & ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[0U] 
                >> 0xdU) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data 
                                    >> 0xdU))))) {
        ++(vlSymsp->__Vcoverage[5890]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data 
            = ((0xffffffffffffdfffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data) 
               | ((QData)((IData)((1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[0U] 
                                         >> 0xdU)))) 
                  << 0xdU));
    }
    if ((1U & ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[0U] 
                >> 0xeU) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data 
                                    >> 0xeU))))) {
        ++(vlSymsp->__Vcoverage[5891]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data 
            = ((0xffffffffffffbfffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data) 
               | ((QData)((IData)((1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[0U] 
                                         >> 0xeU)))) 
                  << 0xeU));
    }
    if ((1U & ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[0U] 
                >> 0xfU) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data 
                                    >> 0xfU))))) {
        ++(vlSymsp->__Vcoverage[5892]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data 
            = ((0xffffffffffff7fffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data) 
               | ((QData)((IData)((1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[0U] 
                                         >> 0xfU)))) 
                  << 0xfU));
    }
    if ((1U & ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[0U] 
                >> 0x10U) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data 
                                     >> 0x10U))))) {
        ++(vlSymsp->__Vcoverage[5893]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data 
            = ((0xfffffffffffeffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data) 
               | ((QData)((IData)((1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[0U] 
                                         >> 0x10U)))) 
                  << 0x10U));
    }
    if ((1U & ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[0U] 
                >> 0x11U) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data 
                                     >> 0x11U))))) {
        ++(vlSymsp->__Vcoverage[5894]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data 
            = ((0xfffffffffffdffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data) 
               | ((QData)((IData)((1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[0U] 
                                         >> 0x11U)))) 
                  << 0x11U));
    }
    if ((1U & ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[0U] 
                >> 0x12U) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data 
                                     >> 0x12U))))) {
        ++(vlSymsp->__Vcoverage[5895]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data 
            = ((0xfffffffffffbffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data) 
               | ((QData)((IData)((1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[0U] 
                                         >> 0x12U)))) 
                  << 0x12U));
    }
    if ((1U & ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[0U] 
                >> 0x13U) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data 
                                     >> 0x13U))))) {
        ++(vlSymsp->__Vcoverage[5896]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data 
            = ((0xfffffffffff7ffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data) 
               | ((QData)((IData)((1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[0U] 
                                         >> 0x13U)))) 
                  << 0x13U));
    }
    if ((1U & ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[0U] 
                >> 0x14U) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data 
                                     >> 0x14U))))) {
        ++(vlSymsp->__Vcoverage[5897]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data 
            = ((0xffffffffffefffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data) 
               | ((QData)((IData)((1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[0U] 
                                         >> 0x14U)))) 
                  << 0x14U));
    }
    if ((1U & ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[0U] 
                >> 0x15U) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data 
                                     >> 0x15U))))) {
        ++(vlSymsp->__Vcoverage[5898]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data 
            = ((0xffffffffffdfffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data) 
               | ((QData)((IData)((1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[0U] 
                                         >> 0x15U)))) 
                  << 0x15U));
    }
    if ((1U & ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[0U] 
                >> 0x16U) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data 
                                     >> 0x16U))))) {
        ++(vlSymsp->__Vcoverage[5899]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data 
            = ((0xffffffffffbfffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data) 
               | ((QData)((IData)((1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[0U] 
                                         >> 0x16U)))) 
                  << 0x16U));
    }
    if ((1U & ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[0U] 
                >> 0x17U) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data 
                                     >> 0x17U))))) {
        ++(vlSymsp->__Vcoverage[5900]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data 
            = ((0xffffffffff7fffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data) 
               | ((QData)((IData)((1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[0U] 
                                         >> 0x17U)))) 
                  << 0x17U));
    }
    if ((1U & ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[0U] 
                >> 0x18U) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data 
                                     >> 0x18U))))) {
        ++(vlSymsp->__Vcoverage[5901]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data 
            = ((0xfffffffffeffffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data) 
               | ((QData)((IData)((1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[0U] 
                                         >> 0x18U)))) 
                  << 0x18U));
    }
    if ((1U & ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[0U] 
                >> 0x19U) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data 
                                     >> 0x19U))))) {
        ++(vlSymsp->__Vcoverage[5902]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data 
            = ((0xfffffffffdffffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data) 
               | ((QData)((IData)((1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[0U] 
                                         >> 0x19U)))) 
                  << 0x19U));
    }
    if ((1U & ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[0U] 
                >> 0x1aU) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data 
                                     >> 0x1aU))))) {
        ++(vlSymsp->__Vcoverage[5903]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data 
            = ((0xfffffffffbffffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data) 
               | ((QData)((IData)((1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[0U] 
                                         >> 0x1aU)))) 
                  << 0x1aU));
    }
    if ((1U & ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[0U] 
                >> 0x1bU) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data 
                                     >> 0x1bU))))) {
        ++(vlSymsp->__Vcoverage[5904]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data 
            = ((0xfffffffff7ffffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data) 
               | ((QData)((IData)((1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[0U] 
                                         >> 0x1bU)))) 
                  << 0x1bU));
    }
    if ((1U & ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[0U] 
                >> 0x1cU) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data 
                                     >> 0x1cU))))) {
        ++(vlSymsp->__Vcoverage[5905]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data 
            = ((0xffffffffefffffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data) 
               | ((QData)((IData)((1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[0U] 
                                         >> 0x1cU)))) 
                  << 0x1cU));
    }
    if ((1U & ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[0U] 
                >> 0x1dU) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data 
                                     >> 0x1dU))))) {
        ++(vlSymsp->__Vcoverage[5906]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data 
            = ((0xffffffffdfffffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data) 
               | ((QData)((IData)((1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[0U] 
                                         >> 0x1dU)))) 
                  << 0x1dU));
    }
    if ((1U & ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[0U] 
                >> 0x1eU) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data 
                                     >> 0x1eU))))) {
        ++(vlSymsp->__Vcoverage[5907]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data 
            = ((0xffffffffbfffffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data) 
               | ((QData)((IData)((1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[0U] 
                                         >> 0x1eU)))) 
                  << 0x1eU));
    }
    if ((1U & ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[0U] 
                >> 0x1fU) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data 
                                     >> 0x1fU))))) {
        ++(vlSymsp->__Vcoverage[5908]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data 
            = ((0xffffffff7fffffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data) 
               | ((QData)((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[0U] 
                                   >> 0x1fU))) << 0x1fU));
    }
    if ((1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[1U] 
               ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data 
                          >> 0x20U))))) {
        ++(vlSymsp->__Vcoverage[5909]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data 
            = ((0xfffffffeffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data) 
               | ((QData)((IData)((1U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[1U]))) 
                  << 0x20U));
    }
    if ((1U & ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[1U] 
                >> 1U) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data 
                                  >> 0x21U))))) {
        ++(vlSymsp->__Vcoverage[5910]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data 
            = ((0xfffffffdffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data) 
               | ((QData)((IData)((1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[1U] 
                                         >> 1U)))) 
                  << 0x21U));
    }
    if ((1U & ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[1U] 
                >> 2U) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data 
                                  >> 0x22U))))) {
        ++(vlSymsp->__Vcoverage[5911]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data 
            = ((0xfffffffbffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data) 
               | ((QData)((IData)((1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[1U] 
                                         >> 2U)))) 
                  << 0x22U));
    }
    if ((1U & ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[1U] 
                >> 3U) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data 
                                  >> 0x23U))))) {
        ++(vlSymsp->__Vcoverage[5912]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data 
            = ((0xfffffff7ffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data) 
               | ((QData)((IData)((1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[1U] 
                                         >> 3U)))) 
                  << 0x23U));
    }
    if ((1U & ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[1U] 
                >> 4U) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data 
                                  >> 0x24U))))) {
        ++(vlSymsp->__Vcoverage[5913]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data 
            = ((0xffffffefffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data) 
               | ((QData)((IData)((1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[1U] 
                                         >> 4U)))) 
                  << 0x24U));
    }
    if ((1U & ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[1U] 
                >> 5U) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data 
                                  >> 0x25U))))) {
        ++(vlSymsp->__Vcoverage[5914]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data 
            = ((0xffffffdfffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data) 
               | ((QData)((IData)((1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[1U] 
                                         >> 5U)))) 
                  << 0x25U));
    }
    if ((1U & ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[1U] 
                >> 6U) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data 
                                  >> 0x26U))))) {
        ++(vlSymsp->__Vcoverage[5915]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data 
            = ((0xffffffbfffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data) 
               | ((QData)((IData)((1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[1U] 
                                         >> 6U)))) 
                  << 0x26U));
    }
    if ((1U & ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[1U] 
                >> 7U) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data 
                                  >> 0x27U))))) {
        ++(vlSymsp->__Vcoverage[5916]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data 
            = ((0xffffff7fffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data) 
               | ((QData)((IData)((1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[1U] 
                                         >> 7U)))) 
                  << 0x27U));
    }
    if ((1U & ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[1U] 
                >> 8U) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data 
                                  >> 0x28U))))) {
        ++(vlSymsp->__Vcoverage[5917]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data 
            = ((0xfffffeffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data) 
               | ((QData)((IData)((1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[1U] 
                                         >> 8U)))) 
                  << 0x28U));
    }
    if ((1U & ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[1U] 
                >> 9U) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data 
                                  >> 0x29U))))) {
        ++(vlSymsp->__Vcoverage[5918]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data 
            = ((0xfffffdffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data) 
               | ((QData)((IData)((1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[1U] 
                                         >> 9U)))) 
                  << 0x29U));
    }
    if ((1U & ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[1U] 
                >> 0xaU) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data 
                                    >> 0x2aU))))) {
        ++(vlSymsp->__Vcoverage[5919]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data 
            = ((0xfffffbffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data) 
               | ((QData)((IData)((1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[1U] 
                                         >> 0xaU)))) 
                  << 0x2aU));
    }
    if ((1U & ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[1U] 
                >> 0xbU) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data 
                                    >> 0x2bU))))) {
        ++(vlSymsp->__Vcoverage[5920]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data 
            = ((0xfffff7ffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data) 
               | ((QData)((IData)((1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[1U] 
                                         >> 0xbU)))) 
                  << 0x2bU));
    }
    if ((1U & ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[1U] 
                >> 0xcU) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data 
                                    >> 0x2cU))))) {
        ++(vlSymsp->__Vcoverage[5921]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data 
            = ((0xffffefffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data) 
               | ((QData)((IData)((1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[1U] 
                                         >> 0xcU)))) 
                  << 0x2cU));
    }
    if ((1U & ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[1U] 
                >> 0xdU) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data 
                                    >> 0x2dU))))) {
        ++(vlSymsp->__Vcoverage[5922]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data 
            = ((0xffffdfffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data) 
               | ((QData)((IData)((1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[1U] 
                                         >> 0xdU)))) 
                  << 0x2dU));
    }
    if ((1U & ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[1U] 
                >> 0xeU) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data 
                                    >> 0x2eU))))) {
        ++(vlSymsp->__Vcoverage[5923]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data 
            = ((0xffffbfffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data) 
               | ((QData)((IData)((1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[1U] 
                                         >> 0xeU)))) 
                  << 0x2eU));
    }
    if ((1U & ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[1U] 
                >> 0xfU) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data 
                                    >> 0x2fU))))) {
        ++(vlSymsp->__Vcoverage[5924]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data 
            = ((0xffff7fffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data) 
               | ((QData)((IData)((1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[1U] 
                                         >> 0xfU)))) 
                  << 0x2fU));
    }
    if ((1U & ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[1U] 
                >> 0x10U) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data 
                                     >> 0x30U))))) {
        ++(vlSymsp->__Vcoverage[5925]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data 
            = ((0xfffeffffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data) 
               | ((QData)((IData)((1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[1U] 
                                         >> 0x10U)))) 
                  << 0x30U));
    }
    if ((1U & ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[1U] 
                >> 0x11U) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data 
                                     >> 0x31U))))) {
        ++(vlSymsp->__Vcoverage[5926]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data 
            = ((0xfffdffffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data) 
               | ((QData)((IData)((1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[1U] 
                                         >> 0x11U)))) 
                  << 0x31U));
    }
    if ((1U & ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[1U] 
                >> 0x12U) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data 
                                     >> 0x32U))))) {
        ++(vlSymsp->__Vcoverage[5927]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data 
            = ((0xfffbffffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data) 
               | ((QData)((IData)((1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[1U] 
                                         >> 0x12U)))) 
                  << 0x32U));
    }
    if ((1U & ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[1U] 
                >> 0x13U) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data 
                                     >> 0x33U))))) {
        ++(vlSymsp->__Vcoverage[5928]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data 
            = ((0xfff7ffffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data) 
               | ((QData)((IData)((1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[1U] 
                                         >> 0x13U)))) 
                  << 0x33U));
    }
    if ((1U & ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[1U] 
                >> 0x14U) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data 
                                     >> 0x34U))))) {
        ++(vlSymsp->__Vcoverage[5929]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data 
            = ((0xffefffffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data) 
               | ((QData)((IData)((1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[1U] 
                                         >> 0x14U)))) 
                  << 0x34U));
    }
    if ((1U & ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[1U] 
                >> 0x15U) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data 
                                     >> 0x35U))))) {
        ++(vlSymsp->__Vcoverage[5930]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data 
            = ((0xffdfffffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data) 
               | ((QData)((IData)((1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[1U] 
                                         >> 0x15U)))) 
                  << 0x35U));
    }
    if ((1U & ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[1U] 
                >> 0x16U) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data 
                                     >> 0x36U))))) {
        ++(vlSymsp->__Vcoverage[5931]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data 
            = ((0xffbfffffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data) 
               | ((QData)((IData)((1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[1U] 
                                         >> 0x16U)))) 
                  << 0x36U));
    }
    if ((1U & ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[1U] 
                >> 0x17U) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data 
                                     >> 0x37U))))) {
        ++(vlSymsp->__Vcoverage[5932]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data 
            = ((0xff7fffffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data) 
               | ((QData)((IData)((1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[1U] 
                                         >> 0x17U)))) 
                  << 0x37U));
    }
    if ((1U & ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[1U] 
                >> 0x18U) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data 
                                     >> 0x38U))))) {
        ++(vlSymsp->__Vcoverage[5933]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data 
            = ((0xfeffffffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data) 
               | ((QData)((IData)((1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[1U] 
                                         >> 0x18U)))) 
                  << 0x38U));
    }
    if ((1U & ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[1U] 
                >> 0x19U) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data 
                                     >> 0x39U))))) {
        ++(vlSymsp->__Vcoverage[5934]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data 
            = ((0xfdffffffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data) 
               | ((QData)((IData)((1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[1U] 
                                         >> 0x19U)))) 
                  << 0x39U));
    }
    if ((1U & ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[1U] 
                >> 0x1aU) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data 
                                     >> 0x3aU))))) {
        ++(vlSymsp->__Vcoverage[5935]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data 
            = ((0xfbffffffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data) 
               | ((QData)((IData)((1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[1U] 
                                         >> 0x1aU)))) 
                  << 0x3aU));
    }
    if ((1U & ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[1U] 
                >> 0x1bU) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data 
                                     >> 0x3bU))))) {
        ++(vlSymsp->__Vcoverage[5936]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data 
            = ((0xf7ffffffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data) 
               | ((QData)((IData)((1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[1U] 
                                         >> 0x1bU)))) 
                  << 0x3bU));
    }
    if ((1U & ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[1U] 
                >> 0x1cU) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data 
                                     >> 0x3cU))))) {
        ++(vlSymsp->__Vcoverage[5937]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data 
            = ((0xefffffffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data) 
               | ((QData)((IData)((1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[1U] 
                                         >> 0x1cU)))) 
                  << 0x3cU));
    }
    if ((1U & ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[1U] 
                >> 0x1dU) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data 
                                     >> 0x3dU))))) {
        ++(vlSymsp->__Vcoverage[5938]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data 
            = ((0xdfffffffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data) 
               | ((QData)((IData)((1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[1U] 
                                         >> 0x1dU)))) 
                  << 0x3dU));
    }
    if ((1U & ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[1U] 
                >> 0x1eU) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data 
                                     >> 0x3eU))))) {
        ++(vlSymsp->__Vcoverage[5939]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data 
            = ((0xbfffffffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data) 
               | ((QData)((IData)((1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[1U] 
                                         >> 0x1eU)))) 
                  << 0x3eU));
    }
    if ((1U & ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[1U] 
                >> 0x1fU) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data 
                                     >> 0x3fU))))) {
        ++(vlSymsp->__Vcoverage[5940]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data 
            = ((0x7fffffffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__alu_exu_io_result_data) 
               | ((QData)((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[1U] 
                                   >> 0x1fU))) << 0x3fU));
    }
    if ((1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[2U] 
               ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[2U]))) {
        ++(vlSymsp->__Vcoverage[6592]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[2U] 
            = ((0xfffffffeU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[2U]) 
               | (1U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[2U]));
    }
    if ((2U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[2U] 
               ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[2U]))) {
        ++(vlSymsp->__Vcoverage[6593]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[2U] 
            = ((0xfffffffdU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[2U]) 
               | (2U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[2U]));
    }
    if ((4U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[2U] 
               ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[2U]))) {
        ++(vlSymsp->__Vcoverage[6594]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[2U] 
            = ((0xfffffffbU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[2U]) 
               | (4U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[2U]));
    }
    if ((8U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[2U] 
               ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[2U]))) {
        ++(vlSymsp->__Vcoverage[6595]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[2U] 
            = ((0xfffffff7U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[2U]) 
               | (8U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[2U]));
    }
    if ((0x10U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[2U] 
                  ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[2U]))) {
        ++(vlSymsp->__Vcoverage[6596]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[2U] 
            = ((0xffffffefU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[2U]) 
               | (0x10U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[2U]));
    }
    if ((0x20U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[2U] 
                  ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[2U]))) {
        ++(vlSymsp->__Vcoverage[6597]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[2U] 
            = ((0xffffffdfU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[2U]) 
               | (0x20U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[2U]));
    }
    if ((0x40U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[2U] 
                  ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[2U]))) {
        ++(vlSymsp->__Vcoverage[6598]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[2U] 
            = ((0xffffffbfU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[2U]) 
               | (0x40U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[2U]));
    }
    if ((0x80U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[2U] 
                  ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[2U]))) {
        ++(vlSymsp->__Vcoverage[6599]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[2U] 
            = ((0xffffff7fU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[2U]) 
               | (0x80U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[2U]));
    }
    if ((0x100U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[2U] 
                   ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[2U]))) {
        ++(vlSymsp->__Vcoverage[6600]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[2U] 
            = ((0xfffffeffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[2U]) 
               | (0x100U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[2U]));
    }
    if ((0x200U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[2U] 
                   ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[2U]))) {
        ++(vlSymsp->__Vcoverage[6601]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[2U] 
            = ((0xfffffdffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[2U]) 
               | (0x200U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[2U]));
    }
    if ((0x400U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[2U] 
                   ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[2U]))) {
        ++(vlSymsp->__Vcoverage[6602]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[2U] 
            = ((0xfffffbffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[2U]) 
               | (0x400U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[2U]));
    }
    if ((0x800U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[2U] 
                   ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[2U]))) {
        ++(vlSymsp->__Vcoverage[6603]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[2U] 
            = ((0xfffff7ffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[2U]) 
               | (0x800U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[2U]));
    }
    if ((0x1000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[2U] 
                    ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[2U]))) {
        ++(vlSymsp->__Vcoverage[6604]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[2U] 
            = ((0xffffefffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[2U]) 
               | (0x1000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[2U]));
    }
    if ((0x2000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[2U] 
                    ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[2U]))) {
        ++(vlSymsp->__Vcoverage[6605]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[2U] 
            = ((0xffffdfffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[2U]) 
               | (0x2000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[2U]));
    }
    if ((0x4000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[2U] 
                    ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[2U]))) {
        ++(vlSymsp->__Vcoverage[6606]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[2U] 
            = ((0xffffbfffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[2U]) 
               | (0x4000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[2U]));
    }
    if ((0x8000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[2U] 
                    ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[2U]))) {
        ++(vlSymsp->__Vcoverage[6607]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[2U] 
            = ((0xffff7fffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[2U]) 
               | (0x8000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[2U]));
    }
    if ((0x10000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[2U] 
                     ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[2U]))) {
        ++(vlSymsp->__Vcoverage[6608]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[2U] 
            = ((0xfffeffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[2U]) 
               | (0x10000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[2U]));
    }
    if ((0x20000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[2U] 
                     ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[2U]))) {
        ++(vlSymsp->__Vcoverage[6609]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[2U] 
            = ((0xfffdffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[2U]) 
               | (0x20000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[2U]));
    }
    if ((0x40000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[2U] 
                     ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[2U]))) {
        ++(vlSymsp->__Vcoverage[6610]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[2U] 
            = ((0xfffbffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[2U]) 
               | (0x40000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[2U]));
    }
    if ((0x80000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[2U] 
                     ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[2U]))) {
        ++(vlSymsp->__Vcoverage[6611]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[2U] 
            = ((0xfff7ffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[2U]) 
               | (0x80000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[2U]));
    }
    if ((0x100000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[2U] 
                      ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[2U]))) {
        ++(vlSymsp->__Vcoverage[6612]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[2U] 
            = ((0xffefffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[2U]) 
               | (0x100000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[2U]));
    }
    if ((0x200000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[2U] 
                      ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[2U]))) {
        ++(vlSymsp->__Vcoverage[6613]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[2U] 
            = ((0xffdfffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[2U]) 
               | (0x200000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[2U]));
    }
    if ((0x400000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[2U] 
                      ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[2U]))) {
        ++(vlSymsp->__Vcoverage[6614]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[2U] 
            = ((0xffbfffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[2U]) 
               | (0x400000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[2U]));
    }
    if ((0x800000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[2U] 
                      ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[2U]))) {
        ++(vlSymsp->__Vcoverage[6615]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[2U] 
            = ((0xff7fffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[2U]) 
               | (0x800000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[2U]));
    }
    if ((0x1000000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[2U] 
                       ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[2U]))) {
        ++(vlSymsp->__Vcoverage[6616]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[2U] 
            = ((0xfeffffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[2U]) 
               | (0x1000000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[2U]));
    }
    if ((0x2000000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[2U] 
                       ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[2U]))) {
        ++(vlSymsp->__Vcoverage[6617]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[2U] 
            = ((0xfdffffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[2U]) 
               | (0x2000000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[2U]));
    }
    if ((0x4000000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[2U] 
                       ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[2U]))) {
        ++(vlSymsp->__Vcoverage[6618]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[2U] 
            = ((0xfbffffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[2U]) 
               | (0x4000000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[2U]));
    }
    if ((0x8000000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[2U] 
                       ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[2U]))) {
        ++(vlSymsp->__Vcoverage[6619]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[2U] 
            = ((0xf7ffffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[2U]) 
               | (0x8000000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[2U]));
    }
    if ((0x10000000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[2U] 
                        ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[2U]))) {
        ++(vlSymsp->__Vcoverage[6620]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[2U] 
            = ((0xefffffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[2U]) 
               | (0x10000000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[2U]));
    }
    if ((0x20000000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[2U] 
                        ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[2U]))) {
        ++(vlSymsp->__Vcoverage[6621]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[2U] 
            = ((0xdfffffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[2U]) 
               | (0x20000000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[2U]));
    }
    if ((0x40000000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[2U] 
                        ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[2U]))) {
        ++(vlSymsp->__Vcoverage[6622]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[2U] 
            = ((0xbfffffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[2U]) 
               | (0x40000000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[2U]));
    }
    if (((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[2U] 
          ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[2U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[6623]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[2U] 
            = ((0x7fffffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[2U]) 
               | (0x80000000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[2U]));
    }
    if ((1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[3U] 
               ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[3U]))) {
        ++(vlSymsp->__Vcoverage[6624]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[3U] 
            = ((0xfffffffeU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[3U]) 
               | (1U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[3U]));
    }
    if ((2U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[3U] 
               ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[3U]))) {
        ++(vlSymsp->__Vcoverage[6625]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[3U] 
            = ((0xfffffffdU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[3U]) 
               | (2U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[3U]));
    }
    if ((4U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[3U] 
               ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[3U]))) {
        ++(vlSymsp->__Vcoverage[6626]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[3U] 
            = ((0xfffffffbU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[3U]) 
               | (4U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[3U]));
    }
    if ((8U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[3U] 
               ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[3U]))) {
        ++(vlSymsp->__Vcoverage[6627]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[3U] 
            = ((0xfffffff7U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[3U]) 
               | (8U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[3U]));
    }
    if ((0x10U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[3U] 
                  ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[3U]))) {
        ++(vlSymsp->__Vcoverage[6628]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[3U] 
            = ((0xffffffefU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[3U]) 
               | (0x10U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[3U]));
    }
    if ((0x20U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[3U] 
                  ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[3U]))) {
        ++(vlSymsp->__Vcoverage[6629]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[3U] 
            = ((0xffffffdfU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[3U]) 
               | (0x20U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[3U]));
    }
    if ((0x40U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[3U] 
                  ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[3U]))) {
        ++(vlSymsp->__Vcoverage[6630]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[3U] 
            = ((0xffffffbfU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[3U]) 
               | (0x40U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[3U]));
    }
    if ((0x80U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[3U] 
                  ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[3U]))) {
        ++(vlSymsp->__Vcoverage[6631]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[3U] 
            = ((0xffffff7fU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[3U]) 
               | (0x80U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[3U]));
    }
    if ((0x100U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[3U] 
                   ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[3U]))) {
        ++(vlSymsp->__Vcoverage[6632]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[3U] 
            = ((0xfffffeffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[3U]) 
               | (0x100U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[3U]));
    }
    if ((0x200U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[3U] 
                   ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[3U]))) {
        ++(vlSymsp->__Vcoverage[6633]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[3U] 
            = ((0xfffffdffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[3U]) 
               | (0x200U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[3U]));
    }
    if ((0x400U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[3U] 
                   ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[3U]))) {
        ++(vlSymsp->__Vcoverage[6634]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[3U] 
            = ((0xfffffbffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[3U]) 
               | (0x400U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[3U]));
    }
    if ((0x800U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[3U] 
                   ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[3U]))) {
        ++(vlSymsp->__Vcoverage[6635]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[3U] 
            = ((0xfffff7ffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[3U]) 
               | (0x800U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[3U]));
    }
    if ((0x1000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[3U] 
                    ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[3U]))) {
        ++(vlSymsp->__Vcoverage[6636]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[3U] 
            = ((0xffffefffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[3U]) 
               | (0x1000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[3U]));
    }
    if ((0x2000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[3U] 
                    ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[3U]))) {
        ++(vlSymsp->__Vcoverage[6637]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[3U] 
            = ((0xffffdfffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[3U]) 
               | (0x2000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[3U]));
    }
    if ((0x4000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[3U] 
                    ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[3U]))) {
        ++(vlSymsp->__Vcoverage[6638]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[3U] 
            = ((0xffffbfffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[3U]) 
               | (0x4000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[3U]));
    }
    if ((0x8000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[3U] 
                    ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[3U]))) {
        ++(vlSymsp->__Vcoverage[6639]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[3U] 
            = ((0xffff7fffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[3U]) 
               | (0x8000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[3U]));
    }
    if ((0x10000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[3U] 
                     ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[3U]))) {
        ++(vlSymsp->__Vcoverage[6640]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[3U] 
            = ((0xfffeffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[3U]) 
               | (0x10000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[3U]));
    }
    if ((0x20000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[3U] 
                     ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[3U]))) {
        ++(vlSymsp->__Vcoverage[6641]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[3U] 
            = ((0xfffdffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[3U]) 
               | (0x20000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[3U]));
    }
    if ((0x40000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[3U] 
                     ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[3U]))) {
        ++(vlSymsp->__Vcoverage[6642]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[3U] 
            = ((0xfffbffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[3U]) 
               | (0x40000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[3U]));
    }
    if ((0x80000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[3U] 
                     ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[3U]))) {
        ++(vlSymsp->__Vcoverage[6643]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[3U] 
            = ((0xfff7ffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[3U]) 
               | (0x80000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[3U]));
    }
    if ((0x100000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[3U] 
                      ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[3U]))) {
        ++(vlSymsp->__Vcoverage[6644]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[3U] 
            = ((0xffefffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[3U]) 
               | (0x100000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[3U]));
    }
    if ((0x200000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[3U] 
                      ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[3U]))) {
        ++(vlSymsp->__Vcoverage[6645]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[3U] 
            = ((0xffdfffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[3U]) 
               | (0x200000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[3U]));
    }
    if ((0x400000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[3U] 
                      ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[3U]))) {
        ++(vlSymsp->__Vcoverage[6646]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[3U] 
            = ((0xffbfffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[3U]) 
               | (0x400000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[3U]));
    }
    if ((0x800000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[3U] 
                      ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[3U]))) {
        ++(vlSymsp->__Vcoverage[6647]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[3U] 
            = ((0xff7fffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[3U]) 
               | (0x800000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[3U]));
    }
    if ((0x1000000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[3U] 
                       ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[3U]))) {
        ++(vlSymsp->__Vcoverage[6648]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[3U] 
            = ((0xfeffffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[3U]) 
               | (0x1000000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[3U]));
    }
    if ((0x2000000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[3U] 
                       ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[3U]))) {
        ++(vlSymsp->__Vcoverage[6649]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[3U] 
            = ((0xfdffffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[3U]) 
               | (0x2000000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[3U]));
    }
    if ((0x4000000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[3U] 
                       ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[3U]))) {
        ++(vlSymsp->__Vcoverage[6650]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[3U] 
            = ((0xfbffffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[3U]) 
               | (0x4000000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[3U]));
    }
    if ((0x8000000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[3U] 
                       ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[3U]))) {
        ++(vlSymsp->__Vcoverage[6651]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[3U] 
            = ((0xf7ffffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[3U]) 
               | (0x8000000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[3U]));
    }
    if ((0x10000000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[3U] 
                        ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[3U]))) {
        ++(vlSymsp->__Vcoverage[6652]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[3U] 
            = ((0xefffffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[3U]) 
               | (0x10000000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[3U]));
    }
    if ((0x20000000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[3U] 
                        ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[3U]))) {
        ++(vlSymsp->__Vcoverage[6653]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[3U] 
            = ((0xdfffffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[3U]) 
               | (0x20000000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[3U]));
    }
    if ((0x40000000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[3U] 
                        ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[3U]))) {
        ++(vlSymsp->__Vcoverage[6654]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[3U] 
            = ((0xbfffffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[3U]) 
               | (0x40000000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[3U]));
    }
    if (((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[3U] 
          ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[3U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[6655]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[3U] 
            = ((0x7fffffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT____Vtogcov__temp_result_data[3U]) 
               | (0x80000000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[3U]));
    }
    if ((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__valid))) {
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[0U] 
            = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[0U];
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[1U] 
            = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[1U];
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[2U] 
            = (1U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_data[2U]);
    } else {
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[0U] 
            = ((2U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__valid))
                ? 0U : ((4U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__valid))
                         ? 0U : ((8U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__valid))
                                  ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu_io_result_data)
                                  : 0U)));
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[1U] 
            = ((2U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__valid))
                ? 0U : ((4U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__valid))
                         ? 0U : ((8U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__valid))
                                  ? (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu_io_result_data 
                                             >> 0x20U))
                                  : 0U)));
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[2U] 
            = (1U & ((2U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__valid))
                      ? 0U : ((4U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__valid))
                               ? 0U : ((8U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__valid))
                                        ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu_io_out_valid)
                                        : 0U))));
    }
    if ((1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[2U] 
               ^ (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__w_rs_en)))) {
        ++(vlSymsp->__Vcoverage[6279]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__w_rs_en 
            = (1U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[2U]);
    }
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT___GEN_11 
        = (1U & ((~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_flush)) 
                 & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__stall)
                     ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_w_rs_en)
                     : vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[2U])));
    if ((1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[0U] 
               ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[0U]))) {
        ++(vlSymsp->__Vcoverage[6214]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[0U] 
            = ((0xfffffffeU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[0U]) 
               | (1U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[0U]));
    }
    if ((2U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[0U] 
               ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[0U]))) {
        ++(vlSymsp->__Vcoverage[6215]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[0U] 
            = ((0xfffffffdU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[0U]) 
               | (2U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[0U]));
    }
    if ((4U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[0U] 
               ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[0U]))) {
        ++(vlSymsp->__Vcoverage[6216]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[0U] 
            = ((0xfffffffbU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[0U]) 
               | (4U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[0U]));
    }
    if ((8U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[0U] 
               ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[0U]))) {
        ++(vlSymsp->__Vcoverage[6217]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[0U] 
            = ((0xfffffff7U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[0U]) 
               | (8U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[0U]));
    }
    if ((0x10U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[0U] 
                  ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[0U]))) {
        ++(vlSymsp->__Vcoverage[6218]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[0U] 
            = ((0xffffffefU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[0U]) 
               | (0x10U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[0U]));
    }
    if ((0x20U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[0U] 
                  ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[0U]))) {
        ++(vlSymsp->__Vcoverage[6219]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[0U] 
            = ((0xffffffdfU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[0U]) 
               | (0x20U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[0U]));
    }
    if ((0x40U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[0U] 
                  ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[0U]))) {
        ++(vlSymsp->__Vcoverage[6220]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[0U] 
            = ((0xffffffbfU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[0U]) 
               | (0x40U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[0U]));
    }
    if ((0x80U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[0U] 
                  ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[0U]))) {
        ++(vlSymsp->__Vcoverage[6221]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[0U] 
            = ((0xffffff7fU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[0U]) 
               | (0x80U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[0U]));
    }
    if ((0x100U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[0U] 
                   ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[0U]))) {
        ++(vlSymsp->__Vcoverage[6222]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[0U] 
            = ((0xfffffeffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[0U]) 
               | (0x100U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[0U]));
    }
    if ((0x200U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[0U] 
                   ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[0U]))) {
        ++(vlSymsp->__Vcoverage[6223]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[0U] 
            = ((0xfffffdffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[0U]) 
               | (0x200U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[0U]));
    }
    if ((0x400U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[0U] 
                   ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[0U]))) {
        ++(vlSymsp->__Vcoverage[6224]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[0U] 
            = ((0xfffffbffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[0U]) 
               | (0x400U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[0U]));
    }
    if ((0x800U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[0U] 
                   ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[0U]))) {
        ++(vlSymsp->__Vcoverage[6225]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[0U] 
            = ((0xfffff7ffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[0U]) 
               | (0x800U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[0U]));
    }
    if ((0x1000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[0U] 
                    ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[0U]))) {
        ++(vlSymsp->__Vcoverage[6226]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[0U] 
            = ((0xffffefffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[0U]) 
               | (0x1000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[0U]));
    }
    if ((0x2000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[0U] 
                    ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[0U]))) {
        ++(vlSymsp->__Vcoverage[6227]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[0U] 
            = ((0xffffdfffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[0U]) 
               | (0x2000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[0U]));
    }
    if ((0x4000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[0U] 
                    ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[0U]))) {
        ++(vlSymsp->__Vcoverage[6228]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[0U] 
            = ((0xffffbfffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[0U]) 
               | (0x4000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[0U]));
    }
    if ((0x8000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[0U] 
                    ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[0U]))) {
        ++(vlSymsp->__Vcoverage[6229]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[0U] 
            = ((0xffff7fffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[0U]) 
               | (0x8000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[0U]));
    }
    if ((0x10000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[0U] 
                     ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[0U]))) {
        ++(vlSymsp->__Vcoverage[6230]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[0U] 
            = ((0xfffeffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[0U]) 
               | (0x10000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[0U]));
    }
    if ((0x20000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[0U] 
                     ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[0U]))) {
        ++(vlSymsp->__Vcoverage[6231]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[0U] 
            = ((0xfffdffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[0U]) 
               | (0x20000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[0U]));
    }
    if ((0x40000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[0U] 
                     ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[0U]))) {
        ++(vlSymsp->__Vcoverage[6232]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[0U] 
            = ((0xfffbffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[0U]) 
               | (0x40000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[0U]));
    }
    if ((0x80000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[0U] 
                     ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[0U]))) {
        ++(vlSymsp->__Vcoverage[6233]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[0U] 
            = ((0xfff7ffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[0U]) 
               | (0x80000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[0U]));
    }
    if ((0x100000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[0U] 
                      ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[0U]))) {
        ++(vlSymsp->__Vcoverage[6234]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[0U] 
            = ((0xffefffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[0U]) 
               | (0x100000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[0U]));
    }
    if ((0x200000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[0U] 
                      ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[0U]))) {
        ++(vlSymsp->__Vcoverage[6235]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[0U] 
            = ((0xffdfffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[0U]) 
               | (0x200000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[0U]));
    }
    if ((0x400000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[0U] 
                      ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[0U]))) {
        ++(vlSymsp->__Vcoverage[6236]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[0U] 
            = ((0xffbfffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[0U]) 
               | (0x400000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[0U]));
    }
    if ((0x800000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[0U] 
                      ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[0U]))) {
        ++(vlSymsp->__Vcoverage[6237]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[0U] 
            = ((0xff7fffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[0U]) 
               | (0x800000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[0U]));
    }
    if ((0x1000000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[0U] 
                       ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[0U]))) {
        ++(vlSymsp->__Vcoverage[6238]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[0U] 
            = ((0xfeffffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[0U]) 
               | (0x1000000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[0U]));
    }
    if ((0x2000000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[0U] 
                       ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[0U]))) {
        ++(vlSymsp->__Vcoverage[6239]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[0U] 
            = ((0xfdffffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[0U]) 
               | (0x2000000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[0U]));
    }
    if ((0x4000000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[0U] 
                       ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[0U]))) {
        ++(vlSymsp->__Vcoverage[6240]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[0U] 
            = ((0xfbffffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[0U]) 
               | (0x4000000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[0U]));
    }
    if ((0x8000000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[0U] 
                       ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[0U]))) {
        ++(vlSymsp->__Vcoverage[6241]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[0U] 
            = ((0xf7ffffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[0U]) 
               | (0x8000000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[0U]));
    }
    if ((0x10000000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[0U] 
                        ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[0U]))) {
        ++(vlSymsp->__Vcoverage[6242]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[0U] 
            = ((0xefffffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[0U]) 
               | (0x10000000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[0U]));
    }
    if ((0x20000000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[0U] 
                        ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[0U]))) {
        ++(vlSymsp->__Vcoverage[6243]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[0U] 
            = ((0xdfffffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[0U]) 
               | (0x20000000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[0U]));
    }
    if ((0x40000000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[0U] 
                        ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[0U]))) {
        ++(vlSymsp->__Vcoverage[6244]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[0U] 
            = ((0xbfffffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[0U]) 
               | (0x40000000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[0U]));
    }
    if (((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[0U] 
          ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[0U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[6245]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[0U] 
            = ((0x7fffffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[0U]) 
               | (0x80000000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[0U]));
    }
    if ((1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[1U] 
               ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[1U]))) {
        ++(vlSymsp->__Vcoverage[6246]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[1U] 
            = ((0xfffffffeU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[1U]) 
               | (1U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[1U]));
    }
    if ((2U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[1U] 
               ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[1U]))) {
        ++(vlSymsp->__Vcoverage[6247]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[1U] 
            = ((0xfffffffdU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[1U]) 
               | (2U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[1U]));
    }
    if ((4U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[1U] 
               ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[1U]))) {
        ++(vlSymsp->__Vcoverage[6248]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[1U] 
            = ((0xfffffffbU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[1U]) 
               | (4U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[1U]));
    }
    if ((8U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[1U] 
               ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[1U]))) {
        ++(vlSymsp->__Vcoverage[6249]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[1U] 
            = ((0xfffffff7U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[1U]) 
               | (8U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[1U]));
    }
    if ((0x10U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[1U] 
                  ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[1U]))) {
        ++(vlSymsp->__Vcoverage[6250]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[1U] 
            = ((0xffffffefU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[1U]) 
               | (0x10U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[1U]));
    }
    if ((0x20U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[1U] 
                  ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[1U]))) {
        ++(vlSymsp->__Vcoverage[6251]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[1U] 
            = ((0xffffffdfU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[1U]) 
               | (0x20U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[1U]));
    }
    if ((0x40U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[1U] 
                  ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[1U]))) {
        ++(vlSymsp->__Vcoverage[6252]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[1U] 
            = ((0xffffffbfU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[1U]) 
               | (0x40U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[1U]));
    }
    if ((0x80U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[1U] 
                  ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[1U]))) {
        ++(vlSymsp->__Vcoverage[6253]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[1U] 
            = ((0xffffff7fU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[1U]) 
               | (0x80U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[1U]));
    }
    if ((0x100U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[1U] 
                   ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[1U]))) {
        ++(vlSymsp->__Vcoverage[6254]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[1U] 
            = ((0xfffffeffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[1U]) 
               | (0x100U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[1U]));
    }
    if ((0x200U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[1U] 
                   ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[1U]))) {
        ++(vlSymsp->__Vcoverage[6255]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[1U] 
            = ((0xfffffdffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[1U]) 
               | (0x200U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[1U]));
    }
    if ((0x400U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[1U] 
                   ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[1U]))) {
        ++(vlSymsp->__Vcoverage[6256]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[1U] 
            = ((0xfffffbffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[1U]) 
               | (0x400U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[1U]));
    }
    if ((0x800U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[1U] 
                   ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[1U]))) {
        ++(vlSymsp->__Vcoverage[6257]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[1U] 
            = ((0xfffff7ffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[1U]) 
               | (0x800U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[1U]));
    }
    if ((0x1000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[1U] 
                    ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[1U]))) {
        ++(vlSymsp->__Vcoverage[6258]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[1U] 
            = ((0xffffefffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[1U]) 
               | (0x1000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[1U]));
    }
    if ((0x2000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[1U] 
                    ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[1U]))) {
        ++(vlSymsp->__Vcoverage[6259]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[1U] 
            = ((0xffffdfffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[1U]) 
               | (0x2000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[1U]));
    }
    if ((0x4000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[1U] 
                    ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[1U]))) {
        ++(vlSymsp->__Vcoverage[6260]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[1U] 
            = ((0xffffbfffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[1U]) 
               | (0x4000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[1U]));
    }
    if ((0x8000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[1U] 
                    ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[1U]))) {
        ++(vlSymsp->__Vcoverage[6261]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[1U] 
            = ((0xffff7fffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[1U]) 
               | (0x8000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[1U]));
    }
    if ((0x10000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[1U] 
                     ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[1U]))) {
        ++(vlSymsp->__Vcoverage[6262]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[1U] 
            = ((0xfffeffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[1U]) 
               | (0x10000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[1U]));
    }
    if ((0x20000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[1U] 
                     ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[1U]))) {
        ++(vlSymsp->__Vcoverage[6263]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[1U] 
            = ((0xfffdffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[1U]) 
               | (0x20000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[1U]));
    }
    if ((0x40000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[1U] 
                     ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[1U]))) {
        ++(vlSymsp->__Vcoverage[6264]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[1U] 
            = ((0xfffbffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[1U]) 
               | (0x40000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[1U]));
    }
    if ((0x80000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[1U] 
                     ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[1U]))) {
        ++(vlSymsp->__Vcoverage[6265]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[1U] 
            = ((0xfff7ffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[1U]) 
               | (0x80000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[1U]));
    }
    if ((0x100000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[1U] 
                      ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[1U]))) {
        ++(vlSymsp->__Vcoverage[6266]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[1U] 
            = ((0xffefffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[1U]) 
               | (0x100000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[1U]));
    }
    if ((0x200000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[1U] 
                      ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[1U]))) {
        ++(vlSymsp->__Vcoverage[6267]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[1U] 
            = ((0xffdfffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[1U]) 
               | (0x200000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[1U]));
    }
    if ((0x400000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[1U] 
                      ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[1U]))) {
        ++(vlSymsp->__Vcoverage[6268]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[1U] 
            = ((0xffbfffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[1U]) 
               | (0x400000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[1U]));
    }
    if ((0x800000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[1U] 
                      ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[1U]))) {
        ++(vlSymsp->__Vcoverage[6269]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[1U] 
            = ((0xff7fffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[1U]) 
               | (0x800000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[1U]));
    }
    if ((0x1000000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[1U] 
                       ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[1U]))) {
        ++(vlSymsp->__Vcoverage[6270]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[1U] 
            = ((0xfeffffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[1U]) 
               | (0x1000000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[1U]));
    }
    if ((0x2000000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[1U] 
                       ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[1U]))) {
        ++(vlSymsp->__Vcoverage[6271]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[1U] 
            = ((0xfdffffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[1U]) 
               | (0x2000000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[1U]));
    }
    if ((0x4000000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[1U] 
                       ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[1U]))) {
        ++(vlSymsp->__Vcoverage[6272]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[1U] 
            = ((0xfbffffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[1U]) 
               | (0x4000000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[1U]));
    }
    if ((0x8000000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[1U] 
                       ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[1U]))) {
        ++(vlSymsp->__Vcoverage[6273]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[1U] 
            = ((0xf7ffffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[1U]) 
               | (0x8000000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[1U]));
    }
    if ((0x10000000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[1U] 
                        ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[1U]))) {
        ++(vlSymsp->__Vcoverage[6274]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[1U] 
            = ((0xefffffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[1U]) 
               | (0x10000000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[1U]));
    }
    if ((0x20000000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[1U] 
                        ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[1U]))) {
        ++(vlSymsp->__Vcoverage[6275]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[1U] 
            = ((0xdfffffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[1U]) 
               | (0x20000000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[1U]));
    }
    if ((0x40000000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[1U] 
                        ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[1U]))) {
        ++(vlSymsp->__Vcoverage[6276]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[1U] 
            = ((0xbfffffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[1U]) 
               | (0x40000000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[1U]));
    }
    if (((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[1U] 
          ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[1U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[6277]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[1U] 
            = ((0x7fffffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[1U]) 
               | (0x80000000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[1U]));
    }
    if ((1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[2U] 
               ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[2U]))) {
        ++(vlSymsp->__Vcoverage[6278]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__temp_w_en_and_rs_data[2U] 
            = (1U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__temp_w_en_and_rs_data[2U]);
    }
}
