import chisel3._
import chisel3.util._

object ALUType{
//第2位表示立即数，1表示没有立即数，0表示有立即数。尽量与指令对应减少复杂度
//第1位表示是否为32位操作，1表示是32位操作，0表示不是32位操作。
	val alu_add 	= "b000_1_0".U 
	val alu_addi 	= "b000_0_0".U 
	val alu_addiw 	= "b000_0_1".U 
	val alu_addw 	= "b000_1_1".U 

	val alu_slt 	= "b01_010_1_0".U 
	val alu_slti 	= "b01_010_0_0".U 

	val alu_sltiu   = "b01_011_0_0".U 
	val alu_sltu 	= "b01_011_1_0".U 

	val alu_and 	= "b111_1_0".U 
	val alu_andi 	= "b111_0_0".U 

	val alu_or 		= "b110_1_0".U 
	val alu_ori 	= "b110_0_0".U 

	val alu_xor 	= "b100_1_0".U 
	val alu_xori 	= "b100_0_0".U 

	val alu_sll 	= "b001_1_0".U 
	val alu_slli 	= "b001_0_0".U 
	val alu_slliw 	= "b001_0_1".U 
	val alu_sllw 	= "b001_1_1".U 

	val alu_srl 	= "b101_1_0".U 
	val alu_srli 	= "b101_0_0".U 
	val alu_srliw 	= "b101_0_1".U 
	val alu_srlw 	= "b101_1_1".U 

	val alu_sub 	= "b1_000_1_0".U
	val alu_subw 	= "b1_000_1_1".U 
	
	val alu_sra 	= "b1_101_1_0".U 
	val alu_srai 	= "b1_101_0_0".U 
	val alu_sraiw 	= "b1_101_0_1".U 
	val alu_sraw 	= "b1_101_1_1".U 

	val alu_lui 	= "b10_000_0_0".U 
	val alu_auipc 	= "b11_000_0_0".U 
}

object BRUType{
//这里的低两位没有特殊含义，尽量与指令集的形式对应，这会有助于，解码阶段降低复杂度？
//上面一行的理解少考虑分支指令借用alu资源的情况，
//第2行对分支指令如何借用alu资源问题的考虑有所欠缺，比较用alu加法器，那地址计算呢？
	val bru_beq 	= "b01_000_1_0".U  //0
	val bru_bne 	= "b01_001_1_0".U  //1
	val bru_blt		= "b01_100_1_0".U  //4
	val bru_bltu 	= "b01_110_1_0".U //6
	val bru_bge 	= "b01_101_1_0".U  //5
	val bru_bgeu 	= "b01_111_1_0".U  //7
//这个要与其他分支指令不一样，暂时如下，不过这个值，是不是在取指令阶段的就已经确定了。指令预测还没有装上，就按这个先。
	val bru_jal 	= "b011_1_0".U  //3
	val bru_jalr 	= "b010_1_0".U  //2
}

// ALU 是一个常用的单元，设计它的指令非常多，乘法，除法。存储指令，CSR较少，因此在多个执行单元中
//应该有多个ALU。少数的CSR ，MU，LSU。
class ALU_EXU(has_br_unit: Boolean = false) extends Module with CoreParameters{
    val io = IO(new Bundle{
        val valid = Input(Bool())
		val opType 		= Input(UInt(3.W))
        val exuType 	= Input(UInt(7.W))
		////op_data1 如果不存在寄存器值，则应当为0
        val op_data1 	= Input(UInt(64.W))
        val op_data2 	= Input(UInt(64.W))
        val op_imm   	= Input(UInt(32.W))
		//val is_imm 		= Input(Bool())
		val op_pc 		= Input(UInt(64.W))

		//val has_dst 	= Output(Bool())
        val dst_data	  = Output(UInt(RegDataLen.W))
		val valid_next_pc = Output(Bool())
		val next_pc 	= Output(UInt(64.W))
    })

	//为啥可以采取这种粗暴的扩展方式，因为进行32位计算的都是有符号数。
	val is_32 = io.exuType(0)
	val op_data1 = Mux(is_32,Cat(Fill(32,io.op_data1(31)),io.op_data1(31,0)),io.op_data1)
	val op_data2 = Mux(is_32,Cat(Fill(32,io.op_data2(31)),io.op_data2(31,0)),io.op_data2)
	val op_imm   = Cat(Fill(32,io.op_imm(31)),io.op_imm)
	val op_pc 	 = io.op_pc 

	val rs2_is_imm = (!io.exuType(1))
	val rs2_data = Mux(rs2_is_imm,op_imm,op_data2)
	val rs1_is_pc = (io.exuType(6,5) === "b11".U)
	val is_sub   = (io.exuType(6,5) === "b01".U)
	//val rs1_is_0  = (io.exuType(6,5) === "b10".U)//重命名阶段，就需要分清哪些需要寄存器，哪些不需要寄存器。不需要寄存器的，该值就是0,这是仲裁与唤醒逻辑所需要的。
	val rs1_data = Mux(rs1_is_pc,op_pc,op_data1)
	val temp_rs2_data = Mux(is_sub,(rs2_data ^ "hffff_ffff_ffff_ffff".U),rs2_data)
	val add_sub_result = Cat(0.U(1.W),rs1_data) + temp_rs2_data + is_sub
	
	//  unsigend rs1 < rs2   must check this flag
    val u_rs1_l_rs2 = !add_sub_result(XLEN)
    //  unsigend rs1 < rs2   must check this flag   
    val s_rs1_l_rs2 = Mux(rs1_data(XLEN-1)^rs2_data(XLEN-1),rs1_data(XLEN-1),add_sub_result(XLEN-1))

	//val shift_rs1_data = Mux(is_32,Cat(32,rs1_data(31),rs1_data(31,0)),rs1_data)
	val shift_rs2_data = Mux(is_32,rs2_data(4,0),rs2_data(5,0))
	val sll_temp = rs1_data << shift_rs2_data
	val srl_temp = rs1_data >> shift_rs2_data
	val sra_temp = (rs1_data.asSInt >> shift_rs2_data).asUInt
	val is_sra   = is_sub//(io.exuType(6,5) === "b01".U)
	val sr_temp  = Mux(is_sra,sra_temp,srl_temp)
	val func = io.exuType(4,2)

	val result_data = MuxLookup(func,0.U,List(
		ALUType.alu_add(4,2)	-> add_sub_result(63,0),
		ALUType.alu_slt(4,2)	-> Cat(0.U((XLEN-1).W),s_rs1_l_rs2),
		ALUType.alu_sltu(4,2)	-> Cat(0.U((XLEN-1).W),u_rs1_l_rs2),
		ALUType.alu_and(4,2)	-> (rs1_data & rs2_data),
		ALUType.alu_or(4,2)		-> (rs1_data | rs2_data),
		ALUType.alu_xor(4,2)	-> (rs1_data ^ rs2_data),
		ALUType.alu_sll(4,2)	-> sll_temp(63,0),
		ALUType.alu_srl(4,2)	-> srl_temp(63,0),
		//ALUType.alu_sra(4,2)	-> sra_temp(63,0),
	))
	val is_br 		= WireInit(false.B)
	val temp_result_pc = WireInit(0.U(65.W))
	if(has_br_unit){
		is_br 		:= (io.opType(2,0) === Op_type.op_bru)
		
		val is_eq 	= (op_data1 === op_data2)
		val temp_1  = Mux(func === BRUType.bru_jalr(4,2),io.op_data1,op_pc)
		val add_pc = Cat(1.U(1.W),temp_1 + op_imm)
		when(is_br){
			temp_result_pc := MuxLookup(func,0.U,List(
				BRUType.bru_beq(4,2)	-> Mux(is_eq,add_pc,0.U),
				BRUType.bru_bne(4,2)	-> Mux(is_eq,0.U,add_pc),
				BRUType.bru_blt(4,2)	-> Mux(s_rs1_l_rs2,add_pc,0.U),
				BRUType.bru_bltu(4,2)	-> Mux(u_rs1_l_rs2,add_pc,0.U),
				BRUType.bru_bge(4,2)	-> Mux(s_rs1_l_rs2,0.U,add_pc),
				BRUType.bru_bgeu(4,2)	-> Mux(u_rs1_l_rs2,0.U,add_pc),
				BRUType.bru_jal(4,2)	-> add_pc,
				BRUType.bru_jalr(4,2)	-> Cat(add_pc(64,1),0.U(1.W))
			))
		}
	}
	
	val dst_data 		= Mux(is_br,op_pc + 4.U,result_data)
	val next_pc   		= temp_result_pc(63,0)
	val valid_next_pc 	= temp_result_pc(64)

	io.dst_data			:= dst_data
	io.valid_next_pc	:= valid_next_pc & io.valid
	io.next_pc			:= next_pc
}