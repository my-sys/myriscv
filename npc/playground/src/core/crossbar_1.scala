
import chisel3._
import chisel3.util._
class Crossbar_1 extends Module{
	val io = IO(new Bundle{
		// in 
		val fetch = Flipped(new Bundle{
			val valid = Output(Bool())
			val bits = new Bundle{
				val addr 	= Output(UInt(64.W))
				val rdata	= Input(UInt(64.W))
			}
			val ready = Input(Bool())
			def fire: Bool = valid & ready
		}
		)
		val wb	 = Flipped(new Bundle{
			val valid = Output(Bool())
			val bits = new Bundle{
				val addr    = Output(UInt(64.W))
				val rdata 	= Input(UInt(64.W))
				val wdata 	= Output(UInt(64.W))
				val size 	= Output(UInt(2.W))
				val wstrb 	= Output(UInt(8.W))
				val is_w 	= Output(Bool())
			}
			val ready = Input(Bool())
			def fire: Bool = valid & ready
		})
		// out
		val ICache = new Bundle{
			val valid = Output(Bool())
			val bits = new Bundle{
				val addr    = Output(UInt(64.W))
				val rdata 	= Input(UInt(64.W))
				val wdata 	= Output(UInt(64.W))
				val wstrb 	= Output(UInt(8.W))
				val is_w 	= Output(Bool())
			}
			val ready = Input(Bool())
			def fire: Bool = valid & ready
		}
		val DCache = new Bundle{
			val valid = Output(Bool())
			val bits = new Bundle{
				val addr    = Output(UInt(64.W))
				val rdata 	= Input(UInt(64.W))
				val wdata 	= Output(UInt(64.W))
				val wstrb 	= Output(UInt(8.W))
				val is_w 	= Output(Bool())
			}
			val ready = Input(Bool())
			def fire: Bool = valid & ready
		}
		
		val bus1	= new Bundle{
			val valid = Output(Bool())
			val bits = new Bundle{
				val addr 	= Output(UInt(64.W))
				val rdata	= Input(UInt(64.W))
			}
			val ready = Input(Bool())
			def fire: Bool = valid & ready
		}
		val bus2 	= new Bundle{
			val valid = Output(Bool())
			val bits = new Bundle{
				val addr    = Output(UInt(64.W))
				val rdata 	= Input(UInt(64.W))
				val wdata 	= Output(UInt(64.W))
				val size 	= Output(UInt(2.W))
				val wstrb 	= Output(UInt(8.W))
				val is_w 	= Output(Bool())
			}
			val ready = Input(Bool())
			def fire: Bool = valid & ready
		}
	})
	
	io.ICache.bits.addr  := io.fetch.bits.addr 
	io.ICache.bits.wdata := 0.U 
	io.ICache.bits.wstrb := 0.U 
	io.ICache.bits.is_w  := false.B 
	io.ICache.valid 	 := io.fetch.bits.addr(31)&io.fetch.valid
	when(io.fetch.bits.addr(31)){
		io.fetch.ready 		:= io.ICache.ready
		io.fetch.bits.rdata := io.ICache.bits.rdata
	}.otherwise{
		io.fetch.bits.rdata := io.bus1.bits.rdata
		io.fetch.ready 		:= io.bus1.ready
	}
	
	//io.bus1.bits.is_io 		:= !(io.fetch.bits.addr(31))
	io.bus1.bits.addr 		:= io.fetch.bits.addr 
	io.bus1.valid 			:= (!(io.fetch.bits.addr(31)))&io.fetch.valid
	
	io.DCache.bits.addr		:= io.wb.bits.addr 
	io.DCache.bits.wdata	:= io.wb.bits.wdata
	io.DCache.bits.wstrb	:= io.wb.bits.wstrb
	io.DCache.bits.is_w		:= io.wb.bits.is_w
	io.DCache.valid 		:= io.wb.bits.addr(31)& io.wb.valid 
	
	//io.bus2.bits.is_io		:= !(io.wb.bits.addr(31))
	io.bus2.bits.addr 		:= io.wb.bits.addr
	io.bus2.bits.wdata 		:= io.wb.bits.wdata
	io.bus2.bits.size 		:= io.wb.bits.size
	io.bus2.bits.wstrb 		:= io.wb.bits.wstrb
	io.bus2.bits.is_w 		:= io.wb.bits.is_w
	io.bus2.valid 			:= (!(io.wb.bits.addr(31))) & io.wb.valid 
	
	when(io.wb.bits.addr(31)){
		io.wb.ready 		:= io.DCache.ready
		io.wb.bits.rdata 	:= io.DCache.bits.rdata
	}.otherwise{
		io.wb.ready 		:= io.bus2.ready
		io.wb.bits.rdata 	:= io.bus2.bits.rdata
	}
}