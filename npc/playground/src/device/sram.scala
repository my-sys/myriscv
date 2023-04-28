import chisel3._ 
import chisel3.util._ 

// class S011HD1P_X32Y2D128_BW extends BlackBox{
// 	val io = IO(new Bundle{
// 		val CLK 	= Input(Clock())
// 		val Q 		= Output(UInt(128.W))
// 		val CEN 	= Input(Bool())
// 		val WEN 	= Input(Bool())
// 		val BWEN 	= Input(UInt(128.W))
// 		val A 		= Input(UInt(6.W))
// 		val D 		= Input(UInt(128.W))
// 	})
// }

class SRAM extends Module{
	val io = IO(new Bundle{
		val addr 	= Input(UInt(6.W))
		val cen 	= Input(Bool())
		val wen 	= Input(Bool())
		val wmask 	= Input(UInt(128.W))
		val wdata 	= Input(UInt(128.W))
		val rdata 	= Output(UInt(128.W))
	})
	val Q    = RegInit(0.U(128.W))
	val sram = RegInit(VecInit(Seq.fill(64)(0.U(128.W))))
	val A = io.addr
	val temp_data = sram(A)
	val bwen = ~io.wmask
	val D = io.wdata
	val cen = ~io.cen
	val wen = ~io.wen
	
	when(cen & wen){
		sram(A) := (D & bwen) | (temp_data & ~bwen)
	}
	Q := Mux(cen && !wen,temp_data,0.U)
	io.rdata	:= Q
	// val sram = Module(new S011HD1P_X32Y2D128_BW)
	// sram.io.CLK 	:= clock 
	// sram.io.CEN 	:= io.cen
	// sram.io.WEN		:= io.wen
	// sram.io.BWEN	:= io.wmask
	// sram.io.A		:= io.addr
	// sram.io.D		:= io.wdata
	// io.rdata 		:= sram.io.Q
}