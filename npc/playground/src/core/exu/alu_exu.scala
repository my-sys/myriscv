import chisel3._
import chisel3.util._

object ALUType{
    //需要组合一下减轻分量。    6位
    // 第0位用于判断rs2是否为立即数，第1位用于判断是否为进行低位操作。 
    // 
    def alu_add     = "b000_00".U 
    val alu_addi    = "b000_01".U
    val alu_addw    = "b000_10".U
    val alu_addiw   = "b000_11".U 
    

    val alu_auipc   = "b001_00".U

    val alu_and     = "b010_00".U
    val alu_andi    = "b010_01".U 
    
    val alu_slt     = "b011_00".U 
    val alu_slti    = "b011_01".U 
     
    val alu_sltu    = "b100_00".U
    val alu_sltiu   = "b100_01".U

    val alu_sub     = "b101_00".U
    val alu_subw    = "b101_10".U

    val alu_sll     = "b110_00".U 
    val alu_slli    = "b110_01".U     
    val alu_sllw    = "b110_10".U
    val alu_slliw   = "b110_11".U

    val alu_sra     = "b111_00".U 
    val alu_srai    = "b111_01".U     
    val alu_sraw    = "b111_10".U
    val alu_sraiw   = "b111_11".U

    val alu_srl     = "b1000_00".U 
    val alu_srli    = "b1000_01".U 
    val alu_srlw    = "b1000_10".U 
    val alu_srliw   = "b1000_11".U


    val alu_or      = "b1001_00".U 
    val alu_ori     = "b1001_01".U 
    val alu_xor     = "b1010_00".U 
    val alu_xori    = "b1010_01".U 

// 分支跳转不在遵循前面的规则，因为其不需要区分立即数，和低位操作。但识别的操作还是不能混淆
// 这么做的目的主要是减小操作码
    val alu_beq     = "b1011_00".U 
    val alu_bne     = "b1011_10".U
    val alu_bge     = "b1100_00".U 
    val alu_bgeu    = "b1100_10".U 
    val alu_blt     = "b1101_00".U 
    val alu_bltu    = "b1101_10".U

    val alu_jal     = "b1110_00".U 
    val alu_jalr    = "b1110_10".U
    
}

// ALU 是一个常用的单元，设计它的指令非常多，乘法，除法。存储指令，CSR较少，因此在多个执行单元中
//应该有多个ALU。少数的CSR ，MU，LSU。
class ALU_EXU extends Module with CoreParameters{
    val io = IO(new Bundle{
        //val valid = Input(Bool())
        val exuType = Input(UInt(ExuTypeLen.W))
        val op_data1 = Input(UInt(RegDataLen.W))
        val op_data2 = Input(UInt(RegDataLen.W))
        val op_imm   = Input(UInt(RegDataLen.W))
        val op_pc    = Input(UInt(AddrLen.W))

        val result_data     = Output(UInt(RegDataLen.W))
        val result_pc       = Output(UInt(AddrLen.W))
        val next_pc_valid   = Output(Bool())
        val w_rs_en         = Output(Bool())
    })

    val op_data1 = io.op_data1
    val op_data2 = io.op_data2
    val op_imm   = io.op_imm
    val op_pc    = io.op_pc

    val rs2_data = Mux(io.exuType(0),io.op_imm,io.op_data2)

    // subtraction, All data is assumed to be in the form of complement
    val sub_data1 = op_data1
    val sub_data2 = op_data2
    val subresult = sub_data1 + (sub_data2 ^ "hffff_ffff_ffff_ffff".U) + 1.U
    
    //  unsigend rs1 < rs2   must check this flag
    val u_rs1_l_rs2 = !subresult(XLEN)   
    //  unsigend rs1 < rs2   must check this flag   
    val s_rs1_l_rs2 = Mux(sub_data1(XLEN-1)^sub_data2(XLEN-1),sub_data1(XLEN-1),subresult(XLEN-1))

    val sllw_temp  = op_data1(31,0) << (rs2_data & "h1f".U)

    val srlw_temp = op_data1(31,0) >> (rs2_data & "h1f".U)

    val sraw_temp      = ((op_data1(31,0)).asSInt >> (rs2_data & "h1f".U)).asUInt
    val temp_result_data = MuxLookup(io.exuType(5,2),0.U(64.W), List(
        ALUType.alu_add(5,2)    -> Cat(1.U(1.W),(op_data1 + rs2_data)),
        ALUType.alu_auipc(5,2)  -> Cat(1.U(1.W),(op_pc + op_imm)),
        ALUType.alu_and(5,2)    -> Cat(1.U(1.W),(op_data1 & rs2_data)),
        
        //  slt     slti 
        ALUType.alu_slt(5,2)    -> Cat(1.U(1.W),(Cat(0.U((XLEN-1).W), s_rs1_l_rs2))),
        ALUType.alu_sltu(5,2)   -> Cat(1.U(1.W),(Cat(0.U((XLEN-1).W), u_rs1_l_rs2))),
        ALUType.alu_sub(5,2)    -> Cat(1.U(1.W),(subresult)),
        ALUType.alu_subw(5,2)   -> Cat(1.U(1.W),(Mux(subresult(31),Cat(Fill(32,1.U),subresult(31,0)),Cat(0.U(32.W),subresult(31,0))))),
        //  sll        slli 
        ALUType.alu_sll(5,2)    -> Cat(1.U(1.W),(op_data1 << (rs2_data &"h3f".U))),
        //  slliw       sllw 
        ALUType.alu_sllw(5,2)   -> Cat(1.U(1.W),(Cat(Fill(32,sllw_temp(31)),sllw_temp(31,0)))),

        //  srl         srli 
        ALUType.alu_srl(5,2)    -> Cat(1.U(1.W),(op_data1 >> (rs2_data & "h3f".U))),

        // srlw         srliw 
        ALUType.alu_srlw(5,2)   -> Cat(1.U(1.W),(Cat(Fill(32,srlw_temp(31)),srlw_temp(31,0)))),

        // sra          srai 
        ALUType.alu_sra(5,2)    -> Cat(1.U(1.W),((op_data1.asSInt >> (rs2_data & "h3f".U)).asUInt)),

        //  sraw        sraiw 
        ALUType.alu_sraw(5,2)   -> Cat(1.U(1.W),(Cat(Fill(32,sraw_temp(31)),sraw_temp(31,0)))),

        //  xor         xori 
        ALUType.alu_xor(5,2)    -> Cat(1.U(1.W),(op_data1 ^ rs2_data)),

        // or           ori 
        ALUType.alu_or(5,2)     -> Cat(1.U(1.W),(op_data1 | rs2_data))
    ))

    val w_rs_en                 = temp_result_data(64)
    val result_data             = temp_result_data(63,0)

    val next_pc1 = Cat(1.U(1.W),op_pc + op_imm)
    val next_pc2 = Cat(0.U(1.W),0.U(64.W)) 

    val next_pc3 = Cat(1.U(1.W),(op_data1 + op_imm) & "hffff_ffff_ffff_fffe".U)
    val temp_result_pc  = MuxLookup(io.exuType(5,1),0.U(65.W),List(
        ALUType.alu_beq(5,1)    -> (Mux(op_data1 === op_data2, next_pc1,next_pc2)),
        ALUType.alu_bge(5,1)    -> (Mux(!s_rs1_l_rs2,next_pc1,next_pc2)),
        ALUType.alu_bgeu(5,1)   -> (Mux(!u_rs1_l_rs2,next_pc1,next_pc2)),
        ALUType.alu_blt(5,1)    -> (Mux(s_rs1_l_rs2,next_pc1,next_pc2)),
        ALUType.alu_bltu(5,1)   -> (Mux(u_rs1_l_rs2,next_pc1,next_pc2)),
        ALuType.alu_bne(5,1)    -> (Mux(op_data1 === op_data2,next_pc2,next_pc1)),
        ALUType.alu_jal(5,1)    -> (next_pc1),
        ALUType.alu_jalr(5,1)   -> (next_pc3)
    ))

    val next_pc_valid   = temp_result_pc(64)
    val result_pc       = temp_result_pc(63,0)

    io.result_data      := result_data
    io.result_pc        := result_pc
    io.next_pc_valid    := next_pc_valid
    io.w_rs_en          := w_rs_en
}