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

	// It is ok that letting the ready always 1  
	io.cpu_in.ready = 1.U 
	val Tag 		= io.cpu_in.addr(63,10)
	val Index 		= io.cpu_in.addr(9,4)
	val Offset 		= io.cpu_in.addr(3,0) 
	val wdata 		= io.cpu_in.wdata 
	val wstrb 		= io.cpu_in.wstrb 

	val sram1 		= Module(new S011HD1P_X32Y2D128_BW) // 存放数据
	val sram2 		= Module(new S011HD1P_X32Y2D128_BW) // 存放Tag， 以及控制位
	val sram3 		= Module(new S011HD1P_X32Y2D128_BW) // 存放数据
	val sram4 		= Module(new S011HD1P_X32Y2D128_BW) // 存放Tag，以及控制位

//------------This section has some problems
	sram1.WEN 		:= ~((choose_group === 0.U)&(reg_Cache_wvalid)) 
	sram1.CEN 		:= false.B // // 低有效
	sram1.BWEN 		:= cache_mask 
	sram1.A 		:= Mux(reg_state === cache_read,index,reg_index)

	//data we save is 128 , but the bus width is 64, we should do something
	sram1.D 		:= Mux(reg_offset(3),Cat(wdata,0.U(64.W)),Cat(0.U(64.W),wdata))

	// when to get rdata?
	rdata1 			:= Mux(reg_offset(3),sram1.Q(127,64),sram1.Q(63,0))
//------------
	sram1.WEN 		:= 
	sram1.CEN 		:= false.B 
	sram1.BWEN 		:=   
	
	// when read,index 
	// when write, 
	sram1.A 		:= 
	// 
	rdata1 			:= Mux(reg_offset(3),sram1.Q(127,64),sram1.Q(63,0))

	val cache_idle :: cache_read :: cache_write :: cache_busy_read :: cache_busy_read1 :: cache_busy_write :: cache_busy_write1:: Nil = Enum(7)
	val reg_cache_state 	= RegInit(cache_read)
	
	val reg_tag   = RegInit()
	val reg_index = RegInit()

	val hit_1	  = (reg_tag === tag_1)
	val hit_2	  = (reg_tag === tag_2) 
	val tag_valid_1	  = 
	val tag_valid_2	  = 
	val tag_dirty_1   = 
	val tag_dirty_2   = 

	val chosen_tag	  = RegInit(0.U(1.w))
	val LRU 		  = reg_lru(reg_index)

//              LRU                  
// 1 bit LRU 
	val reg_lru = RegInit(Vec(64,UInt(2.W)))
	//0 <--------> 63
	for(i <- 0 until 64){
		when((i === reg_index)& ())
	}

//.............LRU.....................

	val reg_rdata 		= RegInit(0.U(64.W))
	val reg_wdata 		= RegInit(0.U(128.W))
	val reg_cache_wstrb = RegInit(0.U(16.W))
	val reg_rvalid 		= RegInit(false.B) 
	val reg_cache_write = RegInit(false.B)
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
	switch(reg_cache_state){
		is(cache_idle){
			when(io.cpu_in.fire()){
				reg_cache_state := Mux(io.cpu_in.is_w,cache_write,cache_read)
				reg_tag 		:= 
				reg_index 		:= 
				reg_offset 		:= 
				reg_wdata 		:= 
            // cache--- bus---//
				reg_w_addr		:= 
				//reg_w_cmd		:= 
				//reg_w_size	:=
				reg_w_data 		:= 
				reg_w_wstrb		:= 
			}.otherwise{
				reg_cache_state := cache_idle
			}
		}
		//Only after getting the tag from Cache can we know whether the rdata is valid
		is(cache_read){
			when(hit_1){
				chosen_tag		:= 0.U
				when(tag_valid_1){
					reg_rvalid		:= true.B 
					reg_data		:= rdata1
					reg_cache_state	:= cache_idle
				}.otherwise{
					// want get data from main memory ,128 bits data
					reg_w_addr		:= reg_w_addr &("hffff_ffff_ffff_fff8".U)
					reg_w_cmd		:= "b10".U
					reg_w_size		:= 1.U 
					reg_w_valid 	:= true.B 
					//reg_w_data
					reg_w_wstrb		:= 0.U
					reg_r_ready		:= true.B 

					reg_data		:= reg_data
					reg_cache_state := cache_busy_read
				}
			}.elsewhen(hit_2){
				chosen_tag		:= 1.U
				when(tag_valid_2){ 
					reg_rvalid 		:= true.B
					reg_data		:= rdata2
					reg_cache_state	:= cache_idle
				}.otherwise{
					// want get data from main memory ,128 bits data
					reg_w_addr		:= reg_w_addr &("hffff_ffff_ffff_fff8".U)
					reg_w_cmd		:= "b10".U
					reg_w_size		:= 1.U 
					reg_w_valid 	:= true.B 
					//reg_w_data
					reg_w_wstrb		:= 0.U

					reg_r_ready 	:= true.B

					reg_data		:= reg_data 
					reg_cache_state := cache_busy_read
				}
			}.otherwise{
				when(tag_valid_1 & tag_valid_2){
					chosen_tag 				:= LRU(1)
					//write to main memory,and read from main memory, write to cache
					reg_w_addr(63,4) 		:= Cat(Mux(LRU(1),tag_1,tag_2),reg_index)
					reg_w_addr(3,0)			:= 0.U
					reg_w_cmd				:= "b11".U 
					reg_w_size 				:= 1.U 
					reg_w_valid 			:= true.B 
					reg_w_wstrb 			:= "hff".U

					reg_r_ready 			:= true.B 
					
				}.otherwise{
					chosen_tag 		:= Mux(!tag_valid_1,0.U,1.U)
					//read from main memory,and then write to cache
					// to bus 
					reg_w_addr		:= reg_w_addr &("hffff_ffff_ffff_fff8".U)
					reg_w_cmd		:= "b10".U
					reg_w_size		:= 1.U 
					reg_w_valid 	:= true.B 
					//reg_w_data
					reg_w_wstrb		:= 0.U

					reg_r_ready		:= true.B

					reg_data 		:= reg_data
					reg_cache_state := cache_busy_read
				}


				//0 is often use , try not to replace it
				// LRU 00 ->    tag1 
				// LRU 01 ->    tag1 
				// LRU 10 ->    tag2 
				// LRU 11 ->    tag2 
				// want get data from main memory ,128 bits data


			}
			
		}
		is(cache_busy_read){
			when(io.cache_bus.r.fire()){
				when(io.cache_bus.r.resp === "b11".U){reg_wdata(63:0) := io.cache_bus.r.rdata}
				when(io.cache_bus.r.resp === "b01".U){

					//write to cache 
					reg_wdata(127,64) 	:= io.cache_bus.r.rdata
					reg_cache_write		:= true.B
					reg_cache_wstrb		:= "hffff".U
					reg_r_ready 		:= false.B 

					reg_data 			:= Mux(reg_offset(3),io.cache_bus.r.rdata,reg_wdata(63,0))
					reg_cache_state 	:= cache_idle 
				}
			}
		}
		is(cache_write){
			when(hit_1){
				chosen_tag 		:= 0.U 
				when(tag_valid_1){
					reg_wdata(127,64)  	:= Mux(reg_offset(3),reg_wdata,0.U)
					reg_wdata(63,0)		:= Mux(reg_offset(3),0.U,reg_wdata)
					reg_cache_wstrb		:= Mux(reg_offset(3),"hff00".U,"h00ff".U)
					reg_cache_write 	:= true.B

					// Is it OK? Maybe it is wrong
					reg_cache_state 	:= cache_idle 
				}.otherwise{
					//get the data from main memory,then write to the cache 
					reg_w_addr 			:= reg_w_addr &("hffff_ffff_ffff_fff8".U)
					reg_w_cmd			:= "b10".U
					reg_w_size			:= 1.U
					reg_w_valid 		:= true.B
					//reg_w_data		
					reg_w_wstrb 		:= 0.U 
					reg_r_ready			:= true.B 

				}

			}.elsewhen(hit_2){
				chosen_tag		:= 1.U 
				when(tag_valid_2){

				}.otherwise{

				}

			}.otherwise{
				when(tag_valid_1 & tag_valid_2){
					//write data to main memory,then write to cache
				}.otherwise{
					//get data from memory,then write to cache
					chosen_tag	:= Mux(!tag_valid_1,0.U,1.U)
					reg_wdata(127,64)  	:= Mux(reg_offset(3),reg_wdata,0.U)
					reg_wdata(63,0)		:= Mux(reg_offset(3),0.U,reg_wdata)
					reg_cache_wstrb		:= Mux(reg_offset(3),"hff00".U,"h00ff".U)
					reg_cache_write 	:= true.B

					// Is it OK? Maybe it is wrong
					reg_cache_state 	:= cache_idle
				}
			}
		}
	}
}
