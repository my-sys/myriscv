import chisel3._
import chisel3.util._
object ABNType{
	val abn_ebreak		= "b000_01".U 
	val abn_ecall 		= "b000_11".U
	val abn_fence		= "b001_00".U 
	val abn_fence_i		= "b010_00".U 
	val abn_mret		= "b011_00".U
}

class ABN_EXU extends Module  with CoreParameters{
	val io = IO(new Bundle{
		val valid 		= Input(Bool())
		val exuType 	= Input(UInt(ExuTypeLen.W))
		val stall    	= Input(Bool())
		val in_flush 	= Input(Bool())

		val is_fence		= Output(Bool())
		val is_fence_i		= Output(Bool())
		val is_mret			= Output(Bool())
		val exception		= Output(UInt(5.W))
		val is_exception	= Output(Bool())
	})
	val reg_is_fence_i	= RegInit(false.B)
	val reg_is_fence 	= RegInit(false.B)
	val reg_is_mret 	= RegInit(false.B)
	val reg_exception	= RegInit(0.U(5.W))
	val reg_is_exception = RegInit(false.B)

	val temp_exception = MuxLookup(io.exuType(1,0),0.U(5.W),List(
		ABNType.abn_ebreak(1,0)	-> 3.U(5.W),
		ABNType.abn_ecall(1,0)	-> 11.U(5.W)
	))
	when(io.in_flush){
		reg_is_fence		:= false.B 
		reg_is_fence_i		:= false.B
		reg_is_mret			:= false.B 
		reg_exception		:= 0.U 
		reg_is_exception	:= false.B 
	}.elsewhen(io.stall){
		reg_is_fence		:= reg_is_fence
		reg_is_fence_i		:= reg_is_fence_i
		reg_is_mret			:= reg_is_mret
		reg_exception		:= reg_exception
		reg_is_exception	:= reg_is_exception
	}.otherwise{
		reg_is_fence		:= Mux(io.exuType === ABNType.abn_fence,io.valid,false.B)
		reg_is_fence_i		:= Mux(io.exuType === ABNType.abn_fence_i,io.valid,false.B)
		reg_is_mret			:= Mux(io.exuType === ABNType.abn_mret,io.valid,false.B)
		reg_exception		:= temp_exception
		reg_is_exception	:= io.exuType(0)&io.valid
	}
	// reg_is_fence 	:= Mux(io.stall,reg_is_fence,Mux(io.exuType === ABNType.abn_fence,io.valid,false.B))
	// reg_is_fence_i	:= Mux(io.stall,reg_is_fence_i,Mux(io.exuType === ABNType.abn_fence_i,io.valid,false.B))
	// reg_is_mret		:= Mux(io.stall,reg_is_mret,Mux(io.exuType === ABNType.abn_mret,io.valid,false.B))
	// reg_exception	:= Mux(io.stall,reg_exception,temp_exception)
	// reg_is_exception	:= Mux(io.stall,reg_is_exception,io.in.exuType(0)&io.valid)
	io.is_fence		:= reg_is_fence
	io.is_fence_i	:= reg_is_fence_i
	io.is_mret		:= reg_is_mret
	io.exception	:= reg_exception
	io.is_exception	:= reg_is_exception
}