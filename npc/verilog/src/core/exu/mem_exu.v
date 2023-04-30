module MEM_EXU(
  input         clock,
  input         reset,
  input         io_valid,
  input  [6:0]  io_exuType,
  input  [63:0] io_rs1_data,
  input  [63:0] io_rs2_data,
  input  [31:0] io_imm,
  output [63:0] io_dest_data,
  output        io_dest_is_w,
  output        io_ready,
  output        io_bus_valid,
  output [63:0] io_bus_bits_addr,
  input  [63:0] io_bus_bits_rdata,
  output [63:0] io_bus_bits_wdata,
  output [7:0]  io_bus_bits_wstrb,
  output        io_bus_bits_is_w,
  input         io_bus_ready,
  output        io_difftest_peripheral
);
  wire [31:0] _imm_T_2 = io_imm[31] ? 32'hffffffff : 32'h0; // @[Bitwise.scala 77:12]
  wire [63:0] imm = {_imm_T_2,io_imm}; // @[Cat.scala 33:92]
  reg  reg_ready; // @[mem_exu.scala 63:34]
  reg [63:0] reg_bus_addr; // @[mem_exu.scala 65:50]
  reg [63:0] reg_bus_wdata; // @[mem_exu.scala 67:50]
  reg [7:0] reg_bus_wstrb; // @[mem_exu.scala 68:50]
  reg  reg_bus_is_w; // @[mem_exu.scala 69:50]
  reg  reg_bus_valid; // @[mem_exu.scala 71:50]
  reg [63:0] reg_result_data; // @[mem_exu.scala 74:42]
  reg  reg_w_rs_en; // @[mem_exu.scala 75:50]
  reg [6:0] reg_exuType; // @[mem_exu.scala 77:50]
  reg  reg_difftest_peripheral; // @[mem_exu.scala 78:46]
  wire [63:0] _mem_r_data_T_9 = 3'h1 == reg_bus_addr[2:0] ? {{8'd0}, io_bus_bits_rdata[63:8]} : io_bus_bits_rdata; // @[Mux.scala 81:58]
  wire [63:0] _mem_r_data_T_11 = 3'h2 == reg_bus_addr[2:0] ? {{16'd0}, io_bus_bits_rdata[63:16]} : _mem_r_data_T_9; // @[Mux.scala 81:58]
  wire [63:0] _mem_r_data_T_13 = 3'h3 == reg_bus_addr[2:0] ? {{24'd0}, io_bus_bits_rdata[63:24]} : _mem_r_data_T_11; // @[Mux.scala 81:58]
  wire [63:0] _mem_r_data_T_15 = 3'h4 == reg_bus_addr[2:0] ? {{32'd0}, io_bus_bits_rdata[63:32]} : _mem_r_data_T_13; // @[Mux.scala 81:58]
  wire [63:0] _mem_r_data_T_17 = 3'h5 == reg_bus_addr[2:0] ? {{40'd0}, io_bus_bits_rdata[63:40]} : _mem_r_data_T_15; // @[Mux.scala 81:58]
  wire [63:0] _mem_r_data_T_19 = 3'h6 == reg_bus_addr[2:0] ? {{48'd0}, io_bus_bits_rdata[63:48]} : _mem_r_data_T_17; // @[Mux.scala 81:58]
  wire [63:0] mem_r_data = 3'h7 == reg_bus_addr[2:0] ? {{56'd0}, io_bus_bits_rdata[63:56]} : _mem_r_data_T_19; // @[Mux.scala 81:58]
  wire [55:0] _mem_data_result_T_2 = mem_r_data[7] ? 56'hffffffffffffff : 56'h0; // @[Bitwise.scala 77:12]
  wire [63:0] _mem_data_result_T_4 = {_mem_data_result_T_2,mem_r_data[7:0]}; // @[Cat.scala 33:92]
  wire [63:0] _mem_data_result_T_7 = {56'h0,mem_r_data[7:0]}; // @[Cat.scala 33:92]
  wire [47:0] _mem_data_result_T_10 = mem_r_data[15] ? 48'hffffffffffff : 48'h0; // @[Bitwise.scala 77:12]
  wire [63:0] _mem_data_result_T_12 = {_mem_data_result_T_10,mem_r_data[15:0]}; // @[Cat.scala 33:92]
  wire [63:0] _mem_data_result_T_15 = {48'h0,mem_r_data[15:0]}; // @[Cat.scala 33:92]
  wire [31:0] _mem_data_result_T_18 = mem_r_data[31] ? 32'hffffffff : 32'h0; // @[Bitwise.scala 77:12]
  wire [63:0] _mem_data_result_T_20 = {_mem_data_result_T_18,mem_r_data[31:0]}; // @[Cat.scala 33:92]
  wire [63:0] _mem_data_result_T_23 = {32'h0,mem_r_data[31:0]}; // @[Cat.scala 33:92]
  wire [63:0] _mem_data_result_T_25 = 7'hc == reg_exuType ? mem_r_data : 64'h0; // @[Mux.scala 81:58]
  wire [63:0] _mem_data_result_T_27 = 7'h0 == reg_exuType ? _mem_data_result_T_4 : _mem_data_result_T_25; // @[Mux.scala 81:58]
  wire [63:0] _mem_data_result_T_29 = 7'h10 == reg_exuType ? _mem_data_result_T_7 : _mem_data_result_T_27; // @[Mux.scala 81:58]
  wire [63:0] _mem_data_result_T_31 = 7'h4 == reg_exuType ? _mem_data_result_T_12 : _mem_data_result_T_29; // @[Mux.scala 81:58]
  wire [63:0] _mem_data_result_T_33 = 7'h14 == reg_exuType ? _mem_data_result_T_15 : _mem_data_result_T_31; // @[Mux.scala 81:58]
  wire [63:0] _mem_data_result_T_35 = 7'h8 == reg_exuType ? _mem_data_result_T_20 : _mem_data_result_T_33; // @[Mux.scala 81:58]
  wire [63:0] mem_data_result = 7'h18 == reg_exuType ? _mem_data_result_T_23 : _mem_data_result_T_35; // @[Mux.scala 81:58]
  wire [63:0] mem_addr = io_rs1_data + imm; // @[mem_exu.scala 102:36]
  wire  w_mem_en = io_valid & io_exuType[1]; // @[mem_exu.scala 103:33]
  wire [7:0] _mem_wstrb_T_1 = 8'h1 << mem_addr[2:0]; // @[mem_exu.scala 107:62]
  wire [14:0] _mem_wstrb_T_3 = 15'hff << mem_addr[2:0]; // @[mem_exu.scala 108:61]
  wire [8:0] _mem_wstrb_T_5 = 9'h3 << mem_addr[2:0]; // @[mem_exu.scala 109:61]
  wire [10:0] _mem_wstrb_T_7 = 11'hf << mem_addr[2:0]; // @[mem_exu.scala 110:61]
  wire [63:0] _mem_wstrb_T_9 = 7'h2 == io_exuType ? {{56'd0}, _mem_wstrb_T_1} : 64'h0; // @[Mux.scala 81:58]
  wire [63:0] _mem_wstrb_T_11 = 7'he == io_exuType ? {{49'd0}, _mem_wstrb_T_3} : _mem_wstrb_T_9; // @[Mux.scala 81:58]
  wire [63:0] _mem_wstrb_T_13 = 7'h6 == io_exuType ? {{55'd0}, _mem_wstrb_T_5} : _mem_wstrb_T_11; // @[Mux.scala 81:58]
  wire [63:0] mem_wstrb = 7'ha == io_exuType ? {{53'd0}, _mem_wstrb_T_7} : _mem_wstrb_T_13; // @[Mux.scala 81:58]
  reg  reg_ls_state; // @[mem_exu.scala 115:66]
  wire [5:0] _mem_w_data_T_1 = {mem_addr[2:0],3'h0}; // @[Cat.scala 33:92]
  wire [126:0] _GEN_0 = {{63'd0}, io_rs2_data}; // @[mem_exu.scala 119:44]
  wire [126:0] mem_w_data = _GEN_0 << _mem_w_data_T_1; // @[mem_exu.scala 119:44]
  wire  _T = ~reg_ls_state; // @[mem_exu.scala 120:29]
  wire [126:0] _GEN_3 = io_valid ? mem_w_data : 127'h0; // @[mem_exu.scala 137:36 124:41 141:49]
  wire [63:0] _GEN_4 = io_valid ? mem_wstrb : 64'h0; // @[mem_exu.scala 137:36 125:41 142:49]
  wire  _GEN_5 = io_valid & w_mem_en; // @[mem_exu.scala 137:36 126:41 143:49]
  wire  _GEN_7 = io_valid ? 1'h0 : 1'h1; // @[mem_exu.scala 137:36 135:49 146:57]
  wire  _GEN_8 = io_valid & mem_addr[63:31] == 33'h0; // @[mem_exu.scala 137:36 136:49 147:57]
  wire  _T_2 = io_bus_valid & io_bus_ready; // @[mem_exu.scala 52:48]
  wire  _GEN_14 = _T_2 | reg_ready; // @[mem_exu.scala 151:42 158:57 63:34]
  wire  _GEN_20 = reg_ls_state ? _GEN_14 : reg_ready; // @[mem_exu.scala 120:29 63:34]
  wire [126:0] _GEN_23 = ~reg_ls_state ? _GEN_3 : {{63'd0}, reg_bus_wdata}; // @[mem_exu.scala 120:29 67:50]
  wire [63:0] _GEN_24 = ~reg_ls_state ? _GEN_4 : {{56'd0}, reg_bus_wstrb}; // @[mem_exu.scala 120:29 68:50]
  wire  _GEN_32 = ~reg_ls_state ? _GEN_7 : _GEN_20; // @[mem_exu.scala 120:29]
  wire  chose_chancel = io_valid & _T; // @[mem_exu.scala 168:35]
  wire [126:0] _io_bus_bits_wdata_T = chose_chancel ? mem_w_data : {{63'd0}, reg_bus_wdata}; // @[mem_exu.scala 171:39]
  wire [63:0] _io_bus_bits_wstrb_T = chose_chancel ? mem_wstrb : {{56'd0}, reg_bus_wstrb}; // @[mem_exu.scala 172:39]
  wire [126:0] _GEN_34 = reset ? 127'h0 : _GEN_23; // @[mem_exu.scala 67:{50,50}]
  wire [63:0] _GEN_35 = reset ? 64'h0 : _GEN_24; // @[mem_exu.scala 68:{50,50}]
  assign io_dest_data = reg_result_data; // @[mem_exu.scala 163:25]
  assign io_dest_is_w = reg_w_rs_en; // @[mem_exu.scala 164:25]
  assign io_ready = reg_ready; // @[mem_exu.scala 165:33]
  assign io_bus_valid = chose_chancel ? io_valid : reg_bus_valid; // @[mem_exu.scala 169:39]
  assign io_bus_bits_addr = chose_chancel ? mem_addr : reg_bus_addr; // @[mem_exu.scala 170:39]
  assign io_bus_bits_wdata = _io_bus_bits_wdata_T[63:0]; // @[mem_exu.scala 171:33]
  assign io_bus_bits_wstrb = _io_bus_bits_wstrb_T[7:0]; // @[mem_exu.scala 172:33]
  assign io_bus_bits_is_w = chose_chancel ? w_mem_en : reg_bus_is_w; // @[mem_exu.scala 173:39]
  assign io_difftest_peripheral = reg_difftest_peripheral; // @[mem_exu.scala 166:32]
  always @(posedge clock) begin
    reg_ready <= reset | _GEN_32; // @[mem_exu.scala 63:{34,34}]
    if (reset) begin // @[mem_exu.scala 65:50]
      reg_bus_addr <= 64'h0; // @[mem_exu.scala 65:50]
    end else if (~reg_ls_state) begin // @[mem_exu.scala 120:29]
      if (io_valid) begin // @[mem_exu.scala 137:36]
        reg_bus_addr <= mem_addr; // @[mem_exu.scala 140:49]
      end else begin
        reg_bus_addr <= 64'h0; // @[mem_exu.scala 123:41]
      end
    end
    reg_bus_wdata <= _GEN_34[63:0]; // @[mem_exu.scala 67:{50,50}]
    reg_bus_wstrb <= _GEN_35[7:0]; // @[mem_exu.scala 68:{50,50}]
    if (reset) begin // @[mem_exu.scala 69:50]
      reg_bus_is_w <= 1'h0; // @[mem_exu.scala 69:50]
    end else if (~reg_ls_state) begin // @[mem_exu.scala 120:29]
      reg_bus_is_w <= _GEN_5;
    end else if (reg_ls_state) begin // @[mem_exu.scala 120:29]
      if (_T_2) begin // @[mem_exu.scala 151:42]
        reg_bus_is_w <= 1'h0; // @[mem_exu.scala 154:49]
      end
    end
    if (reset) begin // @[mem_exu.scala 71:50]
      reg_bus_valid <= 1'h0; // @[mem_exu.scala 71:50]
    end else if (~reg_ls_state) begin // @[mem_exu.scala 120:29]
      reg_bus_valid <= io_valid;
    end else if (reg_ls_state) begin // @[mem_exu.scala 120:29]
      if (_T_2) begin // @[mem_exu.scala 151:42]
        reg_bus_valid <= 1'h0; // @[mem_exu.scala 155:49]
      end
    end
    if (reset) begin // @[mem_exu.scala 74:42]
      reg_result_data <= 64'h0; // @[mem_exu.scala 74:42]
    end else if (~reg_ls_state) begin // @[mem_exu.scala 120:29]
      reg_result_data <= 64'h0; // @[mem_exu.scala 133:41]
    end else if (reg_ls_state) begin // @[mem_exu.scala 120:29]
      if (_T_2) begin // @[mem_exu.scala 151:42]
        reg_result_data <= mem_data_result; // @[mem_exu.scala 156:49]
      end
    end
    if (reset) begin // @[mem_exu.scala 75:50]
      reg_w_rs_en <= 1'h0; // @[mem_exu.scala 75:50]
    end else if (~reg_ls_state) begin // @[mem_exu.scala 120:29]
      reg_w_rs_en <= 1'h0; // @[mem_exu.scala 134:49]
    end else if (reg_ls_state) begin // @[mem_exu.scala 120:29]
      if (_T_2) begin // @[mem_exu.scala 151:42]
        reg_w_rs_en <= ~reg_bus_is_w; // @[mem_exu.scala 157:57]
      end
    end
    if (reset) begin // @[mem_exu.scala 77:50]
      reg_exuType <= 7'h0; // @[mem_exu.scala 77:50]
    end else if (~reg_ls_state) begin // @[mem_exu.scala 120:29]
      if (io_valid) begin // @[mem_exu.scala 137:36]
        reg_exuType <= io_exuType; // @[mem_exu.scala 139:57]
      end else begin
        reg_exuType <= 7'h0; // @[mem_exu.scala 130:49]
      end
    end
    if (reset) begin // @[mem_exu.scala 78:46]
      reg_difftest_peripheral <= 1'h0; // @[mem_exu.scala 78:46]
    end else if (~reg_ls_state) begin // @[mem_exu.scala 120:29]
      reg_difftest_peripheral <= _GEN_8;
    end
    if (reset) begin // @[mem_exu.scala 115:66]
      reg_ls_state <= 1'h0; // @[mem_exu.scala 115:66]
    end else if (~reg_ls_state) begin // @[mem_exu.scala 120:29]
      reg_ls_state <= io_valid;
    end else if (reg_ls_state) begin // @[mem_exu.scala 120:29]
      if (_T_2) begin // @[mem_exu.scala 151:42]
        reg_ls_state <= 1'h0; // @[mem_exu.scala 152:49]
      end
    end
  end
endmodule
