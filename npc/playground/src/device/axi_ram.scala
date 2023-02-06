import chisel3._
import chisel3.util._ 

class RAMCtrl extends BlackBox{
    val io = IO(new Bundle{
        val clock   = Input(Clock())
        val raddr   = Input(UInt(64.W))
        val rdata   = Output(UInt(64.W))
        val waddr   = Input(UInt(64.W))
        val wdata   = Input(UInt(64.W))
        val wmask   = Input(UInt(64.W))
        val wen     = Input(Bool())
    })
}

class AXI_RAM extends Module{
    val io = IO(new Bundle{
        val raddr   = Input(UInt(64.W))
        val rdata   = Output(UInt(64.W))
        val waddr   = Input(UInt(64.W))
        val wdata   = Input(UInt(64.W))
        val wstrb   = Input(UInt(8.W))
        val wen     = Input(Bool())
    })

    val mem = Module(new RAMCtrl)
    mem.io.clock    := clock
    mem.io.raddr    := io.raddr
    io.rdata        := mem.io.rdata 
    mem.io.waddr    := io.waddr
    mem.io.wdata    := io.wdata 
    mem.io.wmask    := Cat(io.wstrb.asBools.map(Fill(8,_))) 
    mem.io.wen      := io.wen 
}