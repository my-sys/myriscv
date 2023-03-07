import chisel3._ 
import chisel3.util._ 

object CSRType{
    def csr_csrrs   = "b0001_0".U
    def csr_csrrsi  = "b0001_1".U
    def csr_csrrw   = "b0010_0".U
    def csr_csrrwi  = "b0010_1".U
	def csr_csrrc   = "b0011_0".U
    def csr_csrrci  = "b0011_1".U
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

class CSR_EXU extends Module with CoreParameters{
    val io = IO(new Bundle{
        val valid       = Input(Bool())
		val stall 		= Input(Bool())
		val in_flush	= Input(Bool())
        val exuType     = Input(UInt(ExuTypeLen.W))
        val csr_data    = Input(UInt(64.W))
        val imm_data    = Input(UInt(64.W))
		val rs1_data	= Input(UInt(64.W))

        val rd_result   = Output(UInt(RegDataLen.W))
		val w_rs_en		= Output(Bool())
        val csr_result  = Output(UInt(CsrDataLen.W))
		val w_csr_en 	= Output(Bool())
    })

	val reg_rd_result	= RegInit(0.U(64.W))
	val reg_csr_result 	= RegInit(0.U(64.W))
	val reg_w_rs_en		= RegInit(false.B)
	val reg_w_csr_en 	= RegInit(false.B)
	val temp_csr_result_data = MuxLookup(io.exuType(5,0),0.U(65.W),List(
		CSRType.csr_csrrs	-> Cat(1.U(1.W),io.rs1_data | io.csr_data),
		CSRType.csr_csrrsi	-> Cat(1.U(1.W),io.csr_data	| io.imm_data),
		CSRType.csr_csrrw	-> Cat(1.U(1.W),io.rs1_data),
		CSRType.csr_csrrwi	-> Cat(1.U(1.W),Cat(io.csr_data(63,5),io.imm_data(4,0))),
		CSRType.csr_csrrc	-> Cat(1.U(1.W),(~io.rs1_data) & io.csr_data),
		CSRType.csr_csrrci	-> Cat(1.U(1.W),(~io.imm_data) & io.csr_data)
	))

	when(io.in_flush){
		reg_rd_result		:= 0.U
		reg_w_rs_en			:= false.B
		reg_csr_result		:= 0.U 
		reg_w_csr_en		:= false.B
	}.elsewhen(io.stall){
		reg_rd_result		:= reg_rd_result
		reg_w_rs_en			:= reg_w_rs_en
		reg_csr_result		:= reg_csr_result
		reg_w_csr_en		:= reg_w_csr_en
	}.otherwise{
		reg_rd_result		:= io.csr_data
		reg_w_rs_en			:= io.valid
		reg_csr_result		:= temp_csr_result_data(63,0)
		reg_w_csr_en		:= temp_csr_result_data(64) & io.valid
	}
	// reg_rd_result		:= Mux(io.stall,reg_rd_result,io.csr_data)
	// reg_w_rs_en			:= Mux(io.stall,reg_w_rs_en,io.valid)
	// reg_csr_result		:= Mux(io.stall,reg_csr_result,temp_csr_result_data(63,0))
	// reg_w_csr_en		:= Mux(io.stall,reg_w_csr_en,temp_csr_result_data(64) & io.valid)
    io.rd_result        := reg_rd_result
    io.csr_result       := reg_csr_result
	io.w_rs_en			:= reg_w_rs_en
	io.w_csr_en			:= reg_w_csr_en
}