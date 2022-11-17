import chisel3._ 
import chisel3.util._ 

trait CoreParameters{
    val XLEN = 64
    val AddrLen = 64
    val InstLen = 32
    val RegAddrLen = 5
    val RegDataLen = 64
    val CsrDataLen = 64
    val CsrAddrLen = 5
    val ImmLen  = 12
    val OpTypeLen = 5
    val ExuTypeLen = 5
    val InstTypeLen = 5
}