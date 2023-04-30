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
  wire  _r_rlast_T = reg_rlen == 4'h0; // @[axi_ram.scala 29:34]
  wire  _T_1 = io_ram_bus_ar_ready & io_ram_bus_ar_valid; // @[Decoupled.scala 52:35]
  wire [63:0] _reg_raddr_T_1 = io_ram_bus_ar_bits_araddr + 64'h8; // @[axi_ram.scala 38:75]
  wire  _GEN_0 = _T_1 ? 1'h0 : reg_ar_ready; // @[axi_ram.scala 24:35 32:49 33:46]
  wire  _GEN_1 = _T_1 | reg_r_valid; // @[axi_ram.scala 25:34 32:49 34:46]
  wire  _GEN_2 = _T_1 | reg_r_state; // @[axi_ram.scala 28:34 32:49 36:50]
  wire [7:0] _GEN_4 = _T_1 ? io_ram_bus_ar_bits_arlen : {{4'd0}, reg_rlen}; // @[axi_ram.scala 22:32 32:49 39:50]
  wire [3:0] _reg_rlen_T_1 = reg_rlen - 4'h1; // @[axi_ram.scala 49:65]
  wire [63:0] _reg_raddr_T_3 = reg_raddr + 64'h8; // @[axi_ram.scala 51:66]
  wire  _GEN_5 = _r_rlast_T ? 1'h0 : 1'h1; // @[axi_ram.scala 44:55 45:53 50:53]
  wire  _GEN_6 = _r_rlast_T | reg_ar_ready; // @[axi_ram.scala 24:35 44:55 46:54]
  wire  _GEN_7 = _r_rlast_T ? 1'h0 : reg_r_state; // @[axi_ram.scala 28:34 44:55 47:53]
  wire [3:0] _GEN_8 = _r_rlast_T ? reg_rlen : _reg_rlen_T_1; // @[axi_ram.scala 22:32 44:55 49:53]
  wire [63:0] _GEN_9 = _r_rlast_T ? reg_raddr : _reg_raddr_T_3; // @[axi_ram.scala 21:32 44:55 51:53]
  wire  _GEN_11 = io_ram_bus_r_valid ? _GEN_6 : reg_ar_ready; // @[axi_ram.scala 24:35 43:48]
  wire [3:0] _GEN_13 = io_ram_bus_r_valid ? _GEN_8 : reg_rlen; // @[axi_ram.scala 22:32 43:48]
  wire  _GEN_16 = reg_r_state ? _GEN_11 : reg_ar_ready; // @[axi_ram.scala 30:28 24:35]
  wire [3:0] _GEN_18 = reg_r_state ? _GEN_13 : reg_rlen; // @[axi_ram.scala 30:28 22:32]
  wire  _GEN_20 = ~reg_r_state ? _GEN_0 : _GEN_16; // @[axi_ram.scala 30:28]
  wire [7:0] _GEN_24 = ~reg_r_state ? _GEN_4 : {{4'd0}, _GEN_18}; // @[axi_ram.scala 30:28]
  reg [63:0] reg_w_addr; // @[axi_ram.scala 57:34]
  reg  reg_is_w; // @[axi_ram.scala 58:34]
  reg  reg_aw_ready; // @[axi_ram.scala 59:42]
  reg  reg_w_ready; // @[axi_ram.scala 60:34]
  reg  reg_b_valid; // @[axi_ram.scala 63:34]
  wire  _T_5 = io_ram_bus_aw_ready & io_ram_bus_aw_valid; // @[Decoupled.scala 52:35]
  wire  _T_6 = io_ram_bus_w_ready & io_ram_bus_w_valid; // @[Decoupled.scala 52:35]
  wire [63:0] _reg_w_addr_T_1 = reg_w_addr + 64'h8; // @[axi_ram.scala 73:63]
  wire  _GEN_25 = io_ram_bus_w_bits_wlast ? 1'h0 : reg_is_w; // @[axi_ram.scala 58:34 74:54 75:57]
  wire  _GEN_26 = io_ram_bus_w_bits_wlast ? 1'h0 : reg_w_ready; // @[axi_ram.scala 60:34 74:54 76:49]
  wire  _GEN_27 = io_ram_bus_w_bits_wlast | reg_aw_ready; // @[axi_ram.scala 59:42 74:54 77:49]
  wire  _GEN_29 = _T_6 ? _GEN_25 : reg_is_w; // @[axi_ram.scala 58:34 72:40]
  wire  _GEN_30 = _T_6 ? _GEN_26 : reg_w_ready; // @[axi_ram.scala 60:34 72:40]
  wire  _GEN_31 = _T_6 ? _GEN_27 : reg_aw_ready; // @[axi_ram.scala 72:40 59:42]
  wire  _GEN_33 = _T_5 | _GEN_29; // @[axi_ram.scala 66:33 68:33]
  wire  _GEN_34 = _T_5 ? 1'h0 : _GEN_31; // @[axi_ram.scala 66:33 69:33]
  wire  _GEN_35 = _T_5 | _GEN_30; // @[axi_ram.scala 66:33 70:33]
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
  wire [7:0] _GEN_39 = reset ? 8'h0 : _GEN_24; // @[axi_ram.scala 22:{32,32}]

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
  assign io_ram_bus_aw_ready = reg_aw_ready; // @[axi_ram.scala 100:41]
  assign io_ram_bus_w_ready = reg_w_ready; // @[axi_ram.scala 101:49]
  assign io_ram_bus_b_valid = reg_b_valid; // @[axi_ram.scala 102:49]
  assign io_ram_bus_ar_ready = reg_ar_ready; // @[axi_ram.scala 105:49]
  assign io_ram_bus_r_valid = reg_r_valid; // @[axi_ram.scala 110:49]
  assign io_ram_bus_r_bits_rdata = mem_rdata; // @[axi_ram.scala 108:41]
  assign io_ram_bus_r_bits_rlast = reg_rlen == 4'h0 & reg_r_valid; // @[axi_ram.scala 29:42]
  assign mem_clock = clock; // @[axi_ram.scala 92:49]
  assign mem_raddr = reg_r_valid ? reg_raddr : io_ram_bus_ar_bits_araddr; // @[axi_ram.scala 93:55]
  assign mem_rflag = io_ram_bus_ar_valid; // @[axi_ram.scala 94:49]
  assign mem_waddr = reg_w_addr; // @[axi_ram.scala 95:49]
  assign mem_wdata = io_ram_bus_w_bits_wdata; // @[axi_ram.scala 96:49]
  assign mem_wmask = {mem_io_wmask_hi,mem_io_wmask_lo}; // @[Cat.scala 33:92]
  assign mem_wen = reg_is_w & io_ram_bus_w_valid; // @[axi_ram.scala 65:29]

  always @(posedge clock)begin 
	if(reset)begin 
		reg_raddr <= 64'h0; 
		reg_r_valid <= 1'h0;
		reg_r_state <= 1'h0;
	end else if(~reg_r_state)begin 
		reg_r_valid <= _GEN_1;
		reg_r_state <= _GEN_2;
		if(_T_1)begin 
			reg_raddr <= _reg_raddr_T_1;
		end 
	end else if (reg_r_state) begin
		if (io_ram_bus_r_valid) begin
			reg_raddr <= _GEN_9;
			reg_r_valid <= _GEN_5;
			reg_r_state <= _GEN_7;
		end 
	end
	reg_rlen <= _GEN_39[3:0];
	reg_ar_ready <= reset | _GEN_20;
  end
  always @(posedge clock)begin 
    if (reset) begin // @[axi_ram.scala 57:34]
      reg_w_addr <= 64'h0; // @[axi_ram.scala 57:34]
    end else if (_T_5) begin // @[axi_ram.scala 66:33]
      reg_w_addr <= io_ram_bus_aw_bits_awaddr; // @[axi_ram.scala 67:29]
    end else if (_T_6) begin // @[axi_ram.scala 72:40]
      reg_w_addr <= _reg_w_addr_T_1; // @[axi_ram.scala 73:49]
    end
  end 
  always @(posedge clock)begin
	reg_aw_ready <= reset | _GEN_34;
	if (reset) begin
		reg_is_w <= 1'h0;
		reg_w_ready <= 1'h0;
		reg_b_valid <= 1'h0;
	end else begin 
		reg_is_w <= _GEN_33;
		reg_w_ready <= _GEN_35;
		reg_b_valid <= io_ram_bus_w_bits_wlast;
	end 
  end
endmodule