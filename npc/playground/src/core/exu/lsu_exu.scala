import chisel3._ 
import chisel3.util._ 

object LsuType{
    def lsu_ld      = "b000000".U
    def lsu_lb      = "b000001".U
    def lsu_lbu     = "b000010".U
    def lsu_lh      = "b000011".U 
    def lsu_lhu     = "b000100".U
    def lsu_lui     = "b000101".U 
    def lsu_lw      = "b000110".U 
    def lsu_lwu     = "b000111".U 
    def lsu_sd      = "b001000".U 
    def lsu_sb      = "b001001".U 
    def lsu_sh      = "b001010".U
    def lsu_sw      = "b001011".U
}

class LSU_EXU extends Module with CoreParameters{
    val io = IO(new Bundle{
        val exuType             = Input(UInt(ExuTypeLen.W))  
        val rs1_data            = Input(UInt(RegDataLen.W))
        val imm_data            = Input(UInt(ImmLen.W))
        val address_result      = Output(UInt(RegDataLen.W))
    })
}