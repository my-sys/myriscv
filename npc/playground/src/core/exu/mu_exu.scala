import chisel3._ 
import chisel3.util._ 

object MUType{
//  低两位用于判断是否输入有符号第2位为rs1,第1位为rs2, 第三位用于判断是否低32位，兼容32位处理器 .
	def mu_mul		= "b00_0_0_11".U 
	def mu_mulw 	= "b00_0_1_11".U 
	def mu_mulh		= "b00_1_0_11".U 
	def mu_mulhsu 	= "b00_1_0_10".U 
	def mu_mulhu	= "b00_1_0_00".U
//  第1位用于判断是否为无符号,第二位判断是否兼任32位处理器
	def mu_div 		= "b01_00_0_1".U 
	def mu_divu		= "b01_00_0_0".U
	def mu_divw		= "b01_00_1_1".U
	def mu_divuw	= "b01_00_1_0".U 
	def mu_rem		= "b01_01_0_1".U 
	def mu_remu		= "b01_01_0_0".U 
	def mu_remw		= "b01_01_1_1".U 
	def mu_remuw	= "b01_01_1_0".U

}


class MUL extends Module with CoreParameters{
	val io = IO(new Bundle{
		val in_stall	= Input(Bool())
		val in_flush 	= Input(Bool())
		val exuType     = Input(UInt(ExuTypeLen.W))
		val rs1_data    = Input(UInt(RegDataLen.W))
		val rs2_data    = Input(UInt(RegDataLen.W))
		val result		= Output(UInt(RegDataLen.W))
		val stall 		= Output(Bool())
		val valid 		= Input(Bool()) 
		val out_valid	= Output(Bool())

	})
	val exuType		= io.exuType 
	val rs1_data	= io.rs1_data
	val rs2_data	= io.rs2_data
	val valid 		= io.valid &(!io.in_stall)

	val mul_data1 = Mux(exuType(2),Cat(Fill(98,rs1_data(31)),rs1_data(31,0)),Mux(exuType(1),Cat(Fill(66,1.U(1.W)),rs1_data),Cat(0.U(66.W),rs1_data)))
	val mul_data2 = Mux(exuType(2),Cat(Fill(33,rs2_data(31)),rs2_data(31,0)),Mux(exuType(0),Cat(rs2_data(63),rs2_data),Cat(0.U(1.W),rs2_data)))	

	// temp_mul2 的长度是67, mul2 为64位，多出1位用于兼容无符号运算， 即65位
	// 按照基4的Booth，需要最地位添0 故66位，为了满足三等分，高位扩展一位符号位，故67位.
	val temp_mul2 		= Cat(Fill(1,mul_data2(64)),Cat(mul_data2,0.U(1.W)))
	val reg_stall 		= RegInit(false.B)
	val reg_cnt 		= RegInit(0.U(6.W))
	val mul_start :: mul_busy :: mul_end :: Nil = Enum(3)
	val reg_state 		= RegInit(mul_start)
	val reg_temp_mul2   = RegInit(0.U(67.W))
	val reg_mul1		= RegInit(0.U(130.W))
	val reg_result 		= RegInit(0.U(130.W))
	val reg_exuType 	= RegInit(0.U(1.W)) 
	val reg_out_valid	= RegInit(false.B)
	val pp				= MuxLookup(reg_temp_mul2(2,0),0.U(130.W),List(
		"b001".U 	->  (reg_mul1),
		"b010".U 	-> 	(reg_mul1),
		"b011".U 	->	(reg_mul1 << 1.U),
		"b100".U 	-> 	((~reg_mul1 + 1.U)<<1.U),
		"b101".U 	-> 	(~reg_mul1 + 1.U),
		"b110".U 	->	(~reg_mul1 + 1.U)
	))

	switch(reg_state){
		is(mul_start){
			reg_stall		:= Mux(io.in_flush,false.B,Mux(valid,true.B,false.B))
			reg_state		:= Mux(io.in_flush,mul_start,Mux(valid,mul_busy,reg_state))
			reg_temp_mul2 	:= temp_mul2
			reg_mul1 		:= mul_data1
			reg_result		:= 0.U 
			reg_exuType		:= exuType(3) 
			reg_out_valid	:= false.B
			//reg_cnt
		}
		is(mul_busy){
			//reg_stall 
			//reg_mul1
			//reg_exuType
			//reg_out_valid
			reg_result		:= reg_result + pp
			reg_mul1		:= reg_mul1 << 2.U
			reg_temp_mul2	:= reg_temp_mul2 >> 2.U
			reg_cnt 		:= Mux(io.in_flush,0.U,reg_cnt + 1.U)
			reg_state 		:= Mux(io.in_flush,mul_start,Mux(reg_cnt === 32.U,mul_end,reg_state))
		}
		is(mul_end){
			//reg_temp_mul2
			//reg_mul1
			//reg_result
			//reg_exuType
			when(io.in_flush){
				reg_stall 	:= false.B
				reg_state	:= mul_start
				reg_cnt 		:= 0.U
				reg_out_valid	:= false.B
				reg_result		:= 0.U
			}.elsewhen(io.in_stall){
				reg_stall 	:= reg_stall
				reg_state	:= reg_state
				reg_cnt 		:= reg_cnt
				reg_out_valid	:= reg_out_valid
				reg_result		:= reg_result
			}.otherwise{
				reg_result		:= reg_result + pp
				reg_stall 		:= false.B
				reg_state		:= mul_start
				reg_cnt 		:= 0.U 
				reg_out_valid	:= true.B 
			}

		}
	}
	io.stall 				:= reg_stall
	io.result				:= Mux(reg_exuType =/= 1.U,reg_result(63,0),reg_result(127,64)) 
	io.out_valid			:= reg_out_valid
}

class DIV extends Module with CoreParameters{
	val io = IO(new Bundle{
		val in_stall    = Input(Bool())
		val in_flush 	= Input(Bool())
		val rs1_data	= Input(UInt(64.W))
		val rs2_data	= Input(UInt(64.W))
		val result 		= Output(UInt(64.W))
		val valid 		= Input(Bool())
		val exuType		= Input(UInt(ExuTypeLen.W))
		val stall 		= Output(Bool())
		val out_valid	= Output(Bool())
	}) 
	val rs1_data		= io.rs1_data
	val rs2_data		= io.rs2_data
	val valid 			= io.valid & (!io.in_stall)
	val exuType			= io.exuType

// dividend 需要扩展为65位有符号数
	val dividend  		= Mux(exuType(1),Mux(exuType(0),Cat(Fill(33,rs1_data(31)),rs1_data(31,0)),Cat(Fill(33,0.U(1.W)),rs1_data(31,0))),
						Mux(exuType(0),Cat(Fill(1,rs1_data(63)),rs1_data(63,0)),Cat(Fill(1,0.U(1.W)),rs1_data(63,0))))
// divisor 需要扩展为65位有符号数
	val divisor			= Mux(exuType(1),Mux(exuType(0),Cat(Fill(33,rs2_data(31)),rs2_data(31,0)),Cat(Fill(33,0.U(1.W)),rs2_data(31,0))),
						Mux(exuType(0),Cat(Fill(1,rs2_data(63)),rs2_data(63,0)),Cat(Fill(1,0.U(1.W)),rs2_data(63,0))))
						
	val rem 			= Mux(exuType(1),Mux(exuType(0),Fill(65,rs1_data(31)),0.U),Mux(exuType(0),Fill(65,rs1_data(63)),0.U))

	val reg_divisor 	= RegInit(0.U(65.W))
	val reg_dividend  	= RegInit(0.U(65.W))
	val reg_rem 		= RegInit(0.U(65.W))
	val reg_q 			= RegInit(0.U(65.W))

// 补码除法运算过程中需要
	val neg_divisor		= (~reg_divisor) + 1.U			
	val div_start :: div_busy :: div_correct :: div_end :: Nil = Enum(4)

	val reg_state		= RegInit(div_start)
	val reg_cnt			= RegInit(0.U(7.W))
	val reg_exuType		= RegInit(0.U(ExuTypeLen.W)) 
	val reg_out_valid   = RegInit(false.B) 
	val reg_stall 		= RegInit(false.B)
	val temp_result 	= (Cat(reg_rem,reg_q)<<1.U)+Mux(reg_rem(64)^reg_divisor(64),Cat(reg_divisor,0.U(65.W)),Cat(neg_divisor,1.U(65.W)))
	val reg_is_need_correct = RegInit(false.B)
	
	val rem_is_0 = (reg_rem === 0.U)
	val rem_is_neg_div = (reg_rem === neg_divisor)
	val rem_is_div 	   = (reg_rem === reg_divisor)
	//Mux(divisor(64)^dividend(64),rem+divisor,rem+(~divisor)+1.U)//
	//Mux(divisor(64)^dividend(64),divisor + dividend,dividend + (~divisor)+1.U)
	val is_need_correct = ((reg_rem(64) ^ reg_dividend(64)) & (~rem_is_0)) | rem_is_neg_div | rem_is_div
	switch(reg_state){
		is(div_start){
			reg_divisor 	:= divisor
			reg_dividend 	:= dividend
			reg_rem			:= Mux(divisor(64)^dividend(64),rem+divisor,rem+(~divisor)+1.U)//Mux(divisor(64)^dividend(64),divisor + dividend,dividend + (~divisor)+1.U)
			reg_state 		:= Mux(io.in_flush,div_start,Mux(valid,div_busy,div_start))
			reg_stall 		:= Mux(io.in_flush,false.B,Mux(valid,true.B,false.B))
			reg_exuType		:= Mux(valid,exuType,0.U)
			reg_q 			:= dividend 
			reg_out_valid	:= false.B 
			reg_is_need_correct := false.B
			//reg_cnt 
		}
		is(div_busy){
			//reg_divisor 
			//reg_dividend 
			//reg_stall
			//reg_exuType
			//reg_out_valid
			reg_cnt 		:= Mux(io.in_flush,0.U,reg_cnt + 1.U)
			reg_q 	:= temp_result(64,0)
			reg_rem := temp_result(129,65)
			//reg_q 			:= Mux(reg_rem(64)^reg_divisor(64),reg_q<<1.U,(reg_q <<1.U)+1.U)
			//reg_rem 		:= Mux(reg_rem(64)^reg_divisor(64),(reg_rem<<1.U) + reg_divisor,(reg_rem<<1.U)+neg_divisor)
			//reg_cnt 为64时，说明本次reg_cnt要变为65，故总共执行了65次
			reg_state 		:= Mux(io.in_flush,div_start,Mux(reg_cnt === "h40".U,div_correct,reg_state))
		}
		is(div_correct){
			//reg_q := Mux(reg_rem(64)^reg_divisor(64),reg_q<<1.U,(reg_q<<1.U))//+1.U)
			//reg_q := Mux(reg_rem(64)^reg_divisor(64),reg_q<<1.U,(reg_q<<1.U)+1.U)
			//reg_q := Mux(reg_rem(64)^reg_divisor(64),(reg_q<<1.U)+1.U,reg_q<<1.U)
			when(is_need_correct){
				when(reg_rem(64)^reg_divisor(64)){
					reg_q := (reg_q<<1.U)
					reg_rem := reg_rem + reg_divisor
				}.otherwise{
					reg_q := (reg_q<<1.U) + 1.U
					reg_rem := reg_rem + neg_divisor
				}
		 	}.otherwise{
				reg_q := reg_q<<1.U 
			}
			//reg_rem := reg_rem
			reg_state := Mux(io.in_flush,div_start,div_end)
			// when(io.in_flush){
			// 	reg_is_need_correct := false.B
			// }.otherwise{
			// 	reg_is_need_correct := ((reg_rem(64) ^ reg_dividend(64)) & (~rem_is_0)) | rem_is_neg_div | rem_is_div
			// }
			
		}
		is(div_end){
			// 商和余数矫正
			//reg_divisor 
			//reg_dividend
			//reg_exuType
			when(io.in_flush){
				reg_q 			:= 0.U
				reg_rem 		:= 0.U
				reg_stall		:= false.B
				reg_out_valid	:= false.B
				reg_state		:= div_start
				reg_cnt 		:= 0.U
				//reg_is_need_correct := false.B
			}.elsewhen(io.in_stall){
				reg_q 			:= reg_q
				reg_rem 		:= reg_rem
				reg_stall		:= reg_stall
				reg_out_valid	:= reg_out_valid
				reg_state		:= reg_state
				reg_cnt 		:= reg_cnt
				//reg_is_need_correct := reg_is_need_correct
			}.otherwise{
				when(reg_dividend(64)^reg_divisor(64)){
					//reg_q := reg_q - 1.U
					//reg_rem := reg_rem + reg_divisor
					reg_q := reg_q + 1.U
				}.otherwise{
					//reg_q := reg_q + 1.U
					//reg_rem := reg_rem + neg_divisor
				}
				reg_is_need_correct := false.B
				reg_stall		:= false.B 
				reg_out_valid	:= true.B
				reg_state		:= div_start
				reg_cnt 		:= 0.U 
			}

		}
	}
	io.result 		:= Mux(reg_exuType(2),reg_rem,reg_q)
	io.stall  		:= reg_stall 
	io.out_valid	:= reg_out_valid
}


class MU_EXU extends Module with CoreParameters{
    val io = IO(new Bundle{
		val in_stall 		= Input(Bool())
		val in_flush		= Input(Bool())
        val exuType     	= Input(UInt(ExuTypeLen.W))
        val rs1_data    	= Input(UInt(RegDataLen.W))
        val rs2_data    	= Input(UInt(RegDataLen.W))
        val result_data 	= Output(UInt(RegDataLen.W))
		val stall 			= Output(Bool())
		val in_valid 		= Input(Bool()) 
		val out_valid 		= Output(Bool())
    })

	val div = Module(new DIV)
	val mul = Module(new MUL)

	val exuType 		= io.exuType
	div.io.rs1_data 	:= io.rs1_data
	div.io.rs2_data 	:= io.rs2_data
	div.io.valid 		:= io.in_valid & exuType(4) & (!mul.io.stall)
	div.io.exuType		:= io.exuType 
	div.io.in_stall		:= io.in_stall
	div.io.in_flush		:= io.in_flush
	
	mul.io.rs1_data		:= io.rs1_data
	mul.io.rs2_data		:= io.rs2_data
	mul.io.exuType		:= io.exuType
	mul.io.valid 		:= io.in_valid &(~exuType(4)) & (!div.io.stall)
	mul.io.in_stall		:= io.in_stall
	mul.io.in_flush		:= io.in_flush

	io.stall 		:= div.io.stall | mul.io.stall 
	io.result_data 	:= Mux(div.io.out_valid,div.io.result,0.U) | Mux(mul.io.out_valid,mul.io.result,0.U)
	io.out_valid 	:= div.io.out_valid | mul.io.out_valid

}   