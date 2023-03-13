import chisel3._ 
import chisel3.util._ 
import chisel3.util.experimental.BoringUtils
class RegCtrl extends CoreParameters{
    val regfile = Mem(32, UInt(RegDataLen.W))
	// this not obey the rules (when write and read both in one cycle),you should handle by yourself
    def read(addr: UInt): UInt = Mux(addr === 0.U, 0.U(64.W), regfile.read(addr))
    def write(addr: UInt, data: UInt) = {
        regfile(addr) := data
    }
}
//mtvec
//mcause
//mtval(mbadaddr)
//mepc
//mstatus 	0x300 
//mie		0x304 
//mip 		
object CSRAddrType{
	val mvendorid	= "hf11".U
	val marchid		= "hf12".U 
	val mimpid		= "hf13".U 
	val mhartid		= "hf14".U 
	val mstatus		= "h300".U 
	val misa		= "h301".U 
	val medeleg		= "h302".U 
	val mideleg		= "h303".U 
	val mie			= "h304".U 
	val mtvec		= "h305".U 
	val mcounteren	= "h306".U 
	val mscratch	= "h340".U 
	val mepc		= "h341".U 
	val mcause		= "h342".U 
	val mtval		= "h343".U 
	val mip			= "h344".U 
	val mcycle		= "hB00".U 
	val minstret	= "hB02".U
}
class CsrRegCtrl extends Module with CoreParameters{
	val io = IO(new Bundle{
		val in = new Bundle{
			val csr_addr	= Input(UInt(12.W))
			val csr_data 	= Input(UInt(64.W))
			val w_csr_en		= Input(Bool())
			val pc 				= Input(UInt(64.W))
			val next_pc 	= Input(UInt(64.W))

			val time_irq		= Input(Bool())
			val soft_irq 		= Input(Bool())
			val mtval 			= Input(UInt(64.W))
			val exception		= Input(UInt(5.W))
			val is_exception	= Input(Bool())
			val commit			= Input(Bool())
		}
		val r = new Bundle{
			val csr_raddr 		= Input(UInt(12.W))
			val csr_rdata 		= Output(UInt(64.W))
			val csr_mtvec 		= Output(UInt(64.W))
			val csr_mepc 		= Output(UInt(64.W))
			val csr_mstatus		= Output(UInt(64.W))
			val csr_mie 		= Output(UInt(64.W))
		}
	})
	val irq = io.in.time_irq | io.in.soft_irq
	// CSR reg
	val reg_mstatus = RegInit(0.U(64.W))
	val reg_mie 	= RegInit(0.U(64.W))
	val reg_mtvec	= RegInit(0.U(64.W))
	val reg_mscratch = RegInit(0.U(64.W))
	val reg_mepc 	= RegInit(0.U(64.W))
	val reg_mcause 	= RegInit(0.U(64.W))
	val reg_mtval 	= RegInit(0.U(64.W))
	val reg_mip 	= RegInit(0.U(64.W))
	val reg_mcycle	= RegInit(0.U(64.W))
	val reg_minstret = RegInit(0.U(64.W))

	BoringUtils.addSource(reg_mstatus,"DIFFTEST_MSTATUS")
	BoringUtils.addSource(reg_mcause,"DIFFTEST_MCAUSE")
	BoringUtils.addSource(reg_mepc,"DIFFTEST_MEPC")
	BoringUtils.addSource(reg_mtvec,"DIFFTEST_MTVEC")

//---------------------------------------- write operation------------------------------------------------------------
	when(io.in.is_exception){
		reg_mepc 	:= io.in.pc
		reg_mcause 	:= 0x800000000000000//io.in.exception
		reg_mtval 	:= io.in.mtval
		reg_mstatus := (reg_mstatus &"hffff_ffff_ffff_ff77".U) | (Mux(reg_mstatus(3),"h1880".U(64.W),"h1800".U(64.W)))
	}.elsewhen(irq){
		reg_mepc 	:= Mux(io.in.is_exception,io.in.pc,io.in.next_pc)
		reg_mcause 	:= Cat("h400_0000_0000_0000".U(59.W),Mux(io.in.time_irq,7.U(5.W),3.U(5.W)))
		reg_mtval 	:= io.in.mtval
		reg_mstatus := (reg_mstatus &"hffff_ffff_ffff_ff77".U) | (Mux(reg_mstatus(3),"h1880".U(64.W),"h1800".U(64.W)))
	}.otherwise{
		when(io.in.w_csr_en){
			reg_mepc	:= Mux(io.in.csr_addr === CSRAddrType.mepc,io.in.csr_data,reg_mepc)
			reg_mcause	:= Mux(io.in.csr_addr === CSRAddrType.mcause,io.in.csr_data,reg_mcause)
			reg_mtval	:= Mux(io.in.csr_addr === CSRAddrType.mtval,io.in.csr_data,reg_mtval)
			reg_mstatus := Mux(io.in.csr_addr === CSRAddrType.mstatus,io.in.csr_data,reg_mstatus)
		}
	}

	when(io.in.w_csr_en){
		when(!irq & !io.in.is_exception){
			reg_mie 	:= Mux(io.in.csr_addr === CSRAddrType.mie,io.in.csr_data,reg_mie)
			reg_mtvec 	:= Mux(io.in.csr_addr === CSRAddrType.mtvec,io.in.csr_data,reg_mtvec)
			reg_mscratch	:= Mux(io.in.csr_addr === CSRAddrType.mscratch,io.in.csr_data,reg_mscratch)
			//reg_mip 	:= Mux(io.in.csr_addr == "h".U,io.in.csr_data,)
			//reg_mcycle	:= Mux(io.in.csr_addr == "h".U,io.in.csr_data,)
			//reg_minstret	:= Mux(io.in.csr_addr == "h".U,io.in.csr_data,)
		}
	}
	// how to use the mip ???

	when(io.in.w_csr_en){
		reg_mcycle		:= Mux(io.in.csr_addr === CSRAddrType.mcycle,io.in.csr_data,reg_mcycle + 1.U)
		reg_minstret	:= Mux(io.in.csr_addr === CSRAddrType.minstret,io.in.csr_data,Mux(io.in.commit,reg_minstret + 1.U,reg_minstret))
	}.otherwise{
		reg_mcycle		:= reg_mcycle + 1.U
		reg_minstret	:= Mux(io.in.commit,reg_minstret + 1.U,reg_minstret)
	}

//--------------------------------------- read operation-----------------------------------------------------------------
	val csr_rdata = MuxLookup(io.r.csr_raddr,0.U(64.W),List(
		CSRAddrType.mvendorid 	-> (0.U(64.W)),
		CSRAddrType.marchid		-> (0.U(64.W)),
		CSRAddrType.mimpid 		-> (0.U(64.W)),
		CSRAddrType.mhartid 	-> (0.U(64.W)),

		CSRAddrType.mstatus 	-> reg_mstatus,
		CSRAddrType.misa		-> (0.U(64.W)),
		CSRAddrType.medeleg		-> (0.U(64.W)),
		CSRAddrType.mideleg		-> (0.U(64.W)),
		CSRAddrType.mie			-> reg_mie,
		CSRAddrType.mtvec		-> reg_mtvec,
		CSRAddrType.mcounteren	-> (0.U(64.W)),
		CSRAddrType.mscratch	-> reg_mscratch,
		CSRAddrType.mepc 		-> reg_mepc,
		CSRAddrType.mcause 		-> reg_mcause,
		CSRAddrType.mtval		-> reg_mtval,
		CSRAddrType.mip 		-> reg_mip,

		CSRAddrType.mcycle		-> reg_mcycle,
		CSRAddrType.minstret	-> reg_minstret
	))
	io.r.csr_rdata	:= Mux((io.r.csr_raddr === io.in.csr_addr)&io.in.w_csr_en,io.in.csr_data,csr_rdata)
	io.r.csr_mtvec	:= Mux((io.in.csr_addr === CSRAddrType.mtvec)&io.in.w_csr_en,io.in.csr_data,reg_mtvec)
	io.r.csr_mepc 	:= Mux((io.in.csr_addr === CSRAddrType.mepc)&io.in.w_csr_en,io.in.csr_data,reg_mepc)
	io.r.csr_mstatus := Mux((io.in.csr_addr === CSRAddrType.mstatus)&io.in.w_csr_en,io.in.csr_data,reg_mstatus)
	io.r.csr_mie 	:= Mux((io.in.csr_addr === CSRAddrType.mie)&io.in.w_csr_en,io.in.csr_data,reg_mie)
}