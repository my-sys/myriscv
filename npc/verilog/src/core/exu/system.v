module SYSTEM_EXU(
  input         io_valid,
  input  [6:0]  io_exuType,
  input  [63:0] io_csr_data,
  input  [11:0] io_csr_addr,
  input  [31:0] io_imm,
  input  [63:0] io_rs1_data,
  input  [63:0] io_mepc,
  input  [63:0] io_mstatus,
  output [63:0] io_dst_data,
  output        io_csr_is_w,
  output [63:0] io_result_csr_data,
  output [11:0] io_result_csr_addr,
  output        io_is_except,
  output [5:0]  io_exception,
  output        io_valid_next_pc,
  output [63:0] io_next_pc
);

  wire [31:0] _imm_T_2 = io_imm[31] ? 32'hffffffff : 32'h0;
  wire [63:0] imm = {_imm_T_2,io_imm};

  wire  is_imm = io_exuType[4]; // @[system.scala 70:32]

  wire [63:0] op_data = is_imm ? imm : io_rs1_data; // @[system.scala 72:30]
  wire [63:0] or_result = io_csr_data | op_data; // @[system.scala 73:36]
  wire [63:0] _and_result_T = ~op_data; // @[system.scala 74:28]
  wire [63:0] and_result = _and_result_T & io_csr_data; // @[system.scala 74:38]
  wire [63:0] _temp_csr_result_data_T_3 = {io_csr_data[63:5],imm[4:0]}; // @[Cat.scala 33:92]
  //def system_csrrs 	= "b010_10".U
  wire [63:0] _temp_csr_result_data_T_csrrs = 3'h2 == io_exuType[4:2] ? or_result : 64'h0; // @[Mux.scala 81:58]
  //def system_csrrsi	= "b110_10".U 
  wire [63:0] _temp_csr_result_data_T_csrrsi = 3'h6 == io_exuType[4:2] ? or_result : _temp_csr_result_data_T_csrrs; // @[Mux.scala 81:58]
  //def system_csrrw 	= "b001_10".U 
  wire [63:0] _temp_csr_result_data_T_csrrw = 3'h1 == io_exuType[4:2] ? op_data : _temp_csr_result_data_T_csrrsi; // @[Mux.scala 81:58]
  //def system_csrrwi	= "b101_10".U 
  wire [63:0] _temp_csr_result_data_T_csrrwi = 3'h5 == io_exuType[4:2] ? _temp_csr_result_data_T_3 :_temp_csr_result_data_T_csrrw;
  //def system_csrrc	= "b011_10".U 
  wire [63:0] _temp_csr_result_data_T_csrrc = 3'h3 == io_exuType[4:2] ? and_result : _temp_csr_result_data_T_csrrwi; // @[Mux.scala 81:58]
  //def system_csrrci 	= "b111_10".U
  wire [63:0] temp_csr_result_data = 3'h7 == io_exuType[4:2] ? and_result : _temp_csr_result_data_T_csrrc; // @[Mux.scala 81:58]

  wire  is_mret = io_exuType[6:2] == 5'h10; // @[system.scala 83:44]
  wire  is_sret = io_exuType[6:2] == 5'h18; // @[system.scala 84:44]
  wire  is_ecall = io_exuType[6:2] == 5'h0; // @[system.scala 85:44]
  wire  is_ebreak = io_exuType[6:2] == 5'h8; // @[system.scala 86:44]
  wire  is_except = is_ecall | is_ebreak; // @[system.scala 87:37]

  wire [1:0] _exception_T = is_ebreak ? 2'h3 : 2'h0;
  wire [3:0] exception = is_ecall ? 4'hb : {{2'd0}, _exception_T};

  wire  is_ret = is_mret | is_sret; // @[system.scala 89:43]
  
  wire [63:0] _result_status_T = io_mstatus & 64'hffffffffffffff77;
  wire [7:0] _result_status_T_2 = io_mstatus[7] ? 8'h88 : 8'h80;
  wire [63:0] _GEN_0 = {{56'd0}, _result_status_T_2};
  wire [63:0] result_status = _result_status_T | _GEN_0;

  assign io_dst_data = io_csr_data; // @[system.scala 94:41]
  assign io_csr_is_w = io_valid & (io_exuType[4:2] != 3'h0 | is_ret); // @[system.scala 96:53]
  assign io_result_csr_data = is_ret ? result_status : temp_csr_result_data; // @[system.scala 95:39]
  assign io_result_csr_addr = is_ret ? 12'h300 : io_csr_addr; // @[system.scala 97:39]
  assign io_is_except = is_except & io_valid; // @[system.scala 102:46]
  assign io_exception = {{2'd0}, exception}; // @[system.scala 103:33]
  assign io_valid_next_pc = is_ret & io_valid; // @[system.scala 105:43]
  assign io_next_pc = io_mepc; // @[system.scala 106:41]
endmodule