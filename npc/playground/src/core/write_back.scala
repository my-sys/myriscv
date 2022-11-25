import chisel3._
import chisel3.util._ 

class WriteBack extends Module with CoreParameters{
    io = IO(new Bundle{
        val in = new Bundle{
           // val rs_addr         = Input(UInt(RegAddrLen.W))
           // val result_data     = Input(UInt(RegDataLen.W))
           // val w_rs_en         = Input(Bool())
            val mem_addr        = Input(UInt(AddrLen.W))
            val mem_data        = Input(UInt(RegDataLen.W))
            val w_mem_en        = Input(Bool())
        }
        val out = new Bundle{
           // val rs_addr         = Output(UInt(RegAddrLen.W))
           // val result_data     = Output(UInt(RegDataLen.W))
           // val w_rs_en         = Output(Bool())
            val mem_addr        = Output(UInt(AddrLen.W))
            val mem_data        = Output(UInt(RegDataLen.W))
            val w_mem_en        = Output(Bool())            
        }

    })
    // 暂时还没想好怎么使用这一级
    io.out <>io.in


}