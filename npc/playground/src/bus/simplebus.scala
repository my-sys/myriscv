import chisel3._
import chisel3.util._
import chisel3.stage.ChiselStage
class SimpleBus_aw extends Bundle{
	val awaddr 		= Output(UInt(64.W))
	val awlen 		= Output(UInt(8.W))
	val wdata 		= Output(UInt(64.W))
	val wlast 		= Output(Bool())
	val wstrb 		= Output(UInt(8.W))
	def isBurst()	= (awlen =/= 0.U)
}

class SimpleBus_b extends Bundle{
	val bresp 		= Output(UInt(2.W))
}

class SimpleBus_ar extends Bundle{
	val araddr 		= Output(UInt(64.W))
	val arlen 		= Output(UInt(8.W))

}

class SimpleBus_r extends Bundle{
	val rdata 		= Output(UInt(64.W))
	val rresp		= Output(UInt(2.W))
	val rlast 		= Output(Bool())
}

class SimpleBus extends Bundle{
	val aw 	= Decoupled(new SimpleBus_aw)
	val b 	= Flipped(Decoupled(new SimpleBus_b))
	val ar	= Decoupled(new SimpleBus_ar)
	val r 	= Flipped(Decoupled(new SimpleBus_r))
}

// simplebus <--------> axi
class Crossbar extends Module{
	val io = IO(new Bundle{
		val ICache_bus 	= new SimpleBus
		val DCache_bus 	= new SimpleBus
		val AXI_Bus		= new AXI4Bus
	})
	val lockFun = ((x:SimpleBus_aw) => x.isBurst())
	val aw_arb = Module(new LockingArbiter(chiselTypeOf(io.ICache_bus.aw.bits),2,2,Some(lockFun)))
	val ar_arb = Module(new LockingArbiter(chiselTypeOf(io.ICache_bus.ar.bits),2,0,Some(((x:SimpleBus_ar) => false.B))))

	aw_arb.io.in(0).bits.awaddr := io.ICache_bus.aw.bits.awaddr 
	aw_arb.io.in(0).bits.awlen  := io.ICache_bus.aw.bits.awlen
	aw_arb.io.in(0).bits.wdata	:= io.ICache_bus.aw.bits.wdata
	aw_arb.io.in(0).bits.wlast  := io.ICache_bus.aw.bits.wlast
	aw_arb.io.in(0).valid 		:= io.ICache_bus.aw.valid 
	//aw_arb.io.in(0).ready		:= true.B
	io.ICache_bus.aw.ready      := true.B
	//io.ICache_bus.aw.bits<>aw_arb.io.in(0).bits

	aw_arb.io.in(1).bits.awaddr := io.DCache_bus.aw.bits.awaddr 
	aw_arb.io.in(1).bits.awlen  := io.DCache_bus.aw.bits.awlen
	aw_arb.io.in(1).bits.wdata	:= io.DCache_bus.aw.bits.wdata
	aw_arb.io.in(1).bits.wlast  := io.DCache_bus.aw.bits.wlast
	aw_arb.io.in(1).valid 		:= io.DCache_bus.aw.valid 
	io.DCache_bus.aw.ready      := aw_arb.io.in(1).ready
	//aw_arb.io.in(1) <> io.DCache_bus.aw 

	ar_arb.io.in(0) <> io.ICache_bus.ar 
	ar_arb.io.in(1) <> io.DCache_bus.ar 

//--------------------------aw----------------------------
	val reg_aw_ack 		= RegInit(false.B)
	val reg_w_ack 		= RegInit(false.B) 


	val aw_w_finish		= reg_aw_ack & reg_w_ack

	when(aw_w_finish){
		reg_aw_ack := false.B
		reg_w_ack  := false.B
	}.otherwise{
		when(io.AXI_Bus.aw.fire()){
			reg_aw_ack := true.B
		}
		when(io.AXI_Bus.w.fire() & io.AXI_Bus.w.bits.wlast){
			reg_w_ack  := true.B
		}
	}

//--------------------------aw----------------------------
	io.AXI_Bus.aw.bits.awid 	:= 0.U  
	io.AXI_Bus.aw.bits.awaddr 	:= aw_arb.io.out.bits.awaddr 
	io.AXI_Bus.aw.bits.awlen 	:= aw_arb.io.out.bits.awlen 
	io.AXI_Bus.aw.bits.awsize 	:= 8.U
	io.AXI_Bus.aw.bits.awburst	:= "b01".U
	io.AXI_Bus.aw.valid 		:= aw_arb.io.out.valid &(!reg_aw_ack)
	//:=io.AXI_Bus.aw.ready

//--------------------------w-----------------------------
	io.AXI_Bus.w.bits.wid 		:= 0.U
	io.AXI_Bus.w.bits.wdata 	:= aw_arb.io.out.bits.wdata
	io.AXI_Bus.w.bits.wstrb		:= aw_arb.io.out.bits.wstrb
	io.AXI_Bus.w.bits.wlast 	:= aw_arb.io.out.bits.wlast
	io.AXI_Bus.w.valid 		:= aw_arb.io.out.valid &(!reg_w_ack)
	aw_arb.io.out.ready 	:= io.AXI_Bus.w.ready
//-------------------------b------------------------------
	io.DCache_bus.b.bits.bresp	:= Mux(aw_arb.io.chosen === 1.U,io.AXI_Bus.b.bits.bresp,"b00".U)
	io.DCache_bus.b.valid 		:= Mux(aw_arb.io.chosen === 1.U,io.AXI_Bus.b.valid,false.B)
	io.AXI_Bus.b.ready 			:= Mux(aw_arb.io.chosen === 1.U,io.DCache_bus.b.ready,io.ICache_bus.b.ready)
	io.ICache_bus.b.bits.bresp	:= Mux(aw_arb.io.chosen === 0.U,io.AXI_Bus.b.bits.bresp,"b00".U)
	io.ICache_bus.b.valid 		:= Mux(aw_arb.io.chosen === 0.U,io.AXI_Bus.b.valid,false.B)
	//:=io.AXI_Bus.b.bid
//------------------------ar------------------------------
	io.AXI_Bus.ar.bits.arid			:= 0.U 
	io.AXI_Bus.ar.bits.araddr 		:= ar_arb.io.out.bits.araddr
	io.AXI_Bus.ar.bits.arlen 		:= ar_arb.io.out.bits.arlen
	io.AXI_Bus.ar.bits.arsize 		:= 8.U
	io.AXI_Bus.ar.bits.arburst		:= "b01".U
	io.AXI_Bus.ar.valid 		:=  ar_arb.io.out.valid

	ar_arb.io.out.ready 		:= io.AXI_Bus.ar.ready
//-----------------------r--------------------------------
	//:=io.AXI_Bus.r.rid
	io.ICache_bus.r.bits.rdata 		:= Mux(ar_arb.io.chosen === 0.U,io.AXI_Bus.r.bits.rdata,0.U)
	io.ICache_bus.r.bits.rresp		:= Mux(ar_arb.io.chosen === 0.U,io.AXI_Bus.r.bits.resp,"b00".U)
	io.ICache_bus.r.bits.rlast 		:= Mux(ar_arb.io.chosen === 0.U,io.AXI_Bus.r.bits.rlast,false.B)
	io.ICache_bus.r.valid			:= Mux(ar_arb.io.chosen === 0.U,io.AXI_Bus.r.bits.rdata,false.B)
	io.AXI_Bus.r.ready 				:= Mux(ar_arb.io.chosen === 1.U,io.DCache_bus.r.ready,io.ICache_bus.r.ready)

	io.DCache_bus.r.bits.rdata 		:= Mux(ar_arb.io.chosen === 1.U,io.AXI_Bus.r.bits.rdata,0.U)
	io.DCache_bus.r.bits.rresp		:= Mux(ar_arb.io.chosen === 1.U,io.AXI_Bus.r.bits.resp,"b00".U)
	io.DCache_bus.r.bits.rlast 		:= Mux(ar_arb.io.chosen === 1.U,io.AXI_Bus.r.bits.rlast,false.B)
	io.DCache_bus.r.valid			:= Mux(ar_arb.io.chosen === 1.U,io.AXI_Bus.r.bits.rdata,false.B)
}