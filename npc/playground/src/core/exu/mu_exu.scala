import chisel3._ 
import chisel3.util._ 

object MUType{
	// 最后一位表示是否为32位操作
	def mu_div		= "b100_10".U 
	def mu_divu		= "b101_10".U 
	def mu_divuw 	= "b101_11".U 
	def mu_rem		= "b110_10".U 
	def mu_remuw 	= "b111_11".U 
	def mu_remw 	= "b110_11".U 

	def mu_mul 		= "b000_10".U 
	def mu_mulh		= "b001_10".U 
	def mu_mulhsu	= "b010_10".U 
	def mu_mulhu	= "b011_10".U 
	def mu_mulw 	= "b000_11".U 
}

class MUL extends Module{
	val io = IO(new Bundle{
		val valid 		= Input(Bool())
		val kill 		= Input(Bool())
		val rs1_data	= Input(UInt(64.W))
		val rs2_data	= Input(UInt(64.W))
		val exuType		= Input(UInt(7.W))

		val dest_data	= Output(UInt(64.W))
		val dest_is_w	= Output(Bool())
		val ready 		= Output(Bool())
	})
	val rs1_data		= io.rs1_data
	val rs2_data		= io.rs2_data
	val valid 			= io.valid 
	val exuType			= io.exuType

	val is_32 			= io.exuType(2)
	val is_rs1_signed	= io.exuType(1)
	val is_rs2_signed 	= io.exuType(0)

	val mul_data1 = Mux(is_32,Cat(Fill(98,rs1_data(31)),rs1_data(31,0)),Mux(is_rs1_signed,Cat(Fill(66,1.U(1.W)),rs1_data),Cat(0.U(66.W),rs1_data)))
	val mul_data2 = Mux(is_32,Cat(Fill(33,rs2_data(31)),rs2_data(31,0)),Mux(is_rs2_signed,Cat(rs2_data(63),rs2_data),Cat(0.U(1.W),rs2_data)))	
	val temp_mul2 		= Cat(Fill(1,mul_data2(64)),Cat(mul_data2,0.U(1.W)))
	val reg_ready = RegInit(true.B)
	val mul_start :: mul_busy :: mul_end :: Nil = Enum(3)
	val reg_state 		= RegInit(mul_start)
	val reg_temp_mul2   = RegInit(0.U(67.W))
	val reg_mul1		= RegInit(0.U(130.W))
	val reg_result 		= RegInit(0.U(130.W))
	val reg_exuType 	= RegInit(0.U(7.W))
	val reg_dest_is_w	= RegInit(false.B)
	val pp				= MuxLookup(reg_temp_mul2(2,0),0.U(130.W),List(
		"b001".U 	->  (reg_mul1),
		"b010".U 	-> 	(reg_mul1),
		"b011".U 	->	(reg_mul1 << 1.U),
		"b100".U 	-> 	((~reg_mul1 + 1.U)<<1.U),
		"b101".U 	-> 	(~reg_mul1 + 1.U),
		"b110".U 	->	(~reg_mul1 + 1.U)
	))

	siwtch(reg_state){
		is(mul_start){
			reg_ready 		:= Mux(io.kill,true.B,Mux(valid,false.B,true.B))
			reg_state		:= Mux(io.kill,mul_start,Mux(valid,mul_busy,reg_state))
			reg_temp_mul2 	:= temp_mul2
			reg_mul1 		:= mul_data1
			reg_result		:= 0.U 
			reg_exuType		:= exuType
			reg_dest_is_w	:= false.B 
			reg_cnt 		:= 0.U 
		}
		is(mul_busy){
			reg_result		:= reg_result + pp
			reg_mul1		:= reg_mul1 << 2.U
			reg_temp_mul2	:= reg_temp_mul2 >> 2.U
			reg_cnt 		:= Mux(io.kill,0.U,reg_cnt + 1.U)
			reg_state 		:= Mux(io.kill,mul_start,Mux(reg_cnt === 32.U,mul_end,reg_state))
			reg_ready 		:= Mux(io.kill,true.B,reg_ready)
		}
		is(mul_end){
			when(io.kill){
				reg_ready	:= true.B 
				reg_state	:= mul_start
				reg_cnt 	:= 0.U
				reg_dest_is_w := false.B 
				reg_result		:= 0.U
			}.otherwise{
				reg_result		:= reg_result + pp
				reg_ready 		:= true.B 
				reg_state		:= mul_start
				reg_cnt 		:= 0.U 
				reg_dest_is_w 	:= true.B 
			}
		}
	}
	val reg_not_h 	= (reg_exuType(3,2) === 0.U)
	val reg_is_32 	= reg_exuType(0)
	io.dest_data	:= Mux(reg_is_32,Cat(Fill(32,reg_result(31)),reg_result(31,0)),Mux(reg_not_h,reg_result(63,0),reg_result(127,64))) 
	io.dest_is_w	:= reg_dest_is_w
	io.ready		:= reg_ready
}

class DIV extends Module{
	val io = IO(new Bundle{
		val valid 		= Input(Bool())
		val kill 		= Input(Bool())
		val rs1_data	= Input(UInt(64.W))
		val rs2_data	= Input(UInt(64.W))
		val exuType		= Input(UInt(7.W))

		val dest_data	= Output(UInt(64.W))
		val dest_is_w	= Output(Bool())
		val ready 		= Output(Bool())
	})
	val rs1_data		= io.rs1_data
	val rs2_data		= io.rs2_data
	val valid 			= io.valid 
	val exuType			= io.exuType

	val is_32 			= io.exuType(0)
	val is_signed		= !io.exuType(2)
// dividend 需要扩展为65位有符号数
	val dividend  		= Mux(is_32,Mux(is_signed,Cat(Fill(33,rs1_data(31)),rs1_data(31,0)),Cat(Fill(33,0.U(1.W)),rs1_data(31,0))),
						Mux(is_signed,Cat(Fill(1,rs1_data(63)),rs1_data(63,0)),Cat(Fill(1,0.U(1.W)),rs1_data(63,0))))
// divisor 需要扩展为65位有符号数
	val divisor			= Mux(is_32,Mux(is_signed,Cat(Fill(33,rs2_data(31)),rs2_data(31,0)),Cat(Fill(33,0.U(1.W)),rs2_data(31,0))),
						Mux(is_signed,Cat(Fill(1,rs2_data(63)),rs2_data(63,0)),Cat(Fill(1,0.U(1.W)),rs2_data(63,0))))
						
	val rem 			= Mux(is_32,Mux(exuType(0),Fill(65,rs1_data(31)),0.U),Mux(is_signed,Fill(65,rs1_data(63)),0.U))

	val reg_divisor 	= RegInit(0.U(65.W))
	val reg_dividend  	= RegInit(0.U(66.W))
	val reg_rem 		= RegInit(0.U(65.W))
	val reg_q 			= RegInit(0.U(66.W))

// 补码除法运算过程中需要
	val neg_divisor		= (~reg_divisor) + 1.U			
	val div_start :: div_busy :: div_correct :: div_end :: Nil = Enum(4)
	val reg_state		= RegInit(div_start)
	val reg_cnt			= RegInit(0.U(7.W))
	val reg_exuType		= RegInit(0.U(7.W))
	val temp_result 	= (Cat(reg_rem,reg_q)<<1.U)+Mux(reg_rem(64)^reg_divisor(64),Cat(reg_divisor,0.U(66.W)),Cat(neg_divisor,1.U(66.W)))
	//val reg_is_need_correct = RegInit(false.B)
	
	val rem_is_0 = (reg_rem === 0.U)
	val rem_is_neg_div = (reg_rem === neg_divisor)
	val rem_is_div 	   = (reg_rem === reg_divisor)
	val is_need_correct = ((reg_rem(64) ^ reg_dividend(65)) & (~rem_is_0)) | rem_is_neg_div | rem_is_div

	//val reg_dest_data	= RegInit(0.U(64.W))
	val reg_dest_is_w	= RegInit(false.B)
	val reg_ready 		= RegInit(true.B)
	switch(reg_state){
		is(div_start){
			reg_divisor 	:= divisor
			reg_dividend 	:= Cat(dividend,0.U(1.W))
			reg_rem			:= Mux(divisor(64)^dividend(64),rem+divisor,rem+(~divisor)+1.U)
			reg_state 		:= Mux(io.kill,div_start,Mux(valid,div_busy,div_start))
			reg_ready 		:= Mux(io.kill,true.B,Mux(valid,false.B,true.B))
			reg_exuType		:= Mux(valid,exuType,0.U)
			reg_q 			:= Cat(dividend,0.U(1.W))
			reg_is_need_correct	:= false.B
			reg_cnt 		:= 0.U
			reg_dest_is_w	:= false.B
		}
		is(div_busy){
			reg_cnt		:= Mux(io.kill,0.U,reg_cnt + 1.U)
			reg_q 		:= temp_result(65,0)
			reg_rem 	:= temp_result(130,66)
			reg_state 	:= Mux(io.kill,div_start,Mux(reg_cnt === "h40".U,div_correct,reg_state))
			reg_ready 	:= Mux(io.kill,true.B,reg_ready)
		}
		is(div_correct){
			reg_q 		:= Mux(reg_rem(64)^reg_divisor(64),(reg_q<<1.U)+1.U,(reg_q<<1.U)+1.U)
			reg_state 	:= Mux(io.kill,div_start,div_end)
			reg_ready 	:= Mux(io.kill,true.B,reg_ready)
		}
		is(div_end){
			// 商和余数矫正
			when(io.kill){
				reg_q 			:= 0.U 
				reg_rem 		:= 0.U 
				reg_ready		:= true.B
				reg_dest_is_w	:= false.B
				reg_state		:= div_start
				reg_cnt 		:= 0.U
			}.otherwise{
				when(is_need_correct){
					when(reg_rem(64)^reg_divisor(64)){
						reg_rem := reg_rem + reg_divisor
						reg_q 	:= reg_q - 1.U
					}.otherwise{
						reg_rem := reg_rem + neg_divisor
						reg_q 	:= reg_q + 1.U
					}
				}
				reg_ready		:= true.B
				reg_dest_is_w	:= true.B
				reg_state		:= div_start
				reg_cnt			:= 0.U
			}
		}
	}
	val reg_is_32		= reg_exuType(0)
	val reg_is_rem 		= reg_exuType(3)
	val rem_adjust 		= Mux(reg_is_32,Cat(Fill(32,reg_rem(31)),reg_rem(31,0)),reg_rem(63,0))
	val q_adjust   		= Mux(reg_is_32,Cat(Fill(32,reg_q(31)),reg_q(31,0)),reg_q(63,0))
	io.dest_data		:= Mux(reg_is_rem,rem_adjust,q_adjust)
	io.dest_is_w		:= reg_dest_is_w
	io.ready 			:= reg_ready 
}

class MU_EXU extends Module with CoreParameters{
	val io = IO(new Bundle{
		val valid 	= Input(Bool())
		val kill 	= Input(Bool())
		val exu_type 	= Input(UInt(7.W))
		val rs1_data 	= Input(UInt(64.W))
		val rs2_data	= Input(UInt(64.W))

		val dest_data	= Output(UInt(64.W))
		val dest_is_w	= Output(Bool())
		val ready 		= Output(Bool())
	})

	val div = Module(new DIV)
	val mul = Module(new MUL)
	div.io.valid 		:= io.valid & io.exu_type(4)
	div.io.rs1_data 	:= io.rs1_data
	div.io.rs2_data 	:= io.rs2_data
	div.io.exuType		:= io.exu_type

	mul.io.valid 		:= io.valid & (!io.exu_type(4))
	mul.io.rs1_data		:= io.rs1_data
	mul.io.rs2_data		:= io.rs2_data
	mul.io.exuType		:= io.exu_type


	io.dest_data	:= Mux(div.io.dest_is_w, div.io.dest_data,mul.io.dest_data)
	io.dest_is_w	:= div.io.dest_is_w | mul.io.dest_is_w
	io.ready 		:= div.io.ready & mul.io.ready
}