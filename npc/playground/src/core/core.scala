import chisel3._
import chisel3.util._ 

class Core extends Module{
    val io = IO(new Bundle{
        val in = new Bundle{
            val rdata     = Input(UInt(64.W))
            //val inst     = Input(UInt(32.W))
            //val pc_addr      
            //val data_addr    = Input(UInt(64.W))       
        }

        val out = new Bundle{
            val waddr    = Output(UInt(64.W))
            val wdata    = Output(UInt(64.W))

            val raddr    = Output(UInt(64.W))
            val wen      = Output(Bool())
            val wstrb    = Output(UInt(8.W))
            //val pc       = Output(UInt(64.W))
        }
    })

	val i_cache 		= Module(new Cache)
	val d_cache 		= Module(new Cache)

    val fetch 			= Module(new Fetch)
    val execute 		= Module(new Exu)
    val decode 			= Module(new Decode)
	val write_back		= Module(new WriteBack)
//cache 与 CPU 交互
    // fetch 
	fetch.io.in.inst 			:= i_cache.io.cpu_out.rdata 
	fetch.io.in.valid 			:= i_cache.io.cpu_out.rvalid 
	i_cache.io.cpu_in.addr 		:= fetch.io.out.pc 
	i_cache.io.cpu_in.avalid		:= fetch.io.out.valid
	i_cache.io.cpu_in.wdata 		:= 0.U 
	i_cache.io.cpu_in.is_w 		:= false.B
	i_cache.io.cpu_in.wstrb		:= 0.U

	write_back.io.in.mem_data 		:= d_cache.io.cpu_out.rdata
	write_back.io.in.mem_valid 	:= d_cache.io.cpu_out.rvalid
	write_back.io.in.w_ok 			:= d_cache.io.cpu_out.w_ok

	d_cache.io.cpu_in.addr			:= write_back.io.out.mem_addr
	d_cache.io.cpu_in.wdata		:= write_back.io.out.mem_wdata
	d_cache.io.cpu_in.is_w			:= write_back.io.out.mem_wvalid
	d_cache.io.cpu_in.avalid		:= write_back.io.out.mem_avalid
	d_cache.io.cpu_in.wstrb 		:= write_back.io.out.wstrb

//cache与 交互  与访存交互的部分设计。inst和mem，谁访问内存，读取的数据归谁，如何知道读取的数据归自己。
	io.out.waddr 				:= d_cache.io.bus_out.waddr 
	io.out.wdata 				:= d_cache.io.bus_out.wdata
	io.out.wen 					:= d_cache.io.bus_out.wvalid 
	io.out.wstrb 				:= d_cache.io.bus_out.wstrb 

	val is_read_mem 			= d_cache.io.bus_out.avalid & (~d_cache.io.bus_out.wvalid)
	io.out.raddr 				:= Mux(is_read_mem_or_inst,d_cache.io.bus_out.raddr,i_cache.io.bus_out.raddr)
	val is_read_inst 			= (~is_read_mem) & i_cache.io.bus_out.avalid 

// 故意打一拍，避免组合逻辑环路。 在完成流水线后，bus和cache都需要修改，先改cache,再该bus 
	val tem_reg_rdata 			= RegInit(0.U(64.W))
	tem_reg_rdata				:= io.in.data

	val tem_reg_is_read_inst	= RegInit(false.B)
	val tem_reg_is_read_mem 	= RegInit(false.B)

	tem_reg_is_read_inst		:= is_read_inst
	tem_reg_is_read_mem			:= is_read_mem

    i_cache.io.bus_in.data			:= tem_reg_rdata 
	i_cache.io.bus_in.valid 		:= tem_reg_is_read_inst

	d_cache.io.bus_in.data 		:= tem_reg_rdata 
	d_cache.io.bus_in.valid 		:= tem_reg_is_read_mem

//------------------------------------------------------------------------------ 

	// decode 
    decode.io.in.inst           := fetch.io.out.inst 
    decode.io.in.pc             := fetch.io.out.pc
	decode.io.in.stall 			:= write_back.io.out.stall 
    // execute 
    execute.io.in.opType        := decode.io.out.opType
    execute.io.in.exuType       := decode.io.out.exuType
    execute.io.in.rs1_data      := decode.io.out.rs1_data
    execute.io.in.rs2_data      := decode.io.out.rs2_data
    execute.io.in.imm_data      := decode.io.out.imm_data
    execute.io.in.pc            := decode.io.out.pc
    execute.io.in.rs_addr       := decode.io.out.rs_addr
	execute.io.in.stall 		:= write_back.io.out.stall 

    fetch.io.in.next_pc         := execute.io.out.next_pc
    fetch.io.in.valid_next_pc   := execute.io.out.valid_next_pc
	fetch.io.in.stall 			:= write_back.io.out.stall 
    // write-back

    decode.io.in.rs_addr        := write_back.io.out.rs_addr
    decode.io.in.result_data    := write_back.io.out.result_data
    decode.io.in.w_rs_en        := write_back.io.out.w_rs_en


	write_back.io.in.rs_addr		:= execute.io.out.rs_addr
	write_back.io.in.result_data	:= execute.io.out.rs_data
	write_back.io.in.w_rs_en		:= execute.io.out.w_rs_en
	write_back.io.in.opType			:= execute.io.out.opType
	write_back.io.in.exuType		:= execute.io.out.exuType
	write_back.io.in.rs2_data		:= execute.io.out.rs2_data
	write_back.io.in.mem_addr		:= execute.io.out.mem_addr
	write_back.io.in.mem_avalid		:= execute.io.out.mem_avalid
	write_back.io.in.w_mem_en		:= execute.io.out.w_mem_en

    // 临时
    //io.out.waddr                := 0.U 
    //io.out.wdata                := 0.U
    //io.out.wen                  := false.B 
    //io.out.wstrb                := 1.U
}