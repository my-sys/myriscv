import chisel3._ 
import chisel3.util._ 

object CSRType{
    def csr_csrrc   = "b00000".U
    def csr_csrrci  = "b00001".U 
    def csr_csrrs   = "b00010".U 
    def csr_csrrsi  = "b00011".U 
    def csr_csrrw   = "b00100".U 
    def csr_csrrwi  = "b00101".U
}

class CSR_EXU extends Module with CoreParameters{
    val io = IO(new Bundle{
        //val valid       = Input(Bool())
        val exuType     = Input(UInt(ExuTypeLen.W))
        val csr_data    = Input(UInt(CsrDataLen.W))
        val imm_data    = Input(UInt(64.W))
        val rd_result   = Output(UInt(RegDataLen.W))
        val csr_result  = Output(UInt(CsrDataLen.W))
    })

} 