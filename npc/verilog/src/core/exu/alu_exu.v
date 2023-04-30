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
  wire  is_32 = io_exuType[0]; // @[alu_exu.scala 89:31]
  wire [31:0] _op_data1_T_2 = io_op_data1[31] ? 32'hffffffff : 32'h0; // @[Bitwise.scala 77:12]
  wire [63:0] _op_data1_T_4 = {_op_data1_T_2,io_op_data1[31:0]}; // @[Cat.scala 33:92]
  wire [63:0] op_data1 = is_32 ? _op_data1_T_4 : io_op_data1; // @[alu_exu.scala 90:27]
  wire [31:0] _op_data2_T_2 = io_op_data2[31] ? 32'hffffffff : 32'h0; // @[Bitwise.scala 77:12]
  wire [63:0] _op_data2_T_4 = {_op_data2_T_2,io_op_data2[31:0]}; // @[Cat.scala 33:92]
  wire [63:0] op_data2 = is_32 ? _op_data2_T_4 : io_op_data2; // @[alu_exu.scala 91:27]
  wire [31:0] _op_imm_T_2 = io_op_imm[31] ? 32'hffffffff : 32'h0; // @[Bitwise.scala 77:12]
  wire [63:0] op_imm = {_op_imm_T_2,io_op_imm}; // @[Cat.scala 33:92]
  wire  rs2_is_imm = ~io_exuType[1]; // @[alu_exu.scala 95:27]
  wire [63:0] rs2_data = rs2_is_imm ? op_imm : op_data2; // @[alu_exu.scala 96:27]
  wire  rs1_is_pc = io_exuType[6:5] == 2'h3; // @[alu_exu.scala 97:42]
  wire  is_sra = io_exuType[6:5] == 2'h1; // @[alu_exu.scala 98:41]
  wire [63:0] rs1_data = rs1_is_pc ? io_op_pc : op_data1; // @[alu_exu.scala 100:27]
  wire [63:0] _temp_rs2_data_T = rs2_data ^ 64'hffffffffffffffff; // @[alu_exu.scala 101:50]
  wire [63:0] temp_rs2_data = is_sra ? _temp_rs2_data_T : rs2_data; // @[alu_exu.scala 101:32]
  wire [64:0] _add_sub_result_T = {1'h0,rs1_data}; // @[Cat.scala 33:92]
  wire [64:0] _GEN_1 = {{1'd0}, temp_rs2_data}; // @[alu_exu.scala 102:53]
  wire [64:0] _add_sub_result_T_2 = _add_sub_result_T + _GEN_1; // @[alu_exu.scala 102:53]
  wire [64:0] _GEN_2 = {{64'd0}, is_sra}; // @[alu_exu.scala 102:69]
  wire [64:0] add_sub_result = _add_sub_result_T_2 + _GEN_2; // @[alu_exu.scala 102:69]
  wire  u_rs1_l_rs2 = ~add_sub_result[64]; // @[alu_exu.scala 105:23]
  wire  s_rs1_l_rs2 = rs1_data[63] ^ rs2_data[63] ? rs1_data[63] : add_sub_result[63]; // @[alu_exu.scala 107:26]
  wire [5:0] shift_rs2_data = is_32 ? {{1'd0}, rs2_data[4:0]} : rs2_data[5:0]; // @[alu_exu.scala 110:33]
  wire [126:0] _GEN_0 = {{63'd0}, op_data1}; // @[alu_exu.scala 111:33]
  wire [126:0] sll_temp = _GEN_0 << shift_rs2_data; // @[alu_exu.scala 111:33]
  wire [63:0] _srl_temp_T_2 = {32'h0,op_data1[31:0]}; // @[Cat.scala 33:92]
  wire [63:0] _srl_temp_T_3 = is_32 ? _srl_temp_T_2 : op_data1; // @[alu_exu.scala 112:27]
  wire [63:0] srl_temp = _srl_temp_T_3 >> shift_rs2_data; // @[alu_exu.scala 112:82]
  wire [63:0] _sra_temp_T = is_32 ? _op_data1_T_4 : io_op_data1; // @[alu_exu.scala 113:34]
  wire [63:0] sra_temp = $signed(_sra_temp_T) >>> shift_rs2_data; // @[alu_exu.scala 113:60]
  wire [63:0] sr_temp = is_sra ? sra_temp : srl_temp; // @[alu_exu.scala 115:27]
  wire [2:0] func = io_exuType[4:2]; // @[alu_exu.scala 116:30]
  wire [63:0] _result_data_T_1 = {63'h0,s_rs1_l_rs2}; // @[Cat.scala 33:92]
  wire [63:0] _result_data_T_2 = {63'h0,u_rs1_l_rs2}; // @[Cat.scala 33:92]
  wire [63:0] _result_data_T_3 = op_data1 & rs2_data; // @[alu_exu.scala 122:54]
  wire [63:0] _result_data_T_4 = op_data1 | rs2_data; // @[alu_exu.scala 123:62]
  wire [63:0] _result_data_T_5 = op_data1 ^ rs2_data; // @[alu_exu.scala 124:54]
  wire [63:0] _result_data_T_9 = 3'h2 == func ? _result_data_T_1 : add_sub_result[63:0]; // @[Mux.scala 81:58]
  wire [63:0] _result_data_T_11 = 3'h3 == func ? _result_data_T_2 : _result_data_T_9; // @[Mux.scala 81:58]
  wire [63:0] _result_data_T_13 = 3'h7 == func ? _result_data_T_3 : _result_data_T_11; // @[Mux.scala 81:58]
  wire [63:0] _result_data_T_15 = 3'h6 == func ? _result_data_T_4 : _result_data_T_13; // @[Mux.scala 81:58]
  wire [63:0] _result_data_T_17 = 3'h4 == func ? _result_data_T_5 : _result_data_T_15; // @[Mux.scala 81:58]
  wire [63:0] _result_data_T_19 = 3'h1 == func ? sll_temp[63:0] : _result_data_T_17; // @[Mux.scala 81:58]
  wire [63:0] result_data = 3'h5 == func ? sr_temp : _result_data_T_19; // @[Mux.scala 81:58]
  wire  is_pre = io_is_pre & io_valid; // @[alu_exu.scala 130:45]
  wire  is_br = io_opType == 3'h1; // @[alu_exu.scala 137:52]
  wire  is_eq = op_data1 == op_data2; // @[alu_exu.scala 145:45]
  wire [63:0] temp_1 = func == 3'h2 ? io_op_data1 : io_op_pc; // @[alu_exu.scala 146:34]
  wire [63:0] _add_pc_T_1 = temp_1 + op_imm; // @[alu_exu.scala 147:50]
  wire [64:0] add_pc = {1'h1,_add_pc_T_1}; // @[Cat.scala 33:92]
  wire [63:0] op_pc_4 = io_op_pc + 64'h4; // @[alu_exu.scala 148:37]
  wire [64:0] _temp_result_pc_T = is_eq ? add_pc : {{1'd0}, op_pc_4}; // @[alu_exu.scala 151:63]
  wire [64:0] _temp_result_pc_T_1 = is_eq ? {{1'd0}, op_pc_4} : add_pc; // @[alu_exu.scala 152:63]
  wire [64:0] _temp_result_pc_T_2 = s_rs1_l_rs2 ? add_pc : {{1'd0}, op_pc_4}; // @[alu_exu.scala 153:63]
  wire [64:0] _temp_result_pc_T_3 = u_rs1_l_rs2 ? add_pc : {{1'd0}, op_pc_4}; // @[alu_exu.scala 154:63]
  wire [64:0] _temp_result_pc_T_4 = s_rs1_l_rs2 ? {{1'd0}, op_pc_4} : add_pc; // @[alu_exu.scala 155:63]
  wire [64:0] _temp_result_pc_T_5 = u_rs1_l_rs2 ? {{1'd0}, op_pc_4} : add_pc; // @[alu_exu.scala 156:63]
  wire [64:0] _temp_result_pc_T_7 = {add_pc[64:1],1'h0}; // @[Cat.scala 33:92]
  wire [64:0] _temp_result_pc_T_9 = 3'h1 == func ? _temp_result_pc_T_1 : _temp_result_pc_T; // @[Mux.scala 81:58]
  wire [64:0] _temp_result_pc_T_11 = 3'h4 == func ? _temp_result_pc_T_2 : _temp_result_pc_T_9; // @[Mux.scala 81:58]
  wire [64:0] _temp_result_pc_T_13 = 3'h6 == func ? _temp_result_pc_T_3 : _temp_result_pc_T_11; // @[Mux.scala 81:58]
  wire [64:0] _temp_result_pc_T_15 = 3'h5 == func ? _temp_result_pc_T_4 : _temp_result_pc_T_13; // @[Mux.scala 81:58]
  wire [64:0] _temp_result_pc_T_17 = 3'h7 == func ? _temp_result_pc_T_5 : _temp_result_pc_T_15; // @[Mux.scala 81:58]
  wire [64:0] _temp_result_pc_T_19 = 3'h3 == func ? add_pc : _temp_result_pc_T_17; // @[Mux.scala 81:58]
  wire [64:0] _temp_result_pc_T_21 = 3'h2 == func ? _temp_result_pc_T_7 : _temp_result_pc_T_19; // @[Mux.scala 81:58]
  wire [64:0] temp_result_pc = is_br ? _temp_result_pc_T_21 : 65'h0; // @[alu_exu.scala 149:28 150:40]
  wire [63:0] dst_data = is_br ? op_pc_4 : result_data; // @[alu_exu.scala 163:38]
  wire [63:0] next_pc = temp_result_pc[63:0]; // @[alu_exu.scala 164:49]
  wire  valid_next_pc = temp_result_pc[64]; // @[alu_exu.scala 165:49]
  wire  br_valid = is_br & io_valid; // @[alu_exu.scala 167:41]
  wire [31:0] _io_dst_data_T_2 = dst_data[31] ? 32'hffffffff : 32'h0; // @[Bitwise.scala 77:12]
  wire [63:0] _io_dst_data_T_4 = {_io_dst_data_T_2,dst_data[31:0]}; // @[Cat.scala 33:92]
  wire [63:0] _io_dst_data_T_5 = is_32 ? _io_dst_data_T_4 : dst_data; // @[alu_exu.scala 168:60]
  wire  flush = is_pre & valid_next_pc & next_pc != io_get_pre_info_pre_next_pc | valid_next_pc & ~is_pre | is_pre & ~
    valid_next_pc; // @[alu_exu.scala 169:109]
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