import chisel3._ 
import chisel3.util._ 
// crossbar_1 to connect ?
class Clint extends Module{
	val io = IO(new Bundle{
		val valid = Input(Bool())
		val bits 	= new Bundle{
			val addr  	= Input(UInt(64.W))
			val wdata 	= Input(UInt(64.W))
			val rdata 	= Output(UInt(64.W))
			val is_w 	= Input(Bool())
		}
		val ready = Output(Bool())
		val soft_irq = Output(Bool())
		val time_irq = Output(Bool())
		def fire: Bool = valid & ready
	})
	// base address 0x2000000
	// msip	0x00
	// mtime 0x20
	// mtimecmp 0x30
	val reg_msip 		= RegInit(0.U(1.W))
	val reg_mtime 		= RegInit(0.U(64.W))
	val reg_mtimecmp 	= RegInit("hffff_ffff_ffff_ffff".U(64.W))
	val reg_ready 		= RegInit(false.B)
	val red_rdata 		= RegInit(0.U(64.W))
	reg_mtime := reg_mtime + 1.U 
	val idle :: busy :: Nil = Enum(2)
	val reg_state = RegInit(idle)
	val temp_data = MuxLookup(io.bits.addr(7,0),0.U(64.W),List(
		"h00".U	->reg_msip,
		"h20".U ->reg_mtime,
		"h30".U ->reg_mtimecmp
	))
	switch(reg_state){
		is(idle){
			when(io.valid){
				when(io.bits.is_w){
					reg_msip 		:= Mux(io.bits.addr(7,0) === "h00".U,io.bits.wdata(0),reg_msip)
					reg_mtimecmp	:= Mux(io.bits.addr(7,0) === "h30".U,io.bits.wdata,reg_mtimecmp)
				}
				red_rdata := temp_data
				reg_state := busy
				reg_ready := true.B
			}
		}
		is(busy){
			when(io.fire){
				reg_state := idle
				reg_ready := false.B
			}
		}
	}
	io.ready 		:= reg_ready
	io.bits.rdata 	:= red_rdata
	io.time_irq 	:= (reg_mtimecmp < reg_mtime)
	io.soft_irq 	:= reg_msip
}