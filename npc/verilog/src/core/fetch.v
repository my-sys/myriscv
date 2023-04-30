module IBuf(
  input         clock,
  input         reset,
  input         io_flush,
  output        io_cache_buf_ready,
  input         io_cache_buf_valid,
  input  [63:0] io_cache_buf_bits_pc,
  input  [31:0] io_cache_buf_bits_inst,
  input         io_cache_buf_bits_is_pre,
  input         io_put_pc_ready,
  output        io_put_pc_valid,
  output [31:0] io_put_pc_bits_inst,
  output [63:0] io_put_pc_bits_pc,
  output        io_put_pc_bits_is_pre
);
reg [63:0] ibuf_pc[4];
reg [31:0] ibuf_inst[4];
reg  ibuf_is_pre[4];

reg  ibuf_valid[4];
reg [1:0] reg_head;
reg [1:0] reg_tail;
reg [2:0] reg_ibuf_size;
wire enq_size = io_cache_buf_ready & io_cache_buf_valid;
wire can_deq = io_put_pc_ready & ibuf_valid[reg_tail];
wire [2:0] result_size = reg_ibuf_size + {{2'd0},enq_size} - {{2'd0},can_deq};
assign io_cache_buf_ready = reg_ibuf_size < 3'h3; // @[fetch.scala 45:41]
assign io_put_pc_valid = ibuf_valid[reg_tail]; // @[fetch.scala 40:{33,33}]
assign io_put_pc_bits_inst = ibuf_inst[reg_tail]; // @[fetch.scala 76:{33,33}]
assign io_put_pc_bits_pc = ibuf_pc[reg_tail]; // @[fetch.scala 75:{33,33}]
assign io_put_pc_bits_is_pre = ibuf_is_pre[reg_tail]; // @[fetch.scala 77:{31,31}]

always @(posedge clock)begin 
	if (reset) begin
		ibuf_pc[0] <= 0;
		ibuf_pc[0] <= 0;
		ibuf_pc[0] <= 0;
		ibuf_pc[0] <= 0;
		ibuf_inst[0] <= 0;
		ibuf_inst[1] <= 0;
		ibuf_inst[2] <= 0;
		ibuf_inst[3] <= 0;
		ibuf_is_pre[0] <= 1'b0;
		ibuf_is_pre[1] <= 1'b0;
		ibuf_is_pre[2] <= 1'b0;
		ibuf_is_pre[3] <= 1'b0;

		reg_head <= 0;
		reg_tail <= 0;
		reg_ibuf_size <= 0;
		ibuf_valid[0] <= 1'b0;
		ibuf_valid[1] <= 1'b0;
		ibuf_valid[2] <= 1'b0;
		ibuf_valid[3] <= 1'b0;
	end else if(io_flush)begin
		reg_head <= 0;
		reg_tail <= 0;
		reg_ibuf_size <= 0;
		ibuf_valid[0] <= 1'b0;
		ibuf_valid[1] <= 1'b0;
		ibuf_valid[2] <= 1'b0;
		ibuf_valid[3] <= 1'b0;
	end else begin 
		if(can_deq)begin 
			reg_tail <= reg_tail + 1;
			ibuf_valid[reg_tail] <=1'b0;
		end
		if(enq_size)begin 
			reg_head <= reg_head + 1;
			ibuf_pc[reg_head] <= io_cache_buf_bits_pc;
			ibuf_inst[reg_head] <= io_cache_buf_bits_inst;
			ibuf_is_pre[reg_head] <= io_cache_buf_bits_is_pre;
			ibuf_valid[reg_head] <= 1'b1;
		end 
		reg_ibuf_size 	<= result_size;
	end 
end 
endmodule

module Fetch(
  input         clock,
  input         reset,
  input         io_br_info_valid,
  input         io_br_info_mispredict,
  input  [63:0] io_br_info_br_pc,
  input         io_br_info_taken,
  input  [63:0] io_br_info_target_next_pc,
  input         io_get_pre_info_valid,
  output [63:0] io_get_pre_info_pre_next_pc,
  input  [63:0] io_next_pc,
  input         io_flush,
  input         io_cpu_addr_ready,
  output        io_cpu_addr_valid,
  output [63:0] io_cpu_addr_bits_addr,
  output        io_cpu_data_ready,
  input         io_cpu_data_valid,
  input  [63:0] io_cpu_data_bits_data,
  input  [63:0] io_cpu_data_bits_pc,
  input         io_put_pc_ready,
  output        io_put_pc_valid,
  output [31:0] io_put_pc_bits_inst,
  output [63:0] io_put_pc_bits_pc,
  output        io_put_pc_bits_is_pre,
  output        io_out_flush
);

  wire  ibuf_clock; // @[fetch.scala 94:49]
  wire  ibuf_reset; // @[fetch.scala 94:49]
  wire  ibuf_io_flush; // @[fetch.scala 94:49]
  wire  ibuf_io_cache_buf_ready; // @[fetch.scala 94:49]
  wire  ibuf_io_cache_buf_valid; // @[fetch.scala 94:49]
  wire [63:0] ibuf_io_cache_buf_bits_pc; // @[fetch.scala 94:49]
  wire [31:0] ibuf_io_cache_buf_bits_inst; // @[fetch.scala 94:49]
  wire  ibuf_io_cache_buf_bits_is_pre; // @[fetch.scala 94:49]
  wire  ibuf_io_put_pc_ready; // @[fetch.scala 94:49]
  wire  ibuf_io_put_pc_valid; // @[fetch.scala 94:49]
  wire [31:0] ibuf_io_put_pc_bits_inst; // @[fetch.scala 94:49]
  wire [63:0] ibuf_io_put_pc_bits_pc; // @[fetch.scala 94:49]
  wire  ibuf_io_put_pc_bits_is_pre; // @[fetch.scala 94:49]
  wire  br_predictor_clock; // @[fetch.scala 141:34]
  wire  br_predictor_reset; // @[fetch.scala 141:34]
  wire  br_predictor_io_br_info_valid; // @[fetch.scala 141:34]
  wire  br_predictor_io_br_info_mispredict; // @[fetch.scala 141:34]
  wire [63:0] br_predictor_io_br_info_br_pc; // @[fetch.scala 141:34]
  wire  br_predictor_io_br_info_taken; // @[fetch.scala 141:34]
  wire [63:0] br_predictor_io_br_info_target_next_pc; // @[fetch.scala 141:34]
  wire [63:0] br_predictor_io_pc; // @[fetch.scala 141:34]
  wire [63:0] br_predictor_io_pre_next_pc; // @[fetch.scala 141:34]
  wire  br_predictor_io_pre_valid; // @[fetch.scala 141:34]
  reg [63:0] reg_pc_0; // @[fetch.scala 95:42]
  reg  reg_flush; // @[fetch.scala 96:42]
  reg [63:0] reg_next_pc; // @[fetch.scala 97:42]
  reg  reg_bus_valid; // @[fetch.scala 135:42]
  reg [1:0] pre_info_head; // @[fetch.scala 147:42]
  reg [1:0] pre_info_tail; // @[fetch.scala 148:42]
  reg [63:0] pre_info_fifo[4];
  wire  _pre_enq_T = io_cpu_addr_ready & io_cpu_addr_valid; // @[Decoupled.scala 52:35]
  wire  pre_enq = _pre_enq_T & br_predictor_io_pre_valid; // @[fetch.scala 152:40]
  wire [63:0] _pre_info_fifo_pre_info_head = br_predictor_io_pre_next_pc; // @[fetch.scala 167:{54,54}]
  wire [1:0] _pre_info_head_T_1 = pre_info_head + 2'h1; // @[fetch.scala 168:58]
  wire [1:0] _pre_info_tail_T_1 = pre_info_tail + 2'h1; // @[fetch.scala 171:58]
  wire [63:0] _GEN_20 = pre_info_fifo[pre_info_tail];

  reg [1:0] is_pre_head; // @[fetch.scala 178:34]
  reg [1:0] is_pre_tail; // @[fetch.scala 179:34]

  reg is_pre_fifo[4];

  wire [1:0] _is_pre_head_T_1 = is_pre_head + 2'h1; // @[fetch.scala 190:52]
  wire  _T_2 = io_cpu_data_ready & io_cpu_data_valid; // @[Decoupled.scala 52:35]
  wire [1:0] _is_pre_tail_T_1 = is_pre_tail + 2'h1; // @[fetch.scala 194:52]
  wire [63:0] _reg_pc_0_T_1 = reg_pc_0 + 64'h4; // @[fetch.scala 206:76]
  wire [63:0] _reg_pc_0_T_2 = br_predictor_io_pre_valid ? br_predictor_io_pre_next_pc : _reg_pc_0_T_1; // @[fetch.scala 206:47]
  wire  _GEN_39 = ~ibuf_io_cache_buf_ready ? 1'h0 : reg_bus_valid; // @[fetch.scala 209:29 210:39 135:42]
  wire  _GEN_40 = ibuf_io_cache_buf_ready | reg_bus_valid; // @[fetch.scala 216:28 217:39 135:42]
  wire  _GEN_43 = _pre_enq_T ? _GEN_39 : _GEN_40; // @[fetch.scala 200:31]
  wire  _GEN_47 = is_pre_fifo[is_pre_tail];
  IBuf ibuf ( // @[fetch.scala 94:49]
    .clock(ibuf_clock),
    .reset(ibuf_reset),
    .io_flush(ibuf_io_flush),
    .io_cache_buf_ready(ibuf_io_cache_buf_ready),
    .io_cache_buf_valid(ibuf_io_cache_buf_valid),
    .io_cache_buf_bits_pc(ibuf_io_cache_buf_bits_pc),
    .io_cache_buf_bits_inst(ibuf_io_cache_buf_bits_inst),
    .io_cache_buf_bits_is_pre(ibuf_io_cache_buf_bits_is_pre),
    .io_put_pc_ready(ibuf_io_put_pc_ready),
    .io_put_pc_valid(ibuf_io_put_pc_valid),
    .io_put_pc_bits_inst(ibuf_io_put_pc_bits_inst),
    .io_put_pc_bits_pc(ibuf_io_put_pc_bits_pc),
    .io_put_pc_bits_is_pre(ibuf_io_put_pc_bits_is_pre)
  );
  Br_predictor br_predictor ( // @[fetch.scala 141:34]
    .clock(br_predictor_clock),
    .reset(br_predictor_reset),
    .io_br_info_valid(br_predictor_io_br_info_valid),
    .io_br_info_mispredict(br_predictor_io_br_info_mispredict),
    .io_br_info_br_pc(br_predictor_io_br_info_br_pc),
    .io_br_info_taken(br_predictor_io_br_info_taken),
    .io_br_info_target_next_pc(br_predictor_io_br_info_target_next_pc),
    .io_pc(br_predictor_io_pc),
    .io_pre_next_pc(br_predictor_io_pre_next_pc),
    .io_pre_valid(br_predictor_io_pre_valid)
  );
  assign io_get_pre_info_pre_next_pc = io_get_pre_info_valid ? _GEN_20 : 64'h0; // @[fetch.scala 176:43]
  assign io_cpu_addr_valid = reg_bus_valid; // @[fetch.scala 228:41]
  assign io_cpu_addr_bits_addr = reg_pc_0; // @[fetch.scala 229:33]
  assign io_cpu_data_ready = ibuf_io_cache_buf_ready; // @[fetch.scala 230:41]
  assign io_put_pc_valid = ibuf_io_put_pc_valid; // @[fetch.scala 231:19]
  assign io_put_pc_bits_inst = ibuf_io_put_pc_bits_inst; // @[fetch.scala 231:19]
  assign io_put_pc_bits_pc = ibuf_io_put_pc_bits_pc; // @[fetch.scala 231:19]
  assign io_put_pc_bits_is_pre = ibuf_io_put_pc_bits_is_pre; // @[fetch.scala 231:19]
  assign io_out_flush = reg_flush | io_flush; // @[fetch.scala 232:35]
  assign ibuf_clock = clock;
  assign ibuf_reset = reset;
  assign ibuf_io_flush = io_flush; // @[fetch.scala 222:49]
  assign ibuf_io_cache_buf_valid = io_cpu_data_valid & ~reg_flush & ~io_flush; // @[fetch.scala 226:78]
  assign ibuf_io_cache_buf_bits_pc = io_cpu_data_bits_pc; // @[fetch.scala 223:41]
  assign ibuf_io_cache_buf_bits_inst = io_cpu_data_bits_pc[2] ? io_cpu_data_bits_data[63:32] : io_cpu_data_bits_data[31:
    0]; // @[fetch.scala 138:23]
  assign ibuf_io_cache_buf_bits_is_pre = 2'h3 == is_pre_tail ? is_pre_fifo[3] : _GEN_47; // @[fetch.scala 225:{39,39}]
  assign ibuf_io_put_pc_ready = io_put_pc_ready; // @[fetch.scala 231:19]
  assign br_predictor_clock = clock;
  assign br_predictor_reset = reset;
  assign br_predictor_io_br_info_valid = io_br_info_valid; // @[fetch.scala 142:33]
  assign br_predictor_io_br_info_mispredict = io_br_info_mispredict; // @[fetch.scala 142:33]
  assign br_predictor_io_br_info_br_pc = io_br_info_br_pc; // @[fetch.scala 142:33]
  assign br_predictor_io_br_info_taken = io_br_info_taken; // @[fetch.scala 142:33]
  assign br_predictor_io_br_info_target_next_pc = io_br_info_target_next_pc; // @[fetch.scala 142:33]
  assign br_predictor_io_pc = reg_pc_0; // @[fetch.scala 143:28]

always @(posedge clock) begin 
    if (reset) begin // @[fetch.scala 95:42]
      reg_pc_0 <= 64'h80000000; // @[fetch.scala 95:42]
	  reg_flush <= 1'h0;
	  reg_next_pc <= 64'h0;
    end else if (_pre_enq_T) begin // @[fetch.scala 200:31]
      if (io_flush) begin // @[fetch.scala 201:28]
        reg_pc_0 <= io_next_pc; // @[fetch.scala 202:41]
      end else if (reg_flush) begin // @[fetch.scala 203:38]
        reg_pc_0 <= reg_next_pc; // @[fetch.scala 204:41]
      end else begin
        reg_pc_0 <= _reg_pc_0_T_2; // @[fetch.scala 206:41]
      end
	  reg_flush <= 1'h0;
	end else begin 
		reg_flush <= io_flush | reg_flush;
        if (io_flush) begin // @[fetch.scala 214:35]
        	reg_next_pc <= io_next_pc;
      	end
	end 
	reg_bus_valid <= reset | _GEN_43;
end

always @(posedge clock) begin 
	if(reset)begin 
		pre_info_head <= 2'h0;
		pre_info_tail <= 2'h0;
		pre_info_fifo[0] <= 64'h0;
		pre_info_fifo[1] <= 64'h0;
		pre_info_fifo[2] <= 64'h0;
		pre_info_fifo[3] <= 64'h0;
		is_pre_head <= 2'h0;
		is_pre_tail <= 2'h0;
		is_pre_fifo[0] <= 1'h0;
		is_pre_fifo[1] <= 1'h0;
		is_pre_fifo[2] <= 1'h0;
		is_pre_fifo[3] <= 1'h0;
	end else if (io_out_flush)begin 
		pre_info_head <= 2'h0;
		pre_info_tail <= 2'h0;
		pre_info_fifo[0] <= 64'h0;
		pre_info_fifo[1] <= 64'h0;
		pre_info_fifo[2] <= 64'h0;
		pre_info_fifo[3] <= 64'h0;
		is_pre_head <= 2'h0;
		is_pre_tail <= 2'h0;
		is_pre_fifo[0] <= 1'h0;
		is_pre_fifo[1] <= 1'h0;
		is_pre_fifo[2] <= 1'h0;
		is_pre_fifo[3] <= 1'h0;
	end else begin
		if (pre_enq)begin 
			pre_info_head <= _pre_info_head_T_1;
			pre_info_fifo[pre_info_head] <= _pre_info_fifo_pre_info_head;
		end 
		if(io_get_pre_info_valid)begin 
			pre_info_tail <= _pre_info_tail_T_1;
		end 
		if(_pre_enq_T)begin 
			is_pre_head <= _is_pre_head_T_1;
			is_pre_fifo[is_pre_head] <= br_predictor_io_pre_valid;
		end 
		if(_T_2)begin 
			is_pre_tail <= _is_pre_tail_T_1;
		end 
	end
end
endmodule