import chisel3._
import chisel3.util._ 


///1 "hff".U
//2 "o377".U
//3 "b1111_1111".U
class Fetch extends Module{
    val io = IO(new Bundle {
        val in_inst = Input(UInt(32.W))
        val out_pc   = Output(UInt(64.W))

        val out_inst = Output(UInt(32.W))
    })

    val regPC = RegInit("h8000_0000".U(64.W))
    val regInst = RegInit(0.U(32.W))
    regPC := regPC + 4.U
    io.out_pc := regPC 

    regInst := io.in_inst
    out_inst := regInst
}