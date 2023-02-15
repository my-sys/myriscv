import chisel3._
import chisel3.util._
// wuser 
class AXI4Bus_w extends Bundle{
	val wid 	= Output(UInt(4.W))
	val wdata 	= Output(UInt(64.W))
	val wstrb 	= Output(UInt(8.W))
	val wlast 	= Output(Bool())
}
// awlock,awcache,awprot,awqos,awregion,awuser
class AXI4Bus_aw extends Bundle{
	val awid 	= Output(UInt(4.W))
	val awaddr  = Output(UInt(64.W))
	val awlen 	= Output(UInt(8.W))
	val awsize	= Output(UInt(3.W))
	val awburst = Output(UInt(2.W))
}
class AXI4Bus_b extends Bundle{
	val bid 	= Output(UInt(4.W))
	val bresp	= Output(UInt(2.W))
}

//arlock,arcache,arprot,arqos,arregion,aruser
class AXI4Bus_ar extends Bundle{
	val arid 	= Output(UInt(4.W))
	val araddr	= Output(UInt(64.W))
	val arlen	= Output(UInt(8.W))
	val arsize	= Output(UInt(3.W))
	val arburst = Output(UInt(2.W))
}
//ruser
class AXI4Bus_r  extends Bundle{
	val rid 	= Output(UInt(4.W))
	val rresp 	= Output(UInt(2.W))
	val rdata 	= Output(UInt(64.W))
	val rlast 	= Output(Bool())
}
class AXI4Bus extends Bundle{
	val aw	= Decoupled(new AXI4Bus_aw)
	val w	= Decoupled(new AXI4Bus_w)
	val b 	= Flipped(Decoupled(new AXI4Bus_b))
	val ar  = Decoupled(new AXI4Bus_ar)
	val r 	= Flipped(Decoupled(new AXI4Bus_r))
}