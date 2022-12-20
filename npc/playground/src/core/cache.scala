import chisel3._
import chisel3.util._ 

class Cache extends Module{
	val io = IO(new Bundle{
		val cpu_in = new Bundle{
			val addr 		= Input(UInt(64.W))
			val wdata 		= Input(UInt(64.W))
			val is_w 		= Input(Bool())    // 高代表写,低代表读
			val avalid 		= Input(Bool())
			val wstrb 		= Input(UInt(8.W))
		}

		val cpu_out = new Bundle{
			val rdata   	= Output(UInt(64.W))
			val rvalid 		= Output(Bool())
			val w_ok 		= Output(Bool())
		}

		val bus_in 	= new Bundle{
			val data 		= Input(UInt(64.W))
			val valid 		= Input(Bool())
			//val rready 		= Input(Bool())
		}

		val bus_out = new Bundle{
			val waddr 		= Output(UInt(64.W))
			val wdata 		= Output(UInt(64.W))
			val wvalid 		= Output(Bool())
			val raddr 		= Output(UInt(64.W))
			val avalid 		= Output(Bool())
			val wstrb		= Output(UInt(8.W))
		}
	})

	io.cpu_out.rdata 		:= io.bus_in.data
	io.cpu_out.rvalid		:= io.bus_in.valid 
	// 这里假设 dcache 立即给予响应回答，实际上不一定成立
	io.cpu_out.w_ok			:= io.cpu_in.is_w

	io.bus_out.waddr 		:= io.cpu_in.addr
	io.bus_out.wdata		:= io.cpu_in.wdata
	io.bus_out.wvalid		:= io.cpu_in.is_w
	io.bus_out.raddr		:= io.cpu_in.addr
	io.bus_out.avalid		:= io.cpu_in.avalid
	io.bus_out.wstrb		:= io.cpu_in.wstrb

}