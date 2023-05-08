//本代码由chisel代码而来，只是为了加快仿真速度，考核而设计。正规的代码是chisel代码
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
//ICache_Stage0 阶段主要保存valid信号以及取指地址。
//这两个信号必须在ready有效的时候才更新
//如果存在flush则本次valid信号为无效，为何不冲刷寄存器，有如下考虑
//fetch阶段冲刷信号会一直保留直到接收到值，并舍弃接收到的值。
//当ready从无效变为有效时，冲刷信号都还在。
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
//valid 由!flush和 输入valid构成
  wire  valid = io_cpu_addr_valid & ~io_flush; // @[icache.scala 79:40]
//下一阶段准备好接收，并且本阶段已经取得sram值置ready
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
//为何有些信号没有经过本阶段的reg,因为本阶段请求读取sram,然后接收到sram。sram读取值只要本阶段地址不变就不会改变
  assign io_cache_stage1_valid = reg_valid & io_sram_ready; // @[icache.scala 116:70]
  assign io_cache_stage1_bits_cpu_addr = reg_cpu_addr; // @[icache.scala 117:49]
  assign io_cache_stage1_bits_sram_0_hit = reg_tag == tag_0; // @[icache.scala 104:36]
  assign io_cache_stage1_bits_sram_0_tag_valid = io_tag_valid_tag_valid_0; // @[icache.scala 119:49]
  assign io_cache_stage1_bits_sram_0_rdata = reg_offset[3] ? io_sram_sram_data_0[127:64] : io_sram_sram_data_0[63:0]; // @[icache.scala 108:30]
  assign io_cache_stage1_bits_sram_1_hit = reg_tag == tag_1; // @[icache.scala 105:36]
  assign io_cache_stage1_bits_sram_1_tag_valid = io_tag_valid_tag_valid_1; // @[icache.scala 123:49]
  assign io_cache_stage1_bits_sram_1_rdata = reg_offset[3] ? io_sram_sram_data_1[127:64] : io_sram_sram_data_1[63:0]; // @[icache.scala 109:30]
//valid信号和地址信号需要存储
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
  input          io_cache_stage1_bits_sram_0_hit,  //hit_0
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

// val hit_0 		= io.cache_stage1.bits.sram(0).hit  被chisel编译优化，消失
// val hit_1 		= io.cache_stage1.bits.sram(1).hit
// val tag_valid_0 = io.cache_stage1.bits.sram(0).tag_valid
// val tag_valid_1	= io.cache_stage1.bits.sram(1).tag_valid
// val rdata0 	= io.cache_stage1.bits.sram(0).rdata
// val rdata1 	= io.cache_stage1.bits.sram(1).rdata
//val cpu_addr 	= io.cache_stage1.bits.cpu_addr 被chisel编译优化，消失
wire [5:0] index = io_cache_stage1_bits_cpu_addr[9:4];
wire  valid = io_cache_stage1_valid & ~io_flush & io_rdata_ready;

reg  reg_chosen_tag;
reg [63:0] reg_rdata;
reg  reg_valid;
reg  reg_ready;

//------bus--------------- 
wire [63:0] temp_addr = {io_cache_stage1_bits_cpu_addr[63:4],4'h0};
reg [63:0] reg_r_raddr;
reg  reg_r_valid;

//-----write cache -------
reg [127:0] reg_cache_wdata;
reg  reg_cache_write;
reg [63:0] reg_cpu_addr;
wire [53:0] reg_tag = reg_cpu_addr[63:10];
wire [3:0] reg_offset = reg_cpu_addr[3:0];
//wire [5:0] reg_index = reg_cpu_addr[9:4];

//------------------------ LRU ------------------------------
// 1 bit LRU 
	////被chisel编译优化，消失
	//val reg_lru_0				= RegInit(0.U(64.W))
reg [63:0] reg_lru_1;
wire [63:0] _LRU_1_T = (reg_lru_1 >> index);
wire  LRU_1 = _LRU_1_T[0];
wire [63:0] chose_bit = 64'h1 << index;
wire [63:0] neg_chose_bit = ~chose_bit;

parameter bus_idle = 1'b0,bus_busy = 1'b1;//bus_wait = 2'b10;
reg  reg_bus_state;

wire [63:0] lru_1_and_neg_chose = reg_lru_1 & neg_chose_bit;
wire [63:0] lru_1_or_chose		= reg_lru_1 | chose_bit;

always @(posedge clock)begin 
	if(reset)begin 
		reg_lru_1 <= 64'h0;
	end else begin 
		if((reg_bus_state == bus_idle)&valid)begin 
			//hit_0,说明，值越低表示经常使用。hit_0中，则lru1对应位置1，hit_1 中 lru1对应位置0
			if(io_cache_stage1_bits_sram_0_hit) reg_lru_1 <= lru_1_or_chose;
			else if(io_cache_stage1_bits_sram_1_hit)reg_lru_1 <= lru_1_and_neg_chose;
			else begin 
				//tag_valid_0 & tag_valid_1 ,两个都有效，更换使用频率低(不经常使用)
				if(io_cache_stage1_bits_sram_0_tag_valid & io_cache_stage1_bits_sram_1_tag_valid)begin
					reg_lru_1 <= LRU_1?lru_1_and_neg_chose:lru_1_or_chose;
				end else begin 
					//存在无效的，先更换无效的
					reg_lru_1 <= io_cache_stage1_bits_sram_0_tag_valid?lru_1_and_neg_chose: lru_1_or_chose;
				end  
			end 
		end 
	end 
end 

//val ready = io.rdata.ready
//val cpu_addr 	= io.cache_stage1.bits.cpu_addr
wire io_cache_bus_r_fire = io_cache_bus_r_valid & io_cache_bus_r_ready;
always @(posedge clock)begin 
	if(reset)begin 

	end else begin 
		case (reg_bus_state)
			bus_idle: begin 
				reg_cache_write <= 1'b0;
				reg_chosen_tag  <= 1'b0;
				if(io_rdata_ready)begin 
					reg_valid	<= 1'b0;
					reg_cpu_addr <= io_cache_stage1_bits_cpu_addr;
				end
				reg_ready		<= 1'b1;
				reg_bus_state	<= bus_idle;
				reg_r_valid		<= 1'b0;
				if(valid)begin
					//一般情况下不会出现两个都中，如果两个都中，则说明tag为0 
					// 此时必然有一个无效。这种情况下强制为hit_0先有效
					// is_hit
					if(io_cache_stage1_bits_sram_0_hit | io_cache_stage1_bits_sram_1_hit)begin 
						reg_chosen_tag <= io_cache_stage1_bits_sram_0_hit? 1'b0:1'b1;
						//hit_valid , (hit_0 & hit0_valid) | (hit_1 & hit1_valid)
						if((io_cache_stage1_bits_sram_0_hit & io_cache_stage1_bits_sram_0_tag_valid)|(io_cache_stage1_bits_sram_1_hit & io_cache_stage1_bits_sram_1_tag_valid))begin 
							// read data from cache
							// ------ cpu----- 
							reg_rdata 		<= io_cache_stage1_bits_sram_0_hit? io_cache_stage1_bits_sram_0_rdata : io_cache_stage1_bits_sram_1_rdata;
							reg_valid		<= 1'b1;
							reg_ready 		<= 1'b1;
							reg_bus_state	<= bus_idle;
						end else begin 
							//------- bus----- 
							reg_valid			<= 1'b0;
							reg_ready 			<= 1'b0;
							reg_r_raddr 		<= temp_addr;
							reg_r_valid 		<= 1'b1;
							reg_bus_state		<= bus_busy;
						end 
					end else begin 
						reg_valid			<= 1'b0;
						reg_ready 			<= 1'b0;
						if(io_cache_stage1_bits_sram_0_tag_valid & io_cache_stage1_bits_sram_1_tag_valid)begin 
							reg_chosen_tag 		<= LRU_1;
							reg_r_raddr 		<= temp_addr;
							reg_r_valid 		<= 1'b1;
							reg_bus_state		<= bus_busy;
						end else begin 
							reg_chosen_tag 		<= io_cache_stage1_bits_sram_0_tag_valid?1'b1:1'b0;
							reg_r_raddr 		<= temp_addr;
							reg_r_valid 		<= 1'b1;
							reg_bus_state		<= bus_busy;
						end 
					end 
				end
			end 
			bus_busy: begin 
				if(io_cache_bus_r_fire)begin 
					if(io_cache_bus_r_bits_rlast)begin 
						reg_r_valid 	<= 1'b0;
						//----cpu---
						reg_valid			<= 1'b1;
						reg_rdata 			<= reg_offset[3]?io_cache_bus_r_bits_rdata:reg_cache_wdata[63:0];
						reg_cache_wdata		<= {io_cache_bus_r_bits_rdata,reg_cache_wdata[63:0]};
					end else begin 
						reg_cache_wdata 	<= {64'h0,io_cache_bus_r_bits_rdata};
					end 
				end 
				if(io_cache_bus_r_bits_rlast)begin 
					reg_cache_write 	<= 1'b1;
					reg_bus_state 		<= bus_idle;
					reg_ready 			<= 1'b1;
				end 
			end 
		endcase
	end 
end
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
  output [5:0]   io_sram_addr,
  output         io_sram_wen_0,
  output         io_sram_wen_1,
  output [127:0] io_sram_tag_wdata,
  output [127:0] io_sram_data_wdata,
  input  [127:0] io_sram_rdata_0,
  input  [127:0] io_sram_rdata_1,
  input  [127:0] io_sram_rdata_2,
  input  [127:0] io_sram_rdata_3,
  output         io_cache_bus_r_valid,
  output [63:0]  io_cache_bus_r_bits_raddr,
  input  [63:0]  io_cache_bus_r_bits_rdata,
  input          io_cache_bus_r_bits_rlast,
  input          io_cache_bus_r_ready
);
  wire  cache_stage0_clock; // @[icache.scala 329:34]
  wire  cache_stage0_reset; // @[icache.scala 329:34]
  wire  cache_stage0_io_flush; // @[icache.scala 329:34]
  wire  cache_stage0_io_cpu_addr_ready; // @[icache.scala 329:34]
  wire  cache_stage0_io_cpu_addr_valid; // @[icache.scala 329:34]
  wire [63:0] cache_stage0_io_cpu_addr_bits_addr; // @[icache.scala 329:34]
  wire  cache_stage0_io_addr_ready; // @[icache.scala 329:34]
  wire  cache_stage0_io_addr_valid; // @[icache.scala 329:34]
  wire [63:0] cache_stage0_io_addr_bits_addr; // @[icache.scala 329:34]
  wire  cache_stage1_clock; // @[icache.scala 330:34]
  wire  cache_stage1_reset; // @[icache.scala 330:34]
  wire  cache_stage1_io_flush; // @[icache.scala 330:34]
  wire  cache_stage1_io_cpu_addr_ready; // @[icache.scala 330:34]
  wire  cache_stage1_io_cpu_addr_valid; // @[icache.scala 330:34]
  wire [63:0] cache_stage1_io_cpu_addr_bits_addr; // @[icache.scala 330:34]
  wire [5:0] cache_stage1_io_tag_valid_index; // @[icache.scala 330:34]
  wire  cache_stage1_io_tag_valid_tag_valid_0; // @[icache.scala 330:34]
  wire  cache_stage1_io_tag_valid_tag_valid_1; // @[icache.scala 330:34]
  wire  cache_stage1_io_sram_valid; // @[icache.scala 330:34]
  wire [127:0] cache_stage1_io_sram_sram_data_0; // @[icache.scala 330:34]
  wire [127:0] cache_stage1_io_sram_sram_data_1; // @[icache.scala 330:34]
  wire [127:0] cache_stage1_io_sram_sram_tag_0; // @[icache.scala 330:34]
  wire [127:0] cache_stage1_io_sram_sram_tag_1; // @[icache.scala 330:34]
  wire  cache_stage1_io_sram_ready; // @[icache.scala 330:34]
  wire  cache_stage1_io_cache_stage1_ready; // @[icache.scala 330:34]
  wire  cache_stage1_io_cache_stage1_valid; // @[icache.scala 330:34]
  wire [63:0] cache_stage1_io_cache_stage1_bits_cpu_addr; // @[icache.scala 330:34]
  wire  cache_stage1_io_cache_stage1_bits_sram_0_hit; // @[icache.scala 330:34]
  wire  cache_stage1_io_cache_stage1_bits_sram_0_tag_valid; // @[icache.scala 330:34]
  wire [63:0] cache_stage1_io_cache_stage1_bits_sram_0_rdata; // @[icache.scala 330:34]
  wire  cache_stage1_io_cache_stage1_bits_sram_1_hit; // @[icache.scala 330:34]
  wire  cache_stage1_io_cache_stage1_bits_sram_1_tag_valid; // @[icache.scala 330:34]
  wire [63:0] cache_stage1_io_cache_stage1_bits_sram_1_rdata; // @[icache.scala 330:34]
  wire  cache_stage2_clock; // @[icache.scala 331:34]
  wire  cache_stage2_reset; // @[icache.scala 331:34]
  wire  cache_stage2_io_flush; // @[icache.scala 331:34]
  wire  cache_stage2_io_cache_stage1_ready; // @[icache.scala 331:34]
  wire  cache_stage2_io_cache_stage1_valid; // @[icache.scala 331:34]
  wire [63:0] cache_stage2_io_cache_stage1_bits_cpu_addr; // @[icache.scala 331:34]
  wire  cache_stage2_io_cache_stage1_bits_sram_0_hit; // @[icache.scala 331:34]
  wire  cache_stage2_io_cache_stage1_bits_sram_0_tag_valid; // @[icache.scala 331:34]
  wire [63:0] cache_stage2_io_cache_stage1_bits_sram_0_rdata; // @[icache.scala 331:34]
  wire  cache_stage2_io_cache_stage1_bits_sram_1_hit; // @[icache.scala 331:34]
  wire  cache_stage2_io_cache_stage1_bits_sram_1_tag_valid; // @[icache.scala 331:34]
  wire [63:0] cache_stage2_io_cache_stage1_bits_sram_1_rdata; // @[icache.scala 331:34]
  wire  cache_stage2_io_cache_bus_r_valid; // @[icache.scala 331:34]
  wire [63:0] cache_stage2_io_cache_bus_r_bits_raddr; // @[icache.scala 331:34]
  wire [63:0] cache_stage2_io_cache_bus_r_bits_rdata; // @[icache.scala 331:34]
  wire  cache_stage2_io_cache_bus_r_bits_rlast; // @[icache.scala 331:34]
  wire  cache_stage2_io_cache_bus_r_ready; // @[icache.scala 331:34]
  wire  cache_stage2_io_sram_w_valid; // @[icache.scala 331:34]
  wire [5:0] cache_stage2_io_sram_w_sram_addr; // @[icache.scala 331:34]
  wire [127:0] cache_stage2_io_sram_w_sram_data; // @[icache.scala 331:34]
  wire [127:0] cache_stage2_io_sram_w_sram_tag; // @[icache.scala 331:34]
  wire  cache_stage2_io_sram_w_chose_tag; // @[icache.scala 331:34]
  wire  cache_stage2_io_rdata_ready; // @[icache.scala 331:34]
  wire  cache_stage2_io_rdata_valid; // @[icache.scala 331:34]
  wire [63:0] cache_stage2_io_rdata_bits_data; // @[icache.scala 331:34]
  wire [63:0] cache_stage2_io_rdata_bits_pc; // @[icache.scala 331:34]
  reg [63:0] reg_sram0_valid; // @[icache.scala 333:50]
  reg [63:0] reg_sram1_valid; // @[icache.scala 334:50]
  wire  is_w_sram = cache_stage2_io_sram_w_valid & ~io_flush; // @[icache.scala 339:64]
  wire  is_sram0_write = is_w_sram & ~cache_stage2_io_sram_w_chose_tag; // @[icache.scala 345:46]
  wire  is_sram1_write = is_w_sram & cache_stage2_io_sram_w_chose_tag; // @[icache.scala 346:46]
  wire [63:0] chose_bit = 64'h1 << cache_stage2_io_sram_w_sram_addr; // @[icache.scala 348:39]
  wire [63:0] _reg_sram0_valid_T = reg_sram0_valid | chose_bit; // @[icache.scala 354:52]
  wire [63:0] _reg_sram1_valid_T = reg_sram1_valid | chose_bit; // @[icache.scala 362:52]
  reg  reg_temp_sram0_valid; // @[icache.scala 426:43]
  reg  reg_temp_sram1_valid; // @[icache.scala 427:43]
  reg [5:0] reg_temp_r_index; // @[icache.scala 428:43]
  wire [63:0] _reg_temp_sram0_valid_T = reg_sram0_valid >> cache_stage1_io_tag_valid_index; // @[icache.scala 429:48]
  wire [63:0] _reg_temp_sram1_valid_T = reg_sram1_valid >> cache_stage1_io_tag_valid_index; // @[icache.scala 430:48]
  wire  _w_r_pass0_val_T = reg_temp_r_index == cache_stage2_io_sram_w_sram_addr; // @[icache.scala 432:63]
  wire  w_r_pass0_val = is_sram0_write & reg_temp_r_index == cache_stage2_io_sram_w_sram_addr; // @[icache.scala 432:44]
  wire  w_r_pass1_val = is_sram1_write & _w_r_pass0_val_T; // @[icache.scala 433:44]
  reg  reg_sram_r_ready; // @[icache.scala 438:39]
  wire  _reg_sram_r_ready_T = is_w_sram ? 1'h0 : 1'h1; // @[icache.scala 442:40]
  wire  _GEN_4 = cache_stage1_io_sram_valid ? _reg_sram_r_ready_T : reg_sram_r_ready; // @[icache.scala 441:30 442:34 438:39]
  wire  _GEN_5 = io_flush | _GEN_4; // @[icache.scala 439:23 440:34]
  ICache_stage0 cache_stage0 ( // @[icache.scala 329:34]
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
  ICache_stage1 cache_stage1 ( // @[icache.scala 330:34]
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
  ICache_stage2 cache_stage2 ( // @[icache.scala 331:34]
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
  assign io_cpu_raddr_ready = cache_stage0_io_cpu_addr_ready; // @[icache.scala 367:34]
  assign io_cpu_rdata_valid = cache_stage2_io_rdata_valid; // @[icache.scala 456:22]
  assign io_cpu_rdata_bits_data = cache_stage2_io_rdata_bits_data; // @[icache.scala 456:22]
  assign io_cpu_rdata_bits_pc = cache_stage2_io_rdata_bits_pc; // @[icache.scala 456:22]
  assign io_sram_addr = is_w_sram ? cache_stage2_io_sram_w_sram_addr : cache_stage1_io_tag_valid_index; // @[icache.scala 389:25]
  assign io_sram_wen_0 = ~is_sram0_write; // @[icache.scala 390:28]
  assign io_sram_wen_1 = ~is_sram1_write; // @[icache.scala 391:24]
  assign io_sram_tag_wdata = cache_stage2_io_sram_w_sram_tag; // @[icache.scala 394:25]
  assign io_sram_data_wdata = cache_stage2_io_sram_w_sram_data; // @[icache.scala 395:25]
  assign io_cache_bus_r_valid = cache_stage2_io_cache_bus_r_valid; // @[icache.scala 455:22]
  assign io_cache_bus_r_bits_raddr = cache_stage2_io_cache_bus_r_bits_raddr; // @[icache.scala 455:22]
  assign cache_stage0_clock = clock;
  assign cache_stage0_reset = reset;
  assign cache_stage0_io_flush = io_flush; // @[icache.scala 336:31]
  assign cache_stage0_io_cpu_addr_valid = io_cpu_raddr_valid; // @[icache.scala 367:34]
  assign cache_stage0_io_cpu_addr_bits_addr = io_cpu_raddr_bits_addr; // @[icache.scala 367:34]
  assign cache_stage0_io_addr_ready = cache_stage1_io_cpu_addr_ready; // @[icache.scala 368:30]
  assign cache_stage1_clock = clock;
  assign cache_stage1_reset = reset;
  assign cache_stage1_io_flush = io_flush; // @[icache.scala 337:31]
  assign cache_stage1_io_cpu_addr_valid = cache_stage0_io_addr_valid; // @[icache.scala 368:30]
  assign cache_stage1_io_cpu_addr_bits_addr = cache_stage0_io_addr_bits_addr; // @[icache.scala 368:30]
  assign cache_stage1_io_tag_valid_tag_valid_0 = w_r_pass0_val | reg_temp_sram0_valid; // @[icache.scala 434:54]
  assign cache_stage1_io_tag_valid_tag_valid_1 = w_r_pass1_val | reg_temp_sram1_valid; // @[icache.scala 435:54]
  assign cache_stage1_io_sram_sram_data_0 = w_r_pass0_val ? cache_stage2_io_sram_w_sram_data : io_sram_rdata_0; // @[icache.scala 445:34]
  assign cache_stage1_io_sram_sram_data_1 = w_r_pass1_val ? cache_stage2_io_sram_w_sram_data : io_sram_rdata_2; // @[icache.scala 447:34]
  assign cache_stage1_io_sram_sram_tag_0 = w_r_pass0_val ? cache_stage2_io_sram_w_sram_tag : {{74'd0}, io_sram_rdata_1[
    53:0]}; // @[icache.scala 444:38]
  assign cache_stage1_io_sram_sram_tag_1 = w_r_pass1_val ? cache_stage2_io_sram_w_sram_tag : {{74'd0}, io_sram_rdata_3[
    53:0]}; // @[icache.scala 446:38]
  assign cache_stage1_io_sram_ready = reg_sram_r_ready; // @[icache.scala 453:57]
  assign cache_stage1_io_cache_stage1_ready = cache_stage2_io_cache_stage1_ready; // @[icache.scala 454:38]
  assign cache_stage2_clock = clock;
  assign cache_stage2_reset = reset;
  assign cache_stage2_io_flush = io_flush; // @[icache.scala 338:31]
  assign cache_stage2_io_cache_stage1_valid = cache_stage1_io_cache_stage1_valid; // @[icache.scala 454:38]
  assign cache_stage2_io_cache_stage1_bits_cpu_addr = cache_stage1_io_cache_stage1_bits_cpu_addr; // @[icache.scala 454:38]
  assign cache_stage2_io_cache_stage1_bits_sram_0_hit = cache_stage1_io_cache_stage1_bits_sram_0_hit; // @[icache.scala 454:38]
  assign cache_stage2_io_cache_stage1_bits_sram_0_tag_valid = cache_stage1_io_cache_stage1_bits_sram_0_tag_valid; // @[icache.scala 454:38]
  assign cache_stage2_io_cache_stage1_bits_sram_0_rdata = cache_stage1_io_cache_stage1_bits_sram_0_rdata; // @[icache.scala 454:38]
  assign cache_stage2_io_cache_stage1_bits_sram_1_hit = cache_stage1_io_cache_stage1_bits_sram_1_hit; // @[icache.scala 454:38]
  assign cache_stage2_io_cache_stage1_bits_sram_1_tag_valid = cache_stage1_io_cache_stage1_bits_sram_1_tag_valid; // @[icache.scala 454:38]
  assign cache_stage2_io_cache_stage1_bits_sram_1_rdata = cache_stage1_io_cache_stage1_bits_sram_1_rdata; // @[icache.scala 454:38]
  assign cache_stage2_io_cache_bus_r_bits_rdata = io_cache_bus_r_bits_rdata; // @[icache.scala 455:22]
  assign cache_stage2_io_cache_bus_r_bits_rlast = io_cache_bus_r_bits_rlast; // @[icache.scala 455:22]
  assign cache_stage2_io_cache_bus_r_ready = io_cache_bus_r_ready; // @[icache.scala 455:22]
  assign cache_stage2_io_rdata_ready = io_cpu_rdata_ready; // @[icache.scala 456:22]
  always @(posedge clock) begin
    if (reset) begin // @[icache.scala 333:50]
      reg_sram0_valid <= 64'h0; // @[icache.scala 333:50]
    end else if (io_is_fence_i) begin // @[icache.scala 351:26]
      reg_sram0_valid <= 64'h0; // @[icache.scala 352:33]
    end else if (is_sram0_write) begin // @[icache.scala 353:35]
      reg_sram0_valid <= _reg_sram0_valid_T; // @[icache.scala 354:33]
    end
    if (reset) begin // @[icache.scala 334:50]
      reg_sram1_valid <= 64'h0; // @[icache.scala 334:50]
    end else if (io_is_fence_i) begin // @[icache.scala 359:26]
      reg_sram1_valid <= 64'h0; // @[icache.scala 360:33]
    end else if (is_sram1_write) begin // @[icache.scala 361:35]
      reg_sram1_valid <= _reg_sram1_valid_T; // @[icache.scala 362:33]
    end
    if (reset) begin // @[icache.scala 426:43]
      reg_temp_sram0_valid <= 1'h0; // @[icache.scala 426:43]
    end else begin
      reg_temp_sram0_valid <= _reg_temp_sram0_valid_T[0]; // @[icache.scala 429:30]
    end
    if (reset) begin // @[icache.scala 427:43]
      reg_temp_sram1_valid <= 1'h0; // @[icache.scala 427:43]
    end else begin
      reg_temp_sram1_valid <= _reg_temp_sram1_valid_T[0]; // @[icache.scala 430:30]
    end
    if (reset) begin // @[icache.scala 428:43]
      reg_temp_r_index <= 6'h0; // @[icache.scala 428:43]
    end else begin
      reg_temp_r_index <= cache_stage1_io_tag_valid_index; // @[icache.scala 431:34]
    end
    reg_sram_r_ready <= reset | _GEN_5; // @[icache.scala 438:{39,39}]
  end
endmodule