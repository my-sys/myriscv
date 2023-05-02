import chisel3._
import chisel3.util._ 
class Get_Inst_IO extends Bundle{
	val inst = Output(UInt(32.W))
	val pc   = Output(UInt(64.W))
	val is_pre = Output(Bool())
}
class Decode extends Module{
    val io = IO(new Bundle{
		val get_inst = Flipped(Decoupled(new Get_Inst_IO))
		val normal_rd = Flipped(new Normal_Read_IO)
		val csr_rd 	  = Flipped(new Csr_Read_IO)
		val op_datas  = Decoupled(new Op_Datas_IO)
		val flush 	  = Input(Bool())
    })
	val flush = io.flush
	val reg_valid 		= RegInit(false.B)
	//val reg_ready 		= RegInit(true.B)
	//本阶段段不存在延迟的操作。所以reg_ready 实际不需要
	val reg_ready = true.B
	val ready = reg_ready & io.op_datas.ready
	when(flush){
		reg_valid := false.B 
	}.otherwise{
		when(ready){
			reg_valid 	:= io.get_inst.valid
		}
	}
	
	val reg_opType		= RegInit(0.U(3.W))
	val reg_exuType		= RegInit(0.U(7.W))
	val reg_rs1_addr	= RegInit(0.U(5.W))
	val reg_rs1_data 	= RegInit(0.U(64.W))

	val reg_rs2_addr	= RegInit(0.U(5.W))
	val reg_rs2_data	= RegInit(0.U(64.W))
	val reg_imm 		= RegInit(0.U(32.W))
	val reg_pc 			= RegInit(0.U(64.W))

	val reg_inst 		= RegInit(0.U(32.W))
	val reg_dest_addr 	= RegInit(0.U(5.W))
	val reg_dest_is_reg = RegInit(false.B)

	val reg_csr_addr 	= RegInit(0.U(12.W))
	val reg_csr_data 	= RegInit(0.U(64.W))
	val reg_is_pre 		= RegInit(false.B)

	val inst         = io.get_inst.bits.inst 
	val pc           = io.get_inst.bits.pc 
	val is_pre 		 = io.get_inst.bits.is_pre
	val decodefault	= List(Op_type.op_mem,ALUType.alu_addi,Inst_type.Type_N,0.U,0.U,0.U)

	
	val rs2_addr        = inst(24,20)
	val rs1_addr        = inst(19,15)
	val csr_addr        = inst(31,20)
	val dest_addr    	= inst(11,7)

	val fun = inst(14,12)
	val fun_exuType = Cat(fun,Cat(inst(5),inst(3)))
	val fun_op = Cat(inst(6),Cat(inst(4),inst(2)))
	// val temp_auipc_lui = Mux(inst(5),List(Op_type.op_alu,0.U,Inst_type.Type_U,true.B,false.B,false.B),
	// List(Op_type.op_alu,"b1000000".U,))
	val temp_system_is_pri = (fun === "b000".U)
	val temp_system_is_imm = inst(14)
	val temp_system_rs1 = Mux(temp_system_is_imm,false.B,true.B)
	//忽略了sret
	// val temp_system = Mux(temp_system_is_pri,List(Op_type.op_system,Cat(inst(21,20),fun_exuType),Inst_type.Type_N,false.B,false.B,false.B),
	// List(Op_type.op_system,fun_exuType,Inst_type.Type_CSR,true.B,temp_system_rs1,false.B))
	val temp_system = List(Op_type.op_system,Mux(temp_system_is_pri,Cat(inst(21,20),fun_exuType),fun_exuType),
	Mux(temp_system_is_pri,Inst_type.Type_N,Inst_type.Type_CSR),Mux(temp_system_is_pri,false.B,true.B),
	Mux(temp_system_is_pri,false.B,temp_system_rs1),false.B)
	val temp_mem_itype = Mux(inst(5),Inst_type.Type_S,Inst_type.Type_I)
	val temp_mem_dest  = Mux(inst(5),false.B,true.B)
	val temp_mem_rs2   = Mux(inst(5),true.B,false.B)
	val temp_op_is_imm = !inst(5)
	val is_sr = fun === ALUType.alu_srl(4,2)
	val temp_kk = Cat(int(30),fun_exuType)
	val temp_op_exuType = Mux(temp_op_is_imm,Mux(is_sr,temp_kk,fun_exuType),temp_kk)
	val temp_op_itype = Mux(temp_op_is_imm,Mux((fun === ALUType.alu_sll(4,2)) | is_sr,Inst_type.Type_IR,Inst_type.Type_I),Inst_type.Type_R)
	val temp_op_rs2   = Mux(temp_op_is_imm,false.B,true.B)
	// val temp_jal_jalr = Mux(inst(3),List(Op_type.op_bru,BRUType.bru_jal,Inst_type.Type_J,true.B,false.B,false.B),
	// List(Op_type.op_bru,BRUType.bru_jalr,Inst_type.Type_I,true.B,true.B,false.B))
	val temp_jal_jalr = List(Op_type.op_bru,
	Mux(inst(3),BRUType.bru_jal,BRUType.bru_jalr),
	Mux(inst(3),Inst_type.Type_J,Inst_type.Type_I),true.B,
	Mux(inst(3),false.B,true.B),false.B)
	val opType :: exuType :: instType :: dest_is_reg :: rs1_is_reg :: rs2_is_reg :: Nil = ListLookup(fun_op,decodefault,Array(
		BitPat("b010")	-> List(Op_type.op_alu,temp_op_exuType,temp_op_itype,true.B,true.B,temp_op_rs2), // op
		BitPat("b011") 	-> List(Op_type.op_alu,Mux(inst(5),ALUType.alu_lui,ALUType.alu_auipc),Inst_type.Type_U,true.B,false.B,false.B),	// auipc,lui 
		BitPat("b010") 	-> List(Op_type.op_mu,fun_exuType,Inst_type.Type_R,true.B,true.B,true.B), //muldiv 
		BitPat("b101") 	-> temp_jal_jalr, // jalr,jal,
		BitPat("b100") 	-> List(Op_type.op_bru,Cat(1.U(2.W),fun_exuType),Inst_type.Type_B,false.B,true.B,true.B), // branch
		BitPat("b000") 	-> List(Op_type.op_mem,fun_exuType,temp_mem_itype,temp_mem_dest,true.B,temp_mem_rs2), // load, store
		BitPat("b001") 	-> List(Op_type.op_fence,Cat(2.U(2.W),fun_exuType),Inst_type.Type_N,false.B,false.B,false.B), // misc-mem0,amo
		BitPat("b110") 	-> temp_system, //system 
	))
//val opType :: exuType :: instType :: dest_is_reg :: rs1_is_reg :: rs2_is_reg :: Nil = ListLookup(inst,decodefault,ISA.table)
	
	val imm_data             = MuxLookup(instType, 0.U(32.W), List(
		Inst_type.Type_I    -> (Cat( Fill(20,inst(31)) ,inst(31,20))),  // sign extension
		Inst_type.Type_U    -> (Cat(inst(31,12),0.U(12.W)) ), // sign extension 
		Inst_type.Type_S    -> (Cat( Fill(20,inst(31)), Cat(inst(31,25),inst(11,7)) )), // sign extension
		Inst_type.Type_J    -> (Cat( Fill(12,inst(31)),  Cat(Cat(inst(19,12),inst(20)),Cat(inst(30,21),0.U(1.W))) )), // sign extension
		
		Inst_type.Type_B    -> (Cat( Fill(20,inst(31)), Cat(Cat(inst(7),inst(30,25)), Cat(inst(11,8),0.U(1.W)))  )),
		Inst_type.Type_CSR  -> (Cat( 0.U(27.W),inst(19,15))),
		Inst_type.Type_IR   -> (Cat(0.U(26.W),inst(25,20)))
		//Inst_type.Type_N    -> (),
		//Inst_type.Type_R    -> (),
	))
	//val  rs2_is_reg = 1.U
	val temp_rs1_is_reg = (rs1_is_reg === 1.U)
	val temp_rs2_is_reg = (rs2_is_reg === 1.U)
	val change_rs1_addr = Mux(temp_rs1_is_reg,rs1_addr,0.U)
	val change_rs1_data = Mux(temp_rs1_is_reg,io.normal_rd.rs1_data,0.U)
	val change_rs2_addr = Mux(temp_rs2_is_reg,rs2_addr,0.U)
	val change_rs2_data = Mux(temp_rs2_is_reg,io.normal_rd.rs2_data,0.U)
	when(ready){


		reg_opType		:= opType
		reg_exuType		:= exuType
		reg_rs1_addr	:= change_rs1_addr
		reg_rs1_data	:= change_rs1_data

		reg_rs2_addr	:= change_rs2_addr
		reg_rs2_data	:= change_rs2_data
		reg_imm			:= imm_data
		reg_pc			:= pc 

		reg_inst 		:= inst
		reg_dest_addr	:= dest_addr
		reg_dest_is_reg	:= dest_is_reg

		reg_csr_addr	:= csr_addr
		reg_csr_data 	:= io.csr_rd.csr_data
		reg_is_pre		:= is_pre
	}

	io.get_inst.ready 		:= ready 
	io.normal_rd.rs1_addr	:= rs1_addr
	io.normal_rd.rs2_addr	:= rs2_addr
	io.csr_rd.csr_addr		:= csr_addr
	io.op_datas.bits.opType			:= reg_opType
	io.op_datas.bits.exuType		:= reg_exuType
	io.op_datas.bits.rs1_addr		:= reg_rs1_addr
	io.op_datas.bits.rs1_data		:= reg_rs1_data
	io.op_datas.bits.rs2_addr		:= reg_rs2_addr
	io.op_datas.bits.rs2_data		:= reg_rs2_data
	io.op_datas.bits.imm			:= reg_imm
	io.op_datas.bits.pc				:= reg_pc
	io.op_datas.bits.inst			:= reg_inst
	io.op_datas.bits.dest_addr		:= reg_dest_addr
	io.op_datas.bits.dest_is_reg	:= reg_dest_is_reg

	io.op_datas.bits.csr_addr		:= reg_csr_addr
	io.op_datas.bits.csr_data		:= reg_csr_data
	io.op_datas.bits.is_pre 		:= reg_is_pre
	io.op_datas.valid 				:= reg_valid
}