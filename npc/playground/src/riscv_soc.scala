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

class riscv_soc extends Module{
  val io = IO(new Bundle{
    val difftest_reg  = Output(Vec(32, UInt(64.W)))
    val difftest_pc   = Output(UInt(64.W))
    val difftest_inst = Output(UInt(32.W))
  })
  val core = Module(new Core)
  val axi_ram = Module(new AXI_RAM)

  val temp_inst         = WireInit(1.U(64.W))
  BoringUtils.addSource(temp_inst,"DIFFTEST_INST1")
  val difftest_reg      = VecInit(Seq.fill(32)(0.U(64.W)))
  val difftest_pc       = WireInit(0.U(64.W))
  val difftest_inst     = WireInit(0.U(64.W))
  //val difftest_reg    = WireInit(0.U.asTypeOf(Vec(32,UInt(64.W))))
  BoringUtils.addSink(difftest_reg,"DIFFTEST_REG")
  BoringUtils.addSink(difftest_pc,"DIFFTEST_PC")
  BoringUtils.addSink(difftest_inst,"DIFFTEST_INST1")
  io.difftest_reg     := difftest_reg
  io.difftest_pc      := difftest_pc
  io.difftest_inst    := difftest_inst

  core.io.in.rdata    :=  axi_ram.io.rdata
  axi_ram.io.waddr    :=  core.io.out.waddr 
  axi_ram.io.wdata    :=  core.io.out.wdata
  axi_ram.io.raddr    :=  core.io.out.raddr
  axi_ram.io.wen      :=  core.io.out.wen
  axi_ram.io.wstrb    :=  core.io.out.wstrb 

}