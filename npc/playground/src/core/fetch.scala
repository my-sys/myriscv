import chisel3._
import chisel3.util._ 
import chisel3.util.experimental.BoringUtils

///1 "hff".U
//2 "o377".U
//3 "b1111_1111".U
class Fetch extends Module{
    val io = IO(new Bundle {
        val in = new Bundle{
            val inst    = Input(UInt(64.W))
			val valid 	= Input(Bool())

			val de_stall 	= Input(Bool())
			val wb_stall  	= Input(Bool())
            val next_pc 	= Input(UInt(64.W))
            val valid_next_pc = Input(Bool())
			val flush 		= Input(Bool())
        }

        val out = new Bundle{
            val pc0     = Output(UInt(64.W))
			val rvalid	= Output(Bool())
			val pc1		= Output(UInt(64.W))
            val inst    = Output(UInt(32.W))
        }        
    })

    val inst            = io.in.inst
	val valid 			= io.in.valid 
    val next_pc         = io.in.next_pc
    val valid_next_pc   = io.in.valid_next_pc

	val stall 			= io.in.de_stall | io.in.wb_stall

// 指令地址自增，与判断下一个指令地址
// 指令的初始执行位置为0x8000_0000 Reset_Vector
	val regPC 		= RegInit("h8000_0000".U(64.W))
	val pc_valid 	= RegInit(true.B)


	// when((valid&(!stall))|valid_next_pc){
	// 	regPC 		:= Mux(valid_next_pc,next_pc,regPC + 4.U )
	// 	pc_valid	:= true.B
	// }.otherwise{
	// 	regPC		:= regPC 
	// 	pc_valid	:= false.B
	// }
// 取指部分有些麻烦，反馈的
	regPC 			:= Mux(valid_next_pc,next_pc,Mux(valid,regPc + 4.U,regPC))
	pc_valid 		:= Mux(valid,true.B,false.B)
	// when(valid){
	// 	regPC 		:= Mux(valid_next_pc,next_pc,regPC+4.U)
	// 	pc_valid	:= true.B
	// }.otherwise{
	// 	regPC 		:= regPC
	// 	pc_valid    := false.B
	// }
//  指令地址，指令内容传输。
	val regInst 	= RegInit(0.U(32.W))
	val regTempPC	= RegInit(0.U(64.W))
	
	// when(valid&(!stall)){
	// 	regInst 	:= Mux(regPC(2),inst(63,32),inst(31,0))
	// 	regTempPC	:= regPC
	// }.otherwise{
	// 	// 生成nop指令  
	// 	regInst		:= 0.U 
	// }
	// when(valid & (!io.in.flush)){
	// 	regInst 	:= Mux(regPC(2),inst(63,32),inst(31,0))
	// 	regTempPC	:= regPC
	// }
	when(!io.in.flush){
		regInst 	:= Mux(valid,Mux(regPC(2),inst(63,32),inst(31,0)),0.U)       //Mux(regPC(2),inst(63,32),inst(31,0))
		regTempPC	:= Mux(valid,regPC,0.U)
	}.otherwise{
		regInst		:= 0.U
		regTempPC	:= 0.U
	}

	io.out.pc0 		:= regPC
    io.out.pc1 		:= regTempPC 
    io.out.inst 	:= Mux(stall,0.U,regInst)
	io.out.rvalid	:= pc_valid & (!stall)

}