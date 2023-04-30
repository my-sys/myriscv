module CsrRegCtrl(
  input         clock,
  input         reset,
  input  [11:0] io_in_csr_addr,
  input  [63:0] io_in_csr_data,
  input         io_in_w_csr_en,
  input  [63:0] io_in_pc,
  input  [63:0] io_in_next_pc,
  input         io_in_time_irq,
  input         io_in_soft_irq,
  input  [4:0]  io_in_exception,
  input         io_in_is_exception,
  input         io_in_commit,
  input  [11:0] io_r_csr_raddr,
  output [63:0] io_r_csr_rdata,
  output [63:0] io_r_csr_mtvec,
  output [63:0] io_r_csr_mepc,
  output [63:0] io_r_csr_mstatus,
  output [63:0] io_r_csr_mie
);

  wire  irq = io_in_time_irq | io_in_soft_irq; // @[regsfile.scala 64:34]
  reg [63:0] reg_mstatus; // @[regsfile.scala 66:34]
  reg [63:0] reg_mie; // @[regsfile.scala 67:34]
  reg [63:0] reg_mtvec; // @[regsfile.scala 68:34]
  reg [63:0] reg_mscratch; // @[regsfile.scala 69:35]
  reg [63:0] reg_mepc; // @[regsfile.scala 70:34]
  reg [63:0] reg_mcause; // @[regsfile.scala 71:34]
  reg [63:0] reg_mtval; // @[regsfile.scala 72:34]
  reg [63:0] reg_mcycle; // @[regsfile.scala 74:34]
  reg [63:0] reg_minstret; // @[regsfile.scala 75:35]
  wire [63:0] _reg_mstatus_T = reg_mstatus & 64'hffffffffffffff77; // @[regsfile.scala 87:45]
  wire [63:0] _reg_mstatus_T_2 = reg_mstatus[3] ? 64'h1880 : 64'h1800; // @[regsfile.scala 87:78]
  wire [63:0] _reg_mstatus_T_3 = _reg_mstatus_T | _reg_mstatus_T_2; // @[regsfile.scala 87:72]
  wire [4:0] _reg_mcause_T = io_in_time_irq ? 5'h7 : 5'h3; // @[regsfile.scala 90:73]
  wire [63:0] _reg_mcause_T_1 = {59'h400000000000000,_reg_mcause_T}; // @[Cat.scala 33:92]
  wire  _reg_mepc_T_1 = io_in_csr_addr == 12'h341; // @[regsfile.scala 95:63]
  wire [63:0] _reg_mepc_T_2 = io_in_csr_addr == 12'h341 ? io_in_csr_data : reg_mepc; // @[regsfile.scala 95:47]
  wire [63:0] _reg_mcause_T_3 = io_in_csr_addr == 12'h342 ? io_in_csr_data : reg_mcause; // @[regsfile.scala 96:47]
  wire [63:0] _reg_mtval_T_1 = io_in_csr_addr == 12'h343 ? io_in_csr_data : reg_mtval; // @[regsfile.scala 97:47]
  wire  _reg_mstatus_T_8 = io_in_csr_addr == 12'h300; // @[regsfile.scala 98:59]
  wire [63:0] _reg_mstatus_T_9 = io_in_csr_addr == 12'h300 ? io_in_csr_data : reg_mstatus; // @[regsfile.scala 98:43]
  wire  _reg_mie_T = io_in_csr_addr == 12'h304; // @[regsfile.scala 104:63]
  wire  _reg_mtvec_T = io_in_csr_addr == 12'h305; // @[regsfile.scala 105:63]
  wire [63:0] _reg_mcycle_T_2 = reg_mcycle + 64'h1; // @[regsfile.scala 115:112]
  wire [63:0] _reg_minstret_T_2 = reg_minstret + 64'h1; // @[regsfile.scala 116:125]
  wire [63:0] _reg_minstret_T_3 = io_in_commit ? _reg_minstret_T_2 : reg_minstret; // @[regsfile.scala 116:98]
  wire [63:0] _csr_rdata_T_9 = 12'h300 == io_r_csr_raddr ? reg_mstatus : 64'h0; // @[Mux.scala 81:58]
  wire [63:0] _csr_rdata_T_11 = 12'h301 == io_r_csr_raddr ? 64'h0 : _csr_rdata_T_9; // @[Mux.scala 81:58]
  wire [63:0] _csr_rdata_T_13 = 12'h302 == io_r_csr_raddr ? 64'h0 : _csr_rdata_T_11; // @[Mux.scala 81:58]
  wire [63:0] _csr_rdata_T_15 = 12'h303 == io_r_csr_raddr ? 64'h0 : _csr_rdata_T_13; // @[Mux.scala 81:58]
  wire [63:0] _csr_rdata_T_17 = 12'h304 == io_r_csr_raddr ? reg_mie : _csr_rdata_T_15; // @[Mux.scala 81:58]
  wire [63:0] _csr_rdata_T_19 = 12'h305 == io_r_csr_raddr ? reg_mtvec : _csr_rdata_T_17; // @[Mux.scala 81:58]
  wire [63:0] _csr_rdata_T_21 = 12'h306 == io_r_csr_raddr ? 64'h0 : _csr_rdata_T_19; // @[Mux.scala 81:58]
  wire [63:0] _csr_rdata_T_23 = 12'h340 == io_r_csr_raddr ? reg_mscratch : _csr_rdata_T_21; // @[Mux.scala 81:58]
  wire [63:0] _csr_rdata_T_25 = 12'h341 == io_r_csr_raddr ? reg_mepc : _csr_rdata_T_23; // @[Mux.scala 81:58]
  wire [63:0] _csr_rdata_T_27 = 12'h342 == io_r_csr_raddr ? reg_mcause : _csr_rdata_T_25; // @[Mux.scala 81:58]
  wire [63:0] _csr_rdata_T_29 = 12'h343 == io_r_csr_raddr ? reg_mtval : _csr_rdata_T_27; // @[Mux.scala 81:58]
  wire [63:0] _csr_rdata_T_31 = 12'h344 == io_r_csr_raddr ? 64'h0 : _csr_rdata_T_29; // @[Mux.scala 81:58]
  wire [63:0] _csr_rdata_T_33 = 12'hb00 == io_r_csr_raddr ? reg_mcycle : _csr_rdata_T_31; // @[Mux.scala 81:58]
  wire [63:0] csr_rdata = 12'hb02 == io_r_csr_raddr ? reg_minstret : _csr_rdata_T_33; // @[Mux.scala 81:58]
  assign io_r_csr_rdata = io_r_csr_raddr == io_in_csr_addr & io_in_w_csr_en ? io_in_csr_data : csr_rdata; // @[regsfile.scala 145:31]
  assign io_r_csr_mtvec = _reg_mtvec_T & io_in_w_csr_en ? io_in_csr_data : reg_mtvec; // @[regsfile.scala 146:31]
  assign io_r_csr_mepc = _reg_mepc_T_1 & io_in_w_csr_en ? io_in_csr_data : reg_mepc; // @[regsfile.scala 147:31]
  assign io_r_csr_mstatus = _reg_mstatus_T_8 & io_in_w_csr_en ? io_in_csr_data : reg_mstatus; // @[regsfile.scala 148:32]
  assign io_r_csr_mie = _reg_mie_T & io_in_w_csr_en ? io_in_csr_data : reg_mie; // @[regsfile.scala 149:31]

always @(posedge clock) begin 
	if(reset)begin 
		reg_mstatus <= 64'h0;
		reg_mie <= 64'h0;
		reg_mtvec <= 64'h0;
		reg_mscratch <= 64'h0;
		reg_mepc <= 64'h0;
		reg_mcause <= 64'h0;
		reg_mtval <= 64'h0;
		reg_mcycle <= 64'h0;
		reg_minstret <= 64'h0;
	end else if (io_in_is_exception)begin
		reg_mstatus <= _reg_mstatus_T_3;
		reg_mepc <= io_in_pc;
		reg_mcause <= {{59'd0}, io_in_exception};
		reg_mtval <= 64'h0;
	end else if (irq)begin
		reg_mstatus <= _reg_mstatus_T_3;
		reg_mcause <= _reg_mcause_T_1;
		reg_mtval <= 64'h0;
		if (io_in_is_exception) begin
			reg_mepc <= io_in_pc;
		end else begin 
			reg_mepc <= io_in_next_pc;
		end 
	end else if(io_in_w_csr_en)begin
		reg_mstatus <= _reg_mstatus_T_9;
		reg_mepc <= _reg_mepc_T_2;
		reg_mcause <= _reg_mcause_T_3;
		reg_mtval <= _reg_mtval_T_1;
		if(~irq & ~io_in_is_exception)begin 
			if (io_in_csr_addr == 12'h304) begin
				reg_mie <= io_in_csr_data;
			end 
			if (io_in_csr_addr == 12'h305) begin
				reg_mtvec <= io_in_csr_data;
			end
			if (io_in_csr_addr == 12'h340) begin
				reg_mscratch <= io_in_csr_data;
			end
		end
		if (io_in_csr_addr == 12'hb00) begin // @[regsfile.scala 115:47]
			reg_mcycle <= io_in_csr_data;
		end else begin
			reg_mcycle <= _reg_mcycle_T_2;
		end
		if (io_in_csr_addr == 12'hb02) begin // @[regsfile.scala 116:39]
			reg_minstret <= io_in_csr_data;
		end else begin
			reg_minstret <= _reg_minstret_T_3;
		end
	end else begin 
		reg_mcycle <= _reg_mcycle_T_2;
		reg_minstret <= _reg_minstret_T_3;
	end 
end 

import "DPI-C" function void set_difftest_mstatus_ptr(input logic [63:0] a []);
import "DPI-C" function void set_difftest_mcause_ptr(input logic [63:0] a []);
import "DPI-C" function void set_difftest_mtvec_ptr(input logic [63:0] a []);
import "DPI-C" function void set_difftest_mepc_ptr(input logic [63:0] a []);
initial set_difftest_mstatus_ptr(reg_mstatus);
initial set_difftest_mcause_ptr(reg_mcause);
initial set_difftest_mtvec_ptr(reg_mtvec);
initial set_difftest_mepc_ptr(reg_mepc);
endmodule