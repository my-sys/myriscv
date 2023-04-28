// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vriscv_soc.h for the primary calling header

#include "Vriscv_soc___024root.h"
#include "Vriscv_soc__Syms.h"

#include "verilated_dpi.h"

//==========

void Vriscv_soc___024unit____Vdpiimwrap_ramCtrl_TOP____024unit(QData/*63:0*/ raddr, QData/*63:0*/ &rdata, CData/*0:0*/ rflag, QData/*63:0*/ waddr, QData/*63:0*/ wdata, QData/*63:0*/ wmask, CData/*0:0*/ wen);

VL_INLINE_OPT void Vriscv_soc___024root___sequent__TOP__4(Vriscv_soc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vriscv_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv_soc___024root___sequent__TOP__4\n"); );
    // Variables
    CData/*1:0*/ riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___GEN_13;
    CData/*1:0*/ __Vdly__riscv_soc__DOT__core__DOT__cross_bar__DOT__reg_r_cnt;
    CData/*0:0*/ __Vdly__riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_bus_is_w;
    CData/*0:0*/ __Vdly__riscv_soc__DOT__core__DOT__execute__DOT__mem_exu__DOT__reg_ls_state;
    CData/*1:0*/ __Vdly__riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state;
    CData/*0:0*/ __Vdly__riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_dest_is_w;
    CData/*1:0*/ __Vdly__riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_state;
    CData/*0:0*/ __Vdly__riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_dest_is_w;
    CData/*0:0*/ __Vdly__riscv_soc__DOT__core__DOT__clint_de__DOT__reg_state;
    CData/*0:0*/ __Vdly__riscv_soc__DOT__axi_ram__DOT__reg_r_state;
    VlWide<4>/*127:0*/ __Vtemp1454;
    VlWide<4>/*127:0*/ __Vtemp1455;
    VlWide<4>/*127:0*/ __Vtemp1456;
    VlWide<4>/*127:0*/ __Vtemp1457;
    VlWide<4>/*127:0*/ __Vtemp1458;
    VlWide<4>/*127:0*/ __Vtemp1459;
    VlWide<4>/*127:0*/ __Vtemp1460;
    VlWide<4>/*127:0*/ __Vtemp1461;
    VlWide<4>/*127:0*/ __Vtemp1462;
    VlWide<4>/*127:0*/ __Vtemp1463;
    VlWide<4>/*127:0*/ __Vtemp1464;
    VlWide<4>/*127:0*/ __Vtemp1465;
    VlWide<4>/*127:0*/ __Vtemp1466;
    VlWide<4>/*127:0*/ __Vtemp1467;
    VlWide<4>/*127:0*/ __Vtemp1468;
    VlWide<4>/*127:0*/ __Vtemp1469;
    VlWide<4>/*127:0*/ __Vtemp1470;
    VlWide<4>/*127:0*/ __Vtemp1471;
    VlWide<4>/*127:0*/ __Vtemp1472;
    VlWide<4>/*127:0*/ __Vtemp1473;
    VlWide<4>/*127:0*/ __Vtemp1474;
    VlWide<4>/*127:0*/ __Vtemp1475;
    VlWide<4>/*127:0*/ __Vtemp1476;
    VlWide<4>/*127:0*/ __Vtemp1477;
    VlWide<4>/*127:0*/ __Vtemp1478;
    VlWide<4>/*127:0*/ __Vtemp1479;
    VlWide<4>/*127:0*/ __Vtemp1480;
    VlWide<4>/*127:0*/ __Vtemp1481;
    VlWide<4>/*127:0*/ __Vtemp1482;
    VlWide<4>/*127:0*/ __Vtemp1483;
    VlWide<4>/*127:0*/ __Vtemp1484;
    VlWide<4>/*127:0*/ __Vtemp1485;
    VlWide<4>/*127:0*/ __Vtemp1486;
    VlWide<4>/*127:0*/ __Vtemp1487;
    VlWide<4>/*127:0*/ __Vtemp1488;
    VlWide<4>/*127:0*/ __Vtemp1489;
    VlWide<4>/*127:0*/ __Vtemp1490;
    VlWide<4>/*127:0*/ __Vtemp1491;
    VlWide<4>/*127:0*/ __Vtemp1492;
    VlWide<4>/*127:0*/ __Vtemp1493;
    VlWide<4>/*127:0*/ __Vtemp1494;
    VlWide<4>/*127:0*/ __Vtemp1495;
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
    VlWide<3>/*95:0*/ __Vtemp1612;
    VlWide<3>/*95:0*/ __Vtemp1613;
    VlWide<3>/*95:0*/ __Vtemp1614;
    VlWide<3>/*95:0*/ __Vtemp1615;
    VlWide<3>/*95:0*/ __Vtemp1616;
    VlWide<4>/*127:0*/ __Vtemp1625;
    VlWide<4>/*127:0*/ __Vtemp1626;
    VlWide<4>/*127:0*/ __Vtemp1627;
    VlWide<4>/*127:0*/ __Vtemp1628;
    VlWide<4>/*127:0*/ __Vtemp1629;
    VlWide<4>/*127:0*/ __Vtemp1630;
    VlWide<4>/*127:0*/ __Vtemp1631;
    VlWide<4>/*127:0*/ __Vtemp1632;
    VlWide<4>/*127:0*/ __Vtemp1633;
    VlWide<4>/*127:0*/ __Vtemp1634;
    VlWide<4>/*127:0*/ __Vtemp1635;
    VlWide<4>/*127:0*/ __Vtemp1636;
    VlWide<4>/*127:0*/ __Vtemp1637;
    VlWide<4>/*127:0*/ __Vtemp1638;
    VlWide<4>/*127:0*/ __Vtemp1639;
    VlWide<4>/*127:0*/ __Vtemp1640;
    VlWide<4>/*127:0*/ __Vtemp1641;
    VlWide<4>/*127:0*/ __Vtemp1642;
    VlWide<4>/*127:0*/ __Vtemp1643;
    VlWide<4>/*127:0*/ __Vtemp1644;
    VlWide<4>/*127:0*/ __Vtemp1645;
    VlWide<4>/*127:0*/ __Vtemp1646;
    VlWide<4>/*127:0*/ __Vtemp1647;
    VlWide<4>/*127:0*/ __Vtemp1648;
    VlWide<4>/*127:0*/ __Vtemp1649;
    VlWide<4>/*127:0*/ __Vtemp1650;
    VlWide<4>/*127:0*/ __Vtemp1651;
    VlWide<4>/*127:0*/ __Vtemp1652;
    VlWide<4>/*127:0*/ __Vtemp1653;
    VlWide<4>/*127:0*/ __Vtemp1654;
    VlWide<4>/*127:0*/ __Vtemp1655;
    VlWide<4>/*127:0*/ __Vtemp1656;
    VlWide<4>/*127:0*/ __Vtemp1657;
    VlWide<4>/*127:0*/ __Vtemp1658;
    VlWide<4>/*127:0*/ __Vtemp1659;
    VlWide<4>/*127:0*/ __Vtemp1660;
    VlWide<4>/*127:0*/ __Vtemp1661;
    VlWide<4>/*127:0*/ __Vtemp1662;
    VlWide<4>/*127:0*/ __Vtemp1663;
    VlWide<4>/*127:0*/ __Vtemp1664;
    VlWide<4>/*127:0*/ __Vtemp1665;
    VlWide<4>/*127:0*/ __Vtemp1666;
    VlWide<4>/*127:0*/ __Vtemp1667;
    VlWide<4>/*127:0*/ __Vtemp1668;
    VlWide<4>/*127:0*/ __Vtemp1669;
    VlWide<4>/*127:0*/ __Vtemp1670;
    VlWide<4>/*127:0*/ __Vtemp1671;
    VlWide<4>/*127:0*/ __Vtemp1672;
    VlWide<4>/*127:0*/ __Vtemp1673;
    VlWide<4>/*127:0*/ __Vtemp1674;
    VlWide<4>/*127:0*/ __Vtemp1675;
    VlWide<4>/*127:0*/ __Vtemp1676;
    VlWide<4>/*127:0*/ __Vtemp1677;
    VlWide<4>/*127:0*/ __Vtemp1678;
    VlWide<4>/*127:0*/ __Vtemp1679;
    VlWide<4>/*127:0*/ __Vtemp1680;
    VlWide<4>/*127:0*/ __Vtemp1681;
    VlWide<4>/*127:0*/ __Vtemp1682;
    VlWide<4>/*127:0*/ __Vtemp1683;
    VlWide<4>/*127:0*/ __Vtemp1684;
    VlWide<4>/*127:0*/ __Vtemp1685;
    VlWide<4>/*127:0*/ __Vtemp1686;
    VlWide<4>/*127:0*/ __Vtemp1687;
    VlWide<4>/*127:0*/ __Vtemp1688;
    VlWide<4>/*127:0*/ __Vtemp1689;
    VlWide<4>/*127:0*/ __Vtemp1690;
    VlWide<4>/*127:0*/ __Vtemp1691;
    VlWide<4>/*127:0*/ __Vtemp1692;
    VlWide<4>/*127:0*/ __Vtemp1693;
    VlWide<4>/*127:0*/ __Vtemp1694;
    VlWide<4>/*127:0*/ __Vtemp1695;
    VlWide<4>/*127:0*/ __Vtemp1696;
    VlWide<4>/*127:0*/ __Vtemp1697;
    VlWide<4>/*127:0*/ __Vtemp1698;
    VlWide<4>/*127:0*/ __Vtemp1699;
    VlWide<4>/*127:0*/ __Vtemp1700;
    VlWide<4>/*127:0*/ __Vtemp1701;
    VlWide<4>/*127:0*/ __Vtemp1702;
    VlWide<4>/*127:0*/ __Vtemp1703;
    VlWide<4>/*127:0*/ __Vtemp1704;
    VlWide<4>/*127:0*/ __Vtemp1705;
    VlWide<4>/*127:0*/ __Vtemp1706;
    VlWide<4>/*127:0*/ __Vtemp1707;
    VlWide<4>/*127:0*/ __Vtemp1708;
    VlWide<4>/*127:0*/ __Vtemp1709;
    VlWide<4>/*127:0*/ __Vtemp1710;
    VlWide<4>/*127:0*/ __Vtemp1711;
    VlWide<4>/*127:0*/ __Vtemp1712;
    VlWide<4>/*127:0*/ __Vtemp1713;
    VlWide<4>/*127:0*/ __Vtemp1714;
    VlWide<4>/*127:0*/ __Vtemp1715;
    VlWide<4>/*127:0*/ __Vtemp1716;
    VlWide<4>/*127:0*/ __Vtemp1717;
    VlWide<4>/*127:0*/ __Vtemp1718;
    VlWide<4>/*127:0*/ __Vtemp1719;
    VlWide<4>/*127:0*/ __Vtemp1720;
    VlWide<4>/*127:0*/ __Vtemp1721;
    VlWide<4>/*127:0*/ __Vtemp1722;
    VlWide<4>/*127:0*/ __Vtemp1723;
    VlWide<4>/*127:0*/ __Vtemp1724;
    VlWide<4>/*127:0*/ __Vtemp1725;
    VlWide<4>/*127:0*/ __Vtemp1726;
    VlWide<4>/*127:0*/ __Vtemp1727;
    VlWide<4>/*127:0*/ __Vtemp1728;
    VlWide<4>/*127:0*/ __Vtemp1729;
    VlWide<4>/*127:0*/ __Vtemp1730;
    VlWide<4>/*127:0*/ __Vtemp1731;
    VlWide<4>/*127:0*/ __Vtemp1732;
    VlWide<4>/*127:0*/ __Vtemp1733;
    VlWide<4>/*127:0*/ __Vtemp1734;
    VlWide<4>/*127:0*/ __Vtemp1735;
    VlWide<4>/*127:0*/ __Vtemp1736;
    VlWide<4>/*127:0*/ __Vtemp1737;
    VlWide<4>/*127:0*/ __Vtemp1738;
    VlWide<4>/*127:0*/ __Vtemp1739;
    VlWide<4>/*127:0*/ __Vtemp1740;
    VlWide<4>/*127:0*/ __Vtemp1741;
    VlWide<4>/*127:0*/ __Vtemp1742;
    VlWide<4>/*127:0*/ __Vtemp1743;
    VlWide<4>/*127:0*/ __Vtemp1744;
    VlWide<4>/*127:0*/ __Vtemp1745;
    VlWide<4>/*127:0*/ __Vtemp1746;
    VlWide<4>/*127:0*/ __Vtemp1747;
    VlWide<4>/*127:0*/ __Vtemp1748;
    VlWide<4>/*127:0*/ __Vtemp1749;
    VlWide<4>/*127:0*/ __Vtemp1750;
    VlWide<4>/*127:0*/ __Vtemp1751;
    VlWide<4>/*127:0*/ __Vtemp1752;
    VlWide<4>/*127:0*/ __Vtemp1753;
    VlWide<4>/*127:0*/ __Vtemp1754;
    VlWide<4>/*127:0*/ __Vtemp1755;
    VlWide<4>/*127:0*/ __Vtemp1756;
    VlWide<4>/*127:0*/ __Vtemp1757;
    VlWide<4>/*127:0*/ __Vtemp1758;
    VlWide<4>/*127:0*/ __Vtemp1759;
    VlWide<4>/*127:0*/ __Vtemp1760;
    VlWide<4>/*127:0*/ __Vtemp1761;
    VlWide<4>/*127:0*/ __Vtemp1762;
    VlWide<4>/*127:0*/ __Vtemp1763;
    VlWide<4>/*127:0*/ __Vtemp1764;
    VlWide<4>/*127:0*/ __Vtemp1765;
    VlWide<4>/*127:0*/ __Vtemp1766;
    VlWide<4>/*127:0*/ __Vtemp1767;
    VlWide<4>/*127:0*/ __Vtemp1768;
    VlWide<4>/*127:0*/ __Vtemp1769;
    VlWide<4>/*127:0*/ __Vtemp1770;
    VlWide<4>/*127:0*/ __Vtemp1771;
    VlWide<4>/*127:0*/ __Vtemp1772;
    VlWide<4>/*127:0*/ __Vtemp1773;
    VlWide<4>/*127:0*/ __Vtemp1774;
    VlWide<4>/*127:0*/ __Vtemp1775;
    VlWide<4>/*127:0*/ __Vtemp1776;
    VlWide<4>/*127:0*/ __Vtemp1777;
    VlWide<4>/*127:0*/ __Vtemp1778;
    VlWide<4>/*127:0*/ __Vtemp1779;
    VlWide<4>/*127:0*/ __Vtemp1780;
    VlWide<4>/*127:0*/ __Vtemp1781;
    VlWide<4>/*127:0*/ __Vtemp1782;
    VlWide<4>/*127:0*/ __Vtemp1783;
    VlWide<4>/*127:0*/ __Vtemp1784;
    VlWide<4>/*127:0*/ __Vtemp1785;
    VlWide<4>/*127:0*/ __Vtemp1786;
    VlWide<4>/*127:0*/ __Vtemp1787;
    VlWide<4>/*127:0*/ __Vtemp1788;
    VlWide<4>/*127:0*/ __Vtemp1789;
    VlWide<4>/*127:0*/ __Vtemp1790;
    VlWide<4>/*127:0*/ __Vtemp1791;
    VlWide<4>/*127:0*/ __Vtemp1792;
    VlWide<4>/*127:0*/ __Vtemp1793;
    VlWide<4>/*127:0*/ __Vtemp1794;
    VlWide<4>/*127:0*/ __Vtemp1795;
    VlWide<4>/*127:0*/ __Vtemp1796;
    VlWide<4>/*127:0*/ __Vtemp1797;
    VlWide<4>/*127:0*/ __Vtemp1798;
    VlWide<4>/*127:0*/ __Vtemp1799;
    VlWide<4>/*127:0*/ __Vtemp1800;
    VlWide<4>/*127:0*/ __Vtemp1801;
    VlWide<4>/*127:0*/ __Vtemp1802;
    VlWide<4>/*127:0*/ __Vtemp1803;
    VlWide<4>/*127:0*/ __Vtemp1804;
    VlWide<4>/*127:0*/ __Vtemp1805;
    VlWide<4>/*127:0*/ __Vtemp1806;
    VlWide<4>/*127:0*/ __Vtemp1807;
    VlWide<4>/*127:0*/ __Vtemp1808;
    VlWide<4>/*127:0*/ __Vtemp1809;
    VlWide<4>/*127:0*/ __Vtemp1810;
    VlWide<4>/*127:0*/ __Vtemp1811;
    VlWide<4>/*127:0*/ __Vtemp1812;
    VlWide<4>/*127:0*/ __Vtemp1845;
    VlWide<4>/*127:0*/ __Vtemp1846;
    VlWide<4>/*127:0*/ __Vtemp1847;
    VlWide<4>/*127:0*/ __Vtemp1848;
    VlWide<3>/*95:0*/ __Vtemp1851;
    VlWide<3>/*95:0*/ __Vtemp1852;
    VlWide<5>/*159:0*/ __Vtemp1854;
    VlWide<5>/*159:0*/ __Vtemp1856;
    VlWide<5>/*159:0*/ __Vtemp1857;
    VlWide<5>/*159:0*/ __Vtemp1858;
    VlWide<5>/*159:0*/ __Vtemp1859;
    VlWide<5>/*159:0*/ __Vtemp1860;
    VlWide<5>/*159:0*/ __Vtemp1862;
    VlWide<5>/*159:0*/ __Vtemp1863;
    VlWide<5>/*159:0*/ __Vtemp1864;
    VlWide<5>/*159:0*/ __Vtemp1865;
    VlWide<5>/*159:0*/ __Vtemp1866;
    VlWide<5>/*159:0*/ __Vtemp1868;
    VlWide<5>/*159:0*/ __Vtemp1869;
    VlWide<5>/*159:0*/ __Vtemp1870;
    VlWide<5>/*159:0*/ __Vtemp1878;
    VlWide<5>/*159:0*/ __Vtemp1879;
    VlWide<5>/*159:0*/ __Vtemp1887;
    VlWide<5>/*159:0*/ __Vtemp1888;
    VlWide<5>/*159:0*/ __Vtemp1892;
    VlWide<3>/*95:0*/ __Vtemp1896;
    VlWide<3>/*95:0*/ __Vtemp1897;
    VlWide<3>/*95:0*/ __Vtemp1898;
    VlWide<5>/*159:0*/ __Vtemp1903;
    VlWide<5>/*159:0*/ __Vtemp1904;
    VlWide<5>/*159:0*/ __Vtemp1905;
    VlWide<3>/*95:0*/ __Vtemp1909;
    VlWide<3>/*95:0*/ __Vtemp1910;
    VlWide<3>/*95:0*/ __Vtemp1911;
    VlWide<4>/*127:0*/ __Vtemp1913;
    VlWide<4>/*127:0*/ __Vtemp1914;
    VlWide<4>/*127:0*/ __Vtemp1915;
    VlWide<4>/*127:0*/ __Vtemp1916;
    VlWide<3>/*95:0*/ __Vtemp1918;
    VlWide<3>/*95:0*/ __Vtemp1919;
    VlWide<3>/*95:0*/ __Vtemp1920;
    VlWide<3>/*95:0*/ __Vtemp1921;
    VlWide<3>/*95:0*/ __Vtemp1922;
    QData/*63:0*/ __Vtask_ramCtrl__0__rdata;
    // Body
    __Vdly__riscv_soc__DOT__axi_ram__DOT__reg_r_state 
        = vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_r_state;
    __Vdly__riscv_soc__DOT__core__DOT__clint_de__DOT__reg_state 
        = vlSelf->riscv_soc__DOT__core__DOT__clint_de__DOT__reg_state;
    vlSelf->__Vdly__riscv_soc__DOT__core__DOT__d_cache__DOT__reg_offset 
        = vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_offset;
    vlSelf->__Vdly__riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state 
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
    vlSelf->__Vdly__riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_bus_state 
        = vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_bus_state;
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
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__RAS_5 = 0ULL;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__pre_valid) {
        if ((2U != (3U & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___GEN_511[0U]))) {
            if ((1U == (3U & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___GEN_511[0U]))) {
                vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__RAS_5 
                    = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___GEN_523;
            }
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__RAS_3 = 0ULL;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__pre_valid) {
        if ((2U != (3U & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___GEN_511[0U]))) {
            if ((1U == (3U & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___GEN_511[0U]))) {
                vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__RAS_3 
                    = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___GEN_521;
            }
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__RAS_0 = 0ULL;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__pre_valid) {
        if ((2U != (3U & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___GEN_511[0U]))) {
            if ((1U == (3U & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___GEN_511[0U]))) {
                vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__RAS_0 
                    = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___GEN_518;
            }
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__RAS_1 = 0ULL;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__pre_valid) {
        if ((2U != (3U & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___GEN_511[0U]))) {
            if ((1U == (3U & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___GEN_511[0U]))) {
                vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__RAS_1 
                    = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___GEN_519;
            }
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__RAS_2 = 0ULL;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__pre_valid) {
        if ((2U != (3U & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___GEN_511[0U]))) {
            if ((1U == (3U & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___GEN_511[0U]))) {
                vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__RAS_2 
                    = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___GEN_520;
            }
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__RAS_4 = 0ULL;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__pre_valid) {
        if ((2U != (3U & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___GEN_511[0U]))) {
            if ((1U == (3U & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___GEN_511[0U]))) {
                vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__RAS_4 
                    = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___GEN_522;
            }
        }
    }
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
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__reg_head = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__pre_valid) {
        if ((2U == (3U & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___GEN_511[0U]))) {
            vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__reg_head 
                = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___reg_head_T_1;
        } else if ((1U == (3U & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___GEN_511[0U]))) {
            vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__reg_head 
                = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___reg_head_T_3;
        }
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
        __Vdly__riscv_soc__DOT__core__DOT__clint_de__DOT__reg_state = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__clint_de__DOT__reg_state) {
        if (vlSelf->riscv_soc__DOT__core__DOT__clint_de__DOT__reg_state) {
            if (vlSelf->riscv_soc__DOT__core__DOT__clint_de__DOT___T_2) {
                __Vdly__riscv_soc__DOT__core__DOT__clint_de__DOT__reg_state = 0U;
            }
        }
    } else {
        __Vdly__riscv_soc__DOT__core__DOT__clint_de__DOT__reg_state 
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
            VL_EXTEND_WQ(128,54, __Vtemp1454, vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag);
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_61[0U] 
                = __Vtemp1454[0U];
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_61[1U] 
                = __Vtemp1454[1U];
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_61[2U] 
                = __Vtemp1454[2U];
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_61[3U] 
                = __Vtemp1454[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_60[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_60[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_60[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_60[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram0_write) {
        if ((0x3cU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp1455, vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag);
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_60[0U] 
                = __Vtemp1455[0U];
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_60[1U] 
                = __Vtemp1455[1U];
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_60[2U] 
                = __Vtemp1455[2U];
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_60[3U] 
                = __Vtemp1455[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_59[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_59[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_59[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_59[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram0_write) {
        if ((0x3bU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp1456, vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag);
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_59[0U] 
                = __Vtemp1456[0U];
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_59[1U] 
                = __Vtemp1456[1U];
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_59[2U] 
                = __Vtemp1456[2U];
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_59[3U] 
                = __Vtemp1456[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_58[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_58[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_58[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_58[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram0_write) {
        if ((0x3aU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp1457, vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag);
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_58[0U] 
                = __Vtemp1457[0U];
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_58[1U] 
                = __Vtemp1457[1U];
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_58[2U] 
                = __Vtemp1457[2U];
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_58[3U] 
                = __Vtemp1457[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_57[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_57[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_57[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_57[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram0_write) {
        if ((0x39U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp1458, vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag);
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_57[0U] 
                = __Vtemp1458[0U];
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_57[1U] 
                = __Vtemp1458[1U];
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_57[2U] 
                = __Vtemp1458[2U];
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_57[3U] 
                = __Vtemp1458[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_56[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_56[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_56[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_56[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram0_write) {
        if ((0x38U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp1459, vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag);
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_56[0U] 
                = __Vtemp1459[0U];
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_56[1U] 
                = __Vtemp1459[1U];
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_56[2U] 
                = __Vtemp1459[2U];
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_56[3U] 
                = __Vtemp1459[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_55[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_55[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_55[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_55[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram0_write) {
        if ((0x37U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp1460, vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag);
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_55[0U] 
                = __Vtemp1460[0U];
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_55[1U] 
                = __Vtemp1460[1U];
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_55[2U] 
                = __Vtemp1460[2U];
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_55[3U] 
                = __Vtemp1460[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_54[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_54[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_54[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_54[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram0_write) {
        if ((0x36U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp1461, vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag);
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_54[0U] 
                = __Vtemp1461[0U];
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_54[1U] 
                = __Vtemp1461[1U];
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_54[2U] 
                = __Vtemp1461[2U];
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_54[3U] 
                = __Vtemp1461[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_53[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_53[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_53[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_53[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram0_write) {
        if ((0x35U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp1462, vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag);
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_53[0U] 
                = __Vtemp1462[0U];
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_53[1U] 
                = __Vtemp1462[1U];
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_53[2U] 
                = __Vtemp1462[2U];
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_53[3U] 
                = __Vtemp1462[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_52[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_52[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_52[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_52[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram0_write) {
        if ((0x34U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp1463, vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag);
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_52[0U] 
                = __Vtemp1463[0U];
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_52[1U] 
                = __Vtemp1463[1U];
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_52[2U] 
                = __Vtemp1463[2U];
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_52[3U] 
                = __Vtemp1463[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_51[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_51[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_51[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_51[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram0_write) {
        if ((0x33U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp1464, vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag);
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_51[0U] 
                = __Vtemp1464[0U];
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_51[1U] 
                = __Vtemp1464[1U];
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_51[2U] 
                = __Vtemp1464[2U];
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_51[3U] 
                = __Vtemp1464[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_50[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_50[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_50[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_50[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram0_write) {
        if ((0x32U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp1465, vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag);
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_50[0U] 
                = __Vtemp1465[0U];
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_50[1U] 
                = __Vtemp1465[1U];
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_50[2U] 
                = __Vtemp1465[2U];
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_50[3U] 
                = __Vtemp1465[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_49[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_49[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_49[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_49[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram0_write) {
        if ((0x31U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp1466, vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag);
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_49[0U] 
                = __Vtemp1466[0U];
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_49[1U] 
                = __Vtemp1466[1U];
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_49[2U] 
                = __Vtemp1466[2U];
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_49[3U] 
                = __Vtemp1466[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_48[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_48[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_48[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_48[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram0_write) {
        if ((0x30U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp1467, vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag);
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_48[0U] 
                = __Vtemp1467[0U];
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_48[1U] 
                = __Vtemp1467[1U];
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_48[2U] 
                = __Vtemp1467[2U];
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_48[3U] 
                = __Vtemp1467[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_47[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_47[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_47[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_47[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram0_write) {
        if ((0x2fU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp1468, vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag);
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_47[0U] 
                = __Vtemp1468[0U];
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_47[1U] 
                = __Vtemp1468[1U];
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_47[2U] 
                = __Vtemp1468[2U];
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_47[3U] 
                = __Vtemp1468[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_46[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_46[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_46[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_46[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram0_write) {
        if ((0x2eU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp1469, vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag);
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_46[0U] 
                = __Vtemp1469[0U];
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_46[1U] 
                = __Vtemp1469[1U];
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_46[2U] 
                = __Vtemp1469[2U];
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_46[3U] 
                = __Vtemp1469[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_45[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_45[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_45[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_45[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram0_write) {
        if ((0x2dU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp1470, vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag);
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_45[0U] 
                = __Vtemp1470[0U];
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_45[1U] 
                = __Vtemp1470[1U];
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_45[2U] 
                = __Vtemp1470[2U];
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_45[3U] 
                = __Vtemp1470[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_44[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_44[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_44[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_44[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram0_write) {
        if ((0x2cU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp1471, vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag);
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_44[0U] 
                = __Vtemp1471[0U];
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_44[1U] 
                = __Vtemp1471[1U];
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_44[2U] 
                = __Vtemp1471[2U];
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_44[3U] 
                = __Vtemp1471[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_43[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_43[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_43[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_43[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram0_write) {
        if ((0x2bU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp1472, vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag);
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_43[0U] 
                = __Vtemp1472[0U];
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_43[1U] 
                = __Vtemp1472[1U];
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_43[2U] 
                = __Vtemp1472[2U];
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_43[3U] 
                = __Vtemp1472[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_61[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_61[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_61[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_61[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram2_write) {
        if ((0x3dU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp1473, vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag);
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_61[0U] 
                = __Vtemp1473[0U];
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_61[1U] 
                = __Vtemp1473[1U];
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_61[2U] 
                = __Vtemp1473[2U];
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_61[3U] 
                = __Vtemp1473[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_60[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_60[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_60[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_60[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram2_write) {
        if ((0x3cU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp1474, vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag);
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_60[0U] 
                = __Vtemp1474[0U];
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_60[1U] 
                = __Vtemp1474[1U];
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_60[2U] 
                = __Vtemp1474[2U];
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_60[3U] 
                = __Vtemp1474[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_59[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_59[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_59[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_59[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram2_write) {
        if ((0x3bU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp1475, vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag);
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_59[0U] 
                = __Vtemp1475[0U];
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_59[1U] 
                = __Vtemp1475[1U];
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_59[2U] 
                = __Vtemp1475[2U];
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_59[3U] 
                = __Vtemp1475[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_58[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_58[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_58[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_58[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram2_write) {
        if ((0x3aU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp1476, vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag);
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_58[0U] 
                = __Vtemp1476[0U];
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_58[1U] 
                = __Vtemp1476[1U];
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_58[2U] 
                = __Vtemp1476[2U];
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_58[3U] 
                = __Vtemp1476[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_57[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_57[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_57[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_57[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram2_write) {
        if ((0x39U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp1477, vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag);
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_57[0U] 
                = __Vtemp1477[0U];
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_57[1U] 
                = __Vtemp1477[1U];
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_57[2U] 
                = __Vtemp1477[2U];
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_57[3U] 
                = __Vtemp1477[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_56[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_56[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_56[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_56[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram2_write) {
        if ((0x38U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp1478, vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag);
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_56[0U] 
                = __Vtemp1478[0U];
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_56[1U] 
                = __Vtemp1478[1U];
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_56[2U] 
                = __Vtemp1478[2U];
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_56[3U] 
                = __Vtemp1478[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_55[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_55[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_55[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_55[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram2_write) {
        if ((0x37U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp1479, vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag);
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_55[0U] 
                = __Vtemp1479[0U];
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_55[1U] 
                = __Vtemp1479[1U];
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_55[2U] 
                = __Vtemp1479[2U];
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_55[3U] 
                = __Vtemp1479[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_54[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_54[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_54[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_54[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram2_write) {
        if ((0x36U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp1480, vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag);
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_54[0U] 
                = __Vtemp1480[0U];
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_54[1U] 
                = __Vtemp1480[1U];
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_54[2U] 
                = __Vtemp1480[2U];
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_54[3U] 
                = __Vtemp1480[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_53[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_53[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_53[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_53[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram2_write) {
        if ((0x35U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp1481, vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag);
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_53[0U] 
                = __Vtemp1481[0U];
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_53[1U] 
                = __Vtemp1481[1U];
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_53[2U] 
                = __Vtemp1481[2U];
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_53[3U] 
                = __Vtemp1481[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_52[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_52[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_52[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_52[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram2_write) {
        if ((0x34U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp1482, vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag);
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_52[0U] 
                = __Vtemp1482[0U];
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_52[1U] 
                = __Vtemp1482[1U];
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_52[2U] 
                = __Vtemp1482[2U];
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_52[3U] 
                = __Vtemp1482[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_51[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_51[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_51[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_51[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram2_write) {
        if ((0x33U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp1483, vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag);
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_51[0U] 
                = __Vtemp1483[0U];
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_51[1U] 
                = __Vtemp1483[1U];
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_51[2U] 
                = __Vtemp1483[2U];
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_51[3U] 
                = __Vtemp1483[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_50[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_50[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_50[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_50[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram2_write) {
        if ((0x32U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp1484, vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag);
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_50[0U] 
                = __Vtemp1484[0U];
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_50[1U] 
                = __Vtemp1484[1U];
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_50[2U] 
                = __Vtemp1484[2U];
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_50[3U] 
                = __Vtemp1484[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_49[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_49[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_49[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_49[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram2_write) {
        if ((0x31U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp1485, vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag);
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_49[0U] 
                = __Vtemp1485[0U];
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_49[1U] 
                = __Vtemp1485[1U];
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_49[2U] 
                = __Vtemp1485[2U];
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_49[3U] 
                = __Vtemp1485[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_48[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_48[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_48[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_48[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram2_write) {
        if ((0x30U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp1486, vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag);
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_48[0U] 
                = __Vtemp1486[0U];
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_48[1U] 
                = __Vtemp1486[1U];
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_48[2U] 
                = __Vtemp1486[2U];
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_48[3U] 
                = __Vtemp1486[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_47[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_47[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_47[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_47[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram2_write) {
        if ((0x2fU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp1487, vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag);
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_47[0U] 
                = __Vtemp1487[0U];
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_47[1U] 
                = __Vtemp1487[1U];
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_47[2U] 
                = __Vtemp1487[2U];
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_47[3U] 
                = __Vtemp1487[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_46[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_46[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_46[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_46[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram2_write) {
        if ((0x2eU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp1488, vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag);
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_46[0U] 
                = __Vtemp1488[0U];
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_46[1U] 
                = __Vtemp1488[1U];
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_46[2U] 
                = __Vtemp1488[2U];
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_46[3U] 
                = __Vtemp1488[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_45[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_45[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_45[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_45[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram2_write) {
        if ((0x2dU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp1489, vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag);
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_45[0U] 
                = __Vtemp1489[0U];
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_45[1U] 
                = __Vtemp1489[1U];
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_45[2U] 
                = __Vtemp1489[2U];
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_45[3U] 
                = __Vtemp1489[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_44[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_44[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_44[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_44[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram2_write) {
        if ((0x2cU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp1490, vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag);
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_44[0U] 
                = __Vtemp1490[0U];
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_44[1U] 
                = __Vtemp1490[1U];
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_44[2U] 
                = __Vtemp1490[2U];
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_44[3U] 
                = __Vtemp1490[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_43[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_43[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_43[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_43[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram2_write) {
        if ((0x2bU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp1491, vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag);
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_43[0U] 
                = __Vtemp1491[0U];
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_43[1U] 
                = __Vtemp1491[1U];
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_43[2U] 
                = __Vtemp1491[2U];
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_43[3U] 
                = __Vtemp1491[3U];
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
            VL_EXTEND_WQ(128,54, __Vtemp1492, vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag);
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_42[0U] 
                = __Vtemp1492[0U];
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_42[1U] 
                = __Vtemp1492[1U];
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_42[2U] 
                = __Vtemp1492[2U];
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_42[3U] 
                = __Vtemp1492[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_41[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_41[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_41[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_41[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram0_write) {
        if ((0x29U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp1493, vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag);
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_41[0U] 
                = __Vtemp1493[0U];
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_41[1U] 
                = __Vtemp1493[1U];
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_41[2U] 
                = __Vtemp1493[2U];
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_41[3U] 
                = __Vtemp1493[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_40[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_40[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_40[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_40[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram0_write) {
        if ((0x28U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp1494, vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag);
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_40[0U] 
                = __Vtemp1494[0U];
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_40[1U] 
                = __Vtemp1494[1U];
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_40[2U] 
                = __Vtemp1494[2U];
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_40[3U] 
                = __Vtemp1494[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_39[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_39[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_39[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_39[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram0_write) {
        if ((0x27U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp1495, vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag);
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_39[0U] 
                = __Vtemp1495[0U];
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_39[1U] 
                = __Vtemp1495[1U];
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_39[2U] 
                = __Vtemp1495[2U];
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_39[3U] 
                = __Vtemp1495[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_38[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_38[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_38[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_38[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram0_write) {
        if ((0x26U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp1496, vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag);
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_38[0U] 
                = __Vtemp1496[0U];
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_38[1U] 
                = __Vtemp1496[1U];
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_38[2U] 
                = __Vtemp1496[2U];
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_38[3U] 
                = __Vtemp1496[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_36[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_36[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_36[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_36[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram0_write) {
        if ((0x24U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp1497, vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag);
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_36[0U] 
                = __Vtemp1497[0U];
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_36[1U] 
                = __Vtemp1497[1U];
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_36[2U] 
                = __Vtemp1497[2U];
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_36[3U] 
                = __Vtemp1497[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_35[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_35[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_35[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_35[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram0_write) {
        if ((0x23U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp1498, vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag);
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_35[0U] 
                = __Vtemp1498[0U];
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_35[1U] 
                = __Vtemp1498[1U];
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_35[2U] 
                = __Vtemp1498[2U];
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_35[3U] 
                = __Vtemp1498[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_34[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_34[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_34[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_34[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram0_write) {
        if ((0x22U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp1499, vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag);
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_34[0U] 
                = __Vtemp1499[0U];
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_34[1U] 
                = __Vtemp1499[1U];
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_34[2U] 
                = __Vtemp1499[2U];
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_34[3U] 
                = __Vtemp1499[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_33[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_33[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_33[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_33[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram0_write) {
        if ((0x21U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp1500, vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag);
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_33[0U] 
                = __Vtemp1500[0U];
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_33[1U] 
                = __Vtemp1500[1U];
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_33[2U] 
                = __Vtemp1500[2U];
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_33[3U] 
                = __Vtemp1500[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_32[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_32[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_32[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_32[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram0_write) {
        if ((0x20U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp1501, vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag);
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_32[0U] 
                = __Vtemp1501[0U];
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_32[1U] 
                = __Vtemp1501[1U];
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_32[2U] 
                = __Vtemp1501[2U];
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_32[3U] 
                = __Vtemp1501[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_26[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_26[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_26[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_26[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram0_write) {
        if ((0x1aU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp1502, vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag);
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_26[0U] 
                = __Vtemp1502[0U];
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_26[1U] 
                = __Vtemp1502[1U];
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_26[2U] 
                = __Vtemp1502[2U];
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_26[3U] 
                = __Vtemp1502[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_25[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_25[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_25[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_25[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram0_write) {
        if ((0x19U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp1503, vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag);
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_25[0U] 
                = __Vtemp1503[0U];
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_25[1U] 
                = __Vtemp1503[1U];
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_25[2U] 
                = __Vtemp1503[2U];
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_25[3U] 
                = __Vtemp1503[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_29[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_29[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_29[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_29[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram0_write) {
        if ((0x1dU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp1504, vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag);
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_29[0U] 
                = __Vtemp1504[0U];
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_29[1U] 
                = __Vtemp1504[1U];
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_29[2U] 
                = __Vtemp1504[2U];
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_29[3U] 
                = __Vtemp1504[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_28[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_28[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_28[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_28[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram0_write) {
        if ((0x1cU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp1505, vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag);
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_28[0U] 
                = __Vtemp1505[0U];
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_28[1U] 
                = __Vtemp1505[1U];
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_28[2U] 
                = __Vtemp1505[2U];
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_28[3U] 
                = __Vtemp1505[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_27[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_27[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_27[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_27[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram0_write) {
        if ((0x1bU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp1506, vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag);
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_27[0U] 
                = __Vtemp1506[0U];
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_27[1U] 
                = __Vtemp1506[1U];
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_27[2U] 
                = __Vtemp1506[2U];
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_27[3U] 
                = __Vtemp1506[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_22[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_22[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_22[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_22[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram0_write) {
        if ((0x16U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp1507, vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag);
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_22[0U] 
                = __Vtemp1507[0U];
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_22[1U] 
                = __Vtemp1507[1U];
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_22[2U] 
                = __Vtemp1507[2U];
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_22[3U] 
                = __Vtemp1507[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_37[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_37[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_37[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_37[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram0_write) {
        if ((0x25U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp1508, vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag);
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_37[0U] 
                = __Vtemp1508[0U];
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_37[1U] 
                = __Vtemp1508[1U];
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_37[2U] 
                = __Vtemp1508[2U];
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_37[3U] 
                = __Vtemp1508[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_31[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_31[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_31[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_31[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram0_write) {
        if ((0x1fU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp1509, vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag);
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_31[0U] 
                = __Vtemp1509[0U];
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_31[1U] 
                = __Vtemp1509[1U];
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_31[2U] 
                = __Vtemp1509[2U];
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_31[3U] 
                = __Vtemp1509[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_30[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_30[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_30[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_30[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram0_write) {
        if ((0x1eU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp1510, vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag);
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_30[0U] 
                = __Vtemp1510[0U];
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_30[1U] 
                = __Vtemp1510[1U];
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_30[2U] 
                = __Vtemp1510[2U];
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_30[3U] 
                = __Vtemp1510[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_23[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_23[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_23[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_23[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram0_write) {
        if ((0x17U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp1511, vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag);
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_23[0U] 
                = __Vtemp1511[0U];
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_23[1U] 
                = __Vtemp1511[1U];
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_23[2U] 
                = __Vtemp1511[2U];
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_23[3U] 
                = __Vtemp1511[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_24[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_24[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_24[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_24[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram0_write) {
        if ((0x18U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp1512, vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag);
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_24[0U] 
                = __Vtemp1512[0U];
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_24[1U] 
                = __Vtemp1512[1U];
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_24[2U] 
                = __Vtemp1512[2U];
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_24[3U] 
                = __Vtemp1512[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_42[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_42[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_42[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_42[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram2_write) {
        if ((0x2aU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp1513, vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag);
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_42[0U] 
                = __Vtemp1513[0U];
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_42[1U] 
                = __Vtemp1513[1U];
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_42[2U] 
                = __Vtemp1513[2U];
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_42[3U] 
                = __Vtemp1513[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_41[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_41[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_41[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_41[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram2_write) {
        if ((0x29U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp1514, vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag);
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_41[0U] 
                = __Vtemp1514[0U];
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_41[1U] 
                = __Vtemp1514[1U];
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_41[2U] 
                = __Vtemp1514[2U];
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_41[3U] 
                = __Vtemp1514[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_40[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_40[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_40[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_40[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram2_write) {
        if ((0x28U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp1515, vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag);
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_40[0U] 
                = __Vtemp1515[0U];
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_40[1U] 
                = __Vtemp1515[1U];
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_40[2U] 
                = __Vtemp1515[2U];
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_40[3U] 
                = __Vtemp1515[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_39[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_39[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_39[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_39[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram2_write) {
        if ((0x27U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp1516, vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag);
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_39[0U] 
                = __Vtemp1516[0U];
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_39[1U] 
                = __Vtemp1516[1U];
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_39[2U] 
                = __Vtemp1516[2U];
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_39[3U] 
                = __Vtemp1516[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_38[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_38[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_38[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_38[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram2_write) {
        if ((0x26U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp1517, vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag);
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_38[0U] 
                = __Vtemp1517[0U];
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_38[1U] 
                = __Vtemp1517[1U];
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_38[2U] 
                = __Vtemp1517[2U];
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_38[3U] 
                = __Vtemp1517[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_36[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_36[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_36[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_36[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram2_write) {
        if ((0x24U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp1518, vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag);
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_36[0U] 
                = __Vtemp1518[0U];
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_36[1U] 
                = __Vtemp1518[1U];
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_36[2U] 
                = __Vtemp1518[2U];
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_36[3U] 
                = __Vtemp1518[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_35[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_35[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_35[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_35[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram2_write) {
        if ((0x23U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp1519, vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag);
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_35[0U] 
                = __Vtemp1519[0U];
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_35[1U] 
                = __Vtemp1519[1U];
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_35[2U] 
                = __Vtemp1519[2U];
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_35[3U] 
                = __Vtemp1519[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_34[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_34[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_34[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_34[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram2_write) {
        if ((0x22U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp1520, vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag);
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_34[0U] 
                = __Vtemp1520[0U];
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_34[1U] 
                = __Vtemp1520[1U];
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_34[2U] 
                = __Vtemp1520[2U];
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_34[3U] 
                = __Vtemp1520[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_33[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_33[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_33[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_33[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram2_write) {
        if ((0x21U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp1521, vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag);
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_33[0U] 
                = __Vtemp1521[0U];
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_33[1U] 
                = __Vtemp1521[1U];
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_33[2U] 
                = __Vtemp1521[2U];
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_33[3U] 
                = __Vtemp1521[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_32[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_32[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_32[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_32[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram2_write) {
        if ((0x20U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp1522, vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag);
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_32[0U] 
                = __Vtemp1522[0U];
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_32[1U] 
                = __Vtemp1522[1U];
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_32[2U] 
                = __Vtemp1522[2U];
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_32[3U] 
                = __Vtemp1522[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_26[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_26[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_26[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_26[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram2_write) {
        if ((0x1aU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp1523, vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag);
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_26[0U] 
                = __Vtemp1523[0U];
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_26[1U] 
                = __Vtemp1523[1U];
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_26[2U] 
                = __Vtemp1523[2U];
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_26[3U] 
                = __Vtemp1523[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_25[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_25[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_25[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_25[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram2_write) {
        if ((0x19U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp1524, vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag);
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_25[0U] 
                = __Vtemp1524[0U];
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_25[1U] 
                = __Vtemp1524[1U];
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_25[2U] 
                = __Vtemp1524[2U];
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_25[3U] 
                = __Vtemp1524[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_29[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_29[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_29[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_29[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram2_write) {
        if ((0x1dU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp1525, vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag);
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_29[0U] 
                = __Vtemp1525[0U];
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_29[1U] 
                = __Vtemp1525[1U];
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_29[2U] 
                = __Vtemp1525[2U];
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_29[3U] 
                = __Vtemp1525[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_28[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_28[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_28[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_28[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram2_write) {
        if ((0x1cU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp1526, vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag);
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_28[0U] 
                = __Vtemp1526[0U];
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_28[1U] 
                = __Vtemp1526[1U];
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_28[2U] 
                = __Vtemp1526[2U];
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_28[3U] 
                = __Vtemp1526[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_27[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_27[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_27[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_27[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram2_write) {
        if ((0x1bU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp1527, vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag);
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_27[0U] 
                = __Vtemp1527[0U];
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_27[1U] 
                = __Vtemp1527[1U];
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_27[2U] 
                = __Vtemp1527[2U];
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_27[3U] 
                = __Vtemp1527[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_22[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_22[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_22[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_22[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram2_write) {
        if ((0x16U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp1528, vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag);
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_22[0U] 
                = __Vtemp1528[0U];
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_22[1U] 
                = __Vtemp1528[1U];
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_22[2U] 
                = __Vtemp1528[2U];
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_22[3U] 
                = __Vtemp1528[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_37[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_37[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_37[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_37[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram2_write) {
        if ((0x25U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp1529, vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag);
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_37[0U] 
                = __Vtemp1529[0U];
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_37[1U] 
                = __Vtemp1529[1U];
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_37[2U] 
                = __Vtemp1529[2U];
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_37[3U] 
                = __Vtemp1529[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_31[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_31[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_31[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_31[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram2_write) {
        if ((0x1fU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp1530, vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag);
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_31[0U] 
                = __Vtemp1530[0U];
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_31[1U] 
                = __Vtemp1530[1U];
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_31[2U] 
                = __Vtemp1530[2U];
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_31[3U] 
                = __Vtemp1530[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_30[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_30[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_30[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_30[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram2_write) {
        if ((0x1eU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp1531, vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag);
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_30[0U] 
                = __Vtemp1531[0U];
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_30[1U] 
                = __Vtemp1531[1U];
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_30[2U] 
                = __Vtemp1531[2U];
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_30[3U] 
                = __Vtemp1531[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_23[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_23[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_23[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_23[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram2_write) {
        if ((0x17U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp1532, vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag);
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_23[0U] 
                = __Vtemp1532[0U];
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_23[1U] 
                = __Vtemp1532[1U];
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_23[2U] 
                = __Vtemp1532[2U];
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_23[3U] 
                = __Vtemp1532[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_24[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_24[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_24[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_24[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram2_write) {
        if ((0x18U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp1533, vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag);
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_24[0U] 
                = __Vtemp1533[0U];
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_24[1U] 
                = __Vtemp1533[1U];
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_24[2U] 
                = __Vtemp1533[2U];
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_24[3U] 
                = __Vtemp1533[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_9[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_9[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_9[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_9[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram0_write) {
        if ((9U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp1534, vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag);
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_9[0U] 
                = __Vtemp1534[0U];
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_9[1U] 
                = __Vtemp1534[1U];
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_9[2U] 
                = __Vtemp1534[2U];
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_9[3U] 
                = __Vtemp1534[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_8[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_8[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_8[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_8[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram0_write) {
        if ((8U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp1535, vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag);
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_8[0U] 
                = __Vtemp1535[0U];
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_8[1U] 
                = __Vtemp1535[1U];
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_8[2U] 
                = __Vtemp1535[2U];
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_8[3U] 
                = __Vtemp1535[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_7[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_7[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_7[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_7[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram0_write) {
        if ((7U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp1536, vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag);
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_7[0U] 
                = __Vtemp1536[0U];
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_7[1U] 
                = __Vtemp1536[1U];
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_7[2U] 
                = __Vtemp1536[2U];
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_7[3U] 
                = __Vtemp1536[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_11[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_11[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_11[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_11[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram0_write) {
        if ((0xbU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp1537, vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag);
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_11[0U] 
                = __Vtemp1537[0U];
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_11[1U] 
                = __Vtemp1537[1U];
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_11[2U] 
                = __Vtemp1537[2U];
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_11[3U] 
                = __Vtemp1537[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_2[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_2[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_2[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_2[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram0_write) {
        if ((2U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp1538, vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag);
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_2[0U] 
                = __Vtemp1538[0U];
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_2[1U] 
                = __Vtemp1538[1U];
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_2[2U] 
                = __Vtemp1538[2U];
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_2[3U] 
                = __Vtemp1538[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_20[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_20[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_20[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_20[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram0_write) {
        if ((0x14U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp1539, vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag);
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_20[0U] 
                = __Vtemp1539[0U];
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_20[1U] 
                = __Vtemp1539[1U];
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_20[2U] 
                = __Vtemp1539[2U];
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_20[3U] 
                = __Vtemp1539[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_6[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_6[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_6[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_6[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram0_write) {
        if ((6U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp1540, vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag);
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_6[0U] 
                = __Vtemp1540[0U];
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_6[1U] 
                = __Vtemp1540[1U];
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_6[2U] 
                = __Vtemp1540[2U];
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_6[3U] 
                = __Vtemp1540[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_14[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_14[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_14[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_14[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram0_write) {
        if ((0xeU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp1541, vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag);
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_14[0U] 
                = __Vtemp1541[0U];
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_14[1U] 
                = __Vtemp1541[1U];
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_14[2U] 
                = __Vtemp1541[2U];
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_14[3U] 
                = __Vtemp1541[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_1[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_1[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_1[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_1[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram0_write) {
        if ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp1542, vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag);
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_1[0U] 
                = __Vtemp1542[0U];
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_1[1U] 
                = __Vtemp1542[1U];
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_1[2U] 
                = __Vtemp1542[2U];
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_1[3U] 
                = __Vtemp1542[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_19[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_19[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_19[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_19[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram0_write) {
        if ((0x13U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp1543, vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag);
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_19[0U] 
                = __Vtemp1543[0U];
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_19[1U] 
                = __Vtemp1543[1U];
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_19[2U] 
                = __Vtemp1543[2U];
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_19[3U] 
                = __Vtemp1543[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_5[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_5[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_5[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_5[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram0_write) {
        if ((5U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp1544, vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag);
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_5[0U] 
                = __Vtemp1544[0U];
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_5[1U] 
                = __Vtemp1544[1U];
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_5[2U] 
                = __Vtemp1544[2U];
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_5[3U] 
                = __Vtemp1544[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_13[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_13[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_13[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_13[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram0_write) {
        if ((0xdU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp1545, vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag);
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_13[0U] 
                = __Vtemp1545[0U];
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_13[1U] 
                = __Vtemp1545[1U];
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_13[2U] 
                = __Vtemp1545[2U];
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_13[3U] 
                = __Vtemp1545[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_0[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_0[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_0[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_0[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram0_write) {
        if ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp1546, vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag);
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_0[0U] 
                = __Vtemp1546[0U];
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_0[1U] 
                = __Vtemp1546[1U];
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_0[2U] 
                = __Vtemp1546[2U];
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_0[3U] 
                = __Vtemp1546[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_18[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_18[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_18[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_18[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram0_write) {
        if ((0x12U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp1547, vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag);
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_18[0U] 
                = __Vtemp1547[0U];
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_18[1U] 
                = __Vtemp1547[1U];
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_18[2U] 
                = __Vtemp1547[2U];
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_18[3U] 
                = __Vtemp1547[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_4[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_4[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_4[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_4[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram0_write) {
        if ((4U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp1548, vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag);
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_4[0U] 
                = __Vtemp1548[0U];
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_4[1U] 
                = __Vtemp1548[1U];
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_4[2U] 
                = __Vtemp1548[2U];
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_4[3U] 
                = __Vtemp1548[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_10[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_10[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_10[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_10[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram0_write) {
        if ((0xaU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp1549, vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag);
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_10[0U] 
                = __Vtemp1549[0U];
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_10[1U] 
                = __Vtemp1549[1U];
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_10[2U] 
                = __Vtemp1549[2U];
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_10[3U] 
                = __Vtemp1549[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_21[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_21[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_21[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_21[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram0_write) {
        if ((0x15U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp1550, vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag);
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_21[0U] 
                = __Vtemp1550[0U];
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_21[1U] 
                = __Vtemp1550[1U];
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_21[2U] 
                = __Vtemp1550[2U];
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_21[3U] 
                = __Vtemp1550[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_3[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_3[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_3[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_3[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram0_write) {
        if ((3U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp1551, vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag);
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_3[0U] 
                = __Vtemp1551[0U];
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_3[1U] 
                = __Vtemp1551[1U];
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_3[2U] 
                = __Vtemp1551[2U];
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_3[3U] 
                = __Vtemp1551[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_12[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_12[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_12[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_12[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram0_write) {
        if ((0xcU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp1552, vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag);
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_12[0U] 
                = __Vtemp1552[0U];
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_12[1U] 
                = __Vtemp1552[1U];
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_12[2U] 
                = __Vtemp1552[2U];
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_12[3U] 
                = __Vtemp1552[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_15[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_15[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_15[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_15[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram0_write) {
        if ((0xfU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp1553, vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag);
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_15[0U] 
                = __Vtemp1553[0U];
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_15[1U] 
                = __Vtemp1553[1U];
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_15[2U] 
                = __Vtemp1553[2U];
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_15[3U] 
                = __Vtemp1553[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_16[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_16[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_16[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_16[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram0_write) {
        if ((0x10U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp1554, vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag);
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_16[0U] 
                = __Vtemp1554[0U];
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_16[1U] 
                = __Vtemp1554[1U];
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_16[2U] 
                = __Vtemp1554[2U];
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_16[3U] 
                = __Vtemp1554[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_17[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_17[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_17[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_17[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram0_write) {
        if ((0x11U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp1555, vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag);
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_17[0U] 
                = __Vtemp1555[0U];
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_17[1U] 
                = __Vtemp1555[1U];
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_17[2U] 
                = __Vtemp1555[2U];
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_17[3U] 
                = __Vtemp1555[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_9[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_9[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_9[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_9[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram2_write) {
        if ((9U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp1556, vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag);
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_9[0U] 
                = __Vtemp1556[0U];
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_9[1U] 
                = __Vtemp1556[1U];
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_9[2U] 
                = __Vtemp1556[2U];
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_9[3U] 
                = __Vtemp1556[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_8[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_8[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_8[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_8[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram2_write) {
        if ((8U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp1557, vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag);
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_8[0U] 
                = __Vtemp1557[0U];
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_8[1U] 
                = __Vtemp1557[1U];
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_8[2U] 
                = __Vtemp1557[2U];
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_8[3U] 
                = __Vtemp1557[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_7[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_7[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_7[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_7[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram2_write) {
        if ((7U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp1558, vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag);
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_7[0U] 
                = __Vtemp1558[0U];
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_7[1U] 
                = __Vtemp1558[1U];
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_7[2U] 
                = __Vtemp1558[2U];
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_7[3U] 
                = __Vtemp1558[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_11[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_11[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_11[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_11[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram2_write) {
        if ((0xbU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp1559, vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag);
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_11[0U] 
                = __Vtemp1559[0U];
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_11[1U] 
                = __Vtemp1559[1U];
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_11[2U] 
                = __Vtemp1559[2U];
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_11[3U] 
                = __Vtemp1559[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_2[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_2[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_2[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_2[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram2_write) {
        if ((2U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp1560, vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag);
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_2[0U] 
                = __Vtemp1560[0U];
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_2[1U] 
                = __Vtemp1560[1U];
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_2[2U] 
                = __Vtemp1560[2U];
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_2[3U] 
                = __Vtemp1560[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_20[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_20[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_20[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_20[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram2_write) {
        if ((0x14U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp1561, vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag);
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_20[0U] 
                = __Vtemp1561[0U];
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_20[1U] 
                = __Vtemp1561[1U];
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_20[2U] 
                = __Vtemp1561[2U];
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_20[3U] 
                = __Vtemp1561[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_6[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_6[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_6[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_6[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram2_write) {
        if ((6U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp1562, vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag);
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_6[0U] 
                = __Vtemp1562[0U];
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_6[1U] 
                = __Vtemp1562[1U];
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_6[2U] 
                = __Vtemp1562[2U];
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_6[3U] 
                = __Vtemp1562[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_14[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_14[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_14[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_14[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram2_write) {
        if ((0xeU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp1563, vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag);
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_14[0U] 
                = __Vtemp1563[0U];
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_14[1U] 
                = __Vtemp1563[1U];
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_14[2U] 
                = __Vtemp1563[2U];
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_14[3U] 
                = __Vtemp1563[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_1[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_1[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_1[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_1[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram2_write) {
        if ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp1564, vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag);
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_1[0U] 
                = __Vtemp1564[0U];
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_1[1U] 
                = __Vtemp1564[1U];
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_1[2U] 
                = __Vtemp1564[2U];
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_1[3U] 
                = __Vtemp1564[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_19[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_19[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_19[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_19[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram2_write) {
        if ((0x13U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp1565, vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag);
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_19[0U] 
                = __Vtemp1565[0U];
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_19[1U] 
                = __Vtemp1565[1U];
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_19[2U] 
                = __Vtemp1565[2U];
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_19[3U] 
                = __Vtemp1565[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_5[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_5[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_5[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_5[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram2_write) {
        if ((5U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp1566, vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag);
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_5[0U] 
                = __Vtemp1566[0U];
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_5[1U] 
                = __Vtemp1566[1U];
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_5[2U] 
                = __Vtemp1566[2U];
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_5[3U] 
                = __Vtemp1566[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_13[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_13[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_13[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_13[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram2_write) {
        if ((0xdU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp1567, vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag);
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_13[0U] 
                = __Vtemp1567[0U];
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_13[1U] 
                = __Vtemp1567[1U];
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_13[2U] 
                = __Vtemp1567[2U];
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_13[3U] 
                = __Vtemp1567[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_0[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_0[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_0[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_0[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram2_write) {
        if ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp1568, vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag);
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_0[0U] 
                = __Vtemp1568[0U];
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_0[1U] 
                = __Vtemp1568[1U];
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_0[2U] 
                = __Vtemp1568[2U];
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_0[3U] 
                = __Vtemp1568[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_18[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_18[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_18[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_18[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram2_write) {
        if ((0x12U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp1569, vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag);
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_18[0U] 
                = __Vtemp1569[0U];
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_18[1U] 
                = __Vtemp1569[1U];
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_18[2U] 
                = __Vtemp1569[2U];
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_18[3U] 
                = __Vtemp1569[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_4[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_4[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_4[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_4[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram2_write) {
        if ((4U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp1570, vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag);
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_4[0U] 
                = __Vtemp1570[0U];
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_4[1U] 
                = __Vtemp1570[1U];
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_4[2U] 
                = __Vtemp1570[2U];
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_4[3U] 
                = __Vtemp1570[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_10[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_10[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_10[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_10[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram2_write) {
        if ((0xaU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp1571, vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag);
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_10[0U] 
                = __Vtemp1571[0U];
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_10[1U] 
                = __Vtemp1571[1U];
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_10[2U] 
                = __Vtemp1571[2U];
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_10[3U] 
                = __Vtemp1571[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_21[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_21[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_21[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_21[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram2_write) {
        if ((0x15U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp1572, vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag);
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_21[0U] 
                = __Vtemp1572[0U];
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_21[1U] 
                = __Vtemp1572[1U];
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_21[2U] 
                = __Vtemp1572[2U];
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_21[3U] 
                = __Vtemp1572[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_3[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_3[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_3[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_3[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram2_write) {
        if ((3U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp1573, vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag);
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_3[0U] 
                = __Vtemp1573[0U];
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_3[1U] 
                = __Vtemp1573[1U];
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_3[2U] 
                = __Vtemp1573[2U];
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_3[3U] 
                = __Vtemp1573[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_12[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_12[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_12[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_12[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram2_write) {
        if ((0xcU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp1574, vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag);
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_12[0U] 
                = __Vtemp1574[0U];
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_12[1U] 
                = __Vtemp1574[1U];
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_12[2U] 
                = __Vtemp1574[2U];
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_12[3U] 
                = __Vtemp1574[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_15[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_15[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_15[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_15[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram2_write) {
        if ((0xfU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp1575, vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag);
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_15[0U] 
                = __Vtemp1575[0U];
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_15[1U] 
                = __Vtemp1575[1U];
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_15[2U] 
                = __Vtemp1575[2U];
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_15[3U] 
                = __Vtemp1575[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_16[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_16[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_16[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_16[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram2_write) {
        if ((0x10U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp1576, vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag);
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_16[0U] 
                = __Vtemp1576[0U];
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_16[1U] 
                = __Vtemp1576[1U];
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_16[2U] 
                = __Vtemp1576[2U];
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_16[3U] 
                = __Vtemp1576[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_17[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_17[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_17[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_17[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram2_write) {
        if ((0x11U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp1577, vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag);
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_17[0U] 
                = __Vtemp1577[0U];
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_17[1U] 
                = __Vtemp1577[1U];
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_17[2U] 
                = __Vtemp1577[2U];
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_17[3U] 
                = __Vtemp1577[3U];
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
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_next_pc = 0ULL;
    } else if (((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu_io_valid) 
                & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__ready))) {
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_next_pc 
            = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__br_valid)
                ? (((QData)((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[1U])) 
                    << 0x20U) | (QData)((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[0U])))
                : 0ULL);
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
        VL_ADD_W(3, __Vtemp1612, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__rem, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__divisor);
        __Vtemp1613[0U] = 1U;
        __Vtemp1613[1U] = 0U;
        __Vtemp1613[2U] = 0U;
        __Vtemp1614[0U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__divisor[0U]);
        __Vtemp1614[1U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__divisor[1U]);
        __Vtemp1614[2U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__divisor[2U]);
        VL_ADD_W(3, __Vtemp1615, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__rem, __Vtemp1614);
        VL_ADD_W(3, __Vtemp1616, __Vtemp1613, __Vtemp1615);
        if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div_io_valid) {
            vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[0U] 
                = ((1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__divisor[2U] 
                          ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__dividend[2U]))
                    ? __Vtemp1612[0U] : __Vtemp1616[0U]);
            vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[1U] 
                = ((1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__divisor[2U] 
                          ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__dividend[2U]))
                    ? __Vtemp1612[1U] : __Vtemp1616[1U]);
            vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[2U] 
                = (1U & ((1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__divisor[2U] 
                                ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__dividend[2U]))
                          ? __Vtemp1612[2U] : __Vtemp1616[2U]));
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
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__regfile_26 = 0ULL;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__execute_io_wb_valid) {
        if ((0x1aU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_dest_addr))) {
            vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__regfile_26 
                = vlSelf->riscv_soc__DOT__core__DOT__execute_io_wb_dest_data;
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__regfile_21 = 0ULL;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__execute_io_wb_valid) {
        if ((0x15U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_dest_addr))) {
            vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__regfile_21 
                = vlSelf->riscv_soc__DOT__core__DOT__execute_io_wb_dest_data;
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__regfile_19 = 0ULL;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__execute_io_wb_valid) {
        if ((0x13U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_dest_addr))) {
            vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__regfile_19 
                = vlSelf->riscv_soc__DOT__core__DOT__execute_io_wb_dest_data;
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__regfile_20 = 0ULL;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__execute_io_wb_valid) {
        if ((0x14U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_dest_addr))) {
            vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__regfile_20 
                = vlSelf->riscv_soc__DOT__core__DOT__execute_io_wb_dest_data;
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__regfile_14 = 0ULL;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__execute_io_wb_valid) {
        if ((0xeU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_dest_addr))) {
            vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__regfile_14 
                = vlSelf->riscv_soc__DOT__core__DOT__execute_io_wb_dest_data;
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__regfile_22 = 0ULL;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__execute_io_wb_valid) {
        if ((0x16U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_dest_addr))) {
            vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__regfile_22 
                = vlSelf->riscv_soc__DOT__core__DOT__execute_io_wb_dest_data;
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__regfile_23 = 0ULL;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__execute_io_wb_valid) {
        if ((0x17U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_dest_addr))) {
            vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__regfile_23 
                = vlSelf->riscv_soc__DOT__core__DOT__execute_io_wb_dest_data;
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__regfile_24 = 0ULL;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__execute_io_wb_valid) {
        if ((0x18U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_dest_addr))) {
            vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__regfile_24 
                = vlSelf->riscv_soc__DOT__core__DOT__execute_io_wb_dest_data;
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__regfile_25 = 0ULL;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__execute_io_wb_valid) {
        if ((0x19U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_dest_addr))) {
            vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__regfile_25 
                = vlSelf->riscv_soc__DOT__core__DOT__execute_io_wb_dest_data;
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__regfile_15 = 0ULL;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__execute_io_wb_valid) {
        if ((0xfU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_dest_addr))) {
            vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__regfile_15 
                = vlSelf->riscv_soc__DOT__core__DOT__execute_io_wb_dest_data;
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__regfile_16 = 0ULL;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__execute_io_wb_valid) {
        if ((0x10U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_dest_addr))) {
            vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__regfile_16 
                = vlSelf->riscv_soc__DOT__core__DOT__execute_io_wb_dest_data;
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__regfile_17 = 0ULL;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__execute_io_wb_valid) {
        if ((0x11U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_dest_addr))) {
            vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__regfile_17 
                = vlSelf->riscv_soc__DOT__core__DOT__execute_io_wb_dest_data;
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__regfile_18 = 0ULL;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__execute_io_wb_valid) {
        if ((0x12U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_dest_addr))) {
            vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__regfile_18 
                = vlSelf->riscv_soc__DOT__core__DOT__execute_io_wb_dest_data;
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__regfile_0 = 0ULL;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__execute_io_wb_valid) {
        if ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_dest_addr))) {
            vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__regfile_0 
                = vlSelf->riscv_soc__DOT__core__DOT__execute_io_wb_dest_data;
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__regfile_9 = 0ULL;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__execute_io_wb_valid) {
        if ((9U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_dest_addr))) {
            vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__regfile_9 
                = vlSelf->riscv_soc__DOT__core__DOT__execute_io_wb_dest_data;
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__regfile_7 = 0ULL;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__execute_io_wb_valid) {
        if ((7U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_dest_addr))) {
            vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__regfile_7 
                = vlSelf->riscv_soc__DOT__core__DOT__execute_io_wb_dest_data;
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__regfile_11 = 0ULL;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__execute_io_wb_valid) {
        if ((0xbU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_dest_addr))) {
            vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__regfile_11 
                = vlSelf->riscv_soc__DOT__core__DOT__execute_io_wb_dest_data;
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__regfile_2 = 0ULL;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__execute_io_wb_valid) {
        if ((2U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_dest_addr))) {
            vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__regfile_2 
                = vlSelf->riscv_soc__DOT__core__DOT__execute_io_wb_dest_data;
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__regfile_10 = 0ULL;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__execute_io_wb_valid) {
        if ((0xaU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_dest_addr))) {
            vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__regfile_10 
                = vlSelf->riscv_soc__DOT__core__DOT__execute_io_wb_dest_data;
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__regfile_1 = 0ULL;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__execute_io_wb_valid) {
        if ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_dest_addr))) {
            vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__regfile_1 
                = vlSelf->riscv_soc__DOT__core__DOT__execute_io_wb_dest_data;
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__regfile_5 = 0ULL;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__execute_io_wb_valid) {
        if ((5U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_dest_addr))) {
            vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__regfile_5 
                = vlSelf->riscv_soc__DOT__core__DOT__execute_io_wb_dest_data;
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__regfile_6 = 0ULL;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__execute_io_wb_valid) {
        if ((6U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_dest_addr))) {
            vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__regfile_6 
                = vlSelf->riscv_soc__DOT__core__DOT__execute_io_wb_dest_data;
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__regfile_8 = 0ULL;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__execute_io_wb_valid) {
        if ((8U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_dest_addr))) {
            vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__regfile_8 
                = vlSelf->riscv_soc__DOT__core__DOT__execute_io_wb_dest_data;
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__regfile_3 = 0ULL;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__execute_io_wb_valid) {
        if ((3U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_dest_addr))) {
            vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__regfile_3 
                = vlSelf->riscv_soc__DOT__core__DOT__execute_io_wb_dest_data;
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__regfile_12 = 0ULL;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__execute_io_wb_valid) {
        if ((0xcU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_dest_addr))) {
            vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__regfile_12 
                = vlSelf->riscv_soc__DOT__core__DOT__execute_io_wb_dest_data;
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__regfile_4 = 0ULL;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__execute_io_wb_valid) {
        if ((4U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_dest_addr))) {
            vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__regfile_4 
                = vlSelf->riscv_soc__DOT__core__DOT__execute_io_wb_dest_data;
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__regfile_13 = 0ULL;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__execute_io_wb_valid) {
        if ((0xdU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_dest_addr))) {
            vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__regfile_13 
                = vlSelf->riscv_soc__DOT__core__DOT__execute_io_wb_dest_data;
        }
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
            VL_EXTEND_WQ(128,54, __Vtemp1625, (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                               >> 0xaU));
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_61[0U] 
                = __Vtemp1625[0U];
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_61[1U] 
                = __Vtemp1625[1U];
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_61[2U] 
                = __Vtemp1625[2U];
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_61[3U] 
                = __Vtemp1625[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_60[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_60[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_60[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_60[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram0_write) {
        if ((0x3cU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp1626, (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                               >> 0xaU));
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_60[0U] 
                = __Vtemp1626[0U];
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_60[1U] 
                = __Vtemp1626[1U];
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_60[2U] 
                = __Vtemp1626[2U];
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_60[3U] 
                = __Vtemp1626[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_59[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_59[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_59[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_59[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram0_write) {
        if ((0x3bU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp1627, (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                               >> 0xaU));
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_59[0U] 
                = __Vtemp1627[0U];
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_59[1U] 
                = __Vtemp1627[1U];
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_59[2U] 
                = __Vtemp1627[2U];
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_59[3U] 
                = __Vtemp1627[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_58[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_58[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_58[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_58[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram0_write) {
        if ((0x3aU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp1628, (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                               >> 0xaU));
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_58[0U] 
                = __Vtemp1628[0U];
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_58[1U] 
                = __Vtemp1628[1U];
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_58[2U] 
                = __Vtemp1628[2U];
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_58[3U] 
                = __Vtemp1628[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_57[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_57[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_57[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_57[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram0_write) {
        if ((0x39U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp1629, (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                               >> 0xaU));
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_57[0U] 
                = __Vtemp1629[0U];
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_57[1U] 
                = __Vtemp1629[1U];
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_57[2U] 
                = __Vtemp1629[2U];
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_57[3U] 
                = __Vtemp1629[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_56[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_56[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_56[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_56[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram0_write) {
        if ((0x38U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp1630, (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                               >> 0xaU));
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_56[0U] 
                = __Vtemp1630[0U];
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_56[1U] 
                = __Vtemp1630[1U];
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_56[2U] 
                = __Vtemp1630[2U];
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_56[3U] 
                = __Vtemp1630[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_55[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_55[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_55[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_55[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram0_write) {
        if ((0x37U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp1631, (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                               >> 0xaU));
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_55[0U] 
                = __Vtemp1631[0U];
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_55[1U] 
                = __Vtemp1631[1U];
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_55[2U] 
                = __Vtemp1631[2U];
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_55[3U] 
                = __Vtemp1631[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_54[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_54[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_54[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_54[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram0_write) {
        if ((0x36U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp1632, (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                               >> 0xaU));
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_54[0U] 
                = __Vtemp1632[0U];
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_54[1U] 
                = __Vtemp1632[1U];
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_54[2U] 
                = __Vtemp1632[2U];
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_54[3U] 
                = __Vtemp1632[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_53[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_53[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_53[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_53[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram0_write) {
        if ((0x35U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp1633, (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                               >> 0xaU));
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_53[0U] 
                = __Vtemp1633[0U];
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_53[1U] 
                = __Vtemp1633[1U];
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_53[2U] 
                = __Vtemp1633[2U];
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_53[3U] 
                = __Vtemp1633[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_52[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_52[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_52[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_52[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram0_write) {
        if ((0x34U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp1634, (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                               >> 0xaU));
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_52[0U] 
                = __Vtemp1634[0U];
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_52[1U] 
                = __Vtemp1634[1U];
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_52[2U] 
                = __Vtemp1634[2U];
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_52[3U] 
                = __Vtemp1634[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_51[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_51[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_51[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_51[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram0_write) {
        if ((0x33U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp1635, (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                               >> 0xaU));
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_51[0U] 
                = __Vtemp1635[0U];
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_51[1U] 
                = __Vtemp1635[1U];
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_51[2U] 
                = __Vtemp1635[2U];
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_51[3U] 
                = __Vtemp1635[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_50[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_50[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_50[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_50[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram0_write) {
        if ((0x32U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp1636, (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                               >> 0xaU));
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_50[0U] 
                = __Vtemp1636[0U];
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_50[1U] 
                = __Vtemp1636[1U];
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_50[2U] 
                = __Vtemp1636[2U];
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_50[3U] 
                = __Vtemp1636[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_49[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_49[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_49[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_49[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram0_write) {
        if ((0x31U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp1637, (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                               >> 0xaU));
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_49[0U] 
                = __Vtemp1637[0U];
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_49[1U] 
                = __Vtemp1637[1U];
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_49[2U] 
                = __Vtemp1637[2U];
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_49[3U] 
                = __Vtemp1637[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_48[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_48[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_48[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_48[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram0_write) {
        if ((0x30U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp1638, (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                               >> 0xaU));
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_48[0U] 
                = __Vtemp1638[0U];
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_48[1U] 
                = __Vtemp1638[1U];
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_48[2U] 
                = __Vtemp1638[2U];
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_48[3U] 
                = __Vtemp1638[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_47[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_47[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_47[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_47[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram0_write) {
        if ((0x2fU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp1639, (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                               >> 0xaU));
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_47[0U] 
                = __Vtemp1639[0U];
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_47[1U] 
                = __Vtemp1639[1U];
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_47[2U] 
                = __Vtemp1639[2U];
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_47[3U] 
                = __Vtemp1639[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_46[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_46[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_46[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_46[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram0_write) {
        if ((0x2eU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp1640, (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                               >> 0xaU));
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_46[0U] 
                = __Vtemp1640[0U];
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_46[1U] 
                = __Vtemp1640[1U];
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_46[2U] 
                = __Vtemp1640[2U];
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_46[3U] 
                = __Vtemp1640[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_45[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_45[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_45[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_45[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram0_write) {
        if ((0x2dU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp1641, (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                               >> 0xaU));
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_45[0U] 
                = __Vtemp1641[0U];
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_45[1U] 
                = __Vtemp1641[1U];
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_45[2U] 
                = __Vtemp1641[2U];
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_45[3U] 
                = __Vtemp1641[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_44[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_44[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_44[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_44[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram0_write) {
        if ((0x2cU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp1642, (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                               >> 0xaU));
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_44[0U] 
                = __Vtemp1642[0U];
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_44[1U] 
                = __Vtemp1642[1U];
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_44[2U] 
                = __Vtemp1642[2U];
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_44[3U] 
                = __Vtemp1642[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_43[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_43[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_43[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_43[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram0_write) {
        if ((0x2bU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp1643, (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                               >> 0xaU));
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_43[0U] 
                = __Vtemp1643[0U];
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_43[1U] 
                = __Vtemp1643[1U];
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_43[2U] 
                = __Vtemp1643[2U];
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_43[3U] 
                = __Vtemp1643[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_61[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_61[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_61[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_61[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram1_write) {
        if ((0x3dU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp1644, (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                               >> 0xaU));
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_61[0U] 
                = __Vtemp1644[0U];
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_61[1U] 
                = __Vtemp1644[1U];
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_61[2U] 
                = __Vtemp1644[2U];
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_61[3U] 
                = __Vtemp1644[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_60[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_60[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_60[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_60[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram1_write) {
        if ((0x3cU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp1645, (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                               >> 0xaU));
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_60[0U] 
                = __Vtemp1645[0U];
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_60[1U] 
                = __Vtemp1645[1U];
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_60[2U] 
                = __Vtemp1645[2U];
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_60[3U] 
                = __Vtemp1645[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_59[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_59[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_59[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_59[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram1_write) {
        if ((0x3bU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp1646, (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                               >> 0xaU));
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_59[0U] 
                = __Vtemp1646[0U];
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_59[1U] 
                = __Vtemp1646[1U];
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_59[2U] 
                = __Vtemp1646[2U];
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_59[3U] 
                = __Vtemp1646[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_58[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_58[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_58[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_58[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram1_write) {
        if ((0x3aU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp1647, (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                               >> 0xaU));
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_58[0U] 
                = __Vtemp1647[0U];
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_58[1U] 
                = __Vtemp1647[1U];
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_58[2U] 
                = __Vtemp1647[2U];
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_58[3U] 
                = __Vtemp1647[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_57[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_57[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_57[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_57[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram1_write) {
        if ((0x39U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp1648, (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                               >> 0xaU));
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_57[0U] 
                = __Vtemp1648[0U];
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_57[1U] 
                = __Vtemp1648[1U];
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_57[2U] 
                = __Vtemp1648[2U];
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_57[3U] 
                = __Vtemp1648[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_56[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_56[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_56[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_56[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram1_write) {
        if ((0x38U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp1649, (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                               >> 0xaU));
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_56[0U] 
                = __Vtemp1649[0U];
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_56[1U] 
                = __Vtemp1649[1U];
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_56[2U] 
                = __Vtemp1649[2U];
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_56[3U] 
                = __Vtemp1649[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_55[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_55[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_55[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_55[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram1_write) {
        if ((0x37U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp1650, (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                               >> 0xaU));
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_55[0U] 
                = __Vtemp1650[0U];
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_55[1U] 
                = __Vtemp1650[1U];
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_55[2U] 
                = __Vtemp1650[2U];
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_55[3U] 
                = __Vtemp1650[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_54[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_54[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_54[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_54[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram1_write) {
        if ((0x36U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp1651, (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                               >> 0xaU));
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_54[0U] 
                = __Vtemp1651[0U];
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_54[1U] 
                = __Vtemp1651[1U];
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_54[2U] 
                = __Vtemp1651[2U];
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_54[3U] 
                = __Vtemp1651[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_53[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_53[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_53[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_53[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram1_write) {
        if ((0x35U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp1652, (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                               >> 0xaU));
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_53[0U] 
                = __Vtemp1652[0U];
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_53[1U] 
                = __Vtemp1652[1U];
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_53[2U] 
                = __Vtemp1652[2U];
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_53[3U] 
                = __Vtemp1652[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_52[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_52[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_52[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_52[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram1_write) {
        if ((0x34U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp1653, (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                               >> 0xaU));
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_52[0U] 
                = __Vtemp1653[0U];
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_52[1U] 
                = __Vtemp1653[1U];
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_52[2U] 
                = __Vtemp1653[2U];
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_52[3U] 
                = __Vtemp1653[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_51[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_51[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_51[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_51[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram1_write) {
        if ((0x33U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp1654, (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                               >> 0xaU));
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_51[0U] 
                = __Vtemp1654[0U];
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_51[1U] 
                = __Vtemp1654[1U];
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_51[2U] 
                = __Vtemp1654[2U];
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_51[3U] 
                = __Vtemp1654[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_50[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_50[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_50[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_50[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram1_write) {
        if ((0x32U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp1655, (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                               >> 0xaU));
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_50[0U] 
                = __Vtemp1655[0U];
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_50[1U] 
                = __Vtemp1655[1U];
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_50[2U] 
                = __Vtemp1655[2U];
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_50[3U] 
                = __Vtemp1655[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_49[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_49[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_49[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_49[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram1_write) {
        if ((0x31U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp1656, (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                               >> 0xaU));
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_49[0U] 
                = __Vtemp1656[0U];
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_49[1U] 
                = __Vtemp1656[1U];
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_49[2U] 
                = __Vtemp1656[2U];
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_49[3U] 
                = __Vtemp1656[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_48[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_48[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_48[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_48[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram1_write) {
        if ((0x30U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp1657, (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                               >> 0xaU));
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_48[0U] 
                = __Vtemp1657[0U];
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_48[1U] 
                = __Vtemp1657[1U];
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_48[2U] 
                = __Vtemp1657[2U];
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_48[3U] 
                = __Vtemp1657[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_47[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_47[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_47[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_47[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram1_write) {
        if ((0x2fU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp1658, (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                               >> 0xaU));
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_47[0U] 
                = __Vtemp1658[0U];
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_47[1U] 
                = __Vtemp1658[1U];
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_47[2U] 
                = __Vtemp1658[2U];
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_47[3U] 
                = __Vtemp1658[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_46[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_46[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_46[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_46[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram1_write) {
        if ((0x2eU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp1659, (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                               >> 0xaU));
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_46[0U] 
                = __Vtemp1659[0U];
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_46[1U] 
                = __Vtemp1659[1U];
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_46[2U] 
                = __Vtemp1659[2U];
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_46[3U] 
                = __Vtemp1659[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_45[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_45[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_45[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_45[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram1_write) {
        if ((0x2dU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp1660, (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                               >> 0xaU));
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_45[0U] 
                = __Vtemp1660[0U];
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_45[1U] 
                = __Vtemp1660[1U];
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_45[2U] 
                = __Vtemp1660[2U];
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_45[3U] 
                = __Vtemp1660[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_44[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_44[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_44[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_44[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram1_write) {
        if ((0x2cU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp1661, (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                               >> 0xaU));
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_44[0U] 
                = __Vtemp1661[0U];
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_44[1U] 
                = __Vtemp1661[1U];
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_44[2U] 
                = __Vtemp1661[2U];
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_44[3U] 
                = __Vtemp1661[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_43[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_43[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_43[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_43[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram1_write) {
        if ((0x2bU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp1662, (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                               >> 0xaU));
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_43[0U] 
                = __Vtemp1662[0U];
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_43[1U] 
                = __Vtemp1662[1U];
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_43[2U] 
                = __Vtemp1662[2U];
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_43[3U] 
                = __Vtemp1662[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_42[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_42[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_42[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_42[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram0_write) {
        if ((0x2aU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp1663, (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                               >> 0xaU));
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_42[0U] 
                = __Vtemp1663[0U];
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_42[1U] 
                = __Vtemp1663[1U];
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_42[2U] 
                = __Vtemp1663[2U];
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_42[3U] 
                = __Vtemp1663[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_41[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_41[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_41[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_41[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram0_write) {
        if ((0x29U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp1664, (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                               >> 0xaU));
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_41[0U] 
                = __Vtemp1664[0U];
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_41[1U] 
                = __Vtemp1664[1U];
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_41[2U] 
                = __Vtemp1664[2U];
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_41[3U] 
                = __Vtemp1664[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_40[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_40[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_40[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_40[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram0_write) {
        if ((0x28U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp1665, (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                               >> 0xaU));
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_40[0U] 
                = __Vtemp1665[0U];
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_40[1U] 
                = __Vtemp1665[1U];
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_40[2U] 
                = __Vtemp1665[2U];
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_40[3U] 
                = __Vtemp1665[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_39[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_39[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_39[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_39[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram0_write) {
        if ((0x27U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp1666, (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                               >> 0xaU));
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_39[0U] 
                = __Vtemp1666[0U];
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_39[1U] 
                = __Vtemp1666[1U];
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_39[2U] 
                = __Vtemp1666[2U];
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_39[3U] 
                = __Vtemp1666[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_38[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_38[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_38[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_38[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram0_write) {
        if ((0x26U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp1667, (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                               >> 0xaU));
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_38[0U] 
                = __Vtemp1667[0U];
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_38[1U] 
                = __Vtemp1667[1U];
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_38[2U] 
                = __Vtemp1667[2U];
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_38[3U] 
                = __Vtemp1667[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_36[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_36[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_36[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_36[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram0_write) {
        if ((0x24U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp1668, (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                               >> 0xaU));
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_36[0U] 
                = __Vtemp1668[0U];
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_36[1U] 
                = __Vtemp1668[1U];
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_36[2U] 
                = __Vtemp1668[2U];
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_36[3U] 
                = __Vtemp1668[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_35[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_35[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_35[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_35[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram0_write) {
        if ((0x23U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp1669, (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                               >> 0xaU));
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_35[0U] 
                = __Vtemp1669[0U];
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_35[1U] 
                = __Vtemp1669[1U];
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_35[2U] 
                = __Vtemp1669[2U];
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_35[3U] 
                = __Vtemp1669[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_34[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_34[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_34[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_34[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram0_write) {
        if ((0x22U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp1670, (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                               >> 0xaU));
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_34[0U] 
                = __Vtemp1670[0U];
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_34[1U] 
                = __Vtemp1670[1U];
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_34[2U] 
                = __Vtemp1670[2U];
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_34[3U] 
                = __Vtemp1670[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_33[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_33[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_33[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_33[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram0_write) {
        if ((0x21U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp1671, (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                               >> 0xaU));
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_33[0U] 
                = __Vtemp1671[0U];
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_33[1U] 
                = __Vtemp1671[1U];
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_33[2U] 
                = __Vtemp1671[2U];
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_33[3U] 
                = __Vtemp1671[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_32[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_32[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_32[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_32[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram0_write) {
        if ((0x20U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp1672, (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                               >> 0xaU));
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_32[0U] 
                = __Vtemp1672[0U];
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_32[1U] 
                = __Vtemp1672[1U];
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_32[2U] 
                = __Vtemp1672[2U];
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_32[3U] 
                = __Vtemp1672[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_26[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_26[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_26[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_26[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram0_write) {
        if ((0x1aU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp1673, (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                               >> 0xaU));
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_26[0U] 
                = __Vtemp1673[0U];
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_26[1U] 
                = __Vtemp1673[1U];
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_26[2U] 
                = __Vtemp1673[2U];
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_26[3U] 
                = __Vtemp1673[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_25[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_25[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_25[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_25[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram0_write) {
        if ((0x19U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp1674, (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                               >> 0xaU));
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_25[0U] 
                = __Vtemp1674[0U];
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_25[1U] 
                = __Vtemp1674[1U];
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_25[2U] 
                = __Vtemp1674[2U];
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_25[3U] 
                = __Vtemp1674[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_29[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_29[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_29[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_29[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram0_write) {
        if ((0x1dU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp1675, (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                               >> 0xaU));
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_29[0U] 
                = __Vtemp1675[0U];
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_29[1U] 
                = __Vtemp1675[1U];
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_29[2U] 
                = __Vtemp1675[2U];
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_29[3U] 
                = __Vtemp1675[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_28[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_28[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_28[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_28[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram0_write) {
        if ((0x1cU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp1676, (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                               >> 0xaU));
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_28[0U] 
                = __Vtemp1676[0U];
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_28[1U] 
                = __Vtemp1676[1U];
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_28[2U] 
                = __Vtemp1676[2U];
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_28[3U] 
                = __Vtemp1676[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_27[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_27[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_27[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_27[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram0_write) {
        if ((0x1bU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp1677, (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                               >> 0xaU));
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_27[0U] 
                = __Vtemp1677[0U];
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_27[1U] 
                = __Vtemp1677[1U];
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_27[2U] 
                = __Vtemp1677[2U];
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_27[3U] 
                = __Vtemp1677[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_22[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_22[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_22[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_22[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram0_write) {
        if ((0x16U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp1678, (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                               >> 0xaU));
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_22[0U] 
                = __Vtemp1678[0U];
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_22[1U] 
                = __Vtemp1678[1U];
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_22[2U] 
                = __Vtemp1678[2U];
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_22[3U] 
                = __Vtemp1678[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_37[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_37[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_37[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_37[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram0_write) {
        if ((0x25U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp1679, (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                               >> 0xaU));
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_37[0U] 
                = __Vtemp1679[0U];
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_37[1U] 
                = __Vtemp1679[1U];
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_37[2U] 
                = __Vtemp1679[2U];
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_37[3U] 
                = __Vtemp1679[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_31[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_31[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_31[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_31[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram0_write) {
        if ((0x1fU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp1680, (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                               >> 0xaU));
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_31[0U] 
                = __Vtemp1680[0U];
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_31[1U] 
                = __Vtemp1680[1U];
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_31[2U] 
                = __Vtemp1680[2U];
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_31[3U] 
                = __Vtemp1680[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_30[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_30[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_30[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_30[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram0_write) {
        if ((0x1eU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp1681, (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                               >> 0xaU));
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_30[0U] 
                = __Vtemp1681[0U];
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_30[1U] 
                = __Vtemp1681[1U];
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_30[2U] 
                = __Vtemp1681[2U];
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_30[3U] 
                = __Vtemp1681[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_23[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_23[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_23[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_23[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram0_write) {
        if ((0x17U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp1682, (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                               >> 0xaU));
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_23[0U] 
                = __Vtemp1682[0U];
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_23[1U] 
                = __Vtemp1682[1U];
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_23[2U] 
                = __Vtemp1682[2U];
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_23[3U] 
                = __Vtemp1682[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_24[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_24[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_24[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_24[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram0_write) {
        if ((0x18U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp1683, (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                               >> 0xaU));
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_24[0U] 
                = __Vtemp1683[0U];
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_24[1U] 
                = __Vtemp1683[1U];
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_24[2U] 
                = __Vtemp1683[2U];
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_24[3U] 
                = __Vtemp1683[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_42[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_42[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_42[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_42[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram1_write) {
        if ((0x2aU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp1684, (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                               >> 0xaU));
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_42[0U] 
                = __Vtemp1684[0U];
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_42[1U] 
                = __Vtemp1684[1U];
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_42[2U] 
                = __Vtemp1684[2U];
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_42[3U] 
                = __Vtemp1684[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_41[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_41[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_41[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_41[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram1_write) {
        if ((0x29U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp1685, (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                               >> 0xaU));
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_41[0U] 
                = __Vtemp1685[0U];
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_41[1U] 
                = __Vtemp1685[1U];
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_41[2U] 
                = __Vtemp1685[2U];
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_41[3U] 
                = __Vtemp1685[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_40[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_40[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_40[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_40[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram1_write) {
        if ((0x28U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp1686, (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                               >> 0xaU));
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_40[0U] 
                = __Vtemp1686[0U];
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_40[1U] 
                = __Vtemp1686[1U];
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_40[2U] 
                = __Vtemp1686[2U];
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_40[3U] 
                = __Vtemp1686[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_39[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_39[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_39[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_39[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram1_write) {
        if ((0x27U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp1687, (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                               >> 0xaU));
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_39[0U] 
                = __Vtemp1687[0U];
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_39[1U] 
                = __Vtemp1687[1U];
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_39[2U] 
                = __Vtemp1687[2U];
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_39[3U] 
                = __Vtemp1687[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_38[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_38[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_38[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_38[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram1_write) {
        if ((0x26U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp1688, (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                               >> 0xaU));
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_38[0U] 
                = __Vtemp1688[0U];
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_38[1U] 
                = __Vtemp1688[1U];
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_38[2U] 
                = __Vtemp1688[2U];
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_38[3U] 
                = __Vtemp1688[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_36[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_36[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_36[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_36[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram1_write) {
        if ((0x24U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp1689, (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                               >> 0xaU));
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_36[0U] 
                = __Vtemp1689[0U];
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_36[1U] 
                = __Vtemp1689[1U];
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_36[2U] 
                = __Vtemp1689[2U];
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_36[3U] 
                = __Vtemp1689[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_35[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_35[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_35[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_35[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram1_write) {
        if ((0x23U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp1690, (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                               >> 0xaU));
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_35[0U] 
                = __Vtemp1690[0U];
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_35[1U] 
                = __Vtemp1690[1U];
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_35[2U] 
                = __Vtemp1690[2U];
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_35[3U] 
                = __Vtemp1690[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_34[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_34[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_34[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_34[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram1_write) {
        if ((0x22U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp1691, (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                               >> 0xaU));
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_34[0U] 
                = __Vtemp1691[0U];
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_34[1U] 
                = __Vtemp1691[1U];
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_34[2U] 
                = __Vtemp1691[2U];
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_34[3U] 
                = __Vtemp1691[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_33[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_33[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_33[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_33[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram1_write) {
        if ((0x21U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp1692, (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                               >> 0xaU));
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_33[0U] 
                = __Vtemp1692[0U];
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_33[1U] 
                = __Vtemp1692[1U];
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_33[2U] 
                = __Vtemp1692[2U];
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_33[3U] 
                = __Vtemp1692[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_32[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_32[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_32[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_32[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram1_write) {
        if ((0x20U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp1693, (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                               >> 0xaU));
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_32[0U] 
                = __Vtemp1693[0U];
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_32[1U] 
                = __Vtemp1693[1U];
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_32[2U] 
                = __Vtemp1693[2U];
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_32[3U] 
                = __Vtemp1693[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_26[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_26[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_26[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_26[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram1_write) {
        if ((0x1aU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp1694, (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                               >> 0xaU));
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_26[0U] 
                = __Vtemp1694[0U];
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_26[1U] 
                = __Vtemp1694[1U];
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_26[2U] 
                = __Vtemp1694[2U];
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_26[3U] 
                = __Vtemp1694[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_25[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_25[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_25[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_25[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram1_write) {
        if ((0x19U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp1695, (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                               >> 0xaU));
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_25[0U] 
                = __Vtemp1695[0U];
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_25[1U] 
                = __Vtemp1695[1U];
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_25[2U] 
                = __Vtemp1695[2U];
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_25[3U] 
                = __Vtemp1695[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_29[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_29[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_29[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_29[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram1_write) {
        if ((0x1dU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp1696, (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                               >> 0xaU));
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_29[0U] 
                = __Vtemp1696[0U];
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_29[1U] 
                = __Vtemp1696[1U];
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_29[2U] 
                = __Vtemp1696[2U];
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_29[3U] 
                = __Vtemp1696[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_28[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_28[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_28[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_28[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram1_write) {
        if ((0x1cU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp1697, (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                               >> 0xaU));
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_28[0U] 
                = __Vtemp1697[0U];
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_28[1U] 
                = __Vtemp1697[1U];
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_28[2U] 
                = __Vtemp1697[2U];
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_28[3U] 
                = __Vtemp1697[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_27[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_27[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_27[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_27[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram1_write) {
        if ((0x1bU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp1698, (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                               >> 0xaU));
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_27[0U] 
                = __Vtemp1698[0U];
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_27[1U] 
                = __Vtemp1698[1U];
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_27[2U] 
                = __Vtemp1698[2U];
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_27[3U] 
                = __Vtemp1698[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_22[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_22[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_22[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_22[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram1_write) {
        if ((0x16U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp1699, (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                               >> 0xaU));
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_22[0U] 
                = __Vtemp1699[0U];
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_22[1U] 
                = __Vtemp1699[1U];
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_22[2U] 
                = __Vtemp1699[2U];
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_22[3U] 
                = __Vtemp1699[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_37[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_37[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_37[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_37[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram1_write) {
        if ((0x25U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp1700, (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                               >> 0xaU));
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_37[0U] 
                = __Vtemp1700[0U];
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_37[1U] 
                = __Vtemp1700[1U];
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_37[2U] 
                = __Vtemp1700[2U];
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_37[3U] 
                = __Vtemp1700[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_31[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_31[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_31[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_31[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram1_write) {
        if ((0x1fU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp1701, (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                               >> 0xaU));
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_31[0U] 
                = __Vtemp1701[0U];
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_31[1U] 
                = __Vtemp1701[1U];
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_31[2U] 
                = __Vtemp1701[2U];
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_31[3U] 
                = __Vtemp1701[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_30[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_30[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_30[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_30[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram1_write) {
        if ((0x1eU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp1702, (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                               >> 0xaU));
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_30[0U] 
                = __Vtemp1702[0U];
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_30[1U] 
                = __Vtemp1702[1U];
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_30[2U] 
                = __Vtemp1702[2U];
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_30[3U] 
                = __Vtemp1702[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_23[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_23[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_23[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_23[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram1_write) {
        if ((0x17U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp1703, (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                               >> 0xaU));
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_23[0U] 
                = __Vtemp1703[0U];
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_23[1U] 
                = __Vtemp1703[1U];
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_23[2U] 
                = __Vtemp1703[2U];
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_23[3U] 
                = __Vtemp1703[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_24[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_24[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_24[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_24[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram1_write) {
        if ((0x18U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp1704, (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                               >> 0xaU));
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_24[0U] 
                = __Vtemp1704[0U];
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_24[1U] 
                = __Vtemp1704[1U];
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_24[2U] 
                = __Vtemp1704[2U];
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_24[3U] 
                = __Vtemp1704[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_9[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_9[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_9[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_9[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram0_write) {
        if ((9U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp1705, (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                               >> 0xaU));
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_9[0U] 
                = __Vtemp1705[0U];
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_9[1U] 
                = __Vtemp1705[1U];
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_9[2U] 
                = __Vtemp1705[2U];
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_9[3U] 
                = __Vtemp1705[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_8[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_8[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_8[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_8[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram0_write) {
        if ((8U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp1706, (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                               >> 0xaU));
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_8[0U] 
                = __Vtemp1706[0U];
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_8[1U] 
                = __Vtemp1706[1U];
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_8[2U] 
                = __Vtemp1706[2U];
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_8[3U] 
                = __Vtemp1706[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_7[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_7[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_7[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_7[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram0_write) {
        if ((7U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp1707, (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                               >> 0xaU));
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_7[0U] 
                = __Vtemp1707[0U];
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_7[1U] 
                = __Vtemp1707[1U];
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_7[2U] 
                = __Vtemp1707[2U];
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_7[3U] 
                = __Vtemp1707[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_11[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_11[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_11[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_11[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram0_write) {
        if ((0xbU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp1708, (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                               >> 0xaU));
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_11[0U] 
                = __Vtemp1708[0U];
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_11[1U] 
                = __Vtemp1708[1U];
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_11[2U] 
                = __Vtemp1708[2U];
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_11[3U] 
                = __Vtemp1708[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_2[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_2[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_2[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_2[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram0_write) {
        if ((2U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp1709, (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                               >> 0xaU));
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_2[0U] 
                = __Vtemp1709[0U];
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_2[1U] 
                = __Vtemp1709[1U];
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_2[2U] 
                = __Vtemp1709[2U];
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_2[3U] 
                = __Vtemp1709[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_20[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_20[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_20[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_20[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram0_write) {
        if ((0x14U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp1710, (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                               >> 0xaU));
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_20[0U] 
                = __Vtemp1710[0U];
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_20[1U] 
                = __Vtemp1710[1U];
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_20[2U] 
                = __Vtemp1710[2U];
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_20[3U] 
                = __Vtemp1710[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_6[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_6[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_6[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_6[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram0_write) {
        if ((6U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp1711, (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                               >> 0xaU));
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_6[0U] 
                = __Vtemp1711[0U];
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_6[1U] 
                = __Vtemp1711[1U];
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_6[2U] 
                = __Vtemp1711[2U];
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_6[3U] 
                = __Vtemp1711[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_14[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_14[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_14[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_14[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram0_write) {
        if ((0xeU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp1712, (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                               >> 0xaU));
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_14[0U] 
                = __Vtemp1712[0U];
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_14[1U] 
                = __Vtemp1712[1U];
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_14[2U] 
                = __Vtemp1712[2U];
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_14[3U] 
                = __Vtemp1712[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_1[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_1[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_1[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_1[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram0_write) {
        if ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp1713, (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                               >> 0xaU));
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_1[0U] 
                = __Vtemp1713[0U];
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_1[1U] 
                = __Vtemp1713[1U];
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_1[2U] 
                = __Vtemp1713[2U];
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_1[3U] 
                = __Vtemp1713[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_19[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_19[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_19[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_19[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram0_write) {
        if ((0x13U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp1714, (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                               >> 0xaU));
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_19[0U] 
                = __Vtemp1714[0U];
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_19[1U] 
                = __Vtemp1714[1U];
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_19[2U] 
                = __Vtemp1714[2U];
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_19[3U] 
                = __Vtemp1714[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_5[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_5[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_5[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_5[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram0_write) {
        if ((5U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp1715, (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                               >> 0xaU));
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_5[0U] 
                = __Vtemp1715[0U];
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_5[1U] 
                = __Vtemp1715[1U];
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_5[2U] 
                = __Vtemp1715[2U];
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_5[3U] 
                = __Vtemp1715[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_13[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_13[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_13[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_13[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram0_write) {
        if ((0xdU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp1716, (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                               >> 0xaU));
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_13[0U] 
                = __Vtemp1716[0U];
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_13[1U] 
                = __Vtemp1716[1U];
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_13[2U] 
                = __Vtemp1716[2U];
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_13[3U] 
                = __Vtemp1716[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_0[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_0[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_0[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_0[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram0_write) {
        if ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp1717, (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                               >> 0xaU));
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_0[0U] 
                = __Vtemp1717[0U];
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_0[1U] 
                = __Vtemp1717[1U];
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_0[2U] 
                = __Vtemp1717[2U];
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_0[3U] 
                = __Vtemp1717[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_18[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_18[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_18[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_18[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram0_write) {
        if ((0x12U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp1718, (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                               >> 0xaU));
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_18[0U] 
                = __Vtemp1718[0U];
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_18[1U] 
                = __Vtemp1718[1U];
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_18[2U] 
                = __Vtemp1718[2U];
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_18[3U] 
                = __Vtemp1718[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_4[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_4[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_4[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_4[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram0_write) {
        if ((4U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp1719, (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                               >> 0xaU));
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_4[0U] 
                = __Vtemp1719[0U];
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_4[1U] 
                = __Vtemp1719[1U];
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_4[2U] 
                = __Vtemp1719[2U];
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_4[3U] 
                = __Vtemp1719[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_10[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_10[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_10[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_10[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram0_write) {
        if ((0xaU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp1720, (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                               >> 0xaU));
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_10[0U] 
                = __Vtemp1720[0U];
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_10[1U] 
                = __Vtemp1720[1U];
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_10[2U] 
                = __Vtemp1720[2U];
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_10[3U] 
                = __Vtemp1720[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_21[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_21[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_21[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_21[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram0_write) {
        if ((0x15U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp1721, (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                               >> 0xaU));
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_21[0U] 
                = __Vtemp1721[0U];
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_21[1U] 
                = __Vtemp1721[1U];
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_21[2U] 
                = __Vtemp1721[2U];
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_21[3U] 
                = __Vtemp1721[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_3[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_3[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_3[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_3[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram0_write) {
        if ((3U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp1722, (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                               >> 0xaU));
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_3[0U] 
                = __Vtemp1722[0U];
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_3[1U] 
                = __Vtemp1722[1U];
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_3[2U] 
                = __Vtemp1722[2U];
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_3[3U] 
                = __Vtemp1722[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_12[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_12[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_12[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_12[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram0_write) {
        if ((0xcU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp1723, (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                               >> 0xaU));
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_12[0U] 
                = __Vtemp1723[0U];
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_12[1U] 
                = __Vtemp1723[1U];
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_12[2U] 
                = __Vtemp1723[2U];
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_12[3U] 
                = __Vtemp1723[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_15[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_15[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_15[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_15[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram0_write) {
        if ((0xfU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp1724, (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                               >> 0xaU));
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_15[0U] 
                = __Vtemp1724[0U];
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_15[1U] 
                = __Vtemp1724[1U];
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_15[2U] 
                = __Vtemp1724[2U];
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_15[3U] 
                = __Vtemp1724[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_16[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_16[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_16[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_16[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram0_write) {
        if ((0x10U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp1725, (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                               >> 0xaU));
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_16[0U] 
                = __Vtemp1725[0U];
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_16[1U] 
                = __Vtemp1725[1U];
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_16[2U] 
                = __Vtemp1725[2U];
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_16[3U] 
                = __Vtemp1725[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_17[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_17[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_17[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_17[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram0_write) {
        if ((0x11U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp1726, (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                               >> 0xaU));
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_17[0U] 
                = __Vtemp1726[0U];
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_17[1U] 
                = __Vtemp1726[1U];
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_17[2U] 
                = __Vtemp1726[2U];
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_17[3U] 
                = __Vtemp1726[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_9[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_9[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_9[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_9[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram1_write) {
        if ((9U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp1727, (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                               >> 0xaU));
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_9[0U] 
                = __Vtemp1727[0U];
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_9[1U] 
                = __Vtemp1727[1U];
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_9[2U] 
                = __Vtemp1727[2U];
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_9[3U] 
                = __Vtemp1727[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_8[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_8[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_8[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_8[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram1_write) {
        if ((8U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp1728, (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                               >> 0xaU));
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_8[0U] 
                = __Vtemp1728[0U];
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_8[1U] 
                = __Vtemp1728[1U];
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_8[2U] 
                = __Vtemp1728[2U];
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_8[3U] 
                = __Vtemp1728[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_7[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_7[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_7[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_7[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram1_write) {
        if ((7U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp1729, (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                               >> 0xaU));
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_7[0U] 
                = __Vtemp1729[0U];
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_7[1U] 
                = __Vtemp1729[1U];
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_7[2U] 
                = __Vtemp1729[2U];
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_7[3U] 
                = __Vtemp1729[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_11[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_11[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_11[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_11[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram1_write) {
        if ((0xbU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp1730, (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                               >> 0xaU));
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_11[0U] 
                = __Vtemp1730[0U];
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_11[1U] 
                = __Vtemp1730[1U];
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_11[2U] 
                = __Vtemp1730[2U];
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_11[3U] 
                = __Vtemp1730[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_2[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_2[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_2[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_2[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram1_write) {
        if ((2U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp1731, (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                               >> 0xaU));
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_2[0U] 
                = __Vtemp1731[0U];
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_2[1U] 
                = __Vtemp1731[1U];
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_2[2U] 
                = __Vtemp1731[2U];
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_2[3U] 
                = __Vtemp1731[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_20[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_20[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_20[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_20[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram1_write) {
        if ((0x14U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp1732, (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                               >> 0xaU));
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_20[0U] 
                = __Vtemp1732[0U];
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_20[1U] 
                = __Vtemp1732[1U];
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_20[2U] 
                = __Vtemp1732[2U];
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_20[3U] 
                = __Vtemp1732[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_6[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_6[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_6[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_6[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram1_write) {
        if ((6U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp1733, (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                               >> 0xaU));
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_6[0U] 
                = __Vtemp1733[0U];
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_6[1U] 
                = __Vtemp1733[1U];
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_6[2U] 
                = __Vtemp1733[2U];
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_6[3U] 
                = __Vtemp1733[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_14[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_14[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_14[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_14[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram1_write) {
        if ((0xeU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp1734, (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                               >> 0xaU));
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_14[0U] 
                = __Vtemp1734[0U];
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_14[1U] 
                = __Vtemp1734[1U];
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_14[2U] 
                = __Vtemp1734[2U];
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_14[3U] 
                = __Vtemp1734[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_1[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_1[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_1[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_1[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram1_write) {
        if ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp1735, (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                               >> 0xaU));
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_1[0U] 
                = __Vtemp1735[0U];
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_1[1U] 
                = __Vtemp1735[1U];
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_1[2U] 
                = __Vtemp1735[2U];
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_1[3U] 
                = __Vtemp1735[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_19[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_19[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_19[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_19[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram1_write) {
        if ((0x13U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp1736, (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                               >> 0xaU));
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_19[0U] 
                = __Vtemp1736[0U];
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_19[1U] 
                = __Vtemp1736[1U];
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_19[2U] 
                = __Vtemp1736[2U];
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_19[3U] 
                = __Vtemp1736[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_5[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_5[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_5[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_5[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram1_write) {
        if ((5U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp1737, (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                               >> 0xaU));
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_5[0U] 
                = __Vtemp1737[0U];
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_5[1U] 
                = __Vtemp1737[1U];
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_5[2U] 
                = __Vtemp1737[2U];
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_5[3U] 
                = __Vtemp1737[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_13[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_13[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_13[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_13[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram1_write) {
        if ((0xdU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp1738, (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                               >> 0xaU));
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_13[0U] 
                = __Vtemp1738[0U];
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_13[1U] 
                = __Vtemp1738[1U];
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_13[2U] 
                = __Vtemp1738[2U];
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_13[3U] 
                = __Vtemp1738[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_0[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_0[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_0[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_0[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram1_write) {
        if ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp1739, (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                               >> 0xaU));
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_0[0U] 
                = __Vtemp1739[0U];
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_0[1U] 
                = __Vtemp1739[1U];
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_0[2U] 
                = __Vtemp1739[2U];
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_0[3U] 
                = __Vtemp1739[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_18[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_18[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_18[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_18[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram1_write) {
        if ((0x12U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp1740, (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                               >> 0xaU));
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_18[0U] 
                = __Vtemp1740[0U];
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_18[1U] 
                = __Vtemp1740[1U];
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_18[2U] 
                = __Vtemp1740[2U];
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_18[3U] 
                = __Vtemp1740[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_4[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_4[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_4[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_4[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram1_write) {
        if ((4U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp1741, (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                               >> 0xaU));
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_4[0U] 
                = __Vtemp1741[0U];
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_4[1U] 
                = __Vtemp1741[1U];
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_4[2U] 
                = __Vtemp1741[2U];
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_4[3U] 
                = __Vtemp1741[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_10[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_10[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_10[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_10[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram1_write) {
        if ((0xaU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp1742, (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                               >> 0xaU));
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_10[0U] 
                = __Vtemp1742[0U];
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_10[1U] 
                = __Vtemp1742[1U];
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_10[2U] 
                = __Vtemp1742[2U];
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_10[3U] 
                = __Vtemp1742[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_21[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_21[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_21[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_21[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram1_write) {
        if ((0x15U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp1743, (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                               >> 0xaU));
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_21[0U] 
                = __Vtemp1743[0U];
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_21[1U] 
                = __Vtemp1743[1U];
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_21[2U] 
                = __Vtemp1743[2U];
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_21[3U] 
                = __Vtemp1743[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_3[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_3[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_3[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_3[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram1_write) {
        if ((3U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp1744, (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                               >> 0xaU));
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_3[0U] 
                = __Vtemp1744[0U];
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_3[1U] 
                = __Vtemp1744[1U];
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_3[2U] 
                = __Vtemp1744[2U];
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_3[3U] 
                = __Vtemp1744[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_12[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_12[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_12[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_12[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram1_write) {
        if ((0xcU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp1745, (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                               >> 0xaU));
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_12[0U] 
                = __Vtemp1745[0U];
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_12[1U] 
                = __Vtemp1745[1U];
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_12[2U] 
                = __Vtemp1745[2U];
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_12[3U] 
                = __Vtemp1745[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_15[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_15[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_15[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_15[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram1_write) {
        if ((0xfU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp1746, (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                               >> 0xaU));
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_15[0U] 
                = __Vtemp1746[0U];
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_15[1U] 
                = __Vtemp1746[1U];
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_15[2U] 
                = __Vtemp1746[2U];
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_15[3U] 
                = __Vtemp1746[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_16[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_16[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_16[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_16[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram1_write) {
        if ((0x10U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp1747, (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                               >> 0xaU));
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_16[0U] 
                = __Vtemp1747[0U];
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_16[1U] 
                = __Vtemp1747[1U];
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_16[2U] 
                = __Vtemp1747[2U];
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_16[3U] 
                = __Vtemp1747[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_17[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_17[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_17[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_17[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram1_write) {
        if ((0x11U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp1748, (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                               >> 0xaU));
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_17[0U] 
                = __Vtemp1748[0U];
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_17[1U] 
                = __Vtemp1748[1U];
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_17[2U] 
                = __Vtemp1748[2U];
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_17[3U] 
                = __Vtemp1748[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_53[0U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_53[1U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_53[2U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_53[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_valid) {
        if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_mispredict) {
            if ((0x35U == (0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                            >> 3U))))) {
                VL_EXTEND_WW(128,123, __Vtemp1749, vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__update_btb_data);
                vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_53[0U] 
                    = __Vtemp1749[0U];
                vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_53[1U] 
                    = __Vtemp1749[1U];
                vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_53[2U] 
                    = __Vtemp1749[2U];
                vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_53[3U] 
                    = __Vtemp1749[3U];
            }
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_54[0U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_54[1U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_54[2U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_54[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_valid) {
        if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_mispredict) {
            if ((0x36U == (0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                            >> 3U))))) {
                VL_EXTEND_WW(128,123, __Vtemp1750, vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__update_btb_data);
                vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_54[0U] 
                    = __Vtemp1750[0U];
                vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_54[1U] 
                    = __Vtemp1750[1U];
                vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_54[2U] 
                    = __Vtemp1750[2U];
                vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_54[3U] 
                    = __Vtemp1750[3U];
            }
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_55[0U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_55[1U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_55[2U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_55[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_valid) {
        if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_mispredict) {
            if ((0x37U == (0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                            >> 3U))))) {
                VL_EXTEND_WW(128,123, __Vtemp1751, vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__update_btb_data);
                vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_55[0U] 
                    = __Vtemp1751[0U];
                vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_55[1U] 
                    = __Vtemp1751[1U];
                vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_55[2U] 
                    = __Vtemp1751[2U];
                vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_55[3U] 
                    = __Vtemp1751[3U];
            }
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_56[0U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_56[1U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_56[2U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_56[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_valid) {
        if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_mispredict) {
            if ((0x38U == (0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                            >> 3U))))) {
                VL_EXTEND_WW(128,123, __Vtemp1752, vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__update_btb_data);
                vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_56[0U] 
                    = __Vtemp1752[0U];
                vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_56[1U] 
                    = __Vtemp1752[1U];
                vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_56[2U] 
                    = __Vtemp1752[2U];
                vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_56[3U] 
                    = __Vtemp1752[3U];
            }
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_57[0U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_57[1U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_57[2U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_57[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_valid) {
        if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_mispredict) {
            if ((0x39U == (0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                            >> 3U))))) {
                VL_EXTEND_WW(128,123, __Vtemp1753, vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__update_btb_data);
                vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_57[0U] 
                    = __Vtemp1753[0U];
                vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_57[1U] 
                    = __Vtemp1753[1U];
                vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_57[2U] 
                    = __Vtemp1753[2U];
                vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_57[3U] 
                    = __Vtemp1753[3U];
            }
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_58[0U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_58[1U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_58[2U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_58[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_valid) {
        if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_mispredict) {
            if ((0x3aU == (0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                            >> 3U))))) {
                VL_EXTEND_WW(128,123, __Vtemp1754, vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__update_btb_data);
                vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_58[0U] 
                    = __Vtemp1754[0U];
                vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_58[1U] 
                    = __Vtemp1754[1U];
                vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_58[2U] 
                    = __Vtemp1754[2U];
                vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_58[3U] 
                    = __Vtemp1754[3U];
            }
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_59[0U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_59[1U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_59[2U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_59[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_valid) {
        if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_mispredict) {
            if ((0x3bU == (0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                            >> 3U))))) {
                VL_EXTEND_WW(128,123, __Vtemp1755, vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__update_btb_data);
                vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_59[0U] 
                    = __Vtemp1755[0U];
                vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_59[1U] 
                    = __Vtemp1755[1U];
                vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_59[2U] 
                    = __Vtemp1755[2U];
                vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_59[3U] 
                    = __Vtemp1755[3U];
            }
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_60[0U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_60[1U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_60[2U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_60[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_valid) {
        if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_mispredict) {
            if ((0x3cU == (0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                            >> 3U))))) {
                VL_EXTEND_WW(128,123, __Vtemp1756, vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__update_btb_data);
                vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_60[0U] 
                    = __Vtemp1756[0U];
                vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_60[1U] 
                    = __Vtemp1756[1U];
                vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_60[2U] 
                    = __Vtemp1756[2U];
                vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_60[3U] 
                    = __Vtemp1756[3U];
            }
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_61[0U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_61[1U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_61[2U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_61[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_valid) {
        if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_mispredict) {
            if ((0x3dU == (0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                            >> 3U))))) {
                VL_EXTEND_WW(128,123, __Vtemp1757, vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__update_btb_data);
                vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_61[0U] 
                    = __Vtemp1757[0U];
                vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_61[1U] 
                    = __Vtemp1757[1U];
                vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_61[2U] 
                    = __Vtemp1757[2U];
                vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_61[3U] 
                    = __Vtemp1757[3U];
            }
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_62[0U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_62[1U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_62[2U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_62[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_valid) {
        if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_mispredict) {
            if ((0x3eU == (0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                            >> 3U))))) {
                VL_EXTEND_WW(128,123, __Vtemp1758, vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__update_btb_data);
                vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_62[0U] 
                    = __Vtemp1758[0U];
                vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_62[1U] 
                    = __Vtemp1758[1U];
                vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_62[2U] 
                    = __Vtemp1758[2U];
                vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_62[3U] 
                    = __Vtemp1758[3U];
            }
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_63[0U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_63[1U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_63[2U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_63[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_valid) {
        if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_mispredict) {
            if ((0x3fU == (0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                            >> 3U))))) {
                VL_EXTEND_WW(128,123, __Vtemp1759, vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__update_btb_data);
                vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_63[0U] 
                    = __Vtemp1759[0U];
                vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_63[1U] 
                    = __Vtemp1759[1U];
                vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_63[2U] 
                    = __Vtemp1759[2U];
                vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_63[3U] 
                    = __Vtemp1759[3U];
            }
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
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_40[0U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_40[1U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_40[2U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_40[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_valid) {
        if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_mispredict) {
            if ((0x28U == (0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                            >> 3U))))) {
                VL_EXTEND_WW(128,123, __Vtemp1760, vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__update_btb_data);
                vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_40[0U] 
                    = __Vtemp1760[0U];
                vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_40[1U] 
                    = __Vtemp1760[1U];
                vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_40[2U] 
                    = __Vtemp1760[2U];
                vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_40[3U] 
                    = __Vtemp1760[3U];
            }
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_49[0U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_49[1U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_49[2U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_49[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_valid) {
        if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_mispredict) {
            if ((0x31U == (0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                            >> 3U))))) {
                VL_EXTEND_WW(128,123, __Vtemp1761, vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__update_btb_data);
                vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_49[0U] 
                    = __Vtemp1761[0U];
                vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_49[1U] 
                    = __Vtemp1761[1U];
                vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_49[2U] 
                    = __Vtemp1761[2U];
                vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_49[3U] 
                    = __Vtemp1761[3U];
            }
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_50[0U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_50[1U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_50[2U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_50[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_valid) {
        if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_mispredict) {
            if ((0x32U == (0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                            >> 3U))))) {
                VL_EXTEND_WW(128,123, __Vtemp1762, vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__update_btb_data);
                vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_50[0U] 
                    = __Vtemp1762[0U];
                vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_50[1U] 
                    = __Vtemp1762[1U];
                vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_50[2U] 
                    = __Vtemp1762[2U];
                vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_50[3U] 
                    = __Vtemp1762[3U];
            }
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_41[0U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_41[1U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_41[2U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_41[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_valid) {
        if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_mispredict) {
            if ((0x29U == (0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                            >> 3U))))) {
                VL_EXTEND_WW(128,123, __Vtemp1763, vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__update_btb_data);
                vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_41[0U] 
                    = __Vtemp1763[0U];
                vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_41[1U] 
                    = __Vtemp1763[1U];
                vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_41[2U] 
                    = __Vtemp1763[2U];
                vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_41[3U] 
                    = __Vtemp1763[3U];
            }
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_43[0U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_43[1U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_43[2U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_43[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_valid) {
        if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_mispredict) {
            if ((0x2bU == (0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                            >> 3U))))) {
                VL_EXTEND_WW(128,123, __Vtemp1764, vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__update_btb_data);
                vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_43[0U] 
                    = __Vtemp1764[0U];
                vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_43[1U] 
                    = __Vtemp1764[1U];
                vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_43[2U] 
                    = __Vtemp1764[2U];
                vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_43[3U] 
                    = __Vtemp1764[3U];
            }
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_42[0U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_42[1U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_42[2U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_42[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_valid) {
        if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_mispredict) {
            if ((0x2aU == (0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                            >> 3U))))) {
                VL_EXTEND_WW(128,123, __Vtemp1765, vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__update_btb_data);
                vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_42[0U] 
                    = __Vtemp1765[0U];
                vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_42[1U] 
                    = __Vtemp1765[1U];
                vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_42[2U] 
                    = __Vtemp1765[2U];
                vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_42[3U] 
                    = __Vtemp1765[3U];
            }
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_51[0U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_51[1U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_51[2U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_51[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_valid) {
        if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_mispredict) {
            if ((0x33U == (0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                            >> 3U))))) {
                VL_EXTEND_WW(128,123, __Vtemp1766, vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__update_btb_data);
                vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_51[0U] 
                    = __Vtemp1766[0U];
                vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_51[1U] 
                    = __Vtemp1766[1U];
                vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_51[2U] 
                    = __Vtemp1766[2U];
                vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_51[3U] 
                    = __Vtemp1766[3U];
            }
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_44[0U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_44[1U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_44[2U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_44[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_valid) {
        if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_mispredict) {
            if ((0x2cU == (0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                            >> 3U))))) {
                VL_EXTEND_WW(128,123, __Vtemp1767, vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__update_btb_data);
                vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_44[0U] 
                    = __Vtemp1767[0U];
                vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_44[1U] 
                    = __Vtemp1767[1U];
                vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_44[2U] 
                    = __Vtemp1767[2U];
                vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_44[3U] 
                    = __Vtemp1767[3U];
            }
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_45[0U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_45[1U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_45[2U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_45[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_valid) {
        if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_mispredict) {
            if ((0x2dU == (0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                            >> 3U))))) {
                VL_EXTEND_WW(128,123, __Vtemp1768, vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__update_btb_data);
                vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_45[0U] 
                    = __Vtemp1768[0U];
                vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_45[1U] 
                    = __Vtemp1768[1U];
                vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_45[2U] 
                    = __Vtemp1768[2U];
                vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_45[3U] 
                    = __Vtemp1768[3U];
            }
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_46[0U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_46[1U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_46[2U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_46[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_valid) {
        if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_mispredict) {
            if ((0x2eU == (0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                            >> 3U))))) {
                VL_EXTEND_WW(128,123, __Vtemp1769, vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__update_btb_data);
                vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_46[0U] 
                    = __Vtemp1769[0U];
                vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_46[1U] 
                    = __Vtemp1769[1U];
                vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_46[2U] 
                    = __Vtemp1769[2U];
                vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_46[3U] 
                    = __Vtemp1769[3U];
            }
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_47[0U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_47[1U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_47[2U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_47[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_valid) {
        if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_mispredict) {
            if ((0x2fU == (0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                            >> 3U))))) {
                VL_EXTEND_WW(128,123, __Vtemp1770, vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__update_btb_data);
                vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_47[0U] 
                    = __Vtemp1770[0U];
                vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_47[1U] 
                    = __Vtemp1770[1U];
                vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_47[2U] 
                    = __Vtemp1770[2U];
                vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_47[3U] 
                    = __Vtemp1770[3U];
            }
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_48[0U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_48[1U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_48[2U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_48[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_valid) {
        if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_mispredict) {
            if ((0x30U == (0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                            >> 3U))))) {
                VL_EXTEND_WW(128,123, __Vtemp1771, vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__update_btb_data);
                vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_48[0U] 
                    = __Vtemp1771[0U];
                vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_48[1U] 
                    = __Vtemp1771[1U];
                vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_48[2U] 
                    = __Vtemp1771[2U];
                vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_48[3U] 
                    = __Vtemp1771[3U];
            }
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_52[0U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_52[1U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_52[2U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_52[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_valid) {
        if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_mispredict) {
            if ((0x34U == (0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                            >> 3U))))) {
                VL_EXTEND_WW(128,123, __Vtemp1772, vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__update_btb_data);
                vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_52[0U] 
                    = __Vtemp1772[0U];
                vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_52[1U] 
                    = __Vtemp1772[1U];
                vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_52[2U] 
                    = __Vtemp1772[2U];
                vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_52[3U] 
                    = __Vtemp1772[3U];
            }
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
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_31[0U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_31[1U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_31[2U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_31[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_valid) {
        if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_mispredict) {
            if ((0x1fU == (0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                            >> 3U))))) {
                VL_EXTEND_WW(128,123, __Vtemp1773, vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__update_btb_data);
                vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_31[0U] 
                    = __Vtemp1773[0U];
                vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_31[1U] 
                    = __Vtemp1773[1U];
                vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_31[2U] 
                    = __Vtemp1773[2U];
                vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_31[3U] 
                    = __Vtemp1773[3U];
            }
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_30[0U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_30[1U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_30[2U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_30[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_valid) {
        if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_mispredict) {
            if ((0x1eU == (0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                            >> 3U))))) {
                VL_EXTEND_WW(128,123, __Vtemp1774, vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__update_btb_data);
                vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_30[0U] 
                    = __Vtemp1774[0U];
                vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_30[1U] 
                    = __Vtemp1774[1U];
                vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_30[2U] 
                    = __Vtemp1774[2U];
                vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_30[3U] 
                    = __Vtemp1774[3U];
            }
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_29[0U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_29[1U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_29[2U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_29[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_valid) {
        if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_mispredict) {
            if ((0x1dU == (0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                            >> 3U))))) {
                VL_EXTEND_WW(128,123, __Vtemp1775, vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__update_btb_data);
                vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_29[0U] 
                    = __Vtemp1775[0U];
                vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_29[1U] 
                    = __Vtemp1775[1U];
                vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_29[2U] 
                    = __Vtemp1775[2U];
                vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_29[3U] 
                    = __Vtemp1775[3U];
            }
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_28[0U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_28[1U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_28[2U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_28[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_valid) {
        if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_mispredict) {
            if ((0x1cU == (0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                            >> 3U))))) {
                VL_EXTEND_WW(128,123, __Vtemp1776, vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__update_btb_data);
                vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_28[0U] 
                    = __Vtemp1776[0U];
                vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_28[1U] 
                    = __Vtemp1776[1U];
                vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_28[2U] 
                    = __Vtemp1776[2U];
                vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_28[3U] 
                    = __Vtemp1776[3U];
            }
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_27[0U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_27[1U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_27[2U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_27[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_valid) {
        if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_mispredict) {
            if ((0x1bU == (0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                            >> 3U))))) {
                VL_EXTEND_WW(128,123, __Vtemp1777, vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__update_btb_data);
                vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_27[0U] 
                    = __Vtemp1777[0U];
                vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_27[1U] 
                    = __Vtemp1777[1U];
                vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_27[2U] 
                    = __Vtemp1777[2U];
                vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_27[3U] 
                    = __Vtemp1777[3U];
            }
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_38[0U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_38[1U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_38[2U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_38[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_valid) {
        if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_mispredict) {
            if ((0x26U == (0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                            >> 3U))))) {
                VL_EXTEND_WW(128,123, __Vtemp1778, vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__update_btb_data);
                vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_38[0U] 
                    = __Vtemp1778[0U];
                vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_38[1U] 
                    = __Vtemp1778[1U];
                vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_38[2U] 
                    = __Vtemp1778[2U];
                vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_38[3U] 
                    = __Vtemp1778[3U];
            }
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_34[0U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_34[1U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_34[2U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_34[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_valid) {
        if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_mispredict) {
            if ((0x22U == (0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                            >> 3U))))) {
                VL_EXTEND_WW(128,123, __Vtemp1779, vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__update_btb_data);
                vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_34[0U] 
                    = __Vtemp1779[0U];
                vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_34[1U] 
                    = __Vtemp1779[1U];
                vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_34[2U] 
                    = __Vtemp1779[2U];
                vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_34[3U] 
                    = __Vtemp1779[3U];
            }
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_32[0U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_32[1U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_32[2U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_32[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_valid) {
        if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_mispredict) {
            if ((0x20U == (0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                            >> 3U))))) {
                VL_EXTEND_WW(128,123, __Vtemp1780, vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__update_btb_data);
                vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_32[0U] 
                    = __Vtemp1780[0U];
                vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_32[1U] 
                    = __Vtemp1780[1U];
                vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_32[2U] 
                    = __Vtemp1780[2U];
                vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_32[3U] 
                    = __Vtemp1780[3U];
            }
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_39[0U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_39[1U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_39[2U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_39[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_valid) {
        if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_mispredict) {
            if ((0x27U == (0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                            >> 3U))))) {
                VL_EXTEND_WW(128,123, __Vtemp1781, vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__update_btb_data);
                vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_39[0U] 
                    = __Vtemp1781[0U];
                vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_39[1U] 
                    = __Vtemp1781[1U];
                vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_39[2U] 
                    = __Vtemp1781[2U];
                vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_39[3U] 
                    = __Vtemp1781[3U];
            }
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_33[0U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_33[1U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_33[2U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_33[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_valid) {
        if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_mispredict) {
            if ((0x21U == (0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                            >> 3U))))) {
                VL_EXTEND_WW(128,123, __Vtemp1782, vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__update_btb_data);
                vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_33[0U] 
                    = __Vtemp1782[0U];
                vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_33[1U] 
                    = __Vtemp1782[1U];
                vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_33[2U] 
                    = __Vtemp1782[2U];
                vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_33[3U] 
                    = __Vtemp1782[3U];
            }
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_35[0U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_35[1U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_35[2U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_35[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_valid) {
        if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_mispredict) {
            if ((0x23U == (0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                            >> 3U))))) {
                VL_EXTEND_WW(128,123, __Vtemp1783, vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__update_btb_data);
                vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_35[0U] 
                    = __Vtemp1783[0U];
                vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_35[1U] 
                    = __Vtemp1783[1U];
                vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_35[2U] 
                    = __Vtemp1783[2U];
                vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_35[3U] 
                    = __Vtemp1783[3U];
            }
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_36[0U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_36[1U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_36[2U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_36[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_valid) {
        if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_mispredict) {
            if ((0x24U == (0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                            >> 3U))))) {
                VL_EXTEND_WW(128,123, __Vtemp1784, vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__update_btb_data);
                vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_36[0U] 
                    = __Vtemp1784[0U];
                vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_36[1U] 
                    = __Vtemp1784[1U];
                vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_36[2U] 
                    = __Vtemp1784[2U];
                vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_36[3U] 
                    = __Vtemp1784[3U];
            }
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_37[0U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_37[1U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_37[2U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_37[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_valid) {
        if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_mispredict) {
            if ((0x25U == (0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                            >> 3U))))) {
                VL_EXTEND_WW(128,123, __Vtemp1785, vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__update_btb_data);
                vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_37[0U] 
                    = __Vtemp1785[0U];
                vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_37[1U] 
                    = __Vtemp1785[1U];
                vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_37[2U] 
                    = __Vtemp1785[2U];
                vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_37[3U] 
                    = __Vtemp1785[3U];
            }
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
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_26[0U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_26[1U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_26[2U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_26[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_valid) {
        if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_mispredict) {
            if ((0x1aU == (0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                            >> 3U))))) {
                VL_EXTEND_WW(128,123, __Vtemp1786, vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__update_btb_data);
                vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_26[0U] 
                    = __Vtemp1786[0U];
                vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_26[1U] 
                    = __Vtemp1786[1U];
                vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_26[2U] 
                    = __Vtemp1786[2U];
                vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_26[3U] 
                    = __Vtemp1786[3U];
            }
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_16[0U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_16[1U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_16[2U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_16[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_valid) {
        if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_mispredict) {
            if ((0x10U == (0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                            >> 3U))))) {
                VL_EXTEND_WW(128,123, __Vtemp1787, vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__update_btb_data);
                vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_16[0U] 
                    = __Vtemp1787[0U];
                vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_16[1U] 
                    = __Vtemp1787[1U];
                vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_16[2U] 
                    = __Vtemp1787[2U];
                vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_16[3U] 
                    = __Vtemp1787[3U];
            }
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_14[0U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_14[1U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_14[2U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_14[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_valid) {
        if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_mispredict) {
            if ((0xeU == (0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                           >> 3U))))) {
                VL_EXTEND_WW(128,123, __Vtemp1788, vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__update_btb_data);
                vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_14[0U] 
                    = __Vtemp1788[0U];
                vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_14[1U] 
                    = __Vtemp1788[1U];
                vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_14[2U] 
                    = __Vtemp1788[2U];
                vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_14[3U] 
                    = __Vtemp1788[3U];
            }
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_15[0U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_15[1U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_15[2U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_15[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_valid) {
        if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_mispredict) {
            if ((0xfU == (0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                           >> 3U))))) {
                VL_EXTEND_WW(128,123, __Vtemp1789, vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__update_btb_data);
                vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_15[0U] 
                    = __Vtemp1789[0U];
                vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_15[1U] 
                    = __Vtemp1789[1U];
                vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_15[2U] 
                    = __Vtemp1789[2U];
                vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_15[3U] 
                    = __Vtemp1789[3U];
            }
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_17[0U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_17[1U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_17[2U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_17[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_valid) {
        if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_mispredict) {
            if ((0x11U == (0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                            >> 3U))))) {
                VL_EXTEND_WW(128,123, __Vtemp1790, vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__update_btb_data);
                vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_17[0U] 
                    = __Vtemp1790[0U];
                vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_17[1U] 
                    = __Vtemp1790[1U];
                vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_17[2U] 
                    = __Vtemp1790[2U];
                vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_17[3U] 
                    = __Vtemp1790[3U];
            }
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_18[0U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_18[1U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_18[2U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_18[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_valid) {
        if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_mispredict) {
            if ((0x12U == (0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                            >> 3U))))) {
                VL_EXTEND_WW(128,123, __Vtemp1791, vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__update_btb_data);
                vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_18[0U] 
                    = __Vtemp1791[0U];
                vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_18[1U] 
                    = __Vtemp1791[1U];
                vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_18[2U] 
                    = __Vtemp1791[2U];
                vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_18[3U] 
                    = __Vtemp1791[3U];
            }
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_19[0U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_19[1U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_19[2U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_19[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_valid) {
        if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_mispredict) {
            if ((0x13U == (0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                            >> 3U))))) {
                VL_EXTEND_WW(128,123, __Vtemp1792, vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__update_btb_data);
                vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_19[0U] 
                    = __Vtemp1792[0U];
                vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_19[1U] 
                    = __Vtemp1792[1U];
                vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_19[2U] 
                    = __Vtemp1792[2U];
                vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_19[3U] 
                    = __Vtemp1792[3U];
            }
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_20[0U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_20[1U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_20[2U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_20[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_valid) {
        if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_mispredict) {
            if ((0x14U == (0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                            >> 3U))))) {
                VL_EXTEND_WW(128,123, __Vtemp1793, vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__update_btb_data);
                vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_20[0U] 
                    = __Vtemp1793[0U];
                vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_20[1U] 
                    = __Vtemp1793[1U];
                vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_20[2U] 
                    = __Vtemp1793[2U];
                vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_20[3U] 
                    = __Vtemp1793[3U];
            }
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_21[0U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_21[1U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_21[2U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_21[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_valid) {
        if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_mispredict) {
            if ((0x15U == (0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                            >> 3U))))) {
                VL_EXTEND_WW(128,123, __Vtemp1794, vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__update_btb_data);
                vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_21[0U] 
                    = __Vtemp1794[0U];
                vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_21[1U] 
                    = __Vtemp1794[1U];
                vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_21[2U] 
                    = __Vtemp1794[2U];
                vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_21[3U] 
                    = __Vtemp1794[3U];
            }
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_22[0U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_22[1U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_22[2U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_22[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_valid) {
        if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_mispredict) {
            if ((0x16U == (0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                            >> 3U))))) {
                VL_EXTEND_WW(128,123, __Vtemp1795, vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__update_btb_data);
                vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_22[0U] 
                    = __Vtemp1795[0U];
                vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_22[1U] 
                    = __Vtemp1795[1U];
                vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_22[2U] 
                    = __Vtemp1795[2U];
                vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_22[3U] 
                    = __Vtemp1795[3U];
            }
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_23[0U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_23[1U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_23[2U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_23[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_valid) {
        if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_mispredict) {
            if ((0x17U == (0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                            >> 3U))))) {
                VL_EXTEND_WW(128,123, __Vtemp1796, vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__update_btb_data);
                vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_23[0U] 
                    = __Vtemp1796[0U];
                vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_23[1U] 
                    = __Vtemp1796[1U];
                vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_23[2U] 
                    = __Vtemp1796[2U];
                vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_23[3U] 
                    = __Vtemp1796[3U];
            }
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_24[0U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_24[1U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_24[2U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_24[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_valid) {
        if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_mispredict) {
            if ((0x18U == (0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                            >> 3U))))) {
                VL_EXTEND_WW(128,123, __Vtemp1797, vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__update_btb_data);
                vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_24[0U] 
                    = __Vtemp1797[0U];
                vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_24[1U] 
                    = __Vtemp1797[1U];
                vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_24[2U] 
                    = __Vtemp1797[2U];
                vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_24[3U] 
                    = __Vtemp1797[3U];
            }
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_25[0U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_25[1U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_25[2U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_25[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_valid) {
        if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_mispredict) {
            if ((0x19U == (0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                            >> 3U))))) {
                VL_EXTEND_WW(128,123, __Vtemp1798, vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__update_btb_data);
                vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_25[0U] 
                    = __Vtemp1798[0U];
                vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_25[1U] 
                    = __Vtemp1798[1U];
                vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_25[2U] 
                    = __Vtemp1798[2U];
                vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_25[3U] 
                    = __Vtemp1798[3U];
            }
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
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_8[0U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_8[1U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_8[2U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_8[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_valid) {
        if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_mispredict) {
            if ((8U == (0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                         >> 3U))))) {
                VL_EXTEND_WW(128,123, __Vtemp1799, vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__update_btb_data);
                vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_8[0U] 
                    = __Vtemp1799[0U];
                vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_8[1U] 
                    = __Vtemp1799[1U];
                vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_8[2U] 
                    = __Vtemp1799[2U];
                vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_8[3U] 
                    = __Vtemp1799[3U];
            }
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_7[0U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_7[1U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_7[2U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_7[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_valid) {
        if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_mispredict) {
            if ((7U == (0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                         >> 3U))))) {
                VL_EXTEND_WW(128,123, __Vtemp1800, vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__update_btb_data);
                vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_7[0U] 
                    = __Vtemp1800[0U];
                vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_7[1U] 
                    = __Vtemp1800[1U];
                vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_7[2U] 
                    = __Vtemp1800[2U];
                vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_7[3U] 
                    = __Vtemp1800[3U];
            }
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_6[0U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_6[1U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_6[2U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_6[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_valid) {
        if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_mispredict) {
            if ((6U == (0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                         >> 3U))))) {
                VL_EXTEND_WW(128,123, __Vtemp1801, vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__update_btb_data);
                vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_6[0U] 
                    = __Vtemp1801[0U];
                vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_6[1U] 
                    = __Vtemp1801[1U];
                vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_6[2U] 
                    = __Vtemp1801[2U];
                vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_6[3U] 
                    = __Vtemp1801[3U];
            }
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_9[0U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_9[1U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_9[2U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_9[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_valid) {
        if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_mispredict) {
            if ((9U == (0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                         >> 3U))))) {
                VL_EXTEND_WW(128,123, __Vtemp1802, vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__update_btb_data);
                vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_9[0U] 
                    = __Vtemp1802[0U];
                vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_9[1U] 
                    = __Vtemp1802[1U];
                vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_9[2U] 
                    = __Vtemp1802[2U];
                vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_9[3U] 
                    = __Vtemp1802[3U];
            }
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_5[0U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_5[1U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_5[2U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_5[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_valid) {
        if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_mispredict) {
            if ((5U == (0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                         >> 3U))))) {
                VL_EXTEND_WW(128,123, __Vtemp1803, vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__update_btb_data);
                vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_5[0U] 
                    = __Vtemp1803[0U];
                vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_5[1U] 
                    = __Vtemp1803[1U];
                vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_5[2U] 
                    = __Vtemp1803[2U];
                vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_5[3U] 
                    = __Vtemp1803[3U];
            }
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_1[0U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_1[1U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_1[2U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_1[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_valid) {
        if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_mispredict) {
            if ((1U == (0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                         >> 3U))))) {
                VL_EXTEND_WW(128,123, __Vtemp1804, vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__update_btb_data);
                vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_1[0U] 
                    = __Vtemp1804[0U];
                vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_1[1U] 
                    = __Vtemp1804[1U];
                vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_1[2U] 
                    = __Vtemp1804[2U];
                vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_1[3U] 
                    = __Vtemp1804[3U];
            }
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_2[0U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_2[1U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_2[2U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_2[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_valid) {
        if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_mispredict) {
            if ((2U == (0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                         >> 3U))))) {
                VL_EXTEND_WW(128,123, __Vtemp1805, vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__update_btb_data);
                vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_2[0U] 
                    = __Vtemp1805[0U];
                vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_2[1U] 
                    = __Vtemp1805[1U];
                vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_2[2U] 
                    = __Vtemp1805[2U];
                vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_2[3U] 
                    = __Vtemp1805[3U];
            }
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_4[0U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_4[1U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_4[2U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_4[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_valid) {
        if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_mispredict) {
            if ((4U == (0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                         >> 3U))))) {
                VL_EXTEND_WW(128,123, __Vtemp1806, vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__update_btb_data);
                vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_4[0U] 
                    = __Vtemp1806[0U];
                vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_4[1U] 
                    = __Vtemp1806[1U];
                vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_4[2U] 
                    = __Vtemp1806[2U];
                vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_4[3U] 
                    = __Vtemp1806[3U];
            }
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_0[0U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_0[1U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_0[2U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_0[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_valid) {
        if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_mispredict) {
            if ((0U == (0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                         >> 3U))))) {
                VL_EXTEND_WW(128,123, __Vtemp1807, vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__update_btb_data);
                vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_0[0U] 
                    = __Vtemp1807[0U];
                vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_0[1U] 
                    = __Vtemp1807[1U];
                vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_0[2U] 
                    = __Vtemp1807[2U];
                vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_0[3U] 
                    = __Vtemp1807[3U];
            }
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_10[0U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_10[1U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_10[2U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_10[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_valid) {
        if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_mispredict) {
            if ((0xaU == (0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                           >> 3U))))) {
                VL_EXTEND_WW(128,123, __Vtemp1808, vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__update_btb_data);
                vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_10[0U] 
                    = __Vtemp1808[0U];
                vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_10[1U] 
                    = __Vtemp1808[1U];
                vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_10[2U] 
                    = __Vtemp1808[2U];
                vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_10[3U] 
                    = __Vtemp1808[3U];
            }
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_3[0U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_3[1U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_3[2U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_3[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_valid) {
        if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_mispredict) {
            if ((3U == (0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                         >> 3U))))) {
                VL_EXTEND_WW(128,123, __Vtemp1809, vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__update_btb_data);
                vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_3[0U] 
                    = __Vtemp1809[0U];
                vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_3[1U] 
                    = __Vtemp1809[1U];
                vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_3[2U] 
                    = __Vtemp1809[2U];
                vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_3[3U] 
                    = __Vtemp1809[3U];
            }
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_11[0U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_11[1U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_11[2U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_11[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_valid) {
        if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_mispredict) {
            if ((0xbU == (0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                           >> 3U))))) {
                VL_EXTEND_WW(128,123, __Vtemp1810, vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__update_btb_data);
                vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_11[0U] 
                    = __Vtemp1810[0U];
                vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_11[1U] 
                    = __Vtemp1810[1U];
                vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_11[2U] 
                    = __Vtemp1810[2U];
                vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_11[3U] 
                    = __Vtemp1810[3U];
            }
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_12[0U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_12[1U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_12[2U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_12[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_valid) {
        if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_mispredict) {
            if ((0xcU == (0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                           >> 3U))))) {
                VL_EXTEND_WW(128,123, __Vtemp1811, vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__update_btb_data);
                vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_12[0U] 
                    = __Vtemp1811[0U];
                vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_12[1U] 
                    = __Vtemp1811[1U];
                vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_12[2U] 
                    = __Vtemp1811[2U];
                vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_12[3U] 
                    = __Vtemp1811[3U];
            }
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_13[0U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_13[1U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_13[2U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_13[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_valid) {
        if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_mispredict) {
            if ((0xdU == (0x3fU & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                           >> 3U))))) {
                VL_EXTEND_WW(128,123, __Vtemp1812, vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__update_btb_data);
                vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_13[0U] 
                    = __Vtemp1812[0U];
                vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_13[1U] 
                    = __Vtemp1812[1U];
                vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_13[2U] 
                    = __Vtemp1812[2U];
                vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__BTB_13[3U] 
                    = __Vtemp1812[3U];
            }
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
                        ? 0ULL : ((0x1fU == (0x1fU 
                                             & (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst 
                                                >> 0x14U)))
                                   ? vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__regfile_31
                                   : ((0x1eU == (0x1fU 
                                                 & (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst 
                                                    >> 0x14U)))
                                       ? vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__regfile_30
                                       : ((0x1dU == 
                                           (0x1fU & 
                                            (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst 
                                             >> 0x14U)))
                                           ? vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__regfile_29
                                           : ((0x1cU 
                                               == (0x1fU 
                                                   & (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst 
                                                      >> 0x14U)))
                                               ? vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__regfile_28
                                               : ((0x1bU 
                                                   == 
                                                   (0x1fU 
                                                    & (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst 
                                                       >> 0x14U)))
                                                   ? vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__regfile_27
                                                   : vlSelf->riscv_soc__DOT__core__DOT__commit__DOT___GEN_58)))))))
                : 0ULL);
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
                        : ((0x1fU == (0x1fU & (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst 
                                               >> 0xfU)))
                            ? vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__regfile_31
                            : ((0x1eU == (0x1fU & (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst 
                                                   >> 0xfU)))
                                ? vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__regfile_30
                                : ((0x1dU == (0x1fU 
                                              & (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst 
                                                 >> 0xfU)))
                                    ? vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__regfile_29
                                    : ((0x1cU == (0x1fU 
                                                  & (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst 
                                                     >> 0xfU)))
                                        ? vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__regfile_28
                                        : ((0x1bU == 
                                            (0x1fU 
                                             & (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__ibuf_io_put_pc_bits_inst 
                                                >> 0xfU)))
                                            ? vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__regfile_27
                                            : vlSelf->riscv_soc__DOT__core__DOT__commit__DOT___GEN_26)))))))
                : 0ULL);
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
        = __Vdly__riscv_soc__DOT__core__DOT__clint_de__DOT__reg_state;
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
        __Vdly__riscv_soc__DOT__axi_ram__DOT__reg_r_state = 0U;
    } else if (vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_r_state) {
        if (vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_r_state) {
            if (vlSelf->riscv_soc__DOT__axi_ram_io_ram_bus_r_valid) {
                __Vdly__riscv_soc__DOT__axi_ram__DOT__reg_r_state 
                    = vlSelf->riscv_soc__DOT__axi_ram__DOT___GEN_7;
            }
        }
    } else {
        __Vdly__riscv_soc__DOT__axi_ram__DOT__reg_r_state 
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
    vlSelf->io_difftest_commit = vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__difftest_commit;
    vlSelf->io_difftest_irq = vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__difftest_irq;
    vlSelf->io_inst_counter = vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__inst_counter;
    vlSelf->riscv_soc__DOT__core__DOT__commit__DOT___inst_counter_T_1 
        = (1ULL + vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__inst_counter);
    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___reg_head_T_1 
        = (7U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__reg_head) 
                 - (IData)(1U)));
    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___reg_head_T_3 
        = (7U & ((IData)(1U) + (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__reg_head)));
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
        = __Vdly__riscv_soc__DOT__axi_ram__DOT__reg_r_state;
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_63[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_63[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_63[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_63[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram0_write) {
        if ((0x3fU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp1845, vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag);
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_63[0U] 
                = __Vtemp1845[0U];
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_63[1U] 
                = __Vtemp1845[1U];
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_63[2U] 
                = __Vtemp1845[2U];
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_63[3U] 
                = __Vtemp1845[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_62[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_62[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_62[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram5__DOT__sram_62[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram0_write) {
        if ((0x3eU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram0_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp1846, vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag);
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_62[0U] 
                = __Vtemp1846[0U];
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_62[1U] 
                = __Vtemp1846[1U];
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_62[2U] 
                = __Vtemp1846[2U];
            vlSelf->riscv_soc__DOT__sram5__DOT__sram_62[3U] 
                = __Vtemp1846[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_63[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_63[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_63[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_63[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram2_write) {
        if ((0x3fU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp1847, vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag);
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_63[0U] 
                = __Vtemp1847[0U];
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_63[1U] 
                = __Vtemp1847[1U];
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_63[2U] 
                = __Vtemp1847[2U];
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_63[3U] 
                = __Vtemp1847[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_62[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_62[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_62[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram7__DOT__sram_62[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__is_sram2_write) {
        if ((0x3eU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__d_cache_io_sram2_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp1848, vlSelf->riscv_soc__DOT__core__DOT__d_cache__DOT__reg_tag);
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_62[0U] 
                = __Vtemp1848[0U];
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_62[1U] 
                = __Vtemp1848[1U];
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_62[2U] 
                = __Vtemp1848[2U];
            vlSelf->riscv_soc__DOT__sram7__DOT__sram_62[3U] 
                = __Vtemp1848[3U];
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
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__op_imm 
        = (((QData)((IData)(((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_imm 
                              >> 0x1fU) ? 0xffffffffU
                              : 0U))) << 0x20U) | (QData)((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_imm)));
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT___reg_cnt_T_1 
        = (0x7fU & ((IData)(1U) + (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_cnt)));
    __Vtemp1851[0U] = ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[1U] 
                        << 0x1eU) | (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[0U] 
                                     >> 2U));
    __Vtemp1851[1U] = ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[2U] 
                        << 0x1eU) | (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[1U] 
                                     >> 2U));
    __Vtemp1851[2U] = (1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[2U] 
                             >> 2U));
    VL_EXTEND_WW(67,65, __Vtemp1852, __Vtemp1851);
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT___reg_temp_mul2_T[0U] 
        = __Vtemp1852[0U];
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT___reg_temp_mul2_T[1U] 
        = __Vtemp1852[1U];
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT___reg_temp_mul2_T[2U] 
        = __Vtemp1852[2U];
    VL_EXTEND_WW(131,130, __Vtemp1854, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_result);
    __Vtemp1856[0U] = 1U;
    __Vtemp1856[1U] = 0U;
    __Vtemp1856[2U] = 0U;
    __Vtemp1856[3U] = 0U;
    __Vtemp1856[4U] = 0U;
    __Vtemp1857[0U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[0U]);
    __Vtemp1857[1U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[1U]);
    __Vtemp1857[2U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[2U]);
    __Vtemp1857[3U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[3U]);
    __Vtemp1857[4U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[4U]);
    VL_ADD_W(5, __Vtemp1858, __Vtemp1856, __Vtemp1857);
    __Vtemp1859[0U] = __Vtemp1858[0U];
    __Vtemp1859[1U] = __Vtemp1858[1U];
    __Vtemp1859[2U] = __Vtemp1858[2U];
    __Vtemp1859[3U] = __Vtemp1858[3U];
    __Vtemp1859[4U] = (3U & __Vtemp1858[4U]);
    VL_EXTEND_WW(131,130, __Vtemp1860, __Vtemp1859);
    __Vtemp1862[0U] = 1U;
    __Vtemp1862[1U] = 0U;
    __Vtemp1862[2U] = 0U;
    __Vtemp1862[3U] = 0U;
    __Vtemp1862[4U] = 0U;
    __Vtemp1863[0U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[0U]);
    __Vtemp1863[1U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[1U]);
    __Vtemp1863[2U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[2U]);
    __Vtemp1863[3U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[3U]);
    __Vtemp1863[4U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[4U]);
    VL_ADD_W(5, __Vtemp1864, __Vtemp1862, __Vtemp1863);
    __Vtemp1865[0U] = __Vtemp1864[0U];
    __Vtemp1865[1U] = __Vtemp1864[1U];
    __Vtemp1865[2U] = __Vtemp1864[2U];
    __Vtemp1865[3U] = __Vtemp1864[3U];
    __Vtemp1865[4U] = (3U & __Vtemp1864[4U]);
    VL_EXTEND_WW(131,130, __Vtemp1866, __Vtemp1865);
    __Vtemp1868[0U] = 1U;
    __Vtemp1868[1U] = 0U;
    __Vtemp1868[2U] = 0U;
    __Vtemp1868[3U] = 0U;
    __Vtemp1868[4U] = 0U;
    __Vtemp1869[0U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[0U]);
    __Vtemp1869[1U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[1U]);
    __Vtemp1869[2U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[2U]);
    __Vtemp1869[3U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[3U]);
    __Vtemp1869[4U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[4U]);
    VL_ADD_W(5, __Vtemp1870, __Vtemp1868, __Vtemp1869);
    if ((2U == (7U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[0U]))) {
        __Vtemp1878[0U] = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[0U];
        __Vtemp1878[1U] = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[1U];
        __Vtemp1878[2U] = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[2U];
        __Vtemp1878[3U] = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[3U];
        __Vtemp1878[4U] = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[4U];
    } else {
        __Vtemp1878[0U] = ((1U == (7U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[0U]))
                            ? vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[0U]
                            : 0U);
        __Vtemp1878[1U] = ((1U == (7U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[0U]))
                            ? vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[1U]
                            : 0U);
        __Vtemp1878[2U] = ((1U == (7U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[0U]))
                            ? vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[2U]
                            : 0U);
        __Vtemp1878[3U] = ((1U == (7U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[0U]))
                            ? vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[3U]
                            : 0U);
        __Vtemp1878[4U] = ((1U == (7U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[0U]))
                            ? vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[4U]
                            : 0U);
    }
    VL_EXTEND_WW(131,130, __Vtemp1879, __Vtemp1878);
    if ((6U == (7U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[0U]))) {
        __Vtemp1887[0U] = __Vtemp1860[0U];
        __Vtemp1887[1U] = __Vtemp1860[1U];
        __Vtemp1887[2U] = __Vtemp1860[2U];
        __Vtemp1887[3U] = __Vtemp1860[3U];
        __Vtemp1887[4U] = __Vtemp1860[4U];
    } else {
        __Vtemp1887[0U] = ((5U == (7U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[0U]))
                            ? __Vtemp1866[0U] : ((4U 
                                                  == 
                                                  (7U 
                                                   & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[0U]))
                                                  ? 
                                                 (__Vtemp1870[0U] 
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
                                                  __Vtemp1879[0U])));
        __Vtemp1887[1U] = ((5U == (7U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[0U]))
                            ? __Vtemp1866[1U] : ((4U 
                                                  == 
                                                  (7U 
                                                   & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[0U]))
                                                  ? 
                                                 ((__Vtemp1870[0U] 
                                                   >> 0x1fU) 
                                                  | (__Vtemp1870[1U] 
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
                                                  __Vtemp1879[1U])));
        __Vtemp1887[2U] = ((5U == (7U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[0U]))
                            ? __Vtemp1866[2U] : ((4U 
                                                  == 
                                                  (7U 
                                                   & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[0U]))
                                                  ? 
                                                 ((__Vtemp1870[1U] 
                                                   >> 0x1fU) 
                                                  | (__Vtemp1870[2U] 
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
                                                  __Vtemp1879[2U])));
        __Vtemp1887[3U] = ((5U == (7U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[0U]))
                            ? __Vtemp1866[3U] : ((4U 
                                                  == 
                                                  (7U 
                                                   & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[0U]))
                                                  ? 
                                                 ((__Vtemp1870[2U] 
                                                   >> 0x1fU) 
                                                  | (__Vtemp1870[3U] 
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
                                                  __Vtemp1879[3U])));
        __Vtemp1887[4U] = ((5U == (7U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[0U]))
                            ? __Vtemp1866[4U] : ((4U 
                                                  == 
                                                  (7U 
                                                   & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[0U]))
                                                  ? 
                                                 ((__Vtemp1870[3U] 
                                                   >> 0x1fU) 
                                                  | (6U 
                                                     & (__Vtemp1870[4U] 
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
                                                  __Vtemp1879[4U])));
    }
    VL_ADD_W(5, __Vtemp1888, __Vtemp1854, __Vtemp1887);
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT___reg_result_T_1[0U] 
        = __Vtemp1888[0U];
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT___reg_result_T_1[1U] 
        = __Vtemp1888[1U];
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT___reg_result_T_1[2U] 
        = __Vtemp1888[2U];
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT___reg_result_T_1[3U] 
        = __Vtemp1888[3U];
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT___reg_result_T_1[4U] 
        = (7U & __Vtemp1888[4U]);
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
    __Vtemp1892[0U] = (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_q[0U] 
                       << 1U);
    __Vtemp1892[1U] = ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_q[0U] 
                        >> 0x1fU) | (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_q[1U] 
                                     << 1U));
    __Vtemp1892[2U] = ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[0U] 
                        << 3U) | ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_q[1U] 
                                   >> 0x1fU) | (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_q[2U] 
                                                << 1U)));
    __Vtemp1892[3U] = ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[0U] 
                        >> 0x1dU) | (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[1U] 
                                     << 3U));
    __Vtemp1892[4U] = ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[1U] 
                        >> 0x1dU) | (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[2U] 
                                     << 3U));
    __Vtemp1896[0U] = 1U;
    __Vtemp1896[1U] = 0U;
    __Vtemp1896[2U] = 0U;
    __Vtemp1897[0U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[0U]);
    __Vtemp1897[1U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[1U]);
    __Vtemp1897[2U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[2U]);
    VL_ADD_W(3, __Vtemp1898, __Vtemp1896, __Vtemp1897);
    __Vtemp1903[0U] = ((1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[2U] 
                              ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[2U]))
                        ? 0U : 1U);
    __Vtemp1903[1U] = 0U;
    if ((1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[2U] 
               ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[2U]))) {
        __Vtemp1903[2U] = (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[0U] 
                           << 2U);
        __Vtemp1903[3U] = ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[0U] 
                            >> 0x1eU) | (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[1U] 
                                         << 2U));
        __Vtemp1903[4U] = ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[1U] 
                            >> 0x1eU) | (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[2U] 
                                         << 2U));
    } else {
        __Vtemp1903[2U] = (__Vtemp1898[0U] << 2U);
        __Vtemp1903[3U] = ((__Vtemp1898[0U] >> 0x1eU) 
                           | (__Vtemp1898[1U] << 2U));
        __Vtemp1903[4U] = ((__Vtemp1898[1U] >> 0x1eU) 
                           | (4U & (__Vtemp1898[2U] 
                                    << 2U)));
    }
    VL_EXTEND_WW(132,131, __Vtemp1904, __Vtemp1903);
    VL_ADD_W(5, __Vtemp1905, __Vtemp1892, __Vtemp1904);
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__temp_result[0U] 
        = __Vtemp1905[0U];
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__temp_result[1U] 
        = __Vtemp1905[1U];
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__temp_result[2U] 
        = __Vtemp1905[2U];
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__temp_result[3U] 
        = __Vtemp1905[3U];
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__temp_result[4U] 
        = (0xfU & __Vtemp1905[4U]);
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT___temp_result_T_4 
        = (1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[2U] 
                 ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[2U]));
    __Vtemp1909[0U] = 1U;
    __Vtemp1909[1U] = 0U;
    __Vtemp1909[2U] = 0U;
    __Vtemp1910[0U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[0U]);
    __Vtemp1910[1U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[1U]);
    __Vtemp1910[2U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[2U]);
    VL_ADD_W(3, __Vtemp1911, __Vtemp1909, __Vtemp1910);
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__is_need_correct 
        = ((((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[2U] 
              ^ (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_dividend[2U] 
                 >> 1U)) & (0U != ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[0U] 
                                    | vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[1U]) 
                                   | vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[2U]))) 
            | (0U == (((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[0U] 
                        ^ __Vtemp1911[0U]) | (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[1U] 
                                              ^ __Vtemp1911[1U])) 
                      | (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[2U] 
                         ^ (1U & __Vtemp1911[2U]))))) 
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
    vlSelf->io_difftest_reg_26 = vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__regfile_26;
    vlSelf->io_difftest_reg_21 = vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__regfile_21;
    vlSelf->io_difftest_reg_19 = vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__regfile_19;
    vlSelf->io_difftest_reg_20 = vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__regfile_20;
    vlSelf->io_difftest_reg_14 = vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__regfile_14;
    vlSelf->io_difftest_reg_22 = vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__regfile_22;
    vlSelf->io_difftest_reg_23 = vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__regfile_23;
    vlSelf->io_difftest_reg_24 = vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__regfile_24;
    vlSelf->io_difftest_reg_25 = vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__regfile_25;
    vlSelf->io_difftest_reg_15 = vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__regfile_15;
    vlSelf->io_difftest_reg_16 = vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__regfile_16;
    vlSelf->io_difftest_reg_17 = vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__regfile_17;
    vlSelf->io_difftest_reg_18 = vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__regfile_18;
    vlSelf->io_difftest_reg_9 = vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__regfile_9;
    vlSelf->io_difftest_reg_7 = vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__regfile_7;
    vlSelf->io_difftest_reg_11 = vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__regfile_11;
    vlSelf->io_difftest_reg_2 = vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__regfile_2;
    vlSelf->io_difftest_reg_10 = vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__regfile_10;
    vlSelf->io_difftest_reg_1 = vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__regfile_1;
    vlSelf->io_difftest_reg_5 = vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__regfile_5;
    vlSelf->io_difftest_reg_6 = vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__regfile_6;
    vlSelf->io_difftest_reg_8 = vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__regfile_8;
    vlSelf->io_difftest_reg_3 = vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__regfile_3;
    vlSelf->io_difftest_reg_12 = vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__regfile_12;
    vlSelf->io_difftest_reg_4 = vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__regfile_4;
    vlSelf->io_difftest_reg_13 = vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__regfile_13;
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
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage0__DOT__reg_valid = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage1_io_cpu_addr_ready) {
        vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage0__DOT__reg_valid 
            = (((0ULL != (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_pc_0 
                          >> 0x1fU)) & (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_bus_valid)) 
               & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch_io_out_flush)));
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
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_taken = 0U;
    } else if (((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu_io_valid) 
                & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__ready))) {
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_taken 
            = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__br_valid) 
               & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[2U]);
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
        vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__regfile_31 = 0ULL;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__execute_io_wb_valid) {
        if ((0x1fU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_dest_addr))) {
            vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__regfile_31 
                = vlSelf->riscv_soc__DOT__core__DOT__execute_io_wb_dest_data;
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__regfile_30 = 0ULL;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__execute_io_wb_valid) {
        if ((0x1eU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_dest_addr))) {
            vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__regfile_30 
                = vlSelf->riscv_soc__DOT__core__DOT__execute_io_wb_dest_data;
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__regfile_29 = 0ULL;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__execute_io_wb_valid) {
        if ((0x1dU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_dest_addr))) {
            vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__regfile_29 
                = vlSelf->riscv_soc__DOT__core__DOT__execute_io_wb_dest_data;
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__regfile_28 = 0ULL;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__execute_io_wb_valid) {
        if ((0x1cU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_dest_addr))) {
            vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__regfile_28 
                = vlSelf->riscv_soc__DOT__core__DOT__execute_io_wb_dest_data;
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__regfile_27 = 0ULL;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__execute_io_wb_valid) {
        if ((0x1bU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_dest_addr))) {
            vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__regfile_27 
                = vlSelf->riscv_soc__DOT__core__DOT__execute_io_wb_dest_data;
        }
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
            VL_EXTEND_WQ(128,54, __Vtemp1913, (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                               >> 0xaU));
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_63[0U] 
                = __Vtemp1913[0U];
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_63[1U] 
                = __Vtemp1913[1U];
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_63[2U] 
                = __Vtemp1913[2U];
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_63[3U] 
                = __Vtemp1913[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_62[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_62[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_62[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram1__DOT__sram_62[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram0_write) {
        if ((0x3eU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram0_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp1914, (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                               >> 0xaU));
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_62[0U] 
                = __Vtemp1914[0U];
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_62[1U] 
                = __Vtemp1914[1U];
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_62[2U] 
                = __Vtemp1914[2U];
            vlSelf->riscv_soc__DOT__sram1__DOT__sram_62[3U] 
                = __Vtemp1914[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_63[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_63[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_63[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_63[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram1_write) {
        if ((0x3fU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp1915, (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                               >> 0xaU));
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_63[0U] 
                = __Vtemp1915[0U];
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_63[1U] 
                = __Vtemp1915[1U];
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_63[2U] 
                = __Vtemp1915[2U];
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_63[3U] 
                = __Vtemp1915[3U];
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_62[0U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_62[1U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_62[2U] = 0U;
        vlSelf->riscv_soc__DOT__sram3__DOT__sram_62[3U] = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__is_sram1_write) {
        if ((0x3eU == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache_io_sram2_tag_addr))) {
            VL_EXTEND_WQ(128,54, __Vtemp1916, (vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_cpu_addr 
                                               >> 0xaU));
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_62[0U] 
                = __Vtemp1916[0U];
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_62[1U] 
                = __Vtemp1916[1U];
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_62[2U] 
                = __Vtemp1916[2U];
            vlSelf->riscv_soc__DOT__sram3__DOT__sram_62[3U] 
                = __Vtemp1916[3U];
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
    VL_ADD_W(3, __Vtemp1918, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor);
    __Vtemp1919[0U] = 1U;
    __Vtemp1919[1U] = 0U;
    __Vtemp1919[2U] = 0U;
    __Vtemp1920[0U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[0U]);
    __Vtemp1920[1U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[1U]);
    __Vtemp1920[2U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[2U]);
    VL_ADD_W(3, __Vtemp1921, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem, __Vtemp1920);
    VL_ADD_W(3, __Vtemp1922, __Vtemp1919, __Vtemp1921);
    if ((3U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state))) {
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT___GEN_18[0U] 
            = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__is_need_correct)
                ? ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT___temp_result_T_4)
                    ? __Vtemp1918[0U] : __Vtemp1922[0U])
                : vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[0U]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT___GEN_18[1U] 
            = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__is_need_correct)
                ? ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT___temp_result_T_4)
                    ? __Vtemp1918[1U] : __Vtemp1922[1U])
                : vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[1U]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT___GEN_18[2U] 
            = (1U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__is_need_correct)
                      ? ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT___temp_result_T_4)
                          ? __Vtemp1918[2U] : __Vtemp1922[2U])
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
    vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT___T 
        = (1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__w_locked)));
    vlSelf->riscv_soc__DOT__axi_ram__DOT__reg_b_valid 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar_io_AXI_Bus_w_bits_wlast));
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
    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__update_btb_data[0U] 
        = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_next_pc) 
           << 2U);
    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__update_btb_data[1U] 
        = (((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_next_pc) 
            >> 0x1eU) | ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_next_pc 
                                  >> 0x20U)) << 2U));
    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__update_btb_data[2U] 
        = (((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                     >> 9U)) << 3U) | ((4U & ((IData)(
                                                      (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                                       >> 2U)) 
                                              << 2U)) 
                                       | ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_next_pc 
                                                   >> 0x20U)) 
                                          >> 0x1eU)));
    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT__update_btb_data[3U] 
        = (0x4000000U | (((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                   >> 9U)) >> 0x1dU) 
                         | ((IData)(((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_br_pc 
                                      >> 9U) >> 0x20U)) 
                            << 3U)));
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
    vlSelf->io_difftest_reg_31 = vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__regfile_31;
    vlSelf->io_difftest_reg_30 = vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__regfile_30;
    vlSelf->io_difftest_reg_29 = vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__regfile_29;
    vlSelf->io_difftest_reg_28 = vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__regfile_28;
    vlSelf->io_difftest_reg_27 = vlSelf->riscv_soc__DOT__core__DOT__commit__DOT__regfile_27;
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_dest_addr = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__ready) {
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_dest_addr 
            = vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_dest_addr;
    }
    vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT___T_4 
        = (0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__reg_r_cnt));
    vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT___reg_r_cnt_T_5 
        = (3U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__cross_bar__DOT__reg_r_cnt) 
                 - (IData)(1U)));
    vlSelf->__Vdly__riscv_soc__DOT__core__DOT__d_cache__DOT__reg_cache_state 
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
        vlSelf->__Vdly__riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_bus_state = 0U;
    } else if ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_bus_state))) {
        vlSelf->__Vdly__riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_bus_state 
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
            vlSelf->__Vdly__riscv_soc__DOT__core__DOT__i_cache__DOT__cache_stage2__DOT__reg_bus_state = 0U;
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
    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__br_predictor__DOT___GEN_26 
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
}
