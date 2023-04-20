import chisel3._
import chisel3.util._ 
class Get_Inst_IO extends Bundle{
	val inst = Output(UInt(32.W))
	val pc   = Output(UInt(64.W))
}
class Decode extends Module{
    val io = IO(new Bundle{
		val get_inst = Flipped(Decoupled(new Get_Inst_IO))
		val normal_rd = Flipped(new Normal_Read_IO)
		val csr_rd 	  = Flipped(new Csr_Read_IO)
		val op_datas  = Flipped(Decoupled(new Op_Datas_IO))
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

	val inst         = io.get_inst.bits.inst 
	val pc           = io.get_inst.bits.pc 
	val decodefault	= List(0.U,0.U,0.U,false.B,false.B,false.B)

	val opType :: exuType :: instType :: dest_is_reg :: rs1_is_reg :: rs2_is_reg :: Nil = ListLookup(inst,decodefault,ISA.table)
	val rs2_addr        = inst(24,20)
	val rs1_addr        = inst(19,15)
	val csr_addr        = inst(31,20)
	val dest_addr    	= inst(11,7)

    val imm_data             = MuxLookup(instType, 0.U, List(
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

	when(ready){
		reg_opType		:= opType
		reg_exuType		:= exuType
		reg_rs1_addr	:= rs1_addr
		reg_rs1_data	:= io.normal_rd.rs1_data

		reg_rs2_addr	:= rs2_addr
		reg_rs2_data	:= io.normal_rd.rs2_data
		reg_imm			:= imm_data
		reg_pc			:= pc 

		reg_inst 		:= inst
		reg_dest_addr	:= dest_addr
		reg_dest_is_reg	:= dest_is_reg

		reg_csr_addr	:= csr_addr
		reg_csr_data 	:= io.csr_rd.csr_data
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
	io.op_datas.valid 				:= reg_valid
}