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
	val r  = Decoupled(new SimpleBus_r)
}

class Crossbar extends Module{
	val io = IO(new Bundle{
		val ICache_bus 	= Flipped(new SimpleBus)
		val DCache_bus 	= Flipped(new SimpleBus)
		val bus1		= Flipped(Decoupled(new Bundle{
			val addr 	= Output(UInt(64.W))
			val rdata	= Input(UInt(64.W))
		}))
		val bus2 		= Flipped(Decoupled(new Bundle{
			val addr    = Output(UInt(64.W))
			val rdata 	= Input(UInt(64.W))
			val wdata 	= Output(UInt(64.W))
			val size 	= Output(UInt(2.W))
			val wstrb 	= Output(UInt(8.W))
			val is_w 	= Output(Bool())
		}))
		val AXI_Bus		= new AXI4Bus
	})
	val r_arb = Module(new LockingArbiter(chiselTypeOf(io.ICache_bus.r.bits),2,2,None))

	r_arb.io.in(0) <> io.ICache_bus.r
	r_arb.io.in(1) <> io.DCache_bus.r

//-----------------------------aw ----------------------------
	val reg_aw_ok = RegInit(false.B)
	when(io.AXI_Bus.aw.fire){
		reg_aw_ok	:= true.B
	}.otherwise{
		when(io.AXI_Bus.b.fire){
			reg_aw_ok := false.B
		}
	}
	io.AXI_Bus.aw.bits.awid 		:= 0.U
	when(io.bus2.valid){
		io.AXI_Bus.aw.bits.awaddr	:= io.bus2.bits.addr
		io.AXI_Bus.aw.bits.awlen	:= 0.U
		io.AXI_Bus.aw.bits.awsize	:= io.bus2.bits.size
		io.AXI_Bus.aw.bits.awburst	:= "b01".U
		io.AXI_Bus.aw.valid 		:= io.bus2.valid & !reg_aw_ok & io.bus2.bits.is_w
	}.otherwise{

		io.AXI_Bus.aw.bits.awaddr	:= io.DCache_bus.w.bits.waddr
		io.AXI_Bus.aw.bits.awlen	:= 1.U
		io.AXI_Bus.aw.bits.awsize	:= 3.W
		io.AXI_Bus.aw.bits.awburst	:= "b01".U
		io.AXI_Bus.aw.valid 		:= io.DCache_bus.w.valid & !reg_aw_ok		
	}
	//:= io.AXI_Bus.aw.ready
//-----------------------------w ------------------------------									
	io.AXI_Bus.w.bits.wid			:= 0.U
	when(io.bus2.valid){
		io.AXI_Bus.w.bits.wdata		:= io.bus2.bits.wdata
		io.AXI_Bus.w.bits.wstrb		:= io.bus2.bits.wstrb
		io.AXI_Bus.w.bits.wlast		:= true.B
		io.AXI_Bus.w.valid 			:= io.bus2.valid & io.bus2.bits.is_w
	}.otherwise{
		io.AXI_Bus.w.bits.wdata		:= io.DCache_bus.w.bits.wdata
		io.AXI_Bus.w.bits.wstrb		:= "hff".U
		io.AXI_Bus.w.bits.wlast		:= io.DCache_bus.w.bits.wlast
		io.AXI_Bus.w.valid 			:= io.DCache_bus.w.valid
	}
	// 毛刺撤销不及时 ?????
	io.DCache_bus.w.ready		:=  io.DCache_bus.w.valid & io.AXI_Bus.w.ready
	//io.bus2.ready 				:=	io.bus2.valid & io.AXI_Bus.w.ready
	io.bus2.ready 				:=	io.bus2.valid & io.AXI_Bus.b.valid & io.bus2.bits.is_w
//-----------------------------b ------------------------------
	when(io.bus2.valid){
		io.AXI_Bus.b.ready			:= true.B
		//......
	}.otherwise{
		io.AXI_Bus.b.ready 				:= io.DCache_bus.b.ready										
		io.DCache_bus.b.bits.bit 		:= io.AXI_Bus.b.bits.bit
		io.DCache_bus.b.bits.bresp 		:= io.AXI_Bus.b.bits.bresp
		io.DCache_bus.b.valid 			:= io.AXI_Bus.b.valid 		
	}
//-------------------------ar --------------------------------------------

	val reg_ar_ok = RegInit(false.B)
	when(io.AXI_Bus.ar.fire){
		reg_ar_ok := true.B 
	}.otherwise{
		when(io.AXI_Bus.r.bits.rlast === true.B){
			reg_ar_ok := false.B
		}
	}	
	io.AXI_Bus.ar.bits.arid			:= 0.U
	io.AXI_Bus.ar.bits.arburst		:= "b01".U 
	when(io.bus1.valid){
		io.AXI_Bus.ar.bits.araddr	:= io.bus1.bits.addr
		io.AXI_Bus.ar.bits.arlen	:= 0.U
		io.AXI_Bus.ar.bits.arsize	:= 3.U
		io.AXI_Bus.ar.valid			:= io.bus1.valid & !reg_ar_ok
	}.elsewhen(io.bus2.valid & (!io.bus2.bits.is_w)){
		io.AXI_Bus.ar.bits.araddr	:= io.bus2.bits.addr
		io.AXI_Bus.ar.bits.arlen	:= 0.U
		io.AXI_Bus.ar.bits.arsize	:= io.bus2.bits.size
		io.AXI_Bus.ar.valid			:= io.bus2.valid & (!io.bus2.bits.is_w) & !reg_ar_ok		
	}.otherwise{
		io.AXI_Bus.ar.bits.araddr	:= r_arb.io.out.bits.raddr
		io.AXI_Bus.ar.bits.arlen	:= 1.U
		io.AXI_Bus.ar.bits.arsize	:= 3.U // 2^3
		io.AXI_Bus.ar.valid			:= r_arb.io.out.valid & !reg_ar_ok
	}
	//:= io.AXI_Bus.ar.ready
//-------------------------r ---------------------------------------------		
	//	:= io.AXI_Bus.r.bits.rid
	io.AXI_Bus.r.ready			:= true.B
	io.bus1.bits.rdata 			:= io.AXI_Bus.r.bits.rdata
	io.bus2.bits.rdata 			:= io.AXI_Bus.r.bits.rdata
	r_arb.io.out.bits.resp 		:= io.AXI_Bus.r.bits.resp
	r_arb.io.out.bits.rdata 	:= io.AXI_Bus.r.bits.rdata
	when(io.bus1.valid){
		io.bus1.ready 				:= io.AXI_Bus.r.valid
	}.elsewhen(io.bus2.valid & (!io.bus2.bits.is_w)){
		io.bus2.ready 				:= io.AXI_Bus.r.valid
	}.otherwise{
		r_arb.io.out.bits.rlast		:= io.AXI_Bus.r.bits.rlast
		r_arb.io.out.ready			:= io.AXI_Bus.r.valid		
	}
//-------ICache no use ---------------------------------------------------
    //:= io.ICache_bus.w.bits.waddr  
	//:= io.ICache_bus.w.bits.wdata 
	//:= io.ICache_bus.w.bits.wlast 
	//:= io.ICache_bus.w.valid 
	io.ICache_bus.w.ready := false.B 
	
	io.ICache_bus.b.bits.bresp := "b00".U 
	io.ICache_bus.b.valid 		:= false.B 
	//:= io.ICache_bus.b.ready 
	
}