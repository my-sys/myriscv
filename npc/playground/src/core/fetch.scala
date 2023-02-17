import chisel3._
import chisel3.util._ 
import chisel3.util.experimental.BoringUtils

///1 "hff".U
//2 "o377".U
//3 "b1111_1111".U
class Fetch extends Module{
	val io = IO(new Bundle{
		val in = new Bundle{
			val de_stall 	= Input(Bool())
			val wb_stall  	= Input(Bool()) 
			val ex_stall	= Input(Bool())
			val next_pc 	= Input(UInt(64.W))
			val valid_next_pc = Input(Bool())
			val flush 		= Input(Bool())
		}
		val bus = new Bundle{
			val valid = Output(Bool())
			val bits  = new Bundle{
				val pc_0 	= Output(UInt(64.W))
				val inst 	= Input(UInt(64.W))
			}
			val ready = Input(Bool())
			def fire: Bool = valid & ready
		}
		val out = new Bundle{
			val pc_1 = Output(UInt(64.W))
			val inst = Output(UInt(32.W))
		}
	})
	val next_pc			= io.in.next_pc
	val flush 			= io.in.flush
	val stall 			= io.in.de_stall | io.in.wb_stall | io.in.ex_stall
	val reg_pc_0 		= RegInit("h8000_0000".U(64.W))
	val reg_pc_1 		= RegInit(0.U(64.W))
	val reg_inst 		= RegInit(0.U(32.W))
	val reg_valid 		= RegInit(true.B)
	
	val reg_temp_pc_1   = RegInit(0.U(64.W))
	val reg_temp_inst 	= RegInit(0.U(32.W))
	val reg_stall 		= RegInit(false.B)
	val reg_flush 		= RegInit(false.B)
	val reg_next_pc 	= RegInit(0.U(64.W))
	
	when(stall & !reg_stall){
		reg_temp_pc_1	:= Mux(flush,0.U,reg_pc_1)
		reg_temp_inst	:= Mux(flush,0.U,reg_inst)
	}.otherwise{
		reg_temp_pc_1	:= Mux(flush,0.U,reg_temp_pc_1)
		reg_temp_inst	:= Mux(flush,0.U,reg_temp_inst)		
	}
	reg_stall := Mux(stall,true.B,false.B)
	when(io.bus.fire){
		// next_pc ??? 
		when(flush){
			reg_pc_0 := next_pc
		}.elsewhen(reg_flush){
			reg_pc_0 := reg_next_pc
		}.otherwise{
			reg_pc_0 := reg_pc_0 + 4.U
		}
		
		reg_pc_1 := Mux(flush | reg_flush,0.U,reg_pc_0)
		reg_flush := false.B
		when(flush | reg_flush){
			reg_inst := 0.U
		}.otherwise{
			reg_inst := Mux(reg_pc_0(2),io.bus.bits.inst(63,32),io.bus.bits.inst(31,0))
		}
		when(stall){
			reg_valid := false.B
		}
	}.otherwise{
		reg_pc_0 	:= reg_pc_0
		reg_pc_1    := Mux(!stall | flush,0.U,reg_pc_1)
		reg_inst 	:= Mux(!stall | flush,0.U,reg_inst)
		reg_next_pc := Mux(flush,next_pc,reg_next_pc)
		reg_flush	:= Mux(flush,true.B,reg_flush)
		reg_valid	:= Mux(stall,reg_valid,true.B)
	}
	io.bus.valid 		:= reg_valid 
	io.bus.bits.pc_0	:= reg_pc_0
	io.out.pc_1			:= Mux(reg_stall,reg_temp_pc_1,reg_pc_1)
	io.out.inst 		:= Mux(reg_stall,reg_temp_inst,reg_inst)
	
}