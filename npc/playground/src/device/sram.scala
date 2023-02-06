import chisel3._ 
import chisel3.util._ 

class S011HD1P_X32Y2D128_BW extends BlackBox{
	val io = IO(new Bundle{
		val CLK 	= Input(Clock())
		val Q 		= Output(UInt(128.W))
		val CEN 	= Input(Bool())
		val WEN 	= Input(Bool())
		val BWEN 	= Input(UInt(128.W))
		val A 		= Input(UInt(6.W))
		val D 		= Input(UInt(128.W))
	})
}