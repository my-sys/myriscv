import chisel3._
import chisel3.util._ 

class Core extends Module{
    io = IO(new Bundle{
        val in = new Bundle{
            val rdata     = Input(UInt(64.W))
            //val inst     = Input(UInt(32.W))
            //val pc_addr      
            //val data_addr    = Input(UInt(64.W))       
        }

        val out = new Bundle{
            val waddr    = Output(UInt(64.W))
            val wdata    = Output(UInt(64.W))

            val raddr    = Output(UInt(64.W))
            val wen      = Output(Bool())
            val wstrb    = output(UInt(8.W))
            //val pc       = Output(UInt(64.W))
        }
    })

    val fetch = new Fetch
    val execute = new Exu
    val decode = new Decode

    // fetch
    fetch.io.in.inst            := io.in.rdata 
    io.out.raddr                := fetch.io.out.pc

    // decode 
    decode.io.in.inst           := fetch.io.out.inst 
    decode.io.in.pc             := fetch.io.out.pc

    // execute 
    execute.io.in.opType        := decode.io.out.opType
    execute.io.in.exuType       := decode.io.out.exuType
    execute.io.in.rs1_data      := decode.io.out.rs1_data
    execute.io.in.rs2_data      := decode.io.out.rs2_data
    execute.io.in.imm_data      := decode.io.out.imm_data
    execute.io.in.pc            := decode.io.out.pc
    execute.io.in.rs_addr       := decode.io.out.rs_addr

    fetch.io.in.next_pc         := execute.io.out.next_pc
    fetch.io.in.valid_next_pc   := execute.io.out.valid_next_pc
    // write-back

    decode.io.in.rs_addr        := execute.io.out.rs_addr
    decode.io.in.result_data    := execute.io.out.rs_data
    decode.io.in.w_rs_en        := execute.io.out.w_rs_en
}