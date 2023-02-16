import chisel3._
import chisel3.util._ 

class RAMCtrl extends BlackBox{
    val io = IO(new Bundle{
        val clock   = Input(Clock())
        val raddr   = Input(UInt(64.W))
        val rdata   = Output(UInt(64.W))
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
	//val reg_aw_awid 	= RegInit(0.U(4.W))
	val reg_aw_awaddr 	= RegInit(0.U(64.W))
	val reg_aw_awlen	= RegInit(0.U(8.W))
	//val reg_aw_awsize 	= RegInit(0.U(3.W))
	//val reg_aw_awburst	= RegInit(0.U(2.W))
	val reg_aw_ready	= RegInit(true.B)

	val reg_is_w		= RegInit(false.B)

	//-------------------w---------------------
	val reg_w_ready 	= RegInit(false.B)
	//-------------------b---------------------
	val reg_b_bresp 	= RegInit(0.U(2.W))
	val reg_b_valid 	= RegInit(false.B)
	when(io.ram_bus.aw.fire()){
		reg_aw_awaddr	:= io.ram_bus.aw.bits.awaddr 
		reg_aw_awlen 	:= io.ram_bus.aw.bits.awlen
		reg_is_w 		:= true.B
		reg_w_ready		:= true.B
		reg_aw_ready    := false.B 
	}.otherwise{
		when(io.ram_bus.w.fire()){
			reg_aw_awaddr		:= reg_aw_awaddr + 4.U
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
//------------------------------------------------
	val reg_ar_araddr	= RegInit(0.U(64.W))
	val reg_ar_arlen 	= RegInit(0.U(8.W))
	val reg_ar_ready	= RegInit(true.B)

	val reg_r_resp		= RegInit(0.U(2.W))
	val reg_r_rdata		= RegInit(0.U(64.W))
	//val reg_r_rlast		= RegInit(false.B)
	val reg_r_valid		= RegInit(false.B) 
	val reg_start_read	= RegInit(false.B) 

	val r_rlast = (reg_ar_arlen === 0.U) & reg_r_valid
	when(io.ram_bus.ar.fire()){
		reg_ar_araddr	:= io.ram_bus.ar.bits.araddr
		reg_ar_arlen	:= io.ram_bus.ar.bits.arlen
		reg_ar_ready 	:= false.B 
		reg_start_read  := true.B
	}.otherwise{
		when(io.ram_bus.r.fire()){
			when(reg_ar_arlen === 0.U){
				reg_ar_ready 	:= true.B
				reg_start_read	:= false.B
			}.otherwise{
				reg_ar_arlen 	:= reg_ar_arlen - 1.U
				reg_ar_araddr	:= reg_ar_araddr + 8.U
			}
		}
	}

	val r_idle :: r_busy :: Nil = Enum(2)
	val reg_r_state 			= RegInit(r_idle)
	switch(reg_r_state){
		is(r_idle){
			reg_r_valid	:= Mux(reg_start_read,true.B,false.B)
			//reg_r_rlast := Mux((reg_ar_arlen === 0.U)&reg_start_read,true.B,false.B)
			reg_r_state := Mux(reg_start_read,r_busy,r_idle)
		}
		is(r_busy){
			//reg_r_rlast 	:= Mux(reg_ar_arlen === 0.U,true.B,false.B)
			when(io.ram_bus.r.fire()){
				when(reg_ar_arlen === 0.U){
					reg_r_valid := false.B 
					//reg_r_rlast	:= false.B
					reg_r_state	:= r_idle
				}
			}
		}
	}

    val mem = Module(new RAMCtrl)
	mem.io.clock				:= clock 
	mem.io.raddr 				:= reg_ar_araddr
	mem.io.waddr 				:= reg_aw_awaddr
	mem.io.wdata 				:= io.ram_bus.w.bits.wdata
	mem.io.wmask				:= Cat(io.ram_bus.w.bits.wstrb.asBools.map(Fill(8,_)))
	mem.io.wen 					:= reg_is_w

	io.ram_bus.aw.ready 		:= reg_aw_ready
	io.ram_bus.w.ready 			:= reg_w_ready 
	io.ram_bus.b.valid 			:= reg_b_valid
	io.ram_bus.b.bits.bid 			:= 0.U
	io.ram_bus.b.bits.bresp			:= reg_b_bresp
	io.ram_bus.ar.ready			:= reg_ar_ready
	io.ram_bus.r.bits.rid 			:= 0.U 
	io.ram_bus.r.bits.rresp			:= reg_r_resp
	io.ram_bus.r.bits.rdata			:= mem.io.rdata
	io.ram_bus.r.bits.rlast			:= r_last //reg_r_rlast
	io.ram_bus.r.valid			:= reg_r_valid
}