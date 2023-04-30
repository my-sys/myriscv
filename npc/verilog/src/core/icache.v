module ICache_stage0(
  input         clock,
  input         reset,
  input         io_flush,
  output        io_cpu_addr_ready,
  input         io_cpu_addr_valid,
  input  [63:0] io_cpu_addr_bits_addr,
  input         io_addr_ready,
  output        io_addr_valid,
  output [63:0] io_addr_bits_addr
);
  reg  reg_valid; // @[icache.scala 56:32]
  reg [63:0] reg_addr; // @[icache.scala 57:32]
  wire  valid = io_cpu_addr_valid & ~io_flush; // @[icache.scala 59:40]
  assign io_cpu_addr_ready = io_addr_ready; // @[icache.scala 67:27]
  assign io_addr_valid = reg_valid; // @[icache.scala 65:23]
  assign io_addr_bits_addr = reg_addr; // @[icache.scala 66:27]
  always @(posedge clock) begin
    if (reset) begin // @[icache.scala 56:32]
      reg_valid <= 1'h0; // @[icache.scala 56:32]
    end else if (io_addr_ready) begin // @[icache.scala 61:20]
      reg_valid <= valid; // @[icache.scala 62:33]
    end
    if (reset) begin // @[icache.scala 57:32]
      reg_addr <= 64'h0; // @[icache.scala 57:32]
    end else if (io_addr_ready) begin // @[icache.scala 61:20]
      reg_addr <= io_cpu_addr_bits_addr; // @[icache.scala 63:33]
    end
  end
endmodule

module ICache_stage1(
  input          clock,
  input          reset,
  input          io_flush,
  output         io_cpu_addr_ready,
  input          io_cpu_addr_valid,
  input  [63:0]  io_cpu_addr_bits_addr,
  output [5:0]   io_tag_valid_index,
  input          io_tag_valid_tag_valid_0,
  input          io_tag_valid_tag_valid_1,
  output         io_sram_valid,
  input  [127:0] io_sram_sram_data_0,
  input  [127:0] io_sram_sram_data_1,
  input  [127:0] io_sram_sram_tag_0,
  input  [127:0] io_sram_sram_tag_1,
  input          io_sram_ready,
  input          io_cache_stage1_ready,
  output         io_cache_stage1_valid,
  output [63:0]  io_cache_stage1_bits_cpu_addr,
  output         io_cache_stage1_bits_sram_0_hit,
  output         io_cache_stage1_bits_sram_0_tag_valid,
  output [63:0]  io_cache_stage1_bits_sram_0_rdata,
  output         io_cache_stage1_bits_sram_1_hit,
  output         io_cache_stage1_bits_sram_1_tag_valid,
  output [63:0]  io_cache_stage1_bits_sram_1_rdata
);
  wire  valid = io_cpu_addr_valid & ~io_flush; // @[icache.scala 79:40]
  wire  ready = io_sram_ready & io_cache_stage1_ready; // @[icache.scala 80:49]
  reg [63:0] reg_cpu_addr; // @[icache.scala 84:35]
  reg  reg_valid; // @[icache.scala 85:35]
  wire [53:0] reg_tag = reg_cpu_addr[63:10]; // @[icache.scala 90:39]
  wire [5:0] reg_index = reg_cpu_addr[9:4]; // @[icache.scala 91:39]
  wire [3:0] reg_offset = reg_cpu_addr[3:0]; // @[icache.scala 92:39]
  wire [53:0] tag_0 = io_sram_sram_tag_0[53:0]; // @[icache.scala 102:46]
  wire [53:0] tag_1 = io_sram_sram_tag_1[53:0]; // @[icache.scala 103:46]
  assign io_cpu_addr_ready = io_sram_ready & io_cache_stage1_ready; // @[icache.scala 80:49]
  assign io_tag_valid_index = ready ? io_cpu_addr_bits_addr[9:4] : reg_index; // @[icache.scala 94:24]
  assign io_sram_valid = io_cpu_addr_valid & ~io_flush; // @[icache.scala 79:40]
  assign io_cache_stage1_valid = reg_valid & io_sram_ready; // @[icache.scala 116:70]
  assign io_cache_stage1_bits_cpu_addr = reg_cpu_addr; // @[icache.scala 117:49]
  assign io_cache_stage1_bits_sram_0_hit = reg_tag == tag_0; // @[icache.scala 104:36]
  assign io_cache_stage1_bits_sram_0_tag_valid = io_tag_valid_tag_valid_0; // @[icache.scala 119:49]
  assign io_cache_stage1_bits_sram_0_rdata = reg_offset[3] ? io_sram_sram_data_0[127:64] : io_sram_sram_data_0[63:0]; // @[icache.scala 108:30]
  assign io_cache_stage1_bits_sram_1_hit = reg_tag == tag_1; // @[icache.scala 105:36]
  assign io_cache_stage1_bits_sram_1_tag_valid = io_tag_valid_tag_valid_1; // @[icache.scala 123:49]
  assign io_cache_stage1_bits_sram_1_rdata = reg_offset[3] ? io_sram_sram_data_1[127:64] : io_sram_sram_data_1[63:0]; // @[icache.scala 109:30]
  always @(posedge clock) begin
    if (reset) begin // @[icache.scala 84:35]
      reg_cpu_addr <= 64'h0; // @[icache.scala 84:35]
    end else if (ready) begin // @[icache.scala 95:20]
      reg_cpu_addr <= io_cpu_addr_bits_addr; // @[icache.scala 96:33]
    end
    if (reset) begin // @[icache.scala 85:35]
      reg_valid <= 1'h0; // @[icache.scala 85:35]
    end else if (ready) begin // @[icache.scala 95:20]
      reg_valid <= valid; // @[icache.scala 97:33]
    end
  end
endmodule

module ICache_stage2(
  input          clock,
  input          reset,
  input          io_flush,
  output         io_cache_stage1_ready,
  input          io_cache_stage1_valid,
  input  [63:0]  io_cache_stage1_bits_cpu_addr,
  input          io_cache_stage1_bits_sram_0_hit,
  input          io_cache_stage1_bits_sram_0_tag_valid,
  input  [63:0]  io_cache_stage1_bits_sram_0_rdata,
  input          io_cache_stage1_bits_sram_1_hit,
  input          io_cache_stage1_bits_sram_1_tag_valid,
  input  [63:0]  io_cache_stage1_bits_sram_1_rdata,
  output         io_cache_bus_r_valid,
  output [63:0]  io_cache_bus_r_bits_raddr,
  input  [63:0]  io_cache_bus_r_bits_rdata,
  input          io_cache_bus_r_bits_rlast,
  input          io_cache_bus_r_ready,
  output         io_sram_w_valid,
  output [5:0]   io_sram_w_sram_addr,
  output [127:0] io_sram_w_sram_data,
  output [127:0] io_sram_w_sram_tag,
  output         io_sram_w_chose_tag,
  input          io_rdata_ready,
  output         io_rdata_valid,
  output [63:0]  io_rdata_bits_data,
  output [63:0]  io_rdata_bits_pc
);

  wire [5:0] index = io_cache_stage1_bits_cpu_addr[9:4]; // @[icache.scala 145:64]
  wire  valid = io_cache_stage1_valid & ~io_flush & io_rdata_ready; // @[icache.scala 146:70]
  reg  reg_chosen_tag; // @[icache.scala 153:37]
  reg [63:0] reg_rdata; // @[icache.scala 154:34]
  reg  reg_valid; // @[icache.scala 155:34]
  reg  reg_ready; // @[icache.scala 156:34]
  wire [63:0] temp_addr = {io_cache_stage1_bits_cpu_addr[63:4],4'h0}; // @[Cat.scala 33:92]
  reg [63:0] reg_r_raddr; // @[icache.scala 160:34]
  reg  reg_r_valid; // @[icache.scala 161:34]
  reg [127:0] reg_cache_wdata; // @[icache.scala 164:38]
  reg  reg_cache_write; // @[icache.scala 165:42]
  reg [63:0] reg_cpu_addr; // @[icache.scala 166:42]
  wire [53:0] reg_tag = reg_cpu_addr[63:10]; // @[icache.scala 167:39]
  wire [3:0] reg_offset = reg_cpu_addr[3:0]; // @[icache.scala 169:39]
  reg [63:0] reg_lru_1; // @[icache.scala 173:58]
  wire [63:0] _LRU_1_T = reg_lru_1 >> index; // @[icache.scala 175:36]
  wire  LRU_1 = _LRU_1_T[0]; // @[icache.scala 175:36]
  wire [63:0] chose_bit = 64'h1 << index; // @[icache.scala 176:29]
  wire [63:0] neg_chose_bit = ~chose_bit; // @[icache.scala 177:29]
  reg [1:0] reg_bus_state; // @[icache.scala 180:36]
  wire [63:0] _reg_lru_1_T = reg_lru_1 | chose_bit; // @[icache.scala 185:48]
  wire [63:0] _reg_lru_1_T_1 = reg_lru_1 & neg_chose_bit; // @[icache.scala 188:48]
  wire  _T_2 = io_cache_stage1_bits_sram_0_tag_valid & io_cache_stage1_bits_sram_1_tag_valid; // @[icache.scala 190:42]
  wire [63:0] _reg_lru_1_T_4 = LRU_1 ? _reg_lru_1_T_1 : _reg_lru_1_T; // @[icache.scala 192:49]
  wire [63:0] _reg_lru_1_T_7 = io_cache_stage1_bits_sram_0_tag_valid ? _reg_lru_1_T_1 : _reg_lru_1_T; // @[icache.scala 195:49]
  wire [63:0] _GEN_1 = io_cache_stage1_bits_sram_0_tag_valid & io_cache_stage1_bits_sram_1_tag_valid ? _reg_lru_1_T_4 :
    _reg_lru_1_T_7; // @[icache.scala 190:56 192:43 195:43]
  wire  _reg_chosen_tag_T = io_cache_stage1_bits_sram_0_hit ? 1'h0 : 1'h1; // @[icache.scala 218:55]
  wire  _T_7 = io_cache_stage1_bits_sram_0_hit & io_cache_stage1_bits_sram_0_tag_valid | io_cache_stage1_bits_sram_1_hit
     & io_cache_stage1_bits_sram_1_tag_valid; // @[icache.scala 219:60]
  wire [63:0] _reg_rdata_T = io_cache_stage1_bits_sram_0_hit ? io_cache_stage1_bits_sram_0_rdata :
    io_cache_stage1_bits_sram_1_rdata; // @[icache.scala 222:79]
  wire [63:0] _GEN_10 = io_cache_stage1_bits_sram_0_hit & io_cache_stage1_bits_sram_0_tag_valid |
    io_cache_stage1_bits_sram_1_hit & io_cache_stage1_bits_sram_1_tag_valid ? _reg_rdata_T : reg_rdata; // @[icache.scala 154:34 219:84 222:73]
  wire [1:0] _GEN_12 = io_cache_stage1_bits_sram_0_hit & io_cache_stage1_bits_sram_0_tag_valid |
    io_cache_stage1_bits_sram_1_hit & io_cache_stage1_bits_sram_1_tag_valid ? 2'h0 : 2'h1; // @[icache.scala 219:84 225:65 232:65]
  wire [63:0] _GEN_13 = io_cache_stage1_bits_sram_0_hit & io_cache_stage1_bits_sram_0_tag_valid |
    io_cache_stage1_bits_sram_1_hit & io_cache_stage1_bits_sram_1_tag_valid ? reg_r_raddr : temp_addr; // @[icache.scala 160:34 219:84 230:65]
  wire  _GEN_14 = io_cache_stage1_bits_sram_0_hit & io_cache_stage1_bits_sram_0_tag_valid |
    io_cache_stage1_bits_sram_1_hit & io_cache_stage1_bits_sram_1_tag_valid ? 1'h0 : 1'h1; // @[icache.scala 213:49 219:84 231:65]
  wire  _GEN_15 = _T_2 ? LRU_1 : io_cache_stage1_bits_sram_0_tag_valid; // @[icache.scala 237:64 238:65 244:65]
  wire  _GEN_19 = io_cache_stage1_bits_sram_0_hit | io_cache_stage1_bits_sram_1_hit ? _reg_chosen_tag_T : _GEN_15; // @[icache.scala 215:44 218:49]
  wire  _GEN_21 = (io_cache_stage1_bits_sram_0_hit | io_cache_stage1_bits_sram_1_hit) & _T_7; // @[icache.scala 215:44 235:65]
  wire  _GEN_24 = io_cache_stage1_bits_sram_0_hit | io_cache_stage1_bits_sram_1_hit ? _GEN_14 : 1'h1; // @[icache.scala 215:44]
  wire  _GEN_25 = valid & _GEN_19; // @[icache.scala 214:36 204:41]
  wire  _GEN_28 = valid ? _GEN_21 : 1'h1; // @[icache.scala 214:36 211:49]
  wire  _GEN_31 = valid & _GEN_24; // @[icache.scala 214:36 213:49]
  wire  _T_10 = io_cache_bus_r_valid & io_cache_bus_r_ready; // @[simplebus.scala 28:40]
  wire [63:0] _reg_rdata_T_3 = reg_offset[3] ? io_cache_bus_r_bits_rdata : reg_cache_wdata[63:0]; // @[icache.scala 259:79]
  wire [127:0] _reg_cache_wdata_T_1 = {io_cache_bus_r_bits_rdata,reg_cache_wdata[63:0]}; // @[Cat.scala 33:92]
  wire  _GEN_32 = io_cache_bus_r_bits_rlast ? 1'h0 : reg_r_valid; // @[icache.scala 161:34 255:64 256:57]
  wire  _GEN_33 = io_cache_bus_r_bits_rlast | reg_valid; // @[icache.scala 155:34 255:64 258:73]
  wire [63:0] _GEN_34 = io_cache_bus_r_bits_rlast ? _reg_rdata_T_3 : reg_rdata; // @[icache.scala 154:34 255:64 259:73]
  wire [127:0] _GEN_35 = io_cache_bus_r_bits_rlast ? _reg_cache_wdata_T_1 : {{64'd0}, io_cache_bus_r_bits_rdata}; // @[icache.scala 255:64 260:65 262:65]
  wire  _GEN_40 = io_cache_bus_r_bits_rlast | reg_cache_write; // @[icache.scala 165:42 265:56 266:57]
  wire  _GEN_42 = io_cache_bus_r_bits_rlast | reg_ready; // @[icache.scala 156:34 265:56 268:65]
  wire  _GEN_49 = 2'h1 == reg_bus_state ? _GEN_42 : reg_ready; // @[icache.scala 200:30 156:34]
  wire  _GEN_54 = 2'h0 == reg_bus_state ? _GEN_28 : _GEN_49; // @[icache.scala 200:30]
  assign io_cache_stage1_ready = reg_ready & io_rdata_ready; // @[icache.scala 280:44]
  assign io_cache_bus_r_valid = reg_r_valid; // @[icache.scala 301:41]
  assign io_cache_bus_r_bits_raddr = reg_r_raddr; // @[icache.scala 300:41]
  assign io_sram_w_valid = reg_cache_write; // @[icache.scala 282:33]
  assign io_sram_w_sram_addr = reg_cpu_addr[9:4]; // @[icache.scala 168:39]
  assign io_sram_w_sram_data = reg_cache_wdata; // @[icache.scala 284:33]
  assign io_sram_w_sram_tag = {{74'd0}, reg_tag}; // @[icache.scala 285:33]
  assign io_sram_w_chose_tag = reg_chosen_tag; // @[icache.scala 286:33]
  assign io_rdata_valid = reg_valid; // @[icache.scala 288:33]
  assign io_rdata_bits_data = reg_rdata; // @[icache.scala 289:33]
  assign io_rdata_bits_pc = reg_cpu_addr; // @[icache.scala 290:33]
  always @(posedge clock) begin
    if (reset) begin // @[icache.scala 153:37]
      reg_chosen_tag <= 1'h0; // @[icache.scala 153:37]
    end else if (2'h0 == reg_bus_state) begin // @[icache.scala 200:30]
      reg_chosen_tag <= _GEN_25;
    end
    if (reset) begin // @[icache.scala 154:34]
      reg_rdata <= 64'h0; // @[icache.scala 154:34]
    end else if (2'h0 == reg_bus_state) begin // @[icache.scala 200:30]
      if (valid) begin // @[icache.scala 214:36]
        if (io_cache_stage1_bits_sram_0_hit | io_cache_stage1_bits_sram_1_hit) begin // @[icache.scala 215:44]
          reg_rdata <= _GEN_10;
        end
      end
    end else if (2'h1 == reg_bus_state) begin // @[icache.scala 200:30]
      if (_T_10) begin // @[icache.scala 254:50]
        reg_rdata <= _GEN_34;
      end
    end
    if (reset) begin // @[icache.scala 155:34]
      reg_valid <= 1'h0; // @[icache.scala 155:34]
    end else if (2'h0 == reg_bus_state) begin // @[icache.scala 200:30]
      if (valid) begin // @[icache.scala 214:36]
        reg_valid <= _GEN_21;
      end else if (io_rdata_ready) begin // @[icache.scala 206:36]
        reg_valid <= 1'h0; // @[icache.scala 207:57]
      end
    end else if (2'h1 == reg_bus_state) begin // @[icache.scala 200:30]
      if (_T_10) begin // @[icache.scala 254:50]
        reg_valid <= _GEN_33;
      end
    end
    reg_ready <= reset | _GEN_54; // @[icache.scala 156:{34,34}]
    if (reset) begin // @[icache.scala 160:34]
      reg_r_raddr <= 64'h0; // @[icache.scala 160:34]
    end else if (2'h0 == reg_bus_state) begin // @[icache.scala 200:30]
      if (valid) begin // @[icache.scala 214:36]
        if (io_cache_stage1_bits_sram_0_hit | io_cache_stage1_bits_sram_1_hit) begin // @[icache.scala 215:44]
          reg_r_raddr <= _GEN_13;
        end else begin
          reg_r_raddr <= temp_addr;
        end
      end
    end
    if (reset) begin // @[icache.scala 161:34]
      reg_r_valid <= 1'h0; // @[icache.scala 161:34]
    end else if (2'h0 == reg_bus_state) begin // @[icache.scala 200:30]
      reg_r_valid <= _GEN_31;
    end else if (2'h1 == reg_bus_state) begin // @[icache.scala 200:30]
      if (_T_10) begin // @[icache.scala 254:50]
        reg_r_valid <= _GEN_32;
      end
    end
    if (reset) begin // @[icache.scala 164:38]
      reg_cache_wdata <= 128'h0; // @[icache.scala 164:38]
    end else if (!(2'h0 == reg_bus_state)) begin // @[icache.scala 200:30]
      if (2'h1 == reg_bus_state) begin // @[icache.scala 200:30]
        if (_T_10) begin // @[icache.scala 254:50]
          reg_cache_wdata <= _GEN_35;
        end
      end
    end
    if (reset) begin // @[icache.scala 165:42]
      reg_cache_write <= 1'h0; // @[icache.scala 165:42]
    end else if (2'h0 == reg_bus_state) begin // @[icache.scala 200:30]
      reg_cache_write <= 1'h0; // @[icache.scala 202:41]
    end else if (2'h1 == reg_bus_state) begin // @[icache.scala 200:30]
      reg_cache_write <= _GEN_40;
    end
    if (reset) begin // @[icache.scala 166:42]
      reg_cpu_addr <= 64'h0; // @[icache.scala 166:42]
    end else if (2'h0 == reg_bus_state) begin // @[icache.scala 200:30]
      if (io_rdata_ready) begin // @[icache.scala 206:36]
        reg_cpu_addr <= io_cache_stage1_bits_cpu_addr; // @[icache.scala 208:49]
      end
    end
    if (reset) begin // @[icache.scala 173:58]
      reg_lru_1 <= 64'h0; // @[icache.scala 173:58]
    end else if (reg_bus_state == 2'h0 & valid) begin // @[icache.scala 182:49]
      if (io_cache_stage1_bits_sram_0_hit) begin // @[icache.scala 183:28]
        reg_lru_1 <= _reg_lru_1_T; // @[icache.scala 185:35]
      end else if (io_cache_stage1_bits_sram_1_hit) begin // @[icache.scala 186:34]
        reg_lru_1 <= _reg_lru_1_T_1; // @[icache.scala 188:35]
      end else begin
        reg_lru_1 <= _GEN_1;
      end
    end
    if (reset) begin // @[icache.scala 180:36]
      reg_bus_state <= 2'h0; // @[icache.scala 180:36]
    end else if (2'h0 == reg_bus_state) begin // @[icache.scala 200:30]
      if (valid) begin // @[icache.scala 214:36]
        if (io_cache_stage1_bits_sram_0_hit | io_cache_stage1_bits_sram_1_hit) begin // @[icache.scala 215:44]
          reg_bus_state <= _GEN_12;
        end else begin
          reg_bus_state <= 2'h1;
        end
      end else begin
        reg_bus_state <= 2'h0; // @[icache.scala 212:41]
      end
    end else if (2'h1 == reg_bus_state) begin // @[icache.scala 200:30]
      if (io_cache_bus_r_bits_rlast) begin // @[icache.scala 265:56]
        reg_bus_state <= 2'h0; // @[icache.scala 267:57]
      end
    end
  end

endmodule

module ICache(
  input          clock,
  input          reset,
  input          io_flush,
  output         io_cpu_raddr_ready,
  input          io_cpu_raddr_valid,
  input  [63:0]  io_cpu_raddr_bits_addr,
  input          io_cpu_rdata_ready,
  output         io_cpu_rdata_valid,
  output [63:0]  io_cpu_rdata_bits_data,
  output [63:0]  io_cpu_rdata_bits_pc,
  input          io_is_fence_i,
  output [5:0]   io_sram0_data_addr,
  output         io_sram0_data_wen,
  output [127:0] io_sram0_data_wdata,
  input  [127:0] io_sram0_data_rdata,
  output [5:0]   io_sram0_tag_addr,
  output         io_sram0_tag_wen,
  output [127:0] io_sram0_tag_wdata,
  input  [127:0] io_sram0_tag_rdata,
  output [5:0]   io_sram2_data_addr,
  output         io_sram2_data_wen,
  output [127:0] io_sram2_data_wdata,
  input  [127:0] io_sram2_data_rdata,
  output [5:0]   io_sram2_tag_addr,
  output         io_sram2_tag_wen,
  output [127:0] io_sram2_tag_wdata,
  input  [127:0] io_sram2_tag_rdata,
  output         io_cache_bus_r_valid,
  output [63:0]  io_cache_bus_r_bits_raddr,
  input  [63:0]  io_cache_bus_r_bits_rdata,
  input          io_cache_bus_r_bits_rlast,
  input          io_cache_bus_r_ready
);

  wire  cache_stage0_clock; // @[icache.scala 320:34]
  wire  cache_stage0_reset; // @[icache.scala 320:34]
  wire  cache_stage0_io_flush; // @[icache.scala 320:34]
  wire  cache_stage0_io_cpu_addr_ready; // @[icache.scala 320:34]
  wire  cache_stage0_io_cpu_addr_valid; // @[icache.scala 320:34]
  wire [63:0] cache_stage0_io_cpu_addr_bits_addr; // @[icache.scala 320:34]
  wire  cache_stage0_io_addr_ready; // @[icache.scala 320:34]
  wire  cache_stage0_io_addr_valid; // @[icache.scala 320:34]
  wire [63:0] cache_stage0_io_addr_bits_addr; // @[icache.scala 320:34]
  wire  cache_stage1_clock; // @[icache.scala 321:34]
  wire  cache_stage1_reset; // @[icache.scala 321:34]
  wire  cache_stage1_io_flush; // @[icache.scala 321:34]
  wire  cache_stage1_io_cpu_addr_ready; // @[icache.scala 321:34]
  wire  cache_stage1_io_cpu_addr_valid; // @[icache.scala 321:34]
  wire [63:0] cache_stage1_io_cpu_addr_bits_addr; // @[icache.scala 321:34]
  wire [5:0] cache_stage1_io_tag_valid_index; // @[icache.scala 321:34]
  wire  cache_stage1_io_tag_valid_tag_valid_0; // @[icache.scala 321:34]
  wire  cache_stage1_io_tag_valid_tag_valid_1; // @[icache.scala 321:34]
  wire  cache_stage1_io_sram_valid; // @[icache.scala 321:34]
  wire [127:0] cache_stage1_io_sram_sram_data_0; // @[icache.scala 321:34]
  wire [127:0] cache_stage1_io_sram_sram_data_1; // @[icache.scala 321:34]
  wire [127:0] cache_stage1_io_sram_sram_tag_0; // @[icache.scala 321:34]
  wire [127:0] cache_stage1_io_sram_sram_tag_1; // @[icache.scala 321:34]
  wire  cache_stage1_io_sram_ready; // @[icache.scala 321:34]
  wire  cache_stage1_io_cache_stage1_ready; // @[icache.scala 321:34]
  wire  cache_stage1_io_cache_stage1_valid; // @[icache.scala 321:34]
  wire [63:0] cache_stage1_io_cache_stage1_bits_cpu_addr; // @[icache.scala 321:34]
  wire  cache_stage1_io_cache_stage1_bits_sram_0_hit; // @[icache.scala 321:34]
  wire  cache_stage1_io_cache_stage1_bits_sram_0_tag_valid; // @[icache.scala 321:34]
  wire [63:0] cache_stage1_io_cache_stage1_bits_sram_0_rdata; // @[icache.scala 321:34]
  wire  cache_stage1_io_cache_stage1_bits_sram_1_hit; // @[icache.scala 321:34]
  wire  cache_stage1_io_cache_stage1_bits_sram_1_tag_valid; // @[icache.scala 321:34]
  wire [63:0] cache_stage1_io_cache_stage1_bits_sram_1_rdata; // @[icache.scala 321:34]
  wire  cache_stage2_clock; // @[icache.scala 322:34]
  wire  cache_stage2_reset; // @[icache.scala 322:34]
  wire  cache_stage2_io_flush; // @[icache.scala 322:34]
  wire  cache_stage2_io_cache_stage1_ready; // @[icache.scala 322:34]
  wire  cache_stage2_io_cache_stage1_valid; // @[icache.scala 322:34]
  wire [63:0] cache_stage2_io_cache_stage1_bits_cpu_addr; // @[icache.scala 322:34]
  wire  cache_stage2_io_cache_stage1_bits_sram_0_hit; // @[icache.scala 322:34]
  wire  cache_stage2_io_cache_stage1_bits_sram_0_tag_valid; // @[icache.scala 322:34]
  wire [63:0] cache_stage2_io_cache_stage1_bits_sram_0_rdata; // @[icache.scala 322:34]
  wire  cache_stage2_io_cache_stage1_bits_sram_1_hit; // @[icache.scala 322:34]
  wire  cache_stage2_io_cache_stage1_bits_sram_1_tag_valid; // @[icache.scala 322:34]
  wire [63:0] cache_stage2_io_cache_stage1_bits_sram_1_rdata; // @[icache.scala 322:34]
  wire  cache_stage2_io_cache_bus_r_valid; // @[icache.scala 322:34]
  wire [63:0] cache_stage2_io_cache_bus_r_bits_raddr; // @[icache.scala 322:34]
  wire [63:0] cache_stage2_io_cache_bus_r_bits_rdata; // @[icache.scala 322:34]
  wire  cache_stage2_io_cache_bus_r_bits_rlast; // @[icache.scala 322:34]
  wire  cache_stage2_io_cache_bus_r_ready; // @[icache.scala 322:34]
  wire  cache_stage2_io_sram_w_valid; // @[icache.scala 322:34]
  wire [5:0] cache_stage2_io_sram_w_sram_addr; // @[icache.scala 322:34]
  wire [127:0] cache_stage2_io_sram_w_sram_data; // @[icache.scala 322:34]
  wire [127:0] cache_stage2_io_sram_w_sram_tag; // @[icache.scala 322:34]
  wire  cache_stage2_io_sram_w_chose_tag; // @[icache.scala 322:34]
  wire  cache_stage2_io_rdata_ready; // @[icache.scala 322:34]
  wire  cache_stage2_io_rdata_valid; // @[icache.scala 322:34]
  wire [63:0] cache_stage2_io_rdata_bits_data; // @[icache.scala 322:34]
  wire [63:0] cache_stage2_io_rdata_bits_pc; // @[icache.scala 322:34]
  reg [63:0] reg_sram0_valid; // @[icache.scala 324:50]
  reg [63:0] reg_sram1_valid; // @[icache.scala 325:50]
  wire  is_w_sram = cache_stage2_io_sram_w_valid & ~io_flush; // @[icache.scala 330:64]
  wire  is_sram0_write = is_w_sram & ~cache_stage2_io_sram_w_chose_tag; // @[icache.scala 336:46]
  wire  is_sram1_write = is_w_sram & cache_stage2_io_sram_w_chose_tag; // @[icache.scala 337:46]
  wire [63:0] chose_bit = 64'h1 << cache_stage2_io_sram_w_sram_addr; // @[icache.scala 339:39]
  wire [63:0] _reg_sram0_valid_T = reg_sram0_valid | chose_bit; // @[icache.scala 345:52]
  wire [63:0] _reg_sram1_valid_T = reg_sram1_valid | chose_bit; // @[icache.scala 353:52]
  reg  reg_temp_sram0_valid; // @[icache.scala 401:43]
  reg  reg_temp_sram1_valid; // @[icache.scala 402:43]
  reg [5:0] reg_temp_r_index; // @[icache.scala 403:43]
  wire [63:0] _reg_temp_sram0_valid_T = reg_sram0_valid >> cache_stage1_io_tag_valid_index; // @[icache.scala 404:48]
  wire [63:0] _reg_temp_sram1_valid_T = reg_sram1_valid >> cache_stage1_io_tag_valid_index; // @[icache.scala 405:48]
  wire  _w_r_pass0_val_T = reg_temp_r_index == cache_stage2_io_sram_w_sram_addr; // @[icache.scala 407:63]
  wire  w_r_pass0_val = is_sram0_write & reg_temp_r_index == cache_stage2_io_sram_w_sram_addr; // @[icache.scala 407:44]
  wire  w_r_pass1_val = is_sram1_write & _w_r_pass0_val_T; // @[icache.scala 408:44]
  reg  reg_sram_r_ready; // @[icache.scala 413:39]
  wire  _reg_sram_r_ready_T = is_w_sram ? 1'h0 : 1'h1; // @[icache.scala 417:40]
  wire  _GEN_4 = cache_stage1_io_sram_valid ? _reg_sram_r_ready_T : reg_sram_r_ready; // @[icache.scala 416:30 417:34 413:39]
  wire  _GEN_5 = io_flush | _GEN_4; // @[icache.scala 414:23 415:34]
  ICache_stage0 cache_stage0 ( // @[icache.scala 320:34]
    .clock(cache_stage0_clock),
    .reset(cache_stage0_reset),
    .io_flush(cache_stage0_io_flush),
    .io_cpu_addr_ready(cache_stage0_io_cpu_addr_ready),
    .io_cpu_addr_valid(cache_stage0_io_cpu_addr_valid),
    .io_cpu_addr_bits_addr(cache_stage0_io_cpu_addr_bits_addr),
    .io_addr_ready(cache_stage0_io_addr_ready),
    .io_addr_valid(cache_stage0_io_addr_valid),
    .io_addr_bits_addr(cache_stage0_io_addr_bits_addr)
  );
  ICache_stage1 cache_stage1 ( // @[icache.scala 321:34]
    .clock(cache_stage1_clock),
    .reset(cache_stage1_reset),
    .io_flush(cache_stage1_io_flush),
    .io_cpu_addr_ready(cache_stage1_io_cpu_addr_ready),
    .io_cpu_addr_valid(cache_stage1_io_cpu_addr_valid),
    .io_cpu_addr_bits_addr(cache_stage1_io_cpu_addr_bits_addr),
    .io_tag_valid_index(cache_stage1_io_tag_valid_index),
    .io_tag_valid_tag_valid_0(cache_stage1_io_tag_valid_tag_valid_0),
    .io_tag_valid_tag_valid_1(cache_stage1_io_tag_valid_tag_valid_1),
    .io_sram_valid(cache_stage1_io_sram_valid),
    .io_sram_sram_data_0(cache_stage1_io_sram_sram_data_0),
    .io_sram_sram_data_1(cache_stage1_io_sram_sram_data_1),
    .io_sram_sram_tag_0(cache_stage1_io_sram_sram_tag_0),
    .io_sram_sram_tag_1(cache_stage1_io_sram_sram_tag_1),
    .io_sram_ready(cache_stage1_io_sram_ready),
    .io_cache_stage1_ready(cache_stage1_io_cache_stage1_ready),
    .io_cache_stage1_valid(cache_stage1_io_cache_stage1_valid),
    .io_cache_stage1_bits_cpu_addr(cache_stage1_io_cache_stage1_bits_cpu_addr),
    .io_cache_stage1_bits_sram_0_hit(cache_stage1_io_cache_stage1_bits_sram_0_hit),
    .io_cache_stage1_bits_sram_0_tag_valid(cache_stage1_io_cache_stage1_bits_sram_0_tag_valid),
    .io_cache_stage1_bits_sram_0_rdata(cache_stage1_io_cache_stage1_bits_sram_0_rdata),
    .io_cache_stage1_bits_sram_1_hit(cache_stage1_io_cache_stage1_bits_sram_1_hit),
    .io_cache_stage1_bits_sram_1_tag_valid(cache_stage1_io_cache_stage1_bits_sram_1_tag_valid),
    .io_cache_stage1_bits_sram_1_rdata(cache_stage1_io_cache_stage1_bits_sram_1_rdata)
  );
  ICache_stage2 cache_stage2 ( // @[icache.scala 322:34]
    .clock(cache_stage2_clock),
    .reset(cache_stage2_reset),
    .io_flush(cache_stage2_io_flush),
    .io_cache_stage1_ready(cache_stage2_io_cache_stage1_ready),
    .io_cache_stage1_valid(cache_stage2_io_cache_stage1_valid),
    .io_cache_stage1_bits_cpu_addr(cache_stage2_io_cache_stage1_bits_cpu_addr),
    .io_cache_stage1_bits_sram_0_hit(cache_stage2_io_cache_stage1_bits_sram_0_hit),
    .io_cache_stage1_bits_sram_0_tag_valid(cache_stage2_io_cache_stage1_bits_sram_0_tag_valid),
    .io_cache_stage1_bits_sram_0_rdata(cache_stage2_io_cache_stage1_bits_sram_0_rdata),
    .io_cache_stage1_bits_sram_1_hit(cache_stage2_io_cache_stage1_bits_sram_1_hit),
    .io_cache_stage1_bits_sram_1_tag_valid(cache_stage2_io_cache_stage1_bits_sram_1_tag_valid),
    .io_cache_stage1_bits_sram_1_rdata(cache_stage2_io_cache_stage1_bits_sram_1_rdata),
    .io_cache_bus_r_valid(cache_stage2_io_cache_bus_r_valid),
    .io_cache_bus_r_bits_raddr(cache_stage2_io_cache_bus_r_bits_raddr),
    .io_cache_bus_r_bits_rdata(cache_stage2_io_cache_bus_r_bits_rdata),
    .io_cache_bus_r_bits_rlast(cache_stage2_io_cache_bus_r_bits_rlast),
    .io_cache_bus_r_ready(cache_stage2_io_cache_bus_r_ready),
    .io_sram_w_valid(cache_stage2_io_sram_w_valid),
    .io_sram_w_sram_addr(cache_stage2_io_sram_w_sram_addr),
    .io_sram_w_sram_data(cache_stage2_io_sram_w_sram_data),
    .io_sram_w_sram_tag(cache_stage2_io_sram_w_sram_tag),
    .io_sram_w_chose_tag(cache_stage2_io_sram_w_chose_tag),
    .io_rdata_ready(cache_stage2_io_rdata_ready),
    .io_rdata_valid(cache_stage2_io_rdata_valid),
    .io_rdata_bits_data(cache_stage2_io_rdata_bits_data),
    .io_rdata_bits_pc(cache_stage2_io_rdata_bits_pc)
  );
  assign io_cpu_raddr_ready = cache_stage0_io_cpu_addr_ready; // @[icache.scala 358:34]
  assign io_cpu_rdata_valid = cache_stage2_io_rdata_valid; // @[icache.scala 431:22]
  assign io_cpu_rdata_bits_data = cache_stage2_io_rdata_bits_data; // @[icache.scala 431:22]
  assign io_cpu_rdata_bits_pc = cache_stage2_io_rdata_bits_pc; // @[icache.scala 431:22]
  assign io_sram0_data_addr = is_w_sram ? cache_stage2_io_sram_w_sram_addr : cache_stage1_io_tag_valid_index; // @[icache.scala 371:28]
  assign io_sram0_data_wen = ~is_sram0_write; // @[icache.scala 372:44]
  assign io_sram0_data_wdata = cache_stage2_io_sram_w_sram_data; // @[icache.scala 376:41]
  assign io_sram0_tag_addr = is_w_sram ? cache_stage2_io_sram_w_sram_addr : cache_stage1_io_tag_valid_index; // @[icache.scala 371:28]
  assign io_sram0_tag_wen = ~is_sram0_write; // @[icache.scala 378:44]
  assign io_sram0_tag_wdata = cache_stage2_io_sram_w_sram_tag; // @[icache.scala 382:41]
  assign io_sram2_data_addr = is_w_sram ? cache_stage2_io_sram_w_sram_addr : cache_stage1_io_tag_valid_index; // @[icache.scala 371:28]
  assign io_sram2_data_wen = ~is_sram1_write; // @[icache.scala 384:44]
  assign io_sram2_data_wdata = cache_stage2_io_sram_w_sram_data; // @[icache.scala 388:41]
  assign io_sram2_tag_addr = is_w_sram ? cache_stage2_io_sram_w_sram_addr : cache_stage1_io_tag_valid_index; // @[icache.scala 371:28]
  assign io_sram2_tag_wen = ~is_sram1_write; // @[icache.scala 390:44]
  assign io_sram2_tag_wdata = cache_stage2_io_sram_w_sram_tag; // @[icache.scala 394:41]
  assign io_cache_bus_r_valid = cache_stage2_io_cache_bus_r_valid; // @[icache.scala 430:22]
  assign io_cache_bus_r_bits_raddr = cache_stage2_io_cache_bus_r_bits_raddr; // @[icache.scala 430:22]
  assign cache_stage0_clock = clock;
  assign cache_stage0_reset = reset;
  assign cache_stage0_io_flush = io_flush; // @[icache.scala 327:31]
  assign cache_stage0_io_cpu_addr_valid = io_cpu_raddr_valid; // @[icache.scala 358:34]
  assign cache_stage0_io_cpu_addr_bits_addr = io_cpu_raddr_bits_addr; // @[icache.scala 358:34]
  assign cache_stage0_io_addr_ready = cache_stage1_io_cpu_addr_ready; // @[icache.scala 359:30]
  assign cache_stage1_clock = clock;
  assign cache_stage1_reset = reset;
  assign cache_stage1_io_flush = io_flush; // @[icache.scala 328:31]
  assign cache_stage1_io_cpu_addr_valid = cache_stage0_io_addr_valid; // @[icache.scala 359:30]
  assign cache_stage1_io_cpu_addr_bits_addr = cache_stage0_io_addr_bits_addr; // @[icache.scala 359:30]
  assign cache_stage1_io_tag_valid_tag_valid_0 = w_r_pass0_val | reg_temp_sram0_valid; // @[icache.scala 409:54]
  assign cache_stage1_io_tag_valid_tag_valid_1 = w_r_pass1_val | reg_temp_sram1_valid; // @[icache.scala 410:54]
  assign cache_stage1_io_sram_sram_data_0 = w_r_pass0_val ? cache_stage2_io_sram_w_sram_data : io_sram0_data_rdata; // @[icache.scala 420:34]
  assign cache_stage1_io_sram_sram_data_1 = w_r_pass1_val ? cache_stage2_io_sram_w_sram_data : io_sram2_data_rdata; // @[icache.scala 422:34]
  assign cache_stage1_io_sram_sram_tag_0 = w_r_pass0_val ? cache_stage2_io_sram_w_sram_tag : {{74'd0},
    io_sram0_tag_rdata[53:0]}; // @[icache.scala 419:38]
  assign cache_stage1_io_sram_sram_tag_1 = w_r_pass1_val ? cache_stage2_io_sram_w_sram_tag : {{74'd0},
    io_sram2_tag_rdata[53:0]}; // @[icache.scala 421:38]
  assign cache_stage1_io_sram_ready = reg_sram_r_ready; // @[icache.scala 428:57]
  assign cache_stage1_io_cache_stage1_ready = cache_stage2_io_cache_stage1_ready; // @[icache.scala 429:38]
  assign cache_stage2_clock = clock;
  assign cache_stage2_reset = reset;
  assign cache_stage2_io_flush = io_flush; // @[icache.scala 329:31]
  assign cache_stage2_io_cache_stage1_valid = cache_stage1_io_cache_stage1_valid; // @[icache.scala 429:38]
  assign cache_stage2_io_cache_stage1_bits_cpu_addr = cache_stage1_io_cache_stage1_bits_cpu_addr; // @[icache.scala 429:38]
  assign cache_stage2_io_cache_stage1_bits_sram_0_hit = cache_stage1_io_cache_stage1_bits_sram_0_hit; // @[icache.scala 429:38]
  assign cache_stage2_io_cache_stage1_bits_sram_0_tag_valid = cache_stage1_io_cache_stage1_bits_sram_0_tag_valid; // @[icache.scala 429:38]
  assign cache_stage2_io_cache_stage1_bits_sram_0_rdata = cache_stage1_io_cache_stage1_bits_sram_0_rdata; // @[icache.scala 429:38]
  assign cache_stage2_io_cache_stage1_bits_sram_1_hit = cache_stage1_io_cache_stage1_bits_sram_1_hit; // @[icache.scala 429:38]
  assign cache_stage2_io_cache_stage1_bits_sram_1_tag_valid = cache_stage1_io_cache_stage1_bits_sram_1_tag_valid; // @[icache.scala 429:38]
  assign cache_stage2_io_cache_stage1_bits_sram_1_rdata = cache_stage1_io_cache_stage1_bits_sram_1_rdata; // @[icache.scala 429:38]
  assign cache_stage2_io_cache_bus_r_bits_rdata = io_cache_bus_r_bits_rdata; // @[icache.scala 430:22]
  assign cache_stage2_io_cache_bus_r_bits_rlast = io_cache_bus_r_bits_rlast; // @[icache.scala 430:22]
  assign cache_stage2_io_cache_bus_r_ready = io_cache_bus_r_ready; // @[icache.scala 430:22]
  assign cache_stage2_io_rdata_ready = io_cpu_rdata_ready; // @[icache.scala 431:22]

  always @(posedge clock) begin
    if (reset) begin // @[icache.scala 324:50]
      reg_sram0_valid <= 64'h0; // @[icache.scala 324:50]
    end else if (io_is_fence_i) begin // @[icache.scala 342:26]
      reg_sram0_valid <= 64'h0; // @[icache.scala 343:33]
    end else if (is_sram0_write) begin // @[icache.scala 344:35]
      reg_sram0_valid <= _reg_sram0_valid_T; // @[icache.scala 345:33]
    end
    if (reset) begin // @[icache.scala 325:50]
      reg_sram1_valid <= 64'h0; // @[icache.scala 325:50]
    end else if (io_is_fence_i) begin // @[icache.scala 350:26]
      reg_sram1_valid <= 64'h0; // @[icache.scala 351:33]
    end else if (is_sram1_write) begin // @[icache.scala 352:35]
      reg_sram1_valid <= _reg_sram1_valid_T; // @[icache.scala 353:33]
    end
    if (reset) begin // @[icache.scala 401:43]
      reg_temp_sram0_valid <= 1'h0; // @[icache.scala 401:43]
    end else begin
      reg_temp_sram0_valid <= _reg_temp_sram0_valid_T[0]; // @[icache.scala 404:30]
    end
    if (reset) begin // @[icache.scala 402:43]
      reg_temp_sram1_valid <= 1'h0; // @[icache.scala 402:43]
    end else begin
      reg_temp_sram1_valid <= _reg_temp_sram1_valid_T[0]; // @[icache.scala 405:30]
    end
    if (reset) begin // @[icache.scala 403:43]
      reg_temp_r_index <= 6'h0; // @[icache.scala 403:43]
    end else begin
      reg_temp_r_index <= cache_stage1_io_tag_valid_index; // @[icache.scala 406:34]
    end
    reg_sram_r_ready <= reset | _GEN_5; // @[icache.scala 413:{39,39}]
  end
endmodule