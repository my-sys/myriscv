import chisel3._
import chisel3.util._ 
class Br_Info_IO extends Bundle{
	val valid 			= Input(Bool())
	val mispredict 		= Input(Bool())
	val br_pc 			= Input(UInt(64.W))
	val taken 			= Input(Bool())
	val target_next_pc  = Input(UInt(64.W))
	val br_type 		= Input(UInt(2.W))
}

object BRType{
	val br_direct = "b00".U 
	val br_call   = "b01".U 
	val br_return = "b10".U 
	val br_indirect = "b11".U 
}

class Br_predictor extends Module{
	val io = IO(new Bundle{
		val br_info = new Br_Info_IO
		//-----------提供预测 pc--------------
		val pc 		= Input(UInt(64.W))
		//-----------预测结果-----------------
		val pre_next_pc = Output(UInt(64.W))
		val pre_valid 	= Output(Bool())
	})
	//index = 6 
	//pc = Tag0 +index+Tag1 
	// 1      ()        64        2
	//valid ----Tag------ Taget pc---- BrType 
	val BTB = Mem(64,UInt(128.W))//RegInit(VecInit(Seq.fill(64)(0.U(128.W))))
	//val PHT = Mem(64,UInt(2.W))
	val RAS = Mem(6,UInt(64.W))//RegInit(VecInit(Seq.fill(6)(0.U(64.W))))//Mem(6,UInt(64.W))
	val PHT = Mem(64,UInt(2.W))//RegInit(Vec(Seq.fill(64)("b10".U(2.W))))
	val reg_head = RegInit(0.U(3.W))
	
	//-------commit 阶段更新 更新BTB以及PHT---------------------
	//-----主要为了避免异常，中断带来的影响，如果该条分支指令是推测的结果，
	//不应该作为预测的来源
	val br_pc = io.br_info.br_pc
	val mispredict = io.br_info.mispredict
	val update_taken 	= io.br_info.taken
	val update_target_pc = io.br_info.target_next_pc
	val update_index 	= br_pc(8,3)
	val update_Tag 		= Cat(br_pc(63,9),br_pc(2))
	val update_br_type  = io.br_info.br_type
	val update_pht_data = PHT.read(update_index)
	
	val update_btb_data = Cat(1.U(1.W),Cat(update_Tag,Cat(update_target_pc,update_br_type)))
	val chage_pht_counter = Mux(update_taken,Mux(update_pht_data === "b11".U,update_pht_data,update_pht_data + 1.U),Mux(update_pht_data === "b00".U,update_pht_data,update_pht_data - 1.U))
	when(io.br_info.valid){
		PHT(update_index)	  := chage_pht_counter
		when(mispredict){
			BTB(update_index) := update_btb_data
		}
	}
	
	//-----------使用BTB与PHT预测next_pc------------------------
	val pc 		= io.pc 
	val index 	= pc(8,3)
	val tag   	= Cat(pc(63,9),pc(2))
	
	val btb_data 	= BTB.read(index)
	val pht_data 	= PHT.read(index)
	val pht_taken   = pht_data(1)
	val btb_valid 	= btb_data(122)
	val btb_tag 	= btb_data(121,66)
	val btb_target_next_pc = btb_data(65,2)
	val btb_br_type = btb_data(1,0)
	
	val pre_valid = btb_valid &(btb_tag === tag) & pht_taken
	val pre_next_pc = WireInit(0.U)
	val ras_ready = RAS.read(reg_head)
	when(pre_valid ){
		when(btb_br_type === BRType.br_return)
		{
			pre_next_pc := ras_ready
			reg_head	  := reg_head - 1.U 
		}.elsewhen(btb_br_type === BRType.br_call){
			pre_next_pc	:= btb_target_next_pc
			RAS(reg_head) := pc
			reg_head	  := reg_head + 1.U 
		}.otherwise{
			pre_next_pc	:= btb_target_next_pc
		}
	}
	
	io.pre_next_pc  := pre_next_pc
	io.pre_valid	:= pre_valid
}