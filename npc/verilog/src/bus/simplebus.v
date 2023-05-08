////本代码由chisel代码而来，只是为了加快仿真速度，考核而设计。正规的代码是chisel代码
module Crossbar(
  input         clock,
  input         reset,
  input         io_ICache_bus_r_valid,
  input  [63:0] io_ICache_bus_r_bits_raddr,
  output [63:0] io_ICache_bus_r_bits_rdata,
  output        io_ICache_bus_r_bits_rlast,
  output        io_ICache_bus_r_ready,
  output        io_DCache_bus_w_ready,
  input         io_DCache_bus_w_valid,
  input  [63:0] io_DCache_bus_w_bits_waddr,
  input  [63:0] io_DCache_bus_w_bits_wdata,
  input         io_DCache_bus_w_bits_wlast,
  output        io_DCache_bus_b_valid,
  input         io_DCache_bus_r_valid,
  input  [63:0] io_DCache_bus_r_bits_raddr,
  output [63:0] io_DCache_bus_r_bits_rdata,
  output        io_DCache_bus_r_bits_rlast,
  output        io_DCache_bus_r_ready,
  input         io_bus1_valid,
  input  [63:0] io_bus1_bits_addr,
  output [63:0] io_bus1_bits_rdata,
  output        io_bus1_ready,
  input         io_bus2_valid,
  input  [63:0] io_bus2_bits_addr,
  output [63:0] io_bus2_bits_rdata,
  input  [63:0] io_bus2_bits_wdata,
  input  [7:0]  io_bus2_bits_wstrb,
  input         io_bus2_bits_is_w,
  output        io_bus2_ready,
  input         io_AXI_Bus_aw_ready,
  output        io_AXI_Bus_aw_valid,
  output [63:0] io_AXI_Bus_aw_bits_awaddr,
  input         io_AXI_Bus_w_ready,
  output        io_AXI_Bus_w_valid,
  output [63:0] io_AXI_Bus_w_bits_wdata,
  output [7:0]  io_AXI_Bus_w_bits_wstrb,
  output        io_AXI_Bus_w_bits_wlast,
  output        io_AXI_Bus_b_ready,
  input         io_AXI_Bus_b_valid,
  input         io_AXI_Bus_ar_ready,
  output        io_AXI_Bus_ar_valid,
  output [63:0] io_AXI_Bus_ar_bits_araddr,
  output [7:0]  io_AXI_Bus_ar_bits_arlen,
  input         io_AXI_Bus_r_valid,
  input  [63:0] io_AXI_Bus_r_bits_rdata,
  input         io_AXI_Bus_r_bits_rlast
);
  reg  w_locked; // @[simplebus.scala 62:23]
  reg [1:0] w_lockId; // @[simplebus.scala 63:23]
  wire  _T = ~w_locked; // @[simplebus.scala 66:6]
  wire  _T_1 = io_bus2_valid & io_bus2_bits_is_w; // @[simplebus.scala 69:34]
  wire [1:0] _GEN_0 = io_bus2_valid & io_bus2_bits_is_w ? 2'h1 : 2'h2; // @[simplebus.scala 69:54 70:26 72:26]
  wire [1:0] _GEN_1 = io_DCache_bus_w_valid ? 2'h0 : _GEN_0; // @[simplebus.scala 67:36 68:26]
  wire [1:0] w_chosen = ~w_locked ? _GEN_1 : w_lockId; // @[simplebus.scala 66:16 75:18]
  wire  _GEN_4 = io_DCache_bus_w_valid | _T_1; // @[simplebus.scala 79:36 80:33]
  wire  _GEN_5 = io_DCache_bus_w_valid ? 1'h0 : _T_1; // @[simplebus.scala 79:36 81:33]
  reg [1:0] reg_r_cnt; // @[simplebus.scala 95:32]
  wire  r_locked = reg_r_cnt != 2'h0; // @[simplebus.scala 96:35]
  reg [1:0] r_lockId; // @[simplebus.scala 97:31]
  wire  _T_4 = ~r_locked; // @[simplebus.scala 100:14]
  wire  _T_5 = ~io_bus2_bits_is_w; // @[simplebus.scala 107:45]
  wire  _T_6 = io_bus2_valid & ~io_bus2_bits_is_w; // @[simplebus.scala 107:42]
  wire [1:0] _GEN_9 = io_bus2_valid & ~io_bus2_bits_is_w ? 2'h3 : 2'h0; // @[simplebus.scala 107:65 108:41 110:41]
  wire [1:0] _GEN_10 = io_bus1_valid ? 2'h2 : _GEN_9; // @[simplebus.scala 105:42 106:41]
  wire [1:0] _GEN_11 = io_DCache_bus_r_valid ? 2'h1 : _GEN_10; // @[simplebus.scala 103:50 104:41]
  wire [1:0] _GEN_12 = io_ICache_bus_r_valid ? 2'h0 : _GEN_11; // @[simplebus.scala 101:44 102:41]
  wire [1:0] r_chosen = ~r_locked ? _GEN_12 : r_lockId; // @[simplebus.scala 100:24 113:26]
  wire [1:0] _reg_r_cnt_T_1 = io_DCache_bus_r_ready ? 2'h1 : 2'h2; // @[simplebus.scala 121:47]
  wire  _reg_r_cnt_T_2 = io_bus1_ready ? 1'h0 : 1'h1; // @[simplebus.scala 124:47]
  wire  _reg_r_cnt_T_3 = io_bus2_ready ? 1'h0 : 1'h1; // @[simplebus.scala 127:47]
  wire  _GEN_14 = _T_6 & _reg_r_cnt_T_3; // @[simplebus.scala 126:65 127:41 130:41]
  wire  _GEN_16 = io_bus1_valid ? _reg_r_cnt_T_2 : _GEN_14; // @[simplebus.scala 123:42 124:41]
  wire  _T_11 = io_ICache_bus_r_valid & io_ICache_bus_r_ready; // @[simplebus.scala 28:40]
  wire [1:0] _reg_r_cnt_T_5 = reg_r_cnt - 2'h1; // @[simplebus.scala 135:54]
  wire  _T_14 = io_DCache_bus_r_valid & io_DCache_bus_r_ready; // @[simplebus.scala 28:40]
  wire  _T_17 = io_bus1_valid & io_bus1_ready; // @[simplebus.scala 43:48]
  wire  _T_20 = io_bus2_valid & io_bus2_ready; // @[simplebus.scala 56:48]
  wire [1:0] _GEN_22 = r_lockId == 2'h3 & _T_20 & _T_5 ? _reg_r_cnt_T_5 : reg_r_cnt; // @[simplebus.scala 140:85 141:41 143:41]
  wire [1:0] _GEN_23 = r_lockId == 2'h2 & _T_17 ? _reg_r_cnt_T_5 : _GEN_22; // @[simplebus.scala 138:62 139:41]
  wire  _io_ICache_bus_r_ready_T = r_chosen == 2'h0; // @[simplebus.scala 152:54]
  wire  _io_DCache_bus_w_ready_T = w_chosen == 2'h0; // @[simplebus.scala 156:46]
  wire  _io_DCache_bus_r_bits_rlast_T = r_chosen == 2'h1; // @[simplebus.scala 161:54]
  wire  _io_bus1_ready_T = r_chosen == 2'h2; // @[simplebus.scala 165:46]
  wire  _io_bus2_ready_T = r_chosen == 2'h3; // @[simplebus.scala 168:47]
  wire  _io_bus2_ready_T_2 = w_chosen == 2'h1; // @[simplebus.scala 168:90]
  reg  reg_aw_ok; // @[simplebus.scala 171:32]
  wire  _reg_aw_ok_T = io_AXI_Bus_b_ready & io_AXI_Bus_b_valid; // @[Decoupled.scala 52:35]
  wire  _reg_aw_ok_T_1 = io_AXI_Bus_aw_ready & io_AXI_Bus_aw_valid; // @[Decoupled.scala 52:35]
  wire [63:0] _GEN_28 = _io_bus2_ready_T_2 ? io_bus2_bits_addr : 64'h0; // @[simplebus.scala 184:37 185:43 189:43]
  wire  _GEN_34 = _io_bus2_ready_T_2 & _T_1; // @[simplebus.scala 205:37 206:49 212:49]
  wire [63:0] _GEN_36 = _io_bus2_ready_T_2 ? io_bus2_bits_wdata : 64'h0; // @[simplebus.scala 205:37 208:41 214:41]
  wire [7:0] _GEN_37 = _io_bus2_ready_T_2 ? io_bus2_bits_wstrb : 8'h0; // @[simplebus.scala 205:37 209:41 215:41]
  reg  reg_ar_ok; // @[simplebus.scala 221:32]
  wire  _reg_ar_ok_T_1 = io_AXI_Bus_ar_ready & io_AXI_Bus_ar_valid; // @[Decoupled.scala 52:35]
  wire  _io_AXI_Bus_ar_valid_T = ~reg_ar_ok; // @[simplebus.scala 232:76]
  wire  _GEN_44 = _io_bus2_ready_T & (io_bus2_valid & _io_AXI_Bus_ar_valid_T); // @[simplebus.scala 246:37 247:49 252:49]
  wire [63:0] _GEN_45 = _io_bus2_ready_T ? io_bus2_bits_addr : 64'h0; // @[simplebus.scala 246:37 248:49 253:49]
  wire  _GEN_48 = _io_bus1_ready_T ? io_bus1_valid & _io_AXI_Bus_ar_valid_T : _GEN_44; // @[simplebus.scala 241:37 242:49]
  wire [63:0] _GEN_49 = _io_bus1_ready_T ? io_bus1_bits_addr : _GEN_45; // @[simplebus.scala 241:37 243:49]
  wire  _GEN_52 = _io_DCache_bus_r_bits_rlast_T ? io_DCache_bus_r_valid & _io_AXI_Bus_ar_valid_T : _GEN_48; // @[simplebus.scala 236:37 237:49]
  wire [63:0] _GEN_53 = _io_DCache_bus_r_bits_rlast_T ? io_DCache_bus_r_bits_raddr : _GEN_49; // @[simplebus.scala 236:37 238:49]
  wire  _GEN_58 = _io_ICache_bus_r_ready_T | _io_DCache_bus_r_bits_rlast_T; // @[simplebus.scala 231:31 234:49]
  assign io_ICache_bus_r_bits_rdata = io_AXI_Bus_r_bits_rdata; // @[simplebus.scala 151:41]
  assign io_ICache_bus_r_bits_rlast = _io_ICache_bus_r_ready_T & io_AXI_Bus_r_bits_rlast; // @[simplebus.scala 153:63]
  assign io_ICache_bus_r_ready = r_chosen == 2'h0 & io_AXI_Bus_r_valid; // @[simplebus.scala 152:63]
  assign io_DCache_bus_w_ready = w_chosen == 2'h0 & io_AXI_Bus_w_ready; // @[simplebus.scala 156:55]
  assign io_DCache_bus_b_valid = _io_DCache_bus_w_ready_T & io_AXI_Bus_b_valid; // @[simplebus.scala 157:55]
  assign io_DCache_bus_r_bits_rdata = io_AXI_Bus_r_bits_rdata; // @[simplebus.scala 160:41]
  assign io_DCache_bus_r_bits_rlast = r_chosen == 2'h1 & io_AXI_Bus_r_bits_rlast; // @[simplebus.scala 161:63]
  assign io_DCache_bus_r_ready = _io_DCache_bus_r_bits_rlast_T & io_AXI_Bus_r_valid; // @[simplebus.scala 163:63]
  assign io_bus1_bits_rdata = io_AXI_Bus_r_bits_rdata; // @[simplebus.scala 166:33]
  assign io_bus1_ready = r_chosen == 2'h2 & io_AXI_Bus_r_valid; // @[simplebus.scala 165:55]
  assign io_bus2_bits_rdata = io_AXI_Bus_r_bits_rdata; // @[simplebus.scala 169:29]
  assign io_bus2_ready = r_chosen == 2'h3 & io_AXI_Bus_r_valid | w_chosen == 2'h1 & io_AXI_Bus_w_ready; // @[simplebus.scala 168:78]
  assign io_AXI_Bus_aw_valid = _io_DCache_bus_w_ready_T & io_DCache_bus_w_valid & ~reg_aw_ok | _io_bus2_ready_T_2 &
    io_bus2_valid & ~reg_aw_ok & io_bus2_bits_is_w; // @[simplebus.scala 174:103]
  assign io_AXI_Bus_aw_bits_awaddr = _io_DCache_bus_w_ready_T ? io_DCache_bus_w_bits_waddr : _GEN_28; // @[simplebus.scala 180:31 181:49]
  assign io_AXI_Bus_w_valid = _io_DCache_bus_w_ready_T ? io_DCache_bus_w_valid : _GEN_34; // @[simplebus.scala 199:31 200:49]
  assign io_AXI_Bus_w_bits_wdata = _io_DCache_bus_w_ready_T ? io_DCache_bus_w_bits_wdata : _GEN_36; // @[simplebus.scala 199:31 202:41]
  assign io_AXI_Bus_w_bits_wstrb = _io_DCache_bus_w_ready_T ? 8'hff : _GEN_37; // @[simplebus.scala 199:31 203:41]
  assign io_AXI_Bus_w_bits_wlast = _io_DCache_bus_w_ready_T ? io_DCache_bus_w_bits_wlast : _io_bus2_ready_T_2; // @[simplebus.scala 199:31 204:41]
  assign io_AXI_Bus_b_ready = 1'h1; // @[simplebus.scala 219:49]
  assign io_AXI_Bus_ar_valid = _io_ICache_bus_r_ready_T ? io_ICache_bus_r_valid & ~reg_ar_ok : _GEN_52; // @[simplebus.scala 231:31 232:49]
  assign io_AXI_Bus_ar_bits_araddr = _io_ICache_bus_r_ready_T ? io_ICache_bus_r_bits_raddr : _GEN_53; // @[simplebus.scala 231:31 233:49]
  assign io_AXI_Bus_ar_bits_arlen = {{7'd0}, _GEN_58};
  always @(posedge clock) begin
    if (reset) begin // @[simplebus.scala 62:23]
      w_locked <= 1'h0; // @[simplebus.scala 62:23]
    end else if (_T) begin // @[simplebus.scala 78:16]
      w_locked <= _GEN_4;
    end else if (io_AXI_Bus_b_valid) begin // @[simplebus.scala 90:33]
      w_locked <= 1'h0; // @[simplebus.scala 91:33]
    end
    if (reset) begin // @[simplebus.scala 63:23]
      w_lockId <= 2'h0; // @[simplebus.scala 63:23]
    end else if (_T) begin // @[simplebus.scala 78:16]
      w_lockId <= {{1'd0}, _GEN_5};
    end
    if (reset) begin // @[simplebus.scala 95:32]
      reg_r_cnt <= 2'h0; // @[simplebus.scala 95:32]
    end else if (_T_4) begin // @[simplebus.scala 116:24]
      if (io_ICache_bus_r_valid) begin // @[simplebus.scala 117:44]
        if (io_ICache_bus_r_ready) begin // @[simplebus.scala 118:47]
          reg_r_cnt <= 2'h1;
        end else begin
          reg_r_cnt <= 2'h2;
        end
      end else if (io_DCache_bus_r_valid) begin // @[simplebus.scala 120:50]
        reg_r_cnt <= _reg_r_cnt_T_1; // @[simplebus.scala 121:41]
      end else begin
        reg_r_cnt <= {{1'd0}, _GEN_16};
      end
    end else if (r_lockId == 2'h0 & _T_11) begin // @[simplebus.scala 134:65]
      reg_r_cnt <= _reg_r_cnt_T_5; // @[simplebus.scala 135:41]
    end else if (r_lockId == 2'h1 & _T_14) begin // @[simplebus.scala 136:70]
      reg_r_cnt <= _reg_r_cnt_T_5; // @[simplebus.scala 137:41]
    end else begin
      reg_r_cnt <= _GEN_23;
    end
    if (reset) begin // @[simplebus.scala 97:31]
      r_lockId <= 2'h0; // @[simplebus.scala 97:31]
    end else if (~r_locked) begin // @[simplebus.scala 100:24]
      if (io_ICache_bus_r_valid) begin // @[simplebus.scala 101:44]
        r_lockId <= 2'h0; // @[simplebus.scala 102:41]
      end else if (io_DCache_bus_r_valid) begin // @[simplebus.scala 103:50]
        r_lockId <= 2'h1; // @[simplebus.scala 104:41]
      end else begin
        r_lockId <= _GEN_10;
      end
    end
    if (reset) begin // @[simplebus.scala 171:32]
      reg_aw_ok <= 1'h0; // @[simplebus.scala 171:32]
    end else if (_reg_aw_ok_T) begin // @[simplebus.scala 172:25]
      reg_aw_ok <= 1'h0;
    end else begin
      reg_aw_ok <= _reg_aw_ok_T_1 | reg_aw_ok;
    end
    if (reset) begin // @[simplebus.scala 221:32]
      reg_ar_ok <= 1'h0; // @[simplebus.scala 221:32]
    end else if (io_AXI_Bus_r_bits_rlast) begin // @[simplebus.scala 222:25]
      reg_ar_ok <= 1'h0;
    end else begin
      reg_ar_ok <= _reg_ar_ok_T_1 | reg_ar_ok;
    end
  end
endmodule