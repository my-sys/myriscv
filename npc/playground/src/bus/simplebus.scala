import chisel3._
import chisel3.util._

class SimpleBus_w extends Bundle{
	//address 
	val addr 		= Output(UInt(64.W))
	// 00 is read , 01 is write , 10 is ReadBurst
	// 11 is WriteBurst 
	val cmd 		= Output(UInt(2.W)) 
	val size 		= Output(UInt(2.W)) // unit is the bus width, len = size + 1,default = 0
	val data 		= Output(UInt(64.W))
	val wstrb 		= Output(UInt(8.W))

	def isRead()  	= !cmd(0)
	def isWrite() 	= cmd(0)
	def isBurst() 	= cmd(1)

}

class SimpleBus_r extends Bundle{
	// 00 transport is fail, 01 read is success, 10 write is success
	// 11 transport is in progress, can not be interrupted
	val resp 		= Output(UInt(2.W))
	val data 		= Output(UInt(64.W))
}

class SimpleBus extends Bundle{
	val w = Decoupled(new SimpleBus_w)
	val r = Flipped(Decoupled(new SimpleBus_r))
}

class SimpleCrossbar extends Module{
	val io = IO(new Bundle{
		val ICache_bus 	= Flipped(new SimpleBus)
		val DCache_bus 	= Flipped(new SimpleBus)
		val out_bus 	= new SimpleBus
	})

	val lockFun = ((x:SimpleBus_w) => x.isWrite() && x.isBurst())
	// two way and lock eight cycles 
	val simple_arb = Module(new LockingArbiter(chiselTypeOf(SimpleBus_w),2,8,Some(lockFun))
	simple_arb.io.in(0) <> io.DCache_bus.w
	simple_arb.io.in(1) <> io.ICache_bus.w

	io.out_bus.w <> simple_arb.io.out
	io.ICache_bus.r.data := io.out_bus.r.data 
	io.DCache_bus.r.data := io.out_bus.r.data 
	io.ICache_bus.r.resp := io.out_bus.r.resp 
	io.DCache_bus.r.resp := io.out_bus.r.resp

	//val select_r = RegInit(0.U(log2Up(n).W))
	val select_r = RegInit(0.U(1.W))
	io.DCache_bus.r.valid := Mux(select_r === 0.U, io.out_bus.r.valid,false.B)
	io.ICache_bus.r.valid := Mux(select_r === 1.U, io.out_bus.r.valid,false.B)

	io.ICache_bus.r.data  := io.out_bus.r.data
	io.DCache_bus.r.data  := io.out_bus.r.data

	val bus_idle :: bus_read :: bus_write :: Nil = Enum(3)
	val bus_state = RegInit(bus_idle)

	switch(bus_state){
		is(bus_idle){
			when(simple_arb.io.out.fire()){
				select_r := simple_arb.io.chosen
				when(simple_arb.io.out.w.isRead()){
					bus_state := bus_read
				}.elsewhen(simple_arb.io.out.w.isWrite()){
					bus_state := bus_write
				}
			}
		}
		// suppose read or write is success imediately
		is(bus_read){
			when(io.out_bus.r.fire()){
				bus_state := bus_idle
			}
		}
		is(bus_write){
			when(io.out_bus.r.fire()){
				bus_state := bus_idle
			}
		}
	}

}