
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
	
	val sram1_data 		= Module(new SRAM) // 存放数据
	val sram1_tag 		= Module(new SRAM) // 存放Tag， 以及控制位
	val sram2_data 		= Module(new SRAM) // 存放数据
	val sram2_tag 		= Module(new SRAM) // 存放Tag，以及控制位	
	
	val cache_idle	:: read_cache :: cache_and_bus :: cache_end :: Nil = Enum(4)
	val reg_cache_state	= RegInit(cache_idle)
//-------------------------------Reg------------------------------------
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
	
//--------------------------------- sram1-------------------------------
	sram1_data.io.WEN 		:= ~(reg_cache_write &(reg_chosen_tag === 0.U))
	sram1_data.io.CEN 		:= ~(true.B)
	sram1_data.io.BWEN 	:= ~(cache_mask)
	sram1_data.io.A 		:= Mux(reg_cache_state =/= cache_idle,reg_index,Index)
	sram1_data.io.D 		:= reg_cache_wdata

	sram1_tag.io.WEN		:= ~(reg_cache_write &(reg_chosen_tag === 0.U))
	sram1_tag.io.CEN		:= ~(true.B)
	sram1_tag.io.BWEN 		:= 0.U
	sram1_tag.io.A 		:= Mux(reg_cache_state =/= cache_idle,reg_index,Index)
	//tag,valid, dirty
	//<55,2>,<1>,<0>
	sram1_tag.io.D 		:= Cat(reg_tag,Mux(reg_is_w,"b11".U(2.W),"b10".U(2.W)))

//--------------------------------sram2---------------------------------
	sram2_data.io.WEN 		:= ~(reg_cache_write &(reg_chosen_tag === 1.U))
	sram2_data.io.CEN 		:= ~(true.B)
	sram2_data.io.BWEN 	:= ~(cache_mask)
	sram2_data.io.A 		:= Mux(reg_cache_state =/= cache_idle,reg_index,Index)
	sram2_data.io.D 		:= reg_cache_wdata

	sram2_tag.io.WEN 		:= ~(reg_cache_write &(reg_chosen_tag === 1.U))
	sram2_tag.io.CEN 		:= ~(true.B)
	sram2_tag.io.BWEN 		:= 0.U
	sram2_tag.io.A 		:= Mux(reg_cache_state =/= cache_idle,reg_index,Index)
	sram2_tag.io.D 		:= Cat(reg_tag,Mux(reg_is_w,"b11".U(2.W),"b10".U(2.W)))

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
	val tag_1			= sram1_tag.io.Q(55,2)
	val tag_2 		 	= sram2_tag.io.Q(55,2)
	val hit_1	 	 	= (reg_tag === tag_1)
	val hit_2	 		= (reg_tag === tag_2)
	val tag_valid_1	  	= sram1_tag.io.Q(1)
	val tag_valid_2	  	= sram2_tag.io.Q(1)
	val tag_dirty_1		= sram1_tag.io.Q(0)
	val tag_dirty_2		= sram2_tag.io.Q(0)
	val rdata1			= Mux(reg_offset(3),sram1_data.io.Q(127,64),sram1_data.io.Q(63,0))
	val rdata2 			= Mux(reg_offset(3),sram2_data.io.Q(127,64),sram2_data.io.Q(63,0))
	val rdata_1			= sram1_data.io.Q
	val rdata_2 		= sram2_data.io.Q

//------------------------LRU-----------------------
// 1 bit LRU
	val reg_lru 			= RegInit(VecInit(Seq.fill(64)(0.U(2.W))))
	val reg_start_operation	= RegInit(false.B)

	//0 <--------------> 63
	for(i <- 0 until 64){
		// maybe not right generate the hardware circuit
		when((i.asUInt === reg_index) & (reg_start_operation)){
			when(hit_1){
				reg_lru(i) := "b10".U
			}.elsewhen(hit_2){
				reg_lru(i) := "b01".U
			}.otherwise{
				when(tag_valid_1 & tag_valid_2){
					reg_lru(i) := Mux(reg_lru(i)(1),"b01".U,"b10".U)
				}.otherwise{
					reg_lru(i) := Mux(tag_valid_1,"b01".U,"b10".U)
				}
			}
		}
	}

	val LRU				= reg_lru(reg_index)	
	val reg_cnt 		= RegInit(0.U(2.W))
	val reg_rbus_finish = RegInit(true.B)
	val reg_wbus_finish = RegInit(true.B)
//------------------------- operation ----------------------------
	//Tag-<63,10>	index--<9,4>--- offset--<3,0>
	switch(reg_cache_state){
		is(cache_idle){
			when(io.cpu.valid){
			//------hold cpu state----------
				reg_wdata		:= io.cpu.bits.wdata
				reg_wstrb		:= io.cpu.bits.wstrb
				reg_is_w		:= io.cpu.bits.is_w
				reg_tag			:= io.cpu.bits.addr(63,10)
				reg_index		:= io.cpu.bits.addr(9,4)
				reg_offset		:= io.cpu.bits.addr(3,0)
			//-------next state-------------
				reg_cache_state := read_cache
				reg_start_operation := true.B
			// }.elsewhen(io.up_mem.valid){
			// 	reg_cache_state := cache_sync
			// }.elsewhen(io.clean_cache.valid){
			// 	reg_cache_state	:= cache_clean
			}.otherwise{
				reg_cache_state := cache_idle
			}
			reg_ready	:= false.B
			//-----------cache--------------
			reg_cache_write := false.B
			//------------bus---------------
			reg_w_valid		:= false.B 
			reg_b_ready 	:= false.B 
			reg_r_valid 	:= false.B
		}
		is(read_cache){
			reg_start_operation := false.B
			when(hit_1 | hit_2){
				reg_chosen_tag	:= Mux(hit_1,0.U,1.U)
				when((hit_1 & tag_valid_1) | (hit_2 & tag_valid_2)){
					when(reg_is_w){
						//----- cache ----
						reg_cache_write			:= true.B 
						reg_cache_wstrb		 	:= cache_wstrb	
						//reg_index
						//reg_chosen_tag
						reg_cache_wdata			:= cache_wdata
						reg_cache_state 		:= cache_end
						reg_ready				:= true.B
					}.otherwise{
						// read data from cache,
						//-----cpu
						reg_rdata				:= Mux(hit_1,rdata1,rdata2)
						reg_ready 				:= true.B
						reg_cache_state 		:= cache_end
					}
				}.otherwise{
					//----cpu---- 
					//reg_ready 				:= false.B
					//----cache---
					//reg_cache_write			:= false.B
					//----bus-----
					reg_r_raddr 				:= Cat(reg_tag,reg_index) << 4.U
					reg_r_valid 				:= true.B 
					reg_rbus_finish 			:= false.B
					reg_cache_state 			:= cache_and_bus
				}
			}.otherwise{
				when(tag_valid_1 & tag_valid_2){
					reg_chosen_tag		:= LRU(1)
					//read_bus 
					reg_r_raddr			:=  Cat(reg_tag,reg_index) << 4.U
					reg_r_valid 		:= true.B 
					reg_rbus_finish		:= false.B
					
					reg_cache_state		:=cache_and_bus
					//write bus 
					when((tag_dirty_1 &(!LRU(1))) | (tag_dirty_2 & LRU(1))){
						reg_w_valid  	:= true.B 
						reg_b_ready 	:= true.B
						reg_w_waddr		:= Cat(Mux(LRU(1),tag_2,tag_1),reg_index)<<4.U
						reg_w_wdata 	:= Mux(LRU(1),rdata_2(63,0),rdata_1(63,0))
						reg_w_wlast 	:= false.B 
						reg_wbus_finish	:= false.B
						reg_cnt 		:= 1.U
					}
				}.otherwise{
					reg_chosen_tag 		:= Mux(tag_valid_1,1.U,0.U)
					
					reg_r_raddr			:= Cat(reg_tag,reg_index) << 4.U
					reg_r_valid 		:= true.B 
					reg_rbus_finish		:= false.B
					reg_cache_state		:=cache_and_bus
				}
			}
		}
		is(cache_and_bus){
			when(io.cache_bus.r.fire){
				when(io.cache_bus.r.bits.rlast){
					reg_r_valid 		:= false.B
					//----cache---
					reg_cache_wstrb		:="hffff".U
					reg_rbus_finish		:= true.B
					when(reg_is_w){
						reg_cache_wdata     := (cache_wdata & cache_mask) | (Cat(io.cache_bus.r.bits.rdata,reg_cache_wdata(63,0)) & ~cache_mask)
					}.otherwise{
						//----cpu---
						reg_rdata 			:= Mux(reg_offset(3),io.cache_bus.r.bits.rdata,reg_cache_wdata(63,0))
						reg_cache_wdata		:= Cat(io.cache_bus.r.bits.rdata,reg_cache_wdata(63,0))
					}
				}.otherwise{
					reg_cache_wdata			:= io.cache_bus.r.bits.rdata
				}
			}
			
			when(io.cache_bus.w.fire){
				when(reg_cnt === 0.U){
					reg_w_wlast 	:= false.B
					reg_w_valid 	:= false.B 
				}.elsewhen(reg_cnt === 1.U){
					reg_cnt 		:= reg_cnt - 1.U 
					reg_w_wlast 	:= true.B 
					reg_w_wdata 	:= Mux(reg_chosen_tag === 1.U,rdata_2(127,64),rdata_1(127,64))
				}.otherwise{
					reg_cnt := reg_cnt - 1.U 
					reg_w_wdata 	:= Mux(reg_chosen_tag === 1.U,rdata_2(127,64),rdata_1(127,64))
				}
			}
			when(io.cache_bus.b.fire){
				reg_wbus_finish	:= true.B
				reg_b_ready		:= false.B
			}
			// when read bus finish , write bus finish
			when((io.cache_bus.r.bits.rlast | reg_rbus_finish)&((io.cache_bus.b.fire) | reg_wbus_finish )){
				reg_cache_write		:= true.B  //??? when not write cache 
				reg_cache_state		:= cache_end
				reg_ready 			:= true.B
			}			
		}
		is(cache_end){
			reg_cache_write		:= false.B
			reg_ready 			:= false.B
			//------------bus---------------
			reg_w_valid		:= false.B 
			reg_b_ready 	:= false.B 
			reg_r_valid 	:= false.B
			reg_cache_state		:= cache_idle
		}
		// is(cache_sync){
		// 	when()
		// }
		// is(cache_clean){

		// }
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