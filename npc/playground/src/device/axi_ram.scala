import chisel3._
import chisel3.util._ 

class RAMCtrl extends BlackBox{
    val io = IO(new Bundle{
        val clock   = Input(Clock())
        val raddr   = Input(UInt(64.W))
        val rdata   = Output(UInt(64.W))
		val rflag   = Input(Bool())
        val waddr   = Input(UInt(64.W))
        val wdata   = Input(UInt(64.W))
        val wmask   = Input(UInt(64.W))
        val wen     = Input(Bool())
    })
}

class AXI_RAM extends Module{
    val io = IO(new Bundle{
		val ram_bus = Flipped(new AXI4Bus)
    })
	val reg_raddr = RegInit(0.U(64.W))
	val reg_rlen  = RegInit(0.U(4.W))
	//val reg_rlast = RegInit(false.B)
	val reg_ar_ready = RegInit(true.B)
	val reg_r_valid = RegInit(false.B)
	
	val r_idle :: r_busy :: Nil = Enum(2)
	val reg_r_state = RegInit(r_idle)
	val r_rlast  = (reg_rlen === 0.U)&reg_r_valid
	switch(reg_r_state){
		is(r_idle){
			when(io.ram_bus.ar.fire){
				reg_ar_ready := false.B
				reg_r_valid  := true.B
				//mem.Q 
				reg_r_state	 := r_busy
				//reg_rlast    := Mux(io.ram_bus.ar.bits.arlen === 0.U,true.B, false.B)
				reg_raddr    := io.ram_bus.ar.bits.araddr + 8.U
				reg_rlen 	 := io.ram_bus.ar.bits.arlen
			}
		}
		is(r_busy){
			when(io.ram_bus.r.fire){
				when(reg_rlen === 0.U){
					reg_r_valid := false.B
					reg_ar_ready := true.B
					reg_r_state := r_idle
				}.otherwise{
					reg_rlen    := reg_rlen - 1.U
					reg_r_valid := true.B
					reg_raddr   := reg_raddr + 8.U
				}
			}
		}
	}
	
	val reg_w_addr 	= RegInit(0.U(64.W))
	val reg_is_w 	= RegInit(false.B)
	val reg_aw_ready	= RegInit(true.B)
	val reg_w_ready = RegInit(false.B)
	
	val reg_b_bresp	= RegInit(0.U(2.W))
	val reg_b_valid = RegInit(false.B)
	
	val w_en = reg_is_w & io.ram_bus.w.valid
	when(io.ram_bus.aw.fire){
		reg_w_addr  := io.ram_bus.aw.bits.awaddr
		reg_is_w 	:= true.B 
		reg_aw_ready	:= false.B 
		reg_w_ready	:= true.B 
	}.otherwise{
		when(io.ram_bus.w.fire){
			reg_w_addr 		:= reg_w_addr + 8.U
			when(io.ram_bus.w.bits.wlast){
				reg_is_w 		:= false.B
				reg_w_ready 	:= false.B
				reg_aw_ready 	:= true.B
			}
		}
	}

	when(io.ram_bus.w.bits.wlast){
		reg_b_bresp 	:= "b00".U 
		reg_b_valid 	:= true.B
	}.otherwise{
		when(io.ram_bus.b.ready){
			reg_b_valid 	:= false.B
		}
	}
	
    val mem = Module(new RAMCtrl)
	mem.io.clock				:= clock 
	mem.io.raddr 				:= Mux(reg_r_valid,reg_raddr,io.ram_bus.ar.bits.araddr)
	mem.io.rflag 				:= io.ram_bus.ar.valid
	mem.io.waddr 				:= reg_w_addr
	mem.io.wdata 				:= io.ram_bus.w.bits.wdata
	mem.io.wmask				:= Cat(io.ram_bus.w.bits.wstrb.asBools.map(Fill(8,_)))
	mem.io.wen 					:= w_en

	io.ram_bus.aw.ready 		:= reg_aw_ready
	io.ram_bus.w.ready 			:= reg_w_ready 
	io.ram_bus.b.valid 			:= reg_b_valid
	io.ram_bus.b.bits.bid 		:= 0.U
	io.ram_bus.b.bits.bresp		:= reg_b_bresp
	io.ram_bus.ar.ready			:= reg_ar_ready
	io.ram_bus.r.bits.rid 		:= 0.U 
	io.ram_bus.r.bits.rresp		:= "b00".U
	io.ram_bus.r.bits.rdata		:= mem.io.rdata
	io.ram_bus.r.bits.rlast		:= r_rlast //reg_r_rlast
	io.ram_bus.r.valid			:= reg_r_valid
}