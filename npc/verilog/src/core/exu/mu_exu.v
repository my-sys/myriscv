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

  wire [97:0] mul_data1_T_98 = io_rs1_data[31] ? 98'h3ffffffffffffffffffffffff : 98'h0;
  wire [65:0] mul_data1_T_66 = io_rs1_data[63] ? 66'h3ffffffffffffffff : 66'h0;
  wire [32:0] mul_data2_T_33 = io_rs2_data[31] ? 33'h1ffffffff : 33'h0;
  wire [129:0] mul_data1 = io_valid?(is_32?({mul_data1_T_98,io_rs1_data[31:0]}):
  							is_rs1_signed?({mul_data1_T_66,io_rs1_data}):{66'h0,io_rs1_data}
							):130'h0;
  wire [64:0] mul_data2 = io_valid?(is_32?({mul_data2_T_33,io_rs2_data[31:0]}):
  									is_rs2_signed?({io_rs2_data[63],io_rs2_data}):{1'b0,io_rs2_data}
									):65'h0;

  wire [66:0] temp_mul2 = {mul_data2[64],mul_data2,1'h0}; // @[Cat.scala 33:92]
  reg  reg_ready; // @[mu_exu.scala 48:32]
  reg [1:0] reg_state; // @[mu_exu.scala 50:42]
  reg [66:0] reg_temp_mul2; // @[mu_exu.scala 51:38]
  reg [129:0] reg_mul1; // @[mu_exu.scala 52:42]
  reg [129:0] reg_result; // @[mu_exu.scala 53:42]
  reg [6:0] reg_exuType; // @[mu_exu.scala 54:42]
  reg  reg_dest_is_w; // @[mu_exu.scala 55:42]

  wire[129:0] pp_T = (~reg_mul1 + 130'h1);
  wire [129:0] pp = (reg_temp_mul2[2:0] == 3'b000)?130'h0:
					(reg_temp_mul2[2:0] == 3'b001)?reg_mul1:
					(reg_temp_mul2[2:0] == 3'b010)?reg_mul1:
					(reg_temp_mul2[2:0] == 3'b011)?({reg_mul1[128:0],1'b0}):
					(reg_temp_mul2[2:0] == 3'b100)?{pp_T[128:0],1'b0}:
					(reg_temp_mul2[2:0] == 3'b101)?pp_T:
					(reg_temp_mul2[2:0] == 3'b110)?pp_T:130'h0;
  wire [129:0] result_T = reg_result + pp;
  reg [6:0] reg_cnt; // @[mu_exu.scala 65:50]

  wire  reg_not_h = reg_exuType[3:2] == 2'h0; // @[mu_exu.scala 108:45]
  wire  reg_is_32 = reg_exuType[0]; // @[mu_exu.scala 109:38]

  wire [63:0] _io_dest_data_T_4 = reg_result[31]? {32'hffff_ffff,reg_result[31:0]}:{32'h0,reg_result[31:0]};
  wire [63:0] _io_dest_data_T_7 = reg_not_h?reg_result[63:0]:reg_result[127:64];
  assign io_dest_data = reg_is_32 ? _io_dest_data_T_4 : _io_dest_data_T_7; // @[mu_exu.scala 110:31]
  assign io_dest_is_w = reg_dest_is_w; // @[mu_exu.scala 111:25]
  assign io_ready = reg_ready; // @[mu_exu.scala 112:33]

//val mul_start :: mul_busy :: mul_end :: Nil = Enum(3)
always @(posedge clock)begin 
	if(reset)begin 
		reg_state <= 2'h0;
		reg_ready <= 1'b1;
		reg_temp_mul2 <= 67'h0;
		reg_mul1 	<= 130'h0;
		reg_result  <= 130'h0;
		reg_exuType <= 7'h0;
		reg_dest_is_w <= 1'b0;
		reg_cnt     <= 7'h0;
	end else begin 
		case (reg_state)
			2'h0:begin 
				reg_ready 	<= 1'b1;
				reg_state 	<= 2'h0;
				reg_temp_mul2 <= 67'h0;
				reg_mul1 	<= 130'h0;
				reg_result  <= 130'h0;
				reg_exuType <= 7'h0;
				reg_dest_is_w <= 1'b0;
				reg_cnt     <= 7'h0;
				if(io_valid)begin 
					reg_ready <= 1'b0;
					reg_state <= 2'h1;
					reg_temp_mul2 <= temp_mul2;
					reg_mul1	<= mul_data1;
					reg_exuType	<= io_exuType;
				end 
			end 
			2'h1:begin   // mul_busy
				reg_result 	<= result_T;
				reg_mul1	<= {reg_mul1[127:0],2'b0};
				reg_temp_mul2	<= {2'b0,reg_temp_mul2[66:2]};
				reg_cnt		<= reg_cnt + 7'h1;
				reg_state   <= (reg_cnt == 7'h20)? 2'h2:reg_state;
				//reg_ready  <= reg_ready;
			end 
			2'h2:begin 
				reg_result		<= result_T;
				reg_ready		<= 1'b1;
				reg_state		<= 2'h0;
				reg_cnt			<= 7'h0;
				reg_dest_is_w	<= 1'b1;
			end 
			default:;
		endcase
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
  wire [32:0] _dividend_T_2 = io_rs1_data[31] ? 33'h1ffffffff : 33'h0; // @[Bitwise.scala 77:12]
  wire [64:0] _dividend_T_4 = {_dividend_T_2,io_rs1_data[31:0]}; // @[Cat.scala 33:92]
  wire [64:0] _dividend_T_7 = {33'h0,io_rs1_data[31:0]}; // @[Cat.scala 33:92]
  wire [64:0] _dividend_T_8 = is_signed ? _dividend_T_4 : _dividend_T_7; // @[mu_exu.scala 135:58]
  wire [64:0] _dividend_T_11 = {io_rs1_data[63],io_rs1_data}; // @[Cat.scala 33:92]
  wire [64:0] _dividend_T_13 = {1'h0,io_rs1_data}; // @[Cat.scala 33:92]
  wire [64:0] _dividend_T_14 = is_signed ? _dividend_T_11 : _dividend_T_13; // @[mu_exu.scala 136:52]
  wire [64:0] _dividend_T_15 = is_32 ? _dividend_T_8 : _dividend_T_14; // @[mu_exu.scala 135:48]
  wire [64:0] dividend = io_valid ? _dividend_T_15 : 65'h0; // @[mu_exu.scala 135:38]
  wire [32:0] _divisor_T_2 = io_rs2_data[31] ? 33'h1ffffffff : 33'h0; // @[Bitwise.scala 77:12]
  wire [64:0] _divisor_T_4 = {_divisor_T_2,io_rs2_data[31:0]}; // @[Cat.scala 33:92]
  wire [64:0] _divisor_T_7 = {33'h0,io_rs2_data[31:0]}; // @[Cat.scala 33:92]
  wire [64:0] _divisor_T_8 = is_signed ? _divisor_T_4 : _divisor_T_7; // @[mu_exu.scala 138:66]
  wire [64:0] _divisor_T_11 = {io_rs2_data[63],io_rs2_data}; // @[Cat.scala 33:92]
  wire [64:0] _divisor_T_13 = {1'h0,io_rs2_data}; // @[Cat.scala 33:92]
  wire [64:0] _divisor_T_14 = is_signed ? _divisor_T_11 : _divisor_T_13; // @[mu_exu.scala 139:52]
  wire [64:0] _divisor_T_15 = is_32 ? _divisor_T_8 : _divisor_T_14; // @[mu_exu.scala 138:56]
  wire [64:0] divisor = io_valid ? _divisor_T_15 : 65'h0; // @[mu_exu.scala 138:46]
  wire [64:0] _rem_T_2 = io_rs1_data[31] ? 65'h1ffffffffffffffff : 65'h0; // @[Bitwise.scala 77:12]
  wire [64:0] _rem_T_3 = is_signed ? _rem_T_2 : 65'h0; // @[mu_exu.scala 141:66]
  wire [64:0] _rem_T_6 = io_rs1_data[63] ? 65'h1ffffffffffffffff : 65'h0; // @[Bitwise.scala 77:12]
  wire [64:0] _rem_T_7 = is_signed ? _rem_T_6 : 65'h0; // @[mu_exu.scala 141:107]
  wire [64:0] _rem_T_8 = is_32 ? _rem_T_3 : _rem_T_7; // @[mu_exu.scala 141:56]
  wire [64:0] rem = io_valid ? _rem_T_8 : 65'h0; // @[mu_exu.scala 141:46]
  reg [64:0] reg_divisor; // @[mu_exu.scala 143:42]
  reg [65:0] reg_dividend; // @[mu_exu.scala 144:42]
  reg [64:0] reg_rem; // @[mu_exu.scala 145:42]
  reg [65:0] reg_q; // @[mu_exu.scala 146:50]
  wire [64:0] _neg_divisor_T = ~reg_divisor; // @[mu_exu.scala 149:36]
  wire [64:0] neg_divisor = _neg_divisor_T + 65'h1; // @[mu_exu.scala 149:50]
  reg [1:0] reg_state; // @[mu_exu.scala 151:42]
  reg [6:0] reg_cnt; // @[mu_exu.scala 152:50]
  reg [6:0] reg_exuType; // @[mu_exu.scala 153:42]
  reg  reg_ready; // @[mu_exu.scala 154:42]
  wire [130:0] _temp_result_T = {reg_rem,reg_q}; // @[Cat.scala 33:92]
  wire [131:0] _temp_result_T_1 = {_temp_result_T, 1'h0}; // @[mu_exu.scala 155:68]
  wire  _temp_result_T_4 = reg_rem[64] ^ reg_divisor[64]; // @[mu_exu.scala 155:90]
  wire [130:0] _temp_result_T_5 = {reg_divisor,66'h0}; // @[Cat.scala 33:92]
  wire [130:0] _temp_result_T_6 = {neg_divisor,66'h1}; // @[Cat.scala 33:92]
  wire [130:0] _temp_result_T_7 = reg_rem[64] ^ reg_divisor[64] ? _temp_result_T_5 : _temp_result_T_6; // @[mu_exu.scala 155:78]
  wire [131:0] _GEN_44 = {{1'd0}, _temp_result_T_7}; // @[mu_exu.scala 155:74]
  wire [131:0] _temp_result_T_9 = _temp_result_T_1 + _GEN_44; // @[mu_exu.scala 155:74]
  wire [131:0] temp_result = !reg_ready ? _temp_result_T_9 : 132'h0; // @[mu_exu.scala 155:38]
  wire  rem_is_0 = reg_rem == 65'h0; // @[mu_exu.scala 158:33]
  wire  rem_is_neg_div = reg_rem == neg_divisor; // @[mu_exu.scala 159:39]
  wire  rem_is_div = reg_rem == reg_divisor; // @[mu_exu.scala 160:39]
  wire  is_need_correct = (!reg_ready) & ((reg_rem[64] ^ reg_dividend[65]) & ~rem_is_0 | rem_is_neg_div | rem_is_div); // @[mu_exu.scala 161:34]
  reg  reg_dest_is_w; // @[mu_exu.scala 164:42]
  wire [65:0] _reg_dividend_T = {dividend,1'h0}; // @[Cat.scala 33:92]
  wire [64:0] _reg_rem_T_4 = rem + divisor; // @[mu_exu.scala 181:92]
  wire [64:0] _reg_rem_T_5 = ~divisor; // @[mu_exu.scala 181:106]
  wire [64:0] _reg_rem_T_7 = rem + _reg_rem_T_5; // @[mu_exu.scala 181:104]
  wire [64:0] _reg_rem_T_9 = _reg_rem_T_7 + 65'h1; // @[mu_exu.scala 181:115]
  wire [65:0] _GEN_1 = io_valid ? _reg_dividend_T : 66'h0; // @[mu_exu.scala 178:36 169:41 180:49]
  wire  _GEN_4 = io_valid ? 1'h0 : 1'h1; // @[mu_exu.scala 178:36 172:49 183:57]
  wire [6:0] _reg_cnt_T_1 = reg_cnt + 7'h1; // @[mu_exu.scala 189:68]
  wire [66:0] _reg_q_T_5 = {reg_q, 1'h0}; // @[mu_exu.scala 196:82]
  wire [66:0] _reg_q_T_7 = _reg_q_T_5 + 67'h1; // @[mu_exu.scala 196:88]
  wire [66:0] _reg_q_T_11 = _temp_result_T_4 ? _reg_q_T_7 : _reg_q_T_7; // @[mu_exu.scala 196:47]
  wire [64:0] _reg_rem_T_13 = reg_rem + reg_divisor; // @[mu_exu.scala 212:68]
  wire [65:0] _reg_q_T_13 = reg_q - 66'h1; // @[mu_exu.scala 213:66]
  wire [64:0] _reg_rem_T_15 = reg_rem + neg_divisor; // @[mu_exu.scala 215:68]
  wire [65:0] _reg_q_T_15 = reg_q + 66'h1; // @[mu_exu.scala 216:66]
  wire [64:0] _GEN_7 = _temp_result_T_4 ? _reg_rem_T_13 : _reg_rem_T_15; // @[mu_exu.scala 211:74 212:57 215:57]
  wire [65:0] _GEN_8 = _temp_result_T_4 ? _reg_q_T_13 : _reg_q_T_15; // @[mu_exu.scala 211:74 213:57 216:57]
  wire [64:0] _GEN_9 = is_need_correct ? _GEN_7 : reg_rem; // @[mu_exu.scala 145:42 210:54]
  wire [65:0] _GEN_10 = is_need_correct ? _GEN_8 : reg_q; // @[mu_exu.scala 146:50 210:54]
  wire [65:0] _GEN_17 = 2'h3 == reg_state ? _GEN_10 : reg_q; // @[mu_exu.scala 166:26 146:50]
  wire [64:0] _GEN_18 = 2'h3 == reg_state ? _GEN_9 : reg_rem; // @[mu_exu.scala 166:26 145:42]
  wire  _GEN_19 = 2'h3 == reg_state | reg_ready; // @[mu_exu.scala 166:26 154:42]
  wire [1:0] _GEN_21 = 2'h3 == reg_state ? 2'h0 : reg_state; // @[mu_exu.scala 166:26 151:42]
  wire [6:0] _GEN_22 = 2'h3 == reg_state ? 7'h0 : reg_cnt; // @[mu_exu.scala 166:26 152:50]
  wire [66:0] _GEN_23 = 2'h2 == reg_state ? _reg_q_T_11 : {{1'd0}, _GEN_17}; // @[mu_exu.scala 166:26 196:41]
  wire  _GEN_25 = 2'h2 == reg_state ? reg_ready : _GEN_19; // @[mu_exu.scala 166:26 198:41]
  wire [66:0] _GEN_30 = 2'h1 == reg_state ? {{1'd0}, temp_result[65:0]} : _GEN_23; // @[mu_exu.scala 166:26 190:41]
  wire  _GEN_33 = 2'h1 == reg_state ? reg_ready : _GEN_25; // @[mu_exu.scala 166:26 193:41]
  wire  _GEN_39 = 2'h0 == reg_state ? _GEN_4 : _GEN_33; // @[mu_exu.scala 166:26]
  wire [66:0] _GEN_41 = 2'h0 == reg_state ? {{1'd0}, _GEN_1} : _GEN_30; // @[mu_exu.scala 166:26]
  wire  reg_is_32 = reg_exuType[0]; // @[mu_exu.scala 226:46]
  wire  reg_is_rem = reg_exuType[3]; // @[mu_exu.scala 227:46]
  wire [31:0] _rem_adjust_T_2 = reg_rem[31] ? 32'hffffffff : 32'h0; // @[Bitwise.scala 77:12]
  wire [63:0] _rem_adjust_T_4 = {_rem_adjust_T_2,reg_rem[31:0]}; // @[Cat.scala 33:92]
  wire [63:0] rem_adjust = reg_is_32 ? _rem_adjust_T_4 : reg_rem[63:0]; // @[mu_exu.scala 228:38]
  wire [31:0] _q_adjust_T_2 = reg_q[31] ? 32'hffffffff : 32'h0; // @[Bitwise.scala 77:12]
  wire [63:0] _q_adjust_T_4 = {_q_adjust_T_2,reg_q[31:0]}; // @[Cat.scala 33:92]
  wire [63:0] q_adjust = reg_is_32 ? _q_adjust_T_4 : reg_q[63:0]; // @[mu_exu.scala 229:38]
  wire [66:0] _GEN_45 = reset ? 67'h0 : _GEN_41; // @[mu_exu.scala 146:{50,50}]
  assign io_dest_data = reg_is_rem ? rem_adjust : q_adjust; // @[mu_exu.scala 230:39]
  assign io_dest_is_w = reg_dest_is_w; // @[mu_exu.scala 231:33]
  assign io_ready = reg_ready; // @[mu_exu.scala 232:41]
  always @(posedge clock) begin
    if (reset) begin // @[mu_exu.scala 143:42]
      reg_divisor <= 65'h0; // @[mu_exu.scala 143:42]
    end else if (2'h0 == reg_state) begin // @[mu_exu.scala 166:26]
      if (io_valid) begin // @[mu_exu.scala 178:36]
        if (io_valid) begin // @[mu_exu.scala 138:46]
          reg_divisor <= _divisor_T_15;
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
    reg_q <= _GEN_45[65:0]; // @[mu_exu.scala 146:{50,50}]
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
    reg_ready <= reset | _GEN_39; // @[mu_exu.scala 154:{42,42}]
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