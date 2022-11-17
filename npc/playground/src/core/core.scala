import chisel3._
import chisel3.util._ 

class Core extends Module{
    io = IO(new Bundle{
        val in_data = Input(UInt(32.W))
        val addr    = Output(UInt(64.W))
        val out_data = Output(UInt(32.W))
    })

}