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
  wire [97:0] _mul_data1_T_2 = io_rs1_data[31] ? 98'h3ffffffffffffffffffffffff : 98'h0; // @[Bitwise.scala 77:12]
  wire [129:0] _mul_data1_T_4 = {_mul_data1_T_2,io_rs1_data[31:0]}; // @[Cat.scala 33:92]
  wire [65:0] _mul_data1_T_7 = io_rs1_data[63] ? 66'h3ffffffffffffffff : 66'h0; // @[Bitwise.scala 77:12]
  wire [129:0] _mul_data1_T_8 = {_mul_data1_T_7,io_rs1_data}; // @[Cat.scala 33:92]
  wire [129:0] _mul_data1_T_9 = {66'h0,io_rs1_data}; // @[Cat.scala 33:92]
  wire [129:0] _mul_data1_T_10 = is_rs1_signed ? _mul_data1_T_8 : _mul_data1_T_9; // @[mu_exu.scala 44:90]
  wire [129:0] _mul_data1_T_11 = is_32 ? _mul_data1_T_4 : _mul_data1_T_10; // @[mu_exu.scala 44:38]
  wire [129:0] mul_data1 = io_valid ? _mul_data1_T_11 : 130'h0; // @[mu_exu.scala 44:28]
  wire [32:0] _mul_data2_T_2 = io_rs2_data[31] ? 33'h1ffffffff : 33'h0; // @[Bitwise.scala 77:12]
  wire [64:0] _mul_data2_T_4 = {_mul_data2_T_2,io_rs2_data[31:0]}; // @[Cat.scala 33:92]
  wire [64:0] _mul_data2_T_6 = {io_rs2_data[63],io_rs2_data}; // @[Cat.scala 33:92]
  wire [64:0] _mul_data2_T_7 = {1'h0,io_rs2_data}; // @[Cat.scala 33:92]
  wire [64:0] _mul_data2_T_8 = is_rs2_signed ? _mul_data2_T_6 : _mul_data2_T_7; // @[mu_exu.scala 45:90]
  wire [64:0] _mul_data2_T_9 = is_32 ? _mul_data2_T_4 : _mul_data2_T_8; // @[mu_exu.scala 45:38]
  wire [64:0] mul_data2 = io_valid ? _mul_data2_T_9 : 65'h0; // @[mu_exu.scala 45:28]
  wire [66:0] temp_mul2 = {mul_data2[64],mul_data2,1'h0}; // @[Cat.scala 33:92]
  reg  reg_ready; // @[mu_exu.scala 48:32]
  reg [1:0] reg_state; // @[mu_exu.scala 50:42]
  reg [66:0] reg_temp_mul2; // @[mu_exu.scala 51:38]
  reg [129:0] reg_mul1; // @[mu_exu.scala 52:42]
  reg [129:0] reg_result; // @[mu_exu.scala 53:42]
  reg [6:0] reg_exuType; // @[mu_exu.scala 54:42]
  reg  reg_dest_is_w; // @[mu_exu.scala 55:42]
  wire [130:0] _pp_T_1 = {reg_mul1, 1'h0}; // @[mu_exu.scala 60:51]
  wire [129:0] _pp_T_2 = ~reg_mul1; // @[mu_exu.scala 61:43]
  wire [129:0] _pp_T_4 = _pp_T_2 + 130'h1; // @[mu_exu.scala 61:53]
  wire [130:0] _pp_T_5 = {_pp_T_4, 1'h0}; // @[mu_exu.scala 61:59]
  wire [129:0] _pp_T_15 = 3'h1 == reg_temp_mul2[2:0] ? reg_mul1 : 130'h0; // @[Mux.scala 81:58]
  wire [129:0] _pp_T_17 = 3'h2 == reg_temp_mul2[2:0] ? reg_mul1 : _pp_T_15; // @[Mux.scala 81:58]
  wire [130:0] _pp_T_19 = 3'h3 == reg_temp_mul2[2:0] ? _pp_T_1 : {{1'd0}, _pp_T_17}; // @[Mux.scala 81:58]
  wire [130:0] _pp_T_21 = 3'h4 == reg_temp_mul2[2:0] ? _pp_T_5 : _pp_T_19; // @[Mux.scala 81:58]
  wire [130:0] _pp_T_23 = 3'h5 == reg_temp_mul2[2:0] ? {{1'd0}, _pp_T_4} : _pp_T_21; // @[Mux.scala 81:58]
  wire [130:0] pp = 3'h6 == reg_temp_mul2[2:0] ? {{1'd0}, _pp_T_4} : _pp_T_23; // @[Mux.scala 81:58]
  reg [6:0] reg_cnt; // @[mu_exu.scala 65:50]
  wire  _GEN_0 = io_valid ? 1'h0 : 1'h1; // @[mu_exu.scala 76:36 68:49 77:49]
  wire [129:0] _GEN_3 = io_valid ? mul_data1 : 130'h0; // @[mu_exu.scala 76:36 71:49 80:49]
  wire [130:0] _GEN_30 = {{1'd0}, reg_result}; // @[mu_exu.scala 85:63]
  wire [130:0] _reg_result_T_1 = _GEN_30 + pp; // @[mu_exu.scala 85:63]
  wire [131:0] _GEN_31 = {reg_mul1, 2'h0}; // @[mu_exu.scala 86:61]
  wire [132:0] _reg_mul1_T = {{1'd0}, _GEN_31}; // @[mu_exu.scala 86:61]
  wire [66:0] _reg_temp_mul2_T = {{2'd0}, reg_temp_mul2[66:2]}; // @[mu_exu.scala 87:58]
  wire [6:0] _reg_cnt_T_1 = reg_cnt + 7'h1; // @[mu_exu.scala 88:76]
  wire  _GEN_10 = 2'h2 == reg_state | reg_ready; // @[mu_exu.scala 66:26 48:32]
  wire [130:0] _GEN_14 = 2'h2 == reg_state ? _reg_result_T_1 : {{1'd0}, reg_result}; // @[mu_exu.scala 66:26 53:42]
  wire [130:0] _GEN_15 = 2'h1 == reg_state ? _reg_result_T_1 : _GEN_14; // @[mu_exu.scala 66:26 85:49]
  wire [132:0] _GEN_16 = 2'h1 == reg_state ? _reg_mul1_T : {{3'd0}, reg_mul1}; // @[mu_exu.scala 66:26 52:42 86:49]
  wire  _GEN_20 = 2'h1 == reg_state ? reg_ready : _GEN_10; // @[mu_exu.scala 66:26 90:49]
  wire  _GEN_22 = 2'h0 == reg_state ? _GEN_0 : _GEN_20; // @[mu_exu.scala 66:26]
  wire [132:0] _GEN_25 = 2'h0 == reg_state ? {{3'd0}, _GEN_3} : _GEN_16; // @[mu_exu.scala 66:26]
  wire [130:0] _GEN_26 = 2'h0 == reg_state ? 131'h0 : _GEN_15; // @[mu_exu.scala 66:26 72:49]
  wire  reg_not_h = reg_exuType[3:2] == 2'h0; // @[mu_exu.scala 108:45]
  wire  reg_is_32 = reg_exuType[0]; // @[mu_exu.scala 109:38]
  wire [31:0] _io_dest_data_T_2 = reg_result[31] ? 32'hffffffff : 32'h0; // @[Bitwise.scala 77:12]
  wire [63:0] _io_dest_data_T_4 = {_io_dest_data_T_2,reg_result[31:0]}; // @[Cat.scala 33:92]
  wire [63:0] _io_dest_data_T_7 = reg_not_h ? reg_result[63:0] : reg_result[127:64]; // @[mu_exu.scala 110:91]
  wire [132:0] _GEN_34 = reset ? 133'h0 : _GEN_25; // @[mu_exu.scala 52:{42,42}]
  wire [130:0] _GEN_35 = reset ? 131'h0 : _GEN_26; // @[mu_exu.scala 53:{42,42}]
  assign io_dest_data = reg_is_32 ? _io_dest_data_T_4 : _io_dest_data_T_7; // @[mu_exu.scala 110:31]
  assign io_dest_is_w = reg_dest_is_w; // @[mu_exu.scala 111:25]
  assign io_ready = reg_ready; // @[mu_exu.scala 112:33]
  always @(posedge clock) begin
    reg_ready <= reset | _GEN_22; // @[mu_exu.scala 48:{32,32}]
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
    reg_mul1 <= _GEN_34[129:0]; // @[mu_exu.scala 52:{42,42}]
    reg_result <= _GEN_35[129:0]; // @[mu_exu.scala 53:{42,42}]
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
  wire  is_32 = io_exuType[0];
  wire  is_signed = ~io_exuType[2];
  wire [32:0] _dividend_T_11 = io_rs1_data[31] ? 33'h1ffffffff : 33'h0;
  wire [64:0] _dividend_T_1 = is_signed ?{_dividend_T_11,io_rs1_data[31:0]} :{33'h0,io_rs1_data[31:0]};
  wire [64:0] _dividend_T_2 = is_signed ?{io_rs1_data[63],io_rs1_data}:{1'b0,io_rs1_data};
  wire [64:0] _dividend_T_1_2 = is_32? _dividend_T_1: _dividend_T_2;

  wire [32:0] _divisor_T_11 = io_rs2_data[31] ? 33'h1ffffffff : 33'h0;
  wire [64:0] _divisor_T_1 = is_signed ?{_divisor_T_11,io_rs2_data[31:0]} :{33'h0,io_rs2_data[31:0]};
  wire [64:0] _divisor_T_2 = is_signed ?{io_rs2_data[63],io_rs2_data}:{1'b0,io_rs2_data};
  wire [64:0] _divisor_T_1_2 = is_32? _divisor_T_1: _divisor_T_2;

  wire [64:0] _rem_T_11 = io_rs1_data[31] ? 65'h1ffffffffffffffff : 65'h0;
  wire [64:0] _rem_T_22 = io_rs1_data[63] ? 65'h1ffffffffffffffff : 65'h0;
  wire [64:0] _rem_T_1  = is_signed? _rem_T_11: 65'h0;
  wire [64:0] _rem_T_2  = is_signed? _rem_T_22: 65'h0;
  wire [64:0] _rem_T_1_2 = is_32?_rem_T_1:_rem_T_2;


  wire [64:0] dividend = io_valid ? _dividend_T_1_2 : 65'h0;
  wire [64:0] divisor = io_valid ? _divisor_T_1_2 : 65'h0;
  wire [64:0] rem = io_valid ? _rem_T_1_2 : 65'h0;
  reg [64:0] reg_divisor;
  reg [65:0] reg_dividend; 
  reg [64:0] reg_rem;
  reg [65:0] reg_q;
  wire [64:0] neg_divisor = (~reg_divisor) + 65'h1; // @[mu_exu.scala 149:50]
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

always @(posedge clock)begin 
	if(reset)begin 
		reg_divisor		<= 65'h0;
		reg_dividend 	<= 66'h0;
		reg_rem			<= 65'h0;
		reg_state		<= 2'h0;
		reg_ready		<= 1'h1;
		reg_exuType		<= 7'h0;
		reg_q			<= 66'h0;
		reg_cnt			<= 7'h0;
		reg_dest_is_w	<= 1'b0;
		reg_ready		<= 1'b1;
	end else begin 
		case (reg_state)
			2'h0:begin 
				reg_dest_is_w <= 1'b0;
				if(io_valid)begin 
					reg_divisor	<= divisor;
					reg_dividend <= {dividend,1'b0};
					reg_rem		<= (divisor[64]^dividend[64])?(rem+divisor):(rem+(~divisor)+65'h1);
					reg_state	<= 2'h1;
					reg_ready   <= 1'b0;
					reg_exuType	<= io_exuType;
					reg_q		<= {dividend,1'b0};
					reg_cnt 	<= 7'h0;
				end 
			end 
			2'h1:begin 
				reg_cnt <= reg_cnt + 7'h1;
				reg_q	<= temp_result[65:0];
				reg_rem <= temp_result[130:66];
				reg_state <= (reg_cnt == 7'h40)?2'h2:reg_state;
				//reg_ready
			end 
			2'h2:begin 
				reg_q <= {reg_q[64:0],1'b0}+66'h1;
				reg_state <= 2'h3;
				//reg_ready
			end 
			2'h3:begin 
				if(is_need_correct)begin 
					if(reg_rem[64]^reg_divisor[64])begin 
						reg_rem <= reg_rem + reg_divisor;
						reg_q 	<= reg_q - 66'h1;
					end else begin 
						reg_rem <= reg_rem + neg_divisor;
						reg_q 	<= reg_q + 66'h1;
					end 
				end
				reg_ready <= 1'b1;
				reg_dest_is_w <= 1'b1;
				reg_state  <= 2'h0;
				reg_cnt    <= 7'h0;
			end
			default:;
		endcase
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