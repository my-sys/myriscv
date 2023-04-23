import chisel3._
import chisel3.util._

class SRAM_Interface extends Bundle{
	val addr 	= Output(UInt(6.W))
	val cen 	= Output(Bool())
	val wen 	= Output(Bool())
	val wmask 	= Output(UInt(128.W))
	val wdata 	= Output(UInt(128.W))
	val rdata 	= Input(UInt(128.W))
}

class Core extends Module{
	val io = IO(new Bundle{
		val axi_bus = new AXI4Bus
		val sram0 	= new SRAM_Interface
		val sram1 	= new SRAM_Interface
		val sram2 	= new SRAM_Interface
		val sram3 	= new SRAM_Interface
		val sram4 	= new SRAM_Interface
		val sram5 	= new SRAM_Interface
		val sram6 	= new SRAM_Interface
		val sram7 	= new SRAM_Interface
	})

	val i_cache 		= Module(new ICache)
	val d_cache			= Module(new DCache)
	val cross_bar 		= Module(new Crossbar)
	val cross_bar_1 	= Module(new Crossbar_1)

	val fetch			= Module(new Fetch)
	val execute 		= Module(new Exu)
	val decode 			= Module(new Decode)
	val commit			= Module(new Commit)

	val clint_de 		= Module(new Clint)
//--------------- CPU section handshake --------------------
	fetch.io.next_pc 			:= execute.io.next_pc
	fetch.io.flush				:= execute.io.flush
	fetch.io.put_pc <> decode.io.get_inst

	decode.io.flush				:= execute.io.flush
	decode.io.normal_rd <> commit.io.normal_rd
	decode.io.csr_rd	<> commit.io.csr_rd

	execute.io.op_datas <> decode.io.op_datas
	execute.io.irq.time_irq		:= clint_de.io.time_irq
	execute.io.irq.soft_irq		:= clint_de.io.soft_irq
	execute.io.mstatus			:= commit.io.csr_pass.csr_mstatus
	execute.io.mie				:= commit.io.csr_pass.csr_mie
	execute.io.mepc				:= commit.io.csr_pass.csr_mepc
	execute.io.mtvec			:= commit.io.csr_pass.csr_mtvec

	commit.io.normal_wb				:= execute.io.wb
	commit.io.csr_wb				:= execute.io.csr
	commit.io.csr_except			:= execute.io.csr_except
	commit.io.commit				:= execute.io.commit

	commit.io.difftest_inst			:= execute.io.difftest_inst
	commit.io.difftest_peripheral	:= execute.io.difftest_peripheral

//-------------- Cache and cpu  handshake-------------------
	cross_bar_1.io.fetch.cpu_addr <> fetch.io.cpu_addr 
	cross_bar_1.io.fetch.cpu_data <> fetch.io.cpu_data 
	cross_bar_1.io.fetch.bits.addr 	:= fetch.io.bus.bits.pc_0
	fetch.io.bus.ready 				:= cross_bar_1.io.fetch.ready 
	fetch.io.bus.bits.inst 			:= cross_bar_1.io.fetch.bits.rdata 

	cross_bar_1.io.wb.valid			:= execute.io.bus.valid
	cross_bar_1.io.wb.bits.addr 	:= execute.io.bus.bits.addr
	cross_bar_1.io.wb.bits.wdata 	:= execute.io.bus.bits.wdata
	cross_bar_1.io.wb.bits.size 	:= execute.io.bus.bits.size
	cross_bar_1.io.wb.bits.wstrb 	:= execute.io.bus.bits.wstrb
	cross_bar_1.io.wb.bits.is_w		:= execute.io.bus.bits.is_w
	execute.io.bus.bits.rdata 	:= cross_bar_1.io.wb.bits.rdata
	execute.io.bus.ready 		:= cross_bar_1.io.wb.ready

	i_cache.io.is_fence_i := execute.io.fence_i
	i_cache.io.flush 	  := fetch.io.out_flush
	//d_cache.io.is_fence_i := false.B 

	i_cache.io.cpu_raddr <> cross_bar_1.io.ICache.cpu_raddr
	i_cache.io.cpu_rdata <> cross_bar_1.io.ICache.cpu_rdata
	d_cache.io.cpu <> cross_bar_1.io.DCache 
	clint_de.io.bits <> cross_bar_1.io.clint_bus.bits
	clint_de.io.valid := cross_bar_1.io.clint_bus.valid 
	cross_bar_1.io.clint_bus.ready := clint_de.io.ready

//---------------Cache an bus handshake ----------------------
	cross_bar.io.ICache_bus	<> i_cache.io.cache_bus
	cross_bar.io.DCache_bus <> d_cache.io.cache_bus
	cross_bar.io.bus1 <> cross_bar_1.io.bus1 
	cross_bar.io.bus2 <> cross_bar_1.io.bus2
	io.axi_bus	<> cross_bar.io.AXI_Bus
	io.sram0 	<> i_cache.io.sram0_data
	io.sram1 	<> i_cache.io.sram0_tag 
	io.sram2 	<> i_cache.io.sram2_data 
	io.sram3 	<> i_cache.io.sram2_tag

	io.sram4 	<> d_cache.io.sram0_data 
	io.sram5 	<> d_cache.io.sram0_tag
	io.sram6 	<> d_cache.io.sram2_data 
	io.sram7 	<> d_cache.io.sram2_tag
}