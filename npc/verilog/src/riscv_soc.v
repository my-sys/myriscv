//本代码主要是根据自己的chisel的代码编译出来的verilog文件，进行改进。
//这么做的动机是，自己chisel代码编译出来的verilog文件进行仿真实在是太慢了。
//尝试重构代码、加ICache流水、加分支预测，调整代码都无法完成考核要求。
//并且我观察到chisel代码编译出来的verilog对寄存器组处理，都是按照单个进行的，即使是一个寄存器数组
//其也会按照地址一个一个的进行比较。虽然在实际电路上也应该是这么进行。但这么做verilog代码就会变得很长。
//这会是其仿真慢的原因吗？？？？？
//还有chisel转化的verilog中存在不少这个左右两边只是名称不同，但内容是一样assign a = b，在硬件中代码的是同一根线，在C++会不会是以一次赋值的情况存在，做了多余的运算assign a = b 
module riscv_soc(
	input	clock,
	input	reset
);
  wire  core_clock;
  wire  core_reset; // @[riscv_soc.scala 42:20]
  wire  core_io_axi_bus_aw_ready; // @[riscv_soc.scala 42:20]
  wire  core_io_axi_bus_aw_valid; // @[riscv_soc.scala 42:20]
  wire [63:0] core_io_axi_bus_aw_bits_awaddr; // @[riscv_soc.scala 42:20]
  wire  core_io_axi_bus_w_ready; // @[riscv_soc.scala 42:20]
  wire  core_io_axi_bus_w_valid; // @[riscv_soc.scala 42:20]
  wire [63:0] core_io_axi_bus_w_bits_wdata; // @[riscv_soc.scala 42:20]
  wire [7:0] core_io_axi_bus_w_bits_wstrb; // @[riscv_soc.scala 42:20]
  wire  core_io_axi_bus_w_bits_wlast; // @[riscv_soc.scala 42:20]
  wire  core_io_axi_bus_b_valid; // @[riscv_soc.scala 42:20]
  wire  core_io_axi_bus_ar_ready; // @[riscv_soc.scala 42:20]
  wire  core_io_axi_bus_ar_valid; // @[riscv_soc.scala 42:20]
  wire [63:0] core_io_axi_bus_ar_bits_araddr; // @[riscv_soc.scala 42:20]
  wire [7:0] core_io_axi_bus_ar_bits_arlen; // @[riscv_soc.scala 42:20]
  wire  core_io_axi_bus_r_valid; // @[riscv_soc.scala 42:20]
  wire [63:0] core_io_axi_bus_r_bits_rdata; // @[riscv_soc.scala 42:20]
  wire  core_io_axi_bus_r_bits_rlast; // @[riscv_soc.scala 42:20]
  wire [5:0] core_io_sram0_addr; // @[riscv_soc.scala 42:20]
  wire  core_io_sram0_wen; // @[riscv_soc.scala 42:20]
  wire [127:0] core_io_sram0_wdata; // @[riscv_soc.scala 42:20]
  wire [127:0] core_io_sram0_rdata; // @[riscv_soc.scala 42:20]
  wire [5:0] core_io_sram1_addr; // @[riscv_soc.scala 42:20]
  wire  core_io_sram1_wen; // @[riscv_soc.scala 42:20]
  wire [127:0] core_io_sram1_wdata; // @[riscv_soc.scala 42:20]
  wire [127:0] core_io_sram1_rdata; // @[riscv_soc.scala 42:20]
  wire [5:0] core_io_sram2_addr; // @[riscv_soc.scala 42:20]
  wire  core_io_sram2_wen; // @[riscv_soc.scala 42:20]
  wire [127:0] core_io_sram2_wdata; // @[riscv_soc.scala 42:20]
  wire [127:0] core_io_sram2_rdata; // @[riscv_soc.scala 42:20]
  wire [5:0] core_io_sram3_addr; // @[riscv_soc.scala 42:20]
  wire  core_io_sram3_wen; // @[riscv_soc.scala 42:20]
  wire [127:0] core_io_sram3_wdata; // @[riscv_soc.scala 42:20]
  wire [127:0] core_io_sram3_rdata; // @[riscv_soc.scala 42:20]
  wire [5:0] core_io_sram4_addr; // @[riscv_soc.scala 42:20]
  wire  core_io_sram4_wen; // @[riscv_soc.scala 42:20]
  wire [127:0] core_io_sram4_wmask; // @[riscv_soc.scala 42:20]
  wire [127:0] core_io_sram4_wdata; // @[riscv_soc.scala 42:20]
  wire [127:0] core_io_sram4_rdata; // @[riscv_soc.scala 42:20]
  wire [5:0] core_io_sram5_addr; // @[riscv_soc.scala 42:20]
  wire  core_io_sram5_wen; // @[riscv_soc.scala 42:20]
  wire [127:0] core_io_sram5_wdata; // @[riscv_soc.scala 42:20]
  wire [127:0] core_io_sram5_rdata; // @[riscv_soc.scala 42:20]
  wire [5:0] core_io_sram6_addr; // @[riscv_soc.scala 42:20]
  wire  core_io_sram6_wen; // @[riscv_soc.scala 42:20]
  wire [127:0] core_io_sram6_wmask; // @[riscv_soc.scala 42:20]
  wire [127:0] core_io_sram6_wdata; // @[riscv_soc.scala 42:20]
  wire [127:0] core_io_sram6_rdata; // @[riscv_soc.scala 42:20]
  wire [5:0] core_io_sram7_addr; // @[riscv_soc.scala 42:20]
  wire  core_io_sram7_wen; // @[riscv_soc.scala 42:20]
  wire [127:0] core_io_sram7_wdata; // @[riscv_soc.scala 42:20]
  wire [127:0] core_io_sram7_rdata; // @[riscv_soc.scala 42:20]

Core core ( // @[riscv_soc.scala 42:20]
    .clock(clock),
    .reset(reset),
    .io_axi_bus_aw_ready(core_io_axi_bus_aw_ready),
    .io_axi_bus_aw_valid(core_io_axi_bus_aw_valid),
    .io_axi_bus_aw_bits_awaddr(core_io_axi_bus_aw_bits_awaddr),
    .io_axi_bus_w_ready(core_io_axi_bus_w_ready),
    .io_axi_bus_w_valid(core_io_axi_bus_w_valid),
    .io_axi_bus_w_bits_wdata(core_io_axi_bus_w_bits_wdata),
    .io_axi_bus_w_bits_wstrb(core_io_axi_bus_w_bits_wstrb),
    .io_axi_bus_w_bits_wlast(core_io_axi_bus_w_bits_wlast),
    .io_axi_bus_b_valid(core_io_axi_bus_b_valid),
    .io_axi_bus_ar_ready(core_io_axi_bus_ar_ready),
    .io_axi_bus_ar_valid(core_io_axi_bus_ar_valid),
    .io_axi_bus_ar_bits_araddr(core_io_axi_bus_ar_bits_araddr),
    .io_axi_bus_ar_bits_arlen(core_io_axi_bus_ar_bits_arlen),
    .io_axi_bus_r_valid(core_io_axi_bus_r_valid),
    .io_axi_bus_r_bits_rdata(core_io_axi_bus_r_bits_rdata),
    .io_axi_bus_r_bits_rlast(core_io_axi_bus_r_bits_rlast),
    .io_sram0_addr(core_io_sram0_addr),
    .io_sram0_wen(core_io_sram0_wen),
    .io_sram0_wdata(core_io_sram0_wdata),
    .io_sram0_rdata(core_io_sram0_rdata),
    .io_sram1_addr(core_io_sram1_addr),
    .io_sram1_wen(core_io_sram1_wen),
    .io_sram1_wdata(core_io_sram1_wdata),
    .io_sram1_rdata(core_io_sram1_rdata),
    .io_sram2_addr(core_io_sram2_addr),
    .io_sram2_wen(core_io_sram2_wen),
    .io_sram2_wdata(core_io_sram2_wdata),
    .io_sram2_rdata(core_io_sram2_rdata),
    .io_sram3_addr(core_io_sram3_addr),
    .io_sram3_wen(core_io_sram3_wen),
    .io_sram3_wdata(core_io_sram3_wdata),
    .io_sram3_rdata(core_io_sram3_rdata),
    .io_sram4_addr(core_io_sram4_addr),
    .io_sram4_wen(core_io_sram4_wen),
    .io_sram4_wmask(core_io_sram4_wmask),
    .io_sram4_wdata(core_io_sram4_wdata),
    .io_sram4_rdata(core_io_sram4_rdata),
    .io_sram5_addr(core_io_sram5_addr),
    .io_sram5_wen(core_io_sram5_wen),
    .io_sram5_wdata(core_io_sram5_wdata),
    .io_sram5_rdata(core_io_sram5_rdata),
    .io_sram6_addr(core_io_sram6_addr),
    .io_sram6_wen(core_io_sram6_wen),
    .io_sram6_wmask(core_io_sram6_wmask),
    .io_sram6_wdata(core_io_sram6_wdata),
    .io_sram6_rdata(core_io_sram6_rdata),
    .io_sram7_addr(core_io_sram7_addr),
    .io_sram7_wen(core_io_sram7_wen),
    .io_sram7_wdata(core_io_sram7_wdata),
    .io_sram7_rdata(core_io_sram7_rdata)
);

AXI_RAM axi_ram ( // @[riscv_soc.scala 43:23]
    .clock(clock),
    .reset(reset),
    .io_ram_bus_aw_ready(core_io_axi_bus_aw_ready),
    .io_ram_bus_aw_valid(core_io_axi_bus_aw_valid),
    .io_ram_bus_aw_bits_awaddr(core_io_axi_bus_aw_bits_awaddr),
    .io_ram_bus_w_ready(core_io_axi_bus_w_ready),
    .io_ram_bus_w_valid(core_io_axi_bus_w_valid),
    .io_ram_bus_w_bits_wdata(core_io_axi_bus_w_bits_wdata),
    .io_ram_bus_w_bits_wstrb(core_io_axi_bus_w_bits_wstrb),
    .io_ram_bus_w_bits_wlast(core_io_axi_bus_w_bits_wlast),
    .io_ram_bus_b_valid(core_io_axi_bus_b_valid),
    .io_ram_bus_ar_ready(core_io_axi_bus_ar_ready),
    .io_ram_bus_ar_valid(core_io_axi_bus_ar_valid),
    .io_ram_bus_ar_bits_araddr(core_io_axi_bus_ar_bits_araddr),
    .io_ram_bus_ar_bits_arlen(core_io_axi_bus_ar_bits_arlen),
    .io_ram_bus_r_valid(core_io_axi_bus_r_valid),
    .io_ram_bus_r_bits_rdata(core_io_axi_bus_r_bits_rdata),
    .io_ram_bus_r_bits_rlast(core_io_axi_bus_r_bits_rlast)
  );
  SRAM sram0 ( // @[riscv_soc.scala 44:21]
    .clock(clock),
    .reset(reset),
    .io_addr(core_io_sram0_addr),
    .io_wen(core_io_sram0_wen),
    .io_wmask(128'h0),
    .io_wdata(core_io_sram0_wdata),
    .io_rdata(core_io_sram0_rdata)
  );
  SRAM sram1 ( // @[riscv_soc.scala 45:21]
    .clock(clock),
    .reset(reset),
    .io_addr(core_io_sram1_addr),
    .io_wen(core_io_sram1_wen),
    .io_wmask(128'h0),
    .io_wdata(core_io_sram1_wdata),
    .io_rdata(core_io_sram1_rdata)
  );
  SRAM sram2 ( // @[riscv_soc.scala 46:21]
    .clock(clock),
    .reset(reset),
    .io_addr(core_io_sram2_addr),
    .io_wen(core_io_sram2_wen),
    .io_wmask(128'h0),
    .io_wdata(core_io_sram2_wdata),
    .io_rdata(core_io_sram2_rdata)
  );
  SRAM sram3 ( // @[riscv_soc.scala 47:21]
    .clock(clock),
    .reset(reset),
    .io_addr(core_io_sram3_addr),
    .io_wen(core_io_sram3_wen),
    .io_wmask(128'h0),
    .io_wdata(core_io_sram3_wdata),
    .io_rdata(core_io_sram3_rdata)
  );
  SRAM sram4 ( // @[riscv_soc.scala 48:21]
    .clock(clock),
    .reset(reset),
    .io_addr(core_io_sram4_addr),
    .io_wen(core_io_sram4_wen),
    .io_wmask(core_io_sram4_wmask),
    .io_wdata(core_io_sram4_wdata),
    .io_rdata(core_io_sram4_rdata)
  );
  SRAM sram5 ( // @[riscv_soc.scala 49:21]
    .clock(clock),
    .reset(reset),
    .io_addr(core_io_sram5_addr),
    .io_wen(core_io_sram5_wen),
    .io_wmask(128'h0),
    .io_wdata(core_io_sram5_wdata),
    .io_rdata(core_io_sram5_rdata)
  );
  SRAM sram6 ( // @[riscv_soc.scala 50:21]
    .clock(clock),
    .reset(reset),
    .io_addr(core_io_sram6_addr),
    .io_wen(core_io_sram6_wen),
    .io_wmask(core_io_sram6_wmask),
    .io_wdata(core_io_sram6_wdata),
    .io_rdata(core_io_sram6_rdata)
  );
  SRAM sram7 ( // @[riscv_soc.scala 51:21]
    .clock(clock),
    .reset(reset),
    .io_addr(core_io_sram7_addr),
    .io_wen(core_io_sram7_wen),
    .io_wmask(128'h0),
    .io_wdata(core_io_sram7_wdata),
    .io_rdata(core_io_sram7_rdata)
  );
//   assign core_clock = clock;
//   assign core_reset = reset;
//   assign core_io_axi_bus_aw_ready = axi_ram_io_ram_bus_aw_ready; // @[riscv_soc.scala 93:28]
//   assign core_io_axi_bus_w_ready = axi_ram_io_ram_bus_w_ready; // @[riscv_soc.scala 93:28]
//   assign core_io_axi_bus_b_valid = axi_ram_io_ram_bus_b_valid; // @[riscv_soc.scala 93:28]
//   assign core_io_axi_bus_ar_ready = axi_ram_io_ram_bus_ar_ready; // @[riscv_soc.scala 93:28]
//   assign core_io_axi_bus_r_valid = axi_ram_io_ram_bus_r_valid; // @[riscv_soc.scala 93:28]
//   assign core_io_axi_bus_r_bits_rdata = axi_ram_io_ram_bus_r_bits_rdata; // @[riscv_soc.scala 93:28]
//   assign core_io_axi_bus_r_bits_rlast = axi_ram_io_ram_bus_r_bits_rlast; // @[riscv_soc.scala 93:28]
//   assign core_io_sram0_rdata = sram0_io_rdata; // @[riscv_soc.scala 95:23]
//   assign core_io_sram1_rdata = sram1_io_rdata; // @[riscv_soc.scala 96:23]
//   assign core_io_sram2_rdata = sram2_io_rdata; // @[riscv_soc.scala 97:23]
//   assign core_io_sram3_rdata = sram3_io_rdata; // @[riscv_soc.scala 98:23]
//   assign core_io_sram4_rdata = sram4_io_rdata; // @[riscv_soc.scala 99:23]
//   assign core_io_sram5_rdata = sram5_io_rdata; // @[riscv_soc.scala 100:23]
//   assign core_io_sram6_rdata = sram6_io_rdata; // @[riscv_soc.scala 101:23]
//   assign core_io_sram7_rdata = sram7_io_rdata; // @[riscv_soc.scala 102:23]
//   assign axi_ram_clock = clock;
//   assign axi_ram_reset = reset;
//   assign axi_ram_io_ram_bus_aw_valid = core_io_axi_bus_aw_valid; // @[riscv_soc.scala 93:28]
//   assign axi_ram_io_ram_bus_aw_bits_awaddr = core_io_axi_bus_aw_bits_awaddr; // @[riscv_soc.scala 93:28]
//   assign axi_ram_io_ram_bus_w_valid = core_io_axi_bus_w_valid; // @[riscv_soc.scala 93:28]
//   assign axi_ram_io_ram_bus_w_bits_wdata = core_io_axi_bus_w_bits_wdata; // @[riscv_soc.scala 93:28]
//   assign axi_ram_io_ram_bus_w_bits_wstrb = core_io_axi_bus_w_bits_wstrb; // @[riscv_soc.scala 93:28]
//   assign axi_ram_io_ram_bus_w_bits_wlast = core_io_axi_bus_w_bits_wlast; // @[riscv_soc.scala 93:28]
//   assign axi_ram_io_ram_bus_ar_valid = core_io_axi_bus_ar_valid; // @[riscv_soc.scala 93:28]
//   assign axi_ram_io_ram_bus_ar_bits_araddr = core_io_axi_bus_ar_bits_araddr; // @[riscv_soc.scala 93:28]
//   assign axi_ram_io_ram_bus_ar_bits_arlen = core_io_axi_bus_ar_bits_arlen; // @[riscv_soc.scala 93:28]
//   assign sram0_clock = clock;
//   assign sram0_reset = reset;
//   assign sram0_io_addr = core_io_sram0_addr; // @[riscv_soc.scala 95:23]
//   assign sram0_io_wen = core_io_sram0_wen; // @[riscv_soc.scala 95:23]
//   assign sram0_io_wmask = 128'h0; // @[riscv_soc.scala 95:23]
//   assign sram0_io_wdata = core_io_sram0_wdata; // @[riscv_soc.scala 95:23]
//   assign sram1_clock = clock;
//   assign sram1_reset = reset;
//   assign sram1_io_addr = core_io_sram1_addr; // @[riscv_soc.scala 96:23]
//   assign sram1_io_wen = core_io_sram1_wen; // @[riscv_soc.scala 96:23]
//   assign sram1_io_wmask = 128'h0; // @[riscv_soc.scala 96:23]
//   assign sram1_io_wdata = core_io_sram1_wdata; // @[riscv_soc.scala 96:23]
//   assign sram2_clock = clock;
//   assign sram2_reset = reset;
//   assign sram2_io_addr = core_io_sram2_addr; // @[riscv_soc.scala 97:23]
//   assign sram2_io_wen = core_io_sram2_wen; // @[riscv_soc.scala 97:23]
//   assign sram2_io_wmask = 128'h0; // @[riscv_soc.scala 97:23]
//   assign sram2_io_wdata = core_io_sram2_wdata; // @[riscv_soc.scala 97:23]
//   assign sram3_clock = clock;
//   assign sram3_reset = reset;
//   assign sram3_io_addr = core_io_sram3_addr; // @[riscv_soc.scala 98:23]
//   assign sram3_io_wen = core_io_sram3_wen; // @[riscv_soc.scala 98:23]
//   assign sram3_io_wmask = 128'h0; // @[riscv_soc.scala 98:23]
//   assign sram3_io_wdata = core_io_sram3_wdata; // @[riscv_soc.scala 98:23]
//   assign sram4_clock = clock;
//   assign sram4_reset = reset;
//   assign sram4_io_addr = core_io_sram4_addr; // @[riscv_soc.scala 99:23]
//   assign sram4_io_wen = core_io_sram4_wen; // @[riscv_soc.scala 99:23]
//   assign sram4_io_wmask = core_io_sram4_wmask; // @[riscv_soc.scala 99:23]
//   assign sram4_io_wdata = core_io_sram4_wdata; // @[riscv_soc.scala 99:23]
//   assign sram5_clock = clock;
//   assign sram5_reset = reset;
//   assign sram5_io_addr = core_io_sram5_addr; // @[riscv_soc.scala 100:23]
//   assign sram5_io_wen = core_io_sram5_wen; // @[riscv_soc.scala 100:23]
//   assign sram5_io_wmask = 128'h0; // @[riscv_soc.scala 100:23]
//   assign sram5_io_wdata = core_io_sram5_wdata; // @[riscv_soc.scala 100:23]
//   assign sram6_clock = clock;
//   assign sram6_reset = reset;
//   assign sram6_io_addr = core_io_sram6_addr; // @[riscv_soc.scala 101:23]
//   assign sram6_io_wen = core_io_sram6_wen; // @[riscv_soc.scala 101:23]
//   assign sram6_io_wmask = core_io_sram6_wmask; // @[riscv_soc.scala 101:23]
//   assign sram6_io_wdata = core_io_sram6_wdata; // @[riscv_soc.scala 101:23]
//   assign sram7_clock = clock;
//   assign sram7_reset = reset;
//   assign sram7_io_addr = core_io_sram7_addr; // @[riscv_soc.scala 102:23]
//   assign sram7_io_wen = core_io_sram7_wen; // @[riscv_soc.scala 102:23]
//   assign sram7_io_wmask = 128'h0; // @[riscv_soc.scala 102:23]
//   assign sram7_io_wdata = core_io_sram7_wdata; // @[riscv_soc.scala 102:23]

endmodule