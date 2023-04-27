
import chisel3._
import chisel3.util._
class Crossbar_1 extends Module{
	val io = IO(new Bundle{
		val fetch = new Bundle{
			val cpu_addr	= Flipped(Decoupled(new CPU_ADDR_IO))
			val cpu_data 	= Decoupled(new CPU_DATA_IO)
		}
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
			val cpu_raddr = Decoupled(new CPU_ADDR_IO)
			val cpu_rdata = Flipped(Decoupled(new CPU_DATA_IO))
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
		val clint_bus = new Bundle{
			val valid = Output(Bool())
			val bits = new Bundle{
				val addr 	= Output(UInt(64.W))
				val rdata 	= Input(UInt(64.W))
				val wdata 	= Output(UInt(64.W))
				val is_w 	= Output(Bool())
			}
			val ready = Input(Bool())
			def fire: Bool = valid & ready
		}
	})
//---------------------------fetch----------------------
	val fetch_low_address	= (io.fetch.cpu_addr.bits.addr(63,31) === "h0".U)
	io.ICache.cpu_raddr.bits.addr  := io.fetch.cpu_addr.bits.addr
	io.ICache.cpu_raddr.valid 	   := (!fetch_low_address)&io.fetch.cpu_addr.valid

	io.ICache.cpu_rdata.ready 		:= io.fetch.cpu_data.ready
	when(!fetch_low_address){
		io.fetch.cpu_addr.ready 	:= io.ICache.cpu_raddr.ready

		io.fetch.cpu_data.bits.pc 	:= io.ICache.cpu_rdata.bits.pc
		io.fetch.cpu_data.bits.data := io.ICache.cpu_rdata.bits.data
		io.fetch.cpu_data.valid 	:= io.ICache.cpu_rdata.valid
	}.otherwise{
		io.fetch.cpu_data.bits.pc 	:= io.bus1.bits.addr
		io.fetch.cpu_data.bits.data := io.bus1.bits.rdata
		io.fetch.cpu_data.valid 	:= io.bus1.ready

		io.fetch.cpu_addr.ready 	:= io.bus1.ready
	}

	io.bus1.bits.addr 		:= io.fetch.cpu_addr.bits.addr 
	io.bus1.valid 			:= fetch_low_address & io.fetch.cpu_addr.valid

//----------------     wb           ----------
	val low_address 		= (io.wb.bits.addr(63,31)=== "h0".U)
	val not_clint 			= ((io.wb.bits.addr(30,0)<"h0200_0000".U) |(io.wb.bits.addr(30,0)>"h0200_FFFF".U))
	io.DCache.bits.addr		:= io.wb.bits.addr 
	io.DCache.bits.wdata	:= io.wb.bits.wdata
	io.DCache.bits.wstrb	:= io.wb.bits.wstrb
	io.DCache.bits.is_w		:= io.wb.bits.is_w
	//io.DCache.valid 		:= io.wb.bits.addr(31)& io.wb.valid 
	io.DCache.valid 		:= (!low_address)& io.wb.valid 

	//io.bus2.bits.is_io		:= !(io.wb.bits.addr(31))
	io.bus2.bits.addr 		:= io.wb.bits.addr
	io.bus2.bits.wdata 		:= io.wb.bits.wdata
	io.bus2.bits.size 		:= io.wb.bits.size
	io.bus2.bits.wstrb 		:= io.wb.bits.wstrb
	io.bus2.bits.is_w 		:= io.wb.bits.is_w
	//io.bus2.valid 			:= (!(io.wb.bits.addr(31))) & io.wb.valid
	io.bus2.valid 			:= low_address & not_clint &io.wb.valid

	io.clint_bus.bits.addr	:= io.wb.bits.addr
	io.clint_bus.bits.is_w  := io.wb.bits.is_w
	io.clint_bus.bits.wdata	:= io.wb.bits.wdata
	io.clint_bus.valid		:= low_address &(!not_clint) & io.wb.valid

	when(!low_address){
		io.wb.ready 		:= io.DCache.ready
		io.wb.bits.rdata 	:= io.DCache.bits.rdata
	}.otherwise{
		when(not_clint){
			io.wb.ready 		:= io.bus2.ready
			io.wb.bits.rdata 	:= io.bus2.bits.rdata
		}.otherwise{
			io.wb.ready 		:= io.clint_bus.ready
			io.wb.bits.rdata 	:= io.clint_bus.bits.rdata
		}
	}
}