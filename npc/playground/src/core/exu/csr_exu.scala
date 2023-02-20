import chisel3._ 
import chisel3.util._ 

object CSRType{
    
    def csr_csrrs   = "b0001_0".U 
    def csr_csrrsi  = "b0001_1".U 
    def csr_csrrw   = "b0010_0".U 
    def csr_csrrwi  = "b0010_1".U
	def csr_csrrc   = "b0011_0".U
    def csr_csrrci  = "b0011_1".U 
}

class CSR_EXU extends Module with CoreParameters{
    val io = IO(new Bundle{
        val valid       = Input(Bool())
        val exuType     = Input(UInt(ExuTypeLen.W))
        val csr_data    = Input(UInt(CsrDataLen.W))
        val imm_data    = Input(UInt(64.W))
        val rd_result   = Output(UInt(RegDataLen.W))
        val csr_result  = Output(UInt(CsrDataLen.W))
    })
	val reg_rd_result	= RegInit(0.U(64.W))
	val reg_csr_result 	= RegInit(0.U(64.W))
    io.rd_result        := reg_rd_result
    io.csr_result       := reg_csr_result
} 