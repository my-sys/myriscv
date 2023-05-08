//本代码由chisel代码而来，只是为了加快仿真速度，考核而设计。正规的代码是chisel代码
module Decode(
  input         clock,
  input         reset,
  output        io_get_inst_ready,
  input         io_get_inst_valid,
  input  [31:0] io_get_inst_bits_inst,
  input  [63:0] io_get_inst_bits_pc,
  input         io_get_inst_bits_is_pre,
  output [4:0]  io_normal_rd_rs1_addr,
  input  [63:0] io_normal_rd_rs1_data,
  output [4:0]  io_normal_rd_rs2_addr,
  input  [63:0] io_normal_rd_rs2_data,
  output [11:0] io_csr_rd_csr_addr,
  input  [63:0] io_csr_rd_csr_data,
  input         io_op_datas_ready,
  output        io_op_datas_valid,
  output [2:0]  io_op_datas_bits_opType,
  output [6:0]  io_op_datas_bits_exuType,
  output [4:0]  io_op_datas_bits_rs1_addr,
  output [63:0] io_op_datas_bits_rs1_data,
  output [4:0]  io_op_datas_bits_rs2_addr,
  output [63:0] io_op_datas_bits_rs2_data,
  output [31:0] io_op_datas_bits_imm,
  output [63:0] io_op_datas_bits_pc,
  output [31:0] io_op_datas_bits_inst,
  output [4:0]  io_op_datas_bits_dest_addr,
  output        io_op_datas_bits_dest_is_reg,
  output        io_op_datas_bits_is_pre,
  output [11:0] io_op_datas_bits_csr_addr,
  output [63:0] io_op_datas_bits_csr_data,
  input         io_flush
);
parameter ALUType_alu_sll_4_2 = 3'b001;
parameter op_mem = 3'b101,op_fence = 3'b110,op_alu = 3'b010,op_mu = 3'b011,op_bru = 3'b001,op_system = 3'b100;
parameter Type_N = 4'b0000,Type_U = 4'b0001,Type_S = 4'b0011,Type_J = 4'b0010,Type_R = 4'b0110,Type_B = 4'b0111,Type_CSR = 4'b0101,Type_IR = 4'b0100,Type_I = 4'b1100;
parameter alu_lui = 7'b00_000_0_0, alu_auipc = 7'b10_000_0_0,bru_jal = 7'b10_011_1_0,bru_jalr = 7'b10_010_1_0;
  reg  reg_valid; // @[decode.scala 17:42]
  reg [2:0] reg_opType; // @[decode.scala 30:42]
  reg [6:0] reg_exuType; // @[decode.scala 31:42]
  reg [4:0] reg_rs1_addr; // @[decode.scala 32:42]
  reg [63:0] reg_rs1_data; // @[decode.scala 33:42]
  reg [4:0] reg_rs2_addr; // @[decode.scala 35:42]
  reg [63:0] reg_rs2_data; // @[decode.scala 36:42]
  reg [31:0] reg_imm; // @[decode.scala 37:42]
  reg [63:0] reg_pc; // @[decode.scala 38:50]
  reg [31:0] reg_inst; // @[decode.scala 40:42]
  reg [4:0] reg_dest_addr; // @[decode.scala 41:42]
  reg  reg_dest_is_reg; // @[decode.scala 42:38]
  reg [11:0] reg_csr_addr; // @[decode.scala 44:42]
  reg [63:0] reg_csr_data; // @[decode.scala 45:42]
  reg  reg_is_pre; // @[decode.scala 46:42]
  wire [4:0] rs2_addr = io_get_inst_bits_inst[24:20]; // @[decode.scala 54:35]
  wire [4:0] rs1_addr = io_get_inst_bits_inst[19:15]; // @[decode.scala 55:35]
  wire [11:0] csr_addr = io_get_inst_bits_inst[31:20]; // @[decode.scala 56:35]
  wire [4:0] dest_addr = io_get_inst_bits_inst[11:7]; // @[decode.scala 57:39]
  wire [2:0] fun = io_get_inst_bits_inst[14:12]; // @[decode.scala 59:23]
  wire [4:0] fun_exuType = {fun,io_get_inst_bits_inst[5],io_get_inst_bits_inst[3]}; // @[Cat.scala 33:92]
  wire [2:0] fun_op = {io_get_inst_bits_inst[6],io_get_inst_bits_inst[4],io_get_inst_bits_inst[2]}; // @[Cat.scala 33:92]
  wire  temp_system_is_pri = fun == 3'h0; // @[decode.scala 64:39]
  wire  temp_system_is_imm = io_get_inst_bits_inst[14]; // @[decode.scala 65:38]
//与指令格式对齐system 类型指令中，该位为1 表示无立即数，为0 表示有立即数
  wire  temp_system_rs1 = temp_system_is_imm ? 1'h0 : 1'h1;

  wire [3:0] temp_mem_itype = io_get_inst_bits_inst[5] ? Type_S : Type_I; // @[decode.scala 73:33]
  wire  temp_mem_dest = io_get_inst_bits_inst[5] ? 1'h0 : 1'h1; // @[decode.scala 74:33]
  wire  temp_op_is_imm = ~io_get_inst_bits_inst[5]; // @[decode.scala 76:30]
  wire  temp_mem_rs2   = io_get_inst_bits_inst[5];
  wire  is_sr = fun == 3'h5; // @[decode.scala 77:25]
  wire [5:0] temp_kk = {io_get_inst_bits_inst[30],fun_exuType};
  wire [5:0] temp_op_exuType 	= temp_op_is_imm? (is_sr?temp_kk:{1'b0,fun_exuType}):temp_kk;
  wire [3:0] temp_op_itype 		= temp_op_is_imm?((fun ==ALUType_alu_sll_4_2)| is_sr?Type_IR:Type_I):Type_R;
  wire temp_op_rs2 = !temp_op_is_imm;
  wire [2:0] temp_op = temp_op_is_imm?op_alu:(io_get_inst_bits_inst[25]?op_mu:op_alu);

  wire is_op_system = (fun_op == 3'b110);
  wire is_op_fence  = (fun_op == 3'b001);
  wire is_op_mem	 = (fun_op == 3'b000);
  wire is_op_bru_b	 = (fun_op == 3'b100);
  wire is_op_bru_j  = (fun_op == 3'b101);
  wire is_op_op_0   = (fun_op == 3'b010);
  wire is_op_op_1   = (fun_op == 3'b011);

  wire[2:0] opType = is_op_op_0 ?(temp_op):
					 is_op_op_1 ?(op_alu):
					 (is_op_bru_j | is_op_bru_b)?op_bru:
					 is_op_mem?(op_mem):
					 is_op_fence?(op_fence):
					 is_op_system?op_system:3'b0;
  wire[6:0] exuType = is_op_op_0?({1'b0,temp_op_exuType}):
  					is_op_op_1?(io_get_inst_bits_inst[5]?alu_lui:alu_auipc):
					is_op_bru_j?(io_get_inst_bits_inst[3]?bru_jal:bru_jalr):
					is_op_bru_b?{2'h1,fun_exuType}:
					is_op_mem?{2'h0,fun_exuType}:
					is_op_fence?{2'h2,fun_exuType}:
					is_op_system?(temp_system_is_pri?{io_get_inst_bits_inst[21:20],fun_exuType}:{2'h0,fun_exuType}):7'h0;

  wire[3:0] instType = is_op_op_0?(temp_op_itype):
  						is_op_op_1?Type_U:
						is_op_bru_j?(io_get_inst_bits_inst[3]?Type_J:Type_I):
						is_op_bru_b?Type_B:
						is_op_mem?temp_mem_itype:
						is_op_fence?Type_N:
						is_op_system?(temp_system_is_pri?Type_N:Type_CSR):Type_N;

  wire dest_is_reg = (is_op_op_0 | is_op_op_1 | is_op_bru_j)?1'b1:
  					is_op_bru_b?1'b0:
					is_op_mem?(temp_mem_dest):
					is_op_fence?1'b0:
					is_op_system?(temp_system_is_pri?1'b0:1'b1):1'b0;
  wire rs1_is_reg = is_op_op_0?1'b1:
					is_op_op_1?1'b0:
					is_op_bru_j?(io_get_inst_bits_inst[3]?1'b0:1'b1):
					is_op_bru_b?1'b1:
					is_op_mem?1'b1:
					is_op_fence?1'b0:
					is_op_system?(temp_system_is_pri?1'b0:temp_system_rs1):
					1'b0;

  wire rs2_is_reg = is_op_op_0?temp_op_rs2:
					is_op_op_1?1'b0:
					is_op_bru_j?1'b0:
					is_op_bru_b?1'b1:
					is_op_mem?temp_mem_rs2:
					is_op_fence?1'b0:
					is_op_system?1'b0:1'b0;

  wire [19:0] _imm_data_T_2 = io_get_inst_bits_inst[31] ? 20'hfffff : 20'h0; // @[Bitwise.scala 77:12]
  wire [11:0] _imm_data_T_16 = io_get_inst_bits_inst[31] ? 12'hfff : 12'h0; // @[Bitwise.scala 77:12]
  wire [31:0]  imm_data_I = {_imm_data_T_2,csr_addr}; 
  wire [31:0]  imm_data_U = {io_get_inst_bits_inst[31:12],12'h0};
  wire [31:0]  imm_data_S = {_imm_data_T_2,io_get_inst_bits_inst[31:25],dest_addr}; 
  wire [31:0]  imm_data_J = {_imm_data_T_16,io_get_inst_bits_inst[19:12],io_get_inst_bits_inst[20],io_get_inst_bits_inst[30:21],1'h0}; // @[Cat.scala 33:92]
  wire [31:0]  imm_data_B = {_imm_data_T_2,io_get_inst_bits_inst[7],io_get_inst_bits_inst[30:25],io_get_inst_bits_inst[11:8],1'h0}; // @[Cat.scala 33:92]
  wire [31:0]  imm_data_CSR = {27'h0,rs1_addr}; // @[Cat.scala 33:92]
  wire [31:0]  imm_data_IR = {26'h0,io_get_inst_bits_inst[25:20]};

  assign io_get_inst_ready = io_op_datas_ready; // @[decode.scala 21:31]
  assign io_normal_rd_rs1_addr = io_get_inst_bits_inst[19:15]; // @[decode.scala 55:35]
  assign io_normal_rd_rs2_addr = io_get_inst_bits_inst[24:20]; // @[decode.scala 54:35]
  assign io_csr_rd_csr_addr = io_get_inst_bits_inst[31:20]; // @[decode.scala 56:35]
  assign io_op_datas_valid = reg_valid; // @[decode.scala 161:57]
  assign io_op_datas_bits_opType = reg_opType; // @[decode.scala 146:49]
  assign io_op_datas_bits_exuType = reg_exuType; // @[decode.scala 147:49]
  assign io_op_datas_bits_rs1_addr = reg_rs1_addr; // @[decode.scala 148:49]
  assign io_op_datas_bits_rs1_data = reg_rs1_data; // @[decode.scala 149:49]
  assign io_op_datas_bits_rs2_addr = reg_rs2_addr; // @[decode.scala 150:49]
  assign io_op_datas_bits_rs2_data = reg_rs2_data; // @[decode.scala 151:49]
  assign io_op_datas_bits_imm = reg_imm; // @[decode.scala 152:49]
  assign io_op_datas_bits_pc = reg_pc; // @[decode.scala 153:57]
  assign io_op_datas_bits_inst = reg_inst; // @[decode.scala 154:49]
  assign io_op_datas_bits_dest_addr = reg_dest_addr; // @[decode.scala 155:49]
  assign io_op_datas_bits_dest_is_reg = reg_dest_is_reg; // @[decode.scala 156:41]
  assign io_op_datas_bits_is_pre = reg_is_pre; // @[decode.scala 160:49]
  assign io_op_datas_bits_csr_addr = reg_csr_addr; // @[decode.scala 158:49]
  assign io_op_datas_bits_csr_data = reg_csr_data; // @[decode.scala 159:49]

always @(posedge clock)begin 
	if(reset|io_flush)reg_valid <= 1'b0;
	else if(io_op_datas_ready)reg_valid <= io_get_inst_valid;
end 
always @(posedge clock)begin 
	if(reset)begin 
		reg_opType <= 3'h0;
		reg_exuType <= 7'h0;
		reg_rs1_addr <= 5'h0;
		reg_rs1_data <= 64'h0;

		reg_rs2_addr <= 5'h0;
		reg_rs2_data <= 64'h0;
		reg_imm		<= 32'h0;
		reg_pc		<= 64'h0;

		reg_inst	<= 32'h0;
		reg_dest_addr <= 5'h0;
		reg_dest_is_reg <= 1'h0;

		reg_csr_addr <= 12'h0;
		reg_csr_data <= 64'h0;
		reg_is_pre	<= 1'h0;
	end else if(io_op_datas_ready)begin 
		reg_opType <= opType;
		reg_exuType <= exuType;
		reg_rs1_addr <= rs1_is_reg?rs1_addr:5'h0;
		reg_rs1_data <= rs1_is_reg?io_normal_rd_rs1_data:64'h0;

		reg_rs2_addr <= rs2_is_reg?rs2_addr:5'h0;
		reg_rs2_data <= rs2_is_reg?io_normal_rd_rs2_data:64'h0;
		reg_imm		 <= (instType == Type_I)?imm_data_I:
						(instType == Type_U)?imm_data_U:
						(instType == Type_S)?imm_data_S:
						(instType == Type_J)?imm_data_J:
						(instType == Type_B)?imm_data_B:
						(instType == Type_CSR)?imm_data_CSR:
						(instType == Type_IR)?imm_data_IR:32'h0;

		reg_pc		 <= io_get_inst_bits_pc;

		reg_inst 		<= io_get_inst_bits_inst;
		reg_dest_addr	<= dest_addr;
		reg_dest_is_reg	<= dest_is_reg;

		reg_csr_addr	<= csr_addr;
		reg_csr_data 	<= io_csr_rd_csr_data;//Mux(opType === Op_type.system,io.csr_rd.csr_data,0.U)
		reg_is_pre		<= io_get_inst_bits_is_pre;
	end 
end 
endmodule