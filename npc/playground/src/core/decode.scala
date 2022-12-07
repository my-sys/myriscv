
import chisel3._
import chisel3.util._ 
import chisel3.util.experimental.BoringUtils
class Decode extends Module with CoreParameters{
    val io = IO(new Bundle{
        val in      = new Bundle{
            val inst = Input(UInt(InstLen.W))
            val pc   = Input(UInt(XLEN.W))

            val rs_addr         = Input(UInt(RegAddrLen.W))
            val result_data     = Input(UInt(RegDataLen.W))
            val w_rs_en         = Input(Bool())

			val stall 			= Input(Bool())
			val flush 			= Input(Bool())
        }
        val out     = new Bundle{
            val rs1_data    = Output(UInt(RegDataLen.W))
            val rs2_data    = Output(UInt(RegDataLen.W))
			val rs1_addr 	= Output(UInt(RegAddrLen.W))
			val rs2_addr 	= Output(UInt(RegAddrLen.W))

            val rs_addr     = Output(UInt(RegAddrLen.W))
            val imm_data    = Output(UInt(ImmLen.W))
            val opType      = Output(UInt(OpTypeLen.W))
            val exuType     = Output(UInt(ExuTypeLen.W))
            val pc          = Output(UInt(AddrLen.W))
			val inst 		= Output(UInt(InstLen.W))

			val stall 		= Output(Bool())
        }
    })

    val inst         = io.in.inst
    val pc           = io.in.pc 
    val reg_rs1_data = RegInit(0.U(64.W))
    val reg_rs2_data = RegInit(0.U(64.W))
    val reg_dest_rs_addr  = RegInit(0.U(RegAddrLen.W))
    val reg_imm      = RegInit(0.U(64.W))
    val reg_opType   = RegInit(0.U(OpTypeLen.W))
    val reg_exuType  = RegInit(0.U(ExuTypeLen.W))
    val reg_pc       = RegInit(0.U(64.W))
	val reg_inst 	 = RegInit(0.U(32.W))
	val reg_rs1_addr = RegInit(0.U(RegAddrLen.W))
	val reg_rs2_addr = RegInit(0.U(RegAddrLen.W))
	
	val reg_stall 		= RegInit(false.B)

	val stall 			= reg_stall | io.in.stall

    val decodefault = List(Op_type.op_n,ALUType.alu_none,Inst_type.Type_N)
    val opType :: exuType :: instType :: Nil = ListLookup(inst, decodefault,ISA.table)

    val rs2_addr        = inst(24,20)
    val rs1_addr        = inst(19,15)
    val dest_rs_addr    = inst(11,7)
    val csr_addr        = inst(31,20)

    val reg_file        = new RegCtrl

    BoringUtils.addSource(VecInit((0 to 31).map(i => reg_file.read(i.U))),"DIFFTEST_REG")
    //val temp_inst = WireInit(3.U(32.W))
    //BoringUtils.addSource(temp_inst,"DIFFTEST_INST1")
    val rs1_data        = reg_file.read(rs1_addr)
    val rs2_data        = reg_file.read(rs2_addr)


    val imm_data             = MuxLookup(instType, 0.U, List(
        Inst_type.Type_I    -> (Cat( Fill(52,inst(31)) ,inst(31,20))),  // sign extension
        Inst_type.Type_U    -> (Cat( Fill(32,inst(31)), Cat(inst(31,12),0.U(12.W)) )), // sign extension 
        Inst_type.Type_S    -> (Cat( Fill(52,inst(31)), Cat(inst(31,25),inst(11,7)) )), // sign extension
        Inst_type.Type_J    -> (Cat( Fill(44,inst(31)),  Cat(Cat(inst(19,12),inst(20)),Cat(inst(30,21),0.U(1.W))) )), // sign extension
        
        Inst_type.Type_B    -> (Cat( Fill(52,inst(31)), Cat(Cat(inst(7),inst(30,25)), Cat(inst(11,8),0.U(1.W)))  )),
        Inst_type.Type_CSR  -> (Cat( 0.U(59.W),inst(19,15))),
        Inst_type.Type_IR   -> (Cat(0.U(58.W),inst(25,20)))
        //Inst_type.Type_N    -> (),
        //Inst_type.Type_R    -> (),
    ))
	when(!io.in.flush){
		reg_imm 			:= Mux(stall,reg_imm,imm_data)
		reg_opType          := Mux(stall,reg_opType,opType)
		reg_exuType         := Mux(stall,reg_exuType,exuType)     
		reg_rs1_data        := Mux(stall,reg_rs1_data,rs1_data)
		reg_rs2_data        := Mux(stall,reg_rs2_data,rs2_data)
		reg_dest_rs_addr    := Mux(stall,reg_dest_rs_addr,dest_rs_addr)
		reg_pc              := Mux(stall,reg_pc,pc)
		reg_inst 			:= Mux(stall,reg_inst,inst)
		reg_rs1_addr		:= Mux(stall,reg_rs1_addr,rs1_addr)
		reg_rs2_addr		:= Mux(stall,reg_rs2_addr,rs2_addr)
	}.otherwise{
		// 产生nop指令
		reg_opType			:= Op_type.op_n
		reg_exuType			:= ALUType.alu_none
	}


    io.out.opType       := Mux(io.in.stall,Op_type.op_n,reg_opType) 
    io.out.exuType      := Mux(io.in.stall,ALUType.alu_none,reg_exuType) 
    io.out.rs1_data     := reg_rs1_data
    io.out.rs2_data     := reg_rs2_data  
    io.out.imm_data     := reg_imm
    io.out.rs_addr      := reg_dest_rs_addr
    io.out.pc           := reg_pc
	io.out.inst 		:= reg_inst 
	io.out.rs1_addr		:= reg_rs1_addr
	io.out.rs2_addr		:= reg_rs2_addr

	

	io.out.stall 		:= reg_stall
	// 处理ld 与其他指令的数据相关问题，引入气泡解决. .
	val temp_stall     = (reg_opType === Op_type.op_lsu)&(!reg_exuType(3))&((reg_dest_rs_addr === rs1_addr) |(reg_dest_rs_addr === rs2_addr))
	 			:= 
	when(!io.in.flush){
		reg_stall		:= Mux(io.in.stall,reg_stall,temp_stall)
	}.otherwise{
		reg_stall		:= false.B
	}

    when(io.in.w_rs_en){
        reg_file.write(io.in.rs_addr,io.in.result_data)
    }
    
}