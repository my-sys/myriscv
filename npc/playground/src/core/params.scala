import chisel3._ 
import chisel3.util._ 

trait CoreParameters{
    val XLEN = 64
    val AddrLen = 64
    val InstLen = 32

    val RegAddrLen = 5
    val RegDataLen = 64

    val CsrDataLen = 64
    val CsrAddrLen = 12
    val ImmLen  = 64
    val OpTypeLen = 3
    val ExuTypeLen = 6
    val InstTypeLen = 5
}