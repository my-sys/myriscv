//本代码由chisel代码而来，只是为了加快仿真速度，考核而设计。
module AXI_RAM(
  input         clock,
  input         reset,
  output        io_ram_bus_aw_ready,
  input         io_ram_bus_aw_valid,
  input  [63:0] io_ram_bus_aw_bits_awaddr,
  output        io_ram_bus_w_ready,
  input         io_ram_bus_w_valid,
  input  [63:0] io_ram_bus_w_bits_wdata,
  input  [7:0]  io_ram_bus_w_bits_wstrb,
  input         io_ram_bus_w_bits_wlast,
  output        io_ram_bus_b_valid,
//io.ram_bus.b.bits.bresp chisel 
//chisel当中被优化掉了，因此没有这根线。问题不大，当接SoC时，AXI是最外层的输出，这根线又会重新出现
//在我写的chisel代码中是有这根线的，但是因为，内部逻辑并没有使用这根线的内容，chisel编译成verilog时优化掉了
//为了不大改内容，应当保持这个接口不存在。
  output        io_ram_bus_ar_ready,
  input         io_ram_bus_ar_valid,
  input  [63:0] io_ram_bus_ar_bits_araddr,
  input  [7:0]  io_ram_bus_ar_bits_arlen,
  output        io_ram_bus_r_valid,
  output [63:0] io_ram_bus_r_bits_rdata,
  output        io_ram_bus_r_bits_rlast
);

  wire  mem_clock; // @[axi_ram.scala 91:21]
  wire [63:0] mem_raddr; // @[axi_ram.scala 91:21]
  wire [63:0] mem_rdata; // @[axi_ram.scala 91:21]
  wire  mem_rflag; // @[axi_ram.scala 91:21]
  wire [63:0] mem_waddr; // @[axi_ram.scala 91:21]
  wire [63:0] mem_wdata; // @[axi_ram.scala 91:21]
  wire [63:0] mem_wmask; // @[axi_ram.scala 91:21]
  wire  mem_wen; // @[axi_ram.scala 91:21]
  reg [63:0] reg_raddr; // @[axi_ram.scala 21:32]
  reg [3:0] reg_rlen; // @[axi_ram.scala 22:32]
  reg  reg_ar_ready; // @[axi_ram.scala 24:35]
  reg  reg_r_valid; // @[axi_ram.scala 25:34]
  reg  reg_r_state; // @[axi_ram.scala 28:34]
 
  reg [63:0] reg_w_addr; // @[axi_ram.scala 57:34]
  reg  reg_is_w; // @[axi_ram.scala 58:34]
  reg  reg_aw_ready; // @[axi_ram.scala 59:42]
  reg  reg_w_ready; // @[axi_ram.scala 60:34]
  reg  reg_b_valid; // @[axi_ram.scala 63:34]

  wire [7:0] _mem_io_wmask_T_9 = io_ram_bus_w_bits_wstrb[0] ? 8'hff : 8'h0; // @[Bitwise.scala 77:12]
  wire [7:0] _mem_io_wmask_T_11 = io_ram_bus_w_bits_wstrb[1] ? 8'hff : 8'h0; // @[Bitwise.scala 77:12]
  wire [7:0] _mem_io_wmask_T_13 = io_ram_bus_w_bits_wstrb[2] ? 8'hff : 8'h0; // @[Bitwise.scala 77:12]
  wire [7:0] _mem_io_wmask_T_15 = io_ram_bus_w_bits_wstrb[3] ? 8'hff : 8'h0; // @[Bitwise.scala 77:12]
  wire [7:0] _mem_io_wmask_T_17 = io_ram_bus_w_bits_wstrb[4] ? 8'hff : 8'h0; // @[Bitwise.scala 77:12]
  wire [7:0] _mem_io_wmask_T_19 = io_ram_bus_w_bits_wstrb[5] ? 8'hff : 8'h0; // @[Bitwise.scala 77:12]
  wire [7:0] _mem_io_wmask_T_21 = io_ram_bus_w_bits_wstrb[6] ? 8'hff : 8'h0; // @[Bitwise.scala 77:12]
  wire [7:0] _mem_io_wmask_T_23 = io_ram_bus_w_bits_wstrb[7] ? 8'hff : 8'h0; // @[Bitwise.scala 77:12]
  wire [31:0] mem_io_wmask_lo = {_mem_io_wmask_T_15,_mem_io_wmask_T_13,_mem_io_wmask_T_11,_mem_io_wmask_T_9}; // @[Cat.scala 33:92]
  wire [31:0] mem_io_wmask_hi = {_mem_io_wmask_T_23,_mem_io_wmask_T_21,_mem_io_wmask_T_19,_mem_io_wmask_T_17}; // @[Cat.scala 33:92]

  RAMCtrl mem ( // @[axi_ram.scala 91:21]
    .clock(mem_clock),
    .raddr(mem_raddr),
    .rdata(mem_rdata),
    .rflag(mem_rflag),
    .waddr(mem_waddr),
    .wdata(mem_wdata),
    .wmask(mem_wmask),
    .wen(mem_wen)
  );
  //reg [63:0] reg_r_data;
  assign io_ram_bus_aw_ready = reg_aw_ready; // @[axi_ram.scala 100:41]
  assign io_ram_bus_w_ready = reg_w_ready; // @[axi_ram.scala 101:49]
  assign io_ram_bus_b_valid = reg_b_valid; // @[axi_ram.scala 102:49]
  assign io_ram_bus_ar_ready = reg_ar_ready; // @[axi_ram.scala 105:49]
  assign io_ram_bus_r_valid = reg_r_valid; // @[axi_ram.scala 110:49]
  assign io_ram_bus_r_bits_rdata = mem_rdata;//reg_r_data;//mem_rdata; // @[axi_ram.scala 108:41]
  assign io_ram_bus_r_bits_rlast = reg_rlen == 4'h0 & reg_r_valid; // @[axi_ram.scala 29:42]
  assign mem_clock = clock; // @[axi_ram.scala 92:49]
  assign mem_raddr = reg_r_valid ? reg_raddr : io_ram_bus_ar_bits_araddr; // @[axi_ram.scala 93:55]
  assign mem_rflag = io_ram_bus_ar_valid; // @[axi_ram.scala 94:49]
  assign mem_waddr = reg_w_addr; // @[axi_ram.scala 95:49]
  assign mem_wdata = io_ram_bus_w_bits_wdata; // @[axi_ram.scala 96:49]
  assign mem_wmask = {mem_io_wmask_hi,mem_io_wmask_lo}; // @[Cat.scala 33:92]
  assign mem_wen = reg_is_w & io_ram_bus_w_valid; // @[axi_ram.scala 65:29]

parameter r_idle = 1'b0,r_busy = 1'b1;
wire  io_ram_bus_ar_fire = io_ram_bus_ar_ready & io_ram_bus_ar_valid;
wire  io_ram_bus_r_fire = io_ram_bus_r_valid; //io_ram_bus_r_ready & io_ram_bus_r_valid, 1'b1 & io_ram_bus_r_valid;
wire  io_ram_bus_aw_fire  = io_ram_bus_aw_ready & io_ram_bus_aw_valid;
wire  io_ram_bus_w_fire   = io_ram_bus_w_ready & io_ram_bus_w_valid;

//在设计中是读地址一直有效的，当ar_valid有效时，其读地址也一同送入进行取值了，
//因此reg_addr第一次更新是地址+8，reg_len == 0 说明本次读传输结束
always @(posedge clock)begin 
	if(reset)begin 
		reg_ar_ready <= 1'b1;
		reg_r_valid  <= 1'b0;
		reg_r_state  <= r_idle;
		reg_raddr	<= 64'b0;
		reg_rlen    <= 4'b0;
	end else begin
		case (reg_r_state)
			r_idle:begin 
				if(io_ram_bus_ar_fire)begin 
					reg_ar_ready <= 1'b0;
					reg_r_valid  <= 1'b1;

					reg_r_state  <= r_busy;
					reg_raddr	 <= io_ram_bus_ar_bits_araddr + 64'h8;
					reg_rlen	 <= io_ram_bus_ar_bits_arlen[3:0];
				end 
			end
			r_busy:begin 
				if(io_ram_bus_r_fire)begin 
					if(reg_rlen == 0)begin
						reg_r_valid <= 1'b0;
						reg_ar_ready <= 1'b1;
						reg_r_state <= r_idle;
					end else begin 
						reg_rlen <= reg_rlen - 4'h1;
						reg_r_valid <= 1'b1;
						reg_raddr  <= reg_raddr + 64'h8;
					end
				end 
			end 
		endcase
	end
end 

//写不同，写必须判断写有效时才能更新写标志，因此慢一拍，地址更新策略也有所不同
always @(posedge clock)begin
	if(reset)begin 
		reg_w_addr <= 64'h0;
		reg_is_w	<= 1'b0;
		reg_aw_ready <= 1'b1;
		reg_w_ready	<= 1'b0;
	end else begin 
		if(io_ram_bus_aw_fire)begin 
			reg_w_addr <= io_ram_bus_aw_bits_awaddr;
			reg_is_w   <= 1'b1;
			reg_aw_ready <= 1'b0;
			reg_w_ready <= 1'b1;
		end else begin 
			if(io_ram_bus_w_fire)begin 
				reg_w_addr <= reg_w_addr + 64'h8;
				if(io_ram_bus_w_bits_wlast)begin 
					reg_is_w	<= 1'b0;
					reg_w_ready <= 1'b0;
					reg_aw_ready <= 1'b1;
				end 
			end
		end 
	end 
end 

always @(posedge clock)begin
	if(reset)begin 
		//reg_b_bresp <= 2'b0;  被chisel编译优化掉了，chisel编译成verilog时，优化掉了不用的线。为了与内在逻辑统一，暂时不使用吧
		reg_b_valid <= 1'b0;
	end else begin 
		if(io_ram_bus_w_bits_wlast)begin 
			//reg_b_bresp 	<= 2'b0;
			reg_b_valid		<= 1'b1;
		end else begin 
			//if(io_ram_bus_b_ready)reg_b_valid <= 1'b0;
			reg_b_valid <= 1'b0;
		end 
	end 
end 
endmodule