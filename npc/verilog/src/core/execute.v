module Exu(
  input         clock,
  input         reset,
  output        io_op_datas_ready,
  input         io_op_datas_valid,
  input  [2:0]  io_op_datas_bits_opType,
  input  [6:0]  io_op_datas_bits_exuType,
  input  [4:0]  io_op_datas_bits_rs1_addr,
  input  [63:0] io_op_datas_bits_rs1_data,
  input  [4:0]  io_op_datas_bits_rs2_addr,
  input  [63:0] io_op_datas_bits_rs2_data,
  input  [31:0] io_op_datas_bits_imm,
  input  [63:0] io_op_datas_bits_pc,
  input  [31:0] io_op_datas_bits_inst,
  input  [4:0]  io_op_datas_bits_dest_addr,
  input         io_op_datas_bits_dest_is_reg,
  input         io_op_datas_bits_is_pre,
  input  [11:0] io_op_datas_bits_csr_addr,
  input  [63:0] io_op_datas_bits_csr_data,
  input         io_irq_time_irq,
  input         io_irq_soft_irq,
  input  [63:0] io_mstatus,
  input  [63:0] io_mie,
  input  [63:0] io_mepc,
  input  [63:0] io_mtvec,
  output        io_wb_valid,
  output [4:0]  io_wb_dest_addr,
  output [63:0] io_wb_dest_data,
  output        io_csr_valid,
  output [11:0] io_csr_csr_addr,
  output [63:0] io_csr_csr_data,
  output        io_csr_except_is_except,
  output        io_csr_except_is_time_irq,
  output        io_csr_except_is_soft_irq,
  output [5:0]  io_csr_except_exception,
  output [63:0] io_csr_except_next_pc,
  output [63:0] io_csr_except_pc,
  output        io_commit,
  output [31:0] io_difftest_inst,
  output        io_difftest_peripheral,
  output [63:0] io_next_pc,
  output        io_flush,
  output        io_fence_i,
  output        io_br_info_valid,
  output        io_br_info_mispredict,
  output [63:0] io_br_info_br_pc,
  output        io_br_info_taken,
  output [63:0] io_br_info_target_next_pc,
  output        io_get_pre_info_valid,
  input  [63:0] io_get_pre_info_pre_next_pc,
  output        io_bus_valid,
  output [63:0] io_bus_bits_addr,
  input  [63:0] io_bus_bits_rdata,
  output [63:0] io_bus_bits_wdata,
  output [7:0]  io_bus_bits_wstrb,
  output        io_bus_bits_is_w,
  input         io_bus_ready
);

  wire  alu_exu_io_valid; // @[execute.scala 101:29]
  wire  alu_exu_io_is_pre; // @[execute.scala 101:29]
  wire  alu_exu_io_br_info_valid; // @[execute.scala 101:29]
  wire  alu_exu_io_br_info_mispredict; // @[execute.scala 101:29]
  wire [63:0] alu_exu_io_br_info_br_pc; // @[execute.scala 101:29]
  wire  alu_exu_io_br_info_taken; // @[execute.scala 101:29]
  wire [63:0] alu_exu_io_br_info_target_next_pc; // @[execute.scala 101:29]
  wire  alu_exu_io_get_pre_info_valid; // @[execute.scala 101:29]
  wire [63:0] alu_exu_io_get_pre_info_pre_next_pc; // @[execute.scala 101:29]
  wire [2:0] alu_exu_io_opType; // @[execute.scala 101:29]
  wire [6:0] alu_exu_io_exuType; // @[execute.scala 101:29]
  wire [63:0] alu_exu_io_op_data1; // @[execute.scala 101:29]
  wire [63:0] alu_exu_io_op_data2; // @[execute.scala 101:29]
  wire [31:0] alu_exu_io_op_imm; // @[execute.scala 101:29]
  wire [63:0] alu_exu_io_op_pc; // @[execute.scala 101:29]
  wire [63:0] alu_exu_io_dst_data; // @[execute.scala 101:29]
  wire  alu_exu_io_valid_next_pc; // @[execute.scala 101:29]
  wire [63:0] alu_exu_io_next_pc; // @[execute.scala 101:29]
  wire  mem_exu_clock; // @[execute.scala 102:29]
  wire  mem_exu_reset; // @[execute.scala 102:29]
  wire  mem_exu_io_valid; // @[execute.scala 102:29]
  wire [6:0] mem_exu_io_exuType; // @[execute.scala 102:29]
  wire [63:0] mem_exu_io_rs1_data; // @[execute.scala 102:29]
  wire [63:0] mem_exu_io_rs2_data; // @[execute.scala 102:29]
  wire [31:0] mem_exu_io_imm; // @[execute.scala 102:29]
  wire [63:0] mem_exu_io_dest_data; // @[execute.scala 102:29]
  wire  mem_exu_io_dest_is_w; // @[execute.scala 102:29]
  wire  mem_exu_io_ready; // @[execute.scala 102:29]
  wire  mem_exu_io_bus_valid; // @[execute.scala 102:29]
  wire [63:0] mem_exu_io_bus_bits_addr; // @[execute.scala 102:29]
  wire [63:0] mem_exu_io_bus_bits_rdata; // @[execute.scala 102:29]
  wire [63:0] mem_exu_io_bus_bits_wdata; // @[execute.scala 102:29]
  wire [7:0] mem_exu_io_bus_bits_wstrb; // @[execute.scala 102:29]
  wire  mem_exu_io_bus_bits_is_w; // @[execute.scala 102:29]
  wire  mem_exu_io_bus_ready; // @[execute.scala 102:29]
  wire  mem_exu_io_difftest_peripheral; // @[execute.scala 102:29]
  wire  mu_exu_clock; // @[execute.scala 103:29]
  wire  mu_exu_reset; // @[execute.scala 103:29]
  wire  mu_exu_io_valid; // @[execute.scala 103:29]
  wire [6:0] mu_exu_io_exu_type; // @[execute.scala 103:29]
  wire [63:0] mu_exu_io_rs1_data; // @[execute.scala 103:29]
  wire [63:0] mu_exu_io_rs2_data; // @[execute.scala 103:29]
  wire [63:0] mu_exu_io_dest_data; // @[execute.scala 103:29]
  wire  mu_exu_io_dest_is_w; // @[execute.scala 103:29]
  wire  mu_exu_io_ready; // @[execute.scala 103:29]
  wire  system_exu_io_valid; // @[execute.scala 104:32]
  wire [6:0] system_exu_io_exuType; // @[execute.scala 104:32]
  wire [63:0] system_exu_io_csr_data; // @[execute.scala 104:32]
  wire [11:0] system_exu_io_csr_addr; // @[execute.scala 104:32]
  wire [31:0] system_exu_io_imm; // @[execute.scala 104:32]
  wire [63:0] system_exu_io_rs1_data; // @[execute.scala 104:32]
  wire [63:0] system_exu_io_mepc; // @[execute.scala 104:32]
  wire [63:0] system_exu_io_mstatus; // @[execute.scala 104:32]
  wire [63:0] system_exu_io_dst_data; // @[execute.scala 104:32]
  wire  system_exu_io_csr_is_w; // @[execute.scala 104:32]
  wire [63:0] system_exu_io_result_csr_data; // @[execute.scala 104:32]
  wire [11:0] system_exu_io_result_csr_addr; // @[execute.scala 104:32]
  wire  system_exu_io_is_except; // @[execute.scala 104:32]
  wire [5:0] system_exu_io_exception; // @[execute.scala 104:32]
  wire  system_exu_io_valid_next_pc; // @[execute.scala 104:32]
  wire [63:0] system_exu_io_next_pc; // @[execute.scala 104:32]
  wire  in_data_valid = io_op_datas_valid & ~io_flush; // @[execute.scala 88:47]
  wire  ready = mu_exu_io_ready & mem_exu_io_ready; // @[execute.scala 105:37]
  reg [3:0] reg_valid; // @[execute.scala 107:32]
  wire  reg_alu_valid = reg_valid[0]; // @[execute.scala 108:38]
  wire  reg_mem_valid = reg_valid[1]; // @[execute.scala 109:38]
  wire  reg_mu_valid = reg_valid[2]; // @[execute.scala 110:38]
  wire  reg_system_valid = reg_valid[3]; // @[execute.scala 111:41]
  wire  _valid_T_3 = 3'h1 == io_op_datas_bits_opType | 3'h2 == io_op_datas_bits_opType; // @[Mux.scala 81:58]
  wire [1:0] _valid_T_5 = 3'h5 == io_op_datas_bits_opType ? 2'h2 : {{1'd0}, _valid_T_3}; // @[Mux.scala 81:58]
  wire [1:0] _valid_T_7 = 3'h6 == io_op_datas_bits_opType ? 2'h2 : _valid_T_5; // @[Mux.scala 81:58]
  wire [2:0] _valid_T_9 = 3'h3 == io_op_datas_bits_opType ? 3'h4 : {{1'd0}, _valid_T_7}; // @[Mux.scala 81:58]
  wire [3:0] valid = 3'h4 == io_op_datas_bits_opType ? 4'h8 : {{1'd0}, _valid_T_9}; // @[Mux.scala 81:58]
  reg  reg_sys_alu_w_valid; // @[execute.scala 171:43]
  reg [63:0] reg_sys_alu_wdata; // @[execute.scala 172:43]
  reg [4:0] reg_dest_addr; // @[execute.scala 173:51]
  reg  reg_br_valid; // @[execute.scala 182:50]
  reg  reg_br_mispredict; // @[execute.scala 183:42]
  reg [63:0] reg_br_pc; // @[execute.scala 184:50]
  reg  reg_taken; // @[execute.scala 185:50]
  reg [63:0] reg_br_next_pc; // @[execute.scala 186:50]
  wire  _GEN_3 = alu_exu_io_valid & ready & alu_exu_io_br_info_valid; // @[execute.scala 187:39 188:41 194:33]
  reg [63:0] reg_csr_data; // @[execute.scala 203:50]
  reg [11:0] reg_csr_addr; // @[execute.scala 204:50]
  reg  reg_csr_is_w; // @[execute.scala 205:50]
  reg  reg_is_except; // @[execute.scala 206:50]
  reg [5:0] reg_exception; // @[execute.scala 207:50]
  reg  reg_is_time_irq; // @[execute.scala 208:42]
  reg  reg_is_soft_irq; // @[execute.scala 209:42]
  reg [63:0] reg_except_next_pc; // @[execute.scala 210:42]
  reg [63:0] reg_except_pc; // @[execute.scala 211:50]
  wire  time_irq = io_irq_time_irq & io_mstatus[3] & io_mie[7]; // @[execute.scala 226:59]
  wire  soft_irq = io_irq_soft_irq & io_mstatus[3] & io_mie[3]; // @[execute.scala 227:59]
  wire  irq = time_irq | soft_irq; // @[execute.scala 228:44]
  wire [63:0] _io_wb_dest_data_T_1 = reg_mu_valid ? mu_exu_io_dest_data : 64'h0; // @[execute.scala 244:51]
  wire [63:0] _io_wb_dest_data_T_2 = reg_mem_valid ? mem_exu_io_dest_data : _io_wb_dest_data_T_1; // @[execute.scala 244:12]
  reg [63:0] reg_next_pc; // @[execute.scala 259:50]
  reg  reg_valid_next_pc; // @[execute.scala 260:42]
  wire  _reg_next_pc_T = irq | system_exu_io_is_except; // @[execute.scala 261:35]
  wire [63:0] _reg_next_pc_T_2 = {io_mtvec[63:2],2'h0}; // @[Cat.scala 33:92]
  reg  reg_fence_i; // @[execute.scala 269:42]
  reg  reg_commit; // @[execute.scala 271:42]
  reg [31:0] reg_difftest_inst; // @[execute.scala 272:40]
  ALU_EXU alu_exu ( // @[execute.scala 101:29]
    .io_valid(alu_exu_io_valid),
    .io_is_pre(alu_exu_io_is_pre),
    .io_br_info_valid(alu_exu_io_br_info_valid),
    .io_br_info_mispredict(alu_exu_io_br_info_mispredict),
    .io_br_info_br_pc(alu_exu_io_br_info_br_pc),
    .io_br_info_taken(alu_exu_io_br_info_taken),
    .io_br_info_target_next_pc(alu_exu_io_br_info_target_next_pc),
    .io_get_pre_info_valid(alu_exu_io_get_pre_info_valid),
    .io_get_pre_info_pre_next_pc(alu_exu_io_get_pre_info_pre_next_pc),
    .io_opType(alu_exu_io_opType),
    .io_exuType(alu_exu_io_exuType),
    .io_op_data1(alu_exu_io_op_data1),
    .io_op_data2(alu_exu_io_op_data2),
    .io_op_imm(alu_exu_io_op_imm),
    .io_op_pc(alu_exu_io_op_pc),
    .io_dst_data(alu_exu_io_dst_data),
    .io_valid_next_pc(alu_exu_io_valid_next_pc),
    .io_next_pc(alu_exu_io_next_pc)
  );
  MEM_EXU mem_exu ( // @[execute.scala 102:29]
    .clock(mem_exu_clock),
    .reset(mem_exu_reset),
    .io_valid(mem_exu_io_valid),
    .io_exuType(mem_exu_io_exuType),
    .io_rs1_data(mem_exu_io_rs1_data),
    .io_rs2_data(mem_exu_io_rs2_data),
    .io_imm(mem_exu_io_imm),
    .io_dest_data(mem_exu_io_dest_data),
    .io_dest_is_w(mem_exu_io_dest_is_w),
    .io_ready(mem_exu_io_ready),
    .io_bus_valid(mem_exu_io_bus_valid),
    .io_bus_bits_addr(mem_exu_io_bus_bits_addr),
    .io_bus_bits_rdata(mem_exu_io_bus_bits_rdata),
    .io_bus_bits_wdata(mem_exu_io_bus_bits_wdata),
    .io_bus_bits_wstrb(mem_exu_io_bus_bits_wstrb),
    .io_bus_bits_is_w(mem_exu_io_bus_bits_is_w),
    .io_bus_ready(mem_exu_io_bus_ready),
    .io_difftest_peripheral(mem_exu_io_difftest_peripheral)
  );
  MU_EXU mu_exu ( // @[execute.scala 103:29]
    .clock(mu_exu_clock),
    .reset(mu_exu_reset),
    .io_valid(mu_exu_io_valid),
    .io_exu_type(mu_exu_io_exu_type),
    .io_rs1_data(mu_exu_io_rs1_data),
    .io_rs2_data(mu_exu_io_rs2_data),
    .io_dest_data(mu_exu_io_dest_data),
    .io_dest_is_w(mu_exu_io_dest_is_w),
    .io_ready(mu_exu_io_ready)
  );
  SYSTEM_EXU system_exu ( // @[execute.scala 104:32]
    .io_valid(system_exu_io_valid),
    .io_exuType(system_exu_io_exuType),
    .io_csr_data(system_exu_io_csr_data),
    .io_csr_addr(system_exu_io_csr_addr),
    .io_imm(system_exu_io_imm),
    .io_rs1_data(system_exu_io_rs1_data),
    .io_mepc(system_exu_io_mepc),
    .io_mstatus(system_exu_io_mstatus),
    .io_dst_data(system_exu_io_dst_data),
    .io_csr_is_w(system_exu_io_csr_is_w),
    .io_result_csr_data(system_exu_io_result_csr_data),
    .io_result_csr_addr(system_exu_io_result_csr_addr),
    .io_is_except(system_exu_io_is_except),
    .io_exception(system_exu_io_exception),
    .io_valid_next_pc(system_exu_io_valid_next_pc),
    .io_next_pc(system_exu_io_next_pc)
  );
  assign io_op_datas_ready = mu_exu_io_ready & mem_exu_io_ready; // @[execute.scala 105:37]
  assign io_wb_valid = (reg_sys_alu_w_valid | mu_exu_io_dest_is_w | mem_exu_io_dest_is_w) & ready; // @[execute.scala 241:95]
  assign io_wb_dest_addr = reg_dest_addr; // @[execute.scala 242:25]
  assign io_wb_dest_data = reg_alu_valid | reg_system_valid ? reg_sys_alu_wdata : _io_wb_dest_data_T_2; // @[execute.scala 243:31]
  assign io_csr_valid = reg_csr_is_w & ready; // @[execute.scala 246:41]
  assign io_csr_csr_addr = reg_csr_addr; // @[execute.scala 247:25]
  assign io_csr_csr_data = reg_csr_data; // @[execute.scala 248:25]
  assign io_csr_except_is_except = reg_is_except & ready; // @[execute.scala 250:50]
  assign io_csr_except_is_time_irq = reg_is_time_irq & ready; // @[execute.scala 254:60]
  assign io_csr_except_is_soft_irq = reg_is_soft_irq & ready; // @[execute.scala 255:60]
  assign io_csr_except_exception = reg_exception; // @[execute.scala 251:33]
  assign io_csr_except_next_pc = reg_except_next_pc; // @[execute.scala 257:33]
  assign io_csr_except_pc = reg_except_pc; // @[execute.scala 256:41]
  assign io_commit = reg_commit & ready; // @[execute.scala 280:55]
  assign io_difftest_inst = reg_difftest_inst; // @[execute.scala 282:41]
  assign io_difftest_peripheral = mem_exu_io_difftest_peripheral; // @[execute.scala 281:33]
  assign io_next_pc = reg_next_pc; // @[execute.scala 266:33]
  assign io_flush = reg_valid_next_pc & ready; // @[execute.scala 267:54]
  assign io_fence_i = reg_fence_i & ready; // @[execute.scala 279:56]
  assign io_br_info_valid = reg_br_valid; // @[execute.scala 196:26]
  assign io_br_info_mispredict = reg_br_mispredict; // @[execute.scala 197:33]
  assign io_br_info_br_pc = reg_br_pc; // @[execute.scala 198:41]
  assign io_br_info_taken = reg_taken; // @[execute.scala 199:41]
  assign io_br_info_target_next_pc = reg_br_next_pc; // @[execute.scala 200:41]
  assign io_get_pre_info_valid = alu_exu_io_get_pre_info_valid; // @[execute.scala 140:33]
  assign io_bus_valid = mem_exu_io_bus_valid; // @[execute.scala 152:24]
  assign io_bus_bits_addr = mem_exu_io_bus_bits_addr; // @[execute.scala 152:24]
  assign io_bus_bits_wdata = mem_exu_io_bus_bits_wdata; // @[execute.scala 152:24]
  assign io_bus_bits_wstrb = mem_exu_io_bus_bits_wstrb; // @[execute.scala 152:24]
  assign io_bus_bits_is_w = mem_exu_io_bus_bits_is_w; // @[execute.scala 152:24]
  assign alu_exu_io_valid = valid[0] & in_data_valid & ready; // @[execute.scala 132:61]
  assign alu_exu_io_is_pre = io_op_datas_bits_is_pre; // @[execute.scala 142:33]
  assign alu_exu_io_get_pre_info_pre_next_pc = io_get_pre_info_pre_next_pc; // @[execute.scala 140:33]
  assign alu_exu_io_opType = io_op_datas_bits_opType; // @[execute.scala 133:33]
  assign alu_exu_io_exuType = io_op_datas_bits_exuType; // @[execute.scala 134:33]
  assign alu_exu_io_op_data1 = io_wb_valid & io_wb_dest_addr == io_op_datas_bits_rs1_addr ? io_wb_dest_data :
    io_op_datas_bits_rs1_data; // @[execute.scala 93:30]
  assign alu_exu_io_op_data2 = io_wb_valid & io_wb_dest_addr == io_op_datas_bits_rs2_addr ? io_wb_dest_data :
    io_op_datas_bits_rs2_data; // @[execute.scala 94:30]
  assign alu_exu_io_op_imm = io_op_datas_bits_imm; // @[execute.scala 137:33]
  assign alu_exu_io_op_pc = io_op_datas_bits_pc; // @[execute.scala 138:33]
  assign mem_exu_clock = clock;
  assign mem_exu_reset = reset;
  assign mem_exu_io_valid = valid[1] & in_data_valid & io_op_datas_bits_opType != 3'h6 & ready; // @[execute.scala 146:101]
  assign mem_exu_io_exuType = io_op_datas_bits_exuType; // @[execute.scala 147:41]
  assign mem_exu_io_rs1_data = io_wb_valid & io_wb_dest_addr == io_op_datas_bits_rs1_addr ? io_wb_dest_data :
    io_op_datas_bits_rs1_data; // @[execute.scala 93:30]
  assign mem_exu_io_rs2_data = io_wb_valid & io_wb_dest_addr == io_op_datas_bits_rs2_addr ? io_wb_dest_data :
    io_op_datas_bits_rs2_data; // @[execute.scala 94:30]
  assign mem_exu_io_imm = io_op_datas_bits_imm; // @[execute.scala 151:41]
  assign mem_exu_io_bus_bits_rdata = io_bus_bits_rdata; // @[execute.scala 152:24]
  assign mem_exu_io_bus_ready = io_bus_ready; // @[execute.scala 152:24]
  assign mu_exu_clock = clock;
  assign mu_exu_reset = reset;
  assign mu_exu_io_valid = valid[2] & in_data_valid & ready; // @[execute.scala 155:69]
  assign mu_exu_io_exu_type = io_op_datas_bits_exuType; // @[execute.scala 157:41]
  assign mu_exu_io_rs1_data = io_wb_valid & io_wb_dest_addr == io_op_datas_bits_rs1_addr ? io_wb_dest_data :
    io_op_datas_bits_rs1_data; // @[execute.scala 93:30]
  assign mu_exu_io_rs2_data = io_wb_valid & io_wb_dest_addr == io_op_datas_bits_rs2_addr ? io_wb_dest_data :
    io_op_datas_bits_rs2_data; // @[execute.scala 94:30]
  assign system_exu_io_valid = valid[3] & in_data_valid & ready; // @[execute.scala 162:69]
  assign system_exu_io_exuType = io_op_datas_bits_exuType; // @[execute.scala 163:33]
  assign system_exu_io_csr_data = io_csr_valid & io_csr_csr_addr == io_op_datas_bits_csr_addr ? io_csr_csr_data :
    io_op_datas_bits_csr_data; // @[execute.scala 99:30]
  assign system_exu_io_csr_addr = io_op_datas_bits_csr_addr; // @[execute.scala 165:33]
  assign system_exu_io_imm = io_op_datas_bits_imm; // @[execute.scala 166:41]
  assign system_exu_io_rs1_data = io_wb_valid & io_wb_dest_addr == io_op_datas_bits_rs1_addr ? io_wb_dest_data :
    io_op_datas_bits_rs1_data; // @[execute.scala 93:30]
  assign system_exu_io_mepc = io_mepc; // @[execute.scala 169:41]
  assign system_exu_io_mstatus = io_mstatus; // @[execute.scala 168:33]

  always @(posedge clock) begin
    if (reset) begin // @[execute.scala 107:32]
      reg_valid <= 4'h0; // @[execute.scala 107:32]
    end else if (ready) begin // @[execute.scala 123:20]
      if (in_data_valid) begin // @[execute.scala 124:36]
        if (3'h4 == io_op_datas_bits_opType) begin // @[Mux.scala 81:58]
          reg_valid <= 4'h8;
        end else begin
          reg_valid <= {{1'd0}, _valid_T_9};
        end
      end else begin
        reg_valid <= 4'h0; // @[execute.scala 127:35]
      end
    end
    if (reset) begin // @[execute.scala 171:43]
      reg_sys_alu_w_valid <= 1'h0; // @[execute.scala 171:43]
    end else begin
      reg_sys_alu_w_valid <= (alu_exu_io_valid | system_exu_io_valid) & io_op_datas_bits_dest_is_reg &
        io_op_datas_bits_dest_addr != 5'h0 & ready; // @[execute.scala 178:29]
    end
    if (reset) begin // @[execute.scala 172:43]
      reg_sys_alu_wdata <= 64'h0; // @[execute.scala 172:43]
    end else if (system_exu_io_valid) begin // @[execute.scala 180:39]
      reg_sys_alu_wdata <= system_exu_io_dst_data;
    end else begin
      reg_sys_alu_wdata <= alu_exu_io_dst_data;
    end
    if (reset) begin // @[execute.scala 173:51]
      reg_dest_addr <= 5'h0; // @[execute.scala 173:51]
    end else if (ready) begin // @[execute.scala 174:20]
      reg_dest_addr <= io_op_datas_bits_dest_addr; // @[execute.scala 175:31]
    end
    if (reset) begin // @[execute.scala 182:50]
      reg_br_valid <= 1'h0; // @[execute.scala 182:50]
    end else begin
      reg_br_valid <= _GEN_3;
    end
    if (reset) begin // @[execute.scala 183:42]
      reg_br_mispredict <= 1'h0; // @[execute.scala 183:42]
    end else if (alu_exu_io_valid & ready) begin // @[execute.scala 187:39]
      reg_br_mispredict <= alu_exu_io_br_info_mispredict; // @[execute.scala 189:41]
    end
    if (reset) begin // @[execute.scala 184:50]
      reg_br_pc <= 64'h0; // @[execute.scala 184:50]
    end else if (alu_exu_io_valid & ready) begin // @[execute.scala 187:39]
      reg_br_pc <= alu_exu_io_br_info_br_pc; // @[execute.scala 190:49]
    end
    if (reset) begin // @[execute.scala 185:50]
      reg_taken <= 1'h0; // @[execute.scala 185:50]
    end else if (alu_exu_io_valid & ready) begin // @[execute.scala 187:39]
      reg_taken <= alu_exu_io_br_info_taken; // @[execute.scala 191:49]
    end
    if (reset) begin // @[execute.scala 186:50]
      reg_br_next_pc <= 64'h0; // @[execute.scala 186:50]
    end else if (alu_exu_io_valid & ready) begin // @[execute.scala 187:39]
      reg_br_next_pc <= alu_exu_io_br_info_target_next_pc; // @[execute.scala 192:41]
    end
    if (reset) begin // @[execute.scala 203:50]
      reg_csr_data <= 64'h0; // @[execute.scala 203:50]
    end else begin
      reg_csr_data <= system_exu_io_result_csr_data; // @[execute.scala 222:25]
    end
    if (reset) begin // @[execute.scala 204:50]
      reg_csr_addr <= 12'h0; // @[execute.scala 204:50]
    end else begin
      reg_csr_addr <= system_exu_io_result_csr_addr; // @[execute.scala 223:25]
    end
    if (reset) begin // @[execute.scala 205:50]
      reg_csr_is_w <= 1'h0; // @[execute.scala 205:50]
    end else begin
      reg_csr_is_w <= system_exu_io_csr_is_w; // @[execute.scala 224:25]
    end
    if (reset) begin // @[execute.scala 206:50]
      reg_is_except <= 1'h0; // @[execute.scala 206:50]
    end else begin
      reg_is_except <= system_exu_io_is_except; // @[execute.scala 231:25]
    end
    if (reset) begin // @[execute.scala 207:50]
      reg_exception <= 6'h0; // @[execute.scala 207:50]
    end else begin
      reg_exception <= system_exu_io_exception; // @[execute.scala 232:25]
    end
    if (reset) begin // @[execute.scala 208:42]
      reg_is_time_irq <= 1'h0; // @[execute.scala 208:42]
    end else begin
      reg_is_time_irq <= time_irq; // @[execute.scala 236:25]
    end
    if (reset) begin // @[execute.scala 209:42]
      reg_is_soft_irq <= 1'h0; // @[execute.scala 209:42]
    end else begin
      reg_is_soft_irq <= soft_irq; // @[execute.scala 237:25]
    end
    if (reset) begin // @[execute.scala 210:42]
      reg_except_next_pc <= 64'h0; // @[execute.scala 210:42]
    end else if (ready) begin // @[execute.scala 213:20]
      if (system_exu_io_valid_next_pc) begin // @[execute.scala 218:50]
        reg_except_next_pc <= system_exu_io_next_pc; // @[execute.scala 219:49]
      end else if (alu_exu_io_valid_next_pc) begin // @[execute.scala 215:47]
        reg_except_next_pc <= alu_exu_io_next_pc; // @[execute.scala 216:49]
      end
    end
    if (reset) begin // @[execute.scala 211:50]
      reg_except_pc <= 64'h0; // @[execute.scala 211:50]
    end else if (ready) begin // @[execute.scala 213:20]
      reg_except_pc <= io_op_datas_bits_pc; // @[execute.scala 214:33]
    end
    if (reset) begin // @[execute.scala 259:50]
      reg_next_pc <= 64'h0; // @[execute.scala 259:50]
    end else if (irq | system_exu_io_is_except) begin // @[execute.scala 261:31]
      reg_next_pc <= _reg_next_pc_T_2;
    end else if (alu_exu_io_valid_next_pc) begin // @[execute.scala 262:12]
      reg_next_pc <= alu_exu_io_next_pc;
    end else if (system_exu_io_valid_next_pc) begin // @[execute.scala 263:12]
      reg_next_pc <= system_exu_io_next_pc;
    end else begin
      reg_next_pc <= 64'h0;
    end
    if (reset) begin // @[execute.scala 260:42]
      reg_valid_next_pc <= 1'h0; // @[execute.scala 260:42]
    end else begin
      reg_valid_next_pc <= _reg_next_pc_T | alu_exu_io_valid_next_pc | system_exu_io_valid_next_pc; // @[execute.scala 264:41]
    end
    if (reset) begin // @[execute.scala 269:42]
      reg_fence_i <= 1'h0; // @[execute.scala 269:42]
    end else begin
      reg_fence_i <= in_data_valid & io_op_datas_bits_opType == 3'h6 & io_op_datas_bits_exuType == 7'h5; // @[execute.scala 278:25]
    end
    if (reset) begin // @[execute.scala 271:42]
      reg_commit <= 1'h0; // @[execute.scala 271:42]
    end else if (ready) begin // @[execute.scala 273:20]
      reg_commit <= in_data_valid; // @[execute.scala 274:33]
    end
    if (reset) begin // @[execute.scala 272:40]
      reg_difftest_inst <= 32'h0; // @[execute.scala 272:40]
    end else if (ready) begin // @[execute.scala 273:20]
      reg_difftest_inst <= io_op_datas_bits_inst; // @[execute.scala 275:35]
    end
  end
endmodule