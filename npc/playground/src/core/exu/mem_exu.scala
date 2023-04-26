import chisel3._
import chisel3.util._

object LSUType{
	def lsu_lb 		= "b000_00".U 
	def lsu_lbu 	= "b100_00".U 
	def lsu_ld		= "b011_00".U 
	def lsu_lh 		= "b001_00".U 
	def lsu_lhu		= "b101_00".U 
	def lsu_lw 		= "b010_00".U 
	def lsu_lwu 	= "b110_00".U 

	def lsu_sb		= "b000_10".U 
	def lsu_sd 		= "b011_10".U 
	def lsu_sh 		= "b001_10".U 
	def lsu_sw 		= "b010_10".U 
}

//最低两位分别是指令的3 位，第5位(从0开始数)
//中间三位与14~12位。原因尽量不改变相对位置。也许会降低解码阶段复杂程度
object FENCEType{
	def fence 		= "b000_01".U 
	def fence_i 	= "b001_01".U 
	def fence_vma	= "b000_10".U 
}
//object SFENCE_VMA

class MEM_EXU extends Module{
    val io = IO(new Bundle{
		val valid 		= Input(Bool())
		val exuType		= Input(UInt(7.W))
		val rs1_data	= Input(UInt(64.W))
		val rs2_data 	= Input(UInt(64.W))
		//val dest_addr 	= Input(UInt(5.W))
		val imm 		= Input(UInt(32.W))

		val dest_data	= Output(UInt(64.W))
		val dest_is_w	= Output(Bool())
		val ready		= Output(Bool())

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
		val difftest_peripheral = Output(Bool())
    })

	val rs1_data	= io.rs1_data
	val rs2_data	= io.rs2_data
	val exuType		= io.exuType
	val imm 		= Cat(Fill(32,io.imm(31)),io.imm)
	val valid 		= io.valid 

	val reg_ready 	= RegInit(true.B)

	val reg_bus_addr 		= RegInit(0.U(64.W))
	val reg_bus_rdata 		= RegInit(0.U(64.W))
	val reg_bus_wdata 		= RegInit(0.U(64.W))
	val reg_bus_wstrb 		= RegInit(0.U(8.W))
	val reg_bus_is_w 		= RegInit(false.B)
	val reg_bus_size 		= RegInit(3.U(2.W)) // 2^3 = 8
	val reg_bus_valid 		= RegInit(false.B)

	val reg_dest_addr 		= RegInit(0.U(5.W))
	val reg_result_data 	= RegInit(0.U(64.W))
	val reg_w_rs_en 		= RegInit(false.B)

	val reg_exuType			= RegInit(0.U(7.W))
	val reg_difftest_peripheral = RegInit(false.B)

//----------------------------------------------------------------------------------------
	val mem_r_data				= MuxLookup(reg_bus_addr(2,0),io.bus.bits.rdata,List(
		"b000".U 			-> io.bus.bits.rdata,
		"b001".U 			-> io.bus.bits.rdata(63,8),
		"b010".U 			-> io.bus.bits.rdata(63,16),
		"b011".U 			-> io.bus.bits.rdata(63,24),
		"b100".U 			-> io.bus.bits.rdata(63,32),
		"b101".U 			-> io.bus.bits.rdata(63,40),
		"b110".U 			-> io.bus.bits.rdata(63,48),
		"b111".U 			-> io.bus.bits.rdata(63,56)
	))

	val mem_data_result		= MuxLookup(reg_exuType,0.U(64.W),List(
		LSUType.lsu_ld 		-> mem_r_data,
		LSUType.lsu_lb 		-> Cat(Fill(56,mem_r_data(7)),	mem_r_data(7,0)),
		LSUType.lsu_lbu 	-> Cat(Fill(56,0.U(1.W)),		mem_r_data(7,0)),
		LSUType.lsu_lh		-> Cat(Fill(48,mem_r_data(15)), mem_r_data(15,0)),
		LSUType.lsu_lhu 	-> Cat(Fill(48,0.U(1.W)),		mem_r_data(15,0)),
		LSUType.lsu_lw 		-> Cat(Fill(32,mem_r_data(31)),	mem_r_data(31,0)),
		LSUType.lsu_lwu 	-> Cat(Fill(32,0.U(1.W)),		mem_r_data(31,0))
	))

	val mem_addr 	= rs1_data + imm
	val w_mem_en	= valid & exuType(1)
	val bus_size 	= exuType(3,2)
	// 写没有处理好，缺少许多种情况
	val mem_wstrb			= MuxLookup(io.exuType,0.U(64.W),List(
		LSUType.lsu_sb 		-> (("b0000_0001".U) << mem_addr(2,0)),
		LSUType.lsu_sd		-> (("b1111_1111".U)<< mem_addr(2,0)),
		LSUType.lsu_sh 		-> (("b0000_0011".U)<< mem_addr(2,0)),
		LSUType.lsu_sw 		-> (("b0000_1111".U)<< mem_addr(2,0))
	))

	// 根据状态机,进行改变值
	val ls_idle :: ls_busy :: Nil 	= Enum(2)
	val reg_ls_state 				= RegInit(ls_idle)

	// move data to the appropriate position
	// move data to the appropriate position
	val mem_w_data 		= rs2_data << Cat(mem_addr(2,0),0.U(3.W))
	switch(reg_ls_state){
		is(ls_idle){
			reg_ls_state	:= ls_idle
			reg_bus_addr	:= 0.U 
			reg_bus_wdata	:= 0.U 
			reg_bus_wstrb	:= 0.U 
			reg_bus_is_w	:= false.B 
			reg_bus_valid	:= false.B 
			reg_bus_size	:= 0.U 

			reg_exuType		:= 0.U 

			reg_dest_addr	:= 0.U 
			reg_result_data	:= 0.U 
			reg_w_rs_en		:= false.B 
			reg_ready 		:= true.B 
			reg_difftest_peripheral := false.B
			when(valid){
				reg_ls_state	:= ls_busy
				reg_exuType		:= exuType
				reg_bus_addr	:= mem_addr
				reg_bus_wdata	:= mem_w_data
				reg_bus_wstrb	:= mem_wstrb
				reg_bus_is_w 	:= w_mem_en
				reg_bus_valid	:= true.B 
				reg_bus_size	:= bus_size
				reg_ready 		:= false.B 
				reg_difftest_peripheral := Mux(mem_addr(63,31) === 0.U,true.B,false.B)
			}
		}
		is(ls_busy){
			when(io.bus.fire){
				reg_ls_state	:= ls_idle

				reg_bus_is_w	:= false.B 
				reg_bus_valid 	:= false.B 
				reg_result_data	:= mem_data_result
				reg_w_rs_en		:= !reg_bus_is_w
				reg_ready 		:= true.B 
			}
		}
	}

	io.dest_data 	:= reg_result_data
	io.dest_is_w	:= reg_w_rs_en
	io.ready 		:= reg_ready
	io.difftest_peripheral := reg_difftest_peripheral
	
	val chose_chancel = valid && (reg_ls_state === ls_idle)
	io.bus.valid 		:= Mux(chose_chancel,valid,reg_bus_valid)
	io.bus.bits.addr	:= Mux(chose_chancel,mem_addr,reg_bus_addr)
	io.bus.bits.wdata	:= Mux(chose_chancel,mem_w_data,reg_bus_wdata)
	io.bus.bits.wstrb	:= Mux(chose_chancel,mem_wstrb,reg_bus_wstrb)
	io.bus.bits.is_w	:= Mux(chose_chancel,w_mem_en,reg_bus_is_w)
	io.bus.bits.size	:= Mux(chose_chancel,bus_size,reg_bus_size)
}