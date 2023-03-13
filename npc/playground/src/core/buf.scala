import chisel3._ 
import chisel3.util._ 
// 缓冲区大小为8，每次取4条指令,每次译码两条，目前标量处理，译码一条。
class Buf extends Module{
	val io = IO(new Bundle{
		val flush = Input(Bool())
		val in  = Flipped(Decoupled(new Bundle{
			val inst = Output(0.U(128.W))
			val inst_valid = Output(0.U(4.W))
			val pc 	 = Output(0.U(64.W))
		}))
		val out = Decoupled(new Bundle{
			val inst = Output(0.U(32.W))
			//高位直接忽略，使用sv39 的MMU管理模式，地址最高39位，原因39代表4*32*4 = 512G，基本不存在使用如此大空间的程序
			val pc 	 = Output(0.U(64.W))
		})
	})
	
	val Inst_Buffer  = RegInit(VecInit(Seq.fill(8)(0.U(32.W))))
	val pc_Buffer    = RegInit(VecInit(Seq.fill(8)(0.U(39.W))))
	val valid_Buffer = RegInit(VecInit(Seq.fill(8)(false.B)))
	//val br_Buffer 	 = RegInit(VectInit(Seq.fill(8)(false.B)))
	
	val buffer_head  = RegInit(0.U(3.W))
	val buffer_tail	 = RegInit(0.U(3.W))
	
	val enq = Wire(Vec(4,Bool()))
	enq(0) := io.in.bits.inst_valid(0)
	enq(1) := io.in.bits.inst_valid(1)
	enq(2) := io.in.bits.inst_valid(2)
	enq(3) := io.in.bits.inst_valid(3)
	
	val inst_group = io.in.bits.inst.asTypeOf(Vec(4,UInt(32.W)))
	val in_pc = io.in.bits.pc 
	
	// 低两位用于确定buffer, 高4位用于对应PC的加值
	val pc_position_shift = Mux(enq(0),"b0000_00".U,Mux(enq(1),"b0100_01".U,Mux(enq(2),"b1000_10".U,"b1100_11".U)))
	val enq_size  = enq(0)+enq(1)+enq(2)+enq(3)
	val position_shift = pc_position_shift(1,0)
	val pc_shift 	   = pc_position_shift(5,2)
	val compare_0	   = enq_size > 0.U
	val compare_1 	   = enq_size > 1.U
	val compare_2 	   = enq_size > 2.U
	val compare_3 	   = enq_size > 3.U
	when(io.in.fire){
		when(compare_0){
			Inst_Buffer(buffer_head) := inst_group(position_shift)
			pc_Buffer(buffer_head)	 := in_pc(38,0) + pc_shift
		}
		when(compare_1){
			Inst_Buffer(buffer_head + 1.U) 	:= inst_group(1+position_shift)
			pc_Buffer(buffer_head + 1.U)	:= in_pc(38,0) + pc_shift + 4.U
		}
		when(compare_2){
			Inst_Buffer(buffer_head + 2.U) 	:= inst_group(2+position_shift)
			pc_Buffer(buffer_head + 2.U)	:= in_pc(38,0) + pc_shift + 8.U
		}
		when(compare_3){
			Inst_Buffer(buffer_head + 3.U) 	:= inst_group(3+position_shift)
			pc_Buffer(buffer_head + 3.U)	:= in_pc(38,0) + pc_shift + 12.U
		}
	}
	
	val deq_size = io.out.fire
	
	when(io.flush){
		List.tabulate(8)(i => valid_Buffer(i) := 0.U)
		buffer_head	:= 0.U 
		buffer_tail	:= 0.U
	}.othwise{
		// valid_Buffer 同时被置又被置0,这种情况不应该出现，这样设计合理吗？
		when(io.in.fire){
			when(compare_0){
				valid_Buffer(buffer_head) := true.B
			}
			when(compare_1){
				valid_Buffer(buffer_head+1.U) := true.B
			}
			when(compare_2){
				valid_Buffer(buffer_head+2.U) := true.B
			}
			when(compare_3){
				valid_Buffer(buffer_head+3.U) := true.B
			}
			buffer_head := buffer_head + enq_size
		}
		
		when(io.out.fire){
			when(deq_size > 0.U){
				valid_Buffer(buffer_tail) := false.B
			}
//			when(deq_size > 1.U){
//			
//			}
			buffer_tail	:= buffer_tail + deq_size
		}
		
	}
	
	//buffer_tail 连续下来的值都是有效的，如果buffer_tail + 4.U 是无效的，则buffer中最多剩余4个有效
	// 所以允许输入指令
	val allow_in = (valid_buffer(buffer_tail+4.U) === false.B)
	
	io.in.ready := allow_in
	
	io.out.bits.inst := Inst_Buffer(buffer_tail)
	io.out.bits.pc 	 := pc_Buffer(buffer_tail)
	io.out.valid 	 := valid_Buffer(buffer_tail) & io.flush
}