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
		}
		
		val bus = Decoupled(new Bundle{
			val addr    = Output(UInt(64.W))
			val rdata 	= Input(UInt(64.W))
			val wdata 	= Output(UInt(64.W))
			val wstrb 	= Output(UInt(8.W))
			val is_w 	= Output(Bool())
			val size 	= Output(UInt(2.W))
		})
		
		val out = new Bundle{
			val rs_addr         = Output(UInt(RegAddrLen.W))
			val result_data     = Output(UInt(RegDataLen.W))
			val w_rs_en         = Output(Bool())

			val stall 			= Output(Bool())
		}
	})
	// 本级存在的必要性，execute 计算内存地址，wb阶段进行读写。往寄存器写的也需要流到这一级的原因是，指令之间要按顺序执行不能存在越位。

	val reg_stall				= RegInit(false.B)
	
	val reg_bus_addr 			= RegInit(0.U(64.W))
	val reg_bus_rdata 			= RegInit(0.U(64.W))
	val reg_bus_wdata 			= RegInit(0.U(64.W))
	val reg_bus_wstrb 			= RegInit(0.U(8.W))
	val reg_bus_is_w 			= RegInit(false.B)
	val reg_bus_size 			= RegInit(3.U(2.W)) // 2^3 = 8
	val reg_bus_valid 			= RegInit(false.B)
	
	val reg_rs_addr				= RegInit(0.U(RegAddrLen.W))
	val reg_result_data 		= RegInit(0.U(RegDataLen.W))
	val reg_w_rs_en 			= RegInit(false.B)
//----------------------------------------------------------------------------------------
	val mem_r_data				= MuxLookup(reg_bus_addr(2,0),io.bus.bits.rdata,List(
		"b000".U 			-> io.bus.bits.rdata,
		"b001".U 			-> io.bus.bits.rdata(63,8),
		"b010".U 			-> io.bus.bits.rdata(63,16),
		"b011".U 			-> io.bus.bits.rdata(63,24),
		"b100".U 			-> io.bus.bits.rdata(63,32),
		"b101".U 			-> io.bus.bits.rdata(63,40),
		"b110".U 			-> io.bus.bits.rdata(63,48),
		"b111".U 			-> io.bus.bits.rdata(63,56)
	))

	val mem_data_result		= MuxLookup(io.in.exuType,0.U(64.W),List(
		LSUType.lsu_ld 		-> mem_r_data,
		LSUType.lsu_lb 		-> Cat(Fill(56,mem_r_data(7)),	mem_r_data(7,0)),
		LSUType.lsu_lbu 	-> Cat(Fill(56,0.U(1.W)),		mem_r_data(7,0)),
		LSUType.lsu_lh		-> Cat(Fill(48,mem_r_data(15)), mem_r_data(15,0)),
		LSUType.lsu_lhu 	-> Cat(Fill(48,0.U(1.W)),		mem_r_data(15,0)),
		LSUType.lsu_lw 		-> Cat(Fill(32,mem_r_data(31)),	mem_r_data(31,0)),
		LSUType.lsu_lwu 	-> Cat(Fill(32,0.U(1.W)),		mem_r_data(31,0))
	))		

	// 写没有处理好，缺少许多种情况
	val mem_wstrb			= MuxLookup(io.in.exuType,0.U(64.W),List(
		LSUType.lsu_sb 		-> (("b0000_0001".U) << io.in.mem_addr(2,0)),
		LSUType.lsu_sd		-> (("b1111_1111".U)<< io.in.mem_addr(2,0)),
		LSUType.lsu_sh 		-> (("b0000_0011".U)<< io.in.mem_addr(2,0)),
		LSUType.lsu_sw 		-> (("b0000_1111".U)<< io.in.mem_addr(2,0))
	))
	
	// 根据状态机,进行改变值
	val ls_idle :: ls_busy :: Nil 	= Enum(2)
	val reg_ls_state 				= RegInit(ls_idle)
	
	// 处理数据相关问题
	val rs2_data		= Mux((io.in.rs2_addr === reg_rs_addr)&reg_w_rs_en,reg_result_data,io.in.rs2_data)
	
	switch(reg_ls_state){
		is(ls_idle){
			when(io.in.mem_avalid){
				reg_ls_state	:= ls_busy
				reg_stall 		:= true.B 
				reg_bus_addr	:= io.in.mem_addr
				reg_bus_wdata	:= rs2_data
				reg_bus_wstrb	:= mem_wstrb
				reg_bus_is_w	:= io.in.w_mem_en
				reg_bus_valid	:= true.B
				reg_bus_size	:= io.in.exuType(4,3)
				
				reg_rs_addr		:= io.in.rs_addr
				reg_result_data := 0.U
				reg_w_rs_en		:= false.B 
			}.otherwise{
				reg_rs_addr		:= io.in.rs_addr
				reg_result_data	:= io.in.result_data
				reg_w_rs_en 	:= io.in.w_rs_en
				reg_ls_state	:= ls_idle			
			}
		}
		is(ls_busy){
			when(io.bus.fire){
				reg_ls_state	:= ls_idle
				reg_stall		:= true.B
				//reg_bus_addr
				//reg_bus_wdata
				//reg_bus_wstrb
				reg_bus_is_w	:= false.B
				reg_bus_valid	:= false.B 
				//reg_rs_addr
				reg_result_data	:= mem_data_result
				reg_w_rs_en		:= !reg_bus_is_w
			}
		}
	}
	
	val difftest_commit 	= RegInit(false.B)
	val reg_inst 			= RegInit(0.U(InstLen.W))
	val reg_pc 				= RegInit(0.U(AddrLen.W))
	reg_pc 					:= Mux(reg_stall,reg_pc,io.in.pc)
	reg_inst 				:= Mux(reg_stall,reg_inst,io.in.inst)
	val difftest_inst 			= RegInit(0.U(InstLen.W))
	val difftest_pc 			= RegInit(0.U(AddrLen.W))
	val reg_exuType				= RegInit(0.U(ExuTypeLen.W))
	reg_exuType					:= Mux(reg_stall,reg_exuType,io.in.exuType)

	when(reg_stall | (reg_exuType === ALUType.alu_none)){
		difftest_commit := false.B
	}.otherwise{
		difftest_inst 	:= reg_inst
		difftest_pc		:= reg_pc
		difftest_commit := true.B
	}
	BoringUtils.addSource(difftest_commit, "DIFFTEST_COMMIT")
    BoringUtils.addSource(difftest_pc,"DIFFTEST_PC")
    BoringUtils.addSource(difftest_inst,"DIFFTEST_INST")
	
	io.out.rs_addr			:= Mux(reg_stall,0.U,reg_rs_addr)
	io.out.result_data		:= Mux(reg_stall,0.U,reg_result_data)
	io.out.w_rs_en			:= Mux(reg_stall,0.U,reg_w_rs_en)
	
	io.bus.bits.wdata 		:= reg_bus_wdata
	io.bus.bits.addr 		:= reg_bus_addr
	io.bus.bits.is_w		:= reg_bus_is_w
	io.bus.bits.wstrb 		:= reg_bus_wstrb
	io.bus.valid 			:= reg_bus_valid
	io.bus.bits.size 		:= reg_bus_size
	
	io.out.stall 			:= reg_stall 
}