import chisel3._
import chisel3.util._ 

// 根据PC值读取出对应的Tag，以及data
class CPU_ADDR_IO extends Bundle{
	val addr = Output(UInt(64.W))
}

class CPU_DATA_IO extends Bundle{
	val data = Output(UInt(64.W))
	val pc 	 = Output(UInt(64.W))
}

class SRAM_DATA_IO extends Bundle{
	val hit			= Output(Bool())
	val tag_valid 	= Output(Bool())
	val rdata 		= Output(UInt(64.W))
}

class SRAM_RDATA_TAG_IO extends Bundle{
	val valid 		= Output(Bool())
	val sram_addr 	= Output(UInt(6.W))
	
	val sram_data 	= Vec(2,Input(UInt(128.W)))
	val sram_tag 	= Vec(2,Input(UInt(128.W)))
	val ready 		= Input(Bool())
}

class SRAM_WDATA_TAG_IO extends Bundle{
	val valid 		= Output(Bool())
	val sram_addr	= Output(UInt(6.W))
	val sram_data 	= Output(UInt(128.W))
	val sram_tag 	= Output(UInt(128.W))
	val chose_tag   = Output(Bool())
}
class Tag_valid_IO extends Bundle{
	val index 		= Output(UInt(6.W))
	val tag_valid   = Vec(2,Input(Bool()))
}

class Cache_Stage1_IO extends Bundle{
	// val tag 		= Output(UInt(54.W))
	// val index		= Output(UInt(6.W))
	// val offset 		= Output(UInt(4.W))
	val cpu_addr 	= Output(UInt(64.W))
	val sram		= Vec(2,new SRAM_DATA_IO)
}

class ICache_stage0 extends Module{
	val io = IO(new Bundle{
		val flush			= Input(Bool())
		val cpu_addr 		= Flipped(Decoupled(new CPU_ADDR_IO))
		val addr 			= Decoupled(new CPU_ADDR_IO)
	})
	val ready = io.addr.ready
	val reg_valid = RegInit(false.B)
	val reg_addr  = RegInit(0.U(64.W))

	val valid = io.cpu_addr.valid  & (!io.flush)

	when(ready){
		reg_valid 	:= valid
		reg_addr 	:= io.cpu_addr.bits.addr
	}
	io.addr.valid := reg_valid
	io.addr.bits.addr := reg_addr
	io.cpu_addr.ready := ready
}

class ICache_stage1 extends Module{
	val io = IO(new Bundle{
		val flush 			= Input(Bool())
		val cpu_addr 		= Flipped(Decoupled(new CPU_ADDR_IO))
		val tag_valid 		= new Tag_valid_IO
		val sram 			= new SRAM_RDATA_TAG_IO
		val cache_stage1 	= Decoupled(new Cache_Stage1_IO)
	})
	//io.sram.ready 表示本次发射得到数据，io.cache_stage1.ready 表示下一阶段准备接收数据
	val valid = io.cpu_addr.valid  & (!io.flush)
	val ready 		= io.sram.ready & io.cache_stage1.ready
	//val reg_tag 	= RegInit(0.U(54.W))
	//val reg_index 	= RegInit(0.U(6.W))
	//val reg_offset 	= RegInit(0.U(4.W))
	val reg_cpu_addr = RegInit(0.U(64.W))
	val reg_valid 	 = RegInit(false.B)
	// val reg_sram0_valid = 
	// val reg_sram1_valid = 
	
	
	val reg_tag 	= reg_cpu_addr(63,10)
	val reg_index	= reg_cpu_addr(9,4)
	val reg_offset	= reg_cpu_addr(3,0)

	val index = Mux(ready,io.cpu_addr.bits.addr(9,4),reg_index)
	when(ready){
		reg_cpu_addr 	:= io.cpu_addr.bits.addr 
		reg_valid	:= valid
		// reg_sram0_valid := io.tag_valid.tag_valid(0)
		// reg_sram1_valid := io.tag_valid.tag_valid(1)
	}
	
	val tag_0 	= io.sram.sram_tag(0)(53,0)
	val tag_1 	= io.sram.sram_tag(1)(53,0)
	val hit_0 	= (reg_tag === tag_0)
	val hit_1 	= (reg_tag === tag_1)
	val tag_valid_0	= io.tag_valid.tag_valid(0)
	val tag_valid_1 = io.tag_valid.tag_valid(1)
	val rdata0 	= Mux(reg_offset(3),io.sram.sram_data(0)(127,64),io.sram.sram_data(0)(63,0))
	val rdata1 	= Mux(reg_offset(3),io.sram.sram_data(1)(127,64),io.sram.sram_data(1)(63,0))
	
	io.cpu_addr.ready 	:= ready
	io.tag_valid.index	:= index
	io.sram.valid		:= valid
	io.sram.sram_addr 	:= index
	
	io.cache_stage1.valid 				:= reg_valid & io.sram.ready
	io.cache_stage1.bits.cpu_addr		:= reg_cpu_addr
	io.cache_stage1.bits.sram(0).hit 		:= hit_0
	io.cache_stage1.bits.sram(0).tag_valid 	:= tag_valid_0
	io.cache_stage1.bits.sram(0).rdata 		:= rdata0
	
	io.cache_stage1.bits.sram(1).hit 		:= hit_1
	io.cache_stage1.bits.sram(1).tag_valid 	:= tag_valid_1
	io.cache_stage1.bits.sram(1).rdata 		:= rdata1	
}

class ICache_stage2 extends Module{
	val io = IO(new Bundle{
		val flush 			= Input(Bool())
		val cache_stage1	= Flipped(Decoupled(new Cache_Stage1_IO))
		val cache_bus 		= new SimpleBus
		val sram_w 			= new SRAM_WDATA_TAG_IO
		val rdata 			= Decoupled(new CPU_DATA_IO)
	})
	val hit_0 		= io.cache_stage1.bits.sram(0).hit
	val hit_1 		= io.cache_stage1.bits.sram(1).hit
	val tag_valid_0 = io.cache_stage1.bits.sram(0).tag_valid
	val tag_valid_1	= io.cache_stage1.bits.sram(1).tag_valid
	val rdata0 	= io.cache_stage1.bits.sram(0).rdata
	val rdata1 	= io.cache_stage1.bits.sram(1).rdata

	val cpu_addr 	= io.cache_stage1.bits.cpu_addr
	val index 		= io.cache_stage1.bits.cpu_addr(9,4)
	val valid 		= io.cache_stage1.valid &(!io.flush)
	//val offset 		= io.cache_stage1.bits.cpu_addr(3,0)
	// val rdata0 		= Mux(offset(3),rdata_0(127,64),rdata_0(63,0))
	// val rdata1 		= Mux(offset(3),rdata_1(127,64),rdata_1(63,0))

	//val reg_offset	= RegInit(0.U(4.W))
	
	val reg_chosen_tag = RegInit(0.U(1.W))
	val reg_rdata 	= RegInit(0.U(64.W))
	val reg_valid 	= RegInit(false.B)
	val reg_ready 	= RegInit(true.B) // 表明可以接收上一级的信息
	
	//------bus--------------- 
	val temp_addr  = Cat(cpu_addr(63,4),0.U(4.W))
	val reg_r_raddr	= RegInit(0.U(64.W))
	val reg_r_valid	= RegInit(false.B)
	
	//-----write cache -------
	val reg_cache_wdata = RegInit(0.U(128.W))
	val reg_cache_write	= RegInit(false.B)
	val reg_cpu_addr 	= RegInit(0.U(64.W))
	val reg_tag 	= reg_cpu_addr(63,10)
	val reg_index	= reg_cpu_addr(9,4)
	val reg_offset	= reg_cpu_addr(3,0)
//------------------------ LRU ------------------------------
// 1 bit LRU 
	val reg_lru_0				= RegInit(0.U(64.W))
	val reg_lru_1				= RegInit(0.U(64.W))
	val LRU_0 	= reg_lru_0(index)
	val LRU_1 	= reg_lru_1(index)
	val chose_bit = 1.U << index 
	val neg_chose_bit = ~chose_bit

	val bus_idle :: bus_busy :: Nil = Enum(2)
	val reg_bus_state = RegInit(bus_idle)

	when((reg_bus_state === bus_idle)&valid){
		when(hit_0){
			reg_lru_0 := reg_lru_0 & neg_chose_bit
			reg_lru_1 := reg_lru_1 | chose_bit
		}.elsewhen(hit_1){
			reg_lru_0 := reg_lru_0 | chose_bit
			reg_lru_1 := reg_lru_1 & neg_chose_bit
		}.otherwise{
			when(tag_valid_0 & tag_valid_1){
				reg_lru_0 := Mux(LRU_1,reg_lru_0 | chose_bit,reg_lru_0 & neg_chose_bit)
				reg_lru_1 := Mux(LRU_1,reg_lru_1 & neg_chose_bit,reg_lru_1 | chose_bit)
			}.otherwise{
				reg_lru_0 := Mux(tag_valid_0,reg_lru_0 | chose_bit,reg_lru_0 & neg_chose_bit)
				reg_lru_1 := Mux(tag_valid_0,reg_lru_1 & neg_chose_bit,reg_lru_1 | chose_bit)
			}
		}
	}


	switch(reg_bus_state){
		is(bus_idle){
			reg_cache_write := false.B
			reg_cpu_addr	:= cpu_addr
			reg_chosen_tag	:= 0.U
			//reg_offset		:= offset
			reg_valid		:= false.B
			reg_ready		:= true.B 
			reg_bus_state	:= bus_idle
			reg_r_valid		:= false.B
			when(valid){
			when(hit_0 | hit_1){
			//一般情况下不会出现两个都中，如果两个都中，则说明tag为0 
			// 此时必然有一个无效。这种情况下强制为hit_0先有效
				reg_chosen_tag	:= Mux(hit_0,0.U,1.U)
				when((hit_0 & tag_valid_0) | (hit_1 & tag_valid_1)){
					// read data from cache
					// ------ cpu----- 
					reg_rdata 			:= Mux(hit_0,rdata0,rdata1)
					reg_valid			:= true.B 
					reg_ready 			:= true.B
					reg_bus_state		:= bus_idle
				}.otherwise{
					//------- bus----- 
					reg_valid			:= false.B
					reg_ready 			:= false.B
					reg_r_raddr 		:= temp_addr
					reg_r_valid 		:= true.B
					reg_bus_state		:= bus_busy
				}
			}.otherwise{
				reg_valid			:= false.B
				reg_ready 			:= false.B
				when(tag_valid_0 & tag_valid_1){
					reg_chosen_tag 		:= LRU_1
					reg_r_raddr 		:= temp_addr
					reg_r_valid 		:= true.B
					
					reg_bus_state		:= bus_busy
				}.otherwise{
					reg_chosen_tag 		:= Mux(tag_valid_0,1.U,0.U)
					reg_r_raddr 		:= temp_addr
					reg_r_valid 		:= true.B 
					
					reg_bus_state		:= bus_busy
				}
			}
			}
		}
		is(bus_busy){
			when(io.cache_bus.r.fire){
				when(io.cache_bus.r.bits.rlast){
					reg_r_valid 	:= false.B
					//----cpu---
					reg_valid			:= true.B
					reg_rdata 			:= Mux(reg_offset(3),io.cache_bus.r.bits.rdata,reg_cache_wdata(63,0))
					reg_cache_wdata		:= Cat(io.cache_bus.r.bits.rdata,reg_cache_wdata(63,0))				
				}.otherwise{
					reg_cache_wdata 		:= io.cache_bus.r.bits.rdata				
				}
			}
			when(io.cache_bus.r.bits.rlast){
				reg_cache_write 	:= true.B 
				reg_bus_state 		:= bus_idle 
				reg_ready 			:= true.B
			}
		}
	}
	val ready = io.rdata.ready
	io.cache_stage1.ready := reg_ready & ready
	
	io.sram_w.valid		:= reg_cache_write
	io.sram_w.sram_addr	:= reg_index 
	io.sram_w.sram_data	:= reg_cache_wdata
	io.sram_w.sram_tag	:= reg_tag
	io.sram_w.chose_tag	:= reg_chosen_tag
	
	io.rdata.valid 		:= reg_valid
	io.rdata.bits.data	:= reg_rdata
	io.rdata.bits.pc 	:= reg_cpu_addr
	
	//------------------------- bus ---------------------------
	io.cache_bus.w.valid 		:= false.B 
	io.cache_bus.w.bits.waddr 	:= 0.U 
	io.cache_bus.w.bits.wdata 	:= 0.U 
	io.cache_bus.w.bits.wlast 	:= false.B 
	
	io.cache_bus.b.ready 		:= false.B 
	
	io.cache_bus.r.bits.raddr	:= reg_r_raddr
	io.cache_bus.r.valid 		:= reg_r_valid
}

class ICache extends Module{
	val io = IO(new Bundle{
		val flush 	  = Input(Bool())
		val cpu_raddr = Flipped(Decoupled(new CPU_ADDR_IO))
		val cpu_rdata = Decoupled(new CPU_DATA_IO)
		val is_fence_i = Input(Bool())
		
		val sram0_data 	= new SRAM_Interface 
		val sram0_tag 	= new SRAM_Interface
		val sram2_data 	= new SRAM_Interface
		val sram2_tag 	= new SRAM_Interface

		// cache <----> crossbar <----> AXI
		val cache_bus 	= new SimpleBus		
	})
	
	val cache_stage0 = Module(new ICache_stage0)
	val cache_stage1 = Module(new ICache_stage1)
	val cache_stage2 = Module(new ICache_stage2)

	val reg_sram0_valid		= RegInit(0.U(64.W))
	val reg_sram1_valid		= RegInit(0.U(64.W))

	cache_stage0.io.flush := io.flush 
	cache_stage1.io.flush := io.flush 
	cache_stage2.io.flush := io.flush 
	val is_w_sram 		= cache_stage2.io.sram_w.valid &(!io.flush)
	val chose_tag		= cache_stage2.io.sram_w.chose_tag
	val w_index 		= cache_stage2.io.sram_w.sram_addr
	val sram_wdata		= cache_stage2.io.sram_w.sram_data
	val sram_wtag 		= cache_stage2.io.sram_w.sram_tag

	val is_sram0_write	=  is_w_sram & (chose_tag === 0.U)
	val is_sram1_write	=  is_w_sram & (chose_tag === 1.U)
	val clear_cache			= io.is_fence_i 
	val chose_bit 		= 1.U << w_index 
	val neg_chose_bit 	= ~chose_bit
	
	when(clear_cache){
		reg_sram0_valid	:= 0.U
	}.elsewhen(is_sram0_write){
		reg_sram0_valid := reg_sram0_valid | chose_bit
	}.otherwise{
		reg_sram0_valid := reg_sram0_valid
	}

	when(clear_cache){
		reg_sram1_valid	:= 0.U
	}.elsewhen(is_sram1_write){
		reg_sram1_valid := reg_sram1_valid | chose_bit
	}.otherwise{
		reg_sram1_valid := reg_sram1_valid
	}

	cache_stage0.io.cpu_addr <> io.cpu_raddr
	cache_stage0.io.addr <> cache_stage1.io.cpu_addr

	val r_index 	= cache_stage1.io.tag_valid.index 
	val is_r_sram	= cache_stage1.io.sram.valid 

	val sram0_data  = io.sram0_data	// 存放数据
	val sram0_tag 	= io.sram0_tag	// 存放Tag， 以及控制位
	
	val sram1_data	= io.sram2_data
	val sram1_tag	= io.sram2_tag

	//----------------------------- sram0------------------------------
	val sram_addr = Mux(is_w_sram,w_index,r_index)
	sram0_data.wen 			:= ~(is_sram0_write)
	sram0_data.cen 			:= ~(true.B)
	sram0_data.wmask 		:= 0.U//~(cache_mask)
	sram0_data.addr 		:= sram_addr
	sram0_data.wdata 		:= sram_wdata

	sram0_tag.wen			:= ~(is_sram0_write)
	sram0_tag.cen			:= ~(true.B)
	sram0_tag.wmask 		:= 0.U
	sram0_tag.addr 			:= sram_addr
	sram0_tag.wdata 		:= sram_wtag
	//---------------------------- sram1------------------------------
	sram1_data.wen 			:= ~(is_sram1_write)
	sram1_data.cen 			:= ~(true.B)
	sram1_data.wmask 		:= 0.U//~(cache_mask)
	sram1_data.addr 		:= sram_addr
	sram1_data.wdata 		:= sram_wdata

	sram1_tag.wen			:= ~(is_sram1_write)
	sram1_tag.cen			:= ~(true.B)
	sram1_tag.wmask 		:= 0.U
	sram1_tag.addr 			:= sram_addr
	sram1_tag.wdata 		:= sram_wtag 
	//---------------------------------------------------------------- 
	//	= cache_stage1.io.sram.sram_addr
	//为何不考虑 is_r_sram 与is_w_sram 冲突的问题，因为只要冲突，is_r_sram 的值就会放弃，所以reg_sram0_valid读出的值也是无效的
	//上一行少考虑了如果取出的值与写入值相关，以及流水性问题，理解有错误
//	cache_stage1.io.tag_valid.tag_valid(0) := reg_sram0_valid(r_index)//Mux(is_sram0_write &(r_index === w_index),1.U,reg_sram0_valid(r_index))
//	cache_stage1.io.tag_valid.tag_valid(1) := reg_sram1_valid(r_index)//Mux(is_sram1_write &(r_index === w_index),1.U,reg_sram1_valid(r_index))
	val reg_temp_sram0_valid = RegInit(false.B)
	val reg_temp_sram1_valid = RegInit(false.B)
	reg_temp_sram0_valid := reg_sram0_valid(r_index)
	reg_temp_sram1_valid := reg_sram1_valid(r_index)
	val w_r_pass0_val = is_sram0_write &(r_index === w_index)
	val w_r_pass1_val = is_sram1_write &(r_index === w_index)
	cache_stage1.io.tag_valid.tag_valid(0) := Mux(w_r_pass0_val,1.U,reg_temp_sram0_valid)
	cache_stage1.io.tag_valid.tag_valid(1) := Mux(w_r_pass1_val,1.U,reg_temp_sram1_valid)


	val reg_sram_r_ready = RegInit(true.B)
	when(is_r_sram){
		reg_sram_r_ready := Mux(is_w_sram,false.B,true.B)
	}
	val temp_sram0_tag_data = Mux(w_r_pass0_val,sram_wtag,sram0_tag.rdata(53,0))
	val temp_sram0_data = Mux(w_r_pass0_val,sram_wdata,sram0_data.rdata)
	val temp_sram1_tag_data = Mux(w_r_pass1_val,sram_wtag,sram1_tag.rdata(53,0))
	val temp_sram1_data = Mux(w_r_pass1_val,sram_wdata,sram1_data.rdata)

	cache_stage1.io.sram.sram_data(0)	:= temp_sram0_data
	cache_stage1.io.sram.sram_tag(0)	:= temp_sram0_tag_data
	cache_stage1.io.sram.sram_data(1)	:= temp_sram1_data
	cache_stage1.io.sram.sram_tag(1)	:= temp_sram1_tag_data
	cache_stage1.io.sram.ready 			:= reg_sram_r_ready
	cache_stage2.io.cache_stage1 <> cache_stage1.io.cache_stage1
	io.cache_bus <> cache_stage2.io.cache_bus
	io.cpu_rdata <> cache_stage2.io.rdata
}