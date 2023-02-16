
import chisel3._
import chisel3.util._ 
class SimpleBus_w extends Bundle{
	val waddr 		= Output(UInt(64.W))
	val wdata 		= Output(UInt(64.W))
	val wlast 		= Output(Bool())
}

class SimpleBus_b extends Bundle{
	val bresp 		= Output(UInt(2.W))
}

class SimpleBus_r extends Bundle{
	val raddr 		= Output(UInt(64.W))
	val rdata 		= Input(UInt(64.W))
	val rlast 		= Input(Bool())
	val rresp 		= Input(UInt(2.W))
}

class SimpleBus extends Bundle{
	val w  = Decoupled(new SimpleBus_w)
	val b  = Flipped(Decoupled(new SimpleBus_b))
	val r  = new Bundle{
		val valid = Output(Bool())
		val bits = new SimpleBus_r
		val ready = Input(Bool())
		def fire: Bool = valid & ready
	}
}

class Crossbar extends Module{
	val io = IO(new Bundle{
		val ICache_bus 	= Flipped(new SimpleBus)
		val DCache_bus 	= Flipped(new SimpleBus)
		val bus1		= Flipped(new Bundle{
			val valid = Output(Bool())
			val bits = new Bundle{
				val addr 	= Output(UInt(64.W))
				val rdata	= Input(UInt(64.W))
			}
			val ready = Input(Bool())
			def fire: Bool = valid & ready
		})
		val bus2 		= Flipped( new Bundle{
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
		val AXI_Bus		= new AXI4Bus
	})
//---------------------write lock-----------------------------------
val reg_w_cnt = RegInit(0.U(2.W))
val w_locked = (reg_w_cnt =/= 0.U)
val w_lockId = RegInit(0.U(2.W))
val w_chosen = WireInit(0.U(2.W))

when(!w_locked){
	when(io.DCache_bus.w.valid){
		w_chosen := 0.U
	}.elsewhen(io.bus2.valid & io.bus2.bits.is_w){
		w_chosen := 1.U
	}.otherwise{
		w_chosen := 0.U
	}
}.otherwise{
	w_chosen := w_lockId
}

when(!w_locked){	//Lock
	when(io.DCache_bus.w.valid){
		reg_w_cnt 	:= 2.U 
		w_lockId	:= 0.U
	}.elsewhen(io.bus2.valid & io.bus2.bits.is_w){
		reg_w_cnt	:= 1.U 
		w_lockId	:= 1.U
	}.otherwise{
		w_lockId	:= 0.U
		reg_w_cnt 	:= 0.U
	}
}.otherwise{ //Unlock
	when((w_lockId === 0.U) & io.DCache_bus.w.fire){
		reg_w_cnt	:= reg_w_cnt - 1.U
	}.elsewhen((w_lockId === 1.U) & io.bus2.fire & io.bus2.bits.is_w){
		reg_w_cnt	:= reg_w_cnt - 1.U
	}.otherwise{
		reg_w_cnt	:= reg_w_cnt
	}
}
//---------------------read lock------------------------------------
	val reg_r_cnt = RegInit(0.U(2.W))
	val r_locked = (reg_r_cnt =/= 0.U)
	val r_lockId = RegInit(0.U(2.W))
	val r_chosen = WireInit(0.U(2.W))

	when(!r_locked){
		when(io.ICache_bus.r.valid){
			r_chosen	:= 0.U
		}.elsewhen(io.DCache_bus.r.valid){
			r_chosen	:= 1.U
		}.elsewhen(io.bus1.valid){
			r_chosen	:= 2.U
		}.elsewhen(io.bus2.valid & (!io.bus2.bits.is_w)){
			r_chosen	:= 3.U
		}.otherwise{
			r_chosen	:= 0.U
		}
	}.otherwise{
		r_chosen := r_lockId
	}

	when(!r_locked){
		when(io.ICache_bus.r.valid){
			reg_r_cnt	:= 2.U
			r_lockId	:= 0.U
		}.elsewhen(io.DCache_bus.r.valid){
			reg_r_cnt	:= 2.U
			r_lockId	:= 1.U
		}.elsewhen(io.bus1.valid){
			reg_r_cnt	:= 1.U
			r_lockId	:= 2.U
		}.elsewhen(io.bus2.valid & (!io.bus2.bits.is_w)){
			reg_r_cnt	:= 1.U
			r_lockId	:= 3.U
		}.otherwise{
			reg_r_cnt	:= 0.U
			r_lockId	:= 0.U
		}
	}.otherwise{
		when((r_lockId === 0.U) &  io.ICache_bus.r.fire){
			reg_r_cnt	:= reg_r_cnt - 1.U
		}.elsewhen((r_lockId === 1.U) & io.DCache_bus.r.fire){
			reg_r_cnt	:= reg_r_cnt - 1.U
		}.elsewhen((r_lockId === 2.U) & io.bus1.fire){
			reg_r_cnt	:= reg_r_cnt - 1.U
		}.elsewhen((r_lockId === 3.U) & io.bus2.fire & (!io.bus2.bits.is_w)){
			reg_r_cnt	:= reg_r_cnt - 1.U
		}.otherwise{
			reg_r_cnt	:= reg_r_cnt
		}
	}
//---------------------------------------------------------------------------
	io.ICache_bus.w.ready := false.B 
	io.ICache_bus.b.valid := false.B 
	io.ICache_bus.b.bresp := "b00".U 

	io.ICache_bus.r.bits.rdata 	:= io.AXI_Bus.r.bits.rdata
	io.ICache_bus.r.ready 		:= (r_chosen === 0.U) & io.AXI_Bus.r.valid
	io.ICache_bus.r.bits.rlast 	:= (r_chosen === 0.U) & io.AXI_Bus.r.bits.rlast 
	io.ICache_bus.r.bits.rresp	:= io.AXI_Bus.r.bits.rresp

	io.DCache_bus.w.ready 	:= (w_chosen === 0.U) & io.AXI_Bus.w.ready 
	io.DCache_bus.b.valid 	:= (w_chosen === 0.U) & io.AXI_Bus.b.valid 
	io.DCache_bus.b.bits.bresp 	:= io.AXI_Bus.b.bits.bresp 

	io.DCache_bus.r.bits.rdata 	:= io.AXI_Bus.r.bits.rdata
	io.DCache_bus.r.bits.rlast	:= (r_chosen === 1.U) & io.AXI_Bus.r.bits.rlast 
	io.DCache_bus.r.bits.rresp	:= io.AXI_Bus.r.bits.rresp
	io.ICache_bus.r.ready		:= (r_chosen === 1.U) & io.AXI_Bus.r.valid

	io.bus1.ready 		:= (r_chosen === 2.U) & io.AXI_Bus.r.valid 
	io.bus1.bits.rdata 	:= io.AXI_Bus.r.bits.rdata 

	io.bus2.ready 		:= ((r_chosen === 3.U) & io.AXI_Bus.r.valid) |((w_chosen === 1.U) & io.AXI_Bus.w.ready )
	io.bus2.bits.rdata  := io.AXI_Bus.r.bits.rdata 
//--------------------------AXI------------------------------------
	val reg_aw_ok = RegInit(false.B)
	reg_aw_ok := Mux(io.AXI_Bus.b.fire,false.B,Mux(io.AXI_Bus.aw.fire,true.B,reg_aw_ok))

	io.AXI_Bus.aw.valid 		:= ((w_chosen === 0.U) & io.DCache_bus.w.valid & (!reg_aw_ok))|((w_chosen === 1.U) & io.bus2.valid & (!reg_aw_ok) & io.bus2.bits.is_w)
	io.AXI_Bus.aw.bits.awid 	:= 0.U
	io.AXI_Bus.aw.bits.awaddr	:= 0.U
	io.AXI_Bus.aw.bits.awlen 	:= 0.U
	io.AXI_Bus.aw.bits.awsize   := 3.U
	io.AXI_Bus.aw.bits.awburst  := "b01".U
	when(w_chosen === 0.U){
		io.AXI_Bus.aw.bits.awaddr 	:= io.DCache_bus.w.bits.waddr
		io.AXI_Bus.aw.bits.awlen 	:= 1.U 
		io.AXI_Bus.aw.bits.awsize   := 3.U
	}.elsewhen(w_chosen === 1.U){
		io.AXI_Bus.aw.bits.awaddr := io.bus2.bits.addr
		io.AXI_Bus.aw.bits.awlen 	:= 0.U 
		io.AXI_Bus.aw.bits.awsize   := io.bus2.bits.size
	}.otherwise{
		io.AXI_Bus.aw.bits.awaddr := 0.U
		io.AXI_Bus.aw.bits.awlen 	:= 0.U
		io.AXI_Bus.aw.bits.awsize   := 3.U
	}

	io.AXI_Bus.w.valid 		:= false.B
	io.AXI_Bus.w.bits.wid 	:= 0.U 
	io.AXI_Bus.w.bits.wdata := 0.U 
	io.AXI_Bus.w.bits.wstrb := 0.U
	io.AXI_Bus.w.bits.wlast := false.B 
	when(w_chosen === 0.U){
		io.AXI_Bus.w.valid 		:= io.DCache_bus.w.valid 
		io.AXI_Bus.w.bits.wid 	:= 0.U 
		io.AXI_Bus.w.bits.wdata := io.DCache_bus.w.bits.wdata
		io.AXI_Bus.w.bits.wstrb := "hff".U
		io.AXI_Bus.w.bits.wlast := io.DCache_bus.w.bits.wlast 
	}.elsewhen(w_chosen === 1.U){
		io.AXI_Bus.w.valid 		:= io.bus2.valid & io.bus2.bits.is_w
		io.AXI_Bus.w.bits.wid 	:= 0.U 
		io.AXI_Bus.w.bits.wdata := io.bus2.bits.wdata
		io.AXI_Bus.w.bits.wstrb := io.bus2.bits.wstrb
		io.AXI_Bus.w.bits.wlast := true.B 
	}.otherwise{
		io.AXI_Bus.w.valid 		:= false.B
		io.AXI_Bus.w.bits.wid 	:= 0.U 
		io.AXI_Bus.w.bits.wdata := 0.U 
		io.AXI_Bus.w.bits.wstrb := 0.U
		io.AXI_Bus.w.bits.wlast := false.B 
	}

	io.AXI_Bus.b.ready 			:= true.B

	val reg_ar_ok = RegInit(false.B)
	reg_ar_ok := Mux(io.AXI_Bus.r.bits.rlast === true.B,false.B,Mux(io.AXI_Bus.ar.fire,true.B,reg_ar_ok))


	io.AXI_Bus.ar.valid 		:= false.B 
	io.AXI_Bus.ar.bits.arid 	:= 0.U 
	io.AXI_Bus.ar.bits.araddr	:= 0.U 
	io.AXI_Bus.ar.bits.arlen 	:= 0.U
	io.AXI_Bus.ar.bits.arsize	:= 3.U 
	io.AXI_Bus.ar.bits.arburst	:= "b01".U 
	when(r_chosen === 0.U){
		io.AXI_Bus.ar.valid 		:= io.ICache_bus.r.valid & !reg_ar_ok
		io.AXI_Bus.ar.bits.araddr	:= io.ICache_bus.r.bits.raddr
		io.AXI_Bus.ar.bits.arlen 	:= 1.U 
		io.AXI_Bus.ar.bits.arsize	:= 3.U 
	}.elsewhen(r_chosen === 1.U){
		io.AXI_Bus.ar.valid 		:= io.DCache_bus.r.valid & !reg_ar_ok
		io.AXI_Bus.ar.bits.araddr	:= io.ICache_bus.r.bits.raddr
		io.AXI_Bus.ar.bits.arlen 	:= 1.U
		io.AXI_Bus.ar.bits.arsize	:= 3.U 
	}.elsewhen(r_chosen === 2.U){
		io.AXI_Bus.ar.valid 		:= io.bus1.valid & !reg_ar_ok
		io.AXI_Bus.ar.bits.araddr	:= io.bus1.bits.raddr 
		io.AXI_Bus.ar.bits.arlen 	:= 0.U
		io.AXI_Bus.ar.bits.arsize	:= 3.U
	}.elsewhen(r_chosen === 3.U){
		io.AXI_Bus.ar.valid 		:= io.bus2.valid & !reg_ar_ok
		io.AXI_Bus.ar.bits.araddr	:= io.bus2.bits.raddr 
		io.AXI_Bus.ar.bits.arlen 	:= 0.U
		io.AXI_Bus.ar.bits.arsize	:= io.bus2.bits.size
	}.otherwise{
		io.AXI_Bus.ar.valid 		:= false.B 
		io.AXI_Bus.ar.bits.araddr	:= 0.U 
		io.AXI_Bus.ar.bits.arlen 	:= 0.U
		io.AXI_Bus.ar.bits.arsize	:= 3.U 
	}

	io.AXI_Bus.r.ready 	:= true.B
}