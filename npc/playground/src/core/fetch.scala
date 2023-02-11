import chisel3._
import chisel3.util._ 
import chisel3.util.experimental.BoringUtils

///1 "hff".U
//2 "o377".U
//3 "b1111_1111".U
class Fetch extends Module{
	val io = IO(new Bundle{
		val in = new Bundle{
			val r = Flipped(Decoupled(new Bundle{
				val inst 	= Output(UInt(64.W))
			}))

			val de_stall 	= Input(Bool())
			val wb_stall  	= Input(Bool()) 
			val ex_stall	= Input(Bool())
			val next_pc 	= Input(UInt(64.W))
			val valid_next_pc = Input(Bool())
			val flush 		= Input(Bool())
		}

		val out = new Bundle{
			val w = Decoupled(new Bundle{
				val pc_0 	= Output(UInt(64.W))
			})
			val pc_1 = Output(UInt(64.W))
			val inst = Output(UInt(32.W))
		}
	})
	val next_pc			= io.in.next_pc
	val flush 			= io.in.flush
	val stall 			= io.in.de_stall | io.in.wb_stall | io.in.ex_stall
	val reg_pc_0 		= RegInit("h8000_0000".U(64.W))
	val reg_pc_1 		= RegInit(0.U(64.W))
	val reg_inst		= RegInit(0.U(32.W))
	val reg_r_ready 	= RegInit(true.B)
	val reg_w_valid 	= RegInit(true.B)
	
	val reg_stall 		= RegInit(false.B)
	val reg_temp_pc_1	= RegInit(0.U(64.W))
	val reg_temp_inst 	= RegInit(0.U(32.W))

	reg_stall := Mux(stall,true.B,false.B) 
	when(stall){
		// pc_1 should be output, so we save it temporarily
		reg_temp_pc_1	:= Mux(flush,0.U,reg_pc_1)
		// inst should be output, so we save it temporarily 
		reg_temp_inst	:= Mux(flush,0.U,reg_inst)
	}
//---------------------------------------------------------
	val reg_w_flush = RegInit(false.B)
	val reg_r_flush = RegInit(false.B)
	when(io.out.w.fire()){
		reg_pc_0	:= Mux(flush | reg_w_flush,next_pc,reg_pc_0 + 4.U)
		reg_pc_1 	:= Mux(flush | reg_w_flush,0.U,reg_pc_0)
		reg_w_flush := false.B
		when(stall){
			reg_w_valid := false.B
		}
	}.otherwise{
		reg_w_flush	:= Mux(flush,true.B,reg_w_flush)
		reg_w_valid := Mux(stall,reg_w_valid,true.B)
	}
	
	when(io.in.r.fire()){
		when(flush|reg_r_flush){
			reg_inst 	:= 0.U
		}.otherwise{
			reg_inst 	:= Mux(reg_pc_0(2),io.in.r.bits.inst(63,32),io.in.r.bits.inst(31,0))
		}
		reg_r_flush = false.B
		when(stall){
			reg_r_ready	:= false.B
		}
	}.otherwise{
		reg_r_flush := Mux(flush,true.B,reg_r_flush)
		reg_r_ready := Mux(stall,reg_r_ready,true.B)
	}

	io.out.w.bits.pc_0	:=reg_pc_0
	io.out.w.valid 		:=reg_w_valid
	io.out.pc_1			:=Mux(reg_stall,reg_temp_pc_1,reg_pc_1)
	io.out.inst 		:=Mux(reg_stall,reg_temp_inst,reg_inst)
	// | reg_pc	|reg_pc_1	|
	// |		|reg_inst	|
	//reg_pc := reg_pc + 4.U 

	// io.out.w.pc_0		:= reg_pc 
	// io.out.w.valid 		:= true.B 
	// when(io.out.w.fire()){
	// 	reg_pc 			:= reg_pc + 4.U
	// }
	// when(io.in.r.fire()){
	// 	reg_inst 		:= io.in.r.inst
	// }
}