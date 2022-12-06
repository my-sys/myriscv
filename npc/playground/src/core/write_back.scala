import chisel3._
import chisel3.util._ 
import chisel3.util.experimental.BoringUtils
class WriteBack extends Module with CoreParameters{
    val io = IO(new Bundle{
        val in = new Bundle{
			// from execute
            val rs_addr         = Input(UInt(RegAddrLen.W))
            val result_data     = Input(UInt(RegDataLen.W))
            val w_rs_en         = Input(Bool())
			val opType			= Input(UInt(OpTypeLen.W))
			val exuType			= Input(UInt(ExuTypeLen.W))

			// from execute     
			val rs2_addr 		= Input(UInt(RegAddrLen.W))
			val rs2_data 		= Input(UInt(RegDataLen.W))
            val mem_addr        = Input(UInt(AddrLen.W))
			val mem_avalid 		= Input(Bool())
            val w_mem_en        = Input(Bool())
			val pc 				= Input(UInt(AddrLen.W))
			val inst 			= Input(UInt(InstLen.W))

			// from mem 
			val mem_data        = Input(UInt(RegDataLen.W))
			val mem_valid       = Input(Bool())				// A signal to say that data is valid 
			val w_ok 			= Input(Bool())				// A signal to say write is complete
        }
        val out = new Bundle{
            val rs_addr         = Output(UInt(RegAddrLen.W))
            val result_data     = Output(UInt(RegDataLen.W))
            val w_rs_en         = Output(Bool())

			val mem_wdata		= Output(UInt(64.W))
			val mem_wvalid 		= Output(Bool())
			val mem_addr 		= Output(UInt(AddrLen.W))
			val mem_avalid 		= Output(Bool())
			val mem_wstrb 		= Output(UInt(8.W))

			val stall 			= Output(Bool())           
        }

    })
	// 本级存在的必要性，execute 计算内存地址，wb阶段进行读写。往寄存器写的也需要流到这一级的原因是，指令之间要按顺序执行不能存在越位。
	
	val reg_stall 			= RegInit(false.B)
	val reg_mem_wdata		= RegInit(0.U(64.W))
	val reg_mem_wstrb		= RegInit(0.U(8.W))
	val reg_mem_wvalid		= RegInit(false.B)
	val reg_mem_addr		= RegInit(0.U(64.W))
	val reg_rs_addr 		= RegInit(0.U(RegAddrLen.W))
	val reg_result_data 	= RegInit(0.U(RegDataLen.W))
	val reg_w_rs_en 		= RegInit(false.B)

	val mem_data 			= MuxLookup(reg_mem_addr(2,0),io.in.mem_data,List(
		"b000".U 			-> io.in.mem_data,
		"b001".U 			-> io.in.mem_data(63,8),
		"b010".U 			-> io.in.mem_data(63,16),
		"b011".U 			-> io.in.mem_data(63,24),
		"b100".U 			-> io.in.mem_data(63,32),
		"b101".U 			-> io.in.mem_data(63,40),
		"b110".U 			-> io.in.mem_data(63,48),
		"b111".U 			-> io.in.mem_data(63,56)
	))
	val mem_data_result		= MuxLookup(io.in.exuType,0.U(64.W),List(
		LSUType.lsu_ld 		-> mem_data,
		LSUType.lsu_lb 		-> Cat(Fill(56,mem_data(7)),	mem_data(7,0)),
		LSUType.lsu_lbu 	-> Cat(Fill(56,0.U(1.W)),		mem_data(7,0)),
		LSUType.lsu_lh		-> Cat(Fill(48,mem_data(15)), 	mem_data(15,0)),
		LSUType.lsu_lhu 	-> Cat(Fill(48,0.U(1.W)),		mem_data(15,0)),
		LSUType.lsu_lw 		-> Cat(Fill(32,mem_data(31)),	mem_data(31,0)),
		LSUType.lsu_lwu 	-> Cat(Fill(32,0.U(1.W)),		mem_data(31,0))
	))

	val mem_wstrb			= MuxLookup(io.in.exuType,0.U(64.W),List(
		LSUType.lsu_sb 		-> "b0000_0001".U,
		LSUType.lsu_sd		-> "b1111_1111".U,
		LSUType.lsu_sh 		-> "b0000_0011".U,
		LSUType.lsu_sw 		-> "b0000_1111".U
	))

	// 根据状态机,进行改变值
	val ls_idle :: ls_busy :: Nil = Enum(2)
	val reg_mem_avalid			= RegInit(false.B)
	val reg_ls_state 		= RegInit(ls_idle) 

	val rs2_data 		= Mux((io.in.rs2_addr === reg_rs_addr)&reg_w_rs_en,reg_result_data,io.in.rs2_data)
	switch(reg_ls_state){
		is(ls_idle){
			when(io.in.mem_avalid){
				reg_ls_state 	:= ls_busy
				reg_stall 		:= true.B
				reg_mem_wdata	:= rs2_data
				reg_mem_wstrb	:= mem_wstrb
				reg_mem_wvalid	:= io.in.w_mem_en
				reg_mem_addr	:= io.in.mem_addr
				reg_mem_avalid  := true.B
			}
		}
		is(ls_busy){
			when(io.in.mem_valid | io.in.w_ok){
				reg_ls_state	:= ls_idle
				reg_stall 		:= false.B
				reg_mem_avalid  := false.B
				reg_mem_wvalid	:= false.B
			}
		}
	}

	val difftest_commit 		= RegInit(false.B)
	val reg_inst 				= RegInit(0.U(InstLen.W))
	val reg_pc 					= RegInit(0.U(AddrLen.W))
	reg_pc 						:= io.in.pc 
	reg_inst 					:= io.in.inst 
	val difftest_inst 			= RegInit(0.U(InstLen.W))
	val difftest_pc 			= RegInit(0.U(AddrLen.W))
	
	when(reg_stall & io.in.w_ok){
		difftest_inst 	:= reg_inst 
		difftest_pc		:= reg_pc
		difftest_commit := true.B
	}.elsewhen((!reg_stall) & reg_w_rs_en){
		difftest_inst 	:= reg_inst 
		difftest_pc		:= reg_pc		
		difftest_commit := true.B
	}.otherwise{
		difftest_commit := false.B
	}
	BoringUtils.addSource(difftest_commit, "DIFFTEST_COMMIT")
    BoringUtils.addSource(difftest_pc,"DIFFTEST_PC")
    BoringUtils.addSource(difftest_inst,"DIFFTEST_INST")

    // 暂时还没想好怎么使用这一级


	reg_rs_addr 				:= io.in.rs_addr
	reg_result_data				:= Mux(io.in.mem_valid, mem_data_result, io.in.result_data)
	reg_w_rs_en 				:= Mux(io.in.mem_valid, true.B,   			io.in.w_rs_en)

	io.out.rs_addr				:= reg_rs_addr
	io.out.result_data			:= reg_result_data
	io.out.w_rs_en				:= reg_w_rs_en

	io.out.mem_wdata			:= reg_mem_wdata
	io.out.mem_wvalid			:= reg_mem_wvalid
	io.out.mem_addr				:= reg_mem_addr
	io.out.mem_wstrb			:= reg_mem_wstrb
	io.out.mem_avalid			:= reg_mem_avalid

	io.out.stall				:= reg_stall
}