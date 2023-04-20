import chisel3._ 
import chisel3.util._ 

object SYSType{
	def system_csrrc	= "b011_10".U 
	def system_csrrci 	= "b111_10".U 
	def system_csrrs 	= "b010_10".U 
	def system_csrrsi	= "b110_10".U 
	def system_csrrw 	= "b001_10".U 
	def system_csrrwi	= "b101_10".U 
	def system_ecall	= "b00_000_10".U
	def system_ebreak	= "b01_000_10".U
	def system_mret		= "b10_000_10".U
	def system_sret 	= "b11_000_10".U
}
//mtvec				0x305 机器模式异常入口基地址寄存器
//mcause			0x342 机器模式异常原因寄存器
//mtval(mbadaddr)	0x343 机器模式异常值寄存器
//mepc				0x341 机器模式异常PC寄存器
//mstatus 			0x300 机器模式状态寄存器
//mie				0x304 机器模式中断使能寄存器
//mip 				0x344 机器模式中断等待寄存器
//misa 				0x301 机器模式指令集架构寄存器
//mvendorid 		
//marchid 
//mimpid 
//mhartid
//mscratch 
//mcycle
//mcycleh 
//minstret
//minstreth

//mtime
//mtimecmp
//msip

// 我是基于自己正在写的超标量处理器，对5级流水线处理器进行重构的。
// 一些接口可能增加了对S模式的考虑(非M模式),指令操作类型的区分，我也进行了重新设计。
// stall,与flush的区分会进行新的考虑，并且准备砍掉5级流水的writeback阶段。
class SYSTEM_EXU extends Module with CoreParameters{
	val io = IO(new Bundle{
		val valid 		= Input(Bool())
		val exuType		= Input(UInt(7.W))
		val csr_data 	= Input(UInt(64.W))
		val csr_addr 	= Input(UInt(12.W))

		val imm 		= Input(UInt(32.W))
		val rs1_data	= Input(UInt(64.W))
		val mepc 		= Input(UInt(64.W))
		val mstatus 	= Input(UInt(64.W))
		// val epc 		= Input(UInt(64.W)) // sepc,mepc
		// val status		= Input(UInt(64.W)) // mstatus,sstatus
		// val status_addr = Input(UInt(12.W))

		val dst_data 		= Output(UInt(64.W))
		val csr_is_w 		= Output(Bool())
		val result_csr_data = Output(UInt(64.W))
		val result_csr_addr	= Output(UInt(12.W))
		// val is_mret 		= Output(Bool())
		// val is_sret 		= Output(Bool())

		val is_except		= Output(Bool())
		val exception		= Output(UInt(6.W))

		val valid_next_pc	= Output(Bool())
		val next_pc			= Output(UInt(64.W))
	})
	val imm = Cat(Fill(32,io.imm(31)),io.imm)
	val is_imm = io.exuType(4)
	val csr_data 	= io.csr_data 
	val op_data 	= Mux(is_imm,imm,io.rs1_data)
	val or_result	= csr_data | op_data
	val and_result  = (~op_data) & csr_data
	val temp_csr_result_data = MuxLookup(io.exuType(4,2),0.U,List(
		SYSType.system_csrrs(4,2)	-> or_result,
		SYSType.system_csrrsi(4,2)	-> or_result,
		SYSType.system_csrrw(4,2)	-> op_data,
		SYSType.system_csrrwi(4,2)	-> Cat(csr_data(63,5),imm(4,0)),
		SYSType.system_csrrc(4,2)	-> and_result,
		SYSType.system_csrrci(4,2)	-> and_result
	))
	val is_mret 	= (io.exuType(6,2) === SYSType.system_mret(6,2))
	val is_sret 	= (io.exuType(6,2) === SYSType.system_sret(6,2))
	val is_ecall 	= (io.exuType(6,2) === SYSType.system_ecall(6,2))
	val is_ebreak 	= (io.exuType(6,2) === SYSType.system_ebreak(6,2))
	val is_except 	= (is_ecall | is_ebreak) 
	val exception	= Mux(is_ecall,11.U,Mux(is_ebreak,3.U,0.U)) 
	val is_ret 		= is_mret | is_sret
	val status 		= io.mstatus
	val result_status = (status & "hffff_ffff_ffff_ff77".U)|(Mux(status(7),"h88".U,"h80".U))
	val status_addr	= "h300".U

	io.dst_data			:= csr_data 
	io.result_csr_data	:= Mux(is_ret,result_status,temp_csr_result_data)
	io.csr_is_w			:= io.valid & ((io.exuType(4,2) =/= 0.U) | is_ret)
	io.result_csr_addr	:= Mux(is_ret,status_addr,io.csr_addr)

	// io.is_mret			:= is_mret & io.valid
	// io.is_sret			:= is_sret & io.valid

	io.is_except		:= is_except & io.valid
	io.exception		:= exception

	io.valid_next_pc	:= is_ret & io.valid
	io.next_pc			:= io.mepc 
}