import chisel3._ 
import chisel3.util._ 

///1 "hff".U
//2 "o377".U
//3 "b1111_1111".U

object Inst_type{
    def Type_I  = "b0000".U
    def Type_U  = "b0001".U
    def Type_S  = "b0011".U 
    def Type_J  = "b0010".U 
    def Type_R  = "b0110".U 
    def Type_B  = "b0111".U
    def Type_CSR = "b0101".U
    def Type_IR = "b0100".U
    def Type_N  = "b1100".U
}

object Op_type{
    def op_alu = "b000".U 
    def op_lsu = "b001".U
    def op_csr = "b010".U
    def op_mu  = "b011".U
}
object ISA{
    def ADD     = BitPat("b0000000_?????_?????_000_?????_0110011")
    def ADDI    = BitPat("b???????_?????_?????_000_?????_0010011")
    def ADDIW   = BitPat("b???????_?????_?????_000_?????_0011011")
    def ADDW    = BitPat("b0000000_?????_?????_000_?????_0111011")
    def AND     = BitPat("b0000000_?????_?????_111_?????_0110011")
    def ANDI    = BitPat("b???????_?????_?????_111_?????_0010011")
    def AUIPC   = BitPat("b???????_?????_?????_???_?????_0010111")
    def BEQ     = BitPat("b???????_?????_?????_000_?????_1100011")
    def BGE     = BitPat("b???????_?????_?????_101_?????_1100011")
    def BGEU    = BitPat("b???????_?????_?????_111_?????_1100011")
    def BLT     = BitPat("b???????_?????_?????_100_?????_1100011")
    def BLTU    = BitPat("b???????_?????_?????_110_?????_1100011")
    def BNE     = BitPat("b???????_?????_?????_001_?????_1100011")

    def CSRRC   = BitPat("b???????_?????_?????_011_?????_1110011")
    def CSRRCI  = BitPat("b???????_?????_?????_111_?????_1110011")
    def CSRRS   = BitPat("b???????_?????_?????_010_?????_1110011")
    def CSRRSI  = BitPat("b???????_?????_?????_110_?????_1110011")
    def CSRRW   = BitPat("b???????_?????_?????_001_?????_1110011")
    def CSRRWI  = BitPat("b???????_?????_?????_101_?????_1110011")

    def EBREAK  = BitPat("b0000000_00001_00000_000_00000_1110011")
    def ECALL   = BitPat("b0000000_00000_00000_000_00000_1110011")
    def FENCE   = BitPat("b0000???_?????_00000_000_00000_0001111")
    def FENCE_I = BitPat("b0000000_00000_00000_001_00000_0001111")

    def JAL     = BitPat("b???????_?????_?????_???_?????_1101111")
    def JALR    = BitPat("b???????_?????_?????_000_?????_1100111")
    def LB      = BitPat("b???????_?????_?????_000_?????_0000011")
    def LBU     = BitPat("b???????_?????_?????_100_?????_0000011")
    def LD      = BitPat("b???????_?????_?????_011_?????_0000011")
    def LH      = BitPat("b???????_?????_?????_001_?????_0000011")
    def LHU     = BitPat("b???????_?????_?????_101_?????_0000011")
    def LUI     = BitPat("b???????_?????_?????_???_?????_0110111")
    def LW      = BitPat("b???????_?????_?????_010_?????_0000011")
    def LWU     = BitPat("b???????_?????_?????_110_?????_0000011")

    def MRET    = BitPat("b0011000_00010_00000_000_00000_1110011")
    def OR      = BitPat("b0000000_?????_?????_110_?????_0110011")
    def ORI     = BitPat("b???????_?????_?????_110_?????_0010011")
    def SB      = BitPat("b???????_?????_?????_000_?????_0100011")
    def SD      = BitPat("b???????_?????_?????_011_?????_0100011")

def SFENCE_VMA  = BitPat("b0001001_?????_?????_000_00000_1110011")
    def SH      = BitPat("b???????_?????_?????_001_?????_0100011")
    def SLL     = BitPat("b0000000_?????_?????_001_?????_0110011")
    def SLLI    = BitPat("b000000?_?????_?????_001_?????_0010011")
    def SLLIW   = BitPat("b0000000_?????_?????_001_?????_0011011")
    def SLLW    = BitPat("b0000000_?????_?????_001_?????_0111011")
    def SLT     = BitPat("b0000000_?????_?????_010_?????_0110011")
    def SLTI    = BitPat("b???????_?????_?????_010_?????_0010011")
    def SLTIU   = BitPat("b???????_?????_?????_011_?????_0010011")
    def SLTU    = BitPat("b0000000_?????_?????_011_?????_0110011")
    def SRA     = BitPat("b0100000_?????_?????_101_?????_0110011")
    def SRAI    = BitPat("b010000?_?????_?????_101_?????_0010011")
    def SRAIW   = BitPat("b0100000_?????_?????_101_?????_0011011")
    def SRAW    = BitPat("b0100000_?????_?????_101_?????_0111011")
    def SRET    = BitPat("b0001000_00010_00000_000_00000_1110011")
    def SRL     = BitPat("b0000000_?????_?????_101_?????_0110011")
    def SRLI    = BitPat("b000000?_?????_?????_101_?????_0010011")
    def SRLIW   = BitPat("b0000000_?????_?????_101_?????_0011011")
    def SRLW    = BitPat("b0000000_?????_?????_101_?????_0111011")
    def SUB     = BitPat("b0100000_?????_?????_000_?????_0110011")
    def SUBW    = BitPat("b0100000_?????_?????_000_?????_0111011")
    def SW      = BitPat("b???????_?????_?????_010_?????_0100011")

    def WFI     = BitPat("b0001000_00101_00000_000_00000_1110011")
    def XOR     = BitPat("b0000000_?????_?????_100_?????_0110011")
    def XORI    = BitPat("b???????_?????_?????_100_?????_0010011")


    val table = Array(
        ADD         -> List(Op_type.op_alu,     ALUType.alu_add,     Inst_type.Type_R),
        ADDI        -> List(Op_type.op_alu,     ALUType.alu_addi,    Inst_type.Type_I),
        ADDIW       -> List(Op_type.op_alu,     ALUType.alu_addiw,   Inst_type.Type_I),
        ADDW        -> List(Op_type.op_alu,     ALUType.alu_addw,    Inst_type.Type_R),
        AND         -> List(Op_type.op_alu,     ALUType.alu_and,     Inst_type.Type_R),
        ANDI        -> List(Op_type.op_alu,     ALUType.alu_andi,    Inst_type.Type_I),
        AUIPC       -> List(Op_type.op_alu,     ALUType.alu_auipc,   Inst_type.Type_U),
        BEQ         -> List(Op_type.op_alu,     ALUType.alu_beq,     Inst_type.Type_B),
        BGE         -> List(Op_type.op_alu,     ALUType.alu_bge,     Inst_type.Type_B),
        BGEU        -> List(Op_type.op_alu,     ALUType.alu_bgeu,    Inst_type.Type_B),
        BLT         -> List(Op_type.op_alu,     ALUType.alu_blt,     Inst_type.Type_B),
        BLTU        -> List(Op_type.op_alu,     ALUType.alu_bltu,    Inst_type.Type_B),
        BNE         -> List(Op_type.op_alu,     ALUType.alu_bne,     Inst_type.Type_B),
        CSRRC       -> List(Op_type.op_csr,     CSRType.csr_csrrc,   Inst_type.Type_CSR),
        CSRRCI      -> List(Op_type.op_csr,     CSRType.csr_csrrci,  Inst_type.Type_CSR),
        CSRRS       -> List(Op_type.op_csr,     CSRType.csr_csrrs,   Inst_type.Type_CSR),
        CSRRSI      -> List(Op_type.op_csr,     CSRType.csr_csrrsi,  Inst_type.Type_CSR),
        CSRRW       -> List(Op_type.op_csr,     CSRType.csr_csrrw,   Inst_type.Type_CSR),
        CSRRWI      -> List(Op_type.op_csr,     CSRType.csr_csrrwi,  Inst_type.Type_CSR),
        LD          -> List(Op_type.op_lsu,     LSUType.lsu_ld,      Inst_type.Type_I),
        LB          -> List(Op_type.op_lsu,     LSUType.lsu_lb,      Inst_type.Type_I),
        LBU         -> List(Op_type.op_lsu,     LSUType.lsu_lbu,     Inst_type.Type_I),
        LH          -> List(Op_type.op_lsu,     LSUType.lsu_lh,      Inst_type.Type_I),
        LHU         -> List(Op_type.op_lsu,     LSUType.lsu_lhu,     Inst_type.Type_I),
        LUI         -> List(Op_type.op_lsu,     LSUType.lsu_lui,     Inst_type.Type_U),
        LW          -> List(Op_type.op_lsu,     LSUType.lsu_lw,      Inst_type.Type_I),
        LWU         -> List(Op_type.op_lsu,     LSUType.lsu_lwu,     Inst_type.Type_I),
        SD          -> List(Op_type.op_lsu,     LSUType.lsu_sd,      Inst_type.Type_S),
        SB          -> List(Op_type.op_lsu,     LSUType.lsu_sb,      Inst_type.Type_S),
        SH          -> List(Op_type.op_lsu,     LSUType.lsu_sh,      Inst_type.Type_S),
        SLL         -> List(Op_type.op_alu,     ALUType.alu_sll,     Inst_type.Type_R),
        SLLI        -> List(Op_type.op_alu,     ALUType.alu_slli,    Inst_type.Type_IR),
        SLLIW       -> List(Op_type.op_alu,     ALUType.alu_slliw,   Inst_type.Type_IR),
        SLLW        -> List(Op_type.op_alu,     ALUType.alu_sllw,    Inst_type.Type_R),
        SLT         -> List(Op_type.op_alu,     ALUType.alu_slt,     Inst_type.Type_R),
        SLTI        -> List(Op_type.op_alu,     ALUType.alu_slti,    Inst_type.Type_I),
        SLTIU       -> List(Op_type.op_alu,     ALUType.alu_sltiu,   Inst_type.Type_I),
        SLTU        -> List(Op_type.op_alu,     ALUType.alu_sltu,    Inst_type.Type_R),

        SRA         -> List(Op_type.op_alu,     ALUType.alu_sra,     Inst_type.Type_R),
        SRAI        -> List(Op_type.op_alu,     ALUType.alu_srai,    Inst_type.Type_IR),
        SRAIW       -> List(Op_type.op_alu,     ALUType.alu_sraiw,   Inst_type.Type_IR),
        SRAW        -> List(Op_type.op_alu,     ALUType.alu_sraw,    Inst_type.Type_R),
        SRL         -> List(Op_type.op_alu,     ALUType.alu_srl,     Inst_type.Type_R),
        SRLI        -> List(Op_type.op_alu,     ALUType.alu_srli,    Inst_type.Type_IR),
        SRLIW       -> List(Op_type.op_alu,     ALUType.alu_srliw,   Inst_type.Type_IR),
        SRLW        -> List(Op_type.op_alu,     ALUType.alu_srlw,    Inst_type.Type_R),
        SUB         -> List(Op_type.op_alu,     ALUType.alu_sub,     Inst_type.Type_R),
        SUBW        -> List(Op_type.op_alu,     ALUType.alu_subw,    Inst_type.Type_R),
        SW          -> List(Op_type.op_lsu,     LSUType.lsu_sw,      Inst_type.Type_S),

        OR          -> List(Op_type.op_alu,     ALUType.alu_or,      Inst_type.Type_R),
        ORI         -> List(Op_type.op_alu,     ALUType.alu_ori,     Inst_type.Type_I),
        XOR         -> List(Op_type.op_alu,     ALUType.alu_xor,     Inst_type.Type_R),
        XORI        -> List(Op_type.op_alu,     ALUType.alu_xori,    Inst_type.Type_I),

        DIV         -> List(Op_type.op_mu,      MUType.mu_div,       Inst_type.Type_R),
        DIVU        -> List(Op_type.op_mu,      MUType.mu_divu,      Inst_type.Type_R),
        DIVUW       -> List(Op_type.op_mu,      MUType.mu_divuw,     Inst_type.Type_R),
        DIVW        -> List(Op_type.op_mu,      MUType.mu_divw,      Inst_type.Type_R),
        MUL         -> List(Op_type.op_mu,      MUType.mu_mul,       Inst_type.Type_R),
        MULH        -> List(Op_type.op_mu,      MUType.mu_mulh,      Inst_type.Type_R),
        MULHSU      -> List(Op_type.op_mu,      MUType.mu_mulhsu,    Inst_type.Type_R),
        MULHU       -> List(Op_type.op_mu,      MUType.mu_mulhu,     Inst_type.Type_R),
        MULW        -> List(Op_type.op_mu,      MUType.mu_mulw,      Inst_type.Type_R),
        REM         -> List(Op_type.op_mu,      MUType.mu_rem,       Inst_type.Type_R),
        REMU        -> List(Op_type.op_mu,      MUType.mu_remu,      Inst_type.Type_R),
        REMUW       -> List(Op_type.op_mu,      MUType.mu_remuw,     Inst_type.Type_R),
        REMW        -> List(Op_type.op_mu,      MUType.mu_remw,      Inst_type.Type_R),
        //WFI         -> List(op_n,  )

        JAL         -> List(Op_type.op_alu,     ALUType.alu_jal,     Inst_type.Type_J),
        JALR        -> List(Op_type.op_alu,     ALUType.alu_jalr,    Inst_type.Type_I),

        //EBREAK      -> List(),
        //FENCE       -> List(),
        //FENCE_I     -> List(),
        //MRET        -> List(),
        //SRET        -> List(),
        //SFENCE_VMA  -> List(),

    )
}