import chisel3._
import chisel3.util._ 
import chisel3.util.experimental.BoringUtils

///1 "hff".U
//2 "o377".U
//3 "b1111_1111".U
class Fetch extends Module{
    val io = IO(new Bundle {
        val in = new Bundle{
            val inst    = Input(UInt(32.W))
            val next_pc = Input(UInt(64.W))
            val valid_next_pc = Input(Bool())
        }

        val out = new Bundle{
            val pc      = Output(UInt(64.W))
            val inst    = Output(UInt(32.W))
        }        
    })

    val inst            = io.in.inst 
    val next_pc         = io.in.next_pc
    val valid_next_pc   = io.in.valid_next_pc

    //指令的初始执行位置为0x8000_0000 Reset_Vector
    val regPC = RegInit("h8000_0000".U(64.W))
    val regInst = RegInit(0.U(32.W))

    when(valid_next_pc){
        regPC := regPC + 4.U 
    }.otherwise{
        regPC := next_pc
    }
    
    regInst := inst
    io.out.pc := regPC 
    io.out.inst := regInst
    BoringUtils.addSource(regPC,"DIFFTEST_PC")
    BoringUtils.addSource(regInst,"DIFFTEST_INST")
}