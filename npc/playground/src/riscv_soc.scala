import chisel3._ 
import chisel3.util.experimental.BoringUtils
import chisel3.util._

// BoringUtils.addSource(x, "uniqueId")
// BoringUtils.addSink(y, "uniqueId)

// equal y := x
// BoringUtils.bore(constant.x, Seq(expect.y))

class riscv_soc extends Module{
  val io = IO(new Bundle{
    val difftest_reg  = Output(Vec(32, UInt(64.W)))
    val difftest_pc   = Output(UInt(64.W))
    val difftest_inst = Output(UInt(32.W))
  })
  val core = new Core
  val axi_ram = new AXI_RAM

  BoringUtils.bore(core.decode.reg_file,io.difftest_reg)
  BoringUtils.bore(core.fetch.regPC,io.difftest_pc)
  BoringUtils.bore(core.fetch.regInst,difftest_inst)
  core.io.in.rdata := axi_ram.io.rdata
  core.io.out<>axi_ram  


}