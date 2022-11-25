import chisel3._ 
import chisel3.util._ 

class Exu extends Module with CoreParameters{
    val io = IO(new Bundle{
        val in = new Bundle{
            val opType  = Input(UInt(OpTypeLen.W))
            val exuType = Input(UInt(ExuTypeLen.W))
            val rs1_data = Input(UInt(RegDataLen.W))
            val rs2_data = Input(UInt(RegDataLen.W))
            val imm_data = Input(UInt(ImmLen.W))
            val pc       = Input(UInt(AddrLen.W))
            val rs_addr  = Input(UInt(RegAddrLen.W))
        }

        val out = new Bundle{
            val rs_addr         = Output(UInt(RegAddrLen.W))
            val rs_data         = Output(UInt(RegDataLen.W))
            val w_rs_en         = Output(Bool())
            val next_pc         = Output(UInt(AddrLen.W))
            val valid_next_pc   = Output(Bool())            
        }

    })

    val opType      = io.in.opType
    val exuType     = io.in.exuType 
    val rs1_data    = io.in.rs1_data 
    val rs2_data    = io.in.rs2_data
    val imm_data    = io.in.imm_data
    val pc          = io.in.pc 
    val rs_addr     = io.in.rs_addr


    // 声明一些寄存器，暂存流水线中的数据，这是必须的。
    val  reg_rs_addr        = RegInit(0.U(64.W))
    val  reg_rs_data        = RegInit(0.U(64.W))
    val  reg_next_pc        = RegInit(0.U(64.W))
    val  reg_valid_next_pc  = RegInit(false.B)
    val  reg_w_rs_en        = RegInit(false.B)


    val alu_exu = Module(new ALU_EXU())
    val lsu_exu = Module(new LSU_EXU())
    val csr_exu = Module(new CSR_EXU())
    val mu_exu  = Module(new MU_EXU())

    // Choosing the function unit to execute
    val default_valid = "b0000".U
    val valid = MuxLookup(opType,default_valid,List(
        Op_type.op_alu     ->  "b0001".U,
        Op_type.op_lsu     ->  "b0010".U,
        Op_type.op_csr     ->  "b0100".U,
        Op_type.op_mu      ->  "b1000".U    
    ))

    // function unit connection
    //alu_exu.io.valid := valid(0)
    //lsu_exu.io.valid := valid(1)
    //csr_exu.io.valid := valid(2)
    //mu_exu.io.valid  := valid(3)

    alu_exu.io.exuType  := exuType 
    alu_exu.io.op_data1 := rs1_data 
    alu_exu.io.op_data2 := rs2_data
    alu_exu.io.op_imm   := imm_data
    alu_exu.io.op_pc    := pc

    // The results of function unit 
    // Mux1H
    val temp_w_en_and_rs_data = MuxCase(0.U(65.W),Array(
        valid(0) -> Cat(alu_exu.io.w_rs_en.asUInt,alu_exu.io.result_data),
        valid(1) -> Cat(0.U(1.W),0.U(64.W)),
        valid(2) -> Cat(0.U(1.W),0.U(64.W)),
        valid(3) -> Cat(0.U(1.W),0.U(64.W))
    ))

    val w_rs_en = temp_w_en_and_rs_data(64)
    val rs_data = temp_w_en_and_rs_data(63,0)
    reg_rs_data := rs_data
    reg_rs_addr := rs_addr
    reg_w_rs_en := w_rs_en
    reg_next_pc := alu_exu.io.result_pc
    reg_valid_next_pc := alu_exu.io.next_pc_valid

    io.out.rs_addr          := reg_rs_addr
    io.out.rs_data          := reg_rs_data
    io.out.w_rs_en          := reg_w_rs_en
    io.out.next_pc          := reg_next_pc
    io.out.valid_next_pc    := reg_valid_next_pc
}



