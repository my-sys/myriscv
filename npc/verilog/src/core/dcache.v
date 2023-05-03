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
  output [5:0]   io_sram_addr,
  output         io_sram_wen_0,
  output         io_sram_wen_1,
  output [127:0] io_sram_data_wmask,
  output [127:0] io_sram_tag_wdata,
  output [127:0] io_sram_data_wdata,
  input  [127:0] io_sram_rdata_0,
  input  [127:0] io_sram_rdata_1,
  input  [127:0] io_sram_rdata_2,
  input  [127:0] io_sram_rdata_3,
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
  wire [53:0] Tag = io_cpu_bits_addr[63:10]; // @[dcache.scala 33:51]
  wire [5:0] Index = io_cpu_bits_addr[9:4]; // @[dcache.scala 34:51]
  wire [3:0] Offset = io_cpu_bits_addr[3:0]; // @[dcache.scala 35:51]
  reg [1:0] reg_cache_state; // @[dcache.scala 46:42]
  reg [63:0] reg_wdata; // @[dcache.scala 48:42]
  reg [7:0] reg_wstrb; // @[dcache.scala 49:42]
  reg  reg_is_w; // @[dcache.scala 50:42]
  reg [53:0] reg_tag; // @[dcache.scala 51:42]
  reg [5:0] reg_index; // @[dcache.scala 52:42]
  reg [3:0] reg_offset; // @[dcache.scala 53:42]
  reg  reg_ready; // @[dcache.scala 55:42]
  reg [63:0] reg_rdata; // @[dcache.scala 56:42]
  reg  reg_cache_write; // @[dcache.scala 58:38]
  reg [15:0] reg_cache_wstrb; // @[dcache.scala 59:38]
  reg [127:0] reg_cache_wdata; // @[dcache.scala 60:38]
  reg  reg_chosen_tag; // @[dcache.scala 61:42]
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
  wire [127:0] cache_wdata = reg_offset[3] ? _cache_wdata_T_1 : _cache_wdata_T_2; // @[dcache.scala 64:38]
  wire [15:0] _cache_wstrb_T_1 = {reg_wstrb,8'h0}; // @[Cat.scala 33:92]
  wire [15:0] _cache_wstrb_T_2 = {8'h0,reg_wstrb}; // @[Cat.scala 33:92]
  wire  is_sram0_write = reg_cache_write & ~reg_chosen_tag; // @[dcache.scala 69:59]
  wire  is_sram2_write = reg_cache_write & reg_chosen_tag; // @[dcache.scala 70:59]
  wire [127:0] _io_sram_data_wmask_T = ~cache_mask; // @[dcache.scala 76:28]
  reg [63:0] reg_sram0_valid; // @[dcache.scala 93:42]
  reg [63:0] reg_sram0_dirty; // @[dcache.scala 94:42]
  wire [63:0] chose_bit = 64'h1 << reg_index; // @[dcache.scala 95:29]
  wire [63:0] neg_chose_bit = ~chose_bit; // @[dcache.scala 96:29]
  wire [63:0] _reg_sram0_valid_T = reg_sram0_valid | chose_bit; // @[dcache.scala 101:52]
  wire [63:0] _reg_sram0_dirty_T = reg_sram0_dirty | chose_bit; // @[dcache.scala 102:65]
  wire [63:0] _reg_sram0_dirty_T_1 = reg_sram0_dirty & neg_chose_bit; // @[dcache.scala 102:94]
  reg [63:0] reg_sram2_valid; // @[dcache.scala 123:42]
  reg [63:0] reg_sram2_dirty; // @[dcache.scala 124:42]
  wire [63:0] _reg_sram2_valid_T = reg_sram2_valid | chose_bit; // @[dcache.scala 129:60]
  wire [63:0] _reg_sram2_dirty_T = reg_sram2_dirty | chose_bit; // @[dcache.scala 130:73]
  wire [63:0] _reg_sram2_dirty_T_1 = reg_sram2_dirty & neg_chose_bit; // @[dcache.scala 130:102]
  reg [63:0] reg_r_raddr; // @[dcache.scala 138:42]
  reg  reg_r_valid; // @[dcache.scala 139:42]
  reg [63:0] reg_w_waddr; // @[dcache.scala 141:42]
  reg [63:0] reg_w_wdata; // @[dcache.scala 142:42]
  reg  reg_w_wlast; // @[dcache.scala 143:42]
  reg  reg_w_valid; // @[dcache.scala 144:42]
  reg  reg_b_ready; // @[dcache.scala 146:42]
  wire [53:0] tag_0 = io_sram_rdata_1[53:0]; // @[dcache.scala 149:56]
  wire [53:0] tag_2 = io_sram_rdata_3[53:0]; // @[dcache.scala 150:56]
  wire  hit_0 = reg_tag == tag_0; // @[dcache.scala 151:52]
  wire  hit_2 = reg_tag == tag_2; // @[dcache.scala 152:52]
  wire [63:0] _tag_valid_0_T = reg_sram0_valid >> reg_index; // @[dcache.scala 153:50]
  wire  tag_valid_0 = _tag_valid_0_T[0]; // @[dcache.scala 153:50]
  wire [63:0] _tag_valid_2_T = reg_sram2_valid >> reg_index; // @[dcache.scala 154:50]
  wire  tag_valid_2 = _tag_valid_2_T[0]; // @[dcache.scala 154:50]
  wire [63:0] _tag_dirty_0_T = reg_sram0_dirty >> reg_index; // @[dcache.scala 155:50]
  wire  tag_dirty_0 = _tag_dirty_0_T[0]; // @[dcache.scala 155:50]
  wire [63:0] _tag_dirty_2_T = reg_sram2_dirty >> reg_index; // @[dcache.scala 156:50]
  wire  tag_dirty_2 = _tag_dirty_2_T[0]; // @[dcache.scala 156:50]
  wire [63:0] rdata0 = reg_offset[3] ? io_sram_rdata_0[127:64] : io_sram_rdata_0[63:0]; // @[dcache.scala 157:46]
  wire [63:0] rdata2 = reg_offset[3] ? io_sram_rdata_2[127:64] : io_sram_rdata_2[63:0]; // @[dcache.scala 158:46]
  reg [63:0] reg_lru_2; // @[dcache.scala 165:58]
  wire [63:0] _LRU_2_T = reg_lru_2 >> reg_index; // @[dcache.scala 167:36]
  wire  LRU_2 = _LRU_2_T[0]; // @[dcache.scala 167:36]
  reg  reg_start_operation; // @[dcache.scala 168:50]
  wire [63:0] _reg_lru_2_T = reg_lru_2 | chose_bit; // @[dcache.scala 172:48]
  wire [63:0] _reg_lru_2_T_1 = reg_lru_2 & neg_chose_bit; // @[dcache.scala 175:48]
  wire  _T = tag_valid_0 & tag_valid_2; // @[dcache.scala 177:42]
  wire [63:0] _reg_lru_2_T_4 = LRU_2 ? _reg_lru_2_T_1 : _reg_lru_2_T; // @[dcache.scala 179:49]
  wire [63:0] _reg_lru_2_T_7 = tag_valid_0 ? _reg_lru_2_T_1 : _reg_lru_2_T; // @[dcache.scala 182:49]
  wire [63:0] _GEN_9 = tag_valid_0 & tag_valid_2 ? _reg_lru_2_T_4 : _reg_lru_2_T_7; // @[dcache.scala 177:56 179:43 182:43]
  reg [1:0] reg_cnt; // @[dcache.scala 187:42]
  reg  reg_rbus_finish; // @[dcache.scala 188:38]
  reg  reg_wbus_finish; // @[dcache.scala 189:38]
  wire  hit_0_and_valid_0 = hit_0 & tag_valid_0; // @[dcache.scala 192:40]
  wire  hit_2_and_valid_2 = hit_2 & tag_valid_2; // @[dcache.scala 193:40]
  wire  or_hit = hit_0 | hit_2; // @[dcache.scala 194:28]
  wire [59:0] _temp_addr_T = {reg_tag,reg_index}; // @[Cat.scala 33:92]
  wire [63:0] _GEN_162 = {_temp_addr_T, 4'h0}; // @[dcache.scala 195:48]
  wire [66:0] temp_addr = {{3'd0}, _GEN_162}; // @[dcache.scala 195:48]
  wire  _GEN_23 = io_cpu_valid | reg_start_operation; // @[dcache.scala 198:43 168:50 208:53]
  wire  _reg_chosen_tag_T = hit_0 ? 1'h0 : 1'h1; // @[dcache.scala 228:55]
  wire [63:0] _reg_rdata_T = hit_0 ? rdata0 : rdata2; // @[dcache.scala 242:87]
  wire  _GEN_24 = reg_is_w | reg_cache_write; // @[dcache.scala 230:55 232:73 58:38]
  wire [127:0] _GEN_25 = reg_is_w ? cache_wdata : reg_cache_wdata; // @[dcache.scala 230:55 236:73 60:38]
  wire [63:0] _GEN_28 = reg_is_w ? reg_rdata : _reg_rdata_T; // @[dcache.scala 230:55 56:42 242:81]
  wire  _GEN_29 = hit_0_and_valid_0 | hit_2_and_valid_2 ? _GEN_24 : reg_cache_write; // @[dcache.scala 229:75 58:38]
  wire [127:0] _GEN_30 = hit_0_and_valid_0 | hit_2_and_valid_2 ? _GEN_25 : reg_cache_wdata; // @[dcache.scala 229:75 60:38]
  wire [1:0] _GEN_31 = hit_0_and_valid_0 | hit_2_and_valid_2 ? 2'h3 : 2'h2; // @[dcache.scala 229:75 255:73]
  wire  _GEN_32 = hit_0_and_valid_0 | hit_2_and_valid_2 | reg_ready; // @[dcache.scala 229:75 55:42]
  wire [63:0] _GEN_33 = hit_0_and_valid_0 | hit_2_and_valid_2 ? _GEN_28 : reg_rdata; // @[dcache.scala 229:75 56:42]
  wire [66:0] _GEN_34 = hit_0_and_valid_0 | hit_2_and_valid_2 ? {{3'd0}, reg_r_raddr} : temp_addr; // @[dcache.scala 138:42 229:75 252:73]
  wire  _GEN_35 = hit_0_and_valid_0 | hit_2_and_valid_2 ? reg_r_valid : 1'h1; // @[dcache.scala 139:42 229:75 253:73]
  wire  _GEN_36 = (hit_0_and_valid_0 | hit_2_and_valid_2) & reg_rbus_finish; // @[dcache.scala 188:38 229:75 254:73]
  wire [53:0] _reg_w_waddr_T = LRU_2 ? tag_2 : tag_0; // @[dcache.scala 270:75]
  wire [59:0] _reg_w_waddr_T_1 = {_reg_w_waddr_T,reg_index}; // @[Cat.scala 33:92]
  wire [63:0] _GEN_163 = {_reg_w_waddr_T_1, 4'h0}; // @[dcache.scala 270:105]
  wire [66:0] _reg_w_waddr_T_2 = {{3'd0}, _GEN_163}; // @[dcache.scala 270:105]
  wire [63:0] _reg_w_wdata_T_2 = LRU_2 ? io_sram_rdata_2[63:0] : io_sram_rdata_0[63:0]; // @[dcache.scala 271:71]
  wire  _GEN_37 = tag_dirty_0 & ~LRU_2 | tag_dirty_2 & LRU_2 | reg_w_valid; // @[dcache.scala 144:42 267:92 268:65]
  wire  _GEN_38 = tag_dirty_0 & ~LRU_2 | tag_dirty_2 & LRU_2 | reg_b_ready; // @[dcache.scala 146:42 267:92 269:65]
  wire [66:0] _GEN_39 = tag_dirty_0 & ~LRU_2 | tag_dirty_2 & LRU_2 ? _reg_w_waddr_T_2 : {{3'd0}, reg_w_waddr}; // @[dcache.scala 141:42 267:92 270:65]
  wire [63:0] _GEN_40 = tag_dirty_0 & ~LRU_2 | tag_dirty_2 & LRU_2 ? _reg_w_wdata_T_2 : reg_w_wdata; // @[dcache.scala 142:42 267:92 271:65]
  wire  _GEN_41 = tag_dirty_0 & ~LRU_2 | tag_dirty_2 & LRU_2 ? 1'h0 : reg_w_wlast; // @[dcache.scala 143:42 267:92 272:65]
  wire  _GEN_42 = tag_dirty_0 & ~LRU_2 | tag_dirty_2 & LRU_2 ? 1'h0 : reg_wbus_finish; // @[dcache.scala 189:38 267:92 273:65]
  wire [1:0] _GEN_43 = tag_dirty_0 & ~LRU_2 | tag_dirty_2 & LRU_2 ? 2'h1 : reg_cnt; // @[dcache.scala 187:42 267:92 274:73]
  wire  _GEN_44 = _T ? LRU_2 : tag_valid_0; // @[dcache.scala 258:64 259:65 277:65]
  wire  _GEN_49 = _T ? _GEN_37 : reg_w_valid; // @[dcache.scala 144:42 258:64]
  wire  _GEN_50 = _T ? _GEN_38 : reg_b_ready; // @[dcache.scala 146:42 258:64]
  wire [66:0] _GEN_51 = _T ? _GEN_39 : {{3'd0}, reg_w_waddr}; // @[dcache.scala 141:42 258:64]
  wire [63:0] _GEN_52 = _T ? _GEN_40 : reg_w_wdata; // @[dcache.scala 142:42 258:64]
  wire  _GEN_53 = _T ? _GEN_41 : reg_w_wlast; // @[dcache.scala 143:42 258:64]
  wire  _GEN_54 = _T ? _GEN_42 : reg_wbus_finish; // @[dcache.scala 189:38 258:64]
  wire [1:0] _GEN_55 = _T ? _GEN_43 : reg_cnt; // @[dcache.scala 187:42 258:64]
  wire [66:0] _GEN_62 = or_hit ? _GEN_34 : temp_addr; // @[dcache.scala 225:37]
  wire  _GEN_64 = or_hit & _GEN_36; // @[dcache.scala 225:37]
  wire [66:0] _GEN_67 = or_hit ? {{3'd0}, reg_w_waddr} : _GEN_51; // @[dcache.scala 225:37 141:42]
  wire  _GEN_70 = or_hit ? reg_wbus_finish : _GEN_54; // @[dcache.scala 225:37 189:38]
  wire  _T_10 = io_cache_bus_r_valid & io_cache_bus_r_ready; // @[simplebus.scala 28:40]
  wire [127:0] _reg_cache_wdata_T = cache_wdata & cache_mask; // @[dcache.scala 294:85]
  wire [127:0] _reg_cache_wdata_T_2 = {io_cache_bus_r_bits_rdata,reg_cache_wdata[63:0]}; // @[Cat.scala 33:92]
  wire [127:0] _reg_cache_wdata_T_4 = _reg_cache_wdata_T_2 & _io_sram_data_wmask_T; // @[dcache.scala 294:155]
  wire [127:0] _reg_cache_wdata_T_5 = _reg_cache_wdata_T | _reg_cache_wdata_T_4; // @[dcache.scala 294:99]
  wire [63:0] _reg_rdata_T_3 = reg_offset[3] ? io_cache_bus_r_bits_rdata : reg_cache_wdata[63:0]; // @[dcache.scala 297:87]
  wire [127:0] _GEN_72 = reg_is_w ? _reg_cache_wdata_T_5 : _reg_cache_wdata_T_2; // @[dcache.scala 293:55 294:69 298:73]
  wire [63:0] _GEN_73 = reg_is_w ? reg_rdata : _reg_rdata_T_3; // @[dcache.scala 293:55 56:42 297:81]
  wire  _GEN_74 = io_cache_bus_r_bits_rlast ? 1'h0 : reg_r_valid; // @[dcache.scala 139:42 288:64 289:57]
  wire [15:0] _GEN_75 = io_cache_bus_r_bits_rlast ? 16'hffff : reg_cache_wstrb; // @[dcache.scala 288:64 291:57 59:38]
  wire  _GEN_76 = io_cache_bus_r_bits_rlast | reg_rbus_finish; // @[dcache.scala 188:38 288:64 292:57]
  wire [127:0] _GEN_77 = io_cache_bus_r_bits_rlast ? _GEN_72 : {{64'd0}, io_cache_bus_r_bits_rdata}; // @[dcache.scala 288:64 301:73]
  wire [63:0] _GEN_78 = io_cache_bus_r_bits_rlast ? _GEN_73 : reg_rdata; // @[dcache.scala 288:64 56:42]
  wire  _GEN_79 = _T_10 ? _GEN_74 : reg_r_valid; // @[dcache.scala 139:42 287:50]
  wire [15:0] _GEN_80 = _T_10 ? _GEN_75 : reg_cache_wstrb; // @[dcache.scala 287:50 59:38]
  wire  _GEN_81 = _T_10 ? _GEN_76 : reg_rbus_finish; // @[dcache.scala 188:38 287:50]
  wire [127:0] _GEN_82 = _T_10 ? _GEN_77 : reg_cache_wdata; // @[dcache.scala 287:50 60:38]
  wire [63:0] _GEN_83 = _T_10 ? _GEN_78 : reg_rdata; // @[dcache.scala 287:50 56:42]
  wire  _T_11 = io_cache_bus_w_ready & io_cache_bus_w_valid; // @[Decoupled.scala 52:35]
  wire [1:0] _reg_cnt_T_1 = reg_cnt - 2'h1; // @[dcache.scala 310:76]
  wire [63:0] _reg_w_wdata_T_6 = reg_chosen_tag ? io_sram_rdata_2[127:64] : io_sram_rdata_0[127:64]; // @[dcache.scala 312:71]
  wire [1:0] _GEN_84 = reg_cnt == 2'h1 ? _reg_cnt_T_1 : reg_cnt; // @[dcache.scala 187:42 309:60 310:65]
  wire  _GEN_85 = reg_cnt == 2'h1 | reg_w_wlast; // @[dcache.scala 143:42 309:60 311:57]
  wire [63:0] _GEN_86 = reg_cnt == 2'h1 ? _reg_w_wdata_T_6 : reg_w_wdata; // @[dcache.scala 142:42 309:60 312:65]
  wire  _GEN_87 = reg_cnt == 2'h0 ? 1'h0 : _GEN_85; // @[dcache.scala 306:54 307:57]
  wire  _GEN_88 = reg_cnt == 2'h0 ? 1'h0 : reg_w_valid; // @[dcache.scala 144:42 306:54 308:57]
  wire [1:0] _GEN_89 = reg_cnt == 2'h0 ? reg_cnt : _GEN_84; // @[dcache.scala 187:42 306:54]
  wire [63:0] _GEN_90 = reg_cnt == 2'h0 ? reg_w_wdata : _GEN_86; // @[dcache.scala 142:42 306:54]
  wire  _GEN_91 = _T_11 ? _GEN_87 : reg_w_wlast; // @[dcache.scala 143:42 305:50]
  wire  _GEN_92 = _T_11 ? _GEN_88 : reg_w_valid; // @[dcache.scala 144:42 305:50]
  wire [1:0] _GEN_93 = _T_11 ? _GEN_89 : reg_cnt; // @[dcache.scala 187:42 305:50]
  wire [63:0] _GEN_94 = _T_11 ? _GEN_90 : reg_w_wdata; // @[dcache.scala 142:42 305:50]
  wire  _T_14 = io_cache_bus_b_ready & io_cache_bus_b_valid; // @[Decoupled.scala 52:35]
  wire  _GEN_95 = _T_14 | reg_wbus_finish; // @[dcache.scala 189:38 319:50 320:49]
  wire  _GEN_96 = _T_14 ? 1'h0 : reg_b_ready; // @[dcache.scala 146:42 319:50 321:49]
  wire  _GEN_97 = _GEN_76 & _GEN_95 | reg_cache_write; // @[dcache.scala 324:119 325:57 58:38]
  wire [1:0] _GEN_98 = _GEN_76 & _GEN_95 ? 2'h3 : reg_cache_state; // @[dcache.scala 324:119 326:57 46:42]
  wire  _GEN_99 = _GEN_76 & _GEN_95 | reg_ready; // @[dcache.scala 324:119 327:65 55:42]
  wire  _GEN_100 = 2'h3 == reg_cache_state ? 1'h0 : reg_cache_write; // @[dcache.scala 196:32 331:49 58:38]
  wire  _GEN_101 = 2'h3 == reg_cache_state ? 1'h0 : reg_ready; // @[dcache.scala 196:32 332:57 55:42]
  wire  _GEN_102 = 2'h3 == reg_cache_state ? 1'h0 : reg_w_valid; // @[dcache.scala 196:32 144:42 334:49]
  wire  _GEN_103 = 2'h3 == reg_cache_state ? 1'h0 : reg_b_ready; // @[dcache.scala 196:32 335:41 146:42]
  wire  _GEN_104 = 2'h3 == reg_cache_state ? 1'h0 : reg_r_valid; // @[dcache.scala 196:32 336:41 139:42]
  wire [1:0] _GEN_105 = 2'h3 == reg_cache_state ? 2'h0 : reg_cache_state; // @[dcache.scala 196:32 337:49 46:42]
  wire  _GEN_108 = 2'h2 == reg_cache_state ? _GEN_81 : reg_rbus_finish; // @[dcache.scala 196:32 188:38]
  wire  _GEN_115 = 2'h2 == reg_cache_state ? _GEN_95 : reg_wbus_finish; // @[dcache.scala 196:32 189:38]
  wire [66:0] _GEN_128 = 2'h1 == reg_cache_state ? _GEN_62 : {{3'd0}, reg_r_raddr}; // @[dcache.scala 196:32 138:42]
  wire  _GEN_130 = 2'h1 == reg_cache_state ? _GEN_64 : _GEN_108; // @[dcache.scala 196:32]
  wire [66:0] _GEN_133 = 2'h1 == reg_cache_state ? _GEN_67 : {{3'd0}, reg_w_waddr}; // @[dcache.scala 196:32 141:42]
  wire  _GEN_136 = 2'h1 == reg_cache_state ? _GEN_70 : _GEN_115; // @[dcache.scala 196:32]
  wire [66:0] _GEN_155 = 2'h0 == reg_cache_state ? {{3'd0}, reg_r_raddr} : _GEN_128; // @[dcache.scala 196:32 138:42]
  wire  _GEN_156 = 2'h0 == reg_cache_state ? reg_rbus_finish : _GEN_130; // @[dcache.scala 196:32 188:38]
  wire [66:0] _GEN_157 = 2'h0 == reg_cache_state ? {{3'd0}, reg_w_waddr} : _GEN_133; // @[dcache.scala 196:32 141:42]
  wire  _GEN_160 = 2'h0 == reg_cache_state ? reg_wbus_finish : _GEN_136; // @[dcache.scala 196:32 189:38]
  wire [66:0] _GEN_164 = reset ? 67'h0 : _GEN_155; // @[dcache.scala 138:{42,42}]
  wire [66:0] _GEN_165 = reset ? 67'h0 : _GEN_157; // @[dcache.scala 141:{42,42}]
  assign io_cpu_bits_rdata = reg_rdata; // @[dcache.scala 340:49]
  assign io_cpu_ready = reg_ready; // @[dcache.scala 341:49]
  assign io_sram_addr = reg_cache_state != 2'h0 ? reg_index : Index; // @[dcache.scala 71:54]
  assign io_sram_wen_0 = ~is_sram0_write; // @[dcache.scala 73:24]
  assign io_sram_wen_1 = ~is_sram2_write; // @[dcache.scala 74:24]
  assign io_sram_data_wmask = ~cache_mask; // @[dcache.scala 76:28]
  assign io_sram_tag_wdata = {{74'd0}, reg_tag}; // @[dcache.scala 77:24]
  assign io_sram_data_wdata = reg_cache_wdata; // @[dcache.scala 78:25]
  assign io_cache_bus_w_valid = reg_w_valid; // @[dcache.scala 343:41]
  assign io_cache_bus_w_bits_waddr = reg_w_waddr; // @[dcache.scala 344:41]
  assign io_cache_bus_w_bits_wdata = reg_w_wdata; // @[dcache.scala 345:41]
  assign io_cache_bus_w_bits_wlast = reg_w_wlast; // @[dcache.scala 346:41]
  assign io_cache_bus_b_ready = reg_b_ready; // @[dcache.scala 348:41]
  assign io_cache_bus_r_valid = reg_r_valid; // @[dcache.scala 351:41]
  assign io_cache_bus_r_bits_raddr = reg_r_raddr; // @[dcache.scala 350:41]
  always @(posedge clock) begin
    if (reset) begin // @[dcache.scala 46:42]
      reg_cache_state <= 2'h0; // @[dcache.scala 46:42]
    end else if (2'h0 == reg_cache_state) begin // @[dcache.scala 196:32]
      if (io_cpu_valid) begin // @[dcache.scala 198:43]
        reg_cache_state <= 2'h1; // @[dcache.scala 207:49]
      end else begin
        reg_cache_state <= 2'h0; // @[dcache.scala 211:49]
      end
    end else if (2'h1 == reg_cache_state) begin // @[dcache.scala 196:32]
      if (or_hit) begin // @[dcache.scala 225:37]
        reg_cache_state <= _GEN_31;
      end else begin
        reg_cache_state <= 2'h2;
      end
    end else if (2'h2 == reg_cache_state) begin // @[dcache.scala 196:32]
      reg_cache_state <= _GEN_98;
    end else begin
      reg_cache_state <= _GEN_105;
    end
    if (reset) begin // @[dcache.scala 48:42]
      reg_wdata <= 64'h0; // @[dcache.scala 48:42]
    end else if (2'h0 == reg_cache_state) begin // @[dcache.scala 196:32]
      if (io_cpu_valid) begin // @[dcache.scala 198:43]
        reg_wdata <= io_cpu_bits_wdata; // @[dcache.scala 200:57]
      end
    end
    if (reset) begin // @[dcache.scala 49:42]
      reg_wstrb <= 8'h0; // @[dcache.scala 49:42]
    end else if (2'h0 == reg_cache_state) begin // @[dcache.scala 196:32]
      if (io_cpu_valid) begin // @[dcache.scala 198:43]
        reg_wstrb <= io_cpu_bits_wstrb; // @[dcache.scala 201:57]
      end
    end
    if (reset) begin // @[dcache.scala 50:42]
      reg_is_w <= 1'h0; // @[dcache.scala 50:42]
    end else if (2'h0 == reg_cache_state) begin // @[dcache.scala 196:32]
      if (io_cpu_valid) begin // @[dcache.scala 198:43]
        reg_is_w <= io_cpu_bits_is_w; // @[dcache.scala 202:57]
      end
    end
    if (reset) begin // @[dcache.scala 51:42]
      reg_tag <= 54'h0; // @[dcache.scala 51:42]
    end else if (2'h0 == reg_cache_state) begin // @[dcache.scala 196:32]
      if (io_cpu_valid) begin // @[dcache.scala 198:43]
        reg_tag <= Tag; // @[dcache.scala 203:57]
      end
    end
    if (reset) begin // @[dcache.scala 52:42]
      reg_index <= 6'h0; // @[dcache.scala 52:42]
    end else if (2'h0 == reg_cache_state) begin // @[dcache.scala 196:32]
      if (io_cpu_valid) begin // @[dcache.scala 198:43]
        reg_index <= Index; // @[dcache.scala 204:57]
      end
    end
    if (reset) begin // @[dcache.scala 53:42]
      reg_offset <= 4'h0; // @[dcache.scala 53:42]
    end else if (2'h0 == reg_cache_state) begin // @[dcache.scala 196:32]
      if (io_cpu_valid) begin // @[dcache.scala 198:43]
        reg_offset <= Offset; // @[dcache.scala 205:57]
      end
    end
    if (reset) begin // @[dcache.scala 55:42]
      reg_ready <= 1'h0; // @[dcache.scala 55:42]
    end else if (2'h0 == reg_cache_state) begin // @[dcache.scala 196:32]
      reg_ready <= 1'h0; // @[dcache.scala 213:41]
    end else if (2'h1 == reg_cache_state) begin // @[dcache.scala 196:32]
      if (or_hit) begin // @[dcache.scala 225:37]
        reg_ready <= _GEN_32;
      end
    end else if (2'h2 == reg_cache_state) begin // @[dcache.scala 196:32]
      reg_ready <= _GEN_99;
    end else begin
      reg_ready <= _GEN_101;
    end
    if (reset) begin // @[dcache.scala 56:42]
      reg_rdata <= 64'h0; // @[dcache.scala 56:42]
    end else if (!(2'h0 == reg_cache_state)) begin // @[dcache.scala 196:32]
      if (2'h1 == reg_cache_state) begin // @[dcache.scala 196:32]
        if (or_hit) begin // @[dcache.scala 225:37]
          reg_rdata <= _GEN_33;
        end
      end else if (2'h2 == reg_cache_state) begin // @[dcache.scala 196:32]
        reg_rdata <= _GEN_83;
      end
    end
    if (reset) begin // @[dcache.scala 58:38]
      reg_cache_write <= 1'h0; // @[dcache.scala 58:38]
    end else if (2'h0 == reg_cache_state) begin // @[dcache.scala 196:32]
      reg_cache_write <= 1'h0; // @[dcache.scala 215:41]
    end else if (2'h1 == reg_cache_state) begin // @[dcache.scala 196:32]
      if (or_hit) begin // @[dcache.scala 225:37]
        reg_cache_write <= _GEN_29;
      end
    end else if (2'h2 == reg_cache_state) begin // @[dcache.scala 196:32]
      reg_cache_write <= _GEN_97;
    end else begin
      reg_cache_write <= _GEN_100;
    end
    if (reset) begin // @[dcache.scala 59:38]
      reg_cache_wstrb <= 16'h0; // @[dcache.scala 59:38]
    end else if (!(2'h0 == reg_cache_state)) begin // @[dcache.scala 196:32]
      if (2'h1 == reg_cache_state) begin // @[dcache.scala 196:32]
        if (reg_offset[3]) begin // @[dcache.scala 65:38]
          reg_cache_wstrb <= _cache_wstrb_T_1;
        end else begin
          reg_cache_wstrb <= _cache_wstrb_T_2;
        end
      end else if (2'h2 == reg_cache_state) begin // @[dcache.scala 196:32]
        reg_cache_wstrb <= _GEN_80;
      end
    end
    if (reset) begin // @[dcache.scala 60:38]
      reg_cache_wdata <= 128'h0; // @[dcache.scala 60:38]
    end else if (!(2'h0 == reg_cache_state)) begin // @[dcache.scala 196:32]
      if (2'h1 == reg_cache_state) begin // @[dcache.scala 196:32]
        if (or_hit) begin // @[dcache.scala 225:37]
          reg_cache_wdata <= _GEN_30;
        end
      end else if (2'h2 == reg_cache_state) begin // @[dcache.scala 196:32]
        reg_cache_wdata <= _GEN_82;
      end
    end
    if (reset) begin // @[dcache.scala 61:42]
      reg_chosen_tag <= 1'h0; // @[dcache.scala 61:42]
    end else if (!(2'h0 == reg_cache_state)) begin // @[dcache.scala 196:32]
      if (2'h1 == reg_cache_state) begin // @[dcache.scala 196:32]
        if (or_hit) begin // @[dcache.scala 225:37]
          reg_chosen_tag <= _reg_chosen_tag_T; // @[dcache.scala 228:49]
        end else begin
          reg_chosen_tag <= _GEN_44;
        end
      end
    end
    if (reset) begin // @[dcache.scala 93:42]
      reg_sram0_valid <= 64'h0; // @[dcache.scala 93:42]
    end else if (is_sram0_write) begin // @[dcache.scala 100:35]
      reg_sram0_valid <= _reg_sram0_valid_T; // @[dcache.scala 101:33]
    end
    if (reset) begin // @[dcache.scala 94:42]
      reg_sram0_dirty <= 64'h0; // @[dcache.scala 94:42]
    end else if (is_sram0_write) begin // @[dcache.scala 100:35]
      if (reg_is_w) begin // @[dcache.scala 102:39]
        reg_sram0_dirty <= _reg_sram0_dirty_T;
      end else begin
        reg_sram0_dirty <= _reg_sram0_dirty_T_1;
      end
    end
    if (reset) begin // @[dcache.scala 123:42]
      reg_sram2_valid <= 64'h0; // @[dcache.scala 123:42]
    end else if (is_sram2_write) begin // @[dcache.scala 128:35]
      reg_sram2_valid <= _reg_sram2_valid_T; // @[dcache.scala 129:41]
    end
    if (reset) begin // @[dcache.scala 124:42]
      reg_sram2_dirty <= 64'h0; // @[dcache.scala 124:42]
    end else if (is_sram2_write) begin // @[dcache.scala 128:35]
      if (reg_is_w) begin // @[dcache.scala 130:47]
        reg_sram2_dirty <= _reg_sram2_dirty_T;
      end else begin
        reg_sram2_dirty <= _reg_sram2_dirty_T_1;
      end
    end
    reg_r_raddr <= _GEN_164[63:0]; // @[dcache.scala 138:{42,42}]
    if (reset) begin // @[dcache.scala 139:42]
      reg_r_valid <= 1'h0; // @[dcache.scala 139:42]
    end else if (2'h0 == reg_cache_state) begin // @[dcache.scala 196:32]
      reg_r_valid <= 1'h0; // @[dcache.scala 219:41]
    end else if (2'h1 == reg_cache_state) begin // @[dcache.scala 196:32]
      if (or_hit) begin // @[dcache.scala 225:37]
        reg_r_valid <= _GEN_35;
      end else begin
        reg_r_valid <= 1'h1;
      end
    end else if (2'h2 == reg_cache_state) begin // @[dcache.scala 196:32]
      reg_r_valid <= _GEN_79;
    end else begin
      reg_r_valid <= _GEN_104;
    end
    reg_w_waddr <= _GEN_165[63:0]; // @[dcache.scala 141:{42,42}]
    if (reset) begin // @[dcache.scala 142:42]
      reg_w_wdata <= 64'h0; // @[dcache.scala 142:42]
    end else if (!(2'h0 == reg_cache_state)) begin // @[dcache.scala 196:32]
      if (2'h1 == reg_cache_state) begin // @[dcache.scala 196:32]
        if (!(or_hit)) begin // @[dcache.scala 225:37]
          reg_w_wdata <= _GEN_52;
        end
      end else if (2'h2 == reg_cache_state) begin // @[dcache.scala 196:32]
        reg_w_wdata <= _GEN_94;
      end
    end
    if (reset) begin // @[dcache.scala 143:42]
      reg_w_wlast <= 1'h0; // @[dcache.scala 143:42]
    end else if (!(2'h0 == reg_cache_state)) begin // @[dcache.scala 196:32]
      if (2'h1 == reg_cache_state) begin // @[dcache.scala 196:32]
        if (!(or_hit)) begin // @[dcache.scala 225:37]
          reg_w_wlast <= _GEN_53;
        end
      end else if (2'h2 == reg_cache_state) begin // @[dcache.scala 196:32]
        reg_w_wlast <= _GEN_91;
      end
    end
    if (reset) begin // @[dcache.scala 144:42]
      reg_w_valid <= 1'h0; // @[dcache.scala 144:42]
    end else if (2'h0 == reg_cache_state) begin // @[dcache.scala 196:32]
      reg_w_valid <= 1'h0; // @[dcache.scala 217:41]
    end else if (2'h1 == reg_cache_state) begin // @[dcache.scala 196:32]
      if (!(or_hit)) begin // @[dcache.scala 225:37]
        reg_w_valid <= _GEN_49;
      end
    end else if (2'h2 == reg_cache_state) begin // @[dcache.scala 196:32]
      reg_w_valid <= _GEN_92;
    end else begin
      reg_w_valid <= _GEN_102;
    end
    if (reset) begin // @[dcache.scala 146:42]
      reg_b_ready <= 1'h0; // @[dcache.scala 146:42]
    end else if (2'h0 == reg_cache_state) begin // @[dcache.scala 196:32]
      reg_b_ready <= 1'h0; // @[dcache.scala 218:41]
    end else if (2'h1 == reg_cache_state) begin // @[dcache.scala 196:32]
      if (!(or_hit)) begin // @[dcache.scala 225:37]
        reg_b_ready <= _GEN_50;
      end
    end else if (2'h2 == reg_cache_state) begin // @[dcache.scala 196:32]
      reg_b_ready <= _GEN_96;
    end else begin
      reg_b_ready <= _GEN_103;
    end
    if (reset) begin // @[dcache.scala 165:58]
      reg_lru_2 <= 64'h0; // @[dcache.scala 165:58]
    end else if (reg_start_operation) begin // @[dcache.scala 169:34]
      if (hit_0) begin // @[dcache.scala 170:28]
        reg_lru_2 <= _reg_lru_2_T; // @[dcache.scala 172:35]
      end else if (hit_2) begin // @[dcache.scala 173:34]
        reg_lru_2 <= _reg_lru_2_T_1; // @[dcache.scala 175:35]
      end else begin
        reg_lru_2 <= _GEN_9;
      end
    end
    if (reset) begin // @[dcache.scala 168:50]
      reg_start_operation <= 1'h0; // @[dcache.scala 168:50]
    end else if (2'h0 == reg_cache_state) begin // @[dcache.scala 196:32]
      reg_start_operation <= _GEN_23;
    end else if (2'h1 == reg_cache_state) begin // @[dcache.scala 196:32]
      reg_start_operation <= 1'h0; // @[dcache.scala 223:45]
    end
    if (reset) begin // @[dcache.scala 187:42]
      reg_cnt <= 2'h0; // @[dcache.scala 187:42]
    end else if (!(2'h0 == reg_cache_state)) begin // @[dcache.scala 196:32]
      if (2'h1 == reg_cache_state) begin // @[dcache.scala 196:32]
        if (!(or_hit)) begin // @[dcache.scala 225:37]
          reg_cnt <= _GEN_55;
        end
      end else if (2'h2 == reg_cache_state) begin // @[dcache.scala 196:32]
        reg_cnt <= _GEN_93;
      end
    end
    reg_rbus_finish <= reset | _GEN_156; // @[dcache.scala 188:{38,38}]
    reg_wbus_finish <= reset | _GEN_160; // @[dcache.scala 189:{38,38}]
  end
endmodule