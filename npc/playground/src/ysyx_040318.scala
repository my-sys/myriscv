import chisel3._ 

import chisel3.util._ 

class AXI_Interface extends Bundle{
	val awready = Input(Bool())
	val awvalid = Output(Bool())
	val awid 	= Output(UInt(4.W))
	val awaddr	= Output(UInt(32.W))
	val awlen 	= Output(UInt(8.W))
	val awsize	= Output(UInt(3.W))
	val awburst = Output(UInt(2.W))

	val wready 	= Input(Bool())
	val wvalid 	= Output(Bool())
	val wdata 	= Output(UInt(64.W))
	val wstrb 	= Output(UInt(8.W))
	val wlast 	= Output(Bool())

	val bready 	= Output(Bool())
	val bvalid 	= Input(Bool())
	val bid 	= Input(UInt(4.W))
	val bresp 	= Input(UInt(2.W))

	val arready = Input(Bool())
	val arvalid = Output(Bool())
	val arid 	= Output(UInt(4.W))
	val araddr 	= Output(UInt(32.W))
	val arlen 	= Output(UInt(8.W))
	val arsize 	= Output(UInt(3.W))
	val arburst = Output(UInt(2.W))

	val rready  = Output(Bool())
	val rvalid  = Input(Bool())
	val rid 	= Input(UInt(4.W))
	val rresp 	= Input(UInt(2.W))
	val rdata 	= Input(UInt(64.W))
	val rlast 	= Input(Bool())
}

class ysyx_22040318 extends Module{
	val io = IO(new Bundle{
		val inerrupt = Input(interrupt)
		val master 	= new AXI_Interface
		val slave	= Flipped(new AXI_Interface)
		val sram0 	= new SRAM_Interface
		val sram1 	= new SRAM_Interface
		val sram2 	= new SRAM_Interface
		val sram3 	= new SRAM_Interface
		val sram4 	= new SRAM_Interface
		val sram5 	= new SRAM_Interface
		val sram6 	= new SRAM_Interface
		val sram7 	= new SRAM_Interface
	})

	val core = Module(new Core)
	core.io.axi_bus.aw.ready	:= io.master.awready
	io.master.awvalid	:= core.io.axi_bus.aw.valid
	io.master.awid 		:= core.io.axi_bus.aw.bits.awid
	io.master.awaddr 	:= core.io.axi_bus.aw.bits.awaddr
	io.master.awlen 	:= core.io.axi_bus.aw.bits.awlen
	io.master.awsize 	:= core.io.axi_bus.aw.bits.awsize
	io.master.awburst 	:= core.io.axi_bus.aw.bits.awburst

	core.io.axi_bus.w.ready	:= io.master.wready 
	io.master.wvalid 	:= core.io.axi_bus.w.valid
	io.master.wdata 	:= core.io.axi_bus.w.bits.wdata
	io.master.wstrb 	:= core.io.axi_bus.w.bits.wstrb
	io.master.wlast 	:= core.io.axi_bus.w.bits.wlast

	io.master.bready 	:= core.io.axi_bus.b.ready
	core.io.axi_bus.b.valid 		:= io.master.bvalid
	core.io.axi_bus.b.bits.bid 	:= io.master.bid
	core.io.axi_bus.b.bits.bresp 	:= io.master.bresp

	core.io.axi_bus.ar.ready 	:= io.master.arready
	io.master.arvalid	:= core.io.axi_bus.ar.valid
	io.master.arid		:= core.io.axi_bus.ar.bits.arid 
	io.master.araddr	:= core.io.axi_bus.ar.bits.araddr
	io.master.arlen		:= core.io.axi_bus.ar.bits.arlen
	io.master.arsize	:= core.io.axi_bus.ar.bits.arsize
	io.master.arburst	:= core.io.axi_bus.ar.bits.arburst

	io.master.rready	:= core.io.axi_bus.r.ready
	core.io.axi_bus.r.valid		:= io.master.rvalid 
	core.io.axi_bus.r.bits.rid 	:= io.master.rid 
	core.io.axi_bus.r.bits.rresp 	:= io.master.rresp
	core.io.axi_bus.r.bits.rdata 	:= io.master.rdata 
	core.io.axi_bus.r.bits.rlast 	:= io.master.rlast

	io.slave.awready := false.B
	//:= io.slave.awvalid
	//:= io.slave.awid
	//:= io.slave.awaddr
	//:= io.slave.awlen
	//:= io.slave.awsize
	//:= io.slave.awburst

	io.slave.wready := false.B
	//:= io.slave.wvalid
	//:= io.slave.wdata
	//:= io.slave.wstrb
	//:= io.slave.wlast

	//:= io.slave.bready
	io.slave.bvalid := false.B
	io.slave.bid	:= 0.U
	io.slave.bresp	:= 0.U

	io.slave.arready := false.B
	//:= io.slave.arvalid
	//:= io.slave.arid
	//:= io.slave.araddr
	//:= io.slave.arlen
	//:= io.slave.arsize
	//:= io.slave.arburst

	//:= io.slave.rready
	io.slave.rvalid	:= false.B 
	io.slave.rid 	:= 0.U 
	io.slave.rresp 	:= 0.U 
	io.slave.rdata 	:= 0.U 
	io.slave.rlast 	:= false.B

	core.io.sram0 <> io.sram0 
	core.io.sram1 <> io.sram1 
	core.io.sram2 <> io.sram2 
	core.io.sram3 <> io.sram3 
	core.io.sram4 <> io.sram4 
	core.io.sram5 <> io.sram5 
	core.io.sram6 <> io.sram6 
	core.io.sram7 <> io.sram7 
}