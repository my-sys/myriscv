import chisel3._ 
import chisel3.util._ 

object MUType{
    def mu_div      = "b000000".U 
    def mu_divu     = "b000001".U 
    def mu_divuw    = "b000010".U 
    def mu_divw     = "b000011".U 
    def mu_mul      = "b000100".U 
    def mu_mulh     = "b000101".U 
    def mu_mulhsu   = "b000110".U 
    def mu_mulhu    = "b000111".U
    def mu_mulw     = "b001000".U 
    def mu_rem      = "b001001".U 
    def mu_remu     = "b001010".U 
    def mu_remuw    = "b001011".U 
    def mu_remw     = "b001100".U
}

class MU_EXU extends Module with CoreParameters{
    val io = IO(new Bundle{
        val exuType     = Input(UInt(ExuTypeLen.W))
        val rs1_data    = Input(UInt(RegDataLen.W))
        val rs2_data    = Input(UInt(RegDataLen.W))
        val imm_data    = Input(UInt(ImmLen.W))
        val result_data = Output(UInt(RegDataLen.W))
    })

    io.result_data      := 0.U
}   