import chisel3._
import chisel3.util._ 
import chisel3.util.experimental.BoringUtils

///1 "hff".U
//2 "o377".U
//3 "b1111_1111".U
class Fetch extends Module{
    val io = IO(new Bundle {
        val in = new Bundle{
            val inst    = Input(UInt(64.W))
			val valid 	= Input(Bool())

			val de_stall 	= Input(Bool())
			val wb_stall  	= Input(Bool())
            val next_pc 	= Input(UInt(64.W))
            val valid_next_pc = Input(Bool())
			val flush 		= Input(Bool())
        }

        val out = new Bundle{
            val pc0     = Output(UInt(64.W))
			val rvalid	= Output(Bool())
			val pc1		= Output(UInt(64.W))
            val inst    = Output(UInt(32.W))
        }        
    })

    val inst            = io.in.inst
	val valid 			= io.in.valid 
    val next_pc         = io.in.next_pc
    val valid_next_pc   = io.in.valid_next_pc

	val stall 			= io.in.de_stall | io.in.wb_stall
	val flush 			= io.in.flush
// 指令地址自增，与判断下一个指令地址
// 指令的初始执行位置为0x8000_0000 Reset_Vector
	val regPC 		= RegInit("h8000_0000".U(64.W))
	val pc_valid 	= RegInit(true.B)


//  指令地址，指令内容传输。
	val reg_inst 	= RegInit(0.U(32.W))
	val reg_pc		= RegInit(0.U(64.W))

//------------------------------------------------------------------------------------------------------------------------
	//传进来的指令需要经过特殊处理
	val handle_inst 		= Mux(regPC(2),inst(63,32),inst(31,0))
	val reg_valid 			= RegInit(false.B)
	val temp_reg_inst		= RegInit(0.U(32.W))
	val reg_next_pc 		= RegInit(0.U(64.W))
	val reg_next_pc_valid	= RegInit(false.B)
//如果存在stall信号，所有活动暂停，不能长存的信号，用寄存器保存，flush冲刷情况，valid信号到来情况
//flush 冲刷、valid信号最多只会到来一次，或者在整个暂停期间都不会到来。因为只有EXE级会产生冲刷，冲刷的作用会消掉它后面的指令。
// valid信号产生的前提，是本级fetch发出获取指令信号. stall 信号到来，时不管pc_valid 是否为TRUE，都要置为FALSE。
//原因即使此时valid到来了应该置为true,但valid信号的值已经暂存了后续会处理不需要管，TRUE的副作用会产生未知序列的valid信号。
//崩溃整个过程。
	when(stall){
		reg_valid  			:= Mux(valid,true.B,reg_valid)
		temp_reg_inst 		:= Mux(valid,handle_inst,temp_reg_inst)
		reg_next_pc			:= Mux(flush,next_pc,reg_next_pc)
		reg_next_pc_valid	:= Mux(flush,valid_next_pc,reg_next_pc_valid)
	}.otherwise{
	// 在stall结束后，要观察是否暂存了valid，以及是否刚好到来valid，如果是这两种情况，flush信号不需要继续保存，因为要当场处理了。
	// 如果没有valid，flush信号应当继续保存，直到valid到来再进行处理。
	// 严重警告，valid信号不允许忽视，一定会到来，且与pc_valid信号成对使用。必须正确处理。
		when(reg_valid | valid){
			reg_next_pc := 0.U
			reg_next_pc_valid := false.B
		}.otherwise{
			reg_next_pc 		:= Mux(flush,next_pc,reg_next_pc)
			reg_next_pc_valid	:= Mux(flush,valid_next_pc,reg_next_pc_valid)
		}
		reg_valid := false.B
		temp_reg_inst := 0.U
	}
	// 如果是stall信号，寄存器保持原值不变，如果没有stall，判断是否有暂存valid
	regPC 		:= Mux(stall,regPC,
	// 如果暂存的valid有效，判断是否有暂存的flush信号，如果有使用暂存的next_pc,如果没有判断当前是否有
	//flush信号，如果有，使用当前的next_pc。如果没有使用regPC + 4.U 。如果暂存valid无效，判断是否有现在的valid信号
					Mux(reg_valid,Mux(reg_next_pc_valid,reg_next_pc,Mux(flush,next_pc,regPC + 4.U)),
	// 如果valid有效，循环上一遍逻辑，如果无效，保留当前regPC。
					Mux(valid,Mux(reg_next_pc_valid,reg_next_pc,Mux(flush,next_pc,regPC + 4.U)),regPC)))

	// stall情况下，如果pc_valid要变为true,显然是因为valid到来了，因为valid要暂存，所有pc_valid保持false。
	// 如果pc_valid 要变为false，现在为true,因为true只是短暂存在，所以这个周期是正要进行发出取指信号，可以延迟发出，也可以让其发出
	// 让其发出，其结果我们会暂存，延迟发出没有问题，只是慢了一个周期。选择让其发出
	pc_valid 	:= Mux(stall,false.B,
				   Mux(reg_valid,true.B,
				   Mux(valid,true.B,false.B))) 

	// 
	reg_pc   	:= Mux(stall,reg_pc,regPC) 
	reg_inst 	:= Mux(stall,reg_inst,
				   Mux(reg_valid,Mux(reg_next_pc_valid,0.U,Mux(flush,0.U,temp_reg_inst)),
				   Mux(valid,Mux(reg_next_pc_valid,0.U,Mux(flush,0.U,handle_inst)),0.U)))				   	

	io.out.pc0 		:= regPC
    io.out.pc1 		:= reg_pc 
    io.out.inst 	:= Mux(stall,0.U,reg_inst)
	io.out.rvalid	:= pc_valid

}