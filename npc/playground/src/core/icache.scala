import chisel3._
import chisel3.util._ 
class ICache extends Module{
	val io = IO(new Bundle{
		val cpu = Flipped(new Bundle{
			val bits = new Bundle{
				val addr 	= Output(UInt(64.W))
				val rdata 	= Input(UInt(64.W))
			}
			val ready = Input(Bool())
			def fire: Bool = valid & ready 
		})
		val is_fence_i = Input(Bool())
		
		val sram0_data 	= new SRAM_Interface 
		val sram0_tag 	= new SRAM_Interface
		val sram2_data 	= new SRAM_Interface
		val sram2_tag 	= new SRAM_Interface
		
		// cache <----> crossbar <----> AXI
		val cache_bus 	= new SimpleBus
	})
	
	val Tag 		= io.cpu.bits.addr(63,10)
	val Index 		= io.cpu.bits.addr(9,4)
	val Offset 		= io.cpu.bits.addr(3,0)
	
	val sram0_data  = io.sram0_data	// 存放数据
	val sram0_tag 	= io.sram0_tag	// 存放Tag， 以及控制位
	
	val sram2_data	= io.sram2_data
	val sram2_tag	= io.sram2_tag
	
	val cache_idle	:: read_cache :: cache_and_bus :: cache_end :: Nil = Enum(4)
	val reg_cache_state = RegInit(cache_idle)
//----------------------Reg------------------------------------
	val reg_tag 	= RegInit(0.U(54.W))
	val reg_index 	= RegInit(0.U(6.W))
	val reg_offset 	= RegInit(0.U(4.W))
	
	val reg_ready 	= RegInit(false.B)
	val reg_rdata 	= RegInit(0.U(64.W))
	
	val reg_cache_write = RegInit(false.B)
	val reg_cache_wdata = RegInit(0.U(128.W))
	val reg_chosen_tag	= RegInit(0.U(1.W))
	
//---------------------------- sram0 --------------------------
	val is_sram0_write 		= reg_cache_write &(reg_chosen_tag === 0.U)
	val sram0_A				= Mux(reg_cache_state =/= cache_idle,reg_index,Index)
	sram0_data.wen 			:= ~(is_sram0_write)
	sram0_data.cen 			:= ~(true.B)
	sram0_data.wmask 		:= 0.U//~(cache_mask)
	sram0_data.addr 		:= sram0_A
	sram0_data.wdata 		:= reg_cache_wdata
	
	sram0_tag.wen			:= ~(is_sram0_write)
	sram0_tag.cen			:= ~(true.B)
	sram0_tag.wmask 		:= 0.U
	sram0_tag.addr 			:= sram0_A
	sram0_tag.wdata 		:= reg_tag

	//val clear_cache = false.B
	val clear_cache			= io.is_fence_i 
	val reg_sram0_valid 	= RegInit(0.U(64.W))
	val chose_bit = 1.U << reg_index   //相应位，置1
	val neg_chose_bit = ~chose_bit

	when(clear_cache){
		reg_sram0_valid	:= 0.U
	}.elsewhen(is_sram0_write){
		reg_sram0_valid := reg_sram0_valid | chose_bit
	}.otherwise{
		reg_sram0_valid := reg_sram0_valid
	}
	
//--------------------------- sram2----------------------------
	val is_sram2_write 		= reg_cache_write &(reg_chosen_tag === 1.U)
	val sram2_A = sram0_A
	sram2_data.wen 			:= ~(is_sram2_write)
	sram2_data.cen 			:= ~(true.B)
	sram2_data.wmask 		:= 0.U//~(cache_mask)
	sram2_data.addr 		:= sram2_A
	sram2_data.wdata 		:= reg_cache_wdata

	sram2_tag.wen			:= ~(is_sram2_write)
	sram2_tag.cen			:= ~(true.B)
	sram2_tag.wmask 		:= 0.U
	sram2_tag.addr 			:= sram2_A
	sram2_tag.wdata 		:= reg_tag 
	
	val reg_sram2_valid 	= RegInit(0.U(64.W))
	when(clear_cache){
		reg_sram2_valid		:= 0.U
	}.elsewhen(is_sram2_write){
		reg_sram2_valid 	:= reg_sram2_valid | chose_bit
	}.otherwise{
		reg_sram2_valid 	:= reg_sram2_valid
	}
//------------cachhe  <-------> bus -------------------------
// 基本不存在1次读写，Cache从主存区读取，往主存区写，都是128位，总线为64位，所以为2两次
	val reg_r_raddr 		= RegInit(0.U(64.W))
	val reg_r_valid 		= RegInit(false.B)

//------------------------------ get data from SRAM-----------------------------
	val tag_0 			= sram0_tag.rdata(53,0)
	val tag_2 			= sram2_tag.rdata(53,0)
	val hit_0			= (reg_tag === tag_0)
	val hit_2 			= (reg_tag === tag_2)
	val tag_valid_0 	= reg_sram0_valid(reg_index)
	val tag_valid_2 	= reg_sram2_valid(reg_index)
	val rdata0			= Mux(reg_offset(3),sram0_data.rdata(127,64),sram0_data.rdata(63,0))
	val rdata2 			= Mux(reg_offset(3),sram2_data.rdata(127,64),sram2_data.rdata(63,0))
	val rdata_0			= sram0_data.rdata
	val rdata_2 		= sram2_data.rdata
	
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

	switch(reg_cache_state){
		is(cache_idle){
			when(io.cpu.valid){
			//--------hold cpu state-------------
				reg_tag 		:= io.cpu.bits.addr(63,10)
				reg_index 		:= io.cpu.bits.addr(9,4)
				reg_offset 		:= io.cpu.bits.addr(3,0)
			//-----------next state--------------
				reg_cache_state	:= read_cache
				reg_start_operation := true.B 			
			}.otherwise{
			
			}
			reg_ready 	:= false.B 
			//-----------cache-------------------
			reg_cache_write := false.B 
			//------------bus--------------------
			reg_r_valid 	:= false.B
		}
		is(read_cache){
			reg_start_operation := false.B 
			reg_cache_wstrb 	:= cache_wstrb
			when(hit_0 | hit_2){
			//一般情况下不会出现两个都中，如果两个都中，则必然两个都无效
			//这种情况下强制为hit_0先有效
				reg_chosen_tag 	:= Mux(hit_0,0.U,1.U)
				when((hit_0 & tag_valid_0) | (hit_2 & tag_valid_2)){
					// read data from cache
					// ------ cpu 
					reg_rdata 			:= Mux(hit_0,rdata0,rdata2)
					reg_ready 			:= true.B
					reg_cache_state 	:= cache_end
				}.otherwise{
					//-----cpu-----
					//reg_ready 			:= false.B 
					//-----cache--- 
					//reg_cache_write 		:= false.B 
					//------bus---- 
					reg_r_raddr 			:= Cat(reg_tag,reg_index) << 4.U 
					reg_r_valid 			:= true.B 
					reg_cache_state			:= cache_and_bus
				}
			}.otherwise{
				when(tag_valid_0 & tag_valid_2){
					reg_chosen_tag 		:= LRU_2
					//read_bus 
					reg_r_raddr 		:= Cat(reg_tag,reg_index) << 4.U 
					reg_r_valid 		:= true.B 
					
					reg_cache_state 	:= cache_and_bus 
					
				}.otherwise{
					reg_chosen_tag 		:= Mux(tag_valid_0,1.U,0.U)
					
					reg_r_raddr 		:= Cat(reg_tag,reg_index) << 4.U
					reg_r_valid 		:= true.B 
					reg_cache_state 	:= cache_and_bus
				}
			}
		}
		is(cache_and_bus){
			when(io.cache_bus.r.fire){
				when(io.cache_bus.r.bits.rlast){
					reg_r_valid 	:= false.B
					//----cpu---
					reg_rdata 			:= Mux(reg_offset(3),io.cache_bus.r.bits.rdata,reg_cache_wdata(63,0))
					reg_cache_wdata		:= Cat(io.cache_bus.r.bits.rdata,reg_cache_wdata(63,0))
				}.otherwise{
					reg_cache_wdata 		:= io.cache_bus.r.bits.rdata
				}
			}
			when(io.cache_bus.r.bits.rlast){
				reg_cache_write 	:= true.B 
				reg_cache_state 	:= cache_end 
				reg_ready 			:= true.B 
			}
		}
		is(cache_end){
			reg_cache_write 	:= false.B 
			reg_ready 			:= false.B 
			//------------bus----------- 
			reg_r_valid 		:= false.B
			reg_cache_state		:= cache_idle
		}
	}
	io.cpu.bits.rdata 			:= reg_rdata
	io.cpu.ready 				:= reg_ready 

	io.cache_bus.w.valid 		:= false.B
	io.cache_bus.w.bits.waddr 	:= 0.U
	io.cache_bus.w.bits.wdata 	:= 0.U
	io.cache_bus.w.bits.wlast 	:= false.B

	io.cache_bus.b.ready		:= false.B

	io.cache_bus.r.bits.raddr	:= reg_r_raddr
	io.cache_bus.r.valid 		:= reg_r_valid
}