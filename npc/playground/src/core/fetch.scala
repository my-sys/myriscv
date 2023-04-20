import chisel3._
import chisel3.util._ 
//import chisel3.util.experimental.BoringUtils

///1 "hff".U
//2 "o377".U
//3 "b1111_1111".U

class Cache_IBuf_IO extends Bundle{
	val pc 		= Output(UInt(64.W))
	val inst 	= Output(UInt(32.W))
}

class IBuf extends Module{
	val io = IO(new Bundle{
		val flush 		= Input(Bool())
		val cache_buf 	= Flipped(Decoupled(new Cache_IBuf_IO))
		val put_pc 		= Decoupled(new Get_Inst_IO)
	})
	val flush		= io.flush
	val ibuf_pc		= Mem(4,UInt(64.W))
	val ibuf_inst 	= Mem(4,UInt(32.W))
	val ibuf_valid  = RegInit(VecInit(Seq.fill(4)(false.B)))
	val reg_head 	= RegInit(0.U(2.W))
	val reg_tail 	= RegInit(0.U(2.W))
	// val full_size 	= (ibuf_valid(0)+ibuf_valid(1))+(ibuf_valid(2)+ibuf_valid(3))
	// val allow_in	= WireInit(false.B)
	// allow_in 		:= (full_size < 3.U)
	
	val ready 		= io.put_pc.ready
	val valid 		= io.cache_buf.valid 
	val pc 			= io.cache_buf.bits.pc 
	val inst 		= io.cache_buf.bits.inst 
	when(flush){
		reg_head	:= 0.U 
		reg_tail 	:= 0.U 
		for(i <- 0 until 4){
			ibuf_valid(i) := false.B
		}
	}.otherwise{
		when(ready & ibuf_valid(reg_tail)){
			reg_tail	:= reg_tail + 1.U
			ibuf_valid(reg_tail)	:= false.B 
		}
		when(valid){
			reg_head	:= reg_head + 1.U
			ibuf_pc(reg_head)		:= pc
			ibuf_inst(reg_head)		:= inst
			ibuf_valid(reg_head)	:= true.B 
		}
	}

	
	io.cache_buf.ready 	:= ((ibuf_valid(0)+ibuf_valid(1))+(ibuf_valid(2)+ibuf_valid(3)))<3.U

	io.put_pc.valid 	:= ibuf_valid(reg_tail)
	io.put_pc.bits.pc 	:= ibuf_pc(reg_tail)
	io.put_pc.bits.inst	:= ibuf_inst(reg_tail)

	// val ready 		= io.put_pc.ready
	// val reg_pc 		= RegInit(0.U(64.W))
	// val reg_inst 	= RegInit(0.U(32.W))
	// val reg_valid 	= RegInit(false.B)

	// when(flush){
	// 	reg_valid := false.B 
	// }.otherwise{
	// 	when(ready){
	// 		reg_valid	:= io.cache_buf.valid
	// 	}
	// }

	// when(ready){
	// 	reg_pc		:= io.cache_buf.bits.pc 
	// 	reg_inst	:= io.cache_buf.bits.inst
	// }
	// io.put_pc.valid 	:= reg_valid
	// io.put_pc.bits.pc 	:= reg_pc
	// io.put_pc.bits.inst	:= reg_inst

	// io.cache_buf.ready	:= ready
}


// //----------------------------------

// when(fire){
// 	when(flush){
// 		reg_pc := next_pc
// 	}.elsewhen(reg_flush){
// 		reg_pc := reg_next_pc
// 	}.otherwise{
// 		reg_pc := reg_pc + 4.U
// 	}
// 	reg_flush := false.B
// }.otherwise{
// 	reg_flush := Mux(flush,true.B,reg_flush)
// }

// when(flush | reg_flush){
// 	reg_stage_valid := 0.U 
// }.otherwise{
// 	when(fire){
// 		reg_stage_valid =Cat(1.U(1.W),reg_stage_valid(2,1))
// 	}
// 	.elsewhen(ready){
// 		reg_stage_valid =Cat(0.U(1.W),reg_stage_valid(2,1))
// 	}
// }

class Fetch extends Module{
	val io = IO(new Bundle{
		val next_pc 	= Input(UInt(64.W))
		val flush 		= Input(Bool())
		val bus = new Bundle{
			val valid = Output(Bool())
			val bits  = new Bundle{
				val pc_0 	= Output(UInt(64.W))
				val inst 	= Input(UInt(64.W))
			}
			val ready = Input(Bool())
			def fire: Bool = valid & ready
		}
		val put_pc = Decoupled(new Get_Inst_IO)
	})
	val next_pc			= io.next_pc
	val flush 			= io.flush
	val ibuf 			= Module(new IBuf)
	val reg_pc_0 		= RegInit("h8000_0000".U(64.W))
	val reg_flush 		= RegInit(false.B)
	val reg_next_pc		= RegInit(0.U(64.W))

	//val reg_cache_ibuf_valid = RegInit(true.B)
	val reg_bus_valid 		 = RegInit(true.B)
	
	ibuf.io.flush 				:= flush
	ibuf.io.cache_buf.bits.pc 	:= reg_pc_0
	ibuf.io.cache_buf.bits.inst := Mux(reg_pc_0(2),io.bus.bits.inst(63,32),io.bus.bits.inst(31,0))
	ibuf.io.cache_buf.valid 	:= (!reg_flush)&(!flush)&io.bus.fire

	val ready = ibuf.io.cache_buf.ready
// //用经历几次fire的周期数量与flush进行判断
// 	when(flush){
// 		reg_cache_ibuf_valid := false.B
// 	}.otherwise{

	// }

	when(io.bus.fire){
		when(flush){
			reg_pc_0	:= next_pc
		}.elsewhen(reg_flush){
			reg_pc_0 	:= reg_next_pc
		}.otherwise{
			reg_pc_0 := reg_pc_0 + 4.U
		}
		reg_flush	:= false.B
		when(!ready){
			reg_bus_valid := false.B
		}
	}.otherwise{
		reg_pc_0 	:= reg_pc_0
		reg_next_pc := Mux(flush,next_pc,reg_next_pc)
		reg_flush	:= Mux(flush,true.B,reg_flush)
		when(ready){
			reg_bus_valid := true.B
		}
	}

	io.bus.valid 			:= reg_bus_valid
	io.bus.bits.pc_0 		:= reg_pc_0
	io.put_pc <> ibuf.io.put_pc
}