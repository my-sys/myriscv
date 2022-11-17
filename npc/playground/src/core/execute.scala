import chisel3._ 
import chisel3.util._ 

class Exu extends Module with CoreParameters{
    io = IO(new Bundle{
        val opType  = Input(UInt(OpTypeLen.W))
        val exuType = Input(UInt(ExuTypeLen.W))
        val rs1_data = Input(UInt())
        val rs2_data = Input(UInt())
        val dest_addr = Output(UInt(RegAddrLen.W))
        val data    = Output(UInt(RegDataLen.W))
    })

    val alu_exu = Module(new ALU_EXU())
    val lsu_exu = Module(new LSU_EXU())
    val csr_exu = Module(new CSR_EXU())
    
    val mu_exu  = Module(new MU_EXU())

    val default_valid = "b0000".U
    val valid = MuxLookup(opType,default_valid,List(
        Op_type.op_alu     ->  "b0001".U,
        Op_type.op_lsu     ->  "b0010".U,
        Op_type.op_csr     ->  "b0100".U,
        Op_type.op_mu      ->  "b1000".U
    ))

    alu_exu.io.valid := valid(0)
    lsu_exu.io.valid := valid(1)
    csr_exu.io.valid := valid(2)
    mu_exu.io.valid  := valid(3)

    alu_exu.io.exuType := io.exuType 
    alu_exu.io.op_data1 := io.rs1_data 
    alu_exu.io.op_data2 := io.rs2_data


    // Mux1H
    io.data := MuxCase(0.U,Array(
        valid(0) -> alu_exu.io.result,
        valid(1) -> lsu_exu.io.result,
        valid(2) -> csr_exu.io.result,
        valid(3) -> mu_exu.io.result
    ))
}



