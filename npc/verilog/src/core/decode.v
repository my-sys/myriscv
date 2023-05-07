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
  wire  temp_system_rs1 = temp_system_is_imm ? 1'h0 : 1'h1; // @[decode.scala 66:34]
  wire [6:0] _temp_system_T_1 = {io_get_inst_bits_inst[21:20],fun,io_get_inst_bits_inst[5],io_get_inst_bits_inst[3]}; // @[Cat.scala 33:92]
  wire [6:0] temp_system_1 = temp_system_is_pri ? _temp_system_T_1 : {{2'd0}, fun_exuType}; // @[decode.scala 70:53]
  wire [2:0] temp_system_2 = temp_system_is_pri ? 3'h0 : 3'h5; // @[decode.scala 71:12]
  wire  temp_system_3 = temp_system_is_pri ? 1'h0 : 1'h1; // @[decode.scala 71:72]
  wire  temp_system_4 = temp_system_is_pri ? 1'h0 : temp_system_rs1; // @[decode.scala 72:12]
  wire [3:0] temp_mem_itype = io_get_inst_bits_inst[5] ? 4'h3 : 4'hc; // @[decode.scala 73:33]
  wire  temp_mem_dest = io_get_inst_bits_inst[5] ? 1'h0 : 1'h1; // @[decode.scala 74:33]
  wire  temp_op_is_imm = ~io_get_inst_bits_inst[5]; // @[decode.scala 76:30]
  wire  is_sr = fun == 3'h5; // @[decode.scala 77:25]
  wire [5:0] temp_kk = {io_get_inst_bits_inst[30],fun,io_get_inst_bits_inst[5],io_get_inst_bits_inst[3]}; // @[Cat.scala 33:92]
  wire [5:0] _temp_op_exuType_T = is_sr ? temp_kk : {{1'd0}, fun_exuType}; // @[decode.scala 79:53]
  wire [5:0] temp_op_exuType = temp_op_is_imm ? _temp_op_exuType_T : temp_kk; // @[decode.scala 79:34]
  wire [3:0] _temp_op_itype_T_2 = fun == 3'h1 | is_sr ? 4'h4 : 4'hc; // @[decode.scala 80:51]
  wire [3:0] temp_op_itype = temp_op_is_imm ? _temp_op_itype_T_2 : 4'h6; // @[decode.scala 80:32]
  wire  temp_op_rs2 = temp_op_is_imm ? 1'h0 : 1'h1; // @[decode.scala 81:32]
  wire [1:0] _temp_op_T_1 = io_get_inst_bits_inst[25] ? 2'h3 : 2'h2; // @[decode.scala 82:60]
  wire [1:0] temp_op = temp_op_is_imm ? 2'h2 : _temp_op_T_1; // @[decode.scala 82:26]
  wire [6:0] temp_jal_jalr_1 = io_get_inst_bits_inst[3] ? 7'h4e : 7'h4a; // @[decode.scala 86:12]
  wire [3:0] temp_jal_jalr_2 = io_get_inst_bits_inst[3] ? 4'h2 : 4'hc; // @[decode.scala 87:12]
  wire  temp_jal_jalr_4 = io_get_inst_bits_inst[3] ? 1'h0 : 1'h1; // @[decode.scala 88:12]
  wire [6:0] _T_1 = io_get_inst_bits_inst[5] ? 7'h0 : 7'h40; // @[decode.scala 91:59]
  wire [6:0] _T_2 = {2'h1,fun,io_get_inst_bits_inst[5],io_get_inst_bits_inst[3]}; // @[Cat.scala 33:92]
  wire [6:0] _T_3 = {2'h2,fun,io_get_inst_bits_inst[5],io_get_inst_bits_inst[3]}; // @[Cat.scala 33:92]
  wire  _T_5 = 3'h2 == fun_op; // @[Lookup.scala 31:38]
  wire  _T_7 = 3'h3 == fun_op; // @[Lookup.scala 31:38]
  wire  _T_9 = 3'h5 == fun_op; // @[Lookup.scala 31:38]
  wire  _T_11 = 3'h4 == fun_op; // @[Lookup.scala 31:38]
  wire  _T_13 = 3'h0 == fun_op; // @[Lookup.scala 31:38]
  wire  _T_15 = 3'h1 == fun_op; // @[Lookup.scala 31:38]
  wire  _T_17 = 3'h6 == fun_op; // @[Lookup.scala 31:38]
  wire [2:0] _T_18 = _T_17 ? 3'h4 : 3'h5; // @[Lookup.scala 34:39]
  wire [2:0] _T_19 = _T_15 ? 3'h6 : _T_18; // @[Lookup.scala 34:39]
  wire [2:0] _T_20 = _T_13 ? 3'h5 : _T_19; // @[Lookup.scala 34:39]
  wire [2:0] _T_21 = _T_11 ? 3'h1 : _T_20; // @[Lookup.scala 34:39]
  wire [2:0] _T_22 = _T_9 ? 3'h1 : _T_21; // @[Lookup.scala 34:39]
  wire [6:0] _T_24 = _T_17 ? temp_system_1 : 7'h0; // @[Lookup.scala 34:39]
  wire [6:0] _T_25 = _T_15 ? _T_3 : _T_24; // @[Lookup.scala 34:39]
  wire [6:0] _T_26 = _T_13 ? {{2'd0}, fun_exuType} : _T_25; // @[Lookup.scala 34:39]
  wire [6:0] _T_27 = _T_11 ? _T_2 : _T_26; // @[Lookup.scala 34:39]
  wire [6:0] _T_28 = _T_9 ? temp_jal_jalr_1 : _T_27; // @[Lookup.scala 34:39]
  wire [2:0] _T_30 = _T_17 ? temp_system_2 : 3'h0; // @[Lookup.scala 34:39]
  wire [2:0] _T_31 = _T_15 ? 3'h0 : _T_30; // @[Lookup.scala 34:39]
  wire [3:0] _T_32 = _T_13 ? temp_mem_itype : {{1'd0}, _T_31}; // @[Lookup.scala 34:39]
  wire [3:0] _T_33 = _T_11 ? 4'h7 : _T_32; // @[Lookup.scala 34:39]
  wire [3:0] _T_34 = _T_9 ? temp_jal_jalr_2 : _T_33; // @[Lookup.scala 34:39]
  wire [3:0] _T_35 = _T_7 ? 4'h1 : _T_34; // @[Lookup.scala 34:39]
  wire [3:0] instType = _T_5 ? temp_op_itype : _T_35; // @[Lookup.scala 34:39]
  wire  _T_37 = _T_15 ? 1'h0 : _T_17 & temp_system_3; // @[Lookup.scala 34:39]
  wire  _T_38 = _T_13 ? temp_mem_dest : _T_37; // @[Lookup.scala 34:39]
  wire  _T_39 = _T_11 ? 1'h0 : _T_38; // @[Lookup.scala 34:39]
  wire  dest_is_reg = _T_5 | (_T_7 | (_T_9 | _T_39)); // @[Lookup.scala 34:39]
  wire  _T_43 = _T_15 ? 1'h0 : _T_17 & temp_system_4; // @[Lookup.scala 34:39]
  wire  _T_46 = _T_9 ? temp_jal_jalr_4 : _T_11 | (_T_13 | _T_43); // @[Lookup.scala 34:39]
  wire  _T_47 = _T_7 ? 1'h0 : _T_46; // @[Lookup.scala 34:39]
  wire  rs1_is_reg = _T_5 | _T_47; // @[Lookup.scala 34:39]
  wire  _T_52 = _T_9 ? 1'h0 : _T_11 | _T_13 & io_get_inst_bits_inst[5]; // @[Lookup.scala 34:39]
  wire  _T_53 = _T_7 ? 1'h0 : _T_52; // @[Lookup.scala 34:39]
  wire  rs2_is_reg = _T_5 ? temp_op_rs2 : _T_53; // @[Lookup.scala 34:39]
  wire [19:0] _imm_data_T_2 = io_get_inst_bits_inst[31] ? 20'hfffff : 20'h0; // @[Bitwise.scala 77:12]
  wire [31:0] _imm_data_T_4 = {_imm_data_T_2,csr_addr}; // @[Cat.scala 33:92]
  wire [31:0] _imm_data_T_6 = {io_get_inst_bits_inst[31:12],12'h0}; // @[Cat.scala 33:92]
  wire [31:0] _imm_data_T_13 = {_imm_data_T_2,io_get_inst_bits_inst[31:25],dest_addr}; // @[Cat.scala 33:92]
  wire [11:0] _imm_data_T_16 = io_get_inst_bits_inst[31] ? 12'hfff : 12'h0; // @[Bitwise.scala 77:12]
  wire [31:0] _imm_data_T_23 = {_imm_data_T_16,io_get_inst_bits_inst[19:12],io_get_inst_bits_inst[20],
    io_get_inst_bits_inst[30:21],1'h0}; // @[Cat.scala 33:92]
  wire [31:0] _imm_data_T_33 = {_imm_data_T_2,io_get_inst_bits_inst[7],io_get_inst_bits_inst[30:25],
    io_get_inst_bits_inst[11:8],1'h0}; // @[Cat.scala 33:92]
  wire [31:0] _imm_data_T_35 = {27'h0,rs1_addr}; // @[Cat.scala 33:92]
  wire [31:0] _imm_data_T_37 = {26'h0,io_get_inst_bits_inst[25:20]}; // @[Cat.scala 33:92]
  wire [31:0] _imm_data_T_39 = 4'hc == instType ? _imm_data_T_4 : 32'h0; // @[Mux.scala 81:58]
  wire [31:0] _imm_data_T_41 = 4'h1 == instType ? _imm_data_T_6 : _imm_data_T_39; // @[Mux.scala 81:58]
  wire [31:0] _imm_data_T_43 = 4'h3 == instType ? _imm_data_T_13 : _imm_data_T_41; // @[Mux.scala 81:58]
  wire [31:0] _imm_data_T_45 = 4'h2 == instType ? _imm_data_T_23 : _imm_data_T_43; // @[Mux.scala 81:58]
  wire [31:0] _imm_data_T_47 = 4'h7 == instType ? _imm_data_T_33 : _imm_data_T_45; // @[Mux.scala 81:58]
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
  always @(posedge clock) begin
    if (reset) begin // @[decode.scala 17:42]
      reg_valid <= 1'h0; // @[decode.scala 17:42]
    end else if (io_flush) begin // @[decode.scala 22:20]
      reg_valid <= 1'h0; // @[decode.scala 23:27]
    end else if (io_op_datas_ready) begin // @[decode.scala 25:28]
      reg_valid <= io_get_inst_valid; // @[decode.scala 26:41]
    end
    if (reset) begin // @[decode.scala 30:42]
      reg_opType <= 3'h0; // @[decode.scala 30:42]
    end else if (io_op_datas_ready) begin // @[decode.scala 120:20]
      if (_T_5) begin // @[Lookup.scala 34:39]
        reg_opType <= {{1'd0}, temp_op};
      end else if (_T_7) begin // @[Lookup.scala 34:39]
        reg_opType <= 3'h2;
      end else begin
        reg_opType <= _T_22;
      end
    end
    if (reset) begin // @[decode.scala 31:42]
      reg_exuType <= 7'h0; // @[decode.scala 31:42]
    end else if (io_op_datas_ready) begin // @[decode.scala 120:20]
      if (_T_5) begin // @[Lookup.scala 34:39]
        reg_exuType <= {{1'd0}, temp_op_exuType};
      end else if (_T_7) begin // @[Lookup.scala 34:39]
        reg_exuType <= _T_1;
      end else begin
        reg_exuType <= _T_28;
      end
    end
    if (reset) begin // @[decode.scala 32:42]
      reg_rs1_addr <= 5'h0; // @[decode.scala 32:42]
    end else if (io_op_datas_ready) begin // @[decode.scala 120:20]
      if (rs1_is_reg) begin // @[decode.scala 116:34]
        reg_rs1_addr <= rs1_addr;
      end else begin
        reg_rs1_addr <= 5'h0;
      end
    end
    if (reset) begin // @[decode.scala 33:42]
      reg_rs1_data <= 64'h0; // @[decode.scala 33:42]
    end else if (io_op_datas_ready) begin // @[decode.scala 120:20]
      if (rs1_is_reg) begin // @[decode.scala 117:34]
        reg_rs1_data <= io_normal_rd_rs1_data;
      end else begin
        reg_rs1_data <= 64'h0;
      end
    end
    if (reset) begin // @[decode.scala 35:42]
      reg_rs2_addr <= 5'h0; // @[decode.scala 35:42]
    end else if (io_op_datas_ready) begin // @[decode.scala 120:20]
      if (rs2_is_reg) begin // @[decode.scala 118:34]
        reg_rs2_addr <= rs2_addr;
      end else begin
        reg_rs2_addr <= 5'h0;
      end
    end
    if (reset) begin // @[decode.scala 36:42]
      reg_rs2_data <= 64'h0; // @[decode.scala 36:42]
    end else if (io_op_datas_ready) begin // @[decode.scala 120:20]
      if (rs2_is_reg) begin // @[decode.scala 119:34]
        reg_rs2_data <= io_normal_rd_rs2_data;
      end else begin
        reg_rs2_data <= 64'h0;
      end
    end
    if (reset) begin // @[decode.scala 37:42]
      reg_imm <= 32'h0; // @[decode.scala 37:42]
    end else if (io_op_datas_ready) begin // @[decode.scala 120:20]
      if (4'h4 == instType) begin // @[Mux.scala 81:58]
        reg_imm <= _imm_data_T_37;
      end else if (4'h5 == instType) begin // @[Mux.scala 81:58]
        reg_imm <= _imm_data_T_35;
      end else begin
        reg_imm <= _imm_data_T_47;
      end
    end
    if (reset) begin // @[decode.scala 38:50]
      reg_pc <= 64'h0; // @[decode.scala 38:50]
    end else if (io_op_datas_ready) begin // @[decode.scala 120:20]
      reg_pc <= io_get_inst_bits_pc; // @[decode.scala 131:41]
    end
    if (reset) begin // @[decode.scala 40:42]
      reg_inst <= 32'h0; // @[decode.scala 40:42]
    end else if (io_op_datas_ready) begin // @[decode.scala 120:20]
      reg_inst <= io_get_inst_bits_inst; // @[decode.scala 133:41]
    end
    if (reset) begin // @[decode.scala 41:42]
      reg_dest_addr <= 5'h0; // @[decode.scala 41:42]
    end else if (io_op_datas_ready) begin // @[decode.scala 120:20]
      reg_dest_addr <= dest_addr; // @[decode.scala 134:33]
    end
    if (reset) begin // @[decode.scala 42:38]
      reg_dest_is_reg <= 1'h0; // @[decode.scala 42:38]
    end else if (io_op_datas_ready) begin // @[decode.scala 120:20]
      reg_dest_is_reg <= dest_is_reg; // @[decode.scala 135:33]
    end
    if (reset) begin // @[decode.scala 44:42]
      reg_csr_addr <= 12'h0; // @[decode.scala 44:42]
    end else if (io_op_datas_ready) begin // @[decode.scala 120:20]
      reg_csr_addr <= csr_addr; // @[decode.scala 137:33]
    end
    if (reset) begin // @[decode.scala 45:42]
      reg_csr_data <= 64'h0; // @[decode.scala 45:42]
    end else if (io_op_datas_ready) begin // @[decode.scala 120:20]
      reg_csr_data <= io_csr_rd_csr_data; // @[decode.scala 138:33]
    end
    if (reset) begin // @[decode.scala 46:42]
      reg_is_pre <= 1'h0; // @[decode.scala 46:42]
    end else if (io_op_datas_ready) begin // @[decode.scala 120:20]
      reg_is_pre <= io_get_inst_bits_is_pre; // @[decode.scala 139:41]
    end
  end
endmodule