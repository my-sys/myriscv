import chisel3._
import chisel3.util._
class Crossbar_1 extends Module{
	val io = IO(new Bundle{
		// in 
		val fetch = Flipped(Decoupled(new Bundle{
			val addr 	= Output(UInt(64.W))
			val rdata	= Input(UInt(64.W))
		}))
		val wb	 = Flipped(Decoupled(new Bundle{
			val addr    = Output(UInt(64.W))
			val rdata 	= Input(UInt(64.W))
			val wdata 	= Output(UInt(64.W))
			val size 	= Output(UInt(2.W))
			val wstrb 	= Output(UInt(8.W))
			val is_w 	= Output(Bool())
		}))
		// out
		val ICache = Decoupled(new Bundle{
			val addr    = Output(UInt(64.W))
			val rdata 	= Input(UInt(64.W))
			val wdata 	= Output(UInt(64.W))
			val wstrb 	= Output(UInt(8.W))
			val is_w 	= Output(Bool())
		}))
		val DCache = Decoupled(new Bundle{
			val addr    = Output(UInt(64.W))
			val rdata 	= Input(UInt(64.W))
			val wdata 	= Output(UInt(64.W))
			val wstrb 	= Output(UInt(8.W))
			val is_w 	= Output(Bool())
		}))
		
		val bus1	= Decoupled(new Bundle{
			val addr 	= Output(UInt(64.W))
			val rdata	= Input(UInt(64.W))
		})
		val bus2 	= Decoupled(new Bundle{
			val addr    = Output(UInt(64.W))
			val rdata 	= Input(UInt(64.W))
			val wdata 	= Output(UInt(64.W))
			val size 	= Output(UInt(2.W))
			val wstrb 	= Output(UInt(8.W))
			val is_w 	= Output(Bool())
		}))
	})
	
	io.ICache.cpu.bits.addr  := io.fetch.bits.addr 
	io.ICache.cpu.bits.wdata := 0.U 
	io.ICache.cpu.bits.wstrb := 0.U 
	io.ICache.cpu.bits.is_w  := false.B 
	io.ICache.cpu.valid 	 := io.fetch.bits.addr(31)&io.fetch.valid
	when(io.fetch.bits.addr(31)){
		io.fetch.ready 		:= io.ICache.cpu.ready
		io.fetch.bits.rdata := io.ICache.cpu.bits.rdata
	}.otherwise{
		io.fetch.bits.rdata := io.bus1.bits.rdata
		io.fetch.ready 		:= io.bus1.ready
	}
	
	//io.bus1.bits.is_io 		:= !(io.fetch.bits.addr(31))
	io.bus1.bits.addr 		:= io.fetch.bits.addr 
	io.bus1.valid 			:= (!(io.fetch.bits.addr(31)))&io.fetch.valid
	
	io.DCache.cpu.bits.addr		:= io.wb.bits.addr 
	io.DCache.cpu.bits.wdata	:= io.wb.bits.wdata
	io.DCache.cpu.bits.wstrb	:= io.wb.bits.wstrb
	io.DCache.cpu.bits.is_w		:= io.wb.bits.is_w
	io.DCache.cpu.valid 		:= io.wb.bits.addr(31)& io.wb.valid 
	
	//io.bus2.bits.is_io		:= !(io.wb.bits.addr(31))
	io.bus2.bits.addr 		:= io.wb.bits.addr
	io.bus2.bits.wdata 		:= io.wb.bits.wdata
	io.bus2.bits.size 		:= io.wb.bits.size
	io.bus2.bits.wstrb 		:= io.wb.bits.wstrb
	io.bus2.bits.is_w 		:= io.wb.bits.is_w
	io.bus2.valid 			:= (!(io.wb.bits.addr(31))) & io.wb.valid 
	
	when(io.wb.bits.addr(31)){
		io.wb.ready 		:= io.DCache.cpu.ready
		io.wb.bits.rdata 	:= io.DCache.cpu.bits.rdata
	}.otherwise{
		io.wb.ready 		:= io.bus2.ready
		io.wb.bits.rdata 	:= io.bus2.bits.rdata
	}
}