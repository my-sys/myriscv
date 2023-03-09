import chisel3._ 
import chisel3.util._ 
class Cache extends Module{
	val io = IO(new Bundle{
		val cpu = Flipped(new Bundle{
			val valid = Output(Bool())
			val bits = new Bundle{
				val addr    = Output(UInt(64.W))
				val rdata 	= Input(UInt(64.W))
				val wdata 	= Output(UInt(64.W))
				val wstrb 	= Output(UInt(8.W))
				val is_w 	= Output(Bool())
			}
			val ready = Input(Bool())
			def fire: Bool = valid & ready
		}
		)
		// val up_mem 		= Flipped(Decoupled())

		// val clean_cache = Flipped(Decoupled())
		// processing logic 
		// cache <----> crossbar <----> AXI
		val cache_bus 	= new SimpleBus
	})
	
	val Tag 		= io.cpu.bits.addr(63,10)
	val Index 		= io.cpu.bits.addr(9,4)
	val Offset 		= io.cpu.bits.addr(3,0)
	val wdata 		= io.cpu.bits.wdata
	val wstrb 		= io.cpu.bits.wstrb
	val is_w 		= io.cpu.bits.is_w
	
	val sram0_data 		= Module(new SRAM) // 存放数据
	val sram0_tag 		= Module(new SRAM) // 存放Tag， 以及控制位
	val sram2_data 		= Module(new SRAM) // 存放数据
	val sram2_tag 		= Module(new SRAM) // 存放Tag，以及控制位
	
	val cache_idle	:: read_cache :: cache_and_bus :: cache_end :: Nil = Enum(4)
	val reg_cache_state	= RegInit(cache_idle)
//------------------------Reg-----------------------------------
	val reg_wdata 		= RegInit(0.U(64.W))
	val reg_wstrb 		= RegInit(0.U(8.W))
	val reg_is_w 		= RegInit(false.B)
	val reg_tag   		= RegInit(0.U(54.W))
	val reg_index 		= RegInit(0.U(6.W))
	val reg_offset 		= RegInit(0.U(4.W))
	
	val reg_ready 		= RegInit(false.B)
	val reg_rdata 		= RegInit(0.U(64.W))
	
	val reg_cache_write = RegInit(false.B)
	val reg_cache_wstrb = RegInit(0.U(16.W))
	val reg_cache_wdata = RegInit(0.U(128.W))
	val reg_chosen_tag	= RegInit(0.U(1.W))
	val cache_mask 		= Cat(reg_cache_wstrb.asBools.map(Fill(8, _)).reverse)
	//val cache_mask 		= Cat(reg_cache_wstrb.asBools.map(Fill(8, _)))
	val cache_wdata 	= Mux(reg_offset(3),Cat(reg_wdata,0.U(64.W)),Cat(0.U(64.W),reg_wdata))
	val cache_wstrb 	= Mux(reg_offset(3),Cat(reg_wstrb,0.U(8.W)),Cat(0.U(8.W),reg_wstrb))
	
//-----------------------------sram0--------------------------------
	val is_sram0_write 		= reg_cache_write &(reg_chosen_tag === 0.U)
	val sram0_A				= Mux(reg_cache_state =/= cache_idle,reg_index,Index)
	sram0_data.io.WEN 		:= ~(is_sram0_write)
	sram0_data.io.CEN 		:= ~(true.B)
	sram0_data.io.BWEN 	:= ~(cache_mask)
	sram0_data.io.A 		:= sram0_A
	sram0_data.io.D 		:= reg_cache_wdata
	
	sram0_tag.io.WEN		:= ~(is_sram0_write)
	sram0_tag.io.CEN		:= ~(true.B)
	sram0_tag.io.BWEN 		:= 0.U
	sram0_tag.io.A 			:= sram0_A
	sram0_tag.io.D 			:= reg_tag
	
	val clear_cache = false.B
	val reg_sram0_valid 	= RegInit(0.U(64.W))
	val reg_sram0_dirty 	= RegInit(0.U(64.W))
	val chose_bit = 1.U << reg_index   //相应位，置1
	val neg_chose_bit = ~chose_bit
	when(clear_cache){
		reg_sram0_valid	:= 0.U 
		reg_sram0_dirty	:= 0.U
	}.elsewhen(is_sram0_write){
		reg_sram0_valid := reg_sram0_valid | chose_bit
		reg_sram0_dirty := Mux(reg_is_w,reg_sram0_dirty | chose_bit, reg_sram0_dirty &(neg_chose_bit))
	}.otherwise{
		reg_sram0_valid := reg_sram0_valid
		reg_sram0_dirty := reg_sram0_dirty
	}

//---------------------------sram2-----------------------------
	val is_sram2_write 		= reg_cache_write &(reg_chosen_tag === 1.U)
	val sram2_A = sram0_A
	sram2_data.io.WEN 		:= ~(is_sram2_write)
	sram2_data.io.CEN 		:= ~(true.B)
	sram2_data.io.BWEN 	:= ~(cache_mask)
	sram2_data.io.A 		:= sram2_A
	sram2_data.io.D 		:= reg_cache_wdata
	
	sram2_tag.io.WEN 		:= ~(is_sram2_write)
	sram2_tag.io.CEN 		:= ~(true.B)
	sram2_tag.io.BWEN 		:= 0.U
	sram2_tag.io.A 			:= sram2_A
	sram2_tag.io.D 			:= reg_tag 
	
	val reg_sram2_valid 	= RegInit(0.U(64.W))
	val reg_sram2_dirty 	= RegInit(0.U(64.W))
	when(clear_cache){
		reg_sram2_valid		:= 0.U
		reg_sram2_dirty		:= 0.U 
	}.elsewhen(is_sram2_write){
		reg_sram2_valid 	:= reg_sram2_valid | chose_bit
		reg_sram2_dirty 	:= Mux(reg_is_w,reg_sram2_dirty | chose_bit, reg_sram2_dirty &(neg_chose_bit))
	}.otherwise{
		reg_sram2_valid 	:= reg_sram2_valid
		reg_sram2_dirty 	:= reg_sram2_dirty
	}
	
//------------cachhe  <-------> bus -------------------------
// 基本不存在1次读写，Cache从主存区读取，往主存区写，都是128位，总线为64位，所以为2两次。
	val reg_r_raddr 	= RegInit(0.U(64.W))
	val reg_r_valid 	= RegInit(false.B)
	
	val reg_w_waddr 	= RegInit(0.U(64.W))
	val reg_w_wdata 	= RegInit(0.U(64.W))
	val reg_w_wlast 	= RegInit(false.B)
	val reg_w_valid 	= RegInit(false.B)
	
	val reg_b_ready 	= RegInit(false.B)
	
//------------------------------ get data from SRAM-----------------------------
	val tag_0 			= sram0_tag.io.Q(53,0)
	val tag_2 			= sram2_tag.io.Q(53,0)
	val hit_0			= (reg_tag === tag_0)
	val hit_2 			= (reg_tag === tag_2)
	val tag_valid_0 	= reg_sram0_valid(reg_index)
	val tag_valid_2 	= reg_sram2_valid(reg_index)
	val tag_dirty_0 	= reg_sram0_dirty(reg_index)
	val tag_dirty_2 	= reg_sram2_dirty(reg_index)
	val rdata0			= Mux(reg_offset(3),sram0_data.io.Q(127,64),sram0_data.io.Q(63,0))
	val rdata2 			= Mux(reg_offset(3),sram2_data.io.Q(127,64),sram2_data.io.Q(63,0))
	val rdata_0			= sram0_data.io.Q
	val rdata_2 		= sram2_data.io.Q
	
//--------------------------LRU--------------------------------------
// 1 bit LRU 
	val reg_lru_0				= RegInit(0.U(64.W))
	val reg_lru_2 				= RegInit(0.U(64.W))
	val LRU_0 	= reg_lru_0(reg_index)
	val LRU_2 	= reg_lru_2(reg_index)
	val reg_start_operation 	= RegInit(false.B)
	when(reg_start_operation){
		when(hit_0){
			reg_lru_0 := reg_lru_0 & neg_chose_bit
			reg_lru_2 := reg_lru_2 | chose_bit
		}.elsewhen(hit_2){
			reg_lru_0 := reg_lru_0 | chose_bit
			reg_lru_2 := reg_lru_2 & neg_chose_bit
		}.otherwise{
			when(tag_valid_0 & tag_valid_2){
				reg_lru_0 := Mux(LRU_2,reg_lru_0 | chose_bit,reg_lru_0 & neg_chose_bit)
				reg_lru_2 := Mux(LRU_2,reg_lru_2 & neg_chose_bit,reg_lru_2 | chose_bit)
			}.otherwise{
				reg_lru_0 := Mux(tag_valid_0,reg_lru_0 | chose_bit,reg_lru_0 & neg_chose_bit)
				reg_lru_2 := Mux(tag_valid_0,reg_lru_2 & neg_chose_bit,reg_lru_2 | chose_bit)
			}
		}
	}
	
	val reg_cnt 		= RegInit(0.U(2.W))
	val reg_rbus_finish = RegInit(true.B)
	val reg_wbus_finish = RegInit(true.B)

	//dirty 位使用，write的时候考虑dirty位，因为reset情况，需要考虑valid位置，与dirty位置直接用寄存器保存
	switch(reg_cache_state){
		is(cache_idle){
			when(io.cpu.valid){
			//--------hold cpu state-------------
				reg_wdata		:= io.cpu.bits.wdata 
				reg_wstrb 		:= io.cpu.bits.wstrb 
				reg_is_w 		:= io.cpu.bits.is_w 
				reg_tag 		:= io.cpu.bits.addr(63,10)
				reg_index 		:= io.cpu.bits.addr(9,4)
				reg_offset 		:= io.cpu.bits.addr(3,0)
			//---------next state----------------
				reg_cache_state := read_cache 
				reg_start_operation := true.B 
				
			}.otherwise{
				reg_cache_state := cache_idle 
			}
			reg_ready 	:= false.B 
			//-----------cache-------------------
			reg_cache_write := false.B 
			//------------bus--------------------
			reg_w_valid 	:= false.B 
			reg_b_valid 	:= false.B 
			reg_r_valid 	:= false.B 
			//reg_rbus_finish := true.B
		}
		is(read_cache){
			reg_start_operation := false.B 
			reg_cache_wstrb 	:= cache_wstrb
			when(hit_0 | hit_2){
			//一般情况下不会出现两个都中，如果两个都中，
			//只能是都为0的情况下，这种情况下，必然hit_0先有效
				reg_chosen_tag	:= Mux(hit_0,0.U,1.U)
				when((hit_0 & tag_valid_0) |(hit_2 & tag_valid_2)){
					when(reg_is_w){
						//---- cache ---
						reg_cache_write		:= true.B 
						//reg_cache_wstrb		 	:= cache_wstrb
						//reg_index
						//reg_chosen_tag
						reg_cache_wdata 	:= cache_wdata 
						reg_cache_state 	:= cache_end 
						//reg_ready 			:= false.B
					}.otherwise{
						// read data from cache 
						// ------ cpu 
						reg_rdata 			:= Mux(hit_0,rdata0,rdata2)
						reg_ready 			:= true.B
						reg_cache_state 	:= cache_idle
					}
				}.otherwise{
					//-----cpu-----
					//reg_ready 			:= false.B 
					//-----cache--- 
					//reg_cache_write 		:= false.B 
					//------bus---- 
					reg_r_raddr 			:= Cat(reg_tag,reg_index) << 4.U 
					reg_r_valid 			:= true.B 
					reg_rbus_finish			:= false.B 
					reg_cache_state			:= cache_and_bus
				}
			}.otherwise{
				when(tag_valid_0 & tag_valid_2){
					reg_chosen_tag 		:= LRU_2
					//read_bus 
					reg_r_raddr 		:= Cat(reg_tag,reg_index) << 4.U 
					reg_r_valid 		:= true.B 
					reg_rbus_finish		:= false.B 
					
					reg_cache_state 	:= cache_and_bus 
					//write bus 
					when((tag_dirty_0 & (!LRU_2))|(tag_dirty_2 &LRU_2)){
						reg_w_valid 	:= true.B 
						reg_b_ready 	:= true.B 
						reg_w_waddr 	:= Cat(Mux(LRU_2,tag_2,tag_0),reg_index)<<4.U 
						reg_w_wdata 	:= Mux(LRU_2,rdata_2(63,0),rdata_0(63,0))
						reg_w_wlast 	:= false.B 
						reg_wbus_finish := false.B 
						reg_cnt 		:= 1.U   // is_ok ?
					}
				}.otherwise{
					reg_chosen_tag 		:= Mux(tag_valid_0,1.U,0.U)
					
					reg_r_raddr 		:= Cat(reg_tag,reg_index) << 4.U
					reg_r_valid 		:= true.B 
					reg_rbus_finish		:= false.B 
					reg_cache_state 	:= cache_and_bus
				}
			}
		}
		is(cache_and_bus){
			when(io.cache_bus.r.fire){
				when(io.cache_bus.r.bits.rlast){
					reg_r_valid 	:= false.B 
					//----cache--- 
					reg_cache_wstrb := "hffff".U 
					reg_rbus_finish	:= true.B 
					when(reg_is_w){
						reg_cache_wdata     := (cache_wdata & cache_mask) | (Cat(io.cache_bus.r.bits.rdata,reg_cache_wdata(63,0)) & ~cache_mask)
					}.otherwise{
						//----cpu---
						reg_rdata 			:= Mux(reg_offset(3),io.cache_bus.r.bits.rdata,reg_cache_wdata(63,0))
						reg_cache_wdata		:= Cat(io.cache_bus.r.bits.rdata,reg_cache_wdata(63,0))
					}
				}.otherwise{
					reg_cache_wdata 		:= io.cache_bus.r.bits.rdata
				}
			}
			
			when(io.cache_bus.w.fire){
				when(reg_cnt === 0.U){
					reg_w_wlast 	:= false.B 
					reg_w_valid 	:= false.B 
				}.elsewhen(reg_cnt === 1.U){
					reg_cnt 		:= reg_cnt - 1.U
					reg_w_wlast 	:= true.B 
					reg_w_data 		:= Mux(reg_chosen_tag === 1.U,rdata_2(127,64),rdata_0(127,64))
				}.otherwise{
					reg_cnt := reg_cnt - 1.U
					reg_w_wdata 	:= Mux(reg_chosen_tag === 1.U,rdata_2(127,64),rdata_0(127,64))
				}
			}
			
			when(io.cache_bus.b.fire){
				reg_wbus_finish := true.B 
				reg_b_ready 	:= false.B 
			}
			// when read bus finish , write bus finish 
			when((io.cache_bus.r.bits.rlast | reg_rbus_finish)&((io.cache_bus.b.fire) | reg_wbus_finish )){
				reg_cache_write 	:= true.B 
				reg_cache_state 	:= cache_end 
				//reg_ready 			:= true.B 
			}
		}
		is(cache_end){
			reg_cache_write 	:= false.B 
			reg_ready 			:= true.B 
			//------------bus----------- 
			reg_w_valid		:= false.B 
			reg_b_ready 	:= false.B 
			reg_r_valid 	:= false.B
			reg_cache_state		:= cache_idle		
		}
	}	
	io.cpu.bits.rdata 			:= reg_rdata
	io.cpu.ready 				:= reg_ready 

	io.cache_bus.w.valid 		:= reg_w_valid
	io.cache_bus.w.bits.waddr 	:= reg_w_waddr
	io.cache_bus.w.bits.wdata 	:= reg_w_wdata
	io.cache_bus.w.bits.wlast 	:= reg_w_wlast

	io.cache_bus.b.ready 		:= reg_b_ready

	io.cache_bus.r.bits.raddr	:= reg_r_raddr
	io.cache_bus.r.valid 		:= reg_r_valid	
}