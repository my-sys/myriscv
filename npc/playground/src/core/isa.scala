import chisel3._ 
import chisel3.util._ 

///1 "hff".U
//2 "o377".U
//3 "b1111_1111".U

object Inst_type{
    def Type_N  = 	"b0000".U
    def Type_U  = 	"b0001".U
    def Type_S  = 	"b0011".U 
    def Type_J  = 	"b0010".U 
    def Type_R  = 	"b0110".U 
    def Type_B  = 	"b0111".U
    def Type_CSR = 	"b0101".U
    def Type_IR = 	"b0100".U
    def Type_I  = 	"b1100".U
	//def Type_ABN = 	"b1101".U
}

object Op_type{
    // def op_n   = "b000".U 
	// def op_bru = "b001".U 
	// def op_alu = "b010".U 
	// def op_mu  = "b011".U 
	// def op_system = "b100".U 
    // def op_lsu = "b101".U 
	// def op_fence = "b110".U 
	// def op_amo = "b111".U
	def op_mem = "b000".U 
	def op_fence = "b000".U  //def op_amo = "b100".U
	def op_alu = "b001".U 
	def op_mu  = "b001".U  //"b101".U
	def op_bru = "b010".U 
	def op_system = "b011".U 
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


    def DIV     = BitPat("b0000001_?????_?????_100_?????_0110011")
    def DIVU    = BitPat("b0000001_?????_?????_101_?????_0110011")
    def DIVUW   = BitPat("b0000001_?????_?????_101_?????_0111011")
    def DIVW    = BitPat("b0000001_?????_?????_100_?????_0111011")
    def MUL     = BitPat("b0000001_?????_?????_000_?????_0110011")
    def MULH    = BitPat("b0000001_?????_?????_001_?????_0110011")
    def MULHSU  = BitPat("b0000001_?????_?????_010_?????_0110011")
    def MULHU   = BitPat("b0000001_?????_?????_011_?????_0110011")
    def MULW    = BitPat("b0000001_?????_?????_000_?????_0111011")
    def REM     = BitPat("b0000001_?????_?????_110_?????_0110011")
    def REMU    = BitPat("b0000001_?????_?????_111_?????_0110011")
    def REMUW   = BitPat("b0000001_?????_?????_111_?????_0111011")
    def REMW    = BitPat("b0000001_?????_?????_110_?????_0111011")

	val Y = 1.U(2.W) 
	val N = 0.U(2.W)
    val table = Array(
							//val opType 		:: exuType 			:: instType :: dest_is_reg :: rs1_is_reg :: rs2_is_reg
        ADD         -> List(Op_type.op_alu,     ALUType.alu_add,     Inst_type.Type_R,Y,			Y,			Y),
        ADDI        -> List(Op_type.op_alu,     ALUType.alu_addi,    Inst_type.Type_I,Y,			Y,			N),
        ADDIW       -> List(Op_type.op_alu,     ALUType.alu_addiw,   Inst_type.Type_I,Y,			Y,			N),
        ADDW        -> List(Op_type.op_alu,     ALUType.alu_addw,    Inst_type.Type_R,Y,			Y,			Y),
        AND         -> List(Op_type.op_alu,     ALUType.alu_and,     Inst_type.Type_R,Y,			Y,			Y),
        ANDI        -> List(Op_type.op_alu,     ALUType.alu_andi,    Inst_type.Type_I,Y,			Y,			N),
        AUIPC       -> List(Op_type.op_alu,     ALUType.alu_auipc,   Inst_type.Type_U,Y,			N,			N),

        BEQ         -> List(Op_type.op_bru,     BRUType.bru_beq,     Inst_type.Type_B,N,			Y,			Y),
        BGE         -> List(Op_type.op_bru,     BRUType.bru_bge,     Inst_type.Type_B,N,			Y,			Y),
        BGEU        -> List(Op_type.op_bru,     BRUType.bru_bgeu,    Inst_type.Type_B,N,			Y,			Y),
        BLT         -> List(Op_type.op_bru,     BRUType.bru_blt,     Inst_type.Type_B,N,			Y,			Y),
        BLTU        -> List(Op_type.op_bru,     BRUType.bru_bltu,    Inst_type.Type_B,N,			Y,			Y),
        BNE         -> List(Op_type.op_bru,     BRUType.bru_bne,     Inst_type.Type_B,N,			Y,			Y),

        CSRRC       -> List(Op_type.op_system,  SYSType.system_csrrc,	Inst_type.Type_CSR,Y,		Y,			N),
        CSRRCI      -> List(Op_type.op_system,  SYSType.system_csrrci,	Inst_type.Type_CSR,Y,		N,			N),
        CSRRS       -> List(Op_type.op_system,  SYSType.system_csrrs, 	Inst_type.Type_CSR,Y,		Y,			N),
        CSRRSI      -> List(Op_type.op_system,  SYSType.system_csrrsi,  Inst_type.Type_CSR,Y,		N,			N),
        CSRRW       -> List(Op_type.op_system,  SYSType.system_csrrw,   Inst_type.Type_CSR,Y,		Y,			N),
        CSRRWI      -> List(Op_type.op_system,  SYSType.system_csrrwi,  Inst_type.Type_CSR,Y,		N,			N),

        LD          -> List(Op_type.op_mem,     LSUType.lsu_ld,      Inst_type.Type_I,	Y,			Y,			N),
        LB          -> List(Op_type.op_mem,     LSUType.lsu_lb,      Inst_type.Type_I,	Y,			Y,			N),
        LBU         -> List(Op_type.op_mem,     LSUType.lsu_lbu,     Inst_type.Type_I,	Y,			Y,			N),
        LH          -> List(Op_type.op_mem,     LSUType.lsu_lh,      Inst_type.Type_I,	Y,			Y,			N),
        LHU         -> List(Op_type.op_mem,     LSUType.lsu_lhu,     Inst_type.Type_I,	Y,			Y,			N),
        LUI         -> List(Op_type.op_alu,     ALUType.alu_lui,     Inst_type.Type_U,	Y,			N,			N),
        LW          -> List(Op_type.op_mem,     LSUType.lsu_lw,      Inst_type.Type_I,	Y,			Y,			N),
        LWU         -> List(Op_type.op_mem,     LSUType.lsu_lwu,     Inst_type.Type_I,	Y,			Y,			N),
        SD          -> List(Op_type.op_mem,     LSUType.lsu_sd,      Inst_type.Type_S,	N,			Y,			Y),
        SB          -> List(Op_type.op_mem,     LSUType.lsu_sb,      Inst_type.Type_S,	N,			Y,			Y),
        SH          -> List(Op_type.op_mem,     LSUType.lsu_sh,      Inst_type.Type_S,	N,			Y,			Y),
        SLL         -> List(Op_type.op_alu,     ALUType.alu_sll,     Inst_type.Type_R,	Y,			Y,			Y),
        SLLI        -> List(Op_type.op_alu,     ALUType.alu_slli,    Inst_type.Type_IR,	Y,			Y,			N),
        SLLIW       -> List(Op_type.op_alu,     ALUType.alu_slliw,   Inst_type.Type_IR,	Y,			Y,			N),
        SLLW        -> List(Op_type.op_alu,     ALUType.alu_sllw,    Inst_type.Type_R,	Y,			Y,			Y),
        SLT         -> List(Op_type.op_alu,     ALUType.alu_slt,     Inst_type.Type_R,	Y,			Y,			Y),
        SLTI        -> List(Op_type.op_alu,     ALUType.alu_slti,    Inst_type.Type_I,	Y,			Y,			N),
        SLTIU       -> List(Op_type.op_alu,     ALUType.alu_sltiu,   Inst_type.Type_I,	Y,			Y,			N),
        SLTU        -> List(Op_type.op_alu,     ALUType.alu_sltu,    Inst_type.Type_R,	Y,			Y,			Y),

        SRA         -> List(Op_type.op_alu,     ALUType.alu_sra,     Inst_type.Type_R,	Y,			Y,			Y),
        SRAI        -> List(Op_type.op_alu,     ALUType.alu_srai,    Inst_type.Type_IR,	Y,			Y,			N),
        SRAIW       -> List(Op_type.op_alu,     ALUType.alu_sraiw,   Inst_type.Type_IR,	Y,			Y,			N),
        SRAW        -> List(Op_type.op_alu,     ALUType.alu_sraw,    Inst_type.Type_R,	Y,			Y,			Y),
        SRL         -> List(Op_type.op_alu,     ALUType.alu_srl,     Inst_type.Type_R,	Y,			Y,			Y),
        SRLI        -> List(Op_type.op_alu,     ALUType.alu_srli,    Inst_type.Type_IR,	Y,			Y,			N),
        SRLIW       -> List(Op_type.op_alu,     ALUType.alu_srliw,   Inst_type.Type_IR,	Y,			Y,			N),
        SRLW        -> List(Op_type.op_alu,     ALUType.alu_srlw,    Inst_type.Type_R,	Y,			Y,			Y),
        SUB         -> List(Op_type.op_alu,     ALUType.alu_sub,     Inst_type.Type_R,	Y,			Y,			Y),
        SUBW        -> List(Op_type.op_alu,     ALUType.alu_subw,    Inst_type.Type_R,	Y,			Y,			Y),
        SW          -> List(Op_type.op_mem,     LSUType.lsu_sw,      Inst_type.Type_S,	N,			Y,			Y),

        OR          -> List(Op_type.op_alu,     ALUType.alu_or,      Inst_type.Type_R,	Y,			Y,			Y),
        ORI         -> List(Op_type.op_alu,     ALUType.alu_ori,     Inst_type.Type_I,	Y,			Y,			N),
        XOR         -> List(Op_type.op_alu,     ALUType.alu_xor,     Inst_type.Type_R,	Y,			Y,			Y),
        XORI        -> List(Op_type.op_alu,     ALUType.alu_xori,    Inst_type.Type_I,	Y,			Y,			N),

        DIV         -> List(Op_type.op_mu,      MUType.mu_div,       Inst_type.Type_R,	Y,			Y,			Y),
        DIVU        -> List(Op_type.op_mu,      MUType.mu_divu,      Inst_type.Type_R,	Y,			Y,			Y),
        DIVUW       -> List(Op_type.op_mu,      MUType.mu_divuw,     Inst_type.Type_R,	Y,			Y,			Y),
        DIVW        -> List(Op_type.op_mu,      MUType.mu_divw,      Inst_type.Type_R,	Y,			Y,			Y),
        MUL         -> List(Op_type.op_mu,      MUType.mu_mul,       Inst_type.Type_R,	Y,			Y,			Y),
        MULH        -> List(Op_type.op_mu,      MUType.mu_mulh,      Inst_type.Type_R,	Y,			Y,			Y),
        MULHSU      -> List(Op_type.op_mu,      MUType.mu_mulhsu,    Inst_type.Type_R,	Y,			Y,			Y),
        MULHU       -> List(Op_type.op_mu,      MUType.mu_mulhu,     Inst_type.Type_R,	Y,			Y,			Y),
        MULW        -> List(Op_type.op_mu,      MUType.mu_mulw,      Inst_type.Type_R,	Y,			Y,			Y),
        REM         -> List(Op_type.op_mu,      MUType.mu_rem,       Inst_type.Type_R,	Y,			Y,			Y),
        REMU        -> List(Op_type.op_mu,      MUType.mu_remu,      Inst_type.Type_R,	Y,			Y,			Y),
        REMUW       -> List(Op_type.op_mu,      MUType.mu_remuw,     Inst_type.Type_R,	Y,			Y,			Y),
        REMW        -> List(Op_type.op_mu,      MUType.mu_remw,      Inst_type.Type_R,	Y,			Y,			Y),
        //WFI         -> List(op_n,  )

        JAL         -> List(Op_type.op_bru,     BRUType.bru_jal,     Inst_type.Type_J,	Y,			N,			N),
        JALR        -> List(Op_type.op_bru,     BRUType.bru_jalr,    Inst_type.Type_I,	Y,			Y,			N),

        EBREAK      -> List(Op_type.op_system,  SYSType.system_ebreak,Inst_type.Type_N,	N,			N,			N),
        MRET        -> List(Op_type.op_system,  SYSType.system_mret,  Inst_type.Type_N,	N,			N,			N),
		ECALL       -> List(Op_type.op_system,  SYSType.system_ecall, Inst_type.Type_N,	N,			N,			N),
		SRET        -> List(Op_type.op_system,  SYSType.system_sret, Inst_type.Type_N,	N,			N,			N),

        FENCE       -> List(Op_type.op_fence,   FENCEType.fence,   Inst_type.Type_N,	N,			N,			N),
        FENCE_I     -> List(Op_type.op_fence,   FENCEType.fence_i, Inst_type.Type_N,	N,			N,			N),
        SFENCE_VMA  -> List(Op_type.op_fence,	FENCEType.fence_vma,Inst_type.Type_N,	N,			N,			N),
		
        

    )
}