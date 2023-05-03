import chisel3._ 

import chisel3.util._
import chisel3.util.experimental.BoringUtils
// BoringUtils.addSource(x, "uniqueId")
// BoringUtils.addSink(y, "uniqueId)

// equal y := x
// BoringUtils.bore(constant.x, Seq(expect.y))

//  val kk = Wire(UInt(64.W))
//  kk := 0.U
//  BoringUtils.addSource(kk,"AABBCC")

//  val zz = Wire(UInt(64.W))
//  zz := 0.U
  //BoringUtils.addSink(zz,"AABBCC")
//  io.difftest_pc := zz
  // core.decode.reg_file.regfile
  //BoringUtils.bore(VecInit((0 to 31).map(i => core.decode.reg_file.read(i.U))),Seq(io.difftest_reg))
  //BoringUtils.addSource(VecInit((0 to 31).map(i => i.U)),"DIFFTEST_REG")
  //BoringUtils.bore(core.fetch.regPC,Seq(io.difftest_pc))
  //BoringUtils.bore(core.fetch.regInst,Seq(io.difftest_inst))
  //val difftest_reg    = WireInit(0.U.asTypeOf(Vec(32,UInt(64.W))))


  
class riscv_soc extends Module{
  val io = IO(new Bundle{
    // val difftest_reg  	= Output(Vec(32, UInt(64.W)))
    // val difftest_pc   	= Output(UInt(64.W))
    // val difftest_inst 	= Output(UInt(32.W))
	// val difftest_commit = Output(Bool())
	// val inst_counter 	= Output(UInt(64.W))
	// val difftest_irq 	= Output(Bool())
	// val difftest_mstatus = Output(UInt(64.W))
	// val difftest_mcause  = Output(UInt(64.W))
	// val difftest_mepc 	= Output(UInt(64.W))
	// val difftest_mtvec  = Output(UInt(64.W))
	// val difftest_peripheral = Output(Bool())
  })
  val core = Module(new Core)
  val axi_ram = Module(new AXI_RAM)
  val sram0 = Module(new SRAM)
  val sram1 = Module(new SRAM)
  val sram2 = Module(new SRAM)
  val sram3 = Module(new SRAM)
  val sram4 = Module(new SRAM)
  val sram5 = Module(new SRAM)
  val sram6 = Module(new SRAM)
  val sram7 = Module(new SRAM)
//   val difftest_inst     = WireInit(2.U(64.W))
//   //val temp_inst         = core.io.out.raddr
  
//   val difftest_reg      = VecInit(Seq.fill(32)(0.U(64.W)))
//   val difftest_pc       = WireInit(0.U(64.W))
//   val difftest_commit   = WireInit(false.B)
//   val difftest_irq 		= WireInit(false.B)
//   val inst_counter		= WireInit(0.U(64.W))

//   val difftest_mstatus  = WireInit(0.U(64.W))
//   val difftest_mcause   = WireInit(0.U(64.W))
//   val difftest_mepc     = WireInit(0.U(64.W))
//   val difftest_mtvec    = WireInit(0.U(64.W))
//   val difftest_peripheral = WireInit(false.B)
  
//   BoringUtils.addSink(difftest_reg,"DIFFTEST_REG")
//   BoringUtils.addSink(difftest_pc,"DIFFTEST_PC")
//   BoringUtils.addSink(difftest_inst,"DIFFTEST_INST")
//   BoringUtils.addSink(difftest_commit, "DIFFTEST_COMMIT")
//   BoringUtils.addSink(inst_counter, "INST_COUNTER")
//   BoringUtils.addSink(difftest_irq, "DIFFTEST_IRQ")

//   BoringUtils.addSink(difftest_mstatus, "DIFFTEST_MSTATUS")
//   BoringUtils.addSink(difftest_mcause, "DIFFTEST_MCAUSE")
//   BoringUtils.addSink(difftest_mepc, "DIFFTEST_MEPC")
//   BoringUtils.addSink(difftest_mtvec, "DIFFTEST_MTVEC")
//   BoringUtils.addSink(difftest_peripheral, "DIFFTEST_PERIPHERAL")

//   io.difftest_reg     := difftest_reg
//   io.difftest_pc      := difftest_pc
//   io.difftest_inst    := difftest_inst 
//   io.difftest_commit  := difftest_commit
//   io.inst_counter	  := inst_counter
//   io.difftest_irq 	  := difftest_irq

//   io.difftest_mstatus	:= difftest_mstatus
//   io.difftest_mcause	:= difftest_mcause
//   io.difftest_mepc		:= difftest_mepc
//   io.difftest_mtvec		:= difftest_mtvec
//   io.difftest_peripheral := difftest_peripheral

	axi_ram.io.ram_bus <> core.io.axi_bus
//----------ICache------------------------------
	core.io.isram.rdata(0) := sram0.io.rdata
	core.io.isram.rdata(1) := sram1.io.rdata 
	core.io.isram.rdata(2) := sram2.io.rdata
	core.io.isram.rdata(3) := sram3.io.rdata 

	sram0.io.addr := core.io.isram.addr
	sram0.io.cen  := false.B 
	sram1.io.addr := core.io.isram.addr
	sram1.io.cen  := false.B 
	sram2.io.addr := core.io.isram.addr
	sram2.io.cen  := false.B 
	sram3.io.addr := core.io.isram.addr
	sram3.io.cen  := false.B 

	sram0.io.wen  := core.io.isram.wen(0)
	sram0.io.wmask := core.io.isram.data_wmask
	sram0.io.wdata := core.io.isram.data_wdata
	sram1.io.wen  := core.io.isram.wen(0)
	sram1.io.wmask := core.io.isram.tag_wmask
	sram1.io.wdata := core.io.isram.tag_wdata

	sram2.io.wen  := core.io.isram.wen(1)
	sram2.io.wmask := core.io.isram.data_wmask
	sram2.io.wdata := core.io.isram.data_wdata
	sram3.io.wen  := core.io.isram.wen(1)
	sram3.io.wmask := core.io.isram.tag_wmask
	sram3.io.wdata := core.io.isram.tag_wdata

//----------DCache-----------------------
	core.io.dsram.rdata(0) := sram4.io.rdata
	core.io.dsram.rdata(1) := sram5.io.rdata 
	core.io.dsram.rdata(2) := sram6.io.rdata
	core.io.dsram.rdata(3) := sram7.io.rdata 

	sram4.io.addr := core.io.dsram.addr
	sram4.io.cen  := false.B 
	sram5.io.addr := core.io.dsram.addr
	sram5.io.cen  := false.B 
	sram6.io.addr := core.io.dsram.addr
	sram6.io.cen  := false.B 
	sram7.io.addr := core.io.dsram.addr
	sram7.io.cen  := false.B 

	sram4.io.wen  := core.io.dsram.wen(0)
	sram4.io.wmask := core.io.dsram.data_wmask
	sram4.io.wdata := core.io.dsram.data_wdata
	sram5.io.wen  := core.io.dsram.wen(0)
	sram5.io.wmask := core.io.dsram.tag_wmask
	sram5.io.wdata := core.io.dsram.tag_wdata

	sram6.io.wen  := core.io.dsram.wen(1)
	sram6.io.wmask := core.io.dsram.data_wmask
	sram6.io.wdata := core.io.dsram.data_wdata
	sram7.io.wen  := core.io.dsram.wen(1)
	sram7.io.wmask := core.io.dsram.tag_wmask
	sram7.io.wdata := core.io.dsram.tag_wdata
	// core.io.sram0 <>sram0.io 
	// core.io.sram1 <>sram1.io 
	// core.io.sram2 <>sram2.io 
	// core.io.sram3 <>sram3.io 

	// core.io.sram4 <>sram4.io 
	// core.io.sram5 <>sram5.io 
	// core.io.sram6 <>sram6.io 
	// core.io.sram7 <>sram7.io 
//   core.io.in.rdata    :=  axi_ram.io.rdata
//   axi_ram.io.waddr    :=  core.io.out.waddr 
//   axi_ram.io.wdata    :=  core.io.out.wdata
//   axi_ram.io.raddr    :=  core.io.out.raddr
//   axi_ram.io.wen      :=  core.io.out.wen
//   axi_ram.io.wstrb    :=  core.io.out.wstrb 

}