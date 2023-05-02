module Commit(
  input         clock,
  input         reset,
  input  [4:0]  io_normal_rd_rs1_addr,
  output [63:0] io_normal_rd_rs1_data,
  input  [4:0]  io_normal_rd_rs2_addr,
  output [63:0] io_normal_rd_rs2_data,
  input         io_normal_wb_valid,
  input  [4:0]  io_normal_wb_dest_addr,
  input  [63:0] io_normal_wb_dest_data,
  input  [11:0] io_csr_rd_csr_addr,
  output [63:0] io_csr_rd_csr_data,
  input         io_csr_wb_valid,
  input  [11:0] io_csr_wb_csr_addr,
  input  [63:0] io_csr_wb_csr_data,
  input         io_csr_except_is_except,
  input         io_csr_except_is_time_irq,
  input         io_csr_except_is_soft_irq,
  input  [5:0]  io_csr_except_exception,
  input  [63:0] io_csr_except_next_pc,
  input  [63:0] io_csr_except_pc,
  output [63:0] io_csr_pass_csr_mtvec,
  output [63:0] io_csr_pass_csr_mepc,
  output [63:0] io_csr_pass_csr_mstatus,
  output [63:0] io_csr_pass_csr_mie,

  input         io_commit,
  input  [31:0] io_difftest_inst,
  input         io_difftest_peripheral
);
  wire  csr_reg_clock; // @[commit.scala 35:29]
  wire  csr_reg_reset; // @[commit.scala 35:29]
  wire [11:0] csr_reg_io_in_csr_addr; // @[commit.scala 35:29]
  wire [63:0] csr_reg_io_in_csr_data; // @[commit.scala 35:29]
  wire  csr_reg_io_in_w_csr_en; // @[commit.scala 35:29]
  wire [63:0] csr_reg_io_in_pc; // @[commit.scala 35:29]
  wire [63:0] csr_reg_io_in_next_pc; // @[commit.scala 35:29]
  wire  csr_reg_io_in_time_irq; // @[commit.scala 35:29]
  wire  csr_reg_io_in_soft_irq; // @[commit.scala 35:29]
  wire [4:0] csr_reg_io_in_exception; // @[commit.scala 35:29]
  wire  csr_reg_io_in_is_exception; // @[commit.scala 35:29]
  wire  csr_reg_io_in_commit; // @[commit.scala 35:29]
  wire [11:0] csr_reg_io_r_csr_raddr; // @[commit.scala 35:29]
  wire [63:0] csr_reg_io_r_csr_rdata; // @[commit.scala 35:29]
  wire [63:0] csr_reg_io_r_csr_mtvec; // @[commit.scala 35:29]
  wire [63:0] csr_reg_io_r_csr_mepc; // @[commit.scala 35:29]
  wire [63:0] csr_reg_io_r_csr_mstatus; // @[commit.scala 35:29]
  wire [63:0] csr_reg_io_r_csr_mie; // @[commit.scala 35:29]

CsrRegCtrl csr_reg ( // @[commit.scala 35:29]
    .clock(csr_reg_clock),
    .reset(csr_reg_reset),
    .io_in_csr_addr(csr_reg_io_in_csr_addr),
    .io_in_csr_data(csr_reg_io_in_csr_data),
    .io_in_w_csr_en(csr_reg_io_in_w_csr_en),
    .io_in_pc(csr_reg_io_in_pc),
    .io_in_next_pc(csr_reg_io_in_next_pc),
    .io_in_time_irq(csr_reg_io_in_time_irq),
    .io_in_soft_irq(csr_reg_io_in_soft_irq),
    .io_in_exception(csr_reg_io_in_exception),
    .io_in_is_exception(csr_reg_io_in_is_exception),
    .io_in_commit(csr_reg_io_in_commit),
    .io_r_csr_raddr(csr_reg_io_r_csr_raddr),
    .io_r_csr_rdata(csr_reg_io_r_csr_rdata),
    .io_r_csr_mtvec(csr_reg_io_r_csr_mtvec),
    .io_r_csr_mepc(csr_reg_io_r_csr_mepc),
    .io_r_csr_mstatus(csr_reg_io_r_csr_mstatus),
    .io_r_csr_mie(csr_reg_io_r_csr_mie)
);

reg [63:0] reg_file[32];
wire [63:0] read_rs1_from_file;
wire [63:0] read_rs2_from_file;
assign read_rs1_from_file = reg_file[io_normal_rd_rs1_addr];
assign read_rs2_from_file = reg_file[io_normal_rd_rs2_addr];
  assign io_normal_rd_rs1_data = io_normal_wb_dest_addr == io_normal_rd_rs1_addr & io_normal_wb_valid ?
    io_normal_wb_dest_data : read_rs1_from_file; // @[commit.scala 43:30]
  assign io_normal_rd_rs2_data = io_normal_wb_dest_addr == io_normal_rd_rs2_addr & io_normal_wb_valid ?
    io_normal_wb_dest_data : read_rs2_from_file; // @[commit.scala 44:30]
  assign io_csr_rd_csr_data = csr_reg_io_r_csr_rdata; // @[commit.scala 66:49]
  assign io_csr_pass_csr_mtvec = csr_reg_io_r_csr_mtvec; // @[commit.scala 67:41]
  assign io_csr_pass_csr_mepc = csr_reg_io_r_csr_mepc; // @[commit.scala 68:41]
  assign io_csr_pass_csr_mstatus = csr_reg_io_r_csr_mstatus; // @[commit.scala 69:41]
  assign io_csr_pass_csr_mie = csr_reg_io_r_csr_mie; // @[commit.scala 70:49]
  assign csr_reg_clock = clock;
  assign csr_reg_reset = reset;
  assign csr_reg_io_in_csr_addr = io_csr_wb_csr_addr; // @[commit.scala 52:33]
  assign csr_reg_io_in_csr_data = io_csr_wb_csr_data; // @[commit.scala 53:33]
  assign csr_reg_io_in_w_csr_en = io_csr_wb_valid; // @[commit.scala 54:33]
  assign csr_reg_io_in_pc = io_csr_except_pc; // @[commit.scala 55:41]
  assign csr_reg_io_in_next_pc = io_csr_except_next_pc; // @[commit.scala 56:33]
  assign csr_reg_io_in_time_irq = io_csr_except_is_time_irq; // @[commit.scala 58:33]
  assign csr_reg_io_in_soft_irq = io_csr_except_is_soft_irq; // @[commit.scala 59:33]
  assign csr_reg_io_in_exception = io_csr_except_exception[4:0]; // @[commit.scala 61:33]
  assign csr_reg_io_in_is_exception = io_csr_except_is_except; // @[commit.scala 62:41]
  assign csr_reg_io_in_commit = io_commit; // @[commit.scala 63:33]
  assign csr_reg_io_r_csr_raddr = io_csr_rd_csr_addr; // @[commit.scala 65:41]

always @(posedge clock) begin
	if(reset)begin
		reg_file[1] <= 0;
		reg_file[2] <= 0;
		reg_file[3] <= 0;
		reg_file[4] <= 0;
		reg_file[5] <= 0;
		reg_file[6] <= 0;
		reg_file[7] <= 0;
		reg_file[8] <= 0;
		reg_file[9] <= 0;
		reg_file[10] <= 0;
		reg_file[11] <= 0;
		reg_file[12] <= 0;
		reg_file[13] <= 0;
		reg_file[14] <= 0;
		reg_file[15] <= 0;
		reg_file[16] <= 0;
		reg_file[17] <= 0;
		reg_file[18] <= 0;
		reg_file[19] <= 0;
		reg_file[20] <= 0;
		reg_file[21] <= 0;
		reg_file[22] <= 0;
		reg_file[23] <= 0;
		reg_file[24] <= 0;
		reg_file[25] <= 0;
		reg_file[26] <= 0;
		reg_file[27] <= 0;
		reg_file[28] <= 0;
		reg_file[29] <= 0;
		reg_file[30] <= 0;
		reg_file[31] <= 0;
	end else if(io_normal_wb_valid)begin 
		reg_file[io_normal_wb_dest_addr] <= io_normal_wb_dest_data;
	end 
end

  reg  difftest_commit; // @[commit.scala 73:50]
  reg [31:0] difftest_inst; // @[commit.scala 74:58]
  reg [63:0] difftest_pc; // @[commit.scala 75:58]
  reg [63:0] inst_counter; // @[commit.scala 76:58]
  reg  difftest_irq; // @[commit.scala 77:58]
  reg  difftest_peripheral; // @[commit.scala 78:50]
  wire [63:0] _inst_counter_T_1 = inst_counter + 64'h1; // @[commit.scala 83:55]
always @(posedge clock)begin 
	if(reset)begin 
		difftest_commit <= 1'h0;
		difftest_inst <= 32'h0;
		difftest_pc <= 64'h0;
		inst_counter <= 64'h0;
		difftest_irq <= 1'h0;
		difftest_peripheral <= 1'h0;
	end else begin 
		difftest_commit <= io_commit;
		difftest_inst <= io_difftest_inst;
		difftest_pc <= io_csr_except_pc;
		if(io_commit)inst_counter <= _inst_counter_T_1;
		difftest_irq <= io_csr_except_is_time_irq | io_csr_except_is_soft_irq;
		difftest_peripheral <= io_difftest_peripheral;
	end 
end

import "DPI-C" function void set_difftest_gpr_ptr(input logic [63:0] a []);
import "DPI-C" function void set_difftest_inst_ptr(input logic [63:0] a []);
import "DPI-C" function void set_difftest_pc_ptr(input logic [63:0] a []);
import "DPI-C" function void set_difftest_commit_ptr(input logic [63:0] a []);
import "DPI-C" function void set_difftest_inst_counter_ptr(input logic [63:0] a []);
import "DPI-C" function void set_difftest_irq(input logic [63:0] a []);
import "DPI-C" function void set_difftest_peripheral(input logic [63:0] a []);
initial set_difftest_gpr_ptr(reg_file);  // rf为通用寄存器的二维数组变量
initial set_difftest_inst_ptr(difftest_inst);
initial set_difftest_pc_ptr(difftest_pc);
initial set_difftest_commit_ptr(difftest_commit);
initial set_difftest_inst_counter_ptr(inst_counter);
initial set_difftest_irq(difftest_irq);
initial set_difftest_peripheral(difftest_peripheral);
endmodule