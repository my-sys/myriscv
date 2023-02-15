import chisel3._
import chisel3.util._

class Core extends Module{
	val io = IO(new Bundle{
		val axi_bus = new AXI4Bus
	})

	val i_cache 		= Module(new Cache)
	val d_cache			= Module(new Cache)
	val cross_bar 		= Module(new Crossbar)
	val cross_bar_1 	= Module(new Crossbar_1)

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
	cross_bar_1.io.fetch.valid		:= fetch.io.bus.valid
	cross_bar_1.io.fetch.bits.addr 	:= fetch.io.bus.bits.pc_0
	fetch.io.bus.ready 				:= cross_bar_1.io.fetch.ready 
	fetch.io.bus.bits.inst 			:= cross_bar_1.io.fetch.bits.rdata 

	cross_bar_1.io.wb.valid			:= write_back.io.bus.valid
	cross_bar_1.io.wb.bits.addr 	:= write_back.io.bus.bits.addr
	cross_bar_1.io.wb.bits.wdata 	:= write_back.io.bus.bits.wdata
	cross_bar_1.io.wb.bits.size 	:= write_back.io.bus.bits.size
	cross_bar_1.io.wb.bits.wstrb 	:= write_back.io.bus.bits.wstrb
	cross_bar_1.io.wb.bits.is_w		:= write_back.io.bus.bits.is_w
	write_back.io.bus.bits.rdata 	:= cross_bar_1.io.wb.bits.rdata
	write_back.io.bus.ready 		:= cross_bar_1.io.wb.ready

	i_cache.io.cpu <> cross_bar_1.ICache 
	d_cache.io.cpu <> cross_bar_1.DCache 

//---------------Cache an bus handshake --------------------
	cross_bar.io.ICache_bus	<> i_cache.io.cache_bus
	cross_bar.io.DCache_bus <> d_cache.io.cache_bus
	cross_bar.io.bus1 <> cross_bar_1.io.bus1 
	cross_bar.io.bus2 <> cross_bar_1.io.bus2
	io.axi_bus	<> cross_bar.io.AXI_Bus
}