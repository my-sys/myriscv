// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vriscv_soc.h for the primary calling header

#include "Vriscv_soc___024root.h"
#include "Vriscv_soc__Syms.h"

#include "verilated_dpi.h"

//==========

VL_INLINE_OPT void Vriscv_soc___024root___sequent__TOP__3(Vriscv_soc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vriscv_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv_soc___024root___sequent__TOP__3\n"); );
    // Body
    vlSelf->__Vdly__riscv_soc__DOT__axi_ram__DOT__reg_r_state 
        = vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_r_state;
    vlSelf->__Vdly__riscv_soc__DOT__core__DOT__clint_de__DOT__reg_state 
        = vlSelf->riscv_soc__DOT__core__DOT__clint_de__DOT__reg_state;
    vlSelf->__Vdly__riscv_soc__DOT__core__DOT__d_cache__DOT__reg_offset 
        = vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_offset;
}

void Vriscv_soc___024unit____Vdpiimwrap_ramCtrl_TOP____024unit(QData/*63:0*/ raddr, QData/*63:0*/ &rdata, CData/*0:0*/ rflag, QData/*63:0*/ waddr, QData/*63:0*/ wdata, QData/*63:0*/ wmask, CData/*0:0*/ wen);

VL_INLINE_OPT void Vriscv_soc___024root___sequent__TOP__4(Vriscv_soc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vriscv_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv_soc___024root___sequent__TOP__4\n"); );
    // Variables
    CData/*1:0*/ riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___GEN_13;
    CData/*1:0*/ riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___GEN_26;
    CData/*1:0*/ riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___GEN_39;
    CData/*1:0*/ riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___GEN_52;
    CData/*1:0*/ riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___GEN_63;
    CData/*1:0*/ riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___GEN_215;
    CData/*1:0*/ riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___GEN_228;
    CData/*1:0*/ riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___GEN_241;
    CData/*1:0*/ riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___GEN_254;
    CData/*1:0*/ __Vdly__riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_bus_state;
    CData/*1:0*/ __Vdly__riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state;
    CData/*1:0*/ __Vdly__riscv_soc__DOT__core__DOT__cross_bar__DOT__reg_r_cnt;
    CData/*5:0*/ __Vdlyvdim0__riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB__v0;
    CData/*0:0*/ __Vdlyvset__riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB__v0;
    CData/*2:0*/ __Vdlyvdim0__riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__RAS__v0;
    CData/*0:0*/ __Vdlyvset__riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__RAS__v0;
    CData/*0:0*/ __Vdly__riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_bus_is_w;
    CData/*0:0*/ __Vdly__riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_ls_state;
    CData/*1:0*/ __Vdly__riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state;
    CData/*0:0*/ __Vdly__riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_dest_is_w;
    CData/*1:0*/ __Vdly__riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_state;
    CData/*0:0*/ __Vdly__riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_dest_is_w;
    CData/*4:0*/ __Vdlyvdim0__riscv_soc__DOT__core__DOT__commit__DOT__regfile__v0;
    CData/*0:0*/ __Vdlyvset__riscv_soc__DOT__core__DOT__commit__DOT__regfile__v0;
    VlWide<4>/*127:0*/ __Vdlyvval__riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB__v0;
    VlWide<4>/*127:0*/ __Vtemp1325;
    VlWide<4>/*127:0*/ __Vtemp1326;
    VlWide<4>/*127:0*/ __Vtemp1327;
    VlWide<4>/*127:0*/ __Vtemp1328;
    VlWide<4>/*127:0*/ __Vtemp1329;
    VlWide<4>/*127:0*/ __Vtemp1330;
    VlWide<4>/*127:0*/ __Vtemp1331;
    VlWide<4>/*127:0*/ __Vtemp1332;
    VlWide<4>/*127:0*/ __Vtemp1333;
    VlWide<4>/*127:0*/ __Vtemp1334;
    VlWide<4>/*127:0*/ __Vtemp1335;
    VlWide<4>/*127:0*/ __Vtemp1336;
    VlWide<4>/*127:0*/ __Vtemp1337;
    VlWide<4>/*127:0*/ __Vtemp1338;
    VlWide<4>/*127:0*/ __Vtemp1339;
    VlWide<4>/*127:0*/ __Vtemp1340;
    VlWide<4>/*127:0*/ __Vtemp1341;
    VlWide<4>/*127:0*/ __Vtemp1342;
    VlWide<4>/*127:0*/ __Vtemp1343;
    VlWide<4>/*127:0*/ __Vtemp1344;
    VlWide<4>/*127:0*/ __Vtemp1345;
    VlWide<4>/*127:0*/ __Vtemp1346;
    VlWide<4>/*127:0*/ __Vtemp1347;
    VlWide<4>/*127:0*/ __Vtemp1348;
    VlWide<4>/*127:0*/ __Vtemp1349;
    VlWide<4>/*127:0*/ __Vtemp1350;
    VlWide<4>/*127:0*/ __Vtemp1351;
    VlWide<4>/*127:0*/ __Vtemp1352;
    VlWide<4>/*127:0*/ __Vtemp1353;
    VlWide<4>/*127:0*/ __Vtemp1354;
    VlWide<4>/*127:0*/ __Vtemp1355;
    VlWide<4>/*127:0*/ __Vtemp1356;
    VlWide<4>/*127:0*/ __Vtemp1357;
    VlWide<4>/*127:0*/ __Vtemp1358;
    VlWide<4>/*127:0*/ __Vtemp1359;
    VlWide<4>/*127:0*/ __Vtemp1360;
    VlWide<4>/*127:0*/ __Vtemp1361;
    VlWide<4>/*127:0*/ __Vtemp1362;
    VlWide<4>/*127:0*/ __Vtemp1363;
    VlWide<4>/*127:0*/ __Vtemp1364;
    VlWide<4>/*127:0*/ __Vtemp1365;
    VlWide<4>/*127:0*/ __Vtemp1366;
    VlWide<4>/*127:0*/ __Vtemp1367;
    VlWide<4>/*127:0*/ __Vtemp1368;
    VlWide<4>/*127:0*/ __Vtemp1369;
    VlWide<4>/*127:0*/ __Vtemp1370;
    VlWide<4>/*127:0*/ __Vtemp1371;
    VlWide<4>/*127:0*/ __Vtemp1372;
    VlWide<4>/*127:0*/ __Vtemp1373;
    VlWide<4>/*127:0*/ __Vtemp1374;
    VlWide<4>/*127:0*/ __Vtemp1375;
    VlWide<4>/*127:0*/ __Vtemp1376;
    VlWide<4>/*127:0*/ __Vtemp1377;
    VlWide<4>/*127:0*/ __Vtemp1378;
    VlWide<4>/*127:0*/ __Vtemp1379;
    VlWide<4>/*127:0*/ __Vtemp1380;
    VlWide<4>/*127:0*/ __Vtemp1381;
    VlWide<4>/*127:0*/ __Vtemp1382;
    VlWide<4>/*127:0*/ __Vtemp1383;
    VlWide<4>/*127:0*/ __Vtemp1384;
    VlWide<4>/*127:0*/ __Vtemp1385;
    VlWide<4>/*127:0*/ __Vtemp1386;
    VlWide<4>/*127:0*/ __Vtemp1387;
    VlWide<4>/*127:0*/ __Vtemp1388;
    VlWide<4>/*127:0*/ __Vtemp1389;
    VlWide<4>/*127:0*/ __Vtemp1390;
    VlWide<4>/*127:0*/ __Vtemp1391;
    VlWide<4>/*127:0*/ __Vtemp1392;
    VlWide<4>/*127:0*/ __Vtemp1393;
    VlWide<4>/*127:0*/ __Vtemp1394;
    VlWide<4>/*127:0*/ __Vtemp1395;
    VlWide<4>/*127:0*/ __Vtemp1396;
    VlWide<4>/*127:0*/ __Vtemp1397;
    VlWide<4>/*127:0*/ __Vtemp1398;
    VlWide<4>/*127:0*/ __Vtemp1399;
    VlWide<4>/*127:0*/ __Vtemp1400;
    VlWide<4>/*127:0*/ __Vtemp1401;
    VlWide<4>/*127:0*/ __Vtemp1402;
    VlWide<4>/*127:0*/ __Vtemp1403;
    VlWide<4>/*127:0*/ __Vtemp1404;
    VlWide<4>/*127:0*/ __Vtemp1405;
    VlWide<4>/*127:0*/ __Vtemp1406;
    VlWide<4>/*127:0*/ __Vtemp1407;
    VlWide<4>/*127:0*/ __Vtemp1408;
    VlWide<4>/*127:0*/ __Vtemp1409;
    VlWide<4>/*127:0*/ __Vtemp1410;
    VlWide<4>/*127:0*/ __Vtemp1411;
    VlWide<4>/*127:0*/ __Vtemp1412;
    VlWide<4>/*127:0*/ __Vtemp1413;
    VlWide<4>/*127:0*/ __Vtemp1414;
    VlWide<4>/*127:0*/ __Vtemp1415;
    VlWide<4>/*127:0*/ __Vtemp1416;
    VlWide<4>/*127:0*/ __Vtemp1417;
    VlWide<4>/*127:0*/ __Vtemp1418;
    VlWide<4>/*127:0*/ __Vtemp1419;
    VlWide<4>/*127:0*/ __Vtemp1420;
    VlWide<4>/*127:0*/ __Vtemp1421;
    VlWide<4>/*127:0*/ __Vtemp1422;
    VlWide<4>/*127:0*/ __Vtemp1423;
    VlWide<4>/*127:0*/ __Vtemp1424;
    VlWide<4>/*127:0*/ __Vtemp1425;
    VlWide<4>/*127:0*/ __Vtemp1426;
    VlWide<4>/*127:0*/ __Vtemp1427;
    VlWide<4>/*127:0*/ __Vtemp1428;
    VlWide<4>/*127:0*/ __Vtemp1429;
    VlWide<4>/*127:0*/ __Vtemp1430;
    VlWide<4>/*127:0*/ __Vtemp1431;
    VlWide<4>/*127:0*/ __Vtemp1432;
    VlWide<4>/*127:0*/ __Vtemp1433;
    VlWide<4>/*127:0*/ __Vtemp1434;
    VlWide<4>/*127:0*/ __Vtemp1435;
    VlWide<4>/*127:0*/ __Vtemp1436;
    VlWide<4>/*127:0*/ __Vtemp1437;
    VlWide<4>/*127:0*/ __Vtemp1438;
    VlWide<4>/*127:0*/ __Vtemp1439;
    VlWide<4>/*127:0*/ __Vtemp1440;
    VlWide<4>/*127:0*/ __Vtemp1441;
    VlWide<4>/*127:0*/ __Vtemp1442;
    VlWide<4>/*127:0*/ __Vtemp1443;
    VlWide<4>/*127:0*/ __Vtemp1444;
    VlWide<4>/*127:0*/ __Vtemp1445;
    VlWide<4>/*127:0*/ __Vtemp1446;
    VlWide<4>/*127:0*/ __Vtemp1447;
    VlWide<4>/*127:0*/ __Vtemp1448;
    VlWide<3>/*95:0*/ __Vtemp1483;
    VlWide<3>/*95:0*/ __Vtemp1484;
    VlWide<3>/*95:0*/ __Vtemp1485;
    VlWide<3>/*95:0*/ __Vtemp1486;
    VlWide<3>/*95:0*/ __Vtemp1487;
    VlWide<4>/*127:0*/ __Vtemp1496;
    VlWide<4>/*127:0*/ __Vtemp1497;
    VlWide<4>/*127:0*/ __Vtemp1498;
    VlWide<4>/*127:0*/ __Vtemp1499;
    VlWide<4>/*127:0*/ __Vtemp1500;
    VlWide<4>/*127:0*/ __Vtemp1501;
    VlWide<4>/*127:0*/ __Vtemp1502;
    VlWide<4>/*127:0*/ __Vtemp1503;
    VlWide<4>/*127:0*/ __Vtemp1504;
    VlWide<4>/*127:0*/ __Vtemp1505;
    VlWide<4>/*127:0*/ __Vtemp1506;
    VlWide<4>/*127:0*/ __Vtemp1507;
    VlWide<4>/*127:0*/ __Vtemp1508;
    VlWide<4>/*127:0*/ __Vtemp1509;
    VlWide<4>/*127:0*/ __Vtemp1510;
    VlWide<4>/*127:0*/ __Vtemp1511;
    VlWide<4>/*127:0*/ __Vtemp1512;
    VlWide<4>/*127:0*/ __Vtemp1513;
    VlWide<4>/*127:0*/ __Vtemp1514;
    VlWide<4>/*127:0*/ __Vtemp1515;
    VlWide<4>/*127:0*/ __Vtemp1516;
    VlWide<4>/*127:0*/ __Vtemp1517;
    VlWide<4>/*127:0*/ __Vtemp1518;
    VlWide<4>/*127:0*/ __Vtemp1519;
    VlWide<4>/*127:0*/ __Vtemp1520;
    VlWide<4>/*127:0*/ __Vtemp1521;
    VlWide<4>/*127:0*/ __Vtemp1522;
    VlWide<4>/*127:0*/ __Vtemp1523;
    VlWide<4>/*127:0*/ __Vtemp1524;
    VlWide<4>/*127:0*/ __Vtemp1525;
    VlWide<4>/*127:0*/ __Vtemp1526;
    VlWide<4>/*127:0*/ __Vtemp1527;
    VlWide<4>/*127:0*/ __Vtemp1528;
    VlWide<4>/*127:0*/ __Vtemp1529;
    VlWide<4>/*127:0*/ __Vtemp1530;
    VlWide<4>/*127:0*/ __Vtemp1531;
    VlWide<4>/*127:0*/ __Vtemp1532;
    VlWide<4>/*127:0*/ __Vtemp1533;
    VlWide<4>/*127:0*/ __Vtemp1534;
    VlWide<4>/*127:0*/ __Vtemp1535;
    VlWide<4>/*127:0*/ __Vtemp1536;
    VlWide<4>/*127:0*/ __Vtemp1537;
    VlWide<4>/*127:0*/ __Vtemp1538;
    VlWide<4>/*127:0*/ __Vtemp1539;
    VlWide<4>/*127:0*/ __Vtemp1540;
    VlWide<4>/*127:0*/ __Vtemp1541;
    VlWide<4>/*127:0*/ __Vtemp1542;
    VlWide<4>/*127:0*/ __Vtemp1543;
    VlWide<4>/*127:0*/ __Vtemp1544;
    VlWide<4>/*127:0*/ __Vtemp1545;
    VlWide<4>/*127:0*/ __Vtemp1546;
    VlWide<4>/*127:0*/ __Vtemp1547;
    VlWide<4>/*127:0*/ __Vtemp1548;
    VlWide<4>/*127:0*/ __Vtemp1549;
    VlWide<4>/*127:0*/ __Vtemp1550;
    VlWide<4>/*127:0*/ __Vtemp1551;
    VlWide<4>/*127:0*/ __Vtemp1552;
    VlWide<4>/*127:0*/ __Vtemp1553;
    VlWide<4>/*127:0*/ __Vtemp1554;
    VlWide<4>/*127:0*/ __Vtemp1555;
    VlWide<4>/*127:0*/ __Vtemp1556;
    VlWide<4>/*127:0*/ __Vtemp1557;
    VlWide<4>/*127:0*/ __Vtemp1558;
    VlWide<4>/*127:0*/ __Vtemp1559;
    VlWide<4>/*127:0*/ __Vtemp1560;
    VlWide<4>/*127:0*/ __Vtemp1561;
    VlWide<4>/*127:0*/ __Vtemp1562;
    VlWide<4>/*127:0*/ __Vtemp1563;
    VlWide<4>/*127:0*/ __Vtemp1564;
    VlWide<4>/*127:0*/ __Vtemp1565;
    VlWide<4>/*127:0*/ __Vtemp1566;
    VlWide<4>/*127:0*/ __Vtemp1567;
    VlWide<4>/*127:0*/ __Vtemp1568;
    VlWide<4>/*127:0*/ __Vtemp1569;
    VlWide<4>/*127:0*/ __Vtemp1570;
    VlWide<4>/*127:0*/ __Vtemp1571;
    VlWide<4>/*127:0*/ __Vtemp1572;
    VlWide<4>/*127:0*/ __Vtemp1573;
    VlWide<4>/*127:0*/ __Vtemp1574;
    VlWide<4>/*127:0*/ __Vtemp1575;
    VlWide<4>/*127:0*/ __Vtemp1576;
    VlWide<4>/*127:0*/ __Vtemp1577;
    VlWide<4>/*127:0*/ __Vtemp1578;
    VlWide<4>/*127:0*/ __Vtemp1579;
    VlWide<4>/*127:0*/ __Vtemp1580;
    VlWide<4>/*127:0*/ __Vtemp1581;
    VlWide<4>/*127:0*/ __Vtemp1582;
    VlWide<4>/*127:0*/ __Vtemp1583;
    VlWide<4>/*127:0*/ __Vtemp1584;
    VlWide<4>/*127:0*/ __Vtemp1585;
    VlWide<4>/*127:0*/ __Vtemp1586;
    VlWide<4>/*127:0*/ __Vtemp1587;
    VlWide<4>/*127:0*/ __Vtemp1588;
    VlWide<4>/*127:0*/ __Vtemp1589;
    VlWide<4>/*127:0*/ __Vtemp1590;
    VlWide<4>/*127:0*/ __Vtemp1591;
    VlWide<4>/*127:0*/ __Vtemp1592;
    VlWide<4>/*127:0*/ __Vtemp1593;
    VlWide<4>/*127:0*/ __Vtemp1594;
    VlWide<4>/*127:0*/ __Vtemp1595;
    VlWide<4>/*127:0*/ __Vtemp1596;
    VlWide<4>/*127:0*/ __Vtemp1597;
    VlWide<4>/*127:0*/ __Vtemp1598;
    VlWide<4>/*127:0*/ __Vtemp1599;
    VlWide<4>/*127:0*/ __Vtemp1600;
    VlWide<4>/*127:0*/ __Vtemp1601;
    VlWide<4>/*127:0*/ __Vtemp1602;
    VlWide<4>/*127:0*/ __Vtemp1603;
    VlWide<4>/*127:0*/ __Vtemp1604;
    VlWide<4>/*127:0*/ __Vtemp1605;
    VlWide<4>/*127:0*/ __Vtemp1606;
    VlWide<4>/*127:0*/ __Vtemp1607;
    VlWide<4>/*127:0*/ __Vtemp1608;
    VlWide<4>/*127:0*/ __Vtemp1609;
    VlWide<4>/*127:0*/ __Vtemp1610;
    VlWide<4>/*127:0*/ __Vtemp1611;
    VlWide<4>/*127:0*/ __Vtemp1612;
    VlWide<4>/*127:0*/ __Vtemp1613;
    VlWide<4>/*127:0*/ __Vtemp1614;
    VlWide<4>/*127:0*/ __Vtemp1615;
    VlWide<4>/*127:0*/ __Vtemp1616;
    VlWide<4>/*127:0*/ __Vtemp1617;
    VlWide<4>/*127:0*/ __Vtemp1618;
    VlWide<4>/*127:0*/ __Vtemp1619;
    VlWide<4>/*127:0*/ __Vtemp1623;
    VlWide<4>/*127:0*/ __Vtemp1624;
    VlWide<4>/*127:0*/ __Vtemp1657;
    VlWide<4>/*127:0*/ __Vtemp1658;
    VlWide<4>/*127:0*/ __Vtemp1659;
    VlWide<4>/*127:0*/ __Vtemp1660;
    VlWide<3>/*95:0*/ __Vtemp1663;
    VlWide<3>/*95:0*/ __Vtemp1664;
    VlWide<5>/*159:0*/ __Vtemp1666;
    VlWide<5>/*159:0*/ __Vtemp1668;
    VlWide<5>/*159:0*/ __Vtemp1669;
    VlWide<5>/*159:0*/ __Vtemp1670;
    VlWide<5>/*159:0*/ __Vtemp1671;
    VlWide<5>/*159:0*/ __Vtemp1672;
    VlWide<5>/*159:0*/ __Vtemp1674;
    VlWide<5>/*159:0*/ __Vtemp1675;
    VlWide<5>/*159:0*/ __Vtemp1676;
    VlWide<5>/*159:0*/ __Vtemp1677;
    VlWide<5>/*159:0*/ __Vtemp1678;
    VlWide<5>/*159:0*/ __Vtemp1680;
    VlWide<5>/*159:0*/ __Vtemp1681;
    VlWide<5>/*159:0*/ __Vtemp1682;
    VlWide<5>/*159:0*/ __Vtemp1690;
    VlWide<5>/*159:0*/ __Vtemp1691;
    VlWide<5>/*159:0*/ __Vtemp1699;
    VlWide<5>/*159:0*/ __Vtemp1700;
    VlWide<5>/*159:0*/ __Vtemp1704;
    VlWide<3>/*95:0*/ __Vtemp1708;
    VlWide<3>/*95:0*/ __Vtemp1709;
    VlWide<3>/*95:0*/ __Vtemp1710;
    VlWide<5>/*159:0*/ __Vtemp1715;
    VlWide<5>/*159:0*/ __Vtemp1716;
    VlWide<5>/*159:0*/ __Vtemp1717;
    VlWide<3>/*95:0*/ __Vtemp1721;
    VlWide<3>/*95:0*/ __Vtemp1722;
    VlWide<3>/*95:0*/ __Vtemp1723;
    VlWide<4>/*127:0*/ __Vtemp1725;
    VlWide<4>/*127:0*/ __Vtemp1726;
    VlWide<4>/*127:0*/ __Vtemp1727;
    VlWide<4>/*127:0*/ __Vtemp1728;
    VlWide<3>/*95:0*/ __Vtemp1730;
    VlWide<3>/*95:0*/ __Vtemp1731;
    VlWide<3>/*95:0*/ __Vtemp1732;
    VlWide<3>/*95:0*/ __Vtemp1733;
    VlWide<3>/*95:0*/ __Vtemp1734;
    VlWide<3>/*95:0*/ __Vtemp1740;
    VlWide<4>/*127:0*/ __Vtemp1743;
    QData/*63:0*/ __Vtask_ramCtrl__0__rdata;
    QData/*63:0*/ __Vdlyvval__riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__RAS__v0;
    QData/*63:0*/ __Vdlyvval__riscv_soc__DOT__core__DOT__commit__DOT__regfile__v0;
    // Body
    __Vdly__riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state 
        = vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state;
    Vriscv_soc___024unit____Vdpiimwrap_ramCtrl_TOP____024unit(
                                                              ((IData)(vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_r_valid)
                                                                ? vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_raddr
                                                                : vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_AXI_Bus_ar_bits_araddr), __Vtask_ramCtrl__0__rdata, (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_AXI_Bus_ar_valid), vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_w_addr, 
                                                              ((0U 
                                                                == (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__w_chosen))
                                                                ? vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_w_wdata
                                                                : 
                                                               ((1U 
                                                                 == (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__w_chosen))
                                                                 ? 
                                                                (((QData)((IData)(
                                                                                vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT___io_bus_bits_wdata_T[1U])) 
                                                                  << 0x20U) 
                                                                 | (QData)((IData)(
                                                                                vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT___io_bus_bits_wdata_T[0U])))
                                                                 : 0ULL)), 
                                                              (((QData)((IData)(
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
                                                                                 : 0U))))))), 
                                                              ((IData)(vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_is_w) 
                                                               & (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_AXI_Bus_w_valid)));
    vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata 
        = __Vtask_ramCtrl__0__rdata;
    __Vdly__riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_state 
        = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_state;
    __Vdly__riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_dest_is_w 
        = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_dest_is_w;
    __Vdly__riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_bus_is_w 
        = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_bus_is_w;
    __Vdly__riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state 
        = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state;
    __Vdly__riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_ls_state 
        = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_ls_state;
    __Vdly__riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_dest_is_w 
        = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_dest_is_w;
    __Vdlyvset__riscv_soc__DOT__core__DOT__commit__DOT__regfile__v0 = 0U;
    __Vdlyvset__riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__RAS__v0 = 0U;
    __Vdly__riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_bus_state 
        = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_bus_state;
    __Vdlyvset__riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB__v0 = 0U;
    __Vdly__riscv_soc__DOT__core__DOT__cross_bar__DOT__reg_r_cnt 
        = vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__reg_r_cnt;
    vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_r_raddr 
        = (((QData)((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_166[1U])) 
            << 0x20U) | (QData)((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_166[0U])));
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_bus_wstrb 
        = (0xffU & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT___GEN_35));
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[0U] 
        = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT___GEN_34[0U];
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[1U] 
        = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT___GEN_34[1U];
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[2U] 
        = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT___GEN_34[2U];
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[3U] 
        = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT___GEN_34[3U];
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[4U] 
        = (3U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT___GEN_34[4U]);
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_bus_wdata 
        = (((QData)((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT___GEN_34[1U])) 
            << 0x20U) | (QData)((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT___GEN_34[0U])));
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_is_except 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu_io_is_except));
    vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__difftest_commit 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute_io_commit));
    vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__difftest_irq 
        = ((~ (IData)(vlSelf->reset)) & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute_io_csr_except_is_time_irq) 
                                         | (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute_io_csr_except_is_soft_irq)));
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__inst_counter = 0ULL;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__execute_io_commit) {
        vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__inst_counter 
            = vlSelf->riscv_soc__DOT__core__DOT__commit__DOT___inst_counter_T_1;
    }
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_is_soft_irq 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__soft_irq));
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_is_time_irq 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__time_irq));
    vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_rbus_finish 
        = ((IData)(vlSelf->reset) | (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_156));
    vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_wbus_finish 
        = ((IData)(vlSelf->reset) | (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_160));
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__reg_mtval = 0ULL;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__execute_io_csr_except_is_except) {
        vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__reg_mtval = 0ULL;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__irq) {
        vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__reg_mtval = 0ULL;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__execute_io_csr_valid) {
        vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__reg_mtval 
            = vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT___reg_mtval_T_1;
    }
    vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_w_ready 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->riscv_soc__DOT__axi_ram__DOT___GEN_35));
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__reg_mstatus = 0ULL;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__execute_io_csr_except_is_except) {
        vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__reg_mstatus 
            = vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT___reg_mstatus_T_3;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__irq) {
        vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__reg_mstatus 
            = vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT___reg_mstatus_T_3;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__execute_io_csr_valid) {
        vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__reg_mstatus 
            = vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT___reg_mstatus_T_9;
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_61[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_61[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_61[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_61[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram0_write) {
        if ((0x3dU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_data_addr))) {
            vlSelf->riscv_soc__DOT__sram4__DOT__sram_61[0U] 
                = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[0U];
            vlSelf->riscv_soc__DOT__sram4__DOT__sram_61[1U] 
                = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[1U];
            vlSelf->riscv_soc__DOT__sram4__DOT__sram_61[2U] 
                = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[2U];
            vlSelf->riscv_soc__DOT__sram4__DOT__sram_61[3U] 
                = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_60[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_60[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_60[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_60[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram0_write) {
        if ((0x3cU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_data_addr))) {
            vlSelf->riscv_soc__DOT__sram4__DOT__sram_60[0U] 
                = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[0U];
            vlSelf->riscv_soc__DOT__sram4__DOT__sram_60[1U] 
                = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[1U];
            vlSelf->riscv_soc__DOT__sram4__DOT__sram_60[2U] 
                = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[2U];
            vlSelf->riscv_soc__DOT__sram4__DOT__sram_60[3U] 
                = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_59[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_59[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_59[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_59[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram0_write) {
        if ((0x3bU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_data_addr))) {
            vlSelf->riscv_soc__DOT__sram4__DOT__sram_59[0U] 
                = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[0U];
            vlSelf->riscv_soc__DOT__sram4__DOT__sram_59[1U] 
                = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[1U];
            vlSelf->riscv_soc__DOT__sram4__DOT__sram_59[2U] 
                = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[2U];
            vlSelf->riscv_soc__DOT__sram4__DOT__sram_59[3U] 
                = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_58[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_58[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_58[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_58[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram0_write) {
        if ((0x3aU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_data_addr))) {
            vlSelf->riscv_soc__DOT__sram4__DOT__sram_58[0U] 
                = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[0U];
            vlSelf->riscv_soc__DOT__sram4__DOT__sram_58[1U] 
                = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[1U];
            vlSelf->riscv_soc__DOT__sram4__DOT__sram_58[2U] 
                = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[2U];
            vlSelf->riscv_soc__DOT__sram4__DOT__sram_58[3U] 
                = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_57[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_57[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_57[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_57[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram0_write) {
        if ((0x39U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_data_addr))) {
            vlSelf->riscv_soc__DOT__sram4__DOT__sram_57[0U] 
                = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[0U];
            vlSelf->riscv_soc__DOT__sram4__DOT__sram_57[1U] 
                = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[1U];
            vlSelf->riscv_soc__DOT__sram4__DOT__sram_57[2U] 
                = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[2U];
            vlSelf->riscv_soc__DOT__sram4__DOT__sram_57[3U] 
                = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_56[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_56[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_56[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_56[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram0_write) {
        if ((0x38U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_data_addr))) {
            vlSelf->riscv_soc__DOT__sram4__DOT__sram_56[0U] 
                = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[0U];
            vlSelf->riscv_soc__DOT__sram4__DOT__sram_56[1U] 
                = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[1U];
            vlSelf->riscv_soc__DOT__sram4__DOT__sram_56[2U] 
                = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[2U];
            vlSelf->riscv_soc__DOT__sram4__DOT__sram_56[3U] 
                = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_55[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_55[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_55[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_55[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram0_write) {
        if ((0x37U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_data_addr))) {
            vlSelf->riscv_soc__DOT__sram4__DOT__sram_55[0U] 
                = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[0U];
            vlSelf->riscv_soc__DOT__sram4__DOT__sram_55[1U] 
                = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[1U];
            vlSelf->riscv_soc__DOT__sram4__DOT__sram_55[2U] 
                = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[2U];
            vlSelf->riscv_soc__DOT__sram4__DOT__sram_55[3U] 
                = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_54[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_54[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_54[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_54[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram0_write) {
        if ((0x36U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_data_addr))) {
            vlSelf->riscv_soc__DOT__sram4__DOT__sram_54[0U] 
                = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[0U];
            vlSelf->riscv_soc__DOT__sram4__DOT__sram_54[1U] 
                = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[1U];
            vlSelf->riscv_soc__DOT__sram4__DOT__sram_54[2U] 
                = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[2U];
            vlSelf->riscv_soc__DOT__sram4__DOT__sram_54[3U] 
                = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_53[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_53[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_53[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_53[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram0_write) {
        if ((0x35U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_data_addr))) {
            vlSelf->riscv_soc__DOT__sram4__DOT__sram_53[0U] 
                = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[0U];
            vlSelf->riscv_soc__DOT__sram4__DOT__sram_53[1U] 
                = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[1U];
            vlSelf->riscv_soc__DOT__sram4__DOT__sram_53[2U] 
                = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[2U];
            vlSelf->riscv_soc__DOT__sram4__DOT__sram_53[3U] 
                = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_52[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_52[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_52[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_52[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram0_write) {
        if ((0x34U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_data_addr))) {
            vlSelf->riscv_soc__DOT__sram4__DOT__sram_52[0U] 
                = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[0U];
            vlSelf->riscv_soc__DOT__sram4__DOT__sram_52[1U] 
                = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[1U];
            vlSelf->riscv_soc__DOT__sram4__DOT__sram_52[2U] 
                = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[2U];
            vlSelf->riscv_soc__DOT__sram4__DOT__sram_52[3U] 
                = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_51[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_51[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_51[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_51[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram0_write) {
        if ((0x33U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_data_addr))) {
            vlSelf->riscv_soc__DOT__sram4__DOT__sram_51[0U] 
                = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[0U];
            vlSelf->riscv_soc__DOT__sram4__DOT__sram_51[1U] 
                = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[1U];
            vlSelf->riscv_soc__DOT__sram4__DOT__sram_51[2U] 
                = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[2U];
            vlSelf->riscv_soc__DOT__sram4__DOT__sram_51[3U] 
                = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_50[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_50[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_50[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_50[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram0_write) {
        if ((0x32U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_data_addr))) {
            vlSelf->riscv_soc__DOT__sram4__DOT__sram_50[0U] 
                = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[0U];
            vlSelf->riscv_soc__DOT__sram4__DOT__sram_50[1U] 
                = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[1U];
            vlSelf->riscv_soc__DOT__sram4__DOT__sram_50[2U] 
                = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[2U];
            vlSelf->riscv_soc__DOT__sram4__DOT__sram_50[3U] 
                = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_49[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_49[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_49[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_49[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram0_write) {
        if ((0x31U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_data_addr))) {
            vlSelf->riscv_soc__DOT__sram4__DOT__sram_49[0U] 
                = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[0U];
            vlSelf->riscv_soc__DOT__sram4__DOT__sram_49[1U] 
                = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[1U];
            vlSelf->riscv_soc__DOT__sram4__DOT__sram_49[2U] 
                = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[2U];
            vlSelf->riscv_soc__DOT__sram4__DOT__sram_49[3U] 
                = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_48[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_48[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_48[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_48[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram0_write) {
        if ((0x30U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_data_addr))) {
            vlSelf->riscv_soc__DOT__sram4__DOT__sram_48[0U] 
                = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[0U];
            vlSelf->riscv_soc__DOT__sram4__DOT__sram_48[1U] 
                = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[1U];
            vlSelf->riscv_soc__DOT__sram4__DOT__sram_48[2U] 
                = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[2U];
            vlSelf->riscv_soc__DOT__sram4__DOT__sram_48[3U] 
                = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_47[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_47[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_47[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_47[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram0_write) {
        if ((0x2fU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_data_addr))) {
            vlSelf->riscv_soc__DOT__sram4__DOT__sram_47[0U] 
                = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[0U];
            vlSelf->riscv_soc__DOT__sram4__DOT__sram_47[1U] 
                = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[1U];
            vlSelf->riscv_soc__DOT__sram4__DOT__sram_47[2U] 
                = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[2U];
            vlSelf->riscv_soc__DOT__sram4__DOT__sram_47[3U] 
                = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_46[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_46[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_46[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_46[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram0_write) {
        if ((0x2eU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_data_addr))) {
            vlSelf->riscv_soc__DOT__sram4__DOT__sram_46[0U] 
                = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[0U];
            vlSelf->riscv_soc__DOT__sram4__DOT__sram_46[1U] 
                = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[1U];
            vlSelf->riscv_soc__DOT__sram4__DOT__sram_46[2U] 
                = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[2U];
            vlSelf->riscv_soc__DOT__sram4__DOT__sram_46[3U] 
                = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_45[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_45[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_45[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_45[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram0_write) {
        if ((0x2dU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_data_addr))) {
            vlSelf->riscv_soc__DOT__sram4__DOT__sram_45[0U] 
                = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[0U];
            vlSelf->riscv_soc__DOT__sram4__DOT__sram_45[1U] 
                = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[1U];
            vlSelf->riscv_soc__DOT__sram4__DOT__sram_45[2U] 
                = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[2U];
            vlSelf->riscv_soc__DOT__sram4__DOT__sram_45[3U] 
                = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_44[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_44[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_44[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_44[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram0_write) {
        if ((0x2cU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_data_addr))) {
            vlSelf->riscv_soc__DOT__sram4__DOT__sram_44[0U] 
                = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[0U];
            vlSelf->riscv_soc__DOT__sram4__DOT__sram_44[1U] 
                = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[1U];
            vlSelf->riscv_soc__DOT__sram4__DOT__sram_44[2U] 
                = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[2U];
            vlSelf->riscv_soc__DOT__sram4__DOT__sram_44[3U] 
                = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_43[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_43[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_43[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_43[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram0_write) {
        if ((0x2bU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_data_addr))) {
            vlSelf->riscv_soc__DOT__sram4__DOT__sram_43[0U] 
                = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[0U];
            vlSelf->riscv_soc__DOT__sram4__DOT__sram_43[1U] 
                = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[1U];
            vlSelf->riscv_soc__DOT__sram4__DOT__sram_43[2U] 
                = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[2U];
            vlSelf->riscv_soc__DOT__sram4__DOT__sram_43[3U] 
                = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_61[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_61[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_61[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_61[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram2_write) {
        if ((0x3dU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_data_addr))) {
            vlSelf->riscv_soc__DOT__sram6__DOT__sram_61[0U] 
                = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[0U];
            vlSelf->riscv_soc__DOT__sram6__DOT__sram_61[1U] 
                = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[1U];
            vlSelf->riscv_soc__DOT__sram6__DOT__sram_61[2U] 
                = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[2U];
            vlSelf->riscv_soc__DOT__sram6__DOT__sram_61[3U] 
                = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_60[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_60[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_60[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_60[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram2_write) {
        if ((0x3cU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_data_addr))) {
            vlSelf->riscv_soc__DOT__sram6__DOT__sram_60[0U] 
                = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[0U];
            vlSelf->riscv_soc__DOT__sram6__DOT__sram_60[1U] 
                = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[1U];
            vlSelf->riscv_soc__DOT__sram6__DOT__sram_60[2U] 
                = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[2U];
            vlSelf->riscv_soc__DOT__sram6__DOT__sram_60[3U] 
                = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_59[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_59[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_59[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_59[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram2_write) {
        if ((0x3bU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_data_addr))) {
            vlSelf->riscv_soc__DOT__sram6__DOT__sram_59[0U] 
                = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[0U];
            vlSelf->riscv_soc__DOT__sram6__DOT__sram_59[1U] 
                = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[1U];
            vlSelf->riscv_soc__DOT__sram6__DOT__sram_59[2U] 
                = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[2U];
            vlSelf->riscv_soc__DOT__sram6__DOT__sram_59[3U] 
                = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_58[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_58[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_58[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_58[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram2_write) {
        if ((0x3aU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_data_addr))) {
            vlSelf->riscv_soc__DOT__sram6__DOT__sram_58[0U] 
                = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[0U];
            vlSelf->riscv_soc__DOT__sram6__DOT__sram_58[1U] 
                = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[1U];
            vlSelf->riscv_soc__DOT__sram6__DOT__sram_58[2U] 
                = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[2U];
            vlSelf->riscv_soc__DOT__sram6__DOT__sram_58[3U] 
                = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_57[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_57[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_57[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_57[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram2_write) {
        if ((0x39U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_data_addr))) {
            vlSelf->riscv_soc__DOT__sram6__DOT__sram_57[0U] 
                = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[0U];
            vlSelf->riscv_soc__DOT__sram6__DOT__sram_57[1U] 
                = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[1U];
            vlSelf->riscv_soc__DOT__sram6__DOT__sram_57[2U] 
                = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[2U];
            vlSelf->riscv_soc__DOT__sram6__DOT__sram_57[3U] 
                = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_56[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_56[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_56[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_56[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram2_write) {
        if ((0x38U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_data_addr))) {
            vlSelf->riscv_soc__DOT__sram6__DOT__sram_56[0U] 
                = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[0U];
            vlSelf->riscv_soc__DOT__sram6__DOT__sram_56[1U] 
                = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[1U];
            vlSelf->riscv_soc__DOT__sram6__DOT__sram_56[2U] 
                = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[2U];
            vlSelf->riscv_soc__DOT__sram6__DOT__sram_56[3U] 
                = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_55[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_55[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_55[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_55[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram2_write) {
        if ((0x37U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_data_addr))) {
            vlSelf->riscv_soc__DOT__sram6__DOT__sram_55[0U] 
                = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[0U];
            vlSelf->riscv_soc__DOT__sram6__DOT__sram_55[1U] 
                = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[1U];
            vlSelf->riscv_soc__DOT__sram6__DOT__sram_55[2U] 
                = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[2U];
            vlSelf->riscv_soc__DOT__sram6__DOT__sram_55[3U] 
                = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_54[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_54[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_54[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_54[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram2_write) {
        if ((0x36U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_data_addr))) {
            vlSelf->riscv_soc__DOT__sram6__DOT__sram_54[0U] 
                = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[0U];
            vlSelf->riscv_soc__DOT__sram6__DOT__sram_54[1U] 
                = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[1U];
            vlSelf->riscv_soc__DOT__sram6__DOT__sram_54[2U] 
                = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[2U];
            vlSelf->riscv_soc__DOT__sram6__DOT__sram_54[3U] 
                = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_53[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_53[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_53[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_53[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram2_write) {
        if ((0x35U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_data_addr))) {
            vlSelf->riscv_soc__DOT__sram6__DOT__sram_53[0U] 
                = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[0U];
            vlSelf->riscv_soc__DOT__sram6__DOT__sram_53[1U] 
                = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[1U];
            vlSelf->riscv_soc__DOT__sram6__DOT__sram_53[2U] 
                = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[2U];
            vlSelf->riscv_soc__DOT__sram6__DOT__sram_53[3U] 
                = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_52[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_52[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_52[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_52[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram2_write) {
        if ((0x34U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_data_addr))) {
            vlSelf->riscv_soc__DOT__sram6__DOT__sram_52[0U] 
                = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[0U];
            vlSelf->riscv_soc__DOT__sram6__DOT__sram_52[1U] 
                = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[1U];
            vlSelf->riscv_soc__DOT__sram6__DOT__sram_52[2U] 
                = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[2U];
            vlSelf->riscv_soc__DOT__sram6__DOT__sram_52[3U] 
                = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_51[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_51[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_51[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_51[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram2_write) {
        if ((0x33U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_data_addr))) {
            vlSelf->riscv_soc__DOT__sram6__DOT__sram_51[0U] 
                = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[0U];
            vlSelf->riscv_soc__DOT__sram6__DOT__sram_51[1U] 
                = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[1U];
            vlSelf->riscv_soc__DOT__sram6__DOT__sram_51[2U] 
                = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[2U];
            vlSelf->riscv_soc__DOT__sram6__DOT__sram_51[3U] 
                = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_50[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_50[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_50[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_50[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram2_write) {
        if ((0x32U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_data_addr))) {
            vlSelf->riscv_soc__DOT__sram6__DOT__sram_50[0U] 
                = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[0U];
            vlSelf->riscv_soc__DOT__sram6__DOT__sram_50[1U] 
                = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[1U];
            vlSelf->riscv_soc__DOT__sram6__DOT__sram_50[2U] 
                = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[2U];
            vlSelf->riscv_soc__DOT__sram6__DOT__sram_50[3U] 
                = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_49[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_49[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_49[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_49[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram2_write) {
        if ((0x31U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_data_addr))) {
            vlSelf->riscv_soc__DOT__sram6__DOT__sram_49[0U] 
                = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[0U];
            vlSelf->riscv_soc__DOT__sram6__DOT__sram_49[1U] 
                = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[1U];
            vlSelf->riscv_soc__DOT__sram6__DOT__sram_49[2U] 
                = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[2U];
            vlSelf->riscv_soc__DOT__sram6__DOT__sram_49[3U] 
                = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_48[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_48[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_48[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_48[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram2_write) {
        if ((0x30U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_data_addr))) {
            vlSelf->riscv_soc__DOT__sram6__DOT__sram_48[0U] 
                = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[0U];
            vlSelf->riscv_soc__DOT__sram6__DOT__sram_48[1U] 
                = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[1U];
            vlSelf->riscv_soc__DOT__sram6__DOT__sram_48[2U] 
                = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[2U];
            vlSelf->riscv_soc__DOT__sram6__DOT__sram_48[3U] 
                = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_47[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_47[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_47[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_47[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram2_write) {
        if ((0x2fU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_data_addr))) {
            vlSelf->riscv_soc__DOT__sram6__DOT__sram_47[0U] 
                = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[0U];
            vlSelf->riscv_soc__DOT__sram6__DOT__sram_47[1U] 
                = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[1U];
            vlSelf->riscv_soc__DOT__sram6__DOT__sram_47[2U] 
                = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[2U];
            vlSelf->riscv_soc__DOT__sram6__DOT__sram_47[3U] 
                = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_46[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_46[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_46[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_46[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram2_write) {
        if ((0x2eU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_data_addr))) {
            vlSelf->riscv_soc__DOT__sram6__DOT__sram_46[0U] 
                = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[0U];
            vlSelf->riscv_soc__DOT__sram6__DOT__sram_46[1U] 
                = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[1U];
            vlSelf->riscv_soc__DOT__sram6__DOT__sram_46[2U] 
                = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[2U];
            vlSelf->riscv_soc__DOT__sram6__DOT__sram_46[3U] 
                = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_45[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_45[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_45[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_45[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram2_write) {
        if ((0x2dU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_data_addr))) {
            vlSelf->riscv_soc__DOT__sram6__DOT__sram_45[0U] 
                = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[0U];
            vlSelf->riscv_soc__DOT__sram6__DOT__sram_45[1U] 
                = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[1U];
            vlSelf->riscv_soc__DOT__sram6__DOT__sram_45[2U] 
                = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[2U];
            vlSelf->riscv_soc__DOT__sram6__DOT__sram_45[3U] 
                = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_44[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_44[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_44[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_44[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram2_write) {
        if ((0x2cU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_data_addr))) {
            vlSelf->riscv_soc__DOT__sram6__DOT__sram_44[0U] 
                = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[0U];
            vlSelf->riscv_soc__DOT__sram6__DOT__sram_44[1U] 
                = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[1U];
            vlSelf->riscv_soc__DOT__sram6__DOT__sram_44[2U] 
                = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[2U];
            vlSelf->riscv_soc__DOT__sram6__DOT__sram_44[3U] 
                = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_43[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_43[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_43[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_43[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram2_write) {
        if ((0x2bU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_data_addr))) {
            vlSelf->riscv_soc__DOT__sram6__DOT__sram_43[0U] 
                = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[0U];
            vlSelf->riscv_soc__DOT__sram6__DOT__sram_43[1U] 
                = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[1U];
            vlSelf->riscv_soc__DOT__sram6__DOT__sram_43[2U] 
                = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[2U];
            vlSelf->riscv_soc__DOT__sram6__DOT__sram_43[3U] 
                = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_42[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_42[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_42[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_42[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram0_write) {
        if ((0x2aU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_data_addr))) {
            vlSelf->riscv_soc__DOT__sram4__DOT__sram_42[0U] 
                = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[0U];
            vlSelf->riscv_soc__DOT__sram4__DOT__sram_42[1U] 
                = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[1U];
            vlSelf->riscv_soc__DOT__sram4__DOT__sram_42[2U] 
                = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[2U];
            vlSelf->riscv_soc__DOT__sram4__DOT__sram_42[3U] 
                = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_41[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_41[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_41[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_41[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram0_write) {
        if ((0x29U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_data_addr))) {
            vlSelf->riscv_soc__DOT__sram4__DOT__sram_41[0U] 
                = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[0U];
            vlSelf->riscv_soc__DOT__sram4__DOT__sram_41[1U] 
                = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[1U];
            vlSelf->riscv_soc__DOT__sram4__DOT__sram_41[2U] 
                = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[2U];
            vlSelf->riscv_soc__DOT__sram4__DOT__sram_41[3U] 
                = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_40[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_40[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_40[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_40[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram0_write) {
        if ((0x28U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_data_addr))) {
            vlSelf->riscv_soc__DOT__sram4__DOT__sram_40[0U] 
                = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[0U];
            vlSelf->riscv_soc__DOT__sram4__DOT__sram_40[1U] 
                = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[1U];
            vlSelf->riscv_soc__DOT__sram4__DOT__sram_40[2U] 
                = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[2U];
            vlSelf->riscv_soc__DOT__sram4__DOT__sram_40[3U] 
                = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_39[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_39[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_39[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_39[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram0_write) {
        if ((0x27U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_data_addr))) {
            vlSelf->riscv_soc__DOT__sram4__DOT__sram_39[0U] 
                = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[0U];
            vlSelf->riscv_soc__DOT__sram4__DOT__sram_39[1U] 
                = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[1U];
            vlSelf->riscv_soc__DOT__sram4__DOT__sram_39[2U] 
                = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[2U];
            vlSelf->riscv_soc__DOT__sram4__DOT__sram_39[3U] 
                = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_38[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_38[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_38[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_38[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram0_write) {
        if ((0x26U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_data_addr))) {
            vlSelf->riscv_soc__DOT__sram4__DOT__sram_38[0U] 
                = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[0U];
            vlSelf->riscv_soc__DOT__sram4__DOT__sram_38[1U] 
                = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[1U];
            vlSelf->riscv_soc__DOT__sram4__DOT__sram_38[2U] 
                = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[2U];
            vlSelf->riscv_soc__DOT__sram4__DOT__sram_38[3U] 
                = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_36[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_36[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_36[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_36[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram0_write) {
        if ((0x24U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_data_addr))) {
            vlSelf->riscv_soc__DOT__sram4__DOT__sram_36[0U] 
                = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[0U];
            vlSelf->riscv_soc__DOT__sram4__DOT__sram_36[1U] 
                = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[1U];
            vlSelf->riscv_soc__DOT__sram4__DOT__sram_36[2U] 
                = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[2U];
            vlSelf->riscv_soc__DOT__sram4__DOT__sram_36[3U] 
                = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_35[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_35[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_35[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_35[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram0_write) {
        if ((0x23U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_data_addr))) {
            vlSelf->riscv_soc__DOT__sram4__DOT__sram_35[0U] 
                = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[0U];
            vlSelf->riscv_soc__DOT__sram4__DOT__sram_35[1U] 
                = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[1U];
            vlSelf->riscv_soc__DOT__sram4__DOT__sram_35[2U] 
                = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[2U];
            vlSelf->riscv_soc__DOT__sram4__DOT__sram_35[3U] 
                = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_34[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_34[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_34[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_34[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram0_write) {
        if ((0x22U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_data_addr))) {
            vlSelf->riscv_soc__DOT__sram4__DOT__sram_34[0U] 
                = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[0U];
            vlSelf->riscv_soc__DOT__sram4__DOT__sram_34[1U] 
                = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[1U];
            vlSelf->riscv_soc__DOT__sram4__DOT__sram_34[2U] 
                = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[2U];
            vlSelf->riscv_soc__DOT__sram4__DOT__sram_34[3U] 
                = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_33[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_33[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_33[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_33[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram0_write) {
        if ((0x21U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_data_addr))) {
            vlSelf->riscv_soc__DOT__sram4__DOT__sram_33[0U] 
                = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[0U];
            vlSelf->riscv_soc__DOT__sram4__DOT__sram_33[1U] 
                = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[1U];
            vlSelf->riscv_soc__DOT__sram4__DOT__sram_33[2U] 
                = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[2U];
            vlSelf->riscv_soc__DOT__sram4__DOT__sram_33[3U] 
                = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_32[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_32[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_32[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_32[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram0_write) {
        if ((0x20U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_data_addr))) {
            vlSelf->riscv_soc__DOT__sram4__DOT__sram_32[0U] 
                = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[0U];
            vlSelf->riscv_soc__DOT__sram4__DOT__sram_32[1U] 
                = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[1U];
            vlSelf->riscv_soc__DOT__sram4__DOT__sram_32[2U] 
                = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[2U];
            vlSelf->riscv_soc__DOT__sram4__DOT__sram_32[3U] 
                = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_26[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_26[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_26[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_26[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram0_write) {
        if ((0x1aU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_data_addr))) {
            vlSelf->riscv_soc__DOT__sram4__DOT__sram_26[0U] 
                = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[0U];
            vlSelf->riscv_soc__DOT__sram4__DOT__sram_26[1U] 
                = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[1U];
            vlSelf->riscv_soc__DOT__sram4__DOT__sram_26[2U] 
                = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[2U];
            vlSelf->riscv_soc__DOT__sram4__DOT__sram_26[3U] 
                = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_25[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_25[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_25[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_25[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram0_write) {
        if ((0x19U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_data_addr))) {
            vlSelf->riscv_soc__DOT__sram4__DOT__sram_25[0U] 
                = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[0U];
            vlSelf->riscv_soc__DOT__sram4__DOT__sram_25[1U] 
                = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[1U];
            vlSelf->riscv_soc__DOT__sram4__DOT__sram_25[2U] 
                = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[2U];
            vlSelf->riscv_soc__DOT__sram4__DOT__sram_25[3U] 
                = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_29[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_29[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_29[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_29[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram0_write) {
        if ((0x1dU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_data_addr))) {
            vlSelf->riscv_soc__DOT__sram4__DOT__sram_29[0U] 
                = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[0U];
            vlSelf->riscv_soc__DOT__sram4__DOT__sram_29[1U] 
                = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[1U];
            vlSelf->riscv_soc__DOT__sram4__DOT__sram_29[2U] 
                = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[2U];
            vlSelf->riscv_soc__DOT__sram4__DOT__sram_29[3U] 
                = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_28[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_28[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_28[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_28[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram0_write) {
        if ((0x1cU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_data_addr))) {
            vlSelf->riscv_soc__DOT__sram4__DOT__sram_28[0U] 
                = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[0U];
            vlSelf->riscv_soc__DOT__sram4__DOT__sram_28[1U] 
                = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[1U];
            vlSelf->riscv_soc__DOT__sram4__DOT__sram_28[2U] 
                = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[2U];
            vlSelf->riscv_soc__DOT__sram4__DOT__sram_28[3U] 
                = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_27[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_27[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_27[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_27[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram0_write) {
        if ((0x1bU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_data_addr))) {
            vlSelf->riscv_soc__DOT__sram4__DOT__sram_27[0U] 
                = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[0U];
            vlSelf->riscv_soc__DOT__sram4__DOT__sram_27[1U] 
                = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[1U];
            vlSelf->riscv_soc__DOT__sram4__DOT__sram_27[2U] 
                = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[2U];
            vlSelf->riscv_soc__DOT__sram4__DOT__sram_27[3U] 
                = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_22[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_22[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_22[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_22[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram0_write) {
        if ((0x16U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_data_addr))) {
            vlSelf->riscv_soc__DOT__sram4__DOT__sram_22[0U] 
                = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[0U];
            vlSelf->riscv_soc__DOT__sram4__DOT__sram_22[1U] 
                = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[1U];
            vlSelf->riscv_soc__DOT__sram4__DOT__sram_22[2U] 
                = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[2U];
            vlSelf->riscv_soc__DOT__sram4__DOT__sram_22[3U] 
                = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_37[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_37[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_37[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_37[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram0_write) {
        if ((0x25U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_data_addr))) {
            vlSelf->riscv_soc__DOT__sram4__DOT__sram_37[0U] 
                = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[0U];
            vlSelf->riscv_soc__DOT__sram4__DOT__sram_37[1U] 
                = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[1U];
            vlSelf->riscv_soc__DOT__sram4__DOT__sram_37[2U] 
                = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[2U];
            vlSelf->riscv_soc__DOT__sram4__DOT__sram_37[3U] 
                = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_31[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_31[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_31[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_31[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram0_write) {
        if ((0x1fU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_data_addr))) {
            vlSelf->riscv_soc__DOT__sram4__DOT__sram_31[0U] 
                = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[0U];
            vlSelf->riscv_soc__DOT__sram4__DOT__sram_31[1U] 
                = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[1U];
            vlSelf->riscv_soc__DOT__sram4__DOT__sram_31[2U] 
                = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[2U];
            vlSelf->riscv_soc__DOT__sram4__DOT__sram_31[3U] 
                = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_30[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_30[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_30[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_30[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram0_write) {
        if ((0x1eU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_data_addr))) {
            vlSelf->riscv_soc__DOT__sram4__DOT__sram_30[0U] 
                = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[0U];
            vlSelf->riscv_soc__DOT__sram4__DOT__sram_30[1U] 
                = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[1U];
            vlSelf->riscv_soc__DOT__sram4__DOT__sram_30[2U] 
                = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[2U];
            vlSelf->riscv_soc__DOT__sram4__DOT__sram_30[3U] 
                = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_23[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_23[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_23[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_23[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram0_write) {
        if ((0x17U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_data_addr))) {
            vlSelf->riscv_soc__DOT__sram4__DOT__sram_23[0U] 
                = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[0U];
            vlSelf->riscv_soc__DOT__sram4__DOT__sram_23[1U] 
                = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[1U];
            vlSelf->riscv_soc__DOT__sram4__DOT__sram_23[2U] 
                = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[2U];
            vlSelf->riscv_soc__DOT__sram4__DOT__sram_23[3U] 
                = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_24[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_24[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_24[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_24[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram0_write) {
        if ((0x18U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_data_addr))) {
            vlSelf->riscv_soc__DOT__sram4__DOT__sram_24[0U] 
                = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[0U];
            vlSelf->riscv_soc__DOT__sram4__DOT__sram_24[1U] 
                = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[1U];
            vlSelf->riscv_soc__DOT__sram4__DOT__sram_24[2U] 
                = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[2U];
            vlSelf->riscv_soc__DOT__sram4__DOT__sram_24[3U] 
                = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_42[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_42[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_42[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_42[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram2_write) {
        if ((0x2aU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_data_addr))) {
            vlSelf->riscv_soc__DOT__sram6__DOT__sram_42[0U] 
                = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[0U];
            vlSelf->riscv_soc__DOT__sram6__DOT__sram_42[1U] 
                = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[1U];
            vlSelf->riscv_soc__DOT__sram6__DOT__sram_42[2U] 
                = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[2U];
            vlSelf->riscv_soc__DOT__sram6__DOT__sram_42[3U] 
                = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_41[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_41[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_41[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_41[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram2_write) {
        if ((0x29U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_data_addr))) {
            vlSelf->riscv_soc__DOT__sram6__DOT__sram_41[0U] 
                = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[0U];
            vlSelf->riscv_soc__DOT__sram6__DOT__sram_41[1U] 
                = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[1U];
            vlSelf->riscv_soc__DOT__sram6__DOT__sram_41[2U] 
                = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[2U];
            vlSelf->riscv_soc__DOT__sram6__DOT__sram_41[3U] 
                = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_40[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_40[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_40[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_40[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram2_write) {
        if ((0x28U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_data_addr))) {
            vlSelf->riscv_soc__DOT__sram6__DOT__sram_40[0U] 
                = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[0U];
            vlSelf->riscv_soc__DOT__sram6__DOT__sram_40[1U] 
                = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[1U];
            vlSelf->riscv_soc__DOT__sram6__DOT__sram_40[2U] 
                = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[2U];
            vlSelf->riscv_soc__DOT__sram6__DOT__sram_40[3U] 
                = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_39[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_39[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_39[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_39[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram2_write) {
        if ((0x27U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_data_addr))) {
            vlSelf->riscv_soc__DOT__sram6__DOT__sram_39[0U] 
                = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[0U];
            vlSelf->riscv_soc__DOT__sram6__DOT__sram_39[1U] 
                = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[1U];
            vlSelf->riscv_soc__DOT__sram6__DOT__sram_39[2U] 
                = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[2U];
            vlSelf->riscv_soc__DOT__sram6__DOT__sram_39[3U] 
                = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_38[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_38[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_38[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_38[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram2_write) {
        if ((0x26U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_data_addr))) {
            vlSelf->riscv_soc__DOT__sram6__DOT__sram_38[0U] 
                = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[0U];
            vlSelf->riscv_soc__DOT__sram6__DOT__sram_38[1U] 
                = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[1U];
            vlSelf->riscv_soc__DOT__sram6__DOT__sram_38[2U] 
                = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[2U];
            vlSelf->riscv_soc__DOT__sram6__DOT__sram_38[3U] 
                = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_36[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_36[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_36[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_36[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram2_write) {
        if ((0x24U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_data_addr))) {
            vlSelf->riscv_soc__DOT__sram6__DOT__sram_36[0U] 
                = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[0U];
            vlSelf->riscv_soc__DOT__sram6__DOT__sram_36[1U] 
                = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[1U];
            vlSelf->riscv_soc__DOT__sram6__DOT__sram_36[2U] 
                = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[2U];
            vlSelf->riscv_soc__DOT__sram6__DOT__sram_36[3U] 
                = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_35[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_35[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_35[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_35[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram2_write) {
        if ((0x23U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_data_addr))) {
            vlSelf->riscv_soc__DOT__sram6__DOT__sram_35[0U] 
                = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[0U];
            vlSelf->riscv_soc__DOT__sram6__DOT__sram_35[1U] 
                = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[1U];
            vlSelf->riscv_soc__DOT__sram6__DOT__sram_35[2U] 
                = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[2U];
            vlSelf->riscv_soc__DOT__sram6__DOT__sram_35[3U] 
                = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_34[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_34[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_34[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_34[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram2_write) {
        if ((0x22U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_data_addr))) {
            vlSelf->riscv_soc__DOT__sram6__DOT__sram_34[0U] 
                = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[0U];
            vlSelf->riscv_soc__DOT__sram6__DOT__sram_34[1U] 
                = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[1U];
            vlSelf->riscv_soc__DOT__sram6__DOT__sram_34[2U] 
                = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[2U];
            vlSelf->riscv_soc__DOT__sram6__DOT__sram_34[3U] 
                = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_33[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_33[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_33[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_33[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram2_write) {
        if ((0x21U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_data_addr))) {
            vlSelf->riscv_soc__DOT__sram6__DOT__sram_33[0U] 
                = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[0U];
            vlSelf->riscv_soc__DOT__sram6__DOT__sram_33[1U] 
                = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[1U];
            vlSelf->riscv_soc__DOT__sram6__DOT__sram_33[2U] 
                = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[2U];
            vlSelf->riscv_soc__DOT__sram6__DOT__sram_33[3U] 
                = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_32[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_32[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_32[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_32[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram2_write) {
        if ((0x20U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_data_addr))) {
            vlSelf->riscv_soc__DOT__sram6__DOT__sram_32[0U] 
                = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[0U];
            vlSelf->riscv_soc__DOT__sram6__DOT__sram_32[1U] 
                = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[1U];
            vlSelf->riscv_soc__DOT__sram6__DOT__sram_32[2U] 
                = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[2U];
            vlSelf->riscv_soc__DOT__sram6__DOT__sram_32[3U] 
                = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_26[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_26[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_26[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_26[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram2_write) {
        if ((0x1aU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_data_addr))) {
            vlSelf->riscv_soc__DOT__sram6__DOT__sram_26[0U] 
                = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[0U];
            vlSelf->riscv_soc__DOT__sram6__DOT__sram_26[1U] 
                = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[1U];
            vlSelf->riscv_soc__DOT__sram6__DOT__sram_26[2U] 
                = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[2U];
            vlSelf->riscv_soc__DOT__sram6__DOT__sram_26[3U] 
                = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_25[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_25[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_25[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_25[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram2_write) {
        if ((0x19U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_data_addr))) {
            vlSelf->riscv_soc__DOT__sram6__DOT__sram_25[0U] 
                = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[0U];
            vlSelf->riscv_soc__DOT__sram6__DOT__sram_25[1U] 
                = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[1U];
            vlSelf->riscv_soc__DOT__sram6__DOT__sram_25[2U] 
                = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[2U];
            vlSelf->riscv_soc__DOT__sram6__DOT__sram_25[3U] 
                = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_29[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_29[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_29[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_29[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram2_write) {
        if ((0x1dU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_data_addr))) {
            vlSelf->riscv_soc__DOT__sram6__DOT__sram_29[0U] 
                = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[0U];
            vlSelf->riscv_soc__DOT__sram6__DOT__sram_29[1U] 
                = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[1U];
            vlSelf->riscv_soc__DOT__sram6__DOT__sram_29[2U] 
                = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[2U];
            vlSelf->riscv_soc__DOT__sram6__DOT__sram_29[3U] 
                = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_28[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_28[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_28[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_28[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram2_write) {
        if ((0x1cU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_data_addr))) {
            vlSelf->riscv_soc__DOT__sram6__DOT__sram_28[0U] 
                = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[0U];
            vlSelf->riscv_soc__DOT__sram6__DOT__sram_28[1U] 
                = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[1U];
            vlSelf->riscv_soc__DOT__sram6__DOT__sram_28[2U] 
                = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[2U];
            vlSelf->riscv_soc__DOT__sram6__DOT__sram_28[3U] 
                = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_27[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_27[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_27[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_27[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram2_write) {
        if ((0x1bU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_data_addr))) {
            vlSelf->riscv_soc__DOT__sram6__DOT__sram_27[0U] 
                = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[0U];
            vlSelf->riscv_soc__DOT__sram6__DOT__sram_27[1U] 
                = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[1U];
            vlSelf->riscv_soc__DOT__sram6__DOT__sram_27[2U] 
                = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[2U];
            vlSelf->riscv_soc__DOT__sram6__DOT__sram_27[3U] 
                = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_22[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_22[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_22[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_22[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram2_write) {
        if ((0x16U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_data_addr))) {
            vlSelf->riscv_soc__DOT__sram6__DOT__sram_22[0U] 
                = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[0U];
            vlSelf->riscv_soc__DOT__sram6__DOT__sram_22[1U] 
                = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[1U];
            vlSelf->riscv_soc__DOT__sram6__DOT__sram_22[2U] 
                = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[2U];
            vlSelf->riscv_soc__DOT__sram6__DOT__sram_22[3U] 
                = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_37[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_37[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_37[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_37[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram2_write) {
        if ((0x25U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_data_addr))) {
            vlSelf->riscv_soc__DOT__sram6__DOT__sram_37[0U] 
                = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[0U];
            vlSelf->riscv_soc__DOT__sram6__DOT__sram_37[1U] 
                = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[1U];
            vlSelf->riscv_soc__DOT__sram6__DOT__sram_37[2U] 
                = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[2U];
            vlSelf->riscv_soc__DOT__sram6__DOT__sram_37[3U] 
                = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_31[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_31[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_31[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_31[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram2_write) {
        if ((0x1fU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_data_addr))) {
            vlSelf->riscv_soc__DOT__sram6__DOT__sram_31[0U] 
                = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[0U];
            vlSelf->riscv_soc__DOT__sram6__DOT__sram_31[1U] 
                = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[1U];
            vlSelf->riscv_soc__DOT__sram6__DOT__sram_31[2U] 
                = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[2U];
            vlSelf->riscv_soc__DOT__sram6__DOT__sram_31[3U] 
                = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_30[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_30[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_30[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_30[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram2_write) {
        if ((0x1eU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_data_addr))) {
            vlSelf->riscv_soc__DOT__sram6__DOT__sram_30[0U] 
                = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[0U];
            vlSelf->riscv_soc__DOT__sram6__DOT__sram_30[1U] 
                = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[1U];
            vlSelf->riscv_soc__DOT__sram6__DOT__sram_30[2U] 
                = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[2U];
            vlSelf->riscv_soc__DOT__sram6__DOT__sram_30[3U] 
                = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_23[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_23[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_23[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_23[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram2_write) {
        if ((0x17U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_data_addr))) {
            vlSelf->riscv_soc__DOT__sram6__DOT__sram_23[0U] 
                = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[0U];
            vlSelf->riscv_soc__DOT__sram6__DOT__sram_23[1U] 
                = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[1U];
            vlSelf->riscv_soc__DOT__sram6__DOT__sram_23[2U] 
                = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[2U];
            vlSelf->riscv_soc__DOT__sram6__DOT__sram_23[3U] 
                = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_24[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_24[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_24[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_24[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram2_write) {
        if ((0x18U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_data_addr))) {
            vlSelf->riscv_soc__DOT__sram6__DOT__sram_24[0U] 
                = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[0U];
            vlSelf->riscv_soc__DOT__sram6__DOT__sram_24[1U] 
                = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[1U];
            vlSelf->riscv_soc__DOT__sram6__DOT__sram_24[2U] 
                = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[2U];
            vlSelf->riscv_soc__DOT__sram6__DOT__sram_24[3U] 
                = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_sram0_valid = 0ULL;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram0_write) {
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_sram0_valid 
            = vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___reg_sram0_valid_T;
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_sram2_valid = 0ULL;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram2_write) {
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_sram2_valid 
            = vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___reg_sram2_valid_T;
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_9[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_9[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_9[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_9[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram0_write) {
        if ((9U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_data_addr))) {
            vlSelf->riscv_soc__DOT__sram4__DOT__sram_9[0U] 
                = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[0U];
            vlSelf->riscv_soc__DOT__sram4__DOT__sram_9[1U] 
                = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[1U];
            vlSelf->riscv_soc__DOT__sram4__DOT__sram_9[2U] 
                = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[2U];
            vlSelf->riscv_soc__DOT__sram4__DOT__sram_9[3U] 
                = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_8[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_8[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_8[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_8[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram0_write) {
        if ((8U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_data_addr))) {
            vlSelf->riscv_soc__DOT__sram4__DOT__sram_8[0U] 
                = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[0U];
            vlSelf->riscv_soc__DOT__sram4__DOT__sram_8[1U] 
                = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[1U];
            vlSelf->riscv_soc__DOT__sram4__DOT__sram_8[2U] 
                = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[2U];
            vlSelf->riscv_soc__DOT__sram4__DOT__sram_8[3U] 
                = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_7[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_7[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_7[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_7[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram0_write) {
        if ((7U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_data_addr))) {
            vlSelf->riscv_soc__DOT__sram4__DOT__sram_7[0U] 
                = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[0U];
            vlSelf->riscv_soc__DOT__sram4__DOT__sram_7[1U] 
                = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[1U];
            vlSelf->riscv_soc__DOT__sram4__DOT__sram_7[2U] 
                = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[2U];
            vlSelf->riscv_soc__DOT__sram4__DOT__sram_7[3U] 
                = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_11[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_11[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_11[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_11[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram0_write) {
        if ((0xbU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_data_addr))) {
            vlSelf->riscv_soc__DOT__sram4__DOT__sram_11[0U] 
                = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[0U];
            vlSelf->riscv_soc__DOT__sram4__DOT__sram_11[1U] 
                = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[1U];
            vlSelf->riscv_soc__DOT__sram4__DOT__sram_11[2U] 
                = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[2U];
            vlSelf->riscv_soc__DOT__sram4__DOT__sram_11[3U] 
                = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_2[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_2[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_2[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_2[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram0_write) {
        if ((2U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_data_addr))) {
            vlSelf->riscv_soc__DOT__sram4__DOT__sram_2[0U] 
                = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[0U];
            vlSelf->riscv_soc__DOT__sram4__DOT__sram_2[1U] 
                = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[1U];
            vlSelf->riscv_soc__DOT__sram4__DOT__sram_2[2U] 
                = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[2U];
            vlSelf->riscv_soc__DOT__sram4__DOT__sram_2[3U] 
                = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_20[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_20[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_20[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_20[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram0_write) {
        if ((0x14U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_data_addr))) {
            vlSelf->riscv_soc__DOT__sram4__DOT__sram_20[0U] 
                = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[0U];
            vlSelf->riscv_soc__DOT__sram4__DOT__sram_20[1U] 
                = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[1U];
            vlSelf->riscv_soc__DOT__sram4__DOT__sram_20[2U] 
                = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[2U];
            vlSelf->riscv_soc__DOT__sram4__DOT__sram_20[3U] 
                = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_6[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_6[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_6[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_6[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram0_write) {
        if ((6U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_data_addr))) {
            vlSelf->riscv_soc__DOT__sram4__DOT__sram_6[0U] 
                = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[0U];
            vlSelf->riscv_soc__DOT__sram4__DOT__sram_6[1U] 
                = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[1U];
            vlSelf->riscv_soc__DOT__sram4__DOT__sram_6[2U] 
                = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[2U];
            vlSelf->riscv_soc__DOT__sram4__DOT__sram_6[3U] 
                = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_14[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_14[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_14[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_14[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram0_write) {
        if ((0xeU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_data_addr))) {
            vlSelf->riscv_soc__DOT__sram4__DOT__sram_14[0U] 
                = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[0U];
            vlSelf->riscv_soc__DOT__sram4__DOT__sram_14[1U] 
                = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[1U];
            vlSelf->riscv_soc__DOT__sram4__DOT__sram_14[2U] 
                = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[2U];
            vlSelf->riscv_soc__DOT__sram4__DOT__sram_14[3U] 
                = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_1[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_1[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_1[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_1[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram0_write) {
        if ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_data_addr))) {
            vlSelf->riscv_soc__DOT__sram4__DOT__sram_1[0U] 
                = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[0U];
            vlSelf->riscv_soc__DOT__sram4__DOT__sram_1[1U] 
                = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[1U];
            vlSelf->riscv_soc__DOT__sram4__DOT__sram_1[2U] 
                = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[2U];
            vlSelf->riscv_soc__DOT__sram4__DOT__sram_1[3U] 
                = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_19[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_19[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_19[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_19[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram0_write) {
        if ((0x13U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_data_addr))) {
            vlSelf->riscv_soc__DOT__sram4__DOT__sram_19[0U] 
                = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[0U];
            vlSelf->riscv_soc__DOT__sram4__DOT__sram_19[1U] 
                = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[1U];
            vlSelf->riscv_soc__DOT__sram4__DOT__sram_19[2U] 
                = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[2U];
            vlSelf->riscv_soc__DOT__sram4__DOT__sram_19[3U] 
                = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_5[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_5[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_5[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_5[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram0_write) {
        if ((5U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_data_addr))) {
            vlSelf->riscv_soc__DOT__sram4__DOT__sram_5[0U] 
                = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[0U];
            vlSelf->riscv_soc__DOT__sram4__DOT__sram_5[1U] 
                = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[1U];
            vlSelf->riscv_soc__DOT__sram4__DOT__sram_5[2U] 
                = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[2U];
            vlSelf->riscv_soc__DOT__sram4__DOT__sram_5[3U] 
                = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_13[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_13[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_13[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_13[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram0_write) {
        if ((0xdU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_data_addr))) {
            vlSelf->riscv_soc__DOT__sram4__DOT__sram_13[0U] 
                = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[0U];
            vlSelf->riscv_soc__DOT__sram4__DOT__sram_13[1U] 
                = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[1U];
            vlSelf->riscv_soc__DOT__sram4__DOT__sram_13[2U] 
                = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[2U];
            vlSelf->riscv_soc__DOT__sram4__DOT__sram_13[3U] 
                = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_0[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_0[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_0[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_0[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram0_write) {
        if ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_data_addr))) {
            vlSelf->riscv_soc__DOT__sram4__DOT__sram_0[0U] 
                = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[0U];
            vlSelf->riscv_soc__DOT__sram4__DOT__sram_0[1U] 
                = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[1U];
            vlSelf->riscv_soc__DOT__sram4__DOT__sram_0[2U] 
                = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[2U];
            vlSelf->riscv_soc__DOT__sram4__DOT__sram_0[3U] 
                = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_18[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_18[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_18[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_18[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram0_write) {
        if ((0x12U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_data_addr))) {
            vlSelf->riscv_soc__DOT__sram4__DOT__sram_18[0U] 
                = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[0U];
            vlSelf->riscv_soc__DOT__sram4__DOT__sram_18[1U] 
                = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[1U];
            vlSelf->riscv_soc__DOT__sram4__DOT__sram_18[2U] 
                = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[2U];
            vlSelf->riscv_soc__DOT__sram4__DOT__sram_18[3U] 
                = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_4[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_4[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_4[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_4[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram0_write) {
        if ((4U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_data_addr))) {
            vlSelf->riscv_soc__DOT__sram4__DOT__sram_4[0U] 
                = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[0U];
            vlSelf->riscv_soc__DOT__sram4__DOT__sram_4[1U] 
                = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[1U];
            vlSelf->riscv_soc__DOT__sram4__DOT__sram_4[2U] 
                = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[2U];
            vlSelf->riscv_soc__DOT__sram4__DOT__sram_4[3U] 
                = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_10[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_10[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_10[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_10[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram0_write) {
        if ((0xaU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_data_addr))) {
            vlSelf->riscv_soc__DOT__sram4__DOT__sram_10[0U] 
                = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[0U];
            vlSelf->riscv_soc__DOT__sram4__DOT__sram_10[1U] 
                = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[1U];
            vlSelf->riscv_soc__DOT__sram4__DOT__sram_10[2U] 
                = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[2U];
            vlSelf->riscv_soc__DOT__sram4__DOT__sram_10[3U] 
                = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_21[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_21[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_21[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_21[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram0_write) {
        if ((0x15U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_data_addr))) {
            vlSelf->riscv_soc__DOT__sram4__DOT__sram_21[0U] 
                = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[0U];
            vlSelf->riscv_soc__DOT__sram4__DOT__sram_21[1U] 
                = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[1U];
            vlSelf->riscv_soc__DOT__sram4__DOT__sram_21[2U] 
                = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[2U];
            vlSelf->riscv_soc__DOT__sram4__DOT__sram_21[3U] 
                = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_3[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_3[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_3[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_3[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram0_write) {
        if ((3U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_data_addr))) {
            vlSelf->riscv_soc__DOT__sram4__DOT__sram_3[0U] 
                = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[0U];
            vlSelf->riscv_soc__DOT__sram4__DOT__sram_3[1U] 
                = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[1U];
            vlSelf->riscv_soc__DOT__sram4__DOT__sram_3[2U] 
                = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[2U];
            vlSelf->riscv_soc__DOT__sram4__DOT__sram_3[3U] 
                = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_12[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_12[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_12[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_12[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram0_write) {
        if ((0xcU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_data_addr))) {
            vlSelf->riscv_soc__DOT__sram4__DOT__sram_12[0U] 
                = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[0U];
            vlSelf->riscv_soc__DOT__sram4__DOT__sram_12[1U] 
                = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[1U];
            vlSelf->riscv_soc__DOT__sram4__DOT__sram_12[2U] 
                = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[2U];
            vlSelf->riscv_soc__DOT__sram4__DOT__sram_12[3U] 
                = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_15[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_15[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_15[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_15[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram0_write) {
        if ((0xfU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_data_addr))) {
            vlSelf->riscv_soc__DOT__sram4__DOT__sram_15[0U] 
                = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[0U];
            vlSelf->riscv_soc__DOT__sram4__DOT__sram_15[1U] 
                = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[1U];
            vlSelf->riscv_soc__DOT__sram4__DOT__sram_15[2U] 
                = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[2U];
            vlSelf->riscv_soc__DOT__sram4__DOT__sram_15[3U] 
                = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_16[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_16[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_16[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_16[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram0_write) {
        if ((0x10U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_data_addr))) {
            vlSelf->riscv_soc__DOT__sram4__DOT__sram_16[0U] 
                = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[0U];
            vlSelf->riscv_soc__DOT__sram4__DOT__sram_16[1U] 
                = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[1U];
            vlSelf->riscv_soc__DOT__sram4__DOT__sram_16[2U] 
                = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[2U];
            vlSelf->riscv_soc__DOT__sram4__DOT__sram_16[3U] 
                = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_17[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_17[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_17[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_17[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram0_write) {
        if ((0x11U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_data_addr))) {
            vlSelf->riscv_soc__DOT__sram4__DOT__sram_17[0U] 
                = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[0U];
            vlSelf->riscv_soc__DOT__sram4__DOT__sram_17[1U] 
                = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[1U];
            vlSelf->riscv_soc__DOT__sram4__DOT__sram_17[2U] 
                = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[2U];
            vlSelf->riscv_soc__DOT__sram4__DOT__sram_17[3U] 
                = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_9[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_9[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_9[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_9[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram2_write) {
        if ((9U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_data_addr))) {
            vlSelf->riscv_soc__DOT__sram6__DOT__sram_9[0U] 
                = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[0U];
            vlSelf->riscv_soc__DOT__sram6__DOT__sram_9[1U] 
                = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[1U];
            vlSelf->riscv_soc__DOT__sram6__DOT__sram_9[2U] 
                = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[2U];
            vlSelf->riscv_soc__DOT__sram6__DOT__sram_9[3U] 
                = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_8[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_8[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_8[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_8[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram2_write) {
        if ((8U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_data_addr))) {
            vlSelf->riscv_soc__DOT__sram6__DOT__sram_8[0U] 
                = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[0U];
            vlSelf->riscv_soc__DOT__sram6__DOT__sram_8[1U] 
                = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[1U];
            vlSelf->riscv_soc__DOT__sram6__DOT__sram_8[2U] 
                = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[2U];
            vlSelf->riscv_soc__DOT__sram6__DOT__sram_8[3U] 
                = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_7[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_7[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_7[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_7[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram2_write) {
        if ((7U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_data_addr))) {
            vlSelf->riscv_soc__DOT__sram6__DOT__sram_7[0U] 
                = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[0U];
            vlSelf->riscv_soc__DOT__sram6__DOT__sram_7[1U] 
                = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[1U];
            vlSelf->riscv_soc__DOT__sram6__DOT__sram_7[2U] 
                = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[2U];
            vlSelf->riscv_soc__DOT__sram6__DOT__sram_7[3U] 
                = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_11[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_11[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_11[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_11[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram2_write) {
        if ((0xbU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_data_addr))) {
            vlSelf->riscv_soc__DOT__sram6__DOT__sram_11[0U] 
                = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[0U];
            vlSelf->riscv_soc__DOT__sram6__DOT__sram_11[1U] 
                = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[1U];
            vlSelf->riscv_soc__DOT__sram6__DOT__sram_11[2U] 
                = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[2U];
            vlSelf->riscv_soc__DOT__sram6__DOT__sram_11[3U] 
                = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_2[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_2[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_2[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_2[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram2_write) {
        if ((2U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_data_addr))) {
            vlSelf->riscv_soc__DOT__sram6__DOT__sram_2[0U] 
                = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[0U];
            vlSelf->riscv_soc__DOT__sram6__DOT__sram_2[1U] 
                = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[1U];
            vlSelf->riscv_soc__DOT__sram6__DOT__sram_2[2U] 
                = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[2U];
            vlSelf->riscv_soc__DOT__sram6__DOT__sram_2[3U] 
                = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_20[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_20[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_20[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_20[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram2_write) {
        if ((0x14U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_data_addr))) {
            vlSelf->riscv_soc__DOT__sram6__DOT__sram_20[0U] 
                = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[0U];
            vlSelf->riscv_soc__DOT__sram6__DOT__sram_20[1U] 
                = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[1U];
            vlSelf->riscv_soc__DOT__sram6__DOT__sram_20[2U] 
                = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[2U];
            vlSelf->riscv_soc__DOT__sram6__DOT__sram_20[3U] 
                = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_6[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_6[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_6[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_6[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram2_write) {
        if ((6U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_data_addr))) {
            vlSelf->riscv_soc__DOT__sram6__DOT__sram_6[0U] 
                = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[0U];
            vlSelf->riscv_soc__DOT__sram6__DOT__sram_6[1U] 
                = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[1U];
            vlSelf->riscv_soc__DOT__sram6__DOT__sram_6[2U] 
                = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[2U];
            vlSelf->riscv_soc__DOT__sram6__DOT__sram_6[3U] 
                = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_14[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_14[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_14[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_14[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram2_write) {
        if ((0xeU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_data_addr))) {
            vlSelf->riscv_soc__DOT__sram6__DOT__sram_14[0U] 
                = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[0U];
            vlSelf->riscv_soc__DOT__sram6__DOT__sram_14[1U] 
                = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[1U];
            vlSelf->riscv_soc__DOT__sram6__DOT__sram_14[2U] 
                = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[2U];
            vlSelf->riscv_soc__DOT__sram6__DOT__sram_14[3U] 
                = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_1[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_1[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_1[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_1[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram2_write) {
        if ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_data_addr))) {
            vlSelf->riscv_soc__DOT__sram6__DOT__sram_1[0U] 
                = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[0U];
            vlSelf->riscv_soc__DOT__sram6__DOT__sram_1[1U] 
                = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[1U];
            vlSelf->riscv_soc__DOT__sram6__DOT__sram_1[2U] 
                = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[2U];
            vlSelf->riscv_soc__DOT__sram6__DOT__sram_1[3U] 
                = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_19[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_19[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_19[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_19[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram2_write) {
        if ((0x13U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_data_addr))) {
            vlSelf->riscv_soc__DOT__sram6__DOT__sram_19[0U] 
                = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[0U];
            vlSelf->riscv_soc__DOT__sram6__DOT__sram_19[1U] 
                = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[1U];
            vlSelf->riscv_soc__DOT__sram6__DOT__sram_19[2U] 
                = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[2U];
            vlSelf->riscv_soc__DOT__sram6__DOT__sram_19[3U] 
                = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_5[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_5[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_5[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_5[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram2_write) {
        if ((5U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_data_addr))) {
            vlSelf->riscv_soc__DOT__sram6__DOT__sram_5[0U] 
                = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[0U];
            vlSelf->riscv_soc__DOT__sram6__DOT__sram_5[1U] 
                = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[1U];
            vlSelf->riscv_soc__DOT__sram6__DOT__sram_5[2U] 
                = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[2U];
            vlSelf->riscv_soc__DOT__sram6__DOT__sram_5[3U] 
                = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_13[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_13[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_13[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_13[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram2_write) {
        if ((0xdU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_data_addr))) {
            vlSelf->riscv_soc__DOT__sram6__DOT__sram_13[0U] 
                = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[0U];
            vlSelf->riscv_soc__DOT__sram6__DOT__sram_13[1U] 
                = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[1U];
            vlSelf->riscv_soc__DOT__sram6__DOT__sram_13[2U] 
                = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[2U];
            vlSelf->riscv_soc__DOT__sram6__DOT__sram_13[3U] 
                = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_0[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_0[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_0[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_0[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram2_write) {
        if ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_data_addr))) {
            vlSelf->riscv_soc__DOT__sram6__DOT__sram_0[0U] 
                = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[0U];
            vlSelf->riscv_soc__DOT__sram6__DOT__sram_0[1U] 
                = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[1U];
            vlSelf->riscv_soc__DOT__sram6__DOT__sram_0[2U] 
                = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[2U];
            vlSelf->riscv_soc__DOT__sram6__DOT__sram_0[3U] 
                = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_18[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_18[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_18[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_18[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram2_write) {
        if ((0x12U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_data_addr))) {
            vlSelf->riscv_soc__DOT__sram6__DOT__sram_18[0U] 
                = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[0U];
            vlSelf->riscv_soc__DOT__sram6__DOT__sram_18[1U] 
                = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[1U];
            vlSelf->riscv_soc__DOT__sram6__DOT__sram_18[2U] 
                = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[2U];
            vlSelf->riscv_soc__DOT__sram6__DOT__sram_18[3U] 
                = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_4[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_4[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_4[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_4[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram2_write) {
        if ((4U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_data_addr))) {
            vlSelf->riscv_soc__DOT__sram6__DOT__sram_4[0U] 
                = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[0U];
            vlSelf->riscv_soc__DOT__sram6__DOT__sram_4[1U] 
                = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[1U];
            vlSelf->riscv_soc__DOT__sram6__DOT__sram_4[2U] 
                = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[2U];
            vlSelf->riscv_soc__DOT__sram6__DOT__sram_4[3U] 
                = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_10[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_10[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_10[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_10[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram2_write) {
        if ((0xaU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_data_addr))) {
            vlSelf->riscv_soc__DOT__sram6__DOT__sram_10[0U] 
                = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[0U];
            vlSelf->riscv_soc__DOT__sram6__DOT__sram_10[1U] 
                = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[1U];
            vlSelf->riscv_soc__DOT__sram6__DOT__sram_10[2U] 
                = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[2U];
            vlSelf->riscv_soc__DOT__sram6__DOT__sram_10[3U] 
                = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_21[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_21[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_21[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_21[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram2_write) {
        if ((0x15U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_data_addr))) {
            vlSelf->riscv_soc__DOT__sram6__DOT__sram_21[0U] 
                = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[0U];
            vlSelf->riscv_soc__DOT__sram6__DOT__sram_21[1U] 
                = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[1U];
            vlSelf->riscv_soc__DOT__sram6__DOT__sram_21[2U] 
                = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[2U];
            vlSelf->riscv_soc__DOT__sram6__DOT__sram_21[3U] 
                = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_3[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_3[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_3[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_3[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram2_write) {
        if ((3U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_data_addr))) {
            vlSelf->riscv_soc__DOT__sram6__DOT__sram_3[0U] 
                = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[0U];
            vlSelf->riscv_soc__DOT__sram6__DOT__sram_3[1U] 
                = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[1U];
            vlSelf->riscv_soc__DOT__sram6__DOT__sram_3[2U] 
                = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[2U];
            vlSelf->riscv_soc__DOT__sram6__DOT__sram_3[3U] 
                = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_12[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_12[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_12[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_12[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram2_write) {
        if ((0xcU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_data_addr))) {
            vlSelf->riscv_soc__DOT__sram6__DOT__sram_12[0U] 
                = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[0U];
            vlSelf->riscv_soc__DOT__sram6__DOT__sram_12[1U] 
                = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[1U];
            vlSelf->riscv_soc__DOT__sram6__DOT__sram_12[2U] 
                = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[2U];
            vlSelf->riscv_soc__DOT__sram6__DOT__sram_12[3U] 
                = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_15[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_15[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_15[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_15[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram2_write) {
        if ((0xfU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_data_addr))) {
            vlSelf->riscv_soc__DOT__sram6__DOT__sram_15[0U] 
                = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[0U];
            vlSelf->riscv_soc__DOT__sram6__DOT__sram_15[1U] 
                = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[1U];
            vlSelf->riscv_soc__DOT__sram6__DOT__sram_15[2U] 
                = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[2U];
            vlSelf->riscv_soc__DOT__sram6__DOT__sram_15[3U] 
                = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_16[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_16[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_16[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_16[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram2_write) {
        if ((0x10U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_data_addr))) {
            vlSelf->riscv_soc__DOT__sram6__DOT__sram_16[0U] 
                = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[0U];
            vlSelf->riscv_soc__DOT__sram6__DOT__sram_16[1U] 
                = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[1U];
            vlSelf->riscv_soc__DOT__sram6__DOT__sram_16[2U] 
                = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[2U];
            vlSelf->riscv_soc__DOT__sram6__DOT__sram_16[3U] 
                = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_17[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_17[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_17[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_17[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram2_write) {
        if ((0x11U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_data_addr))) {
            vlSelf->riscv_soc__DOT__sram6__DOT__sram_17[0U] 
                = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[0U];
            vlSelf->riscv_soc__DOT__sram6__DOT__sram_17[1U] 
                = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[1U];
            vlSelf->riscv_soc__DOT__sram6__DOT__sram_17[2U] 
                = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[2U];
            vlSelf->riscv_soc__DOT__sram6__DOT__sram_17[3U] 
                = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[3U];
        }
    }
    vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__reg_ar_ok 
        = ((~ (IData)(vlSelf->reset)) & ((~ (IData)(vlSelf->riscv_soc__DOT__axi_ram_io_ram_bus_r_bits_rlast)) 
                                         & (((IData)(vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_ar_ready) 
                                             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_AXI_Bus_ar_valid)) 
                                            | (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__reg_ar_ok))));
    vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__reg_aw_ok 
        = ((~ (IData)(vlSelf->reset)) & ((~ (IData)(vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_b_valid)) 
                                         & (((IData)(vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_aw_ready) 
                                             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_AXI_Bus_aw_valid)) 
                                            | (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__reg_aw_ok))));
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram4__DOT__Q[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram4__DOT__Q[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram4__DOT__Q[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram4__DOT__Q[3U] = 0U;
        vlSelf->riscv_soc__DOT__sram6__DOT__Q[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram6__DOT__Q[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram6__DOT__Q[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram6__DOT__Q[3U] = 0U;
    } else {
        vlSelf->riscv_soc__DOT__sram4__DOT__Q[0U] = 
            ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram0_write)
              ? 0U : ((0x3fU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_data_addr))
                       ? vlSelf->riscv_soc__DOT__sram4__DOT__sram_63[0U]
                       : ((0x3eU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_data_addr))
                           ? vlSelf->riscv_soc__DOT__sram4__DOT__sram_62[0U]
                           : vlSelf->riscv_soc__DOT__sram4__DOT___GEN_61[0U])));
        vlSelf->riscv_soc__DOT__sram4__DOT__Q[1U] = 
            ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram0_write)
              ? 0U : ((0x3fU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_data_addr))
                       ? vlSelf->riscv_soc__DOT__sram4__DOT__sram_63[1U]
                       : ((0x3eU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_data_addr))
                           ? vlSelf->riscv_soc__DOT__sram4__DOT__sram_62[1U]
                           : vlSelf->riscv_soc__DOT__sram4__DOT___GEN_61[1U])));
        vlSelf->riscv_soc__DOT__sram4__DOT__Q[2U] = 
            ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram0_write)
              ? 0U : ((0x3fU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_data_addr))
                       ? vlSelf->riscv_soc__DOT__sram4__DOT__sram_63[2U]
                       : ((0x3eU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_data_addr))
                           ? vlSelf->riscv_soc__DOT__sram4__DOT__sram_62[2U]
                           : vlSelf->riscv_soc__DOT__sram4__DOT___GEN_61[2U])));
        vlSelf->riscv_soc__DOT__sram4__DOT__Q[3U] = 
            ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram0_write)
              ? 0U : ((0x3fU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_data_addr))
                       ? vlSelf->riscv_soc__DOT__sram4__DOT__sram_63[3U]
                       : ((0x3eU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_data_addr))
                           ? vlSelf->riscv_soc__DOT__sram4__DOT__sram_62[3U]
                           : vlSelf->riscv_soc__DOT__sram4__DOT___GEN_61[3U])));
        vlSelf->riscv_soc__DOT__sram6__DOT__Q[0U] = 
            ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram2_write)
              ? 0U : ((0x3fU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_data_addr))
                       ? vlSelf->riscv_soc__DOT__sram6__DOT__sram_63[0U]
                       : ((0x3eU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_data_addr))
                           ? vlSelf->riscv_soc__DOT__sram6__DOT__sram_62[0U]
                           : vlSelf->riscv_soc__DOT__sram6__DOT___GEN_61[0U])));
        vlSelf->riscv_soc__DOT__sram6__DOT__Q[1U] = 
            ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram2_write)
              ? 0U : ((0x3fU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_data_addr))
                       ? vlSelf->riscv_soc__DOT__sram6__DOT__sram_63[1U]
                       : ((0x3eU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_data_addr))
                           ? vlSelf->riscv_soc__DOT__sram6__DOT__sram_62[1U]
                           : vlSelf->riscv_soc__DOT__sram6__DOT___GEN_61[1U])));
        vlSelf->riscv_soc__DOT__sram6__DOT__Q[2U] = 
            ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram2_write)
              ? 0U : ((0x3fU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_data_addr))
                       ? vlSelf->riscv_soc__DOT__sram6__DOT__sram_63[2U]
                       : ((0x3eU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_data_addr))
                           ? vlSelf->riscv_soc__DOT__sram6__DOT__sram_62[2U]
                           : vlSelf->riscv_soc__DOT__sram6__DOT___GEN_61[2U])));
        vlSelf->riscv_soc__DOT__sram6__DOT__Q[3U] = 
            ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram2_write)
              ? 0U : ((0x3fU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_data_addr))
                       ? vlSelf->riscv_soc__DOT__sram6__DOT__sram_63[3U]
                       : ((0x3eU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_data_addr))
                           ? vlSelf->riscv_soc__DOT__sram6__DOT__sram_62[3U]
                           : vlSelf->riscv_soc__DOT__sram6__DOT___GEN_61[3U])));
    }
    vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_temp_sram0_valid 
        = (1U & ((~ (IData)(vlSelf->reset)) & (IData)(
                                                      (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_sram0_valid 
                                                       >> (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1_io_tag_valid_index)))));
    vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_temp_sram1_valid 
        = (1U & ((~ (IData)(vlSelf->reset)) & (IData)(
                                                      (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_sram1_valid 
                                                       >> (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1_io_tag_valid_index)))));
    vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_temp_r_index 
        = ((IData)(vlSelf->reset) ? 0U : (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1_io_tag_valid_index));
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__pre_info_tail = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__fetch_io_out_flush) {
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__pre_info_tail = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__is_pre) {
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__pre_info_tail 
            = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT___pre_info_tail_T_1;
    }
    vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_sram_r_ready 
        = ((IData)(vlSelf->reset) | (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___GEN_5));
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__is_pre_fifo_0 = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__fetch_io_out_flush) {
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__is_pre_fifo_0 = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT___pre_enq_T) {
        if ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__is_pre_head))) {
            vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__is_pre_fifo_0 
                = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor_io_pre_valid;
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__is_pre_fifo_1 = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__fetch_io_out_flush) {
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__is_pre_fifo_1 = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT___pre_enq_T) {
        if ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__is_pre_head))) {
            vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__is_pre_fifo_1 
                = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor_io_pre_valid;
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__is_pre_fifo_2 = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__fetch_io_out_flush) {
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__is_pre_fifo_2 = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT___pre_enq_T) {
        if ((2U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__is_pre_head))) {
            vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__is_pre_fifo_2 
                = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor_io_pre_valid;
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__is_pre_fifo_3 = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__fetch_io_out_flush) {
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__is_pre_fifo_3 = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT___pre_enq_T) {
        if ((3U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__is_pre_head))) {
            vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__is_pre_fifo_3 
                = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor_io_pre_valid;
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__pre_info_fifo_0 = 0ULL;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__fetch_io_out_flush) {
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__pre_info_fifo_0 = 0ULL;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__pre_enq) {
        if ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__pre_info_head))) {
            vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__pre_info_fifo_0 
                = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor_io_pre_next_pc;
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__pre_info_fifo_1 = 0ULL;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__fetch_io_out_flush) {
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__pre_info_fifo_1 = 0ULL;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__pre_enq) {
        if ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__pre_info_head))) {
            vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__pre_info_fifo_1 
                = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor_io_pre_next_pc;
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__pre_info_fifo_2 = 0ULL;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__fetch_io_out_flush) {
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__pre_info_fifo_2 = 0ULL;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__pre_enq) {
        if ((2U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__pre_info_head))) {
            vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__pre_info_fifo_2 
                = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor_io_pre_next_pc;
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__pre_info_fifo_3 = 0ULL;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__fetch_io_out_flush) {
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__pre_info_fifo_3 = 0ULL;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__pre_enq) {
        if ((3U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__pre_info_head))) {
            vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__pre_info_fifo_3 
                = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor_io_pre_next_pc;
        }
    }
    vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_ready 
        = ((IData)(vlSelf->reset) | (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT___GEN_54));
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__clint_de__DOT__reg_msip = 0U;
    } else if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__clint_de__DOT__reg_state)))) {
        if (vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1_io_clint_bus_valid) {
            if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu_io_bus_bits_is_w) {
                vlSelf->riscv_soc__DOT__core__DOT__clint_de__DOT__reg_msip 
                    = vlSelf->riscv_soc__DOT__core__DOT__clint_de__DOT___reg_msip_T_1;
            }
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__clint_de__DOT__reg_mtimecmp = 0xffffffffffffffffULL;
    } else if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__clint_de__DOT__reg_state)))) {
        if (vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1_io_clint_bus_valid) {
            if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu_io_bus_bits_is_w) {
                vlSelf->riscv_soc__DOT__core__DOT__clint_de__DOT__reg_mtimecmp 
                    = vlSelf->riscv_soc__DOT__core__DOT__clint_de__DOT___reg_mtimecmp_T;
            }
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__clint_de__DOT__reg_ready = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__clint_de__DOT__reg_state) {
        if (vlSelf->riscv_soc__DOT__core__DOT__clint_de__DOT__reg_state) {
            if (vlSelf->riscv_soc__DOT__core__DOT__clint_de__DOT___T_2) {
                vlSelf->riscv_soc__DOT__core__DOT__clint_de__DOT__reg_ready = 0U;
            }
        }
    } else {
        vlSelf->riscv_soc__DOT__core__DOT__clint_de__DOT__reg_ready 
            = vlSelf->riscv_soc__DOT__core__DOT__clint_de__DOT___GEN_6;
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__clint_de__DOT__red_rdata = 0ULL;
    } else if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__clint_de__DOT__reg_state)))) {
        if (vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1_io_clint_bus_valid) {
            vlSelf->riscv_soc__DOT__core__DOT__clint_de__DOT__red_rdata 
                = ((0xbff8U == (0xffffU & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu_io_bus_bits_addr)))
                    ? vlSelf->riscv_soc__DOT__core__DOT__clint_de__DOT__reg_mtime
                    : vlSelf->riscv_soc__DOT__core__DOT__clint_de__DOT___temp_data_T_4);
        }
    }
    if (vlSelf->reset) {
        vlSelf->__Vdly__riscv_soc__DOT__core__DOT__clint_de__DOT__reg_state = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__clint_de__DOT__reg_state) {
        if (vlSelf->riscv_soc__DOT__core__DOT__clint_de__DOT__reg_state) {
            if (vlSelf->riscv_soc__DOT__core__DOT__clint_de__DOT___T_2) {
                vlSelf->__Vdly__riscv_soc__DOT__core__DOT__clint_de__DOT__reg_state = 0U;
            }
        }
    } else {
        vlSelf->__Vdly__riscv_soc__DOT__core__DOT__clint_de__DOT__reg_state 
            = vlSelf->riscv_soc__DOT__core__DOT__clint_de__DOT___GEN_5;
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_sram0_dirty = 0ULL;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram0_write) {
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_sram0_dirty 
            = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_is_w)
                ? vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___reg_sram0_dirty_T
                : vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___reg_sram0_dirty_T_1);
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_sram2_dirty = 0ULL;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram2_write) {
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_sram2_dirty 
            = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_is_w)
                ? vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___reg_sram2_dirty_T
                : vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___reg_sram2_dirty_T_1);
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_61[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_61[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_61[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_61[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram0_write) {
        if ((0x3dU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp1325, vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag);
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_61[0U] 
                = __Vtemp1325[0U];
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_61[1U] 
                = __Vtemp1325[1U];
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_61[2U] 
                = __Vtemp1325[2U];
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_61[3U] 
                = __Vtemp1325[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_60[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_60[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_60[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_60[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram0_write) {
        if ((0x3cU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp1326, vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag);
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_60[0U] 
                = __Vtemp1326[0U];
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_60[1U] 
                = __Vtemp1326[1U];
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_60[2U] 
                = __Vtemp1326[2U];
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_60[3U] 
                = __Vtemp1326[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_59[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_59[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_59[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_59[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram0_write) {
        if ((0x3bU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp1327, vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag);
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_59[0U] 
                = __Vtemp1327[0U];
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_59[1U] 
                = __Vtemp1327[1U];
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_59[2U] 
                = __Vtemp1327[2U];
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_59[3U] 
                = __Vtemp1327[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_58[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_58[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_58[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_58[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram0_write) {
        if ((0x3aU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp1328, vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag);
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_58[0U] 
                = __Vtemp1328[0U];
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_58[1U] 
                = __Vtemp1328[1U];
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_58[2U] 
                = __Vtemp1328[2U];
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_58[3U] 
                = __Vtemp1328[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_57[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_57[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_57[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_57[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram0_write) {
        if ((0x39U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp1329, vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag);
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_57[0U] 
                = __Vtemp1329[0U];
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_57[1U] 
                = __Vtemp1329[1U];
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_57[2U] 
                = __Vtemp1329[2U];
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_57[3U] 
                = __Vtemp1329[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_56[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_56[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_56[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_56[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram0_write) {
        if ((0x38U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp1330, vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag);
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_56[0U] 
                = __Vtemp1330[0U];
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_56[1U] 
                = __Vtemp1330[1U];
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_56[2U] 
                = __Vtemp1330[2U];
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_56[3U] 
                = __Vtemp1330[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_55[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_55[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_55[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_55[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram0_write) {
        if ((0x37U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp1331, vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag);
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_55[0U] 
                = __Vtemp1331[0U];
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_55[1U] 
                = __Vtemp1331[1U];
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_55[2U] 
                = __Vtemp1331[2U];
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_55[3U] 
                = __Vtemp1331[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_54[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_54[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_54[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_54[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram0_write) {
        if ((0x36U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp1332, vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag);
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_54[0U] 
                = __Vtemp1332[0U];
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_54[1U] 
                = __Vtemp1332[1U];
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_54[2U] 
                = __Vtemp1332[2U];
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_54[3U] 
                = __Vtemp1332[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_53[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_53[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_53[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_53[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram0_write) {
        if ((0x35U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp1333, vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag);
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_53[0U] 
                = __Vtemp1333[0U];
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_53[1U] 
                = __Vtemp1333[1U];
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_53[2U] 
                = __Vtemp1333[2U];
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_53[3U] 
                = __Vtemp1333[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_52[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_52[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_52[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_52[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram0_write) {
        if ((0x34U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp1334, vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag);
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_52[0U] 
                = __Vtemp1334[0U];
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_52[1U] 
                = __Vtemp1334[1U];
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_52[2U] 
                = __Vtemp1334[2U];
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_52[3U] 
                = __Vtemp1334[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_51[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_51[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_51[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_51[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram0_write) {
        if ((0x33U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp1335, vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag);
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_51[0U] 
                = __Vtemp1335[0U];
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_51[1U] 
                = __Vtemp1335[1U];
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_51[2U] 
                = __Vtemp1335[2U];
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_51[3U] 
                = __Vtemp1335[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_50[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_50[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_50[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_50[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram0_write) {
        if ((0x32U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp1336, vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag);
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_50[0U] 
                = __Vtemp1336[0U];
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_50[1U] 
                = __Vtemp1336[1U];
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_50[2U] 
                = __Vtemp1336[2U];
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_50[3U] 
                = __Vtemp1336[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_49[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_49[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_49[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_49[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram0_write) {
        if ((0x31U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp1337, vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag);
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_49[0U] 
                = __Vtemp1337[0U];
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_49[1U] 
                = __Vtemp1337[1U];
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_49[2U] 
                = __Vtemp1337[2U];
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_49[3U] 
                = __Vtemp1337[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_48[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_48[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_48[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_48[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram0_write) {
        if ((0x30U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp1338, vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag);
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_48[0U] 
                = __Vtemp1338[0U];
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_48[1U] 
                = __Vtemp1338[1U];
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_48[2U] 
                = __Vtemp1338[2U];
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_48[3U] 
                = __Vtemp1338[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_47[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_47[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_47[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_47[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram0_write) {
        if ((0x2fU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp1339, vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag);
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_47[0U] 
                = __Vtemp1339[0U];
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_47[1U] 
                = __Vtemp1339[1U];
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_47[2U] 
                = __Vtemp1339[2U];
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_47[3U] 
                = __Vtemp1339[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_46[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_46[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_46[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_46[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram0_write) {
        if ((0x2eU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp1340, vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag);
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_46[0U] 
                = __Vtemp1340[0U];
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_46[1U] 
                = __Vtemp1340[1U];
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_46[2U] 
                = __Vtemp1340[2U];
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_46[3U] 
                = __Vtemp1340[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_45[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_45[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_45[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_45[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram0_write) {
        if ((0x2dU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp1341, vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag);
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_45[0U] 
                = __Vtemp1341[0U];
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_45[1U] 
                = __Vtemp1341[1U];
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_45[2U] 
                = __Vtemp1341[2U];
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_45[3U] 
                = __Vtemp1341[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_44[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_44[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_44[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_44[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram0_write) {
        if ((0x2cU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp1342, vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag);
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_44[0U] 
                = __Vtemp1342[0U];
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_44[1U] 
                = __Vtemp1342[1U];
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_44[2U] 
                = __Vtemp1342[2U];
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_44[3U] 
                = __Vtemp1342[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_43[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_43[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_43[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_43[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram0_write) {
        if ((0x2bU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp1343, vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag);
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_43[0U] 
                = __Vtemp1343[0U];
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_43[1U] 
                = __Vtemp1343[1U];
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_43[2U] 
                = __Vtemp1343[2U];
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_43[3U] 
                = __Vtemp1343[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_61[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_61[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_61[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_61[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram2_write) {
        if ((0x3dU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp1344, vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag);
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_61[0U] 
                = __Vtemp1344[0U];
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_61[1U] 
                = __Vtemp1344[1U];
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_61[2U] 
                = __Vtemp1344[2U];
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_61[3U] 
                = __Vtemp1344[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_60[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_60[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_60[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_60[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram2_write) {
        if ((0x3cU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp1345, vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag);
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_60[0U] 
                = __Vtemp1345[0U];
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_60[1U] 
                = __Vtemp1345[1U];
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_60[2U] 
                = __Vtemp1345[2U];
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_60[3U] 
                = __Vtemp1345[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_59[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_59[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_59[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_59[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram2_write) {
        if ((0x3bU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp1346, vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag);
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_59[0U] 
                = __Vtemp1346[0U];
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_59[1U] 
                = __Vtemp1346[1U];
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_59[2U] 
                = __Vtemp1346[2U];
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_59[3U] 
                = __Vtemp1346[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_58[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_58[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_58[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_58[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram2_write) {
        if ((0x3aU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp1347, vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag);
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_58[0U] 
                = __Vtemp1347[0U];
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_58[1U] 
                = __Vtemp1347[1U];
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_58[2U] 
                = __Vtemp1347[2U];
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_58[3U] 
                = __Vtemp1347[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_57[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_57[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_57[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_57[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram2_write) {
        if ((0x39U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp1348, vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag);
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_57[0U] 
                = __Vtemp1348[0U];
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_57[1U] 
                = __Vtemp1348[1U];
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_57[2U] 
                = __Vtemp1348[2U];
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_57[3U] 
                = __Vtemp1348[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_56[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_56[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_56[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_56[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram2_write) {
        if ((0x38U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp1349, vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag);
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_56[0U] 
                = __Vtemp1349[0U];
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_56[1U] 
                = __Vtemp1349[1U];
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_56[2U] 
                = __Vtemp1349[2U];
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_56[3U] 
                = __Vtemp1349[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_55[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_55[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_55[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_55[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram2_write) {
        if ((0x37U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp1350, vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag);
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_55[0U] 
                = __Vtemp1350[0U];
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_55[1U] 
                = __Vtemp1350[1U];
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_55[2U] 
                = __Vtemp1350[2U];
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_55[3U] 
                = __Vtemp1350[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_54[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_54[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_54[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_54[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram2_write) {
        if ((0x36U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp1351, vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag);
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_54[0U] 
                = __Vtemp1351[0U];
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_54[1U] 
                = __Vtemp1351[1U];
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_54[2U] 
                = __Vtemp1351[2U];
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_54[3U] 
                = __Vtemp1351[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_53[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_53[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_53[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_53[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram2_write) {
        if ((0x35U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp1352, vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag);
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_53[0U] 
                = __Vtemp1352[0U];
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_53[1U] 
                = __Vtemp1352[1U];
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_53[2U] 
                = __Vtemp1352[2U];
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_53[3U] 
                = __Vtemp1352[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_52[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_52[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_52[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_52[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram2_write) {
        if ((0x34U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp1353, vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag);
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_52[0U] 
                = __Vtemp1353[0U];
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_52[1U] 
                = __Vtemp1353[1U];
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_52[2U] 
                = __Vtemp1353[2U];
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_52[3U] 
                = __Vtemp1353[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_51[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_51[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_51[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_51[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram2_write) {
        if ((0x33U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp1354, vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag);
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_51[0U] 
                = __Vtemp1354[0U];
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_51[1U] 
                = __Vtemp1354[1U];
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_51[2U] 
                = __Vtemp1354[2U];
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_51[3U] 
                = __Vtemp1354[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_50[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_50[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_50[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_50[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram2_write) {
        if ((0x32U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp1355, vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag);
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_50[0U] 
                = __Vtemp1355[0U];
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_50[1U] 
                = __Vtemp1355[1U];
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_50[2U] 
                = __Vtemp1355[2U];
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_50[3U] 
                = __Vtemp1355[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_49[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_49[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_49[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_49[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram2_write) {
        if ((0x31U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp1356, vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag);
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_49[0U] 
                = __Vtemp1356[0U];
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_49[1U] 
                = __Vtemp1356[1U];
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_49[2U] 
                = __Vtemp1356[2U];
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_49[3U] 
                = __Vtemp1356[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_48[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_48[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_48[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_48[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram2_write) {
        if ((0x30U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp1357, vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag);
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_48[0U] 
                = __Vtemp1357[0U];
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_48[1U] 
                = __Vtemp1357[1U];
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_48[2U] 
                = __Vtemp1357[2U];
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_48[3U] 
                = __Vtemp1357[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_47[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_47[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_47[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_47[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram2_write) {
        if ((0x2fU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp1358, vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag);
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_47[0U] 
                = __Vtemp1358[0U];
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_47[1U] 
                = __Vtemp1358[1U];
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_47[2U] 
                = __Vtemp1358[2U];
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_47[3U] 
                = __Vtemp1358[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_46[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_46[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_46[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_46[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram2_write) {
        if ((0x2eU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp1359, vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag);
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_46[0U] 
                = __Vtemp1359[0U];
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_46[1U] 
                = __Vtemp1359[1U];
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_46[2U] 
                = __Vtemp1359[2U];
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_46[3U] 
                = __Vtemp1359[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_45[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_45[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_45[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_45[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram2_write) {
        if ((0x2dU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp1360, vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag);
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_45[0U] 
                = __Vtemp1360[0U];
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_45[1U] 
                = __Vtemp1360[1U];
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_45[2U] 
                = __Vtemp1360[2U];
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_45[3U] 
                = __Vtemp1360[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_44[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_44[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_44[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_44[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram2_write) {
        if ((0x2cU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp1361, vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag);
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_44[0U] 
                = __Vtemp1361[0U];
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_44[1U] 
                = __Vtemp1361[1U];
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_44[2U] 
                = __Vtemp1361[2U];
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_44[3U] 
                = __Vtemp1361[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_43[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_43[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_43[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_43[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram2_write) {
        if ((0x2bU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp1362, vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag);
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_43[0U] 
                = __Vtemp1362[0U];
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_43[1U] 
                = __Vtemp1362[1U];
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_43[2U] 
                = __Vtemp1362[2U];
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_43[3U] 
                = __Vtemp1362[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_2 = 0ULL;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation) {
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_2 
            = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_0)
                ? vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___reg_lru_2_T
                : ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2)
                    ? vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___reg_lru_2_T_1
                    : ((1U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___tag_valid_0_T) 
                              & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___tag_valid_2_T)))
                        ? ((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___LRU_2_T))
                            ? vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___reg_lru_2_T_1
                            : vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___reg_lru_2_T)
                        : ((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___tag_valid_0_T))
                            ? vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___reg_lru_2_T_1
                            : vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___reg_lru_2_T))));
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_42[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_42[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_42[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_42[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram0_write) {
        if ((0x2aU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp1363, vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag);
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_42[0U] 
                = __Vtemp1363[0U];
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_42[1U] 
                = __Vtemp1363[1U];
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_42[2U] 
                = __Vtemp1363[2U];
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_42[3U] 
                = __Vtemp1363[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_41[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_41[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_41[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_41[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram0_write) {
        if ((0x29U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp1364, vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag);
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_41[0U] 
                = __Vtemp1364[0U];
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_41[1U] 
                = __Vtemp1364[1U];
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_41[2U] 
                = __Vtemp1364[2U];
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_41[3U] 
                = __Vtemp1364[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_40[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_40[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_40[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_40[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram0_write) {
        if ((0x28U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp1365, vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag);
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_40[0U] 
                = __Vtemp1365[0U];
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_40[1U] 
                = __Vtemp1365[1U];
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_40[2U] 
                = __Vtemp1365[2U];
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_40[3U] 
                = __Vtemp1365[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_39[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_39[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_39[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_39[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram0_write) {
        if ((0x27U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp1366, vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag);
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_39[0U] 
                = __Vtemp1366[0U];
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_39[1U] 
                = __Vtemp1366[1U];
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_39[2U] 
                = __Vtemp1366[2U];
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_39[3U] 
                = __Vtemp1366[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_38[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_38[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_38[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_38[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram0_write) {
        if ((0x26U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp1367, vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag);
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_38[0U] 
                = __Vtemp1367[0U];
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_38[1U] 
                = __Vtemp1367[1U];
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_38[2U] 
                = __Vtemp1367[2U];
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_38[3U] 
                = __Vtemp1367[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_36[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_36[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_36[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_36[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram0_write) {
        if ((0x24U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp1368, vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag);
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_36[0U] 
                = __Vtemp1368[0U];
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_36[1U] 
                = __Vtemp1368[1U];
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_36[2U] 
                = __Vtemp1368[2U];
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_36[3U] 
                = __Vtemp1368[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_35[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_35[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_35[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_35[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram0_write) {
        if ((0x23U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp1369, vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag);
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_35[0U] 
                = __Vtemp1369[0U];
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_35[1U] 
                = __Vtemp1369[1U];
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_35[2U] 
                = __Vtemp1369[2U];
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_35[3U] 
                = __Vtemp1369[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_34[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_34[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_34[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_34[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram0_write) {
        if ((0x22U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp1370, vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag);
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_34[0U] 
                = __Vtemp1370[0U];
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_34[1U] 
                = __Vtemp1370[1U];
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_34[2U] 
                = __Vtemp1370[2U];
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_34[3U] 
                = __Vtemp1370[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_33[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_33[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_33[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_33[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram0_write) {
        if ((0x21U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp1371, vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag);
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_33[0U] 
                = __Vtemp1371[0U];
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_33[1U] 
                = __Vtemp1371[1U];
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_33[2U] 
                = __Vtemp1371[2U];
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_33[3U] 
                = __Vtemp1371[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_32[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_32[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_32[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_32[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram0_write) {
        if ((0x20U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp1372, vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag);
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_32[0U] 
                = __Vtemp1372[0U];
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_32[1U] 
                = __Vtemp1372[1U];
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_32[2U] 
                = __Vtemp1372[2U];
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_32[3U] 
                = __Vtemp1372[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_26[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_26[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_26[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_26[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram0_write) {
        if ((0x1aU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp1373, vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag);
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_26[0U] 
                = __Vtemp1373[0U];
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_26[1U] 
                = __Vtemp1373[1U];
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_26[2U] 
                = __Vtemp1373[2U];
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_26[3U] 
                = __Vtemp1373[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_25[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_25[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_25[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_25[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram0_write) {
        if ((0x19U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp1374, vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag);
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_25[0U] 
                = __Vtemp1374[0U];
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_25[1U] 
                = __Vtemp1374[1U];
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_25[2U] 
                = __Vtemp1374[2U];
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_25[3U] 
                = __Vtemp1374[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_29[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_29[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_29[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_29[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram0_write) {
        if ((0x1dU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp1375, vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag);
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_29[0U] 
                = __Vtemp1375[0U];
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_29[1U] 
                = __Vtemp1375[1U];
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_29[2U] 
                = __Vtemp1375[2U];
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_29[3U] 
                = __Vtemp1375[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_28[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_28[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_28[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_28[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram0_write) {
        if ((0x1cU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp1376, vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag);
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_28[0U] 
                = __Vtemp1376[0U];
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_28[1U] 
                = __Vtemp1376[1U];
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_28[2U] 
                = __Vtemp1376[2U];
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_28[3U] 
                = __Vtemp1376[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_27[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_27[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_27[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_27[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram0_write) {
        if ((0x1bU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp1377, vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag);
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_27[0U] 
                = __Vtemp1377[0U];
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_27[1U] 
                = __Vtemp1377[1U];
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_27[2U] 
                = __Vtemp1377[2U];
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_27[3U] 
                = __Vtemp1377[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_22[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_22[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_22[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_22[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram0_write) {
        if ((0x16U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp1378, vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag);
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_22[0U] 
                = __Vtemp1378[0U];
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_22[1U] 
                = __Vtemp1378[1U];
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_22[2U] 
                = __Vtemp1378[2U];
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_22[3U] 
                = __Vtemp1378[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_37[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_37[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_37[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_37[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram0_write) {
        if ((0x25U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp1379, vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag);
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_37[0U] 
                = __Vtemp1379[0U];
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_37[1U] 
                = __Vtemp1379[1U];
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_37[2U] 
                = __Vtemp1379[2U];
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_37[3U] 
                = __Vtemp1379[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_31[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_31[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_31[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_31[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram0_write) {
        if ((0x1fU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp1380, vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag);
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_31[0U] 
                = __Vtemp1380[0U];
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_31[1U] 
                = __Vtemp1380[1U];
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_31[2U] 
                = __Vtemp1380[2U];
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_31[3U] 
                = __Vtemp1380[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_30[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_30[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_30[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_30[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram0_write) {
        if ((0x1eU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp1381, vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag);
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_30[0U] 
                = __Vtemp1381[0U];
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_30[1U] 
                = __Vtemp1381[1U];
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_30[2U] 
                = __Vtemp1381[2U];
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_30[3U] 
                = __Vtemp1381[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_23[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_23[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_23[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_23[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram0_write) {
        if ((0x17U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp1382, vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag);
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_23[0U] 
                = __Vtemp1382[0U];
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_23[1U] 
                = __Vtemp1382[1U];
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_23[2U] 
                = __Vtemp1382[2U];
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_23[3U] 
                = __Vtemp1382[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_24[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_24[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_24[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_24[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram0_write) {
        if ((0x18U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp1383, vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag);
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_24[0U] 
                = __Vtemp1383[0U];
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_24[1U] 
                = __Vtemp1383[1U];
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_24[2U] 
                = __Vtemp1383[2U];
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_24[3U] 
                = __Vtemp1383[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_42[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_42[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_42[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_42[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram2_write) {
        if ((0x2aU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp1384, vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag);
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_42[0U] 
                = __Vtemp1384[0U];
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_42[1U] 
                = __Vtemp1384[1U];
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_42[2U] 
                = __Vtemp1384[2U];
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_42[3U] 
                = __Vtemp1384[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_41[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_41[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_41[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_41[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram2_write) {
        if ((0x29U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp1385, vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag);
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_41[0U] 
                = __Vtemp1385[0U];
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_41[1U] 
                = __Vtemp1385[1U];
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_41[2U] 
                = __Vtemp1385[2U];
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_41[3U] 
                = __Vtemp1385[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_40[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_40[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_40[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_40[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram2_write) {
        if ((0x28U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp1386, vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag);
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_40[0U] 
                = __Vtemp1386[0U];
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_40[1U] 
                = __Vtemp1386[1U];
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_40[2U] 
                = __Vtemp1386[2U];
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_40[3U] 
                = __Vtemp1386[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_39[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_39[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_39[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_39[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram2_write) {
        if ((0x27U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp1387, vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag);
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_39[0U] 
                = __Vtemp1387[0U];
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_39[1U] 
                = __Vtemp1387[1U];
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_39[2U] 
                = __Vtemp1387[2U];
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_39[3U] 
                = __Vtemp1387[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_38[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_38[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_38[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_38[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram2_write) {
        if ((0x26U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp1388, vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag);
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_38[0U] 
                = __Vtemp1388[0U];
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_38[1U] 
                = __Vtemp1388[1U];
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_38[2U] 
                = __Vtemp1388[2U];
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_38[3U] 
                = __Vtemp1388[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_36[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_36[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_36[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_36[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram2_write) {
        if ((0x24U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp1389, vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag);
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_36[0U] 
                = __Vtemp1389[0U];
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_36[1U] 
                = __Vtemp1389[1U];
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_36[2U] 
                = __Vtemp1389[2U];
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_36[3U] 
                = __Vtemp1389[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_35[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_35[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_35[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_35[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram2_write) {
        if ((0x23U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp1390, vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag);
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_35[0U] 
                = __Vtemp1390[0U];
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_35[1U] 
                = __Vtemp1390[1U];
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_35[2U] 
                = __Vtemp1390[2U];
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_35[3U] 
                = __Vtemp1390[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_34[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_34[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_34[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_34[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram2_write) {
        if ((0x22U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp1391, vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag);
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_34[0U] 
                = __Vtemp1391[0U];
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_34[1U] 
                = __Vtemp1391[1U];
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_34[2U] 
                = __Vtemp1391[2U];
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_34[3U] 
                = __Vtemp1391[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_33[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_33[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_33[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_33[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram2_write) {
        if ((0x21U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp1392, vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag);
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_33[0U] 
                = __Vtemp1392[0U];
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_33[1U] 
                = __Vtemp1392[1U];
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_33[2U] 
                = __Vtemp1392[2U];
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_33[3U] 
                = __Vtemp1392[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_32[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_32[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_32[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_32[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram2_write) {
        if ((0x20U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp1393, vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag);
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_32[0U] 
                = __Vtemp1393[0U];
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_32[1U] 
                = __Vtemp1393[1U];
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_32[2U] 
                = __Vtemp1393[2U];
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_32[3U] 
                = __Vtemp1393[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_26[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_26[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_26[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_26[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram2_write) {
        if ((0x1aU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp1394, vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag);
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_26[0U] 
                = __Vtemp1394[0U];
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_26[1U] 
                = __Vtemp1394[1U];
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_26[2U] 
                = __Vtemp1394[2U];
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_26[3U] 
                = __Vtemp1394[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_25[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_25[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_25[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_25[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram2_write) {
        if ((0x19U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp1395, vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag);
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_25[0U] 
                = __Vtemp1395[0U];
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_25[1U] 
                = __Vtemp1395[1U];
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_25[2U] 
                = __Vtemp1395[2U];
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_25[3U] 
                = __Vtemp1395[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_29[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_29[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_29[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_29[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram2_write) {
        if ((0x1dU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp1396, vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag);
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_29[0U] 
                = __Vtemp1396[0U];
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_29[1U] 
                = __Vtemp1396[1U];
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_29[2U] 
                = __Vtemp1396[2U];
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_29[3U] 
                = __Vtemp1396[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_28[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_28[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_28[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_28[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram2_write) {
        if ((0x1cU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp1397, vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag);
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_28[0U] 
                = __Vtemp1397[0U];
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_28[1U] 
                = __Vtemp1397[1U];
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_28[2U] 
                = __Vtemp1397[2U];
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_28[3U] 
                = __Vtemp1397[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_27[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_27[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_27[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_27[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram2_write) {
        if ((0x1bU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp1398, vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag);
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_27[0U] 
                = __Vtemp1398[0U];
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_27[1U] 
                = __Vtemp1398[1U];
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_27[2U] 
                = __Vtemp1398[2U];
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_27[3U] 
                = __Vtemp1398[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_22[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_22[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_22[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_22[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram2_write) {
        if ((0x16U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp1399, vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag);
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_22[0U] 
                = __Vtemp1399[0U];
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_22[1U] 
                = __Vtemp1399[1U];
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_22[2U] 
                = __Vtemp1399[2U];
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_22[3U] 
                = __Vtemp1399[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_37[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_37[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_37[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_37[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram2_write) {
        if ((0x25U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp1400, vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag);
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_37[0U] 
                = __Vtemp1400[0U];
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_37[1U] 
                = __Vtemp1400[1U];
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_37[2U] 
                = __Vtemp1400[2U];
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_37[3U] 
                = __Vtemp1400[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_31[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_31[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_31[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_31[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram2_write) {
        if ((0x1fU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp1401, vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag);
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_31[0U] 
                = __Vtemp1401[0U];
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_31[1U] 
                = __Vtemp1401[1U];
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_31[2U] 
                = __Vtemp1401[2U];
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_31[3U] 
                = __Vtemp1401[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_30[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_30[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_30[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_30[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram2_write) {
        if ((0x1eU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp1402, vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag);
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_30[0U] 
                = __Vtemp1402[0U];
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_30[1U] 
                = __Vtemp1402[1U];
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_30[2U] 
                = __Vtemp1402[2U];
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_30[3U] 
                = __Vtemp1402[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_23[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_23[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_23[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_23[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram2_write) {
        if ((0x17U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp1403, vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag);
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_23[0U] 
                = __Vtemp1403[0U];
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_23[1U] 
                = __Vtemp1403[1U];
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_23[2U] 
                = __Vtemp1403[2U];
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_23[3U] 
                = __Vtemp1403[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_24[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_24[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_24[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_24[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram2_write) {
        if ((0x18U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp1404, vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag);
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_24[0U] 
                = __Vtemp1404[0U];
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_24[1U] 
                = __Vtemp1404[1U];
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_24[2U] 
                = __Vtemp1404[2U];
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_24[3U] 
                = __Vtemp1404[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_9[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_9[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_9[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_9[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram0_write) {
        if ((9U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp1405, vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag);
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_9[0U] 
                = __Vtemp1405[0U];
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_9[1U] 
                = __Vtemp1405[1U];
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_9[2U] 
                = __Vtemp1405[2U];
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_9[3U] 
                = __Vtemp1405[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_8[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_8[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_8[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_8[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram0_write) {
        if ((8U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp1406, vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag);
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_8[0U] 
                = __Vtemp1406[0U];
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_8[1U] 
                = __Vtemp1406[1U];
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_8[2U] 
                = __Vtemp1406[2U];
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_8[3U] 
                = __Vtemp1406[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_7[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_7[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_7[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_7[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram0_write) {
        if ((7U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp1407, vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag);
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_7[0U] 
                = __Vtemp1407[0U];
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_7[1U] 
                = __Vtemp1407[1U];
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_7[2U] 
                = __Vtemp1407[2U];
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_7[3U] 
                = __Vtemp1407[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_11[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_11[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_11[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_11[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram0_write) {
        if ((0xbU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp1408, vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag);
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_11[0U] 
                = __Vtemp1408[0U];
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_11[1U] 
                = __Vtemp1408[1U];
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_11[2U] 
                = __Vtemp1408[2U];
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_11[3U] 
                = __Vtemp1408[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_2[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_2[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_2[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_2[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram0_write) {
        if ((2U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp1409, vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag);
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_2[0U] 
                = __Vtemp1409[0U];
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_2[1U] 
                = __Vtemp1409[1U];
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_2[2U] 
                = __Vtemp1409[2U];
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_2[3U] 
                = __Vtemp1409[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_20[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_20[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_20[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_20[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram0_write) {
        if ((0x14U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp1410, vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag);
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_20[0U] 
                = __Vtemp1410[0U];
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_20[1U] 
                = __Vtemp1410[1U];
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_20[2U] 
                = __Vtemp1410[2U];
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_20[3U] 
                = __Vtemp1410[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_6[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_6[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_6[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_6[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram0_write) {
        if ((6U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp1411, vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag);
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_6[0U] 
                = __Vtemp1411[0U];
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_6[1U] 
                = __Vtemp1411[1U];
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_6[2U] 
                = __Vtemp1411[2U];
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_6[3U] 
                = __Vtemp1411[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_14[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_14[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_14[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_14[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram0_write) {
        if ((0xeU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp1412, vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag);
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_14[0U] 
                = __Vtemp1412[0U];
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_14[1U] 
                = __Vtemp1412[1U];
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_14[2U] 
                = __Vtemp1412[2U];
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_14[3U] 
                = __Vtemp1412[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_1[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_1[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_1[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_1[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram0_write) {
        if ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp1413, vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag);
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_1[0U] 
                = __Vtemp1413[0U];
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_1[1U] 
                = __Vtemp1413[1U];
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_1[2U] 
                = __Vtemp1413[2U];
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_1[3U] 
                = __Vtemp1413[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_19[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_19[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_19[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_19[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram0_write) {
        if ((0x13U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp1414, vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag);
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_19[0U] 
                = __Vtemp1414[0U];
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_19[1U] 
                = __Vtemp1414[1U];
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_19[2U] 
                = __Vtemp1414[2U];
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_19[3U] 
                = __Vtemp1414[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_5[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_5[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_5[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_5[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram0_write) {
        if ((5U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp1415, vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag);
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_5[0U] 
                = __Vtemp1415[0U];
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_5[1U] 
                = __Vtemp1415[1U];
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_5[2U] 
                = __Vtemp1415[2U];
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_5[3U] 
                = __Vtemp1415[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_13[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_13[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_13[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_13[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram0_write) {
        if ((0xdU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp1416, vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag);
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_13[0U] 
                = __Vtemp1416[0U];
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_13[1U] 
                = __Vtemp1416[1U];
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_13[2U] 
                = __Vtemp1416[2U];
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_13[3U] 
                = __Vtemp1416[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_0[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_0[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_0[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_0[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram0_write) {
        if ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp1417, vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag);
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_0[0U] 
                = __Vtemp1417[0U];
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_0[1U] 
                = __Vtemp1417[1U];
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_0[2U] 
                = __Vtemp1417[2U];
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_0[3U] 
                = __Vtemp1417[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_18[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_18[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_18[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_18[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram0_write) {
        if ((0x12U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp1418, vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag);
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_18[0U] 
                = __Vtemp1418[0U];
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_18[1U] 
                = __Vtemp1418[1U];
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_18[2U] 
                = __Vtemp1418[2U];
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_18[3U] 
                = __Vtemp1418[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_4[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_4[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_4[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_4[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram0_write) {
        if ((4U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp1419, vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag);
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_4[0U] 
                = __Vtemp1419[0U];
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_4[1U] 
                = __Vtemp1419[1U];
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_4[2U] 
                = __Vtemp1419[2U];
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_4[3U] 
                = __Vtemp1419[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_10[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_10[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_10[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_10[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram0_write) {
        if ((0xaU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp1420, vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag);
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_10[0U] 
                = __Vtemp1420[0U];
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_10[1U] 
                = __Vtemp1420[1U];
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_10[2U] 
                = __Vtemp1420[2U];
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_10[3U] 
                = __Vtemp1420[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_21[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_21[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_21[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_21[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram0_write) {
        if ((0x15U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp1421, vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag);
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_21[0U] 
                = __Vtemp1421[0U];
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_21[1U] 
                = __Vtemp1421[1U];
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_21[2U] 
                = __Vtemp1421[2U];
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_21[3U] 
                = __Vtemp1421[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_3[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_3[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_3[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_3[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram0_write) {
        if ((3U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp1422, vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag);
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_3[0U] 
                = __Vtemp1422[0U];
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_3[1U] 
                = __Vtemp1422[1U];
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_3[2U] 
                = __Vtemp1422[2U];
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_3[3U] 
                = __Vtemp1422[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_12[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_12[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_12[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_12[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram0_write) {
        if ((0xcU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp1423, vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag);
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_12[0U] 
                = __Vtemp1423[0U];
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_12[1U] 
                = __Vtemp1423[1U];
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_12[2U] 
                = __Vtemp1423[2U];
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_12[3U] 
                = __Vtemp1423[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_15[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_15[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_15[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_15[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram0_write) {
        if ((0xfU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp1424, vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag);
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_15[0U] 
                = __Vtemp1424[0U];
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_15[1U] 
                = __Vtemp1424[1U];
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_15[2U] 
                = __Vtemp1424[2U];
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_15[3U] 
                = __Vtemp1424[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_16[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_16[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_16[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_16[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram0_write) {
        if ((0x10U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp1425, vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag);
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_16[0U] 
                = __Vtemp1425[0U];
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_16[1U] 
                = __Vtemp1425[1U];
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_16[2U] 
                = __Vtemp1425[2U];
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_16[3U] 
                = __Vtemp1425[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_17[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_17[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_17[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_17[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram0_write) {
        if ((0x11U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp1426, vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag);
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_17[0U] 
                = __Vtemp1426[0U];
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_17[1U] 
                = __Vtemp1426[1U];
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_17[2U] 
                = __Vtemp1426[2U];
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_17[3U] 
                = __Vtemp1426[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_9[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_9[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_9[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_9[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram2_write) {
        if ((9U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp1427, vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag);
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_9[0U] 
                = __Vtemp1427[0U];
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_9[1U] 
                = __Vtemp1427[1U];
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_9[2U] 
                = __Vtemp1427[2U];
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_9[3U] 
                = __Vtemp1427[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_8[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_8[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_8[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_8[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram2_write) {
        if ((8U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp1428, vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag);
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_8[0U] 
                = __Vtemp1428[0U];
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_8[1U] 
                = __Vtemp1428[1U];
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_8[2U] 
                = __Vtemp1428[2U];
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_8[3U] 
                = __Vtemp1428[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_7[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_7[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_7[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_7[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram2_write) {
        if ((7U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp1429, vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag);
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_7[0U] 
                = __Vtemp1429[0U];
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_7[1U] 
                = __Vtemp1429[1U];
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_7[2U] 
                = __Vtemp1429[2U];
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_7[3U] 
                = __Vtemp1429[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_11[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_11[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_11[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_11[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram2_write) {
        if ((0xbU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp1430, vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag);
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_11[0U] 
                = __Vtemp1430[0U];
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_11[1U] 
                = __Vtemp1430[1U];
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_11[2U] 
                = __Vtemp1430[2U];
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_11[3U] 
                = __Vtemp1430[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_2[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_2[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_2[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_2[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram2_write) {
        if ((2U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp1431, vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag);
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_2[0U] 
                = __Vtemp1431[0U];
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_2[1U] 
                = __Vtemp1431[1U];
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_2[2U] 
                = __Vtemp1431[2U];
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_2[3U] 
                = __Vtemp1431[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_20[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_20[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_20[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_20[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram2_write) {
        if ((0x14U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp1432, vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag);
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_20[0U] 
                = __Vtemp1432[0U];
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_20[1U] 
                = __Vtemp1432[1U];
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_20[2U] 
                = __Vtemp1432[2U];
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_20[3U] 
                = __Vtemp1432[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_6[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_6[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_6[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_6[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram2_write) {
        if ((6U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp1433, vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag);
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_6[0U] 
                = __Vtemp1433[0U];
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_6[1U] 
                = __Vtemp1433[1U];
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_6[2U] 
                = __Vtemp1433[2U];
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_6[3U] 
                = __Vtemp1433[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_14[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_14[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_14[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_14[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram2_write) {
        if ((0xeU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp1434, vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag);
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_14[0U] 
                = __Vtemp1434[0U];
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_14[1U] 
                = __Vtemp1434[1U];
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_14[2U] 
                = __Vtemp1434[2U];
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_14[3U] 
                = __Vtemp1434[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_1[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_1[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_1[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_1[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram2_write) {
        if ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp1435, vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag);
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_1[0U] 
                = __Vtemp1435[0U];
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_1[1U] 
                = __Vtemp1435[1U];
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_1[2U] 
                = __Vtemp1435[2U];
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_1[3U] 
                = __Vtemp1435[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_19[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_19[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_19[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_19[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram2_write) {
        if ((0x13U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp1436, vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag);
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_19[0U] 
                = __Vtemp1436[0U];
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_19[1U] 
                = __Vtemp1436[1U];
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_19[2U] 
                = __Vtemp1436[2U];
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_19[3U] 
                = __Vtemp1436[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_5[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_5[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_5[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_5[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram2_write) {
        if ((5U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp1437, vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag);
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_5[0U] 
                = __Vtemp1437[0U];
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_5[1U] 
                = __Vtemp1437[1U];
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_5[2U] 
                = __Vtemp1437[2U];
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_5[3U] 
                = __Vtemp1437[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_13[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_13[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_13[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_13[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram2_write) {
        if ((0xdU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp1438, vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag);
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_13[0U] 
                = __Vtemp1438[0U];
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_13[1U] 
                = __Vtemp1438[1U];
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_13[2U] 
                = __Vtemp1438[2U];
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_13[3U] 
                = __Vtemp1438[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_0[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_0[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_0[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_0[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram2_write) {
        if ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp1439, vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag);
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_0[0U] 
                = __Vtemp1439[0U];
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_0[1U] 
                = __Vtemp1439[1U];
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_0[2U] 
                = __Vtemp1439[2U];
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_0[3U] 
                = __Vtemp1439[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_18[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_18[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_18[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_18[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram2_write) {
        if ((0x12U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp1440, vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag);
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_18[0U] 
                = __Vtemp1440[0U];
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_18[1U] 
                = __Vtemp1440[1U];
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_18[2U] 
                = __Vtemp1440[2U];
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_18[3U] 
                = __Vtemp1440[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_4[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_4[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_4[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_4[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram2_write) {
        if ((4U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp1441, vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag);
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_4[0U] 
                = __Vtemp1441[0U];
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_4[1U] 
                = __Vtemp1441[1U];
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_4[2U] 
                = __Vtemp1441[2U];
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_4[3U] 
                = __Vtemp1441[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_10[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_10[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_10[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_10[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram2_write) {
        if ((0xaU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp1442, vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag);
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_10[0U] 
                = __Vtemp1442[0U];
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_10[1U] 
                = __Vtemp1442[1U];
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_10[2U] 
                = __Vtemp1442[2U];
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_10[3U] 
                = __Vtemp1442[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_21[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_21[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_21[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_21[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram2_write) {
        if ((0x15U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp1443, vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag);
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_21[0U] 
                = __Vtemp1443[0U];
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_21[1U] 
                = __Vtemp1443[1U];
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_21[2U] 
                = __Vtemp1443[2U];
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_21[3U] 
                = __Vtemp1443[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_3[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_3[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_3[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_3[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram2_write) {
        if ((3U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp1444, vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag);
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_3[0U] 
                = __Vtemp1444[0U];
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_3[1U] 
                = __Vtemp1444[1U];
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_3[2U] 
                = __Vtemp1444[2U];
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_3[3U] 
                = __Vtemp1444[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_12[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_12[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_12[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_12[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram2_write) {
        if ((0xcU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp1445, vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag);
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_12[0U] 
                = __Vtemp1445[0U];
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_12[1U] 
                = __Vtemp1445[1U];
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_12[2U] 
                = __Vtemp1445[2U];
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_12[3U] 
                = __Vtemp1445[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_15[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_15[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_15[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_15[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram2_write) {
        if ((0xfU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp1446, vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag);
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_15[0U] 
                = __Vtemp1446[0U];
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_15[1U] 
                = __Vtemp1446[1U];
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_15[2U] 
                = __Vtemp1446[2U];
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_15[3U] 
                = __Vtemp1446[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_16[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_16[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_16[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_16[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram2_write) {
        if ((0x10U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp1447, vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag);
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_16[0U] 
                = __Vtemp1447[0U];
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_16[1U] 
                = __Vtemp1447[1U];
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_16[2U] 
                = __Vtemp1447[2U];
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_16[3U] 
                = __Vtemp1447[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_17[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_17[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_17[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_17[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram2_write) {
        if ((0x11U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp1448, vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag);
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_17[0U] 
                = __Vtemp1448[0U];
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_17[1U] 
                = __Vtemp1448[1U];
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_17[2U] 
                = __Vtemp1448[2U];
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_17[3U] 
                = __Vtemp1448[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram5__DOT__Q[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__Q[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__Q[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__Q[3U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__Q[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__Q[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__Q[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__Q[3U] = 0U;
    } else {
        vlSelf->riscv_soc__DOT__sram5__DOT__Q[0U] = 
            ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram0_write)
              ? 0U : ((0x3fU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_tag_addr))
                       ? vlSelf->riscv_soc__DOT__sram5__DOT__sram_63[0U]
                       : ((0x3eU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_tag_addr))
                           ? vlSelf->riscv_soc__DOT__sram5__DOT__sram_62[0U]
                           : vlSelf->riscv_soc__DOT__sram5__DOT___GEN_61[0U])));
        vlSelf->riscv_soc__DOT__sram5__DOT__Q[1U] = 
            ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram0_write)
              ? 0U : ((0x3fU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_tag_addr))
                       ? vlSelf->riscv_soc__DOT__sram5__DOT__sram_63[1U]
                       : ((0x3eU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_tag_addr))
                           ? vlSelf->riscv_soc__DOT__sram5__DOT__sram_62[1U]
                           : vlSelf->riscv_soc__DOT__sram5__DOT___GEN_61[1U])));
        vlSelf->riscv_soc__DOT__sram5__DOT__Q[2U] = 
            ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram0_write)
              ? 0U : ((0x3fU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_tag_addr))
                       ? vlSelf->riscv_soc__DOT__sram5__DOT__sram_63[2U]
                       : ((0x3eU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_tag_addr))
                           ? vlSelf->riscv_soc__DOT__sram5__DOT__sram_62[2U]
                           : vlSelf->riscv_soc__DOT__sram5__DOT___GEN_61[2U])));
        vlSelf->riscv_soc__DOT__sram5__DOT__Q[3U] = 
            ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram0_write)
              ? 0U : ((0x3fU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_tag_addr))
                       ? vlSelf->riscv_soc__DOT__sram5__DOT__sram_63[3U]
                       : ((0x3eU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_tag_addr))
                           ? vlSelf->riscv_soc__DOT__sram5__DOT__sram_62[3U]
                           : vlSelf->riscv_soc__DOT__sram5__DOT___GEN_61[3U])));
        vlSelf->riscv_soc__DOT__sram7__DOT__Q[0U] = 
            ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram2_write)
              ? 0U : ((0x3fU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_tag_addr))
                       ? vlSelf->riscv_soc__DOT__sram7__DOT__sram_63[0U]
                       : ((0x3eU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_tag_addr))
                           ? vlSelf->riscv_soc__DOT__sram7__DOT__sram_62[0U]
                           : vlSelf->riscv_soc__DOT__sram7__DOT___GEN_61[0U])));
        vlSelf->riscv_soc__DOT__sram7__DOT__Q[1U] = 
            ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram2_write)
              ? 0U : ((0x3fU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_tag_addr))
                       ? vlSelf->riscv_soc__DOT__sram7__DOT__sram_63[1U]
                       : ((0x3eU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_tag_addr))
                           ? vlSelf->riscv_soc__DOT__sram7__DOT__sram_62[1U]
                           : vlSelf->riscv_soc__DOT__sram7__DOT___GEN_61[1U])));
        vlSelf->riscv_soc__DOT__sram7__DOT__Q[2U] = 
            ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram2_write)
              ? 0U : ((0x3fU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_tag_addr))
                       ? vlSelf->riscv_soc__DOT__sram7__DOT__sram_63[2U]
                       : ((0x3eU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_tag_addr))
                           ? vlSelf->riscv_soc__DOT__sram7__DOT__sram_62[2U]
                           : vlSelf->riscv_soc__DOT__sram7__DOT___GEN_61[2U])));
        vlSelf->riscv_soc__DOT__sram7__DOT__Q[3U] = 
            ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram2_write)
              ? 0U : ((0x3fU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_tag_addr))
                       ? vlSelf->riscv_soc__DOT__sram7__DOT__sram_63[3U]
                       : ((0x3eU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_tag_addr))
                           ? vlSelf->riscv_soc__DOT__sram7__DOT__sram_62[3U]
                           : vlSelf->riscv_soc__DOT__sram7__DOT___GEN_61[3U])));
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__w_lockId = 0U;
    } else if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__w_locked)))) {
        vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__w_lockId 
            = ((~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_w_valid)) 
               & (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT___T_1));
    }
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_result[0U] 
        = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT___GEN_35[0U];
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_result[1U] 
        = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT___GEN_35[1U];
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_result[2U] 
        = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT___GEN_35[2U];
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_result[3U] 
        = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT___GEN_35[3U];
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_result[4U] 
        = (3U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT___GEN_35[4U]);
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_q[0U] 
        = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT___GEN_45[0U];
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_q[1U] 
        = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT___GEN_45[1U];
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_q[2U] 
        = (3U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT___GEN_45[2U]);
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_valid_2 = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__execute_io_flush) {
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_valid_2 = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__enq_size) {
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_valid_2 
            = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT___GEN_27;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__can_deq) {
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_valid_2 
            = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT___GEN_6;
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_valid_1 = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__execute_io_flush) {
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_valid_1 = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__enq_size) {
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_valid_1 
            = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT___GEN_26;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__can_deq) {
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_valid_1 
            = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT___GEN_5;
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_valid_0 = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__execute_io_flush) {
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_valid_0 = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__enq_size) {
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_valid_0 
            = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT___GEN_25;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__can_deq) {
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_valid_0 
            = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT___GEN_4;
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__is_pre_tail = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__fetch_io_out_flush) {
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__is_pre_tail = 0U;
    } else if (((3U > (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__reg_ibuf_size)) 
                & (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1_io_fetch_cpu_data_valid))) {
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__is_pre_tail 
            = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT___is_pre_tail_T_1;
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs2_addr = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__ready) {
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs2_addr 
            = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__rs2_is_reg)
                ? (0x1fU & (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst 
                            >> 0x14U)) : 0U);
    }
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_csr_is_w 
        = ((~ (IData)(vlSelf->reset)) & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu_io_valid) 
                                         & ((0U != 
                                             (7U & 
                                              ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                               >> 2U))) 
                                            | (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu__DOT__is_ret))));
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__reg_mcause = 0ULL;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__execute_io_csr_except_is_except) {
        vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__reg_mcause 
            = (QData)((IData)((0x1fU & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_exception))));
    } else if (vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__irq) {
        vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__reg_mcause 
            = (0x8000000000000000ULL | (QData)((IData)(
                                                       ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute_io_csr_except_is_time_irq)
                                                         ? 7U
                                                         : 3U))));
    } else if (vlSelf->riscv_soc__DOT__core__DOT__execute_io_csr_valid) {
        vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__reg_mcause 
            = vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT___reg_mcause_T_3;
    }
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_valid_next_pc 
        = ((~ (IData)(vlSelf->reset)) & ((((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__irq) 
                                           | (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu_io_is_except)) 
                                          | (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu_io_valid_next_pc)) 
                                         | (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu_io_valid_next_pc)));
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_imm = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__ready) {
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_imm 
            = ((4U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__instType))
                ? (0x3fU & (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst 
                            >> 0x14U)) : ((5U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__instType))
                                           ? (0x1fU 
                                              & (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst 
                                                 >> 0xfU))
                                           : vlSelf->riscv_soc__DOT__core__DOT__decode__DOT___imm_data_T_47));
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs1_addr = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__ready) {
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs1_addr 
            = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__rs1_is_reg)
                ? (0x1fU & (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst 
                            >> 0xfU)) : 0U);
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_commit = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__ready) {
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_commit 
            = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__in_data_valid;
    }
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_sys_alu_wdata 
        = ((IData)(vlSelf->reset) ? 0ULL : ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu_io_valid)
                                             ? vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu_io_csr_data
                                             : ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu_io_valid)
                                                 ? 
                                                ((1U 
                                                  & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType))
                                                  ? 
                                                 (((QData)((IData)(
                                                                   ((1U 
                                                                     & (IData)(
                                                                               (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__dst_data 
                                                                                >> 0x1fU)))
                                                                     ? 0xffffffffU
                                                                     : 0U))) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__dst_data)))
                                                  : vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__dst_data)
                                                 : 0ULL)));
    if (vlSelf->reset) {
        __Vdly__riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_state = 0U;
    } else if ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_state))) {
        __Vdly__riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_state 
            = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul_io_valid)
                ? 1U : 0U);
    } else if ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_state))) {
        if ((0x20U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_cnt))) {
            __Vdly__riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_state = 2U;
        }
    } else if ((2U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_state))) {
        __Vdly__riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_state = 0U;
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[0U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[1U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[2U] = 0U;
    } else if ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_state))) {
        if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul_io_valid) {
            vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[0U] 
                = (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__mul_data2[0U] 
                   << 1U);
            vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[1U] 
                = ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__mul_data2[0U] 
                    >> 0x1fU) | (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__mul_data2[1U] 
                                 << 1U));
            vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[2U] 
                = ((4U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__mul_data2[2U] 
                          << 2U)) | ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__mul_data2[1U] 
                                      >> 0x1fU) | (
                                                   vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__mul_data2[2U] 
                                                   << 1U)));
        } else {
            vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[0U] = 0U;
            vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[1U] = 0U;
            vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[2U] = 0U;
        }
    } else if ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_state))) {
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[0U] 
            = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT___reg_temp_mul2_T[0U];
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[1U] 
            = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT___reg_temp_mul2_T[1U];
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[2U] 
            = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT___reg_temp_mul2_T[2U];
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_exuType = 0U;
    } else if ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_state))) {
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_exuType 
            = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul_io_valid)
                ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType)
                : 0U);
    }
    if (vlSelf->reset) {
        __Vdly__riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_dest_is_w = 0U;
    } else if ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_state))) {
        __Vdly__riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_dest_is_w = 0U;
    } else if ((1U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_state))) {
        __Vdly__riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_dest_is_w 
            = ((2U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_state)) 
               | (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_dest_is_w));
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_cnt = 0U;
    } else if ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_state))) {
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_cnt = 0U;
    } else if ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_state))) {
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_cnt 
            = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT___reg_cnt_T_1;
    } else if ((2U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_state))) {
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_cnt = 0U;
    }
    vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__difftest_peripheral 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_difftest_peripheral));
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[0U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[1U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[2U] = 0U;
    } else if ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state))) {
        if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div_io_valid) {
            vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[0U] 
                = ((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType))
                    ? vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT___divisor_T_8[0U]
                    : vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT___divisor_T_14[0U]);
            vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[1U] 
                = ((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType))
                    ? vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT___divisor_T_8[1U]
                    : vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT___divisor_T_14[1U]);
            vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[2U] 
                = ((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType))
                    ? vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT___divisor_T_8[2U]
                    : vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT___divisor_T_14[2U]);
        } else {
            vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[0U] = 0U;
            vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[1U] = 0U;
            vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[2U] = 0U;
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_dividend[0U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_dividend[1U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_dividend[2U] = 0U;
    } else if ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state))) {
        if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div_io_valid) {
            vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_dividend[0U] 
                = (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__dividend[0U] 
                   << 1U);
            vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_dividend[1U] 
                = ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__dividend[0U] 
                    >> 0x1fU) | (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__dividend[1U] 
                                 << 1U));
            vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_dividend[2U] 
                = ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__dividend[1U] 
                    >> 0x1fU) | (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__dividend[2U] 
                                 << 1U));
        } else {
            vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_dividend[0U] = 0U;
            vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_dividend[1U] = 0U;
            vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_dividend[2U] = 0U;
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[0U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[1U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[2U] = 0U;
    } else if ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state))) {
        VL_ADD_W(3, __Vtemp1483, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__rem, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__divisor);
        __Vtemp1484[0U] = 1U;
        __Vtemp1484[1U] = 0U;
        __Vtemp1484[2U] = 0U;
        __Vtemp1485[0U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__divisor[0U]);
        __Vtemp1485[1U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__divisor[1U]);
        __Vtemp1485[2U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__divisor[2U]);
        VL_ADD_W(3, __Vtemp1486, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__rem, __Vtemp1485);
        VL_ADD_W(3, __Vtemp1487, __Vtemp1484, __Vtemp1486);
        if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div_io_valid) {
            vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[0U] 
                = ((1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__divisor[2U] 
                          ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__dividend[2U]))
                    ? __Vtemp1483[0U] : __Vtemp1487[0U]);
            vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[1U] 
                = ((1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__divisor[2U] 
                          ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__dividend[2U]))
                    ? __Vtemp1483[1U] : __Vtemp1487[1U]);
            vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[2U] 
                = (1U & ((1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__divisor[2U] 
                                ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__dividend[2U]))
                          ? __Vtemp1483[2U] : __Vtemp1487[2U]));
        } else {
            vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[0U] = 0U;
            vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[1U] = 0U;
            vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[2U] = 0U;
        }
    } else if ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state))) {
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[0U] 
            = ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__temp_result[3U] 
                << 0x1eU) | (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__temp_result[2U] 
                             >> 2U));
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[1U] 
            = ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__temp_result[4U] 
                << 0x1eU) | (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__temp_result[3U] 
                             >> 2U));
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[2U] 
            = (1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__temp_result[4U] 
                     >> 2U));
    } else if ((2U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state))) {
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[0U] 
            = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT___GEN_18[0U];
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[1U] 
            = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT___GEN_18[1U];
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[2U] 
            = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT___GEN_18[2U];
    }
    if (vlSelf->reset) {
        __Vdly__riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state = 0U;
    } else if ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state))) {
        __Vdly__riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state 
            = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div_io_valid)
                ? 1U : 0U);
    } else if ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state))) {
        if ((0x40U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_cnt))) {
            __Vdly__riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state = 2U;
        }
    } else {
        __Vdly__riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state 
            = ((2U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state))
                ? 3U : (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT___GEN_21));
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_cnt = 0U;
    } else if ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state))) {
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_cnt = 0U;
    } else if ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state))) {
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_cnt 
            = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT___reg_cnt_T_1;
    } else if ((2U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state))) {
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_cnt 
            = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT___GEN_22;
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_exuType = 0U;
    } else if ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state))) {
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_exuType 
            = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div_io_valid)
                ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType)
                : 0U);
    }
    if (vlSelf->reset) {
        __Vdly__riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_dest_is_w = 0U;
    } else if ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state))) {
        __Vdly__riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_dest_is_w = 0U;
    } else if ((1U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state))) {
        if ((2U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state))) {
            __Vdly__riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_dest_is_w 
                = ((3U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state)) 
                   | (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_dest_is_w));
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__difftest_inst = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__reg_mcycle = 0ULL;
    } else {
        vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__difftest_inst 
            = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_difftest_inst;
        vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__reg_mcycle 
            = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute_io_csr_valid)
                ? ((0xb00U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_csr_addr))
                    ? vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_csr_data
                    : vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT___reg_mcycle_T_2)
                : vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT___reg_mcycle_T_2);
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__reg_mscratch = 0ULL;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__execute_io_csr_valid) {
        if ((1U & ((~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__irq)) 
                   & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute_io_csr_except_is_except))))) {
            if ((0x340U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_csr_addr))) {
                vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__reg_mscratch 
                    = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_csr_data;
            }
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__reg_mie = 0ULL;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__execute_io_csr_valid) {
        if ((1U & ((~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__irq)) 
                   & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute_io_csr_except_is_except))))) {
            if ((0x304U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_csr_addr))) {
                vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__reg_mie 
                    = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_csr_data;
            }
        }
    }
    if (vlSelf->riscv_soc__DOT__core__DOT__execute_io_wb_valid) {
        __Vdlyvval__riscv_soc__DOT__core__DOT__commit__DOT__regfile__v0 
            = vlSelf->riscv_soc__DOT__core__DOT__execute_io_wb_dest_data;
        __Vdlyvset__riscv_soc__DOT__core__DOT__commit__DOT__regfile__v0 = 1U;
        __Vdlyvdim0__riscv_soc__DOT__core__DOT__commit__DOT__regfile__v0 
            = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_dest_addr;
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_valid = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__execute_io_flush) {
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_valid = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__ready) {
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_valid 
            = ((3U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__reg_tail))
                ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_valid_3)
                : (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT___GEN_2));
    }
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_ready 
        = ((IData)(vlSelf->reset) | (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT___GEN_32));
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_sys_alu_w_valid 
        = ((~ (IData)(vlSelf->reset)) & (((((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu_io_valid) 
                                            | (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu_io_valid)) 
                                           & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_dest_is_reg)) 
                                          & (0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_dest_addr))) 
                                         & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__ready)));
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs2_data = 0ULL;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__ready) {
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs2_data 
            = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__rs2_is_reg)
                ? ((((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_dest_addr) 
                     == (0x1fU & (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst 
                                  >> 0x14U))) & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute_io_wb_valid))
                    ? vlSelf->riscv_soc__DOT__core__DOT__execute_io_wb_dest_data
                    : ((0U == (0x1fU & (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst 
                                        >> 0x14U)))
                        ? 0ULL : vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__regfile
                       [(0x1fU & (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst 
                                  >> 0x14U))])) : 0ULL);
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs1_data = 0ULL;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__ready) {
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs1_data 
            = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__rs1_is_reg)
                ? ((((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_dest_addr) 
                     == (0x1fU & (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst 
                                  >> 0xfU))) & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute_io_wb_valid))
                    ? vlSelf->riscv_soc__DOT__core__DOT__execute_io_wb_dest_data
                    : ((0U == (0x1fU & (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst 
                                        >> 0xfU))) ? 0ULL
                        : vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__regfile
                       [(0x1fU & (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst 
                                  >> 0xfU))])) : 0ULL);
    }
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_fence_i 
        = ((~ (IData)(vlSelf->reset)) & (((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__in_data_valid) 
                                          & (6U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_opType))) 
                                         & (5U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType))));
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_is_pre = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__ready) {
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_is_pre 
            = ((3U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__reg_tail))
                ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_is_pre_3)
                : ((2U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__reg_tail))
                    ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_is_pre_2)
                    : ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__reg_tail))
                        ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_is_pre_1)
                        : (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_is_pre_0))));
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_valid = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__ready) {
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_valid 
            = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__in_data_valid)
                ? ((4U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_opType))
                    ? 8U : (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT___valid_T_9))
                : 0U);
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_csr_data = 0ULL;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__ready) {
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_csr_data 
            = ((((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst 
                  >> 0x14U) == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_csr_addr)) 
                & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute_io_csr_valid))
                ? vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_csr_data
                : ((0xb02U == (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst 
                               >> 0x14U)) ? vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__reg_minstret
                    : vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT___csr_rdata_T_33));
    }
    vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__difftest_pc 
        = ((IData)(vlSelf->reset) ? 0ULL : vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_except_pc);
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_ready 
        = ((IData)(vlSelf->reset) | (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT___GEN_39));
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_ready 
        = ((IData)(vlSelf->reset) | (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT___GEN_22));
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__reg_mepc = 0ULL;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__execute_io_csr_except_is_except) {
        vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__reg_mepc 
            = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_except_pc;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__irq) {
        vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__reg_mepc 
            = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute_io_csr_except_is_except)
                ? vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_except_pc
                : vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_except_next_pc);
    } else if (vlSelf->riscv_soc__DOT__core__DOT__execute_io_csr_valid) {
        vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__reg_mepc 
            = vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT___reg_mepc_T_2;
    }
    if (((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__pre_valid) 
         & ((2U != (3U & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_btb_data_data[0U])) 
            & (1U == (3U & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_btb_data_data[0U]))))) {
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT____Vlvbound1 
            = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0;
        if ((5U >= (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__reg_head))) {
            __Vdlyvval__riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__RAS__v0 
                = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT____Vlvbound1;
            __Vdlyvset__riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__RAS__v0 = 1U;
            __Vdlyvdim0__riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__RAS__v0 
                = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__reg_head;
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1__DOT__reg_valid = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1__DOT__ready) {
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1__DOT__reg_valid 
            = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage0__DOT__reg_valid) 
               & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch_io_out_flush)));
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_61[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_61[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_61[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_61[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram0_write) {
        if ((0x3dU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_data_addr))) {
            vlSelf->riscv_soc__DOT__sram0__DOT__sram_61[0U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[0U];
            vlSelf->riscv_soc__DOT__sram0__DOT__sram_61[1U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[1U];
            vlSelf->riscv_soc__DOT__sram0__DOT__sram_61[2U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[2U];
            vlSelf->riscv_soc__DOT__sram0__DOT__sram_61[3U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_60[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_60[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_60[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_60[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram0_write) {
        if ((0x3cU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_data_addr))) {
            vlSelf->riscv_soc__DOT__sram0__DOT__sram_60[0U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[0U];
            vlSelf->riscv_soc__DOT__sram0__DOT__sram_60[1U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[1U];
            vlSelf->riscv_soc__DOT__sram0__DOT__sram_60[2U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[2U];
            vlSelf->riscv_soc__DOT__sram0__DOT__sram_60[3U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_59[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_59[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_59[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_59[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram0_write) {
        if ((0x3bU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_data_addr))) {
            vlSelf->riscv_soc__DOT__sram0__DOT__sram_59[0U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[0U];
            vlSelf->riscv_soc__DOT__sram0__DOT__sram_59[1U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[1U];
            vlSelf->riscv_soc__DOT__sram0__DOT__sram_59[2U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[2U];
            vlSelf->riscv_soc__DOT__sram0__DOT__sram_59[3U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_58[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_58[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_58[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_58[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram0_write) {
        if ((0x3aU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_data_addr))) {
            vlSelf->riscv_soc__DOT__sram0__DOT__sram_58[0U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[0U];
            vlSelf->riscv_soc__DOT__sram0__DOT__sram_58[1U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[1U];
            vlSelf->riscv_soc__DOT__sram0__DOT__sram_58[2U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[2U];
            vlSelf->riscv_soc__DOT__sram0__DOT__sram_58[3U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_57[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_57[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_57[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_57[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram0_write) {
        if ((0x39U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_data_addr))) {
            vlSelf->riscv_soc__DOT__sram0__DOT__sram_57[0U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[0U];
            vlSelf->riscv_soc__DOT__sram0__DOT__sram_57[1U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[1U];
            vlSelf->riscv_soc__DOT__sram0__DOT__sram_57[2U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[2U];
            vlSelf->riscv_soc__DOT__sram0__DOT__sram_57[3U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_56[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_56[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_56[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_56[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram0_write) {
        if ((0x38U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_data_addr))) {
            vlSelf->riscv_soc__DOT__sram0__DOT__sram_56[0U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[0U];
            vlSelf->riscv_soc__DOT__sram0__DOT__sram_56[1U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[1U];
            vlSelf->riscv_soc__DOT__sram0__DOT__sram_56[2U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[2U];
            vlSelf->riscv_soc__DOT__sram0__DOT__sram_56[3U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_55[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_55[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_55[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_55[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram0_write) {
        if ((0x37U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_data_addr))) {
            vlSelf->riscv_soc__DOT__sram0__DOT__sram_55[0U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[0U];
            vlSelf->riscv_soc__DOT__sram0__DOT__sram_55[1U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[1U];
            vlSelf->riscv_soc__DOT__sram0__DOT__sram_55[2U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[2U];
            vlSelf->riscv_soc__DOT__sram0__DOT__sram_55[3U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_54[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_54[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_54[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_54[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram0_write) {
        if ((0x36U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_data_addr))) {
            vlSelf->riscv_soc__DOT__sram0__DOT__sram_54[0U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[0U];
            vlSelf->riscv_soc__DOT__sram0__DOT__sram_54[1U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[1U];
            vlSelf->riscv_soc__DOT__sram0__DOT__sram_54[2U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[2U];
            vlSelf->riscv_soc__DOT__sram0__DOT__sram_54[3U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_53[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_53[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_53[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_53[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram0_write) {
        if ((0x35U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_data_addr))) {
            vlSelf->riscv_soc__DOT__sram0__DOT__sram_53[0U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[0U];
            vlSelf->riscv_soc__DOT__sram0__DOT__sram_53[1U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[1U];
            vlSelf->riscv_soc__DOT__sram0__DOT__sram_53[2U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[2U];
            vlSelf->riscv_soc__DOT__sram0__DOT__sram_53[3U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_52[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_52[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_52[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_52[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram0_write) {
        if ((0x34U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_data_addr))) {
            vlSelf->riscv_soc__DOT__sram0__DOT__sram_52[0U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[0U];
            vlSelf->riscv_soc__DOT__sram0__DOT__sram_52[1U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[1U];
            vlSelf->riscv_soc__DOT__sram0__DOT__sram_52[2U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[2U];
            vlSelf->riscv_soc__DOT__sram0__DOT__sram_52[3U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_51[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_51[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_51[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_51[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram0_write) {
        if ((0x33U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_data_addr))) {
            vlSelf->riscv_soc__DOT__sram0__DOT__sram_51[0U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[0U];
            vlSelf->riscv_soc__DOT__sram0__DOT__sram_51[1U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[1U];
            vlSelf->riscv_soc__DOT__sram0__DOT__sram_51[2U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[2U];
            vlSelf->riscv_soc__DOT__sram0__DOT__sram_51[3U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_50[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_50[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_50[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_50[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram0_write) {
        if ((0x32U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_data_addr))) {
            vlSelf->riscv_soc__DOT__sram0__DOT__sram_50[0U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[0U];
            vlSelf->riscv_soc__DOT__sram0__DOT__sram_50[1U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[1U];
            vlSelf->riscv_soc__DOT__sram0__DOT__sram_50[2U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[2U];
            vlSelf->riscv_soc__DOT__sram0__DOT__sram_50[3U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_49[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_49[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_49[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_49[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram0_write) {
        if ((0x31U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_data_addr))) {
            vlSelf->riscv_soc__DOT__sram0__DOT__sram_49[0U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[0U];
            vlSelf->riscv_soc__DOT__sram0__DOT__sram_49[1U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[1U];
            vlSelf->riscv_soc__DOT__sram0__DOT__sram_49[2U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[2U];
            vlSelf->riscv_soc__DOT__sram0__DOT__sram_49[3U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_48[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_48[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_48[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_48[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram0_write) {
        if ((0x30U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_data_addr))) {
            vlSelf->riscv_soc__DOT__sram0__DOT__sram_48[0U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[0U];
            vlSelf->riscv_soc__DOT__sram0__DOT__sram_48[1U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[1U];
            vlSelf->riscv_soc__DOT__sram0__DOT__sram_48[2U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[2U];
            vlSelf->riscv_soc__DOT__sram0__DOT__sram_48[3U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_47[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_47[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_47[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_47[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram0_write) {
        if ((0x2fU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_data_addr))) {
            vlSelf->riscv_soc__DOT__sram0__DOT__sram_47[0U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[0U];
            vlSelf->riscv_soc__DOT__sram0__DOT__sram_47[1U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[1U];
            vlSelf->riscv_soc__DOT__sram0__DOT__sram_47[2U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[2U];
            vlSelf->riscv_soc__DOT__sram0__DOT__sram_47[3U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_46[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_46[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_46[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_46[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram0_write) {
        if ((0x2eU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_data_addr))) {
            vlSelf->riscv_soc__DOT__sram0__DOT__sram_46[0U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[0U];
            vlSelf->riscv_soc__DOT__sram0__DOT__sram_46[1U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[1U];
            vlSelf->riscv_soc__DOT__sram0__DOT__sram_46[2U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[2U];
            vlSelf->riscv_soc__DOT__sram0__DOT__sram_46[3U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_45[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_45[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_45[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_45[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram0_write) {
        if ((0x2dU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_data_addr))) {
            vlSelf->riscv_soc__DOT__sram0__DOT__sram_45[0U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[0U];
            vlSelf->riscv_soc__DOT__sram0__DOT__sram_45[1U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[1U];
            vlSelf->riscv_soc__DOT__sram0__DOT__sram_45[2U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[2U];
            vlSelf->riscv_soc__DOT__sram0__DOT__sram_45[3U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_44[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_44[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_44[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_44[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram0_write) {
        if ((0x2cU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_data_addr))) {
            vlSelf->riscv_soc__DOT__sram0__DOT__sram_44[0U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[0U];
            vlSelf->riscv_soc__DOT__sram0__DOT__sram_44[1U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[1U];
            vlSelf->riscv_soc__DOT__sram0__DOT__sram_44[2U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[2U];
            vlSelf->riscv_soc__DOT__sram0__DOT__sram_44[3U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_43[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_43[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_43[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_43[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram0_write) {
        if ((0x2bU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_data_addr))) {
            vlSelf->riscv_soc__DOT__sram0__DOT__sram_43[0U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[0U];
            vlSelf->riscv_soc__DOT__sram0__DOT__sram_43[1U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[1U];
            vlSelf->riscv_soc__DOT__sram0__DOT__sram_43[2U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[2U];
            vlSelf->riscv_soc__DOT__sram0__DOT__sram_43[3U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_61[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_61[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_61[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_61[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram1_write) {
        if ((0x3dU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_data_addr))) {
            vlSelf->riscv_soc__DOT__sram2__DOT__sram_61[0U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[0U];
            vlSelf->riscv_soc__DOT__sram2__DOT__sram_61[1U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[1U];
            vlSelf->riscv_soc__DOT__sram2__DOT__sram_61[2U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[2U];
            vlSelf->riscv_soc__DOT__sram2__DOT__sram_61[3U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_60[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_60[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_60[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_60[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram1_write) {
        if ((0x3cU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_data_addr))) {
            vlSelf->riscv_soc__DOT__sram2__DOT__sram_60[0U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[0U];
            vlSelf->riscv_soc__DOT__sram2__DOT__sram_60[1U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[1U];
            vlSelf->riscv_soc__DOT__sram2__DOT__sram_60[2U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[2U];
            vlSelf->riscv_soc__DOT__sram2__DOT__sram_60[3U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_59[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_59[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_59[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_59[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram1_write) {
        if ((0x3bU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_data_addr))) {
            vlSelf->riscv_soc__DOT__sram2__DOT__sram_59[0U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[0U];
            vlSelf->riscv_soc__DOT__sram2__DOT__sram_59[1U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[1U];
            vlSelf->riscv_soc__DOT__sram2__DOT__sram_59[2U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[2U];
            vlSelf->riscv_soc__DOT__sram2__DOT__sram_59[3U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_58[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_58[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_58[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_58[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram1_write) {
        if ((0x3aU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_data_addr))) {
            vlSelf->riscv_soc__DOT__sram2__DOT__sram_58[0U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[0U];
            vlSelf->riscv_soc__DOT__sram2__DOT__sram_58[1U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[1U];
            vlSelf->riscv_soc__DOT__sram2__DOT__sram_58[2U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[2U];
            vlSelf->riscv_soc__DOT__sram2__DOT__sram_58[3U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_57[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_57[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_57[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_57[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram1_write) {
        if ((0x39U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_data_addr))) {
            vlSelf->riscv_soc__DOT__sram2__DOT__sram_57[0U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[0U];
            vlSelf->riscv_soc__DOT__sram2__DOT__sram_57[1U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[1U];
            vlSelf->riscv_soc__DOT__sram2__DOT__sram_57[2U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[2U];
            vlSelf->riscv_soc__DOT__sram2__DOT__sram_57[3U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_56[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_56[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_56[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_56[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram1_write) {
        if ((0x38U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_data_addr))) {
            vlSelf->riscv_soc__DOT__sram2__DOT__sram_56[0U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[0U];
            vlSelf->riscv_soc__DOT__sram2__DOT__sram_56[1U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[1U];
            vlSelf->riscv_soc__DOT__sram2__DOT__sram_56[2U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[2U];
            vlSelf->riscv_soc__DOT__sram2__DOT__sram_56[3U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_55[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_55[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_55[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_55[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram1_write) {
        if ((0x37U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_data_addr))) {
            vlSelf->riscv_soc__DOT__sram2__DOT__sram_55[0U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[0U];
            vlSelf->riscv_soc__DOT__sram2__DOT__sram_55[1U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[1U];
            vlSelf->riscv_soc__DOT__sram2__DOT__sram_55[2U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[2U];
            vlSelf->riscv_soc__DOT__sram2__DOT__sram_55[3U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_54[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_54[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_54[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_54[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram1_write) {
        if ((0x36U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_data_addr))) {
            vlSelf->riscv_soc__DOT__sram2__DOT__sram_54[0U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[0U];
            vlSelf->riscv_soc__DOT__sram2__DOT__sram_54[1U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[1U];
            vlSelf->riscv_soc__DOT__sram2__DOT__sram_54[2U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[2U];
            vlSelf->riscv_soc__DOT__sram2__DOT__sram_54[3U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_53[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_53[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_53[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_53[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram1_write) {
        if ((0x35U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_data_addr))) {
            vlSelf->riscv_soc__DOT__sram2__DOT__sram_53[0U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[0U];
            vlSelf->riscv_soc__DOT__sram2__DOT__sram_53[1U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[1U];
            vlSelf->riscv_soc__DOT__sram2__DOT__sram_53[2U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[2U];
            vlSelf->riscv_soc__DOT__sram2__DOT__sram_53[3U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_52[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_52[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_52[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_52[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram1_write) {
        if ((0x34U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_data_addr))) {
            vlSelf->riscv_soc__DOT__sram2__DOT__sram_52[0U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[0U];
            vlSelf->riscv_soc__DOT__sram2__DOT__sram_52[1U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[1U];
            vlSelf->riscv_soc__DOT__sram2__DOT__sram_52[2U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[2U];
            vlSelf->riscv_soc__DOT__sram2__DOT__sram_52[3U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_51[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_51[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_51[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_51[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram1_write) {
        if ((0x33U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_data_addr))) {
            vlSelf->riscv_soc__DOT__sram2__DOT__sram_51[0U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[0U];
            vlSelf->riscv_soc__DOT__sram2__DOT__sram_51[1U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[1U];
            vlSelf->riscv_soc__DOT__sram2__DOT__sram_51[2U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[2U];
            vlSelf->riscv_soc__DOT__sram2__DOT__sram_51[3U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_50[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_50[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_50[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_50[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram1_write) {
        if ((0x32U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_data_addr))) {
            vlSelf->riscv_soc__DOT__sram2__DOT__sram_50[0U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[0U];
            vlSelf->riscv_soc__DOT__sram2__DOT__sram_50[1U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[1U];
            vlSelf->riscv_soc__DOT__sram2__DOT__sram_50[2U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[2U];
            vlSelf->riscv_soc__DOT__sram2__DOT__sram_50[3U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_49[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_49[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_49[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_49[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram1_write) {
        if ((0x31U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_data_addr))) {
            vlSelf->riscv_soc__DOT__sram2__DOT__sram_49[0U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[0U];
            vlSelf->riscv_soc__DOT__sram2__DOT__sram_49[1U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[1U];
            vlSelf->riscv_soc__DOT__sram2__DOT__sram_49[2U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[2U];
            vlSelf->riscv_soc__DOT__sram2__DOT__sram_49[3U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_48[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_48[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_48[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_48[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram1_write) {
        if ((0x30U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_data_addr))) {
            vlSelf->riscv_soc__DOT__sram2__DOT__sram_48[0U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[0U];
            vlSelf->riscv_soc__DOT__sram2__DOT__sram_48[1U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[1U];
            vlSelf->riscv_soc__DOT__sram2__DOT__sram_48[2U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[2U];
            vlSelf->riscv_soc__DOT__sram2__DOT__sram_48[3U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_47[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_47[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_47[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_47[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram1_write) {
        if ((0x2fU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_data_addr))) {
            vlSelf->riscv_soc__DOT__sram2__DOT__sram_47[0U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[0U];
            vlSelf->riscv_soc__DOT__sram2__DOT__sram_47[1U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[1U];
            vlSelf->riscv_soc__DOT__sram2__DOT__sram_47[2U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[2U];
            vlSelf->riscv_soc__DOT__sram2__DOT__sram_47[3U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_46[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_46[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_46[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_46[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram1_write) {
        if ((0x2eU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_data_addr))) {
            vlSelf->riscv_soc__DOT__sram2__DOT__sram_46[0U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[0U];
            vlSelf->riscv_soc__DOT__sram2__DOT__sram_46[1U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[1U];
            vlSelf->riscv_soc__DOT__sram2__DOT__sram_46[2U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[2U];
            vlSelf->riscv_soc__DOT__sram2__DOT__sram_46[3U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_45[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_45[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_45[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_45[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram1_write) {
        if ((0x2dU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_data_addr))) {
            vlSelf->riscv_soc__DOT__sram2__DOT__sram_45[0U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[0U];
            vlSelf->riscv_soc__DOT__sram2__DOT__sram_45[1U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[1U];
            vlSelf->riscv_soc__DOT__sram2__DOT__sram_45[2U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[2U];
            vlSelf->riscv_soc__DOT__sram2__DOT__sram_45[3U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_44[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_44[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_44[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_44[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram1_write) {
        if ((0x2cU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_data_addr))) {
            vlSelf->riscv_soc__DOT__sram2__DOT__sram_44[0U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[0U];
            vlSelf->riscv_soc__DOT__sram2__DOT__sram_44[1U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[1U];
            vlSelf->riscv_soc__DOT__sram2__DOT__sram_44[2U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[2U];
            vlSelf->riscv_soc__DOT__sram2__DOT__sram_44[3U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_43[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_43[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_43[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_43[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram1_write) {
        if ((0x2bU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_data_addr))) {
            vlSelf->riscv_soc__DOT__sram2__DOT__sram_43[0U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[0U];
            vlSelf->riscv_soc__DOT__sram2__DOT__sram_43[1U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[1U];
            vlSelf->riscv_soc__DOT__sram2__DOT__sram_43[2U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[2U];
            vlSelf->riscv_soc__DOT__sram2__DOT__sram_43[3U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_42[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_42[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_42[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_42[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram0_write) {
        if ((0x2aU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_data_addr))) {
            vlSelf->riscv_soc__DOT__sram0__DOT__sram_42[0U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[0U];
            vlSelf->riscv_soc__DOT__sram0__DOT__sram_42[1U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[1U];
            vlSelf->riscv_soc__DOT__sram0__DOT__sram_42[2U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[2U];
            vlSelf->riscv_soc__DOT__sram0__DOT__sram_42[3U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_41[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_41[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_41[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_41[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram0_write) {
        if ((0x29U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_data_addr))) {
            vlSelf->riscv_soc__DOT__sram0__DOT__sram_41[0U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[0U];
            vlSelf->riscv_soc__DOT__sram0__DOT__sram_41[1U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[1U];
            vlSelf->riscv_soc__DOT__sram0__DOT__sram_41[2U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[2U];
            vlSelf->riscv_soc__DOT__sram0__DOT__sram_41[3U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_40[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_40[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_40[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_40[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram0_write) {
        if ((0x28U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_data_addr))) {
            vlSelf->riscv_soc__DOT__sram0__DOT__sram_40[0U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[0U];
            vlSelf->riscv_soc__DOT__sram0__DOT__sram_40[1U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[1U];
            vlSelf->riscv_soc__DOT__sram0__DOT__sram_40[2U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[2U];
            vlSelf->riscv_soc__DOT__sram0__DOT__sram_40[3U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_39[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_39[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_39[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_39[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram0_write) {
        if ((0x27U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_data_addr))) {
            vlSelf->riscv_soc__DOT__sram0__DOT__sram_39[0U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[0U];
            vlSelf->riscv_soc__DOT__sram0__DOT__sram_39[1U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[1U];
            vlSelf->riscv_soc__DOT__sram0__DOT__sram_39[2U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[2U];
            vlSelf->riscv_soc__DOT__sram0__DOT__sram_39[3U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_38[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_38[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_38[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_38[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram0_write) {
        if ((0x26U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_data_addr))) {
            vlSelf->riscv_soc__DOT__sram0__DOT__sram_38[0U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[0U];
            vlSelf->riscv_soc__DOT__sram0__DOT__sram_38[1U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[1U];
            vlSelf->riscv_soc__DOT__sram0__DOT__sram_38[2U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[2U];
            vlSelf->riscv_soc__DOT__sram0__DOT__sram_38[3U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_36[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_36[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_36[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_36[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram0_write) {
        if ((0x24U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_data_addr))) {
            vlSelf->riscv_soc__DOT__sram0__DOT__sram_36[0U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[0U];
            vlSelf->riscv_soc__DOT__sram0__DOT__sram_36[1U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[1U];
            vlSelf->riscv_soc__DOT__sram0__DOT__sram_36[2U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[2U];
            vlSelf->riscv_soc__DOT__sram0__DOT__sram_36[3U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_35[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_35[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_35[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_35[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram0_write) {
        if ((0x23U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_data_addr))) {
            vlSelf->riscv_soc__DOT__sram0__DOT__sram_35[0U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[0U];
            vlSelf->riscv_soc__DOT__sram0__DOT__sram_35[1U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[1U];
            vlSelf->riscv_soc__DOT__sram0__DOT__sram_35[2U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[2U];
            vlSelf->riscv_soc__DOT__sram0__DOT__sram_35[3U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_34[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_34[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_34[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_34[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram0_write) {
        if ((0x22U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_data_addr))) {
            vlSelf->riscv_soc__DOT__sram0__DOT__sram_34[0U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[0U];
            vlSelf->riscv_soc__DOT__sram0__DOT__sram_34[1U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[1U];
            vlSelf->riscv_soc__DOT__sram0__DOT__sram_34[2U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[2U];
            vlSelf->riscv_soc__DOT__sram0__DOT__sram_34[3U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_33[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_33[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_33[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_33[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram0_write) {
        if ((0x21U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_data_addr))) {
            vlSelf->riscv_soc__DOT__sram0__DOT__sram_33[0U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[0U];
            vlSelf->riscv_soc__DOT__sram0__DOT__sram_33[1U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[1U];
            vlSelf->riscv_soc__DOT__sram0__DOT__sram_33[2U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[2U];
            vlSelf->riscv_soc__DOT__sram0__DOT__sram_33[3U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_32[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_32[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_32[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_32[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram0_write) {
        if ((0x20U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_data_addr))) {
            vlSelf->riscv_soc__DOT__sram0__DOT__sram_32[0U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[0U];
            vlSelf->riscv_soc__DOT__sram0__DOT__sram_32[1U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[1U];
            vlSelf->riscv_soc__DOT__sram0__DOT__sram_32[2U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[2U];
            vlSelf->riscv_soc__DOT__sram0__DOT__sram_32[3U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_26[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_26[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_26[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_26[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram0_write) {
        if ((0x1aU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_data_addr))) {
            vlSelf->riscv_soc__DOT__sram0__DOT__sram_26[0U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[0U];
            vlSelf->riscv_soc__DOT__sram0__DOT__sram_26[1U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[1U];
            vlSelf->riscv_soc__DOT__sram0__DOT__sram_26[2U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[2U];
            vlSelf->riscv_soc__DOT__sram0__DOT__sram_26[3U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_25[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_25[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_25[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_25[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram0_write) {
        if ((0x19U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_data_addr))) {
            vlSelf->riscv_soc__DOT__sram0__DOT__sram_25[0U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[0U];
            vlSelf->riscv_soc__DOT__sram0__DOT__sram_25[1U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[1U];
            vlSelf->riscv_soc__DOT__sram0__DOT__sram_25[2U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[2U];
            vlSelf->riscv_soc__DOT__sram0__DOT__sram_25[3U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_29[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_29[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_29[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_29[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram0_write) {
        if ((0x1dU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_data_addr))) {
            vlSelf->riscv_soc__DOT__sram0__DOT__sram_29[0U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[0U];
            vlSelf->riscv_soc__DOT__sram0__DOT__sram_29[1U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[1U];
            vlSelf->riscv_soc__DOT__sram0__DOT__sram_29[2U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[2U];
            vlSelf->riscv_soc__DOT__sram0__DOT__sram_29[3U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_28[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_28[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_28[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_28[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram0_write) {
        if ((0x1cU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_data_addr))) {
            vlSelf->riscv_soc__DOT__sram0__DOT__sram_28[0U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[0U];
            vlSelf->riscv_soc__DOT__sram0__DOT__sram_28[1U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[1U];
            vlSelf->riscv_soc__DOT__sram0__DOT__sram_28[2U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[2U];
            vlSelf->riscv_soc__DOT__sram0__DOT__sram_28[3U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_27[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_27[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_27[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_27[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram0_write) {
        if ((0x1bU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_data_addr))) {
            vlSelf->riscv_soc__DOT__sram0__DOT__sram_27[0U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[0U];
            vlSelf->riscv_soc__DOT__sram0__DOT__sram_27[1U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[1U];
            vlSelf->riscv_soc__DOT__sram0__DOT__sram_27[2U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[2U];
            vlSelf->riscv_soc__DOT__sram0__DOT__sram_27[3U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_22[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_22[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_22[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_22[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram0_write) {
        if ((0x16U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_data_addr))) {
            vlSelf->riscv_soc__DOT__sram0__DOT__sram_22[0U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[0U];
            vlSelf->riscv_soc__DOT__sram0__DOT__sram_22[1U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[1U];
            vlSelf->riscv_soc__DOT__sram0__DOT__sram_22[2U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[2U];
            vlSelf->riscv_soc__DOT__sram0__DOT__sram_22[3U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_37[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_37[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_37[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_37[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram0_write) {
        if ((0x25U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_data_addr))) {
            vlSelf->riscv_soc__DOT__sram0__DOT__sram_37[0U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[0U];
            vlSelf->riscv_soc__DOT__sram0__DOT__sram_37[1U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[1U];
            vlSelf->riscv_soc__DOT__sram0__DOT__sram_37[2U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[2U];
            vlSelf->riscv_soc__DOT__sram0__DOT__sram_37[3U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_31[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_31[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_31[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_31[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram0_write) {
        if ((0x1fU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_data_addr))) {
            vlSelf->riscv_soc__DOT__sram0__DOT__sram_31[0U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[0U];
            vlSelf->riscv_soc__DOT__sram0__DOT__sram_31[1U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[1U];
            vlSelf->riscv_soc__DOT__sram0__DOT__sram_31[2U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[2U];
            vlSelf->riscv_soc__DOT__sram0__DOT__sram_31[3U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_30[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_30[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_30[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_30[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram0_write) {
        if ((0x1eU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_data_addr))) {
            vlSelf->riscv_soc__DOT__sram0__DOT__sram_30[0U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[0U];
            vlSelf->riscv_soc__DOT__sram0__DOT__sram_30[1U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[1U];
            vlSelf->riscv_soc__DOT__sram0__DOT__sram_30[2U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[2U];
            vlSelf->riscv_soc__DOT__sram0__DOT__sram_30[3U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_23[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_23[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_23[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_23[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram0_write) {
        if ((0x17U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_data_addr))) {
            vlSelf->riscv_soc__DOT__sram0__DOT__sram_23[0U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[0U];
            vlSelf->riscv_soc__DOT__sram0__DOT__sram_23[1U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[1U];
            vlSelf->riscv_soc__DOT__sram0__DOT__sram_23[2U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[2U];
            vlSelf->riscv_soc__DOT__sram0__DOT__sram_23[3U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_24[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_24[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_24[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_24[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram0_write) {
        if ((0x18U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_data_addr))) {
            vlSelf->riscv_soc__DOT__sram0__DOT__sram_24[0U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[0U];
            vlSelf->riscv_soc__DOT__sram0__DOT__sram_24[1U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[1U];
            vlSelf->riscv_soc__DOT__sram0__DOT__sram_24[2U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[2U];
            vlSelf->riscv_soc__DOT__sram0__DOT__sram_24[3U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_42[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_42[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_42[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_42[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram1_write) {
        if ((0x2aU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_data_addr))) {
            vlSelf->riscv_soc__DOT__sram2__DOT__sram_42[0U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[0U];
            vlSelf->riscv_soc__DOT__sram2__DOT__sram_42[1U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[1U];
            vlSelf->riscv_soc__DOT__sram2__DOT__sram_42[2U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[2U];
            vlSelf->riscv_soc__DOT__sram2__DOT__sram_42[3U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_41[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_41[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_41[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_41[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram1_write) {
        if ((0x29U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_data_addr))) {
            vlSelf->riscv_soc__DOT__sram2__DOT__sram_41[0U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[0U];
            vlSelf->riscv_soc__DOT__sram2__DOT__sram_41[1U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[1U];
            vlSelf->riscv_soc__DOT__sram2__DOT__sram_41[2U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[2U];
            vlSelf->riscv_soc__DOT__sram2__DOT__sram_41[3U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_40[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_40[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_40[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_40[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram1_write) {
        if ((0x28U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_data_addr))) {
            vlSelf->riscv_soc__DOT__sram2__DOT__sram_40[0U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[0U];
            vlSelf->riscv_soc__DOT__sram2__DOT__sram_40[1U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[1U];
            vlSelf->riscv_soc__DOT__sram2__DOT__sram_40[2U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[2U];
            vlSelf->riscv_soc__DOT__sram2__DOT__sram_40[3U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_39[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_39[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_39[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_39[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram1_write) {
        if ((0x27U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_data_addr))) {
            vlSelf->riscv_soc__DOT__sram2__DOT__sram_39[0U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[0U];
            vlSelf->riscv_soc__DOT__sram2__DOT__sram_39[1U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[1U];
            vlSelf->riscv_soc__DOT__sram2__DOT__sram_39[2U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[2U];
            vlSelf->riscv_soc__DOT__sram2__DOT__sram_39[3U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_38[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_38[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_38[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_38[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram1_write) {
        if ((0x26U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_data_addr))) {
            vlSelf->riscv_soc__DOT__sram2__DOT__sram_38[0U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[0U];
            vlSelf->riscv_soc__DOT__sram2__DOT__sram_38[1U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[1U];
            vlSelf->riscv_soc__DOT__sram2__DOT__sram_38[2U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[2U];
            vlSelf->riscv_soc__DOT__sram2__DOT__sram_38[3U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_36[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_36[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_36[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_36[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram1_write) {
        if ((0x24U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_data_addr))) {
            vlSelf->riscv_soc__DOT__sram2__DOT__sram_36[0U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[0U];
            vlSelf->riscv_soc__DOT__sram2__DOT__sram_36[1U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[1U];
            vlSelf->riscv_soc__DOT__sram2__DOT__sram_36[2U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[2U];
            vlSelf->riscv_soc__DOT__sram2__DOT__sram_36[3U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_35[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_35[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_35[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_35[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram1_write) {
        if ((0x23U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_data_addr))) {
            vlSelf->riscv_soc__DOT__sram2__DOT__sram_35[0U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[0U];
            vlSelf->riscv_soc__DOT__sram2__DOT__sram_35[1U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[1U];
            vlSelf->riscv_soc__DOT__sram2__DOT__sram_35[2U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[2U];
            vlSelf->riscv_soc__DOT__sram2__DOT__sram_35[3U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_34[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_34[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_34[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_34[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram1_write) {
        if ((0x22U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_data_addr))) {
            vlSelf->riscv_soc__DOT__sram2__DOT__sram_34[0U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[0U];
            vlSelf->riscv_soc__DOT__sram2__DOT__sram_34[1U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[1U];
            vlSelf->riscv_soc__DOT__sram2__DOT__sram_34[2U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[2U];
            vlSelf->riscv_soc__DOT__sram2__DOT__sram_34[3U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_33[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_33[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_33[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_33[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram1_write) {
        if ((0x21U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_data_addr))) {
            vlSelf->riscv_soc__DOT__sram2__DOT__sram_33[0U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[0U];
            vlSelf->riscv_soc__DOT__sram2__DOT__sram_33[1U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[1U];
            vlSelf->riscv_soc__DOT__sram2__DOT__sram_33[2U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[2U];
            vlSelf->riscv_soc__DOT__sram2__DOT__sram_33[3U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_32[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_32[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_32[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_32[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram1_write) {
        if ((0x20U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_data_addr))) {
            vlSelf->riscv_soc__DOT__sram2__DOT__sram_32[0U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[0U];
            vlSelf->riscv_soc__DOT__sram2__DOT__sram_32[1U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[1U];
            vlSelf->riscv_soc__DOT__sram2__DOT__sram_32[2U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[2U];
            vlSelf->riscv_soc__DOT__sram2__DOT__sram_32[3U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_26[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_26[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_26[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_26[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram1_write) {
        if ((0x1aU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_data_addr))) {
            vlSelf->riscv_soc__DOT__sram2__DOT__sram_26[0U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[0U];
            vlSelf->riscv_soc__DOT__sram2__DOT__sram_26[1U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[1U];
            vlSelf->riscv_soc__DOT__sram2__DOT__sram_26[2U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[2U];
            vlSelf->riscv_soc__DOT__sram2__DOT__sram_26[3U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_25[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_25[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_25[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_25[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram1_write) {
        if ((0x19U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_data_addr))) {
            vlSelf->riscv_soc__DOT__sram2__DOT__sram_25[0U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[0U];
            vlSelf->riscv_soc__DOT__sram2__DOT__sram_25[1U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[1U];
            vlSelf->riscv_soc__DOT__sram2__DOT__sram_25[2U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[2U];
            vlSelf->riscv_soc__DOT__sram2__DOT__sram_25[3U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_29[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_29[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_29[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_29[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram1_write) {
        if ((0x1dU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_data_addr))) {
            vlSelf->riscv_soc__DOT__sram2__DOT__sram_29[0U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[0U];
            vlSelf->riscv_soc__DOT__sram2__DOT__sram_29[1U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[1U];
            vlSelf->riscv_soc__DOT__sram2__DOT__sram_29[2U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[2U];
            vlSelf->riscv_soc__DOT__sram2__DOT__sram_29[3U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_28[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_28[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_28[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_28[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram1_write) {
        if ((0x1cU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_data_addr))) {
            vlSelf->riscv_soc__DOT__sram2__DOT__sram_28[0U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[0U];
            vlSelf->riscv_soc__DOT__sram2__DOT__sram_28[1U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[1U];
            vlSelf->riscv_soc__DOT__sram2__DOT__sram_28[2U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[2U];
            vlSelf->riscv_soc__DOT__sram2__DOT__sram_28[3U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_27[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_27[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_27[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_27[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram1_write) {
        if ((0x1bU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_data_addr))) {
            vlSelf->riscv_soc__DOT__sram2__DOT__sram_27[0U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[0U];
            vlSelf->riscv_soc__DOT__sram2__DOT__sram_27[1U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[1U];
            vlSelf->riscv_soc__DOT__sram2__DOT__sram_27[2U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[2U];
            vlSelf->riscv_soc__DOT__sram2__DOT__sram_27[3U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_22[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_22[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_22[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_22[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram1_write) {
        if ((0x16U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_data_addr))) {
            vlSelf->riscv_soc__DOT__sram2__DOT__sram_22[0U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[0U];
            vlSelf->riscv_soc__DOT__sram2__DOT__sram_22[1U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[1U];
            vlSelf->riscv_soc__DOT__sram2__DOT__sram_22[2U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[2U];
            vlSelf->riscv_soc__DOT__sram2__DOT__sram_22[3U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_37[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_37[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_37[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_37[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram1_write) {
        if ((0x25U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_data_addr))) {
            vlSelf->riscv_soc__DOT__sram2__DOT__sram_37[0U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[0U];
            vlSelf->riscv_soc__DOT__sram2__DOT__sram_37[1U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[1U];
            vlSelf->riscv_soc__DOT__sram2__DOT__sram_37[2U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[2U];
            vlSelf->riscv_soc__DOT__sram2__DOT__sram_37[3U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_31[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_31[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_31[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_31[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram1_write) {
        if ((0x1fU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_data_addr))) {
            vlSelf->riscv_soc__DOT__sram2__DOT__sram_31[0U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[0U];
            vlSelf->riscv_soc__DOT__sram2__DOT__sram_31[1U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[1U];
            vlSelf->riscv_soc__DOT__sram2__DOT__sram_31[2U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[2U];
            vlSelf->riscv_soc__DOT__sram2__DOT__sram_31[3U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_30[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_30[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_30[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_30[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram1_write) {
        if ((0x1eU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_data_addr))) {
            vlSelf->riscv_soc__DOT__sram2__DOT__sram_30[0U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[0U];
            vlSelf->riscv_soc__DOT__sram2__DOT__sram_30[1U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[1U];
            vlSelf->riscv_soc__DOT__sram2__DOT__sram_30[2U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[2U];
            vlSelf->riscv_soc__DOT__sram2__DOT__sram_30[3U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_23[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_23[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_23[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_23[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram1_write) {
        if ((0x17U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_data_addr))) {
            vlSelf->riscv_soc__DOT__sram2__DOT__sram_23[0U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[0U];
            vlSelf->riscv_soc__DOT__sram2__DOT__sram_23[1U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[1U];
            vlSelf->riscv_soc__DOT__sram2__DOT__sram_23[2U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[2U];
            vlSelf->riscv_soc__DOT__sram2__DOT__sram_23[3U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_24[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_24[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_24[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_24[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram1_write) {
        if ((0x18U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_data_addr))) {
            vlSelf->riscv_soc__DOT__sram2__DOT__sram_24[0U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[0U];
            vlSelf->riscv_soc__DOT__sram2__DOT__sram_24[1U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[1U];
            vlSelf->riscv_soc__DOT__sram2__DOT__sram_24[2U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[2U];
            vlSelf->riscv_soc__DOT__sram2__DOT__sram_24[3U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_9[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_9[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_9[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_9[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram0_write) {
        if ((9U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_data_addr))) {
            vlSelf->riscv_soc__DOT__sram0__DOT__sram_9[0U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[0U];
            vlSelf->riscv_soc__DOT__sram0__DOT__sram_9[1U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[1U];
            vlSelf->riscv_soc__DOT__sram0__DOT__sram_9[2U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[2U];
            vlSelf->riscv_soc__DOT__sram0__DOT__sram_9[3U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_8[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_8[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_8[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_8[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram0_write) {
        if ((8U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_data_addr))) {
            vlSelf->riscv_soc__DOT__sram0__DOT__sram_8[0U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[0U];
            vlSelf->riscv_soc__DOT__sram0__DOT__sram_8[1U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[1U];
            vlSelf->riscv_soc__DOT__sram0__DOT__sram_8[2U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[2U];
            vlSelf->riscv_soc__DOT__sram0__DOT__sram_8[3U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_7[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_7[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_7[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_7[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram0_write) {
        if ((7U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_data_addr))) {
            vlSelf->riscv_soc__DOT__sram0__DOT__sram_7[0U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[0U];
            vlSelf->riscv_soc__DOT__sram0__DOT__sram_7[1U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[1U];
            vlSelf->riscv_soc__DOT__sram0__DOT__sram_7[2U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[2U];
            vlSelf->riscv_soc__DOT__sram0__DOT__sram_7[3U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_11[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_11[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_11[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_11[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram0_write) {
        if ((0xbU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_data_addr))) {
            vlSelf->riscv_soc__DOT__sram0__DOT__sram_11[0U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[0U];
            vlSelf->riscv_soc__DOT__sram0__DOT__sram_11[1U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[1U];
            vlSelf->riscv_soc__DOT__sram0__DOT__sram_11[2U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[2U];
            vlSelf->riscv_soc__DOT__sram0__DOT__sram_11[3U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_2[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_2[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_2[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_2[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram0_write) {
        if ((2U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_data_addr))) {
            vlSelf->riscv_soc__DOT__sram0__DOT__sram_2[0U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[0U];
            vlSelf->riscv_soc__DOT__sram0__DOT__sram_2[1U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[1U];
            vlSelf->riscv_soc__DOT__sram0__DOT__sram_2[2U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[2U];
            vlSelf->riscv_soc__DOT__sram0__DOT__sram_2[3U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_20[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_20[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_20[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_20[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram0_write) {
        if ((0x14U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_data_addr))) {
            vlSelf->riscv_soc__DOT__sram0__DOT__sram_20[0U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[0U];
            vlSelf->riscv_soc__DOT__sram0__DOT__sram_20[1U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[1U];
            vlSelf->riscv_soc__DOT__sram0__DOT__sram_20[2U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[2U];
            vlSelf->riscv_soc__DOT__sram0__DOT__sram_20[3U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_6[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_6[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_6[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_6[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram0_write) {
        if ((6U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_data_addr))) {
            vlSelf->riscv_soc__DOT__sram0__DOT__sram_6[0U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[0U];
            vlSelf->riscv_soc__DOT__sram0__DOT__sram_6[1U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[1U];
            vlSelf->riscv_soc__DOT__sram0__DOT__sram_6[2U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[2U];
            vlSelf->riscv_soc__DOT__sram0__DOT__sram_6[3U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_14[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_14[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_14[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_14[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram0_write) {
        if ((0xeU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_data_addr))) {
            vlSelf->riscv_soc__DOT__sram0__DOT__sram_14[0U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[0U];
            vlSelf->riscv_soc__DOT__sram0__DOT__sram_14[1U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[1U];
            vlSelf->riscv_soc__DOT__sram0__DOT__sram_14[2U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[2U];
            vlSelf->riscv_soc__DOT__sram0__DOT__sram_14[3U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_1[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_1[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_1[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_1[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram0_write) {
        if ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_data_addr))) {
            vlSelf->riscv_soc__DOT__sram0__DOT__sram_1[0U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[0U];
            vlSelf->riscv_soc__DOT__sram0__DOT__sram_1[1U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[1U];
            vlSelf->riscv_soc__DOT__sram0__DOT__sram_1[2U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[2U];
            vlSelf->riscv_soc__DOT__sram0__DOT__sram_1[3U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_19[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_19[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_19[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_19[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram0_write) {
        if ((0x13U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_data_addr))) {
            vlSelf->riscv_soc__DOT__sram0__DOT__sram_19[0U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[0U];
            vlSelf->riscv_soc__DOT__sram0__DOT__sram_19[1U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[1U];
            vlSelf->riscv_soc__DOT__sram0__DOT__sram_19[2U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[2U];
            vlSelf->riscv_soc__DOT__sram0__DOT__sram_19[3U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_5[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_5[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_5[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_5[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram0_write) {
        if ((5U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_data_addr))) {
            vlSelf->riscv_soc__DOT__sram0__DOT__sram_5[0U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[0U];
            vlSelf->riscv_soc__DOT__sram0__DOT__sram_5[1U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[1U];
            vlSelf->riscv_soc__DOT__sram0__DOT__sram_5[2U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[2U];
            vlSelf->riscv_soc__DOT__sram0__DOT__sram_5[3U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_13[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_13[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_13[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_13[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram0_write) {
        if ((0xdU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_data_addr))) {
            vlSelf->riscv_soc__DOT__sram0__DOT__sram_13[0U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[0U];
            vlSelf->riscv_soc__DOT__sram0__DOT__sram_13[1U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[1U];
            vlSelf->riscv_soc__DOT__sram0__DOT__sram_13[2U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[2U];
            vlSelf->riscv_soc__DOT__sram0__DOT__sram_13[3U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_0[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_0[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_0[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_0[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram0_write) {
        if ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_data_addr))) {
            vlSelf->riscv_soc__DOT__sram0__DOT__sram_0[0U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[0U];
            vlSelf->riscv_soc__DOT__sram0__DOT__sram_0[1U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[1U];
            vlSelf->riscv_soc__DOT__sram0__DOT__sram_0[2U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[2U];
            vlSelf->riscv_soc__DOT__sram0__DOT__sram_0[3U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_18[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_18[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_18[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_18[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram0_write) {
        if ((0x12U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_data_addr))) {
            vlSelf->riscv_soc__DOT__sram0__DOT__sram_18[0U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[0U];
            vlSelf->riscv_soc__DOT__sram0__DOT__sram_18[1U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[1U];
            vlSelf->riscv_soc__DOT__sram0__DOT__sram_18[2U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[2U];
            vlSelf->riscv_soc__DOT__sram0__DOT__sram_18[3U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_4[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_4[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_4[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_4[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram0_write) {
        if ((4U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_data_addr))) {
            vlSelf->riscv_soc__DOT__sram0__DOT__sram_4[0U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[0U];
            vlSelf->riscv_soc__DOT__sram0__DOT__sram_4[1U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[1U];
            vlSelf->riscv_soc__DOT__sram0__DOT__sram_4[2U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[2U];
            vlSelf->riscv_soc__DOT__sram0__DOT__sram_4[3U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_10[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_10[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_10[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_10[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram0_write) {
        if ((0xaU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_data_addr))) {
            vlSelf->riscv_soc__DOT__sram0__DOT__sram_10[0U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[0U];
            vlSelf->riscv_soc__DOT__sram0__DOT__sram_10[1U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[1U];
            vlSelf->riscv_soc__DOT__sram0__DOT__sram_10[2U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[2U];
            vlSelf->riscv_soc__DOT__sram0__DOT__sram_10[3U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_21[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_21[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_21[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_21[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram0_write) {
        if ((0x15U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_data_addr))) {
            vlSelf->riscv_soc__DOT__sram0__DOT__sram_21[0U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[0U];
            vlSelf->riscv_soc__DOT__sram0__DOT__sram_21[1U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[1U];
            vlSelf->riscv_soc__DOT__sram0__DOT__sram_21[2U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[2U];
            vlSelf->riscv_soc__DOT__sram0__DOT__sram_21[3U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_3[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_3[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_3[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_3[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram0_write) {
        if ((3U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_data_addr))) {
            vlSelf->riscv_soc__DOT__sram0__DOT__sram_3[0U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[0U];
            vlSelf->riscv_soc__DOT__sram0__DOT__sram_3[1U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[1U];
            vlSelf->riscv_soc__DOT__sram0__DOT__sram_3[2U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[2U];
            vlSelf->riscv_soc__DOT__sram0__DOT__sram_3[3U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_12[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_12[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_12[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_12[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram0_write) {
        if ((0xcU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_data_addr))) {
            vlSelf->riscv_soc__DOT__sram0__DOT__sram_12[0U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[0U];
            vlSelf->riscv_soc__DOT__sram0__DOT__sram_12[1U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[1U];
            vlSelf->riscv_soc__DOT__sram0__DOT__sram_12[2U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[2U];
            vlSelf->riscv_soc__DOT__sram0__DOT__sram_12[3U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_15[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_15[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_15[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_15[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram0_write) {
        if ((0xfU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_data_addr))) {
            vlSelf->riscv_soc__DOT__sram0__DOT__sram_15[0U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[0U];
            vlSelf->riscv_soc__DOT__sram0__DOT__sram_15[1U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[1U];
            vlSelf->riscv_soc__DOT__sram0__DOT__sram_15[2U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[2U];
            vlSelf->riscv_soc__DOT__sram0__DOT__sram_15[3U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_16[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_16[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_16[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_16[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram0_write) {
        if ((0x10U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_data_addr))) {
            vlSelf->riscv_soc__DOT__sram0__DOT__sram_16[0U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[0U];
            vlSelf->riscv_soc__DOT__sram0__DOT__sram_16[1U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[1U];
            vlSelf->riscv_soc__DOT__sram0__DOT__sram_16[2U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[2U];
            vlSelf->riscv_soc__DOT__sram0__DOT__sram_16[3U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_17[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_17[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_17[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_17[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram0_write) {
        if ((0x11U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_data_addr))) {
            vlSelf->riscv_soc__DOT__sram0__DOT__sram_17[0U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[0U];
            vlSelf->riscv_soc__DOT__sram0__DOT__sram_17[1U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[1U];
            vlSelf->riscv_soc__DOT__sram0__DOT__sram_17[2U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[2U];
            vlSelf->riscv_soc__DOT__sram0__DOT__sram_17[3U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_9[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_9[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_9[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_9[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram1_write) {
        if ((9U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_data_addr))) {
            vlSelf->riscv_soc__DOT__sram2__DOT__sram_9[0U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[0U];
            vlSelf->riscv_soc__DOT__sram2__DOT__sram_9[1U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[1U];
            vlSelf->riscv_soc__DOT__sram2__DOT__sram_9[2U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[2U];
            vlSelf->riscv_soc__DOT__sram2__DOT__sram_9[3U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_8[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_8[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_8[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_8[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram1_write) {
        if ((8U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_data_addr))) {
            vlSelf->riscv_soc__DOT__sram2__DOT__sram_8[0U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[0U];
            vlSelf->riscv_soc__DOT__sram2__DOT__sram_8[1U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[1U];
            vlSelf->riscv_soc__DOT__sram2__DOT__sram_8[2U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[2U];
            vlSelf->riscv_soc__DOT__sram2__DOT__sram_8[3U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_7[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_7[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_7[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_7[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram1_write) {
        if ((7U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_data_addr))) {
            vlSelf->riscv_soc__DOT__sram2__DOT__sram_7[0U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[0U];
            vlSelf->riscv_soc__DOT__sram2__DOT__sram_7[1U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[1U];
            vlSelf->riscv_soc__DOT__sram2__DOT__sram_7[2U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[2U];
            vlSelf->riscv_soc__DOT__sram2__DOT__sram_7[3U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_11[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_11[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_11[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_11[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram1_write) {
        if ((0xbU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_data_addr))) {
            vlSelf->riscv_soc__DOT__sram2__DOT__sram_11[0U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[0U];
            vlSelf->riscv_soc__DOT__sram2__DOT__sram_11[1U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[1U];
            vlSelf->riscv_soc__DOT__sram2__DOT__sram_11[2U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[2U];
            vlSelf->riscv_soc__DOT__sram2__DOT__sram_11[3U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_2[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_2[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_2[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_2[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram1_write) {
        if ((2U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_data_addr))) {
            vlSelf->riscv_soc__DOT__sram2__DOT__sram_2[0U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[0U];
            vlSelf->riscv_soc__DOT__sram2__DOT__sram_2[1U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[1U];
            vlSelf->riscv_soc__DOT__sram2__DOT__sram_2[2U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[2U];
            vlSelf->riscv_soc__DOT__sram2__DOT__sram_2[3U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_20[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_20[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_20[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_20[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram1_write) {
        if ((0x14U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_data_addr))) {
            vlSelf->riscv_soc__DOT__sram2__DOT__sram_20[0U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[0U];
            vlSelf->riscv_soc__DOT__sram2__DOT__sram_20[1U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[1U];
            vlSelf->riscv_soc__DOT__sram2__DOT__sram_20[2U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[2U];
            vlSelf->riscv_soc__DOT__sram2__DOT__sram_20[3U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_6[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_6[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_6[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_6[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram1_write) {
        if ((6U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_data_addr))) {
            vlSelf->riscv_soc__DOT__sram2__DOT__sram_6[0U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[0U];
            vlSelf->riscv_soc__DOT__sram2__DOT__sram_6[1U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[1U];
            vlSelf->riscv_soc__DOT__sram2__DOT__sram_6[2U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[2U];
            vlSelf->riscv_soc__DOT__sram2__DOT__sram_6[3U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_14[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_14[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_14[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_14[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram1_write) {
        if ((0xeU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_data_addr))) {
            vlSelf->riscv_soc__DOT__sram2__DOT__sram_14[0U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[0U];
            vlSelf->riscv_soc__DOT__sram2__DOT__sram_14[1U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[1U];
            vlSelf->riscv_soc__DOT__sram2__DOT__sram_14[2U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[2U];
            vlSelf->riscv_soc__DOT__sram2__DOT__sram_14[3U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_1[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_1[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_1[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_1[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram1_write) {
        if ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_data_addr))) {
            vlSelf->riscv_soc__DOT__sram2__DOT__sram_1[0U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[0U];
            vlSelf->riscv_soc__DOT__sram2__DOT__sram_1[1U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[1U];
            vlSelf->riscv_soc__DOT__sram2__DOT__sram_1[2U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[2U];
            vlSelf->riscv_soc__DOT__sram2__DOT__sram_1[3U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_19[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_19[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_19[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_19[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram1_write) {
        if ((0x13U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_data_addr))) {
            vlSelf->riscv_soc__DOT__sram2__DOT__sram_19[0U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[0U];
            vlSelf->riscv_soc__DOT__sram2__DOT__sram_19[1U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[1U];
            vlSelf->riscv_soc__DOT__sram2__DOT__sram_19[2U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[2U];
            vlSelf->riscv_soc__DOT__sram2__DOT__sram_19[3U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_5[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_5[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_5[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_5[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram1_write) {
        if ((5U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_data_addr))) {
            vlSelf->riscv_soc__DOT__sram2__DOT__sram_5[0U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[0U];
            vlSelf->riscv_soc__DOT__sram2__DOT__sram_5[1U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[1U];
            vlSelf->riscv_soc__DOT__sram2__DOT__sram_5[2U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[2U];
            vlSelf->riscv_soc__DOT__sram2__DOT__sram_5[3U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_13[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_13[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_13[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_13[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram1_write) {
        if ((0xdU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_data_addr))) {
            vlSelf->riscv_soc__DOT__sram2__DOT__sram_13[0U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[0U];
            vlSelf->riscv_soc__DOT__sram2__DOT__sram_13[1U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[1U];
            vlSelf->riscv_soc__DOT__sram2__DOT__sram_13[2U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[2U];
            vlSelf->riscv_soc__DOT__sram2__DOT__sram_13[3U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_0[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_0[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_0[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_0[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram1_write) {
        if ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_data_addr))) {
            vlSelf->riscv_soc__DOT__sram2__DOT__sram_0[0U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[0U];
            vlSelf->riscv_soc__DOT__sram2__DOT__sram_0[1U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[1U];
            vlSelf->riscv_soc__DOT__sram2__DOT__sram_0[2U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[2U];
            vlSelf->riscv_soc__DOT__sram2__DOT__sram_0[3U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_18[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_18[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_18[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_18[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram1_write) {
        if ((0x12U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_data_addr))) {
            vlSelf->riscv_soc__DOT__sram2__DOT__sram_18[0U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[0U];
            vlSelf->riscv_soc__DOT__sram2__DOT__sram_18[1U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[1U];
            vlSelf->riscv_soc__DOT__sram2__DOT__sram_18[2U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[2U];
            vlSelf->riscv_soc__DOT__sram2__DOT__sram_18[3U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_4[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_4[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_4[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_4[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram1_write) {
        if ((4U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_data_addr))) {
            vlSelf->riscv_soc__DOT__sram2__DOT__sram_4[0U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[0U];
            vlSelf->riscv_soc__DOT__sram2__DOT__sram_4[1U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[1U];
            vlSelf->riscv_soc__DOT__sram2__DOT__sram_4[2U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[2U];
            vlSelf->riscv_soc__DOT__sram2__DOT__sram_4[3U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_10[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_10[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_10[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_10[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram1_write) {
        if ((0xaU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_data_addr))) {
            vlSelf->riscv_soc__DOT__sram2__DOT__sram_10[0U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[0U];
            vlSelf->riscv_soc__DOT__sram2__DOT__sram_10[1U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[1U];
            vlSelf->riscv_soc__DOT__sram2__DOT__sram_10[2U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[2U];
            vlSelf->riscv_soc__DOT__sram2__DOT__sram_10[3U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_21[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_21[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_21[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_21[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram1_write) {
        if ((0x15U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_data_addr))) {
            vlSelf->riscv_soc__DOT__sram2__DOT__sram_21[0U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[0U];
            vlSelf->riscv_soc__DOT__sram2__DOT__sram_21[1U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[1U];
            vlSelf->riscv_soc__DOT__sram2__DOT__sram_21[2U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[2U];
            vlSelf->riscv_soc__DOT__sram2__DOT__sram_21[3U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_3[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_3[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_3[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_3[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram1_write) {
        if ((3U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_data_addr))) {
            vlSelf->riscv_soc__DOT__sram2__DOT__sram_3[0U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[0U];
            vlSelf->riscv_soc__DOT__sram2__DOT__sram_3[1U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[1U];
            vlSelf->riscv_soc__DOT__sram2__DOT__sram_3[2U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[2U];
            vlSelf->riscv_soc__DOT__sram2__DOT__sram_3[3U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_12[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_12[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_12[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_12[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram1_write) {
        if ((0xcU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_data_addr))) {
            vlSelf->riscv_soc__DOT__sram2__DOT__sram_12[0U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[0U];
            vlSelf->riscv_soc__DOT__sram2__DOT__sram_12[1U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[1U];
            vlSelf->riscv_soc__DOT__sram2__DOT__sram_12[2U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[2U];
            vlSelf->riscv_soc__DOT__sram2__DOT__sram_12[3U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_15[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_15[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_15[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_15[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram1_write) {
        if ((0xfU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_data_addr))) {
            vlSelf->riscv_soc__DOT__sram2__DOT__sram_15[0U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[0U];
            vlSelf->riscv_soc__DOT__sram2__DOT__sram_15[1U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[1U];
            vlSelf->riscv_soc__DOT__sram2__DOT__sram_15[2U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[2U];
            vlSelf->riscv_soc__DOT__sram2__DOT__sram_15[3U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_16[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_16[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_16[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_16[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram1_write) {
        if ((0x10U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_data_addr))) {
            vlSelf->riscv_soc__DOT__sram2__DOT__sram_16[0U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[0U];
            vlSelf->riscv_soc__DOT__sram2__DOT__sram_16[1U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[1U];
            vlSelf->riscv_soc__DOT__sram2__DOT__sram_16[2U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[2U];
            vlSelf->riscv_soc__DOT__sram2__DOT__sram_16[3U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_17[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_17[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_17[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_17[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram1_write) {
        if ((0x11U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_data_addr))) {
            vlSelf->riscv_soc__DOT__sram2__DOT__sram_17[0U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[0U];
            vlSelf->riscv_soc__DOT__sram2__DOT__sram_17[1U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[1U];
            vlSelf->riscv_soc__DOT__sram2__DOT__sram_17[2U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[2U];
            vlSelf->riscv_soc__DOT__sram2__DOT__sram_17[3U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_61[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_61[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_61[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_61[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram0_write) {
        if ((0x3dU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp1496, (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                               >> 0xaU));
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_61[0U] 
                = __Vtemp1496[0U];
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_61[1U] 
                = __Vtemp1496[1U];
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_61[2U] 
                = __Vtemp1496[2U];
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_61[3U] 
                = __Vtemp1496[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_60[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_60[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_60[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_60[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram0_write) {
        if ((0x3cU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp1497, (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                               >> 0xaU));
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_60[0U] 
                = __Vtemp1497[0U];
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_60[1U] 
                = __Vtemp1497[1U];
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_60[2U] 
                = __Vtemp1497[2U];
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_60[3U] 
                = __Vtemp1497[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_59[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_59[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_59[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_59[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram0_write) {
        if ((0x3bU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp1498, (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                               >> 0xaU));
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_59[0U] 
                = __Vtemp1498[0U];
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_59[1U] 
                = __Vtemp1498[1U];
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_59[2U] 
                = __Vtemp1498[2U];
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_59[3U] 
                = __Vtemp1498[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_58[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_58[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_58[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_58[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram0_write) {
        if ((0x3aU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp1499, (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                               >> 0xaU));
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_58[0U] 
                = __Vtemp1499[0U];
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_58[1U] 
                = __Vtemp1499[1U];
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_58[2U] 
                = __Vtemp1499[2U];
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_58[3U] 
                = __Vtemp1499[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_57[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_57[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_57[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_57[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram0_write) {
        if ((0x39U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp1500, (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                               >> 0xaU));
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_57[0U] 
                = __Vtemp1500[0U];
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_57[1U] 
                = __Vtemp1500[1U];
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_57[2U] 
                = __Vtemp1500[2U];
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_57[3U] 
                = __Vtemp1500[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_56[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_56[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_56[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_56[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram0_write) {
        if ((0x38U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp1501, (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                               >> 0xaU));
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_56[0U] 
                = __Vtemp1501[0U];
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_56[1U] 
                = __Vtemp1501[1U];
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_56[2U] 
                = __Vtemp1501[2U];
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_56[3U] 
                = __Vtemp1501[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_55[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_55[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_55[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_55[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram0_write) {
        if ((0x37U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp1502, (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                               >> 0xaU));
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_55[0U] 
                = __Vtemp1502[0U];
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_55[1U] 
                = __Vtemp1502[1U];
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_55[2U] 
                = __Vtemp1502[2U];
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_55[3U] 
                = __Vtemp1502[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_54[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_54[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_54[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_54[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram0_write) {
        if ((0x36U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp1503, (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                               >> 0xaU));
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_54[0U] 
                = __Vtemp1503[0U];
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_54[1U] 
                = __Vtemp1503[1U];
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_54[2U] 
                = __Vtemp1503[2U];
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_54[3U] 
                = __Vtemp1503[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_53[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_53[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_53[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_53[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram0_write) {
        if ((0x35U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp1504, (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                               >> 0xaU));
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_53[0U] 
                = __Vtemp1504[0U];
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_53[1U] 
                = __Vtemp1504[1U];
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_53[2U] 
                = __Vtemp1504[2U];
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_53[3U] 
                = __Vtemp1504[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_52[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_52[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_52[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_52[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram0_write) {
        if ((0x34U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp1505, (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                               >> 0xaU));
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_52[0U] 
                = __Vtemp1505[0U];
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_52[1U] 
                = __Vtemp1505[1U];
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_52[2U] 
                = __Vtemp1505[2U];
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_52[3U] 
                = __Vtemp1505[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_51[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_51[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_51[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_51[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram0_write) {
        if ((0x33U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp1506, (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                               >> 0xaU));
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_51[0U] 
                = __Vtemp1506[0U];
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_51[1U] 
                = __Vtemp1506[1U];
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_51[2U] 
                = __Vtemp1506[2U];
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_51[3U] 
                = __Vtemp1506[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_50[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_50[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_50[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_50[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram0_write) {
        if ((0x32U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp1507, (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                               >> 0xaU));
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_50[0U] 
                = __Vtemp1507[0U];
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_50[1U] 
                = __Vtemp1507[1U];
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_50[2U] 
                = __Vtemp1507[2U];
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_50[3U] 
                = __Vtemp1507[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_49[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_49[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_49[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_49[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram0_write) {
        if ((0x31U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp1508, (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                               >> 0xaU));
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_49[0U] 
                = __Vtemp1508[0U];
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_49[1U] 
                = __Vtemp1508[1U];
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_49[2U] 
                = __Vtemp1508[2U];
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_49[3U] 
                = __Vtemp1508[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_48[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_48[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_48[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_48[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram0_write) {
        if ((0x30U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp1509, (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                               >> 0xaU));
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_48[0U] 
                = __Vtemp1509[0U];
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_48[1U] 
                = __Vtemp1509[1U];
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_48[2U] 
                = __Vtemp1509[2U];
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_48[3U] 
                = __Vtemp1509[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_47[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_47[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_47[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_47[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram0_write) {
        if ((0x2fU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp1510, (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                               >> 0xaU));
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_47[0U] 
                = __Vtemp1510[0U];
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_47[1U] 
                = __Vtemp1510[1U];
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_47[2U] 
                = __Vtemp1510[2U];
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_47[3U] 
                = __Vtemp1510[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_46[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_46[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_46[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_46[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram0_write) {
        if ((0x2eU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp1511, (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                               >> 0xaU));
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_46[0U] 
                = __Vtemp1511[0U];
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_46[1U] 
                = __Vtemp1511[1U];
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_46[2U] 
                = __Vtemp1511[2U];
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_46[3U] 
                = __Vtemp1511[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_45[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_45[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_45[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_45[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram0_write) {
        if ((0x2dU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp1512, (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                               >> 0xaU));
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_45[0U] 
                = __Vtemp1512[0U];
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_45[1U] 
                = __Vtemp1512[1U];
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_45[2U] 
                = __Vtemp1512[2U];
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_45[3U] 
                = __Vtemp1512[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_44[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_44[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_44[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_44[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram0_write) {
        if ((0x2cU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp1513, (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                               >> 0xaU));
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_44[0U] 
                = __Vtemp1513[0U];
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_44[1U] 
                = __Vtemp1513[1U];
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_44[2U] 
                = __Vtemp1513[2U];
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_44[3U] 
                = __Vtemp1513[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_43[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_43[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_43[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_43[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram0_write) {
        if ((0x2bU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp1514, (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                               >> 0xaU));
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_43[0U] 
                = __Vtemp1514[0U];
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_43[1U] 
                = __Vtemp1514[1U];
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_43[2U] 
                = __Vtemp1514[2U];
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_43[3U] 
                = __Vtemp1514[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_61[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_61[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_61[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_61[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram1_write) {
        if ((0x3dU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp1515, (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                               >> 0xaU));
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_61[0U] 
                = __Vtemp1515[0U];
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_61[1U] 
                = __Vtemp1515[1U];
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_61[2U] 
                = __Vtemp1515[2U];
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_61[3U] 
                = __Vtemp1515[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_60[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_60[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_60[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_60[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram1_write) {
        if ((0x3cU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp1516, (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                               >> 0xaU));
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_60[0U] 
                = __Vtemp1516[0U];
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_60[1U] 
                = __Vtemp1516[1U];
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_60[2U] 
                = __Vtemp1516[2U];
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_60[3U] 
                = __Vtemp1516[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_59[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_59[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_59[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_59[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram1_write) {
        if ((0x3bU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp1517, (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                               >> 0xaU));
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_59[0U] 
                = __Vtemp1517[0U];
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_59[1U] 
                = __Vtemp1517[1U];
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_59[2U] 
                = __Vtemp1517[2U];
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_59[3U] 
                = __Vtemp1517[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_58[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_58[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_58[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_58[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram1_write) {
        if ((0x3aU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp1518, (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                               >> 0xaU));
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_58[0U] 
                = __Vtemp1518[0U];
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_58[1U] 
                = __Vtemp1518[1U];
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_58[2U] 
                = __Vtemp1518[2U];
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_58[3U] 
                = __Vtemp1518[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_57[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_57[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_57[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_57[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram1_write) {
        if ((0x39U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp1519, (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                               >> 0xaU));
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_57[0U] 
                = __Vtemp1519[0U];
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_57[1U] 
                = __Vtemp1519[1U];
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_57[2U] 
                = __Vtemp1519[2U];
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_57[3U] 
                = __Vtemp1519[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_56[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_56[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_56[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_56[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram1_write) {
        if ((0x38U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp1520, (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                               >> 0xaU));
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_56[0U] 
                = __Vtemp1520[0U];
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_56[1U] 
                = __Vtemp1520[1U];
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_56[2U] 
                = __Vtemp1520[2U];
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_56[3U] 
                = __Vtemp1520[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_55[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_55[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_55[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_55[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram1_write) {
        if ((0x37U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp1521, (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                               >> 0xaU));
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_55[0U] 
                = __Vtemp1521[0U];
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_55[1U] 
                = __Vtemp1521[1U];
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_55[2U] 
                = __Vtemp1521[2U];
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_55[3U] 
                = __Vtemp1521[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_54[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_54[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_54[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_54[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram1_write) {
        if ((0x36U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp1522, (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                               >> 0xaU));
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_54[0U] 
                = __Vtemp1522[0U];
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_54[1U] 
                = __Vtemp1522[1U];
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_54[2U] 
                = __Vtemp1522[2U];
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_54[3U] 
                = __Vtemp1522[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_53[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_53[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_53[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_53[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram1_write) {
        if ((0x35U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp1523, (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                               >> 0xaU));
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_53[0U] 
                = __Vtemp1523[0U];
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_53[1U] 
                = __Vtemp1523[1U];
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_53[2U] 
                = __Vtemp1523[2U];
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_53[3U] 
                = __Vtemp1523[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_52[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_52[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_52[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_52[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram1_write) {
        if ((0x34U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp1524, (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                               >> 0xaU));
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_52[0U] 
                = __Vtemp1524[0U];
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_52[1U] 
                = __Vtemp1524[1U];
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_52[2U] 
                = __Vtemp1524[2U];
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_52[3U] 
                = __Vtemp1524[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_51[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_51[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_51[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_51[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram1_write) {
        if ((0x33U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp1525, (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                               >> 0xaU));
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_51[0U] 
                = __Vtemp1525[0U];
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_51[1U] 
                = __Vtemp1525[1U];
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_51[2U] 
                = __Vtemp1525[2U];
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_51[3U] 
                = __Vtemp1525[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_50[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_50[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_50[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_50[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram1_write) {
        if ((0x32U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp1526, (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                               >> 0xaU));
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_50[0U] 
                = __Vtemp1526[0U];
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_50[1U] 
                = __Vtemp1526[1U];
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_50[2U] 
                = __Vtemp1526[2U];
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_50[3U] 
                = __Vtemp1526[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_49[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_49[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_49[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_49[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram1_write) {
        if ((0x31U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp1527, (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                               >> 0xaU));
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_49[0U] 
                = __Vtemp1527[0U];
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_49[1U] 
                = __Vtemp1527[1U];
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_49[2U] 
                = __Vtemp1527[2U];
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_49[3U] 
                = __Vtemp1527[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_48[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_48[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_48[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_48[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram1_write) {
        if ((0x30U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp1528, (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                               >> 0xaU));
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_48[0U] 
                = __Vtemp1528[0U];
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_48[1U] 
                = __Vtemp1528[1U];
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_48[2U] 
                = __Vtemp1528[2U];
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_48[3U] 
                = __Vtemp1528[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_47[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_47[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_47[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_47[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram1_write) {
        if ((0x2fU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp1529, (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                               >> 0xaU));
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_47[0U] 
                = __Vtemp1529[0U];
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_47[1U] 
                = __Vtemp1529[1U];
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_47[2U] 
                = __Vtemp1529[2U];
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_47[3U] 
                = __Vtemp1529[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_46[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_46[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_46[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_46[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram1_write) {
        if ((0x2eU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp1530, (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                               >> 0xaU));
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_46[0U] 
                = __Vtemp1530[0U];
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_46[1U] 
                = __Vtemp1530[1U];
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_46[2U] 
                = __Vtemp1530[2U];
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_46[3U] 
                = __Vtemp1530[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_45[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_45[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_45[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_45[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram1_write) {
        if ((0x2dU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp1531, (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                               >> 0xaU));
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_45[0U] 
                = __Vtemp1531[0U];
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_45[1U] 
                = __Vtemp1531[1U];
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_45[2U] 
                = __Vtemp1531[2U];
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_45[3U] 
                = __Vtemp1531[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_44[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_44[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_44[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_44[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram1_write) {
        if ((0x2cU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp1532, (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                               >> 0xaU));
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_44[0U] 
                = __Vtemp1532[0U];
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_44[1U] 
                = __Vtemp1532[1U];
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_44[2U] 
                = __Vtemp1532[2U];
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_44[3U] 
                = __Vtemp1532[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_43[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_43[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_43[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_43[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram1_write) {
        if ((0x2bU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp1533, (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                               >> 0xaU));
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_43[0U] 
                = __Vtemp1533[0U];
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_43[1U] 
                = __Vtemp1533[1U];
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_43[2U] 
                = __Vtemp1533[2U];
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_43[3U] 
                = __Vtemp1533[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_42[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_42[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_42[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_42[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram0_write) {
        if ((0x2aU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp1534, (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                               >> 0xaU));
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_42[0U] 
                = __Vtemp1534[0U];
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_42[1U] 
                = __Vtemp1534[1U];
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_42[2U] 
                = __Vtemp1534[2U];
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_42[3U] 
                = __Vtemp1534[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_41[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_41[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_41[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_41[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram0_write) {
        if ((0x29U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp1535, (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                               >> 0xaU));
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_41[0U] 
                = __Vtemp1535[0U];
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_41[1U] 
                = __Vtemp1535[1U];
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_41[2U] 
                = __Vtemp1535[2U];
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_41[3U] 
                = __Vtemp1535[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_40[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_40[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_40[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_40[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram0_write) {
        if ((0x28U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp1536, (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                               >> 0xaU));
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_40[0U] 
                = __Vtemp1536[0U];
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_40[1U] 
                = __Vtemp1536[1U];
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_40[2U] 
                = __Vtemp1536[2U];
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_40[3U] 
                = __Vtemp1536[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_39[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_39[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_39[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_39[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram0_write) {
        if ((0x27U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp1537, (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                               >> 0xaU));
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_39[0U] 
                = __Vtemp1537[0U];
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_39[1U] 
                = __Vtemp1537[1U];
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_39[2U] 
                = __Vtemp1537[2U];
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_39[3U] 
                = __Vtemp1537[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_38[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_38[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_38[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_38[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram0_write) {
        if ((0x26U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp1538, (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                               >> 0xaU));
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_38[0U] 
                = __Vtemp1538[0U];
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_38[1U] 
                = __Vtemp1538[1U];
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_38[2U] 
                = __Vtemp1538[2U];
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_38[3U] 
                = __Vtemp1538[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_36[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_36[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_36[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_36[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram0_write) {
        if ((0x24U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp1539, (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                               >> 0xaU));
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_36[0U] 
                = __Vtemp1539[0U];
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_36[1U] 
                = __Vtemp1539[1U];
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_36[2U] 
                = __Vtemp1539[2U];
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_36[3U] 
                = __Vtemp1539[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_35[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_35[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_35[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_35[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram0_write) {
        if ((0x23U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp1540, (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                               >> 0xaU));
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_35[0U] 
                = __Vtemp1540[0U];
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_35[1U] 
                = __Vtemp1540[1U];
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_35[2U] 
                = __Vtemp1540[2U];
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_35[3U] 
                = __Vtemp1540[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_34[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_34[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_34[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_34[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram0_write) {
        if ((0x22U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp1541, (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                               >> 0xaU));
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_34[0U] 
                = __Vtemp1541[0U];
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_34[1U] 
                = __Vtemp1541[1U];
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_34[2U] 
                = __Vtemp1541[2U];
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_34[3U] 
                = __Vtemp1541[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_33[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_33[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_33[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_33[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram0_write) {
        if ((0x21U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp1542, (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                               >> 0xaU));
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_33[0U] 
                = __Vtemp1542[0U];
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_33[1U] 
                = __Vtemp1542[1U];
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_33[2U] 
                = __Vtemp1542[2U];
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_33[3U] 
                = __Vtemp1542[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_32[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_32[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_32[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_32[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram0_write) {
        if ((0x20U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp1543, (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                               >> 0xaU));
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_32[0U] 
                = __Vtemp1543[0U];
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_32[1U] 
                = __Vtemp1543[1U];
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_32[2U] 
                = __Vtemp1543[2U];
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_32[3U] 
                = __Vtemp1543[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_26[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_26[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_26[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_26[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram0_write) {
        if ((0x1aU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp1544, (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                               >> 0xaU));
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_26[0U] 
                = __Vtemp1544[0U];
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_26[1U] 
                = __Vtemp1544[1U];
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_26[2U] 
                = __Vtemp1544[2U];
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_26[3U] 
                = __Vtemp1544[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_25[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_25[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_25[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_25[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram0_write) {
        if ((0x19U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp1545, (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                               >> 0xaU));
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_25[0U] 
                = __Vtemp1545[0U];
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_25[1U] 
                = __Vtemp1545[1U];
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_25[2U] 
                = __Vtemp1545[2U];
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_25[3U] 
                = __Vtemp1545[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_29[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_29[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_29[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_29[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram0_write) {
        if ((0x1dU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp1546, (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                               >> 0xaU));
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_29[0U] 
                = __Vtemp1546[0U];
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_29[1U] 
                = __Vtemp1546[1U];
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_29[2U] 
                = __Vtemp1546[2U];
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_29[3U] 
                = __Vtemp1546[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_28[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_28[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_28[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_28[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram0_write) {
        if ((0x1cU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp1547, (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                               >> 0xaU));
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_28[0U] 
                = __Vtemp1547[0U];
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_28[1U] 
                = __Vtemp1547[1U];
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_28[2U] 
                = __Vtemp1547[2U];
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_28[3U] 
                = __Vtemp1547[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_27[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_27[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_27[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_27[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram0_write) {
        if ((0x1bU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp1548, (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                               >> 0xaU));
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_27[0U] 
                = __Vtemp1548[0U];
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_27[1U] 
                = __Vtemp1548[1U];
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_27[2U] 
                = __Vtemp1548[2U];
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_27[3U] 
                = __Vtemp1548[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_22[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_22[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_22[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_22[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram0_write) {
        if ((0x16U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp1549, (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                               >> 0xaU));
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_22[0U] 
                = __Vtemp1549[0U];
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_22[1U] 
                = __Vtemp1549[1U];
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_22[2U] 
                = __Vtemp1549[2U];
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_22[3U] 
                = __Vtemp1549[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_37[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_37[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_37[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_37[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram0_write) {
        if ((0x25U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp1550, (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                               >> 0xaU));
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_37[0U] 
                = __Vtemp1550[0U];
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_37[1U] 
                = __Vtemp1550[1U];
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_37[2U] 
                = __Vtemp1550[2U];
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_37[3U] 
                = __Vtemp1550[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_31[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_31[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_31[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_31[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram0_write) {
        if ((0x1fU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp1551, (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                               >> 0xaU));
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_31[0U] 
                = __Vtemp1551[0U];
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_31[1U] 
                = __Vtemp1551[1U];
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_31[2U] 
                = __Vtemp1551[2U];
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_31[3U] 
                = __Vtemp1551[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_30[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_30[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_30[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_30[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram0_write) {
        if ((0x1eU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp1552, (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                               >> 0xaU));
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_30[0U] 
                = __Vtemp1552[0U];
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_30[1U] 
                = __Vtemp1552[1U];
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_30[2U] 
                = __Vtemp1552[2U];
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_30[3U] 
                = __Vtemp1552[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_23[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_23[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_23[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_23[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram0_write) {
        if ((0x17U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp1553, (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                               >> 0xaU));
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_23[0U] 
                = __Vtemp1553[0U];
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_23[1U] 
                = __Vtemp1553[1U];
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_23[2U] 
                = __Vtemp1553[2U];
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_23[3U] 
                = __Vtemp1553[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_24[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_24[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_24[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_24[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram0_write) {
        if ((0x18U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp1554, (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                               >> 0xaU));
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_24[0U] 
                = __Vtemp1554[0U];
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_24[1U] 
                = __Vtemp1554[1U];
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_24[2U] 
                = __Vtemp1554[2U];
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_24[3U] 
                = __Vtemp1554[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_42[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_42[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_42[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_42[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram1_write) {
        if ((0x2aU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp1555, (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                               >> 0xaU));
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_42[0U] 
                = __Vtemp1555[0U];
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_42[1U] 
                = __Vtemp1555[1U];
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_42[2U] 
                = __Vtemp1555[2U];
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_42[3U] 
                = __Vtemp1555[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_41[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_41[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_41[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_41[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram1_write) {
        if ((0x29U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp1556, (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                               >> 0xaU));
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_41[0U] 
                = __Vtemp1556[0U];
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_41[1U] 
                = __Vtemp1556[1U];
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_41[2U] 
                = __Vtemp1556[2U];
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_41[3U] 
                = __Vtemp1556[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_40[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_40[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_40[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_40[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram1_write) {
        if ((0x28U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp1557, (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                               >> 0xaU));
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_40[0U] 
                = __Vtemp1557[0U];
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_40[1U] 
                = __Vtemp1557[1U];
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_40[2U] 
                = __Vtemp1557[2U];
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_40[3U] 
                = __Vtemp1557[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_39[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_39[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_39[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_39[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram1_write) {
        if ((0x27U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp1558, (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                               >> 0xaU));
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_39[0U] 
                = __Vtemp1558[0U];
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_39[1U] 
                = __Vtemp1558[1U];
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_39[2U] 
                = __Vtemp1558[2U];
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_39[3U] 
                = __Vtemp1558[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_38[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_38[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_38[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_38[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram1_write) {
        if ((0x26U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp1559, (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                               >> 0xaU));
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_38[0U] 
                = __Vtemp1559[0U];
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_38[1U] 
                = __Vtemp1559[1U];
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_38[2U] 
                = __Vtemp1559[2U];
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_38[3U] 
                = __Vtemp1559[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_36[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_36[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_36[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_36[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram1_write) {
        if ((0x24U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp1560, (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                               >> 0xaU));
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_36[0U] 
                = __Vtemp1560[0U];
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_36[1U] 
                = __Vtemp1560[1U];
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_36[2U] 
                = __Vtemp1560[2U];
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_36[3U] 
                = __Vtemp1560[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_35[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_35[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_35[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_35[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram1_write) {
        if ((0x23U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp1561, (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                               >> 0xaU));
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_35[0U] 
                = __Vtemp1561[0U];
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_35[1U] 
                = __Vtemp1561[1U];
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_35[2U] 
                = __Vtemp1561[2U];
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_35[3U] 
                = __Vtemp1561[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_34[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_34[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_34[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_34[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram1_write) {
        if ((0x22U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp1562, (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                               >> 0xaU));
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_34[0U] 
                = __Vtemp1562[0U];
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_34[1U] 
                = __Vtemp1562[1U];
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_34[2U] 
                = __Vtemp1562[2U];
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_34[3U] 
                = __Vtemp1562[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_33[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_33[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_33[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_33[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram1_write) {
        if ((0x21U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp1563, (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                               >> 0xaU));
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_33[0U] 
                = __Vtemp1563[0U];
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_33[1U] 
                = __Vtemp1563[1U];
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_33[2U] 
                = __Vtemp1563[2U];
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_33[3U] 
                = __Vtemp1563[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_32[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_32[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_32[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_32[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram1_write) {
        if ((0x20U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp1564, (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                               >> 0xaU));
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_32[0U] 
                = __Vtemp1564[0U];
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_32[1U] 
                = __Vtemp1564[1U];
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_32[2U] 
                = __Vtemp1564[2U];
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_32[3U] 
                = __Vtemp1564[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_26[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_26[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_26[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_26[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram1_write) {
        if ((0x1aU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp1565, (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                               >> 0xaU));
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_26[0U] 
                = __Vtemp1565[0U];
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_26[1U] 
                = __Vtemp1565[1U];
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_26[2U] 
                = __Vtemp1565[2U];
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_26[3U] 
                = __Vtemp1565[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_25[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_25[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_25[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_25[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram1_write) {
        if ((0x19U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp1566, (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                               >> 0xaU));
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_25[0U] 
                = __Vtemp1566[0U];
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_25[1U] 
                = __Vtemp1566[1U];
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_25[2U] 
                = __Vtemp1566[2U];
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_25[3U] 
                = __Vtemp1566[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_29[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_29[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_29[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_29[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram1_write) {
        if ((0x1dU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp1567, (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                               >> 0xaU));
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_29[0U] 
                = __Vtemp1567[0U];
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_29[1U] 
                = __Vtemp1567[1U];
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_29[2U] 
                = __Vtemp1567[2U];
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_29[3U] 
                = __Vtemp1567[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_28[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_28[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_28[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_28[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram1_write) {
        if ((0x1cU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp1568, (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                               >> 0xaU));
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_28[0U] 
                = __Vtemp1568[0U];
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_28[1U] 
                = __Vtemp1568[1U];
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_28[2U] 
                = __Vtemp1568[2U];
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_28[3U] 
                = __Vtemp1568[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_27[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_27[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_27[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_27[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram1_write) {
        if ((0x1bU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp1569, (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                               >> 0xaU));
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_27[0U] 
                = __Vtemp1569[0U];
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_27[1U] 
                = __Vtemp1569[1U];
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_27[2U] 
                = __Vtemp1569[2U];
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_27[3U] 
                = __Vtemp1569[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_22[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_22[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_22[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_22[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram1_write) {
        if ((0x16U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp1570, (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                               >> 0xaU));
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_22[0U] 
                = __Vtemp1570[0U];
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_22[1U] 
                = __Vtemp1570[1U];
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_22[2U] 
                = __Vtemp1570[2U];
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_22[3U] 
                = __Vtemp1570[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_37[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_37[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_37[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_37[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram1_write) {
        if ((0x25U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp1571, (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                               >> 0xaU));
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_37[0U] 
                = __Vtemp1571[0U];
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_37[1U] 
                = __Vtemp1571[1U];
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_37[2U] 
                = __Vtemp1571[2U];
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_37[3U] 
                = __Vtemp1571[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_31[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_31[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_31[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_31[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram1_write) {
        if ((0x1fU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp1572, (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                               >> 0xaU));
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_31[0U] 
                = __Vtemp1572[0U];
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_31[1U] 
                = __Vtemp1572[1U];
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_31[2U] 
                = __Vtemp1572[2U];
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_31[3U] 
                = __Vtemp1572[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_30[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_30[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_30[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_30[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram1_write) {
        if ((0x1eU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp1573, (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                               >> 0xaU));
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_30[0U] 
                = __Vtemp1573[0U];
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_30[1U] 
                = __Vtemp1573[1U];
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_30[2U] 
                = __Vtemp1573[2U];
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_30[3U] 
                = __Vtemp1573[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_23[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_23[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_23[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_23[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram1_write) {
        if ((0x17U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp1574, (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                               >> 0xaU));
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_23[0U] 
                = __Vtemp1574[0U];
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_23[1U] 
                = __Vtemp1574[1U];
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_23[2U] 
                = __Vtemp1574[2U];
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_23[3U] 
                = __Vtemp1574[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_24[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_24[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_24[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_24[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram1_write) {
        if ((0x18U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp1575, (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                               >> 0xaU));
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_24[0U] 
                = __Vtemp1575[0U];
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_24[1U] 
                = __Vtemp1575[1U];
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_24[2U] 
                = __Vtemp1575[2U];
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_24[3U] 
                = __Vtemp1575[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_9[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_9[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_9[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_9[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram0_write) {
        if ((9U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp1576, (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                               >> 0xaU));
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_9[0U] 
                = __Vtemp1576[0U];
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_9[1U] 
                = __Vtemp1576[1U];
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_9[2U] 
                = __Vtemp1576[2U];
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_9[3U] 
                = __Vtemp1576[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_8[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_8[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_8[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_8[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram0_write) {
        if ((8U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp1577, (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                               >> 0xaU));
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_8[0U] 
                = __Vtemp1577[0U];
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_8[1U] 
                = __Vtemp1577[1U];
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_8[2U] 
                = __Vtemp1577[2U];
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_8[3U] 
                = __Vtemp1577[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_7[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_7[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_7[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_7[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram0_write) {
        if ((7U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp1578, (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                               >> 0xaU));
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_7[0U] 
                = __Vtemp1578[0U];
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_7[1U] 
                = __Vtemp1578[1U];
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_7[2U] 
                = __Vtemp1578[2U];
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_7[3U] 
                = __Vtemp1578[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_11[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_11[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_11[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_11[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram0_write) {
        if ((0xbU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp1579, (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                               >> 0xaU));
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_11[0U] 
                = __Vtemp1579[0U];
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_11[1U] 
                = __Vtemp1579[1U];
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_11[2U] 
                = __Vtemp1579[2U];
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_11[3U] 
                = __Vtemp1579[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_2[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_2[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_2[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_2[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram0_write) {
        if ((2U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp1580, (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                               >> 0xaU));
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_2[0U] 
                = __Vtemp1580[0U];
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_2[1U] 
                = __Vtemp1580[1U];
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_2[2U] 
                = __Vtemp1580[2U];
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_2[3U] 
                = __Vtemp1580[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_20[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_20[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_20[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_20[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram0_write) {
        if ((0x14U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp1581, (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                               >> 0xaU));
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_20[0U] 
                = __Vtemp1581[0U];
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_20[1U] 
                = __Vtemp1581[1U];
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_20[2U] 
                = __Vtemp1581[2U];
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_20[3U] 
                = __Vtemp1581[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_6[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_6[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_6[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_6[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram0_write) {
        if ((6U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp1582, (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                               >> 0xaU));
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_6[0U] 
                = __Vtemp1582[0U];
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_6[1U] 
                = __Vtemp1582[1U];
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_6[2U] 
                = __Vtemp1582[2U];
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_6[3U] 
                = __Vtemp1582[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_14[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_14[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_14[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_14[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram0_write) {
        if ((0xeU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp1583, (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                               >> 0xaU));
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_14[0U] 
                = __Vtemp1583[0U];
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_14[1U] 
                = __Vtemp1583[1U];
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_14[2U] 
                = __Vtemp1583[2U];
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_14[3U] 
                = __Vtemp1583[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_1[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_1[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_1[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_1[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram0_write) {
        if ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp1584, (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                               >> 0xaU));
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_1[0U] 
                = __Vtemp1584[0U];
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_1[1U] 
                = __Vtemp1584[1U];
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_1[2U] 
                = __Vtemp1584[2U];
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_1[3U] 
                = __Vtemp1584[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_19[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_19[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_19[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_19[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram0_write) {
        if ((0x13U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp1585, (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                               >> 0xaU));
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_19[0U] 
                = __Vtemp1585[0U];
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_19[1U] 
                = __Vtemp1585[1U];
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_19[2U] 
                = __Vtemp1585[2U];
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_19[3U] 
                = __Vtemp1585[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_5[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_5[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_5[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_5[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram0_write) {
        if ((5U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp1586, (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                               >> 0xaU));
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_5[0U] 
                = __Vtemp1586[0U];
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_5[1U] 
                = __Vtemp1586[1U];
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_5[2U] 
                = __Vtemp1586[2U];
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_5[3U] 
                = __Vtemp1586[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_13[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_13[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_13[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_13[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram0_write) {
        if ((0xdU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp1587, (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                               >> 0xaU));
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_13[0U] 
                = __Vtemp1587[0U];
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_13[1U] 
                = __Vtemp1587[1U];
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_13[2U] 
                = __Vtemp1587[2U];
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_13[3U] 
                = __Vtemp1587[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_0[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_0[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_0[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_0[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram0_write) {
        if ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp1588, (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                               >> 0xaU));
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_0[0U] 
                = __Vtemp1588[0U];
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_0[1U] 
                = __Vtemp1588[1U];
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_0[2U] 
                = __Vtemp1588[2U];
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_0[3U] 
                = __Vtemp1588[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_18[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_18[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_18[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_18[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram0_write) {
        if ((0x12U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp1589, (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                               >> 0xaU));
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_18[0U] 
                = __Vtemp1589[0U];
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_18[1U] 
                = __Vtemp1589[1U];
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_18[2U] 
                = __Vtemp1589[2U];
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_18[3U] 
                = __Vtemp1589[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_4[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_4[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_4[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_4[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram0_write) {
        if ((4U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp1590, (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                               >> 0xaU));
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_4[0U] 
                = __Vtemp1590[0U];
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_4[1U] 
                = __Vtemp1590[1U];
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_4[2U] 
                = __Vtemp1590[2U];
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_4[3U] 
                = __Vtemp1590[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_10[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_10[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_10[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_10[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram0_write) {
        if ((0xaU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp1591, (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                               >> 0xaU));
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_10[0U] 
                = __Vtemp1591[0U];
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_10[1U] 
                = __Vtemp1591[1U];
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_10[2U] 
                = __Vtemp1591[2U];
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_10[3U] 
                = __Vtemp1591[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_21[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_21[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_21[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_21[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram0_write) {
        if ((0x15U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp1592, (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                               >> 0xaU));
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_21[0U] 
                = __Vtemp1592[0U];
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_21[1U] 
                = __Vtemp1592[1U];
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_21[2U] 
                = __Vtemp1592[2U];
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_21[3U] 
                = __Vtemp1592[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_3[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_3[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_3[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_3[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram0_write) {
        if ((3U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp1593, (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                               >> 0xaU));
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_3[0U] 
                = __Vtemp1593[0U];
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_3[1U] 
                = __Vtemp1593[1U];
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_3[2U] 
                = __Vtemp1593[2U];
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_3[3U] 
                = __Vtemp1593[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_12[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_12[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_12[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_12[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram0_write) {
        if ((0xcU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp1594, (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                               >> 0xaU));
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_12[0U] 
                = __Vtemp1594[0U];
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_12[1U] 
                = __Vtemp1594[1U];
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_12[2U] 
                = __Vtemp1594[2U];
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_12[3U] 
                = __Vtemp1594[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_15[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_15[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_15[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_15[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram0_write) {
        if ((0xfU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp1595, (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                               >> 0xaU));
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_15[0U] 
                = __Vtemp1595[0U];
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_15[1U] 
                = __Vtemp1595[1U];
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_15[2U] 
                = __Vtemp1595[2U];
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_15[3U] 
                = __Vtemp1595[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_16[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_16[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_16[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_16[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram0_write) {
        if ((0x10U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp1596, (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                               >> 0xaU));
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_16[0U] 
                = __Vtemp1596[0U];
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_16[1U] 
                = __Vtemp1596[1U];
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_16[2U] 
                = __Vtemp1596[2U];
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_16[3U] 
                = __Vtemp1596[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_17[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_17[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_17[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_17[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram0_write) {
        if ((0x11U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp1597, (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                               >> 0xaU));
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_17[0U] 
                = __Vtemp1597[0U];
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_17[1U] 
                = __Vtemp1597[1U];
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_17[2U] 
                = __Vtemp1597[2U];
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_17[3U] 
                = __Vtemp1597[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_9[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_9[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_9[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_9[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram1_write) {
        if ((9U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp1598, (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                               >> 0xaU));
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_9[0U] 
                = __Vtemp1598[0U];
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_9[1U] 
                = __Vtemp1598[1U];
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_9[2U] 
                = __Vtemp1598[2U];
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_9[3U] 
                = __Vtemp1598[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_8[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_8[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_8[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_8[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram1_write) {
        if ((8U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp1599, (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                               >> 0xaU));
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_8[0U] 
                = __Vtemp1599[0U];
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_8[1U] 
                = __Vtemp1599[1U];
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_8[2U] 
                = __Vtemp1599[2U];
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_8[3U] 
                = __Vtemp1599[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_7[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_7[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_7[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_7[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram1_write) {
        if ((7U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp1600, (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                               >> 0xaU));
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_7[0U] 
                = __Vtemp1600[0U];
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_7[1U] 
                = __Vtemp1600[1U];
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_7[2U] 
                = __Vtemp1600[2U];
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_7[3U] 
                = __Vtemp1600[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_11[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_11[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_11[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_11[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram1_write) {
        if ((0xbU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp1601, (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                               >> 0xaU));
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_11[0U] 
                = __Vtemp1601[0U];
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_11[1U] 
                = __Vtemp1601[1U];
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_11[2U] 
                = __Vtemp1601[2U];
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_11[3U] 
                = __Vtemp1601[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_2[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_2[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_2[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_2[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram1_write) {
        if ((2U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp1602, (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                               >> 0xaU));
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_2[0U] 
                = __Vtemp1602[0U];
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_2[1U] 
                = __Vtemp1602[1U];
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_2[2U] 
                = __Vtemp1602[2U];
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_2[3U] 
                = __Vtemp1602[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_20[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_20[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_20[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_20[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram1_write) {
        if ((0x14U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp1603, (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                               >> 0xaU));
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_20[0U] 
                = __Vtemp1603[0U];
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_20[1U] 
                = __Vtemp1603[1U];
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_20[2U] 
                = __Vtemp1603[2U];
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_20[3U] 
                = __Vtemp1603[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_6[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_6[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_6[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_6[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram1_write) {
        if ((6U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp1604, (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                               >> 0xaU));
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_6[0U] 
                = __Vtemp1604[0U];
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_6[1U] 
                = __Vtemp1604[1U];
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_6[2U] 
                = __Vtemp1604[2U];
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_6[3U] 
                = __Vtemp1604[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_14[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_14[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_14[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_14[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram1_write) {
        if ((0xeU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp1605, (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                               >> 0xaU));
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_14[0U] 
                = __Vtemp1605[0U];
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_14[1U] 
                = __Vtemp1605[1U];
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_14[2U] 
                = __Vtemp1605[2U];
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_14[3U] 
                = __Vtemp1605[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_1[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_1[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_1[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_1[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram1_write) {
        if ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp1606, (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                               >> 0xaU));
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_1[0U] 
                = __Vtemp1606[0U];
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_1[1U] 
                = __Vtemp1606[1U];
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_1[2U] 
                = __Vtemp1606[2U];
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_1[3U] 
                = __Vtemp1606[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_19[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_19[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_19[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_19[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram1_write) {
        if ((0x13U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp1607, (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                               >> 0xaU));
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_19[0U] 
                = __Vtemp1607[0U];
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_19[1U] 
                = __Vtemp1607[1U];
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_19[2U] 
                = __Vtemp1607[2U];
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_19[3U] 
                = __Vtemp1607[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_5[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_5[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_5[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_5[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram1_write) {
        if ((5U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp1608, (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                               >> 0xaU));
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_5[0U] 
                = __Vtemp1608[0U];
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_5[1U] 
                = __Vtemp1608[1U];
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_5[2U] 
                = __Vtemp1608[2U];
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_5[3U] 
                = __Vtemp1608[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_13[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_13[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_13[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_13[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram1_write) {
        if ((0xdU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp1609, (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                               >> 0xaU));
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_13[0U] 
                = __Vtemp1609[0U];
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_13[1U] 
                = __Vtemp1609[1U];
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_13[2U] 
                = __Vtemp1609[2U];
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_13[3U] 
                = __Vtemp1609[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_0[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_0[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_0[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_0[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram1_write) {
        if ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp1610, (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                               >> 0xaU));
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_0[0U] 
                = __Vtemp1610[0U];
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_0[1U] 
                = __Vtemp1610[1U];
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_0[2U] 
                = __Vtemp1610[2U];
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_0[3U] 
                = __Vtemp1610[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_18[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_18[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_18[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_18[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram1_write) {
        if ((0x12U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp1611, (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                               >> 0xaU));
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_18[0U] 
                = __Vtemp1611[0U];
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_18[1U] 
                = __Vtemp1611[1U];
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_18[2U] 
                = __Vtemp1611[2U];
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_18[3U] 
                = __Vtemp1611[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_4[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_4[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_4[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_4[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram1_write) {
        if ((4U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp1612, (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                               >> 0xaU));
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_4[0U] 
                = __Vtemp1612[0U];
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_4[1U] 
                = __Vtemp1612[1U];
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_4[2U] 
                = __Vtemp1612[2U];
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_4[3U] 
                = __Vtemp1612[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_10[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_10[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_10[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_10[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram1_write) {
        if ((0xaU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp1613, (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                               >> 0xaU));
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_10[0U] 
                = __Vtemp1613[0U];
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_10[1U] 
                = __Vtemp1613[1U];
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_10[2U] 
                = __Vtemp1613[2U];
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_10[3U] 
                = __Vtemp1613[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_21[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_21[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_21[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_21[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram1_write) {
        if ((0x15U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp1614, (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                               >> 0xaU));
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_21[0U] 
                = __Vtemp1614[0U];
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_21[1U] 
                = __Vtemp1614[1U];
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_21[2U] 
                = __Vtemp1614[2U];
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_21[3U] 
                = __Vtemp1614[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_3[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_3[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_3[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_3[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram1_write) {
        if ((3U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp1615, (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                               >> 0xaU));
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_3[0U] 
                = __Vtemp1615[0U];
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_3[1U] 
                = __Vtemp1615[1U];
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_3[2U] 
                = __Vtemp1615[2U];
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_3[3U] 
                = __Vtemp1615[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_12[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_12[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_12[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_12[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram1_write) {
        if ((0xcU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp1616, (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                               >> 0xaU));
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_12[0U] 
                = __Vtemp1616[0U];
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_12[1U] 
                = __Vtemp1616[1U];
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_12[2U] 
                = __Vtemp1616[2U];
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_12[3U] 
                = __Vtemp1616[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_15[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_15[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_15[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_15[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram1_write) {
        if ((0xfU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp1617, (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                               >> 0xaU));
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_15[0U] 
                = __Vtemp1617[0U];
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_15[1U] 
                = __Vtemp1617[1U];
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_15[2U] 
                = __Vtemp1617[2U];
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_15[3U] 
                = __Vtemp1617[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_16[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_16[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_16[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_16[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram1_write) {
        if ((0x10U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp1618, (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                               >> 0xaU));
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_16[0U] 
                = __Vtemp1618[0U];
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_16[1U] 
                = __Vtemp1618[1U];
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_16[2U] 
                = __Vtemp1618[2U];
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_16[3U] 
                = __Vtemp1618[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_17[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_17[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_17[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_17[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram1_write) {
        if ((0x11U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp1619, (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                               >> 0xaU));
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_17[0U] 
                = __Vtemp1619[0U];
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_17[1U] 
                = __Vtemp1619[1U];
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_17[2U] 
                = __Vtemp1619[2U];
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_17[3U] 
                = __Vtemp1619[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_63 = 2U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_valid) {
        if ((0x3fU == (0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                        >> 3U))))) {
            vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_63 
                = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_taken)
                    ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___PHT_T_3)
                    : (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___PHT_T_7));
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_53 = 2U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_valid) {
        if ((0x35U == (0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                        >> 3U))))) {
            vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_53 
                = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_taken)
                    ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___PHT_T_3)
                    : (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___PHT_T_7));
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_54 = 2U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_valid) {
        if ((0x36U == (0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                        >> 3U))))) {
            vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_54 
                = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_taken)
                    ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___PHT_T_3)
                    : (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___PHT_T_7));
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_55 = 2U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_valid) {
        if ((0x37U == (0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                        >> 3U))))) {
            vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_55 
                = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_taken)
                    ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___PHT_T_3)
                    : (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___PHT_T_7));
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_56 = 2U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_valid) {
        if ((0x38U == (0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                        >> 3U))))) {
            vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_56 
                = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_taken)
                    ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___PHT_T_3)
                    : (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___PHT_T_7));
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_57 = 2U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_valid) {
        if ((0x39U == (0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                        >> 3U))))) {
            vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_57 
                = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_taken)
                    ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___PHT_T_3)
                    : (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___PHT_T_7));
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_58 = 2U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_valid) {
        if ((0x3aU == (0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                        >> 3U))))) {
            vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_58 
                = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_taken)
                    ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___PHT_T_3)
                    : (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___PHT_T_7));
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_59 = 2U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_valid) {
        if ((0x3bU == (0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                        >> 3U))))) {
            vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_59 
                = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_taken)
                    ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___PHT_T_3)
                    : (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___PHT_T_7));
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_60 = 2U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_valid) {
        if ((0x3cU == (0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                        >> 3U))))) {
            vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_60 
                = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_taken)
                    ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___PHT_T_3)
                    : (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___PHT_T_7));
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_61 = 2U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_valid) {
        if ((0x3dU == (0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                        >> 3U))))) {
            vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_61 
                = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_taken)
                    ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___PHT_T_3)
                    : (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___PHT_T_7));
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_62 = 2U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_valid) {
        if ((0x3eU == (0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                        >> 3U))))) {
            vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_62 
                = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_taken)
                    ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___PHT_T_3)
                    : (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___PHT_T_7));
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_40 = 2U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_valid) {
        if ((0x28U == (0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                        >> 3U))))) {
            vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_40 
                = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_taken)
                    ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___PHT_T_3)
                    : (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___PHT_T_7));
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_41 = 2U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_valid) {
        if ((0x29U == (0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                        >> 3U))))) {
            vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_41 
                = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_taken)
                    ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___PHT_T_3)
                    : (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___PHT_T_7));
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_42 = 2U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_valid) {
        if ((0x2aU == (0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                        >> 3U))))) {
            vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_42 
                = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_taken)
                    ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___PHT_T_3)
                    : (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___PHT_T_7));
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_43 = 2U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_valid) {
        if ((0x2bU == (0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                        >> 3U))))) {
            vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_43 
                = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_taken)
                    ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___PHT_T_3)
                    : (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___PHT_T_7));
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_44 = 2U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_valid) {
        if ((0x2cU == (0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                        >> 3U))))) {
            vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_44 
                = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_taken)
                    ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___PHT_T_3)
                    : (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___PHT_T_7));
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_45 = 2U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_valid) {
        if ((0x2dU == (0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                        >> 3U))))) {
            vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_45 
                = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_taken)
                    ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___PHT_T_3)
                    : (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___PHT_T_7));
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_46 = 2U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_valid) {
        if ((0x2eU == (0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                        >> 3U))))) {
            vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_46 
                = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_taken)
                    ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___PHT_T_3)
                    : (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___PHT_T_7));
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_47 = 2U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_valid) {
        if ((0x2fU == (0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                        >> 3U))))) {
            vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_47 
                = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_taken)
                    ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___PHT_T_3)
                    : (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___PHT_T_7));
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_48 = 2U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_valid) {
        if ((0x30U == (0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                        >> 3U))))) {
            vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_48 
                = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_taken)
                    ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___PHT_T_3)
                    : (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___PHT_T_7));
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_49 = 2U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_valid) {
        if ((0x31U == (0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                        >> 3U))))) {
            vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_49 
                = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_taken)
                    ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___PHT_T_3)
                    : (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___PHT_T_7));
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_50 = 2U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_valid) {
        if ((0x32U == (0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                        >> 3U))))) {
            vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_50 
                = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_taken)
                    ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___PHT_T_3)
                    : (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___PHT_T_7));
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_51 = 2U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_valid) {
        if ((0x33U == (0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                        >> 3U))))) {
            vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_51 
                = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_taken)
                    ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___PHT_T_3)
                    : (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___PHT_T_7));
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_52 = 2U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_valid) {
        if ((0x34U == (0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                        >> 3U))))) {
            vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_52 
                = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_taken)
                    ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___PHT_T_3)
                    : (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___PHT_T_7));
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_29 = 2U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_valid) {
        if ((0x1dU == (0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                        >> 3U))))) {
            vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_29 
                = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_taken)
                    ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___PHT_T_3)
                    : (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___PHT_T_7));
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_35 = 2U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_valid) {
        if ((0x23U == (0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                        >> 3U))))) {
            vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_35 
                = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_taken)
                    ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___PHT_T_3)
                    : (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___PHT_T_7));
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_30 = 2U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_valid) {
        if ((0x1eU == (0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                        >> 3U))))) {
            vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_30 
                = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_taken)
                    ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___PHT_T_3)
                    : (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___PHT_T_7));
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_36 = 2U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_valid) {
        if ((0x24U == (0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                        >> 3U))))) {
            vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_36 
                = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_taken)
                    ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___PHT_T_3)
                    : (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___PHT_T_7));
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_28 = 2U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_valid) {
        if ((0x1cU == (0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                        >> 3U))))) {
            vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_28 
                = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_taken)
                    ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___PHT_T_3)
                    : (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___PHT_T_7));
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_27 = 2U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_valid) {
        if ((0x1bU == (0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                        >> 3U))))) {
            vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_27 
                = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_taken)
                    ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___PHT_T_3)
                    : (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___PHT_T_7));
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_31 = 2U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_valid) {
        if ((0x1fU == (0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                        >> 3U))))) {
            vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_31 
                = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_taken)
                    ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___PHT_T_3)
                    : (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___PHT_T_7));
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_32 = 2U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_valid) {
        if ((0x20U == (0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                        >> 3U))))) {
            vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_32 
                = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_taken)
                    ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___PHT_T_3)
                    : (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___PHT_T_7));
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_33 = 2U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_valid) {
        if ((0x21U == (0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                        >> 3U))))) {
            vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_33 
                = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_taken)
                    ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___PHT_T_3)
                    : (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___PHT_T_7));
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_34 = 2U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_valid) {
        if ((0x22U == (0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                        >> 3U))))) {
            vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_34 
                = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_taken)
                    ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___PHT_T_3)
                    : (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___PHT_T_7));
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_37 = 2U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_valid) {
        if ((0x25U == (0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                        >> 3U))))) {
            vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_37 
                = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_taken)
                    ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___PHT_T_3)
                    : (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___PHT_T_7));
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_38 = 2U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_valid) {
        if ((0x26U == (0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                        >> 3U))))) {
            vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_38 
                = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_taken)
                    ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___PHT_T_3)
                    : (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___PHT_T_7));
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_39 = 2U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_valid) {
        if ((0x27U == (0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                        >> 3U))))) {
            vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_39 
                = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_taken)
                    ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___PHT_T_3)
                    : (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___PHT_T_7));
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_18 = 2U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_valid) {
        if ((0x12U == (0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                        >> 3U))))) {
            vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_18 
                = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_taken)
                    ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___PHT_T_3)
                    : (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___PHT_T_7));
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_17 = 2U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_valid) {
        if ((0x11U == (0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                        >> 3U))))) {
            vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_17 
                = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_taken)
                    ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___PHT_T_3)
                    : (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___PHT_T_7));
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_14 = 2U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_valid) {
        if ((0xeU == (0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                       >> 3U))))) {
            vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_14 
                = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_taken)
                    ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___PHT_T_3)
                    : (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___PHT_T_7));
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_21 = 2U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_valid) {
        if ((0x15U == (0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                        >> 3U))))) {
            vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_21 
                = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_taken)
                    ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___PHT_T_3)
                    : (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___PHT_T_7));
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_20 = 2U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_valid) {
        if ((0x14U == (0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                        >> 3U))))) {
            vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_20 
                = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_taken)
                    ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___PHT_T_3)
                    : (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___PHT_T_7));
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_23 = 2U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_valid) {
        if ((0x17U == (0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                        >> 3U))))) {
            vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_23 
                = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_taken)
                    ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___PHT_T_3)
                    : (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___PHT_T_7));
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_16 = 2U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_valid) {
        if ((0x10U == (0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                        >> 3U))))) {
            vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_16 
                = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_taken)
                    ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___PHT_T_3)
                    : (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___PHT_T_7));
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_22 = 2U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_valid) {
        if ((0x16U == (0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                        >> 3U))))) {
            vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_22 
                = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_taken)
                    ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___PHT_T_3)
                    : (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___PHT_T_7));
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_19 = 2U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_valid) {
        if ((0x13U == (0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                        >> 3U))))) {
            vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_19 
                = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_taken)
                    ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___PHT_T_3)
                    : (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___PHT_T_7));
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_15 = 2U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_valid) {
        if ((0xfU == (0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                       >> 3U))))) {
            vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_15 
                = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_taken)
                    ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___PHT_T_3)
                    : (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___PHT_T_7));
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_24 = 2U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_valid) {
        if ((0x18U == (0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                        >> 3U))))) {
            vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_24 
                = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_taken)
                    ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___PHT_T_3)
                    : (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___PHT_T_7));
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_25 = 2U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_valid) {
        if ((0x19U == (0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                        >> 3U))))) {
            vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_25 
                = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_taken)
                    ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___PHT_T_3)
                    : (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___PHT_T_7));
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_26 = 2U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_valid) {
        if ((0x1aU == (0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                        >> 3U))))) {
            vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_26 
                = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_taken)
                    ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___PHT_T_3)
                    : (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___PHT_T_7));
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_13 = 2U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_valid) {
        if ((0xdU == (0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                       >> 3U))))) {
            vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_13 
                = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_taken)
                    ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___PHT_T_3)
                    : (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___PHT_T_7));
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_4 = 2U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_valid) {
        if ((4U == (0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                     >> 3U))))) {
            vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_4 
                = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_taken)
                    ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___PHT_T_3)
                    : (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___PHT_T_7));
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_12 = 2U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_valid) {
        if ((0xcU == (0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                       >> 3U))))) {
            vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_12 
                = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_taken)
                    ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___PHT_T_3)
                    : (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___PHT_T_7));
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_3 = 2U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_valid) {
        if ((3U == (0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                     >> 3U))))) {
            vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_3 
                = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_taken)
                    ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___PHT_T_3)
                    : (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___PHT_T_7));
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_11 = 2U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_valid) {
        if ((0xbU == (0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                       >> 3U))))) {
            vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_11 
                = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_taken)
                    ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___PHT_T_3)
                    : (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___PHT_T_7));
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_5 = 2U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_valid) {
        if ((5U == (0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                     >> 3U))))) {
            vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_5 
                = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_taken)
                    ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___PHT_T_3)
                    : (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___PHT_T_7));
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_6 = 2U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_valid) {
        if ((6U == (0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                     >> 3U))))) {
            vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_6 
                = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_taken)
                    ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___PHT_T_3)
                    : (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___PHT_T_7));
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_2 = 2U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_valid) {
        if ((2U == (0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                     >> 3U))))) {
            vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_2 
                = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_taken)
                    ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___PHT_T_3)
                    : (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___PHT_T_7));
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_10 = 2U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_valid) {
        if ((0xaU == (0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                       >> 3U))))) {
            vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_10 
                = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_taken)
                    ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___PHT_T_3)
                    : (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___PHT_T_7));
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_0 = 2U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_valid) {
        if ((0U == (0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                     >> 3U))))) {
            vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_0 
                = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_taken)
                    ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___PHT_T_3)
                    : (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___PHT_T_7));
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_1 = 2U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_valid) {
        if ((1U == (0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                     >> 3U))))) {
            vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_1 
                = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_taken)
                    ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___PHT_T_3)
                    : (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___PHT_T_7));
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_7 = 2U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_valid) {
        if ((7U == (0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                     >> 3U))))) {
            vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_7 
                = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_taken)
                    ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___PHT_T_3)
                    : (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___PHT_T_7));
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_8 = 2U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_valid) {
        if ((8U == (0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                     >> 3U))))) {
            vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_8 
                = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_taken)
                    ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___PHT_T_3)
                    : (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___PHT_T_7));
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_9 = 2U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_valid) {
        if ((9U == (0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                     >> 3U))))) {
            vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_9 
                = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_taken)
                    ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___PHT_T_3)
                    : (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___PHT_T_7));
        }
    }
    if (((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_valid) 
         & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_mispredict))) {
        __Vtemp1623[0U] = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_next_pc) 
                           << 2U);
        __Vtemp1623[1U] = (((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_next_pc) 
                            >> 0x1eU) | ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_next_pc 
                                                  >> 0x20U)) 
                                         << 2U));
        __Vtemp1623[2U] = (((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                     >> 9U)) << 3U) 
                           | ((4U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                              >> 2U)) 
                                     << 2U)) | ((IData)(
                                                        (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_next_pc 
                                                         >> 0x20U)) 
                                                >> 0x1eU)));
        __Vtemp1623[3U] = (0x4000000U | (((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                                   >> 9U)) 
                                          >> 0x1dU) 
                                         | ((IData)(
                                                    ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                                      >> 9U) 
                                                     >> 0x20U)) 
                                            << 3U)));
        VL_EXTEND_WW(128,123, __Vtemp1624, __Vtemp1623);
        __Vdlyvval__riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB__v0[0U] 
            = __Vtemp1624[0U];
        __Vdlyvval__riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB__v0[1U] 
            = __Vtemp1624[1U];
        __Vdlyvval__riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB__v0[2U] 
            = __Vtemp1624[2U];
        __Vdlyvval__riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB__v0[3U] 
            = __Vtemp1624[3U];
        __Vdlyvset__riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB__v0 = 1U;
        __Vdlyvdim0__riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB__v0 
            = (0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                >> 3U)));
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram0__DOT__Q[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram0__DOT__Q[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram0__DOT__Q[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram0__DOT__Q[3U] = 0U;
        vlSelf->riscv_soc__DOT__sram2__DOT__Q[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram2__DOT__Q[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram2__DOT__Q[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram2__DOT__Q[3U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__Q[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__Q[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__Q[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__Q[3U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__Q[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__Q[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__Q[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__Q[3U] = 0U;
        __Vdly__riscv_soc__DOT__core__DOT__cross_bar__DOT__reg_r_cnt = 0U;
    } else {
        vlSelf->riscv_soc__DOT__sram0__DOT__Q[0U] = 
            ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram0_write)
              ? 0U : ((0x3fU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_data_addr))
                       ? vlSelf->riscv_soc__DOT__sram0__DOT__sram_63[0U]
                       : ((0x3eU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_data_addr))
                           ? vlSelf->riscv_soc__DOT__sram0__DOT__sram_62[0U]
                           : vlSelf->riscv_soc__DOT__sram0__DOT___GEN_61[0U])));
        vlSelf->riscv_soc__DOT__sram0__DOT__Q[1U] = 
            ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram0_write)
              ? 0U : ((0x3fU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_data_addr))
                       ? vlSelf->riscv_soc__DOT__sram0__DOT__sram_63[1U]
                       : ((0x3eU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_data_addr))
                           ? vlSelf->riscv_soc__DOT__sram0__DOT__sram_62[1U]
                           : vlSelf->riscv_soc__DOT__sram0__DOT___GEN_61[1U])));
        vlSelf->riscv_soc__DOT__sram0__DOT__Q[2U] = 
            ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram0_write)
              ? 0U : ((0x3fU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_data_addr))
                       ? vlSelf->riscv_soc__DOT__sram0__DOT__sram_63[2U]
                       : ((0x3eU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_data_addr))
                           ? vlSelf->riscv_soc__DOT__sram0__DOT__sram_62[2U]
                           : vlSelf->riscv_soc__DOT__sram0__DOT___GEN_61[2U])));
        vlSelf->riscv_soc__DOT__sram0__DOT__Q[3U] = 
            ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram0_write)
              ? 0U : ((0x3fU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_data_addr))
                       ? vlSelf->riscv_soc__DOT__sram0__DOT__sram_63[3U]
                       : ((0x3eU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_data_addr))
                           ? vlSelf->riscv_soc__DOT__sram0__DOT__sram_62[3U]
                           : vlSelf->riscv_soc__DOT__sram0__DOT___GEN_61[3U])));
        vlSelf->riscv_soc__DOT__sram2__DOT__Q[0U] = 
            ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram1_write)
              ? 0U : ((0x3fU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_data_addr))
                       ? vlSelf->riscv_soc__DOT__sram2__DOT__sram_63[0U]
                       : ((0x3eU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_data_addr))
                           ? vlSelf->riscv_soc__DOT__sram2__DOT__sram_62[0U]
                           : vlSelf->riscv_soc__DOT__sram2__DOT___GEN_61[0U])));
        vlSelf->riscv_soc__DOT__sram2__DOT__Q[1U] = 
            ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram1_write)
              ? 0U : ((0x3fU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_data_addr))
                       ? vlSelf->riscv_soc__DOT__sram2__DOT__sram_63[1U]
                       : ((0x3eU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_data_addr))
                           ? vlSelf->riscv_soc__DOT__sram2__DOT__sram_62[1U]
                           : vlSelf->riscv_soc__DOT__sram2__DOT___GEN_61[1U])));
        vlSelf->riscv_soc__DOT__sram2__DOT__Q[2U] = 
            ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram1_write)
              ? 0U : ((0x3fU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_data_addr))
                       ? vlSelf->riscv_soc__DOT__sram2__DOT__sram_63[2U]
                       : ((0x3eU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_data_addr))
                           ? vlSelf->riscv_soc__DOT__sram2__DOT__sram_62[2U]
                           : vlSelf->riscv_soc__DOT__sram2__DOT___GEN_61[2U])));
        vlSelf->riscv_soc__DOT__sram2__DOT__Q[3U] = 
            ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram1_write)
              ? 0U : ((0x3fU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_data_addr))
                       ? vlSelf->riscv_soc__DOT__sram2__DOT__sram_63[3U]
                       : ((0x3eU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_data_addr))
                           ? vlSelf->riscv_soc__DOT__sram2__DOT__sram_62[3U]
                           : vlSelf->riscv_soc__DOT__sram2__DOT___GEN_61[3U])));
        vlSelf->riscv_soc__DOT__sram1__DOT__Q[0U] = 
            ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram0_write)
              ? 0U : ((0x3fU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_tag_addr))
                       ? vlSelf->riscv_soc__DOT__sram1__DOT__sram_63[0U]
                       : ((0x3eU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_tag_addr))
                           ? vlSelf->riscv_soc__DOT__sram1__DOT__sram_62[0U]
                           : vlSelf->riscv_soc__DOT__sram1__DOT___GEN_61[0U])));
        vlSelf->riscv_soc__DOT__sram1__DOT__Q[1U] = 
            ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram0_write)
              ? 0U : ((0x3fU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_tag_addr))
                       ? vlSelf->riscv_soc__DOT__sram1__DOT__sram_63[1U]
                       : ((0x3eU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_tag_addr))
                           ? vlSelf->riscv_soc__DOT__sram1__DOT__sram_62[1U]
                           : vlSelf->riscv_soc__DOT__sram1__DOT___GEN_61[1U])));
        vlSelf->riscv_soc__DOT__sram1__DOT__Q[2U] = 
            ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram0_write)
              ? 0U : ((0x3fU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_tag_addr))
                       ? vlSelf->riscv_soc__DOT__sram1__DOT__sram_63[2U]
                       : ((0x3eU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_tag_addr))
                           ? vlSelf->riscv_soc__DOT__sram1__DOT__sram_62[2U]
                           : vlSelf->riscv_soc__DOT__sram1__DOT___GEN_61[2U])));
        vlSelf->riscv_soc__DOT__sram1__DOT__Q[3U] = 
            ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram0_write)
              ? 0U : ((0x3fU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_tag_addr))
                       ? vlSelf->riscv_soc__DOT__sram1__DOT__sram_63[3U]
                       : ((0x3eU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_tag_addr))
                           ? vlSelf->riscv_soc__DOT__sram1__DOT__sram_62[3U]
                           : vlSelf->riscv_soc__DOT__sram1__DOT___GEN_61[3U])));
        vlSelf->riscv_soc__DOT__sram3__DOT__Q[0U] = 
            ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram1_write)
              ? 0U : ((0x3fU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_tag_addr))
                       ? vlSelf->riscv_soc__DOT__sram3__DOT__sram_63[0U]
                       : ((0x3eU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_tag_addr))
                           ? vlSelf->riscv_soc__DOT__sram3__DOT__sram_62[0U]
                           : vlSelf->riscv_soc__DOT__sram3__DOT___GEN_61[0U])));
        vlSelf->riscv_soc__DOT__sram3__DOT__Q[1U] = 
            ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram1_write)
              ? 0U : ((0x3fU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_tag_addr))
                       ? vlSelf->riscv_soc__DOT__sram3__DOT__sram_63[1U]
                       : ((0x3eU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_tag_addr))
                           ? vlSelf->riscv_soc__DOT__sram3__DOT__sram_62[1U]
                           : vlSelf->riscv_soc__DOT__sram3__DOT___GEN_61[1U])));
        vlSelf->riscv_soc__DOT__sram3__DOT__Q[2U] = 
            ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram1_write)
              ? 0U : ((0x3fU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_tag_addr))
                       ? vlSelf->riscv_soc__DOT__sram3__DOT__sram_63[2U]
                       : ((0x3eU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_tag_addr))
                           ? vlSelf->riscv_soc__DOT__sram3__DOT__sram_62[2U]
                           : vlSelf->riscv_soc__DOT__sram3__DOT___GEN_61[2U])));
        vlSelf->riscv_soc__DOT__sram3__DOT__Q[3U] = 
            ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram1_write)
              ? 0U : ((0x3fU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_tag_addr))
                       ? vlSelf->riscv_soc__DOT__sram3__DOT__sram_63[3U]
                       : ((0x3eU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_tag_addr))
                           ? vlSelf->riscv_soc__DOT__sram3__DOT__sram_62[3U]
                           : vlSelf->riscv_soc__DOT__sram3__DOT___GEN_61[3U])));
        __Vdly__riscv_soc__DOT__core__DOT__cross_bar__DOT__reg_r_cnt 
            = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT___T_4)
                ? ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_r_valid)
                    ? ((IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_ICache_bus_r_ready)
                        ? 1U : 2U) : ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_r_valid)
                                       ? ((IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_DCache_bus_r_ready)
                                           ? 1U : 2U)
                                       : (1U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1_io_bus1_valid)
                                                 ? 
                                                (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_bus1_ready))
                                                 : 
                                                (((IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1_io_bus2_valid) 
                                                  & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu_io_bus_bits_is_w))) 
                                                 & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_bus2_ready)))))))
                : (((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__r_lockId)) 
                    & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_r_valid) 
                       & (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_ICache_bus_r_ready)))
                    ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT___reg_r_cnt_T_5)
                    : (((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__r_lockId)) 
                        & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_r_valid) 
                           & (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_DCache_bus_r_ready)))
                        ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT___reg_r_cnt_T_5)
                        : (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT___GEN_23))));
    }
    vlSelf->riscv_soc__DOT__core__DOT__clint_de__DOT__reg_state 
        = vlSelf->__Vdly__riscv_soc__DOT__core__DOT__clint_de__DOT__reg_state;
    vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_is_w 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->riscv_soc__DOT__axi_ram__DOT___GEN_33));
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_raddr = 0ULL;
    } else if (vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_r_state) {
        if (vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_r_state) {
            if (vlSelf->riscv_soc__DOT__axi_ram_io_ram_bus_r_valid) {
                vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_raddr 
                    = vlSelf->riscv_soc__DOT__axi_ram__DOT___GEN_9;
            }
        }
    } else if (vlSelf->riscv_soc__DOT__axi_ram__DOT___T_1) {
        vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_raddr 
            = (8ULL + vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_AXI_Bus_ar_bits_araddr);
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_r_valid = 0U;
    } else if (vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_r_state) {
        if (vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_r_state) {
            if (vlSelf->riscv_soc__DOT__axi_ram_io_ram_bus_r_valid) {
                vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_r_valid 
                    = (0U != (IData)(vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_rlen));
            }
        }
    } else {
        vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_r_valid 
            = vlSelf->riscv_soc__DOT__axi_ram__DOT___GEN_1;
    }
    if (vlSelf->reset) {
        vlSelf->__Vdly__riscv_soc__DOT__axi_ram__DOT__reg_r_state = 0U;
    } else if (vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_r_state) {
        if (vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_r_state) {
            if (vlSelf->riscv_soc__DOT__axi_ram_io_ram_bus_r_valid) {
                vlSelf->__Vdly__riscv_soc__DOT__axi_ram__DOT__reg_r_state 
                    = vlSelf->riscv_soc__DOT__axi_ram__DOT___GEN_7;
            }
        }
    } else {
        vlSelf->__Vdly__riscv_soc__DOT__axi_ram__DOT__reg_r_state 
            = vlSelf->riscv_soc__DOT__axi_ram__DOT___GEN_2;
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_w_addr = 0ULL;
    } else if (vlSelf->riscv_soc__DOT__axi_ram__DOT___T_5) {
        vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_w_addr 
            = ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__w_chosen))
                ? vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_w_waddr
                : ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__w_chosen))
                    ? vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu_io_bus_bits_addr
                    : 0ULL));
    } else if (vlSelf->riscv_soc__DOT__axi_ram__DOT___T_6) {
        vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_w_addr 
            = vlSelf->riscv_soc__DOT__axi_ram__DOT___reg_w_addr_T_1;
    }
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_state 
        = __Vdly__riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_state;
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_dest_is_w 
        = __Vdly__riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_dest_is_w;
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state 
        = __Vdly__riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state;
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_dest_is_w 
        = __Vdly__riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_dest_is_w;
    if (__Vdlyvset__riscv_soc__DOT__core__DOT__commit__DOT__regfile__v0) {
        vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__regfile[__Vdlyvdim0__riscv_soc__DOT__core__DOT__commit__DOT__regfile__v0] 
            = __Vdlyvval__riscv_soc__DOT__core__DOT__commit__DOT__regfile__v0;
    }
    if (__Vdlyvset__riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__RAS__v0) {
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__RAS[__Vdlyvdim0__riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__RAS__v0] 
            = __Vdlyvval__riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__RAS__v0;
    }
    if (__Vdlyvset__riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB__v0) {
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB[__Vdlyvdim0__riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB__v0][0U] 
            = __Vdlyvval__riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB__v0[0U];
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB[__Vdlyvdim0__riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB__v0][1U] 
            = __Vdlyvval__riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB__v0[1U];
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB[__Vdlyvdim0__riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB__v0][2U] 
            = __Vdlyvval__riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB__v0[2U];
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB[__Vdlyvdim0__riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB__v0][3U] 
            = __Vdlyvval__riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB__v0[3U];
    }
    vlSelf->io_difftest_commit = vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__difftest_commit;
    vlSelf->io_difftest_irq = vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__difftest_irq;
    vlSelf->io_inst_counter = vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__inst_counter;
    vlSelf->riscv_soc__DOT__core__DOT__commit__DOT___inst_counter_T_1 
        = (1ULL + vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__inst_counter);
    vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT___reg_mstatus_T_3 
        = ((0xffffffffffffff77ULL & vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__reg_mstatus) 
           | ((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__reg_mstatus 
                             >> 3U))) ? 0x1880ULL : 0x1800ULL));
    vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_ar_ready 
        = ((IData)(vlSelf->reset) | (IData)(vlSelf->riscv_soc__DOT__axi_ram__DOT___GEN_20));
    vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_aw_ready 
        = ((IData)(vlSelf->reset) | (IData)(vlSelf->riscv_soc__DOT__axi_ram__DOT___GEN_34));
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_63[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_63[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_63[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_63[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram0_write) {
        if ((0x3fU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_data_addr))) {
            vlSelf->riscv_soc__DOT__sram4__DOT__sram_63[0U] 
                = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[0U];
            vlSelf->riscv_soc__DOT__sram4__DOT__sram_63[1U] 
                = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[1U];
            vlSelf->riscv_soc__DOT__sram4__DOT__sram_63[2U] 
                = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[2U];
            vlSelf->riscv_soc__DOT__sram4__DOT__sram_63[3U] 
                = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_62[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_62[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_62[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram4__DOT__sram_62[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram0_write) {
        if ((0x3eU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_data_addr))) {
            vlSelf->riscv_soc__DOT__sram4__DOT__sram_62[0U] 
                = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[0U];
            vlSelf->riscv_soc__DOT__sram4__DOT__sram_62[1U] 
                = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[1U];
            vlSelf->riscv_soc__DOT__sram4__DOT__sram_62[2U] 
                = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[2U];
            vlSelf->riscv_soc__DOT__sram4__DOT__sram_62[3U] 
                = vlSelf->riscv_soc__DOT__sram4__DOT___sram_T_3[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_63[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_63[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_63[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_63[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram2_write) {
        if ((0x3fU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_data_addr))) {
            vlSelf->riscv_soc__DOT__sram6__DOT__sram_63[0U] 
                = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[0U];
            vlSelf->riscv_soc__DOT__sram6__DOT__sram_63[1U] 
                = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[1U];
            vlSelf->riscv_soc__DOT__sram6__DOT__sram_63[2U] 
                = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[2U];
            vlSelf->riscv_soc__DOT__sram6__DOT__sram_63[3U] 
                = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_62[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_62[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_62[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram6__DOT__sram_62[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram2_write) {
        if ((0x3eU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_data_addr))) {
            vlSelf->riscv_soc__DOT__sram6__DOT__sram_62[0U] 
                = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[0U];
            vlSelf->riscv_soc__DOT__sram6__DOT__sram_62[1U] 
                = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[1U];
            vlSelf->riscv_soc__DOT__sram6__DOT__sram_62[2U] 
                = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[2U];
            vlSelf->riscv_soc__DOT__sram6__DOT__sram_62[3U] 
                = vlSelf->riscv_soc__DOT__sram6__DOT___sram_T_3[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_sram0_valid = 0ULL;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__execute_io_fence_i) {
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_sram0_valid = 0ULL;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram0_write) {
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_sram0_valid 
            = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___reg_sram0_valid_T;
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_sram1_valid = 0ULL;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__execute_io_fence_i) {
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_sram1_valid = 0ULL;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram1_write) {
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_sram1_valid 
            = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___reg_sram1_valid_T;
    }
    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT___pre_info_tail_T_1 
        = (3U & ((IData)(1U) + (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__pre_info_tail)));
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__is_pre_head = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__fetch_io_out_flush) {
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__is_pre_head = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT___pre_enq_T) {
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__is_pre_head 
            = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT___is_pre_head_T_1;
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__pre_info_head = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__fetch_io_out_flush) {
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__pre_info_head = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__pre_enq) {
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__pre_info_head 
            = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT___pre_info_head_T_1;
    }
    vlSelf->riscv_soc__DOT__core__DOT__clint_de__DOT__reg_mtime 
        = ((IData)(vlSelf->reset) ? 0ULL : vlSelf->riscv_soc__DOT__core__DOT__clint_de__DOT___reg_mtime_T_1);
    vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_r_state 
        = vlSelf->__Vdly__riscv_soc__DOT__axi_ram__DOT__reg_r_state;
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_63[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_63[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_63[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_63[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram0_write) {
        if ((0x3fU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp1657, vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag);
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_63[0U] 
                = __Vtemp1657[0U];
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_63[1U] 
                = __Vtemp1657[1U];
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_63[2U] 
                = __Vtemp1657[2U];
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_63[3U] 
                = __Vtemp1657[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_62[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_62[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_62[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_62[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram0_write) {
        if ((0x3eU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp1658, vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag);
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_62[0U] 
                = __Vtemp1658[0U];
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_62[1U] 
                = __Vtemp1658[1U];
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_62[2U] 
                = __Vtemp1658[2U];
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_62[3U] 
                = __Vtemp1658[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_63[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_63[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_63[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_63[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram2_write) {
        if ((0x3fU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp1659, vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag);
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_63[0U] 
                = __Vtemp1659[0U];
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_63[1U] 
                = __Vtemp1659[1U];
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_63[2U] 
                = __Vtemp1659[2U];
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_63[3U] 
                = __Vtemp1659[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_62[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_62[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_62[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_62[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram2_write) {
        if ((0x3eU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp1660, vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag);
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_62[0U] 
                = __Vtemp1660[0U];
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_62[1U] 
                = __Vtemp1660[1U];
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_62[2U] 
                = __Vtemp1660[2U];
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_62[3U] 
                = __Vtemp1660[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__w_locked = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT___T) {
        vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__w_locked 
            = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_w_valid) 
               | (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT___T_1));
    } else if (vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_b_valid) {
        vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__w_locked = 0U;
    }
    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT___is_pre_tail_T_1 
        = (3U & ((IData)(1U) + (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__is_pre_tail)));
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_exception 
        = ((IData)(vlSelf->reset) ? 0U : ((0U == (0x1fU 
                                                  & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                                     >> 2U)))
                                           ? 0xbU : 
                                          ((8U == (0x1fU 
                                                   & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                                      >> 2U)))
                                            ? 3U : 0U)));
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT___reg_cnt_T_1 
        = (0x7fU & ((IData)(1U) + (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_cnt)));
    __Vtemp1663[0U] = ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[1U] 
                        << 0x1eU) | (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[0U] 
                                     >> 2U));
    __Vtemp1663[1U] = ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[2U] 
                        << 0x1eU) | (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[1U] 
                                     >> 2U));
    __Vtemp1663[2U] = (1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[2U] 
                             >> 2U));
    VL_EXTEND_WW(67,65, __Vtemp1664, __Vtemp1663);
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT___reg_temp_mul2_T[0U] 
        = __Vtemp1664[0U];
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT___reg_temp_mul2_T[1U] 
        = __Vtemp1664[1U];
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT___reg_temp_mul2_T[2U] 
        = __Vtemp1664[2U];
    VL_EXTEND_WW(131,130, __Vtemp1666, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_result);
    __Vtemp1668[0U] = 1U;
    __Vtemp1668[1U] = 0U;
    __Vtemp1668[2U] = 0U;
    __Vtemp1668[3U] = 0U;
    __Vtemp1668[4U] = 0U;
    __Vtemp1669[0U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[0U]);
    __Vtemp1669[1U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[1U]);
    __Vtemp1669[2U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[2U]);
    __Vtemp1669[3U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[3U]);
    __Vtemp1669[4U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[4U]);
    VL_ADD_W(5, __Vtemp1670, __Vtemp1668, __Vtemp1669);
    __Vtemp1671[0U] = __Vtemp1670[0U];
    __Vtemp1671[1U] = __Vtemp1670[1U];
    __Vtemp1671[2U] = __Vtemp1670[2U];
    __Vtemp1671[3U] = __Vtemp1670[3U];
    __Vtemp1671[4U] = (3U & __Vtemp1670[4U]);
    VL_EXTEND_WW(131,130, __Vtemp1672, __Vtemp1671);
    __Vtemp1674[0U] = 1U;
    __Vtemp1674[1U] = 0U;
    __Vtemp1674[2U] = 0U;
    __Vtemp1674[3U] = 0U;
    __Vtemp1674[4U] = 0U;
    __Vtemp1675[0U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[0U]);
    __Vtemp1675[1U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[1U]);
    __Vtemp1675[2U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[2U]);
    __Vtemp1675[3U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[3U]);
    __Vtemp1675[4U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[4U]);
    VL_ADD_W(5, __Vtemp1676, __Vtemp1674, __Vtemp1675);
    __Vtemp1677[0U] = __Vtemp1676[0U];
    __Vtemp1677[1U] = __Vtemp1676[1U];
    __Vtemp1677[2U] = __Vtemp1676[2U];
    __Vtemp1677[3U] = __Vtemp1676[3U];
    __Vtemp1677[4U] = (3U & __Vtemp1676[4U]);
    VL_EXTEND_WW(131,130, __Vtemp1678, __Vtemp1677);
    __Vtemp1680[0U] = 1U;
    __Vtemp1680[1U] = 0U;
    __Vtemp1680[2U] = 0U;
    __Vtemp1680[3U] = 0U;
    __Vtemp1680[4U] = 0U;
    __Vtemp1681[0U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[0U]);
    __Vtemp1681[1U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[1U]);
    __Vtemp1681[2U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[2U]);
    __Vtemp1681[3U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[3U]);
    __Vtemp1681[4U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[4U]);
    VL_ADD_W(5, __Vtemp1682, __Vtemp1680, __Vtemp1681);
    if ((2U == (7U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[0U]))) {
        __Vtemp1690[0U] = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[0U];
        __Vtemp1690[1U] = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[1U];
        __Vtemp1690[2U] = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[2U];
        __Vtemp1690[3U] = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[3U];
        __Vtemp1690[4U] = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[4U];
    } else {
        __Vtemp1690[0U] = ((1U == (7U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[0U]))
                            ? vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[0U]
                            : 0U);
        __Vtemp1690[1U] = ((1U == (7U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[0U]))
                            ? vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[1U]
                            : 0U);
        __Vtemp1690[2U] = ((1U == (7U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[0U]))
                            ? vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[2U]
                            : 0U);
        __Vtemp1690[3U] = ((1U == (7U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[0U]))
                            ? vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[3U]
                            : 0U);
        __Vtemp1690[4U] = ((1U == (7U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[0U]))
                            ? vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[4U]
                            : 0U);
    }
    VL_EXTEND_WW(131,130, __Vtemp1691, __Vtemp1690);
    if ((6U == (7U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[0U]))) {
        __Vtemp1699[0U] = __Vtemp1672[0U];
        __Vtemp1699[1U] = __Vtemp1672[1U];
        __Vtemp1699[2U] = __Vtemp1672[2U];
        __Vtemp1699[3U] = __Vtemp1672[3U];
        __Vtemp1699[4U] = __Vtemp1672[4U];
    } else {
        __Vtemp1699[0U] = ((5U == (7U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[0U]))
                            ? __Vtemp1678[0U] : ((4U 
                                                  == 
                                                  (7U 
                                                   & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[0U]))
                                                  ? 
                                                 (__Vtemp1682[0U] 
                                                  << 1U)
                                                  : 
                                                 ((3U 
                                                   == 
                                                   (7U 
                                                    & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[0U]))
                                                   ? 
                                                  (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[0U] 
                                                   << 1U)
                                                   : 
                                                  __Vtemp1691[0U])));
        __Vtemp1699[1U] = ((5U == (7U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[0U]))
                            ? __Vtemp1678[1U] : ((4U 
                                                  == 
                                                  (7U 
                                                   & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[0U]))
                                                  ? 
                                                 ((__Vtemp1682[0U] 
                                                   >> 0x1fU) 
                                                  | (__Vtemp1682[1U] 
                                                     << 1U))
                                                  : 
                                                 ((3U 
                                                   == 
                                                   (7U 
                                                    & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[0U]))
                                                   ? 
                                                  ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[0U] 
                                                    >> 0x1fU) 
                                                   | (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[1U] 
                                                      << 1U))
                                                   : 
                                                  __Vtemp1691[1U])));
        __Vtemp1699[2U] = ((5U == (7U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[0U]))
                            ? __Vtemp1678[2U] : ((4U 
                                                  == 
                                                  (7U 
                                                   & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[0U]))
                                                  ? 
                                                 ((__Vtemp1682[1U] 
                                                   >> 0x1fU) 
                                                  | (__Vtemp1682[2U] 
                                                     << 1U))
                                                  : 
                                                 ((3U 
                                                   == 
                                                   (7U 
                                                    & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[0U]))
                                                   ? 
                                                  ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[1U] 
                                                    >> 0x1fU) 
                                                   | (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[2U] 
                                                      << 1U))
                                                   : 
                                                  __Vtemp1691[2U])));
        __Vtemp1699[3U] = ((5U == (7U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[0U]))
                            ? __Vtemp1678[3U] : ((4U 
                                                  == 
                                                  (7U 
                                                   & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[0U]))
                                                  ? 
                                                 ((__Vtemp1682[2U] 
                                                   >> 0x1fU) 
                                                  | (__Vtemp1682[3U] 
                                                     << 1U))
                                                  : 
                                                 ((3U 
                                                   == 
                                                   (7U 
                                                    & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[0U]))
                                                   ? 
                                                  ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[2U] 
                                                    >> 0x1fU) 
                                                   | (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[3U] 
                                                      << 1U))
                                                   : 
                                                  __Vtemp1691[3U])));
        __Vtemp1699[4U] = ((5U == (7U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[0U]))
                            ? __Vtemp1678[4U] : ((4U 
                                                  == 
                                                  (7U 
                                                   & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[0U]))
                                                  ? 
                                                 ((__Vtemp1682[3U] 
                                                   >> 0x1fU) 
                                                  | (6U 
                                                     & (__Vtemp1682[4U] 
                                                        << 1U)))
                                                  : 
                                                 ((3U 
                                                   == 
                                                   (7U 
                                                    & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[0U]))
                                                   ? 
                                                  ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[3U] 
                                                    >> 0x1fU) 
                                                   | (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[4U] 
                                                      << 1U))
                                                   : 
                                                  __Vtemp1691[4U])));
    }
    VL_ADD_W(5, __Vtemp1700, __Vtemp1666, __Vtemp1699);
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT___reg_result_T_1[0U] 
        = __Vtemp1700[0U];
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT___reg_result_T_1[1U] 
        = __Vtemp1700[1U];
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT___reg_result_T_1[2U] 
        = __Vtemp1700[2U];
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT___reg_result_T_1[3U] 
        = __Vtemp1700[3U];
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT___reg_result_T_1[4U] 
        = (7U & __Vtemp1700[4U]);
    vlSelf->io_difftest_peripheral = vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__difftest_peripheral;
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_bus_addr = 0ULL;
    } else if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_ls_state)))) {
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_bus_addr 
            = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu_io_valid)
                ? vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__mem_addr
                : 0ULL);
    }
    if (vlSelf->reset) {
        __Vdly__riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_bus_is_w = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_ls_state) {
        if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_ls_state) {
            if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT___T_2) {
                __Vdly__riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_bus_is_w = 0U;
            }
        }
    } else {
        __Vdly__riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_bus_is_w 
            = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu_io_valid) 
               & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__w_mem_en));
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_bus_valid = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_ls_state) {
        if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_ls_state) {
            if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT___T_2) {
                vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_bus_valid = 0U;
            }
        }
    } else {
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_bus_valid 
            = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu_io_valid;
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_result_data = 0ULL;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_ls_state) {
        if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_ls_state) {
            if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT___T_2) {
                vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_result_data 
                    = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__mem_data_result;
            }
        }
    } else {
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_result_data = 0ULL;
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_w_rs_en = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_ls_state) {
        if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_ls_state) {
            if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT___T_2) {
                vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_w_rs_en 
                    = (1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_bus_is_w)));
            }
        }
    } else {
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_w_rs_en = 0U;
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_exuType = 0U;
    } else if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_ls_state)))) {
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_exuType 
            = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu_io_valid)
                ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType)
                : 0U);
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_difftest_peripheral = 0U;
    } else if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_ls_state)))) {
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_difftest_peripheral 
            = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu_io_valid) 
               & (0ULL == (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__mem_addr 
                           >> 0x1fU)));
    }
    if (vlSelf->reset) {
        __Vdly__riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_ls_state = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_ls_state) {
        if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_ls_state) {
            if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT___T_2) {
                __Vdly__riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_ls_state = 0U;
            }
        }
    } else {
        __Vdly__riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_ls_state 
            = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu_io_valid;
    }
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT___reg_cnt_T_1 
        = (0x7fU & ((IData)(1U) + (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_cnt)));
    if ((3U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state))) {
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT___GEN_21 = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT___GEN_22 = 0U;
    } else {
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT___GEN_21 
            = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state;
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT___GEN_22 
            = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_cnt;
    }
    __Vtemp1704[0U] = (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_q[0U] 
                       << 1U);
    __Vtemp1704[1U] = ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_q[0U] 
                        >> 0x1fU) | (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_q[1U] 
                                     << 1U));
    __Vtemp1704[2U] = ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[0U] 
                        << 3U) | ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_q[1U] 
                                   >> 0x1fU) | (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_q[2U] 
                                                << 1U)));
    __Vtemp1704[3U] = ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[0U] 
                        >> 0x1dU) | (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[1U] 
                                     << 3U));
    __Vtemp1704[4U] = ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[1U] 
                        >> 0x1dU) | (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[2U] 
                                     << 3U));
    __Vtemp1708[0U] = 1U;
    __Vtemp1708[1U] = 0U;
    __Vtemp1708[2U] = 0U;
    __Vtemp1709[0U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[0U]);
    __Vtemp1709[1U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[1U]);
    __Vtemp1709[2U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[2U]);
    VL_ADD_W(3, __Vtemp1710, __Vtemp1708, __Vtemp1709);
    __Vtemp1715[0U] = ((1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[2U] 
                              ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[2U]))
                        ? 0U : 1U);
    __Vtemp1715[1U] = 0U;
    if ((1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[2U] 
               ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[2U]))) {
        __Vtemp1715[2U] = (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[0U] 
                           << 2U);
        __Vtemp1715[3U] = ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[0U] 
                            >> 0x1eU) | (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[1U] 
                                         << 2U));
        __Vtemp1715[4U] = ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[1U] 
                            >> 0x1eU) | (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[2U] 
                                         << 2U));
    } else {
        __Vtemp1715[2U] = (__Vtemp1710[0U] << 2U);
        __Vtemp1715[3U] = ((__Vtemp1710[0U] >> 0x1eU) 
                           | (__Vtemp1710[1U] << 2U));
        __Vtemp1715[4U] = ((__Vtemp1710[1U] >> 0x1eU) 
                           | (4U & (__Vtemp1710[2U] 
                                    << 2U)));
    }
    VL_EXTEND_WW(132,131, __Vtemp1716, __Vtemp1715);
    VL_ADD_W(5, __Vtemp1717, __Vtemp1704, __Vtemp1716);
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__temp_result[0U] 
        = __Vtemp1717[0U];
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__temp_result[1U] 
        = __Vtemp1717[1U];
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__temp_result[2U] 
        = __Vtemp1717[2U];
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__temp_result[3U] 
        = __Vtemp1717[3U];
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__temp_result[4U] 
        = (0xfU & __Vtemp1717[4U]);
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT___temp_result_T_4 
        = (1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[2U] 
                 ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[2U]));
    __Vtemp1721[0U] = 1U;
    __Vtemp1721[1U] = 0U;
    __Vtemp1721[2U] = 0U;
    __Vtemp1722[0U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[0U]);
    __Vtemp1722[1U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[1U]);
    __Vtemp1722[2U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[2U]);
    VL_ADD_W(3, __Vtemp1723, __Vtemp1721, __Vtemp1722);
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__is_need_correct 
        = ((((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[2U] 
              ^ (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_dividend[2U] 
                 >> 1U)) & (0U != ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[0U] 
                                    | vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[1U]) 
                                   | vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[2U]))) 
            | (0U == (((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[0U] 
                        ^ __Vtemp1723[0U]) | (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[1U] 
                                              ^ __Vtemp1723[1U])) 
                      | (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[2U] 
                         ^ (1U & __Vtemp1723[2U]))))) 
           | (0U == (((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[0U] 
                       ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[0U]) 
                      | (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[1U] 
                         ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[1U])) 
                     | (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[2U] 
                        ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[2U]))));
    vlSelf->io_difftest_inst = vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__difftest_inst;
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_difftest_inst = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__ready) {
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_difftest_inst 
            = vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_inst;
    }
    vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT___reg_mcycle_T_2 
        = (1ULL + vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__reg_mcycle);
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_valid_3 = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__execute_io_flush) {
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_valid_3 = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__enq_size) {
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_valid_3 
            = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT___GEN_28;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__can_deq) {
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_valid_3 
            = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT___GEN_7;
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_dest_is_reg = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__ready) {
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_dest_is_reg 
            = ((0x33U == (0xfe00707fU & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst)) 
               | ((0x13U == (0x707fU & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst)) 
                  | ((0x1bU == (0x707fU & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst)) 
                     | ((0x3bU == (0xfe00707fU & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst)) 
                        | ((0x7033U == (0xfe00707fU 
                                        & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst)) 
                           | ((0x7013U == (0x707fU 
                                           & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst)) 
                              | ((0x17U == (0x7fU & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst)) 
                                 | ((0x63U != (0x707fU 
                                               & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst)) 
                                    & ((0x5063U != 
                                        (0x707fU & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst)) 
                                       & ((0x7063U 
                                           != (0x707fU 
                                               & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst)) 
                                          & ((0x4063U 
                                              != (0x707fU 
                                                  & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst)) 
                                             & ((0x6063U 
                                                 != 
                                                 (0x707fU 
                                                  & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst)) 
                                                & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT___T_434)))))))))))));
    }
    vlSelf->io_difftest_reg_1 = vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__regfile
        [1U];
    vlSelf->io_difftest_reg_2 = vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__regfile
        [2U];
    vlSelf->io_difftest_reg_3 = vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__regfile
        [3U];
    vlSelf->io_difftest_reg_4 = vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__regfile
        [4U];
    vlSelf->io_difftest_reg_5 = vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__regfile
        [5U];
    vlSelf->io_difftest_reg_6 = vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__regfile
        [6U];
    vlSelf->io_difftest_reg_7 = vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__regfile
        [7U];
    vlSelf->io_difftest_reg_8 = vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__regfile
        [8U];
    vlSelf->io_difftest_reg_9 = vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__regfile
        [9U];
    vlSelf->io_difftest_reg_10 = vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__regfile
        [0xaU];
    vlSelf->io_difftest_reg_11 = vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__regfile
        [0xbU];
    vlSelf->io_difftest_reg_12 = vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__regfile
        [0xcU];
    vlSelf->io_difftest_reg_13 = vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__regfile
        [0xdU];
    vlSelf->io_difftest_reg_14 = vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__regfile
        [0xeU];
    vlSelf->io_difftest_reg_15 = vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__regfile
        [0xfU];
    vlSelf->io_difftest_reg_16 = vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__regfile
        [0x10U];
    vlSelf->io_difftest_reg_17 = vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__regfile
        [0x11U];
    vlSelf->io_difftest_reg_18 = vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__regfile
        [0x12U];
    vlSelf->io_difftest_reg_19 = vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__regfile
        [0x13U];
    vlSelf->io_difftest_reg_20 = vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__regfile
        [0x14U];
    vlSelf->io_difftest_reg_21 = vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__regfile
        [0x15U];
    vlSelf->io_difftest_reg_22 = vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__regfile
        [0x16U];
    vlSelf->io_difftest_reg_23 = vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__regfile
        [0x17U];
    vlSelf->io_difftest_reg_24 = vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__regfile
        [0x18U];
    vlSelf->io_difftest_reg_25 = vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__regfile
        [0x19U];
    vlSelf->io_difftest_reg_26 = vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__regfile
        [0x1aU];
    vlSelf->io_difftest_reg_27 = vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__regfile
        [0x1bU];
    vlSelf->io_difftest_reg_28 = vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__regfile
        [0x1cU];
    vlSelf->io_difftest_reg_29 = vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__regfile
        [0x1dU];
    vlSelf->io_difftest_reg_30 = vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__regfile
        [0x1eU];
    vlSelf->io_difftest_reg_31 = vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__regfile
        [0x1fU];
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_dest_addr = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__ready) {
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_dest_addr 
            = vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_dest_addr;
    }
    vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__reg_minstret 
        = ((IData)(vlSelf->reset) ? 0ULL : ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute_io_csr_valid)
                                             ? ((0xb02U 
                                                 == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_csr_addr))
                                                 ? vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_csr_data
                                                 : vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT___reg_minstret_T_3)
                                             : vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT___reg_minstret_T_3));
    vlSelf->io_difftest_pc = vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__difftest_pc;
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu_io_ready 
        = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_ready) 
           & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_ready));
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_except_next_pc = 0ULL;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__ready) {
        if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu_io_valid_next_pc) {
            vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_except_next_pc 
                = vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg_io_r_csr_mepc;
        } else if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu_io_valid_next_pc) {
            vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_except_next_pc 
                = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu_io_next_pc;
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_except_pc = 0ULL;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__ready) {
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_except_pc 
            = vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_pc;
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__reg_head = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__pre_valid) {
        if ((2U == (3U & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_btb_data_data[0U]))) {
            vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__reg_head 
                = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___reg_head_T_1;
        } else if ((1U == (3U & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_btb_data_data[0U]))) {
            vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__reg_head 
                = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___reg_head_T_3;
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage0__DOT__reg_valid = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1_io_cpu_addr_ready) {
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage0__DOT__reg_valid 
            = (((0ULL != (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0 
                          >> 0x1fU)) & (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_bus_valid)) 
               & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch_io_out_flush)));
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_taken = 0U;
    } else if (((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu_io_valid) 
                & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__ready))) {
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_taken 
            = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__br_valid) 
               & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[2U]);
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_mispredict = 0U;
    } else if (((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu_io_valid) 
                & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__ready))) {
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_mispredict 
            = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__br_valid) 
               & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__flush));
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_next_pc = 0ULL;
    } else if (((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu_io_valid) 
                & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__ready))) {
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_next_pc 
            = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__br_valid)
                ? (((QData)((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[1U])) 
                    << 0x20U) | (QData)((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[0U])))
                : 0ULL);
    }
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_valid 
        = ((~ (IData)(vlSelf->reset)) & (((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu_io_valid) 
                                          & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__ready)) 
                                         & ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_opType)) 
                                            & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu_io_valid))));
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc = 0ULL;
    } else if (((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu_io_valid) 
                & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__ready))) {
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
            = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__br_valid)
                ? vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_pc
                : 0ULL);
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_63[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_63[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_63[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_63[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram0_write) {
        if ((0x3fU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_data_addr))) {
            vlSelf->riscv_soc__DOT__sram0__DOT__sram_63[0U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[0U];
            vlSelf->riscv_soc__DOT__sram0__DOT__sram_63[1U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[1U];
            vlSelf->riscv_soc__DOT__sram0__DOT__sram_63[2U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[2U];
            vlSelf->riscv_soc__DOT__sram0__DOT__sram_63[3U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_62[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_62[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_62[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram0__DOT__sram_62[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram0_write) {
        if ((0x3eU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_data_addr))) {
            vlSelf->riscv_soc__DOT__sram0__DOT__sram_62[0U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[0U];
            vlSelf->riscv_soc__DOT__sram0__DOT__sram_62[1U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[1U];
            vlSelf->riscv_soc__DOT__sram0__DOT__sram_62[2U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[2U];
            vlSelf->riscv_soc__DOT__sram0__DOT__sram_62[3U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_63[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_63[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_63[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_63[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram1_write) {
        if ((0x3fU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_data_addr))) {
            vlSelf->riscv_soc__DOT__sram2__DOT__sram_63[0U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[0U];
            vlSelf->riscv_soc__DOT__sram2__DOT__sram_63[1U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[1U];
            vlSelf->riscv_soc__DOT__sram2__DOT__sram_63[2U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[2U];
            vlSelf->riscv_soc__DOT__sram2__DOT__sram_63[3U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_62[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_62[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_62[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram2__DOT__sram_62[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram1_write) {
        if ((0x3eU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_data_addr))) {
            vlSelf->riscv_soc__DOT__sram2__DOT__sram_62[0U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[0U];
            vlSelf->riscv_soc__DOT__sram2__DOT__sram_62[1U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[1U];
            vlSelf->riscv_soc__DOT__sram2__DOT__sram_62[2U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[2U];
            vlSelf->riscv_soc__DOT__sram2__DOT__sram_62[3U] 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_63[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_63[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_63[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_63[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram0_write) {
        if ((0x3fU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp1725, (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                               >> 0xaU));
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_63[0U] 
                = __Vtemp1725[0U];
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_63[1U] 
                = __Vtemp1725[1U];
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_63[2U] 
                = __Vtemp1725[2U];
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_63[3U] 
                = __Vtemp1725[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_62[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_62[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_62[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_62[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram0_write) {
        if ((0x3eU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp1726, (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                               >> 0xaU));
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_62[0U] 
                = __Vtemp1726[0U];
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_62[1U] 
                = __Vtemp1726[1U];
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_62[2U] 
                = __Vtemp1726[2U];
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_62[3U] 
                = __Vtemp1726[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_63[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_63[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_63[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_63[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram1_write) {
        if ((0x3fU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp1727, (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                               >> 0xaU));
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_63[0U] 
                = __Vtemp1727[0U];
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_63[1U] 
                = __Vtemp1727[1U];
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_63[2U] 
                = __Vtemp1727[2U];
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_63[3U] 
                = __Vtemp1727[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_62[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_62[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_62[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_62[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram1_write) {
        if ((0x3eU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp1728, (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                               >> 0xaU));
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_62[0U] 
                = __Vtemp1728[0U];
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_62[1U] 
                = __Vtemp1728[1U];
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_62[2U] 
                = __Vtemp1728[2U];
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_62[3U] 
                = __Vtemp1728[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__r_lockId = 0U;
    } else if ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__reg_r_cnt))) {
        vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__r_lockId 
            = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_r_valid)
                ? 0U : ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_r_valid)
                         ? 1U : (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT___GEN_10)));
    }
    vlSelf->riscv_soc__DOT__axi_ram_io_ram_bus_r_valid 
        = vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_r_valid;
    vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_rlen 
        = (0xfU & (IData)(vlSelf->riscv_soc__DOT__axi_ram__DOT___GEN_39));
    vlSelf->riscv_soc__DOT__axi_ram__DOT___reg_w_addr_T_1 
        = (8ULL + vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_w_addr);
    vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_w_waddr 
        = (((QData)((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_167[1U])) 
            << 0x20U) | (QData)((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_167[0U])));
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_bus_is_w 
        = __Vdly__riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_bus_is_w;
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_ls_state 
        = __Vdly__riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_ls_state;
    VL_ADD_W(3, __Vtemp1730, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor);
    __Vtemp1731[0U] = 1U;
    __Vtemp1731[1U] = 0U;
    __Vtemp1731[2U] = 0U;
    __Vtemp1732[0U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[0U]);
    __Vtemp1732[1U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[1U]);
    __Vtemp1732[2U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[2U]);
    VL_ADD_W(3, __Vtemp1733, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem, __Vtemp1732);
    VL_ADD_W(3, __Vtemp1734, __Vtemp1731, __Vtemp1733);
    if ((3U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state))) {
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT___GEN_18[0U] 
            = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__is_need_correct)
                ? ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT___temp_result_T_4)
                    ? __Vtemp1730[0U] : __Vtemp1734[0U])
                : vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[0U]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT___GEN_18[1U] 
            = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__is_need_correct)
                ? ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT___temp_result_T_4)
                    ? __Vtemp1730[1U] : __Vtemp1734[1U])
                : vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[1U]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT___GEN_18[2U] 
            = (1U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__is_need_correct)
                      ? ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT___temp_result_T_4)
                          ? __Vtemp1730[2U] : __Vtemp1734[2U])
                      : vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[2U]));
    } else {
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT___GEN_18[0U] 
            = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[0U];
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT___GEN_18[1U] 
            = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[1U];
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT___GEN_18[2U] 
            = (1U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[2U]);
    }
    vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__reg_r_cnt 
        = __Vdly__riscv_soc__DOT__core__DOT__cross_bar__DOT__reg_r_cnt;
    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT___is_pre_head_T_1 
        = (3U & ((IData)(1U) + (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__is_pre_head)));
    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT___pre_info_head_T_1 
        = (3U & ((IData)(1U) + (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__pre_info_head)));
    vlSelf->riscv_soc__DOT__core__DOT__clint_de__DOT___reg_mtime_T_1 
        = (1ULL + vlSelf->riscv_soc__DOT__core__DOT__clint_de__DOT__reg_mtime);
    vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_b_valid 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_AXI_Bus_w_bits_wlast));
    vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT___T 
        = (1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__w_locked)));
    vlSelf->riscv_soc__DOT__core__DOT__execute_io_wb_dest_data 
        = ((IData)((0U != (9U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_valid))))
            ? vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_sys_alu_wdata
            : ((2U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_valid))
                ? vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_result_data
                : ((4U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_valid))
                    ? ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_dest_is_w)
                        ? ((8U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_exuType))
                            ? ((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_exuType))
                                ? (((QData)((IData)(
                                                    ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[0U] 
                                                      >> 0x1fU)
                                                      ? 0xffffffffU
                                                      : 0U))) 
                                    << 0x20U) | (QData)((IData)(
                                                                vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[0U])))
                                : (((QData)((IData)(
                                                    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[1U])) 
                                    << 0x20U) | (QData)((IData)(
                                                                vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[0U]))))
                            : ((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_exuType))
                                ? (((QData)((IData)(
                                                    ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_q[0U] 
                                                      >> 0x1fU)
                                                      ? 0xffffffffU
                                                      : 0U))) 
                                    << 0x20U) | (QData)((IData)(
                                                                vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_q[0U])))
                                : (((QData)((IData)(
                                                    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_q[1U])) 
                                    << 0x20U) | (QData)((IData)(
                                                                vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_q[0U])))))
                        : ((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_exuType))
                            ? (((QData)((IData)(((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_result[0U] 
                                                  >> 0x1fU)
                                                  ? 0xffffffffU
                                                  : 0U))) 
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
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_inst = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__ready) {
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_inst 
            = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst;
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_dest_addr = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__ready) {
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_dest_addr 
            = (0x1fU & (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst 
                        >> 7U));
    }
    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___reg_head_T_1 
        = (7U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__reg_head) 
                 - (IData)(1U)));
    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___reg_head_T_3 
        = (7U & ((IData)(1U) + (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__reg_head)));
    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_bus_valid 
        = ((IData)(vlSelf->reset) | (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT___GEN_43));
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_opType = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__ready) {
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_opType 
            = ((0x33U == (0xfe00707fU & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst))
                ? 2U : ((0x13U == (0x707fU & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst))
                         ? 2U : ((0x1bU == (0x707fU 
                                            & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst))
                                  ? 2U : ((0x3bU == 
                                           (0xfe00707fU 
                                            & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst))
                                           ? 2U : (
                                                   (0x7033U 
                                                    == 
                                                    (0xfe00707fU 
                                                     & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst))
                                                    ? 2U
                                                    : 
                                                   ((0x7013U 
                                                     == 
                                                     (0x707fU 
                                                      & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst))
                                                     ? 2U
                                                     : 
                                                    ((0x17U 
                                                      == 
                                                      (0x7fU 
                                                       & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst))
                                                      ? 2U
                                                      : 
                                                     ((0x63U 
                                                       == 
                                                       (0x707fU 
                                                        & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst))
                                                       ? 1U
                                                       : 
                                                      ((0x5063U 
                                                        == 
                                                        (0x707fU 
                                                         & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst))
                                                        ? 1U
                                                        : 
                                                       ((0x7063U 
                                                         == 
                                                         (0x707fU 
                                                          & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst))
                                                         ? 1U
                                                         : 
                                                        ((0x4063U 
                                                          == 
                                                          (0x707fU 
                                                           & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst))
                                                          ? 1U
                                                          : 
                                                         ((0x6063U 
                                                           == 
                                                           (0x707fU 
                                                            & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst))
                                                           ? 1U
                                                           : 
                                                          ((0x1063U 
                                                            == 
                                                            (0x707fU 
                                                             & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst))
                                                            ? 1U
                                                            : 
                                                           ((0x3073U 
                                                             == 
                                                             (0x707fU 
                                                              & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst))
                                                             ? 4U
                                                             : (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT___T_210)))))))))))))));
    }
    riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___GEN_13 
        = ((0xdU == (0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                      >> 3U)))) ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_13)
            : ((0xcU == (0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                          >> 3U))))
                ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_12)
                : ((0xbU == (0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                              >> 3U))))
                    ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_11)
                    : ((0xaU == (0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                                  >> 3U))))
                        ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_10)
                        : ((9U == (0x3fU & (IData)(
                                                   (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                                    >> 3U))))
                            ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_9)
                            : ((8U == (0x3fU & (IData)(
                                                       (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                                        >> 3U))))
                                ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_8)
                                : ((7U == (0x3fU & (IData)(
                                                           (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                                            >> 3U))))
                                    ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_7)
                                    : ((6U == (0x3fU 
                                               & (IData)(
                                                         (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                                          >> 3U))))
                                        ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_6)
                                        : ((5U == (0x3fU 
                                                   & (IData)(
                                                             (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                                              >> 3U))))
                                            ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_5)
                                            : ((4U 
                                                == 
                                                (0x3fU 
                                                 & (IData)(
                                                           (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                                            >> 3U))))
                                                ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_4)
                                                : (
                                                   (3U 
                                                    == 
                                                    (0x3fU 
                                                     & (IData)(
                                                               (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                                                >> 3U))))
                                                    ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_3)
                                                    : 
                                                   ((2U 
                                                     == 
                                                     (0x3fU 
                                                      & (IData)(
                                                                (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                                                 >> 3U))))
                                                     ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_2)
                                                     : 
                                                    ((1U 
                                                      == 
                                                      (0x3fU 
                                                       & (IData)(
                                                                 (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                                                  >> 3U))))
                                                      ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_1)
                                                      : (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_0))))))))))))));
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_pc = 0ULL;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__ready) {
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_pc 
            = ((3U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__reg_tail))
                ? vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_pc_3
                : ((2U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__reg_tail))
                    ? vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_pc_2
                    : ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__reg_tail))
                        ? vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_pc_1
                        : vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_pc_0)));
    }
    vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT___T_4 
        = (0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__reg_r_cnt));
    vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT___reg_r_cnt_T_5 
        = (3U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__reg_r_cnt) 
                 - (IData)(1U)));
    __Vdly__riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state 
        = ((IData)(vlSelf->reset) ? 0U : ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))
                                           ? ((IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1_io_DCache_valid)
                                               ? 1U
                                               : 0U)
                                           : ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))
                                               ? (((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_0) 
                                                   | (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2))
                                                   ? 
                                                  ((((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_0) 
                                                     & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___tag_valid_0_T)) 
                                                    | ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2) 
                                                       & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___tag_valid_2_T)))
                                                    ? 3U
                                                    : 2U)
                                                   : 2U)
                                               : ((2U 
                                                   == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))
                                                   ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_98)
                                                   : (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_105)))));
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_wdata = 0ULL;
    } else if ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
        if (vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1_io_DCache_valid) {
            vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_wdata 
                = (((QData)((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT___io_bus_bits_wdata_T[1U])) 
                    << 0x20U) | (QData)((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT___io_bus_bits_wdata_T[0U])));
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_wstrb = 0U;
    } else if ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
        if (vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1_io_DCache_valid) {
            vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_wstrb 
                = (0xffU & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT___io_bus_bits_wstrb_T));
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_is_w = 0U;
    } else if ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
        if (vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1_io_DCache_valid) {
            vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_is_w 
                = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu_io_bus_bits_is_w;
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag = 0ULL;
    } else if ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
        if (vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1_io_DCache_valid) {
            vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag 
                = (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu_io_bus_bits_addr 
                   >> 0xaU);
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index = 0U;
    } else if ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
        if (vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1_io_DCache_valid) {
            vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index 
                = (0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu_io_bus_bits_addr 
                                    >> 4U)));
        }
    }
    if (vlSelf->reset) {
        vlSelf->__Vdly__riscv_soc__DOT__core__DOT__d_cache__DOT__reg_offset = 0U;
    } else if ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
        if (vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1_io_DCache_valid) {
            vlSelf->__Vdly__riscv_soc__DOT__core__DOT__d_cache__DOT__reg_offset 
                = (0xfU & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu_io_bus_bits_addr));
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_ready = 0U;
    } else if ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_ready = 0U;
    } else if ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
        if (((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_0) 
             | (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2))) {
            vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_ready 
                = vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_32;
        }
    } else {
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_ready 
            = ((2U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))
                ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_99)
                : (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_101));
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_rdata = 0ULL;
    } else if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
        if ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
            if (((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_0) 
                 | (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2))) {
                vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_rdata 
                    = vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_33;
            }
        } else if ((2U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
            vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_rdata 
                = vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_83;
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_write = 0U;
    } else if ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_write = 0U;
    } else if ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
        if (((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_0) 
             | (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2))) {
            vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_write 
                = vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_29;
        }
    } else {
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_write 
            = ((2U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))
                ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_97)
                : (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_100));
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_wstrb = 0U;
    } else if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
        if ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
            vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_wstrb 
                = ((8U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_offset))
                    ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___cache_wstrb_T_1)
                    : (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___cache_wstrb_T_2));
        } else if ((2U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
            vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_wstrb 
                = vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_80;
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_wdata[0U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_wdata[1U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_wdata[2U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_wdata[3U] = 0U;
    } else if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
        if ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
            if (((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_0) 
                 | (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2))) {
                vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_wdata[0U] 
                    = vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_30[0U];
                vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_wdata[1U] 
                    = vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_30[1U];
                vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_wdata[2U] 
                    = vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_30[2U];
                vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_wdata[3U] 
                    = vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_30[3U];
            }
        } else if ((2U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
            vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_wdata[0U] 
                = vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_82[0U];
            vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_wdata[1U] 
                = vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_82[1U];
            vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_wdata[2U] 
                = vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_82[2U];
            vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_wdata[3U] 
                = vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_82[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_chosen_tag = 0U;
    } else if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
        if ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
            vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_chosen_tag 
                = (1U & (((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_0) 
                          | (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2))
                          ? (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_0))
                          : ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___T)
                              ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___LRU_2_T)
                              : (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___tag_valid_0_T))));
        }
    }
    vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_r_valid 
        = ((~ (IData)(vlSelf->reset)) & ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state)) 
                                         & ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))
                                             ? ((~ 
                                                 ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_0) 
                                                  | (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2))) 
                                                | (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_35))
                                             : ((2U 
                                                 == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))
                                                 ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_79)
                                                 : (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_104)))));
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_w_wdata = 0ULL;
    } else if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
        if ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
            if ((1U & (~ ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_0) 
                          | (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2))))) {
                vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_w_wdata 
                    = vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_52;
            }
        } else if ((2U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
            vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_w_wdata 
                = vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_94;
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_w_wlast = 0U;
    } else if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
        if ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
            if ((1U & (~ ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_0) 
                          | (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2))))) {
                vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_w_wlast 
                    = vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_53;
            }
        } else if ((2U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
            vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_w_wlast 
                = vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_91;
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_w_valid = 0U;
    } else if ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_w_valid = 0U;
    } else if ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
        if ((1U & (~ ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_0) 
                      | (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2))))) {
            vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_w_valid 
                = vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_49;
        }
    } else {
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_w_valid 
            = ((2U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))
                ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_92)
                : (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_102));
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_b_ready = 0U;
    } else if ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_b_ready = 0U;
    } else if ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
        if ((1U & (~ ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_0) 
                      | (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2))))) {
            vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_b_ready 
                = vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_50;
        }
    } else {
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_b_ready 
            = ((2U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))
                ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_96)
                : (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_103));
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation = 0U;
    } else if ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation 
            = vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_23;
    } else if ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_start_operation = 0U;
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cnt = 0U;
    } else if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
        if ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
            if ((1U & (~ ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_0) 
                          | (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2))))) {
                vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cnt 
                    = vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_55;
            }
        } else if ((2U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))) {
            vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cnt 
                = vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_93;
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_chosen_tag = 0U;
    } else if ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_bus_state))) {
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_chosen_tag 
            = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__valid) 
               & (((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1_io_cache_stage1_bits_sram_0_hit) 
                   | (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1_io_cache_stage1_bits_sram_1_hit))
                   ? (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1_io_cache_stage1_bits_sram_0_hit))
                   : (((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1_io_tag_valid_tag_valid_0) 
                       & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1_io_tag_valid_tag_valid_1))
                       ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT___LRU_1_T)
                       : (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1_io_tag_valid_tag_valid_0))));
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_rdata = 0ULL;
    } else if ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_bus_state))) {
        if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__valid) {
            if (((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1_io_cache_stage1_bits_sram_0_hit) 
                 | (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1_io_cache_stage1_bits_sram_1_hit))) {
                vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_rdata 
                    = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT___GEN_10;
            }
        }
    } else if ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_bus_state))) {
        if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT___T_10) {
            vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_rdata 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT___GEN_34;
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_valid = 0U;
    } else if ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_bus_state))) {
        if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__valid) {
            vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_valid 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT___GEN_21;
        } else if ((3U > (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__reg_ibuf_size))) {
            vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_valid = 0U;
        }
    } else if ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_bus_state))) {
        if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT___T_10) {
            vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_valid 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT___GEN_33;
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_r_raddr = 0ULL;
    } else if ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_bus_state))) {
        if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__valid) {
            vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_r_raddr 
                = (((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1_io_cache_stage1_bits_sram_0_hit) 
                    | (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1_io_cache_stage1_bits_sram_1_hit))
                    ? vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT___GEN_13
                    : (0xfffffffffffffff0ULL & vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1__DOT__reg_cpu_addr));
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_r_valid = 0U;
    } else if ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_bus_state))) {
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_r_valid 
            = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__valid) 
               & ((~ ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1_io_cache_stage1_bits_sram_0_hit) 
                      | (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1_io_cache_stage1_bits_sram_1_hit))) 
                  | (~ (((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1_io_cache_stage1_bits_sram_0_hit) 
                         & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1_io_tag_valid_tag_valid_0)) 
                        | ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1_io_cache_stage1_bits_sram_1_hit) 
                           & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1_io_tag_valid_tag_valid_1))))));
    } else if ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_bus_state))) {
        if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT___T_10) {
            vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_r_valid 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT___GEN_32;
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[0U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[1U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[2U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[3U] = 0U;
    } else if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_bus_state))) {
        if ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_bus_state))) {
            if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT___T_10) {
                vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[0U] 
                    = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT___GEN_35[0U];
                vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[1U] 
                    = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT___GEN_35[1U];
                vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[2U] 
                    = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT___GEN_35[2U];
                vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_wdata[3U] 
                    = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT___GEN_35[3U];
            }
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_write = 0U;
    } else if ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_bus_state))) {
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_write = 0U;
    } else if ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_bus_state))) {
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cache_write 
            = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT___GEN_40;
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr = 0ULL;
    } else if ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_bus_state))) {
        if ((3U > (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__reg_ibuf_size))) {
            vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1__DOT__reg_cpu_addr;
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_lru_1 = 0ULL;
    } else if (((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_bus_state)) 
                & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__valid))) {
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_lru_1 
            = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1_io_cache_stage1_bits_sram_0_hit)
                ? vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT___reg_lru_1_T
                : ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1_io_cache_stage1_bits_sram_1_hit)
                    ? vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT___reg_lru_1_T_1
                    : (((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1_io_tag_valid_tag_valid_0) 
                        & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1_io_tag_valid_tag_valid_1))
                        ? ((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT___LRU_1_T))
                            ? vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT___reg_lru_1_T_1
                            : vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT___reg_lru_1_T)
                        : ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1_io_tag_valid_tag_valid_0)
                            ? vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT___reg_lru_1_T_1
                            : vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT___reg_lru_1_T))));
    }
    if (vlSelf->reset) {
        __Vdly__riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_bus_state = 0U;
    } else if ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_bus_state))) {
        __Vdly__riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_bus_state 
            = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__valid)
                ? (((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1_io_cache_stage1_bits_sram_0_hit) 
                    | (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1_io_cache_stage1_bits_sram_1_hit))
                    ? ((((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1_io_cache_stage1_bits_sram_0_hit) 
                         & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1_io_tag_valid_tag_valid_0)) 
                        | ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1_io_cache_stage1_bits_sram_1_hit) 
                           & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1_io_tag_valid_tag_valid_1)))
                        ? 0U : 1U) : 1U) : 0U);
    } else if ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_bus_state))) {
        if (vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_ICache_bus_r_bits_rlast) {
            __Vdly__riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_bus_state = 0U;
        }
    }
    vlSelf->riscv_soc__DOT__axi_ram__DOT___GEN_7 = 
        ((0U != (IData)(vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_rlen)) 
         & (IData)(vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_r_state));
    if ((0U == (IData)(vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_rlen))) {
        vlSelf->riscv_soc__DOT__axi_ram__DOT___GEN_9 
            = vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_raddr;
        vlSelf->riscv_soc__DOT__axi_ram_io_ram_bus_r_bits_rlast 
            = ((IData)(vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_r_valid) 
               & 1U);
    } else {
        vlSelf->riscv_soc__DOT__axi_ram__DOT___GEN_9 
            = (8ULL + vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_raddr);
        vlSelf->riscv_soc__DOT__axi_ram_io_ram_bus_r_bits_rlast = 0U;
    }
    riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___GEN_26 
        = ((0x1aU == (0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                       >> 3U)))) ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_26)
            : ((0x19U == (0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                           >> 3U))))
                ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_25)
                : ((0x18U == (0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                               >> 3U))))
                    ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_24)
                    : ((0x17U == (0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                                   >> 3U))))
                        ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_23)
                        : ((0x16U == (0x3fU & (IData)(
                                                      (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                                       >> 3U))))
                            ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_22)
                            : ((0x15U == (0x3fU & (IData)(
                                                          (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                                           >> 3U))))
                                ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_21)
                                : ((0x14U == (0x3fU 
                                              & (IData)(
                                                        (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                                         >> 3U))))
                                    ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_20)
                                    : ((0x13U == (0x3fU 
                                                  & (IData)(
                                                            (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                                             >> 3U))))
                                        ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_19)
                                        : ((0x12U == 
                                            (0x3fU 
                                             & (IData)(
                                                       (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                                        >> 3U))))
                                            ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_18)
                                            : ((0x11U 
                                                == 
                                                (0x3fU 
                                                 & (IData)(
                                                           (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                                            >> 3U))))
                                                ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_17)
                                                : (
                                                   (0x10U 
                                                    == 
                                                    (0x3fU 
                                                     & (IData)(
                                                               (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                                                >> 3U))))
                                                    ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_16)
                                                    : 
                                                   ((0xfU 
                                                     == 
                                                     (0x3fU 
                                                      & (IData)(
                                                                (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                                                 >> 3U))))
                                                     ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_15)
                                                     : 
                                                    ((0xeU 
                                                      == 
                                                      (0x3fU 
                                                       & (IData)(
                                                                 (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                                                  >> 3U))))
                                                      ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_14)
                                                      : (IData)(riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___GEN_13))))))))))))));
    vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_offset 
        = vlSelf->__Vdly__riscv_soc__DOT__core__DOT__d_cache__DOT__reg_offset;
    vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state 
        = __Vdly__riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state;
    vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_bus_state 
        = __Vdly__riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_bus_state;
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT___valid_T_9 
        = ((3U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_opType))
            ? 4U : ((6U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_opType))
                     ? 2U : ((5U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_opType))
                              ? 2U : ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_opType)) 
                                      | (2U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_opType))))));
    riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___GEN_39 
        = ((0x27U == (0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                       >> 3U)))) ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_39)
            : ((0x26U == (0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                           >> 3U))))
                ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_38)
                : ((0x25U == (0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                               >> 3U))))
                    ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_37)
                    : ((0x24U == (0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                                   >> 3U))))
                        ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_36)
                        : ((0x23U == (0x3fU & (IData)(
                                                      (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                                       >> 3U))))
                            ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_35)
                            : ((0x22U == (0x3fU & (IData)(
                                                          (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                                           >> 3U))))
                                ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_34)
                                : ((0x21U == (0x3fU 
                                              & (IData)(
                                                        (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                                         >> 3U))))
                                    ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_33)
                                    : ((0x20U == (0x3fU 
                                                  & (IData)(
                                                            (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                                             >> 3U))))
                                        ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_32)
                                        : ((0x1fU == 
                                            (0x3fU 
                                             & (IData)(
                                                       (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                                        >> 3U))))
                                            ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_31)
                                            : ((0x1eU 
                                                == 
                                                (0x3fU 
                                                 & (IData)(
                                                           (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                                            >> 3U))))
                                                ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_30)
                                                : (
                                                   (0x1dU 
                                                    == 
                                                    (0x3fU 
                                                     & (IData)(
                                                               (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                                                >> 3U))))
                                                    ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_29)
                                                    : 
                                                   ((0x1cU 
                                                     == 
                                                     (0x3fU 
                                                      & (IData)(
                                                                (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                                                 >> 3U))))
                                                     ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_28)
                                                     : 
                                                    ((0x1bU 
                                                      == 
                                                      (0x3fU 
                                                       & (IData)(
                                                                 (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                                                  >> 3U))))
                                                      ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_27)
                                                      : (IData)(riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___GEN_26))))))))))))));
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__reg_tail = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__execute_io_flush) {
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__reg_tail = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__can_deq) {
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__reg_tail 
            = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT___reg_tail_T_1;
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_pc_0 = 0ULL;
    } else if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute_io_flush)))) {
        if (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__enq_size) {
            if ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__reg_head))) {
                vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_pc_0 
                    = vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1_io_fetch_cpu_data_bits_pc;
            }
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_pc_1 = 0ULL;
    } else if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute_io_flush)))) {
        if (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__enq_size) {
            if ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__reg_head))) {
                vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_pc_1 
                    = vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1_io_fetch_cpu_data_bits_pc;
            }
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_pc_2 = 0ULL;
    } else if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute_io_flush)))) {
        if (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__enq_size) {
            if ((2U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__reg_head))) {
                vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_pc_2 
                    = vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1_io_fetch_cpu_data_bits_pc;
            }
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_pc_3 = 0ULL;
    } else if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute_io_flush)))) {
        if (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__enq_size) {
            if ((3U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__reg_head))) {
                vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_pc_3 
                    = vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1_io_fetch_cpu_data_bits_pc;
            }
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_0 = 0U;
    } else if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute_io_flush)))) {
        if (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__enq_size) {
            if ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__reg_head))) {
                vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_0 
                    = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_cache_buf_bits_inst;
            }
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_1 = 0U;
    } else if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute_io_flush)))) {
        if (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__enq_size) {
            if ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__reg_head))) {
                vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_1 
                    = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_cache_buf_bits_inst;
            }
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_2 = 0U;
    } else if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute_io_flush)))) {
        if (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__enq_size) {
            if ((2U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__reg_head))) {
                vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_2 
                    = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_cache_buf_bits_inst;
            }
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_3 = 0U;
    } else if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute_io_flush)))) {
        if (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__enq_size) {
            if ((3U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__reg_head))) {
                vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_3 
                    = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_cache_buf_bits_inst;
            }
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_is_pre_0 = 0U;
    } else if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute_io_flush)))) {
        if (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__enq_size) {
            if ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__reg_head))) {
                vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_is_pre_0 
                    = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_cache_buf_bits_is_pre;
            }
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_is_pre_1 = 0U;
    } else if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute_io_flush)))) {
        if (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__enq_size) {
            if ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__reg_head))) {
                vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_is_pre_1 
                    = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_cache_buf_bits_is_pre;
            }
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_is_pre_2 = 0U;
    } else if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute_io_flush)))) {
        if (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__enq_size) {
            if ((2U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__reg_head))) {
                vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_is_pre_2 
                    = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_cache_buf_bits_is_pre;
            }
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_is_pre_3 = 0U;
    } else if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute_io_flush)))) {
        if (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__enq_size) {
            if ((3U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__reg_head))) {
                vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_is_pre_3 
                    = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_cache_buf_bits_is_pre;
            }
        }
    }
    vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___cache_wstrb_T_1 
        = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_wstrb) 
           << 8U);
    vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___cache_wstrb_T_2 
        = vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_wstrb;
    vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram0_write 
        = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_write) 
           & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_chosen_tag)));
    vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram2_write 
        = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_write) 
           & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_chosen_tag));
    __Vtemp1740[1U] = (IData)((((QData)((IData)((((
                                                   (0x8000U 
                                                    & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_wstrb))
                                                    ? 0xffU
                                                    : 0U) 
                                                  << 0x18U) 
                                                 | ((((0x4000U 
                                                       & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_wstrb))
                                                       ? 0xffU
                                                       : 0U) 
                                                     << 0x10U) 
                                                    | ((((0x2000U 
                                                          & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_wstrb))
                                                          ? 0xffU
                                                          : 0U) 
                                                        << 8U) 
                                                       | ((0x1000U 
                                                           & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_wstrb))
                                                           ? 0xffU
                                                           : 0U)))))) 
                                << 0x20U) | (QData)((IData)(
                                                            ((((0x800U 
                                                                & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_wstrb))
                                                                ? 0xffU
                                                                : 0U) 
                                                              << 0x18U) 
                                                             | ((((0x400U 
                                                                   & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_wstrb))
                                                                   ? 0xffU
                                                                   : 0U) 
                                                                 << 0x10U) 
                                                                | ((((0x200U 
                                                                      & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_wstrb))
                                                                      ? 0xffU
                                                                      : 0U) 
                                                                    << 8U) 
                                                                   | ((0x100U 
                                                                       & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_wstrb))
                                                                       ? 0xffU
                                                                       : 0U))))))));
    __Vtemp1740[2U] = (IData)(((((QData)((IData)(((
                                                   ((0x8000U 
                                                     & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_wstrb))
                                                     ? 0xffU
                                                     : 0U) 
                                                   << 0x18U) 
                                                  | ((((0x4000U 
                                                        & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_wstrb))
                                                        ? 0xffU
                                                        : 0U) 
                                                      << 0x10U) 
                                                     | ((((0x2000U 
                                                           & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_wstrb))
                                                           ? 0xffU
                                                           : 0U) 
                                                         << 8U) 
                                                        | ((0x1000U 
                                                            & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_wstrb))
                                                            ? 0xffU
                                                            : 0U)))))) 
                                 << 0x20U) | (QData)((IData)(
                                                             ((((0x800U 
                                                                 & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_wstrb))
                                                                 ? 0xffU
                                                                 : 0U) 
                                                               << 0x18U) 
                                                              | ((((0x400U 
                                                                    & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_wstrb))
                                                                    ? 0xffU
                                                                    : 0U) 
                                                                  << 0x10U) 
                                                                 | ((((0x200U 
                                                                       & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_wstrb))
                                                                       ? 0xffU
                                                                       : 0U) 
                                                                     << 8U) 
                                                                    | ((0x100U 
                                                                        & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_wstrb))
                                                                        ? 0xffU
                                                                        : 0U))))))) 
                               >> 0x20U));
    vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__cache_mask[0U] 
        = ((((8U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_wstrb))
              ? 0xffU : 0U) << 0x18U) | ((((4U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_wstrb))
                                            ? 0xffU
                                            : 0U) << 0x10U) 
                                         | ((((2U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_wstrb))
                                               ? 0xffU
                                               : 0U) 
                                             << 8U) 
                                            | ((1U 
                                                & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_wstrb))
                                                ? 0xffU
                                                : 0U))));
    vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__cache_mask[1U] 
        = ((((0x80U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_wstrb))
              ? 0xffU : 0U) << 0x18U) | ((((0x40U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_wstrb))
                                            ? 0xffU
                                            : 0U) << 0x10U) 
                                         | ((((0x20U 
                                               & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_wstrb))
                                               ? 0xffU
                                               : 0U) 
                                             << 8U) 
                                            | ((0x10U 
                                                & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_wstrb))
                                                ? 0xffU
                                                : 0U))));
    vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__cache_mask[2U] 
        = __Vtemp1740[1U];
    vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__cache_mask[3U] 
        = __Vtemp1740[2U];
    VL_EXTEND_WQ(128,64, __Vtemp1743, vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_wdata);
    if ((8U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_offset))) {
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__cache_wdata[0U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__cache_wdata[1U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__cache_wdata[2U] 
            = (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_wdata);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__cache_wdata[3U] 
            = (IData)((vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_wdata 
                       >> 0x20U));
    } else {
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__cache_wdata[0U] 
            = __Vtemp1743[0U];
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__cache_wdata[1U] 
            = __Vtemp1743[1U];
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__cache_wdata[2U] 
            = __Vtemp1743[2U];
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__cache_wdata[3U] 
            = __Vtemp1743[3U];
    }
    vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___reg_cache_wdata_T_2[0U] 
        = (IData)((((QData)((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_wdata[1U])) 
                    << 0x20U) | (QData)((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_wdata[0U]))));
    vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___reg_cache_wdata_T_2[1U] 
        = (IData)(((((QData)((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_wdata[1U])) 
                     << 0x20U) | (QData)((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_wdata[0U]))) 
                   >> 0x20U));
    vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___reg_cache_wdata_T_2[2U] 
        = (IData)(vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata);
    vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___reg_cache_wdata_T_2[3U] 
        = (IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata 
                   >> 0x20U));
    vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_0 
        = (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag 
           == (0x3fffffffffffffULL & (((QData)((IData)(
                                                       vlSelf->riscv_soc__DOT__sram5__DOT__Q[1U])) 
                                       << 0x20U) | (QData)((IData)(
                                                                   vlSelf->riscv_soc__DOT__sram5__DOT__Q[0U])))));
    vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2 
        = (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag 
           == (0x3fffffffffffffULL & (((QData)((IData)(
                                                       vlSelf->riscv_soc__DOT__sram7__DOT__Q[1U])) 
                                       << 0x20U) | (QData)((IData)(
                                                                   vlSelf->riscv_soc__DOT__sram7__DOT__Q[0U])))));
    vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_105 
        = ((3U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state))
            ? 0U : (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state));
    vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_100 
        = ((3U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state)) 
           & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_write));
    vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_101 
        = ((3U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state)) 
           & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_ready));
    vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_102 
        = ((3U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state)) 
           & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_w_valid));
    vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_103 
        = ((3U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state)) 
           & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_b_ready));
    vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_104 
        = ((3U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state)) 
           & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_r_valid));
    vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___reg_sram0_valid_T 
        = (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_sram0_valid 
           | (1ULL << (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)));
    vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___reg_sram0_dirty_T 
        = (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_sram0_dirty 
           | (1ULL << (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)));
    vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___reg_sram0_dirty_T_1 
        = (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_sram0_dirty 
           & (~ (1ULL << (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index))));
    vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___reg_sram2_valid_T 
        = (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_sram2_valid 
           | (1ULL << (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)));
    vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___reg_sram2_dirty_T 
        = (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_sram2_dirty 
           | (1ULL << (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)));
    vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___reg_sram2_dirty_T_1 
        = (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_sram2_dirty 
           & (~ (1ULL << (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index))));
    vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___reg_lru_2_T 
        = (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_2 
           | (1ULL << (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)));
    vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___reg_lru_2_T_1 
        = (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_2 
           & (~ (1ULL << (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index))));
    vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___reg_r_raddr_T 
        = ((vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag 
            << 6U) | (QData)((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index)));
    vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___tag_dirty_0_T 
        = (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_sram0_dirty 
           >> (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index));
    vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___tag_dirty_2_T 
        = (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_sram2_dirty 
           >> (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index));
    vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___LRU_2_T 
        = (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_lru_2 
           >> (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index));
    vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___tag_valid_0_T 
        = (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_sram0_valid 
           >> (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index));
    vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___tag_valid_2_T 
        = (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_sram2_valid 
           >> (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_index));
    vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___reg_sram0_valid_T 
        = (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_sram0_valid 
           | (1ULL << (0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                        >> 4U)))));
    vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT___reg_sram1_valid_T 
        = (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_sram1_valid 
           | (1ULL << (0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                        >> 4U)))));
    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__reg_ibuf_size 
        = ((IData)(vlSelf->reset) ? 0U : ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute_io_flush)
                                           ? 0U : (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__result_size)));
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1__DOT__reg_cpu_addr = 0ULL;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1__DOT__ready) {
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1__DOT__reg_cpu_addr 
            = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage0__DOT__reg_addr;
    }
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__valid 
        = ((4U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_opType))
            ? 8U : (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT___valid_T_9));
    riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___GEN_52 
        = ((0x34U == (0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                       >> 3U)))) ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_52)
            : ((0x33U == (0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                           >> 3U))))
                ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_51)
                : ((0x32U == (0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                               >> 3U))))
                    ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_50)
                    : ((0x31U == (0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                                   >> 3U))))
                        ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_49)
                        : ((0x30U == (0x3fU & (IData)(
                                                      (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                                       >> 3U))))
                            ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_48)
                            : ((0x2fU == (0x3fU & (IData)(
                                                          (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                                           >> 3U))))
                                ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_47)
                                : ((0x2eU == (0x3fU 
                                              & (IData)(
                                                        (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                                         >> 3U))))
                                    ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_46)
                                    : ((0x2dU == (0x3fU 
                                                  & (IData)(
                                                            (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                                             >> 3U))))
                                        ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_45)
                                        : ((0x2cU == 
                                            (0x3fU 
                                             & (IData)(
                                                       (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                                        >> 3U))))
                                            ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_44)
                                            : ((0x2bU 
                                                == 
                                                (0x3fU 
                                                 & (IData)(
                                                           (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                                            >> 3U))))
                                                ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_43)
                                                : (
                                                   (0x2aU 
                                                    == 
                                                    (0x3fU 
                                                     & (IData)(
                                                               (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                                                >> 3U))))
                                                    ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_42)
                                                    : 
                                                   ((0x29U 
                                                     == 
                                                     (0x3fU 
                                                      & (IData)(
                                                                (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                                                 >> 3U))))
                                                     ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_41)
                                                     : 
                                                    ((0x28U 
                                                      == 
                                                      (0x3fU 
                                                       & (IData)(
                                                                 (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                                                  >> 3U))))
                                                      ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_40)
                                                      : (IData)(riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___GEN_39))))))))))))));
    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_cache_buf_bits_is_pre 
        = ((3U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__is_pre_tail))
            ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__is_pre_fifo_3)
            : ((2U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__is_pre_tail))
                ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__is_pre_fifo_2)
                : ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__is_pre_tail))
                    ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__is_pre_fifo_1)
                    : (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__is_pre_fifo_0))));
    vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_32 
        = ((((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_0) 
             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___tag_valid_0_T)) 
            | ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2) 
               & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___tag_valid_2_T))) 
           | (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_ready));
    vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_35 
        = (1U & ((~ (((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_0) 
                      & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___tag_valid_0_T)) 
                     | ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2) 
                        & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___tag_valid_2_T)))) 
                 | (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_r_valid)));
    if ((((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_0) 
          & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___tag_valid_0_T)) 
         | ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_2) 
            & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___tag_valid_2_T)))) {
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_29 
            = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_is_w) 
               | (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_write));
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_30[0U] 
            = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_is_w)
                ? vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__cache_wdata[0U]
                : vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_wdata[0U]);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_30[1U] 
            = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_is_w)
                ? vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__cache_wdata[1U]
                : vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_wdata[1U]);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_30[2U] 
            = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_is_w)
                ? vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__cache_wdata[2U]
                : vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_wdata[2U]);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_30[3U] 
            = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_is_w)
                ? vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__cache_wdata[3U]
                : vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_wdata[3U]);
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_33 
            = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_is_w)
                ? vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_rdata
                : ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__hit_0)
                    ? ((8U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_offset))
                        ? (((QData)((IData)(vlSelf->riscv_soc__DOT__sram4__DOT__Q[3U])) 
                            << 0x20U) | (QData)((IData)(
                                                        vlSelf->riscv_soc__DOT__sram4__DOT__Q[2U])))
                        : (((QData)((IData)(vlSelf->riscv_soc__DOT__sram4__DOT__Q[1U])) 
                            << 0x20U) | (QData)((IData)(
                                                        vlSelf->riscv_soc__DOT__sram4__DOT__Q[0U]))))
                    : ((8U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_offset))
                        ? (((QData)((IData)(vlSelf->riscv_soc__DOT__sram6__DOT__Q[3U])) 
                            << 0x20U) | (QData)((IData)(
                                                        vlSelf->riscv_soc__DOT__sram6__DOT__Q[2U])))
                        : (((QData)((IData)(vlSelf->riscv_soc__DOT__sram6__DOT__Q[1U])) 
                            << 0x20U) | (QData)((IData)(
                                                        vlSelf->riscv_soc__DOT__sram6__DOT__Q[0U]))))));
    } else {
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_29 
            = vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_write;
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_30[0U] 
            = vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_wdata[0U];
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_30[1U] 
            = vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_wdata[1U];
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_30[2U] 
            = vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_wdata[2U];
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_30[3U] 
            = vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_wdata[3U];
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_33 
            = vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_rdata;
    }
    vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___T 
        = (1U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___tag_valid_0_T) 
                 & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___tag_valid_2_T)));
    riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___GEN_63 
        = ((0x3fU == (0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                       >> 3U)))) ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_63)
            : ((0x3eU == (0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                           >> 3U))))
                ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_62)
                : ((0x3dU == (0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                               >> 3U))))
                    ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_61)
                    : ((0x3cU == (0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                                   >> 3U))))
                        ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_60)
                        : ((0x3bU == (0x3fU & (IData)(
                                                      (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                                       >> 3U))))
                            ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_59)
                            : ((0x3aU == (0x3fU & (IData)(
                                                          (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                                           >> 3U))))
                                ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_58)
                                : ((0x39U == (0x3fU 
                                              & (IData)(
                                                        (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                                         >> 3U))))
                                    ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_57)
                                    : ((0x38U == (0x3fU 
                                                  & (IData)(
                                                            (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                                             >> 3U))))
                                        ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_56)
                                        : ((0x37U == 
                                            (0x3fU 
                                             & (IData)(
                                                       (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                                        >> 3U))))
                                            ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_55)
                                            : ((0x36U 
                                                == 
                                                (0x3fU 
                                                 & (IData)(
                                                           (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                                            >> 3U))))
                                                ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_54)
                                                : (
                                                   (0x35U 
                                                    == 
                                                    (0x3fU 
                                                     & (IData)(
                                                               (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                                                >> 3U))))
                                                    ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_53)
                                                    : (IData)(riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___GEN_52))))))))))));
    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT___reg_tail_T_1 
        = (3U & ((IData)(1U) + (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__reg_tail)));
    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT___GEN_4 
        = ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__reg_tail)) 
           & (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_valid_0));
    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT___GEN_5 
        = ((1U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__reg_tail)) 
           & (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_valid_1));
    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT___GEN_6 
        = ((2U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__reg_tail)) 
           & (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_valid_2));
    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT___GEN_7 
        = ((3U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__reg_tail)) 
           & (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_valid_3));
    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT___GEN_2 
        = ((2U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__reg_tail))
            ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_valid_2)
            : ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__reg_tail))
                ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_valid_1)
                : (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_valid_0)));
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__reg_head = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__execute_io_flush) {
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__reg_head = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__enq_size) {
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__reg_head 
            = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT___reg_head_T_1;
    }
    if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___T) {
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_49 
            = (1U & ((((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___tag_dirty_0_T) 
                       & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___LRU_2_T))) 
                      | ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___tag_dirty_2_T) 
                         & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___LRU_2_T))) 
                     | (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_w_valid)));
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_50 
            = (1U & ((((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___tag_dirty_0_T) 
                       & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___LRU_2_T))) 
                      | ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___tag_dirty_2_T) 
                         & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___LRU_2_T))) 
                     | (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_b_ready)));
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_53 
            = ((~ (((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___tag_dirty_0_T) 
                    & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___LRU_2_T))) 
                   | ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___tag_dirty_2_T) 
                      & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___LRU_2_T)))) 
               & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_w_wlast));
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_55 
            = ((1U & (((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___tag_dirty_0_T) 
                       & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___LRU_2_T))) 
                      | ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___tag_dirty_2_T) 
                         & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___LRU_2_T))))
                ? 1U : (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cnt));
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_52 
            = ((1U & (((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___tag_dirty_0_T) 
                       & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___LRU_2_T))) 
                      | ((IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___tag_dirty_2_T) 
                         & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___LRU_2_T))))
                ? ((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___LRU_2_T))
                    ? (((QData)((IData)(vlSelf->riscv_soc__DOT__sram6__DOT__Q[1U])) 
                        << 0x20U) | (QData)((IData)(
                                                    vlSelf->riscv_soc__DOT__sram6__DOT__Q[0U])))
                    : (((QData)((IData)(vlSelf->riscv_soc__DOT__sram4__DOT__Q[1U])) 
                        << 0x20U) | (QData)((IData)(
                                                    vlSelf->riscv_soc__DOT__sram4__DOT__Q[0U]))))
                : vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_w_wdata);
    } else {
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_49 
            = (1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_w_valid));
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_50 
            = (1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_b_ready));
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_53 
            = vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_w_wlast;
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_55 
            = vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cnt;
        vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT___GEN_52 
            = vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_w_wdata;
    }
    vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2_io_cache_stage1_ready 
        = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_ready) 
           & (3U > (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__reg_ibuf_size)));
    vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT___LRU_1_T 
        = (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_lru_1 
           >> (0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1__DOT__reg_cpu_addr 
                                >> 4U))));
    vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT___reg_lru_1_T 
        = (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_lru_1 
           | (1ULL << (0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1__DOT__reg_cpu_addr 
                                        >> 4U)))));
    vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT___reg_lru_1_T_1 
        = (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_lru_1 
           & (~ (1ULL << (0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1__DOT__reg_cpu_addr 
                                           >> 4U))))));
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage0__DOT__reg_addr = 0ULL;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1_io_cpu_addr_ready) {
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage0__DOT__reg_addr 
            = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0;
    }
    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___PHT_T_3 
        = (3U & ((3U == (IData)(riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___GEN_63))
                  ? (IData)(riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___GEN_63)
                  : ((IData)(1U) + (IData)(riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___GEN_63))));
    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___PHT_T_7 
        = (3U & ((0U == (IData)(riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___GEN_63))
                  ? (IData)(riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___GEN_63)
                  : ((IData)(riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___GEN_63) 
                     - (IData)(1U))));
    vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1__DOT__ready 
        = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_sram_r_ready) 
           & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2_io_cache_stage1_ready));
    vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1_io_cpu_addr_ready 
        = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__reg_sram_r_ready) 
           & (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2_io_cache_stage1_ready));
    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT___reg_head_T_1 
        = (3U & ((IData)(1U) + (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__reg_head)));
    vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1_io_tag_valid_index 
        = (0x3fU & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1__DOT__ready)
                     ? (IData)((vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage0__DOT__reg_addr 
                                >> 4U)) : (IData)((vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1__DOT__reg_cpu_addr 
                                                   >> 4U))));
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0 = 0x80000000ULL;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT___pre_enq_T) {
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0 
            = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute_io_flush)
                ? vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_next_pc
                : ((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_flush)
                    ? vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_next_pc
                    : vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT___reg_pc_0_T_2));
    }
    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_flush 
        = ((~ (IData)(vlSelf->reset)) & ((~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT___pre_enq_T)) 
                                         & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute_io_flush) 
                                            | (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_flush))));
    vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1_io_fetch_cpu_data_bits_pc 
        = ((0ULL != (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0 
                     >> 0x1fU)) ? vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr
            : vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0);
    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__tag 
        = ((0xfffffffffffffeULL & (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0 
                                   >> 8U)) | (QData)((IData)(
                                                             (1U 
                                                              & (IData)(
                                                                        (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0 
                                                                         >> 2U))))));
    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_btb_data_data[0U] 
        = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB
        [(0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0 
                           >> 3U)))][0U];
    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_btb_data_data[1U] 
        = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB
        [(0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0 
                           >> 3U)))][1U];
    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_btb_data_data[2U] 
        = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB
        [(0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0 
                           >> 3U)))][2U];
    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_btb_data_data[3U] 
        = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB
        [(0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0 
                           >> 3U)))][3U];
    riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___GEN_215 
        = ((0xdU == (0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0 
                                      >> 3U)))) ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_13)
            : ((0xcU == (0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0 
                                          >> 3U))))
                ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_12)
                : ((0xbU == (0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0 
                                              >> 3U))))
                    ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_11)
                    : ((0xaU == (0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0 
                                                  >> 3U))))
                        ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_10)
                        : ((9U == (0x3fU & (IData)(
                                                   (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0 
                                                    >> 3U))))
                            ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_9)
                            : ((8U == (0x3fU & (IData)(
                                                       (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0 
                                                        >> 3U))))
                                ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_8)
                                : ((7U == (0x3fU & (IData)(
                                                           (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0 
                                                            >> 3U))))
                                    ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_7)
                                    : ((6U == (0x3fU 
                                               & (IData)(
                                                         (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0 
                                                          >> 3U))))
                                        ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_6)
                                        : ((5U == (0x3fU 
                                                   & (IData)(
                                                             (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0 
                                                              >> 3U))))
                                            ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_5)
                                            : ((4U 
                                                == 
                                                (0x3fU 
                                                 & (IData)(
                                                           (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0 
                                                            >> 3U))))
                                                ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_4)
                                                : (
                                                   (3U 
                                                    == 
                                                    (0x3fU 
                                                     & (IData)(
                                                               (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0 
                                                                >> 3U))))
                                                    ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_3)
                                                    : 
                                                   ((2U 
                                                     == 
                                                     (0x3fU 
                                                      & (IData)(
                                                                (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0 
                                                                 >> 3U))))
                                                     ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_2)
                                                     : 
                                                    ((1U 
                                                      == 
                                                      (0x3fU 
                                                       & (IData)(
                                                                 (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0 
                                                                  >> 3U))))
                                                      ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_1)
                                                      : (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_0))))))))))))));
    vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1_io_bus1_valid 
        = ((0ULL == (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0 
                     >> 0x1fU)) & (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_bus_valid));
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_next_pc = 0ULL;
    } else if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT___pre_enq_T)))) {
        if (vlSelf->riscv_soc__DOT__core__DOT__execute_io_flush) {
            vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_next_pc 
                = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_next_pc;
        }
    }
    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_cache_buf_bits_inst 
        = ((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__cross_bar_1_io_fetch_cpu_data_bits_pc 
                          >> 2U))) ? (IData)((((0ULL 
                                                != 
                                                (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0 
                                                 >> 0x1fU))
                                                ? vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_rdata
                                                : vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata) 
                                              >> 0x20U))
            : (IData)(((0ULL != (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0 
                                 >> 0x1fU)) ? vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_rdata
                        : vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata)));
    riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___GEN_228 
        = ((0x1aU == (0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0 
                                       >> 3U)))) ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_26)
            : ((0x19U == (0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0 
                                           >> 3U))))
                ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_25)
                : ((0x18U == (0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0 
                                               >> 3U))))
                    ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_24)
                    : ((0x17U == (0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0 
                                                   >> 3U))))
                        ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_23)
                        : ((0x16U == (0x3fU & (IData)(
                                                      (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0 
                                                       >> 3U))))
                            ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_22)
                            : ((0x15U == (0x3fU & (IData)(
                                                          (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0 
                                                           >> 3U))))
                                ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_21)
                                : ((0x14U == (0x3fU 
                                              & (IData)(
                                                        (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0 
                                                         >> 3U))))
                                    ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_20)
                                    : ((0x13U == (0x3fU 
                                                  & (IData)(
                                                            (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0 
                                                             >> 3U))))
                                        ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_19)
                                        : ((0x12U == 
                                            (0x3fU 
                                             & (IData)(
                                                       (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0 
                                                        >> 3U))))
                                            ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_18)
                                            : ((0x11U 
                                                == 
                                                (0x3fU 
                                                 & (IData)(
                                                           (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0 
                                                            >> 3U))))
                                                ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_17)
                                                : (
                                                   (0x10U 
                                                    == 
                                                    (0x3fU 
                                                     & (IData)(
                                                               (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0 
                                                                >> 3U))))
                                                    ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_16)
                                                    : 
                                                   ((0xfU 
                                                     == 
                                                     (0x3fU 
                                                      & (IData)(
                                                                (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0 
                                                                 >> 3U))))
                                                     ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_15)
                                                     : 
                                                    ((0xeU 
                                                      == 
                                                      (0x3fU 
                                                       & (IData)(
                                                                 (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0 
                                                                  >> 3U))))
                                                      ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_14)
                                                      : (IData)(riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___GEN_215))))))))))))));
    riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___GEN_241 
        = ((0x27U == (0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0 
                                       >> 3U)))) ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_39)
            : ((0x26U == (0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0 
                                           >> 3U))))
                ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_38)
                : ((0x25U == (0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0 
                                               >> 3U))))
                    ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_37)
                    : ((0x24U == (0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0 
                                                   >> 3U))))
                        ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_36)
                        : ((0x23U == (0x3fU & (IData)(
                                                      (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0 
                                                       >> 3U))))
                            ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_35)
                            : ((0x22U == (0x3fU & (IData)(
                                                          (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0 
                                                           >> 3U))))
                                ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_34)
                                : ((0x21U == (0x3fU 
                                              & (IData)(
                                                        (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0 
                                                         >> 3U))))
                                    ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_33)
                                    : ((0x20U == (0x3fU 
                                                  & (IData)(
                                                            (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0 
                                                             >> 3U))))
                                        ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_32)
                                        : ((0x1fU == 
                                            (0x3fU 
                                             & (IData)(
                                                       (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0 
                                                        >> 3U))))
                                            ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_31)
                                            : ((0x1eU 
                                                == 
                                                (0x3fU 
                                                 & (IData)(
                                                           (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0 
                                                            >> 3U))))
                                                ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_30)
                                                : (
                                                   (0x1dU 
                                                    == 
                                                    (0x3fU 
                                                     & (IData)(
                                                               (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0 
                                                                >> 3U))))
                                                    ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_29)
                                                    : 
                                                   ((0x1cU 
                                                     == 
                                                     (0x3fU 
                                                      & (IData)(
                                                                (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0 
                                                                 >> 3U))))
                                                     ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_28)
                                                     : 
                                                    ((0x1bU 
                                                      == 
                                                      (0x3fU 
                                                       & (IData)(
                                                                 (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0 
                                                                  >> 3U))))
                                                      ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_27)
                                                      : (IData)(riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___GEN_228))))))))))))));
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_next_pc 
        = ((IData)(vlSelf->reset) ? 0ULL : (((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__irq) 
                                             | (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu_io_is_except))
                                             ? (0xfffffffffffffffcULL 
                                                & (((0x305U 
                                                     == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_csr_addr)) 
                                                    & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute_io_csr_valid))
                                                    ? vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_csr_data
                                                    : vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__reg_mtvec))
                                             : ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu_io_valid_next_pc)
                                                 ? vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu_io_next_pc
                                                 : 
                                                ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu_io_valid_next_pc)
                                                  ? vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg_io_r_csr_mepc
                                                  : 0ULL))));
    riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___GEN_254 
        = ((0x34U == (0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0 
                                       >> 3U)))) ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_52)
            : ((0x33U == (0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0 
                                           >> 3U))))
                ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_51)
                : ((0x32U == (0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0 
                                               >> 3U))))
                    ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_50)
                    : ((0x31U == (0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0 
                                                   >> 3U))))
                        ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_49)
                        : ((0x30U == (0x3fU & (IData)(
                                                      (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0 
                                                       >> 3U))))
                            ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_48)
                            : ((0x2fU == (0x3fU & (IData)(
                                                          (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0 
                                                           >> 3U))))
                                ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_47)
                                : ((0x2eU == (0x3fU 
                                              & (IData)(
                                                        (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0 
                                                         >> 3U))))
                                    ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_46)
                                    : ((0x2dU == (0x3fU 
                                                  & (IData)(
                                                            (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0 
                                                             >> 3U))))
                                        ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_45)
                                        : ((0x2cU == 
                                            (0x3fU 
                                             & (IData)(
                                                       (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0 
                                                        >> 3U))))
                                            ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_44)
                                            : ((0x2bU 
                                                == 
                                                (0x3fU 
                                                 & (IData)(
                                                           (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0 
                                                            >> 3U))))
                                                ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_43)
                                                : (
                                                   (0x2aU 
                                                    == 
                                                    (0x3fU 
                                                     & (IData)(
                                                               (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0 
                                                                >> 3U))))
                                                    ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_42)
                                                    : 
                                                   ((0x29U 
                                                     == 
                                                     (0x3fU 
                                                      & (IData)(
                                                                (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0 
                                                                 >> 3U))))
                                                     ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_41)
                                                     : 
                                                    ((0x28U 
                                                      == 
                                                      (0x3fU 
                                                       & (IData)(
                                                                 (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0 
                                                                  >> 3U))))
                                                      ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_40)
                                                      : (IData)(riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___GEN_241))))))))))))));
    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___GEN_265 
        = ((0x3fU == (0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0 
                                       >> 3U)))) ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_63)
            : ((0x3eU == (0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0 
                                           >> 3U))))
                ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_62)
                : ((0x3dU == (0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0 
                                               >> 3U))))
                    ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_61)
                    : ((0x3cU == (0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0 
                                                   >> 3U))))
                        ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_60)
                        : ((0x3bU == (0x3fU & (IData)(
                                                      (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0 
                                                       >> 3U))))
                            ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_59)
                            : ((0x3aU == (0x3fU & (IData)(
                                                          (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0 
                                                           >> 3U))))
                                ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_58)
                                : ((0x39U == (0x3fU 
                                              & (IData)(
                                                        (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0 
                                                         >> 3U))))
                                    ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_57)
                                    : ((0x38U == (0x3fU 
                                                  & (IData)(
                                                            (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0 
                                                             >> 3U))))
                                        ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_56)
                                        : ((0x37U == 
                                            (0x3fU 
                                             & (IData)(
                                                       (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0 
                                                        >> 3U))))
                                            ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_55)
                                            : ((0x36U 
                                                == 
                                                (0x3fU 
                                                 & (IData)(
                                                           (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0 
                                                            >> 3U))))
                                                ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_54)
                                                : (
                                                   (0x35U 
                                                    == 
                                                    (0x3fU 
                                                     & (IData)(
                                                               (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0 
                                                                >> 3U))))
                                                    ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__PHT_53)
                                                    : (IData)(riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___GEN_254))))))))))));
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__reg_mtvec = 0ULL;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__execute_io_csr_valid) {
        if ((1U & ((~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__irq)) 
                   & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute_io_csr_except_is_except))))) {
            if ((0x305U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_csr_addr))) {
                vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__reg_mtvec 
                    = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_csr_data;
            }
        }
    }
    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor_io_pre_valid 
        = (((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_btb_data_data[3U] 
             >> 0x1aU) & ((0xffffffffffffffULL & (((QData)((IData)(
                                                                   vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_btb_data_data[3U])) 
                                                   << 0x1eU) 
                                                  | ((QData)((IData)(
                                                                     vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_btb_data_data[2U])) 
                                                     >> 2U))) 
                          == vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__tag)) 
           & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___GEN_265) 
              >> 1U));
    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__pre_valid 
        = (((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_btb_data_data[3U] 
             >> 0x1aU) & ((0xffffffffffffffULL & (((QData)((IData)(
                                                                   vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_btb_data_data[3U])) 
                                                   << 0x1eU) 
                                                  | ((QData)((IData)(
                                                                     vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_btb_data_data[2U])) 
                                                     >> 2U))) 
                          == vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__tag)) 
           & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___GEN_265) 
              >> 1U));
    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor_io_pre_next_pc 
        = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__pre_valid)
            ? ((2U == (3U & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_btb_data_data[0U]))
                ? ((5U >= (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__reg_head))
                    ? vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__RAS
                   [vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__reg_head]
                    : 0ULL) : (((QData)((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_btb_data_data[2U])) 
                                << 0x3eU) | (((QData)((IData)(
                                                              vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_btb_data_data[1U])) 
                                              << 0x1eU) 
                                             | ((QData)((IData)(
                                                                vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_btb_data_data[0U])) 
                                                >> 2U))))
            : 0ULL);
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_csr_addr = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_csr_data = 0ULL;
    } else {
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_csr_addr 
            = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu__DOT__is_ret)
                ? 0x300U : (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_csr_addr));
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_csr_data 
            = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu__DOT__is_ret)
                ? ((0xffffffffffffff77ULL & vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg_io_r_csr_mstatus) 
                   | (QData)((IData)(((1U & (IData)(
                                                    (vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg_io_r_csr_mstatus 
                                                     >> 7U)))
                                       ? 0x88U : 0x80U))))
                : ((7U == (7U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                 >> 2U))) ? vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu__DOT__and_result
                    : ((3U == (7U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                     >> 2U))) ? vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu__DOT__and_result
                        : ((5U == (7U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                         >> 2U))) ? 
                           ((0xffffffffffffffe0ULL 
                             & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu_io_csr_data) 
                            | (QData)((IData)((0x1fU 
                                               & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu__DOT__imm)))))
                            : ((1U == (7U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                             >> 2U)))
                                ? vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu__DOT__op_data
                                : ((6U == (7U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                                 >> 2U)))
                                    ? vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu__DOT__or_result
                                    : ((2U == (7U & 
                                               ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                                                >> 2U)))
                                        ? vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu__DOT__or_result
                                        : 0ULL)))))));
    }
    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT___reg_pc_0_T_2 
        = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor_io_pre_valid)
            ? vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor_io_pre_next_pc
            : (4ULL + vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0));
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__system_exu__DOT__imm 
        = (((QData)((IData)(((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_imm 
                              >> 0x1fU) ? 0xffffffffU
                              : 0U))) << 0x20U) | (QData)((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_imm)));
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_csr_addr = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__ready) {
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_csr_addr 
            = (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst 
               >> 0x14U);
    }
    vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT___reg_mepc_T_2 
        = ((0x341U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_csr_addr))
            ? vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_csr_data
            : vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__reg_mepc);
    vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT___reg_mcause_T_3 
        = ((0x342U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_csr_addr))
            ? vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_csr_data
            : vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__reg_mcause);
    vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT___reg_mtval_T_1 
        = ((0x343U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_csr_addr))
            ? vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_csr_data
            : vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__reg_mtval);
    vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT___reg_mstatus_T_9 
        = ((0x300U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_csr_addr))
            ? vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_csr_data
            : vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__reg_mstatus);
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__ready) {
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType 
            = ((0x33U == (0xfe00707fU & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst))
                ? 2U : ((0x13U == (0x707fU & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst))
                         ? 0U : ((0x1bU == (0x707fU 
                                            & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst))
                                  ? 1U : ((0x3bU == 
                                           (0xfe00707fU 
                                            & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst))
                                           ? 3U : (
                                                   (0x7033U 
                                                    == 
                                                    (0xfe00707fU 
                                                     & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst))
                                                    ? 0x1eU
                                                    : 
                                                   ((0x7013U 
                                                     == 
                                                     (0x707fU 
                                                      & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst))
                                                     ? 0x1cU
                                                     : 
                                                    ((0x17U 
                                                      == 
                                                      (0x7fU 
                                                       & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst))
                                                      ? 0x60U
                                                      : 
                                                     ((0x63U 
                                                       == 
                                                       (0x707fU 
                                                        & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst))
                                                       ? 0x22U
                                                       : 
                                                      ((0x5063U 
                                                        == 
                                                        (0x707fU 
                                                         & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst))
                                                        ? 0x36U
                                                        : 
                                                       ((0x7063U 
                                                         == 
                                                         (0x707fU 
                                                          & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst))
                                                         ? 0x3eU
                                                         : 
                                                        ((0x4063U 
                                                          == 
                                                          (0x707fU 
                                                           & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst))
                                                          ? 0x32U
                                                          : 
                                                         ((0x6063U 
                                                           == 
                                                           (0x707fU 
                                                            & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst))
                                                           ? 0x3aU
                                                           : 
                                                          ((0x1063U 
                                                            == 
                                                            (0x707fU 
                                                             & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst))
                                                            ? 0x26U
                                                            : 
                                                           ((0x3073U 
                                                             == 
                                                             (0x707fU 
                                                              & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst))
                                                             ? 0xeU
                                                             : (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT___T_284)))))))))))))));
    }
    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst 
        = ((3U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__reg_tail))
            ? vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_3
            : ((2U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__reg_tail))
                ? vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_2
                : ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__reg_tail))
                    ? vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_1
                    : vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf__DOT__ibuf_inst_0)));
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__ready 
        = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu_io_ready) 
           & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_ready));
    vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT___csr_rdata_T_33 
        = ((0xb00U == (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst 
                       >> 0x14U)) ? vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__reg_mcycle
            : ((0x344U == (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst 
                           >> 0x14U)) ? 0ULL : ((0x343U 
                                                 == 
                                                 (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst 
                                                  >> 0x14U))
                                                 ? vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__reg_mtval
                                                 : 
                                                ((0x342U 
                                                  == 
                                                  (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst 
                                                   >> 0x14U))
                                                  ? vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__reg_mcause
                                                  : 
                                                 ((0x341U 
                                                   == 
                                                   (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst 
                                                    >> 0x14U))
                                                   ? vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__reg_mepc
                                                   : 
                                                  ((0x340U 
                                                    == 
                                                    (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst 
                                                     >> 0x14U))
                                                    ? vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__reg_mscratch
                                                    : 
                                                   ((0x306U 
                                                     == 
                                                     (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst 
                                                      >> 0x14U))
                                                     ? 0ULL
                                                     : 
                                                    ((0x305U 
                                                      == 
                                                      (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst 
                                                       >> 0x14U))
                                                      ? vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__reg_mtvec
                                                      : 
                                                     ((0x304U 
                                                       == 
                                                       (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst 
                                                        >> 0x14U))
                                                       ? vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__reg_mie
                                                       : 
                                                      ((0x303U 
                                                        == 
                                                        (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst 
                                                         >> 0x14U))
                                                        ? 0ULL
                                                        : 
                                                       ((0x302U 
                                                         == 
                                                         (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst 
                                                          >> 0x14U))
                                                         ? 0ULL
                                                         : 
                                                        ((0x301U 
                                                          == 
                                                          (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst 
                                                           >> 0x14U))
                                                          ? 0ULL
                                                          : 
                                                         ((0x300U 
                                                           == 
                                                           (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst 
                                                            >> 0x14U))
                                                           ? vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__csr_reg__DOT__reg_mstatus
                                                           : 0ULL)))))))))))));
    vlSelf->riscv_soc__DOT__core__DOT__decode__DOT___T_398 
        = ((0x2023U != (0x707fU & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst)) 
           & ((0x6033U == (0xfe00707fU & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst)) 
              | ((0x6013U == (0x707fU & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst)) 
                 | ((0x4033U == (0xfe00707fU & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst)) 
                    | ((0x4013U == (0x707fU & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst)) 
                       | ((0x2004033U == (0xfe00707fU 
                                          & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst)) 
                          | ((0x2005033U == (0xfe00707fU 
                                             & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst)) 
                             | ((0x200503bU == (0xfe00707fU 
                                                & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst)) 
                                | ((0x200403bU == (0xfe00707fU 
                                                   & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst)) 
                                   | ((0x2000033U == 
                                       (0xfe00707fU 
                                        & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst)) 
                                      | ((0x2001033U 
                                          == (0xfe00707fU 
                                              & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst)) 
                                         | ((0x2002033U 
                                             == (0xfe00707fU 
                                                 & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst)) 
                                            | ((0x2003033U 
                                                == 
                                                (0xfe00707fU 
                                                 & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst)) 
                                               | ((0x200003bU 
                                                   == 
                                                   (0xfe00707fU 
                                                    & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst)) 
                                                  | ((0x2006033U 
                                                      == 
                                                      (0xfe00707fU 
                                                       & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst)) 
                                                     | ((0x2007033U 
                                                         == 
                                                         (0xfe00707fU 
                                                          & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst)) 
                                                        | ((0x200703bU 
                                                            == 
                                                            (0xfe00707fU 
                                                             & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst)) 
                                                           | ((0x200603bU 
                                                               == 
                                                               (0xfe00707fU 
                                                                & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst)) 
                                                              | ((0x6fU 
                                                                  == 
                                                                  (0x7fU 
                                                                   & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst)) 
                                                                 | (0x67U 
                                                                    == 
                                                                    (0x707fU 
                                                                     & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst)))))))))))))))))))));
    vlSelf->riscv_soc__DOT__core__DOT__decode__DOT___T_484 
        = ((0x3013U == (0x707fU & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst)) 
           | ((0x3033U == (0xfe00707fU & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst)) 
              | ((0x40005033U == (0xfe00707fU & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst)) 
                 | ((0x40005013U == (0xfc00707fU & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst)) 
                    | ((0x4000501bU == (0xfe00707fU 
                                        & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst)) 
                       | ((0x4000503bU == (0xfe00707fU 
                                           & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst)) 
                          | ((0x5033U == (0xfe00707fU 
                                          & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst)) 
                             | ((0x5013U == (0xfc00707fU 
                                             & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst)) 
                                | ((0x501bU == (0xfe00707fU 
                                                & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst)) 
                                   | ((0x503bU == (0xfe00707fU 
                                                   & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst)) 
                                      | ((0x40000033U 
                                          == (0xfe00707fU 
                                              & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst)) 
                                         | ((0x4000003bU 
                                             == (0xfe00707fU 
                                                 & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst)) 
                                            | ((0x2023U 
                                                == 
                                                (0x707fU 
                                                 & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst)) 
                                               | ((0x6033U 
                                                   == 
                                                   (0xfe00707fU 
                                                    & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst)) 
                                                  | ((0x6013U 
                                                      == 
                                                      (0x707fU 
                                                       & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst)) 
                                                     | ((0x4033U 
                                                         == 
                                                         (0xfe00707fU 
                                                          & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst)) 
                                                        | ((0x4013U 
                                                            == 
                                                            (0x707fU 
                                                             & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst)) 
                                                           | ((0x2004033U 
                                                               == 
                                                               (0xfe00707fU 
                                                                & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst)) 
                                                              | ((0x2005033U 
                                                                  == 
                                                                  (0xfe00707fU 
                                                                   & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst)) 
                                                                 | ((0x200503bU 
                                                                     == 
                                                                     (0xfe00707fU 
                                                                      & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst)) 
                                                                    | ((0x200403bU 
                                                                        == 
                                                                        (0xfe00707fU 
                                                                         & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst)) 
                                                                       | ((0x2000033U 
                                                                           == 
                                                                           (0xfe00707fU 
                                                                            & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst)) 
                                                                          | ((0x2001033U 
                                                                              == 
                                                                              (0xfe00707fU 
                                                                               & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst)) 
                                                                             | ((0x2002033U 
                                                                                == 
                                                                                (0xfe00707fU 
                                                                                & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst)) 
                                                                                | ((0x2003033U 
                                                                                == 
                                                                                (0xfe00707fU 
                                                                                & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst)) 
                                                                                | ((0x200003bU 
                                                                                == 
                                                                                (0xfe00707fU 
                                                                                & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst)) 
                                                                                | ((0x2006033U 
                                                                                == 
                                                                                (0xfe00707fU 
                                                                                & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst)) 
                                                                                | ((0x2007033U 
                                                                                == 
                                                                                (0xfe00707fU 
                                                                                & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst)) 
                                                                                | ((0x200703bU 
                                                                                == 
                                                                                (0xfe00707fU 
                                                                                & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst)) 
                                                                                | ((0x200603bU 
                                                                                == 
                                                                                (0xfe00707fU 
                                                                                & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst)) 
                                                                                | ((0x6fU 
                                                                                != 
                                                                                (0x7fU 
                                                                                & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst)) 
                                                                                & (0x67U 
                                                                                == 
                                                                                (0x707fU 
                                                                                & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst)))))))))))))))))))))))))))))))));
    vlSelf->riscv_soc__DOT__core__DOT__decode__DOT___T_165 
        = ((0x2002033U == (0xfe00707fU & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst))
            ? 3U : ((0x2003033U == (0xfe00707fU & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst))
                     ? 3U : ((0x200003bU == (0xfe00707fU 
                                             & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst))
                              ? 3U : ((0x2006033U == 
                                       (0xfe00707fU 
                                        & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst))
                                       ? 3U : ((0x2007033U 
                                                == 
                                                (0xfe00707fU 
                                                 & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst))
                                                ? 3U
                                                : (
                                                   (0x200703bU 
                                                    == 
                                                    (0xfe00707fU 
                                                     & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst))
                                                    ? 3U
                                                    : 
                                                   ((0x200603bU 
                                                     == 
                                                     (0xfe00707fU 
                                                      & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst))
                                                     ? 3U
                                                     : 
                                                    ((0x6fU 
                                                      == 
                                                      (0x7fU 
                                                       & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst))
                                                      ? 1U
                                                      : 
                                                     ((0x67U 
                                                       == 
                                                       (0x707fU 
                                                        & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst))
                                                       ? 1U
                                                       : 
                                                      ((0x100073U 
                                                        == vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst)
                                                        ? 4U
                                                        : 
                                                       ((0x30200073U 
                                                         == vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst)
                                                         ? 4U
                                                         : 
                                                        ((0x73U 
                                                          == vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst)
                                                          ? 4U
                                                          : 
                                                         ((0x10200073U 
                                                           == vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst)
                                                           ? 4U
                                                           : 
                                                          ((0xfU 
                                                            == 
                                                            (0xf00fffffU 
                                                             & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst))
                                                            ? 6U
                                                            : 
                                                           ((0x100fU 
                                                             == vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst)
                                                             ? 6U
                                                             : 
                                                            ((0x12000073U 
                                                              == 
                                                              (0xfe007fffU 
                                                               & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst))
                                                              ? 6U
                                                              : 0U))))))))))))))));
}
