import chisel3._ 
import chisel3.util._ 
import chisel3.util.experimental.BoringUtils

class Normal_Read_IO extends Bundle{
	val rs1_addr	= Input(UInt(5.W))
	val rs1_data 	= Output(UInt(64.W))
	val rs2_addr	= Input(UInt(5.W))
	val rs2_data	= Output(UInt(64.W))
}
class Csr_Read_IO extends Bundle{
	val csr_addr 	= Input(UInt(12.W))
	val csr_data 	= Output(UInt(64.W))
}

class Csr_Pass_IO extends Bundle{
	val csr_mtvec	= Output(UInt(64.W))
	val csr_mepc	= Output(UInt(64.W))
	val csr_mstatus	= Output(UInt(64.W))
	val csr_mie		= Output(UInt(64.W))
}

class Commit extends Module{
	val io = IO(new Bundle{
		val normal_rd  = new Normal_Read_IO
		val normal_wb  = Flipped(new Normal_Wb_IO)
		val csr_rd 	   = new Csr_Read_IO
		val csr_wb 	   = Flipped(new CSR_Wb_IO)
		val csr_except = new CSR_Except_IO
		val csr_pass   = new Csr_Pass_IO
		val commit 	   = Input(Bool()) 
		val difftest_inst = Input(UInt(32.W))
		val difftest_peripheral = Input(Bool())
	})
	val csr_reg = Module(new CsrRegCtrl)
	val reg_file = Vec(3,Reg())//Mem(32,UInt(64.W))

	val rs1_addr = io.normal_rd.rs1_addr
	val rs2_addr = io.normal_rd.rs2_addr
	val read_rs1_from_file = reg_file.read(rs1_addr)
	val read_rs2_from_file = reg_file.read(rs2_addr)
	//处理寄存器读写同时进行时的相关问题
    val rs1_data        = Mux((io.normal_wb.dest_addr === rs1_addr)&io.normal_wb.valid, io.normal_wb.dest_data,read_rs1_from_file)
    val rs2_data        = Mux((io.normal_wb.dest_addr === rs2_addr)&io.normal_wb.valid, io.normal_wb.dest_data,read_rs2_from_file)
    when(io.normal_wb.valid){
        reg_file.write(io.normal_wb.dest_addr,io.normal_wb.dest_data)
    }
	io.normal_rd.rs1_data	:= rs1_data
	io.normal_rd.rs2_data	:= rs2_data


	csr_reg.io.in.csr_addr	:= io.csr_wb.csr_addr
	csr_reg.io.in.csr_data	:= io.csr_wb.csr_data
	csr_reg.io.in.w_csr_en	:= io.csr_wb.valid
	csr_reg.io.in.pc		:= io.csr_except.pc
	csr_reg.io.in.next_pc	:= io.csr_except.next_pc

	csr_reg.io.in.time_irq	:= io.csr_except.is_time_irq
	csr_reg.io.in.soft_irq	:= io.csr_except.is_soft_irq
	csr_reg.io.in.mtval		:= 0.U 
	csr_reg.io.in.exception	:= io.csr_except.exception
	csr_reg.io.in.is_exception	:= io.csr_except.is_except
	csr_reg.io.in.commit	:= io.commit

	csr_reg.io.r.csr_raddr 		:= io.csr_rd.csr_addr
	io.csr_rd.csr_data			:= csr_reg.io.r.csr_rdata
	io.csr_pass.csr_mtvec		:= csr_reg.io.r.csr_mtvec
	io.csr_pass.csr_mepc		:= csr_reg.io.r.csr_mepc
	io.csr_pass.csr_mstatus		:= csr_reg.io.r.csr_mstatus
	io.csr_pass.csr_mie			:= csr_reg.io.r.csr_mie

//----------------------------------- handle difftest ----------------------------------------------
	val difftest_commit 		= RegInit(false.B)
	val difftest_inst 			= RegInit(0.U(32.W))
	val difftest_pc 			= RegInit(0.U(64.W))
	val inst_counter   			= RegInit(0.U(64.W))
	val difftest_irq 			= RegInit(false.B)
	val difftest_peripheral 	= RegInit(false.B)

	difftest_commit	:= io.commit
	difftest_inst	:= io.difftest_inst 
	difftest_pc		:= io.csr_except.pc
	inst_counter	:= Mux(io.commit,inst_counter + 1.U,inst_counter)
	difftest_irq	:= io.csr_except.is_time_irq | io.csr_except.is_soft_irq
	difftest_peripheral	:= io.difftest_peripheral

	BoringUtils.addSource(inst_counter, "INST_COUNTER")
	BoringUtils.addSource(difftest_commit, "DIFFTEST_COMMIT")
    BoringUtils.addSource(difftest_pc,"DIFFTEST_PC")
    BoringUtils.addSource(difftest_inst,"DIFFTEST_INST")
	BoringUtils.addSource(difftest_irq,"DIFFTEST_IRQ")
	BoringUtils.addSource(difftest_peripheral,"DIFFTEST_PERIPHERAL")

	BoringUtils.addSource(VecInit((0 to 31).map(i => reg_file.read(i.U))),"DIFFTEST_REG")
}