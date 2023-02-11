import chisel3._
import chisel3.util._ 

class Cache extends Module{
	val io = IO(new Bundle{
		// valid here is input ,so we should flip valid(output)
		// ready is output
		val cpu_in = Flipped(Decoupled(new Bundle{
			val addr 		= Output(UInt(64.W))
			val wdata 		= Output(UInt(64.W))
			val is_w 		= Output(Bool())
			val wstrb 		= Output(UInt(8.W))
		}))

		// valid is output 
		// ready is input 
		val cpu_out = Decoupled(new Bundle{
			val rdata 		= Output(UInt(64.W))
		})

		// processing logic 
		// cache <----> crossbar <----> AXI
		val cache_bus = new SimpleBus
	})

	val Tag 		= io.cpu_in.bits.addr(63,10)
	val Index 		= io.cpu_in.bits.addr(9,4)
	val Offset 		= io.cpu_in.bits.addr(3,0)
	val wdata 		= io.cpu_in.bits.wdata
	val wstrb 		= io.cpu_in.bits.wstrb
	val is_w 		= io.cpu_in.bits.is_w

	val sram1_data 		= Module(new S011HD1P_X32Y2D128_BW) // 存放数据
	val sram1_tag 		= Module(new S011HD1P_X32Y2D128_BW) // 存放Tag， 以及控制位
	val sram2_data 		= Module(new S011HD1P_X32Y2D128_BW) // 存放数据
	val sram2_tag 		= Module(new S011HD1P_X32Y2D128_BW) // 存放Tag，以及控制位

	val cache_idle :: read_cache :: write_cache :: cache_and_bus::Nil = Enum(4)
	val reg_cache_state	= RegInit(cache_idle)
//-------------------------------Reg------------------------------------
	val reg_wdata 		= RegInit(0.U(64.W))
	val reg_wstrb 		= RegInit(0.U(8.W))
	val reg_is_w 		= RegInit(false.B)
	val reg_tag   		= RegInit(0.U(54.W))
	val reg_index 		= RegInit(0.U(6.W))
	val reg_offset 		= RegInit(0.U(4.W))
	val reg_wready 		= RegInit(true.B)

	val reg_rvalid 		= RegInit(false.B)
	val reg_rdata 		= RegInit(0.U(64.W))

	val reg_cache_write = RegInit(false.B)
	val reg_cache_wstrb = RegInit(0.U(16.W))
	val reg_cache_wdata = RegInit(0.U(128.W))
	val reg_chosen_tag	= RegInit(0.U(1.W))
	val cache_mask 		= Cat(reg_cache_wstrb.asBools.map(Fill(8, _)).reverse)
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
// Output
	val reg_aw_awaddr 	= RegInit(0.U(64.W))
	val reg_aw_awlen 	= RegInit(0.U(8.W))
	val reg_aw_wdata 	= RegInit(0.U(64.W))
	val reg_aw_wstrb 	= RegInit(0.U(8.W))
	val reg_aw_wlast 	= RegInit(false.B)
	val reg_aw_valid 	= RegInit(false.B)

	val reg_b_ready 	= RegInit(false.B)

	val reg_ar_araddr 	= RegInit(0.U(64.W))
	val reg_ar_arlen	= RegInit(0.U(8.W))
	val reg_ar_valid 	= RegInit(false.B)

	val reg_r_ready 	= RegInit(false.B)

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

//------------------------LRU-----------------------
// 1 bit LRU
	val reg_lru 			= RegInit(VecInit(Seq.fill(2)(0.U(32.W))))
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
	val is_need_wait	= RegInit(false.B)
	val reg_rbus_finish = RegInit(true.B)
	val reg_wbus_finish = RegInit(true.B)
//------------------------- operation ----------------------------
	//Tag-<63,10>	index--<9,4>--- offset--<3,0>
	switch(reg_cache_state){
		is(cache_idle){
			when(io.cpu_in.fire()){
			//------hold cpu state----------
				reg_wdata		:= io.cpu_in.bits.wdata
				reg_wstrb		:= io.cpu_in.bits.wstrb
				reg_is_w		:= io.cpu_in.bits.is_w
				reg_tag			:= io.cpu_in.bits.addr(63,10)
				reg_index		:= io.cpu_in.bits.addr(9,4)
				reg_offset		:= io.cpu_in.bits.addr(3,0)
				reg_wready		:= false.B 
			//-----------cache--------------
				reg_cache_write := false.B
			//------------bus---------------
				reg_aw_valid	:= false.B 
				reg_b_ready		:= false.B
				reg_ar_valid 	:= false.B 
				reg_r_ready 	:= false.B
			//-------next state-------------
				reg_cache_state := read_cache
				reg_start_operation := true.B
			}.otherwise{
				reg_cache_state := cache_idle
			}
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
						reg_cache_state 		:= write_cache
					}.otherwise{
						// read data from cache,
						//-----cpu
						reg_rdata				:= Mux(hit_1,rdata1,rdata2)
						reg_rvalid 				:= true.B 
						when(io.cpu_out.fire()){
							reg_wready				:= true.B
							reg_rvalid 				:= false.B
							reg_cache_state 		:= cache_idle
						}
					}
				}.otherwise{
					//----cpu---- 
					//reg_rvalid				:= false.B
					//reg_wready				:= false.B
					//----cache---
					//reg_cache_write			:= false.B
					//----bus-----
					reg_ar_araddr(63,4)			:= Cat(reg_tag,reg_index)
					reg_ar_arlen				:=1.U 
					reg_ar_valid				:= true.B
					reg_r_ready 				:= true.B
					reg_cache_state 			:= cache_and_bus
					reg_rbus_finish				:= false.B
					reg_cache_wstrb				:= cache_wstrb //Provide convenience for cache_mask
				}
			}.otherwise{
				when(tag_valid_1 & tag_valid_2){
					//0 is often use , try not to replace it
					// LRU 00 ->    tag1, LRU 01 ->    tag1 ,LRU 10 ->    tag2 ,LRU 11 ->    tag2
					//--------cpu-----
					//reg_wready 		:= false.B 
					//reg_rvalid		:= false.B 
					//-------cache---------
					//reg_cache_write	:= false.B
					//-------bus-----------
					reg_chosen_tag		:= LRU(1) 
					reg_aw_awaddr(63,4)	:= Cat(Mux(LRU(1),tag_2,tag_1),reg_index)
					reg_aw_awlen		:= 1.U 
					reg_cnt				:= 1.U //assistant to count
					reg_aw_wdata 		:= Mux(LRU(1),rdata2(63,0),rdata1(63,0))
					reg_aw_wstrb 		:= "hff".U
					reg_aw_wlast 		:= false.B 
					reg_aw_valid 		:= true.B
					reg_b_ready 		:= true.B
					reg_wbus_finish		:= false.B 

					reg_ar_araddr(63,4)	:= Cat(reg_tag,reg_index)
					reg_ar_arlen		:=1.U 
					reg_ar_valid		:= true.B
					reg_rbus_finish		:= false.B

					reg_cache_state		:=cache_and_bus
				}.otherwise{
					reg_chosen_tag 		:= Mux(tag_valid_1,1.U,0.U) 

					reg_ar_araddr(63,4)	:= Cat(reg_tag,reg_index)
					reg_ar_arlen		:=1.U 
					reg_ar_valid		:= true.B
					reg_rbus_finish		:= false.B

					reg_cache_state		:=cache_and_bus
				}
			}
		}
		is(write_cache){
			reg_cache_write			:= false.B
			when(is_need_wait){
				when(io.cpu_out.fire()){
					reg_rvalid 			:= false.B 
					is_need_wait 		:= false.B
					reg_wready			:= true.B
					reg_cache_state 	:= cache_idle
				}
			}.otherwise{
				reg_wready			:= true.B
				reg_cache_state 	:= cache_idle
			}
		}
		is(cache_and_bus){
			when(io.cache_bus.ar.fire()){
				reg_ar_valid 	:= false.B
			}
			when(io.cache_bus.r.fire()){
				when(io.cache_bus.r.bits.rlast){
					reg_rbus_finish			:= true.B
					when(reg_is_w){
						//----cpu--
						//reg_rvalid		:= false.B 
						//reg_wready		:= false.B
						//----cache---
						reg_cache_wstrb		:="hffff".U
						// ???? is need wait write bus
						//reg_cache_write		:= true.B
						reg_cache_wdata     := (cache_wdata & cache_mask) | (Cat(io.cache_bus.r.bits.rdata,reg_cache_wdata(63,0)) & ~cache_mask)
						//reg_cache_state		:= write_cache
					}.otherwise{
						//----cpu---
						reg_rdata 			:= Mux(reg_offset(3),io.cache_bus.r.bits.rdata,reg_cache_wdata(63,0))
						// ???? is need wait cpu out
						reg_rvalid 			:= true.B
						is_need_wait		:= true.B
						//reg_wready		:= false.B
						reg_cache_wdata		:= Cat(io.cache_bus.r.bits.rdata,reg_cache_wdata(63,0))
						//reg_cache_state		:= write_cache
						reg_cache_wstrb		:="hffff".U
						// ???? is need wait write bus
						//reg_cache_write		:= true.B
					}
				}.otherwise{
					reg_cache_wdata(63,0)	:= io.cache_bus.r.bits.rdata
				}
			}
			when(io.cache_bus.aw.fire()){
				when(reg_cnt === 0.U){
					reg_wbus_finish := true.B
					reg_aw_wlast	:= false.B
					reg_aw_valid	:= false.B 
				}.elsewhen(reg_cnt === 1.U){
					reg_cnt 		:= reg_cnt - 1.U 
					reg_aw_wlast 	:= true.B
					reg_aw_wdata 	:= Mux(reg_chosen_tag === 1.U,rdata2(127,64),rdata1(127,64))
				}.otherwise{
					reg_cnt := reg_cnt - 1.U 
					reg_aw_wdata 	:= Mux(reg_chosen_tag === 1.U,rdata2(127,64),rdata1(127,64))
				}
			}
			//when(io.cache_bus.b.fire()){
				//reg_b_ready	:= false.B
			//}
			// when read bus finish , write bus finish
			when((io.cache_bus.r.bits.rlast | reg_rbus_finish)&((reg_cnt === 0.U) | reg_wbus_finish )){
				reg_cache_state		:= write_cache
				reg_cache_write		:= true.B
			}
		}
	}
}
