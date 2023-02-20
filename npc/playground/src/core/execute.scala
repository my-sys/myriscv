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
			
			val wb_result_data 	= Input(UInt(RegDataLen.W))
			val wb_rs_addr 		= Input(UInt(RegAddrLen.W))
			val wb_w_rs_en		= Input(Bool())
			val stall 	 		= Input(Bool())
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
			
			val next_pc         = Output(UInt(AddrLen.W))
			val valid_next_pc   = Output(Bool()) 
			val flush 			= Output(Bool())
			val stall 			= Output(Bool())
		}
	})
	
	val alu_exu = Module(new ALU_EXU())
	val lsu_exu = Module(new LSU_EXU())
	val mu_exu  = Module(new MU_EXU())
	
	val opType			= io.in.opType
	val exuType    		= io.in.exuType
	val stall 			= io.in.stall | mu_exu.io.stall
	
	val imm_data		= io.in.imm_data
	val pc         		= io.in.pc
	val inst 			= io.in.inst
	val rs_addr     	= io.in.rs_addr
	// 声明一些寄存器，暂存流水线中的数据，这是必须的。需要执行后的值，由小模块自己暂存，大模块只标记
	val  reg_rs_addr        = RegInit(0.U(64.W))
	
	val  reg_opType			= RegInit(0.U(OpTypeLen.W))
	val  reg_exuType		= RegInit(0.U(ExuTypeLen.W))
	val	 reg_pc 			= RegInit(0.U(AddrLen.W))
	val  reg_inst 			= RegInit(0.U(InstLen.W))
	
	// 跳转指令问题，冲刷流水线
	val reg_flush 			= reg_valid_next_pc 
//  解决数据相关冲突 
	val rs1_data = Mux((reg_rs_addr === io.in.rs1_addr)&reg_w_rs_en,reg_rs_data,Mux((io.in.wb_rs_addr === io.in.rs1_addr)&io.in.wb_w_rs_en,io.in.wb_result_data,io.in.rs1_data))
	val rs2_data = Mux((reg_rs_addr === io.in.rs2_addr)&reg_w_rs_en,reg_rs_data,Mux((io.in.wb_rs_addr === io.in.rs2_addr)&io.in.wb_w_rs_en,io.in.wb_result_data,io.in.rs2_data))	
	when(!reg_flush){
		reg_rs_addr				:= Mux(stall,reg_rs_addr,rs_addr)
		reg_opType				:= Mux(stall,reg_opType,opType)
		reg_exuType				:= Mux(stall,reg_exuType,exuType) 
		reg_pc 					:= Mux(stall,reg_pc,pc)
		reg_inst 				:= Mux(stall,reg_inst,inst)
	}.otherwise{
		reg_rs_addr				:= 0.U
		reg_pc					:= 0.U 
		reg_inst				:= 0.U
		reg_opType				:= Op_type.op_n
		reg_exuType				:= ALUType.alu_none
	}
	
	val  reg_rs2_data 		= RegInit(0.U(RegDataLen.W))
	val  reg_rs2_addr 		= RegInit(0.U(RegAddrLen.W))

//对于stall，外部输入的stall，则寄存器保持原值。

//对于内部产生的reg_stall,在reg_stall未消失前，输出端为空气泡。
//reg_stall中不需要改变的值，保持原值。需要改变的值，进行变动。
	when(!reg_flush){
		reg_rs2_data			:= Mux(stall,reg_rs2_data,rs2_data)
		reg_rs2_addr			:= Mux(stall,reg_rs2_addr,io.in.rs2_addr)
	}.otherwise{
		reg_rs2_data			:= 0.U 
		reg_rs2_addr			:= 0.U
	}
	
	
	// Choosing the function unit to execute
	val default_valid = "b0000".U
    val valid = MuxLookup(opType,default_valid,List(
        Op_type.op_alu     ->  "b0001".U,
        Op_type.op_lsu     ->  "b0010".U,
        Op_type.op_csr     ->  "b0100".U,
        Op_type.op_mu      ->  "b1000".U    
    ))
	val reg_valid = RegInit(0.U(4.W))
	when(!reg_flush){
		reg_valid := Mux(stall,reg_valid,valid)
	}.otherwise{
		reg_valid := 0.U
	}

//---------------------------------LSU --------------------------------------
	lsu_exu.io.valid		:= valid(1)
	lsu_exu.io.exuType		:= exuType
	lsu_exu.io.rs1_data		:= rs1_data
	lsu_exu.io.imm_data		:= imm_data
	lsu_exu.io.stall 		:= io.in.stall

	val  reg_mem_addr 		= lsu_exu.io.address_result
	val  reg_mem_avalid		= lsu_exu.io.avalid
	val  reg_w_mem_en 		= lsu_exu.io.w_mem_en
//-------------------------------ALU-----------------------------------------
    alu_exu.io.valid 		:= valid(0)
	alu_exu.io.op_data1 	:= rs1_data 
    alu_exu.io.op_data2 	:= rs2_data
    alu_exu.io.op_imm   	:= imm_data
    alu_exu.io.op_pc    	:= pc
	alu_exu.io.stall 		:= io.in.stall
	
	val reg_next_pc				= alu_exu.io.result_pc
	val reg_valid_next_pc		= alu_exu.io.next_pc_valid
//-------------------------------MU EXU--------------------------------------
	mu_exu.io.valid 		:= valid(3)
	mu_exu.io.exuType		:= exuType
	mu_exu.io.rs1_data		:= rs1_data
	mu_exu.io.rs2_data		:= rs2_data
	mu_exu.io.stall 		:= io.in.stall
	
	val reg_stall 			:= mu_exu.io.stall
//------------------------------CSR EXU--------------------------------------

	val reg_rs_data = MuxCase(0.U(64.W),Array(
		reg_valid(0) -> alu_exu.io.result_data,
		reg_valid(1) -> 0.U,
		reg_valid(2) -> 0.U,
		reg_valid(3) -> mu_exu.io.result_data
	))
	val reg_w_rs_en = MuxCase(1.U(1.W),Array(
		reg_valid(0) -> alu_exu.io.result_data, // alu 
		reg_valid(1) -> 0.U,//lsu 
		reg_valid(2) -> 0.U,//csr
		reg_valid(3) -> mu_exu.io.result_data	// mu exu	
	))
	
	io.out.rs_addr          := reg_rs_addr
	io.out.rs_data          := reg_rs_data
	io.out.w_rs_en          := Mux(stall,false.B,reg_w_rs_en) //reg_w_rs_en
	io.out.next_pc          := reg_next_pc
	io.out.valid_next_pc    := Mux(stall,false.B,reg_valid_next_pc)
	io.out.flush 			:= Mux(stall,false.B,reg_valid_next_pc)
	
	io.out.opType			:= Mux(stall,Op_type.op_n,reg_opType)
	io.out.exuType			:= Mux(stall,ALUType.alu_none,reg_exuType) 
	io.out.pc 				:= reg_pc
	io.out.inst 			:= reg_inst 
	io.out.rs2_data			:= reg_rs2_data
	io.out.rs2_addr 		:= reg_rs2_addr
	io.out.mem_addr			:= reg_mem_addr
	io.out.mem_avalid		:= Mux(stall,false.B,reg_mem_avalid)
	io.out.w_mem_en			:= Mux(stall,false.B,reg_w_mem_en)
	io.out.stall 			:= reg_stall
}