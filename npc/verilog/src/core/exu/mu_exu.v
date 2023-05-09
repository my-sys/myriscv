//尝试将此文件按照正常verilog编写，而不是采用chisel生成，但速度直接变慢了40S，
//两分半时间变成了3分钟,无法接受。
//如果换一台性能更强劲的CPU，速度应该还可以提升一倍，AMD7700X。现在的烦恼也就不存在了
module MUL(
  input         clock,
  input         reset,
  input         io_valid,
  input  [63:0] io_rs1_data,
  input  [63:0] io_rs2_data,
  input  [6:0]  io_exuType,
  output [63:0] io_dest_data,
  output        io_dest_is_w,
  output        io_ready
);
  wire  is_32 = io_exuType[2]; // @[mu_exu.scala 39:53]
  wire  is_rs1_signed = io_exuType[1]; // @[mu_exu.scala 40:45]
  wire  is_rs2_signed = io_exuType[0]; // @[mu_exu.scala 41:45]

  //不改变结构，只改命名是结果稍微读得懂一些
  wire [97:0] _mul_data1_T_11 = io_rs1_data[31] ? 98'h3ffffffffffffffffffffffff : 98'h0; // @[Bitwise.scala 77:12]
  wire [129:0] _mul_data1_T_1 = {_mul_data1_T_11,io_rs1_data[31:0]}; // @[Cat.scala 33:92]
  wire [65:0] _mul_data1_T_211 = io_rs1_data[63] ? 66'h3ffffffffffffffff : 66'h0; // @[Bitwise.scala 77:12]
  wire [129:0] _mul_data1_T_21 = {_mul_data1_T_211,io_rs1_data}; // @[Cat.scala 33:92]
  wire [129:0] _mul_data1_T_22 = {66'h0,io_rs1_data}; // @[Cat.scala 33:92]
  wire [129:0] _mul_data1_T_2 = is_rs1_signed ? _mul_data1_T_21 : _mul_data1_T_22; // @[mu_exu.scala 44:90]
  wire [129:0] _mul_data1_T = is_32 ? _mul_data1_T_1 : _mul_data1_T_2; // @[mu_exu.scala 44:38]
  wire [129:0] mul_data1 = io_valid ? _mul_data1_T : 130'h0; // @[mu_exu.scala 44:28]

  wire [32:0] _mul_data2_T_11 = io_rs2_data[31] ? 33'h1ffffffff : 33'h0; // @[Bitwise.scala 77:12]
  wire [64:0] _mul_data2_T_1 = {_mul_data2_T_11,io_rs2_data[31:0]}; // @[Cat.scala 33:92]
  wire [64:0] _mul_data2_T_21 = {io_rs2_data[63],io_rs2_data}; // @[Cat.scala 33:92]
  wire [64:0] _mul_data2_T_22 = {1'h0,io_rs2_data}; // @[Cat.scala 33:92]
  wire [64:0] _mul_data2_T_2 = is_rs2_signed ? _mul_data2_T_21 : _mul_data2_T_22; // @[mu_exu.scala 45:90]
  wire [64:0] _mul_data2_T = is_32 ? _mul_data2_T_1 : _mul_data2_T_2; // @[mu_exu.scala 45:38]
  wire [64:0] mul_data2 = io_valid ? _mul_data2_T : 65'h0; // @[mu_exu.scala 45:28]

  wire [66:0] temp_mul2 = {mul_data2[64],mul_data2,1'h0};
  reg  reg_ready;
  reg [1:0] reg_state;
  reg [66:0] reg_temp_mul2;
  reg [129:0] reg_mul1;
  reg [129:0] reg_result;
  reg [6:0] reg_exuType;
  reg  reg_dest_is_w;
  wire [130:0] _pp_r_3 = {reg_mul1, 1'h0};//(reg_mul1 << 1.U)
  wire [129:0] _pp_0_2 = ~reg_mul1; //~reg_mul1 
  wire [129:0] _pp_r_56 = _pp_0_2 + 130'h1; //(~reg_mul1 + 1.U)
  wire [130:0] _pp_r_4 = {_pp_r_56, 1'h0}; //((~reg_mul1 + 1.U)<<1.U)
  
  //由下往上
  wire [129:0] _pp_T_1 = 3'h1 == reg_temp_mul2[2:0] ? reg_mul1 : 130'h0; // @[Mux.scala 81:58]
  wire [129:0] _pp_T_2 = 3'h2 == reg_temp_mul2[2:0] ? reg_mul1 : _pp_T_1; // @[Mux.scala 81:58]
  wire [130:0] _pp_T_3 = 3'h3 == reg_temp_mul2[2:0] ? _pp_r_3 : {{1'd0}, _pp_T_2}; // @[Mux.scala 81:58]
  wire [130:0] _pp_T_4 = 3'h4 == reg_temp_mul2[2:0] ? _pp_r_4 : _pp_T_3; // @[Mux.scala 81:58]
  wire [130:0] _pp_T_5 = 3'h5 == reg_temp_mul2[2:0] ? {{1'd0}, _pp_r_56} : _pp_T_4; // @[Mux.scala 81:58]
  wire [130:0] pp = 3'h6 == reg_temp_mul2[2:0] ? {{1'd0}, _pp_r_56} : _pp_T_5; // @[Mux.scala 81:58]

  reg [6:0] reg_cnt; // @[mu_exu.scala 65:50]
  wire  _ready_valid = io_valid ? 1'h0 : 1'h1; // @[mu_exu.scala 76:36 68:49 77:49]
  wire [129:0] _mul1_valid = io_valid ? mul_data1 : 130'h0; // @[mu_exu.scala 76:36 71:49 80:49]

  wire [130:0] _GEN_30 = {{1'd0}, reg_result}; // @[mu_exu.scala 85:63]
  wire [130:0] _reg_result_T_1 = _GEN_30 + pp; // @[mu_exu.scala 85:63]

   wire [131:0] _GEN_31 = {reg_mul1, 2'h0}; // @[mu_exu.scala 86:61]
   wire [132:0] _reg_mul1_T = {{1'd0}, _GEN_31}; // @[mu_exu.scala 86:61]

  wire [66:0] _reg_temp_mul2_T = {{2'd0}, reg_temp_mul2[66:2]}; // @[mu_exu.scala 87:58]

  wire [6:0] _reg_cnt_T_1 = reg_cnt + 7'h1; // @[mu_exu.scala 88:76]

  wire  _ready_2 = 2'h2 == reg_state | reg_ready; // @[mu_exu.scala 66:26 48:32]

  wire [130:0] _result_state2 = 2'h2 == reg_state ? _reg_result_T_1 : {{1'd0}, reg_result}; // @[mu_exu.scala 66:26 53:42]
  wire [130:0] _result_state1 = 2'h1 == reg_state ? _reg_result_T_1 : _result_state2; // @[mu_exu.scala 66:26 85:49]
  wire [132:0] _mul1_state2 = 2'h1 == reg_state ? _reg_mul1_T : {{3'd0}, reg_mul1}; // @[mu_exu.scala 66:26 52:42 86:49]
  wire  _ready_1 = 2'h1 == reg_state ? reg_ready : _ready_2; // @[mu_exu.scala 66:26 90:49]
  wire  _ready_0 = 2'h0 == reg_state ? _ready_valid : _ready_1; // ready的状态随着state和valid变化
  wire [132:0] _mul1_state0 = 2'h0 == reg_state ? {{3'd0}, _mul1_valid} : _mul1_state2; // @[mu_exu.scala 66:26]
  wire [130:0] _result_state0 = 2'h0 == reg_state ? 131'h0 : _result_state1; // @[mu_exu.scala 66:26 72:49]
  wire  reg_not_h = reg_exuType[3:2] == 2'h0; // @[mu_exu.scala 108:45]
  wire  reg_is_32 = reg_exuType[0]; // @[mu_exu.scala 109:38]

  wire [31:0] _io_dest_data_T_11 = reg_result[31] ? 32'hffffffff : 32'h0; // @[Bitwise.scala 77:12]
  wire [63:0] _io_dest_data_T_1 = {_io_dest_data_T_11,reg_result[31:0]}; // @[Cat.scala 33:92]
  wire [63:0] _io_dest_data_T_2 = reg_not_h ? reg_result[63:0] : reg_result[127:64]; // @[mu_exu.scala 110:91]

  wire [132:0] _mul1_reset = reset ? 133'h0 : _mul1_state0; // @[mu_exu.scala 52:{42,42}]
  wire [130:0] _result_reset = reset ? 131'h0 : _result_state0; // @[mu_exu.scala 53:{42,42}]
  assign io_dest_data = reg_is_32 ? _io_dest_data_T_1 : _io_dest_data_T_2; // @[mu_exu.scala 110:31]
  assign io_dest_is_w = reg_dest_is_w; // @[mu_exu.scala 111:25]
  assign io_ready = reg_ready; // @[mu_exu.scala 112:33]
  always @(posedge clock) begin
    reg_ready <= reset | _ready_0; // @[mu_exu.scala 48:{32,32}]
    if (reset) begin // @[mu_exu.scala 50:42]
      reg_state <= 2'h0; // @[mu_exu.scala 50:42]
    end else if (2'h0 == reg_state) begin // @[mu_exu.scala 66:26]
      if (io_valid) begin // @[mu_exu.scala 76:36]
        reg_state <= 2'h1; // @[mu_exu.scala 78:49]
      end else begin
        reg_state <= 2'h0; // @[mu_exu.scala 69:49]
      end
    end else if (2'h1 == reg_state) begin // @[mu_exu.scala 66:26]
      if (reg_cnt == 7'h20) begin // @[mu_exu.scala 89:77]
        reg_state <= 2'h2;
      end
    end else if (2'h2 == reg_state) begin // @[mu_exu.scala 66:26]
      reg_state <= 2'h0;
    end
    if (reset) begin // @[mu_exu.scala 51:38]
      reg_temp_mul2 <= 67'h0; // @[mu_exu.scala 51:38]
    end else if (2'h0 == reg_state) begin // @[mu_exu.scala 66:26]
      if (io_valid) begin // @[mu_exu.scala 76:36]
        reg_temp_mul2 <= temp_mul2; // @[mu_exu.scala 79:47]
      end else begin
        reg_temp_mul2 <= 67'h0; // @[mu_exu.scala 70:41]
      end
    end else if (2'h1 == reg_state) begin // @[mu_exu.scala 66:26]
      reg_temp_mul2 <= _reg_temp_mul2_T; // @[mu_exu.scala 87:41]
    end
    reg_mul1 <= _mul1_reset[129:0]; // @[mu_exu.scala 52:{42,42}]
    reg_result <= _result_reset[129:0]; // @[mu_exu.scala 53:{42,42}]
    if (reset) begin // @[mu_exu.scala 54:42]
      reg_exuType <= 7'h0; // @[mu_exu.scala 54:42]
    end else if (2'h0 == reg_state) begin // @[mu_exu.scala 66:26]
      if (io_valid) begin // @[mu_exu.scala 76:36]
        reg_exuType <= io_exuType; // @[mu_exu.scala 81:49]
      end else begin
        reg_exuType <= 7'h0; // @[mu_exu.scala 73:49]
      end
    end
    if (reset) begin // @[mu_exu.scala 55:42]
      reg_dest_is_w <= 1'h0; // @[mu_exu.scala 55:42]
    end else if (2'h0 == reg_state) begin // @[mu_exu.scala 66:26]
      reg_dest_is_w <= 1'h0; // @[mu_exu.scala 74:41]
    end else if (!(2'h1 == reg_state)) begin // @[mu_exu.scala 66:26]
      reg_dest_is_w <= 2'h2 == reg_state | reg_dest_is_w;
    end
    if (reset) begin // @[mu_exu.scala 65:50]
      reg_cnt <= 7'h0; // @[mu_exu.scala 65:50]
    end else if (2'h0 == reg_state) begin // @[mu_exu.scala 66:26]
      reg_cnt <= 7'h0; // @[mu_exu.scala 75:49]
    end else if (2'h1 == reg_state) begin // @[mu_exu.scala 66:26]
      reg_cnt <= _reg_cnt_T_1; // @[mu_exu.scala 88:49]
    end else if (2'h2 == reg_state) begin // @[mu_exu.scala 66:26]
      reg_cnt <= 7'h0;
    end
  end
endmodule

module DIV(
  input         clock,
  input         reset,
  input         io_valid,
  input  [63:0] io_rs1_data,
  input  [63:0] io_rs2_data,
  input  [6:0]  io_exuType,
  output [63:0] io_dest_data,
  output        io_dest_is_w,
  output        io_ready
);
  wire  is_32 = io_exuType[0]; // @[mu_exu.scala 132:53]
  wire  is_signed = ~io_exuType[2]; // @[mu_exu.scala 133:35]
  wire [32:0] _dividend_T_111 = io_rs1_data[31] ? 33'h1ffffffff : 33'h0; // @[Bitwise.scala 77:12]
  wire [64:0] _dividend_T_11 = {_dividend_T_111,io_rs1_data[31:0]}; // @[Cat.scala 33:92]
  wire [64:0] _dividend_T_12 = {33'h0,io_rs1_data[31:0]}; // @[Cat.scala 33:92]
  wire [64:0] _dividend_T_1 = is_signed ? _dividend_T_11 : _dividend_T_12; // @[mu_exu.scala 135:58]
  wire [64:0] _dividend_T_21 = {io_rs1_data[63],io_rs1_data}; // @[Cat.scala 33:92]
  wire [64:0] _dividend_T_22 = {1'h0,io_rs1_data}; // @[Cat.scala 33:92]
  wire [64:0] _dividend_T_2 = is_signed ? _dividend_T_21 : _dividend_T_22; // @[mu_exu.scala 136:52]
  wire [64:0] _dividend_T = is_32 ? _dividend_T_1 : _dividend_T_2; // @[mu_exu.scala 135:48]
  wire [64:0] dividend = io_valid ? _dividend_T : 65'h0; // @[mu_exu.scala 135:38]

  wire [32:0] _divisor_T_111 = io_rs2_data[31] ? 33'h1ffffffff : 33'h0; // @[Bitwise.scala 77:12]
  wire [64:0] _divisor_T_11 = {_divisor_T_111,io_rs2_data[31:0]}; // @[Cat.scala 33:92]
  wire [64:0] _divisor_T_12 = {33'h0,io_rs2_data[31:0]}; // @[Cat.scala 33:92]
  wire [64:0] _divisor_T_1 = is_signed ? _divisor_T_11 : _divisor_T_12; // @[mu_exu.scala 138:66]
  wire [64:0] _divisor_T_21 = {io_rs2_data[63],io_rs2_data}; // @[Cat.scala 33:92]
  wire [64:0] _divisor_T_22 = {1'h0,io_rs2_data}; // @[Cat.scala 33:92]
  wire [64:0] _divisor_T_2 = is_signed ? _divisor_T_21 : _divisor_T_22; // @[mu_exu.scala 139:52]
  wire [64:0] _divisor_T = is_32 ? _divisor_T_1 : _divisor_T_2; // @[mu_exu.scala 138:56]
  wire [64:0] divisor = io_valid ? _divisor_T : 65'h0; // @[mu_exu.scala 138:46]

  wire [64:0] _rem_T_11 = io_rs1_data[31] ? 65'h1ffffffffffffffff : 65'h0; // @[Bitwise.scala 77:12]
  wire [64:0] _rem_T_1 = is_signed ? _rem_T_11 : 65'h0; // @[mu_exu.scala 141:66]
  wire [64:0] _rem_T_22 = io_rs1_data[63] ? 65'h1ffffffffffffffff : 65'h0; // @[Bitwise.scala 77:12]
  wire [64:0] _rem_T_2 = is_signed ? _rem_T_22 : 65'h0; // @[mu_exu.scala 141:107]
  wire [64:0] _rem_T = is_32 ? _rem_T_1 : _rem_T_2; // @[mu_exu.scala 141:56]
  wire [64:0] rem = io_valid ? _rem_T : 65'h0; // @[mu_exu.scala 141:46]

  reg [64:0] reg_divisor;
  reg [65:0] reg_dividend;
  reg [64:0] reg_rem;
  reg [65:0] reg_q;
  wire [64:0] _neg_divisor_T = ~reg_divisor;
  wire [64:0] neg_divisor = _neg_divisor_T + 65'h1;
  reg [1:0] reg_state;
  reg [6:0] reg_cnt;
  reg [6:0] reg_exuType;
  reg  reg_ready;

//加减交替补码法则，如果余数与除数异号，则余数加除数，商上1。 同号，则余数减除数，商上0
  wire [130:0] rem_q = {reg_rem,reg_q}; // @[Cat.scala 33:92]
  wire [131:0] rem_q_lshift_1 = {rem_q, 1'h0}; // @[mu_exu.scala 155:68]
  wire  _temp_result_T_4 = reg_rem[64] ^ reg_divisor[64]; // @[mu_exu.scala 155:90]
  wire [130:0] _temp_result_T_5 = {reg_divisor,66'h0}; // @[Cat.scala 33:92]
  wire [130:0] _temp_result_T_6 = {neg_divisor,66'h1}; // @[Cat.scala 33:92]
  wire [130:0] _temp_result_T_7 = reg_rem[64] ^ reg_divisor[64] ? _temp_result_T_5 : _temp_result_T_6; // @[mu_exu.scala 155:78]
//wire [131:0] _GEN_44 = {{1'd0}, _temp_result_T_7};
  wire [131:0] _temp_result_T = rem_q_lshift_1 + {{1'd0}, _temp_result_T_7};
  wire [131:0] temp_result = !reg_ready ? _temp_result_T : 132'h0;

  wire  rem_is_0 = reg_rem == 65'h0;
  wire  rem_is_neg_div = reg_rem == neg_divisor;
  wire  rem_is_div = reg_rem == reg_divisor;
  wire  is_need_correct = (!reg_ready) & ((reg_rem[64] ^ reg_dividend[65]) & ~rem_is_0 | rem_is_neg_div | rem_is_div);
  reg  reg_dest_is_w;
  wire [65:0] _reg_dividend_T = {dividend,1'h0}; // @[Cat.scala 33:92]

  wire [64:0] _reg_rem_T_4 = rem + divisor; // @[mu_exu.scala 181:92]

  wire [64:0] _reg_rem_T_5 = ~divisor; // @[mu_exu.scala 181:106]
  wire [64:0] _reg_rem_T_7 = rem + _reg_rem_T_5; // @[mu_exu.scala 181:104]
  wire [64:0] _reg_rem_T_9 = _reg_rem_T_7 + 65'h1; // @[mu_exu.scala 181:115]

  wire [65:0] _q_valid = io_valid ? _reg_dividend_T : 66'h0; // @[mu_exu.scala 178:36 169:41 180:49]
  wire  _ready_valid = io_valid ? 1'h0 : 1'h1; // @[mu_exu.scala 178:36 172:49 183:57]
  wire [6:0] _reg_cnt_T_1 = reg_cnt + 7'h1; // @[mu_exu.scala 189:68]

  wire [66:0] _reg_q_T_5 = {reg_q, 1'h1}; //(reg_q<<1.U)+1.U)
  wire [65:0] _reg_q_T_13 = reg_q - 66'h1;
  wire [65:0] _reg_q_T_15 = reg_q + 66'h1;
  wire [65:0] _GEN_8 = _temp_result_T_4 ? _reg_q_T_13 : _reg_q_T_15;
  wire [65:0] _q_correct = is_need_correct ? _GEN_8 : reg_q;
  wire [65:0] _q_state3 = 2'h3 == reg_state ? _q_correct : reg_q;
  wire [66:0] _q_state2 = 2'h2 == reg_state ? _reg_q_T_5 : {{1'd0}, _q_state3};
  wire [66:0] _q_state1 = 2'h1 == reg_state ? {{1'd0}, temp_result[65:0]} : _q_state2;
  wire [66:0] _q_state0 = 2'h0 == reg_state ? {{1'd0}, _q_valid} : _q_state1;
  wire [66:0] _q_reset = reset ? 67'h0 : _q_state0;
  wire [66:0] _q_reset = reset ? 67'h0 : _q_state0;

  wire [64:0] _reg_rem_T_13 = reg_rem + reg_divisor;
  wire [64:0] _reg_rem_T_15 = reg_rem + neg_divisor;
  wire [64:0] _GEN_7 = _temp_result_T_4 ? _reg_rem_T_13 : _reg_rem_T_15;
  wire [64:0] _GEN_9 = is_need_correct ? _GEN_7 : reg_rem;

  wire  _ready_state3 = 2'h3 == reg_state | reg_ready; // @[mu_exu.scala 166:26 154:42]

 // @[mu_exu.scala 166:26 146:50]
  wire [64:0] _GEN_18 = 2'h3 == reg_state ? _GEN_9 : reg_rem; // @[mu_exu.scala 166:26 145:42]

  wire [1:0] _GEN_21 = 2'h3 == reg_state ? 2'h0 : reg_state; // @[mu_exu.scala 166:26 151:42]
  wire [6:0] _GEN_22 = 2'h3 == reg_state ? 7'h0 : reg_cnt; // @[mu_exu.scala 166:26 152:50]

  wire  _ready_state2 = 2'h2 == reg_state ? reg_ready : _ready_state3; // @[mu_exu.scala 166:26 198:41]
  wire  _ready_state1 = 2'h1 == reg_state ? reg_ready : _ready_state2; // @[mu_exu.scala 166:26 193:41]
  wire  _ready_state0 = 2'h0 == reg_state ? _ready_valid : _ready_state1; // @[mu_exu.scala 166:26]

  wire  reg_is_32 = reg_exuType[0]; // @[mu_exu.scala 226:46]
  wire  reg_is_rem = reg_exuType[3]; // @[mu_exu.scala 227:46]
  wire [31:0] _rem_adjust_T_2 = reg_rem[31] ? 32'hffffffff : 32'h0; // @[Bitwise.scala 77:12]
  wire [63:0] _rem_adjust_T_4 = {_rem_adjust_T_2,reg_rem[31:0]}; // @[Cat.scala 33:92]
  wire [63:0] rem_adjust = reg_is_32 ? _rem_adjust_T_4 : reg_rem[63:0]; // @[mu_exu.scala 228:38]
  wire [31:0] _q_adjust_T_2 = reg_q[31] ? 32'hffffffff : 32'h0; // @[Bitwise.scala 77:12]
  wire [63:0] _q_adjust_T_4 = {_q_adjust_T_2,reg_q[31:0]}; // @[Cat.scala 33:92]
  wire [63:0] q_adjust = reg_is_32 ? _q_adjust_T_4 : reg_q[63:0]; // @[mu_exu.scala 229:38]

  assign io_dest_data = reg_is_rem ? rem_adjust : q_adjust; // @[mu_exu.scala 230:39]
  assign io_dest_is_w = reg_dest_is_w; // @[mu_exu.scala 231:33]
  assign io_ready = reg_ready; // @[mu_exu.scala 232:41]
  always @(posedge clock) begin
    if (reset) begin // @[mu_exu.scala 143:42]
      reg_divisor <= 65'h0; // @[mu_exu.scala 143:42]
    end else if (2'h0 == reg_state) begin // @[mu_exu.scala 166:26]
      if (io_valid) begin // @[mu_exu.scala 178:36]
        if (io_valid) begin // @[mu_exu.scala 138:46]
          reg_divisor <= _divisor_T;
        end else begin
          reg_divisor <= 65'h0;
        end
      end else begin
        reg_divisor <= 65'h0; // @[mu_exu.scala 168:41]
      end
    end
    if (reset) begin // @[mu_exu.scala 144:42]
      reg_dividend <= 66'h0; // @[mu_exu.scala 144:42]
    end else if (2'h0 == reg_state) begin // @[mu_exu.scala 166:26]
      if (io_valid) begin // @[mu_exu.scala 178:36]
        reg_dividend <= _reg_dividend_T; // @[mu_exu.scala 180:49]
      end else begin
        reg_dividend <= 66'h0; // @[mu_exu.scala 169:41]
      end
    end
    if (reset) begin // @[mu_exu.scala 145:42]
      reg_rem <= 65'h0; // @[mu_exu.scala 145:42]
    end else if (2'h0 == reg_state) begin // @[mu_exu.scala 166:26]
      if (io_valid) begin // @[mu_exu.scala 178:36]
        if (divisor[64] ^ dividend[64]) begin // @[mu_exu.scala 181:63]
          reg_rem <= _reg_rem_T_4;
        end else begin
          reg_rem <= _reg_rem_T_9;
        end
      end else begin
        reg_rem <= 65'h0; // @[mu_exu.scala 170:49]
      end
    end else if (2'h1 == reg_state) begin // @[mu_exu.scala 166:26]
      reg_rem <= temp_result[130:66]; // @[mu_exu.scala 191:41]
    end else if (!(2'h2 == reg_state)) begin // @[mu_exu.scala 166:26]
      reg_rem <= _GEN_18;
    end
    reg_q <= _q_reset[65:0]; // @[mu_exu.scala 146:{50,50}]
    if (reset) begin // @[mu_exu.scala 151:42]
      reg_state <= 2'h0; // @[mu_exu.scala 151:42]
    end else if (2'h0 == reg_state) begin // @[mu_exu.scala 166:26]
      if (io_valid) begin // @[mu_exu.scala 178:36]
        reg_state <= 2'h1; // @[mu_exu.scala 182:57]
      end else begin
        reg_state <= 2'h0; // @[mu_exu.scala 171:49]
      end
    end else if (2'h1 == reg_state) begin // @[mu_exu.scala 166:26]
      if (reg_cnt == 7'h40) begin // @[mu_exu.scala 192:69]
        reg_state <= 2'h2;
      end
    end else if (2'h2 == reg_state) begin // @[mu_exu.scala 166:26]
      reg_state <= 2'h3; // @[mu_exu.scala 197:41]
    end else begin
      reg_state <= _GEN_21;
    end
    if (reset) begin // @[mu_exu.scala 152:50]
      reg_cnt <= 7'h0; // @[mu_exu.scala 152:50]
    end else if (2'h0 == reg_state) begin // @[mu_exu.scala 166:26]
      reg_cnt <= 7'h0; // @[mu_exu.scala 176:49]
    end else if (2'h1 == reg_state) begin // @[mu_exu.scala 166:26]
      reg_cnt <= _reg_cnt_T_1; // @[mu_exu.scala 189:41]
    end else if (!(2'h2 == reg_state)) begin // @[mu_exu.scala 166:26]
      reg_cnt <= _GEN_22;
    end
    if (reset) begin // @[mu_exu.scala 153:42]
      reg_exuType <= 7'h0; // @[mu_exu.scala 153:42]
    end else if (2'h0 == reg_state) begin // @[mu_exu.scala 166:26]
      if (io_valid) begin // @[mu_exu.scala 178:36]
        reg_exuType <= io_exuType; // @[mu_exu.scala 184:57]
      end else begin
        reg_exuType <= 7'h0; // @[mu_exu.scala 173:49]
      end
    end
    reg_ready <= reset | _ready_state0; // @[mu_exu.scala 154:{42,42}]
    if (reset) begin // @[mu_exu.scala 164:42]
      reg_dest_is_w <= 1'h0; // @[mu_exu.scala 164:42]
    end else if (2'h0 == reg_state) begin // @[mu_exu.scala 166:26]
      reg_dest_is_w <= 1'h0; // @[mu_exu.scala 177:41]
    end else if (!(2'h1 == reg_state)) begin // @[mu_exu.scala 166:26]
      if (!(2'h2 == reg_state)) begin // @[mu_exu.scala 166:26]
        reg_dest_is_w <= 2'h3 == reg_state | reg_dest_is_w;
      end
    end
  end
endmodule
module MU_EXU(
  input         clock,
  input         reset,
  input         io_valid,
  input  [6:0]  io_exu_type,
  input  [63:0] io_rs1_data,
  input  [63:0] io_rs2_data,
  output [63:0] io_dest_data,
  output        io_dest_is_w,
  output        io_ready
);
  wire  div_clock; // @[mu_exu.scala 246:25]
  wire  div_reset; // @[mu_exu.scala 246:25]
  wire  div_io_valid; // @[mu_exu.scala 246:25]
  wire [63:0] div_io_rs1_data; // @[mu_exu.scala 246:25]
  wire [63:0] div_io_rs2_data; // @[mu_exu.scala 246:25]
  wire [6:0] div_io_exuType; // @[mu_exu.scala 246:25]
  wire [63:0] div_io_dest_data; // @[mu_exu.scala 246:25]
  wire  div_io_dest_is_w; // @[mu_exu.scala 246:25]
  wire  div_io_ready; // @[mu_exu.scala 246:25]
  wire  mul_clock; // @[mu_exu.scala 247:25]
  wire  mul_reset; // @[mu_exu.scala 247:25]
  wire  mul_io_valid; // @[mu_exu.scala 247:25]
  wire [63:0] mul_io_rs1_data; // @[mu_exu.scala 247:25]
  wire [63:0] mul_io_rs2_data; // @[mu_exu.scala 247:25]
  wire [6:0] mul_io_exuType; // @[mu_exu.scala 247:25]
  wire [63:0] mul_io_dest_data; // @[mu_exu.scala 247:25]
  wire  mul_io_dest_is_w; // @[mu_exu.scala 247:25]
  wire  mul_io_ready; // @[mu_exu.scala 247:25]
  DIV div ( // @[mu_exu.scala 246:25]
    .clock(div_clock),
    .reset(div_reset),
    .io_valid(div_io_valid),
    .io_rs1_data(div_io_rs1_data),
    .io_rs2_data(div_io_rs2_data),
    .io_exuType(div_io_exuType),
    .io_dest_data(div_io_dest_data),
    .io_dest_is_w(div_io_dest_is_w),
    .io_ready(div_io_ready)
  );
  MUL mul ( // @[mu_exu.scala 247:25]
    .clock(mul_clock),
    .reset(mul_reset),
    .io_valid(mul_io_valid),
    .io_rs1_data(mul_io_rs1_data),
    .io_rs2_data(mul_io_rs2_data),
    .io_exuType(mul_io_exuType),
    .io_dest_data(mul_io_dest_data),
    .io_dest_is_w(mul_io_dest_is_w),
    .io_ready(mul_io_ready)
  );
  assign io_dest_data = div_io_dest_is_w ? div_io_dest_data : mul_io_dest_data; // @[mu_exu.scala 261:31]
  assign io_dest_is_w = div_io_dest_is_w | mul_io_dest_is_w; // @[mu_exu.scala 262:45]
  assign io_ready = div_io_ready & mul_io_ready; // @[mu_exu.scala 263:49]
  assign div_clock = clock;
  assign div_reset = reset;
  assign div_io_valid = io_valid & io_exu_type[4]; // @[mu_exu.scala 248:45]
  assign div_io_rs1_data = io_rs1_data; // @[mu_exu.scala 250:33]
  assign div_io_rs2_data = io_rs2_data; // @[mu_exu.scala 251:33]
  assign div_io_exuType = io_exu_type; // @[mu_exu.scala 252:33]
  assign mul_clock = clock;
  assign mul_reset = reset;
  assign mul_io_valid = io_valid & ~io_exu_type[4]; // @[mu_exu.scala 254:45]
  assign mul_io_rs1_data = io_rs1_data; // @[mu_exu.scala 256:33]
  assign mul_io_rs2_data = io_rs2_data; // @[mu_exu.scala 257:33]
  assign mul_io_exuType = io_exu_type; // @[mu_exu.scala 258:33]
endmodule