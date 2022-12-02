import chisel3._ 
import chisel3.util._ 

object LSUType{
    def lsu_ld      = "b000000".U
    def lsu_lb      = "b000001".U
    def lsu_lbu     = "b000010".U
    def lsu_lh      = "b000011".U 
    def lsu_lhu     = "b000100".U
    //def lsu_lui     = "b000101".U 
    def lsu_lw      = "b000110".U 
    def lsu_lwu     = "b000111".U 
    def lsu_sd      = "b001000".U 
    def lsu_sb      = "b001001".U 
    def lsu_sh      = "b001010".U
    def lsu_sw      = "b001011".U
}
// 取指阶段，译码阶段，执行阶段都需要正确识别stall  .
class LSU_EXU extends Module with CoreParameters{
    val io = IO(new Bundle{
		val valid 				= Input(Bool())
        val exuType             = Input(UInt(ExuTypeLen.W))  
        val rs1_data            = Input(UInt(RegDataLen.W))
        val imm_data            = Input(UInt(ImmLen.W))
        val address_result      = Output(UInt(RegDataLen.W))
		val avalid				= Output(Bool())
		val w_mem_en			= Output(Bool())
    })

	val rs1_data 	= io.rs1_data
	val exuType		= io.exuType
	val imm_data	= io.imm_data
    io.address_result := (rs1_data + imm_data)
	io.avalid		= io.valid 
	io.w_mem_en 	= io.valid & exuType(3)
}