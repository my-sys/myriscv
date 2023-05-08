// object ALUType{
// //第2位表示立即数，1表示没有立即数，0表示有立即数。尽量与指令对应减少复杂度
// //第1位表示是否为32位操作，1表示是32位操作，0表示不是32位操作。
// 	val alu_add 	= "b000_1_0".U 
// 	val alu_addi 	= "b000_0_0".U 
// 	val alu_addiw 	= "b000_0_1".U 
// 	val alu_addw 	= "b000_1_1".U 

// 	val alu_slt 	= "b010_1_0".U 
// 	val alu_slti 	= "b010_0_0".U 

// 	val alu_sltiu   = "b011_0_0".U 
// 	val alu_sltu 	= "b011_1_0".U 

// 	val alu_and 	= "b111_1_0".U 
// 	val alu_andi 	= "b111_0_0".U 

// 	val alu_or 		= "b110_1_0".U 
// 	val alu_ori 	= "b110_0_0".U 

// 	val alu_xor 	= "b100_1_0".U 
// 	val alu_xori 	= "b100_0_0".U 

// 	val alu_sll 	= "b001_1_0".U 
// 	val alu_slli 	= "b001_0_0".U 
// 	val alu_slliw 	= "b001_0_1".U 
// 	val alu_sllw 	= "b001_1_1".U 

// 	val alu_srl 	= "b101_1_0".U 
// 	val alu_srli 	= "b101_0_0".U 
// 	val alu_srliw 	= "b101_0_1".U 
// 	val alu_srlw 	= "b101_1_1".U 

// 	val alu_sub 	= "b1_000_1_0".U
// 	val alu_subw 	= "b1_000_1_1".U 
	
// 	val alu_sra 	= "b1_101_1_0".U 
// 	val alu_srai 	= "b1_101_0_0".U 
// 	val alu_sraiw 	= "b1_101_0_1".U 
// 	val alu_sraw 	= "b1_101_1_1".U 

// 	val alu_lui 	= "b00_000_0_0".U 
// 	val alu_auipc 	= "b10_000_0_0".U 
// }
// object BRUType{
// //这里的低两位没有特殊含义，尽量与指令集的形式对应，这会有助于，解码阶段降低复杂度？
// //上面一行的理解少考虑分支指令借用alu资源的情况，
// //第2行对分支指令如何借用alu资源问题的考虑有所欠缺，比较用alu加法器，那地址计算呢？
// 	val bru_beq 	= "b01_000_1_0".U  //0
// 	val bru_bne 	= "b01_001_1_0".U  //1
// 	val bru_blt		= "b01_100_1_0".U  //4
// 	val bru_bltu 	= "b01_110_1_0".U //6
// 	val bru_bge 	= "b01_101_1_0".U  //5
// 	val bru_bgeu 	= "b01_111_1_0".U  //7
// //这个要与其他分支指令不一样，暂时如下，不过这个值，是不是在取指令阶段的就已经确定了。指令预测还没有装上，就按这个先。
// 	val bru_jal 	= "b10_011_1_0".U  //3
// 	val bru_jalr 	= "b10_010_1_0".U  //2
// }

////本代码由chisel代码而来，只是为了加快仿真速度，考核而设计。正规的代码是chisel代码
module ALU_EXU(
  input         io_valid,
  input         io_is_pre,
  output        io_br_info_valid,
  output        io_br_info_mispredict,
  output [63:0] io_br_info_br_pc,
  output        io_br_info_taken,
  output [63:0] io_br_info_target_next_pc,
  output        io_get_pre_info_valid,
  input  [63:0] io_get_pre_info_pre_next_pc,
  input  [2:0]  io_opType,
  input  [6:0]  io_exuType,
  input  [63:0] io_op_data1,
  input  [63:0] io_op_data2,
  input  [31:0] io_op_imm,
  input  [63:0] io_op_pc,
  output [63:0] io_dst_data,
  output        io_valid_next_pc,
  output [63:0] io_next_pc
);
  //为啥可以采取这种粗暴的扩展方式，因为进行32位计算的都是有符号数。
  wire is_32 = io_exuType[0];
  wire[31:0] op_data1_T = io_op_data1[31]?32'hffff_ffff:32'h0;
  wire[31:0] op_data2_T = io_op_data2[31]?32'hffff_ffff:32'h0;
  wire [63:0] op_data1 = is_32?{op_data1_T,io_op_data1[31:0]}:io_op_data1;
  wire [63:0] op_data2 = is_32?{op_data2_T,io_op_data2[31:0]}:io_op_data2;
  wire [31:0] op_imm_T = io_op_imm[31]?32'hffff_ffff:32'h0;
  wire [63:0] op_imm = {op_imm_T,io_op_imm[31:0]};

  wire rs2_is_imm =(!io_exuType[1]);
  wire[63:0] rs2_data = rs2_is_imm?op_imm:op_data2;
  wire rs1_is_pc = io_exuType[6];
  wire is_sub = (io_exuType[5])|(io_exuType[4:2] == 3'b010)|(io_exuType[4:2] == 3'b011);
//val rs1_is_0  = (io.exuType(6,5) === "b10".U)//重命名阶段，就需要分清哪些需要寄存器，哪些不需要寄存器。不需要寄存器的，该值就是0,这是仲裁与唤醒逻辑所需要的。
  wire[63:0] rs1_data = rs1_is_pc ?io_op_pc:op_data1;
  wire[63:0] temp_rs2_data = is_sub ? (rs2_data ^ 64'hffff_ffff_ffff_ffff):rs2_data;
  wire[64:0] add_sub_result = {1'b0,rs1_data} + {1'b0,temp_rs2_data} + {64'h0,is_sub};

  //  unsigend rs1 < rs2   must check this flag
//说明,无符号当做65位计算，所以第二个减时为负数，第65位应该为1。 结果为负数，则小于，否则是大于等于。
//我计算中并没有将第65位置1，所以结果是刚好相反的。(同号相减不会存在溢出)
  wire u_rs1_l_rs2 = !add_sub_result[64];
  //  unsigend rs1 < rs2   must check this flag 
  ////符号不同时只需要判断rs1_data 的正负，如果同号只需要判断结果的正负
  wire s_rs1_l_rs2 = (rs1_data[63]^rs2_data[63])?rs1_data[63]:add_sub_result[63];

  wire [5:0]shift_rs2_data = is_32?{1'b0,rs2_data[4:0]}:rs2_data[5:0];
  wire [63:0] sll_temp = op_data1 << shift_rs2_data;
  wire [63:0] srl_temp = (is_32?{32'h0,op_data1[31:0]}:op_data1)>>shift_rs2_data;
  wire [63:0] sra_temp = $signed(op_data1) >>> shift_rs2_data;
  wire is_sra = is_sub;
  wire [63:0] sr_temp = is_sra?sra_temp:srl_temp;
  wire [2:0]func = io_exuType[4:2];
  wire [63:0] result_data = (func == 3'b000)?add_sub_result[63:0]: //ALUType.alu_add(4,2)
							(func == 3'b010)?{63'h0,s_rs1_l_rs2}:  //ALUType.alu_slt(4,2)
							(func == 3'b011)?{63'h0,u_rs1_l_rs2}:  //ALUType.alu_sltu(4,2)
							(func == 3'b111)?(op_data1 & rs2_data): //ALUType.alu_and(4,2)
							(func == 3'b110)?(op_data1 | rs2_data): //ALUType.alu_or(4,2)
							(func == 3'b100)?(op_data1 ^ rs2_data): //ALUType.alu_xor(4,2)
							(func == 3'b001)?sll_temp[63:0]:			//ALUType.alu_sll(4,2)
							(func == 3'b101)?sr_temp[63:0]:64'h0;		//ALUType.alu_srl(4,2)

  wire is_pre = io_is_pre & io_valid;
  wire is_br = (io_opType[2:0] == 3'b001);// Op_type.op_bru op_bru = 3'b001
  wire is_eq = (op_data1 == op_data2);
  wire [63:0]temp_1 = (func == 3'b010)? io_op_data1:io_op_pc;// Mux(func === BRUType.bru_jalr(4,2),io.op_data1,op_pc)
  wire [64:0] add_pc = {1'b1,temp_1 + op_imm};
  wire [64:0]op_pc_4 = {1'b0,io_op_pc + 64'h4};
  wire[64:0] temp_result_pc = is_br?((func == 3'b000)?(is_eq? add_pc:op_pc_4):  //BRUType.bru_beq(4,2)
  									(func == 3'b001)?(is_eq? op_pc_4:add_pc):   //BRUType.bru_bne(4,2)
									(func == 3'b100)?(s_rs1_l_rs2? add_pc:op_pc_4):   //BRUType.bru_blt(4,2)
									(func == 3'b110)?(u_rs1_l_rs2? add_pc:op_pc_4):  //BRUType.bru_bltu(4,2)
									(func == 3'b101)?(s_rs1_l_rs2? op_pc_4:add_pc):  //BRUType.bru_bge(4,2)
									(func == 3'b111)?(u_rs1_l_rs2? op_pc_4:add_pc):  //BRUType.bru_bgeu(4,2)
									(func == 3'b011)?(add_pc):  //BRUType.bru_jal(4,2)
									(func == 3'b010)?({add_pc[64:1],1'b0}):65'h0 //BRUType.bru_jalr(4,2)
									):65'h0;

  wire [63:0] dst_data = is_br?op_pc_4[63:0]:result_data;
  wire [63:0] next_pc  = temp_result_pc[63:0];
  wire valid_next_pc   = temp_result_pc[64];
  wire br_valid = is_br & io_valid;
  wire[63:0] _io_dst_data_T_5 = is_32?(dst_data[31]?{32'hffff_ffff,dst_data[31:0]}:{32'h0,dst_data[31:0]}):dst_data;
  wire flush = (is_pre & valid_next_pc &(next_pc != io_get_pre_info_pre_next_pc)) | (valid_next_pc & (!is_pre)) | (is_pre&(!valid_next_pc));

  assign io_br_info_valid = is_br & io_valid; // @[alu_exu.scala 167:41]
  assign io_br_info_mispredict = br_valid & flush; // @[alu_exu.scala 174:47]
  assign io_br_info_br_pc = br_valid ? io_op_pc : 64'h0; // @[alu_exu.scala 175:55]
  assign io_br_info_taken = br_valid & valid_next_pc; // @[alu_exu.scala 176:55]
  assign io_br_info_target_next_pc = br_valid ? next_pc : 64'h0; // @[alu_exu.scala 177:47]
  assign io_get_pre_info_valid = io_is_pre & io_valid; // @[alu_exu.scala 130:45]
  assign io_dst_data = io_valid ? _io_dst_data_T_5 : 64'h0; // @[alu_exu.scala 168:47]
  assign io_valid_next_pc = br_valid & flush; // @[alu_exu.scala 170:39]
  assign io_next_pc = br_valid ? next_pc : 64'h0; // @[alu_exu.scala 171:47]
endmodule