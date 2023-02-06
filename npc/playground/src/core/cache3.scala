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

	val Tag 		= io.cpu_in.addr(63,10)
	val Index 		= io.cpu_in.addr(9,4)
	val Offset 		= io.cpu_in.addr(3,0) 
	val wdata 		= io.cpu_in.wdata 
	val wstrb 		= io.cpu_in.wstrb
	val is_w 		= io.cpu_in.is_w

	val sram1_data 		= Module(new S011HD1P_X32Y2D128_BW) // 存放数据
	val sram1_tag 		= Module(new S011HD1P_X32Y2D128_BW) // 存放Tag， 以及控制位
	val sram2_data 		= Module(new S011HD1P_X32Y2D128_BW) // 存放数据
	val sram4_tag 		= Module(new S011HD1P_X32Y2D128_BW) // 存放Tag，以及控制位

//--------------------------------- sram1-----------------------
	sram1_data.WEN 		:= ~(reg_cache_write &(reg_chosen_tag === 0.U))
	sram1_data.CEN 		:= ~(true.B)
	sram1_data.BWEN 	:= ~(cache_mask)
	sram1_data.A 		:= Mux(reg_cache_state =/= cache_idle,reg_index,Index)
	sram1_data.D 		:= reg_cache_wdata

	sram1_tag.WEN		:= ~(reg_cache_write &(reg_chosen_tag === 0.U))
	sram1_tag.CEN		:= ~(true.B)
	sram1_tag.BWEN 		:= 0.U
	sram1_tag.A 		:= Mux(reg_cache_state =/= cache_idle,reg_index,Index)
	//tag,valid, dirty
	//<55,2>,<1>,<0>
	sram1_tag.D 		:= Cat(reg_tag,Mux(reg_is_w,"b11".U(2.W),"b10".U(2.W)))

//--------------------------------- sram2-----------------------
	sram2_data.WEN 		:= ~(reg_cache_write &(reg_chosen_tag === 1.U))
	sram2_data.CEN 		:= ~(true.B)
	sram2_data.BWEN 	:= ~(cache_mask)
	sram2_data.A 		:= Mux(reg_cache_state =/= cache_idle,reg_index,Index)
	sram2_data.D 		:= reg_cache_wdata

	sram2_tag.WEN 		:= ~(reg_cache_write &(reg_chosen_tag === 1.U))
	sram2_tag.CEN 		:= ~(true.B)
	sram2_tag.BWEN 		:= 0.U
	sram2_tag.A 		:= Mux(reg_cache_state =/= cache_idle,reg_index,Index)
	sram2_tag.D 		:= Cat(reg_tag,Mux(reg_is_w,"b11".U(2.W),"b10".U(2.W)))
	
//-----------------------Reg-------------------------------------------
	val reg_wdata 		= RegInit(0.U(64.W))
	val reg_wstrb 		= RegInit(0.U(8.W))
	val reg_is_w 		= RegInit(false.B)
	val reg_tag   		= RegInit()
	val reg_index 		= RegInit()
	val reg_offset 		= RegInit(0.U(4.W))
	val reg_wready 		= RegInit(true.B)

	val reg_rvalid 		= RegInit(false.B) 
	val reg_rdata 		= RegInit(0.U(64.W))

	val reg_cache_write = RegInit(false.B)
	val reg_cache_wstrb = RegInit(0.U(16.W)) 
	val reg_cache_wdata = RegInit(0.U(128.W))
	val reg_chosen_tag	= RegInit(0.U(1.w))
	val cache_mask 		= Cat(reg_cache_wstrb.asBools.map(Fill(8, _)).reverse) 
	val cache_wdata 	= Mux(reg_offset(3),Cat(reg_wdata,0.U(64.W)),Cat(0.U(64.W),reg_wdata))
	val cache_wstrb 	= Mux(reg_offset(3),Cat(reg_wstrb,0.U(8.W)),Cat(0.U(8.W),reg_wstrb))
    //------------ cache --- bus ----- -----
// 基本不存在1次读写，Cache从主存区读取，往主存区写，都是128位，总线为64位，所以为2两次。	
	//Output
	val reg_w_addr 			= RegInit(0.U(64.W))
	val reg_w_cmd 			= RegInit(0.U(2.W))
	val reg_w_data 			= RegInit(0.U(64.W))
	val reg_w_wstrb 		= RegInit(0.U(8.W))
	val reg_w_size 			= RegInit(0.U(2.W))
	val reg_w_valid 		= RegInit(false.B) 
	// Input
	//val reg_w_ready			= RegInit(false.B) 

	//Output 
	val reg_r_ready			= RegInit(false.B)

	val cache_idle :: read_cache :: write_cache :: read_mem :: write_mem :: Nil = Enum(5)
	val reg_cache_state 	= RegInit(cache_idle)

//------------------------get data from SRAM-------------------------

	val tag_1			= sram1_tag.Q(55,2)
	val tag_2 		 	= sram2_tag.Q(55,2)
	val hit_1	 	 	= (reg_tag === tag_1)
	val hit_2	 		= (reg_tag === tag_2)
	val tag_valid_1	  	= sram1_tag.Q(1)
	val tag_valid_2	  	= sram2_tag.Q(1)
	val tag_dirty_1		= sram1_tag.Q(0)
	val tag_dirty_2		= sram2_tag.Q(1) 
	val rdata1			= Mux(reg_offset(3),sram1_data.Q(127,64),sram1_data.Q(63,0))
	val rdata2 			= Mux(reg_offset(3),sram2_data.Q(127,64),sram2_data.Q(63,0))


//              LRU                  
// 1 bit LRU 
	val reg_lru = RegInit(Vec(64,UInt(2.W)))
	//0 <--------> 63
	for(i <- 0 until 64){
		when((i === reg_index)& (reg_cache_state === read_cache)){
			when(hit_1){
				reg_lru(i) := "b10".U
			}.elewhen(hit_2){
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

	val LRU 		  = reg_lru(reg_index)
//.............LRU.....................


	//Tag-<63,10>	index--<9,4>--- offset--<3,0>
	switch(reg_cache_state){
		is(cache_idle){
			reg_rvalid		:= false.B 
			when(io.cpu_in.fire()){
			//-------hold cpu state------
				reg_wdata		:= io.cpu_in.wdata
				reg_wstrb		:= io.cpu_in.wstrb
				reg_is_w		:= io.cpu_in.is_w
				reg_tag			:= io.cpu_in.addr(63,10)
				reg_index		:= io.cpu_in.addr(9,4)
				reg_offset		:= io.cpu_in.addr(3,0)
				reg_wready		:= false.B 

				reg_rvalid		:= false.B // this cycle is no use
				reg_rdata 		:= 0.U     // this cycle is no use
			//--------cache---------
				reg_cache_write := false.B 
			//--------bus ------
				reg_w_valid		:= false.B 
				reg_r_ready		:= false.B
			//-------next state-----------
				reg_cache_state := read_cache
			}.otherwise{
				reg_cache_state := cache_idle
			}
		}
		is(read_cache){
			when(hit_1){
				reg_chosen_tag			:= 0.U
				when(tag_valid_1){
					when(reg_is_w){
						//-----cache
						reg_cache_write 		:= true.B 
						reg_cache_wstrb		 	:= cache_wstrb
						//reg_index 
						//reg_chosen_tag
						reg_cache_wdata			:= cache_wdata

						reg_cache_state 		:= write_cache
					}.otherwise{
						// read data from cache,
						//-----cpu 
						reg_rdata				:= rdata1
						reg_rvalid				:= true.B

						when(io.cpu_out.ready){
							reg_wready				:= true.B
							reg_cache_state 		:= cache_idle
						}
						
						//-----cache-----
						//reg_cache_write		:= false.B
						//-----bus------
						//reg_w_valid			:= false.B
						//reg_r_ready			:= false.B
						
					}
				}.otherwise{
					//----cpu---- 
					//reg_rvalid				:= false.B
					//reg_wready				:= false.B
					//----cache---
					//reg_cache_write			:= false.B
					//----bus-----
					reg_w_addr(63,4)			:= Cat(reg_tag,reg_index)
					reg_w_cmd					:= "b10".U 
					//reg_w_data 				 
					reg_w_wstrb 				:= 0.U 
					reg_w_size					:= 1.U
					reg_w_valid					:= true.B 
					reg_r_ready 				:= true.B 
					reg_cache_state 			:= read_bus_write_cache
					reg_cache_wstrb				:= cache_wstrb //Provide convenience for cache_mask
				}
			}.elsewhen(hit_2){
				reg_chosen_tag			:= 1.U
				when(tag_valid_2){
					when(reg_is_w){
						//-----cache
						reg_cache_write 		:= true.B 
						reg_cache_wstrb		 	:= cache_wstrb
						//reg_index 
						//reg_chosen_tag
						reg_cache_wdata			:= cache_wdata

						reg_cache_state 		:= write_cache
					}.otherwise{
						// read data from cache,
						//-----cpu 
						reg_rdata				:= rdata2
						reg_rvalid				:= true.B
						when(io.cpu_out.ready){
							reg_wready				:= true.B
							reg_cache_state 		:= cache_idle
						}
						
						//-----cache-----
						//reg_cache_write		:= false.B
						//-----bus------
						//reg_w_valid			:= false.B
						//reg_r_ready			:= false.B
						
					}
				}.otherwise{
					//----cpu---- 
					//reg_rvalid				:= false.B
					//reg_wready				:= false.B
					//----cache---
					//reg_cache_write			:= false.B
					//----bus-----
					reg_w_addr(63,4)			:= Cat(reg_tag,reg_index)
					reg_w_cmd					:= "b10".U 
					//reg_w_data 				 
					reg_w_wstrb 				:= 0.U 
					reg_w_size					:= 1.U
					reg_w_valid					:= true.B 
					reg_r_ready 				:= true.B 
					reg_cache_state 			:= read_bus_write_cache
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
					reg_w_addr(63,4)	:= Cat(Mux(LRU(1),tag_2,tag_1),reg_index)
					reg_w_cmd			:= "b11".U //write burst
					reg_w_size			:= 1.U
					reg_w_data			:= Mux(LRU(1),rdata2(63,0),rdata1(63,0))
					reg_w_wstrb			:="hff".U 
					
					reg_w_valid			:= true.B
					reg_r_ready			:= true.B

					reg_cache_state 	:= write_bus_read_bus_write_cache
				}.otherwise{
					reg_chosen_tag 		:= Mux(tag_valid_1,1.U,0.U) // if tag2 invalid, 1.U, if tag1 invalid 0.U
					//---------cpu-----------------
					//reg_wready		:= false.B 
					//reg_rvalid 		:= false.B 
					//--------cache----------------
					//reg_cache_write	:= false.B
					//--------bus------------------
					reg_w_addr			:= Cat(reg_tag,reg_index)
					reg_w_cmd			:= "b10".U
					//reg_w_data			:= 
					reg_w_wstrb			:= 0.U
					reg_w_size			:= 1.U
					reg_w_valid			:= true.B
					reg_r_ready			:= true.B
					reg_cache_state 	:= read_bus_write_cache
					reg_cache_wstrb		:= cache_wstrb //Provide convenience for cache_mask
				}
			}
		}
		is(read_bus_write_cache){
			when(io.cache_bus.r.fire()){
				when(io.cache_bus.r.resp === "b11".U){
					reg_cache_wdata(63:0) := io.cache_bus.r.rdata
					reg_w_addr		:= reg_w_addr + 8.U
				}
				when(io.cache_bus.r.resp === "b01".U){
					when(reg_is_w){
						//----cpu--
						//reg_rvalid		:= false.B 
						//reg_wready		:= false.B
						reg_cache_wdata     := (cache_wdata & cache_mask) | (Cat(io.cache_bus.r.rdata,reg_cache_wdata(63,0)) & ~cache_mask)
					}.otherwise{
						//----cpu---
						reg_rvalid 			:= true.B
						//reg_wready		:= false.B
						reg_cache_wdata		:= Cat(io.cache_bus.r.rdata,reg_cache_wdata(63,0))
					}
					//----cache---
					reg_cache_wstrb		:="hffff".U
					reg_cache_write		:= true.B
					//reg_chosen_tag,reg_index
					
					//----bus---
					reg_w_valid			:= false.B
					reg_r_ready			:= false.B 
					reg_cache_state		:= write_cache
				}
			}
		}
		is(write_cache){
			//------cpu---
			reg_rvalid				:= false.B
			reg_wready				:= true.B 
			//-----cache-----
			reg_cache_write			:= false.B
			//-----bus
			//reg_w_valid
			//reg_r_ready
			reg_cache_state 		:= cache_idle
		}
		is(write_bus_read_bus_write_cache){
			when(io.cache_bus.r.resp === "b11".U){
				reg_w_addr		:= reg_w_addr + 8.U
				reg_w_data		:= Mux(LRU(1),rdata2(127,64),rdata1(127,64))
			}
			when(io.cache_bus.r.resp === "b10".U){
				reg_w_addr(63,4)		:= Cat(reg_tag,reg_index)
				reg_w_cmd					:= "b10".U
				//reg_w_data
				reg_w_wstrb 				:= 0.U
				reg_w_size					:= 1.U
				reg_w_valid					:= true.B
				reg_r_ready 				:= true.B
				reg_cache_state 			:= read_bus_write_cache
				reg_cache_wstrb				:= cache_wstrb //Provide convenience for cache_mask
			}
		}
	}

//---------------------------Out------------------------------
	io.cpu_in.ready			:= reg_wready 
	io.cpu_out.rdata 		:= reg_rdata 
	io.cpu_out.valid 		:= reg_rvalid 

	io.cache_bus.w.addr		:= reg_w_addr 
	io.cache_bus.w.cmd 		:= reg_w_cmd 
	io.cache_bus.w.size 	:= reg_w_size 
	io.cache_bus.w.data 	:= reg_w_data 
	io.cache_bus.w.wstrb 	:= reg_w_wstrb 
	io.cache_bus.w.valid 	:= reg_w_valid 

	io.cache_bus.r.ready 	:= reg_r_ready
}
