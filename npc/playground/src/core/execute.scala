import chisel3._ 
import chisel3.util._ 

class Op_Datas_IO extends Bundle{
	val opType   	= Input(UInt(3.W))
	val exuType  	= Input(UInt(7.W))
	val rs1_addr 	= Input(UInt(5.W))
	val rs1_data 	= Input(UInt(64.W))
	val rs2_addr 	= Input(UInt(5.W))
	val rs2_data 	= Input(UInt(64.W))
	val imm		 	= Input(UInt(32.W))
	val pc       	= Input(UInt(64.W))
	val inst 	 	= Input(UInt(32.W))
	val dest_addr 	= Input(UInt(5.W))
	val dest_is_reg = Input(Bool())

	val csr_addr 	= Input(UInt(12.W))
	val csr_data 	= Input(UInt(64.W))
}

class Normal_Wb_IO extends Bundle{
	val valid 		= Output(Bool())
	val dest_addr	= Output(UInt(5.W))
	val dest_data	= Output(UInt(64.W))
}

class CSR_Wb_IO extends Bundle{
	val valid 		= Output(Bool())
	val csr_addr 	= Output(UInt(12.W))
	val csr_data 	= Output(UInt(64.W))
}

class CSR_Except_IO extends Bundle{
	val is_except	= Input(Bool())
	val is_time_irq = Input(Bool())
	val is_soft_irq = Input(Bool())
	val exception	= Input(UInt(6.W))
	val next_pc 	= Input(UInt(64.W))
	val pc 			= Input(UInt(64.W))
	// val is_mret		= Input(Bool())
	// val is_sret 	= Input(Bool())
	//val mtval		= 
}

class IRQ_IO extends Bundle{
	val time_irq	= Input(Bool())
	val soft_irq 	= Input(Bool())
}

class Exu extends Module with CoreParameters{
	val io = IO(new Bundle{
		val op_datas = Decoupled(new Op_Datas_IO)
		val irq 	   = new IRQ_IO
		val mstatus	   = Input(UInt(64.W))
		val mie 	   = Input(UInt(64.W))
		val mepc 	   = Input(UInt(64.W))
		val mtvec 	   = Input(UInt(64.W))

		val wb 		   = new Normal_Wb_IO
		val csr 	   = new CSR_Wb_IO
		val csr_except = Flipped(new CSR_Except_IO)
		val commit 	   = Output(Bool())
		val difftest_inst 		= Output(UInt(32.W))
		val difftest_peripheral = Output(Bool())

		val next_pc    = Output(UInt(64.W))
		val flush 	   = Output(Bool())
		val fence_i	   = Output(Bool())
		

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
	})
	val opType 		= io.op_datas.bits.opType
	val exuType		= io.op_datas.bits.exuType
	val rs1_addr	= io.op_datas.bits.rs1_addr
	val rs2_addr	= io.op_datas.bits.rs2_addr
	val op_data1	= Mux(io.wb.valid &(io.wb.dest_addr === rs1_addr),io.wb.dest_data,io.op_datas.bits.rs1_data)
	val op_data2 	= Mux(io.wb.valid &(io.wb.dest_addr === rs2_addr),io.wb.dest_data,io.op_datas.bits.rs2_data)
	val op_imm		= io.op_datas.bits.imm
	val op_pc 		= io.op_datas.bits.pc
	val dest_addr	= io.op_datas.bits.dest_addr
	val csr_addr	= io.op_datas.bits.csr_addr 
	val csr_data 	= Mux(io.csr.valid & (io.csr.csr_addr === csr_addr),io.csr.csr_data,io.op_datas.bits.csr_data)

	val alu_exu = Module(new ALU_EXU(true.B))
	val mem_exu = Module(new MEM_EXU())
	val mu_exu  = Module(new MU_EXU())
	val system_exu = Module(new SYSTEM_EXU)
	val ready = mu_exu.io.ready & mem_exu.io.ready

	val reg_valid = RegInit(0.U(4.W))
	val reg_alu_valid = reg_valid(0)
	val reg_mem_valid = reg_valid(1)
	val reg_mu_valid  = reg_valid(2)
	val reg_system_valid = reg_valid(3)
	val valid = MuxLookup(opType,0.U,List(
		Op_type.op_alu		-> "b0001".U ,
		Op_type.op_bru 		-> "b0001".U ,

		Op_type.op_lsu 		-> "b0010".U ,
		Op_type.op_fence 	-> "b0010".U ,

		Op_type.op_mu 		-> "b0100".U ,
		
		Op_type.op_system 	-> "b1000".U ,
	))
	when(ready){
		when(io.op_datas.valid){
			reg_valid := valid
		}.otherwise{
			reg_valid := 0.U
		}
	}
	
	//-----------------ALU--------------------------------
	alu_exu.io.valid	:= valid(0) & io.op_datas.valid & ready
	alu_exu.io.opType	:= opType
	alu_exu.io.exuType	:= exuType
	alu_exu.io.op_data1	:= rs1_data
	alu_exu.io.op_data2	:= rs2_data
	alu_exu.io.op_imm	:= op_imm
	alu_exu.io.op_pc	:= op_pc

	//----------------MEM---------------------------------
	//原因，5级流水中目前只需要处理fence_i ,因此暂时没必要弄复杂了
	mem_exu.io.valid		:= valid(1) & io.op_datas.valid & (opType =/= Op_type.op_fence) & ready
	mem_exu.io.exuType		:= exuType
	mem_exu.io.rs1_data		:= rs1_data
	mem_exu.io.rs2_data		:= rs2_data
	//mem_exu.io.dest_addr	:= dest_addr
	mem_exu.io.imm			:= op_imm
	mem_exu.io.bus <> io.bus

	//----------------MUL/DIV-----------------------------
	mu_exu.io.valid 		:= valid(2) & io.op_datas.valid & ready
	mu_exu.io.kill			:= false.B //这是满足超标量的，5级流水不用置0
	mu_exu.io.exu_type		:= exuType
	mu_exu.io.rs1_data		:= rs1_data
	mu_exu.io.rs2_data		:= rs2_data

	//----------------System------------------------------
	system_exu.io.valid		:= valid(3) & io.op_datas.valid & ready
	system_exu.io.exuType	:= exuType
	system_exu.io.csr_data	:= csr_data
	system_exu.io.csr_addr	:= csr_addr
	system_exu.io.imm		:= imm 
	system_exu.io.rs1_data	:= rs1_data

	val reg_sys_alu_w_valid  = RegInit(false.B)
	val reg_sys_alu_wdata 	 = RegInit(0.U(64.W))
	val reg_dest_addr 		 = RegInit(0.U(5.W))
	when(ready){
		reg_dest_addr := dest_addr
	}

	reg_sys_alu_w_valid :=  (alu_exu.io.valid | system_exu.io.valid)& io.op_datas.bits.dest_is_reg &(dest_addr =/= 0.U)&ready
	
	reg_sys_alu_wdata	:= Mux(system_exu.io.valid,system_exu.io.dst_data,alu_exu.io.dst_data)

	val reg_csr_data 		= RegInit(0.U(64.W))
	val reg_csr_addr 		= RegInit(0.U(12.W))
	val reg_csr_is_w 		= RegInit(false.B)
	val reg_is_except 		= RegInit(false.B)
	val reg_exception 		= RegInit(0.U(6.W))
	val reg_is_time_irq 	= RegInit(false.B)
	val reg_is_soft_irq 	= RegInit(false.B)
	val reg_except_next_pc  = RegInit(0.U(64.W))
	val reg_except_pc 		= RegInit(0.U(64.W))

	when(ready){
		reg_except_pc	:= op_pc
		when(alu_exu.io.valid_next_pc){
			reg_except_next_pc	:= alu_exu.io.next_pc
		}
		when(system_exu.io.valid_next_pc){
			reg_except_next_pc	:= system_exu.io.next_pc
		}
	}
	reg_csr_data	:= system_exu.io.result_csr_data
	reg_csr_addr	:= system_exu.io.result_csr_addr
	reg_csr_is_w	:= system_exu.io.csr_is_w

	val time_irq	= irq.time_irq & io.mstatus(3) & io.mie(7)
	val soft_irq	= irq.soft_irq & io.mstatus(3) & io.mie(3)
	val irq 		= time_irq | soft_irq
	val is_except	= system_exu.io.is_exception
	val exception	= system_exu.io.exception
	reg_is_except	:= is_except
	reg_exception	:= exception//Mux(time_irq,7.U,Mux(soft_irq,3.U,exception))
	// reg_is_mret		:= system_exu.io.is_mret
	// reg_is_sret		:= system_exu.io.is_sret //该值在m模式下不使用，所以不需要关系

	reg_is_time_irq	:= time_irq
	reg_is_soft_irq := soft_irq

	io.op_datas.ready 	= ready 

	io.wb.valid 	:= (reg_sys_alu_w_valid | mu_exu.io.dest_is_w | mem_exu.io.dest_is_w) & ready
	io.wb.dest_addr	:= reg_dest_addr
	io.wb.dest_data	:= Mux( reg_alu_valid | reg_system_valid,reg_sys_alu_wdata,
	Mux(reg_mem_valid,mem_exu.io.dest_data,Mux(reg_mu_valid,mu_exu.io.dest_data,0.U)))

	io.csr.valid	:= reg_csr_is_w & ready
	io.csr.csr_addr := reg_csr_addr
	io.csr.csr_data := reg_csr_data

	io.csr_except.is_except	:= reg_is_except & ready
	io.csr_except.exception	:= reg_exception
	// io.csr_except.is_mret	:= reg_is_mret & ready
	// io.csr_except.is_sret	:= reg_is_sret & ready
	io.csr_except.is_time_irq	:= reg_is_time_irq & ready
	io.csr_except.is_soft_irq	:= reg_is_soft_irq & ready
	io.csr_except.pc 		:= reg_except_pc
	io.csr_except.next_pc	:= reg_except_next_pc

	val reg_next_pc			= RegInit(0.U(64.W))
	val reg_valid_next_pc	= RegInit(false.B)
	reg_next_pc	:= Mux(irq|is_except,Cat(io.mtvec(63,2),0.U(2.W)),
	Mux(alu_exu.io.valid_next_pc,alu_exu.io.next_pc,
	Mux(system_exu.io.valid_next_pc,system_exu.io.next_pc,0.U)))
	reg_valid_next_pc		:= irq | is_except |alu_exu.io.valid_next_pc | system_exu.io.valid_next_pc

	io.next_pc		:= reg_next_pc 
	io.flush 		:= reg_valid_next_pc & ready

	val reg_fence_i 	= RegInit(false.B)
	
	val reg_commit 		= RegInit(false.B)
	val reg_difftest_inst = RegInit(0.U(32.W))
	when(ready){
		reg_commit	:= io.op_datas.valid
		reg_difftest_inst := io.op_datas.inst
	}
	//reg_commit := io.op_datas.valid
	reg_fence_i	:= io.op_datas.valid & (io.op_datas.bits.opType === Op_type.op_fence) &(io.op_datas.bits.exuType === FENCEType.fence_i)
	io.fence_i 			:= reg_fence_i & ready
	io.commit 			:= reg_commit & ready
	io.difftest_peripheral	:= mem_exu.io.difftest_peripheral
	io.difftest_inst		:= reg_difftest_inst
}