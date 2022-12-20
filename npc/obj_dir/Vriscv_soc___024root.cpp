// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vriscv_soc.h for the primary calling header

#include "Vriscv_soc___024root.h"
#include "Vriscv_soc__Syms.h"

#include "verilated_dpi.h"

//==========

VL_INLINE_OPT void Vriscv_soc___024root___combo__TOP__6(Vriscv_soc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vriscv_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv_soc___024root___combo__TOP__6\n"); );
    // Body
    if (((IData)(vlSelf->clock) ^ (IData)(vlSelf->riscv_soc__DOT____Vtogcov__clock))) {
        ++(vlSymsp->__Vcoverage[0]);
        vlSelf->riscv_soc__DOT____Vtogcov__clock = vlSelf->clock;
    }
    if (((IData)(vlSelf->reset) ^ (IData)(vlSelf->riscv_soc__DOT____Vtogcov__reset))) {
        ++(vlSymsp->__Vcoverage[1]);
        vlSelf->riscv_soc__DOT____Vtogcov__reset = vlSelf->reset;
    }
}

void Vriscv_soc___024unit____Vdpiimwrap_ramCtrl_TOP____024unit(QData/*63:0*/ raddr, QData/*63:0*/ &rdata, QData/*63:0*/ waddr, QData/*63:0*/ wdata, CData/*7:0*/ wstrb, CData/*0:0*/ wen);

VL_INLINE_OPT void Vriscv_soc___024root___sequent__TOP__7(Vriscv_soc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vriscv_soc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv_soc___024root___sequent__TOP__7\n"); );
    // Variables
    CData/*1:0*/ __Vdly__riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state;
    CData/*5:0*/ __Vdly__riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_cnt;
    CData/*1:0*/ __Vdly__riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_state;
    CData/*4:0*/ __Vdlyvdim0__riscv_soc__DOT__core__DOT__decode__DOT__regfile__v0;
    CData/*0:0*/ __Vdlyvset__riscv_soc__DOT__core__DOT__decode__DOT__regfile__v0;
    VlWide<3>/*95:0*/ __Vtemp1486;
    VlWide<3>/*95:0*/ __Vtemp1491;
    VlWide<3>/*95:0*/ __Vtemp1494;
    VlWide<3>/*95:0*/ __Vtemp1499;
    VlWide<3>/*95:0*/ __Vtemp1502;
    VlWide<3>/*95:0*/ __Vtemp1508;
    VlWide<3>/*95:0*/ __Vtemp1509;
    VlWide<3>/*95:0*/ __Vtemp1510;
    VlWide<3>/*95:0*/ __Vtemp1511;
    VlWide<3>/*95:0*/ __Vtemp1512;
    VlWide<3>/*95:0*/ __Vtemp1514;
    VlWide<3>/*95:0*/ __Vtemp1515;
    VlWide<3>/*95:0*/ __Vtemp1516;
    VlWide<3>/*95:0*/ __Vtemp1517;
    VlWide<3>/*95:0*/ __Vtemp1518;
    VlWide<3>/*95:0*/ __Vtemp1520;
    VlWide<3>/*95:0*/ __Vtemp1521;
    VlWide<3>/*95:0*/ __Vtemp1522;
    VlWide<3>/*95:0*/ __Vtemp1530;
    VlWide<3>/*95:0*/ __Vtemp1531;
    VlWide<3>/*95:0*/ __Vtemp1541;
    VlWide<3>/*95:0*/ __Vtemp1542;
    VlWide<3>/*95:0*/ __Vtemp1543;
    VlWide<3>/*95:0*/ __Vtemp1546;
    VlWide<3>/*95:0*/ __Vtemp1547;
    VlWide<3>/*95:0*/ __Vtemp1548;
    VlWide<3>/*95:0*/ __Vtemp1551;
    VlWide<3>/*95:0*/ __Vtemp1552;
    VlWide<3>/*95:0*/ __Vtemp1553;
    VlWide<3>/*95:0*/ __Vtemp1556;
    VlWide<3>/*95:0*/ __Vtemp1557;
    VlWide<3>/*95:0*/ __Vtemp1558;
    VlWide<3>/*95:0*/ __Vtemp1561;
    VlWide<3>/*95:0*/ __Vtemp1562;
    VlWide<3>/*95:0*/ __Vtemp1563;
    VlWide<3>/*95:0*/ __Vtemp1566;
    VlWide<3>/*95:0*/ __Vtemp1567;
    VlWide<3>/*95:0*/ __Vtemp1568;
    VlWide<3>/*95:0*/ __Vtemp1571;
    VlWide<3>/*95:0*/ __Vtemp1572;
    VlWide<3>/*95:0*/ __Vtemp1573;
    VlWide<3>/*95:0*/ __Vtemp1576;
    VlWide<3>/*95:0*/ __Vtemp1577;
    VlWide<3>/*95:0*/ __Vtemp1578;
    VlWide<3>/*95:0*/ __Vtemp1581;
    VlWide<3>/*95:0*/ __Vtemp1582;
    VlWide<3>/*95:0*/ __Vtemp1583;
    VlWide<3>/*95:0*/ __Vtemp1586;
    VlWide<3>/*95:0*/ __Vtemp1587;
    VlWide<3>/*95:0*/ __Vtemp1588;
    VlWide<3>/*95:0*/ __Vtemp1591;
    VlWide<3>/*95:0*/ __Vtemp1592;
    VlWide<3>/*95:0*/ __Vtemp1593;
    VlWide<3>/*95:0*/ __Vtemp1596;
    VlWide<3>/*95:0*/ __Vtemp1597;
    VlWide<3>/*95:0*/ __Vtemp1598;
    VlWide<3>/*95:0*/ __Vtemp1601;
    VlWide<3>/*95:0*/ __Vtemp1602;
    VlWide<3>/*95:0*/ __Vtemp1603;
    VlWide<3>/*95:0*/ __Vtemp1606;
    VlWide<3>/*95:0*/ __Vtemp1607;
    VlWide<3>/*95:0*/ __Vtemp1608;
    VlWide<3>/*95:0*/ __Vtemp1611;
    VlWide<3>/*95:0*/ __Vtemp1612;
    VlWide<3>/*95:0*/ __Vtemp1613;
    VlWide<3>/*95:0*/ __Vtemp1616;
    VlWide<3>/*95:0*/ __Vtemp1617;
    VlWide<3>/*95:0*/ __Vtemp1618;
    VlWide<3>/*95:0*/ __Vtemp1621;
    VlWide<3>/*95:0*/ __Vtemp1622;
    VlWide<3>/*95:0*/ __Vtemp1623;
    VlWide<3>/*95:0*/ __Vtemp1626;
    VlWide<3>/*95:0*/ __Vtemp1627;
    VlWide<3>/*95:0*/ __Vtemp1628;
    VlWide<3>/*95:0*/ __Vtemp1631;
    VlWide<3>/*95:0*/ __Vtemp1632;
    VlWide<3>/*95:0*/ __Vtemp1633;
    VlWide<3>/*95:0*/ __Vtemp1636;
    VlWide<3>/*95:0*/ __Vtemp1637;
    VlWide<3>/*95:0*/ __Vtemp1638;
    VlWide<3>/*95:0*/ __Vtemp1641;
    VlWide<3>/*95:0*/ __Vtemp1642;
    VlWide<3>/*95:0*/ __Vtemp1643;
    VlWide<3>/*95:0*/ __Vtemp1646;
    VlWide<3>/*95:0*/ __Vtemp1647;
    VlWide<3>/*95:0*/ __Vtemp1648;
    VlWide<3>/*95:0*/ __Vtemp1651;
    VlWide<3>/*95:0*/ __Vtemp1652;
    VlWide<3>/*95:0*/ __Vtemp1653;
    VlWide<3>/*95:0*/ __Vtemp1656;
    VlWide<3>/*95:0*/ __Vtemp1657;
    VlWide<3>/*95:0*/ __Vtemp1658;
    VlWide<3>/*95:0*/ __Vtemp1661;
    VlWide<3>/*95:0*/ __Vtemp1662;
    VlWide<3>/*95:0*/ __Vtemp1663;
    VlWide<3>/*95:0*/ __Vtemp1666;
    VlWide<3>/*95:0*/ __Vtemp1667;
    VlWide<3>/*95:0*/ __Vtemp1668;
    VlWide<3>/*95:0*/ __Vtemp1671;
    VlWide<3>/*95:0*/ __Vtemp1672;
    VlWide<3>/*95:0*/ __Vtemp1673;
    VlWide<3>/*95:0*/ __Vtemp1676;
    VlWide<3>/*95:0*/ __Vtemp1677;
    VlWide<3>/*95:0*/ __Vtemp1678;
    VlWide<3>/*95:0*/ __Vtemp1681;
    VlWide<3>/*95:0*/ __Vtemp1682;
    VlWide<3>/*95:0*/ __Vtemp1683;
    VlWide<3>/*95:0*/ __Vtemp1686;
    VlWide<3>/*95:0*/ __Vtemp1687;
    VlWide<3>/*95:0*/ __Vtemp1688;
    VlWide<3>/*95:0*/ __Vtemp1691;
    VlWide<3>/*95:0*/ __Vtemp1692;
    VlWide<3>/*95:0*/ __Vtemp1693;
    VlWide<3>/*95:0*/ __Vtemp1696;
    VlWide<3>/*95:0*/ __Vtemp1697;
    VlWide<3>/*95:0*/ __Vtemp1698;
    VlWide<3>/*95:0*/ __Vtemp1701;
    VlWide<3>/*95:0*/ __Vtemp1702;
    VlWide<3>/*95:0*/ __Vtemp1703;
    VlWide<3>/*95:0*/ __Vtemp1706;
    VlWide<3>/*95:0*/ __Vtemp1707;
    VlWide<3>/*95:0*/ __Vtemp1708;
    VlWide<3>/*95:0*/ __Vtemp1711;
    VlWide<3>/*95:0*/ __Vtemp1712;
    VlWide<3>/*95:0*/ __Vtemp1713;
    VlWide<3>/*95:0*/ __Vtemp1716;
    VlWide<3>/*95:0*/ __Vtemp1717;
    VlWide<3>/*95:0*/ __Vtemp1718;
    VlWide<3>/*95:0*/ __Vtemp1721;
    VlWide<3>/*95:0*/ __Vtemp1722;
    VlWide<3>/*95:0*/ __Vtemp1723;
    VlWide<3>/*95:0*/ __Vtemp1726;
    VlWide<3>/*95:0*/ __Vtemp1727;
    VlWide<3>/*95:0*/ __Vtemp1728;
    VlWide<3>/*95:0*/ __Vtemp1731;
    VlWide<3>/*95:0*/ __Vtemp1732;
    VlWide<3>/*95:0*/ __Vtemp1733;
    VlWide<3>/*95:0*/ __Vtemp1736;
    VlWide<3>/*95:0*/ __Vtemp1737;
    VlWide<3>/*95:0*/ __Vtemp1738;
    VlWide<3>/*95:0*/ __Vtemp1741;
    VlWide<3>/*95:0*/ __Vtemp1742;
    VlWide<3>/*95:0*/ __Vtemp1743;
    VlWide<3>/*95:0*/ __Vtemp1746;
    VlWide<3>/*95:0*/ __Vtemp1747;
    VlWide<3>/*95:0*/ __Vtemp1748;
    VlWide<3>/*95:0*/ __Vtemp1751;
    VlWide<3>/*95:0*/ __Vtemp1752;
    VlWide<3>/*95:0*/ __Vtemp1753;
    VlWide<3>/*95:0*/ __Vtemp1756;
    VlWide<3>/*95:0*/ __Vtemp1757;
    VlWide<3>/*95:0*/ __Vtemp1758;
    VlWide<3>/*95:0*/ __Vtemp1761;
    VlWide<3>/*95:0*/ __Vtemp1762;
    VlWide<3>/*95:0*/ __Vtemp1763;
    VlWide<3>/*95:0*/ __Vtemp1766;
    VlWide<3>/*95:0*/ __Vtemp1767;
    VlWide<3>/*95:0*/ __Vtemp1768;
    VlWide<3>/*95:0*/ __Vtemp1771;
    VlWide<3>/*95:0*/ __Vtemp1772;
    VlWide<3>/*95:0*/ __Vtemp1773;
    VlWide<3>/*95:0*/ __Vtemp1776;
    VlWide<3>/*95:0*/ __Vtemp1777;
    VlWide<3>/*95:0*/ __Vtemp1778;
    VlWide<3>/*95:0*/ __Vtemp1781;
    VlWide<3>/*95:0*/ __Vtemp1782;
    VlWide<3>/*95:0*/ __Vtemp1783;
    VlWide<3>/*95:0*/ __Vtemp1786;
    VlWide<3>/*95:0*/ __Vtemp1787;
    VlWide<3>/*95:0*/ __Vtemp1788;
    VlWide<3>/*95:0*/ __Vtemp1791;
    VlWide<3>/*95:0*/ __Vtemp1792;
    VlWide<3>/*95:0*/ __Vtemp1793;
    VlWide<3>/*95:0*/ __Vtemp1796;
    VlWide<3>/*95:0*/ __Vtemp1797;
    VlWide<3>/*95:0*/ __Vtemp1798;
    VlWide<3>/*95:0*/ __Vtemp1801;
    VlWide<3>/*95:0*/ __Vtemp1802;
    VlWide<3>/*95:0*/ __Vtemp1803;
    VlWide<3>/*95:0*/ __Vtemp1806;
    VlWide<3>/*95:0*/ __Vtemp1807;
    VlWide<3>/*95:0*/ __Vtemp1808;
    VlWide<3>/*95:0*/ __Vtemp1811;
    VlWide<3>/*95:0*/ __Vtemp1812;
    VlWide<3>/*95:0*/ __Vtemp1813;
    VlWide<3>/*95:0*/ __Vtemp1816;
    VlWide<3>/*95:0*/ __Vtemp1817;
    VlWide<3>/*95:0*/ __Vtemp1818;
    VlWide<3>/*95:0*/ __Vtemp1821;
    VlWide<3>/*95:0*/ __Vtemp1822;
    VlWide<3>/*95:0*/ __Vtemp1823;
    VlWide<3>/*95:0*/ __Vtemp1826;
    VlWide<3>/*95:0*/ __Vtemp1827;
    VlWide<3>/*95:0*/ __Vtemp1828;
    VlWide<3>/*95:0*/ __Vtemp1831;
    VlWide<3>/*95:0*/ __Vtemp1832;
    VlWide<3>/*95:0*/ __Vtemp1833;
    VlWide<3>/*95:0*/ __Vtemp1836;
    VlWide<3>/*95:0*/ __Vtemp1837;
    VlWide<3>/*95:0*/ __Vtemp1838;
    VlWide<3>/*95:0*/ __Vtemp1841;
    VlWide<3>/*95:0*/ __Vtemp1842;
    VlWide<3>/*95:0*/ __Vtemp1843;
    VlWide<3>/*95:0*/ __Vtemp1846;
    VlWide<3>/*95:0*/ __Vtemp1847;
    VlWide<3>/*95:0*/ __Vtemp1848;
    VlWide<3>/*95:0*/ __Vtemp1851;
    VlWide<3>/*95:0*/ __Vtemp1852;
    VlWide<3>/*95:0*/ __Vtemp1853;
    VlWide<3>/*95:0*/ __Vtemp1856;
    VlWide<3>/*95:0*/ __Vtemp1857;
    VlWide<3>/*95:0*/ __Vtemp1858;
    VlWide<3>/*95:0*/ __Vtemp1861;
    VlWide<3>/*95:0*/ __Vtemp1862;
    VlWide<3>/*95:0*/ __Vtemp1863;
    VlWide<3>/*95:0*/ __Vtemp1866;
    VlWide<3>/*95:0*/ __Vtemp1867;
    VlWide<3>/*95:0*/ __Vtemp1868;
    VlWide<3>/*95:0*/ __Vtemp1871;
    VlWide<3>/*95:0*/ __Vtemp1872;
    VlWide<3>/*95:0*/ __Vtemp1873;
    VlWide<3>/*95:0*/ __Vtemp1876;
    VlWide<3>/*95:0*/ __Vtemp1877;
    VlWide<3>/*95:0*/ __Vtemp1878;
    VlWide<3>/*95:0*/ __Vtemp1881;
    VlWide<3>/*95:0*/ __Vtemp1882;
    VlWide<3>/*95:0*/ __Vtemp1883;
    VlWide<3>/*95:0*/ __Vtemp1886;
    VlWide<3>/*95:0*/ __Vtemp1887;
    VlWide<3>/*95:0*/ __Vtemp1888;
    VlWide<3>/*95:0*/ __Vtemp1891;
    VlWide<3>/*95:0*/ __Vtemp1892;
    VlWide<3>/*95:0*/ __Vtemp1893;
    VlWide<3>/*95:0*/ __Vtemp1896;
    VlWide<3>/*95:0*/ __Vtemp1897;
    VlWide<3>/*95:0*/ __Vtemp1898;
    VlWide<3>/*95:0*/ __Vtemp1901;
    VlWide<3>/*95:0*/ __Vtemp1902;
    VlWide<3>/*95:0*/ __Vtemp1903;
    VlWide<3>/*95:0*/ __Vtemp1906;
    VlWide<3>/*95:0*/ __Vtemp1907;
    VlWide<3>/*95:0*/ __Vtemp1908;
    VlWide<3>/*95:0*/ __Vtemp1911;
    VlWide<3>/*95:0*/ __Vtemp1912;
    VlWide<3>/*95:0*/ __Vtemp1913;
    VlWide<3>/*95:0*/ __Vtemp1916;
    VlWide<3>/*95:0*/ __Vtemp1917;
    VlWide<3>/*95:0*/ __Vtemp1918;
    VlWide<3>/*95:0*/ __Vtemp1921;
    VlWide<3>/*95:0*/ __Vtemp1922;
    VlWide<3>/*95:0*/ __Vtemp1923;
    VlWide<3>/*95:0*/ __Vtemp1926;
    VlWide<3>/*95:0*/ __Vtemp1927;
    VlWide<3>/*95:0*/ __Vtemp1928;
    VlWide<3>/*95:0*/ __Vtemp1931;
    VlWide<3>/*95:0*/ __Vtemp1932;
    VlWide<3>/*95:0*/ __Vtemp1933;
    VlWide<3>/*95:0*/ __Vtemp1936;
    VlWide<3>/*95:0*/ __Vtemp1937;
    VlWide<3>/*95:0*/ __Vtemp1938;
    VlWide<3>/*95:0*/ __Vtemp1941;
    VlWide<3>/*95:0*/ __Vtemp1942;
    VlWide<3>/*95:0*/ __Vtemp1943;
    VlWide<3>/*95:0*/ __Vtemp1946;
    VlWide<3>/*95:0*/ __Vtemp1947;
    VlWide<3>/*95:0*/ __Vtemp1948;
    VlWide<3>/*95:0*/ __Vtemp1951;
    VlWide<3>/*95:0*/ __Vtemp1952;
    VlWide<3>/*95:0*/ __Vtemp1953;
    VlWide<3>/*95:0*/ __Vtemp1956;
    VlWide<3>/*95:0*/ __Vtemp1957;
    VlWide<3>/*95:0*/ __Vtemp1958;
    VlWide<3>/*95:0*/ __Vtemp1961;
    VlWide<3>/*95:0*/ __Vtemp1962;
    VlWide<3>/*95:0*/ __Vtemp1963;
    VlWide<3>/*95:0*/ __Vtemp1966;
    VlWide<3>/*95:0*/ __Vtemp1967;
    VlWide<3>/*95:0*/ __Vtemp1968;
    VlWide<3>/*95:0*/ __Vtemp1971;
    VlWide<3>/*95:0*/ __Vtemp1972;
    VlWide<3>/*95:0*/ __Vtemp1973;
    VlWide<3>/*95:0*/ __Vtemp1976;
    VlWide<3>/*95:0*/ __Vtemp1977;
    VlWide<3>/*95:0*/ __Vtemp1978;
    VlWide<3>/*95:0*/ __Vtemp1981;
    VlWide<3>/*95:0*/ __Vtemp1982;
    VlWide<3>/*95:0*/ __Vtemp1983;
    VlWide<3>/*95:0*/ __Vtemp1986;
    VlWide<3>/*95:0*/ __Vtemp1987;
    VlWide<3>/*95:0*/ __Vtemp1988;
    VlWide<3>/*95:0*/ __Vtemp1991;
    VlWide<3>/*95:0*/ __Vtemp1992;
    VlWide<3>/*95:0*/ __Vtemp1993;
    VlWide<3>/*95:0*/ __Vtemp1996;
    VlWide<3>/*95:0*/ __Vtemp1997;
    VlWide<3>/*95:0*/ __Vtemp1998;
    VlWide<3>/*95:0*/ __Vtemp2001;
    VlWide<3>/*95:0*/ __Vtemp2002;
    VlWide<3>/*95:0*/ __Vtemp2003;
    VlWide<3>/*95:0*/ __Vtemp2006;
    VlWide<3>/*95:0*/ __Vtemp2007;
    VlWide<3>/*95:0*/ __Vtemp2008;
    VlWide<3>/*95:0*/ __Vtemp2011;
    VlWide<3>/*95:0*/ __Vtemp2012;
    VlWide<3>/*95:0*/ __Vtemp2013;
    VlWide<3>/*95:0*/ __Vtemp2016;
    VlWide<3>/*95:0*/ __Vtemp2017;
    VlWide<3>/*95:0*/ __Vtemp2018;
    VlWide<3>/*95:0*/ __Vtemp2021;
    VlWide<3>/*95:0*/ __Vtemp2022;
    VlWide<3>/*95:0*/ __Vtemp2023;
    VlWide<3>/*95:0*/ __Vtemp2026;
    VlWide<3>/*95:0*/ __Vtemp2027;
    VlWide<3>/*95:0*/ __Vtemp2028;
    VlWide<3>/*95:0*/ __Vtemp2031;
    VlWide<3>/*95:0*/ __Vtemp2032;
    VlWide<3>/*95:0*/ __Vtemp2033;
    VlWide<3>/*95:0*/ __Vtemp2036;
    VlWide<3>/*95:0*/ __Vtemp2037;
    VlWide<3>/*95:0*/ __Vtemp2038;
    VlWide<3>/*95:0*/ __Vtemp2041;
    VlWide<3>/*95:0*/ __Vtemp2042;
    VlWide<3>/*95:0*/ __Vtemp2043;
    VlWide<3>/*95:0*/ __Vtemp2046;
    VlWide<3>/*95:0*/ __Vtemp2047;
    VlWide<3>/*95:0*/ __Vtemp2048;
    VlWide<3>/*95:0*/ __Vtemp2051;
    VlWide<3>/*95:0*/ __Vtemp2052;
    VlWide<3>/*95:0*/ __Vtemp2053;
    VlWide<3>/*95:0*/ __Vtemp2056;
    VlWide<3>/*95:0*/ __Vtemp2057;
    VlWide<3>/*95:0*/ __Vtemp2058;
    VlWide<3>/*95:0*/ __Vtemp2061;
    VlWide<3>/*95:0*/ __Vtemp2062;
    VlWide<3>/*95:0*/ __Vtemp2063;
    VlWide<3>/*95:0*/ __Vtemp2066;
    VlWide<3>/*95:0*/ __Vtemp2067;
    VlWide<3>/*95:0*/ __Vtemp2068;
    VlWide<3>/*95:0*/ __Vtemp2071;
    VlWide<3>/*95:0*/ __Vtemp2072;
    VlWide<3>/*95:0*/ __Vtemp2073;
    VlWide<3>/*95:0*/ __Vtemp2076;
    VlWide<3>/*95:0*/ __Vtemp2077;
    VlWide<3>/*95:0*/ __Vtemp2078;
    VlWide<3>/*95:0*/ __Vtemp2081;
    VlWide<3>/*95:0*/ __Vtemp2082;
    VlWide<3>/*95:0*/ __Vtemp2083;
    VlWide<3>/*95:0*/ __Vtemp2086;
    VlWide<3>/*95:0*/ __Vtemp2087;
    VlWide<3>/*95:0*/ __Vtemp2088;
    VlWide<3>/*95:0*/ __Vtemp2091;
    VlWide<3>/*95:0*/ __Vtemp2092;
    VlWide<3>/*95:0*/ __Vtemp2093;
    VlWide<3>/*95:0*/ __Vtemp2096;
    VlWide<3>/*95:0*/ __Vtemp2097;
    VlWide<3>/*95:0*/ __Vtemp2098;
    VlWide<3>/*95:0*/ __Vtemp2101;
    VlWide<3>/*95:0*/ __Vtemp2102;
    VlWide<3>/*95:0*/ __Vtemp2103;
    VlWide<3>/*95:0*/ __Vtemp2106;
    VlWide<3>/*95:0*/ __Vtemp2107;
    VlWide<3>/*95:0*/ __Vtemp2108;
    VlWide<3>/*95:0*/ __Vtemp2111;
    VlWide<3>/*95:0*/ __Vtemp2112;
    VlWide<3>/*95:0*/ __Vtemp2113;
    VlWide<3>/*95:0*/ __Vtemp2116;
    VlWide<3>/*95:0*/ __Vtemp2117;
    VlWide<3>/*95:0*/ __Vtemp2118;
    VlWide<3>/*95:0*/ __Vtemp2121;
    VlWide<3>/*95:0*/ __Vtemp2122;
    VlWide<3>/*95:0*/ __Vtemp2123;
    VlWide<3>/*95:0*/ __Vtemp2126;
    VlWide<3>/*95:0*/ __Vtemp2127;
    VlWide<3>/*95:0*/ __Vtemp2128;
    VlWide<3>/*95:0*/ __Vtemp2131;
    VlWide<3>/*95:0*/ __Vtemp2132;
    VlWide<3>/*95:0*/ __Vtemp2133;
    VlWide<3>/*95:0*/ __Vtemp2136;
    VlWide<3>/*95:0*/ __Vtemp2137;
    VlWide<3>/*95:0*/ __Vtemp2138;
    VlWide<3>/*95:0*/ __Vtemp2141;
    VlWide<3>/*95:0*/ __Vtemp2142;
    VlWide<3>/*95:0*/ __Vtemp2143;
    VlWide<3>/*95:0*/ __Vtemp2146;
    VlWide<3>/*95:0*/ __Vtemp2147;
    VlWide<3>/*95:0*/ __Vtemp2148;
    VlWide<3>/*95:0*/ __Vtemp2151;
    VlWide<3>/*95:0*/ __Vtemp2152;
    VlWide<3>/*95:0*/ __Vtemp2153;
    VlWide<3>/*95:0*/ __Vtemp2156;
    VlWide<3>/*95:0*/ __Vtemp2157;
    VlWide<3>/*95:0*/ __Vtemp2158;
    VlWide<3>/*95:0*/ __Vtemp2161;
    VlWide<3>/*95:0*/ __Vtemp2162;
    VlWide<3>/*95:0*/ __Vtemp2163;
    VlWide<3>/*95:0*/ __Vtemp2166;
    VlWide<3>/*95:0*/ __Vtemp2167;
    VlWide<3>/*95:0*/ __Vtemp2168;
    VlWide<3>/*95:0*/ __Vtemp2171;
    VlWide<3>/*95:0*/ __Vtemp2172;
    VlWide<3>/*95:0*/ __Vtemp2173;
    VlWide<3>/*95:0*/ __Vtemp2176;
    VlWide<3>/*95:0*/ __Vtemp2177;
    VlWide<3>/*95:0*/ __Vtemp2178;
    QData/*63:0*/ __Vtask_ramCtrl__0__rdata;
    QData/*63:0*/ __Vdlyvval__riscv_soc__DOT__core__DOT__decode__DOT__regfile__v0;
    // Body
    ++(vlSymsp->__Vcoverage[5552]);
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[5548]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[5546]);
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        ++(vlSymsp->__Vcoverage[5547]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[5550]);
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        ++(vlSymsp->__Vcoverage[5549]);
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        ++(vlSymsp->__Vcoverage[5551]);
    }
    vlSelf->__Vdly__riscv_soc__DOT__core__DOT__fetch__DOT__regPC 
        = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__regPC;
    ++(vlSymsp->__Vcoverage[5750]);
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[5732]);
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        ++(vlSymsp->__Vcoverage[5734]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[5749]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[5733]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[5729]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[5721]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[5741]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[5745]);
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__stall)))) {
            ++(vlSymsp->__Vcoverage[5730]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__stall) {
            ++(vlSymsp->__Vcoverage[5728]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__stall) {
            ++(vlSymsp->__Vcoverage[5744]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__stall)))) {
            ++(vlSymsp->__Vcoverage[5719]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__stall) {
            ++(vlSymsp->__Vcoverage[5739]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__stall) {
            ++(vlSymsp->__Vcoverage[5720]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__stall) {
            ++(vlSymsp->__Vcoverage[5748]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__stall)))) {
            ++(vlSymsp->__Vcoverage[5727]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__stall) {
            ++(vlSymsp->__Vcoverage[5731]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__stall)))) {
            ++(vlSymsp->__Vcoverage[5740]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__stall)))) {
            if (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_valid) {
                ++(vlSymsp->__Vcoverage[5726]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__stall)))) {
            if (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_valid) {
                ++(vlSymsp->__Vcoverage[5718]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__stall) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__tem_reg_is_read_inst)))) {
                ++(vlSymsp->__Vcoverage[5738]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__stall) {
            if (vlSelf->riscv_soc__DOT__core__DOT__tem_reg_is_read_inst) {
                ++(vlSymsp->__Vcoverage[5737]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__stall)))) {
            if (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_valid) {
                if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_next_pc_valid)))) {
                    ++(vlSymsp->__Vcoverage[5723]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__stall)))) {
            if (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_valid) {
                if (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_next_pc_valid) {
                    ++(vlSymsp->__Vcoverage[5722]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__stall)))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_valid)))) {
                if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__tem_reg_is_read_inst)))) {
                    ++(vlSymsp->__Vcoverage[5725]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__stall)))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_valid)))) {
                if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__tem_reg_is_read_inst)))) {
                    ++(vlSymsp->__Vcoverage[5717]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__stall)))) {
            if ((1U & (~ ((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_valid) 
                          | (IData)(vlSelf->riscv_soc__DOT__core__DOT__tem_reg_is_read_inst))))) {
                ++(vlSymsp->__Vcoverage[5743]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__stall)))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_valid)))) {
                if (vlSelf->riscv_soc__DOT__core__DOT__tem_reg_is_read_inst) {
                    ++(vlSymsp->__Vcoverage[5724]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__stall)))) {
            if (((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_valid) 
                 | (IData)(vlSelf->riscv_soc__DOT__core__DOT__tem_reg_is_read_inst))) {
                ++(vlSymsp->__Vcoverage[5746]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__stall)))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_valid)))) {
                if (vlSelf->riscv_soc__DOT__core__DOT__tem_reg_is_read_inst) {
                    ++(vlSymsp->__Vcoverage[5716]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__stall)))) {
            if (((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_valid) 
                 | (IData)(vlSelf->riscv_soc__DOT__core__DOT__tem_reg_is_read_inst))) {
                ++(vlSymsp->__Vcoverage[5742]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__stall)))) {
            if ((1U & (~ ((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_valid) 
                          | (IData)(vlSelf->riscv_soc__DOT__core__DOT__tem_reg_is_read_inst))))) {
                ++(vlSymsp->__Vcoverage[5747]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__stall) {
            if (vlSelf->riscv_soc__DOT__core__DOT__tem_reg_is_read_inst) {
                if ((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__regPC 
                                   >> 2U)))) {
                    ++(vlSymsp->__Vcoverage[5735]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__stall) {
            if (vlSelf->riscv_soc__DOT__core__DOT__tem_reg_is_read_inst) {
                if ((1U & (~ (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__regPC 
                                      >> 2U))))) {
                    ++(vlSymsp->__Vcoverage[5736]);
                }
            }
        }
    }
    __Vdly__riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_state 
        = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_state;
    __Vdly__riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_cnt 
        = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_cnt;
    __Vdly__riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state 
        = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state;
    ++(vlSymsp->__Vcoverage[7939]);
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[7925]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[7931]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[7910]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[7934]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[7916]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[7938]);
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_state))) {
            if ((1U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_state))) {
                if ((2U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_state))) {
                    ++(vlSymsp->__Vcoverage[7922]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_state))) {
            if ((1U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_state))) {
                if ((2U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_state))) {
                    ++(vlSymsp->__Vcoverage[7921]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_state))) {
            if ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_state))) {
                ++(vlSymsp->__Vcoverage[7923]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_state))) {
            ++(vlSymsp->__Vcoverage[7915]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_state))) {
            ++(vlSymsp->__Vcoverage[7914]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_state))) {
            if ((1U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_state))) {
                if ((2U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_state))) {
                    ++(vlSymsp->__Vcoverage[7906]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_state))) {
            ++(vlSymsp->__Vcoverage[7930]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_state))) {
            if ((1U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_state))) {
                if ((2U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_state))) {
                    ++(vlSymsp->__Vcoverage[7912]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_state))) {
            ++(vlSymsp->__Vcoverage[7933]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_state))) {
            ++(vlSymsp->__Vcoverage[7937]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_state))) {
            ++(vlSymsp->__Vcoverage[7909]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_state))) {
            ++(vlSymsp->__Vcoverage[7924]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_state))) {
            if ((1U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_state))) {
                ++(vlSymsp->__Vcoverage[7935]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_state))) {
            if ((1U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_state))) {
                if ((2U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_state))) {
                    ++(vlSymsp->__Vcoverage[7905]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_state))) {
            if ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_state))) {
                ++(vlSymsp->__Vcoverage[7913]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_state))) {
            if ((1U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_state))) {
                ++(vlSymsp->__Vcoverage[7907]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_state))) {
            if ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_state))) {
                ++(vlSymsp->__Vcoverage[7908]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_state))) {
            ++(vlSymsp->__Vcoverage[7929]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_state))) {
            if ((1U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_state))) {
                if ((2U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_state))) {
                    ++(vlSymsp->__Vcoverage[7911]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_state))) {
            ++(vlSymsp->__Vcoverage[7932]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_state))) {
            if ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_state))) {
                ++(vlSymsp->__Vcoverage[7936]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_state))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul_io_valid)))) {
                ++(vlSymsp->__Vcoverage[7918]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_state))) {
            if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul_io_valid) {
                ++(vlSymsp->__Vcoverage[7917]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_state))) {
            if ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_state))) {
                if ((0x20U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_cnt))) {
                    ++(vlSymsp->__Vcoverage[7920]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_state))) {
            if ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_state))) {
                if ((0x20U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_cnt))) {
                    ++(vlSymsp->__Vcoverage[7919]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_state))) {
            if ((1U & (~ ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_out_exuType) 
                          >> 2U)))) {
                if ((1U & (~ ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_out_exuType) 
                              >> 1U)))) {
                    ++(vlSymsp->__Vcoverage[7927]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_state))) {
            if ((4U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_out_exuType))) {
                ++(vlSymsp->__Vcoverage[7928]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_state))) {
            if ((1U & (~ ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_out_exuType) 
                          >> 2U)))) {
                if ((2U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_out_exuType))) {
                    ++(vlSymsp->__Vcoverage[7926]);
                }
            }
        }
    }
    ++(vlSymsp->__Vcoverage[7435]);
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[7434]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[7396]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[7404]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[7419]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[7428]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[7424]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[7413]);
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state))) {
            if ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state))) {
                ++(vlSymsp->__Vcoverage[7426]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state))) {
            ++(vlSymsp->__Vcoverage[7427]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state))) {
            ++(vlSymsp->__Vcoverage[7417]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state))) {
            if ((1U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state))) {
                if ((2U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state))) {
                    ++(vlSymsp->__Vcoverage[7415]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state))) {
            if ((1U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state))) {
                if ((2U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state))) {
                    ++(vlSymsp->__Vcoverage[7410]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state))) {
            ++(vlSymsp->__Vcoverage[7412]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state))) {
            ++(vlSymsp->__Vcoverage[7394]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state))) {
            if ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state))) {
                ++(vlSymsp->__Vcoverage[7432]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state))) {
            if ((1U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state))) {
                if ((2U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state))) {
                    ++(vlSymsp->__Vcoverage[7409]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state))) {
            ++(vlSymsp->__Vcoverage[7423]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state))) {
            ++(vlSymsp->__Vcoverage[7403]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state))) {
            if ((1U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state))) {
                if ((2U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state))) {
                    ++(vlSymsp->__Vcoverage[7430]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state))) {
            ++(vlSymsp->__Vcoverage[7418]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state))) {
            if ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state))) {
                ++(vlSymsp->__Vcoverage[7411]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state))) {
            if ((1U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state))) {
                if ((2U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state))) {
                    ++(vlSymsp->__Vcoverage[7414]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state))) {
            if ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state))) {
                ++(vlSymsp->__Vcoverage[7416]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state))) {
            ++(vlSymsp->__Vcoverage[7395]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state))) {
            if ((1U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state))) {
                ++(vlSymsp->__Vcoverage[7425]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state))) {
            ++(vlSymsp->__Vcoverage[7422]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state))) {
            ++(vlSymsp->__Vcoverage[7402]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state))) {
            ++(vlSymsp->__Vcoverage[7433]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state))) {
            if ((1U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state))) {
                if ((2U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state))) {
                    ++(vlSymsp->__Vcoverage[7429]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state))) {
            if ((1U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state))) {
                ++(vlSymsp->__Vcoverage[7431]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state))) {
            if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div_io_valid) {
                ++(vlSymsp->__Vcoverage[7420]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div_io_valid)))) {
                ++(vlSymsp->__Vcoverage[7406]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state))) {
            if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div_io_valid) {
                ++(vlSymsp->__Vcoverage[7405]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div_io_valid)))) {
                ++(vlSymsp->__Vcoverage[7421]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state))) {
            if ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state))) {
                if ((1U & (~ ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_cnt) 
                              >> 6U)))) {
                    ++(vlSymsp->__Vcoverage[7408]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state))) {
            if ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state))) {
                if ((0x40U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_cnt))) {
                    ++(vlSymsp->__Vcoverage[7407]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state))) {
            if ((1U & (~ ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_out_exuType) 
                          >> 1U)))) {
                if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_out_exuType)))) {
                    ++(vlSymsp->__Vcoverage[7392]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state))) {
            if ((2U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_out_exuType))) {
                ++(vlSymsp->__Vcoverage[7393]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state))) {
            if ((2U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_out_exuType))) {
                if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_out_exuType)))) {
                    ++(vlSymsp->__Vcoverage[7390]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state))) {
            if ((1U & (~ ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_out_exuType) 
                          >> 1U)))) {
                if ((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_out_exuType))) {
                    ++(vlSymsp->__Vcoverage[7399]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state))) {
            if ((1U & (~ ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_out_exuType) 
                          >> 1U)))) {
                if ((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_out_exuType))) {
                    ++(vlSymsp->__Vcoverage[7391]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state))) {
            if ((2U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_out_exuType))) {
                if ((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_out_exuType))) {
                    ++(vlSymsp->__Vcoverage[7397]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state))) {
            if ((2U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_out_exuType))) {
                if ((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_out_exuType))) {
                    ++(vlSymsp->__Vcoverage[7389]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state))) {
            if ((2U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_out_exuType))) {
                if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_out_exuType)))) {
                    ++(vlSymsp->__Vcoverage[7398]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state))) {
            if ((2U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_out_exuType))) {
                ++(vlSymsp->__Vcoverage[7401]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state))) {
            if ((1U & (~ ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_out_exuType) 
                          >> 1U)))) {
                if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_out_exuType)))) {
                    ++(vlSymsp->__Vcoverage[7400]);
                }
            }
        }
    }
    __Vdlyvset__riscv_soc__DOT__core__DOT__decode__DOT__regfile__v0 = 0U;
    ++(vlSymsp->__Vcoverage[8211]);
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[8181]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[8174]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[8167]);
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        ++(vlSymsp->__Vcoverage[8210]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[8155]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[8203]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[8198]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[8162]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[8188]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[8193]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[8208]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[8209]);
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute_io_out_flush)))) {
            ++(vlSymsp->__Vcoverage[8165]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (vlSelf->riscv_soc__DOT__core__DOT__execute_io_out_flush) {
            ++(vlSymsp->__Vcoverage[8166]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute_io_out_flush)))) {
            ++(vlSymsp->__Vcoverage[8160]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (vlSelf->riscv_soc__DOT__core__DOT__execute_io_out_flush) {
            ++(vlSymsp->__Vcoverage[8154]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (vlSelf->riscv_soc__DOT__core__DOT__execute_io_out_flush) {
            ++(vlSymsp->__Vcoverage[8197]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (vlSelf->riscv_soc__DOT__core__DOT__execute_io_out_flush) {
            ++(vlSymsp->__Vcoverage[8173]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute_io_out_flush)))) {
            ++(vlSymsp->__Vcoverage[8172]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (vlSelf->riscv_soc__DOT__core__DOT__execute_io_out_flush) {
            ++(vlSymsp->__Vcoverage[8161]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute_io_out_flush)))) {
            ++(vlSymsp->__Vcoverage[8196]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute_io_out_flush)))) {
            ++(vlSymsp->__Vcoverage[8191]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute_io_out_flush)))) {
            ++(vlSymsp->__Vcoverage[8153]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute_io_out_flush)))) {
            ++(vlSymsp->__Vcoverage[8201]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (vlSelf->riscv_soc__DOT__core__DOT__execute_io_out_flush) {
            ++(vlSymsp->__Vcoverage[8180]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (vlSelf->riscv_soc__DOT__core__DOT__execute_io_out_flush) {
            ++(vlSymsp->__Vcoverage[8207]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute_io_out_flush)))) {
            ++(vlSymsp->__Vcoverage[8206]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute_io_out_flush)))) {
            ++(vlSymsp->__Vcoverage[8179]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (vlSelf->riscv_soc__DOT__core__DOT__execute_io_out_flush) {
            ++(vlSymsp->__Vcoverage[8187]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute_io_out_flush)))) {
            ++(vlSymsp->__Vcoverage[8186]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (vlSelf->riscv_soc__DOT__core__DOT__execute_io_out_flush) {
            ++(vlSymsp->__Vcoverage[8192]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (vlSelf->riscv_soc__DOT__core__DOT__execute_io_out_flush) {
            ++(vlSymsp->__Vcoverage[8202]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute_io_out_flush)))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__stall)))) {
                ++(vlSymsp->__Vcoverage[8170]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute_io_out_flush)))) {
            if (vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__stall) {
                ++(vlSymsp->__Vcoverage[8171]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute_io_out_flush)))) {
            if (vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__stall) {
                ++(vlSymsp->__Vcoverage[8164]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute_io_out_flush)))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__stall)))) {
                ++(vlSymsp->__Vcoverage[8158]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute_io_out_flush)))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__stall)))) {
                ++(vlSymsp->__Vcoverage[8194]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute_io_out_flush)))) {
            if (vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__stall) {
                ++(vlSymsp->__Vcoverage[8200]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute_io_out_flush)))) {
            if (vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__stall) {
                ++(vlSymsp->__Vcoverage[8195]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute_io_out_flush)))) {
            if (vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__stall) {
                ++(vlSymsp->__Vcoverage[8159]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute_io_out_flush)))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__stall)))) {
                ++(vlSymsp->__Vcoverage[8204]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute_io_out_flush)))) {
            if (vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__stall) {
                ++(vlSymsp->__Vcoverage[8152]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute_io_out_flush)))) {
            if (vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__stall) {
                ++(vlSymsp->__Vcoverage[8205]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute_io_out_flush)))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__stall)))) {
                ++(vlSymsp->__Vcoverage[8163]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute_io_out_flush)))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__stall)))) {
                ++(vlSymsp->__Vcoverage[8151]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute_io_out_flush)))) {
            if (vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__stall) {
                ++(vlSymsp->__Vcoverage[8178]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute_io_out_flush)))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__stall)))) {
                ++(vlSymsp->__Vcoverage[8177]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute_io_out_flush)))) {
            if (vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__stall) {
                ++(vlSymsp->__Vcoverage[8185]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute_io_out_flush)))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__stall)))) {
                ++(vlSymsp->__Vcoverage[8184]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute_io_out_flush)))) {
            if (vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__stall) {
                ++(vlSymsp->__Vcoverage[8190]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute_io_out_flush)))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__stall)))) {
                ++(vlSymsp->__Vcoverage[8189]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute_io_out_flush)))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__stall)))) {
                ++(vlSymsp->__Vcoverage[8199]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute_io_out_flush)))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__stall)))) {
                if ((4U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__instType))) {
                    ++(vlSymsp->__Vcoverage[8169]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute_io_out_flush)))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__stall)))) {
                if ((4U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__instType))) {
                    ++(vlSymsp->__Vcoverage[8168]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute_io_out_flush)))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__stall)))) {
                if ((0U == (0x1fU & (vlSelf->riscv_soc__DOT__core__DOT__fetch_io_out_inst 
                                     >> 0xfU)))) {
                    ++(vlSymsp->__Vcoverage[8149]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute_io_out_flush)))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__stall)))) {
                if ((0x33U != (0xfe00707fU & vlSelf->riscv_soc__DOT__core__DOT__fetch_io_out_inst))) {
                    ++(vlSymsp->__Vcoverage[8176]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute_io_out_flush)))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__stall)))) {
                if ((0U != (0x1fU & (vlSelf->riscv_soc__DOT__core__DOT__fetch_io_out_inst 
                                     >> 0xfU)))) {
                    ++(vlSymsp->__Vcoverage[8150]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute_io_out_flush)))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__stall)))) {
                if ((0x33U == (0xfe00707fU & vlSelf->riscv_soc__DOT__core__DOT__fetch_io_out_inst))) {
                    ++(vlSymsp->__Vcoverage[8175]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute_io_out_flush)))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__stall)))) {
                if ((0U == (0x1fU & (vlSelf->riscv_soc__DOT__core__DOT__fetch_io_out_inst 
                                     >> 0x14U)))) {
                    ++(vlSymsp->__Vcoverage[8156]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute_io_out_flush)))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__stall)))) {
                if ((0U != (0x1fU & (vlSelf->riscv_soc__DOT__core__DOT__fetch_io_out_inst 
                                     >> 0x14U)))) {
                    ++(vlSymsp->__Vcoverage[8157]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute_io_out_flush)))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__stall)))) {
                if ((0x33U == (0xfe00707fU & vlSelf->riscv_soc__DOT__core__DOT__fetch_io_out_inst))) {
                    ++(vlSymsp->__Vcoverage[8182]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute_io_out_flush)))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__stall)))) {
                if ((0x33U != (0xfe00707fU & vlSelf->riscv_soc__DOT__core__DOT__fetch_io_out_inst))) {
                    ++(vlSymsp->__Vcoverage[8183]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back_io_out_w_rs_en)))) {
        ++(vlSymsp->__Vcoverage[8148]);
    }
    if (vlSelf->riscv_soc__DOT__core__DOT__write_back_io_out_w_rs_en) {
        ++(vlSymsp->__Vcoverage[8147]);
    }
    ++(vlSymsp->__Vcoverage[6397]);
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[6367]);
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        ++(vlSymsp->__Vcoverage[6362]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[6361]);
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        ++(vlSymsp->__Vcoverage[6360]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[6359]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[6353]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[6372]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[6393]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[6392]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[6348]);
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        ++(vlSymsp->__Vcoverage[6396]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[6377]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[6358]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[6384]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[6389]);
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        ++(vlSymsp->__Vcoverage[6394]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[6395]);
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_flush)))) {
            ++(vlSymsp->__Vcoverage[6375]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_flush) {
            ++(vlSymsp->__Vcoverage[6376]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_flush)))) {
            ++(vlSymsp->__Vcoverage[6370]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_flush) {
            ++(vlSymsp->__Vcoverage[6371]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_flush)))) {
            ++(vlSymsp->__Vcoverage[6365]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_flush)))) {
            ++(vlSymsp->__Vcoverage[6346]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_flush)))) {
            ++(vlSymsp->__Vcoverage[6390]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_flush) {
            ++(vlSymsp->__Vcoverage[6366]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_flush) {
            ++(vlSymsp->__Vcoverage[6347]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_flush)))) {
            ++(vlSymsp->__Vcoverage[6387]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_flush)))) {
            ++(vlSymsp->__Vcoverage[6351]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_flush) {
            ++(vlSymsp->__Vcoverage[6352]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_flush)))) {
            ++(vlSymsp->__Vcoverage[6356]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_flush) {
            ++(vlSymsp->__Vcoverage[6357]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_flush)))) {
            ++(vlSymsp->__Vcoverage[6382]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_flush) {
            ++(vlSymsp->__Vcoverage[6383]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_flush) {
            ++(vlSymsp->__Vcoverage[6388]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_flush) {
            ++(vlSymsp->__Vcoverage[6391]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_flush)))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_in_stall)))) {
                ++(vlSymsp->__Vcoverage[6373]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_flush)))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_in_stall)))) {
                ++(vlSymsp->__Vcoverage[6368]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_flush)))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_in_stall)))) {
                ++(vlSymsp->__Vcoverage[6363]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_flush)))) {
            if (vlSelf->riscv_soc__DOT__core__DOT__decode_io_in_stall) {
                ++(vlSymsp->__Vcoverage[6345]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_flush)))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_in_stall)))) {
                ++(vlSymsp->__Vcoverage[6354]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_flush)))) {
            if (vlSelf->riscv_soc__DOT__core__DOT__decode_io_in_stall) {
                ++(vlSymsp->__Vcoverage[6369]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_flush)))) {
            if (vlSelf->riscv_soc__DOT__core__DOT__decode_io_in_stall) {
                ++(vlSymsp->__Vcoverage[6364]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_flush)))) {
            if (vlSelf->riscv_soc__DOT__core__DOT__decode_io_in_stall) {
                ++(vlSymsp->__Vcoverage[6374]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_flush)))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_in_stall)))) {
                ++(vlSymsp->__Vcoverage[6344]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_flush)))) {
            if (vlSelf->riscv_soc__DOT__core__DOT__decode_io_in_stall) {
                ++(vlSymsp->__Vcoverage[6350]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_flush)))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_in_stall)))) {
                ++(vlSymsp->__Vcoverage[6349]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_flush)))) {
            if (vlSelf->riscv_soc__DOT__core__DOT__decode_io_in_stall) {
                ++(vlSymsp->__Vcoverage[6355]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_flush)))) {
            if (vlSelf->riscv_soc__DOT__core__DOT__decode_io_in_stall) {
                ++(vlSymsp->__Vcoverage[6381]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_flush)))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_in_stall)))) {
                ++(vlSymsp->__Vcoverage[6380]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_flush)))) {
            if (vlSelf->riscv_soc__DOT__core__DOT__decode_io_in_stall) {
                ++(vlSymsp->__Vcoverage[6386]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_flush)))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_in_stall)))) {
                ++(vlSymsp->__Vcoverage[6385]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_flush)))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_in_stall)))) {
                if (((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_rs_addr 
                      == (QData)((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs2_addr))) 
                     & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_w_rs_en))) {
                    ++(vlSymsp->__Vcoverage[6378]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_flush)))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_in_stall)))) {
                if ((1U & (~ ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_rs_addr 
                               == (QData)((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs2_addr))) 
                              & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_w_rs_en))))) {
                    ++(vlSymsp->__Vcoverage[6379]);
                }
            }
        }
    }
    vlSelf->__Vdly__riscv_soc__DOT__core__DOT__write_back__DOT__reg_ls_state 
        = vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_ls_state;
    ++(vlSymsp->__Vcoverage[8653]);
    Vriscv_soc___024unit____Vdpiimwrap_ramCtrl_TOP____024unit(vlSelf->riscv_soc__DOT__core_io_out_raddr, __Vtask_ramCtrl__0__rdata, vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_mem_addr, vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_mem_wdata, (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_mem_wstrb), vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_mem_wvalid);
    vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata 
        = __Vtask_ramCtrl__0__rdata;
    ++(vlSymsp->__Vcoverage[8652]);
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[8621]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[8613]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[8605]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[8602]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[8645]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[8589]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[8582]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[8642]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[8597]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[8627]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[8633]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[8636]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[8639]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[8648]);
    }
    if (vlSelf->reset) {
        ++(vlSymsp->__Vcoverage[8651]);
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_ls_state)))) {
            ++(vlSymsp->__Vcoverage[8612]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_ls_state)))) {
            ++(vlSymsp->__Vcoverage[8600]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_ls_state) {
            ++(vlSymsp->__Vcoverage[8601]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_ls_state) {
            ++(vlSymsp->__Vcoverage[8604]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_ls_state)))) {
            ++(vlSymsp->__Vcoverage[8581]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_ls_state) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_ls_state)))) {
                ++(vlSymsp->__Vcoverage[8580]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_ls_state)))) {
            ++(vlSymsp->__Vcoverage[8603]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_ls_state)))) {
            ++(vlSymsp->__Vcoverage[8626]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_ls_state)))) {
            ++(vlSymsp->__Vcoverage[8596]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_ls_state) {
            if (vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_ls_state) {
                ++(vlSymsp->__Vcoverage[8579]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_ls_state) {
            ++(vlSymsp->__Vcoverage[8588]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_ls_state) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_ls_state)))) {
                ++(vlSymsp->__Vcoverage[8631]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_ls_state) {
            if (vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_ls_state) {
                ++(vlSymsp->__Vcoverage[8618]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_ls_state) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_ls_state)))) {
                ++(vlSymsp->__Vcoverage[8595]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_ls_state) {
            if (vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_ls_state) {
                ++(vlSymsp->__Vcoverage[8610]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_ls_state) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_ls_state)))) {
                ++(vlSymsp->__Vcoverage[8611]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_ls_state)))) {
            ++(vlSymsp->__Vcoverage[8587]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_ls_state) {
            if (vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_ls_state) {
                ++(vlSymsp->__Vcoverage[8594]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_ls_state) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_ls_state)))) {
                ++(vlSymsp->__Vcoverage[8619]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_ls_state)))) {
            ++(vlSymsp->__Vcoverage[8620]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_ls_state) {
            if (vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_ls_state) {
                ++(vlSymsp->__Vcoverage[8624]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_ls_state) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_ls_state)))) {
                ++(vlSymsp->__Vcoverage[8625]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_ls_state) {
            if (vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_ls_state) {
                ++(vlSymsp->__Vcoverage[8630]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_ls_state)))) {
            ++(vlSymsp->__Vcoverage[8632]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_ls_state)))) {
            if (vlSelf->riscv_soc__DOT__core__DOT__execute_io_out_mem_avalid) {
                ++(vlSymsp->__Vcoverage[8606]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_ls_state)))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute_io_out_mem_avalid)))) {
                ++(vlSymsp->__Vcoverage[8599]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_ls_state)))) {
            if (vlSelf->riscv_soc__DOT__core__DOT__execute_io_out_mem_avalid) {
                ++(vlSymsp->__Vcoverage[8598]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_ls_state)))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute_io_out_mem_avalid)))) {
                ++(vlSymsp->__Vcoverage[8591]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_ls_state)))) {
            if (vlSelf->riscv_soc__DOT__core__DOT__execute_io_out_mem_avalid) {
                ++(vlSymsp->__Vcoverage[8585]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_ls_state)))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute_io_out_mem_avalid)))) {
                ++(vlSymsp->__Vcoverage[8586]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_ls_state)))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute_io_out_mem_avalid)))) {
                ++(vlSymsp->__Vcoverage[8607]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_ls_state)))) {
            if (vlSelf->riscv_soc__DOT__core__DOT__execute_io_out_mem_avalid) {
                ++(vlSymsp->__Vcoverage[8590]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_ls_state)))) {
            if (vlSelf->riscv_soc__DOT__core__DOT__execute_io_out_mem_avalid) {
                ++(vlSymsp->__Vcoverage[8614]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_ls_state)))) {
            if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute_io_out_mem_avalid)))) {
                ++(vlSymsp->__Vcoverage[8615]);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_ls_state)))) {
            if (vlSelf->riscv_soc__DOT__core__DOT__execute_io_out_mem_avalid) {
                if ((1U & (~ (((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_rs2_addr) 
                               == (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_rs_addr)) 
                              & (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_w_rs_en))))) {
                    ++(vlSymsp->__Vcoverage[8584]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_ls_state)))) {
            if (vlSelf->riscv_soc__DOT__core__DOT__execute_io_out_mem_avalid) {
                if ((((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_rs2_addr) 
                      == (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_rs_addr)) 
                     & (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_w_rs_en))) {
                    ++(vlSymsp->__Vcoverage[8583]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_ls_state) {
            if (vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_ls_state) {
                if (((IData)(vlSelf->riscv_soc__DOT__core__DOT__tem_reg_is_read_mem) 
                     | (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_mem_wvalid))) {
                    ++(vlSymsp->__Vcoverage[8608]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_ls_state) {
            if (vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_ls_state) {
                if ((1U & (~ ((IData)(vlSelf->riscv_soc__DOT__core__DOT__tem_reg_is_read_mem) 
                              | (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_mem_wvalid))))) {
                    ++(vlSymsp->__Vcoverage[8629]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_ls_state) {
            if (vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_ls_state) {
                if (((IData)(vlSelf->riscv_soc__DOT__core__DOT__tem_reg_is_read_mem) 
                     | (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_mem_wvalid))) {
                    ++(vlSymsp->__Vcoverage[8616]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_ls_state) {
            if (vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_ls_state) {
                if ((1U & (~ ((IData)(vlSelf->riscv_soc__DOT__core__DOT__tem_reg_is_read_mem) 
                              | (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_mem_wvalid))))) {
                    ++(vlSymsp->__Vcoverage[8593]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_ls_state) {
            if (vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_ls_state) {
                if ((1U & (~ ((IData)(vlSelf->riscv_soc__DOT__core__DOT__tem_reg_is_read_mem) 
                              | (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_mem_wvalid))))) {
                    ++(vlSymsp->__Vcoverage[8578]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_ls_state) {
            if (vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_ls_state) {
                if ((1U & (~ ((IData)(vlSelf->riscv_soc__DOT__core__DOT__tem_reg_is_read_mem) 
                              | (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_mem_wvalid))))) {
                    ++(vlSymsp->__Vcoverage[8623]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_ls_state) {
            if (vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_ls_state) {
                if ((1U & (~ ((IData)(vlSelf->riscv_soc__DOT__core__DOT__tem_reg_is_read_mem) 
                              | (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_mem_wvalid))))) {
                    ++(vlSymsp->__Vcoverage[8609]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_ls_state) {
            if (vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_ls_state) {
                if (((IData)(vlSelf->riscv_soc__DOT__core__DOT__tem_reg_is_read_mem) 
                     | (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_mem_wvalid))) {
                    ++(vlSymsp->__Vcoverage[8592]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_ls_state) {
            if (vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_ls_state) {
                if (((IData)(vlSelf->riscv_soc__DOT__core__DOT__tem_reg_is_read_mem) 
                     | (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_mem_wvalid))) {
                    ++(vlSymsp->__Vcoverage[8577]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_ls_state) {
            if (vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_ls_state) {
                if ((1U & (~ ((IData)(vlSelf->riscv_soc__DOT__core__DOT__tem_reg_is_read_mem) 
                              | (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_mem_wvalid))))) {
                    ++(vlSymsp->__Vcoverage[8617]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_ls_state) {
            if (vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_ls_state) {
                if (((IData)(vlSelf->riscv_soc__DOT__core__DOT__tem_reg_is_read_mem) 
                     | (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_mem_wvalid))) {
                    ++(vlSymsp->__Vcoverage[8622]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_ls_state) {
            if (vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_ls_state) {
                if (((IData)(vlSelf->riscv_soc__DOT__core__DOT__tem_reg_is_read_mem) 
                     | (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_mem_wvalid))) {
                    ++(vlSymsp->__Vcoverage[8628]);
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_stall)))) {
            ++(vlSymsp->__Vcoverage[8649]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_stall)))) {
            ++(vlSymsp->__Vcoverage[8637]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_stall) {
            ++(vlSymsp->__Vcoverage[8641]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_stall) {
            ++(vlSymsp->__Vcoverage[8638]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_stall)))) {
            ++(vlSymsp->__Vcoverage[8640]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_stall) {
            ++(vlSymsp->__Vcoverage[8650]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_stall) 
             | (0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_exuType)))) {
            ++(vlSymsp->__Vcoverage[8647]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ ((IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_stall) 
                      | (0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_exuType)))))) {
            ++(vlSymsp->__Vcoverage[8643]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ ((IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_stall) 
                      | (0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_exuType)))))) {
            ++(vlSymsp->__Vcoverage[8646]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_stall) 
             | (0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_exuType)))) {
            ++(vlSymsp->__Vcoverage[8634]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if ((1U & (~ ((IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_stall) 
                      | (0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_exuType)))))) {
            ++(vlSymsp->__Vcoverage[8635]);
        }
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        if (((IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_stall) 
             | (0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_exuType)))) {
            ++(vlSymsp->__Vcoverage[8644]);
        }
    }
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_w_mem_en 
        = ((~ (IData)(vlSelf->reset)) & ((~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_flush)) 
                                         & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__lsu_exu_io_w_mem_en)));
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_mem_avalid 
        = (1U & ((~ (IData)(vlSelf->reset)) & ((~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_flush)) 
                                               & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__valid) 
                                                  >> 1U))));
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[0U] 
        = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT___GEN_22[0U];
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[1U] 
        = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT___GEN_22[1U];
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[2U] 
        = (7U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT___GEN_22[2U]);
    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__pc_valid 
        = ((IData)(vlSelf->reset) | ((~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__stall)) 
                                     & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_valid) 
                                        | (IData)(vlSelf->riscv_soc__DOT__core__DOT__tem_reg_is_read_inst))));
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_opType = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__execute_io_out_flush) {
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_opType = 0U;
    } else if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__stall)))) {
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_opType 
            = ((0x33U == (0xfe00707fU & vlSelf->riscv_soc__DOT__core__DOT__fetch_io_out_inst))
                ? 4U : ((0x13U == (0x707fU & vlSelf->riscv_soc__DOT__core__DOT__fetch_io_out_inst))
                         ? 4U : ((0x1bU == (0x707fU 
                                            & vlSelf->riscv_soc__DOT__core__DOT__fetch_io_out_inst))
                                  ? 4U : ((0x3bU == 
                                           (0xfe00707fU 
                                            & vlSelf->riscv_soc__DOT__core__DOT__fetch_io_out_inst))
                                           ? 4U : (
                                                   (0x7033U 
                                                    == 
                                                    (0xfe00707fU 
                                                     & vlSelf->riscv_soc__DOT__core__DOT__fetch_io_out_inst))
                                                    ? 4U
                                                    : 
                                                   ((0x7013U 
                                                     == 
                                                     (0x707fU 
                                                      & vlSelf->riscv_soc__DOT__core__DOT__fetch_io_out_inst))
                                                     ? 4U
                                                     : 
                                                    ((0x17U 
                                                      == 
                                                      (0x7fU 
                                                       & vlSelf->riscv_soc__DOT__core__DOT__fetch_io_out_inst))
                                                      ? 4U
                                                      : 
                                                     ((0x63U 
                                                       == 
                                                       (0x707fU 
                                                        & vlSelf->riscv_soc__DOT__core__DOT__fetch_io_out_inst))
                                                       ? 4U
                                                       : (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT___T_195)))))))));
    }
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_q[0U] 
        = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT___GEN_24[0U];
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_q[1U] 
        = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT___GEN_24[1U];
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_q[2U] 
        = (1U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT___GEN_24[2U]);
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[0U] 
        = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT___GEN_23[0U];
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[1U] 
        = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT___GEN_23[1U];
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[2U] 
        = (1U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT___GEN_23[2U]);
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_result[0U] 
        = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT___GEN_23[0U];
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_result[1U] 
        = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT___GEN_23[1U];
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_result[2U] 
        = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT___GEN_23[2U];
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_result[3U] 
        = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT___GEN_23[3U];
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_result[4U] 
        = (3U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT___GEN_23[4U]);
    vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_stall 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT___GEN_10));
    if (vlSelf->reset) {
        vlSelf->__Vdly__riscv_soc__DOT__core__DOT__fetch__DOT__regPC = 0x80000000ULL;
    } else if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__stall)))) {
        if (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_valid) {
            vlSelf->__Vdly__riscv_soc__DOT__core__DOT__fetch__DOT__regPC 
                = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT___regPC_T_3;
        } else if (vlSelf->riscv_soc__DOT__core__DOT__tem_reg_is_read_inst) {
            vlSelf->__Vdly__riscv_soc__DOT__core__DOT__fetch__DOT__regPC 
                = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT___regPC_T_3;
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_inst = 0U;
    } else if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__stall)))) {
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_inst 
            = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_valid)
                ? ((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_next_pc_valid)
                    ? 0U : ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute_io_out_flush)
                             ? 0U : vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__temp_reg_inst))
                : ((IData)(vlSelf->riscv_soc__DOT__core__DOT__tem_reg_is_read_inst)
                    ? vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT___reg_inst_T_3
                    : 0U));
    }
    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_next_pc 
        = ((IData)(vlSelf->reset) ? 0ULL : ((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__stall)
                                             ? vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT___reg_next_pc_T
                                             : (((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_valid) 
                                                 | (IData)(vlSelf->riscv_soc__DOT__core__DOT__tem_reg_is_read_inst))
                                                 ? 0ULL
                                                 : vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT___reg_next_pc_T)));
    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_next_pc_valid 
        = ((~ (IData)(vlSelf->reset)) & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__stall)
                                          ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT___reg_next_pc_valid_T)
                                          : ((~ ((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_valid) 
                                                 | (IData)(vlSelf->riscv_soc__DOT__core__DOT__tem_reg_is_read_inst))) 
                                             & (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT___reg_next_pc_valid_T))));
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_imm = 0ULL;
    } else if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute_io_out_flush)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__stall)))) {
            vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_imm 
                = ((4U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__instType))
                    ? (QData)((IData)((0x3fU & (vlSelf->riscv_soc__DOT__core__DOT__fetch_io_out_inst 
                                                >> 0x14U))))
                    : ((5U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__instType))
                        ? (QData)((IData)((0x1fU & 
                                           (vlSelf->riscv_soc__DOT__core__DOT__fetch_io_out_inst 
                                            >> 0xfU))))
                        : vlSelf->riscv_soc__DOT__core__DOT__decode__DOT___imm_data_T_51));
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_next_pc = 0ULL;
    } else if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_flush)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_in_stall)))) {
            vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_next_pc 
                = (((QData)((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[1U])) 
                    << 0x20U) | (QData)((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu__DOT__temp_result_pc[0U])));
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType = 0U;
    } else if (vlSelf->riscv_soc__DOT__core__DOT__execute_io_out_flush) {
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType = 0U;
    } else if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__stall)))) {
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType 
            = ((0x33U == (0xfe00707fU & vlSelf->riscv_soc__DOT__core__DOT__fetch_io_out_inst))
                ? 0x2cU : ((0x13U == (0x707fU & vlSelf->riscv_soc__DOT__core__DOT__fetch_io_out_inst))
                            ? 0x2dU : ((0x1bU == (0x707fU 
                                                  & vlSelf->riscv_soc__DOT__core__DOT__fetch_io_out_inst))
                                        ? 0x2fU : (
                                                   (0x3bU 
                                                    == 
                                                    (0xfe00707fU 
                                                     & vlSelf->riscv_soc__DOT__core__DOT__fetch_io_out_inst))
                                                    ? 0x2eU
                                                    : 
                                                   ((0x7033U 
                                                     == 
                                                     (0xfe00707fU 
                                                      & vlSelf->riscv_soc__DOT__core__DOT__fetch_io_out_inst))
                                                     ? 8U
                                                     : 
                                                    ((0x7013U 
                                                      == 
                                                      (0x707fU 
                                                       & vlSelf->riscv_soc__DOT__core__DOT__fetch_io_out_inst))
                                                      ? 9U
                                                      : 
                                                     ((0x17U 
                                                       == 
                                                       (0x7fU 
                                                        & vlSelf->riscv_soc__DOT__core__DOT__fetch_io_out_inst))
                                                       ? 4U
                                                       : 
                                                      ((0x63U 
                                                        == 
                                                        (0x707fU 
                                                         & vlSelf->riscv_soc__DOT__core__DOT__fetch_io_out_inst))
                                                        ? 0x34U
                                                        : (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT___T_262)))))))));
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs1_data = 0ULL;
    } else if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute_io_out_flush)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__stall)))) {
            vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs1_data 
                = ((0U == (0x1fU & (vlSelf->riscv_soc__DOT__core__DOT__fetch_io_out_inst 
                                    >> 0xfU))) ? 0ULL
                    : vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile_rs1_data_MPORT_data);
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs2_data = 0ULL;
    } else if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute_io_out_flush)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__stall)))) {
            vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs2_data 
                = ((0U == (0x1fU & (vlSelf->riscv_soc__DOT__core__DOT__fetch_io_out_inst 
                                    >> 0x14U))) ? 0ULL
                    : vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile_rs2_data_MPORT_data);
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs1_addr = 0U;
    } else if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute_io_out_flush)))) {
        if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__stall)))) {
            vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs1_addr 
                = (0x1fU & (vlSelf->riscv_soc__DOT__core__DOT__fetch_io_out_inst 
                            >> 0xfU));
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_stall = 0U;
    } else if ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_state))) {
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_stall 
            = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul_io_valid;
    } else if ((1U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_state))) {
        if ((2U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_state))) {
            vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_stall = 0U;
        }
    }
    if (vlSelf->reset) {
        __Vdly__riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_cnt = 0U;
    } else if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_state))) {
        if ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_state))) {
            __Vdly__riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_cnt 
                = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT___reg_cnt_T_1;
        } else if ((2U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_state))) {
            __Vdly__riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_cnt = 0U;
        }
    }
    if (vlSelf->reset) {
        __Vdly__riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_state = 0U;
    } else if ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_state))) {
        if (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul_io_valid) {
            __Vdly__riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_state = 1U;
        }
    } else if ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_state))) {
        if ((0x20U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_cnt))) {
            __Vdly__riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_state = 2U;
        }
    } else if ((2U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_state))) {
        __Vdly__riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_state = 0U;
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[0U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[1U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[2U] = 0U;
    } else if ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_state))) {
        VL_EXTEND_WQ(65,64, __Vtemp1486, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu_io_op_data1);
        if ((4U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_out_exuType))) {
            vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[0U] 
                = (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu_io_op_data1);
            vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[1U] 
                = (IData)(((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu_io_op_data1 
                                          >> 0x1fU)))
                            ? 0x1ffffffffULL : 0ULL));
            vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[2U] 
                = (IData)((((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu_io_op_data1 
                                           >> 0x1fU)))
                             ? 0x1ffffffffULL : 0ULL) 
                           >> 0x20U));
        } else {
            vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[0U] 
                = ((2U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_out_exuType))
                    ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu_io_op_data1)
                    : __Vtemp1486[0U]);
            vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[1U] 
                = ((2U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_out_exuType))
                    ? (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu_io_op_data1 
                               >> 0x20U)) : __Vtemp1486[1U]);
            vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[2U] 
                = ((2U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_out_exuType))
                    ? (1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu_io_op_data1 
                                     >> 0x3fU))) : 
                   __Vtemp1486[2U]);
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_exuType = 0U;
    } else if ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_state))) {
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_exuType 
            = (1U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_out_exuType) 
                     >> 3U));
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_out_valid = 0U;
    } else if ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_state))) {
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_out_valid = 0U;
    } else if ((1U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_state))) {
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_out_valid 
            = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT___GEN_4;
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[0U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[1U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[2U] = 0U;
    } else if ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state))) {
        VL_EXTEND_WI(65,32, __Vtemp1491, (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu_io_op_data2));
        VL_EXTEND_WQ(65,64, __Vtemp1494, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu_io_op_data2);
        if ((2U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_out_exuType))) {
            vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[0U] 
                = ((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_out_exuType))
                    ? vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT___divisor_T_6[0U]
                    : __Vtemp1491[0U]);
            vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[1U] 
                = ((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_out_exuType))
                    ? vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT___divisor_T_6[1U]
                    : __Vtemp1491[1U]);
            vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[2U] 
                = ((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_out_exuType))
                    ? vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT___divisor_T_6[2U]
                    : __Vtemp1491[2U]);
        } else {
            vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[0U] 
                = ((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_out_exuType))
                    ? vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT___divisor_T_14[0U]
                    : __Vtemp1494[0U]);
            vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[1U] 
                = ((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_out_exuType))
                    ? vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT___divisor_T_14[1U]
                    : __Vtemp1494[1U]);
            vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[2U] 
                = ((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_out_exuType))
                    ? vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT___divisor_T_14[2U]
                    : __Vtemp1494[2U]);
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_dividend[0U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_dividend[1U] = 0U;
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_dividend[2U] = 0U;
    } else if ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state))) {
        VL_EXTEND_WI(65,32, __Vtemp1499, (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu_io_op_data1));
        VL_EXTEND_WQ(65,64, __Vtemp1502, vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__alu_exu_io_op_data1);
        if ((2U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_out_exuType))) {
            vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_dividend[0U] 
                = ((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_out_exuType))
                    ? vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT___dividend_T_6[0U]
                    : __Vtemp1499[0U]);
            vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_dividend[1U] 
                = ((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_out_exuType))
                    ? vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT___dividend_T_6[1U]
                    : __Vtemp1499[1U]);
            vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_dividend[2U] 
                = ((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_out_exuType))
                    ? vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT___dividend_T_6[2U]
                    : __Vtemp1499[2U]);
        } else {
            vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_dividend[0U] 
                = ((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_out_exuType))
                    ? vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT___dividend_T_14[0U]
                    : __Vtemp1502[0U]);
            vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_dividend[1U] 
                = ((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_out_exuType))
                    ? vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT___dividend_T_14[1U]
                    : __Vtemp1502[1U]);
            vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_dividend[2U] 
                = ((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_out_exuType))
                    ? vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT___dividend_T_14[2U]
                    : __Vtemp1502[2U]);
        }
    }
    if (vlSelf->reset) {
        __Vdly__riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state = 0U;
    } else if ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state))) {
        __Vdly__riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state 
            = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div_io_valid)
                ? 1U : 0U);
    } else if ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state))) {
        if ((0x40U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_cnt))) {
            __Vdly__riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state = 2U;
        }
    } else if ((2U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state))) {
        __Vdly__riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state = 0U;
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_cnt = 0U;
    } else if ((0U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state))) {
        if ((1U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state))) {
            vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_cnt 
                = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT___reg_cnt_T_1;
        } else if ((2U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state))) {
            vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_cnt = 0U;
        }
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_exuType = 0U;
    } else if ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state))) {
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_exuType 
            = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div_io_valid)
                ? (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode_io_out_exuType)
                : 0U);
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_out_valid = 0U;
    } else if ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state))) {
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_out_valid = 0U;
    } else if ((1U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state))) {
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_out_valid 
            = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT___GEN_3;
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_stall = 0U;
    } else if ((0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state))) {
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_stall 
            = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div_io_valid;
    } else if ((1U != (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state))) {
        if ((2U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state))) {
            vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_stall = 0U;
        }
    }
    if (vlSelf->riscv_soc__DOT__core__DOT__write_back_io_out_w_rs_en) {
        __Vdlyvval__riscv_soc__DOT__core__DOT__decode__DOT__regfile__v0 
            = vlSelf->riscv_soc__DOT__core__DOT__write_back_io_out_result_data;
        __Vdlyvset__riscv_soc__DOT__core__DOT__decode__DOT__regfile__v0 = 1U;
        __Vdlyvdim0__riscv_soc__DOT__core__DOT__decode__DOT__regfile__v0 
            = vlSelf->riscv_soc__DOT__core__DOT__write_back_io_out_rs_addr;
    }
    vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__difftest_commit 
        = (1U & ((~ (IData)(vlSelf->reset)) & (~ ((IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_stall) 
                                                  | (0U 
                                                     == (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_exuType))))));
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__difftest_inst = 0U;
    } else if ((1U & (~ ((IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_stall) 
                         | (0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_exuType)))))) {
        vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__difftest_inst 
            = vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_inst;
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__difftest_pc = 0ULL;
    } else if ((1U & (~ ((IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_stall) 
                         | (0U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_exuType)))))) {
        vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__difftest_pc 
            = vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_pc;
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_inst = 0U;
    } else if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_stall)))) {
        vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_inst 
            = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_inst;
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_pc = 0ULL;
    } else if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_stall)))) {
        vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_pc 
            = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_pc;
    }
    if (vlSelf->reset) {
        vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_exuType = 0U;
    } else if ((1U & (~ (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_stall)))) {
        vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_exuType 
            = vlSelf->riscv_soc__DOT__core__DOT__execute_io_out_exuType;
    }
    if ((1U & ((IData)(vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata) 
               ^ (IData)(vlSelf->riscv_soc__DOT____Vtogcov__core_io_in_rdata)))) {
        ++(vlSymsp->__Vcoverage[2147]);
        vlSelf->riscv_soc__DOT____Vtogcov__core_io_in_rdata 
            = ((0xfffffffffffffffeULL & vlSelf->riscv_soc__DOT____Vtogcov__core_io_in_rdata) 
               | (IData)((IData)((1U & (IData)(vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata)))));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata 
                        >> 1U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core_io_in_rdata 
                                           >> 1U))))) {
        ++(vlSymsp->__Vcoverage[2148]);
        vlSelf->riscv_soc__DOT____Vtogcov__core_io_in_rdata 
            = ((0xfffffffffffffffdULL & vlSelf->riscv_soc__DOT____Vtogcov__core_io_in_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata 
                                                 >> 1U))))) 
                  << 1U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata 
                        >> 2U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core_io_in_rdata 
                                           >> 2U))))) {
        ++(vlSymsp->__Vcoverage[2149]);
        vlSelf->riscv_soc__DOT____Vtogcov__core_io_in_rdata 
            = ((0xfffffffffffffffbULL & vlSelf->riscv_soc__DOT____Vtogcov__core_io_in_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata 
                                                 >> 2U))))) 
                  << 2U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata 
                        >> 3U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core_io_in_rdata 
                                           >> 3U))))) {
        ++(vlSymsp->__Vcoverage[2150]);
        vlSelf->riscv_soc__DOT____Vtogcov__core_io_in_rdata 
            = ((0xfffffffffffffff7ULL & vlSelf->riscv_soc__DOT____Vtogcov__core_io_in_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata 
                                                 >> 3U))))) 
                  << 3U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata 
                        >> 4U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core_io_in_rdata 
                                           >> 4U))))) {
        ++(vlSymsp->__Vcoverage[2151]);
        vlSelf->riscv_soc__DOT____Vtogcov__core_io_in_rdata 
            = ((0xffffffffffffffefULL & vlSelf->riscv_soc__DOT____Vtogcov__core_io_in_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata 
                                                 >> 4U))))) 
                  << 4U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata 
                        >> 5U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core_io_in_rdata 
                                           >> 5U))))) {
        ++(vlSymsp->__Vcoverage[2152]);
        vlSelf->riscv_soc__DOT____Vtogcov__core_io_in_rdata 
            = ((0xffffffffffffffdfULL & vlSelf->riscv_soc__DOT____Vtogcov__core_io_in_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata 
                                                 >> 5U))))) 
                  << 5U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata 
                        >> 6U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core_io_in_rdata 
                                           >> 6U))))) {
        ++(vlSymsp->__Vcoverage[2153]);
        vlSelf->riscv_soc__DOT____Vtogcov__core_io_in_rdata 
            = ((0xffffffffffffffbfULL & vlSelf->riscv_soc__DOT____Vtogcov__core_io_in_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata 
                                                 >> 6U))))) 
                  << 6U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata 
                        >> 7U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core_io_in_rdata 
                                           >> 7U))))) {
        ++(vlSymsp->__Vcoverage[2154]);
        vlSelf->riscv_soc__DOT____Vtogcov__core_io_in_rdata 
            = ((0xffffffffffffff7fULL & vlSelf->riscv_soc__DOT____Vtogcov__core_io_in_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata 
                                                 >> 7U))))) 
                  << 7U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata 
                        >> 8U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core_io_in_rdata 
                                           >> 8U))))) {
        ++(vlSymsp->__Vcoverage[2155]);
        vlSelf->riscv_soc__DOT____Vtogcov__core_io_in_rdata 
            = ((0xfffffffffffffeffULL & vlSelf->riscv_soc__DOT____Vtogcov__core_io_in_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata 
                                                 >> 8U))))) 
                  << 8U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata 
                        >> 9U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core_io_in_rdata 
                                           >> 9U))))) {
        ++(vlSymsp->__Vcoverage[2156]);
        vlSelf->riscv_soc__DOT____Vtogcov__core_io_in_rdata 
            = ((0xfffffffffffffdffULL & vlSelf->riscv_soc__DOT____Vtogcov__core_io_in_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata 
                                                 >> 9U))))) 
                  << 9U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata 
                        >> 0xaU)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core_io_in_rdata 
                                             >> 0xaU))))) {
        ++(vlSymsp->__Vcoverage[2157]);
        vlSelf->riscv_soc__DOT____Vtogcov__core_io_in_rdata 
            = ((0xfffffffffffffbffULL & vlSelf->riscv_soc__DOT____Vtogcov__core_io_in_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata 
                                                 >> 0xaU))))) 
                  << 0xaU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata 
                        >> 0xbU)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core_io_in_rdata 
                                             >> 0xbU))))) {
        ++(vlSymsp->__Vcoverage[2158]);
        vlSelf->riscv_soc__DOT____Vtogcov__core_io_in_rdata 
            = ((0xfffffffffffff7ffULL & vlSelf->riscv_soc__DOT____Vtogcov__core_io_in_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata 
                                                 >> 0xbU))))) 
                  << 0xbU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata 
                        >> 0xcU)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core_io_in_rdata 
                                             >> 0xcU))))) {
        ++(vlSymsp->__Vcoverage[2159]);
        vlSelf->riscv_soc__DOT____Vtogcov__core_io_in_rdata 
            = ((0xffffffffffffefffULL & vlSelf->riscv_soc__DOT____Vtogcov__core_io_in_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata 
                                                 >> 0xcU))))) 
                  << 0xcU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata 
                        >> 0xdU)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core_io_in_rdata 
                                             >> 0xdU))))) {
        ++(vlSymsp->__Vcoverage[2160]);
        vlSelf->riscv_soc__DOT____Vtogcov__core_io_in_rdata 
            = ((0xffffffffffffdfffULL & vlSelf->riscv_soc__DOT____Vtogcov__core_io_in_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata 
                                                 >> 0xdU))))) 
                  << 0xdU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata 
                        >> 0xeU)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core_io_in_rdata 
                                             >> 0xeU))))) {
        ++(vlSymsp->__Vcoverage[2161]);
        vlSelf->riscv_soc__DOT____Vtogcov__core_io_in_rdata 
            = ((0xffffffffffffbfffULL & vlSelf->riscv_soc__DOT____Vtogcov__core_io_in_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata 
                                                 >> 0xeU))))) 
                  << 0xeU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata 
                        >> 0xfU)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core_io_in_rdata 
                                             >> 0xfU))))) {
        ++(vlSymsp->__Vcoverage[2162]);
        vlSelf->riscv_soc__DOT____Vtogcov__core_io_in_rdata 
            = ((0xffffffffffff7fffULL & vlSelf->riscv_soc__DOT____Vtogcov__core_io_in_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata 
                                                 >> 0xfU))))) 
                  << 0xfU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata 
                        >> 0x10U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core_io_in_rdata 
                                              >> 0x10U))))) {
        ++(vlSymsp->__Vcoverage[2163]);
        vlSelf->riscv_soc__DOT____Vtogcov__core_io_in_rdata 
            = ((0xfffffffffffeffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core_io_in_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata 
                                                 >> 0x10U))))) 
                  << 0x10U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata 
                        >> 0x11U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core_io_in_rdata 
                                              >> 0x11U))))) {
        ++(vlSymsp->__Vcoverage[2164]);
        vlSelf->riscv_soc__DOT____Vtogcov__core_io_in_rdata 
            = ((0xfffffffffffdffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core_io_in_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata 
                                                 >> 0x11U))))) 
                  << 0x11U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata 
                        >> 0x12U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core_io_in_rdata 
                                              >> 0x12U))))) {
        ++(vlSymsp->__Vcoverage[2165]);
        vlSelf->riscv_soc__DOT____Vtogcov__core_io_in_rdata 
            = ((0xfffffffffffbffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core_io_in_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata 
                                                 >> 0x12U))))) 
                  << 0x12U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata 
                        >> 0x13U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core_io_in_rdata 
                                              >> 0x13U))))) {
        ++(vlSymsp->__Vcoverage[2166]);
        vlSelf->riscv_soc__DOT____Vtogcov__core_io_in_rdata 
            = ((0xfffffffffff7ffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core_io_in_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata 
                                                 >> 0x13U))))) 
                  << 0x13U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata 
                        >> 0x14U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core_io_in_rdata 
                                              >> 0x14U))))) {
        ++(vlSymsp->__Vcoverage[2167]);
        vlSelf->riscv_soc__DOT____Vtogcov__core_io_in_rdata 
            = ((0xffffffffffefffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core_io_in_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata 
                                                 >> 0x14U))))) 
                  << 0x14U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata 
                        >> 0x15U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core_io_in_rdata 
                                              >> 0x15U))))) {
        ++(vlSymsp->__Vcoverage[2168]);
        vlSelf->riscv_soc__DOT____Vtogcov__core_io_in_rdata 
            = ((0xffffffffffdfffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core_io_in_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata 
                                                 >> 0x15U))))) 
                  << 0x15U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata 
                        >> 0x16U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core_io_in_rdata 
                                              >> 0x16U))))) {
        ++(vlSymsp->__Vcoverage[2169]);
        vlSelf->riscv_soc__DOT____Vtogcov__core_io_in_rdata 
            = ((0xffffffffffbfffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core_io_in_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata 
                                                 >> 0x16U))))) 
                  << 0x16U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata 
                        >> 0x17U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core_io_in_rdata 
                                              >> 0x17U))))) {
        ++(vlSymsp->__Vcoverage[2170]);
        vlSelf->riscv_soc__DOT____Vtogcov__core_io_in_rdata 
            = ((0xffffffffff7fffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core_io_in_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata 
                                                 >> 0x17U))))) 
                  << 0x17U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata 
                        >> 0x18U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core_io_in_rdata 
                                              >> 0x18U))))) {
        ++(vlSymsp->__Vcoverage[2171]);
        vlSelf->riscv_soc__DOT____Vtogcov__core_io_in_rdata 
            = ((0xfffffffffeffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core_io_in_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata 
                                                 >> 0x18U))))) 
                  << 0x18U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata 
                        >> 0x19U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core_io_in_rdata 
                                              >> 0x19U))))) {
        ++(vlSymsp->__Vcoverage[2172]);
        vlSelf->riscv_soc__DOT____Vtogcov__core_io_in_rdata 
            = ((0xfffffffffdffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core_io_in_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata 
                                                 >> 0x19U))))) 
                  << 0x19U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata 
                        >> 0x1aU)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core_io_in_rdata 
                                              >> 0x1aU))))) {
        ++(vlSymsp->__Vcoverage[2173]);
        vlSelf->riscv_soc__DOT____Vtogcov__core_io_in_rdata 
            = ((0xfffffffffbffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core_io_in_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata 
                                                 >> 0x1aU))))) 
                  << 0x1aU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata 
                        >> 0x1bU)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core_io_in_rdata 
                                              >> 0x1bU))))) {
        ++(vlSymsp->__Vcoverage[2174]);
        vlSelf->riscv_soc__DOT____Vtogcov__core_io_in_rdata 
            = ((0xfffffffff7ffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core_io_in_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata 
                                                 >> 0x1bU))))) 
                  << 0x1bU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata 
                        >> 0x1cU)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core_io_in_rdata 
                                              >> 0x1cU))))) {
        ++(vlSymsp->__Vcoverage[2175]);
        vlSelf->riscv_soc__DOT____Vtogcov__core_io_in_rdata 
            = ((0xffffffffefffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core_io_in_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata 
                                                 >> 0x1cU))))) 
                  << 0x1cU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata 
                        >> 0x1dU)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core_io_in_rdata 
                                              >> 0x1dU))))) {
        ++(vlSymsp->__Vcoverage[2176]);
        vlSelf->riscv_soc__DOT____Vtogcov__core_io_in_rdata 
            = ((0xffffffffdfffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core_io_in_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata 
                                                 >> 0x1dU))))) 
                  << 0x1dU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata 
                        >> 0x1eU)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core_io_in_rdata 
                                              >> 0x1eU))))) {
        ++(vlSymsp->__Vcoverage[2177]);
        vlSelf->riscv_soc__DOT____Vtogcov__core_io_in_rdata 
            = ((0xffffffffbfffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core_io_in_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata 
                                                 >> 0x1eU))))) 
                  << 0x1eU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata 
                        >> 0x1fU)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core_io_in_rdata 
                                              >> 0x1fU))))) {
        ++(vlSymsp->__Vcoverage[2178]);
        vlSelf->riscv_soc__DOT____Vtogcov__core_io_in_rdata 
            = ((0xffffffff7fffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core_io_in_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata 
                                                 >> 0x1fU))))) 
                  << 0x1fU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata 
                        >> 0x20U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core_io_in_rdata 
                                              >> 0x20U))))) {
        ++(vlSymsp->__Vcoverage[2179]);
        vlSelf->riscv_soc__DOT____Vtogcov__core_io_in_rdata 
            = ((0xfffffffeffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core_io_in_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata 
                                                 >> 0x20U))))) 
                  << 0x20U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata 
                        >> 0x21U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core_io_in_rdata 
                                              >> 0x21U))))) {
        ++(vlSymsp->__Vcoverage[2180]);
        vlSelf->riscv_soc__DOT____Vtogcov__core_io_in_rdata 
            = ((0xfffffffdffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core_io_in_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata 
                                                 >> 0x21U))))) 
                  << 0x21U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata 
                        >> 0x22U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core_io_in_rdata 
                                              >> 0x22U))))) {
        ++(vlSymsp->__Vcoverage[2181]);
        vlSelf->riscv_soc__DOT____Vtogcov__core_io_in_rdata 
            = ((0xfffffffbffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core_io_in_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata 
                                                 >> 0x22U))))) 
                  << 0x22U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata 
                        >> 0x23U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core_io_in_rdata 
                                              >> 0x23U))))) {
        ++(vlSymsp->__Vcoverage[2182]);
        vlSelf->riscv_soc__DOT____Vtogcov__core_io_in_rdata 
            = ((0xfffffff7ffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core_io_in_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata 
                                                 >> 0x23U))))) 
                  << 0x23U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata 
                        >> 0x24U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core_io_in_rdata 
                                              >> 0x24U))))) {
        ++(vlSymsp->__Vcoverage[2183]);
        vlSelf->riscv_soc__DOT____Vtogcov__core_io_in_rdata 
            = ((0xffffffefffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core_io_in_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata 
                                                 >> 0x24U))))) 
                  << 0x24U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata 
                        >> 0x25U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core_io_in_rdata 
                                              >> 0x25U))))) {
        ++(vlSymsp->__Vcoverage[2184]);
        vlSelf->riscv_soc__DOT____Vtogcov__core_io_in_rdata 
            = ((0xffffffdfffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core_io_in_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata 
                                                 >> 0x25U))))) 
                  << 0x25U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata 
                        >> 0x26U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core_io_in_rdata 
                                              >> 0x26U))))) {
        ++(vlSymsp->__Vcoverage[2185]);
        vlSelf->riscv_soc__DOT____Vtogcov__core_io_in_rdata 
            = ((0xffffffbfffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core_io_in_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata 
                                                 >> 0x26U))))) 
                  << 0x26U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata 
                        >> 0x27U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core_io_in_rdata 
                                              >> 0x27U))))) {
        ++(vlSymsp->__Vcoverage[2186]);
        vlSelf->riscv_soc__DOT____Vtogcov__core_io_in_rdata 
            = ((0xffffff7fffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core_io_in_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata 
                                                 >> 0x27U))))) 
                  << 0x27U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata 
                        >> 0x28U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core_io_in_rdata 
                                              >> 0x28U))))) {
        ++(vlSymsp->__Vcoverage[2187]);
        vlSelf->riscv_soc__DOT____Vtogcov__core_io_in_rdata 
            = ((0xfffffeffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core_io_in_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata 
                                                 >> 0x28U))))) 
                  << 0x28U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata 
                        >> 0x29U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core_io_in_rdata 
                                              >> 0x29U))))) {
        ++(vlSymsp->__Vcoverage[2188]);
        vlSelf->riscv_soc__DOT____Vtogcov__core_io_in_rdata 
            = ((0xfffffdffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core_io_in_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata 
                                                 >> 0x29U))))) 
                  << 0x29U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata 
                        >> 0x2aU)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core_io_in_rdata 
                                              >> 0x2aU))))) {
        ++(vlSymsp->__Vcoverage[2189]);
        vlSelf->riscv_soc__DOT____Vtogcov__core_io_in_rdata 
            = ((0xfffffbffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core_io_in_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata 
                                                 >> 0x2aU))))) 
                  << 0x2aU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata 
                        >> 0x2bU)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core_io_in_rdata 
                                              >> 0x2bU))))) {
        ++(vlSymsp->__Vcoverage[2190]);
        vlSelf->riscv_soc__DOT____Vtogcov__core_io_in_rdata 
            = ((0xfffff7ffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core_io_in_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata 
                                                 >> 0x2bU))))) 
                  << 0x2bU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata 
                        >> 0x2cU)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core_io_in_rdata 
                                              >> 0x2cU))))) {
        ++(vlSymsp->__Vcoverage[2191]);
        vlSelf->riscv_soc__DOT____Vtogcov__core_io_in_rdata 
            = ((0xffffefffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core_io_in_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata 
                                                 >> 0x2cU))))) 
                  << 0x2cU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata 
                        >> 0x2dU)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core_io_in_rdata 
                                              >> 0x2dU))))) {
        ++(vlSymsp->__Vcoverage[2192]);
        vlSelf->riscv_soc__DOT____Vtogcov__core_io_in_rdata 
            = ((0xffffdfffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core_io_in_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata 
                                                 >> 0x2dU))))) 
                  << 0x2dU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata 
                        >> 0x2eU)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core_io_in_rdata 
                                              >> 0x2eU))))) {
        ++(vlSymsp->__Vcoverage[2193]);
        vlSelf->riscv_soc__DOT____Vtogcov__core_io_in_rdata 
            = ((0xffffbfffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core_io_in_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata 
                                                 >> 0x2eU))))) 
                  << 0x2eU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata 
                        >> 0x2fU)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core_io_in_rdata 
                                              >> 0x2fU))))) {
        ++(vlSymsp->__Vcoverage[2194]);
        vlSelf->riscv_soc__DOT____Vtogcov__core_io_in_rdata 
            = ((0xffff7fffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core_io_in_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata 
                                                 >> 0x2fU))))) 
                  << 0x2fU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata 
                        >> 0x30U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core_io_in_rdata 
                                              >> 0x30U))))) {
        ++(vlSymsp->__Vcoverage[2195]);
        vlSelf->riscv_soc__DOT____Vtogcov__core_io_in_rdata 
            = ((0xfffeffffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core_io_in_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata 
                                                 >> 0x30U))))) 
                  << 0x30U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata 
                        >> 0x31U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core_io_in_rdata 
                                              >> 0x31U))))) {
        ++(vlSymsp->__Vcoverage[2196]);
        vlSelf->riscv_soc__DOT____Vtogcov__core_io_in_rdata 
            = ((0xfffdffffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core_io_in_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata 
                                                 >> 0x31U))))) 
                  << 0x31U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata 
                        >> 0x32U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core_io_in_rdata 
                                              >> 0x32U))))) {
        ++(vlSymsp->__Vcoverage[2197]);
        vlSelf->riscv_soc__DOT____Vtogcov__core_io_in_rdata 
            = ((0xfffbffffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core_io_in_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata 
                                                 >> 0x32U))))) 
                  << 0x32U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata 
                        >> 0x33U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core_io_in_rdata 
                                              >> 0x33U))))) {
        ++(vlSymsp->__Vcoverage[2198]);
        vlSelf->riscv_soc__DOT____Vtogcov__core_io_in_rdata 
            = ((0xfff7ffffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core_io_in_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata 
                                                 >> 0x33U))))) 
                  << 0x33U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata 
                        >> 0x34U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core_io_in_rdata 
                                              >> 0x34U))))) {
        ++(vlSymsp->__Vcoverage[2199]);
        vlSelf->riscv_soc__DOT____Vtogcov__core_io_in_rdata 
            = ((0xffefffffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core_io_in_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata 
                                                 >> 0x34U))))) 
                  << 0x34U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata 
                        >> 0x35U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core_io_in_rdata 
                                              >> 0x35U))))) {
        ++(vlSymsp->__Vcoverage[2200]);
        vlSelf->riscv_soc__DOT____Vtogcov__core_io_in_rdata 
            = ((0xffdfffffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core_io_in_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata 
                                                 >> 0x35U))))) 
                  << 0x35U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata 
                        >> 0x36U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core_io_in_rdata 
                                              >> 0x36U))))) {
        ++(vlSymsp->__Vcoverage[2201]);
        vlSelf->riscv_soc__DOT____Vtogcov__core_io_in_rdata 
            = ((0xffbfffffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core_io_in_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata 
                                                 >> 0x36U))))) 
                  << 0x36U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata 
                        >> 0x37U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core_io_in_rdata 
                                              >> 0x37U))))) {
        ++(vlSymsp->__Vcoverage[2202]);
        vlSelf->riscv_soc__DOT____Vtogcov__core_io_in_rdata 
            = ((0xff7fffffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core_io_in_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata 
                                                 >> 0x37U))))) 
                  << 0x37U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata 
                        >> 0x38U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core_io_in_rdata 
                                              >> 0x38U))))) {
        ++(vlSymsp->__Vcoverage[2203]);
        vlSelf->riscv_soc__DOT____Vtogcov__core_io_in_rdata 
            = ((0xfeffffffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core_io_in_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata 
                                                 >> 0x38U))))) 
                  << 0x38U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata 
                        >> 0x39U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core_io_in_rdata 
                                              >> 0x39U))))) {
        ++(vlSymsp->__Vcoverage[2204]);
        vlSelf->riscv_soc__DOT____Vtogcov__core_io_in_rdata 
            = ((0xfdffffffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core_io_in_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata 
                                                 >> 0x39U))))) 
                  << 0x39U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata 
                        >> 0x3aU)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core_io_in_rdata 
                                              >> 0x3aU))))) {
        ++(vlSymsp->__Vcoverage[2205]);
        vlSelf->riscv_soc__DOT____Vtogcov__core_io_in_rdata 
            = ((0xfbffffffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core_io_in_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata 
                                                 >> 0x3aU))))) 
                  << 0x3aU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata 
                        >> 0x3bU)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core_io_in_rdata 
                                              >> 0x3bU))))) {
        ++(vlSymsp->__Vcoverage[2206]);
        vlSelf->riscv_soc__DOT____Vtogcov__core_io_in_rdata 
            = ((0xf7ffffffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core_io_in_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata 
                                                 >> 0x3bU))))) 
                  << 0x3bU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata 
                        >> 0x3cU)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core_io_in_rdata 
                                              >> 0x3cU))))) {
        ++(vlSymsp->__Vcoverage[2207]);
        vlSelf->riscv_soc__DOT____Vtogcov__core_io_in_rdata 
            = ((0xefffffffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core_io_in_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata 
                                                 >> 0x3cU))))) 
                  << 0x3cU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata 
                        >> 0x3dU)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core_io_in_rdata 
                                              >> 0x3dU))))) {
        ++(vlSymsp->__Vcoverage[2208]);
        vlSelf->riscv_soc__DOT____Vtogcov__core_io_in_rdata 
            = ((0xdfffffffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core_io_in_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata 
                                                 >> 0x3dU))))) 
                  << 0x3dU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata 
                        >> 0x3eU)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core_io_in_rdata 
                                              >> 0x3eU))))) {
        ++(vlSymsp->__Vcoverage[2209]);
        vlSelf->riscv_soc__DOT____Vtogcov__core_io_in_rdata 
            = ((0xbfffffffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core_io_in_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata 
                                                 >> 0x3eU))))) 
                  << 0x3eU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata 
                        >> 0x3fU)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core_io_in_rdata 
                                              >> 0x3fU))))) {
        ++(vlSymsp->__Vcoverage[2210]);
        vlSelf->riscv_soc__DOT____Vtogcov__core_io_in_rdata 
            = ((0x7fffffffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core_io_in_rdata) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__axi_ram__DOT__mem_rdata 
                                                 >> 0x3fU))))) 
                  << 0x3fU));
    }
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_state 
        = __Vdly__riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_state;
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_cnt 
        = __Vdly__riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_cnt;
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state 
        = __Vdly__riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state;
    if (__Vdlyvset__riscv_soc__DOT__core__DOT__decode__DOT__regfile__v0) {
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile[__Vdlyvdim0__riscv_soc__DOT__core__DOT__decode__DOT__regfile__v0] 
            = __Vdlyvval__riscv_soc__DOT__core__DOT__decode__DOT__regfile__v0;
    }
    vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT__reg_mem_wstrb 
        = (0xffU & (IData)(vlSelf->riscv_soc__DOT__core__DOT__write_back__DOT___GEN_35));
    if (((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_w_mem_en) 
         ^ (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__reg_w_mem_en))) {
        ++(vlSymsp->__Vcoverage[6273]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__reg_w_mem_en 
            = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_w_mem_en;
    }
    if (((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_mem_avalid) 
         ^ (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__reg_mem_avalid))) {
        ++(vlSymsp->__Vcoverage[6272]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT____Vtogcov__reg_mem_avalid 
            = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_mem_avalid;
    }
    if ((1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[0U] 
               ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_temp_mul2[0U]))) {
        ++(vlSymsp->__Vcoverage[7576]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_temp_mul2[0U] 
            = ((0xfffffffeU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_temp_mul2[0U]) 
               | (1U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[0U]));
    }
    if ((2U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[0U] 
               ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_temp_mul2[0U]))) {
        ++(vlSymsp->__Vcoverage[7577]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_temp_mul2[0U] 
            = ((0xfffffffdU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_temp_mul2[0U]) 
               | (2U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[0U]));
    }
    if ((4U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[0U] 
               ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_temp_mul2[0U]))) {
        ++(vlSymsp->__Vcoverage[7578]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_temp_mul2[0U] 
            = ((0xfffffffbU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_temp_mul2[0U]) 
               | (4U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[0U]));
    }
    if ((8U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[0U] 
               ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_temp_mul2[0U]))) {
        ++(vlSymsp->__Vcoverage[7579]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_temp_mul2[0U] 
            = ((0xfffffff7U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_temp_mul2[0U]) 
               | (8U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[0U]));
    }
    if ((0x10U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[0U] 
                  ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_temp_mul2[0U]))) {
        ++(vlSymsp->__Vcoverage[7580]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_temp_mul2[0U] 
            = ((0xffffffefU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_temp_mul2[0U]) 
               | (0x10U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[0U]));
    }
    if ((0x20U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[0U] 
                  ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_temp_mul2[0U]))) {
        ++(vlSymsp->__Vcoverage[7581]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_temp_mul2[0U] 
            = ((0xffffffdfU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_temp_mul2[0U]) 
               | (0x20U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[0U]));
    }
    if ((0x40U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[0U] 
                  ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_temp_mul2[0U]))) {
        ++(vlSymsp->__Vcoverage[7582]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_temp_mul2[0U] 
            = ((0xffffffbfU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_temp_mul2[0U]) 
               | (0x40U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[0U]));
    }
    if ((0x80U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[0U] 
                  ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_temp_mul2[0U]))) {
        ++(vlSymsp->__Vcoverage[7583]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_temp_mul2[0U] 
            = ((0xffffff7fU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_temp_mul2[0U]) 
               | (0x80U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[0U]));
    }
    if ((0x100U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[0U] 
                   ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_temp_mul2[0U]))) {
        ++(vlSymsp->__Vcoverage[7584]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_temp_mul2[0U] 
            = ((0xfffffeffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_temp_mul2[0U]) 
               | (0x100U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[0U]));
    }
    if ((0x200U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[0U] 
                   ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_temp_mul2[0U]))) {
        ++(vlSymsp->__Vcoverage[7585]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_temp_mul2[0U] 
            = ((0xfffffdffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_temp_mul2[0U]) 
               | (0x200U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[0U]));
    }
    if ((0x400U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[0U] 
                   ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_temp_mul2[0U]))) {
        ++(vlSymsp->__Vcoverage[7586]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_temp_mul2[0U] 
            = ((0xfffffbffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_temp_mul2[0U]) 
               | (0x400U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[0U]));
    }
    if ((0x800U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[0U] 
                   ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_temp_mul2[0U]))) {
        ++(vlSymsp->__Vcoverage[7587]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_temp_mul2[0U] 
            = ((0xfffff7ffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_temp_mul2[0U]) 
               | (0x800U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[0U]));
    }
    if ((0x1000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[0U] 
                    ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_temp_mul2[0U]))) {
        ++(vlSymsp->__Vcoverage[7588]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_temp_mul2[0U] 
            = ((0xffffefffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_temp_mul2[0U]) 
               | (0x1000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[0U]));
    }
    if ((0x2000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[0U] 
                    ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_temp_mul2[0U]))) {
        ++(vlSymsp->__Vcoverage[7589]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_temp_mul2[0U] 
            = ((0xffffdfffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_temp_mul2[0U]) 
               | (0x2000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[0U]));
    }
    if ((0x4000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[0U] 
                    ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_temp_mul2[0U]))) {
        ++(vlSymsp->__Vcoverage[7590]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_temp_mul2[0U] 
            = ((0xffffbfffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_temp_mul2[0U]) 
               | (0x4000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[0U]));
    }
    if ((0x8000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[0U] 
                    ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_temp_mul2[0U]))) {
        ++(vlSymsp->__Vcoverage[7591]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_temp_mul2[0U] 
            = ((0xffff7fffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_temp_mul2[0U]) 
               | (0x8000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[0U]));
    }
    if ((0x10000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[0U] 
                     ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_temp_mul2[0U]))) {
        ++(vlSymsp->__Vcoverage[7592]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_temp_mul2[0U] 
            = ((0xfffeffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_temp_mul2[0U]) 
               | (0x10000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[0U]));
    }
    if ((0x20000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[0U] 
                     ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_temp_mul2[0U]))) {
        ++(vlSymsp->__Vcoverage[7593]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_temp_mul2[0U] 
            = ((0xfffdffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_temp_mul2[0U]) 
               | (0x20000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[0U]));
    }
    if ((0x40000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[0U] 
                     ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_temp_mul2[0U]))) {
        ++(vlSymsp->__Vcoverage[7594]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_temp_mul2[0U] 
            = ((0xfffbffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_temp_mul2[0U]) 
               | (0x40000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[0U]));
    }
    if ((0x80000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[0U] 
                     ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_temp_mul2[0U]))) {
        ++(vlSymsp->__Vcoverage[7595]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_temp_mul2[0U] 
            = ((0xfff7ffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_temp_mul2[0U]) 
               | (0x80000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[0U]));
    }
    if ((0x100000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[0U] 
                      ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_temp_mul2[0U]))) {
        ++(vlSymsp->__Vcoverage[7596]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_temp_mul2[0U] 
            = ((0xffefffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_temp_mul2[0U]) 
               | (0x100000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[0U]));
    }
    if ((0x200000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[0U] 
                      ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_temp_mul2[0U]))) {
        ++(vlSymsp->__Vcoverage[7597]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_temp_mul2[0U] 
            = ((0xffdfffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_temp_mul2[0U]) 
               | (0x200000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[0U]));
    }
    if ((0x400000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[0U] 
                      ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_temp_mul2[0U]))) {
        ++(vlSymsp->__Vcoverage[7598]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_temp_mul2[0U] 
            = ((0xffbfffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_temp_mul2[0U]) 
               | (0x400000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[0U]));
    }
    if ((0x800000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[0U] 
                      ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_temp_mul2[0U]))) {
        ++(vlSymsp->__Vcoverage[7599]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_temp_mul2[0U] 
            = ((0xff7fffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_temp_mul2[0U]) 
               | (0x800000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[0U]));
    }
    if ((0x1000000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[0U] 
                       ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_temp_mul2[0U]))) {
        ++(vlSymsp->__Vcoverage[7600]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_temp_mul2[0U] 
            = ((0xfeffffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_temp_mul2[0U]) 
               | (0x1000000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[0U]));
    }
    if ((0x2000000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[0U] 
                       ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_temp_mul2[0U]))) {
        ++(vlSymsp->__Vcoverage[7601]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_temp_mul2[0U] 
            = ((0xfdffffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_temp_mul2[0U]) 
               | (0x2000000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[0U]));
    }
    if ((0x4000000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[0U] 
                       ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_temp_mul2[0U]))) {
        ++(vlSymsp->__Vcoverage[7602]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_temp_mul2[0U] 
            = ((0xfbffffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_temp_mul2[0U]) 
               | (0x4000000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[0U]));
    }
    if ((0x8000000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[0U] 
                       ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_temp_mul2[0U]))) {
        ++(vlSymsp->__Vcoverage[7603]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_temp_mul2[0U] 
            = ((0xf7ffffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_temp_mul2[0U]) 
               | (0x8000000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[0U]));
    }
    if ((0x10000000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[0U] 
                        ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_temp_mul2[0U]))) {
        ++(vlSymsp->__Vcoverage[7604]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_temp_mul2[0U] 
            = ((0xefffffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_temp_mul2[0U]) 
               | (0x10000000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[0U]));
    }
    if ((0x20000000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[0U] 
                        ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_temp_mul2[0U]))) {
        ++(vlSymsp->__Vcoverage[7605]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_temp_mul2[0U] 
            = ((0xdfffffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_temp_mul2[0U]) 
               | (0x20000000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[0U]));
    }
    if ((0x40000000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[0U] 
                        ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_temp_mul2[0U]))) {
        ++(vlSymsp->__Vcoverage[7606]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_temp_mul2[0U] 
            = ((0xbfffffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_temp_mul2[0U]) 
               | (0x40000000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[0U]));
    }
    if (((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[0U] 
          ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_temp_mul2[0U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[7607]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_temp_mul2[0U] 
            = ((0x7fffffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_temp_mul2[0U]) 
               | (0x80000000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[0U]));
    }
    if ((1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[1U] 
               ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_temp_mul2[1U]))) {
        ++(vlSymsp->__Vcoverage[7608]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_temp_mul2[1U] 
            = ((0xfffffffeU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_temp_mul2[1U]) 
               | (1U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[1U]));
    }
    if ((2U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[1U] 
               ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_temp_mul2[1U]))) {
        ++(vlSymsp->__Vcoverage[7609]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_temp_mul2[1U] 
            = ((0xfffffffdU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_temp_mul2[1U]) 
               | (2U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[1U]));
    }
    if ((4U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[1U] 
               ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_temp_mul2[1U]))) {
        ++(vlSymsp->__Vcoverage[7610]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_temp_mul2[1U] 
            = ((0xfffffffbU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_temp_mul2[1U]) 
               | (4U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[1U]));
    }
    if ((8U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[1U] 
               ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_temp_mul2[1U]))) {
        ++(vlSymsp->__Vcoverage[7611]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_temp_mul2[1U] 
            = ((0xfffffff7U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_temp_mul2[1U]) 
               | (8U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[1U]));
    }
    if ((0x10U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[1U] 
                  ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_temp_mul2[1U]))) {
        ++(vlSymsp->__Vcoverage[7612]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_temp_mul2[1U] 
            = ((0xffffffefU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_temp_mul2[1U]) 
               | (0x10U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[1U]));
    }
    if ((0x20U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[1U] 
                  ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_temp_mul2[1U]))) {
        ++(vlSymsp->__Vcoverage[7613]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_temp_mul2[1U] 
            = ((0xffffffdfU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_temp_mul2[1U]) 
               | (0x20U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[1U]));
    }
    if ((0x40U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[1U] 
                  ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_temp_mul2[1U]))) {
        ++(vlSymsp->__Vcoverage[7614]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_temp_mul2[1U] 
            = ((0xffffffbfU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_temp_mul2[1U]) 
               | (0x40U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[1U]));
    }
    if ((0x80U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[1U] 
                  ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_temp_mul2[1U]))) {
        ++(vlSymsp->__Vcoverage[7615]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_temp_mul2[1U] 
            = ((0xffffff7fU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_temp_mul2[1U]) 
               | (0x80U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[1U]));
    }
    if ((0x100U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[1U] 
                   ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_temp_mul2[1U]))) {
        ++(vlSymsp->__Vcoverage[7616]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_temp_mul2[1U] 
            = ((0xfffffeffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_temp_mul2[1U]) 
               | (0x100U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[1U]));
    }
    if ((0x200U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[1U] 
                   ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_temp_mul2[1U]))) {
        ++(vlSymsp->__Vcoverage[7617]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_temp_mul2[1U] 
            = ((0xfffffdffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_temp_mul2[1U]) 
               | (0x200U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[1U]));
    }
    if ((0x400U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[1U] 
                   ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_temp_mul2[1U]))) {
        ++(vlSymsp->__Vcoverage[7618]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_temp_mul2[1U] 
            = ((0xfffffbffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_temp_mul2[1U]) 
               | (0x400U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[1U]));
    }
    if ((0x800U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[1U] 
                   ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_temp_mul2[1U]))) {
        ++(vlSymsp->__Vcoverage[7619]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_temp_mul2[1U] 
            = ((0xfffff7ffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_temp_mul2[1U]) 
               | (0x800U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[1U]));
    }
    if ((0x1000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[1U] 
                    ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_temp_mul2[1U]))) {
        ++(vlSymsp->__Vcoverage[7620]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_temp_mul2[1U] 
            = ((0xffffefffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_temp_mul2[1U]) 
               | (0x1000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[1U]));
    }
    if ((0x2000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[1U] 
                    ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_temp_mul2[1U]))) {
        ++(vlSymsp->__Vcoverage[7621]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_temp_mul2[1U] 
            = ((0xffffdfffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_temp_mul2[1U]) 
               | (0x2000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[1U]));
    }
    if ((0x4000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[1U] 
                    ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_temp_mul2[1U]))) {
        ++(vlSymsp->__Vcoverage[7622]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_temp_mul2[1U] 
            = ((0xffffbfffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_temp_mul2[1U]) 
               | (0x4000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[1U]));
    }
    if ((0x8000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[1U] 
                    ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_temp_mul2[1U]))) {
        ++(vlSymsp->__Vcoverage[7623]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_temp_mul2[1U] 
            = ((0xffff7fffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_temp_mul2[1U]) 
               | (0x8000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[1U]));
    }
    if ((0x10000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[1U] 
                     ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_temp_mul2[1U]))) {
        ++(vlSymsp->__Vcoverage[7624]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_temp_mul2[1U] 
            = ((0xfffeffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_temp_mul2[1U]) 
               | (0x10000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[1U]));
    }
    if ((0x20000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[1U] 
                     ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_temp_mul2[1U]))) {
        ++(vlSymsp->__Vcoverage[7625]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_temp_mul2[1U] 
            = ((0xfffdffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_temp_mul2[1U]) 
               | (0x20000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[1U]));
    }
    if ((0x40000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[1U] 
                     ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_temp_mul2[1U]))) {
        ++(vlSymsp->__Vcoverage[7626]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_temp_mul2[1U] 
            = ((0xfffbffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_temp_mul2[1U]) 
               | (0x40000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[1U]));
    }
    if ((0x80000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[1U] 
                     ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_temp_mul2[1U]))) {
        ++(vlSymsp->__Vcoverage[7627]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_temp_mul2[1U] 
            = ((0xfff7ffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_temp_mul2[1U]) 
               | (0x80000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[1U]));
    }
    if ((0x100000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[1U] 
                      ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_temp_mul2[1U]))) {
        ++(vlSymsp->__Vcoverage[7628]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_temp_mul2[1U] 
            = ((0xffefffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_temp_mul2[1U]) 
               | (0x100000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[1U]));
    }
    if ((0x200000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[1U] 
                      ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_temp_mul2[1U]))) {
        ++(vlSymsp->__Vcoverage[7629]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_temp_mul2[1U] 
            = ((0xffdfffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_temp_mul2[1U]) 
               | (0x200000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[1U]));
    }
    if ((0x400000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[1U] 
                      ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_temp_mul2[1U]))) {
        ++(vlSymsp->__Vcoverage[7630]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_temp_mul2[1U] 
            = ((0xffbfffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_temp_mul2[1U]) 
               | (0x400000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[1U]));
    }
    if ((0x800000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[1U] 
                      ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_temp_mul2[1U]))) {
        ++(vlSymsp->__Vcoverage[7631]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_temp_mul2[1U] 
            = ((0xff7fffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_temp_mul2[1U]) 
               | (0x800000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[1U]));
    }
    if ((0x1000000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[1U] 
                       ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_temp_mul2[1U]))) {
        ++(vlSymsp->__Vcoverage[7632]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_temp_mul2[1U] 
            = ((0xfeffffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_temp_mul2[1U]) 
               | (0x1000000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[1U]));
    }
    if ((0x2000000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[1U] 
                       ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_temp_mul2[1U]))) {
        ++(vlSymsp->__Vcoverage[7633]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_temp_mul2[1U] 
            = ((0xfdffffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_temp_mul2[1U]) 
               | (0x2000000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[1U]));
    }
    if ((0x4000000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[1U] 
                       ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_temp_mul2[1U]))) {
        ++(vlSymsp->__Vcoverage[7634]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_temp_mul2[1U] 
            = ((0xfbffffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_temp_mul2[1U]) 
               | (0x4000000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[1U]));
    }
    if ((0x8000000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[1U] 
                       ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_temp_mul2[1U]))) {
        ++(vlSymsp->__Vcoverage[7635]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_temp_mul2[1U] 
            = ((0xf7ffffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_temp_mul2[1U]) 
               | (0x8000000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[1U]));
    }
    if ((0x10000000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[1U] 
                        ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_temp_mul2[1U]))) {
        ++(vlSymsp->__Vcoverage[7636]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_temp_mul2[1U] 
            = ((0xefffffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_temp_mul2[1U]) 
               | (0x10000000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[1U]));
    }
    if ((0x20000000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[1U] 
                        ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_temp_mul2[1U]))) {
        ++(vlSymsp->__Vcoverage[7637]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_temp_mul2[1U] 
            = ((0xdfffffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_temp_mul2[1U]) 
               | (0x20000000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[1U]));
    }
    if ((0x40000000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[1U] 
                        ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_temp_mul2[1U]))) {
        ++(vlSymsp->__Vcoverage[7638]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_temp_mul2[1U] 
            = ((0xbfffffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_temp_mul2[1U]) 
               | (0x40000000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[1U]));
    }
    if (((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[1U] 
          ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_temp_mul2[1U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[7639]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_temp_mul2[1U] 
            = ((0x7fffffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_temp_mul2[1U]) 
               | (0x80000000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[1U]));
    }
    if ((1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[2U] 
               ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_temp_mul2[2U]))) {
        ++(vlSymsp->__Vcoverage[7640]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_temp_mul2[2U] 
            = ((6U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_temp_mul2[2U]) 
               | (1U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[2U]));
    }
    if ((2U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[2U] 
               ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_temp_mul2[2U]))) {
        ++(vlSymsp->__Vcoverage[7641]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_temp_mul2[2U] 
            = ((5U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_temp_mul2[2U]) 
               | (2U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[2U]));
    }
    if ((4U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[2U] 
               ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_temp_mul2[2U]))) {
        ++(vlSymsp->__Vcoverage[7642]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_temp_mul2[2U] 
            = ((3U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_temp_mul2[2U]) 
               | (4U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[2U]));
    }
    if (((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__pc_valid) 
         ^ (IData)(vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__i_cache_io_cpu_in_avalid))) {
        ++(vlSymsp->__Vcoverage[4622]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__i_cache_io_cpu_in_avalid 
            = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__pc_valid;
    }
    if ((1U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_opType) 
               ^ (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__reg_opType)))) {
        ++(vlSymsp->__Vcoverage[8132]);
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__reg_opType 
            = ((6U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__reg_opType)) 
               | (1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_opType)));
    }
    if ((2U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_opType) 
               ^ (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__reg_opType)))) {
        ++(vlSymsp->__Vcoverage[8133]);
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__reg_opType 
            = ((5U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__reg_opType)) 
               | (2U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_opType)));
    }
    if ((4U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_opType) 
               ^ (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__reg_opType)))) {
        ++(vlSymsp->__Vcoverage[8134]);
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__reg_opType 
            = ((3U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__reg_opType)) 
               | (4U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_opType)));
    }
    if ((1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_q[0U] 
               ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_q[0U]))) {
        ++(vlSymsp->__Vcoverage[7244]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_q[0U] 
            = ((0xfffffffeU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_q[0U]) 
               | (1U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_q[0U]));
    }
    if ((2U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_q[0U] 
               ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_q[0U]))) {
        ++(vlSymsp->__Vcoverage[7245]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_q[0U] 
            = ((0xfffffffdU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_q[0U]) 
               | (2U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_q[0U]));
    }
    if ((4U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_q[0U] 
               ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_q[0U]))) {
        ++(vlSymsp->__Vcoverage[7246]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_q[0U] 
            = ((0xfffffffbU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_q[0U]) 
               | (4U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_q[0U]));
    }
    if ((8U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_q[0U] 
               ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_q[0U]))) {
        ++(vlSymsp->__Vcoverage[7247]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_q[0U] 
            = ((0xfffffff7U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_q[0U]) 
               | (8U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_q[0U]));
    }
    if ((0x10U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_q[0U] 
                  ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_q[0U]))) {
        ++(vlSymsp->__Vcoverage[7248]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_q[0U] 
            = ((0xffffffefU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_q[0U]) 
               | (0x10U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_q[0U]));
    }
    if ((0x20U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_q[0U] 
                  ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_q[0U]))) {
        ++(vlSymsp->__Vcoverage[7249]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_q[0U] 
            = ((0xffffffdfU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_q[0U]) 
               | (0x20U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_q[0U]));
    }
    if ((0x40U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_q[0U] 
                  ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_q[0U]))) {
        ++(vlSymsp->__Vcoverage[7250]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_q[0U] 
            = ((0xffffffbfU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_q[0U]) 
               | (0x40U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_q[0U]));
    }
    if ((0x80U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_q[0U] 
                  ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_q[0U]))) {
        ++(vlSymsp->__Vcoverage[7251]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_q[0U] 
            = ((0xffffff7fU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_q[0U]) 
               | (0x80U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_q[0U]));
    }
    if ((0x100U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_q[0U] 
                   ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_q[0U]))) {
        ++(vlSymsp->__Vcoverage[7252]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_q[0U] 
            = ((0xfffffeffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_q[0U]) 
               | (0x100U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_q[0U]));
    }
    if ((0x200U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_q[0U] 
                   ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_q[0U]))) {
        ++(vlSymsp->__Vcoverage[7253]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_q[0U] 
            = ((0xfffffdffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_q[0U]) 
               | (0x200U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_q[0U]));
    }
    if ((0x400U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_q[0U] 
                   ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_q[0U]))) {
        ++(vlSymsp->__Vcoverage[7254]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_q[0U] 
            = ((0xfffffbffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_q[0U]) 
               | (0x400U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_q[0U]));
    }
    if ((0x800U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_q[0U] 
                   ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_q[0U]))) {
        ++(vlSymsp->__Vcoverage[7255]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_q[0U] 
            = ((0xfffff7ffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_q[0U]) 
               | (0x800U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_q[0U]));
    }
    if ((0x1000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_q[0U] 
                    ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_q[0U]))) {
        ++(vlSymsp->__Vcoverage[7256]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_q[0U] 
            = ((0xffffefffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_q[0U]) 
               | (0x1000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_q[0U]));
    }
    if ((0x2000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_q[0U] 
                    ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_q[0U]))) {
        ++(vlSymsp->__Vcoverage[7257]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_q[0U] 
            = ((0xffffdfffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_q[0U]) 
               | (0x2000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_q[0U]));
    }
    if ((0x4000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_q[0U] 
                    ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_q[0U]))) {
        ++(vlSymsp->__Vcoverage[7258]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_q[0U] 
            = ((0xffffbfffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_q[0U]) 
               | (0x4000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_q[0U]));
    }
    if ((0x8000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_q[0U] 
                    ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_q[0U]))) {
        ++(vlSymsp->__Vcoverage[7259]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_q[0U] 
            = ((0xffff7fffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_q[0U]) 
               | (0x8000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_q[0U]));
    }
    if ((0x10000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_q[0U] 
                     ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_q[0U]))) {
        ++(vlSymsp->__Vcoverage[7260]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_q[0U] 
            = ((0xfffeffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_q[0U]) 
               | (0x10000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_q[0U]));
    }
    if ((0x20000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_q[0U] 
                     ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_q[0U]))) {
        ++(vlSymsp->__Vcoverage[7261]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_q[0U] 
            = ((0xfffdffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_q[0U]) 
               | (0x20000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_q[0U]));
    }
    if ((0x40000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_q[0U] 
                     ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_q[0U]))) {
        ++(vlSymsp->__Vcoverage[7262]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_q[0U] 
            = ((0xfffbffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_q[0U]) 
               | (0x40000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_q[0U]));
    }
    if ((0x80000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_q[0U] 
                     ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_q[0U]))) {
        ++(vlSymsp->__Vcoverage[7263]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_q[0U] 
            = ((0xfff7ffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_q[0U]) 
               | (0x80000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_q[0U]));
    }
    if ((0x100000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_q[0U] 
                      ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_q[0U]))) {
        ++(vlSymsp->__Vcoverage[7264]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_q[0U] 
            = ((0xffefffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_q[0U]) 
               | (0x100000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_q[0U]));
    }
    if ((0x200000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_q[0U] 
                      ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_q[0U]))) {
        ++(vlSymsp->__Vcoverage[7265]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_q[0U] 
            = ((0xffdfffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_q[0U]) 
               | (0x200000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_q[0U]));
    }
    if ((0x400000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_q[0U] 
                      ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_q[0U]))) {
        ++(vlSymsp->__Vcoverage[7266]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_q[0U] 
            = ((0xffbfffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_q[0U]) 
               | (0x400000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_q[0U]));
    }
    if ((0x800000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_q[0U] 
                      ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_q[0U]))) {
        ++(vlSymsp->__Vcoverage[7267]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_q[0U] 
            = ((0xff7fffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_q[0U]) 
               | (0x800000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_q[0U]));
    }
    if ((0x1000000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_q[0U] 
                       ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_q[0U]))) {
        ++(vlSymsp->__Vcoverage[7268]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_q[0U] 
            = ((0xfeffffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_q[0U]) 
               | (0x1000000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_q[0U]));
    }
    if ((0x2000000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_q[0U] 
                       ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_q[0U]))) {
        ++(vlSymsp->__Vcoverage[7269]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_q[0U] 
            = ((0xfdffffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_q[0U]) 
               | (0x2000000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_q[0U]));
    }
    if ((0x4000000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_q[0U] 
                       ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_q[0U]))) {
        ++(vlSymsp->__Vcoverage[7270]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_q[0U] 
            = ((0xfbffffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_q[0U]) 
               | (0x4000000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_q[0U]));
    }
    if ((0x8000000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_q[0U] 
                       ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_q[0U]))) {
        ++(vlSymsp->__Vcoverage[7271]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_q[0U] 
            = ((0xf7ffffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_q[0U]) 
               | (0x8000000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_q[0U]));
    }
    if ((0x10000000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_q[0U] 
                        ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_q[0U]))) {
        ++(vlSymsp->__Vcoverage[7272]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_q[0U] 
            = ((0xefffffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_q[0U]) 
               | (0x10000000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_q[0U]));
    }
    if ((0x20000000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_q[0U] 
                        ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_q[0U]))) {
        ++(vlSymsp->__Vcoverage[7273]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_q[0U] 
            = ((0xdfffffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_q[0U]) 
               | (0x20000000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_q[0U]));
    }
    if ((0x40000000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_q[0U] 
                        ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_q[0U]))) {
        ++(vlSymsp->__Vcoverage[7274]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_q[0U] 
            = ((0xbfffffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_q[0U]) 
               | (0x40000000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_q[0U]));
    }
    if (((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_q[0U] 
          ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_q[0U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[7275]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_q[0U] 
            = ((0x7fffffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_q[0U]) 
               | (0x80000000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_q[0U]));
    }
    if ((1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_q[1U] 
               ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_q[1U]))) {
        ++(vlSymsp->__Vcoverage[7276]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_q[1U] 
            = ((0xfffffffeU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_q[1U]) 
               | (1U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_q[1U]));
    }
    if ((2U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_q[1U] 
               ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_q[1U]))) {
        ++(vlSymsp->__Vcoverage[7277]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_q[1U] 
            = ((0xfffffffdU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_q[1U]) 
               | (2U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_q[1U]));
    }
    if ((4U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_q[1U] 
               ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_q[1U]))) {
        ++(vlSymsp->__Vcoverage[7278]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_q[1U] 
            = ((0xfffffffbU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_q[1U]) 
               | (4U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_q[1U]));
    }
    if ((8U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_q[1U] 
               ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_q[1U]))) {
        ++(vlSymsp->__Vcoverage[7279]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_q[1U] 
            = ((0xfffffff7U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_q[1U]) 
               | (8U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_q[1U]));
    }
    if ((0x10U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_q[1U] 
                  ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_q[1U]))) {
        ++(vlSymsp->__Vcoverage[7280]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_q[1U] 
            = ((0xffffffefU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_q[1U]) 
               | (0x10U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_q[1U]));
    }
    if ((0x20U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_q[1U] 
                  ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_q[1U]))) {
        ++(vlSymsp->__Vcoverage[7281]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_q[1U] 
            = ((0xffffffdfU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_q[1U]) 
               | (0x20U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_q[1U]));
    }
    if ((0x40U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_q[1U] 
                  ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_q[1U]))) {
        ++(vlSymsp->__Vcoverage[7282]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_q[1U] 
            = ((0xffffffbfU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_q[1U]) 
               | (0x40U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_q[1U]));
    }
    if ((0x80U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_q[1U] 
                  ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_q[1U]))) {
        ++(vlSymsp->__Vcoverage[7283]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_q[1U] 
            = ((0xffffff7fU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_q[1U]) 
               | (0x80U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_q[1U]));
    }
    if ((0x100U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_q[1U] 
                   ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_q[1U]))) {
        ++(vlSymsp->__Vcoverage[7284]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_q[1U] 
            = ((0xfffffeffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_q[1U]) 
               | (0x100U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_q[1U]));
    }
    if ((0x200U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_q[1U] 
                   ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_q[1U]))) {
        ++(vlSymsp->__Vcoverage[7285]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_q[1U] 
            = ((0xfffffdffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_q[1U]) 
               | (0x200U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_q[1U]));
    }
    if ((0x400U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_q[1U] 
                   ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_q[1U]))) {
        ++(vlSymsp->__Vcoverage[7286]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_q[1U] 
            = ((0xfffffbffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_q[1U]) 
               | (0x400U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_q[1U]));
    }
    if ((0x800U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_q[1U] 
                   ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_q[1U]))) {
        ++(vlSymsp->__Vcoverage[7287]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_q[1U] 
            = ((0xfffff7ffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_q[1U]) 
               | (0x800U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_q[1U]));
    }
    if ((0x1000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_q[1U] 
                    ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_q[1U]))) {
        ++(vlSymsp->__Vcoverage[7288]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_q[1U] 
            = ((0xffffefffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_q[1U]) 
               | (0x1000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_q[1U]));
    }
    if ((0x2000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_q[1U] 
                    ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_q[1U]))) {
        ++(vlSymsp->__Vcoverage[7289]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_q[1U] 
            = ((0xffffdfffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_q[1U]) 
               | (0x2000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_q[1U]));
    }
    if ((0x4000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_q[1U] 
                    ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_q[1U]))) {
        ++(vlSymsp->__Vcoverage[7290]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_q[1U] 
            = ((0xffffbfffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_q[1U]) 
               | (0x4000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_q[1U]));
    }
    if ((0x8000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_q[1U] 
                    ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_q[1U]))) {
        ++(vlSymsp->__Vcoverage[7291]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_q[1U] 
            = ((0xffff7fffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_q[1U]) 
               | (0x8000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_q[1U]));
    }
    if ((0x10000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_q[1U] 
                     ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_q[1U]))) {
        ++(vlSymsp->__Vcoverage[7292]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_q[1U] 
            = ((0xfffeffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_q[1U]) 
               | (0x10000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_q[1U]));
    }
    if ((0x20000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_q[1U] 
                     ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_q[1U]))) {
        ++(vlSymsp->__Vcoverage[7293]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_q[1U] 
            = ((0xfffdffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_q[1U]) 
               | (0x20000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_q[1U]));
    }
    if ((0x40000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_q[1U] 
                     ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_q[1U]))) {
        ++(vlSymsp->__Vcoverage[7294]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_q[1U] 
            = ((0xfffbffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_q[1U]) 
               | (0x40000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_q[1U]));
    }
    if ((0x80000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_q[1U] 
                     ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_q[1U]))) {
        ++(vlSymsp->__Vcoverage[7295]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_q[1U] 
            = ((0xfff7ffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_q[1U]) 
               | (0x80000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_q[1U]));
    }
    if ((0x100000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_q[1U] 
                      ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_q[1U]))) {
        ++(vlSymsp->__Vcoverage[7296]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_q[1U] 
            = ((0xffefffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_q[1U]) 
               | (0x100000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_q[1U]));
    }
    if ((0x200000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_q[1U] 
                      ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_q[1U]))) {
        ++(vlSymsp->__Vcoverage[7297]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_q[1U] 
            = ((0xffdfffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_q[1U]) 
               | (0x200000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_q[1U]));
    }
    if ((0x400000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_q[1U] 
                      ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_q[1U]))) {
        ++(vlSymsp->__Vcoverage[7298]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_q[1U] 
            = ((0xffbfffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_q[1U]) 
               | (0x400000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_q[1U]));
    }
    if ((0x800000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_q[1U] 
                      ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_q[1U]))) {
        ++(vlSymsp->__Vcoverage[7299]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_q[1U] 
            = ((0xff7fffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_q[1U]) 
               | (0x800000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_q[1U]));
    }
    if ((0x1000000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_q[1U] 
                       ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_q[1U]))) {
        ++(vlSymsp->__Vcoverage[7300]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_q[1U] 
            = ((0xfeffffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_q[1U]) 
               | (0x1000000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_q[1U]));
    }
    if ((0x2000000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_q[1U] 
                       ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_q[1U]))) {
        ++(vlSymsp->__Vcoverage[7301]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_q[1U] 
            = ((0xfdffffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_q[1U]) 
               | (0x2000000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_q[1U]));
    }
    if ((0x4000000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_q[1U] 
                       ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_q[1U]))) {
        ++(vlSymsp->__Vcoverage[7302]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_q[1U] 
            = ((0xfbffffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_q[1U]) 
               | (0x4000000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_q[1U]));
    }
    if ((0x8000000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_q[1U] 
                       ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_q[1U]))) {
        ++(vlSymsp->__Vcoverage[7303]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_q[1U] 
            = ((0xf7ffffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_q[1U]) 
               | (0x8000000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_q[1U]));
    }
    if ((0x10000000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_q[1U] 
                        ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_q[1U]))) {
        ++(vlSymsp->__Vcoverage[7304]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_q[1U] 
            = ((0xefffffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_q[1U]) 
               | (0x10000000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_q[1U]));
    }
    if ((0x20000000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_q[1U] 
                        ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_q[1U]))) {
        ++(vlSymsp->__Vcoverage[7305]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_q[1U] 
            = ((0xdfffffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_q[1U]) 
               | (0x20000000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_q[1U]));
    }
    if ((0x40000000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_q[1U] 
                        ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_q[1U]))) {
        ++(vlSymsp->__Vcoverage[7306]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_q[1U] 
            = ((0xbfffffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_q[1U]) 
               | (0x40000000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_q[1U]));
    }
    if (((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_q[1U] 
          ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_q[1U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[7307]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_q[1U] 
            = ((0x7fffffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_q[1U]) 
               | (0x80000000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_q[1U]));
    }
    if ((1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_q[2U] 
               ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_q[2U]))) {
        ++(vlSymsp->__Vcoverage[7308]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_q[2U] 
            = (1U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_q[2U]);
    }
    if ((1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[0U] 
               ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_rem[0U]))) {
        ++(vlSymsp->__Vcoverage[7179]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_rem[0U] 
            = ((0xfffffffeU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_rem[0U]) 
               | (1U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[0U]));
    }
    if ((2U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[0U] 
               ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_rem[0U]))) {
        ++(vlSymsp->__Vcoverage[7180]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_rem[0U] 
            = ((0xfffffffdU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_rem[0U]) 
               | (2U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[0U]));
    }
    if ((4U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[0U] 
               ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_rem[0U]))) {
        ++(vlSymsp->__Vcoverage[7181]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_rem[0U] 
            = ((0xfffffffbU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_rem[0U]) 
               | (4U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[0U]));
    }
    if ((8U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[0U] 
               ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_rem[0U]))) {
        ++(vlSymsp->__Vcoverage[7182]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_rem[0U] 
            = ((0xfffffff7U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_rem[0U]) 
               | (8U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[0U]));
    }
    if ((0x10U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[0U] 
                  ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_rem[0U]))) {
        ++(vlSymsp->__Vcoverage[7183]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_rem[0U] 
            = ((0xffffffefU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_rem[0U]) 
               | (0x10U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[0U]));
    }
    if ((0x20U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[0U] 
                  ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_rem[0U]))) {
        ++(vlSymsp->__Vcoverage[7184]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_rem[0U] 
            = ((0xffffffdfU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_rem[0U]) 
               | (0x20U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[0U]));
    }
    if ((0x40U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[0U] 
                  ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_rem[0U]))) {
        ++(vlSymsp->__Vcoverage[7185]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_rem[0U] 
            = ((0xffffffbfU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_rem[0U]) 
               | (0x40U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[0U]));
    }
    if ((0x80U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[0U] 
                  ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_rem[0U]))) {
        ++(vlSymsp->__Vcoverage[7186]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_rem[0U] 
            = ((0xffffff7fU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_rem[0U]) 
               | (0x80U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[0U]));
    }
    if ((0x100U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[0U] 
                   ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_rem[0U]))) {
        ++(vlSymsp->__Vcoverage[7187]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_rem[0U] 
            = ((0xfffffeffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_rem[0U]) 
               | (0x100U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[0U]));
    }
    if ((0x200U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[0U] 
                   ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_rem[0U]))) {
        ++(vlSymsp->__Vcoverage[7188]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_rem[0U] 
            = ((0xfffffdffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_rem[0U]) 
               | (0x200U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[0U]));
    }
    if ((0x400U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[0U] 
                   ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_rem[0U]))) {
        ++(vlSymsp->__Vcoverage[7189]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_rem[0U] 
            = ((0xfffffbffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_rem[0U]) 
               | (0x400U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[0U]));
    }
    if ((0x800U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[0U] 
                   ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_rem[0U]))) {
        ++(vlSymsp->__Vcoverage[7190]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_rem[0U] 
            = ((0xfffff7ffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_rem[0U]) 
               | (0x800U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[0U]));
    }
    if ((0x1000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[0U] 
                    ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_rem[0U]))) {
        ++(vlSymsp->__Vcoverage[7191]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_rem[0U] 
            = ((0xffffefffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_rem[0U]) 
               | (0x1000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[0U]));
    }
    if ((0x2000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[0U] 
                    ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_rem[0U]))) {
        ++(vlSymsp->__Vcoverage[7192]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_rem[0U] 
            = ((0xffffdfffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_rem[0U]) 
               | (0x2000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[0U]));
    }
    if ((0x4000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[0U] 
                    ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_rem[0U]))) {
        ++(vlSymsp->__Vcoverage[7193]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_rem[0U] 
            = ((0xffffbfffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_rem[0U]) 
               | (0x4000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[0U]));
    }
    if ((0x8000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[0U] 
                    ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_rem[0U]))) {
        ++(vlSymsp->__Vcoverage[7194]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_rem[0U] 
            = ((0xffff7fffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_rem[0U]) 
               | (0x8000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[0U]));
    }
    if ((0x10000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[0U] 
                     ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_rem[0U]))) {
        ++(vlSymsp->__Vcoverage[7195]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_rem[0U] 
            = ((0xfffeffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_rem[0U]) 
               | (0x10000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[0U]));
    }
    if ((0x20000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[0U] 
                     ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_rem[0U]))) {
        ++(vlSymsp->__Vcoverage[7196]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_rem[0U] 
            = ((0xfffdffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_rem[0U]) 
               | (0x20000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[0U]));
    }
    if ((0x40000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[0U] 
                     ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_rem[0U]))) {
        ++(vlSymsp->__Vcoverage[7197]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_rem[0U] 
            = ((0xfffbffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_rem[0U]) 
               | (0x40000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[0U]));
    }
    if ((0x80000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[0U] 
                     ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_rem[0U]))) {
        ++(vlSymsp->__Vcoverage[7198]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_rem[0U] 
            = ((0xfff7ffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_rem[0U]) 
               | (0x80000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[0U]));
    }
    if ((0x100000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[0U] 
                      ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_rem[0U]))) {
        ++(vlSymsp->__Vcoverage[7199]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_rem[0U] 
            = ((0xffefffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_rem[0U]) 
               | (0x100000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[0U]));
    }
    if ((0x200000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[0U] 
                      ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_rem[0U]))) {
        ++(vlSymsp->__Vcoverage[7200]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_rem[0U] 
            = ((0xffdfffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_rem[0U]) 
               | (0x200000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[0U]));
    }
    if ((0x400000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[0U] 
                      ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_rem[0U]))) {
        ++(vlSymsp->__Vcoverage[7201]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_rem[0U] 
            = ((0xffbfffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_rem[0U]) 
               | (0x400000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[0U]));
    }
    if ((0x800000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[0U] 
                      ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_rem[0U]))) {
        ++(vlSymsp->__Vcoverage[7202]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_rem[0U] 
            = ((0xff7fffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_rem[0U]) 
               | (0x800000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[0U]));
    }
    if ((0x1000000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[0U] 
                       ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_rem[0U]))) {
        ++(vlSymsp->__Vcoverage[7203]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_rem[0U] 
            = ((0xfeffffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_rem[0U]) 
               | (0x1000000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[0U]));
    }
    if ((0x2000000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[0U] 
                       ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_rem[0U]))) {
        ++(vlSymsp->__Vcoverage[7204]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_rem[0U] 
            = ((0xfdffffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_rem[0U]) 
               | (0x2000000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[0U]));
    }
    if ((0x4000000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[0U] 
                       ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_rem[0U]))) {
        ++(vlSymsp->__Vcoverage[7205]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_rem[0U] 
            = ((0xfbffffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_rem[0U]) 
               | (0x4000000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[0U]));
    }
    if ((0x8000000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[0U] 
                       ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_rem[0U]))) {
        ++(vlSymsp->__Vcoverage[7206]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_rem[0U] 
            = ((0xf7ffffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_rem[0U]) 
               | (0x8000000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[0U]));
    }
    if ((0x10000000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[0U] 
                        ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_rem[0U]))) {
        ++(vlSymsp->__Vcoverage[7207]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_rem[0U] 
            = ((0xefffffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_rem[0U]) 
               | (0x10000000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[0U]));
    }
    if ((0x20000000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[0U] 
                        ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_rem[0U]))) {
        ++(vlSymsp->__Vcoverage[7208]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_rem[0U] 
            = ((0xdfffffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_rem[0U]) 
               | (0x20000000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[0U]));
    }
    if ((0x40000000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[0U] 
                        ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_rem[0U]))) {
        ++(vlSymsp->__Vcoverage[7209]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_rem[0U] 
            = ((0xbfffffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_rem[0U]) 
               | (0x40000000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[0U]));
    }
    if (((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[0U] 
          ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_rem[0U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[7210]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_rem[0U] 
            = ((0x7fffffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_rem[0U]) 
               | (0x80000000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[0U]));
    }
    if ((1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[1U] 
               ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_rem[1U]))) {
        ++(vlSymsp->__Vcoverage[7211]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_rem[1U] 
            = ((0xfffffffeU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_rem[1U]) 
               | (1U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[1U]));
    }
    if ((2U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[1U] 
               ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_rem[1U]))) {
        ++(vlSymsp->__Vcoverage[7212]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_rem[1U] 
            = ((0xfffffffdU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_rem[1U]) 
               | (2U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[1U]));
    }
    if ((4U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[1U] 
               ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_rem[1U]))) {
        ++(vlSymsp->__Vcoverage[7213]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_rem[1U] 
            = ((0xfffffffbU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_rem[1U]) 
               | (4U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[1U]));
    }
    if ((8U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[1U] 
               ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_rem[1U]))) {
        ++(vlSymsp->__Vcoverage[7214]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_rem[1U] 
            = ((0xfffffff7U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_rem[1U]) 
               | (8U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[1U]));
    }
    if ((0x10U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[1U] 
                  ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_rem[1U]))) {
        ++(vlSymsp->__Vcoverage[7215]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_rem[1U] 
            = ((0xffffffefU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_rem[1U]) 
               | (0x10U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[1U]));
    }
    if ((0x20U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[1U] 
                  ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_rem[1U]))) {
        ++(vlSymsp->__Vcoverage[7216]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_rem[1U] 
            = ((0xffffffdfU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_rem[1U]) 
               | (0x20U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[1U]));
    }
    if ((0x40U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[1U] 
                  ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_rem[1U]))) {
        ++(vlSymsp->__Vcoverage[7217]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_rem[1U] 
            = ((0xffffffbfU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_rem[1U]) 
               | (0x40U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[1U]));
    }
    if ((0x80U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[1U] 
                  ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_rem[1U]))) {
        ++(vlSymsp->__Vcoverage[7218]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_rem[1U] 
            = ((0xffffff7fU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_rem[1U]) 
               | (0x80U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[1U]));
    }
    if ((0x100U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[1U] 
                   ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_rem[1U]))) {
        ++(vlSymsp->__Vcoverage[7219]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_rem[1U] 
            = ((0xfffffeffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_rem[1U]) 
               | (0x100U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[1U]));
    }
    if ((0x200U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[1U] 
                   ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_rem[1U]))) {
        ++(vlSymsp->__Vcoverage[7220]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_rem[1U] 
            = ((0xfffffdffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_rem[1U]) 
               | (0x200U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[1U]));
    }
    if ((0x400U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[1U] 
                   ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_rem[1U]))) {
        ++(vlSymsp->__Vcoverage[7221]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_rem[1U] 
            = ((0xfffffbffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_rem[1U]) 
               | (0x400U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[1U]));
    }
    if ((0x800U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[1U] 
                   ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_rem[1U]))) {
        ++(vlSymsp->__Vcoverage[7222]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_rem[1U] 
            = ((0xfffff7ffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_rem[1U]) 
               | (0x800U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[1U]));
    }
    if ((0x1000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[1U] 
                    ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_rem[1U]))) {
        ++(vlSymsp->__Vcoverage[7223]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_rem[1U] 
            = ((0xffffefffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_rem[1U]) 
               | (0x1000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[1U]));
    }
    if ((0x2000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[1U] 
                    ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_rem[1U]))) {
        ++(vlSymsp->__Vcoverage[7224]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_rem[1U] 
            = ((0xffffdfffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_rem[1U]) 
               | (0x2000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[1U]));
    }
    if ((0x4000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[1U] 
                    ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_rem[1U]))) {
        ++(vlSymsp->__Vcoverage[7225]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_rem[1U] 
            = ((0xffffbfffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_rem[1U]) 
               | (0x4000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[1U]));
    }
    if ((0x8000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[1U] 
                    ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_rem[1U]))) {
        ++(vlSymsp->__Vcoverage[7226]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_rem[1U] 
            = ((0xffff7fffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_rem[1U]) 
               | (0x8000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[1U]));
    }
    if ((0x10000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[1U] 
                     ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_rem[1U]))) {
        ++(vlSymsp->__Vcoverage[7227]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_rem[1U] 
            = ((0xfffeffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_rem[1U]) 
               | (0x10000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[1U]));
    }
    if ((0x20000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[1U] 
                     ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_rem[1U]))) {
        ++(vlSymsp->__Vcoverage[7228]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_rem[1U] 
            = ((0xfffdffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_rem[1U]) 
               | (0x20000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[1U]));
    }
    if ((0x40000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[1U] 
                     ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_rem[1U]))) {
        ++(vlSymsp->__Vcoverage[7229]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_rem[1U] 
            = ((0xfffbffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_rem[1U]) 
               | (0x40000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[1U]));
    }
    if ((0x80000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[1U] 
                     ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_rem[1U]))) {
        ++(vlSymsp->__Vcoverage[7230]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_rem[1U] 
            = ((0xfff7ffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_rem[1U]) 
               | (0x80000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[1U]));
    }
    if ((0x100000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[1U] 
                      ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_rem[1U]))) {
        ++(vlSymsp->__Vcoverage[7231]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_rem[1U] 
            = ((0xffefffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_rem[1U]) 
               | (0x100000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[1U]));
    }
    if ((0x200000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[1U] 
                      ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_rem[1U]))) {
        ++(vlSymsp->__Vcoverage[7232]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_rem[1U] 
            = ((0xffdfffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_rem[1U]) 
               | (0x200000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[1U]));
    }
    if ((0x400000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[1U] 
                      ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_rem[1U]))) {
        ++(vlSymsp->__Vcoverage[7233]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_rem[1U] 
            = ((0xffbfffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_rem[1U]) 
               | (0x400000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[1U]));
    }
    if ((0x800000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[1U] 
                      ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_rem[1U]))) {
        ++(vlSymsp->__Vcoverage[7234]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_rem[1U] 
            = ((0xff7fffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_rem[1U]) 
               | (0x800000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[1U]));
    }
    if ((0x1000000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[1U] 
                       ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_rem[1U]))) {
        ++(vlSymsp->__Vcoverage[7235]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_rem[1U] 
            = ((0xfeffffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_rem[1U]) 
               | (0x1000000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[1U]));
    }
    if ((0x2000000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[1U] 
                       ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_rem[1U]))) {
        ++(vlSymsp->__Vcoverage[7236]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_rem[1U] 
            = ((0xfdffffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_rem[1U]) 
               | (0x2000000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[1U]));
    }
    if ((0x4000000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[1U] 
                       ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_rem[1U]))) {
        ++(vlSymsp->__Vcoverage[7237]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_rem[1U] 
            = ((0xfbffffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_rem[1U]) 
               | (0x4000000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[1U]));
    }
    if ((0x8000000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[1U] 
                       ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_rem[1U]))) {
        ++(vlSymsp->__Vcoverage[7238]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_rem[1U] 
            = ((0xf7ffffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_rem[1U]) 
               | (0x8000000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[1U]));
    }
    if ((0x10000000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[1U] 
                        ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_rem[1U]))) {
        ++(vlSymsp->__Vcoverage[7239]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_rem[1U] 
            = ((0xefffffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_rem[1U]) 
               | (0x10000000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[1U]));
    }
    if ((0x20000000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[1U] 
                        ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_rem[1U]))) {
        ++(vlSymsp->__Vcoverage[7240]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_rem[1U] 
            = ((0xdfffffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_rem[1U]) 
               | (0x20000000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[1U]));
    }
    if ((0x40000000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[1U] 
                        ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_rem[1U]))) {
        ++(vlSymsp->__Vcoverage[7241]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_rem[1U] 
            = ((0xbfffffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_rem[1U]) 
               | (0x40000000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[1U]));
    }
    if (((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[1U] 
          ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_rem[1U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[7242]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_rem[1U] 
            = ((0x7fffffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_rem[1U]) 
               | (0x80000000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[1U]));
    }
    if ((1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[2U] 
               ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_rem[2U]))) {
        ++(vlSymsp->__Vcoverage[7243]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_rem[2U] 
            = (1U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[2U]);
    }
    if ((1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_result[0U] 
               ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_result[0U]))) {
        ++(vlSymsp->__Vcoverage[7708]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_result[0U] 
            = ((0xfffffffeU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_result[0U]) 
               | (1U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_result[0U]));
    }
    if ((2U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_result[0U] 
               ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_result[0U]))) {
        ++(vlSymsp->__Vcoverage[7709]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_result[0U] 
            = ((0xfffffffdU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_result[0U]) 
               | (2U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_result[0U]));
    }
    if ((4U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_result[0U] 
               ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_result[0U]))) {
        ++(vlSymsp->__Vcoverage[7710]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_result[0U] 
            = ((0xfffffffbU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_result[0U]) 
               | (4U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_result[0U]));
    }
    if ((8U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_result[0U] 
               ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_result[0U]))) {
        ++(vlSymsp->__Vcoverage[7711]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_result[0U] 
            = ((0xfffffff7U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_result[0U]) 
               | (8U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_result[0U]));
    }
    if ((0x10U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_result[0U] 
                  ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_result[0U]))) {
        ++(vlSymsp->__Vcoverage[7712]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_result[0U] 
            = ((0xffffffefU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_result[0U]) 
               | (0x10U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_result[0U]));
    }
    if ((0x20U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_result[0U] 
                  ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_result[0U]))) {
        ++(vlSymsp->__Vcoverage[7713]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_result[0U] 
            = ((0xffffffdfU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_result[0U]) 
               | (0x20U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_result[0U]));
    }
    if ((0x40U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_result[0U] 
                  ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_result[0U]))) {
        ++(vlSymsp->__Vcoverage[7714]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_result[0U] 
            = ((0xffffffbfU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_result[0U]) 
               | (0x40U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_result[0U]));
    }
    if ((0x80U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_result[0U] 
                  ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_result[0U]))) {
        ++(vlSymsp->__Vcoverage[7715]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_result[0U] 
            = ((0xffffff7fU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_result[0U]) 
               | (0x80U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_result[0U]));
    }
    if ((0x100U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_result[0U] 
                   ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_result[0U]))) {
        ++(vlSymsp->__Vcoverage[7716]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_result[0U] 
            = ((0xfffffeffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_result[0U]) 
               | (0x100U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_result[0U]));
    }
    if ((0x200U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_result[0U] 
                   ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_result[0U]))) {
        ++(vlSymsp->__Vcoverage[7717]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_result[0U] 
            = ((0xfffffdffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_result[0U]) 
               | (0x200U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_result[0U]));
    }
    if ((0x400U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_result[0U] 
                   ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_result[0U]))) {
        ++(vlSymsp->__Vcoverage[7718]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_result[0U] 
            = ((0xfffffbffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_result[0U]) 
               | (0x400U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_result[0U]));
    }
    if ((0x800U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_result[0U] 
                   ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_result[0U]))) {
        ++(vlSymsp->__Vcoverage[7719]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_result[0U] 
            = ((0xfffff7ffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_result[0U]) 
               | (0x800U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_result[0U]));
    }
    if ((0x1000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_result[0U] 
                    ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_result[0U]))) {
        ++(vlSymsp->__Vcoverage[7720]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_result[0U] 
            = ((0xffffefffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_result[0U]) 
               | (0x1000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_result[0U]));
    }
    if ((0x2000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_result[0U] 
                    ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_result[0U]))) {
        ++(vlSymsp->__Vcoverage[7721]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_result[0U] 
            = ((0xffffdfffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_result[0U]) 
               | (0x2000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_result[0U]));
    }
    if ((0x4000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_result[0U] 
                    ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_result[0U]))) {
        ++(vlSymsp->__Vcoverage[7722]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_result[0U] 
            = ((0xffffbfffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_result[0U]) 
               | (0x4000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_result[0U]));
    }
    if ((0x8000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_result[0U] 
                    ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_result[0U]))) {
        ++(vlSymsp->__Vcoverage[7723]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_result[0U] 
            = ((0xffff7fffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_result[0U]) 
               | (0x8000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_result[0U]));
    }
    if ((0x10000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_result[0U] 
                     ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_result[0U]))) {
        ++(vlSymsp->__Vcoverage[7724]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_result[0U] 
            = ((0xfffeffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_result[0U]) 
               | (0x10000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_result[0U]));
    }
    if ((0x20000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_result[0U] 
                     ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_result[0U]))) {
        ++(vlSymsp->__Vcoverage[7725]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_result[0U] 
            = ((0xfffdffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_result[0U]) 
               | (0x20000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_result[0U]));
    }
    if ((0x40000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_result[0U] 
                     ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_result[0U]))) {
        ++(vlSymsp->__Vcoverage[7726]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_result[0U] 
            = ((0xfffbffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_result[0U]) 
               | (0x40000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_result[0U]));
    }
    if ((0x80000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_result[0U] 
                     ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_result[0U]))) {
        ++(vlSymsp->__Vcoverage[7727]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_result[0U] 
            = ((0xfff7ffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_result[0U]) 
               | (0x80000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_result[0U]));
    }
    if ((0x100000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_result[0U] 
                      ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_result[0U]))) {
        ++(vlSymsp->__Vcoverage[7728]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_result[0U] 
            = ((0xffefffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_result[0U]) 
               | (0x100000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_result[0U]));
    }
    if ((0x200000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_result[0U] 
                      ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_result[0U]))) {
        ++(vlSymsp->__Vcoverage[7729]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_result[0U] 
            = ((0xffdfffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_result[0U]) 
               | (0x200000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_result[0U]));
    }
    if ((0x400000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_result[0U] 
                      ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_result[0U]))) {
        ++(vlSymsp->__Vcoverage[7730]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_result[0U] 
            = ((0xffbfffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_result[0U]) 
               | (0x400000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_result[0U]));
    }
    if ((0x800000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_result[0U] 
                      ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_result[0U]))) {
        ++(vlSymsp->__Vcoverage[7731]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_result[0U] 
            = ((0xff7fffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_result[0U]) 
               | (0x800000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_result[0U]));
    }
    if ((0x1000000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_result[0U] 
                       ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_result[0U]))) {
        ++(vlSymsp->__Vcoverage[7732]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_result[0U] 
            = ((0xfeffffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_result[0U]) 
               | (0x1000000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_result[0U]));
    }
    if ((0x2000000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_result[0U] 
                       ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_result[0U]))) {
        ++(vlSymsp->__Vcoverage[7733]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_result[0U] 
            = ((0xfdffffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_result[0U]) 
               | (0x2000000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_result[0U]));
    }
    if ((0x4000000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_result[0U] 
                       ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_result[0U]))) {
        ++(vlSymsp->__Vcoverage[7734]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_result[0U] 
            = ((0xfbffffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_result[0U]) 
               | (0x4000000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_result[0U]));
    }
    if ((0x8000000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_result[0U] 
                       ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_result[0U]))) {
        ++(vlSymsp->__Vcoverage[7735]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_result[0U] 
            = ((0xf7ffffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_result[0U]) 
               | (0x8000000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_result[0U]));
    }
    if ((0x10000000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_result[0U] 
                        ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_result[0U]))) {
        ++(vlSymsp->__Vcoverage[7736]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_result[0U] 
            = ((0xefffffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_result[0U]) 
               | (0x10000000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_result[0U]));
    }
    if ((0x20000000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_result[0U] 
                        ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_result[0U]))) {
        ++(vlSymsp->__Vcoverage[7737]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_result[0U] 
            = ((0xdfffffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_result[0U]) 
               | (0x20000000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_result[0U]));
    }
    if ((0x40000000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_result[0U] 
                        ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_result[0U]))) {
        ++(vlSymsp->__Vcoverage[7738]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_result[0U] 
            = ((0xbfffffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_result[0U]) 
               | (0x40000000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_result[0U]));
    }
    if (((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_result[0U] 
          ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_result[0U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[7739]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_result[0U] 
            = ((0x7fffffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_result[0U]) 
               | (0x80000000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_result[0U]));
    }
    if ((1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_result[1U] 
               ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_result[1U]))) {
        ++(vlSymsp->__Vcoverage[7740]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_result[1U] 
            = ((0xfffffffeU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_result[1U]) 
               | (1U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_result[1U]));
    }
    if ((2U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_result[1U] 
               ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_result[1U]))) {
        ++(vlSymsp->__Vcoverage[7741]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_result[1U] 
            = ((0xfffffffdU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_result[1U]) 
               | (2U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_result[1U]));
    }
    if ((4U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_result[1U] 
               ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_result[1U]))) {
        ++(vlSymsp->__Vcoverage[7742]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_result[1U] 
            = ((0xfffffffbU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_result[1U]) 
               | (4U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_result[1U]));
    }
    if ((8U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_result[1U] 
               ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_result[1U]))) {
        ++(vlSymsp->__Vcoverage[7743]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_result[1U] 
            = ((0xfffffff7U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_result[1U]) 
               | (8U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_result[1U]));
    }
    if ((0x10U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_result[1U] 
                  ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_result[1U]))) {
        ++(vlSymsp->__Vcoverage[7744]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_result[1U] 
            = ((0xffffffefU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_result[1U]) 
               | (0x10U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_result[1U]));
    }
    if ((0x20U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_result[1U] 
                  ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_result[1U]))) {
        ++(vlSymsp->__Vcoverage[7745]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_result[1U] 
            = ((0xffffffdfU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_result[1U]) 
               | (0x20U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_result[1U]));
    }
    if ((0x40U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_result[1U] 
                  ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_result[1U]))) {
        ++(vlSymsp->__Vcoverage[7746]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_result[1U] 
            = ((0xffffffbfU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_result[1U]) 
               | (0x40U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_result[1U]));
    }
    if ((0x80U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_result[1U] 
                  ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_result[1U]))) {
        ++(vlSymsp->__Vcoverage[7747]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_result[1U] 
            = ((0xffffff7fU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_result[1U]) 
               | (0x80U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_result[1U]));
    }
    if ((0x100U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_result[1U] 
                   ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_result[1U]))) {
        ++(vlSymsp->__Vcoverage[7748]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_result[1U] 
            = ((0xfffffeffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_result[1U]) 
               | (0x100U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_result[1U]));
    }
    if ((0x200U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_result[1U] 
                   ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_result[1U]))) {
        ++(vlSymsp->__Vcoverage[7749]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_result[1U] 
            = ((0xfffffdffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_result[1U]) 
               | (0x200U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_result[1U]));
    }
    if ((0x400U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_result[1U] 
                   ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_result[1U]))) {
        ++(vlSymsp->__Vcoverage[7750]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_result[1U] 
            = ((0xfffffbffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_result[1U]) 
               | (0x400U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_result[1U]));
    }
    if ((0x800U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_result[1U] 
                   ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_result[1U]))) {
        ++(vlSymsp->__Vcoverage[7751]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_result[1U] 
            = ((0xfffff7ffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_result[1U]) 
               | (0x800U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_result[1U]));
    }
    if ((0x1000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_result[1U] 
                    ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_result[1U]))) {
        ++(vlSymsp->__Vcoverage[7752]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_result[1U] 
            = ((0xffffefffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_result[1U]) 
               | (0x1000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_result[1U]));
    }
    if ((0x2000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_result[1U] 
                    ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_result[1U]))) {
        ++(vlSymsp->__Vcoverage[7753]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_result[1U] 
            = ((0xffffdfffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_result[1U]) 
               | (0x2000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_result[1U]));
    }
    if ((0x4000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_result[1U] 
                    ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_result[1U]))) {
        ++(vlSymsp->__Vcoverage[7754]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_result[1U] 
            = ((0xffffbfffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_result[1U]) 
               | (0x4000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_result[1U]));
    }
    if ((0x8000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_result[1U] 
                    ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_result[1U]))) {
        ++(vlSymsp->__Vcoverage[7755]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_result[1U] 
            = ((0xffff7fffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_result[1U]) 
               | (0x8000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_result[1U]));
    }
    if ((0x10000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_result[1U] 
                     ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_result[1U]))) {
        ++(vlSymsp->__Vcoverage[7756]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_result[1U] 
            = ((0xfffeffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_result[1U]) 
               | (0x10000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_result[1U]));
    }
    if ((0x20000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_result[1U] 
                     ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_result[1U]))) {
        ++(vlSymsp->__Vcoverage[7757]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_result[1U] 
            = ((0xfffdffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_result[1U]) 
               | (0x20000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_result[1U]));
    }
    if ((0x40000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_result[1U] 
                     ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_result[1U]))) {
        ++(vlSymsp->__Vcoverage[7758]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_result[1U] 
            = ((0xfffbffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_result[1U]) 
               | (0x40000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_result[1U]));
    }
    if ((0x80000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_result[1U] 
                     ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_result[1U]))) {
        ++(vlSymsp->__Vcoverage[7759]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_result[1U] 
            = ((0xfff7ffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_result[1U]) 
               | (0x80000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_result[1U]));
    }
    if ((0x100000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_result[1U] 
                      ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_result[1U]))) {
        ++(vlSymsp->__Vcoverage[7760]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_result[1U] 
            = ((0xffefffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_result[1U]) 
               | (0x100000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_result[1U]));
    }
    if ((0x200000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_result[1U] 
                      ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_result[1U]))) {
        ++(vlSymsp->__Vcoverage[7761]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_result[1U] 
            = ((0xffdfffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_result[1U]) 
               | (0x200000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_result[1U]));
    }
    if ((0x400000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_result[1U] 
                      ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_result[1U]))) {
        ++(vlSymsp->__Vcoverage[7762]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_result[1U] 
            = ((0xffbfffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_result[1U]) 
               | (0x400000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_result[1U]));
    }
    if ((0x800000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_result[1U] 
                      ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_result[1U]))) {
        ++(vlSymsp->__Vcoverage[7763]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_result[1U] 
            = ((0xff7fffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_result[1U]) 
               | (0x800000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_result[1U]));
    }
    if ((0x1000000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_result[1U] 
                       ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_result[1U]))) {
        ++(vlSymsp->__Vcoverage[7764]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_result[1U] 
            = ((0xfeffffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_result[1U]) 
               | (0x1000000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_result[1U]));
    }
    if ((0x2000000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_result[1U] 
                       ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_result[1U]))) {
        ++(vlSymsp->__Vcoverage[7765]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_result[1U] 
            = ((0xfdffffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_result[1U]) 
               | (0x2000000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_result[1U]));
    }
    if ((0x4000000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_result[1U] 
                       ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_result[1U]))) {
        ++(vlSymsp->__Vcoverage[7766]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_result[1U] 
            = ((0xfbffffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_result[1U]) 
               | (0x4000000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_result[1U]));
    }
    if ((0x8000000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_result[1U] 
                       ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_result[1U]))) {
        ++(vlSymsp->__Vcoverage[7767]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_result[1U] 
            = ((0xf7ffffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_result[1U]) 
               | (0x8000000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_result[1U]));
    }
    if ((0x10000000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_result[1U] 
                        ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_result[1U]))) {
        ++(vlSymsp->__Vcoverage[7768]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_result[1U] 
            = ((0xefffffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_result[1U]) 
               | (0x10000000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_result[1U]));
    }
    if ((0x20000000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_result[1U] 
                        ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_result[1U]))) {
        ++(vlSymsp->__Vcoverage[7769]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_result[1U] 
            = ((0xdfffffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_result[1U]) 
               | (0x20000000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_result[1U]));
    }
    if ((0x40000000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_result[1U] 
                        ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_result[1U]))) {
        ++(vlSymsp->__Vcoverage[7770]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_result[1U] 
            = ((0xbfffffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_result[1U]) 
               | (0x40000000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_result[1U]));
    }
    if (((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_result[1U] 
          ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_result[1U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[7771]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_result[1U] 
            = ((0x7fffffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_result[1U]) 
               | (0x80000000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_result[1U]));
    }
    if ((1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_result[2U] 
               ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_result[2U]))) {
        ++(vlSymsp->__Vcoverage[7772]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_result[2U] 
            = ((0xfffffffeU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_result[2U]) 
               | (1U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_result[2U]));
    }
    if ((2U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_result[2U] 
               ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_result[2U]))) {
        ++(vlSymsp->__Vcoverage[7773]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_result[2U] 
            = ((0xfffffffdU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_result[2U]) 
               | (2U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_result[2U]));
    }
    if ((4U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_result[2U] 
               ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_result[2U]))) {
        ++(vlSymsp->__Vcoverage[7774]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_result[2U] 
            = ((0xfffffffbU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_result[2U]) 
               | (4U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_result[2U]));
    }
    if ((8U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_result[2U] 
               ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_result[2U]))) {
        ++(vlSymsp->__Vcoverage[7775]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_result[2U] 
            = ((0xfffffff7U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_result[2U]) 
               | (8U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_result[2U]));
    }
    if ((0x10U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_result[2U] 
                  ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_result[2U]))) {
        ++(vlSymsp->__Vcoverage[7776]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_result[2U] 
            = ((0xffffffefU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_result[2U]) 
               | (0x10U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_result[2U]));
    }
    if ((0x20U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_result[2U] 
                  ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_result[2U]))) {
        ++(vlSymsp->__Vcoverage[7777]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_result[2U] 
            = ((0xffffffdfU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_result[2U]) 
               | (0x20U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_result[2U]));
    }
    if ((0x40U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_result[2U] 
                  ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_result[2U]))) {
        ++(vlSymsp->__Vcoverage[7778]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_result[2U] 
            = ((0xffffffbfU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_result[2U]) 
               | (0x40U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_result[2U]));
    }
    if ((0x80U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_result[2U] 
                  ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_result[2U]))) {
        ++(vlSymsp->__Vcoverage[7779]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_result[2U] 
            = ((0xffffff7fU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_result[2U]) 
               | (0x80U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_result[2U]));
    }
    if ((0x100U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_result[2U] 
                   ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_result[2U]))) {
        ++(vlSymsp->__Vcoverage[7780]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_result[2U] 
            = ((0xfffffeffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_result[2U]) 
               | (0x100U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_result[2U]));
    }
    if ((0x200U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_result[2U] 
                   ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_result[2U]))) {
        ++(vlSymsp->__Vcoverage[7781]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_result[2U] 
            = ((0xfffffdffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_result[2U]) 
               | (0x200U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_result[2U]));
    }
    if ((0x400U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_result[2U] 
                   ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_result[2U]))) {
        ++(vlSymsp->__Vcoverage[7782]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_result[2U] 
            = ((0xfffffbffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_result[2U]) 
               | (0x400U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_result[2U]));
    }
    if ((0x800U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_result[2U] 
                   ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_result[2U]))) {
        ++(vlSymsp->__Vcoverage[7783]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_result[2U] 
            = ((0xfffff7ffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_result[2U]) 
               | (0x800U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_result[2U]));
    }
    if ((0x1000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_result[2U] 
                    ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_result[2U]))) {
        ++(vlSymsp->__Vcoverage[7784]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_result[2U] 
            = ((0xffffefffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_result[2U]) 
               | (0x1000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_result[2U]));
    }
    if ((0x2000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_result[2U] 
                    ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_result[2U]))) {
        ++(vlSymsp->__Vcoverage[7785]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_result[2U] 
            = ((0xffffdfffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_result[2U]) 
               | (0x2000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_result[2U]));
    }
    if ((0x4000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_result[2U] 
                    ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_result[2U]))) {
        ++(vlSymsp->__Vcoverage[7786]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_result[2U] 
            = ((0xffffbfffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_result[2U]) 
               | (0x4000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_result[2U]));
    }
    if ((0x8000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_result[2U] 
                    ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_result[2U]))) {
        ++(vlSymsp->__Vcoverage[7787]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_result[2U] 
            = ((0xffff7fffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_result[2U]) 
               | (0x8000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_result[2U]));
    }
    if ((0x10000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_result[2U] 
                     ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_result[2U]))) {
        ++(vlSymsp->__Vcoverage[7788]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_result[2U] 
            = ((0xfffeffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_result[2U]) 
               | (0x10000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_result[2U]));
    }
    if ((0x20000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_result[2U] 
                     ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_result[2U]))) {
        ++(vlSymsp->__Vcoverage[7789]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_result[2U] 
            = ((0xfffdffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_result[2U]) 
               | (0x20000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_result[2U]));
    }
    if ((0x40000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_result[2U] 
                     ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_result[2U]))) {
        ++(vlSymsp->__Vcoverage[7790]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_result[2U] 
            = ((0xfffbffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_result[2U]) 
               | (0x40000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_result[2U]));
    }
    if ((0x80000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_result[2U] 
                     ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_result[2U]))) {
        ++(vlSymsp->__Vcoverage[7791]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_result[2U] 
            = ((0xfff7ffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_result[2U]) 
               | (0x80000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_result[2U]));
    }
    if ((0x100000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_result[2U] 
                      ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_result[2U]))) {
        ++(vlSymsp->__Vcoverage[7792]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_result[2U] 
            = ((0xffefffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_result[2U]) 
               | (0x100000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_result[2U]));
    }
    if ((0x200000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_result[2U] 
                      ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_result[2U]))) {
        ++(vlSymsp->__Vcoverage[7793]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_result[2U] 
            = ((0xffdfffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_result[2U]) 
               | (0x200000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_result[2U]));
    }
    if ((0x400000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_result[2U] 
                      ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_result[2U]))) {
        ++(vlSymsp->__Vcoverage[7794]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_result[2U] 
            = ((0xffbfffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_result[2U]) 
               | (0x400000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_result[2U]));
    }
    if ((0x800000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_result[2U] 
                      ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_result[2U]))) {
        ++(vlSymsp->__Vcoverage[7795]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_result[2U] 
            = ((0xff7fffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_result[2U]) 
               | (0x800000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_result[2U]));
    }
    if ((0x1000000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_result[2U] 
                       ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_result[2U]))) {
        ++(vlSymsp->__Vcoverage[7796]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_result[2U] 
            = ((0xfeffffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_result[2U]) 
               | (0x1000000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_result[2U]));
    }
    if ((0x2000000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_result[2U] 
                       ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_result[2U]))) {
        ++(vlSymsp->__Vcoverage[7797]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_result[2U] 
            = ((0xfdffffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_result[2U]) 
               | (0x2000000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_result[2U]));
    }
    if ((0x4000000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_result[2U] 
                       ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_result[2U]))) {
        ++(vlSymsp->__Vcoverage[7798]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_result[2U] 
            = ((0xfbffffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_result[2U]) 
               | (0x4000000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_result[2U]));
    }
    if ((0x8000000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_result[2U] 
                       ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_result[2U]))) {
        ++(vlSymsp->__Vcoverage[7799]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_result[2U] 
            = ((0xf7ffffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_result[2U]) 
               | (0x8000000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_result[2U]));
    }
    if ((0x10000000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_result[2U] 
                        ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_result[2U]))) {
        ++(vlSymsp->__Vcoverage[7800]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_result[2U] 
            = ((0xefffffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_result[2U]) 
               | (0x10000000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_result[2U]));
    }
    if ((0x20000000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_result[2U] 
                        ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_result[2U]))) {
        ++(vlSymsp->__Vcoverage[7801]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_result[2U] 
            = ((0xdfffffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_result[2U]) 
               | (0x20000000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_result[2U]));
    }
    if ((0x40000000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_result[2U] 
                        ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_result[2U]))) {
        ++(vlSymsp->__Vcoverage[7802]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_result[2U] 
            = ((0xbfffffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_result[2U]) 
               | (0x40000000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_result[2U]));
    }
    if (((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_result[2U] 
          ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_result[2U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[7803]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_result[2U] 
            = ((0x7fffffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_result[2U]) 
               | (0x80000000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_result[2U]));
    }
    if ((1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_result[3U] 
               ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_result[3U]))) {
        ++(vlSymsp->__Vcoverage[7804]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_result[3U] 
            = ((0xfffffffeU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_result[3U]) 
               | (1U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_result[3U]));
    }
    if ((2U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_result[3U] 
               ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_result[3U]))) {
        ++(vlSymsp->__Vcoverage[7805]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_result[3U] 
            = ((0xfffffffdU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_result[3U]) 
               | (2U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_result[3U]));
    }
    if ((4U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_result[3U] 
               ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_result[3U]))) {
        ++(vlSymsp->__Vcoverage[7806]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_result[3U] 
            = ((0xfffffffbU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_result[3U]) 
               | (4U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_result[3U]));
    }
    if ((8U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_result[3U] 
               ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_result[3U]))) {
        ++(vlSymsp->__Vcoverage[7807]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_result[3U] 
            = ((0xfffffff7U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_result[3U]) 
               | (8U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_result[3U]));
    }
    if ((0x10U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_result[3U] 
                  ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_result[3U]))) {
        ++(vlSymsp->__Vcoverage[7808]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_result[3U] 
            = ((0xffffffefU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_result[3U]) 
               | (0x10U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_result[3U]));
    }
    if ((0x20U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_result[3U] 
                  ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_result[3U]))) {
        ++(vlSymsp->__Vcoverage[7809]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_result[3U] 
            = ((0xffffffdfU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_result[3U]) 
               | (0x20U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_result[3U]));
    }
    if ((0x40U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_result[3U] 
                  ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_result[3U]))) {
        ++(vlSymsp->__Vcoverage[7810]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_result[3U] 
            = ((0xffffffbfU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_result[3U]) 
               | (0x40U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_result[3U]));
    }
    if ((0x80U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_result[3U] 
                  ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_result[3U]))) {
        ++(vlSymsp->__Vcoverage[7811]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_result[3U] 
            = ((0xffffff7fU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_result[3U]) 
               | (0x80U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_result[3U]));
    }
    if ((0x100U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_result[3U] 
                   ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_result[3U]))) {
        ++(vlSymsp->__Vcoverage[7812]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_result[3U] 
            = ((0xfffffeffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_result[3U]) 
               | (0x100U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_result[3U]));
    }
    if ((0x200U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_result[3U] 
                   ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_result[3U]))) {
        ++(vlSymsp->__Vcoverage[7813]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_result[3U] 
            = ((0xfffffdffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_result[3U]) 
               | (0x200U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_result[3U]));
    }
    if ((0x400U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_result[3U] 
                   ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_result[3U]))) {
        ++(vlSymsp->__Vcoverage[7814]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_result[3U] 
            = ((0xfffffbffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_result[3U]) 
               | (0x400U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_result[3U]));
    }
    if ((0x800U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_result[3U] 
                   ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_result[3U]))) {
        ++(vlSymsp->__Vcoverage[7815]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_result[3U] 
            = ((0xfffff7ffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_result[3U]) 
               | (0x800U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_result[3U]));
    }
    if ((0x1000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_result[3U] 
                    ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_result[3U]))) {
        ++(vlSymsp->__Vcoverage[7816]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_result[3U] 
            = ((0xffffefffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_result[3U]) 
               | (0x1000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_result[3U]));
    }
    if ((0x2000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_result[3U] 
                    ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_result[3U]))) {
        ++(vlSymsp->__Vcoverage[7817]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_result[3U] 
            = ((0xffffdfffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_result[3U]) 
               | (0x2000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_result[3U]));
    }
    if ((0x4000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_result[3U] 
                    ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_result[3U]))) {
        ++(vlSymsp->__Vcoverage[7818]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_result[3U] 
            = ((0xffffbfffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_result[3U]) 
               | (0x4000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_result[3U]));
    }
    if ((0x8000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_result[3U] 
                    ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_result[3U]))) {
        ++(vlSymsp->__Vcoverage[7819]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_result[3U] 
            = ((0xffff7fffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_result[3U]) 
               | (0x8000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_result[3U]));
    }
    if ((0x10000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_result[3U] 
                     ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_result[3U]))) {
        ++(vlSymsp->__Vcoverage[7820]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_result[3U] 
            = ((0xfffeffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_result[3U]) 
               | (0x10000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_result[3U]));
    }
    if ((0x20000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_result[3U] 
                     ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_result[3U]))) {
        ++(vlSymsp->__Vcoverage[7821]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_result[3U] 
            = ((0xfffdffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_result[3U]) 
               | (0x20000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_result[3U]));
    }
    if ((0x40000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_result[3U] 
                     ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_result[3U]))) {
        ++(vlSymsp->__Vcoverage[7822]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_result[3U] 
            = ((0xfffbffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_result[3U]) 
               | (0x40000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_result[3U]));
    }
    if ((0x80000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_result[3U] 
                     ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_result[3U]))) {
        ++(vlSymsp->__Vcoverage[7823]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_result[3U] 
            = ((0xfff7ffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_result[3U]) 
               | (0x80000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_result[3U]));
    }
    if ((0x100000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_result[3U] 
                      ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_result[3U]))) {
        ++(vlSymsp->__Vcoverage[7824]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_result[3U] 
            = ((0xffefffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_result[3U]) 
               | (0x100000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_result[3U]));
    }
    if ((0x200000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_result[3U] 
                      ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_result[3U]))) {
        ++(vlSymsp->__Vcoverage[7825]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_result[3U] 
            = ((0xffdfffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_result[3U]) 
               | (0x200000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_result[3U]));
    }
    if ((0x400000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_result[3U] 
                      ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_result[3U]))) {
        ++(vlSymsp->__Vcoverage[7826]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_result[3U] 
            = ((0xffbfffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_result[3U]) 
               | (0x400000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_result[3U]));
    }
    if ((0x800000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_result[3U] 
                      ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_result[3U]))) {
        ++(vlSymsp->__Vcoverage[7827]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_result[3U] 
            = ((0xff7fffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_result[3U]) 
               | (0x800000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_result[3U]));
    }
    if ((0x1000000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_result[3U] 
                       ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_result[3U]))) {
        ++(vlSymsp->__Vcoverage[7828]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_result[3U] 
            = ((0xfeffffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_result[3U]) 
               | (0x1000000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_result[3U]));
    }
    if ((0x2000000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_result[3U] 
                       ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_result[3U]))) {
        ++(vlSymsp->__Vcoverage[7829]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_result[3U] 
            = ((0xfdffffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_result[3U]) 
               | (0x2000000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_result[3U]));
    }
    if ((0x4000000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_result[3U] 
                       ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_result[3U]))) {
        ++(vlSymsp->__Vcoverage[7830]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_result[3U] 
            = ((0xfbffffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_result[3U]) 
               | (0x4000000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_result[3U]));
    }
    if ((0x8000000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_result[3U] 
                       ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_result[3U]))) {
        ++(vlSymsp->__Vcoverage[7831]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_result[3U] 
            = ((0xf7ffffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_result[3U]) 
               | (0x8000000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_result[3U]));
    }
    if ((0x10000000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_result[3U] 
                        ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_result[3U]))) {
        ++(vlSymsp->__Vcoverage[7832]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_result[3U] 
            = ((0xefffffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_result[3U]) 
               | (0x10000000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_result[3U]));
    }
    if ((0x20000000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_result[3U] 
                        ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_result[3U]))) {
        ++(vlSymsp->__Vcoverage[7833]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_result[3U] 
            = ((0xdfffffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_result[3U]) 
               | (0x20000000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_result[3U]));
    }
    if ((0x40000000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_result[3U] 
                        ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_result[3U]))) {
        ++(vlSymsp->__Vcoverage[7834]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_result[3U] 
            = ((0xbfffffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_result[3U]) 
               | (0x40000000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_result[3U]));
    }
    if (((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_result[3U] 
          ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_result[3U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[7835]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_result[3U] 
            = ((0x7fffffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_result[3U]) 
               | (0x80000000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_result[3U]));
    }
    if ((1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_result[4U] 
               ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_result[4U]))) {
        ++(vlSymsp->__Vcoverage[7836]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_result[4U] 
            = ((2U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_result[4U]) 
               | (1U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_result[4U]));
    }
    if ((2U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_result[4U] 
               ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_result[4U]))) {
        ++(vlSymsp->__Vcoverage[7837]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_result[4U] 
            = ((1U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_result[4U]) 
               | (2U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_result[4U]));
    }
    if (((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_stall) 
         ^ (IData)(vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__fetch_io_in_de_stall))) {
        ++(vlSymsp->__Vcoverage[4690]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__fetch_io_in_de_stall 
            = vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_stall;
    }
    if (((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_next_pc_valid) 
         ^ (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_next_pc_valid))) {
        ++(vlSymsp->__Vcoverage[5715]);
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_next_pc_valid 
            = vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_next_pc_valid;
    }
    vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_valid 
        = ((~ (IData)(vlSelf->reset)) & (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT___GEN_2));
    if ((1U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_next_pc) 
               ^ (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_next_pc)))) {
        ++(vlSymsp->__Vcoverage[5651]);
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_next_pc 
            = ((0xfffffffffffffffeULL & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_next_pc) 
               | (IData)((IData)((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_next_pc)))));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_next_pc 
                        >> 1U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_next_pc 
                                           >> 1U))))) {
        ++(vlSymsp->__Vcoverage[5652]);
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_next_pc 
            = ((0xfffffffffffffffdULL & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_next_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_next_pc 
                                                 >> 1U))))) 
                  << 1U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_next_pc 
                        >> 2U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_next_pc 
                                           >> 2U))))) {
        ++(vlSymsp->__Vcoverage[5653]);
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_next_pc 
            = ((0xfffffffffffffffbULL & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_next_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_next_pc 
                                                 >> 2U))))) 
                  << 2U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_next_pc 
                        >> 3U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_next_pc 
                                           >> 3U))))) {
        ++(vlSymsp->__Vcoverage[5654]);
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_next_pc 
            = ((0xfffffffffffffff7ULL & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_next_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_next_pc 
                                                 >> 3U))))) 
                  << 3U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_next_pc 
                        >> 4U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_next_pc 
                                           >> 4U))))) {
        ++(vlSymsp->__Vcoverage[5655]);
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_next_pc 
            = ((0xffffffffffffffefULL & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_next_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_next_pc 
                                                 >> 4U))))) 
                  << 4U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_next_pc 
                        >> 5U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_next_pc 
                                           >> 5U))))) {
        ++(vlSymsp->__Vcoverage[5656]);
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_next_pc 
            = ((0xffffffffffffffdfULL & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_next_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_next_pc 
                                                 >> 5U))))) 
                  << 5U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_next_pc 
                        >> 6U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_next_pc 
                                           >> 6U))))) {
        ++(vlSymsp->__Vcoverage[5657]);
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_next_pc 
            = ((0xffffffffffffffbfULL & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_next_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_next_pc 
                                                 >> 6U))))) 
                  << 6U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_next_pc 
                        >> 7U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_next_pc 
                                           >> 7U))))) {
        ++(vlSymsp->__Vcoverage[5658]);
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_next_pc 
            = ((0xffffffffffffff7fULL & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_next_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_next_pc 
                                                 >> 7U))))) 
                  << 7U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_next_pc 
                        >> 8U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_next_pc 
                                           >> 8U))))) {
        ++(vlSymsp->__Vcoverage[5659]);
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_next_pc 
            = ((0xfffffffffffffeffULL & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_next_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_next_pc 
                                                 >> 8U))))) 
                  << 8U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_next_pc 
                        >> 9U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_next_pc 
                                           >> 9U))))) {
        ++(vlSymsp->__Vcoverage[5660]);
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_next_pc 
            = ((0xfffffffffffffdffULL & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_next_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_next_pc 
                                                 >> 9U))))) 
                  << 9U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_next_pc 
                        >> 0xaU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_next_pc 
                                             >> 0xaU))))) {
        ++(vlSymsp->__Vcoverage[5661]);
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_next_pc 
            = ((0xfffffffffffffbffULL & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_next_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_next_pc 
                                                 >> 0xaU))))) 
                  << 0xaU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_next_pc 
                        >> 0xbU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_next_pc 
                                             >> 0xbU))))) {
        ++(vlSymsp->__Vcoverage[5662]);
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_next_pc 
            = ((0xfffffffffffff7ffULL & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_next_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_next_pc 
                                                 >> 0xbU))))) 
                  << 0xbU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_next_pc 
                        >> 0xcU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_next_pc 
                                             >> 0xcU))))) {
        ++(vlSymsp->__Vcoverage[5663]);
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_next_pc 
            = ((0xffffffffffffefffULL & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_next_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_next_pc 
                                                 >> 0xcU))))) 
                  << 0xcU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_next_pc 
                        >> 0xdU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_next_pc 
                                             >> 0xdU))))) {
        ++(vlSymsp->__Vcoverage[5664]);
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_next_pc 
            = ((0xffffffffffffdfffULL & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_next_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_next_pc 
                                                 >> 0xdU))))) 
                  << 0xdU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_next_pc 
                        >> 0xeU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_next_pc 
                                             >> 0xeU))))) {
        ++(vlSymsp->__Vcoverage[5665]);
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_next_pc 
            = ((0xffffffffffffbfffULL & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_next_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_next_pc 
                                                 >> 0xeU))))) 
                  << 0xeU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_next_pc 
                        >> 0xfU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_next_pc 
                                             >> 0xfU))))) {
        ++(vlSymsp->__Vcoverage[5666]);
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_next_pc 
            = ((0xffffffffffff7fffULL & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_next_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_next_pc 
                                                 >> 0xfU))))) 
                  << 0xfU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_next_pc 
                        >> 0x10U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_next_pc 
                                              >> 0x10U))))) {
        ++(vlSymsp->__Vcoverage[5667]);
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_next_pc 
            = ((0xfffffffffffeffffULL & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_next_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_next_pc 
                                                 >> 0x10U))))) 
                  << 0x10U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_next_pc 
                        >> 0x11U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_next_pc 
                                              >> 0x11U))))) {
        ++(vlSymsp->__Vcoverage[5668]);
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_next_pc 
            = ((0xfffffffffffdffffULL & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_next_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_next_pc 
                                                 >> 0x11U))))) 
                  << 0x11U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_next_pc 
                        >> 0x12U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_next_pc 
                                              >> 0x12U))))) {
        ++(vlSymsp->__Vcoverage[5669]);
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_next_pc 
            = ((0xfffffffffffbffffULL & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_next_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_next_pc 
                                                 >> 0x12U))))) 
                  << 0x12U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_next_pc 
                        >> 0x13U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_next_pc 
                                              >> 0x13U))))) {
        ++(vlSymsp->__Vcoverage[5670]);
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_next_pc 
            = ((0xfffffffffff7ffffULL & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_next_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_next_pc 
                                                 >> 0x13U))))) 
                  << 0x13U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_next_pc 
                        >> 0x14U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_next_pc 
                                              >> 0x14U))))) {
        ++(vlSymsp->__Vcoverage[5671]);
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_next_pc 
            = ((0xffffffffffefffffULL & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_next_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_next_pc 
                                                 >> 0x14U))))) 
                  << 0x14U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_next_pc 
                        >> 0x15U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_next_pc 
                                              >> 0x15U))))) {
        ++(vlSymsp->__Vcoverage[5672]);
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_next_pc 
            = ((0xffffffffffdfffffULL & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_next_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_next_pc 
                                                 >> 0x15U))))) 
                  << 0x15U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_next_pc 
                        >> 0x16U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_next_pc 
                                              >> 0x16U))))) {
        ++(vlSymsp->__Vcoverage[5673]);
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_next_pc 
            = ((0xffffffffffbfffffULL & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_next_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_next_pc 
                                                 >> 0x16U))))) 
                  << 0x16U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_next_pc 
                        >> 0x17U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_next_pc 
                                              >> 0x17U))))) {
        ++(vlSymsp->__Vcoverage[5674]);
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_next_pc 
            = ((0xffffffffff7fffffULL & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_next_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_next_pc 
                                                 >> 0x17U))))) 
                  << 0x17U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_next_pc 
                        >> 0x18U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_next_pc 
                                              >> 0x18U))))) {
        ++(vlSymsp->__Vcoverage[5675]);
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_next_pc 
            = ((0xfffffffffeffffffULL & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_next_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_next_pc 
                                                 >> 0x18U))))) 
                  << 0x18U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_next_pc 
                        >> 0x19U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_next_pc 
                                              >> 0x19U))))) {
        ++(vlSymsp->__Vcoverage[5676]);
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_next_pc 
            = ((0xfffffffffdffffffULL & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_next_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_next_pc 
                                                 >> 0x19U))))) 
                  << 0x19U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_next_pc 
                        >> 0x1aU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_next_pc 
                                              >> 0x1aU))))) {
        ++(vlSymsp->__Vcoverage[5677]);
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_next_pc 
            = ((0xfffffffffbffffffULL & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_next_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_next_pc 
                                                 >> 0x1aU))))) 
                  << 0x1aU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_next_pc 
                        >> 0x1bU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_next_pc 
                                              >> 0x1bU))))) {
        ++(vlSymsp->__Vcoverage[5678]);
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_next_pc 
            = ((0xfffffffff7ffffffULL & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_next_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_next_pc 
                                                 >> 0x1bU))))) 
                  << 0x1bU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_next_pc 
                        >> 0x1cU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_next_pc 
                                              >> 0x1cU))))) {
        ++(vlSymsp->__Vcoverage[5679]);
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_next_pc 
            = ((0xffffffffefffffffULL & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_next_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_next_pc 
                                                 >> 0x1cU))))) 
                  << 0x1cU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_next_pc 
                        >> 0x1dU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_next_pc 
                                              >> 0x1dU))))) {
        ++(vlSymsp->__Vcoverage[5680]);
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_next_pc 
            = ((0xffffffffdfffffffULL & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_next_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_next_pc 
                                                 >> 0x1dU))))) 
                  << 0x1dU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_next_pc 
                        >> 0x1eU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_next_pc 
                                              >> 0x1eU))))) {
        ++(vlSymsp->__Vcoverage[5681]);
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_next_pc 
            = ((0xffffffffbfffffffULL & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_next_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_next_pc 
                                                 >> 0x1eU))))) 
                  << 0x1eU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_next_pc 
                        >> 0x1fU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_next_pc 
                                              >> 0x1fU))))) {
        ++(vlSymsp->__Vcoverage[5682]);
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_next_pc 
            = ((0xffffffff7fffffffULL & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_next_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_next_pc 
                                                 >> 0x1fU))))) 
                  << 0x1fU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_next_pc 
                        >> 0x20U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_next_pc 
                                              >> 0x20U))))) {
        ++(vlSymsp->__Vcoverage[5683]);
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_next_pc 
            = ((0xfffffffeffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_next_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_next_pc 
                                                 >> 0x20U))))) 
                  << 0x20U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_next_pc 
                        >> 0x21U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_next_pc 
                                              >> 0x21U))))) {
        ++(vlSymsp->__Vcoverage[5684]);
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_next_pc 
            = ((0xfffffffdffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_next_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_next_pc 
                                                 >> 0x21U))))) 
                  << 0x21U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_next_pc 
                        >> 0x22U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_next_pc 
                                              >> 0x22U))))) {
        ++(vlSymsp->__Vcoverage[5685]);
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_next_pc 
            = ((0xfffffffbffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_next_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_next_pc 
                                                 >> 0x22U))))) 
                  << 0x22U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_next_pc 
                        >> 0x23U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_next_pc 
                                              >> 0x23U))))) {
        ++(vlSymsp->__Vcoverage[5686]);
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_next_pc 
            = ((0xfffffff7ffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_next_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_next_pc 
                                                 >> 0x23U))))) 
                  << 0x23U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_next_pc 
                        >> 0x24U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_next_pc 
                                              >> 0x24U))))) {
        ++(vlSymsp->__Vcoverage[5687]);
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_next_pc 
            = ((0xffffffefffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_next_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_next_pc 
                                                 >> 0x24U))))) 
                  << 0x24U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_next_pc 
                        >> 0x25U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_next_pc 
                                              >> 0x25U))))) {
        ++(vlSymsp->__Vcoverage[5688]);
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_next_pc 
            = ((0xffffffdfffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_next_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_next_pc 
                                                 >> 0x25U))))) 
                  << 0x25U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_next_pc 
                        >> 0x26U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_next_pc 
                                              >> 0x26U))))) {
        ++(vlSymsp->__Vcoverage[5689]);
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_next_pc 
            = ((0xffffffbfffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_next_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_next_pc 
                                                 >> 0x26U))))) 
                  << 0x26U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_next_pc 
                        >> 0x27U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_next_pc 
                                              >> 0x27U))))) {
        ++(vlSymsp->__Vcoverage[5690]);
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_next_pc 
            = ((0xffffff7fffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_next_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_next_pc 
                                                 >> 0x27U))))) 
                  << 0x27U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_next_pc 
                        >> 0x28U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_next_pc 
                                              >> 0x28U))))) {
        ++(vlSymsp->__Vcoverage[5691]);
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_next_pc 
            = ((0xfffffeffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_next_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_next_pc 
                                                 >> 0x28U))))) 
                  << 0x28U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_next_pc 
                        >> 0x29U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_next_pc 
                                              >> 0x29U))))) {
        ++(vlSymsp->__Vcoverage[5692]);
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_next_pc 
            = ((0xfffffdffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_next_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_next_pc 
                                                 >> 0x29U))))) 
                  << 0x29U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_next_pc 
                        >> 0x2aU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_next_pc 
                                              >> 0x2aU))))) {
        ++(vlSymsp->__Vcoverage[5693]);
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_next_pc 
            = ((0xfffffbffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_next_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_next_pc 
                                                 >> 0x2aU))))) 
                  << 0x2aU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_next_pc 
                        >> 0x2bU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_next_pc 
                                              >> 0x2bU))))) {
        ++(vlSymsp->__Vcoverage[5694]);
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_next_pc 
            = ((0xfffff7ffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_next_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_next_pc 
                                                 >> 0x2bU))))) 
                  << 0x2bU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_next_pc 
                        >> 0x2cU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_next_pc 
                                              >> 0x2cU))))) {
        ++(vlSymsp->__Vcoverage[5695]);
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_next_pc 
            = ((0xffffefffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_next_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_next_pc 
                                                 >> 0x2cU))))) 
                  << 0x2cU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_next_pc 
                        >> 0x2dU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_next_pc 
                                              >> 0x2dU))))) {
        ++(vlSymsp->__Vcoverage[5696]);
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_next_pc 
            = ((0xffffdfffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_next_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_next_pc 
                                                 >> 0x2dU))))) 
                  << 0x2dU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_next_pc 
                        >> 0x2eU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_next_pc 
                                              >> 0x2eU))))) {
        ++(vlSymsp->__Vcoverage[5697]);
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_next_pc 
            = ((0xffffbfffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_next_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_next_pc 
                                                 >> 0x2eU))))) 
                  << 0x2eU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_next_pc 
                        >> 0x2fU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_next_pc 
                                              >> 0x2fU))))) {
        ++(vlSymsp->__Vcoverage[5698]);
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_next_pc 
            = ((0xffff7fffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_next_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_next_pc 
                                                 >> 0x2fU))))) 
                  << 0x2fU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_next_pc 
                        >> 0x30U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_next_pc 
                                              >> 0x30U))))) {
        ++(vlSymsp->__Vcoverage[5699]);
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_next_pc 
            = ((0xfffeffffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_next_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_next_pc 
                                                 >> 0x30U))))) 
                  << 0x30U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_next_pc 
                        >> 0x31U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_next_pc 
                                              >> 0x31U))))) {
        ++(vlSymsp->__Vcoverage[5700]);
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_next_pc 
            = ((0xfffdffffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_next_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_next_pc 
                                                 >> 0x31U))))) 
                  << 0x31U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_next_pc 
                        >> 0x32U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_next_pc 
                                              >> 0x32U))))) {
        ++(vlSymsp->__Vcoverage[5701]);
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_next_pc 
            = ((0xfffbffffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_next_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_next_pc 
                                                 >> 0x32U))))) 
                  << 0x32U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_next_pc 
                        >> 0x33U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_next_pc 
                                              >> 0x33U))))) {
        ++(vlSymsp->__Vcoverage[5702]);
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_next_pc 
            = ((0xfff7ffffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_next_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_next_pc 
                                                 >> 0x33U))))) 
                  << 0x33U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_next_pc 
                        >> 0x34U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_next_pc 
                                              >> 0x34U))))) {
        ++(vlSymsp->__Vcoverage[5703]);
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_next_pc 
            = ((0xffefffffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_next_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_next_pc 
                                                 >> 0x34U))))) 
                  << 0x34U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_next_pc 
                        >> 0x35U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_next_pc 
                                              >> 0x35U))))) {
        ++(vlSymsp->__Vcoverage[5704]);
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_next_pc 
            = ((0xffdfffffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_next_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_next_pc 
                                                 >> 0x35U))))) 
                  << 0x35U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_next_pc 
                        >> 0x36U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_next_pc 
                                              >> 0x36U))))) {
        ++(vlSymsp->__Vcoverage[5705]);
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_next_pc 
            = ((0xffbfffffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_next_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_next_pc 
                                                 >> 0x36U))))) 
                  << 0x36U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_next_pc 
                        >> 0x37U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_next_pc 
                                              >> 0x37U))))) {
        ++(vlSymsp->__Vcoverage[5706]);
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_next_pc 
            = ((0xff7fffffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_next_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_next_pc 
                                                 >> 0x37U))))) 
                  << 0x37U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_next_pc 
                        >> 0x38U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_next_pc 
                                              >> 0x38U))))) {
        ++(vlSymsp->__Vcoverage[5707]);
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_next_pc 
            = ((0xfeffffffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_next_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_next_pc 
                                                 >> 0x38U))))) 
                  << 0x38U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_next_pc 
                        >> 0x39U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_next_pc 
                                              >> 0x39U))))) {
        ++(vlSymsp->__Vcoverage[5708]);
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_next_pc 
            = ((0xfdffffffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_next_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_next_pc 
                                                 >> 0x39U))))) 
                  << 0x39U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_next_pc 
                        >> 0x3aU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_next_pc 
                                              >> 0x3aU))))) {
        ++(vlSymsp->__Vcoverage[5709]);
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_next_pc 
            = ((0xfbffffffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_next_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_next_pc 
                                                 >> 0x3aU))))) 
                  << 0x3aU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_next_pc 
                        >> 0x3bU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_next_pc 
                                              >> 0x3bU))))) {
        ++(vlSymsp->__Vcoverage[5710]);
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_next_pc 
            = ((0xf7ffffffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_next_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_next_pc 
                                                 >> 0x3bU))))) 
                  << 0x3bU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_next_pc 
                        >> 0x3cU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_next_pc 
                                              >> 0x3cU))))) {
        ++(vlSymsp->__Vcoverage[5711]);
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_next_pc 
            = ((0xefffffffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_next_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_next_pc 
                                                 >> 0x3cU))))) 
                  << 0x3cU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_next_pc 
                        >> 0x3dU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_next_pc 
                                              >> 0x3dU))))) {
        ++(vlSymsp->__Vcoverage[5712]);
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_next_pc 
            = ((0xdfffffffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_next_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_next_pc 
                                                 >> 0x3dU))))) 
                  << 0x3dU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_next_pc 
                        >> 0x3eU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_next_pc 
                                              >> 0x3eU))))) {
        ++(vlSymsp->__Vcoverage[5713]);
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_next_pc 
            = ((0xbfffffffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_next_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_next_pc 
                                                 >> 0x3eU))))) 
                  << 0x3eU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_next_pc 
                        >> 0x3fU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_next_pc 
                                              >> 0x3fU))))) {
        ++(vlSymsp->__Vcoverage[5714]);
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_next_pc 
            = ((0x7fffffffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_next_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_next_pc 
                                                 >> 0x3fU))))) 
                  << 0x3fU));
    }
    if ((1U & (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_inst 
               ^ vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_inst))) {
        ++(vlSymsp->__Vcoverage[5554]);
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_inst 
            = ((0xfffffffeU & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_inst) 
               | (1U & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_inst));
    }
    if ((2U & (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_inst 
               ^ vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_inst))) {
        ++(vlSymsp->__Vcoverage[5555]);
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_inst 
            = ((0xfffffffdU & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_inst) 
               | (2U & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_inst));
    }
    if ((4U & (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_inst 
               ^ vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_inst))) {
        ++(vlSymsp->__Vcoverage[5556]);
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_inst 
            = ((0xfffffffbU & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_inst) 
               | (4U & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_inst));
    }
    if ((8U & (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_inst 
               ^ vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_inst))) {
        ++(vlSymsp->__Vcoverage[5557]);
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_inst 
            = ((0xfffffff7U & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_inst) 
               | (8U & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_inst));
    }
    if ((0x10U & (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_inst 
                  ^ vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_inst))) {
        ++(vlSymsp->__Vcoverage[5558]);
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_inst 
            = ((0xffffffefU & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_inst) 
               | (0x10U & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_inst));
    }
    if ((0x20U & (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_inst 
                  ^ vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_inst))) {
        ++(vlSymsp->__Vcoverage[5559]);
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_inst 
            = ((0xffffffdfU & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_inst) 
               | (0x20U & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_inst));
    }
    if ((0x40U & (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_inst 
                  ^ vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_inst))) {
        ++(vlSymsp->__Vcoverage[5560]);
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_inst 
            = ((0xffffffbfU & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_inst) 
               | (0x40U & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_inst));
    }
    if ((0x80U & (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_inst 
                  ^ vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_inst))) {
        ++(vlSymsp->__Vcoverage[5561]);
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_inst 
            = ((0xffffff7fU & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_inst) 
               | (0x80U & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_inst));
    }
    if ((0x100U & (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_inst 
                   ^ vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_inst))) {
        ++(vlSymsp->__Vcoverage[5562]);
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_inst 
            = ((0xfffffeffU & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_inst) 
               | (0x100U & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_inst));
    }
    if ((0x200U & (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_inst 
                   ^ vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_inst))) {
        ++(vlSymsp->__Vcoverage[5563]);
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_inst 
            = ((0xfffffdffU & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_inst) 
               | (0x200U & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_inst));
    }
    if ((0x400U & (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_inst 
                   ^ vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_inst))) {
        ++(vlSymsp->__Vcoverage[5564]);
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_inst 
            = ((0xfffffbffU & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_inst) 
               | (0x400U & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_inst));
    }
    if ((0x800U & (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_inst 
                   ^ vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_inst))) {
        ++(vlSymsp->__Vcoverage[5565]);
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_inst 
            = ((0xfffff7ffU & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_inst) 
               | (0x800U & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_inst));
    }
    if ((0x1000U & (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_inst 
                    ^ vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_inst))) {
        ++(vlSymsp->__Vcoverage[5566]);
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_inst 
            = ((0xffffefffU & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_inst) 
               | (0x1000U & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_inst));
    }
    if ((0x2000U & (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_inst 
                    ^ vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_inst))) {
        ++(vlSymsp->__Vcoverage[5567]);
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_inst 
            = ((0xffffdfffU & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_inst) 
               | (0x2000U & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_inst));
    }
    if ((0x4000U & (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_inst 
                    ^ vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_inst))) {
        ++(vlSymsp->__Vcoverage[5568]);
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_inst 
            = ((0xffffbfffU & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_inst) 
               | (0x4000U & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_inst));
    }
    if ((0x8000U & (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_inst 
                    ^ vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_inst))) {
        ++(vlSymsp->__Vcoverage[5569]);
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_inst 
            = ((0xffff7fffU & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_inst) 
               | (0x8000U & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_inst));
    }
    if ((0x10000U & (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_inst 
                     ^ vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_inst))) {
        ++(vlSymsp->__Vcoverage[5570]);
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_inst 
            = ((0xfffeffffU & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_inst) 
               | (0x10000U & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_inst));
    }
    if ((0x20000U & (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_inst 
                     ^ vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_inst))) {
        ++(vlSymsp->__Vcoverage[5571]);
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_inst 
            = ((0xfffdffffU & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_inst) 
               | (0x20000U & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_inst));
    }
    if ((0x40000U & (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_inst 
                     ^ vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_inst))) {
        ++(vlSymsp->__Vcoverage[5572]);
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_inst 
            = ((0xfffbffffU & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_inst) 
               | (0x40000U & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_inst));
    }
    if ((0x80000U & (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_inst 
                     ^ vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_inst))) {
        ++(vlSymsp->__Vcoverage[5573]);
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_inst 
            = ((0xfff7ffffU & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_inst) 
               | (0x80000U & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_inst));
    }
    if ((0x100000U & (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_inst 
                      ^ vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_inst))) {
        ++(vlSymsp->__Vcoverage[5574]);
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_inst 
            = ((0xffefffffU & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_inst) 
               | (0x100000U & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_inst));
    }
    if ((0x200000U & (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_inst 
                      ^ vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_inst))) {
        ++(vlSymsp->__Vcoverage[5575]);
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_inst 
            = ((0xffdfffffU & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_inst) 
               | (0x200000U & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_inst));
    }
    if ((0x400000U & (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_inst 
                      ^ vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_inst))) {
        ++(vlSymsp->__Vcoverage[5576]);
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_inst 
            = ((0xffbfffffU & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_inst) 
               | (0x400000U & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_inst));
    }
    if ((0x800000U & (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_inst 
                      ^ vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_inst))) {
        ++(vlSymsp->__Vcoverage[5577]);
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_inst 
            = ((0xff7fffffU & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_inst) 
               | (0x800000U & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_inst));
    }
    if ((0x1000000U & (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_inst 
                       ^ vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_inst))) {
        ++(vlSymsp->__Vcoverage[5578]);
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_inst 
            = ((0xfeffffffU & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_inst) 
               | (0x1000000U & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_inst));
    }
    if ((0x2000000U & (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_inst 
                       ^ vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_inst))) {
        ++(vlSymsp->__Vcoverage[5579]);
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_inst 
            = ((0xfdffffffU & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_inst) 
               | (0x2000000U & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_inst));
    }
    if ((0x4000000U & (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_inst 
                       ^ vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_inst))) {
        ++(vlSymsp->__Vcoverage[5580]);
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_inst 
            = ((0xfbffffffU & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_inst) 
               | (0x4000000U & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_inst));
    }
    if ((0x8000000U & (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_inst 
                       ^ vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_inst))) {
        ++(vlSymsp->__Vcoverage[5581]);
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_inst 
            = ((0xf7ffffffU & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_inst) 
               | (0x8000000U & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_inst));
    }
    if ((0x10000000U & (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_inst 
                        ^ vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_inst))) {
        ++(vlSymsp->__Vcoverage[5582]);
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_inst 
            = ((0xefffffffU & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_inst) 
               | (0x10000000U & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_inst));
    }
    if ((0x20000000U & (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_inst 
                        ^ vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_inst))) {
        ++(vlSymsp->__Vcoverage[5583]);
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_inst 
            = ((0xdfffffffU & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_inst) 
               | (0x20000000U & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_inst));
    }
    if ((0x40000000U & (vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_inst 
                        ^ vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_inst))) {
        ++(vlSymsp->__Vcoverage[5584]);
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_inst 
            = ((0xbfffffffU & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_inst) 
               | (0x40000000U & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_inst));
    }
    if (((vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_inst 
          ^ vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_inst) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[5585]);
        vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_inst 
            = ((0x7fffffffU & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT____Vtogcov__reg_inst) 
               | (0x80000000U & vlSelf->riscv_soc__DOT__core__DOT__fetch__DOT__reg_inst));
    }
    if ((1U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_imm) 
               ^ (IData)(vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_imm_data)))) {
        ++(vlSymsp->__Vcoverage[5001]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_imm_data 
            = ((0xfffffffffffffffeULL & vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_imm_data) 
               | (IData)((IData)((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_imm)))));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_imm 
                        >> 1U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_imm_data 
                                           >> 1U))))) {
        ++(vlSymsp->__Vcoverage[5002]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_imm_data 
            = ((0xfffffffffffffffdULL & vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_imm_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_imm 
                                                 >> 1U))))) 
                  << 1U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_imm 
                        >> 2U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_imm_data 
                                           >> 2U))))) {
        ++(vlSymsp->__Vcoverage[5003]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_imm_data 
            = ((0xfffffffffffffffbULL & vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_imm_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_imm 
                                                 >> 2U))))) 
                  << 2U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_imm 
                        >> 3U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_imm_data 
                                           >> 3U))))) {
        ++(vlSymsp->__Vcoverage[5004]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_imm_data 
            = ((0xfffffffffffffff7ULL & vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_imm_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_imm 
                                                 >> 3U))))) 
                  << 3U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_imm 
                        >> 4U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_imm_data 
                                           >> 4U))))) {
        ++(vlSymsp->__Vcoverage[5005]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_imm_data 
            = ((0xffffffffffffffefULL & vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_imm_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_imm 
                                                 >> 4U))))) 
                  << 4U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_imm 
                        >> 5U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_imm_data 
                                           >> 5U))))) {
        ++(vlSymsp->__Vcoverage[5006]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_imm_data 
            = ((0xffffffffffffffdfULL & vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_imm_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_imm 
                                                 >> 5U))))) 
                  << 5U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_imm 
                        >> 6U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_imm_data 
                                           >> 6U))))) {
        ++(vlSymsp->__Vcoverage[5007]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_imm_data 
            = ((0xffffffffffffffbfULL & vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_imm_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_imm 
                                                 >> 6U))))) 
                  << 6U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_imm 
                        >> 7U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_imm_data 
                                           >> 7U))))) {
        ++(vlSymsp->__Vcoverage[5008]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_imm_data 
            = ((0xffffffffffffff7fULL & vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_imm_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_imm 
                                                 >> 7U))))) 
                  << 7U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_imm 
                        >> 8U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_imm_data 
                                           >> 8U))))) {
        ++(vlSymsp->__Vcoverage[5009]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_imm_data 
            = ((0xfffffffffffffeffULL & vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_imm_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_imm 
                                                 >> 8U))))) 
                  << 8U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_imm 
                        >> 9U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_imm_data 
                                           >> 9U))))) {
        ++(vlSymsp->__Vcoverage[5010]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_imm_data 
            = ((0xfffffffffffffdffULL & vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_imm_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_imm 
                                                 >> 9U))))) 
                  << 9U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_imm 
                        >> 0xaU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_imm_data 
                                             >> 0xaU))))) {
        ++(vlSymsp->__Vcoverage[5011]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_imm_data 
            = ((0xfffffffffffffbffULL & vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_imm_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_imm 
                                                 >> 0xaU))))) 
                  << 0xaU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_imm 
                        >> 0xbU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_imm_data 
                                             >> 0xbU))))) {
        ++(vlSymsp->__Vcoverage[5012]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_imm_data 
            = ((0xfffffffffffff7ffULL & vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_imm_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_imm 
                                                 >> 0xbU))))) 
                  << 0xbU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_imm 
                        >> 0xcU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_imm_data 
                                             >> 0xcU))))) {
        ++(vlSymsp->__Vcoverage[5013]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_imm_data 
            = ((0xffffffffffffefffULL & vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_imm_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_imm 
                                                 >> 0xcU))))) 
                  << 0xcU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_imm 
                        >> 0xdU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_imm_data 
                                             >> 0xdU))))) {
        ++(vlSymsp->__Vcoverage[5014]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_imm_data 
            = ((0xffffffffffffdfffULL & vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_imm_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_imm 
                                                 >> 0xdU))))) 
                  << 0xdU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_imm 
                        >> 0xeU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_imm_data 
                                             >> 0xeU))))) {
        ++(vlSymsp->__Vcoverage[5015]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_imm_data 
            = ((0xffffffffffffbfffULL & vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_imm_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_imm 
                                                 >> 0xeU))))) 
                  << 0xeU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_imm 
                        >> 0xfU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_imm_data 
                                             >> 0xfU))))) {
        ++(vlSymsp->__Vcoverage[5016]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_imm_data 
            = ((0xffffffffffff7fffULL & vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_imm_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_imm 
                                                 >> 0xfU))))) 
                  << 0xfU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_imm 
                        >> 0x10U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_imm_data 
                                              >> 0x10U))))) {
        ++(vlSymsp->__Vcoverage[5017]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_imm_data 
            = ((0xfffffffffffeffffULL & vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_imm_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_imm 
                                                 >> 0x10U))))) 
                  << 0x10U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_imm 
                        >> 0x11U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_imm_data 
                                              >> 0x11U))))) {
        ++(vlSymsp->__Vcoverage[5018]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_imm_data 
            = ((0xfffffffffffdffffULL & vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_imm_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_imm 
                                                 >> 0x11U))))) 
                  << 0x11U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_imm 
                        >> 0x12U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_imm_data 
                                              >> 0x12U))))) {
        ++(vlSymsp->__Vcoverage[5019]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_imm_data 
            = ((0xfffffffffffbffffULL & vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_imm_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_imm 
                                                 >> 0x12U))))) 
                  << 0x12U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_imm 
                        >> 0x13U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_imm_data 
                                              >> 0x13U))))) {
        ++(vlSymsp->__Vcoverage[5020]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_imm_data 
            = ((0xfffffffffff7ffffULL & vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_imm_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_imm 
                                                 >> 0x13U))))) 
                  << 0x13U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_imm 
                        >> 0x14U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_imm_data 
                                              >> 0x14U))))) {
        ++(vlSymsp->__Vcoverage[5021]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_imm_data 
            = ((0xffffffffffefffffULL & vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_imm_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_imm 
                                                 >> 0x14U))))) 
                  << 0x14U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_imm 
                        >> 0x15U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_imm_data 
                                              >> 0x15U))))) {
        ++(vlSymsp->__Vcoverage[5022]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_imm_data 
            = ((0xffffffffffdfffffULL & vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_imm_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_imm 
                                                 >> 0x15U))))) 
                  << 0x15U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_imm 
                        >> 0x16U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_imm_data 
                                              >> 0x16U))))) {
        ++(vlSymsp->__Vcoverage[5023]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_imm_data 
            = ((0xffffffffffbfffffULL & vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_imm_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_imm 
                                                 >> 0x16U))))) 
                  << 0x16U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_imm 
                        >> 0x17U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_imm_data 
                                              >> 0x17U))))) {
        ++(vlSymsp->__Vcoverage[5024]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_imm_data 
            = ((0xffffffffff7fffffULL & vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_imm_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_imm 
                                                 >> 0x17U))))) 
                  << 0x17U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_imm 
                        >> 0x18U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_imm_data 
                                              >> 0x18U))))) {
        ++(vlSymsp->__Vcoverage[5025]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_imm_data 
            = ((0xfffffffffeffffffULL & vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_imm_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_imm 
                                                 >> 0x18U))))) 
                  << 0x18U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_imm 
                        >> 0x19U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_imm_data 
                                              >> 0x19U))))) {
        ++(vlSymsp->__Vcoverage[5026]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_imm_data 
            = ((0xfffffffffdffffffULL & vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_imm_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_imm 
                                                 >> 0x19U))))) 
                  << 0x19U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_imm 
                        >> 0x1aU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_imm_data 
                                              >> 0x1aU))))) {
        ++(vlSymsp->__Vcoverage[5027]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_imm_data 
            = ((0xfffffffffbffffffULL & vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_imm_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_imm 
                                                 >> 0x1aU))))) 
                  << 0x1aU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_imm 
                        >> 0x1bU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_imm_data 
                                              >> 0x1bU))))) {
        ++(vlSymsp->__Vcoverage[5028]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_imm_data 
            = ((0xfffffffff7ffffffULL & vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_imm_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_imm 
                                                 >> 0x1bU))))) 
                  << 0x1bU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_imm 
                        >> 0x1cU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_imm_data 
                                              >> 0x1cU))))) {
        ++(vlSymsp->__Vcoverage[5029]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_imm_data 
            = ((0xffffffffefffffffULL & vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_imm_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_imm 
                                                 >> 0x1cU))))) 
                  << 0x1cU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_imm 
                        >> 0x1dU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_imm_data 
                                              >> 0x1dU))))) {
        ++(vlSymsp->__Vcoverage[5030]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_imm_data 
            = ((0xffffffffdfffffffULL & vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_imm_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_imm 
                                                 >> 0x1dU))))) 
                  << 0x1dU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_imm 
                        >> 0x1eU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_imm_data 
                                              >> 0x1eU))))) {
        ++(vlSymsp->__Vcoverage[5031]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_imm_data 
            = ((0xffffffffbfffffffULL & vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_imm_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_imm 
                                                 >> 0x1eU))))) 
                  << 0x1eU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_imm 
                        >> 0x1fU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_imm_data 
                                              >> 0x1fU))))) {
        ++(vlSymsp->__Vcoverage[5032]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_imm_data 
            = ((0xffffffff7fffffffULL & vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_imm_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_imm 
                                                 >> 0x1fU))))) 
                  << 0x1fU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_imm 
                        >> 0x20U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_imm_data 
                                              >> 0x20U))))) {
        ++(vlSymsp->__Vcoverage[5033]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_imm_data 
            = ((0xfffffffeffffffffULL & vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_imm_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_imm 
                                                 >> 0x20U))))) 
                  << 0x20U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_imm 
                        >> 0x21U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_imm_data 
                                              >> 0x21U))))) {
        ++(vlSymsp->__Vcoverage[5034]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_imm_data 
            = ((0xfffffffdffffffffULL & vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_imm_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_imm 
                                                 >> 0x21U))))) 
                  << 0x21U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_imm 
                        >> 0x22U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_imm_data 
                                              >> 0x22U))))) {
        ++(vlSymsp->__Vcoverage[5035]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_imm_data 
            = ((0xfffffffbffffffffULL & vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_imm_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_imm 
                                                 >> 0x22U))))) 
                  << 0x22U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_imm 
                        >> 0x23U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_imm_data 
                                              >> 0x23U))))) {
        ++(vlSymsp->__Vcoverage[5036]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_imm_data 
            = ((0xfffffff7ffffffffULL & vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_imm_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_imm 
                                                 >> 0x23U))))) 
                  << 0x23U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_imm 
                        >> 0x24U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_imm_data 
                                              >> 0x24U))))) {
        ++(vlSymsp->__Vcoverage[5037]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_imm_data 
            = ((0xffffffefffffffffULL & vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_imm_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_imm 
                                                 >> 0x24U))))) 
                  << 0x24U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_imm 
                        >> 0x25U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_imm_data 
                                              >> 0x25U))))) {
        ++(vlSymsp->__Vcoverage[5038]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_imm_data 
            = ((0xffffffdfffffffffULL & vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_imm_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_imm 
                                                 >> 0x25U))))) 
                  << 0x25U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_imm 
                        >> 0x26U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_imm_data 
                                              >> 0x26U))))) {
        ++(vlSymsp->__Vcoverage[5039]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_imm_data 
            = ((0xffffffbfffffffffULL & vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_imm_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_imm 
                                                 >> 0x26U))))) 
                  << 0x26U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_imm 
                        >> 0x27U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_imm_data 
                                              >> 0x27U))))) {
        ++(vlSymsp->__Vcoverage[5040]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_imm_data 
            = ((0xffffff7fffffffffULL & vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_imm_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_imm 
                                                 >> 0x27U))))) 
                  << 0x27U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_imm 
                        >> 0x28U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_imm_data 
                                              >> 0x28U))))) {
        ++(vlSymsp->__Vcoverage[5041]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_imm_data 
            = ((0xfffffeffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_imm_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_imm 
                                                 >> 0x28U))))) 
                  << 0x28U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_imm 
                        >> 0x29U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_imm_data 
                                              >> 0x29U))))) {
        ++(vlSymsp->__Vcoverage[5042]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_imm_data 
            = ((0xfffffdffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_imm_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_imm 
                                                 >> 0x29U))))) 
                  << 0x29U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_imm 
                        >> 0x2aU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_imm_data 
                                              >> 0x2aU))))) {
        ++(vlSymsp->__Vcoverage[5043]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_imm_data 
            = ((0xfffffbffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_imm_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_imm 
                                                 >> 0x2aU))))) 
                  << 0x2aU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_imm 
                        >> 0x2bU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_imm_data 
                                              >> 0x2bU))))) {
        ++(vlSymsp->__Vcoverage[5044]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_imm_data 
            = ((0xfffff7ffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_imm_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_imm 
                                                 >> 0x2bU))))) 
                  << 0x2bU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_imm 
                        >> 0x2cU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_imm_data 
                                              >> 0x2cU))))) {
        ++(vlSymsp->__Vcoverage[5045]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_imm_data 
            = ((0xffffefffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_imm_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_imm 
                                                 >> 0x2cU))))) 
                  << 0x2cU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_imm 
                        >> 0x2dU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_imm_data 
                                              >> 0x2dU))))) {
        ++(vlSymsp->__Vcoverage[5046]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_imm_data 
            = ((0xffffdfffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_imm_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_imm 
                                                 >> 0x2dU))))) 
                  << 0x2dU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_imm 
                        >> 0x2eU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_imm_data 
                                              >> 0x2eU))))) {
        ++(vlSymsp->__Vcoverage[5047]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_imm_data 
            = ((0xffffbfffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_imm_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_imm 
                                                 >> 0x2eU))))) 
                  << 0x2eU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_imm 
                        >> 0x2fU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_imm_data 
                                              >> 0x2fU))))) {
        ++(vlSymsp->__Vcoverage[5048]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_imm_data 
            = ((0xffff7fffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_imm_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_imm 
                                                 >> 0x2fU))))) 
                  << 0x2fU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_imm 
                        >> 0x30U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_imm_data 
                                              >> 0x30U))))) {
        ++(vlSymsp->__Vcoverage[5049]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_imm_data 
            = ((0xfffeffffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_imm_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_imm 
                                                 >> 0x30U))))) 
                  << 0x30U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_imm 
                        >> 0x31U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_imm_data 
                                              >> 0x31U))))) {
        ++(vlSymsp->__Vcoverage[5050]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_imm_data 
            = ((0xfffdffffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_imm_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_imm 
                                                 >> 0x31U))))) 
                  << 0x31U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_imm 
                        >> 0x32U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_imm_data 
                                              >> 0x32U))))) {
        ++(vlSymsp->__Vcoverage[5051]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_imm_data 
            = ((0xfffbffffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_imm_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_imm 
                                                 >> 0x32U))))) 
                  << 0x32U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_imm 
                        >> 0x33U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_imm_data 
                                              >> 0x33U))))) {
        ++(vlSymsp->__Vcoverage[5052]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_imm_data 
            = ((0xfff7ffffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_imm_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_imm 
                                                 >> 0x33U))))) 
                  << 0x33U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_imm 
                        >> 0x34U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_imm_data 
                                              >> 0x34U))))) {
        ++(vlSymsp->__Vcoverage[5053]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_imm_data 
            = ((0xffefffffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_imm_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_imm 
                                                 >> 0x34U))))) 
                  << 0x34U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_imm 
                        >> 0x35U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_imm_data 
                                              >> 0x35U))))) {
        ++(vlSymsp->__Vcoverage[5054]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_imm_data 
            = ((0xffdfffffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_imm_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_imm 
                                                 >> 0x35U))))) 
                  << 0x35U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_imm 
                        >> 0x36U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_imm_data 
                                              >> 0x36U))))) {
        ++(vlSymsp->__Vcoverage[5055]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_imm_data 
            = ((0xffbfffffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_imm_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_imm 
                                                 >> 0x36U))))) 
                  << 0x36U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_imm 
                        >> 0x37U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_imm_data 
                                              >> 0x37U))))) {
        ++(vlSymsp->__Vcoverage[5056]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_imm_data 
            = ((0xff7fffffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_imm_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_imm 
                                                 >> 0x37U))))) 
                  << 0x37U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_imm 
                        >> 0x38U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_imm_data 
                                              >> 0x38U))))) {
        ++(vlSymsp->__Vcoverage[5057]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_imm_data 
            = ((0xfeffffffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_imm_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_imm 
                                                 >> 0x38U))))) 
                  << 0x38U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_imm 
                        >> 0x39U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_imm_data 
                                              >> 0x39U))))) {
        ++(vlSymsp->__Vcoverage[5058]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_imm_data 
            = ((0xfdffffffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_imm_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_imm 
                                                 >> 0x39U))))) 
                  << 0x39U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_imm 
                        >> 0x3aU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_imm_data 
                                              >> 0x3aU))))) {
        ++(vlSymsp->__Vcoverage[5059]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_imm_data 
            = ((0xfbffffffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_imm_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_imm 
                                                 >> 0x3aU))))) 
                  << 0x3aU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_imm 
                        >> 0x3bU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_imm_data 
                                              >> 0x3bU))))) {
        ++(vlSymsp->__Vcoverage[5060]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_imm_data 
            = ((0xf7ffffffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_imm_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_imm 
                                                 >> 0x3bU))))) 
                  << 0x3bU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_imm 
                        >> 0x3cU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_imm_data 
                                              >> 0x3cU))))) {
        ++(vlSymsp->__Vcoverage[5061]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_imm_data 
            = ((0xefffffffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_imm_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_imm 
                                                 >> 0x3cU))))) 
                  << 0x3cU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_imm 
                        >> 0x3dU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_imm_data 
                                              >> 0x3dU))))) {
        ++(vlSymsp->__Vcoverage[5062]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_imm_data 
            = ((0xdfffffffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_imm_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_imm 
                                                 >> 0x3dU))))) 
                  << 0x3dU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_imm 
                        >> 0x3eU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_imm_data 
                                              >> 0x3eU))))) {
        ++(vlSymsp->__Vcoverage[5063]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_imm_data 
            = ((0xbfffffffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_imm_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_imm 
                                                 >> 0x3eU))))) 
                  << 0x3eU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_imm 
                        >> 0x3fU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_imm_data 
                                              >> 0x3fU))))) {
        ++(vlSymsp->__Vcoverage[5064]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_imm_data 
            = ((0x7fffffffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_imm_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_imm 
                                                 >> 0x3fU))))) 
                  << 0x3fU));
    }
    if ((1U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_next_pc) 
               ^ (IData)(vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__fetch_io_in_next_pc)))) {
        ++(vlSymsp->__Vcoverage[4693]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__fetch_io_in_next_pc 
            = ((0xfffffffffffffffeULL & vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__fetch_io_in_next_pc) 
               | (IData)((IData)((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_next_pc)))));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_next_pc 
                        >> 1U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__fetch_io_in_next_pc 
                                           >> 1U))))) {
        ++(vlSymsp->__Vcoverage[4694]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__fetch_io_in_next_pc 
            = ((0xfffffffffffffffdULL & vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__fetch_io_in_next_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_next_pc 
                                                 >> 1U))))) 
                  << 1U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_next_pc 
                        >> 2U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__fetch_io_in_next_pc 
                                           >> 2U))))) {
        ++(vlSymsp->__Vcoverage[4695]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__fetch_io_in_next_pc 
            = ((0xfffffffffffffffbULL & vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__fetch_io_in_next_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_next_pc 
                                                 >> 2U))))) 
                  << 2U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_next_pc 
                        >> 3U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__fetch_io_in_next_pc 
                                           >> 3U))))) {
        ++(vlSymsp->__Vcoverage[4696]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__fetch_io_in_next_pc 
            = ((0xfffffffffffffff7ULL & vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__fetch_io_in_next_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_next_pc 
                                                 >> 3U))))) 
                  << 3U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_next_pc 
                        >> 4U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__fetch_io_in_next_pc 
                                           >> 4U))))) {
        ++(vlSymsp->__Vcoverage[4697]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__fetch_io_in_next_pc 
            = ((0xffffffffffffffefULL & vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__fetch_io_in_next_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_next_pc 
                                                 >> 4U))))) 
                  << 4U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_next_pc 
                        >> 5U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__fetch_io_in_next_pc 
                                           >> 5U))))) {
        ++(vlSymsp->__Vcoverage[4698]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__fetch_io_in_next_pc 
            = ((0xffffffffffffffdfULL & vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__fetch_io_in_next_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_next_pc 
                                                 >> 5U))))) 
                  << 5U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_next_pc 
                        >> 6U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__fetch_io_in_next_pc 
                                           >> 6U))))) {
        ++(vlSymsp->__Vcoverage[4699]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__fetch_io_in_next_pc 
            = ((0xffffffffffffffbfULL & vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__fetch_io_in_next_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_next_pc 
                                                 >> 6U))))) 
                  << 6U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_next_pc 
                        >> 7U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__fetch_io_in_next_pc 
                                           >> 7U))))) {
        ++(vlSymsp->__Vcoverage[4700]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__fetch_io_in_next_pc 
            = ((0xffffffffffffff7fULL & vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__fetch_io_in_next_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_next_pc 
                                                 >> 7U))))) 
                  << 7U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_next_pc 
                        >> 8U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__fetch_io_in_next_pc 
                                           >> 8U))))) {
        ++(vlSymsp->__Vcoverage[4701]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__fetch_io_in_next_pc 
            = ((0xfffffffffffffeffULL & vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__fetch_io_in_next_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_next_pc 
                                                 >> 8U))))) 
                  << 8U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_next_pc 
                        >> 9U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__fetch_io_in_next_pc 
                                           >> 9U))))) {
        ++(vlSymsp->__Vcoverage[4702]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__fetch_io_in_next_pc 
            = ((0xfffffffffffffdffULL & vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__fetch_io_in_next_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_next_pc 
                                                 >> 9U))))) 
                  << 9U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_next_pc 
                        >> 0xaU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__fetch_io_in_next_pc 
                                             >> 0xaU))))) {
        ++(vlSymsp->__Vcoverage[4703]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__fetch_io_in_next_pc 
            = ((0xfffffffffffffbffULL & vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__fetch_io_in_next_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_next_pc 
                                                 >> 0xaU))))) 
                  << 0xaU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_next_pc 
                        >> 0xbU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__fetch_io_in_next_pc 
                                             >> 0xbU))))) {
        ++(vlSymsp->__Vcoverage[4704]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__fetch_io_in_next_pc 
            = ((0xfffffffffffff7ffULL & vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__fetch_io_in_next_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_next_pc 
                                                 >> 0xbU))))) 
                  << 0xbU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_next_pc 
                        >> 0xcU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__fetch_io_in_next_pc 
                                             >> 0xcU))))) {
        ++(vlSymsp->__Vcoverage[4705]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__fetch_io_in_next_pc 
            = ((0xffffffffffffefffULL & vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__fetch_io_in_next_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_next_pc 
                                                 >> 0xcU))))) 
                  << 0xcU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_next_pc 
                        >> 0xdU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__fetch_io_in_next_pc 
                                             >> 0xdU))))) {
        ++(vlSymsp->__Vcoverage[4706]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__fetch_io_in_next_pc 
            = ((0xffffffffffffdfffULL & vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__fetch_io_in_next_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_next_pc 
                                                 >> 0xdU))))) 
                  << 0xdU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_next_pc 
                        >> 0xeU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__fetch_io_in_next_pc 
                                             >> 0xeU))))) {
        ++(vlSymsp->__Vcoverage[4707]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__fetch_io_in_next_pc 
            = ((0xffffffffffffbfffULL & vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__fetch_io_in_next_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_next_pc 
                                                 >> 0xeU))))) 
                  << 0xeU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_next_pc 
                        >> 0xfU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__fetch_io_in_next_pc 
                                             >> 0xfU))))) {
        ++(vlSymsp->__Vcoverage[4708]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__fetch_io_in_next_pc 
            = ((0xffffffffffff7fffULL & vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__fetch_io_in_next_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_next_pc 
                                                 >> 0xfU))))) 
                  << 0xfU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_next_pc 
                        >> 0x10U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__fetch_io_in_next_pc 
                                              >> 0x10U))))) {
        ++(vlSymsp->__Vcoverage[4709]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__fetch_io_in_next_pc 
            = ((0xfffffffffffeffffULL & vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__fetch_io_in_next_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_next_pc 
                                                 >> 0x10U))))) 
                  << 0x10U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_next_pc 
                        >> 0x11U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__fetch_io_in_next_pc 
                                              >> 0x11U))))) {
        ++(vlSymsp->__Vcoverage[4710]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__fetch_io_in_next_pc 
            = ((0xfffffffffffdffffULL & vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__fetch_io_in_next_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_next_pc 
                                                 >> 0x11U))))) 
                  << 0x11U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_next_pc 
                        >> 0x12U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__fetch_io_in_next_pc 
                                              >> 0x12U))))) {
        ++(vlSymsp->__Vcoverage[4711]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__fetch_io_in_next_pc 
            = ((0xfffffffffffbffffULL & vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__fetch_io_in_next_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_next_pc 
                                                 >> 0x12U))))) 
                  << 0x12U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_next_pc 
                        >> 0x13U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__fetch_io_in_next_pc 
                                              >> 0x13U))))) {
        ++(vlSymsp->__Vcoverage[4712]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__fetch_io_in_next_pc 
            = ((0xfffffffffff7ffffULL & vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__fetch_io_in_next_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_next_pc 
                                                 >> 0x13U))))) 
                  << 0x13U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_next_pc 
                        >> 0x14U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__fetch_io_in_next_pc 
                                              >> 0x14U))))) {
        ++(vlSymsp->__Vcoverage[4713]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__fetch_io_in_next_pc 
            = ((0xffffffffffefffffULL & vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__fetch_io_in_next_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_next_pc 
                                                 >> 0x14U))))) 
                  << 0x14U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_next_pc 
                        >> 0x15U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__fetch_io_in_next_pc 
                                              >> 0x15U))))) {
        ++(vlSymsp->__Vcoverage[4714]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__fetch_io_in_next_pc 
            = ((0xffffffffffdfffffULL & vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__fetch_io_in_next_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_next_pc 
                                                 >> 0x15U))))) 
                  << 0x15U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_next_pc 
                        >> 0x16U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__fetch_io_in_next_pc 
                                              >> 0x16U))))) {
        ++(vlSymsp->__Vcoverage[4715]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__fetch_io_in_next_pc 
            = ((0xffffffffffbfffffULL & vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__fetch_io_in_next_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_next_pc 
                                                 >> 0x16U))))) 
                  << 0x16U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_next_pc 
                        >> 0x17U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__fetch_io_in_next_pc 
                                              >> 0x17U))))) {
        ++(vlSymsp->__Vcoverage[4716]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__fetch_io_in_next_pc 
            = ((0xffffffffff7fffffULL & vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__fetch_io_in_next_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_next_pc 
                                                 >> 0x17U))))) 
                  << 0x17U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_next_pc 
                        >> 0x18U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__fetch_io_in_next_pc 
                                              >> 0x18U))))) {
        ++(vlSymsp->__Vcoverage[4717]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__fetch_io_in_next_pc 
            = ((0xfffffffffeffffffULL & vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__fetch_io_in_next_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_next_pc 
                                                 >> 0x18U))))) 
                  << 0x18U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_next_pc 
                        >> 0x19U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__fetch_io_in_next_pc 
                                              >> 0x19U))))) {
        ++(vlSymsp->__Vcoverage[4718]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__fetch_io_in_next_pc 
            = ((0xfffffffffdffffffULL & vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__fetch_io_in_next_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_next_pc 
                                                 >> 0x19U))))) 
                  << 0x19U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_next_pc 
                        >> 0x1aU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__fetch_io_in_next_pc 
                                              >> 0x1aU))))) {
        ++(vlSymsp->__Vcoverage[4719]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__fetch_io_in_next_pc 
            = ((0xfffffffffbffffffULL & vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__fetch_io_in_next_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_next_pc 
                                                 >> 0x1aU))))) 
                  << 0x1aU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_next_pc 
                        >> 0x1bU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__fetch_io_in_next_pc 
                                              >> 0x1bU))))) {
        ++(vlSymsp->__Vcoverage[4720]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__fetch_io_in_next_pc 
            = ((0xfffffffff7ffffffULL & vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__fetch_io_in_next_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_next_pc 
                                                 >> 0x1bU))))) 
                  << 0x1bU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_next_pc 
                        >> 0x1cU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__fetch_io_in_next_pc 
                                              >> 0x1cU))))) {
        ++(vlSymsp->__Vcoverage[4721]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__fetch_io_in_next_pc 
            = ((0xffffffffefffffffULL & vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__fetch_io_in_next_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_next_pc 
                                                 >> 0x1cU))))) 
                  << 0x1cU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_next_pc 
                        >> 0x1dU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__fetch_io_in_next_pc 
                                              >> 0x1dU))))) {
        ++(vlSymsp->__Vcoverage[4722]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__fetch_io_in_next_pc 
            = ((0xffffffffdfffffffULL & vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__fetch_io_in_next_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_next_pc 
                                                 >> 0x1dU))))) 
                  << 0x1dU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_next_pc 
                        >> 0x1eU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__fetch_io_in_next_pc 
                                              >> 0x1eU))))) {
        ++(vlSymsp->__Vcoverage[4723]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__fetch_io_in_next_pc 
            = ((0xffffffffbfffffffULL & vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__fetch_io_in_next_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_next_pc 
                                                 >> 0x1eU))))) 
                  << 0x1eU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_next_pc 
                        >> 0x1fU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__fetch_io_in_next_pc 
                                              >> 0x1fU))))) {
        ++(vlSymsp->__Vcoverage[4724]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__fetch_io_in_next_pc 
            = ((0xffffffff7fffffffULL & vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__fetch_io_in_next_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_next_pc 
                                                 >> 0x1fU))))) 
                  << 0x1fU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_next_pc 
                        >> 0x20U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__fetch_io_in_next_pc 
                                              >> 0x20U))))) {
        ++(vlSymsp->__Vcoverage[4725]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__fetch_io_in_next_pc 
            = ((0xfffffffeffffffffULL & vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__fetch_io_in_next_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_next_pc 
                                                 >> 0x20U))))) 
                  << 0x20U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_next_pc 
                        >> 0x21U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__fetch_io_in_next_pc 
                                              >> 0x21U))))) {
        ++(vlSymsp->__Vcoverage[4726]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__fetch_io_in_next_pc 
            = ((0xfffffffdffffffffULL & vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__fetch_io_in_next_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_next_pc 
                                                 >> 0x21U))))) 
                  << 0x21U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_next_pc 
                        >> 0x22U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__fetch_io_in_next_pc 
                                              >> 0x22U))))) {
        ++(vlSymsp->__Vcoverage[4727]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__fetch_io_in_next_pc 
            = ((0xfffffffbffffffffULL & vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__fetch_io_in_next_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_next_pc 
                                                 >> 0x22U))))) 
                  << 0x22U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_next_pc 
                        >> 0x23U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__fetch_io_in_next_pc 
                                              >> 0x23U))))) {
        ++(vlSymsp->__Vcoverage[4728]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__fetch_io_in_next_pc 
            = ((0xfffffff7ffffffffULL & vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__fetch_io_in_next_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_next_pc 
                                                 >> 0x23U))))) 
                  << 0x23U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_next_pc 
                        >> 0x24U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__fetch_io_in_next_pc 
                                              >> 0x24U))))) {
        ++(vlSymsp->__Vcoverage[4729]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__fetch_io_in_next_pc 
            = ((0xffffffefffffffffULL & vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__fetch_io_in_next_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_next_pc 
                                                 >> 0x24U))))) 
                  << 0x24U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_next_pc 
                        >> 0x25U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__fetch_io_in_next_pc 
                                              >> 0x25U))))) {
        ++(vlSymsp->__Vcoverage[4730]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__fetch_io_in_next_pc 
            = ((0xffffffdfffffffffULL & vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__fetch_io_in_next_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_next_pc 
                                                 >> 0x25U))))) 
                  << 0x25U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_next_pc 
                        >> 0x26U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__fetch_io_in_next_pc 
                                              >> 0x26U))))) {
        ++(vlSymsp->__Vcoverage[4731]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__fetch_io_in_next_pc 
            = ((0xffffffbfffffffffULL & vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__fetch_io_in_next_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_next_pc 
                                                 >> 0x26U))))) 
                  << 0x26U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_next_pc 
                        >> 0x27U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__fetch_io_in_next_pc 
                                              >> 0x27U))))) {
        ++(vlSymsp->__Vcoverage[4732]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__fetch_io_in_next_pc 
            = ((0xffffff7fffffffffULL & vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__fetch_io_in_next_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_next_pc 
                                                 >> 0x27U))))) 
                  << 0x27U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_next_pc 
                        >> 0x28U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__fetch_io_in_next_pc 
                                              >> 0x28U))))) {
        ++(vlSymsp->__Vcoverage[4733]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__fetch_io_in_next_pc 
            = ((0xfffffeffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__fetch_io_in_next_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_next_pc 
                                                 >> 0x28U))))) 
                  << 0x28U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_next_pc 
                        >> 0x29U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__fetch_io_in_next_pc 
                                              >> 0x29U))))) {
        ++(vlSymsp->__Vcoverage[4734]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__fetch_io_in_next_pc 
            = ((0xfffffdffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__fetch_io_in_next_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_next_pc 
                                                 >> 0x29U))))) 
                  << 0x29U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_next_pc 
                        >> 0x2aU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__fetch_io_in_next_pc 
                                              >> 0x2aU))))) {
        ++(vlSymsp->__Vcoverage[4735]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__fetch_io_in_next_pc 
            = ((0xfffffbffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__fetch_io_in_next_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_next_pc 
                                                 >> 0x2aU))))) 
                  << 0x2aU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_next_pc 
                        >> 0x2bU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__fetch_io_in_next_pc 
                                              >> 0x2bU))))) {
        ++(vlSymsp->__Vcoverage[4736]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__fetch_io_in_next_pc 
            = ((0xfffff7ffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__fetch_io_in_next_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_next_pc 
                                                 >> 0x2bU))))) 
                  << 0x2bU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_next_pc 
                        >> 0x2cU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__fetch_io_in_next_pc 
                                              >> 0x2cU))))) {
        ++(vlSymsp->__Vcoverage[4737]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__fetch_io_in_next_pc 
            = ((0xffffefffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__fetch_io_in_next_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_next_pc 
                                                 >> 0x2cU))))) 
                  << 0x2cU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_next_pc 
                        >> 0x2dU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__fetch_io_in_next_pc 
                                              >> 0x2dU))))) {
        ++(vlSymsp->__Vcoverage[4738]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__fetch_io_in_next_pc 
            = ((0xffffdfffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__fetch_io_in_next_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_next_pc 
                                                 >> 0x2dU))))) 
                  << 0x2dU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_next_pc 
                        >> 0x2eU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__fetch_io_in_next_pc 
                                              >> 0x2eU))))) {
        ++(vlSymsp->__Vcoverage[4739]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__fetch_io_in_next_pc 
            = ((0xffffbfffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__fetch_io_in_next_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_next_pc 
                                                 >> 0x2eU))))) 
                  << 0x2eU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_next_pc 
                        >> 0x2fU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__fetch_io_in_next_pc 
                                              >> 0x2fU))))) {
        ++(vlSymsp->__Vcoverage[4740]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__fetch_io_in_next_pc 
            = ((0xffff7fffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__fetch_io_in_next_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_next_pc 
                                                 >> 0x2fU))))) 
                  << 0x2fU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_next_pc 
                        >> 0x30U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__fetch_io_in_next_pc 
                                              >> 0x30U))))) {
        ++(vlSymsp->__Vcoverage[4741]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__fetch_io_in_next_pc 
            = ((0xfffeffffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__fetch_io_in_next_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_next_pc 
                                                 >> 0x30U))))) 
                  << 0x30U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_next_pc 
                        >> 0x31U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__fetch_io_in_next_pc 
                                              >> 0x31U))))) {
        ++(vlSymsp->__Vcoverage[4742]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__fetch_io_in_next_pc 
            = ((0xfffdffffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__fetch_io_in_next_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_next_pc 
                                                 >> 0x31U))))) 
                  << 0x31U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_next_pc 
                        >> 0x32U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__fetch_io_in_next_pc 
                                              >> 0x32U))))) {
        ++(vlSymsp->__Vcoverage[4743]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__fetch_io_in_next_pc 
            = ((0xfffbffffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__fetch_io_in_next_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_next_pc 
                                                 >> 0x32U))))) 
                  << 0x32U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_next_pc 
                        >> 0x33U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__fetch_io_in_next_pc 
                                              >> 0x33U))))) {
        ++(vlSymsp->__Vcoverage[4744]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__fetch_io_in_next_pc 
            = ((0xfff7ffffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__fetch_io_in_next_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_next_pc 
                                                 >> 0x33U))))) 
                  << 0x33U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_next_pc 
                        >> 0x34U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__fetch_io_in_next_pc 
                                              >> 0x34U))))) {
        ++(vlSymsp->__Vcoverage[4745]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__fetch_io_in_next_pc 
            = ((0xffefffffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__fetch_io_in_next_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_next_pc 
                                                 >> 0x34U))))) 
                  << 0x34U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_next_pc 
                        >> 0x35U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__fetch_io_in_next_pc 
                                              >> 0x35U))))) {
        ++(vlSymsp->__Vcoverage[4746]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__fetch_io_in_next_pc 
            = ((0xffdfffffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__fetch_io_in_next_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_next_pc 
                                                 >> 0x35U))))) 
                  << 0x35U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_next_pc 
                        >> 0x36U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__fetch_io_in_next_pc 
                                              >> 0x36U))))) {
        ++(vlSymsp->__Vcoverage[4747]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__fetch_io_in_next_pc 
            = ((0xffbfffffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__fetch_io_in_next_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_next_pc 
                                                 >> 0x36U))))) 
                  << 0x36U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_next_pc 
                        >> 0x37U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__fetch_io_in_next_pc 
                                              >> 0x37U))))) {
        ++(vlSymsp->__Vcoverage[4748]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__fetch_io_in_next_pc 
            = ((0xff7fffffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__fetch_io_in_next_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_next_pc 
                                                 >> 0x37U))))) 
                  << 0x37U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_next_pc 
                        >> 0x38U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__fetch_io_in_next_pc 
                                              >> 0x38U))))) {
        ++(vlSymsp->__Vcoverage[4749]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__fetch_io_in_next_pc 
            = ((0xfeffffffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__fetch_io_in_next_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_next_pc 
                                                 >> 0x38U))))) 
                  << 0x38U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_next_pc 
                        >> 0x39U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__fetch_io_in_next_pc 
                                              >> 0x39U))))) {
        ++(vlSymsp->__Vcoverage[4750]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__fetch_io_in_next_pc 
            = ((0xfdffffffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__fetch_io_in_next_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_next_pc 
                                                 >> 0x39U))))) 
                  << 0x39U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_next_pc 
                        >> 0x3aU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__fetch_io_in_next_pc 
                                              >> 0x3aU))))) {
        ++(vlSymsp->__Vcoverage[4751]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__fetch_io_in_next_pc 
            = ((0xfbffffffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__fetch_io_in_next_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_next_pc 
                                                 >> 0x3aU))))) 
                  << 0x3aU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_next_pc 
                        >> 0x3bU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__fetch_io_in_next_pc 
                                              >> 0x3bU))))) {
        ++(vlSymsp->__Vcoverage[4752]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__fetch_io_in_next_pc 
            = ((0xf7ffffffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__fetch_io_in_next_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_next_pc 
                                                 >> 0x3bU))))) 
                  << 0x3bU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_next_pc 
                        >> 0x3cU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__fetch_io_in_next_pc 
                                              >> 0x3cU))))) {
        ++(vlSymsp->__Vcoverage[4753]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__fetch_io_in_next_pc 
            = ((0xefffffffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__fetch_io_in_next_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_next_pc 
                                                 >> 0x3cU))))) 
                  << 0x3cU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_next_pc 
                        >> 0x3dU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__fetch_io_in_next_pc 
                                              >> 0x3dU))))) {
        ++(vlSymsp->__Vcoverage[4754]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__fetch_io_in_next_pc 
            = ((0xdfffffffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__fetch_io_in_next_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_next_pc 
                                                 >> 0x3dU))))) 
                  << 0x3dU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_next_pc 
                        >> 0x3eU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__fetch_io_in_next_pc 
                                              >> 0x3eU))))) {
        ++(vlSymsp->__Vcoverage[4755]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__fetch_io_in_next_pc 
            = ((0xbfffffffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__fetch_io_in_next_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_next_pc 
                                                 >> 0x3eU))))) 
                  << 0x3eU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_next_pc 
                        >> 0x3fU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__fetch_io_in_next_pc 
                                              >> 0x3fU))))) {
        ++(vlSymsp->__Vcoverage[4756]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__fetch_io_in_next_pc 
            = ((0x7fffffffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__fetch_io_in_next_pc) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__reg_next_pc 
                                                 >> 0x3fU))))) 
                  << 0x3fU));
    }
    if ((1U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
               ^ (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__reg_exuType)))) {
        ++(vlSymsp->__Vcoverage[8135]);
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__reg_exuType 
            = ((0x3eU & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__reg_exuType)) 
               | (1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType)));
    }
    if ((2U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
               ^ (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__reg_exuType)))) {
        ++(vlSymsp->__Vcoverage[8136]);
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__reg_exuType 
            = ((0x3dU & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__reg_exuType)) 
               | (2U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType)));
    }
    if ((4U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
               ^ (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__reg_exuType)))) {
        ++(vlSymsp->__Vcoverage[8137]);
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__reg_exuType 
            = ((0x3bU & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__reg_exuType)) 
               | (4U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType)));
    }
    if ((8U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
               ^ (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__reg_exuType)))) {
        ++(vlSymsp->__Vcoverage[8138]);
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__reg_exuType 
            = ((0x37U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__reg_exuType)) 
               | (8U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType)));
    }
    if ((0x10U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                  ^ (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__reg_exuType)))) {
        ++(vlSymsp->__Vcoverage[8139]);
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__reg_exuType 
            = ((0x2fU & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__reg_exuType)) 
               | (0x10U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType)));
    }
    if ((0x20U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType) 
                  ^ (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__reg_exuType)))) {
        ++(vlSymsp->__Vcoverage[8140]);
        vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__reg_exuType 
            = ((0x1fU & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT____Vtogcov__reg_exuType)) 
               | (0x20U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_exuType)));
    }
    if ((1U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs1_data) 
               ^ (IData)(vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs1_data)))) {
        ++(vlSymsp->__Vcoverage[4868]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs1_data 
            = ((0xfffffffffffffffeULL & vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs1_data) 
               | (IData)((IData)((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs1_data)))));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs1_data 
                        >> 1U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs1_data 
                                           >> 1U))))) {
        ++(vlSymsp->__Vcoverage[4869]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs1_data 
            = ((0xfffffffffffffffdULL & vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs1_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs1_data 
                                                 >> 1U))))) 
                  << 1U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs1_data 
                        >> 2U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs1_data 
                                           >> 2U))))) {
        ++(vlSymsp->__Vcoverage[4870]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs1_data 
            = ((0xfffffffffffffffbULL & vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs1_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs1_data 
                                                 >> 2U))))) 
                  << 2U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs1_data 
                        >> 3U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs1_data 
                                           >> 3U))))) {
        ++(vlSymsp->__Vcoverage[4871]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs1_data 
            = ((0xfffffffffffffff7ULL & vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs1_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs1_data 
                                                 >> 3U))))) 
                  << 3U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs1_data 
                        >> 4U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs1_data 
                                           >> 4U))))) {
        ++(vlSymsp->__Vcoverage[4872]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs1_data 
            = ((0xffffffffffffffefULL & vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs1_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs1_data 
                                                 >> 4U))))) 
                  << 4U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs1_data 
                        >> 5U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs1_data 
                                           >> 5U))))) {
        ++(vlSymsp->__Vcoverage[4873]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs1_data 
            = ((0xffffffffffffffdfULL & vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs1_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs1_data 
                                                 >> 5U))))) 
                  << 5U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs1_data 
                        >> 6U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs1_data 
                                           >> 6U))))) {
        ++(vlSymsp->__Vcoverage[4874]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs1_data 
            = ((0xffffffffffffffbfULL & vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs1_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs1_data 
                                                 >> 6U))))) 
                  << 6U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs1_data 
                        >> 7U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs1_data 
                                           >> 7U))))) {
        ++(vlSymsp->__Vcoverage[4875]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs1_data 
            = ((0xffffffffffffff7fULL & vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs1_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs1_data 
                                                 >> 7U))))) 
                  << 7U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs1_data 
                        >> 8U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs1_data 
                                           >> 8U))))) {
        ++(vlSymsp->__Vcoverage[4876]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs1_data 
            = ((0xfffffffffffffeffULL & vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs1_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs1_data 
                                                 >> 8U))))) 
                  << 8U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs1_data 
                        >> 9U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs1_data 
                                           >> 9U))))) {
        ++(vlSymsp->__Vcoverage[4877]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs1_data 
            = ((0xfffffffffffffdffULL & vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs1_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs1_data 
                                                 >> 9U))))) 
                  << 9U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs1_data 
                        >> 0xaU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs1_data 
                                             >> 0xaU))))) {
        ++(vlSymsp->__Vcoverage[4878]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs1_data 
            = ((0xfffffffffffffbffULL & vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs1_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs1_data 
                                                 >> 0xaU))))) 
                  << 0xaU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs1_data 
                        >> 0xbU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs1_data 
                                             >> 0xbU))))) {
        ++(vlSymsp->__Vcoverage[4879]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs1_data 
            = ((0xfffffffffffff7ffULL & vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs1_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs1_data 
                                                 >> 0xbU))))) 
                  << 0xbU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs1_data 
                        >> 0xcU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs1_data 
                                             >> 0xcU))))) {
        ++(vlSymsp->__Vcoverage[4880]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs1_data 
            = ((0xffffffffffffefffULL & vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs1_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs1_data 
                                                 >> 0xcU))))) 
                  << 0xcU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs1_data 
                        >> 0xdU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs1_data 
                                             >> 0xdU))))) {
        ++(vlSymsp->__Vcoverage[4881]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs1_data 
            = ((0xffffffffffffdfffULL & vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs1_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs1_data 
                                                 >> 0xdU))))) 
                  << 0xdU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs1_data 
                        >> 0xeU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs1_data 
                                             >> 0xeU))))) {
        ++(vlSymsp->__Vcoverage[4882]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs1_data 
            = ((0xffffffffffffbfffULL & vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs1_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs1_data 
                                                 >> 0xeU))))) 
                  << 0xeU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs1_data 
                        >> 0xfU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs1_data 
                                             >> 0xfU))))) {
        ++(vlSymsp->__Vcoverage[4883]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs1_data 
            = ((0xffffffffffff7fffULL & vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs1_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs1_data 
                                                 >> 0xfU))))) 
                  << 0xfU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs1_data 
                        >> 0x10U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs1_data 
                                              >> 0x10U))))) {
        ++(vlSymsp->__Vcoverage[4884]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs1_data 
            = ((0xfffffffffffeffffULL & vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs1_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs1_data 
                                                 >> 0x10U))))) 
                  << 0x10U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs1_data 
                        >> 0x11U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs1_data 
                                              >> 0x11U))))) {
        ++(vlSymsp->__Vcoverage[4885]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs1_data 
            = ((0xfffffffffffdffffULL & vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs1_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs1_data 
                                                 >> 0x11U))))) 
                  << 0x11U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs1_data 
                        >> 0x12U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs1_data 
                                              >> 0x12U))))) {
        ++(vlSymsp->__Vcoverage[4886]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs1_data 
            = ((0xfffffffffffbffffULL & vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs1_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs1_data 
                                                 >> 0x12U))))) 
                  << 0x12U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs1_data 
                        >> 0x13U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs1_data 
                                              >> 0x13U))))) {
        ++(vlSymsp->__Vcoverage[4887]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs1_data 
            = ((0xfffffffffff7ffffULL & vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs1_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs1_data 
                                                 >> 0x13U))))) 
                  << 0x13U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs1_data 
                        >> 0x14U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs1_data 
                                              >> 0x14U))))) {
        ++(vlSymsp->__Vcoverage[4888]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs1_data 
            = ((0xffffffffffefffffULL & vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs1_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs1_data 
                                                 >> 0x14U))))) 
                  << 0x14U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs1_data 
                        >> 0x15U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs1_data 
                                              >> 0x15U))))) {
        ++(vlSymsp->__Vcoverage[4889]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs1_data 
            = ((0xffffffffffdfffffULL & vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs1_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs1_data 
                                                 >> 0x15U))))) 
                  << 0x15U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs1_data 
                        >> 0x16U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs1_data 
                                              >> 0x16U))))) {
        ++(vlSymsp->__Vcoverage[4890]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs1_data 
            = ((0xffffffffffbfffffULL & vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs1_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs1_data 
                                                 >> 0x16U))))) 
                  << 0x16U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs1_data 
                        >> 0x17U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs1_data 
                                              >> 0x17U))))) {
        ++(vlSymsp->__Vcoverage[4891]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs1_data 
            = ((0xffffffffff7fffffULL & vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs1_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs1_data 
                                                 >> 0x17U))))) 
                  << 0x17U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs1_data 
                        >> 0x18U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs1_data 
                                              >> 0x18U))))) {
        ++(vlSymsp->__Vcoverage[4892]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs1_data 
            = ((0xfffffffffeffffffULL & vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs1_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs1_data 
                                                 >> 0x18U))))) 
                  << 0x18U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs1_data 
                        >> 0x19U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs1_data 
                                              >> 0x19U))))) {
        ++(vlSymsp->__Vcoverage[4893]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs1_data 
            = ((0xfffffffffdffffffULL & vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs1_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs1_data 
                                                 >> 0x19U))))) 
                  << 0x19U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs1_data 
                        >> 0x1aU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs1_data 
                                              >> 0x1aU))))) {
        ++(vlSymsp->__Vcoverage[4894]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs1_data 
            = ((0xfffffffffbffffffULL & vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs1_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs1_data 
                                                 >> 0x1aU))))) 
                  << 0x1aU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs1_data 
                        >> 0x1bU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs1_data 
                                              >> 0x1bU))))) {
        ++(vlSymsp->__Vcoverage[4895]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs1_data 
            = ((0xfffffffff7ffffffULL & vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs1_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs1_data 
                                                 >> 0x1bU))))) 
                  << 0x1bU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs1_data 
                        >> 0x1cU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs1_data 
                                              >> 0x1cU))))) {
        ++(vlSymsp->__Vcoverage[4896]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs1_data 
            = ((0xffffffffefffffffULL & vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs1_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs1_data 
                                                 >> 0x1cU))))) 
                  << 0x1cU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs1_data 
                        >> 0x1dU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs1_data 
                                              >> 0x1dU))))) {
        ++(vlSymsp->__Vcoverage[4897]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs1_data 
            = ((0xffffffffdfffffffULL & vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs1_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs1_data 
                                                 >> 0x1dU))))) 
                  << 0x1dU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs1_data 
                        >> 0x1eU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs1_data 
                                              >> 0x1eU))))) {
        ++(vlSymsp->__Vcoverage[4898]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs1_data 
            = ((0xffffffffbfffffffULL & vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs1_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs1_data 
                                                 >> 0x1eU))))) 
                  << 0x1eU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs1_data 
                        >> 0x1fU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs1_data 
                                              >> 0x1fU))))) {
        ++(vlSymsp->__Vcoverage[4899]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs1_data 
            = ((0xffffffff7fffffffULL & vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs1_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs1_data 
                                                 >> 0x1fU))))) 
                  << 0x1fU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs1_data 
                        >> 0x20U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs1_data 
                                              >> 0x20U))))) {
        ++(vlSymsp->__Vcoverage[4900]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs1_data 
            = ((0xfffffffeffffffffULL & vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs1_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs1_data 
                                                 >> 0x20U))))) 
                  << 0x20U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs1_data 
                        >> 0x21U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs1_data 
                                              >> 0x21U))))) {
        ++(vlSymsp->__Vcoverage[4901]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs1_data 
            = ((0xfffffffdffffffffULL & vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs1_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs1_data 
                                                 >> 0x21U))))) 
                  << 0x21U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs1_data 
                        >> 0x22U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs1_data 
                                              >> 0x22U))))) {
        ++(vlSymsp->__Vcoverage[4902]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs1_data 
            = ((0xfffffffbffffffffULL & vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs1_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs1_data 
                                                 >> 0x22U))))) 
                  << 0x22U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs1_data 
                        >> 0x23U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs1_data 
                                              >> 0x23U))))) {
        ++(vlSymsp->__Vcoverage[4903]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs1_data 
            = ((0xfffffff7ffffffffULL & vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs1_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs1_data 
                                                 >> 0x23U))))) 
                  << 0x23U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs1_data 
                        >> 0x24U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs1_data 
                                              >> 0x24U))))) {
        ++(vlSymsp->__Vcoverage[4904]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs1_data 
            = ((0xffffffefffffffffULL & vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs1_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs1_data 
                                                 >> 0x24U))))) 
                  << 0x24U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs1_data 
                        >> 0x25U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs1_data 
                                              >> 0x25U))))) {
        ++(vlSymsp->__Vcoverage[4905]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs1_data 
            = ((0xffffffdfffffffffULL & vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs1_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs1_data 
                                                 >> 0x25U))))) 
                  << 0x25U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs1_data 
                        >> 0x26U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs1_data 
                                              >> 0x26U))))) {
        ++(vlSymsp->__Vcoverage[4906]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs1_data 
            = ((0xffffffbfffffffffULL & vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs1_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs1_data 
                                                 >> 0x26U))))) 
                  << 0x26U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs1_data 
                        >> 0x27U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs1_data 
                                              >> 0x27U))))) {
        ++(vlSymsp->__Vcoverage[4907]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs1_data 
            = ((0xffffff7fffffffffULL & vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs1_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs1_data 
                                                 >> 0x27U))))) 
                  << 0x27U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs1_data 
                        >> 0x28U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs1_data 
                                              >> 0x28U))))) {
        ++(vlSymsp->__Vcoverage[4908]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs1_data 
            = ((0xfffffeffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs1_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs1_data 
                                                 >> 0x28U))))) 
                  << 0x28U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs1_data 
                        >> 0x29U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs1_data 
                                              >> 0x29U))))) {
        ++(vlSymsp->__Vcoverage[4909]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs1_data 
            = ((0xfffffdffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs1_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs1_data 
                                                 >> 0x29U))))) 
                  << 0x29U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs1_data 
                        >> 0x2aU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs1_data 
                                              >> 0x2aU))))) {
        ++(vlSymsp->__Vcoverage[4910]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs1_data 
            = ((0xfffffbffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs1_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs1_data 
                                                 >> 0x2aU))))) 
                  << 0x2aU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs1_data 
                        >> 0x2bU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs1_data 
                                              >> 0x2bU))))) {
        ++(vlSymsp->__Vcoverage[4911]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs1_data 
            = ((0xfffff7ffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs1_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs1_data 
                                                 >> 0x2bU))))) 
                  << 0x2bU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs1_data 
                        >> 0x2cU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs1_data 
                                              >> 0x2cU))))) {
        ++(vlSymsp->__Vcoverage[4912]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs1_data 
            = ((0xffffefffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs1_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs1_data 
                                                 >> 0x2cU))))) 
                  << 0x2cU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs1_data 
                        >> 0x2dU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs1_data 
                                              >> 0x2dU))))) {
        ++(vlSymsp->__Vcoverage[4913]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs1_data 
            = ((0xffffdfffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs1_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs1_data 
                                                 >> 0x2dU))))) 
                  << 0x2dU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs1_data 
                        >> 0x2eU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs1_data 
                                              >> 0x2eU))))) {
        ++(vlSymsp->__Vcoverage[4914]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs1_data 
            = ((0xffffbfffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs1_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs1_data 
                                                 >> 0x2eU))))) 
                  << 0x2eU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs1_data 
                        >> 0x2fU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs1_data 
                                              >> 0x2fU))))) {
        ++(vlSymsp->__Vcoverage[4915]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs1_data 
            = ((0xffff7fffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs1_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs1_data 
                                                 >> 0x2fU))))) 
                  << 0x2fU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs1_data 
                        >> 0x30U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs1_data 
                                              >> 0x30U))))) {
        ++(vlSymsp->__Vcoverage[4916]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs1_data 
            = ((0xfffeffffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs1_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs1_data 
                                                 >> 0x30U))))) 
                  << 0x30U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs1_data 
                        >> 0x31U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs1_data 
                                              >> 0x31U))))) {
        ++(vlSymsp->__Vcoverage[4917]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs1_data 
            = ((0xfffdffffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs1_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs1_data 
                                                 >> 0x31U))))) 
                  << 0x31U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs1_data 
                        >> 0x32U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs1_data 
                                              >> 0x32U))))) {
        ++(vlSymsp->__Vcoverage[4918]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs1_data 
            = ((0xfffbffffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs1_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs1_data 
                                                 >> 0x32U))))) 
                  << 0x32U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs1_data 
                        >> 0x33U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs1_data 
                                              >> 0x33U))))) {
        ++(vlSymsp->__Vcoverage[4919]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs1_data 
            = ((0xfff7ffffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs1_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs1_data 
                                                 >> 0x33U))))) 
                  << 0x33U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs1_data 
                        >> 0x34U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs1_data 
                                              >> 0x34U))))) {
        ++(vlSymsp->__Vcoverage[4920]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs1_data 
            = ((0xffefffffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs1_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs1_data 
                                                 >> 0x34U))))) 
                  << 0x34U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs1_data 
                        >> 0x35U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs1_data 
                                              >> 0x35U))))) {
        ++(vlSymsp->__Vcoverage[4921]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs1_data 
            = ((0xffdfffffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs1_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs1_data 
                                                 >> 0x35U))))) 
                  << 0x35U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs1_data 
                        >> 0x36U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs1_data 
                                              >> 0x36U))))) {
        ++(vlSymsp->__Vcoverage[4922]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs1_data 
            = ((0xffbfffffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs1_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs1_data 
                                                 >> 0x36U))))) 
                  << 0x36U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs1_data 
                        >> 0x37U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs1_data 
                                              >> 0x37U))))) {
        ++(vlSymsp->__Vcoverage[4923]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs1_data 
            = ((0xff7fffffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs1_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs1_data 
                                                 >> 0x37U))))) 
                  << 0x37U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs1_data 
                        >> 0x38U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs1_data 
                                              >> 0x38U))))) {
        ++(vlSymsp->__Vcoverage[4924]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs1_data 
            = ((0xfeffffffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs1_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs1_data 
                                                 >> 0x38U))))) 
                  << 0x38U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs1_data 
                        >> 0x39U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs1_data 
                                              >> 0x39U))))) {
        ++(vlSymsp->__Vcoverage[4925]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs1_data 
            = ((0xfdffffffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs1_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs1_data 
                                                 >> 0x39U))))) 
                  << 0x39U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs1_data 
                        >> 0x3aU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs1_data 
                                              >> 0x3aU))))) {
        ++(vlSymsp->__Vcoverage[4926]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs1_data 
            = ((0xfbffffffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs1_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs1_data 
                                                 >> 0x3aU))))) 
                  << 0x3aU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs1_data 
                        >> 0x3bU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs1_data 
                                              >> 0x3bU))))) {
        ++(vlSymsp->__Vcoverage[4927]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs1_data 
            = ((0xf7ffffffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs1_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs1_data 
                                                 >> 0x3bU))))) 
                  << 0x3bU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs1_data 
                        >> 0x3cU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs1_data 
                                              >> 0x3cU))))) {
        ++(vlSymsp->__Vcoverage[4928]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs1_data 
            = ((0xefffffffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs1_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs1_data 
                                                 >> 0x3cU))))) 
                  << 0x3cU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs1_data 
                        >> 0x3dU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs1_data 
                                              >> 0x3dU))))) {
        ++(vlSymsp->__Vcoverage[4929]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs1_data 
            = ((0xdfffffffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs1_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs1_data 
                                                 >> 0x3dU))))) 
                  << 0x3dU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs1_data 
                        >> 0x3eU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs1_data 
                                              >> 0x3eU))))) {
        ++(vlSymsp->__Vcoverage[4930]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs1_data 
            = ((0xbfffffffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs1_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs1_data 
                                                 >> 0x3eU))))) 
                  << 0x3eU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs1_data 
                        >> 0x3fU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs1_data 
                                              >> 0x3fU))))) {
        ++(vlSymsp->__Vcoverage[4931]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs1_data 
            = ((0x7fffffffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs1_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs1_data 
                                                 >> 0x3fU))))) 
                  << 0x3fU));
    }
    if ((1U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs2_data) 
               ^ (IData)(vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs2_data)))) {
        ++(vlSymsp->__Vcoverage[4937]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs2_data 
            = ((0xfffffffffffffffeULL & vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs2_data) 
               | (IData)((IData)((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs2_data)))));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs2_data 
                        >> 1U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs2_data 
                                           >> 1U))))) {
        ++(vlSymsp->__Vcoverage[4938]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs2_data 
            = ((0xfffffffffffffffdULL & vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs2_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs2_data 
                                                 >> 1U))))) 
                  << 1U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs2_data 
                        >> 2U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs2_data 
                                           >> 2U))))) {
        ++(vlSymsp->__Vcoverage[4939]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs2_data 
            = ((0xfffffffffffffffbULL & vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs2_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs2_data 
                                                 >> 2U))))) 
                  << 2U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs2_data 
                        >> 3U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs2_data 
                                           >> 3U))))) {
        ++(vlSymsp->__Vcoverage[4940]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs2_data 
            = ((0xfffffffffffffff7ULL & vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs2_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs2_data 
                                                 >> 3U))))) 
                  << 3U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs2_data 
                        >> 4U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs2_data 
                                           >> 4U))))) {
        ++(vlSymsp->__Vcoverage[4941]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs2_data 
            = ((0xffffffffffffffefULL & vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs2_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs2_data 
                                                 >> 4U))))) 
                  << 4U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs2_data 
                        >> 5U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs2_data 
                                           >> 5U))))) {
        ++(vlSymsp->__Vcoverage[4942]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs2_data 
            = ((0xffffffffffffffdfULL & vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs2_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs2_data 
                                                 >> 5U))))) 
                  << 5U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs2_data 
                        >> 6U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs2_data 
                                           >> 6U))))) {
        ++(vlSymsp->__Vcoverage[4943]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs2_data 
            = ((0xffffffffffffffbfULL & vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs2_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs2_data 
                                                 >> 6U))))) 
                  << 6U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs2_data 
                        >> 7U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs2_data 
                                           >> 7U))))) {
        ++(vlSymsp->__Vcoverage[4944]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs2_data 
            = ((0xffffffffffffff7fULL & vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs2_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs2_data 
                                                 >> 7U))))) 
                  << 7U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs2_data 
                        >> 8U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs2_data 
                                           >> 8U))))) {
        ++(vlSymsp->__Vcoverage[4945]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs2_data 
            = ((0xfffffffffffffeffULL & vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs2_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs2_data 
                                                 >> 8U))))) 
                  << 8U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs2_data 
                        >> 9U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs2_data 
                                           >> 9U))))) {
        ++(vlSymsp->__Vcoverage[4946]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs2_data 
            = ((0xfffffffffffffdffULL & vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs2_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs2_data 
                                                 >> 9U))))) 
                  << 9U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs2_data 
                        >> 0xaU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs2_data 
                                             >> 0xaU))))) {
        ++(vlSymsp->__Vcoverage[4947]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs2_data 
            = ((0xfffffffffffffbffULL & vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs2_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs2_data 
                                                 >> 0xaU))))) 
                  << 0xaU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs2_data 
                        >> 0xbU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs2_data 
                                             >> 0xbU))))) {
        ++(vlSymsp->__Vcoverage[4948]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs2_data 
            = ((0xfffffffffffff7ffULL & vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs2_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs2_data 
                                                 >> 0xbU))))) 
                  << 0xbU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs2_data 
                        >> 0xcU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs2_data 
                                             >> 0xcU))))) {
        ++(vlSymsp->__Vcoverage[4949]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs2_data 
            = ((0xffffffffffffefffULL & vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs2_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs2_data 
                                                 >> 0xcU))))) 
                  << 0xcU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs2_data 
                        >> 0xdU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs2_data 
                                             >> 0xdU))))) {
        ++(vlSymsp->__Vcoverage[4950]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs2_data 
            = ((0xffffffffffffdfffULL & vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs2_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs2_data 
                                                 >> 0xdU))))) 
                  << 0xdU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs2_data 
                        >> 0xeU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs2_data 
                                             >> 0xeU))))) {
        ++(vlSymsp->__Vcoverage[4951]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs2_data 
            = ((0xffffffffffffbfffULL & vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs2_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs2_data 
                                                 >> 0xeU))))) 
                  << 0xeU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs2_data 
                        >> 0xfU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs2_data 
                                             >> 0xfU))))) {
        ++(vlSymsp->__Vcoverage[4952]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs2_data 
            = ((0xffffffffffff7fffULL & vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs2_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs2_data 
                                                 >> 0xfU))))) 
                  << 0xfU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs2_data 
                        >> 0x10U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs2_data 
                                              >> 0x10U))))) {
        ++(vlSymsp->__Vcoverage[4953]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs2_data 
            = ((0xfffffffffffeffffULL & vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs2_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs2_data 
                                                 >> 0x10U))))) 
                  << 0x10U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs2_data 
                        >> 0x11U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs2_data 
                                              >> 0x11U))))) {
        ++(vlSymsp->__Vcoverage[4954]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs2_data 
            = ((0xfffffffffffdffffULL & vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs2_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs2_data 
                                                 >> 0x11U))))) 
                  << 0x11U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs2_data 
                        >> 0x12U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs2_data 
                                              >> 0x12U))))) {
        ++(vlSymsp->__Vcoverage[4955]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs2_data 
            = ((0xfffffffffffbffffULL & vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs2_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs2_data 
                                                 >> 0x12U))))) 
                  << 0x12U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs2_data 
                        >> 0x13U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs2_data 
                                              >> 0x13U))))) {
        ++(vlSymsp->__Vcoverage[4956]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs2_data 
            = ((0xfffffffffff7ffffULL & vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs2_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs2_data 
                                                 >> 0x13U))))) 
                  << 0x13U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs2_data 
                        >> 0x14U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs2_data 
                                              >> 0x14U))))) {
        ++(vlSymsp->__Vcoverage[4957]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs2_data 
            = ((0xffffffffffefffffULL & vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs2_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs2_data 
                                                 >> 0x14U))))) 
                  << 0x14U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs2_data 
                        >> 0x15U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs2_data 
                                              >> 0x15U))))) {
        ++(vlSymsp->__Vcoverage[4958]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs2_data 
            = ((0xffffffffffdfffffULL & vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs2_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs2_data 
                                                 >> 0x15U))))) 
                  << 0x15U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs2_data 
                        >> 0x16U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs2_data 
                                              >> 0x16U))))) {
        ++(vlSymsp->__Vcoverage[4959]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs2_data 
            = ((0xffffffffffbfffffULL & vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs2_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs2_data 
                                                 >> 0x16U))))) 
                  << 0x16U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs2_data 
                        >> 0x17U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs2_data 
                                              >> 0x17U))))) {
        ++(vlSymsp->__Vcoverage[4960]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs2_data 
            = ((0xffffffffff7fffffULL & vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs2_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs2_data 
                                                 >> 0x17U))))) 
                  << 0x17U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs2_data 
                        >> 0x18U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs2_data 
                                              >> 0x18U))))) {
        ++(vlSymsp->__Vcoverage[4961]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs2_data 
            = ((0xfffffffffeffffffULL & vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs2_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs2_data 
                                                 >> 0x18U))))) 
                  << 0x18U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs2_data 
                        >> 0x19U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs2_data 
                                              >> 0x19U))))) {
        ++(vlSymsp->__Vcoverage[4962]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs2_data 
            = ((0xfffffffffdffffffULL & vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs2_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs2_data 
                                                 >> 0x19U))))) 
                  << 0x19U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs2_data 
                        >> 0x1aU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs2_data 
                                              >> 0x1aU))))) {
        ++(vlSymsp->__Vcoverage[4963]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs2_data 
            = ((0xfffffffffbffffffULL & vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs2_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs2_data 
                                                 >> 0x1aU))))) 
                  << 0x1aU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs2_data 
                        >> 0x1bU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs2_data 
                                              >> 0x1bU))))) {
        ++(vlSymsp->__Vcoverage[4964]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs2_data 
            = ((0xfffffffff7ffffffULL & vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs2_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs2_data 
                                                 >> 0x1bU))))) 
                  << 0x1bU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs2_data 
                        >> 0x1cU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs2_data 
                                              >> 0x1cU))))) {
        ++(vlSymsp->__Vcoverage[4965]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs2_data 
            = ((0xffffffffefffffffULL & vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs2_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs2_data 
                                                 >> 0x1cU))))) 
                  << 0x1cU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs2_data 
                        >> 0x1dU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs2_data 
                                              >> 0x1dU))))) {
        ++(vlSymsp->__Vcoverage[4966]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs2_data 
            = ((0xffffffffdfffffffULL & vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs2_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs2_data 
                                                 >> 0x1dU))))) 
                  << 0x1dU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs2_data 
                        >> 0x1eU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs2_data 
                                              >> 0x1eU))))) {
        ++(vlSymsp->__Vcoverage[4967]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs2_data 
            = ((0xffffffffbfffffffULL & vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs2_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs2_data 
                                                 >> 0x1eU))))) 
                  << 0x1eU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs2_data 
                        >> 0x1fU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs2_data 
                                              >> 0x1fU))))) {
        ++(vlSymsp->__Vcoverage[4968]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs2_data 
            = ((0xffffffff7fffffffULL & vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs2_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs2_data 
                                                 >> 0x1fU))))) 
                  << 0x1fU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs2_data 
                        >> 0x20U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs2_data 
                                              >> 0x20U))))) {
        ++(vlSymsp->__Vcoverage[4969]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs2_data 
            = ((0xfffffffeffffffffULL & vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs2_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs2_data 
                                                 >> 0x20U))))) 
                  << 0x20U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs2_data 
                        >> 0x21U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs2_data 
                                              >> 0x21U))))) {
        ++(vlSymsp->__Vcoverage[4970]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs2_data 
            = ((0xfffffffdffffffffULL & vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs2_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs2_data 
                                                 >> 0x21U))))) 
                  << 0x21U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs2_data 
                        >> 0x22U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs2_data 
                                              >> 0x22U))))) {
        ++(vlSymsp->__Vcoverage[4971]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs2_data 
            = ((0xfffffffbffffffffULL & vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs2_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs2_data 
                                                 >> 0x22U))))) 
                  << 0x22U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs2_data 
                        >> 0x23U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs2_data 
                                              >> 0x23U))))) {
        ++(vlSymsp->__Vcoverage[4972]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs2_data 
            = ((0xfffffff7ffffffffULL & vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs2_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs2_data 
                                                 >> 0x23U))))) 
                  << 0x23U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs2_data 
                        >> 0x24U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs2_data 
                                              >> 0x24U))))) {
        ++(vlSymsp->__Vcoverage[4973]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs2_data 
            = ((0xffffffefffffffffULL & vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs2_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs2_data 
                                                 >> 0x24U))))) 
                  << 0x24U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs2_data 
                        >> 0x25U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs2_data 
                                              >> 0x25U))))) {
        ++(vlSymsp->__Vcoverage[4974]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs2_data 
            = ((0xffffffdfffffffffULL & vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs2_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs2_data 
                                                 >> 0x25U))))) 
                  << 0x25U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs2_data 
                        >> 0x26U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs2_data 
                                              >> 0x26U))))) {
        ++(vlSymsp->__Vcoverage[4975]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs2_data 
            = ((0xffffffbfffffffffULL & vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs2_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs2_data 
                                                 >> 0x26U))))) 
                  << 0x26U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs2_data 
                        >> 0x27U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs2_data 
                                              >> 0x27U))))) {
        ++(vlSymsp->__Vcoverage[4976]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs2_data 
            = ((0xffffff7fffffffffULL & vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs2_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs2_data 
                                                 >> 0x27U))))) 
                  << 0x27U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs2_data 
                        >> 0x28U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs2_data 
                                              >> 0x28U))))) {
        ++(vlSymsp->__Vcoverage[4977]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs2_data 
            = ((0xfffffeffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs2_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs2_data 
                                                 >> 0x28U))))) 
                  << 0x28U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs2_data 
                        >> 0x29U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs2_data 
                                              >> 0x29U))))) {
        ++(vlSymsp->__Vcoverage[4978]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs2_data 
            = ((0xfffffdffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs2_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs2_data 
                                                 >> 0x29U))))) 
                  << 0x29U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs2_data 
                        >> 0x2aU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs2_data 
                                              >> 0x2aU))))) {
        ++(vlSymsp->__Vcoverage[4979]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs2_data 
            = ((0xfffffbffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs2_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs2_data 
                                                 >> 0x2aU))))) 
                  << 0x2aU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs2_data 
                        >> 0x2bU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs2_data 
                                              >> 0x2bU))))) {
        ++(vlSymsp->__Vcoverage[4980]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs2_data 
            = ((0xfffff7ffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs2_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs2_data 
                                                 >> 0x2bU))))) 
                  << 0x2bU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs2_data 
                        >> 0x2cU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs2_data 
                                              >> 0x2cU))))) {
        ++(vlSymsp->__Vcoverage[4981]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs2_data 
            = ((0xffffefffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs2_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs2_data 
                                                 >> 0x2cU))))) 
                  << 0x2cU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs2_data 
                        >> 0x2dU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs2_data 
                                              >> 0x2dU))))) {
        ++(vlSymsp->__Vcoverage[4982]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs2_data 
            = ((0xffffdfffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs2_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs2_data 
                                                 >> 0x2dU))))) 
                  << 0x2dU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs2_data 
                        >> 0x2eU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs2_data 
                                              >> 0x2eU))))) {
        ++(vlSymsp->__Vcoverage[4983]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs2_data 
            = ((0xffffbfffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs2_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs2_data 
                                                 >> 0x2eU))))) 
                  << 0x2eU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs2_data 
                        >> 0x2fU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs2_data 
                                              >> 0x2fU))))) {
        ++(vlSymsp->__Vcoverage[4984]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs2_data 
            = ((0xffff7fffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs2_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs2_data 
                                                 >> 0x2fU))))) 
                  << 0x2fU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs2_data 
                        >> 0x30U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs2_data 
                                              >> 0x30U))))) {
        ++(vlSymsp->__Vcoverage[4985]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs2_data 
            = ((0xfffeffffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs2_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs2_data 
                                                 >> 0x30U))))) 
                  << 0x30U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs2_data 
                        >> 0x31U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs2_data 
                                              >> 0x31U))))) {
        ++(vlSymsp->__Vcoverage[4986]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs2_data 
            = ((0xfffdffffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs2_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs2_data 
                                                 >> 0x31U))))) 
                  << 0x31U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs2_data 
                        >> 0x32U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs2_data 
                                              >> 0x32U))))) {
        ++(vlSymsp->__Vcoverage[4987]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs2_data 
            = ((0xfffbffffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs2_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs2_data 
                                                 >> 0x32U))))) 
                  << 0x32U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs2_data 
                        >> 0x33U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs2_data 
                                              >> 0x33U))))) {
        ++(vlSymsp->__Vcoverage[4988]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs2_data 
            = ((0xfff7ffffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs2_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs2_data 
                                                 >> 0x33U))))) 
                  << 0x33U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs2_data 
                        >> 0x34U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs2_data 
                                              >> 0x34U))))) {
        ++(vlSymsp->__Vcoverage[4989]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs2_data 
            = ((0xffefffffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs2_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs2_data 
                                                 >> 0x34U))))) 
                  << 0x34U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs2_data 
                        >> 0x35U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs2_data 
                                              >> 0x35U))))) {
        ++(vlSymsp->__Vcoverage[4990]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs2_data 
            = ((0xffdfffffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs2_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs2_data 
                                                 >> 0x35U))))) 
                  << 0x35U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs2_data 
                        >> 0x36U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs2_data 
                                              >> 0x36U))))) {
        ++(vlSymsp->__Vcoverage[4991]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs2_data 
            = ((0xffbfffffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs2_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs2_data 
                                                 >> 0x36U))))) 
                  << 0x36U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs2_data 
                        >> 0x37U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs2_data 
                                              >> 0x37U))))) {
        ++(vlSymsp->__Vcoverage[4992]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs2_data 
            = ((0xff7fffffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs2_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs2_data 
                                                 >> 0x37U))))) 
                  << 0x37U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs2_data 
                        >> 0x38U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs2_data 
                                              >> 0x38U))))) {
        ++(vlSymsp->__Vcoverage[4993]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs2_data 
            = ((0xfeffffffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs2_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs2_data 
                                                 >> 0x38U))))) 
                  << 0x38U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs2_data 
                        >> 0x39U)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs2_data 
                                              >> 0x39U))))) {
        ++(vlSymsp->__Vcoverage[4994]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs2_data 
            = ((0xfdffffffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs2_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs2_data 
                                                 >> 0x39U))))) 
                  << 0x39U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs2_data 
                        >> 0x3aU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs2_data 
                                              >> 0x3aU))))) {
        ++(vlSymsp->__Vcoverage[4995]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs2_data 
            = ((0xfbffffffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs2_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs2_data 
                                                 >> 0x3aU))))) 
                  << 0x3aU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs2_data 
                        >> 0x3bU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs2_data 
                                              >> 0x3bU))))) {
        ++(vlSymsp->__Vcoverage[4996]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs2_data 
            = ((0xf7ffffffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs2_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs2_data 
                                                 >> 0x3bU))))) 
                  << 0x3bU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs2_data 
                        >> 0x3cU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs2_data 
                                              >> 0x3cU))))) {
        ++(vlSymsp->__Vcoverage[4997]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs2_data 
            = ((0xefffffffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs2_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs2_data 
                                                 >> 0x3cU))))) 
                  << 0x3cU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs2_data 
                        >> 0x3dU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs2_data 
                                              >> 0x3dU))))) {
        ++(vlSymsp->__Vcoverage[4998]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs2_data 
            = ((0xdfffffffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs2_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs2_data 
                                                 >> 0x3dU))))) 
                  << 0x3dU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs2_data 
                        >> 0x3eU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs2_data 
                                              >> 0x3eU))))) {
        ++(vlSymsp->__Vcoverage[4999]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs2_data 
            = ((0xbfffffffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs2_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs2_data 
                                                 >> 0x3eU))))) 
                  << 0x3eU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs2_data 
                        >> 0x3fU)) ^ (IData)((vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs2_data 
                                              >> 0x3fU))))) {
        ++(vlSymsp->__Vcoverage[5000]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs2_data 
            = ((0x7fffffffffffffffULL & vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs2_data) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs2_data 
                                                 >> 0x3fU))))) 
                  << 0x3fU));
    }
    if ((1U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs1_addr) 
               ^ (IData)(vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs1_addr)))) {
        ++(vlSymsp->__Vcoverage[4863]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs1_addr 
            = ((0x1eU & (IData)(vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs1_addr)) 
               | (1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs1_addr)));
    }
    if ((2U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs1_addr) 
               ^ (IData)(vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs1_addr)))) {
        ++(vlSymsp->__Vcoverage[4864]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs1_addr 
            = ((0x1dU & (IData)(vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs1_addr)) 
               | (2U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs1_addr)));
    }
    if ((4U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs1_addr) 
               ^ (IData)(vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs1_addr)))) {
        ++(vlSymsp->__Vcoverage[4865]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs1_addr 
            = ((0x1bU & (IData)(vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs1_addr)) 
               | (4U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs1_addr)));
    }
    if ((8U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs1_addr) 
               ^ (IData)(vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs1_addr)))) {
        ++(vlSymsp->__Vcoverage[4866]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs1_addr 
            = ((0x17U & (IData)(vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs1_addr)) 
               | (8U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs1_addr)));
    }
    if ((0x10U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs1_addr) 
                  ^ (IData)(vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs1_addr)))) {
        ++(vlSymsp->__Vcoverage[4867]);
        vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs1_addr 
            = ((0xfU & (IData)(vlSelf->riscv_soc__DOT__core__DOT____Vtogcov__execute_io_in_rs1_addr)) 
               | (0x10U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__reg_rs1_addr)));
    }
    if ((1U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_state) 
               ^ (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_state)))) {
        ++(vlSymsp->__Vcoverage[7574]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_state 
            = ((2U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_state)) 
               | (1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_state)));
    }
    if ((2U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_state) 
               ^ (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_state)))) {
        ++(vlSymsp->__Vcoverage[7575]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_state 
            = ((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_state)) 
               | (2U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_state)));
    }
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT___reg_cnt_T_1 
        = (0x3fU & ((IData)(1U) + (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_cnt)));
    if ((1U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_cnt) 
               ^ (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_cnt)))) {
        ++(vlSymsp->__Vcoverage[7568]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_cnt 
            = ((0x3eU & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_cnt)) 
               | (1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_cnt)));
    }
    if ((2U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_cnt) 
               ^ (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_cnt)))) {
        ++(vlSymsp->__Vcoverage[7569]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_cnt 
            = ((0x3dU & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_cnt)) 
               | (2U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_cnt)));
    }
    if ((4U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_cnt) 
               ^ (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_cnt)))) {
        ++(vlSymsp->__Vcoverage[7570]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_cnt 
            = ((0x3bU & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_cnt)) 
               | (4U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_cnt)));
    }
    if ((8U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_cnt) 
               ^ (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_cnt)))) {
        ++(vlSymsp->__Vcoverage[7571]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_cnt 
            = ((0x37U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_cnt)) 
               | (8U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_cnt)));
    }
    if ((0x10U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_cnt) 
                  ^ (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_cnt)))) {
        ++(vlSymsp->__Vcoverage[7572]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_cnt 
            = ((0x2fU & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_cnt)) 
               | (0x10U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_cnt)));
    }
    if ((0x20U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_cnt) 
                  ^ (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_cnt)))) {
        ++(vlSymsp->__Vcoverage[7573]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_cnt 
            = ((0x1fU & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_cnt)) 
               | (0x20U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_cnt)));
    }
    if ((1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[0U] 
               ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_mul1[0U]))) {
        ++(vlSymsp->__Vcoverage[7643]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_mul1[0U] 
            = ((0xfffffffeU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_mul1[0U]) 
               | (1U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[0U]));
    }
    if ((2U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[0U] 
               ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_mul1[0U]))) {
        ++(vlSymsp->__Vcoverage[7644]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_mul1[0U] 
            = ((0xfffffffdU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_mul1[0U]) 
               | (2U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[0U]));
    }
    if ((4U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[0U] 
               ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_mul1[0U]))) {
        ++(vlSymsp->__Vcoverage[7645]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_mul1[0U] 
            = ((0xfffffffbU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_mul1[0U]) 
               | (4U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[0U]));
    }
    if ((8U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[0U] 
               ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_mul1[0U]))) {
        ++(vlSymsp->__Vcoverage[7646]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_mul1[0U] 
            = ((0xfffffff7U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_mul1[0U]) 
               | (8U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[0U]));
    }
    if ((0x10U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[0U] 
                  ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_mul1[0U]))) {
        ++(vlSymsp->__Vcoverage[7647]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_mul1[0U] 
            = ((0xffffffefU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_mul1[0U]) 
               | (0x10U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[0U]));
    }
    if ((0x20U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[0U] 
                  ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_mul1[0U]))) {
        ++(vlSymsp->__Vcoverage[7648]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_mul1[0U] 
            = ((0xffffffdfU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_mul1[0U]) 
               | (0x20U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[0U]));
    }
    if ((0x40U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[0U] 
                  ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_mul1[0U]))) {
        ++(vlSymsp->__Vcoverage[7649]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_mul1[0U] 
            = ((0xffffffbfU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_mul1[0U]) 
               | (0x40U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[0U]));
    }
    if ((0x80U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[0U] 
                  ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_mul1[0U]))) {
        ++(vlSymsp->__Vcoverage[7650]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_mul1[0U] 
            = ((0xffffff7fU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_mul1[0U]) 
               | (0x80U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[0U]));
    }
    if ((0x100U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[0U] 
                   ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_mul1[0U]))) {
        ++(vlSymsp->__Vcoverage[7651]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_mul1[0U] 
            = ((0xfffffeffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_mul1[0U]) 
               | (0x100U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[0U]));
    }
    if ((0x200U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[0U] 
                   ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_mul1[0U]))) {
        ++(vlSymsp->__Vcoverage[7652]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_mul1[0U] 
            = ((0xfffffdffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_mul1[0U]) 
               | (0x200U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[0U]));
    }
    if ((0x400U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[0U] 
                   ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_mul1[0U]))) {
        ++(vlSymsp->__Vcoverage[7653]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_mul1[0U] 
            = ((0xfffffbffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_mul1[0U]) 
               | (0x400U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[0U]));
    }
    if ((0x800U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[0U] 
                   ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_mul1[0U]))) {
        ++(vlSymsp->__Vcoverage[7654]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_mul1[0U] 
            = ((0xfffff7ffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_mul1[0U]) 
               | (0x800U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[0U]));
    }
    if ((0x1000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[0U] 
                    ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_mul1[0U]))) {
        ++(vlSymsp->__Vcoverage[7655]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_mul1[0U] 
            = ((0xffffefffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_mul1[0U]) 
               | (0x1000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[0U]));
    }
    if ((0x2000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[0U] 
                    ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_mul1[0U]))) {
        ++(vlSymsp->__Vcoverage[7656]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_mul1[0U] 
            = ((0xffffdfffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_mul1[0U]) 
               | (0x2000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[0U]));
    }
    if ((0x4000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[0U] 
                    ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_mul1[0U]))) {
        ++(vlSymsp->__Vcoverage[7657]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_mul1[0U] 
            = ((0xffffbfffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_mul1[0U]) 
               | (0x4000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[0U]));
    }
    if ((0x8000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[0U] 
                    ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_mul1[0U]))) {
        ++(vlSymsp->__Vcoverage[7658]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_mul1[0U] 
            = ((0xffff7fffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_mul1[0U]) 
               | (0x8000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[0U]));
    }
    if ((0x10000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[0U] 
                     ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_mul1[0U]))) {
        ++(vlSymsp->__Vcoverage[7659]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_mul1[0U] 
            = ((0xfffeffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_mul1[0U]) 
               | (0x10000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[0U]));
    }
    if ((0x20000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[0U] 
                     ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_mul1[0U]))) {
        ++(vlSymsp->__Vcoverage[7660]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_mul1[0U] 
            = ((0xfffdffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_mul1[0U]) 
               | (0x20000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[0U]));
    }
    if ((0x40000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[0U] 
                     ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_mul1[0U]))) {
        ++(vlSymsp->__Vcoverage[7661]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_mul1[0U] 
            = ((0xfffbffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_mul1[0U]) 
               | (0x40000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[0U]));
    }
    if ((0x80000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[0U] 
                     ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_mul1[0U]))) {
        ++(vlSymsp->__Vcoverage[7662]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_mul1[0U] 
            = ((0xfff7ffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_mul1[0U]) 
               | (0x80000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[0U]));
    }
    if ((0x100000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[0U] 
                      ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_mul1[0U]))) {
        ++(vlSymsp->__Vcoverage[7663]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_mul1[0U] 
            = ((0xffefffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_mul1[0U]) 
               | (0x100000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[0U]));
    }
    if ((0x200000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[0U] 
                      ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_mul1[0U]))) {
        ++(vlSymsp->__Vcoverage[7664]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_mul1[0U] 
            = ((0xffdfffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_mul1[0U]) 
               | (0x200000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[0U]));
    }
    if ((0x400000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[0U] 
                      ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_mul1[0U]))) {
        ++(vlSymsp->__Vcoverage[7665]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_mul1[0U] 
            = ((0xffbfffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_mul1[0U]) 
               | (0x400000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[0U]));
    }
    if ((0x800000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[0U] 
                      ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_mul1[0U]))) {
        ++(vlSymsp->__Vcoverage[7666]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_mul1[0U] 
            = ((0xff7fffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_mul1[0U]) 
               | (0x800000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[0U]));
    }
    if ((0x1000000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[0U] 
                       ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_mul1[0U]))) {
        ++(vlSymsp->__Vcoverage[7667]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_mul1[0U] 
            = ((0xfeffffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_mul1[0U]) 
               | (0x1000000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[0U]));
    }
    if ((0x2000000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[0U] 
                       ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_mul1[0U]))) {
        ++(vlSymsp->__Vcoverage[7668]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_mul1[0U] 
            = ((0xfdffffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_mul1[0U]) 
               | (0x2000000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[0U]));
    }
    if ((0x4000000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[0U] 
                       ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_mul1[0U]))) {
        ++(vlSymsp->__Vcoverage[7669]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_mul1[0U] 
            = ((0xfbffffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_mul1[0U]) 
               | (0x4000000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[0U]));
    }
    if ((0x8000000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[0U] 
                       ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_mul1[0U]))) {
        ++(vlSymsp->__Vcoverage[7670]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_mul1[0U] 
            = ((0xf7ffffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_mul1[0U]) 
               | (0x8000000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[0U]));
    }
    if ((0x10000000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[0U] 
                        ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_mul1[0U]))) {
        ++(vlSymsp->__Vcoverage[7671]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_mul1[0U] 
            = ((0xefffffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_mul1[0U]) 
               | (0x10000000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[0U]));
    }
    if ((0x20000000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[0U] 
                        ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_mul1[0U]))) {
        ++(vlSymsp->__Vcoverage[7672]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_mul1[0U] 
            = ((0xdfffffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_mul1[0U]) 
               | (0x20000000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[0U]));
    }
    if ((0x40000000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[0U] 
                        ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_mul1[0U]))) {
        ++(vlSymsp->__Vcoverage[7673]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_mul1[0U] 
            = ((0xbfffffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_mul1[0U]) 
               | (0x40000000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[0U]));
    }
    if (((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[0U] 
          ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_mul1[0U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[7674]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_mul1[0U] 
            = ((0x7fffffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_mul1[0U]) 
               | (0x80000000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[0U]));
    }
    if ((1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[1U] 
               ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_mul1[1U]))) {
        ++(vlSymsp->__Vcoverage[7675]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_mul1[1U] 
            = ((0xfffffffeU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_mul1[1U]) 
               | (1U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[1U]));
    }
    if ((2U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[1U] 
               ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_mul1[1U]))) {
        ++(vlSymsp->__Vcoverage[7676]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_mul1[1U] 
            = ((0xfffffffdU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_mul1[1U]) 
               | (2U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[1U]));
    }
    if ((4U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[1U] 
               ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_mul1[1U]))) {
        ++(vlSymsp->__Vcoverage[7677]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_mul1[1U] 
            = ((0xfffffffbU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_mul1[1U]) 
               | (4U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[1U]));
    }
    if ((8U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[1U] 
               ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_mul1[1U]))) {
        ++(vlSymsp->__Vcoverage[7678]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_mul1[1U] 
            = ((0xfffffff7U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_mul1[1U]) 
               | (8U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[1U]));
    }
    if ((0x10U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[1U] 
                  ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_mul1[1U]))) {
        ++(vlSymsp->__Vcoverage[7679]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_mul1[1U] 
            = ((0xffffffefU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_mul1[1U]) 
               | (0x10U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[1U]));
    }
    if ((0x20U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[1U] 
                  ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_mul1[1U]))) {
        ++(vlSymsp->__Vcoverage[7680]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_mul1[1U] 
            = ((0xffffffdfU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_mul1[1U]) 
               | (0x20U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[1U]));
    }
    if ((0x40U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[1U] 
                  ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_mul1[1U]))) {
        ++(vlSymsp->__Vcoverage[7681]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_mul1[1U] 
            = ((0xffffffbfU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_mul1[1U]) 
               | (0x40U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[1U]));
    }
    if ((0x80U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[1U] 
                  ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_mul1[1U]))) {
        ++(vlSymsp->__Vcoverage[7682]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_mul1[1U] 
            = ((0xffffff7fU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_mul1[1U]) 
               | (0x80U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[1U]));
    }
    if ((0x100U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[1U] 
                   ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_mul1[1U]))) {
        ++(vlSymsp->__Vcoverage[7683]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_mul1[1U] 
            = ((0xfffffeffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_mul1[1U]) 
               | (0x100U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[1U]));
    }
    if ((0x200U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[1U] 
                   ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_mul1[1U]))) {
        ++(vlSymsp->__Vcoverage[7684]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_mul1[1U] 
            = ((0xfffffdffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_mul1[1U]) 
               | (0x200U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[1U]));
    }
    if ((0x400U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[1U] 
                   ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_mul1[1U]))) {
        ++(vlSymsp->__Vcoverage[7685]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_mul1[1U] 
            = ((0xfffffbffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_mul1[1U]) 
               | (0x400U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[1U]));
    }
    if ((0x800U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[1U] 
                   ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_mul1[1U]))) {
        ++(vlSymsp->__Vcoverage[7686]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_mul1[1U] 
            = ((0xfffff7ffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_mul1[1U]) 
               | (0x800U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[1U]));
    }
    if ((0x1000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[1U] 
                    ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_mul1[1U]))) {
        ++(vlSymsp->__Vcoverage[7687]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_mul1[1U] 
            = ((0xffffefffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_mul1[1U]) 
               | (0x1000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[1U]));
    }
    if ((0x2000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[1U] 
                    ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_mul1[1U]))) {
        ++(vlSymsp->__Vcoverage[7688]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_mul1[1U] 
            = ((0xffffdfffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_mul1[1U]) 
               | (0x2000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[1U]));
    }
    if ((0x4000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[1U] 
                    ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_mul1[1U]))) {
        ++(vlSymsp->__Vcoverage[7689]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_mul1[1U] 
            = ((0xffffbfffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_mul1[1U]) 
               | (0x4000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[1U]));
    }
    if ((0x8000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[1U] 
                    ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_mul1[1U]))) {
        ++(vlSymsp->__Vcoverage[7690]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_mul1[1U] 
            = ((0xffff7fffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_mul1[1U]) 
               | (0x8000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[1U]));
    }
    if ((0x10000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[1U] 
                     ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_mul1[1U]))) {
        ++(vlSymsp->__Vcoverage[7691]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_mul1[1U] 
            = ((0xfffeffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_mul1[1U]) 
               | (0x10000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[1U]));
    }
    if ((0x20000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[1U] 
                     ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_mul1[1U]))) {
        ++(vlSymsp->__Vcoverage[7692]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_mul1[1U] 
            = ((0xfffdffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_mul1[1U]) 
               | (0x20000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[1U]));
    }
    if ((0x40000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[1U] 
                     ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_mul1[1U]))) {
        ++(vlSymsp->__Vcoverage[7693]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_mul1[1U] 
            = ((0xfffbffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_mul1[1U]) 
               | (0x40000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[1U]));
    }
    if ((0x80000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[1U] 
                     ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_mul1[1U]))) {
        ++(vlSymsp->__Vcoverage[7694]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_mul1[1U] 
            = ((0xfff7ffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_mul1[1U]) 
               | (0x80000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[1U]));
    }
    if ((0x100000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[1U] 
                      ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_mul1[1U]))) {
        ++(vlSymsp->__Vcoverage[7695]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_mul1[1U] 
            = ((0xffefffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_mul1[1U]) 
               | (0x100000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[1U]));
    }
    if ((0x200000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[1U] 
                      ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_mul1[1U]))) {
        ++(vlSymsp->__Vcoverage[7696]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_mul1[1U] 
            = ((0xffdfffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_mul1[1U]) 
               | (0x200000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[1U]));
    }
    if ((0x400000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[1U] 
                      ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_mul1[1U]))) {
        ++(vlSymsp->__Vcoverage[7697]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_mul1[1U] 
            = ((0xffbfffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_mul1[1U]) 
               | (0x400000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[1U]));
    }
    if ((0x800000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[1U] 
                      ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_mul1[1U]))) {
        ++(vlSymsp->__Vcoverage[7698]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_mul1[1U] 
            = ((0xff7fffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_mul1[1U]) 
               | (0x800000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[1U]));
    }
    if ((0x1000000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[1U] 
                       ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_mul1[1U]))) {
        ++(vlSymsp->__Vcoverage[7699]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_mul1[1U] 
            = ((0xfeffffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_mul1[1U]) 
               | (0x1000000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[1U]));
    }
    if ((0x2000000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[1U] 
                       ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_mul1[1U]))) {
        ++(vlSymsp->__Vcoverage[7700]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_mul1[1U] 
            = ((0xfdffffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_mul1[1U]) 
               | (0x2000000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[1U]));
    }
    if ((0x4000000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[1U] 
                       ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_mul1[1U]))) {
        ++(vlSymsp->__Vcoverage[7701]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_mul1[1U] 
            = ((0xfbffffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_mul1[1U]) 
               | (0x4000000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[1U]));
    }
    if ((0x8000000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[1U] 
                       ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_mul1[1U]))) {
        ++(vlSymsp->__Vcoverage[7702]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_mul1[1U] 
            = ((0xf7ffffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_mul1[1U]) 
               | (0x8000000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[1U]));
    }
    if ((0x10000000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[1U] 
                        ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_mul1[1U]))) {
        ++(vlSymsp->__Vcoverage[7703]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_mul1[1U] 
            = ((0xefffffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_mul1[1U]) 
               | (0x10000000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[1U]));
    }
    if ((0x20000000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[1U] 
                        ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_mul1[1U]))) {
        ++(vlSymsp->__Vcoverage[7704]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_mul1[1U] 
            = ((0xdfffffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_mul1[1U]) 
               | (0x20000000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[1U]));
    }
    if ((0x40000000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[1U] 
                        ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_mul1[1U]))) {
        ++(vlSymsp->__Vcoverage[7705]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_mul1[1U] 
            = ((0xbfffffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_mul1[1U]) 
               | (0x40000000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[1U]));
    }
    if (((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[1U] 
          ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_mul1[1U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[7706]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_mul1[1U] 
            = ((0x7fffffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_mul1[1U]) 
               | (0x80000000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[1U]));
    }
    if ((1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[2U] 
               ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_mul1[2U]))) {
        ++(vlSymsp->__Vcoverage[7707]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_mul1[2U] 
            = (1U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[2U]);
    }
    __Vtemp1508[0U] = 1U;
    __Vtemp1508[1U] = 0U;
    __Vtemp1508[2U] = 0U;
    __Vtemp1509[0U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[0U]);
    __Vtemp1509[1U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[1U]);
    __Vtemp1509[2U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[2U]);
    VL_ADD_W(3, __Vtemp1510, __Vtemp1508, __Vtemp1509);
    __Vtemp1511[0U] = __Vtemp1510[0U];
    __Vtemp1511[1U] = __Vtemp1510[1U];
    __Vtemp1511[2U] = (1U & __Vtemp1510[2U]);
    VL_EXTEND_WW(66,65, __Vtemp1512, __Vtemp1511);
    __Vtemp1514[0U] = 1U;
    __Vtemp1514[1U] = 0U;
    __Vtemp1514[2U] = 0U;
    __Vtemp1515[0U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[0U]);
    __Vtemp1515[1U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[1U]);
    __Vtemp1515[2U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[2U]);
    VL_ADD_W(3, __Vtemp1516, __Vtemp1514, __Vtemp1515);
    __Vtemp1517[0U] = __Vtemp1516[0U];
    __Vtemp1517[1U] = __Vtemp1516[1U];
    __Vtemp1517[2U] = (1U & __Vtemp1516[2U]);
    VL_EXTEND_WW(66,65, __Vtemp1518, __Vtemp1517);
    __Vtemp1520[0U] = 1U;
    __Vtemp1520[1U] = 0U;
    __Vtemp1520[2U] = 0U;
    __Vtemp1521[0U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[0U]);
    __Vtemp1521[1U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[1U]);
    __Vtemp1521[2U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[2U]);
    VL_ADD_W(3, __Vtemp1522, __Vtemp1520, __Vtemp1521);
    if ((2U == (7U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[2U]))) {
        __Vtemp1530[0U] = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[0U];
        __Vtemp1530[1U] = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[1U];
        __Vtemp1530[2U] = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[2U];
    } else {
        __Vtemp1530[0U] = ((1U == (7U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[2U]))
                            ? vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[0U]
                            : 0U);
        __Vtemp1530[1U] = ((1U == (7U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[2U]))
                            ? vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[1U]
                            : 0U);
        __Vtemp1530[2U] = ((1U == (7U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[2U]))
                            ? vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[2U]
                            : 0U);
    }
    VL_EXTEND_WW(66,65, __Vtemp1531, __Vtemp1530);
    if ((6U == (7U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[2U]))) {
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__pp[0U] 
            = __Vtemp1512[0U];
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__pp[1U] 
            = __Vtemp1512[1U];
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__pp[2U] 
            = __Vtemp1512[2U];
    } else {
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__pp[0U] 
            = ((5U == (7U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[2U]))
                ? __Vtemp1518[0U] : ((4U == (7U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[2U]))
                                      ? (__Vtemp1522[0U] 
                                         << 1U) : (
                                                   (3U 
                                                    == 
                                                    (7U 
                                                     & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[2U]))
                                                    ? 
                                                   (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[0U] 
                                                    << 1U)
                                                    : 
                                                   __Vtemp1531[0U])));
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__pp[1U] 
            = ((5U == (7U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[2U]))
                ? __Vtemp1518[1U] : ((4U == (7U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[2U]))
                                      ? ((__Vtemp1522[0U] 
                                          >> 0x1fU) 
                                         | (__Vtemp1522[1U] 
                                            << 1U))
                                      : ((3U == (7U 
                                                 & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[2U]))
                                          ? ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[0U] 
                                              >> 0x1fU) 
                                             | (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[1U] 
                                                << 1U))
                                          : __Vtemp1531[1U])));
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__pp[2U] 
            = ((5U == (7U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[2U]))
                ? __Vtemp1518[2U] : ((4U == (7U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[2U]))
                                      ? ((__Vtemp1522[1U] 
                                          >> 0x1fU) 
                                         | (2U & (__Vtemp1522[2U] 
                                                  << 1U)))
                                      : ((3U == (7U 
                                                 & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_temp_mul2[2U]))
                                          ? ((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[1U] 
                                              >> 0x1fU) 
                                             | (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_mul1[2U] 
                                                << 1U))
                                          : __Vtemp1531[2U])));
    }
    if (((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_out_valid) 
         ^ (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT____Vtogcov__mul_io_out_valid))) {
        ++(vlSymsp->__Vcoverage[6918]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT____Vtogcov__mul_io_out_valid 
            = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_out_valid;
    }
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT___GEN_4 
        = ((2U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_state)) 
           | (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_out_valid));
    if (((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_exuType) 
         ^ (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_exuType))) {
        ++(vlSymsp->__Vcoverage[7838]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT____Vtogcov__reg_exuType 
            = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_exuType;
    }
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul_io_result 
        = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_exuType)
            ? (((QData)((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_result[1U])) 
                << 0x20U) | (QData)((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_result[0U])))
            : (((QData)((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_result[3U])) 
                << 0x20U) | (QData)((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_result[2U]))));
    if (((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_stall) 
         ^ (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT____Vtogcov__mul_io_stall))) {
        ++(vlSymsp->__Vcoverage[6916]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT____Vtogcov__mul_io_stall 
            = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_stall;
    }
    if ((1U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state) 
               ^ (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_state)))) {
        ++(vlSymsp->__Vcoverage[7374]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_state 
            = ((2U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_state)) 
               | (1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state)));
    }
    if ((2U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state) 
               ^ (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_state)))) {
        ++(vlSymsp->__Vcoverage[7375]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_state 
            = ((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_state)) 
               | (2U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state)));
    }
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT___reg_cnt_T_1 
        = (0x7fU & ((IData)(1U) + (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_cnt)));
    if ((1U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_cnt) 
               ^ (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_cnt)))) {
        ++(vlSymsp->__Vcoverage[7376]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_cnt 
            = ((0x7eU & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_cnt)) 
               | (1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_cnt)));
    }
    if ((2U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_cnt) 
               ^ (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_cnt)))) {
        ++(vlSymsp->__Vcoverage[7377]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_cnt 
            = ((0x7dU & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_cnt)) 
               | (2U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_cnt)));
    }
    if ((4U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_cnt) 
               ^ (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_cnt)))) {
        ++(vlSymsp->__Vcoverage[7378]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_cnt 
            = ((0x7bU & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_cnt)) 
               | (4U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_cnt)));
    }
    if ((8U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_cnt) 
               ^ (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_cnt)))) {
        ++(vlSymsp->__Vcoverage[7379]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_cnt 
            = ((0x77U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_cnt)) 
               | (8U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_cnt)));
    }
    if ((0x10U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_cnt) 
                  ^ (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_cnt)))) {
        ++(vlSymsp->__Vcoverage[7380]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_cnt 
            = ((0x6fU & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_cnt)) 
               | (0x10U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_cnt)));
    }
    if ((0x20U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_cnt) 
                  ^ (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_cnt)))) {
        ++(vlSymsp->__Vcoverage[7381]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_cnt 
            = ((0x5fU & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_cnt)) 
               | (0x20U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_cnt)));
    }
    if ((0x40U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_cnt) 
                  ^ (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_cnt)))) {
        ++(vlSymsp->__Vcoverage[7382]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_cnt 
            = ((0x3fU & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_cnt)) 
               | (0x40U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_cnt)));
    }
    if ((1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_dividend[0U] 
               ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_dividend[0U]))) {
        ++(vlSymsp->__Vcoverage[7114]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_dividend[0U] 
            = ((0xfffffffeU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_dividend[0U]) 
               | (1U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_dividend[0U]));
    }
    if ((2U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_dividend[0U] 
               ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_dividend[0U]))) {
        ++(vlSymsp->__Vcoverage[7115]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_dividend[0U] 
            = ((0xfffffffdU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_dividend[0U]) 
               | (2U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_dividend[0U]));
    }
    if ((4U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_dividend[0U] 
               ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_dividend[0U]))) {
        ++(vlSymsp->__Vcoverage[7116]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_dividend[0U] 
            = ((0xfffffffbU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_dividend[0U]) 
               | (4U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_dividend[0U]));
    }
    if ((8U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_dividend[0U] 
               ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_dividend[0U]))) {
        ++(vlSymsp->__Vcoverage[7117]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_dividend[0U] 
            = ((0xfffffff7U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_dividend[0U]) 
               | (8U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_dividend[0U]));
    }
    if ((0x10U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_dividend[0U] 
                  ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_dividend[0U]))) {
        ++(vlSymsp->__Vcoverage[7118]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_dividend[0U] 
            = ((0xffffffefU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_dividend[0U]) 
               | (0x10U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_dividend[0U]));
    }
    if ((0x20U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_dividend[0U] 
                  ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_dividend[0U]))) {
        ++(vlSymsp->__Vcoverage[7119]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_dividend[0U] 
            = ((0xffffffdfU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_dividend[0U]) 
               | (0x20U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_dividend[0U]));
    }
    if ((0x40U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_dividend[0U] 
                  ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_dividend[0U]))) {
        ++(vlSymsp->__Vcoverage[7120]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_dividend[0U] 
            = ((0xffffffbfU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_dividend[0U]) 
               | (0x40U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_dividend[0U]));
    }
    if ((0x80U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_dividend[0U] 
                  ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_dividend[0U]))) {
        ++(vlSymsp->__Vcoverage[7121]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_dividend[0U] 
            = ((0xffffff7fU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_dividend[0U]) 
               | (0x80U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_dividend[0U]));
    }
    if ((0x100U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_dividend[0U] 
                   ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_dividend[0U]))) {
        ++(vlSymsp->__Vcoverage[7122]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_dividend[0U] 
            = ((0xfffffeffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_dividend[0U]) 
               | (0x100U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_dividend[0U]));
    }
    if ((0x200U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_dividend[0U] 
                   ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_dividend[0U]))) {
        ++(vlSymsp->__Vcoverage[7123]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_dividend[0U] 
            = ((0xfffffdffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_dividend[0U]) 
               | (0x200U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_dividend[0U]));
    }
    if ((0x400U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_dividend[0U] 
                   ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_dividend[0U]))) {
        ++(vlSymsp->__Vcoverage[7124]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_dividend[0U] 
            = ((0xfffffbffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_dividend[0U]) 
               | (0x400U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_dividend[0U]));
    }
    if ((0x800U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_dividend[0U] 
                   ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_dividend[0U]))) {
        ++(vlSymsp->__Vcoverage[7125]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_dividend[0U] 
            = ((0xfffff7ffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_dividend[0U]) 
               | (0x800U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_dividend[0U]));
    }
    if ((0x1000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_dividend[0U] 
                    ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_dividend[0U]))) {
        ++(vlSymsp->__Vcoverage[7126]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_dividend[0U] 
            = ((0xffffefffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_dividend[0U]) 
               | (0x1000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_dividend[0U]));
    }
    if ((0x2000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_dividend[0U] 
                    ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_dividend[0U]))) {
        ++(vlSymsp->__Vcoverage[7127]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_dividend[0U] 
            = ((0xffffdfffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_dividend[0U]) 
               | (0x2000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_dividend[0U]));
    }
    if ((0x4000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_dividend[0U] 
                    ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_dividend[0U]))) {
        ++(vlSymsp->__Vcoverage[7128]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_dividend[0U] 
            = ((0xffffbfffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_dividend[0U]) 
               | (0x4000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_dividend[0U]));
    }
    if ((0x8000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_dividend[0U] 
                    ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_dividend[0U]))) {
        ++(vlSymsp->__Vcoverage[7129]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_dividend[0U] 
            = ((0xffff7fffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_dividend[0U]) 
               | (0x8000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_dividend[0U]));
    }
    if ((0x10000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_dividend[0U] 
                     ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_dividend[0U]))) {
        ++(vlSymsp->__Vcoverage[7130]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_dividend[0U] 
            = ((0xfffeffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_dividend[0U]) 
               | (0x10000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_dividend[0U]));
    }
    if ((0x20000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_dividend[0U] 
                     ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_dividend[0U]))) {
        ++(vlSymsp->__Vcoverage[7131]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_dividend[0U] 
            = ((0xfffdffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_dividend[0U]) 
               | (0x20000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_dividend[0U]));
    }
    if ((0x40000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_dividend[0U] 
                     ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_dividend[0U]))) {
        ++(vlSymsp->__Vcoverage[7132]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_dividend[0U] 
            = ((0xfffbffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_dividend[0U]) 
               | (0x40000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_dividend[0U]));
    }
    if ((0x80000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_dividend[0U] 
                     ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_dividend[0U]))) {
        ++(vlSymsp->__Vcoverage[7133]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_dividend[0U] 
            = ((0xfff7ffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_dividend[0U]) 
               | (0x80000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_dividend[0U]));
    }
    if ((0x100000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_dividend[0U] 
                      ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_dividend[0U]))) {
        ++(vlSymsp->__Vcoverage[7134]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_dividend[0U] 
            = ((0xffefffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_dividend[0U]) 
               | (0x100000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_dividend[0U]));
    }
    if ((0x200000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_dividend[0U] 
                      ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_dividend[0U]))) {
        ++(vlSymsp->__Vcoverage[7135]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_dividend[0U] 
            = ((0xffdfffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_dividend[0U]) 
               | (0x200000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_dividend[0U]));
    }
    if ((0x400000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_dividend[0U] 
                      ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_dividend[0U]))) {
        ++(vlSymsp->__Vcoverage[7136]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_dividend[0U] 
            = ((0xffbfffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_dividend[0U]) 
               | (0x400000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_dividend[0U]));
    }
    if ((0x800000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_dividend[0U] 
                      ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_dividend[0U]))) {
        ++(vlSymsp->__Vcoverage[7137]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_dividend[0U] 
            = ((0xff7fffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_dividend[0U]) 
               | (0x800000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_dividend[0U]));
    }
    if ((0x1000000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_dividend[0U] 
                       ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_dividend[0U]))) {
        ++(vlSymsp->__Vcoverage[7138]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_dividend[0U] 
            = ((0xfeffffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_dividend[0U]) 
               | (0x1000000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_dividend[0U]));
    }
    if ((0x2000000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_dividend[0U] 
                       ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_dividend[0U]))) {
        ++(vlSymsp->__Vcoverage[7139]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_dividend[0U] 
            = ((0xfdffffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_dividend[0U]) 
               | (0x2000000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_dividend[0U]));
    }
    if ((0x4000000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_dividend[0U] 
                       ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_dividend[0U]))) {
        ++(vlSymsp->__Vcoverage[7140]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_dividend[0U] 
            = ((0xfbffffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_dividend[0U]) 
               | (0x4000000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_dividend[0U]));
    }
    if ((0x8000000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_dividend[0U] 
                       ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_dividend[0U]))) {
        ++(vlSymsp->__Vcoverage[7141]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_dividend[0U] 
            = ((0xf7ffffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_dividend[0U]) 
               | (0x8000000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_dividend[0U]));
    }
    if ((0x10000000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_dividend[0U] 
                        ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_dividend[0U]))) {
        ++(vlSymsp->__Vcoverage[7142]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_dividend[0U] 
            = ((0xefffffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_dividend[0U]) 
               | (0x10000000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_dividend[0U]));
    }
    if ((0x20000000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_dividend[0U] 
                        ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_dividend[0U]))) {
        ++(vlSymsp->__Vcoverage[7143]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_dividend[0U] 
            = ((0xdfffffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_dividend[0U]) 
               | (0x20000000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_dividend[0U]));
    }
    if ((0x40000000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_dividend[0U] 
                        ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_dividend[0U]))) {
        ++(vlSymsp->__Vcoverage[7144]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_dividend[0U] 
            = ((0xbfffffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_dividend[0U]) 
               | (0x40000000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_dividend[0U]));
    }
    if (((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_dividend[0U] 
          ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_dividend[0U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[7145]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_dividend[0U] 
            = ((0x7fffffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_dividend[0U]) 
               | (0x80000000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_dividend[0U]));
    }
    if ((1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_dividend[1U] 
               ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_dividend[1U]))) {
        ++(vlSymsp->__Vcoverage[7146]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_dividend[1U] 
            = ((0xfffffffeU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_dividend[1U]) 
               | (1U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_dividend[1U]));
    }
    if ((2U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_dividend[1U] 
               ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_dividend[1U]))) {
        ++(vlSymsp->__Vcoverage[7147]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_dividend[1U] 
            = ((0xfffffffdU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_dividend[1U]) 
               | (2U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_dividend[1U]));
    }
    if ((4U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_dividend[1U] 
               ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_dividend[1U]))) {
        ++(vlSymsp->__Vcoverage[7148]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_dividend[1U] 
            = ((0xfffffffbU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_dividend[1U]) 
               | (4U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_dividend[1U]));
    }
    if ((8U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_dividend[1U] 
               ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_dividend[1U]))) {
        ++(vlSymsp->__Vcoverage[7149]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_dividend[1U] 
            = ((0xfffffff7U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_dividend[1U]) 
               | (8U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_dividend[1U]));
    }
    if ((0x10U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_dividend[1U] 
                  ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_dividend[1U]))) {
        ++(vlSymsp->__Vcoverage[7150]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_dividend[1U] 
            = ((0xffffffefU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_dividend[1U]) 
               | (0x10U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_dividend[1U]));
    }
    if ((0x20U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_dividend[1U] 
                  ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_dividend[1U]))) {
        ++(vlSymsp->__Vcoverage[7151]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_dividend[1U] 
            = ((0xffffffdfU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_dividend[1U]) 
               | (0x20U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_dividend[1U]));
    }
    if ((0x40U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_dividend[1U] 
                  ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_dividend[1U]))) {
        ++(vlSymsp->__Vcoverage[7152]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_dividend[1U] 
            = ((0xffffffbfU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_dividend[1U]) 
               | (0x40U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_dividend[1U]));
    }
    if ((0x80U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_dividend[1U] 
                  ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_dividend[1U]))) {
        ++(vlSymsp->__Vcoverage[7153]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_dividend[1U] 
            = ((0xffffff7fU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_dividend[1U]) 
               | (0x80U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_dividend[1U]));
    }
    if ((0x100U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_dividend[1U] 
                   ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_dividend[1U]))) {
        ++(vlSymsp->__Vcoverage[7154]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_dividend[1U] 
            = ((0xfffffeffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_dividend[1U]) 
               | (0x100U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_dividend[1U]));
    }
    if ((0x200U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_dividend[1U] 
                   ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_dividend[1U]))) {
        ++(vlSymsp->__Vcoverage[7155]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_dividend[1U] 
            = ((0xfffffdffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_dividend[1U]) 
               | (0x200U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_dividend[1U]));
    }
    if ((0x400U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_dividend[1U] 
                   ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_dividend[1U]))) {
        ++(vlSymsp->__Vcoverage[7156]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_dividend[1U] 
            = ((0xfffffbffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_dividend[1U]) 
               | (0x400U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_dividend[1U]));
    }
    if ((0x800U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_dividend[1U] 
                   ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_dividend[1U]))) {
        ++(vlSymsp->__Vcoverage[7157]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_dividend[1U] 
            = ((0xfffff7ffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_dividend[1U]) 
               | (0x800U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_dividend[1U]));
    }
    if ((0x1000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_dividend[1U] 
                    ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_dividend[1U]))) {
        ++(vlSymsp->__Vcoverage[7158]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_dividend[1U] 
            = ((0xffffefffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_dividend[1U]) 
               | (0x1000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_dividend[1U]));
    }
    if ((0x2000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_dividend[1U] 
                    ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_dividend[1U]))) {
        ++(vlSymsp->__Vcoverage[7159]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_dividend[1U] 
            = ((0xffffdfffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_dividend[1U]) 
               | (0x2000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_dividend[1U]));
    }
    if ((0x4000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_dividend[1U] 
                    ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_dividend[1U]))) {
        ++(vlSymsp->__Vcoverage[7160]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_dividend[1U] 
            = ((0xffffbfffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_dividend[1U]) 
               | (0x4000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_dividend[1U]));
    }
    if ((0x8000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_dividend[1U] 
                    ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_dividend[1U]))) {
        ++(vlSymsp->__Vcoverage[7161]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_dividend[1U] 
            = ((0xffff7fffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_dividend[1U]) 
               | (0x8000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_dividend[1U]));
    }
    if ((0x10000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_dividend[1U] 
                     ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_dividend[1U]))) {
        ++(vlSymsp->__Vcoverage[7162]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_dividend[1U] 
            = ((0xfffeffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_dividend[1U]) 
               | (0x10000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_dividend[1U]));
    }
    if ((0x20000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_dividend[1U] 
                     ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_dividend[1U]))) {
        ++(vlSymsp->__Vcoverage[7163]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_dividend[1U] 
            = ((0xfffdffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_dividend[1U]) 
               | (0x20000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_dividend[1U]));
    }
    if ((0x40000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_dividend[1U] 
                     ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_dividend[1U]))) {
        ++(vlSymsp->__Vcoverage[7164]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_dividend[1U] 
            = ((0xfffbffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_dividend[1U]) 
               | (0x40000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_dividend[1U]));
    }
    if ((0x80000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_dividend[1U] 
                     ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_dividend[1U]))) {
        ++(vlSymsp->__Vcoverage[7165]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_dividend[1U] 
            = ((0xfff7ffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_dividend[1U]) 
               | (0x80000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_dividend[1U]));
    }
    if ((0x100000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_dividend[1U] 
                      ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_dividend[1U]))) {
        ++(vlSymsp->__Vcoverage[7166]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_dividend[1U] 
            = ((0xffefffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_dividend[1U]) 
               | (0x100000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_dividend[1U]));
    }
    if ((0x200000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_dividend[1U] 
                      ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_dividend[1U]))) {
        ++(vlSymsp->__Vcoverage[7167]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_dividend[1U] 
            = ((0xffdfffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_dividend[1U]) 
               | (0x200000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_dividend[1U]));
    }
    if ((0x400000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_dividend[1U] 
                      ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_dividend[1U]))) {
        ++(vlSymsp->__Vcoverage[7168]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_dividend[1U] 
            = ((0xffbfffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_dividend[1U]) 
               | (0x400000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_dividend[1U]));
    }
    if ((0x800000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_dividend[1U] 
                      ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_dividend[1U]))) {
        ++(vlSymsp->__Vcoverage[7169]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_dividend[1U] 
            = ((0xff7fffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_dividend[1U]) 
               | (0x800000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_dividend[1U]));
    }
    if ((0x1000000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_dividend[1U] 
                       ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_dividend[1U]))) {
        ++(vlSymsp->__Vcoverage[7170]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_dividend[1U] 
            = ((0xfeffffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_dividend[1U]) 
               | (0x1000000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_dividend[1U]));
    }
    if ((0x2000000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_dividend[1U] 
                       ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_dividend[1U]))) {
        ++(vlSymsp->__Vcoverage[7171]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_dividend[1U] 
            = ((0xfdffffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_dividend[1U]) 
               | (0x2000000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_dividend[1U]));
    }
    if ((0x4000000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_dividend[1U] 
                       ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_dividend[1U]))) {
        ++(vlSymsp->__Vcoverage[7172]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_dividend[1U] 
            = ((0xfbffffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_dividend[1U]) 
               | (0x4000000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_dividend[1U]));
    }
    if ((0x8000000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_dividend[1U] 
                       ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_dividend[1U]))) {
        ++(vlSymsp->__Vcoverage[7173]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_dividend[1U] 
            = ((0xf7ffffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_dividend[1U]) 
               | (0x8000000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_dividend[1U]));
    }
    if ((0x10000000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_dividend[1U] 
                        ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_dividend[1U]))) {
        ++(vlSymsp->__Vcoverage[7174]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_dividend[1U] 
            = ((0xefffffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_dividend[1U]) 
               | (0x10000000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_dividend[1U]));
    }
    if ((0x20000000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_dividend[1U] 
                        ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_dividend[1U]))) {
        ++(vlSymsp->__Vcoverage[7175]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_dividend[1U] 
            = ((0xdfffffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_dividend[1U]) 
               | (0x20000000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_dividend[1U]));
    }
    if ((0x40000000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_dividend[1U] 
                        ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_dividend[1U]))) {
        ++(vlSymsp->__Vcoverage[7176]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_dividend[1U] 
            = ((0xbfffffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_dividend[1U]) 
               | (0x40000000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_dividend[1U]));
    }
    if (((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_dividend[1U] 
          ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_dividend[1U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[7177]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_dividend[1U] 
            = ((0x7fffffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_dividend[1U]) 
               | (0x80000000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_dividend[1U]));
    }
    if ((1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_dividend[2U] 
               ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_dividend[2U]))) {
        ++(vlSymsp->__Vcoverage[7178]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_dividend[2U] 
            = (1U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_dividend[2U]);
    }
    if ((1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[0U] 
               ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_divisor[0U]))) {
        ++(vlSymsp->__Vcoverage[7049]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_divisor[0U] 
            = ((0xfffffffeU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_divisor[0U]) 
               | (1U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[0U]));
    }
    if ((2U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[0U] 
               ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_divisor[0U]))) {
        ++(vlSymsp->__Vcoverage[7050]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_divisor[0U] 
            = ((0xfffffffdU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_divisor[0U]) 
               | (2U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[0U]));
    }
    if ((4U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[0U] 
               ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_divisor[0U]))) {
        ++(vlSymsp->__Vcoverage[7051]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_divisor[0U] 
            = ((0xfffffffbU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_divisor[0U]) 
               | (4U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[0U]));
    }
    if ((8U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[0U] 
               ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_divisor[0U]))) {
        ++(vlSymsp->__Vcoverage[7052]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_divisor[0U] 
            = ((0xfffffff7U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_divisor[0U]) 
               | (8U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[0U]));
    }
    if ((0x10U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[0U] 
                  ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_divisor[0U]))) {
        ++(vlSymsp->__Vcoverage[7053]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_divisor[0U] 
            = ((0xffffffefU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_divisor[0U]) 
               | (0x10U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[0U]));
    }
    if ((0x20U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[0U] 
                  ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_divisor[0U]))) {
        ++(vlSymsp->__Vcoverage[7054]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_divisor[0U] 
            = ((0xffffffdfU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_divisor[0U]) 
               | (0x20U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[0U]));
    }
    if ((0x40U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[0U] 
                  ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_divisor[0U]))) {
        ++(vlSymsp->__Vcoverage[7055]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_divisor[0U] 
            = ((0xffffffbfU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_divisor[0U]) 
               | (0x40U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[0U]));
    }
    if ((0x80U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[0U] 
                  ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_divisor[0U]))) {
        ++(vlSymsp->__Vcoverage[7056]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_divisor[0U] 
            = ((0xffffff7fU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_divisor[0U]) 
               | (0x80U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[0U]));
    }
    if ((0x100U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[0U] 
                   ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_divisor[0U]))) {
        ++(vlSymsp->__Vcoverage[7057]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_divisor[0U] 
            = ((0xfffffeffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_divisor[0U]) 
               | (0x100U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[0U]));
    }
    if ((0x200U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[0U] 
                   ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_divisor[0U]))) {
        ++(vlSymsp->__Vcoverage[7058]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_divisor[0U] 
            = ((0xfffffdffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_divisor[0U]) 
               | (0x200U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[0U]));
    }
    if ((0x400U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[0U] 
                   ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_divisor[0U]))) {
        ++(vlSymsp->__Vcoverage[7059]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_divisor[0U] 
            = ((0xfffffbffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_divisor[0U]) 
               | (0x400U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[0U]));
    }
    if ((0x800U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[0U] 
                   ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_divisor[0U]))) {
        ++(vlSymsp->__Vcoverage[7060]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_divisor[0U] 
            = ((0xfffff7ffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_divisor[0U]) 
               | (0x800U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[0U]));
    }
    if ((0x1000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[0U] 
                    ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_divisor[0U]))) {
        ++(vlSymsp->__Vcoverage[7061]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_divisor[0U] 
            = ((0xffffefffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_divisor[0U]) 
               | (0x1000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[0U]));
    }
    if ((0x2000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[0U] 
                    ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_divisor[0U]))) {
        ++(vlSymsp->__Vcoverage[7062]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_divisor[0U] 
            = ((0xffffdfffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_divisor[0U]) 
               | (0x2000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[0U]));
    }
    if ((0x4000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[0U] 
                    ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_divisor[0U]))) {
        ++(vlSymsp->__Vcoverage[7063]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_divisor[0U] 
            = ((0xffffbfffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_divisor[0U]) 
               | (0x4000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[0U]));
    }
    if ((0x8000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[0U] 
                    ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_divisor[0U]))) {
        ++(vlSymsp->__Vcoverage[7064]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_divisor[0U] 
            = ((0xffff7fffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_divisor[0U]) 
               | (0x8000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[0U]));
    }
    if ((0x10000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[0U] 
                     ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_divisor[0U]))) {
        ++(vlSymsp->__Vcoverage[7065]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_divisor[0U] 
            = ((0xfffeffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_divisor[0U]) 
               | (0x10000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[0U]));
    }
    if ((0x20000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[0U] 
                     ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_divisor[0U]))) {
        ++(vlSymsp->__Vcoverage[7066]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_divisor[0U] 
            = ((0xfffdffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_divisor[0U]) 
               | (0x20000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[0U]));
    }
    if ((0x40000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[0U] 
                     ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_divisor[0U]))) {
        ++(vlSymsp->__Vcoverage[7067]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_divisor[0U] 
            = ((0xfffbffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_divisor[0U]) 
               | (0x40000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[0U]));
    }
    if ((0x80000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[0U] 
                     ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_divisor[0U]))) {
        ++(vlSymsp->__Vcoverage[7068]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_divisor[0U] 
            = ((0xfff7ffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_divisor[0U]) 
               | (0x80000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[0U]));
    }
    if ((0x100000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[0U] 
                      ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_divisor[0U]))) {
        ++(vlSymsp->__Vcoverage[7069]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_divisor[0U] 
            = ((0xffefffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_divisor[0U]) 
               | (0x100000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[0U]));
    }
    if ((0x200000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[0U] 
                      ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_divisor[0U]))) {
        ++(vlSymsp->__Vcoverage[7070]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_divisor[0U] 
            = ((0xffdfffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_divisor[0U]) 
               | (0x200000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[0U]));
    }
    if ((0x400000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[0U] 
                      ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_divisor[0U]))) {
        ++(vlSymsp->__Vcoverage[7071]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_divisor[0U] 
            = ((0xffbfffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_divisor[0U]) 
               | (0x400000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[0U]));
    }
    if ((0x800000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[0U] 
                      ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_divisor[0U]))) {
        ++(vlSymsp->__Vcoverage[7072]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_divisor[0U] 
            = ((0xff7fffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_divisor[0U]) 
               | (0x800000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[0U]));
    }
    if ((0x1000000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[0U] 
                       ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_divisor[0U]))) {
        ++(vlSymsp->__Vcoverage[7073]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_divisor[0U] 
            = ((0xfeffffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_divisor[0U]) 
               | (0x1000000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[0U]));
    }
    if ((0x2000000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[0U] 
                       ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_divisor[0U]))) {
        ++(vlSymsp->__Vcoverage[7074]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_divisor[0U] 
            = ((0xfdffffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_divisor[0U]) 
               | (0x2000000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[0U]));
    }
    if ((0x4000000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[0U] 
                       ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_divisor[0U]))) {
        ++(vlSymsp->__Vcoverage[7075]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_divisor[0U] 
            = ((0xfbffffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_divisor[0U]) 
               | (0x4000000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[0U]));
    }
    if ((0x8000000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[0U] 
                       ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_divisor[0U]))) {
        ++(vlSymsp->__Vcoverage[7076]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_divisor[0U] 
            = ((0xf7ffffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_divisor[0U]) 
               | (0x8000000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[0U]));
    }
    if ((0x10000000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[0U] 
                        ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_divisor[0U]))) {
        ++(vlSymsp->__Vcoverage[7077]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_divisor[0U] 
            = ((0xefffffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_divisor[0U]) 
               | (0x10000000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[0U]));
    }
    if ((0x20000000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[0U] 
                        ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_divisor[0U]))) {
        ++(vlSymsp->__Vcoverage[7078]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_divisor[0U] 
            = ((0xdfffffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_divisor[0U]) 
               | (0x20000000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[0U]));
    }
    if ((0x40000000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[0U] 
                        ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_divisor[0U]))) {
        ++(vlSymsp->__Vcoverage[7079]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_divisor[0U] 
            = ((0xbfffffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_divisor[0U]) 
               | (0x40000000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[0U]));
    }
    if (((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[0U] 
          ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_divisor[0U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[7080]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_divisor[0U] 
            = ((0x7fffffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_divisor[0U]) 
               | (0x80000000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[0U]));
    }
    if ((1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[1U] 
               ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_divisor[1U]))) {
        ++(vlSymsp->__Vcoverage[7081]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_divisor[1U] 
            = ((0xfffffffeU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_divisor[1U]) 
               | (1U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[1U]));
    }
    if ((2U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[1U] 
               ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_divisor[1U]))) {
        ++(vlSymsp->__Vcoverage[7082]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_divisor[1U] 
            = ((0xfffffffdU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_divisor[1U]) 
               | (2U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[1U]));
    }
    if ((4U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[1U] 
               ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_divisor[1U]))) {
        ++(vlSymsp->__Vcoverage[7083]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_divisor[1U] 
            = ((0xfffffffbU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_divisor[1U]) 
               | (4U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[1U]));
    }
    if ((8U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[1U] 
               ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_divisor[1U]))) {
        ++(vlSymsp->__Vcoverage[7084]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_divisor[1U] 
            = ((0xfffffff7U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_divisor[1U]) 
               | (8U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[1U]));
    }
    if ((0x10U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[1U] 
                  ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_divisor[1U]))) {
        ++(vlSymsp->__Vcoverage[7085]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_divisor[1U] 
            = ((0xffffffefU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_divisor[1U]) 
               | (0x10U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[1U]));
    }
    if ((0x20U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[1U] 
                  ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_divisor[1U]))) {
        ++(vlSymsp->__Vcoverage[7086]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_divisor[1U] 
            = ((0xffffffdfU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_divisor[1U]) 
               | (0x20U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[1U]));
    }
    if ((0x40U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[1U] 
                  ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_divisor[1U]))) {
        ++(vlSymsp->__Vcoverage[7087]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_divisor[1U] 
            = ((0xffffffbfU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_divisor[1U]) 
               | (0x40U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[1U]));
    }
    if ((0x80U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[1U] 
                  ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_divisor[1U]))) {
        ++(vlSymsp->__Vcoverage[7088]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_divisor[1U] 
            = ((0xffffff7fU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_divisor[1U]) 
               | (0x80U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[1U]));
    }
    if ((0x100U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[1U] 
                   ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_divisor[1U]))) {
        ++(vlSymsp->__Vcoverage[7089]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_divisor[1U] 
            = ((0xfffffeffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_divisor[1U]) 
               | (0x100U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[1U]));
    }
    if ((0x200U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[1U] 
                   ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_divisor[1U]))) {
        ++(vlSymsp->__Vcoverage[7090]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_divisor[1U] 
            = ((0xfffffdffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_divisor[1U]) 
               | (0x200U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[1U]));
    }
    if ((0x400U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[1U] 
                   ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_divisor[1U]))) {
        ++(vlSymsp->__Vcoverage[7091]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_divisor[1U] 
            = ((0xfffffbffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_divisor[1U]) 
               | (0x400U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[1U]));
    }
    if ((0x800U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[1U] 
                   ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_divisor[1U]))) {
        ++(vlSymsp->__Vcoverage[7092]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_divisor[1U] 
            = ((0xfffff7ffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_divisor[1U]) 
               | (0x800U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[1U]));
    }
    if ((0x1000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[1U] 
                    ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_divisor[1U]))) {
        ++(vlSymsp->__Vcoverage[7093]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_divisor[1U] 
            = ((0xffffefffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_divisor[1U]) 
               | (0x1000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[1U]));
    }
    if ((0x2000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[1U] 
                    ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_divisor[1U]))) {
        ++(vlSymsp->__Vcoverage[7094]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_divisor[1U] 
            = ((0xffffdfffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_divisor[1U]) 
               | (0x2000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[1U]));
    }
    if ((0x4000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[1U] 
                    ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_divisor[1U]))) {
        ++(vlSymsp->__Vcoverage[7095]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_divisor[1U] 
            = ((0xffffbfffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_divisor[1U]) 
               | (0x4000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[1U]));
    }
    if ((0x8000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[1U] 
                    ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_divisor[1U]))) {
        ++(vlSymsp->__Vcoverage[7096]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_divisor[1U] 
            = ((0xffff7fffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_divisor[1U]) 
               | (0x8000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[1U]));
    }
    if ((0x10000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[1U] 
                     ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_divisor[1U]))) {
        ++(vlSymsp->__Vcoverage[7097]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_divisor[1U] 
            = ((0xfffeffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_divisor[1U]) 
               | (0x10000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[1U]));
    }
    if ((0x20000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[1U] 
                     ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_divisor[1U]))) {
        ++(vlSymsp->__Vcoverage[7098]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_divisor[1U] 
            = ((0xfffdffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_divisor[1U]) 
               | (0x20000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[1U]));
    }
    if ((0x40000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[1U] 
                     ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_divisor[1U]))) {
        ++(vlSymsp->__Vcoverage[7099]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_divisor[1U] 
            = ((0xfffbffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_divisor[1U]) 
               | (0x40000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[1U]));
    }
    if ((0x80000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[1U] 
                     ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_divisor[1U]))) {
        ++(vlSymsp->__Vcoverage[7100]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_divisor[1U] 
            = ((0xfff7ffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_divisor[1U]) 
               | (0x80000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[1U]));
    }
    if ((0x100000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[1U] 
                      ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_divisor[1U]))) {
        ++(vlSymsp->__Vcoverage[7101]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_divisor[1U] 
            = ((0xffefffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_divisor[1U]) 
               | (0x100000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[1U]));
    }
    if ((0x200000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[1U] 
                      ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_divisor[1U]))) {
        ++(vlSymsp->__Vcoverage[7102]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_divisor[1U] 
            = ((0xffdfffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_divisor[1U]) 
               | (0x200000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[1U]));
    }
    if ((0x400000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[1U] 
                      ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_divisor[1U]))) {
        ++(vlSymsp->__Vcoverage[7103]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_divisor[1U] 
            = ((0xffbfffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_divisor[1U]) 
               | (0x400000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[1U]));
    }
    if ((0x800000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[1U] 
                      ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_divisor[1U]))) {
        ++(vlSymsp->__Vcoverage[7104]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_divisor[1U] 
            = ((0xff7fffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_divisor[1U]) 
               | (0x800000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[1U]));
    }
    if ((0x1000000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[1U] 
                       ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_divisor[1U]))) {
        ++(vlSymsp->__Vcoverage[7105]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_divisor[1U] 
            = ((0xfeffffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_divisor[1U]) 
               | (0x1000000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[1U]));
    }
    if ((0x2000000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[1U] 
                       ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_divisor[1U]))) {
        ++(vlSymsp->__Vcoverage[7106]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_divisor[1U] 
            = ((0xfdffffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_divisor[1U]) 
               | (0x2000000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[1U]));
    }
    if ((0x4000000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[1U] 
                       ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_divisor[1U]))) {
        ++(vlSymsp->__Vcoverage[7107]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_divisor[1U] 
            = ((0xfbffffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_divisor[1U]) 
               | (0x4000000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[1U]));
    }
    if ((0x8000000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[1U] 
                       ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_divisor[1U]))) {
        ++(vlSymsp->__Vcoverage[7108]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_divisor[1U] 
            = ((0xf7ffffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_divisor[1U]) 
               | (0x8000000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[1U]));
    }
    if ((0x10000000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[1U] 
                        ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_divisor[1U]))) {
        ++(vlSymsp->__Vcoverage[7109]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_divisor[1U] 
            = ((0xefffffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_divisor[1U]) 
               | (0x10000000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[1U]));
    }
    if ((0x20000000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[1U] 
                        ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_divisor[1U]))) {
        ++(vlSymsp->__Vcoverage[7110]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_divisor[1U] 
            = ((0xdfffffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_divisor[1U]) 
               | (0x20000000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[1U]));
    }
    if ((0x40000000U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[1U] 
                        ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_divisor[1U]))) {
        ++(vlSymsp->__Vcoverage[7111]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_divisor[1U] 
            = ((0xbfffffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_divisor[1U]) 
               | (0x40000000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[1U]));
    }
    if (((vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[1U] 
          ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_divisor[1U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[7112]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_divisor[1U] 
            = ((0x7fffffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_divisor[1U]) 
               | (0x80000000U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[1U]));
    }
    if ((1U & (vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[2U] 
               ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_divisor[2U]))) {
        ++(vlSymsp->__Vcoverage[7113]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_divisor[2U] 
            = (1U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[2U]);
    }
    if ((1U & (((IData)(1U) + (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[0U])) 
               ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__neg_divisor[0U]))) {
        ++(vlSymsp->__Vcoverage[7309]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__neg_divisor[0U] 
            = ((0xfffffffeU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__neg_divisor[0U]) 
               | (1U & ((IData)(1U) + (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[0U]))));
    }
    __Vtemp1541[0U] = 1U;
    __Vtemp1541[1U] = 0U;
    __Vtemp1541[2U] = 0U;
    __Vtemp1542[0U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[0U]);
    __Vtemp1542[1U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[1U]);
    __Vtemp1542[2U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[2U]);
    VL_ADD_W(3, __Vtemp1543, __Vtemp1541, __Vtemp1542);
    if ((2U & (__Vtemp1543[0U] ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__neg_divisor[0U]))) {
        ++(vlSymsp->__Vcoverage[7310]);
        __Vtemp1546[0U] = 1U;
        __Vtemp1546[1U] = 0U;
        __Vtemp1546[2U] = 0U;
        __Vtemp1547[0U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[0U]);
        __Vtemp1547[1U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[1U]);
        __Vtemp1547[2U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[2U]);
        VL_ADD_W(3, __Vtemp1548, __Vtemp1546, __Vtemp1547);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__neg_divisor[0U] 
            = ((0xfffffffdU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__neg_divisor[0U]) 
               | (2U & __Vtemp1548[0U]));
    }
    __Vtemp1551[0U] = 1U;
    __Vtemp1551[1U] = 0U;
    __Vtemp1551[2U] = 0U;
    __Vtemp1552[0U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[0U]);
    __Vtemp1552[1U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[1U]);
    __Vtemp1552[2U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[2U]);
    VL_ADD_W(3, __Vtemp1553, __Vtemp1551, __Vtemp1552);
    if ((4U & (__Vtemp1553[0U] ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__neg_divisor[0U]))) {
        ++(vlSymsp->__Vcoverage[7311]);
        __Vtemp1556[0U] = 1U;
        __Vtemp1556[1U] = 0U;
        __Vtemp1556[2U] = 0U;
        __Vtemp1557[0U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[0U]);
        __Vtemp1557[1U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[1U]);
        __Vtemp1557[2U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[2U]);
        VL_ADD_W(3, __Vtemp1558, __Vtemp1556, __Vtemp1557);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__neg_divisor[0U] 
            = ((0xfffffffbU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__neg_divisor[0U]) 
               | (4U & __Vtemp1558[0U]));
    }
    __Vtemp1561[0U] = 1U;
    __Vtemp1561[1U] = 0U;
    __Vtemp1561[2U] = 0U;
    __Vtemp1562[0U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[0U]);
    __Vtemp1562[1U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[1U]);
    __Vtemp1562[2U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[2U]);
    VL_ADD_W(3, __Vtemp1563, __Vtemp1561, __Vtemp1562);
    if ((8U & (__Vtemp1563[0U] ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__neg_divisor[0U]))) {
        ++(vlSymsp->__Vcoverage[7312]);
        __Vtemp1566[0U] = 1U;
        __Vtemp1566[1U] = 0U;
        __Vtemp1566[2U] = 0U;
        __Vtemp1567[0U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[0U]);
        __Vtemp1567[1U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[1U]);
        __Vtemp1567[2U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[2U]);
        VL_ADD_W(3, __Vtemp1568, __Vtemp1566, __Vtemp1567);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__neg_divisor[0U] 
            = ((0xfffffff7U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__neg_divisor[0U]) 
               | (8U & __Vtemp1568[0U]));
    }
    __Vtemp1571[0U] = 1U;
    __Vtemp1571[1U] = 0U;
    __Vtemp1571[2U] = 0U;
    __Vtemp1572[0U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[0U]);
    __Vtemp1572[1U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[1U]);
    __Vtemp1572[2U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[2U]);
    VL_ADD_W(3, __Vtemp1573, __Vtemp1571, __Vtemp1572);
    if ((0x10U & (__Vtemp1573[0U] ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__neg_divisor[0U]))) {
        ++(vlSymsp->__Vcoverage[7313]);
        __Vtemp1576[0U] = 1U;
        __Vtemp1576[1U] = 0U;
        __Vtemp1576[2U] = 0U;
        __Vtemp1577[0U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[0U]);
        __Vtemp1577[1U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[1U]);
        __Vtemp1577[2U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[2U]);
        VL_ADD_W(3, __Vtemp1578, __Vtemp1576, __Vtemp1577);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__neg_divisor[0U] 
            = ((0xffffffefU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__neg_divisor[0U]) 
               | (0x10U & __Vtemp1578[0U]));
    }
    __Vtemp1581[0U] = 1U;
    __Vtemp1581[1U] = 0U;
    __Vtemp1581[2U] = 0U;
    __Vtemp1582[0U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[0U]);
    __Vtemp1582[1U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[1U]);
    __Vtemp1582[2U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[2U]);
    VL_ADD_W(3, __Vtemp1583, __Vtemp1581, __Vtemp1582);
    if ((0x20U & (__Vtemp1583[0U] ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__neg_divisor[0U]))) {
        ++(vlSymsp->__Vcoverage[7314]);
        __Vtemp1586[0U] = 1U;
        __Vtemp1586[1U] = 0U;
        __Vtemp1586[2U] = 0U;
        __Vtemp1587[0U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[0U]);
        __Vtemp1587[1U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[1U]);
        __Vtemp1587[2U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[2U]);
        VL_ADD_W(3, __Vtemp1588, __Vtemp1586, __Vtemp1587);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__neg_divisor[0U] 
            = ((0xffffffdfU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__neg_divisor[0U]) 
               | (0x20U & __Vtemp1588[0U]));
    }
    __Vtemp1591[0U] = 1U;
    __Vtemp1591[1U] = 0U;
    __Vtemp1591[2U] = 0U;
    __Vtemp1592[0U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[0U]);
    __Vtemp1592[1U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[1U]);
    __Vtemp1592[2U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[2U]);
    VL_ADD_W(3, __Vtemp1593, __Vtemp1591, __Vtemp1592);
    if ((0x40U & (__Vtemp1593[0U] ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__neg_divisor[0U]))) {
        ++(vlSymsp->__Vcoverage[7315]);
        __Vtemp1596[0U] = 1U;
        __Vtemp1596[1U] = 0U;
        __Vtemp1596[2U] = 0U;
        __Vtemp1597[0U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[0U]);
        __Vtemp1597[1U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[1U]);
        __Vtemp1597[2U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[2U]);
        VL_ADD_W(3, __Vtemp1598, __Vtemp1596, __Vtemp1597);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__neg_divisor[0U] 
            = ((0xffffffbfU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__neg_divisor[0U]) 
               | (0x40U & __Vtemp1598[0U]));
    }
    __Vtemp1601[0U] = 1U;
    __Vtemp1601[1U] = 0U;
    __Vtemp1601[2U] = 0U;
    __Vtemp1602[0U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[0U]);
    __Vtemp1602[1U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[1U]);
    __Vtemp1602[2U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[2U]);
    VL_ADD_W(3, __Vtemp1603, __Vtemp1601, __Vtemp1602);
    if ((0x80U & (__Vtemp1603[0U] ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__neg_divisor[0U]))) {
        ++(vlSymsp->__Vcoverage[7316]);
        __Vtemp1606[0U] = 1U;
        __Vtemp1606[1U] = 0U;
        __Vtemp1606[2U] = 0U;
        __Vtemp1607[0U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[0U]);
        __Vtemp1607[1U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[1U]);
        __Vtemp1607[2U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[2U]);
        VL_ADD_W(3, __Vtemp1608, __Vtemp1606, __Vtemp1607);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__neg_divisor[0U] 
            = ((0xffffff7fU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__neg_divisor[0U]) 
               | (0x80U & __Vtemp1608[0U]));
    }
    __Vtemp1611[0U] = 1U;
    __Vtemp1611[1U] = 0U;
    __Vtemp1611[2U] = 0U;
    __Vtemp1612[0U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[0U]);
    __Vtemp1612[1U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[1U]);
    __Vtemp1612[2U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[2U]);
    VL_ADD_W(3, __Vtemp1613, __Vtemp1611, __Vtemp1612);
    if ((0x100U & (__Vtemp1613[0U] ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__neg_divisor[0U]))) {
        ++(vlSymsp->__Vcoverage[7317]);
        __Vtemp1616[0U] = 1U;
        __Vtemp1616[1U] = 0U;
        __Vtemp1616[2U] = 0U;
        __Vtemp1617[0U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[0U]);
        __Vtemp1617[1U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[1U]);
        __Vtemp1617[2U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[2U]);
        VL_ADD_W(3, __Vtemp1618, __Vtemp1616, __Vtemp1617);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__neg_divisor[0U] 
            = ((0xfffffeffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__neg_divisor[0U]) 
               | (0x100U & __Vtemp1618[0U]));
    }
    __Vtemp1621[0U] = 1U;
    __Vtemp1621[1U] = 0U;
    __Vtemp1621[2U] = 0U;
    __Vtemp1622[0U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[0U]);
    __Vtemp1622[1U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[1U]);
    __Vtemp1622[2U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[2U]);
    VL_ADD_W(3, __Vtemp1623, __Vtemp1621, __Vtemp1622);
    if ((0x200U & (__Vtemp1623[0U] ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__neg_divisor[0U]))) {
        ++(vlSymsp->__Vcoverage[7318]);
        __Vtemp1626[0U] = 1U;
        __Vtemp1626[1U] = 0U;
        __Vtemp1626[2U] = 0U;
        __Vtemp1627[0U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[0U]);
        __Vtemp1627[1U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[1U]);
        __Vtemp1627[2U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[2U]);
        VL_ADD_W(3, __Vtemp1628, __Vtemp1626, __Vtemp1627);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__neg_divisor[0U] 
            = ((0xfffffdffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__neg_divisor[0U]) 
               | (0x200U & __Vtemp1628[0U]));
    }
    __Vtemp1631[0U] = 1U;
    __Vtemp1631[1U] = 0U;
    __Vtemp1631[2U] = 0U;
    __Vtemp1632[0U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[0U]);
    __Vtemp1632[1U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[1U]);
    __Vtemp1632[2U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[2U]);
    VL_ADD_W(3, __Vtemp1633, __Vtemp1631, __Vtemp1632);
    if ((0x400U & (__Vtemp1633[0U] ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__neg_divisor[0U]))) {
        ++(vlSymsp->__Vcoverage[7319]);
        __Vtemp1636[0U] = 1U;
        __Vtemp1636[1U] = 0U;
        __Vtemp1636[2U] = 0U;
        __Vtemp1637[0U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[0U]);
        __Vtemp1637[1U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[1U]);
        __Vtemp1637[2U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[2U]);
        VL_ADD_W(3, __Vtemp1638, __Vtemp1636, __Vtemp1637);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__neg_divisor[0U] 
            = ((0xfffffbffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__neg_divisor[0U]) 
               | (0x400U & __Vtemp1638[0U]));
    }
    __Vtemp1641[0U] = 1U;
    __Vtemp1641[1U] = 0U;
    __Vtemp1641[2U] = 0U;
    __Vtemp1642[0U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[0U]);
    __Vtemp1642[1U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[1U]);
    __Vtemp1642[2U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[2U]);
    VL_ADD_W(3, __Vtemp1643, __Vtemp1641, __Vtemp1642);
    if ((0x800U & (__Vtemp1643[0U] ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__neg_divisor[0U]))) {
        ++(vlSymsp->__Vcoverage[7320]);
        __Vtemp1646[0U] = 1U;
        __Vtemp1646[1U] = 0U;
        __Vtemp1646[2U] = 0U;
        __Vtemp1647[0U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[0U]);
        __Vtemp1647[1U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[1U]);
        __Vtemp1647[2U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[2U]);
        VL_ADD_W(3, __Vtemp1648, __Vtemp1646, __Vtemp1647);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__neg_divisor[0U] 
            = ((0xfffff7ffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__neg_divisor[0U]) 
               | (0x800U & __Vtemp1648[0U]));
    }
    __Vtemp1651[0U] = 1U;
    __Vtemp1651[1U] = 0U;
    __Vtemp1651[2U] = 0U;
    __Vtemp1652[0U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[0U]);
    __Vtemp1652[1U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[1U]);
    __Vtemp1652[2U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[2U]);
    VL_ADD_W(3, __Vtemp1653, __Vtemp1651, __Vtemp1652);
    if ((0x1000U & (__Vtemp1653[0U] ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__neg_divisor[0U]))) {
        ++(vlSymsp->__Vcoverage[7321]);
        __Vtemp1656[0U] = 1U;
        __Vtemp1656[1U] = 0U;
        __Vtemp1656[2U] = 0U;
        __Vtemp1657[0U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[0U]);
        __Vtemp1657[1U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[1U]);
        __Vtemp1657[2U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[2U]);
        VL_ADD_W(3, __Vtemp1658, __Vtemp1656, __Vtemp1657);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__neg_divisor[0U] 
            = ((0xffffefffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__neg_divisor[0U]) 
               | (0x1000U & __Vtemp1658[0U]));
    }
    __Vtemp1661[0U] = 1U;
    __Vtemp1661[1U] = 0U;
    __Vtemp1661[2U] = 0U;
    __Vtemp1662[0U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[0U]);
    __Vtemp1662[1U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[1U]);
    __Vtemp1662[2U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[2U]);
    VL_ADD_W(3, __Vtemp1663, __Vtemp1661, __Vtemp1662);
    if ((0x2000U & (__Vtemp1663[0U] ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__neg_divisor[0U]))) {
        ++(vlSymsp->__Vcoverage[7322]);
        __Vtemp1666[0U] = 1U;
        __Vtemp1666[1U] = 0U;
        __Vtemp1666[2U] = 0U;
        __Vtemp1667[0U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[0U]);
        __Vtemp1667[1U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[1U]);
        __Vtemp1667[2U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[2U]);
        VL_ADD_W(3, __Vtemp1668, __Vtemp1666, __Vtemp1667);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__neg_divisor[0U] 
            = ((0xffffdfffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__neg_divisor[0U]) 
               | (0x2000U & __Vtemp1668[0U]));
    }
    __Vtemp1671[0U] = 1U;
    __Vtemp1671[1U] = 0U;
    __Vtemp1671[2U] = 0U;
    __Vtemp1672[0U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[0U]);
    __Vtemp1672[1U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[1U]);
    __Vtemp1672[2U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[2U]);
    VL_ADD_W(3, __Vtemp1673, __Vtemp1671, __Vtemp1672);
    if ((0x4000U & (__Vtemp1673[0U] ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__neg_divisor[0U]))) {
        ++(vlSymsp->__Vcoverage[7323]);
        __Vtemp1676[0U] = 1U;
        __Vtemp1676[1U] = 0U;
        __Vtemp1676[2U] = 0U;
        __Vtemp1677[0U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[0U]);
        __Vtemp1677[1U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[1U]);
        __Vtemp1677[2U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[2U]);
        VL_ADD_W(3, __Vtemp1678, __Vtemp1676, __Vtemp1677);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__neg_divisor[0U] 
            = ((0xffffbfffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__neg_divisor[0U]) 
               | (0x4000U & __Vtemp1678[0U]));
    }
    __Vtemp1681[0U] = 1U;
    __Vtemp1681[1U] = 0U;
    __Vtemp1681[2U] = 0U;
    __Vtemp1682[0U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[0U]);
    __Vtemp1682[1U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[1U]);
    __Vtemp1682[2U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[2U]);
    VL_ADD_W(3, __Vtemp1683, __Vtemp1681, __Vtemp1682);
    if ((0x8000U & (__Vtemp1683[0U] ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__neg_divisor[0U]))) {
        ++(vlSymsp->__Vcoverage[7324]);
        __Vtemp1686[0U] = 1U;
        __Vtemp1686[1U] = 0U;
        __Vtemp1686[2U] = 0U;
        __Vtemp1687[0U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[0U]);
        __Vtemp1687[1U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[1U]);
        __Vtemp1687[2U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[2U]);
        VL_ADD_W(3, __Vtemp1688, __Vtemp1686, __Vtemp1687);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__neg_divisor[0U] 
            = ((0xffff7fffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__neg_divisor[0U]) 
               | (0x8000U & __Vtemp1688[0U]));
    }
    __Vtemp1691[0U] = 1U;
    __Vtemp1691[1U] = 0U;
    __Vtemp1691[2U] = 0U;
    __Vtemp1692[0U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[0U]);
    __Vtemp1692[1U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[1U]);
    __Vtemp1692[2U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[2U]);
    VL_ADD_W(3, __Vtemp1693, __Vtemp1691, __Vtemp1692);
    if ((0x10000U & (__Vtemp1693[0U] ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__neg_divisor[0U]))) {
        ++(vlSymsp->__Vcoverage[7325]);
        __Vtemp1696[0U] = 1U;
        __Vtemp1696[1U] = 0U;
        __Vtemp1696[2U] = 0U;
        __Vtemp1697[0U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[0U]);
        __Vtemp1697[1U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[1U]);
        __Vtemp1697[2U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[2U]);
        VL_ADD_W(3, __Vtemp1698, __Vtemp1696, __Vtemp1697);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__neg_divisor[0U] 
            = ((0xfffeffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__neg_divisor[0U]) 
               | (0x10000U & __Vtemp1698[0U]));
    }
    __Vtemp1701[0U] = 1U;
    __Vtemp1701[1U] = 0U;
    __Vtemp1701[2U] = 0U;
    __Vtemp1702[0U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[0U]);
    __Vtemp1702[1U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[1U]);
    __Vtemp1702[2U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[2U]);
    VL_ADD_W(3, __Vtemp1703, __Vtemp1701, __Vtemp1702);
    if ((0x20000U & (__Vtemp1703[0U] ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__neg_divisor[0U]))) {
        ++(vlSymsp->__Vcoverage[7326]);
        __Vtemp1706[0U] = 1U;
        __Vtemp1706[1U] = 0U;
        __Vtemp1706[2U] = 0U;
        __Vtemp1707[0U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[0U]);
        __Vtemp1707[1U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[1U]);
        __Vtemp1707[2U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[2U]);
        VL_ADD_W(3, __Vtemp1708, __Vtemp1706, __Vtemp1707);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__neg_divisor[0U] 
            = ((0xfffdffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__neg_divisor[0U]) 
               | (0x20000U & __Vtemp1708[0U]));
    }
    __Vtemp1711[0U] = 1U;
    __Vtemp1711[1U] = 0U;
    __Vtemp1711[2U] = 0U;
    __Vtemp1712[0U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[0U]);
    __Vtemp1712[1U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[1U]);
    __Vtemp1712[2U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[2U]);
    VL_ADD_W(3, __Vtemp1713, __Vtemp1711, __Vtemp1712);
    if ((0x40000U & (__Vtemp1713[0U] ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__neg_divisor[0U]))) {
        ++(vlSymsp->__Vcoverage[7327]);
        __Vtemp1716[0U] = 1U;
        __Vtemp1716[1U] = 0U;
        __Vtemp1716[2U] = 0U;
        __Vtemp1717[0U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[0U]);
        __Vtemp1717[1U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[1U]);
        __Vtemp1717[2U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[2U]);
        VL_ADD_W(3, __Vtemp1718, __Vtemp1716, __Vtemp1717);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__neg_divisor[0U] 
            = ((0xfffbffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__neg_divisor[0U]) 
               | (0x40000U & __Vtemp1718[0U]));
    }
    __Vtemp1721[0U] = 1U;
    __Vtemp1721[1U] = 0U;
    __Vtemp1721[2U] = 0U;
    __Vtemp1722[0U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[0U]);
    __Vtemp1722[1U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[1U]);
    __Vtemp1722[2U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[2U]);
    VL_ADD_W(3, __Vtemp1723, __Vtemp1721, __Vtemp1722);
    if ((0x80000U & (__Vtemp1723[0U] ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__neg_divisor[0U]))) {
        ++(vlSymsp->__Vcoverage[7328]);
        __Vtemp1726[0U] = 1U;
        __Vtemp1726[1U] = 0U;
        __Vtemp1726[2U] = 0U;
        __Vtemp1727[0U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[0U]);
        __Vtemp1727[1U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[1U]);
        __Vtemp1727[2U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[2U]);
        VL_ADD_W(3, __Vtemp1728, __Vtemp1726, __Vtemp1727);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__neg_divisor[0U] 
            = ((0xfff7ffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__neg_divisor[0U]) 
               | (0x80000U & __Vtemp1728[0U]));
    }
    __Vtemp1731[0U] = 1U;
    __Vtemp1731[1U] = 0U;
    __Vtemp1731[2U] = 0U;
    __Vtemp1732[0U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[0U]);
    __Vtemp1732[1U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[1U]);
    __Vtemp1732[2U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[2U]);
    VL_ADD_W(3, __Vtemp1733, __Vtemp1731, __Vtemp1732);
    if ((0x100000U & (__Vtemp1733[0U] ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__neg_divisor[0U]))) {
        ++(vlSymsp->__Vcoverage[7329]);
        __Vtemp1736[0U] = 1U;
        __Vtemp1736[1U] = 0U;
        __Vtemp1736[2U] = 0U;
        __Vtemp1737[0U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[0U]);
        __Vtemp1737[1U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[1U]);
        __Vtemp1737[2U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[2U]);
        VL_ADD_W(3, __Vtemp1738, __Vtemp1736, __Vtemp1737);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__neg_divisor[0U] 
            = ((0xffefffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__neg_divisor[0U]) 
               | (0x100000U & __Vtemp1738[0U]));
    }
    __Vtemp1741[0U] = 1U;
    __Vtemp1741[1U] = 0U;
    __Vtemp1741[2U] = 0U;
    __Vtemp1742[0U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[0U]);
    __Vtemp1742[1U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[1U]);
    __Vtemp1742[2U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[2U]);
    VL_ADD_W(3, __Vtemp1743, __Vtemp1741, __Vtemp1742);
    if ((0x200000U & (__Vtemp1743[0U] ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__neg_divisor[0U]))) {
        ++(vlSymsp->__Vcoverage[7330]);
        __Vtemp1746[0U] = 1U;
        __Vtemp1746[1U] = 0U;
        __Vtemp1746[2U] = 0U;
        __Vtemp1747[0U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[0U]);
        __Vtemp1747[1U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[1U]);
        __Vtemp1747[2U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[2U]);
        VL_ADD_W(3, __Vtemp1748, __Vtemp1746, __Vtemp1747);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__neg_divisor[0U] 
            = ((0xffdfffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__neg_divisor[0U]) 
               | (0x200000U & __Vtemp1748[0U]));
    }
    __Vtemp1751[0U] = 1U;
    __Vtemp1751[1U] = 0U;
    __Vtemp1751[2U] = 0U;
    __Vtemp1752[0U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[0U]);
    __Vtemp1752[1U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[1U]);
    __Vtemp1752[2U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[2U]);
    VL_ADD_W(3, __Vtemp1753, __Vtemp1751, __Vtemp1752);
    if ((0x400000U & (__Vtemp1753[0U] ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__neg_divisor[0U]))) {
        ++(vlSymsp->__Vcoverage[7331]);
        __Vtemp1756[0U] = 1U;
        __Vtemp1756[1U] = 0U;
        __Vtemp1756[2U] = 0U;
        __Vtemp1757[0U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[0U]);
        __Vtemp1757[1U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[1U]);
        __Vtemp1757[2U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[2U]);
        VL_ADD_W(3, __Vtemp1758, __Vtemp1756, __Vtemp1757);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__neg_divisor[0U] 
            = ((0xffbfffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__neg_divisor[0U]) 
               | (0x400000U & __Vtemp1758[0U]));
    }
    __Vtemp1761[0U] = 1U;
    __Vtemp1761[1U] = 0U;
    __Vtemp1761[2U] = 0U;
    __Vtemp1762[0U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[0U]);
    __Vtemp1762[1U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[1U]);
    __Vtemp1762[2U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[2U]);
    VL_ADD_W(3, __Vtemp1763, __Vtemp1761, __Vtemp1762);
    if ((0x800000U & (__Vtemp1763[0U] ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__neg_divisor[0U]))) {
        ++(vlSymsp->__Vcoverage[7332]);
        __Vtemp1766[0U] = 1U;
        __Vtemp1766[1U] = 0U;
        __Vtemp1766[2U] = 0U;
        __Vtemp1767[0U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[0U]);
        __Vtemp1767[1U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[1U]);
        __Vtemp1767[2U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[2U]);
        VL_ADD_W(3, __Vtemp1768, __Vtemp1766, __Vtemp1767);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__neg_divisor[0U] 
            = ((0xff7fffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__neg_divisor[0U]) 
               | (0x800000U & __Vtemp1768[0U]));
    }
    __Vtemp1771[0U] = 1U;
    __Vtemp1771[1U] = 0U;
    __Vtemp1771[2U] = 0U;
    __Vtemp1772[0U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[0U]);
    __Vtemp1772[1U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[1U]);
    __Vtemp1772[2U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[2U]);
    VL_ADD_W(3, __Vtemp1773, __Vtemp1771, __Vtemp1772);
    if ((0x1000000U & (__Vtemp1773[0U] ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__neg_divisor[0U]))) {
        ++(vlSymsp->__Vcoverage[7333]);
        __Vtemp1776[0U] = 1U;
        __Vtemp1776[1U] = 0U;
        __Vtemp1776[2U] = 0U;
        __Vtemp1777[0U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[0U]);
        __Vtemp1777[1U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[1U]);
        __Vtemp1777[2U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[2U]);
        VL_ADD_W(3, __Vtemp1778, __Vtemp1776, __Vtemp1777);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__neg_divisor[0U] 
            = ((0xfeffffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__neg_divisor[0U]) 
               | (0x1000000U & __Vtemp1778[0U]));
    }
    __Vtemp1781[0U] = 1U;
    __Vtemp1781[1U] = 0U;
    __Vtemp1781[2U] = 0U;
    __Vtemp1782[0U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[0U]);
    __Vtemp1782[1U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[1U]);
    __Vtemp1782[2U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[2U]);
    VL_ADD_W(3, __Vtemp1783, __Vtemp1781, __Vtemp1782);
    if ((0x2000000U & (__Vtemp1783[0U] ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__neg_divisor[0U]))) {
        ++(vlSymsp->__Vcoverage[7334]);
        __Vtemp1786[0U] = 1U;
        __Vtemp1786[1U] = 0U;
        __Vtemp1786[2U] = 0U;
        __Vtemp1787[0U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[0U]);
        __Vtemp1787[1U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[1U]);
        __Vtemp1787[2U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[2U]);
        VL_ADD_W(3, __Vtemp1788, __Vtemp1786, __Vtemp1787);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__neg_divisor[0U] 
            = ((0xfdffffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__neg_divisor[0U]) 
               | (0x2000000U & __Vtemp1788[0U]));
    }
    __Vtemp1791[0U] = 1U;
    __Vtemp1791[1U] = 0U;
    __Vtemp1791[2U] = 0U;
    __Vtemp1792[0U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[0U]);
    __Vtemp1792[1U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[1U]);
    __Vtemp1792[2U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[2U]);
    VL_ADD_W(3, __Vtemp1793, __Vtemp1791, __Vtemp1792);
    if ((0x4000000U & (__Vtemp1793[0U] ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__neg_divisor[0U]))) {
        ++(vlSymsp->__Vcoverage[7335]);
        __Vtemp1796[0U] = 1U;
        __Vtemp1796[1U] = 0U;
        __Vtemp1796[2U] = 0U;
        __Vtemp1797[0U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[0U]);
        __Vtemp1797[1U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[1U]);
        __Vtemp1797[2U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[2U]);
        VL_ADD_W(3, __Vtemp1798, __Vtemp1796, __Vtemp1797);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__neg_divisor[0U] 
            = ((0xfbffffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__neg_divisor[0U]) 
               | (0x4000000U & __Vtemp1798[0U]));
    }
    __Vtemp1801[0U] = 1U;
    __Vtemp1801[1U] = 0U;
    __Vtemp1801[2U] = 0U;
    __Vtemp1802[0U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[0U]);
    __Vtemp1802[1U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[1U]);
    __Vtemp1802[2U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[2U]);
    VL_ADD_W(3, __Vtemp1803, __Vtemp1801, __Vtemp1802);
    if ((0x8000000U & (__Vtemp1803[0U] ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__neg_divisor[0U]))) {
        ++(vlSymsp->__Vcoverage[7336]);
        __Vtemp1806[0U] = 1U;
        __Vtemp1806[1U] = 0U;
        __Vtemp1806[2U] = 0U;
        __Vtemp1807[0U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[0U]);
        __Vtemp1807[1U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[1U]);
        __Vtemp1807[2U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[2U]);
        VL_ADD_W(3, __Vtemp1808, __Vtemp1806, __Vtemp1807);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__neg_divisor[0U] 
            = ((0xf7ffffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__neg_divisor[0U]) 
               | (0x8000000U & __Vtemp1808[0U]));
    }
    __Vtemp1811[0U] = 1U;
    __Vtemp1811[1U] = 0U;
    __Vtemp1811[2U] = 0U;
    __Vtemp1812[0U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[0U]);
    __Vtemp1812[1U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[1U]);
    __Vtemp1812[2U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[2U]);
    VL_ADD_W(3, __Vtemp1813, __Vtemp1811, __Vtemp1812);
    if ((0x10000000U & (__Vtemp1813[0U] ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__neg_divisor[0U]))) {
        ++(vlSymsp->__Vcoverage[7337]);
        __Vtemp1816[0U] = 1U;
        __Vtemp1816[1U] = 0U;
        __Vtemp1816[2U] = 0U;
        __Vtemp1817[0U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[0U]);
        __Vtemp1817[1U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[1U]);
        __Vtemp1817[2U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[2U]);
        VL_ADD_W(3, __Vtemp1818, __Vtemp1816, __Vtemp1817);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__neg_divisor[0U] 
            = ((0xefffffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__neg_divisor[0U]) 
               | (0x10000000U & __Vtemp1818[0U]));
    }
    __Vtemp1821[0U] = 1U;
    __Vtemp1821[1U] = 0U;
    __Vtemp1821[2U] = 0U;
    __Vtemp1822[0U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[0U]);
    __Vtemp1822[1U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[1U]);
    __Vtemp1822[2U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[2U]);
    VL_ADD_W(3, __Vtemp1823, __Vtemp1821, __Vtemp1822);
    if ((0x20000000U & (__Vtemp1823[0U] ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__neg_divisor[0U]))) {
        ++(vlSymsp->__Vcoverage[7338]);
        __Vtemp1826[0U] = 1U;
        __Vtemp1826[1U] = 0U;
        __Vtemp1826[2U] = 0U;
        __Vtemp1827[0U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[0U]);
        __Vtemp1827[1U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[1U]);
        __Vtemp1827[2U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[2U]);
        VL_ADD_W(3, __Vtemp1828, __Vtemp1826, __Vtemp1827);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__neg_divisor[0U] 
            = ((0xdfffffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__neg_divisor[0U]) 
               | (0x20000000U & __Vtemp1828[0U]));
    }
    __Vtemp1831[0U] = 1U;
    __Vtemp1831[1U] = 0U;
    __Vtemp1831[2U] = 0U;
    __Vtemp1832[0U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[0U]);
    __Vtemp1832[1U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[1U]);
    __Vtemp1832[2U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[2U]);
    VL_ADD_W(3, __Vtemp1833, __Vtemp1831, __Vtemp1832);
    if ((0x40000000U & (__Vtemp1833[0U] ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__neg_divisor[0U]))) {
        ++(vlSymsp->__Vcoverage[7339]);
        __Vtemp1836[0U] = 1U;
        __Vtemp1836[1U] = 0U;
        __Vtemp1836[2U] = 0U;
        __Vtemp1837[0U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[0U]);
        __Vtemp1837[1U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[1U]);
        __Vtemp1837[2U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[2U]);
        VL_ADD_W(3, __Vtemp1838, __Vtemp1836, __Vtemp1837);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__neg_divisor[0U] 
            = ((0xbfffffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__neg_divisor[0U]) 
               | (0x40000000U & __Vtemp1838[0U]));
    }
    __Vtemp1841[0U] = 1U;
    __Vtemp1841[1U] = 0U;
    __Vtemp1841[2U] = 0U;
    __Vtemp1842[0U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[0U]);
    __Vtemp1842[1U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[1U]);
    __Vtemp1842[2U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[2U]);
    VL_ADD_W(3, __Vtemp1843, __Vtemp1841, __Vtemp1842);
    if (((__Vtemp1843[0U] ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__neg_divisor[0U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[7340]);
        __Vtemp1846[0U] = 1U;
        __Vtemp1846[1U] = 0U;
        __Vtemp1846[2U] = 0U;
        __Vtemp1847[0U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[0U]);
        __Vtemp1847[1U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[1U]);
        __Vtemp1847[2U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[2U]);
        VL_ADD_W(3, __Vtemp1848, __Vtemp1846, __Vtemp1847);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__neg_divisor[0U] 
            = ((0x7fffffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__neg_divisor[0U]) 
               | (0x80000000U & __Vtemp1848[0U]));
    }
    __Vtemp1851[0U] = 1U;
    __Vtemp1851[1U] = 0U;
    __Vtemp1851[2U] = 0U;
    __Vtemp1852[0U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[0U]);
    __Vtemp1852[1U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[1U]);
    __Vtemp1852[2U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[2U]);
    VL_ADD_W(3, __Vtemp1853, __Vtemp1851, __Vtemp1852);
    if ((1U & (__Vtemp1853[1U] ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__neg_divisor[1U]))) {
        ++(vlSymsp->__Vcoverage[7341]);
        __Vtemp1856[0U] = 1U;
        __Vtemp1856[1U] = 0U;
        __Vtemp1856[2U] = 0U;
        __Vtemp1857[0U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[0U]);
        __Vtemp1857[1U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[1U]);
        __Vtemp1857[2U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[2U]);
        VL_ADD_W(3, __Vtemp1858, __Vtemp1856, __Vtemp1857);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__neg_divisor[1U] 
            = ((0xfffffffeU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__neg_divisor[1U]) 
               | (1U & __Vtemp1858[1U]));
    }
    __Vtemp1861[0U] = 1U;
    __Vtemp1861[1U] = 0U;
    __Vtemp1861[2U] = 0U;
    __Vtemp1862[0U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[0U]);
    __Vtemp1862[1U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[1U]);
    __Vtemp1862[2U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[2U]);
    VL_ADD_W(3, __Vtemp1863, __Vtemp1861, __Vtemp1862);
    if ((2U & (__Vtemp1863[1U] ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__neg_divisor[1U]))) {
        ++(vlSymsp->__Vcoverage[7342]);
        __Vtemp1866[0U] = 1U;
        __Vtemp1866[1U] = 0U;
        __Vtemp1866[2U] = 0U;
        __Vtemp1867[0U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[0U]);
        __Vtemp1867[1U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[1U]);
        __Vtemp1867[2U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[2U]);
        VL_ADD_W(3, __Vtemp1868, __Vtemp1866, __Vtemp1867);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__neg_divisor[1U] 
            = ((0xfffffffdU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__neg_divisor[1U]) 
               | (2U & __Vtemp1868[1U]));
    }
    __Vtemp1871[0U] = 1U;
    __Vtemp1871[1U] = 0U;
    __Vtemp1871[2U] = 0U;
    __Vtemp1872[0U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[0U]);
    __Vtemp1872[1U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[1U]);
    __Vtemp1872[2U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[2U]);
    VL_ADD_W(3, __Vtemp1873, __Vtemp1871, __Vtemp1872);
    if ((4U & (__Vtemp1873[1U] ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__neg_divisor[1U]))) {
        ++(vlSymsp->__Vcoverage[7343]);
        __Vtemp1876[0U] = 1U;
        __Vtemp1876[1U] = 0U;
        __Vtemp1876[2U] = 0U;
        __Vtemp1877[0U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[0U]);
        __Vtemp1877[1U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[1U]);
        __Vtemp1877[2U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[2U]);
        VL_ADD_W(3, __Vtemp1878, __Vtemp1876, __Vtemp1877);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__neg_divisor[1U] 
            = ((0xfffffffbU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__neg_divisor[1U]) 
               | (4U & __Vtemp1878[1U]));
    }
    __Vtemp1881[0U] = 1U;
    __Vtemp1881[1U] = 0U;
    __Vtemp1881[2U] = 0U;
    __Vtemp1882[0U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[0U]);
    __Vtemp1882[1U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[1U]);
    __Vtemp1882[2U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[2U]);
    VL_ADD_W(3, __Vtemp1883, __Vtemp1881, __Vtemp1882);
    if ((8U & (__Vtemp1883[1U] ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__neg_divisor[1U]))) {
        ++(vlSymsp->__Vcoverage[7344]);
        __Vtemp1886[0U] = 1U;
        __Vtemp1886[1U] = 0U;
        __Vtemp1886[2U] = 0U;
        __Vtemp1887[0U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[0U]);
        __Vtemp1887[1U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[1U]);
        __Vtemp1887[2U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[2U]);
        VL_ADD_W(3, __Vtemp1888, __Vtemp1886, __Vtemp1887);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__neg_divisor[1U] 
            = ((0xfffffff7U & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__neg_divisor[1U]) 
               | (8U & __Vtemp1888[1U]));
    }
    __Vtemp1891[0U] = 1U;
    __Vtemp1891[1U] = 0U;
    __Vtemp1891[2U] = 0U;
    __Vtemp1892[0U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[0U]);
    __Vtemp1892[1U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[1U]);
    __Vtemp1892[2U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[2U]);
    VL_ADD_W(3, __Vtemp1893, __Vtemp1891, __Vtemp1892);
    if ((0x10U & (__Vtemp1893[1U] ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__neg_divisor[1U]))) {
        ++(vlSymsp->__Vcoverage[7345]);
        __Vtemp1896[0U] = 1U;
        __Vtemp1896[1U] = 0U;
        __Vtemp1896[2U] = 0U;
        __Vtemp1897[0U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[0U]);
        __Vtemp1897[1U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[1U]);
        __Vtemp1897[2U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[2U]);
        VL_ADD_W(3, __Vtemp1898, __Vtemp1896, __Vtemp1897);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__neg_divisor[1U] 
            = ((0xffffffefU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__neg_divisor[1U]) 
               | (0x10U & __Vtemp1898[1U]));
    }
    __Vtemp1901[0U] = 1U;
    __Vtemp1901[1U] = 0U;
    __Vtemp1901[2U] = 0U;
    __Vtemp1902[0U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[0U]);
    __Vtemp1902[1U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[1U]);
    __Vtemp1902[2U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[2U]);
    VL_ADD_W(3, __Vtemp1903, __Vtemp1901, __Vtemp1902);
    if ((0x20U & (__Vtemp1903[1U] ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__neg_divisor[1U]))) {
        ++(vlSymsp->__Vcoverage[7346]);
        __Vtemp1906[0U] = 1U;
        __Vtemp1906[1U] = 0U;
        __Vtemp1906[2U] = 0U;
        __Vtemp1907[0U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[0U]);
        __Vtemp1907[1U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[1U]);
        __Vtemp1907[2U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[2U]);
        VL_ADD_W(3, __Vtemp1908, __Vtemp1906, __Vtemp1907);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__neg_divisor[1U] 
            = ((0xffffffdfU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__neg_divisor[1U]) 
               | (0x20U & __Vtemp1908[1U]));
    }
    __Vtemp1911[0U] = 1U;
    __Vtemp1911[1U] = 0U;
    __Vtemp1911[2U] = 0U;
    __Vtemp1912[0U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[0U]);
    __Vtemp1912[1U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[1U]);
    __Vtemp1912[2U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[2U]);
    VL_ADD_W(3, __Vtemp1913, __Vtemp1911, __Vtemp1912);
    if ((0x40U & (__Vtemp1913[1U] ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__neg_divisor[1U]))) {
        ++(vlSymsp->__Vcoverage[7347]);
        __Vtemp1916[0U] = 1U;
        __Vtemp1916[1U] = 0U;
        __Vtemp1916[2U] = 0U;
        __Vtemp1917[0U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[0U]);
        __Vtemp1917[1U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[1U]);
        __Vtemp1917[2U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[2U]);
        VL_ADD_W(3, __Vtemp1918, __Vtemp1916, __Vtemp1917);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__neg_divisor[1U] 
            = ((0xffffffbfU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__neg_divisor[1U]) 
               | (0x40U & __Vtemp1918[1U]));
    }
    __Vtemp1921[0U] = 1U;
    __Vtemp1921[1U] = 0U;
    __Vtemp1921[2U] = 0U;
    __Vtemp1922[0U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[0U]);
    __Vtemp1922[1U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[1U]);
    __Vtemp1922[2U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[2U]);
    VL_ADD_W(3, __Vtemp1923, __Vtemp1921, __Vtemp1922);
    if ((0x80U & (__Vtemp1923[1U] ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__neg_divisor[1U]))) {
        ++(vlSymsp->__Vcoverage[7348]);
        __Vtemp1926[0U] = 1U;
        __Vtemp1926[1U] = 0U;
        __Vtemp1926[2U] = 0U;
        __Vtemp1927[0U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[0U]);
        __Vtemp1927[1U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[1U]);
        __Vtemp1927[2U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[2U]);
        VL_ADD_W(3, __Vtemp1928, __Vtemp1926, __Vtemp1927);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__neg_divisor[1U] 
            = ((0xffffff7fU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__neg_divisor[1U]) 
               | (0x80U & __Vtemp1928[1U]));
    }
    __Vtemp1931[0U] = 1U;
    __Vtemp1931[1U] = 0U;
    __Vtemp1931[2U] = 0U;
    __Vtemp1932[0U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[0U]);
    __Vtemp1932[1U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[1U]);
    __Vtemp1932[2U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[2U]);
    VL_ADD_W(3, __Vtemp1933, __Vtemp1931, __Vtemp1932);
    if ((0x100U & (__Vtemp1933[1U] ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__neg_divisor[1U]))) {
        ++(vlSymsp->__Vcoverage[7349]);
        __Vtemp1936[0U] = 1U;
        __Vtemp1936[1U] = 0U;
        __Vtemp1936[2U] = 0U;
        __Vtemp1937[0U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[0U]);
        __Vtemp1937[1U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[1U]);
        __Vtemp1937[2U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[2U]);
        VL_ADD_W(3, __Vtemp1938, __Vtemp1936, __Vtemp1937);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__neg_divisor[1U] 
            = ((0xfffffeffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__neg_divisor[1U]) 
               | (0x100U & __Vtemp1938[1U]));
    }
    __Vtemp1941[0U] = 1U;
    __Vtemp1941[1U] = 0U;
    __Vtemp1941[2U] = 0U;
    __Vtemp1942[0U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[0U]);
    __Vtemp1942[1U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[1U]);
    __Vtemp1942[2U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[2U]);
    VL_ADD_W(3, __Vtemp1943, __Vtemp1941, __Vtemp1942);
    if ((0x200U & (__Vtemp1943[1U] ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__neg_divisor[1U]))) {
        ++(vlSymsp->__Vcoverage[7350]);
        __Vtemp1946[0U] = 1U;
        __Vtemp1946[1U] = 0U;
        __Vtemp1946[2U] = 0U;
        __Vtemp1947[0U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[0U]);
        __Vtemp1947[1U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[1U]);
        __Vtemp1947[2U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[2U]);
        VL_ADD_W(3, __Vtemp1948, __Vtemp1946, __Vtemp1947);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__neg_divisor[1U] 
            = ((0xfffffdffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__neg_divisor[1U]) 
               | (0x200U & __Vtemp1948[1U]));
    }
    __Vtemp1951[0U] = 1U;
    __Vtemp1951[1U] = 0U;
    __Vtemp1951[2U] = 0U;
    __Vtemp1952[0U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[0U]);
    __Vtemp1952[1U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[1U]);
    __Vtemp1952[2U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[2U]);
    VL_ADD_W(3, __Vtemp1953, __Vtemp1951, __Vtemp1952);
    if ((0x400U & (__Vtemp1953[1U] ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__neg_divisor[1U]))) {
        ++(vlSymsp->__Vcoverage[7351]);
        __Vtemp1956[0U] = 1U;
        __Vtemp1956[1U] = 0U;
        __Vtemp1956[2U] = 0U;
        __Vtemp1957[0U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[0U]);
        __Vtemp1957[1U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[1U]);
        __Vtemp1957[2U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[2U]);
        VL_ADD_W(3, __Vtemp1958, __Vtemp1956, __Vtemp1957);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__neg_divisor[1U] 
            = ((0xfffffbffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__neg_divisor[1U]) 
               | (0x400U & __Vtemp1958[1U]));
    }
    __Vtemp1961[0U] = 1U;
    __Vtemp1961[1U] = 0U;
    __Vtemp1961[2U] = 0U;
    __Vtemp1962[0U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[0U]);
    __Vtemp1962[1U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[1U]);
    __Vtemp1962[2U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[2U]);
    VL_ADD_W(3, __Vtemp1963, __Vtemp1961, __Vtemp1962);
    if ((0x800U & (__Vtemp1963[1U] ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__neg_divisor[1U]))) {
        ++(vlSymsp->__Vcoverage[7352]);
        __Vtemp1966[0U] = 1U;
        __Vtemp1966[1U] = 0U;
        __Vtemp1966[2U] = 0U;
        __Vtemp1967[0U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[0U]);
        __Vtemp1967[1U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[1U]);
        __Vtemp1967[2U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[2U]);
        VL_ADD_W(3, __Vtemp1968, __Vtemp1966, __Vtemp1967);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__neg_divisor[1U] 
            = ((0xfffff7ffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__neg_divisor[1U]) 
               | (0x800U & __Vtemp1968[1U]));
    }
    __Vtemp1971[0U] = 1U;
    __Vtemp1971[1U] = 0U;
    __Vtemp1971[2U] = 0U;
    __Vtemp1972[0U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[0U]);
    __Vtemp1972[1U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[1U]);
    __Vtemp1972[2U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[2U]);
    VL_ADD_W(3, __Vtemp1973, __Vtemp1971, __Vtemp1972);
    if ((0x1000U & (__Vtemp1973[1U] ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__neg_divisor[1U]))) {
        ++(vlSymsp->__Vcoverage[7353]);
        __Vtemp1976[0U] = 1U;
        __Vtemp1976[1U] = 0U;
        __Vtemp1976[2U] = 0U;
        __Vtemp1977[0U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[0U]);
        __Vtemp1977[1U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[1U]);
        __Vtemp1977[2U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[2U]);
        VL_ADD_W(3, __Vtemp1978, __Vtemp1976, __Vtemp1977);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__neg_divisor[1U] 
            = ((0xffffefffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__neg_divisor[1U]) 
               | (0x1000U & __Vtemp1978[1U]));
    }
    __Vtemp1981[0U] = 1U;
    __Vtemp1981[1U] = 0U;
    __Vtemp1981[2U] = 0U;
    __Vtemp1982[0U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[0U]);
    __Vtemp1982[1U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[1U]);
    __Vtemp1982[2U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[2U]);
    VL_ADD_W(3, __Vtemp1983, __Vtemp1981, __Vtemp1982);
    if ((0x2000U & (__Vtemp1983[1U] ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__neg_divisor[1U]))) {
        ++(vlSymsp->__Vcoverage[7354]);
        __Vtemp1986[0U] = 1U;
        __Vtemp1986[1U] = 0U;
        __Vtemp1986[2U] = 0U;
        __Vtemp1987[0U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[0U]);
        __Vtemp1987[1U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[1U]);
        __Vtemp1987[2U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[2U]);
        VL_ADD_W(3, __Vtemp1988, __Vtemp1986, __Vtemp1987);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__neg_divisor[1U] 
            = ((0xffffdfffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__neg_divisor[1U]) 
               | (0x2000U & __Vtemp1988[1U]));
    }
    __Vtemp1991[0U] = 1U;
    __Vtemp1991[1U] = 0U;
    __Vtemp1991[2U] = 0U;
    __Vtemp1992[0U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[0U]);
    __Vtemp1992[1U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[1U]);
    __Vtemp1992[2U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[2U]);
    VL_ADD_W(3, __Vtemp1993, __Vtemp1991, __Vtemp1992);
    if ((0x4000U & (__Vtemp1993[1U] ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__neg_divisor[1U]))) {
        ++(vlSymsp->__Vcoverage[7355]);
        __Vtemp1996[0U] = 1U;
        __Vtemp1996[1U] = 0U;
        __Vtemp1996[2U] = 0U;
        __Vtemp1997[0U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[0U]);
        __Vtemp1997[1U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[1U]);
        __Vtemp1997[2U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[2U]);
        VL_ADD_W(3, __Vtemp1998, __Vtemp1996, __Vtemp1997);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__neg_divisor[1U] 
            = ((0xffffbfffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__neg_divisor[1U]) 
               | (0x4000U & __Vtemp1998[1U]));
    }
    __Vtemp2001[0U] = 1U;
    __Vtemp2001[1U] = 0U;
    __Vtemp2001[2U] = 0U;
    __Vtemp2002[0U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[0U]);
    __Vtemp2002[1U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[1U]);
    __Vtemp2002[2U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[2U]);
    VL_ADD_W(3, __Vtemp2003, __Vtemp2001, __Vtemp2002);
    if ((0x8000U & (__Vtemp2003[1U] ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__neg_divisor[1U]))) {
        ++(vlSymsp->__Vcoverage[7356]);
        __Vtemp2006[0U] = 1U;
        __Vtemp2006[1U] = 0U;
        __Vtemp2006[2U] = 0U;
        __Vtemp2007[0U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[0U]);
        __Vtemp2007[1U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[1U]);
        __Vtemp2007[2U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[2U]);
        VL_ADD_W(3, __Vtemp2008, __Vtemp2006, __Vtemp2007);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__neg_divisor[1U] 
            = ((0xffff7fffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__neg_divisor[1U]) 
               | (0x8000U & __Vtemp2008[1U]));
    }
    __Vtemp2011[0U] = 1U;
    __Vtemp2011[1U] = 0U;
    __Vtemp2011[2U] = 0U;
    __Vtemp2012[0U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[0U]);
    __Vtemp2012[1U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[1U]);
    __Vtemp2012[2U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[2U]);
    VL_ADD_W(3, __Vtemp2013, __Vtemp2011, __Vtemp2012);
    if ((0x10000U & (__Vtemp2013[1U] ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__neg_divisor[1U]))) {
        ++(vlSymsp->__Vcoverage[7357]);
        __Vtemp2016[0U] = 1U;
        __Vtemp2016[1U] = 0U;
        __Vtemp2016[2U] = 0U;
        __Vtemp2017[0U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[0U]);
        __Vtemp2017[1U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[1U]);
        __Vtemp2017[2U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[2U]);
        VL_ADD_W(3, __Vtemp2018, __Vtemp2016, __Vtemp2017);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__neg_divisor[1U] 
            = ((0xfffeffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__neg_divisor[1U]) 
               | (0x10000U & __Vtemp2018[1U]));
    }
    __Vtemp2021[0U] = 1U;
    __Vtemp2021[1U] = 0U;
    __Vtemp2021[2U] = 0U;
    __Vtemp2022[0U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[0U]);
    __Vtemp2022[1U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[1U]);
    __Vtemp2022[2U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[2U]);
    VL_ADD_W(3, __Vtemp2023, __Vtemp2021, __Vtemp2022);
    if ((0x20000U & (__Vtemp2023[1U] ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__neg_divisor[1U]))) {
        ++(vlSymsp->__Vcoverage[7358]);
        __Vtemp2026[0U] = 1U;
        __Vtemp2026[1U] = 0U;
        __Vtemp2026[2U] = 0U;
        __Vtemp2027[0U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[0U]);
        __Vtemp2027[1U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[1U]);
        __Vtemp2027[2U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[2U]);
        VL_ADD_W(3, __Vtemp2028, __Vtemp2026, __Vtemp2027);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__neg_divisor[1U] 
            = ((0xfffdffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__neg_divisor[1U]) 
               | (0x20000U & __Vtemp2028[1U]));
    }
    __Vtemp2031[0U] = 1U;
    __Vtemp2031[1U] = 0U;
    __Vtemp2031[2U] = 0U;
    __Vtemp2032[0U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[0U]);
    __Vtemp2032[1U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[1U]);
    __Vtemp2032[2U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[2U]);
    VL_ADD_W(3, __Vtemp2033, __Vtemp2031, __Vtemp2032);
    if ((0x40000U & (__Vtemp2033[1U] ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__neg_divisor[1U]))) {
        ++(vlSymsp->__Vcoverage[7359]);
        __Vtemp2036[0U] = 1U;
        __Vtemp2036[1U] = 0U;
        __Vtemp2036[2U] = 0U;
        __Vtemp2037[0U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[0U]);
        __Vtemp2037[1U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[1U]);
        __Vtemp2037[2U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[2U]);
        VL_ADD_W(3, __Vtemp2038, __Vtemp2036, __Vtemp2037);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__neg_divisor[1U] 
            = ((0xfffbffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__neg_divisor[1U]) 
               | (0x40000U & __Vtemp2038[1U]));
    }
    __Vtemp2041[0U] = 1U;
    __Vtemp2041[1U] = 0U;
    __Vtemp2041[2U] = 0U;
    __Vtemp2042[0U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[0U]);
    __Vtemp2042[1U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[1U]);
    __Vtemp2042[2U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[2U]);
    VL_ADD_W(3, __Vtemp2043, __Vtemp2041, __Vtemp2042);
    if ((0x80000U & (__Vtemp2043[1U] ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__neg_divisor[1U]))) {
        ++(vlSymsp->__Vcoverage[7360]);
        __Vtemp2046[0U] = 1U;
        __Vtemp2046[1U] = 0U;
        __Vtemp2046[2U] = 0U;
        __Vtemp2047[0U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[0U]);
        __Vtemp2047[1U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[1U]);
        __Vtemp2047[2U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[2U]);
        VL_ADD_W(3, __Vtemp2048, __Vtemp2046, __Vtemp2047);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__neg_divisor[1U] 
            = ((0xfff7ffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__neg_divisor[1U]) 
               | (0x80000U & __Vtemp2048[1U]));
    }
    __Vtemp2051[0U] = 1U;
    __Vtemp2051[1U] = 0U;
    __Vtemp2051[2U] = 0U;
    __Vtemp2052[0U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[0U]);
    __Vtemp2052[1U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[1U]);
    __Vtemp2052[2U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[2U]);
    VL_ADD_W(3, __Vtemp2053, __Vtemp2051, __Vtemp2052);
    if ((0x100000U & (__Vtemp2053[1U] ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__neg_divisor[1U]))) {
        ++(vlSymsp->__Vcoverage[7361]);
        __Vtemp2056[0U] = 1U;
        __Vtemp2056[1U] = 0U;
        __Vtemp2056[2U] = 0U;
        __Vtemp2057[0U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[0U]);
        __Vtemp2057[1U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[1U]);
        __Vtemp2057[2U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[2U]);
        VL_ADD_W(3, __Vtemp2058, __Vtemp2056, __Vtemp2057);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__neg_divisor[1U] 
            = ((0xffefffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__neg_divisor[1U]) 
               | (0x100000U & __Vtemp2058[1U]));
    }
    __Vtemp2061[0U] = 1U;
    __Vtemp2061[1U] = 0U;
    __Vtemp2061[2U] = 0U;
    __Vtemp2062[0U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[0U]);
    __Vtemp2062[1U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[1U]);
    __Vtemp2062[2U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[2U]);
    VL_ADD_W(3, __Vtemp2063, __Vtemp2061, __Vtemp2062);
    if ((0x200000U & (__Vtemp2063[1U] ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__neg_divisor[1U]))) {
        ++(vlSymsp->__Vcoverage[7362]);
        __Vtemp2066[0U] = 1U;
        __Vtemp2066[1U] = 0U;
        __Vtemp2066[2U] = 0U;
        __Vtemp2067[0U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[0U]);
        __Vtemp2067[1U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[1U]);
        __Vtemp2067[2U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[2U]);
        VL_ADD_W(3, __Vtemp2068, __Vtemp2066, __Vtemp2067);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__neg_divisor[1U] 
            = ((0xffdfffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__neg_divisor[1U]) 
               | (0x200000U & __Vtemp2068[1U]));
    }
    __Vtemp2071[0U] = 1U;
    __Vtemp2071[1U] = 0U;
    __Vtemp2071[2U] = 0U;
    __Vtemp2072[0U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[0U]);
    __Vtemp2072[1U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[1U]);
    __Vtemp2072[2U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[2U]);
    VL_ADD_W(3, __Vtemp2073, __Vtemp2071, __Vtemp2072);
    if ((0x400000U & (__Vtemp2073[1U] ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__neg_divisor[1U]))) {
        ++(vlSymsp->__Vcoverage[7363]);
        __Vtemp2076[0U] = 1U;
        __Vtemp2076[1U] = 0U;
        __Vtemp2076[2U] = 0U;
        __Vtemp2077[0U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[0U]);
        __Vtemp2077[1U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[1U]);
        __Vtemp2077[2U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[2U]);
        VL_ADD_W(3, __Vtemp2078, __Vtemp2076, __Vtemp2077);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__neg_divisor[1U] 
            = ((0xffbfffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__neg_divisor[1U]) 
               | (0x400000U & __Vtemp2078[1U]));
    }
    __Vtemp2081[0U] = 1U;
    __Vtemp2081[1U] = 0U;
    __Vtemp2081[2U] = 0U;
    __Vtemp2082[0U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[0U]);
    __Vtemp2082[1U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[1U]);
    __Vtemp2082[2U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[2U]);
    VL_ADD_W(3, __Vtemp2083, __Vtemp2081, __Vtemp2082);
    if ((0x800000U & (__Vtemp2083[1U] ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__neg_divisor[1U]))) {
        ++(vlSymsp->__Vcoverage[7364]);
        __Vtemp2086[0U] = 1U;
        __Vtemp2086[1U] = 0U;
        __Vtemp2086[2U] = 0U;
        __Vtemp2087[0U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[0U]);
        __Vtemp2087[1U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[1U]);
        __Vtemp2087[2U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[2U]);
        VL_ADD_W(3, __Vtemp2088, __Vtemp2086, __Vtemp2087);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__neg_divisor[1U] 
            = ((0xff7fffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__neg_divisor[1U]) 
               | (0x800000U & __Vtemp2088[1U]));
    }
    __Vtemp2091[0U] = 1U;
    __Vtemp2091[1U] = 0U;
    __Vtemp2091[2U] = 0U;
    __Vtemp2092[0U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[0U]);
    __Vtemp2092[1U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[1U]);
    __Vtemp2092[2U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[2U]);
    VL_ADD_W(3, __Vtemp2093, __Vtemp2091, __Vtemp2092);
    if ((0x1000000U & (__Vtemp2093[1U] ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__neg_divisor[1U]))) {
        ++(vlSymsp->__Vcoverage[7365]);
        __Vtemp2096[0U] = 1U;
        __Vtemp2096[1U] = 0U;
        __Vtemp2096[2U] = 0U;
        __Vtemp2097[0U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[0U]);
        __Vtemp2097[1U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[1U]);
        __Vtemp2097[2U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[2U]);
        VL_ADD_W(3, __Vtemp2098, __Vtemp2096, __Vtemp2097);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__neg_divisor[1U] 
            = ((0xfeffffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__neg_divisor[1U]) 
               | (0x1000000U & __Vtemp2098[1U]));
    }
    __Vtemp2101[0U] = 1U;
    __Vtemp2101[1U] = 0U;
    __Vtemp2101[2U] = 0U;
    __Vtemp2102[0U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[0U]);
    __Vtemp2102[1U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[1U]);
    __Vtemp2102[2U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[2U]);
    VL_ADD_W(3, __Vtemp2103, __Vtemp2101, __Vtemp2102);
    if ((0x2000000U & (__Vtemp2103[1U] ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__neg_divisor[1U]))) {
        ++(vlSymsp->__Vcoverage[7366]);
        __Vtemp2106[0U] = 1U;
        __Vtemp2106[1U] = 0U;
        __Vtemp2106[2U] = 0U;
        __Vtemp2107[0U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[0U]);
        __Vtemp2107[1U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[1U]);
        __Vtemp2107[2U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[2U]);
        VL_ADD_W(3, __Vtemp2108, __Vtemp2106, __Vtemp2107);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__neg_divisor[1U] 
            = ((0xfdffffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__neg_divisor[1U]) 
               | (0x2000000U & __Vtemp2108[1U]));
    }
    __Vtemp2111[0U] = 1U;
    __Vtemp2111[1U] = 0U;
    __Vtemp2111[2U] = 0U;
    __Vtemp2112[0U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[0U]);
    __Vtemp2112[1U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[1U]);
    __Vtemp2112[2U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[2U]);
    VL_ADD_W(3, __Vtemp2113, __Vtemp2111, __Vtemp2112);
    if ((0x4000000U & (__Vtemp2113[1U] ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__neg_divisor[1U]))) {
        ++(vlSymsp->__Vcoverage[7367]);
        __Vtemp2116[0U] = 1U;
        __Vtemp2116[1U] = 0U;
        __Vtemp2116[2U] = 0U;
        __Vtemp2117[0U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[0U]);
        __Vtemp2117[1U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[1U]);
        __Vtemp2117[2U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[2U]);
        VL_ADD_W(3, __Vtemp2118, __Vtemp2116, __Vtemp2117);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__neg_divisor[1U] 
            = ((0xfbffffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__neg_divisor[1U]) 
               | (0x4000000U & __Vtemp2118[1U]));
    }
    __Vtemp2121[0U] = 1U;
    __Vtemp2121[1U] = 0U;
    __Vtemp2121[2U] = 0U;
    __Vtemp2122[0U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[0U]);
    __Vtemp2122[1U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[1U]);
    __Vtemp2122[2U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[2U]);
    VL_ADD_W(3, __Vtemp2123, __Vtemp2121, __Vtemp2122);
    if ((0x8000000U & (__Vtemp2123[1U] ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__neg_divisor[1U]))) {
        ++(vlSymsp->__Vcoverage[7368]);
        __Vtemp2126[0U] = 1U;
        __Vtemp2126[1U] = 0U;
        __Vtemp2126[2U] = 0U;
        __Vtemp2127[0U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[0U]);
        __Vtemp2127[1U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[1U]);
        __Vtemp2127[2U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[2U]);
        VL_ADD_W(3, __Vtemp2128, __Vtemp2126, __Vtemp2127);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__neg_divisor[1U] 
            = ((0xf7ffffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__neg_divisor[1U]) 
               | (0x8000000U & __Vtemp2128[1U]));
    }
    __Vtemp2131[0U] = 1U;
    __Vtemp2131[1U] = 0U;
    __Vtemp2131[2U] = 0U;
    __Vtemp2132[0U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[0U]);
    __Vtemp2132[1U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[1U]);
    __Vtemp2132[2U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[2U]);
    VL_ADD_W(3, __Vtemp2133, __Vtemp2131, __Vtemp2132);
    if ((0x10000000U & (__Vtemp2133[1U] ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__neg_divisor[1U]))) {
        ++(vlSymsp->__Vcoverage[7369]);
        __Vtemp2136[0U] = 1U;
        __Vtemp2136[1U] = 0U;
        __Vtemp2136[2U] = 0U;
        __Vtemp2137[0U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[0U]);
        __Vtemp2137[1U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[1U]);
        __Vtemp2137[2U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[2U]);
        VL_ADD_W(3, __Vtemp2138, __Vtemp2136, __Vtemp2137);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__neg_divisor[1U] 
            = ((0xefffffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__neg_divisor[1U]) 
               | (0x10000000U & __Vtemp2138[1U]));
    }
    __Vtemp2141[0U] = 1U;
    __Vtemp2141[1U] = 0U;
    __Vtemp2141[2U] = 0U;
    __Vtemp2142[0U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[0U]);
    __Vtemp2142[1U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[1U]);
    __Vtemp2142[2U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[2U]);
    VL_ADD_W(3, __Vtemp2143, __Vtemp2141, __Vtemp2142);
    if ((0x20000000U & (__Vtemp2143[1U] ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__neg_divisor[1U]))) {
        ++(vlSymsp->__Vcoverage[7370]);
        __Vtemp2146[0U] = 1U;
        __Vtemp2146[1U] = 0U;
        __Vtemp2146[2U] = 0U;
        __Vtemp2147[0U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[0U]);
        __Vtemp2147[1U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[1U]);
        __Vtemp2147[2U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[2U]);
        VL_ADD_W(3, __Vtemp2148, __Vtemp2146, __Vtemp2147);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__neg_divisor[1U] 
            = ((0xdfffffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__neg_divisor[1U]) 
               | (0x20000000U & __Vtemp2148[1U]));
    }
    __Vtemp2151[0U] = 1U;
    __Vtemp2151[1U] = 0U;
    __Vtemp2151[2U] = 0U;
    __Vtemp2152[0U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[0U]);
    __Vtemp2152[1U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[1U]);
    __Vtemp2152[2U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[2U]);
    VL_ADD_W(3, __Vtemp2153, __Vtemp2151, __Vtemp2152);
    if ((0x40000000U & (__Vtemp2153[1U] ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__neg_divisor[1U]))) {
        ++(vlSymsp->__Vcoverage[7371]);
        __Vtemp2156[0U] = 1U;
        __Vtemp2156[1U] = 0U;
        __Vtemp2156[2U] = 0U;
        __Vtemp2157[0U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[0U]);
        __Vtemp2157[1U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[1U]);
        __Vtemp2157[2U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[2U]);
        VL_ADD_W(3, __Vtemp2158, __Vtemp2156, __Vtemp2157);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__neg_divisor[1U] 
            = ((0xbfffffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__neg_divisor[1U]) 
               | (0x40000000U & __Vtemp2158[1U]));
    }
    __Vtemp2161[0U] = 1U;
    __Vtemp2161[1U] = 0U;
    __Vtemp2161[2U] = 0U;
    __Vtemp2162[0U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[0U]);
    __Vtemp2162[1U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[1U]);
    __Vtemp2162[2U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[2U]);
    VL_ADD_W(3, __Vtemp2163, __Vtemp2161, __Vtemp2162);
    if (((__Vtemp2163[1U] ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__neg_divisor[1U]) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[7372]);
        __Vtemp2166[0U] = 1U;
        __Vtemp2166[1U] = 0U;
        __Vtemp2166[2U] = 0U;
        __Vtemp2167[0U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[0U]);
        __Vtemp2167[1U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[1U]);
        __Vtemp2167[2U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[2U]);
        VL_ADD_W(3, __Vtemp2168, __Vtemp2166, __Vtemp2167);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__neg_divisor[1U] 
            = ((0x7fffffffU & vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__neg_divisor[1U]) 
               | (0x80000000U & __Vtemp2168[1U]));
    }
    __Vtemp2171[0U] = 1U;
    __Vtemp2171[1U] = 0U;
    __Vtemp2171[2U] = 0U;
    __Vtemp2172[0U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[0U]);
    __Vtemp2172[1U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[1U]);
    __Vtemp2172[2U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[2U]);
    VL_ADD_W(3, __Vtemp2173, __Vtemp2171, __Vtemp2172);
    if ((1U & ((1U & __Vtemp2173[2U]) ^ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__neg_divisor[2U]))) {
        ++(vlSymsp->__Vcoverage[7373]);
        __Vtemp2176[0U] = 1U;
        __Vtemp2176[1U] = 0U;
        __Vtemp2176[2U] = 0U;
        __Vtemp2177[0U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[0U]);
        __Vtemp2177[1U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[1U]);
        __Vtemp2177[2U] = (~ vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_divisor[2U]);
        VL_ADD_W(3, __Vtemp2178, __Vtemp2176, __Vtemp2177);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__neg_divisor[2U] 
            = (1U & __Vtemp2178[2U]);
    }
    if (((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_out_valid) 
         ^ (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT____Vtogcov__div_io_out_valid))) {
        ++(vlSymsp->__Vcoverage[6851]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT____Vtogcov__div_io_out_valid 
            = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_out_valid;
    }
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT___GEN_3 
        = ((2U == (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_state)) 
           | (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_out_valid));
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu_io_out_valid 
        = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_out_valid) 
           | (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_out_valid));
    if ((1U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_exuType) 
               ^ (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_exuType)))) {
        ++(vlSymsp->__Vcoverage[7383]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_exuType 
            = ((0x3eU & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_exuType)) 
               | (1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_exuType)));
    }
    if ((2U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_exuType) 
               ^ (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_exuType)))) {
        ++(vlSymsp->__Vcoverage[7384]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_exuType 
            = ((0x3dU & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_exuType)) 
               | (2U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_exuType)));
    }
    if ((4U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_exuType) 
               ^ (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_exuType)))) {
        ++(vlSymsp->__Vcoverage[7385]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_exuType 
            = ((0x3bU & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_exuType)) 
               | (4U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_exuType)));
    }
    if ((8U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_exuType) 
               ^ (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_exuType)))) {
        ++(vlSymsp->__Vcoverage[7386]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_exuType 
            = ((0x37U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_exuType)) 
               | (8U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_exuType)));
    }
    if ((0x10U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_exuType) 
                  ^ (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_exuType)))) {
        ++(vlSymsp->__Vcoverage[7387]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_exuType 
            = ((0x2fU & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_exuType)) 
               | (0x10U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_exuType)));
    }
    if ((0x20U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_exuType) 
                  ^ (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_exuType)))) {
        ++(vlSymsp->__Vcoverage[7388]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_exuType 
            = ((0x1fU & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT____Vtogcov__reg_exuType)) 
               | (0x20U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_exuType)));
    }
    if ((4U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_exuType))) {
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT___io_result_T_1[0U] 
            = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[0U];
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT___io_result_T_1[1U] 
            = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[1U];
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT___io_result_T_1[2U] 
            = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_rem[2U];
    } else {
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT___io_result_T_1[0U] 
            = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_q[0U];
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT___io_result_T_1[1U] 
            = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_q[1U];
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT___io_result_T_1[2U] 
            = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_q[2U];
    }
    if (((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_stall) 
         ^ (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT____Vtogcov__div_io_stall))) {
        ++(vlSymsp->__Vcoverage[6850]);
        vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT____Vtogcov__div_io_stall 
            = vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_stall;
    }
    vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu_io_stall 
        = ((IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__div__DOT__reg_stall) 
           | (IData)(vlSelf->riscv_soc__DOT__core__DOT__execute__DOT__mu_exu__DOT__mul__DOT__reg_stall));
    if ((1U & ((IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                       [1U]) ^ (IData)(vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_1)))) {
        ++(vlSymsp->__Vcoverage[2510]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_1 
            = ((0xfffffffffffffffeULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_1) 
               | (IData)((IData)((1U & (IData)(vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                               [1U])))));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [1U] >> 1U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_1 
                                                >> 1U))))) {
        ++(vlSymsp->__Vcoverage[2511]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_1 
            = ((0xfffffffffffffffdULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [1U] 
                                                 >> 1U))))) 
                  << 1U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [1U] >> 2U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_1 
                                                >> 2U))))) {
        ++(vlSymsp->__Vcoverage[2512]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_1 
            = ((0xfffffffffffffffbULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [1U] 
                                                 >> 2U))))) 
                  << 2U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [1U] >> 3U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_1 
                                                >> 3U))))) {
        ++(vlSymsp->__Vcoverage[2513]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_1 
            = ((0xfffffffffffffff7ULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [1U] 
                                                 >> 3U))))) 
                  << 3U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [1U] >> 4U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_1 
                                                >> 4U))))) {
        ++(vlSymsp->__Vcoverage[2514]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_1 
            = ((0xffffffffffffffefULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [1U] 
                                                 >> 4U))))) 
                  << 4U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [1U] >> 5U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_1 
                                                >> 5U))))) {
        ++(vlSymsp->__Vcoverage[2515]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_1 
            = ((0xffffffffffffffdfULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [1U] 
                                                 >> 5U))))) 
                  << 5U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [1U] >> 6U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_1 
                                                >> 6U))))) {
        ++(vlSymsp->__Vcoverage[2516]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_1 
            = ((0xffffffffffffffbfULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [1U] 
                                                 >> 6U))))) 
                  << 6U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [1U] >> 7U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_1 
                                                >> 7U))))) {
        ++(vlSymsp->__Vcoverage[2517]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_1 
            = ((0xffffffffffffff7fULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [1U] 
                                                 >> 7U))))) 
                  << 7U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [1U] >> 8U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_1 
                                                >> 8U))))) {
        ++(vlSymsp->__Vcoverage[2518]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_1 
            = ((0xfffffffffffffeffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [1U] 
                                                 >> 8U))))) 
                  << 8U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [1U] >> 9U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_1 
                                                >> 9U))))) {
        ++(vlSymsp->__Vcoverage[2519]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_1 
            = ((0xfffffffffffffdffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [1U] 
                                                 >> 9U))))) 
                  << 9U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [1U] >> 0xaU)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_1 
                                                  >> 0xaU))))) {
        ++(vlSymsp->__Vcoverage[2520]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_1 
            = ((0xfffffffffffffbffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [1U] 
                                                 >> 0xaU))))) 
                  << 0xaU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [1U] >> 0xbU)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_1 
                                                  >> 0xbU))))) {
        ++(vlSymsp->__Vcoverage[2521]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_1 
            = ((0xfffffffffffff7ffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [1U] 
                                                 >> 0xbU))))) 
                  << 0xbU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [1U] >> 0xcU)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_1 
                                                  >> 0xcU))))) {
        ++(vlSymsp->__Vcoverage[2522]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_1 
            = ((0xffffffffffffefffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [1U] 
                                                 >> 0xcU))))) 
                  << 0xcU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [1U] >> 0xdU)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_1 
                                                  >> 0xdU))))) {
        ++(vlSymsp->__Vcoverage[2523]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_1 
            = ((0xffffffffffffdfffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [1U] 
                                                 >> 0xdU))))) 
                  << 0xdU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [1U] >> 0xeU)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_1 
                                                  >> 0xeU))))) {
        ++(vlSymsp->__Vcoverage[2524]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_1 
            = ((0xffffffffffffbfffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [1U] 
                                                 >> 0xeU))))) 
                  << 0xeU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [1U] >> 0xfU)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_1 
                                                  >> 0xfU))))) {
        ++(vlSymsp->__Vcoverage[2525]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_1 
            = ((0xffffffffffff7fffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [1U] 
                                                 >> 0xfU))))) 
                  << 0xfU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [1U] >> 0x10U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_1 
                                                   >> 0x10U))))) {
        ++(vlSymsp->__Vcoverage[2526]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_1 
            = ((0xfffffffffffeffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [1U] 
                                                 >> 0x10U))))) 
                  << 0x10U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [1U] >> 0x11U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_1 
                                                   >> 0x11U))))) {
        ++(vlSymsp->__Vcoverage[2527]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_1 
            = ((0xfffffffffffdffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [1U] 
                                                 >> 0x11U))))) 
                  << 0x11U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [1U] >> 0x12U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_1 
                                                   >> 0x12U))))) {
        ++(vlSymsp->__Vcoverage[2528]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_1 
            = ((0xfffffffffffbffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [1U] 
                                                 >> 0x12U))))) 
                  << 0x12U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [1U] >> 0x13U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_1 
                                                   >> 0x13U))))) {
        ++(vlSymsp->__Vcoverage[2529]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_1 
            = ((0xfffffffffff7ffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [1U] 
                                                 >> 0x13U))))) 
                  << 0x13U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [1U] >> 0x14U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_1 
                                                   >> 0x14U))))) {
        ++(vlSymsp->__Vcoverage[2530]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_1 
            = ((0xffffffffffefffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [1U] 
                                                 >> 0x14U))))) 
                  << 0x14U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [1U] >> 0x15U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_1 
                                                   >> 0x15U))))) {
        ++(vlSymsp->__Vcoverage[2531]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_1 
            = ((0xffffffffffdfffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [1U] 
                                                 >> 0x15U))))) 
                  << 0x15U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [1U] >> 0x16U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_1 
                                                   >> 0x16U))))) {
        ++(vlSymsp->__Vcoverage[2532]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_1 
            = ((0xffffffffffbfffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [1U] 
                                                 >> 0x16U))))) 
                  << 0x16U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [1U] >> 0x17U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_1 
                                                   >> 0x17U))))) {
        ++(vlSymsp->__Vcoverage[2533]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_1 
            = ((0xffffffffff7fffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [1U] 
                                                 >> 0x17U))))) 
                  << 0x17U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [1U] >> 0x18U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_1 
                                                   >> 0x18U))))) {
        ++(vlSymsp->__Vcoverage[2534]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_1 
            = ((0xfffffffffeffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [1U] 
                                                 >> 0x18U))))) 
                  << 0x18U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [1U] >> 0x19U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_1 
                                                   >> 0x19U))))) {
        ++(vlSymsp->__Vcoverage[2535]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_1 
            = ((0xfffffffffdffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [1U] 
                                                 >> 0x19U))))) 
                  << 0x19U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [1U] >> 0x1aU)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_1 
                                                   >> 0x1aU))))) {
        ++(vlSymsp->__Vcoverage[2536]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_1 
            = ((0xfffffffffbffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [1U] 
                                                 >> 0x1aU))))) 
                  << 0x1aU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [1U] >> 0x1bU)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_1 
                                                   >> 0x1bU))))) {
        ++(vlSymsp->__Vcoverage[2537]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_1 
            = ((0xfffffffff7ffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [1U] 
                                                 >> 0x1bU))))) 
                  << 0x1bU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [1U] >> 0x1cU)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_1 
                                                   >> 0x1cU))))) {
        ++(vlSymsp->__Vcoverage[2538]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_1 
            = ((0xffffffffefffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [1U] 
                                                 >> 0x1cU))))) 
                  << 0x1cU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [1U] >> 0x1dU)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_1 
                                                   >> 0x1dU))))) {
        ++(vlSymsp->__Vcoverage[2539]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_1 
            = ((0xffffffffdfffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [1U] 
                                                 >> 0x1dU))))) 
                  << 0x1dU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [1U] >> 0x1eU)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_1 
                                                   >> 0x1eU))))) {
        ++(vlSymsp->__Vcoverage[2540]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_1 
            = ((0xffffffffbfffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [1U] 
                                                 >> 0x1eU))))) 
                  << 0x1eU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [1U] >> 0x1fU)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_1 
                                                   >> 0x1fU))))) {
        ++(vlSymsp->__Vcoverage[2541]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_1 
            = ((0xffffffff7fffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [1U] 
                                                 >> 0x1fU))))) 
                  << 0x1fU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [1U] >> 0x20U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_1 
                                                   >> 0x20U))))) {
        ++(vlSymsp->__Vcoverage[2542]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_1 
            = ((0xfffffffeffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [1U] 
                                                 >> 0x20U))))) 
                  << 0x20U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [1U] >> 0x21U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_1 
                                                   >> 0x21U))))) {
        ++(vlSymsp->__Vcoverage[2543]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_1 
            = ((0xfffffffdffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [1U] 
                                                 >> 0x21U))))) 
                  << 0x21U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [1U] >> 0x22U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_1 
                                                   >> 0x22U))))) {
        ++(vlSymsp->__Vcoverage[2544]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_1 
            = ((0xfffffffbffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [1U] 
                                                 >> 0x22U))))) 
                  << 0x22U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [1U] >> 0x23U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_1 
                                                   >> 0x23U))))) {
        ++(vlSymsp->__Vcoverage[2545]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_1 
            = ((0xfffffff7ffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [1U] 
                                                 >> 0x23U))))) 
                  << 0x23U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [1U] >> 0x24U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_1 
                                                   >> 0x24U))))) {
        ++(vlSymsp->__Vcoverage[2546]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_1 
            = ((0xffffffefffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [1U] 
                                                 >> 0x24U))))) 
                  << 0x24U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [1U] >> 0x25U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_1 
                                                   >> 0x25U))))) {
        ++(vlSymsp->__Vcoverage[2547]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_1 
            = ((0xffffffdfffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [1U] 
                                                 >> 0x25U))))) 
                  << 0x25U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [1U] >> 0x26U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_1 
                                                   >> 0x26U))))) {
        ++(vlSymsp->__Vcoverage[2548]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_1 
            = ((0xffffffbfffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [1U] 
                                                 >> 0x26U))))) 
                  << 0x26U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [1U] >> 0x27U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_1 
                                                   >> 0x27U))))) {
        ++(vlSymsp->__Vcoverage[2549]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_1 
            = ((0xffffff7fffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [1U] 
                                                 >> 0x27U))))) 
                  << 0x27U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [1U] >> 0x28U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_1 
                                                   >> 0x28U))))) {
        ++(vlSymsp->__Vcoverage[2550]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_1 
            = ((0xfffffeffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [1U] 
                                                 >> 0x28U))))) 
                  << 0x28U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [1U] >> 0x29U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_1 
                                                   >> 0x29U))))) {
        ++(vlSymsp->__Vcoverage[2551]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_1 
            = ((0xfffffdffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [1U] 
                                                 >> 0x29U))))) 
                  << 0x29U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [1U] >> 0x2aU)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_1 
                                                   >> 0x2aU))))) {
        ++(vlSymsp->__Vcoverage[2552]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_1 
            = ((0xfffffbffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [1U] 
                                                 >> 0x2aU))))) 
                  << 0x2aU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [1U] >> 0x2bU)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_1 
                                                   >> 0x2bU))))) {
        ++(vlSymsp->__Vcoverage[2553]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_1 
            = ((0xfffff7ffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [1U] 
                                                 >> 0x2bU))))) 
                  << 0x2bU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [1U] >> 0x2cU)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_1 
                                                   >> 0x2cU))))) {
        ++(vlSymsp->__Vcoverage[2554]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_1 
            = ((0xffffefffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [1U] 
                                                 >> 0x2cU))))) 
                  << 0x2cU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [1U] >> 0x2dU)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_1 
                                                   >> 0x2dU))))) {
        ++(vlSymsp->__Vcoverage[2555]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_1 
            = ((0xffffdfffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [1U] 
                                                 >> 0x2dU))))) 
                  << 0x2dU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [1U] >> 0x2eU)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_1 
                                                   >> 0x2eU))))) {
        ++(vlSymsp->__Vcoverage[2556]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_1 
            = ((0xffffbfffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [1U] 
                                                 >> 0x2eU))))) 
                  << 0x2eU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [1U] >> 0x2fU)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_1 
                                                   >> 0x2fU))))) {
        ++(vlSymsp->__Vcoverage[2557]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_1 
            = ((0xffff7fffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [1U] 
                                                 >> 0x2fU))))) 
                  << 0x2fU));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [1U] >> 0x30U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_1 
                                                   >> 0x30U))))) {
        ++(vlSymsp->__Vcoverage[2558]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_1 
            = ((0xfffeffffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [1U] 
                                                 >> 0x30U))))) 
                  << 0x30U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [1U] >> 0x31U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_1 
                                                   >> 0x31U))))) {
        ++(vlSymsp->__Vcoverage[2559]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_1 
            = ((0xfffdffffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [1U] 
                                                 >> 0x31U))))) 
                  << 0x31U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [1U] >> 0x32U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_1 
                                                   >> 0x32U))))) {
        ++(vlSymsp->__Vcoverage[2560]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_1 
            = ((0xfffbffffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [1U] 
                                                 >> 0x32U))))) 
                  << 0x32U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [1U] >> 0x33U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_1 
                                                   >> 0x33U))))) {
        ++(vlSymsp->__Vcoverage[2561]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_1 
            = ((0xfff7ffffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [1U] 
                                                 >> 0x33U))))) 
                  << 0x33U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [1U] >> 0x34U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_1 
                                                   >> 0x34U))))) {
        ++(vlSymsp->__Vcoverage[2562]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_1 
            = ((0xffefffffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [1U] 
                                                 >> 0x34U))))) 
                  << 0x34U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [1U] >> 0x35U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_1 
                                                   >> 0x35U))))) {
        ++(vlSymsp->__Vcoverage[2563]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_1 
            = ((0xffdfffffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [1U] 
                                                 >> 0x35U))))) 
                  << 0x35U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [1U] >> 0x36U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_1 
                                                   >> 0x36U))))) {
        ++(vlSymsp->__Vcoverage[2564]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_1 
            = ((0xffbfffffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [1U] 
                                                 >> 0x36U))))) 
                  << 0x36U));
    }
    if ((1U & ((IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                        [1U] >> 0x37U)) ^ (IData)((vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_1 
                                                   >> 0x37U))))) {
        ++(vlSymsp->__Vcoverage[2565]);
        vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_1 
            = ((0xff7fffffffffffffULL & vlSelf->riscv_soc__DOT____Vtogcov__core___05FWIRE_1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->riscv_soc__DOT__core__DOT__decode__DOT__regfile
                                                 [1U] 
                                                 >> 0x37U))))) 
                  << 0x37U));
    }
}
