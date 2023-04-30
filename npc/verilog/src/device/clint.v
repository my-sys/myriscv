module Clint(
  input         clock,
  input         reset,
  input         io_valid,
  input  [63:0] io_bits_addr,
  input  [63:0] io_bits_wdata,
  output [63:0] io_bits_rdata,
  input         io_bits_is_w,
  output        io_ready,
  output        io_soft_irq,
  output        io_time_irq
);
  reg  reg_msip; // @[clint.scala 22:42]
  reg [63:0] reg_mtime; // @[clint.scala 23:42]
  reg [63:0] reg_mtimecmp; // @[clint.scala 24:42]
  reg  reg_ready; // @[clint.scala 25:42]
  reg [63:0] red_rdata; // @[clint.scala 26:42]
  wire [63:0] _reg_mtime_T_1 = reg_mtime + 64'h1; // @[clint.scala 27:32]
  reg  reg_state; // @[clint.scala 29:32]
  wire [63:0] _temp_data_T_2 = 16'h0 == io_bits_addr[15:0] ? {{63'd0}, reg_msip} : 64'h0; // @[Mux.scala 81:58]
  wire [63:0] _temp_data_T_4 = 16'h4000 == io_bits_addr[15:0] ? reg_mtimecmp : _temp_data_T_2; // @[Mux.scala 81:58]
  wire  is_misp = io_bits_addr[15:0] == 16'h0; // @[clint.scala 35:43]
  wire  is_mtimecmp = io_bits_addr[15:0] == 16'h4000; // @[clint.scala 36:47]
  wire  _reg_msip_T_1 = is_misp ? io_bits_wdata[0] : reg_msip; // @[clint.scala 43:71]
  wire [63:0] _reg_mtimecmp_T = is_mtimecmp ? io_bits_wdata : reg_mtimecmp; // @[clint.scala 44:63]
  wire  _GEN_5 = io_valid | reg_state; // @[clint.scala 29:32 41:39 47:43]
  wire  _GEN_6 = io_valid | reg_ready; // @[clint.scala 41:39 25:42 48:43]
  wire  _T_2 = io_valid & io_ready; // @[clint.scala 16:40]
  assign io_bits_rdata = red_rdata; // @[clint.scala 60:25]
  assign io_ready = reg_ready; // @[clint.scala 59:33]
  assign io_soft_irq = reg_msip; // @[clint.scala 62:25]
  assign io_time_irq = reg_mtimecmp <= reg_mtime; // @[clint.scala 61:41]
always @(posedge clock)begin 
	if(reset)begin 
		reg_msip <= 1'h0;
		reg_mtime <= 64'h0;
		reg_mtimecmp <= 64'hffffffffffffffff;
		red_rdata <= 64'h0;
	end else if(~reg_state)begin 
      if (io_valid) begin // @[clint.scala 41:39]
        if (io_bits_is_w) begin // @[clint.scala 42:51]
          reg_msip <= _reg_msip_T_1; // @[clint.scala 43:65]
		  reg_mtimecmp <= _reg_mtimecmp_T;
		end
        if (16'hbff8 == io_bits_addr[15:0]) begin // @[Mux.scala 81:58]
          red_rdata <= reg_mtime;
        end else begin
          red_rdata <= _temp_data_T_4;
        end
      end
	  reg_mtime <= _reg_mtime_T_1;
	end else begin 
	  reg_mtime <= _reg_mtime_T_1;
	end 
end 

always @(posedge clock)begin 
	if(reset)begin 
		reg_ready <= 1'h0;
		reg_state <= 1'h0;
    end else if (~reg_state) begin // @[clint.scala 39:26]
      reg_ready <= _GEN_6;
	  reg_state <= _GEN_5;
    end else if (reg_state) begin // @[clint.scala 39:26]
      if (_T_2) begin // @[clint.scala 52:38]
        reg_ready <= 1'h0; // @[clint.scala 54:43]
		reg_state <= 1'h0;
      end
    end
end 
endmodule