import chisel3
import chise3.util._

object ALUType{
    //需要组合一下减轻分量。    6位
    // 第0位用于判断rs2是否为立即数，第1位用于判断是否为进行低位操作，高位保存不变。 
    def alu_add     = "b00000".U 
    def alu_addi    = "b00001".U

    def alu_addw    = "b00011".U
    def alu_addiw   = "b00010".U 
    

    def alu_auipc   = "b00110".U

    def alu_and     = "b00100".U
    def alu_andi    = "b00101".U 
    
    def alu_sll     = "b01101".U 
    def alu_slli    = "b01110".U 

    def alu_slliw   = "b01111".U 
    def alu_sllw    = "b10000".U

    def alu_slt     = "b10001".U 
    def alu_slti    = "b10010".U 

    def alu_sltiu   = "b10011".U 
    def alu_sltu    = "b10100".U 

    def alu_sra     = "b10101".U 
    def alu_srai    = "b10110".U

    def alu_sraiw   = "b10111".U 
    def alu_sraw    = "b11000".U

    def alu_srl     = "b11001".U 
    def alu_srli    = "b11010".U

    def alu_srliw   = "b11011".U 
    def alu_srlw    = "b11100".U 

    def alu_sub     = "b11101".U

    def alu_subw    = "b11110".U

    def alu_or      = "b11111".U 
    def alu_ori     = 
    def alu_xor     = 
    def alu_xori    = 

    def alu_beq     = "b00111".U 
    def alu_bge     = "b01000".U 
    def alu_bgeu    = "b01001".U 
    def alu_blt     = "b01010".U 
    def alu_bltu    = "b01011".U 
    def alu_bne     = "b01100".U
}

// ALU 是一个常用的单元，设计它的指令非常多，乘法，除法。存储指令，CSR较少，因此在多个执行单元中
//应该有多个ALU。少数的CSR ，MU，LSU。
class ALU_EXU extend Module with CoreParameters{
    io = IO(new Bundle{
        val valid = Input(Bool())
        val exuType = Input(UInt(ExuTypeLen.W))
        val op_data1 = Input(UInt(RegDataLen.W))
        val op_data2 = Input(UInt(RegDataLen.W))
        val op_imm   = Input(UInt(RegDataLen.W))
        val op_pc    = Input(UInt(AddrLen.W))

        val result_data  = Output(UInt(RegDataLen.W))
        val result_pc    = Output(UInt(AddrLen.W))
    })

    val rs2_data = Mux(io.exuType(0),io.op_imm,io.op_data2)

    io.result_data := MuxLookup(io.exuType(6,2),0.U, List(
        ALUType.alu_add(6,2)    -> (op_data1 + rs2_data),

    ))

}