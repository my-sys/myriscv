////本代码由chisel代码而来，只是为了加快仿真速度，考核而设计。正规的代码是chisel代码
//arlen代表有几个transform, 0代表1个，1代表2个，2的次方形式
//arsize 代表一个transform的最大字节数，0 代表1个字节，2代表4个字节，3代表8个字节

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
  wire  un_w_locked = ~w_locked; // @[simplebus.scala 66:6]
  wire  bus2_w_is_valid = io_bus2_valid & io_bus2_bits_is_w; // @[simplebus.scala 69:34]

  wire [1:0] _GEN_0 =  bus2_w_is_valid ? 2'h1 : 2'h2;
  wire [1:0] _GEN_1 = io_DCache_bus_w_valid ? 2'h0 : _GEN_0;
  wire [1:0] w_chosen = ~w_locked ? _GEN_1 : w_lockId;

  wire  _GEN_4 = io_DCache_bus_w_valid | bus2_w_is_valid; // @[simplebus.scala 79:36 80:33]
  wire  _GEN_5 = io_DCache_bus_w_valid ? 1'h0 : bus2_w_is_valid; // @[simplebus.scala 79:36 81:33]

//DCache写的锁号为0，bus2写的锁号1。默认写锁号为0
  always @(posedge clock) begin
    if (reset) begin
      w_locked <= 1'h0;
    end else if (un_w_locked) begin
      w_locked <= _GEN_4;
    end else if (io_AXI_Bus_b_valid) begin
      w_locked <= 1'h0;
    end
    if (reset) begin
      w_lockId <= 2'h0;
    end else if (un_w_locked) begin
      w_lockId <= {{1'd0}, _GEN_5};
    end
  end

  reg [1:0] reg_r_cnt;
  wire  r_locked = reg_r_cnt != 2'h0;
  reg [1:0] r_lockId;
  wire  un_r_locked = ~r_locked;
  wire  io_bus2_is_r = ~io_bus2_bits_is_w; // @[simplebus.scala 107:45]
  wire  bus2_r_is_valid = io_bus2_valid & ~io_bus2_bits_is_w; // @[simplebus.scala 107:42]

//r_chosen 更新策略
  wire [1:0] _GEN_9 = bus2_r_is_valid ? 2'h3 : 2'h0; // @[simplebus.scala 107:65 108:41 110:41]
  wire [1:0] _GEN_10 = io_bus1_valid ? 2'h2 : _GEN_9; // @[simplebus.scala 105:42 106:41]
  wire [1:0] _GEN_11 = io_DCache_bus_r_valid ? 2'h1 : _GEN_10; // @[simplebus.scala 103:50 104:41]
  wire [1:0] _GEN_12 = io_ICache_bus_r_valid ? 2'h0 : _GEN_11; // @[simplebus.scala 101:44 102:41]
  wire [1:0] r_chosen = ~r_locked ? _GEN_12 : r_lockId; // @[simplebus.scala 100:24 113:26]

//
  wire [1:0] _reg_r_cnt_T_1 = io_DCache_bus_r_ready ? 2'h1 : 2'h2; // @[simplebus.scala 121:47]

  wire  _reg_r_cnt_T_2 = io_bus1_ready ? 1'h0 : 1'h1; // @[simplebus.scala 124:47]
  wire  _reg_r_cnt_T_3 = io_bus2_ready ? 1'h0 : 1'h1; // @[simplebus.scala 127:47]
  wire  _GEN_14 = bus2_r_is_valid & _reg_r_cnt_T_3; // @[simplebus.scala 126:65 127:41 130:41]
  wire  _GEN_16 = io_bus1_valid ? _reg_r_cnt_T_2 : _GEN_14; // @[simplebus.scala 123:42 124:41]

  wire  io_ICache_bus_r_fire = io_ICache_bus_r_valid & io_ICache_bus_r_ready; // @[simplebus.scala 28:40]
  wire [1:0] r_cnt_sub_1 = reg_r_cnt - 2'h1; // @[simplebus.scala 135:54]
  wire  io_DCache_bus_r_fire = io_DCache_bus_r_valid & io_DCache_bus_r_ready; // @[simplebus.scala 28:40]
  wire  io_bus1_fire = io_bus1_valid & io_bus1_ready; // @[simplebus.scala 43:48]
  wire  io_bus2_fire = io_bus2_valid & io_bus2_ready; // @[simplebus.scala 56:48]

//r_cnt r_cnt的更新，另外一半在always 中,逆天的 chisel转换verilog,直接看这个verilog,我太难了。
  wire [1:0] _GEN_22 = r_lockId == 2'h3 & io_bus2_fire & io_bus2_is_r ? r_cnt_sub_1 : reg_r_cnt; // @[simplebus.scala 140:85 141:41 143:41]
  wire [1:0] _GEN_23 = r_lockId == 2'h2 & io_bus1_fire ? r_cnt_sub_1 : _GEN_22; // @[simplebus.scala 138:62 139:41]

  wire  chose_ICache_bus_r = r_chosen == 2'h0; // @[simplebus.scala 152:54]
  wire  chose_DCache_bus_w = w_chosen == 2'h0; // @[simplebus.scala 156:46]
  wire  chose_DCache_bus_r = r_chosen == 2'h1; // @[simplebus.scala 161:54]
  wire  chose_bus1_r = r_chosen == 2'h2; // @[simplebus.scala 165:46]
  wire  chose_bus2_r = r_chosen == 2'h3; // @[simplebus.scala 168:47]
  wire  chose_bus2_w = w_chosen == 2'h1; // @[simplebus.scala 168:90]

  reg  reg_aw_ok; // @[simplebus.scala 171:32]
  wire  _reg_aw_ok_T = io_AXI_Bus_b_ready & io_AXI_Bus_b_valid; // @[Decoupled.scala 52:35]
  wire  _reg_aw_ok_T_1 = io_AXI_Bus_aw_ready & io_AXI_Bus_aw_valid; // @[Decoupled.scala 52:35]

  wire [63:0] bus2_w_addr = chose_bus2_w ? io_bus2_bits_addr : 64'h0; // @[simplebus.scala 184:37 185:43 189:43]
  wire  bus2_chose_w_T_valid = chose_bus2_w & bus2_w_is_valid; // @[simplebus.scala 205:37 206:49 212:49]
  wire [63:0] bus2_chose_w_T_wdata = chose_bus2_w ? io_bus2_bits_wdata : 64'h0; // @[simplebus.scala 205:37 208:41 214:41]
  wire [7:0] bus2_chose_w_T_wstrb = chose_bus2_w ? io_bus2_bits_wstrb : 8'h0; // @[simplebus.scala 205:37 209:41 215:41]
  
  reg  reg_ar_ok; // @[simplebus.scala 221:32]
  wire  _reg_ar_ok_T_1 = io_AXI_Bus_ar_ready & io_AXI_Bus_ar_valid;

  wire  _io_AXI_Bus_ar_valid_T = ~reg_ar_ok;
  wire  chose_bus2_r_valid = chose_bus2_r & (io_bus2_valid & _io_AXI_Bus_ar_valid_T); // @[simplebus.scala 246:37 247:49 252:49]
  wire [63:0] chose_bus2_r_addr = chose_bus2_r ? io_bus2_bits_addr : 64'h0; // @[simplebus.scala 246:37 248:49 253:49]
  wire  chose_bus1_r_valid = chose_bus1_r ? io_bus1_valid & _io_AXI_Bus_ar_valid_T : chose_bus2_r_valid; // @[simplebus.scala 241:37 242:49]
  wire [63:0] chose_bus1_r_addr = chose_bus1_r ? io_bus1_bits_addr : chose_bus2_r_addr; // @[simplebus.scala 241:37 243:49]
  wire  chose_DCache_bus_r_valid = chose_DCache_bus_r ? io_DCache_bus_r_valid & _io_AXI_Bus_ar_valid_T : chose_bus1_r_valid; // @[simplebus.scala 236:37 237:49]
  wire [63:0] chose_DCache_bus_r_addr = chose_DCache_bus_r ? io_DCache_bus_r_bits_raddr : chose_bus1_r_addr; // @[simplebus.scala 236:37 238:49]
  wire  chose_arlen = chose_ICache_bus_r | chose_DCache_bus_r; ////Cache 需要传两次，bus1,bus2 传一次。 记住2的次方
  assign io_ICache_bus_r_bits_rdata = io_AXI_Bus_r_bits_rdata; // @[simplebus.scala 151:41]
  assign io_ICache_bus_r_bits_rlast = chose_ICache_bus_r & io_AXI_Bus_r_bits_rlast; // @[simplebus.scala 153:63]
  assign io_ICache_bus_r_ready = r_chosen == 2'h0 & io_AXI_Bus_r_valid; // @[simplebus.scala 152:63]
  assign io_DCache_bus_w_ready = w_chosen == 2'h0 & io_AXI_Bus_w_ready; // @[simplebus.scala 156:55]
  assign io_DCache_bus_b_valid = chose_DCache_bus_w & io_AXI_Bus_b_valid; // @[simplebus.scala 157:55]
  assign io_DCache_bus_r_bits_rdata = io_AXI_Bus_r_bits_rdata; // @[simplebus.scala 160:41]
  assign io_DCache_bus_r_bits_rlast = r_chosen == 2'h1 & io_AXI_Bus_r_bits_rlast; // @[simplebus.scala 161:63]
  assign io_DCache_bus_r_ready = chose_DCache_bus_r & io_AXI_Bus_r_valid; // @[simplebus.scala 163:63]
  assign io_bus1_bits_rdata = io_AXI_Bus_r_bits_rdata; // @[simplebus.scala 166:33]
  assign io_bus1_ready = r_chosen == 2'h2 & io_AXI_Bus_r_valid; // @[simplebus.scala 165:55]
  assign io_bus2_bits_rdata = io_AXI_Bus_r_bits_rdata; // @[simplebus.scala 169:29]
  assign io_bus2_ready = r_chosen == 2'h3 & io_AXI_Bus_r_valid | w_chosen == 2'h1 & io_AXI_Bus_w_ready; // @[simplebus.scala 168:78]
  assign io_AXI_Bus_aw_valid = chose_DCache_bus_w & io_DCache_bus_w_valid & ~reg_aw_ok | chose_bus2_w &
    io_bus2_valid & ~reg_aw_ok & io_bus2_bits_is_w; // @[simplebus.scala 174:103]
  assign io_AXI_Bus_aw_bits_awaddr = chose_DCache_bus_w ? io_DCache_bus_w_bits_waddr : bus2_w_addr; // @[simplebus.scala 180:31 181:49]
  assign io_AXI_Bus_w_valid = chose_DCache_bus_w ? io_DCache_bus_w_valid : bus2_chose_w_T_valid; // @[simplebus.scala 199:31 200:49]
  assign io_AXI_Bus_w_bits_wdata = chose_DCache_bus_w ? io_DCache_bus_w_bits_wdata : bus2_chose_w_T_wdata; // @[simplebus.scala 199:31 202:41]
  assign io_AXI_Bus_w_bits_wstrb = chose_DCache_bus_w ? 8'hff : bus2_chose_w_T_wstrb; // @[simplebus.scala 199:31 203:41]
  assign io_AXI_Bus_w_bits_wlast = chose_DCache_bus_w ? io_DCache_bus_w_bits_wlast : chose_bus2_w; // @[simplebus.scala 199:31 204:41]
  assign io_AXI_Bus_b_ready = 1'h1; // @[simplebus.scala 219:49]
  assign io_AXI_Bus_ar_valid = chose_ICache_bus_r ? io_ICache_bus_r_valid & ~reg_ar_ok : chose_DCache_bus_r_valid; // @[simplebus.scala 231:31 232:49]
  assign io_AXI_Bus_ar_bits_araddr = chose_ICache_bus_r ? io_ICache_bus_r_bits_raddr : chose_DCache_bus_r_addr; // @[simplebus.scala 231:31 233:49]
  assign io_AXI_Bus_ar_bits_arlen = {{7'd0}, chose_arlen};
  always @(posedge clock) begin
    if (reset) begin // @[simplebus.scala 62:23]
      w_locked <= 1'h0; // @[simplebus.scala 62:23]
    end else if (un_w_locked) begin // @[simplebus.scala 78:16]
      w_locked <= _GEN_4;
    end else if (io_AXI_Bus_b_valid) begin // @[simplebus.scala 90:33]
      w_locked <= 1'h0; // @[simplebus.scala 91:33]
    end
    if (reset) begin // @[simplebus.scala 63:23]
      w_lockId <= 2'h0; // @[simplebus.scala 63:23]
    end else if (un_w_locked) begin // @[simplebus.scala 78:16]
      w_lockId <= {{1'd0}, _GEN_5};
    end
    if (reset) begin // @[simplebus.scala 95:32]
      reg_r_cnt <= 2'h0; // @[simplebus.scala 95:32]
    end else if (un_r_locked) begin // @[simplebus.scala 116:24]
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
    end else if (r_lockId == 2'h0 & io_ICache_bus_r_fire) begin // @[simplebus.scala 134:65]
      reg_r_cnt <= r_cnt_sub_1; // @[simplebus.scala 135:41]
    end else if (r_lockId == 2'h1 & io_DCache_bus_r_fire) begin // @[simplebus.scala 136:70]
      reg_r_cnt <= r_cnt_sub_1; // @[simplebus.scala 137:41]
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
      end else begin //bus1,bus2的部分被合并了在外面，逆天的chisel转换出来的verilog写法，一半判断写在always模块中，一半在wire中。为了仿真速度，我(╯﹏╰)b。
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