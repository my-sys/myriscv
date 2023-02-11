import chisel3._
import chisel3.util._

class Core extends Module{
	val io = IO(new Bundle{
		val axi_bus = new AXI4Bus
	})

	val i_cache 		= Module(new Cache)
	val d_cache			= Module(new Cache)
	val cross_bar 		= Module(new Crossbar)

	val fetch			= Module(new Fetch)
	val execute 		= Module(new Exu)
	val decode 			= Module(new Decode)
	val write_back		= Module(new WriteBack)
//--------------- CPU section handshake --------------------
	fetch.io.in.de_stall		:= decode.io.out.stall
	fetch.io.in.wb_stall		:= write_back.io.out.stall
	fetch.io.in.ex_stall		:= execute.io.out.stall
	fetch.io.in.next_pc			:= execute.io.out.next_pc
	fetch.io.in.valid_next_pc	:= execute.io.out.valid_next_pc
	fetch.io.in.flush			:= execute.io.out.flush

	decode.io.in.inst 			:= fetch.io.out.inst 
	decode.io.in.pc 			:= fetch.io.out.pc_1
	decode.io.in.rs_addr 		:= write_back.io.out.rs_addr
	decode.io.in.result_data	:= write_back.io.out.result_data
	decode.io.in.w_rs_en		:= write_back.io.out.w_rs_en
	decode.io.in.stall 			:= write_back.io.out.stall | execute.io.out.stall
	decode.io.in.flush 			:= execute.io.out.flush

	execute.io.in.opType 		:= decode.io.out.opType
	execute.io.in.exuType		:= decode.io.out.exuType
	execute.io.in.rs1_addr		:= decode.io.out.rs1_addr
	execute.io.in.rs1_data		:= decode.io.out.rs1_data
	execute.io.in.rs2_addr		:= decode.io.out.rs2_addr
	execute.io.in.rs2_data		:= decode.io.out.rs2_data
	execute.io.in.imm_data		:= decode.io.out.imm_data
	execute.io.in.pc 			:= decode.io.out.pc 
	execute.io.in.inst			:= decode.io.out.inst
	execute.io.in.rs_addr		:= decode.io.out.rs_addr

	execute.io.in.wb_result_data	:= write_back.io.out.result_data
	execute.io.in.wb_rs_addr		:= write_back.io.out.rs_addr
	execute.io.in.wb_w_rs_en		:= write_back.io.out.w_rs_en
	execute.io.in.stall 			:= write_back.io.out.stall

	write_back.io.in.rs_addr		:= execute.io.out.rs_addr
	write_back.io.in.result_data	:= execute.io.out.rs_data
	write_back.io.in.w_rs_en		:= execute.io.out.w_rs_en
	write_back.io.in.opType			:= execute.io.out.opType
	write_back.io.in.exuType		:= execute.io.out.exuType

	write_back.io.in.rs2_addr		:= execute.io.out.rs2_addr
	write_back.io.in.rs2_data		:= execute.io.out.rs2_data
	write_back.io.in.mem_addr		:= execute.io.out.mem_addr
	write_back.io.in.mem_avalid		:= execute.io.out.mem_avalid
	write_back.io.in.w_mem_en		:= execute.io.out.w_mem_en
	write_back.io.in.pc 			:= execute.io.out.pc
	write_back.io.in.inst 			:= execute.io.out.inst

//-------------- Cache and cpu  handshake-------------------
	i_cache.io.cpu_in.addr 		:= fetch.io.out.w.pc_0
	i_cache.io.cpu_in.wdata 	:= 0.U 
	i_cache.io.cpu_in.is_w 		:= false.B
	i_cache.io.cpu_in.wstrb 	:= 0.U 
	i_cache.io.cpu_in.valid 	:= fetch.io.out.w.valid 
	fetch.io.out.w.ready 		:= i_cache.io.cpu_in.ready 

	i_cache.io.cpu_out.ready 	:= fetch.io.in.r.ready
	fetch.io.in.r.inst 			:= i_cache.io.cpu_out.rdata 
	fetch.io.in.r.valid 		:= i_cache.io.cpu_out.valid 

	d_cache.cpu_in.addr 		:= write_back.io.out.w.mem_addr
	d_cache.cpu_in.wdata 		:= write_back.io.out.w.mem_wdata
	d_cache.cpu_in.is_w 		:= write_back.io.out.w.is_w 
	d_cache.cpu_in.wstrb 		:= write_back.io.out.w.mem_wstrb
	d_cache.cpu_in.valid 		:= write_back.io.out.w.valid 

	d_cache.cpu_out.ready 		:= write_back.io.in.r.ready
//---------------Cache an bus handshake --------------------
	cross_bar.io.ICache_bus	<> i_cache.io.cache_bus
	cross_bar.io.DCache_bus <> d_cache.io.cache_bus
	io.axi_bus	<> cross_bar.io.AXI_Bus
}