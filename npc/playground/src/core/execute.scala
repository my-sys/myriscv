import chisel3._ 
import chisel3.util._ 

class Exu extends Module with CoreParameters{
	val io = IO(new Bundle{
		val in = new Bundle{
			val opType   = Input(UInt(OpTypeLen.W))
			val exuType  = Input(UInt(ExuTypeLen.W))
			val rs1_addr = Input(UInt(RegAddrLen.W))
			val rs1_data = Input(UInt(RegDataLen.W))
			val rs2_addr = Input(UInt(RegAddrLen.W))
			val rs2_data = Input(UInt(RegDataLen.W))
			val imm_data = Input(UInt(ImmLen.W))
			val pc       = Input(UInt(AddrLen.W))
			val inst 	 = Input(UInt(InstLen.W))
			val rs_addr  = Input(UInt(RegAddrLen.W))

			val csr_addr = Input(UInt(12.W))
			val csr_data = Input(UInt(64.W))
			
			val wb_result_data 	= Input(UInt(RegDataLen.W))
			val wb_rs_addr 		= Input(UInt(RegAddrLen.W))
			val wb_w_rs_en		= Input(Bool())

			val wb_csr_addr		= Input(UInt(12.W))
			val wb_csr_data		= Input(UInt(64.W))
			val wb_w_csr_en		= Input(Bool())

			val stall 	 		= Input(Bool())
			val flush 			= Input(Bool())
		}
		
		val out = new Bundle{
			val rs_addr         = Output(UInt(RegAddrLen.W))
			val rs_data         = Output(UInt(RegDataLen.W))
			val w_rs_en         = Output(Bool())
			
			val opType			= Output(UInt(OpTypeLen.W))
			val exuType			= Output(UInt(ExuTypeLen.W))
			val pc 				= Output(UInt(AddrLen.W))
			val inst 			= Output(UInt(InstLen.W))
			
			val rs2_addr		= Output(UInt(RegAddrLen.W))
			val rs2_data 		= Output(UInt(RegDataLen.W))
			val mem_addr		= Output(UInt(AddrLen.W))
			val mem_avalid		= Output(Bool())
			val w_mem_en		= Output(Bool())

			val csr_addr		= Output(UInt(12.W))
			val csr_data		= Output(UInt(64.W))
			val w_csr_en		= Output(Bool())

			val mtval 			= Output(UInt(64.W))
			val exception		= Output(UInt(5.W))
			val is_exception	= Output(Bool())
			val is_mret			= Output(Bool())
			val is_fence 		= Output(Bool())
			val is_fence_i 		= Output(Bool())
			
			val next_pc         = Output(UInt(AddrLen.W))
			val valid_next_pc   = Output(Bool()) 
			val flush 			= Output(Bool())
			val stall 			= Output(Bool())
		}
	})
	
	val alu_exu = Module(new ALU_EXU())
	val lsu_exu = Module(new LSU_EXU())
	val mu_exu  = Module(new MU_EXU())
	val csr_exu = Module(new CSR_EXU())
	val abn_exu = Module(new ABN_EXU())
	
	val reg_valid = RegInit(0.U(5.W))
	val opType			= io.in.opType
	val exuType    		= io.in.exuType
	val stall 			= io.in.stall | (mu_exu.io.stall & reg_valid(3))
	
	val imm_data		= io.in.imm_data
	val pc         		= io.in.pc
	val inst 			= io.in.inst
	val rs_addr     	= io.in.rs_addr
	// 声明一些寄存器，暂存流水线中的数据，这是必须的。需要执行后的值，由小模块自己暂存，大模块只标记
	val  reg_rs_addr        = RegInit(0.U(64.W))
	val  reg_csr_addr 		= RegInit(0.U(12.W))
	
	val  reg_opType			= RegInit(0.U(OpTypeLen.W))
	val  reg_exuType		= RegInit(0.U(ExuTypeLen.W))
	val	 reg_pc 			= RegInit(0.U(AddrLen.W))
	val  reg_inst 			= RegInit(0.U(InstLen.W))
	
	// 跳转指令问题，冲刷流水线
	
	val reg_flush 			= alu_exu.io.next_pc_valid & reg_valid(0)
	// Choosing the function unit to execute
	val default_valid = "b00000".U
    val valid = MuxLookup(opType,default_valid,List(
        Op_type.op_alu     ->  "b00001".U,
        Op_type.op_lsu     ->  "b00010".U,
        Op_type.op_csr     ->  "b00100".U,
        Op_type.op_mu      ->  "b01000".U,
		Op_type.op_abn     ->  "b10000".U
    ))
	

	when(io.in.flush){
		reg_valid := 0.U
	}.elsewhen(stall){
		reg_valid := reg_valid
	}.otherwise{
		reg_valid := Mux(reg_flush,0.U,valid)
	}
	// when(!reg_flush){
	// 	reg_valid := Mux(stall,reg_valid,valid)
	// }.otherwise{
	// 	reg_valid := 0.U
	// }
	val reg_rs_data = MuxCase(0.U(64.W),Array(
		reg_valid(0) -> alu_exu.io.result_data,
		reg_valid(1) -> 0.U,
		reg_valid(2) -> csr_exu.io.rd_result,
		reg_valid(3) -> mu_exu.io.result_data
	))
	val reg_w_rs_en = MuxCase(false.B,Array(
		reg_valid(0) -> alu_exu.io.w_rs_en, // alu 
		reg_valid(1) -> false.B,//lsu 
		reg_valid(2) -> csr_exu.io.w_rs_en,//csr
		reg_valid(3) -> mu_exu.io.out_valid	// mu exu	
	))
	val reg_w_csr_en		= csr_exu.io.w_csr_en & reg_valid(2) 
	val reg_csr_data 		= csr_exu.io.csr_result
//  解决数据相关冲突 
	val rs1_data = Mux(io.in.rs1_addr === 0.U,0.U,Mux((reg_rs_addr === io.in.rs1_addr)&reg_w_rs_en,reg_rs_data,Mux((io.in.wb_rs_addr === io.in.rs1_addr)&io.in.wb_w_rs_en,io.in.wb_result_data,io.in.rs1_data)))
	val rs2_data = Mux(io.in.rs2_addr === 0.U,0.U,Mux((reg_rs_addr === io.in.rs2_addr)&reg_w_rs_en,reg_rs_data,Mux((io.in.wb_rs_addr === io.in.rs2_addr)&io.in.wb_w_rs_en,io.in.wb_result_data,io.in.rs2_data)))	
	val csr_data = Mux((reg_csr_addr === io.in.csr_addr)&reg_w_csr_en,reg_csr_data,Mux((io.in.wb_csr_addr === io.in.csr_addr)&io.in.wb_w_csr_en,io.in.wb_csr_data,io.in.csr_data))
	when(io.in.flush){
		reg_rs_addr				:= 0.U
		reg_csr_addr			:= 0.U
		reg_pc					:= 0.U
		reg_inst				:= 0.U
		reg_opType				:= 0.U
		reg_exuType				:= 0.U
	}.elsewhen(stall){
		reg_rs_addr				:= reg_rs_addr
		reg_csr_addr			:= reg_csr_addr
		reg_pc					:= reg_pc 
		reg_inst				:= reg_inst
		reg_opType				:= reg_opType
		reg_exuType				:= reg_exuType
		
	}.otherwise{
		reg_rs_addr				:= Mux(reg_flush,0.U,rs_addr)
		reg_csr_addr			:= Mux(reg_flush,0.U,io.in.csr_addr)
		reg_opType				:= Mux(reg_flush,Op_type.op_n,opType)
		reg_exuType				:= Mux(reg_flush,ALUType.alu_none,exuType) 
		reg_pc 					:= Mux(reg_flush,0.U,pc)
		reg_inst 				:= Mux(reg_flush,0.U,inst)
	}
	
	// when(!reg_flush){
	// 	reg_rs_addr				:= Mux(stall,reg_rs_addr,rs_addr)
	// 	reg_opType				:= Mux(stall,reg_opType,opType)
	// 	reg_exuType				:= Mux(stall,reg_exuType,exuType) 
	// 	reg_pc 					:= Mux(stall,reg_pc,pc)
	// 	reg_inst 				:= Mux(stall,reg_inst,inst)
	// }.otherwise{
	// 	reg_rs_addr				:= 0.U
	// 	reg_pc					:= 0.U 
	// 	reg_inst				:= 0.U
	// 	reg_opType				:= Op_type.op_n
	// 	reg_exuType				:= ALUType.alu_none
	// }
	
	val  reg_rs2_data 		= RegInit(0.U(RegDataLen.W))
	val  reg_rs2_addr 		= RegInit(0.U(RegAddrLen.W))

//对于stall，外部输入的stall，则寄存器保持原值。

//对于内部产生的reg_stall,在reg_stall未消失前，输出端为空气泡。
//reg_stall中不需要改变的值，保持原值。需要改变的值，进行变动。
	when(io.in.flush){
		reg_rs2_data	:= 0.U
		reg_rs2_addr	:= 0.U
	}.elsewhen(stall){
		reg_rs2_data	:= reg_rs2_data
		reg_rs2_addr	:= reg_rs2_addr
	}.otherwise{
		reg_rs2_data	:= Mux(reg_flush,0.U,rs2_data)
		reg_rs2_addr 	:= Mux(reg_flush,0.U,io.in.rs2_addr)
	}
	// when(!reg_flush){
	// 	reg_rs2_data			:= Mux(stall,reg_rs2_data,rs2_data)
	// 	reg_rs2_addr			:= Mux(stall,reg_rs2_addr,io.in.rs2_addr)
	// }.otherwise{
	// 	reg_rs2_data			:= 0.U 
	// 	reg_rs2_addr			:= 0.U
	// }
	
	
//---------------------------------LSU --------------------------------------
	lsu_exu.io.valid		:= valid(1) & (!reg_flush)
	lsu_exu.io.exuType		:= exuType
	lsu_exu.io.rs1_data		:= rs1_data
	lsu_exu.io.imm_data		:= imm_data
	lsu_exu.io.stall 		:= io.in.stall
	lsu_exu.io.in_flush 	:= io.in.flush

	val  reg_mem_addr 		= lsu_exu.io.address_result
	val  reg_mem_avalid		= lsu_exu.io.avalid & reg_valid(1)
	val  reg_w_mem_en 		= lsu_exu.io.w_mem_en & reg_valid(1)
//-------------------------------ALU-----------------------------------------
    alu_exu.io.valid 		:= valid(0) & (!reg_flush)
	alu_exu.io.exuType		:= exuType
	alu_exu.io.op_data1 	:= rs1_data 
    alu_exu.io.op_data2 	:= rs2_data
    alu_exu.io.op_imm   	:= imm_data
    alu_exu.io.op_pc    	:= pc
	alu_exu.io.stall 		:= io.in.stall
	alu_exu.io.in_flush		:= io.in.flush
	
	val reg_next_pc				= alu_exu.io.result_pc
	val reg_valid_next_pc		= alu_exu.io.next_pc_valid & reg_valid(0)
//-------------------------------MU EXU--------------------------------------
	mu_exu.io.in_valid 		:= valid(3) & (!reg_flush)
	mu_exu.io.exuType		:= exuType
	mu_exu.io.rs1_data		:= rs1_data
	mu_exu.io.rs2_data		:= rs2_data
	mu_exu.io.in_stall 		:= io.in.stall
	mu_exu.io.in_flush		:= io.in.flush
	
	val reg_stall 			= mu_exu.io.stall & reg_valid(3)
//------------------------------CSR EXU--------------------------------------
	csr_exu.io.valid 		:= valid(2) & (!reg_flush)
	csr_exu.io.stall		:= io.in.stall
	csr_exu.io.exuType		:= exuType
	csr_exu.io.csr_data		:= csr_data
	csr_exu.io.imm_data		:= imm_data
	csr_exu.io.rs1_data		:= rs1_data
	csr_exu.io.in_flush		:= io.in.flush

	//val reg_csr_data 		= csr_exu.io.csr_result
	
//------------------------------ABN EXU--------------------------------------
	abn_exu.io.valid 		:= valid(4) & (!reg_flush)
	abn_exu.io.exuType		:= exuType
	abn_exu.io.stall 		:= io.in.stall
	abn_exu.io.in_flush		:= io.in.flush

	val reg_exception		= abn_exu.io.exception
	val reg_is_exception	= abn_exu.io.is_exception & reg_valid(4)
	val reg_is_mret			= abn_exu.io.is_mret & reg_valid(4)
	val reg_is_fence		= abn_exu.io.is_fence & reg_valid(4)
	val reg_is_fence_i		= abn_exu.io.is_fence_i & reg_valid(4)

	io.out.rs_addr          := reg_rs_addr
	io.out.rs_data          := reg_rs_data
	io.out.w_rs_en          := Mux(stall,false.B,reg_w_rs_en) //reg_w_rs_en
	io.out.next_pc          := reg_next_pc
	io.out.valid_next_pc    := Mux(stall,false.B,reg_valid_next_pc & reg_valid(0))
	io.out.flush 			:= Mux(stall,false.B,reg_valid_next_pc & reg_valid(0))
	
	io.out.opType			:= Mux(stall,Op_type.op_n,reg_opType)
	io.out.exuType			:= Mux(stall,ALUType.alu_none,reg_exuType) 
	io.out.pc 				:= reg_pc
	io.out.inst 			:= reg_inst 
	io.out.rs2_data			:= reg_rs2_data
	io.out.rs2_addr 		:= reg_rs2_addr
	io.out.mem_addr			:= reg_mem_addr
	io.out.mem_avalid		:= Mux(stall,false.B,reg_mem_avalid & reg_valid(1))
	io.out.w_mem_en			:= Mux(stall,false.B,reg_w_mem_en)

	io.out.csr_addr			:= reg_csr_addr
	io.out.csr_data			:= reg_csr_data
	io.out.w_csr_en			:= Mux(stall,false.B,reg_w_csr_en)

	io.out.mtval			:= 0.U 
	io.out.exception		:= reg_exception
	io.out.is_exception		:= reg_is_exception
	io.out.is_mret			:= reg_is_mret
	io.out.is_fence			:= reg_is_fence
	io.out.is_fence_i		:= reg_is_fence_i

	io.out.stall 			:= reg_stall
}