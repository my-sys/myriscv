module DCache(
  input          clock,
  input          reset,
  input          io_cpu_valid,
  input  [63:0]  io_cpu_bits_addr,
  output [63:0]  io_cpu_bits_rdata,
  input  [63:0]  io_cpu_bits_wdata,
  input  [7:0]   io_cpu_bits_wstrb,
  input          io_cpu_bits_is_w,
  output         io_cpu_ready,
  output [5:0]   io_sram0_data_addr,
  output         io_sram0_data_wen,
  output [127:0] io_sram0_data_wmask,
  output [127:0] io_sram0_data_wdata,
  input  [127:0] io_sram0_data_rdata,
  output [5:0]   io_sram0_tag_addr,
  output         io_sram0_tag_wen,
  output [127:0] io_sram0_tag_wdata,
  input  [127:0] io_sram0_tag_rdata,
  output [5:0]   io_sram2_data_addr,
  output         io_sram2_data_wen,
  output [127:0] io_sram2_data_wmask,
  output [127:0] io_sram2_data_wdata,
  input  [127:0] io_sram2_data_rdata,
  output [5:0]   io_sram2_tag_addr,
  output         io_sram2_tag_wen,
  output [127:0] io_sram2_tag_wdata,
  input  [127:0] io_sram2_tag_rdata,
  input          io_cache_bus_w_ready,
  output         io_cache_bus_w_valid,
  output [63:0]  io_cache_bus_w_bits_waddr,
  output [63:0]  io_cache_bus_w_bits_wdata,
  output         io_cache_bus_w_bits_wlast,
  output         io_cache_bus_b_ready,
  input          io_cache_bus_b_valid,
  output         io_cache_bus_r_valid,
  output [63:0]  io_cache_bus_r_bits_raddr,
  input  [63:0]  io_cache_bus_r_bits_rdata,
  input          io_cache_bus_r_bits_rlast,
  input          io_cache_bus_r_ready
);
  wire [53:0] Tag = io_cpu_bits_addr[63:10]; // @[dcache.scala 32:51]
  wire [5:0] Index = io_cpu_bits_addr[9:4]; // @[dcache.scala 33:51]
  wire [3:0] Offset = io_cpu_bits_addr[3:0]; // @[dcache.scala 34:51]
  reg [1:0] reg_cache_state; // @[dcache.scala 45:42]
  reg [63:0] reg_wdata; // @[dcache.scala 47:42]
  reg [7:0] reg_wstrb; // @[dcache.scala 48:42]
  reg  reg_is_w; // @[dcache.scala 49:42]
  reg [53:0] reg_tag; // @[dcache.scala 50:42]
  reg [5:0] reg_index; // @[dcache.scala 51:42]
  reg [3:0] reg_offset; // @[dcache.scala 52:42]
  reg  reg_ready; // @[dcache.scala 54:42]
  reg [63:0] reg_rdata; // @[dcache.scala 55:42]
  reg  reg_cache_write; // @[dcache.scala 57:38]
  reg [15:0] reg_cache_wstrb; // @[dcache.scala 58:38]
  reg [127:0] reg_cache_wdata; // @[dcache.scala 59:38]
  reg  reg_chosen_tag; // @[dcache.scala 60:42]
  wire [7:0] _cache_mask_T_17 = reg_cache_wstrb[0] ? 8'hff : 8'h0; // @[Bitwise.scala 77:12]
  wire [7:0] _cache_mask_T_19 = reg_cache_wstrb[1] ? 8'hff : 8'h0; // @[Bitwise.scala 77:12]
  wire [7:0] _cache_mask_T_21 = reg_cache_wstrb[2] ? 8'hff : 8'h0; // @[Bitwise.scala 77:12]
  wire [7:0] _cache_mask_T_23 = reg_cache_wstrb[3] ? 8'hff : 8'h0; // @[Bitwise.scala 77:12]
  wire [7:0] _cache_mask_T_25 = reg_cache_wstrb[4] ? 8'hff : 8'h0; // @[Bitwise.scala 77:12]
  wire [7:0] _cache_mask_T_27 = reg_cache_wstrb[5] ? 8'hff : 8'h0; // @[Bitwise.scala 77:12]
  wire [7:0] _cache_mask_T_29 = reg_cache_wstrb[6] ? 8'hff : 8'h0; // @[Bitwise.scala 77:12]
  wire [7:0] _cache_mask_T_31 = reg_cache_wstrb[7] ? 8'hff : 8'h0; // @[Bitwise.scala 77:12]
  wire [7:0] _cache_mask_T_33 = reg_cache_wstrb[8] ? 8'hff : 8'h0; // @[Bitwise.scala 77:12]
  wire [7:0] _cache_mask_T_35 = reg_cache_wstrb[9] ? 8'hff : 8'h0; // @[Bitwise.scala 77:12]
  wire [7:0] _cache_mask_T_37 = reg_cache_wstrb[10] ? 8'hff : 8'h0; // @[Bitwise.scala 77:12]
  wire [7:0] _cache_mask_T_39 = reg_cache_wstrb[11] ? 8'hff : 8'h0; // @[Bitwise.scala 77:12]
  wire [7:0] _cache_mask_T_41 = reg_cache_wstrb[12] ? 8'hff : 8'h0; // @[Bitwise.scala 77:12]
  wire [7:0] _cache_mask_T_43 = reg_cache_wstrb[13] ? 8'hff : 8'h0; // @[Bitwise.scala 77:12]
  wire [7:0] _cache_mask_T_45 = reg_cache_wstrb[14] ? 8'hff : 8'h0; // @[Bitwise.scala 77:12]
  wire [7:0] _cache_mask_T_47 = reg_cache_wstrb[15] ? 8'hff : 8'h0; // @[Bitwise.scala 77:12]
  wire [63:0] cache_mask_lo = {_cache_mask_T_31,_cache_mask_T_29,_cache_mask_T_27,_cache_mask_T_25,_cache_mask_T_23,
    _cache_mask_T_21,_cache_mask_T_19,_cache_mask_T_17}; // @[Cat.scala 33:92]
  wire [127:0] cache_mask = {_cache_mask_T_47,_cache_mask_T_45,_cache_mask_T_43,_cache_mask_T_41,_cache_mask_T_39,
    _cache_mask_T_37,_cache_mask_T_35,_cache_mask_T_33,cache_mask_lo}; // @[Cat.scala 33:92]
  wire [127:0] _cache_wdata_T_1 = {reg_wdata,64'h0}; // @[Cat.scala 33:92]
  wire [127:0] _cache_wdata_T_2 = {64'h0,reg_wdata}; // @[Cat.scala 33:92]
  wire [127:0] cache_wdata = reg_offset[3] ? _cache_wdata_T_1 : _cache_wdata_T_2; // @[dcache.scala 63:38]
  wire [15:0] _cache_wstrb_T_1 = {reg_wstrb,8'h0}; // @[Cat.scala 33:92]
  wire [15:0] _cache_wstrb_T_2 = {8'h0,reg_wstrb}; // @[Cat.scala 33:92]
  wire  is_sram0_write = reg_cache_write & ~reg_chosen_tag; // @[dcache.scala 68:59]
  wire [127:0] _io_sram0_data_wmask_T = ~cache_mask; // @[dcache.scala 72:44]
  reg [63:0] reg_sram0_valid; // @[dcache.scala 83:42]
  reg [63:0] reg_sram0_dirty; // @[dcache.scala 84:42]
  wire [63:0] chose_bit = 64'h1 << reg_index; // @[dcache.scala 85:29]
  wire [63:0] neg_chose_bit = ~chose_bit; // @[dcache.scala 86:29]
  wire [63:0] _reg_sram0_valid_T = reg_sram0_valid | chose_bit; // @[dcache.scala 91:52]
  wire [63:0] _reg_sram0_dirty_T = reg_sram0_dirty | chose_bit; // @[dcache.scala 92:65]
  wire [63:0] _reg_sram0_dirty_T_1 = reg_sram0_dirty & neg_chose_bit; // @[dcache.scala 92:94]
  wire  is_sram2_write = reg_cache_write & reg_chosen_tag; // @[dcache.scala 99:59]
  reg [63:0] reg_sram2_valid; // @[dcache.scala 113:42]
  reg [63:0] reg_sram2_dirty; // @[dcache.scala 114:42]
  wire [63:0] _reg_sram2_valid_T = reg_sram2_valid | chose_bit; // @[dcache.scala 119:60]
  wire [63:0] _reg_sram2_dirty_T = reg_sram2_dirty | chose_bit; // @[dcache.scala 120:73]
  wire [63:0] _reg_sram2_dirty_T_1 = reg_sram2_dirty & neg_chose_bit; // @[dcache.scala 120:102]
  reg [63:0] reg_r_raddr; // @[dcache.scala 128:42]
  reg  reg_r_valid; // @[dcache.scala 129:42]
  reg [63:0] reg_w_waddr; // @[dcache.scala 131:42]
  reg [63:0] reg_w_wdata; // @[dcache.scala 132:42]
  reg  reg_w_wlast; // @[dcache.scala 133:42]
  reg  reg_w_valid; // @[dcache.scala 134:42]
  reg  reg_b_ready; // @[dcache.scala 136:42]
  wire [53:0] tag_0 = io_sram0_tag_rdata[53:0]; // @[dcache.scala 139:58]
  wire [53:0] tag_2 = io_sram2_tag_rdata[53:0]; // @[dcache.scala 140:58]
  wire  hit_0 = reg_tag == tag_0; // @[dcache.scala 141:52]
  wire  hit_2 = reg_tag == tag_2; // @[dcache.scala 142:52]
  wire [63:0] _tag_valid_0_T = reg_sram0_valid >> reg_index; // @[dcache.scala 143:50]
  wire  tag_valid_0 = _tag_valid_0_T[0]; // @[dcache.scala 143:50]
  wire [63:0] _tag_valid_2_T = reg_sram2_valid >> reg_index; // @[dcache.scala 144:50]
  wire  tag_valid_2 = _tag_valid_2_T[0]; // @[dcache.scala 144:50]
  wire [63:0] _tag_dirty_0_T = reg_sram0_dirty >> reg_index; // @[dcache.scala 145:50]
  wire  tag_dirty_0 = _tag_dirty_0_T[0]; // @[dcache.scala 145:50]
  wire [63:0] _tag_dirty_2_T = reg_sram2_dirty >> reg_index; // @[dcache.scala 146:50]
  wire  tag_dirty_2 = _tag_dirty_2_T[0]; // @[dcache.scala 146:50]
  wire [63:0] rdata0 = reg_offset[3] ? io_sram0_data_rdata[127:64] : io_sram0_data_rdata[63:0]; // @[dcache.scala 147:46]
  wire [63:0] rdata2 = reg_offset[3] ? io_sram2_data_rdata[127:64] : io_sram2_data_rdata[63:0]; // @[dcache.scala 148:46]
  reg [63:0] reg_lru_2; // @[dcache.scala 155:58]
  wire [63:0] _LRU_2_T = reg_lru_2 >> reg_index; // @[dcache.scala 157:36]
  wire  LRU_2 = _LRU_2_T[0]; // @[dcache.scala 157:36]
  reg  reg_start_operation; // @[dcache.scala 158:50]
  wire [63:0] _reg_lru_2_T = reg_lru_2 | chose_bit; // @[dcache.scala 162:48]
  wire [63:0] _reg_lru_2_T_1 = reg_lru_2 & neg_chose_bit; // @[dcache.scala 165:48]
  wire  _T = tag_valid_0 & tag_valid_2; // @[dcache.scala 167:42]
  wire [63:0] _reg_lru_2_T_4 = LRU_2 ? _reg_lru_2_T_1 : _reg_lru_2_T; // @[dcache.scala 169:49]
  wire [63:0] _reg_lru_2_T_7 = tag_valid_0 ? _reg_lru_2_T_1 : _reg_lru_2_T; // @[dcache.scala 172:49]
  wire [63:0] _GEN_9 = tag_valid_0 & tag_valid_2 ? _reg_lru_2_T_4 : _reg_lru_2_T_7; // @[dcache.scala 167:56 169:43 172:43]
  reg [1:0] reg_cnt; // @[dcache.scala 177:42]
  reg  reg_rbus_finish; // @[dcache.scala 178:38]
  reg  reg_wbus_finish; // @[dcache.scala 179:38]
  wire  _GEN_23 = io_cpu_valid | reg_start_operation; // @[dcache.scala 184:43 158:50 194:53]
  wire  _reg_chosen_tag_T = hit_0 ? 1'h0 : 1'h1; // @[dcache.scala 214:55]
  wire [63:0] _reg_rdata_T = hit_0 ? rdata0 : rdata2; // @[dcache.scala 228:87]
  wire  _GEN_24 = reg_is_w | reg_cache_write; // @[dcache.scala 216:55 218:73 57:38]
  wire [127:0] _GEN_25 = reg_is_w ? cache_wdata : reg_cache_wdata; // @[dcache.scala 216:55 222:73 59:38]
  wire [63:0] _GEN_28 = reg_is_w ? reg_rdata : _reg_rdata_T; // @[dcache.scala 216:55 55:42 228:81]
  wire [59:0] _reg_r_raddr_T = {reg_tag,reg_index}; // @[Cat.scala 33:92]
  wire [63:0] _GEN_162 = {_reg_r_raddr_T, 4'h0}; // @[dcache.scala 238:99]
  wire [66:0] _reg_r_raddr_T_1 = {{3'd0}, _GEN_162}; // @[dcache.scala 238:99]
  wire  _GEN_29 = hit_0 & tag_valid_0 | hit_2 & tag_valid_2 ? _GEN_24 : reg_cache_write; // @[dcache.scala 215:83 57:38]
  wire [127:0] _GEN_30 = hit_0 & tag_valid_0 | hit_2 & tag_valid_2 ? _GEN_25 : reg_cache_wdata; // @[dcache.scala 215:83 59:38]
  wire [1:0] _GEN_31 = hit_0 & tag_valid_0 | hit_2 & tag_valid_2 ? 2'h3 : 2'h2; // @[dcache.scala 215:83 241:73]
  wire  _GEN_32 = hit_0 & tag_valid_0 | hit_2 & tag_valid_2 | reg_ready; // @[dcache.scala 215:83 54:42]
  wire [63:0] _GEN_33 = hit_0 & tag_valid_0 | hit_2 & tag_valid_2 ? _GEN_28 : reg_rdata; // @[dcache.scala 215:83 55:42]
  wire [66:0] _GEN_34 = hit_0 & tag_valid_0 | hit_2 & tag_valid_2 ? {{3'd0}, reg_r_raddr} : _reg_r_raddr_T_1; // @[dcache.scala 128:42 215:83 238:73]
  wire  _GEN_35 = hit_0 & tag_valid_0 | hit_2 & tag_valid_2 ? reg_r_valid : 1'h1; // @[dcache.scala 129:42 215:83 239:73]
  wire  _GEN_36 = (hit_0 & tag_valid_0 | hit_2 & tag_valid_2) & reg_rbus_finish; // @[dcache.scala 178:38 215:83 240:73]
  wire [53:0] _reg_w_waddr_T = LRU_2 ? tag_2 : tag_0; // @[dcache.scala 256:75]
  wire [59:0] _reg_w_waddr_T_1 = {_reg_w_waddr_T,reg_index}; // @[Cat.scala 33:92]
  wire [63:0] _GEN_164 = {_reg_w_waddr_T_1, 4'h0}; // @[dcache.scala 256:105]
  wire [66:0] _reg_w_waddr_T_2 = {{3'd0}, _GEN_164}; // @[dcache.scala 256:105]
  wire [63:0] _reg_w_wdata_T_2 = LRU_2 ? io_sram2_data_rdata[63:0] : io_sram0_data_rdata[63:0]; // @[dcache.scala 257:71]
  wire  _GEN_37 = tag_dirty_0 & ~LRU_2 | tag_dirty_2 & LRU_2 | reg_w_valid; // @[dcache.scala 134:42 253:92 254:65]
  wire  _GEN_38 = tag_dirty_0 & ~LRU_2 | tag_dirty_2 & LRU_2 | reg_b_ready; // @[dcache.scala 136:42 253:92 255:65]
  wire [66:0] _GEN_39 = tag_dirty_0 & ~LRU_2 | tag_dirty_2 & LRU_2 ? _reg_w_waddr_T_2 : {{3'd0}, reg_w_waddr}; // @[dcache.scala 131:42 253:92 256:65]
  wire [63:0] _GEN_40 = tag_dirty_0 & ~LRU_2 | tag_dirty_2 & LRU_2 ? _reg_w_wdata_T_2 : reg_w_wdata; // @[dcache.scala 132:42 253:92 257:65]
  wire  _GEN_41 = tag_dirty_0 & ~LRU_2 | tag_dirty_2 & LRU_2 ? 1'h0 : reg_w_wlast; // @[dcache.scala 133:42 253:92 258:65]
  wire  _GEN_42 = tag_dirty_0 & ~LRU_2 | tag_dirty_2 & LRU_2 ? 1'h0 : reg_wbus_finish; // @[dcache.scala 179:38 253:92 259:65]
  wire [1:0] _GEN_43 = tag_dirty_0 & ~LRU_2 | tag_dirty_2 & LRU_2 ? 2'h1 : reg_cnt; // @[dcache.scala 177:42 253:92 260:73]
  wire  _GEN_44 = _T ? LRU_2 : tag_valid_0; // @[dcache.scala 244:64 245:65 263:65]
  wire [66:0] _GEN_45 = _T ? _reg_r_raddr_T_1 : _reg_r_raddr_T_1; // @[dcache.scala 244:64 247:65 265:65]
  wire  _GEN_49 = _T ? _GEN_37 : reg_w_valid; // @[dcache.scala 134:42 244:64]
  wire  _GEN_50 = _T ? _GEN_38 : reg_b_ready; // @[dcache.scala 136:42 244:64]
  wire [66:0] _GEN_51 = _T ? _GEN_39 : {{3'd0}, reg_w_waddr}; // @[dcache.scala 131:42 244:64]
  wire [63:0] _GEN_52 = _T ? _GEN_40 : reg_w_wdata; // @[dcache.scala 132:42 244:64]
  wire  _GEN_53 = _T ? _GEN_41 : reg_w_wlast; // @[dcache.scala 133:42 244:64]
  wire  _GEN_54 = _T ? _GEN_42 : reg_wbus_finish; // @[dcache.scala 179:38 244:64]
  wire [1:0] _GEN_55 = _T ? _GEN_43 : reg_cnt; // @[dcache.scala 177:42 244:64]
  wire [66:0] _GEN_62 = hit_0 | hit_2 ? _GEN_34 : _GEN_45; // @[dcache.scala 211:44]
  wire  _GEN_64 = (hit_0 | hit_2) & _GEN_36; // @[dcache.scala 211:44]
  wire [66:0] _GEN_67 = hit_0 | hit_2 ? {{3'd0}, reg_w_waddr} : _GEN_51; // @[dcache.scala 131:42 211:44]
  wire  _GEN_70 = hit_0 | hit_2 ? reg_wbus_finish : _GEN_54; // @[dcache.scala 179:38 211:44]
  wire  _T_13 = io_cache_bus_r_valid & io_cache_bus_r_ready; // @[simplebus.scala 28:40]
  wire [127:0] _reg_cache_wdata_T = cache_wdata & cache_mask; // @[dcache.scala 280:85]
  wire [127:0] _reg_cache_wdata_T_2 = {io_cache_bus_r_bits_rdata,reg_cache_wdata[63:0]}; // @[Cat.scala 33:92]
  wire [127:0] _reg_cache_wdata_T_4 = _reg_cache_wdata_T_2 & _io_sram0_data_wmask_T; // @[dcache.scala 280:155]
  wire [127:0] _reg_cache_wdata_T_5 = _reg_cache_wdata_T | _reg_cache_wdata_T_4; // @[dcache.scala 280:99]
  wire [63:0] _reg_rdata_T_3 = reg_offset[3] ? io_cache_bus_r_bits_rdata : reg_cache_wdata[63:0]; // @[dcache.scala 283:87]
  wire [127:0] _GEN_72 = reg_is_w ? _reg_cache_wdata_T_5 : _reg_cache_wdata_T_2; // @[dcache.scala 279:55 280:69 284:73]
  wire [63:0] _GEN_73 = reg_is_w ? reg_rdata : _reg_rdata_T_3; // @[dcache.scala 279:55 55:42 283:81]
  wire  _GEN_74 = io_cache_bus_r_bits_rlast ? 1'h0 : reg_r_valid; // @[dcache.scala 129:42 274:64 275:57]
  wire [15:0] _GEN_75 = io_cache_bus_r_bits_rlast ? 16'hffff : reg_cache_wstrb; // @[dcache.scala 274:64 277:57 58:38]
  wire  _GEN_76 = io_cache_bus_r_bits_rlast | reg_rbus_finish; // @[dcache.scala 178:38 274:64 278:57]
  wire [127:0] _GEN_77 = io_cache_bus_r_bits_rlast ? _GEN_72 : {{64'd0}, io_cache_bus_r_bits_rdata}; // @[dcache.scala 274:64 287:73]
  wire [63:0] _GEN_78 = io_cache_bus_r_bits_rlast ? _GEN_73 : reg_rdata; // @[dcache.scala 274:64 55:42]
  wire  _GEN_79 = _T_13 ? _GEN_74 : reg_r_valid; // @[dcache.scala 129:42 273:50]
  wire [15:0] _GEN_80 = _T_13 ? _GEN_75 : reg_cache_wstrb; // @[dcache.scala 273:50 58:38]
  wire  _GEN_81 = _T_13 ? _GEN_76 : reg_rbus_finish; // @[dcache.scala 178:38 273:50]
  wire [127:0] _GEN_82 = _T_13 ? _GEN_77 : reg_cache_wdata; // @[dcache.scala 273:50 59:38]
  wire [63:0] _GEN_83 = _T_13 ? _GEN_78 : reg_rdata; // @[dcache.scala 273:50 55:42]
  wire  _T_14 = io_cache_bus_w_ready & io_cache_bus_w_valid; // @[Decoupled.scala 52:35]
  wire [1:0] _reg_cnt_T_1 = reg_cnt - 2'h1; // @[dcache.scala 296:76]
  wire [63:0] _reg_w_wdata_T_6 = reg_chosen_tag ? io_sram2_data_rdata[127:64] : io_sram0_data_rdata[127:64]; // @[dcache.scala 298:71]
  wire [1:0] _GEN_84 = reg_cnt == 2'h1 ? _reg_cnt_T_1 : _reg_cnt_T_1; // @[dcache.scala 295:60 296:65 300:49]
  wire  _GEN_85 = reg_cnt == 2'h1 | reg_w_wlast; // @[dcache.scala 133:42 295:60 297:57]
  wire [63:0] _GEN_86 = reg_cnt == 2'h1 ? _reg_w_wdata_T_6 : _reg_w_wdata_T_6; // @[dcache.scala 295:60 298:65 301:57]
  wire  _GEN_87 = reg_cnt == 2'h0 ? 1'h0 : _GEN_85; // @[dcache.scala 292:54 293:57]
  wire  _GEN_88 = reg_cnt == 2'h0 ? 1'h0 : reg_w_valid; // @[dcache.scala 134:42 292:54 294:57]
  wire [1:0] _GEN_89 = reg_cnt == 2'h0 ? reg_cnt : _GEN_84; // @[dcache.scala 177:42 292:54]
  wire [63:0] _GEN_90 = reg_cnt == 2'h0 ? reg_w_wdata : _GEN_86; // @[dcache.scala 132:42 292:54]
  wire  _GEN_91 = _T_14 ? _GEN_87 : reg_w_wlast; // @[dcache.scala 133:42 291:50]
  wire  _GEN_92 = _T_14 ? _GEN_88 : reg_w_valid; // @[dcache.scala 134:42 291:50]
  wire [1:0] _GEN_93 = _T_14 ? _GEN_89 : reg_cnt; // @[dcache.scala 177:42 291:50]
  wire [63:0] _GEN_94 = _T_14 ? _GEN_90 : reg_w_wdata; // @[dcache.scala 132:42 291:50]
  wire  _T_17 = io_cache_bus_b_ready & io_cache_bus_b_valid; // @[Decoupled.scala 52:35]
  wire  _GEN_95 = _T_17 | reg_wbus_finish; // @[dcache.scala 179:38 305:50 306:49]
  wire  _GEN_96 = _T_17 ? 1'h0 : reg_b_ready; // @[dcache.scala 136:42 305:50 307:49]
  wire  _GEN_97 = _GEN_76 & _GEN_95 | reg_cache_write; // @[dcache.scala 310:119 311:57 57:38]
  wire [1:0] _GEN_98 = _GEN_76 & _GEN_95 ? 2'h3 : reg_cache_state; // @[dcache.scala 310:119 312:57 45:42]
  wire  _GEN_99 = _GEN_76 & _GEN_95 | reg_ready; // @[dcache.scala 310:119 313:65 54:42]
  wire  _GEN_100 = 2'h3 == reg_cache_state ? 1'h0 : reg_cache_write; // @[dcache.scala 182:32 317:49 57:38]
  wire  _GEN_101 = 2'h3 == reg_cache_state ? 1'h0 : reg_ready; // @[dcache.scala 182:32 318:57 54:42]
  wire  _GEN_102 = 2'h3 == reg_cache_state ? 1'h0 : reg_w_valid; // @[dcache.scala 182:32 134:42 320:49]
  wire  _GEN_103 = 2'h3 == reg_cache_state ? 1'h0 : reg_b_ready; // @[dcache.scala 182:32 321:41 136:42]
  wire  _GEN_104 = 2'h3 == reg_cache_state ? 1'h0 : reg_r_valid; // @[dcache.scala 182:32 322:41 129:42]
  wire [1:0] _GEN_105 = 2'h3 == reg_cache_state ? 2'h0 : reg_cache_state; // @[dcache.scala 182:32 323:49 45:42]
  wire  _GEN_108 = 2'h2 == reg_cache_state ? _GEN_81 : reg_rbus_finish; // @[dcache.scala 182:32 178:38]
  wire  _GEN_115 = 2'h2 == reg_cache_state ? _GEN_95 : reg_wbus_finish; // @[dcache.scala 182:32 179:38]
  wire [66:0] _GEN_128 = 2'h1 == reg_cache_state ? _GEN_62 : {{3'd0}, reg_r_raddr}; // @[dcache.scala 182:32 128:42]
  wire  _GEN_130 = 2'h1 == reg_cache_state ? _GEN_64 : _GEN_108; // @[dcache.scala 182:32]
  wire [66:0] _GEN_133 = 2'h1 == reg_cache_state ? _GEN_67 : {{3'd0}, reg_w_waddr}; // @[dcache.scala 182:32 131:42]
  wire  _GEN_136 = 2'h1 == reg_cache_state ? _GEN_70 : _GEN_115; // @[dcache.scala 182:32]
  wire [66:0] _GEN_155 = 2'h0 == reg_cache_state ? {{3'd0}, reg_r_raddr} : _GEN_128; // @[dcache.scala 182:32 128:42]
  wire  _GEN_156 = 2'h0 == reg_cache_state ? reg_rbus_finish : _GEN_130; // @[dcache.scala 182:32 178:38]
  wire [66:0] _GEN_157 = 2'h0 == reg_cache_state ? {{3'd0}, reg_w_waddr} : _GEN_133; // @[dcache.scala 182:32 131:42]
  wire  _GEN_160 = 2'h0 == reg_cache_state ? reg_wbus_finish : _GEN_136; // @[dcache.scala 182:32 179:38]
  wire [66:0] _GEN_166 = reset ? 67'h0 : _GEN_155; // @[dcache.scala 128:{42,42}]
  wire [66:0] _GEN_167 = reset ? 67'h0 : _GEN_157; // @[dcache.scala 131:{42,42}]
  assign io_cpu_bits_rdata = reg_rdata; // @[dcache.scala 326:49]
  assign io_cpu_ready = reg_ready; // @[dcache.scala 327:49]
  assign io_sram0_data_addr = reg_cache_state != 2'h0 ? reg_index : Index; // @[dcache.scala 69:54]
  assign io_sram0_data_wen = ~is_sram0_write; // @[dcache.scala 70:44]
  assign io_sram0_data_wmask = ~cache_mask; // @[dcache.scala 72:44]
  assign io_sram0_data_wdata = reg_cache_wdata; // @[dcache.scala 74:41]
  assign io_sram0_tag_addr = reg_cache_state != 2'h0 ? reg_index : Index; // @[dcache.scala 69:54]
  assign io_sram0_tag_wen = ~is_sram0_write; // @[dcache.scala 76:44]
  assign io_sram0_tag_wdata = {{74'd0}, reg_tag}; // @[dcache.scala 80:41]
  assign io_sram2_data_addr = reg_cache_state != 2'h0 ? reg_index : Index; // @[dcache.scala 69:54]
  assign io_sram2_data_wen = ~is_sram2_write; // @[dcache.scala 101:44]
  assign io_sram2_data_wmask = ~cache_mask; // @[dcache.scala 103:44]
  assign io_sram2_data_wdata = reg_cache_wdata; // @[dcache.scala 105:41]
  assign io_sram2_tag_addr = reg_cache_state != 2'h0 ? reg_index : Index; // @[dcache.scala 69:54]
  assign io_sram2_tag_wen = ~is_sram2_write; // @[dcache.scala 107:44]
  assign io_sram2_tag_wdata = {{74'd0}, reg_tag}; // @[dcache.scala 111:41]
  assign io_cache_bus_w_valid = reg_w_valid; // @[dcache.scala 329:41]
  assign io_cache_bus_w_bits_waddr = reg_w_waddr; // @[dcache.scala 330:41]
  assign io_cache_bus_w_bits_wdata = reg_w_wdata; // @[dcache.scala 331:41]
  assign io_cache_bus_w_bits_wlast = reg_w_wlast; // @[dcache.scala 332:41]
  assign io_cache_bus_b_ready = reg_b_ready; // @[dcache.scala 334:41]
  assign io_cache_bus_r_valid = reg_r_valid; // @[dcache.scala 337:41]
  assign io_cache_bus_r_bits_raddr = reg_r_raddr; // @[dcache.scala 336:41]

  always @(posedge clock) begin
    if (reset) begin // @[dcache.scala 45:42]
      reg_cache_state <= 2'h0; // @[dcache.scala 45:42]
    end else if (2'h0 == reg_cache_state) begin // @[dcache.scala 182:32]
      if (io_cpu_valid) begin // @[dcache.scala 184:43]
        reg_cache_state <= 2'h1; // @[dcache.scala 193:49]
      end else begin
        reg_cache_state <= 2'h0; // @[dcache.scala 197:49]
      end
    end else if (2'h1 == reg_cache_state) begin // @[dcache.scala 182:32]
      if (hit_0 | hit_2) begin // @[dcache.scala 211:44]
        reg_cache_state <= _GEN_31;
      end else begin
        reg_cache_state <= 2'h2;
      end
    end else if (2'h2 == reg_cache_state) begin // @[dcache.scala 182:32]
      reg_cache_state <= _GEN_98;
    end else begin
      reg_cache_state <= _GEN_105;
    end
    if (reset) begin // @[dcache.scala 47:42]
      reg_wdata <= 64'h0; // @[dcache.scala 47:42]
    end else if (2'h0 == reg_cache_state) begin // @[dcache.scala 182:32]
      if (io_cpu_valid) begin // @[dcache.scala 184:43]
        reg_wdata <= io_cpu_bits_wdata; // @[dcache.scala 186:57]
      end
    end
    if (reset) begin // @[dcache.scala 48:42]
      reg_wstrb <= 8'h0; // @[dcache.scala 48:42]
    end else if (2'h0 == reg_cache_state) begin // @[dcache.scala 182:32]
      if (io_cpu_valid) begin // @[dcache.scala 184:43]
        reg_wstrb <= io_cpu_bits_wstrb; // @[dcache.scala 187:57]
      end
    end
    if (reset) begin // @[dcache.scala 49:42]
      reg_is_w <= 1'h0; // @[dcache.scala 49:42]
    end else if (2'h0 == reg_cache_state) begin // @[dcache.scala 182:32]
      if (io_cpu_valid) begin // @[dcache.scala 184:43]
        reg_is_w <= io_cpu_bits_is_w; // @[dcache.scala 188:57]
      end
    end
    if (reset) begin // @[dcache.scala 50:42]
      reg_tag <= 54'h0; // @[dcache.scala 50:42]
    end else if (2'h0 == reg_cache_state) begin // @[dcache.scala 182:32]
      if (io_cpu_valid) begin // @[dcache.scala 184:43]
        reg_tag <= Tag; // @[dcache.scala 189:57]
      end
    end
    if (reset) begin // @[dcache.scala 51:42]
      reg_index <= 6'h0; // @[dcache.scala 51:42]
    end else if (2'h0 == reg_cache_state) begin // @[dcache.scala 182:32]
      if (io_cpu_valid) begin // @[dcache.scala 184:43]
        reg_index <= Index; // @[dcache.scala 190:57]
      end
    end
    if (reset) begin // @[dcache.scala 52:42]
      reg_offset <= 4'h0; // @[dcache.scala 52:42]
    end else if (2'h0 == reg_cache_state) begin // @[dcache.scala 182:32]
      if (io_cpu_valid) begin // @[dcache.scala 184:43]
        reg_offset <= Offset; // @[dcache.scala 191:57]
      end
    end
    if (reset) begin // @[dcache.scala 54:42]
      reg_ready <= 1'h0; // @[dcache.scala 54:42]
    end else if (2'h0 == reg_cache_state) begin // @[dcache.scala 182:32]
      reg_ready <= 1'h0; // @[dcache.scala 199:41]
    end else if (2'h1 == reg_cache_state) begin // @[dcache.scala 182:32]
      if (hit_0 | hit_2) begin // @[dcache.scala 211:44]
        reg_ready <= _GEN_32;
      end
    end else if (2'h2 == reg_cache_state) begin // @[dcache.scala 182:32]
      reg_ready <= _GEN_99;
    end else begin
      reg_ready <= _GEN_101;
    end
    if (reset) begin // @[dcache.scala 55:42]
      reg_rdata <= 64'h0; // @[dcache.scala 55:42]
    end else if (!(2'h0 == reg_cache_state)) begin // @[dcache.scala 182:32]
      if (2'h1 == reg_cache_state) begin // @[dcache.scala 182:32]
        if (hit_0 | hit_2) begin // @[dcache.scala 211:44]
          reg_rdata <= _GEN_33;
        end
      end else if (2'h2 == reg_cache_state) begin // @[dcache.scala 182:32]
        reg_rdata <= _GEN_83;
      end
    end
    if (reset) begin // @[dcache.scala 57:38]
      reg_cache_write <= 1'h0; // @[dcache.scala 57:38]
    end else if (2'h0 == reg_cache_state) begin // @[dcache.scala 182:32]
      reg_cache_write <= 1'h0; // @[dcache.scala 201:41]
    end else if (2'h1 == reg_cache_state) begin // @[dcache.scala 182:32]
      if (hit_0 | hit_2) begin // @[dcache.scala 211:44]
        reg_cache_write <= _GEN_29;
      end
    end else if (2'h2 == reg_cache_state) begin // @[dcache.scala 182:32]
      reg_cache_write <= _GEN_97;
    end else begin
      reg_cache_write <= _GEN_100;
    end
    if (reset) begin // @[dcache.scala 58:38]
      reg_cache_wstrb <= 16'h0; // @[dcache.scala 58:38]
    end else if (!(2'h0 == reg_cache_state)) begin // @[dcache.scala 182:32]
      if (2'h1 == reg_cache_state) begin // @[dcache.scala 182:32]
        if (reg_offset[3]) begin // @[dcache.scala 64:38]
          reg_cache_wstrb <= _cache_wstrb_T_1;
        end else begin
          reg_cache_wstrb <= _cache_wstrb_T_2;
        end
      end else if (2'h2 == reg_cache_state) begin // @[dcache.scala 182:32]
        reg_cache_wstrb <= _GEN_80;
      end
    end
    if (reset) begin // @[dcache.scala 59:38]
      reg_cache_wdata <= 128'h0; // @[dcache.scala 59:38]
    end else if (!(2'h0 == reg_cache_state)) begin // @[dcache.scala 182:32]
      if (2'h1 == reg_cache_state) begin // @[dcache.scala 182:32]
        if (hit_0 | hit_2) begin // @[dcache.scala 211:44]
          reg_cache_wdata <= _GEN_30;
        end
      end else if (2'h2 == reg_cache_state) begin // @[dcache.scala 182:32]
        reg_cache_wdata <= _GEN_82;
      end
    end
    if (reset) begin // @[dcache.scala 60:42]
      reg_chosen_tag <= 1'h0; // @[dcache.scala 60:42]
    end else if (!(2'h0 == reg_cache_state)) begin // @[dcache.scala 182:32]
      if (2'h1 == reg_cache_state) begin // @[dcache.scala 182:32]
        if (hit_0 | hit_2) begin // @[dcache.scala 211:44]
          reg_chosen_tag <= _reg_chosen_tag_T; // @[dcache.scala 214:49]
        end else begin
          reg_chosen_tag <= _GEN_44;
        end
      end
    end
    if (reset) begin // @[dcache.scala 83:42]
      reg_sram0_valid <= 64'h0; // @[dcache.scala 83:42]
    end else if (is_sram0_write) begin // @[dcache.scala 90:35]
      reg_sram0_valid <= _reg_sram0_valid_T; // @[dcache.scala 91:33]
    end
    if (reset) begin // @[dcache.scala 84:42]
      reg_sram0_dirty <= 64'h0; // @[dcache.scala 84:42]
    end else if (is_sram0_write) begin // @[dcache.scala 90:35]
      if (reg_is_w) begin // @[dcache.scala 92:39]
        reg_sram0_dirty <= _reg_sram0_dirty_T;
      end else begin
        reg_sram0_dirty <= _reg_sram0_dirty_T_1;
      end
    end
    if (reset) begin // @[dcache.scala 113:42]
      reg_sram2_valid <= 64'h0; // @[dcache.scala 113:42]
    end else if (is_sram2_write) begin // @[dcache.scala 118:35]
      reg_sram2_valid <= _reg_sram2_valid_T; // @[dcache.scala 119:41]
    end
    if (reset) begin // @[dcache.scala 114:42]
      reg_sram2_dirty <= 64'h0; // @[dcache.scala 114:42]
    end else if (is_sram2_write) begin // @[dcache.scala 118:35]
      if (reg_is_w) begin // @[dcache.scala 120:47]
        reg_sram2_dirty <= _reg_sram2_dirty_T;
      end else begin
        reg_sram2_dirty <= _reg_sram2_dirty_T_1;
      end
    end
    reg_r_raddr <= _GEN_166[63:0]; // @[dcache.scala 128:{42,42}]
    if (reset) begin // @[dcache.scala 129:42]
      reg_r_valid <= 1'h0; // @[dcache.scala 129:42]
    end else if (2'h0 == reg_cache_state) begin // @[dcache.scala 182:32]
      reg_r_valid <= 1'h0; // @[dcache.scala 205:41]
    end else if (2'h1 == reg_cache_state) begin // @[dcache.scala 182:32]
      if (hit_0 | hit_2) begin // @[dcache.scala 211:44]
        reg_r_valid <= _GEN_35;
      end else begin
        reg_r_valid <= 1'h1;
      end
    end else if (2'h2 == reg_cache_state) begin // @[dcache.scala 182:32]
      reg_r_valid <= _GEN_79;
    end else begin
      reg_r_valid <= _GEN_104;
    end
    reg_w_waddr <= _GEN_167[63:0]; // @[dcache.scala 131:{42,42}]
    if (reset) begin // @[dcache.scala 132:42]
      reg_w_wdata <= 64'h0; // @[dcache.scala 132:42]
    end else if (!(2'h0 == reg_cache_state)) begin // @[dcache.scala 182:32]
      if (2'h1 == reg_cache_state) begin // @[dcache.scala 182:32]
        if (!(hit_0 | hit_2)) begin // @[dcache.scala 211:44]
          reg_w_wdata <= _GEN_52;
        end
      end else if (2'h2 == reg_cache_state) begin // @[dcache.scala 182:32]
        reg_w_wdata <= _GEN_94;
      end
    end
    if (reset) begin // @[dcache.scala 133:42]
      reg_w_wlast <= 1'h0; // @[dcache.scala 133:42]
    end else if (!(2'h0 == reg_cache_state)) begin // @[dcache.scala 182:32]
      if (2'h1 == reg_cache_state) begin // @[dcache.scala 182:32]
        if (!(hit_0 | hit_2)) begin // @[dcache.scala 211:44]
          reg_w_wlast <= _GEN_53;
        end
      end else if (2'h2 == reg_cache_state) begin // @[dcache.scala 182:32]
        reg_w_wlast <= _GEN_91;
      end
    end
    if (reset) begin // @[dcache.scala 134:42]
      reg_w_valid <= 1'h0; // @[dcache.scala 134:42]
    end else if (2'h0 == reg_cache_state) begin // @[dcache.scala 182:32]
      reg_w_valid <= 1'h0; // @[dcache.scala 203:41]
    end else if (2'h1 == reg_cache_state) begin // @[dcache.scala 182:32]
      if (!(hit_0 | hit_2)) begin // @[dcache.scala 211:44]
        reg_w_valid <= _GEN_49;
      end
    end else if (2'h2 == reg_cache_state) begin // @[dcache.scala 182:32]
      reg_w_valid <= _GEN_92;
    end else begin
      reg_w_valid <= _GEN_102;
    end
    if (reset) begin // @[dcache.scala 136:42]
      reg_b_ready <= 1'h0; // @[dcache.scala 136:42]
    end else if (2'h0 == reg_cache_state) begin // @[dcache.scala 182:32]
      reg_b_ready <= 1'h0; // @[dcache.scala 204:41]
    end else if (2'h1 == reg_cache_state) begin // @[dcache.scala 182:32]
      if (!(hit_0 | hit_2)) begin // @[dcache.scala 211:44]
        reg_b_ready <= _GEN_50;
      end
    end else if (2'h2 == reg_cache_state) begin // @[dcache.scala 182:32]
      reg_b_ready <= _GEN_96;
    end else begin
      reg_b_ready <= _GEN_103;
    end
    if (reset) begin // @[dcache.scala 155:58]
      reg_lru_2 <= 64'h0; // @[dcache.scala 155:58]
    end else if (reg_start_operation) begin // @[dcache.scala 159:34]
      if (hit_0) begin // @[dcache.scala 160:28]
        reg_lru_2 <= _reg_lru_2_T; // @[dcache.scala 162:35]
      end else if (hit_2) begin // @[dcache.scala 163:34]
        reg_lru_2 <= _reg_lru_2_T_1; // @[dcache.scala 165:35]
      end else begin
        reg_lru_2 <= _GEN_9;
      end
    end
    if (reset) begin // @[dcache.scala 158:50]
      reg_start_operation <= 1'h0; // @[dcache.scala 158:50]
    end else if (2'h0 == reg_cache_state) begin // @[dcache.scala 182:32]
      reg_start_operation <= _GEN_23;
    end else if (2'h1 == reg_cache_state) begin // @[dcache.scala 182:32]
      reg_start_operation <= 1'h0; // @[dcache.scala 209:45]
    end
    if (reset) begin // @[dcache.scala 177:42]
      reg_cnt <= 2'h0; // @[dcache.scala 177:42]
    end else if (!(2'h0 == reg_cache_state)) begin // @[dcache.scala 182:32]
      if (2'h1 == reg_cache_state) begin // @[dcache.scala 182:32]
        if (!(hit_0 | hit_2)) begin // @[dcache.scala 211:44]
          reg_cnt <= _GEN_55;
        end
      end else if (2'h2 == reg_cache_state) begin // @[dcache.scala 182:32]
        reg_cnt <= _GEN_93;
      end
    end
    reg_rbus_finish <= reset | _GEN_156; // @[dcache.scala 178:{38,38}]
    reg_wbus_finish <= reset | _GEN_160; // @[dcache.scala 179:{38,38}]
  end
endmodule