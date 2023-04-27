import chisel3._
import chisel3.util._ 

///1 "hff".U
//2 "o377".U
//3 "b1111_1111".U
class Cache_IBuf_IO extends Bundle{
	val pc 		= Output(UInt(64.W))
	val inst 	= Output(UInt(32.W))
	val is_pre  = Output(Bool())
}

class Get_Pre_Info_IO extends Bundle{
	val valid  = Input(Bool())
	val pre_next_pc = Output(UInt(64.W))
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
	val ibuf_is_pre = Mem(4,Bool())
	val ibuf_valid  = RegInit(VecInit(Seq.fill(4)(false.B)))
	val reg_head 	= RegInit(0.U(2.W))
	val reg_tail 	= RegInit(0.U(2.W))
	val reg_ibuf_size = RegInit(0.U(3.W))

	val ready 		= io.put_pc.ready
	val valid 		= io.cache_buf.fire
	val pc 			= io.cache_buf.bits.pc 
	val inst 		= io.cache_buf.bits.inst 
	val is_pre 		= io.cache_buf.bits.is_pre
	val can_deq 	= ready & ibuf_valid(reg_tail)

	val enq_size    = valid
	val deq_size    = can_deq
	val result_size = reg_ibuf_size + enq_size - deq_size
	val allow_in	= reg_ibuf_size < 3.U	// 缓冲区的设计有误
	when(flush){
		reg_head	:= 0.U 
		reg_tail 	:= 0.U 
		reg_ibuf_size := 0.U
		for(i <- 0 until 4){
			ibuf_valid(i) := false.B
		}
	}.otherwise{
		when(can_deq){
			reg_tail	:= reg_tail + 1.U
			ibuf_valid(reg_tail)	:= false.B 
		}
		when(valid){
			reg_head	:= reg_head + 1.U
			ibuf_pc(reg_head)		:= pc
			ibuf_inst(reg_head)		:= inst
			ibuf_is_pre(reg_head)	:= is_pre
			ibuf_valid(reg_head)	:= true.B 
		}
		reg_ibuf_size 	:= result_size
	}

	io.cache_buf.ready 	:= allow_in

	io.put_pc.valid 	:= ibuf_valid(reg_tail)
	io.put_pc.bits.pc 	:= ibuf_pc(reg_tail)
	io.put_pc.bits.inst	:= ibuf_inst(reg_tail)
	io.put_pc.bits.is_pre := ibuf_is_pre(reg_tail)
}

class Fetch extends Module{
	val io = IO(new Bundle{
		val br_info		= new Br_Info_IO
		val get_pre_info = new Get_Pre_Info_IO

		val next_pc 	= Input(UInt(64.W))
		val flush 		= Input(Bool())
		val cpu_addr	= Decoupled(new CPU_ADDR_IO)
		val cpu_data 	= Flipped(Decoupled(new CPU_DATA_IO))
		val put_pc		= Decoupled(new Get_Inst_IO)
		val out_flush   = Output(Bool())
	})
	val next_pc			= io.next_pc
	val flush 			= io.flush
	val ibuf 			= Module(new IBuf)
	val reg_pc_0 		= RegInit("h8000_0000".U(64.W)) //RegInit("h8000_0000".U(64.W))
	val reg_flush 		= RegInit(false.B)
	val reg_next_pc		= RegInit(0.U(64.W))

//*******  ****/
	// val reg_fetch_count 	= RegInit(0.U(3.W))
	// val reg_need_flush_size = RegInit(0.U(3.W))
	// val fetch_add_1 = io.cpu_addr.fire
	// val fetch_sub_1 = io.cpu_data.fire 
	// val result_size = reg_fetch_count + fetch_add_1 - fetch_sub_1
	// when(flush){
	// 	reg_need_flush_size = result_size
	// 	reg_fetch_count		= 0.U
	// }.otherwise{
	// 	reg_fetch_count := result_size

	// }

	// val reg_not_flush = RegInit(true.B)
	// when(flush){
	// 	reg_not_flush := false.B 
	// }.otherwise{
	// 	when(flush1){
	// 		reg_temp := false.B 
	// 	}
	// }
	// val reg_inst_valid = RegInit("b100".U(3.W))
	// when(io.cpu_addr.fire){
	// 	when(flush){
	// 		reg_inst_valid := Cat(1.U(1.W),reg_inst_valid(2,1))
	// 	}.otherwise{
	// 		reg_inst_valid := Cat(1.U(1.W),0.U(2.W))
	// 	}
		
	// }.otherwise{
	// 	when(flush){
	// 		reg_inst_valid := 0.U 
	// 	}
	// }

	val reg_bus_valid 	= RegInit(true.B)

	val addr = io.cpu_data.bits.pc
	val inst = Mux(addr(2),io.cpu_data.bits.data(63,32),io.cpu_data.bits.data(31,0))


	

//----------------------Pre Info--------------------------------
	val br_predictor = Module(new Br_predictor)
	br_predictor.io.br_info <> io.br_info
	br_predictor.io.pc := reg_pc_0
	val is_pre 		= br_predictor.io.pre_valid
	val pre_next_pc = br_predictor.io.pre_next_pc

	val pre_info_head 	= RegInit(0.U(2.W))
	val pre_info_tail 	= RegInit(0.U(2.W))
	val pre_info_size   = RegInit(0.U(3.W))
	//----taken--------------pre_pc-----------------------------
	val pre_info_fifo 	= RegInit(VecInit(Seq.fill(4)(0.U(65.W))))
	val pre_enq = io.cpu_addr.fire & is_pre
	val pre_deq = io.get_pre_info.valid
	val result_size = pre_info_size + pre_enq - pre_deq
	val pre_info_not_full = pre_info_size < 2.U
	when(io.out_flush){
		pre_info_fifo(0) := 0.U 
		pre_info_fifo(1) := 0.U 
		pre_info_fifo(2) := 0.U 
		pre_info_fifo(3) := 0.U 
		pre_info_head	  := 0.U 
		pre_info_tail	  := 0.U 
		pre_info_size	  := 0.U
	}.otherwise{
		pre_info_size := result_size
		when(pre_enq.asBool){
			pre_info_fifo(pre_info_head) := pre_next_pc
			pre_info_head	:= pre_info_head + 1.U 
		}
		when(pre_deq){
			pre_info_tail	:= pre_info_tail + 1.U 
		}
	}

	val get_pre_next_pc = pre_info_fifo(pre_info_tail)
	io.get_pre_info.pre_next_pc := Mux(io.get_pre_info.valid,0.U,get_pre_next_pc)

	val is_pre_head = RegInit(0.U(2.W))
	val is_pre_tail = RegInit(0.U(2.W))
	val is_pre_fifo = RegInit(VecInit(Seq.fill(4)(false.B)))
	when(io.out_flush){
		is_pre_fifo(0)	:= false.B
		is_pre_fifo(1)	:= false.B
		is_pre_fifo(2)	:= false.B
		is_pre_fifo(3)	:= false.B
		is_pre_head	:= 0.U 
		is_pre_tail	:= 0.U 
	}.otherwise{
		when(io.cpu_addr.fire){
			is_pre_head := is_pre_head + 1.U 
			is_pre_fifo(is_pre_head) := is_pre
		}
		when(io.cpu_data.valid){
			is_pre_tail := is_pre_tail + 1.U
		}
	}

//--------------------------------------------------------------
	val ready = ibuf.io.cache_buf.ready 
	when(io.cpu_addr.fire){
		when(flush){
			reg_pc_0 	:= next_pc
		}.elsewhen(reg_flush){
			reg_pc_0	:= reg_next_pc
		}.otherwise{
			reg_pc_0	:= Mux(is_pre,pre_next_pc,reg_pc_0 + 4.U )
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


	ibuf.io.flush 				:= flush
	ibuf.io.cache_buf.bits.pc 	:= addr
	ibuf.io.cache_buf.bits.inst	:= inst
	ibuf.io.cache_buf.bits.is_pre := is_pre_fifo(is_pre_tail)
	ibuf.io.cache_buf.valid 	:= io.cpu_data.valid & (!reg_flush ) &(!flush)

	io.cpu_addr.valid 		:= reg_bus_valid
	io.cpu_addr.bits.addr 	:= reg_pc_0
	io.cpu_data.ready 		:= ready
	io.put_pc <> ibuf.io.put_pc
	io.out_flush := reg_flush | flush
}