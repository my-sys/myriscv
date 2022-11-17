import chisel3._
import chisel3.util._ 

class Decode extends Module with CoreParameters{
    io = IO(new Bundle{
        val in      = new Bundle{
            val inst = Input(UInt(InstLen.W))
            val pc   = Input(UInt(XLEN.W))
        }
        val out     = new Bundle{
            //val rs1_addr  = Output(UInt(RegAddrLen.W))
            //val rs2_addr  = Output(UInt(RegAddrLen.W))
            val rs1_data  = Output(UInt(RegDataLen.W))
            val rs2_data  = Output(UInt(RegDataLen.W))
            val dest_addr = Output(UInt(RegAddrLen.W))
            val imm       = Output(UInt(RegAddrLen.W))
            val opType    = Output(UInt(OpTypeLen.W))
            val exuType   = Output(UInt(ExuTypeLen.W))
        }
    })

    val decodefault = List(op_alu,alu_add,Type_N)
    val opType :: exuType ::instType :: Nil = ListLookup(instr, decodefault,ISA.table)

    io.opType  := opType 
    io.exuType := exuType

    val rs2_addr = inst(24,20)
    val rs1_addr = inst(19,15)
    val reg_file = new RegCtrl

    val rs1_data = reg_file.read(rs1_addr)
    val rs2_data = reg_file.read(rs2_addr)
}