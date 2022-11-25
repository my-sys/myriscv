import chisel3._
import chisel3.util._ 

class Decode extends Module with CoreParameters{
    io = IO(new Bundle{
        val in      = new Bundle{
            val inst = Input(UInt(InstLen.W))
            val pc   = Input(UInt(XLEN.W))

            val rs_addr         = Input(UInt(RegAddrLen.W))
            val result_data     = Input(UInt(RegDataLen.W))
            val w_rs_en         = Input(Bool())
        }
        val out     = new Bundle{
            val rs1_data    = Output(UInt(RegDataLen.W))
            val rs2_data    = Output(UInt(RegDataLen.W))
            val rs_addr     = Output(UInt(RegAddrLen.W))
            val imm_data    = Output(UInt(RegAddrLen.W))
            val opType      = Output(UInt(OpTypeLen.W))
            val exuType     = Output(UInt(ExuTypeLen.W))
            val pc          = Output(UInt(AddrLen.W))
        }
    })

    val reg_rs1_data = RegInit(0.U(64.W))
    val reg_rs2_data = RegInit(0.U(64.W))
    val reg_dest_rs_addr  = RegInit(0.U(64.W))
    val reg_imm      = RegInit(0.U(64.W))
    val reg_opType   = RegInit(0.U(OpTypeLen.W))
    val reg_exuType  = RegInit(0.U(ExuTypeLen.W))

    val decodefault = List(Op_type.op_alu,ALUType.alu_add,Inst_type.Type_N)
    val opType :: exuType ::instType :: Nil = ListLookup(inst, decodefault,ISA.table)

    val rs2_addr        = inst(24,20)
    val rs1_addr        = inst(19,15)
    val dest_rs_addr    = inst(11,7)
    val csr_addr        = inst(31,20)

    val reg_file        = new RegCtrl

    val rs1_data        = reg_file.read(rs1_addr)
    val rs2_data        = reg_file.read(rs2_addr)

    reg_opType          := opType
    reg_exuType         := exuType     
    reg_rs1_data        := rs1_data
    reg_rs2_data        := rs2_data
    reg_dest_rs_addr    := dest_rs_addr
    reg_imm             := ListLookup(instType, 0.U, List(
        Inst_type.Type_I    -> (Cat( fill(52,inst(31)) ,inst(31,25))),  // sign extension
        Inst_type.Type_U    -> (Cat( fill(32,inst(31)), Cat(inst(31,12),0.U(12.W)) )), // sign extension 
        Inst_type.Type_S    -> (Cat( fill(52,inst(31)), Cat(inst(31,25),inst(11,7)) )), // sign extension
        Inst_type.Type_J    -> (Cat( fill(44,inst(19)),  Cat(Cat(inst(19,12),inst(20)),Cat(inst(30,19),0.U(1.W))) )), // sign extension
        //Inst_type.Type_R    -> (),
        Inst_type.Type_B    -> (Cat( fill(54,inst(31)), Cat(Cat(inst(7),inst(30,25)), Cat(inst(11,8),0.U(1.W)))  )),
        Inst_type.Type_CSR  -> (Cat( 0.U(59.W),inst(19,15)),
        Inst_type.Type_IR   -> (Cat(0.U(58.W),inst(25,20)))
        //Inst_type.Type_N    -> (),
    ))

    io.out.opType       := reg_opType 
    io.out.exuType      := reg_exuType 
    io.out.rs1_data     := reg_rs1_data
    io.out.rs2_data     := reg_rs2_data  
    io.out.imm_data     := reg_imm
    io.out.rs_addr      := reg_dest_rs_addr
    when(io.in.w_rs_en){
        reg_file.write(io.in.rs_addr,io.in.result_data)
    }
    
}