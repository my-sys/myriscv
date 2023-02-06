import chisel3._
import chisel3.util._

class Core extends Module{
	val io = IO(new Bundle{
		val icache_bus = new SimpleBus 
		val dcache_bus = new SimpleBus 
	})

	val i_cache 		= Module(new Cache)
	val d_cache			= Module(new Cache)

	val fetch			= Module(new Fetch)
	val execute 		= Module(new Exu)
	val decode 			= Module(new Decode)
	val write_back		= Module(new WriteBack)
//--------------- CPU section handshake --------------------
	i_cache.cpu_in.addr 	:= fetch.io.out.pc0
	i_cache.cpu_in.wdata 	:= 0.U 
	i_cache.cpu_in.is_w 	:= false.B
	i_cache.cpu_in.wstrb 	:= 0.U 
	i_cache.cpu_in.valid 	:= fetch.io.out.rvalid 

	i_cache.cpu_out.ready 	:= 

	d_cache.cpu_in.addr 	:= 
	d_cache.cpu_in.wdata 	:= 
	d_cache.cpu_in.is_w 	:= 
	d_cache.cpu_in.wstrb 	:= 
	d_cache.cpu_in.valid 	:= 

	d_cache.cpu_out.ready 	:= 
//-------------- Cache and cpu  handshake-------------------
	
//---------------Cache an bus handshake --------------------
}