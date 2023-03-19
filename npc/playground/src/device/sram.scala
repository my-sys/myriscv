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

class SRAM extends Module{
	val io = IO(new Bundle{
		val addr 	= Output(UInt(6.W))
		val cen 	= Output(Bool())
		val wen 	= Output(Bool())
		val wmask 	= Output(UInt(128.W))
		val wdata 	= Output(UInt(128.W))
		val rdata 	= Input(UInt(128.W))
	})

	val sram = Module(new S011HD1P_X32Y2D128_BW)
	sram.io.CLK 	:= clock 
	sram.io.CEN 	:= io.cen
	sram.io.WEN		:= io.wen
	sram.io.BWEN	:= io.wmask
	sram.io.A		:= io.addr
	sram.io.D		:= io.wdata
	io.rdata 		:= sram.io.Q
}