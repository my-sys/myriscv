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
			val next_pc 		= Input(UInt(AddrLen.W))
			val valid_next_pc 	= Input(Bool())
			
			val csr_addr 		= Input(UInt(12.W))
			val csr_data 		= Input(UInt(64.W))
			val w_csr_en		= Input(Bool())
			val mtvec			= Input(UInt(64.W))
			val mepc 			= Input(UInt(64.W))
			val mstatus 		= Input(UInt(64.W))
			val mie 			= Input(UInt(64.W))

			val is_mret			= Input(Bool())
			// val is_fence		= Input(Bool())
			// val is_fence_i		= Input(Bool())

			val time_irq		= Input(Bool())
			val soft_irq 		= Input(Bool())
			val mtval 			= Input(UInt(64.W))
			val exception		= Input(UInt(5.W))
			val is_exception	= Input(Bool())			
		}
		
		val bus = new Bundle{
			val valid = Output(Bool())
			val bits = new Bundle{
				val addr    = Output(UInt(64.W))
				val rdata 	= Input(UInt(64.W))
				val wdata 	= Output(UInt(64.W))
				val wstrb 	= Output(UInt(8.W))
				val is_w 	= Output(Bool())
				val size 	= Output(UInt(2.W))			
			}
			val ready = Input(Bool())
			def fire: Bool = valid & ready
		}
		val out = new Bundle{
			val rs_addr         = Output(UInt(RegAddrLen.W))
			val result_data     = Output(UInt(RegDataLen.W))
			val w_rs_en         = Output(Bool())

			val stall 			= Output(Bool())
			
			val csr_addr 		= Output(UInt(12.W))
			val csr_data 		= Output(UInt(64.W))
			val w_csr_en		= Output(Bool())

			val time_irq		= Output(Bool())
			val soft_irq 		= Output(Bool())
			val mtval 			= Output(UInt(64.W))
			val exception		= Output(UInt(5.W))
			val is_exception	= Output(Bool())
			val pc 				= Output(UInt(64.W))
			val next_pc			= Output(UInt(64.W))
			val commit 			= Output(Bool())

			val flush 			= Output(Bool())
			val flush_pc		= Output(UInt(64.W))
		}
	})
	// 本级存在的必要性，execute 计算内存地址，wb阶段进行读写。往寄存器写的也需要流到这一级的原因是，指令之间要按顺序执行不能存在越位。
	val reg_stall				= RegInit(false.B)
	val reg_flush 				= RegInit(false.B)
	
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
	val reg_commit 				= RegInit(false.B)
	
	val reg_exuType				= RegInit(0.U(ExuTypeLen.W))

	when(reg_flush){
		reg_exuType := 0.U
	}.otherwise{
		reg_exuType					:= Mux(reg_stall,reg_exuType,io.in.exuType)
	}
	
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
	
//
	//val mem_data_result		= MuxLookup(io.in.exuType,0.U(64.W),List(
	val mem_data_result		= MuxLookup(reg_exuType,0.U(64.W),List(
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
	
	// move data to the appropriate position
	val mem_w_data 		= rs2_data << Cat(io.in.mem_addr(2,0),0.U(3.W)) 
	
	val test_is_peripheral = RegInit(false.B)
	
	val is_commit 		= io.in.exuType =/= ALUType.alu_none
	switch(reg_ls_state){
		is(ls_idle){
			when(reg_flush){
				reg_commit		:= false.B
				test_is_peripheral := false.B
				reg_w_rs_en 	:= false.B
				reg_ls_state	:= ls_idle	
			}.elsewhen(io.in.mem_avalid){
				reg_ls_state	:= ls_busy
				reg_commit 		:= false.B
				test_is_peripheral := Mux(io.in.mem_addr(63,31) === 0.U,true.B,false.B)
				reg_stall 		:= true.B
				reg_bus_addr	:= io.in.mem_addr
				reg_bus_wdata	:= mem_w_data
				reg_bus_wstrb	:= mem_wstrb
				reg_bus_is_w	:= io.in.w_mem_en
				reg_bus_valid	:= true.B
				reg_bus_size	:= io.in.exuType(4,3)

				reg_rs_addr		:= io.in.rs_addr
				reg_result_data := 0.U
				reg_w_rs_en		:= false.B
				
			}.otherwise{
				reg_commit		:= Mux(is_commit,true.B, false.B)
				test_is_peripheral := false.B
				reg_rs_addr 	:= io.in.rs_addr
				reg_result_data	:= io.in.result_data
				reg_w_rs_en 	:= io.in.w_rs_en
				reg_ls_state	:= ls_idle	
			}
		}
		is(ls_busy){
			when(io.bus.fire){
				reg_ls_state	:= ls_idle
				reg_stall		:= false.B
				reg_commit 		:= true.B
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
	val reg_csr_addr 	= RegInit(0.U(64.W))
	val reg_csr_data 	= RegInit(0.U(64.W))
	val reg_w_csr_en 	= RegInit(false.B)
	reg_csr_addr		:= Mux(reg_stall,reg_csr_addr,Mux(io.in.is_mret,CSRAddrType.mstatus,io.in.csr_addr))
	reg_csr_data		:= Mux(reg_stall,reg_csr_data,Mux(io.in.is_mret,(io.in.mstatus & "hffff_ffff_ffff_ff77".U)|(Mux(io.in.mstatus(7),"h88".U,"h80".U)),io.in.csr_data))
	reg_w_csr_en		:= Mux(reg_stall,reg_w_csr_en,Mux(io.in.is_mret,true.B,io.in.w_csr_en))
	when(reg_flush){
		reg_w_csr_en	:= false.B
	}.otherwise{
		reg_w_csr_en		:= Mux(reg_stall,reg_w_csr_en,Mux(io.in.is_mret,true.B,io.in.w_csr_en))
	}
//----------------------------------- handle exception-----------------------------
	val is_time_irq 	= io.in.mstatus(3) & io.in.mie(7) & io.in.time_irq
	val is_soft_irq 	= io.in.mstatus(3) & io.in.mie(3) & io.in.soft_irq
	val is_irq 			= is_time_irq | is_soft_irq
	
	val reg_flush_pc	= RegInit(0.U(64.W))
	val temp_except 	= io.in.is_exception | is_time_irq | is_soft_irq
	val reg_time_irq 	= RegInit(false.B)
	val reg_soft_irq 	= RegInit(false.B)
	// 中断的处理有些问题
	when(reg_stall){
		when(io.bus.fire){
			reg_flush	 := Mux(is_irq,true.B,false.B)
			reg_flush_pc := Mux(is_irq,Cat(io.in.mtvec(63,2),0.U(2.W)),0.U)
			reg_time_irq := is_time_irq
			reg_soft_irq := is_soft_irq
		}.otherwise{
			reg_flush	 := false.B 
			reg_time_irq := false.B 
			reg_soft_irq := false.B 
		}
	}.otherwise{
		when(reg_flush){
			reg_flush	:= false.B
			reg_time_irq := false.B 
			reg_soft_irq := false.B 
		}.elsewhen(!io.in.mem_avalid & is_commit){
			reg_flush	:= Mux(temp_except | io.in.is_mret,true.B,false.B)
			reg_flush_pc := Mux(temp_except,Cat(io.in.mtvec(63,2),0.U(2.W)),Mux(io.in.is_mret,io.in.mepc,0.U))
			reg_time_irq := is_time_irq
			reg_soft_irq := is_soft_irq
		}.otherwise{
			reg_flush	:= false.B
			reg_time_irq := false.B 
			reg_soft_irq := false.B 
		}
	}
	
	val reg_mtval 		= RegInit(0.U(64.W))
	val reg_exception 	= RegInit(0.U(5.W))
	val reg_is_exception = RegInit(false.B)
	

	when(reg_flush){
		reg_mtval 			:= 0.U
		reg_exception		:= 0.U
		reg_is_exception	:= 0.U
	}.otherwise{
		reg_mtval 			:= Mux(reg_stall,reg_mtval,io.in.mtval)
		reg_exception		:= Mux(reg_stall,reg_exception,io.in.exception)
		reg_is_exception	:= Mux(reg_stall,reg_is_exception,io.in.is_exception)
	}
	
	val reg_inst 			= RegInit(0.U(InstLen.W))
	val reg_pc 				= RegInit(0.U(AddrLen.W))
	val reg_next_pc 		= RegInit(0.U(64.W))
	reg_next_pc				:= Mux(reg_stall,reg_next_pc,Mux(io.in.valid_next_pc,io.in.next_pc,io.in.pc + 4.U))
	reg_pc 					:= Mux(reg_stall,reg_pc,io.in.pc)
	reg_inst 				:= Mux(reg_stall,reg_inst,io.in.inst)
	when(reg_flush){
		reg_next_pc				:= 0.U
		reg_pc 					:= 0.U
		reg_inst 				:= 0.U
	}.otherwise{
		reg_next_pc				:= Mux(reg_stall,reg_next_pc,Mux(io.in.valid_next_pc,io.in.next_pc,io.in.pc + 4.U))
		reg_pc 					:= Mux(reg_stall,reg_pc,io.in.pc)
		reg_inst 				:= Mux(reg_stall,reg_inst,io.in.inst)
	}
	
//-------------------------------- handle commit------------------------------------------------------------
	// val difftest_commit 		= RegInit(false.B)
	// val difftest_inst 			= RegInit(0.U(InstLen.W))
	// val difftest_pc 			= RegInit(0.U(AddrLen.W))
	// val inst_counter   			= RegInit(0.U(64.W))
	// val difftest_irq 			= RegInit(false.B)
	// val difftest_peripheral 	= RegInit(false.B)
	// difftest_commit			:= reg_commit
	// difftest_inst			:= reg_inst 
	// difftest_pc				:= reg_pc 
	// inst_counter			:= Mux(reg_commit,inst_counter + 1.U,inst_counter)
	// difftest_irq			:= reg_time_irq | reg_soft_irq
	// difftest_peripheral		:= test_is_peripheral
	// BoringUtils.addSource(inst_counter, "INST_COUNTER")
	// BoringUtils.addSource(difftest_commit, "DIFFTEST_COMMIT")
    // BoringUtils.addSource(difftest_pc,"DIFFTEST_PC")
    // BoringUtils.addSource(difftest_inst,"DIFFTEST_INST")
	// BoringUtils.addSource(difftest_irq,"DIFFTEST_IRQ")
	// BoringUtils.addSource(difftest_peripheral,"DIFFTEST_PERIPHERAL")
	
	io.out.rs_addr			:= Mux(reg_stall,0.U,reg_rs_addr)
	io.out.result_data		:= Mux(reg_stall,0.U,reg_result_data)
	io.out.w_rs_en			:= Mux(reg_stall,0.U,reg_w_rs_en)
	io.out.csr_addr 		:= reg_csr_addr
	io.out.csr_data			:= reg_csr_data
	io.out.w_csr_en			:= Mux(reg_stall,false.B,reg_w_csr_en)
	io.out.time_irq			:= Mux(reg_stall,false.B,reg_time_irq)
	io.out.soft_irq			:= Mux(reg_stall,false.B,reg_soft_irq)
	io.out.mtval			:= reg_mtval
	io.out.exception		:= reg_exception
	io.out.is_exception		:= reg_is_exception
	io.out.pc 				:= reg_pc 
	io.out.commit 			:= reg_commit
	io.out.flush			:= Mux(reg_stall,false.B,reg_flush)
	io.out.flush_pc			:= reg_flush_pc
	io.out.next_pc			:= reg_next_pc
	
	io.bus.bits.wdata 		:= reg_bus_wdata
	io.bus.bits.addr 		:= reg_bus_addr
	io.bus.bits.is_w		:= reg_bus_is_w
	io.bus.bits.wstrb 		:= reg_bus_wstrb
	io.bus.valid 			:= reg_bus_valid
	io.bus.bits.size 		:= reg_bus_size
	
	io.out.stall 			:= reg_stall 
}