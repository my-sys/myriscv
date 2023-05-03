//本代码主要是根据自己的chisel的代码编译出来的verilog文件，进行改进。
//这么做的动机是，自己chisel代码编译出来的verilog文件进行仿真实在是太慢了。
//尝试重构代码、加ICache流水、加分支预测，调整代码都无法完成考核要求。
//并且我观察到chisel代码编译出来的verilog对寄存器组处理，都是按照单个进行的，即使是一个寄存器数组
//其也会按照地址一个一个的进行比较。虽然在实际电路上也应该是这么进行。但这么做verilog代码就会变得很长。
//这会是其仿真慢的原因吗？？？？？
//还有chisel转化的verilog中存在不少这个左右两边只是名称不同，但内容是一样assign a = b，在硬件中代码的是同一根线，在C++会不会是以一次赋值的情况存在，做了多余的运算assign a = b 
module riscv_soc(
  input   clock,
  input   reset
);
  wire  core_clock; // @[riscv_soc.scala 42:20]
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
  wire [5:0] core_io_isram_addr; // @[riscv_soc.scala 42:20]
  wire  core_io_isram_wen_0; // @[riscv_soc.scala 42:20]
  wire  core_io_isram_wen_1; // @[riscv_soc.scala 42:20]
  wire [127:0] core_io_isram_tag_wdata; // @[riscv_soc.scala 42:20]
  wire [127:0] core_io_isram_data_wdata; // @[riscv_soc.scala 42:20]
  wire [127:0] core_io_isram_rdata_0; // @[riscv_soc.scala 42:20]
  wire [127:0] core_io_isram_rdata_1; // @[riscv_soc.scala 42:20]
  wire [127:0] core_io_isram_rdata_2; // @[riscv_soc.scala 42:20]
  wire [127:0] core_io_isram_rdata_3; // @[riscv_soc.scala 42:20]
  wire [5:0] core_io_dsram_addr; // @[riscv_soc.scala 42:20]
  wire  core_io_dsram_wen_0; // @[riscv_soc.scala 42:20]
  wire  core_io_dsram_wen_1; // @[riscv_soc.scala 42:20]
  wire [127:0] core_io_dsram_data_wmask; // @[riscv_soc.scala 42:20]
  wire [127:0] core_io_dsram_tag_wdata; // @[riscv_soc.scala 42:20]
  wire [127:0] core_io_dsram_data_wdata; // @[riscv_soc.scala 42:20]
  wire [127:0] core_io_dsram_rdata_0; // @[riscv_soc.scala 42:20]
  wire [127:0] core_io_dsram_rdata_1; // @[riscv_soc.scala 42:20]
  wire [127:0] core_io_dsram_rdata_2; // @[riscv_soc.scala 42:20]
  wire [127:0] core_io_dsram_rdata_3; // @[riscv_soc.scala 42:20]
  wire  axi_ram_clock; // @[riscv_soc.scala 43:23]
  wire  axi_ram_reset; // @[riscv_soc.scala 43:23]
  wire  axi_ram_io_ram_bus_aw_ready; // @[riscv_soc.scala 43:23]
  wire  axi_ram_io_ram_bus_aw_valid; // @[riscv_soc.scala 43:23]
  wire [63:0] axi_ram_io_ram_bus_aw_bits_awaddr; // @[riscv_soc.scala 43:23]
  wire  axi_ram_io_ram_bus_w_ready; // @[riscv_soc.scala 43:23]
  wire  axi_ram_io_ram_bus_w_valid; // @[riscv_soc.scala 43:23]
  wire [63:0] axi_ram_io_ram_bus_w_bits_wdata; // @[riscv_soc.scala 43:23]
  wire [7:0] axi_ram_io_ram_bus_w_bits_wstrb; // @[riscv_soc.scala 43:23]
  wire  axi_ram_io_ram_bus_w_bits_wlast; // @[riscv_soc.scala 43:23]
  wire  axi_ram_io_ram_bus_b_valid; // @[riscv_soc.scala 43:23]
  wire  axi_ram_io_ram_bus_ar_ready; // @[riscv_soc.scala 43:23]
  wire  axi_ram_io_ram_bus_ar_valid; // @[riscv_soc.scala 43:23]
  wire [63:0] axi_ram_io_ram_bus_ar_bits_araddr; // @[riscv_soc.scala 43:23]
  wire [7:0] axi_ram_io_ram_bus_ar_bits_arlen; // @[riscv_soc.scala 43:23]
  wire  axi_ram_io_ram_bus_r_valid; // @[riscv_soc.scala 43:23]
  wire [63:0] axi_ram_io_ram_bus_r_bits_rdata; // @[riscv_soc.scala 43:23]
  wire  axi_ram_io_ram_bus_r_bits_rlast; // @[riscv_soc.scala 43:23]
  wire  sram0_clock; // @[riscv_soc.scala 44:21]
  wire  sram0_reset; // @[riscv_soc.scala 44:21]
  wire [5:0] sram0_io_addr; // @[riscv_soc.scala 44:21]
  wire  sram0_io_wen; // @[riscv_soc.scala 44:21]
  wire [127:0] sram0_io_wmask; // @[riscv_soc.scala 44:21]
  wire [127:0] sram0_io_wdata; // @[riscv_soc.scala 44:21]
  wire [127:0] sram0_io_rdata; // @[riscv_soc.scala 44:21]
  wire  sram1_clock; // @[riscv_soc.scala 45:21]
  wire  sram1_reset; // @[riscv_soc.scala 45:21]
  wire [5:0] sram1_io_addr; // @[riscv_soc.scala 45:21]
  wire  sram1_io_wen; // @[riscv_soc.scala 45:21]
  wire [127:0] sram1_io_wmask; // @[riscv_soc.scala 45:21]
  wire [127:0] sram1_io_wdata; // @[riscv_soc.scala 45:21]
  wire [127:0] sram1_io_rdata; // @[riscv_soc.scala 45:21]
  wire  sram2_clock; // @[riscv_soc.scala 46:21]
  wire  sram2_reset; // @[riscv_soc.scala 46:21]
  wire [5:0] sram2_io_addr; // @[riscv_soc.scala 46:21]
  wire  sram2_io_wen; // @[riscv_soc.scala 46:21]
  wire [127:0] sram2_io_wmask; // @[riscv_soc.scala 46:21]
  wire [127:0] sram2_io_wdata; // @[riscv_soc.scala 46:21]
  wire [127:0] sram2_io_rdata; // @[riscv_soc.scala 46:21]
  wire  sram3_clock; // @[riscv_soc.scala 47:21]
  wire  sram3_reset; // @[riscv_soc.scala 47:21]
  wire [5:0] sram3_io_addr; // @[riscv_soc.scala 47:21]
  wire  sram3_io_wen; // @[riscv_soc.scala 47:21]
  wire [127:0] sram3_io_wmask; // @[riscv_soc.scala 47:21]
  wire [127:0] sram3_io_wdata; // @[riscv_soc.scala 47:21]
  wire [127:0] sram3_io_rdata; // @[riscv_soc.scala 47:21]
  wire  sram4_clock; // @[riscv_soc.scala 48:21]
  wire  sram4_reset; // @[riscv_soc.scala 48:21]
  wire [5:0] sram4_io_addr; // @[riscv_soc.scala 48:21]
  wire  sram4_io_wen; // @[riscv_soc.scala 48:21]
  wire [127:0] sram4_io_wmask; // @[riscv_soc.scala 48:21]
  wire [127:0] sram4_io_wdata; // @[riscv_soc.scala 48:21]
  wire [127:0] sram4_io_rdata; // @[riscv_soc.scala 48:21]
  wire  sram5_clock; // @[riscv_soc.scala 49:21]
  wire  sram5_reset; // @[riscv_soc.scala 49:21]
  wire [5:0] sram5_io_addr; // @[riscv_soc.scala 49:21]
  wire  sram5_io_wen; // @[riscv_soc.scala 49:21]
  wire [127:0] sram5_io_wmask; // @[riscv_soc.scala 49:21]
  wire [127:0] sram5_io_wdata; // @[riscv_soc.scala 49:21]
  wire [127:0] sram5_io_rdata; // @[riscv_soc.scala 49:21]
  wire  sram6_clock; // @[riscv_soc.scala 50:21]
  wire  sram6_reset; // @[riscv_soc.scala 50:21]
  wire [5:0] sram6_io_addr; // @[riscv_soc.scala 50:21]
  wire  sram6_io_wen; // @[riscv_soc.scala 50:21]
  wire [127:0] sram6_io_wmask; // @[riscv_soc.scala 50:21]
  wire [127:0] sram6_io_wdata; // @[riscv_soc.scala 50:21]
  wire [127:0] sram6_io_rdata; // @[riscv_soc.scala 50:21]
  wire  sram7_clock; // @[riscv_soc.scala 51:21]
  wire  sram7_reset; // @[riscv_soc.scala 51:21]
  wire [5:0] sram7_io_addr; // @[riscv_soc.scala 51:21]
  wire  sram7_io_wen; // @[riscv_soc.scala 51:21]
  wire [127:0] sram7_io_wmask; // @[riscv_soc.scala 51:21]
  wire [127:0] sram7_io_wdata; // @[riscv_soc.scala 51:21]
  wire [127:0] sram7_io_rdata; // @[riscv_soc.scala 51:21]
  Core core ( // @[riscv_soc.scala 42:20]
    .clock(core_clock),
    .reset(core_reset),
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
    .io_isram_addr(core_io_isram_addr),
    .io_isram_wen_0(core_io_isram_wen_0),
    .io_isram_wen_1(core_io_isram_wen_1),
    .io_isram_tag_wdata(core_io_isram_tag_wdata),
    .io_isram_data_wdata(core_io_isram_data_wdata),
    .io_isram_rdata_0(core_io_isram_rdata_0),
    .io_isram_rdata_1(core_io_isram_rdata_1),
    .io_isram_rdata_2(core_io_isram_rdata_2),
    .io_isram_rdata_3(core_io_isram_rdata_3),
    .io_dsram_addr(core_io_dsram_addr),
    .io_dsram_wen_0(core_io_dsram_wen_0),
    .io_dsram_wen_1(core_io_dsram_wen_1),
    .io_dsram_data_wmask(core_io_dsram_data_wmask),
    .io_dsram_tag_wdata(core_io_dsram_tag_wdata),
    .io_dsram_data_wdata(core_io_dsram_data_wdata),
    .io_dsram_rdata_0(core_io_dsram_rdata_0),
    .io_dsram_rdata_1(core_io_dsram_rdata_1),
    .io_dsram_rdata_2(core_io_dsram_rdata_2),
    .io_dsram_rdata_3(core_io_dsram_rdata_3)
  );
  AXI_RAM axi_ram ( // @[riscv_soc.scala 43:23]
    .clock(axi_ram_clock),
    .reset(axi_ram_reset),
    .io_ram_bus_aw_ready(axi_ram_io_ram_bus_aw_ready),
    .io_ram_bus_aw_valid(axi_ram_io_ram_bus_aw_valid),
    .io_ram_bus_aw_bits_awaddr(axi_ram_io_ram_bus_aw_bits_awaddr),
    .io_ram_bus_w_ready(axi_ram_io_ram_bus_w_ready),
    .io_ram_bus_w_valid(axi_ram_io_ram_bus_w_valid),
    .io_ram_bus_w_bits_wdata(axi_ram_io_ram_bus_w_bits_wdata),
    .io_ram_bus_w_bits_wstrb(axi_ram_io_ram_bus_w_bits_wstrb),
    .io_ram_bus_w_bits_wlast(axi_ram_io_ram_bus_w_bits_wlast),
    .io_ram_bus_b_valid(axi_ram_io_ram_bus_b_valid),
    .io_ram_bus_ar_ready(axi_ram_io_ram_bus_ar_ready),
    .io_ram_bus_ar_valid(axi_ram_io_ram_bus_ar_valid),
    .io_ram_bus_ar_bits_araddr(axi_ram_io_ram_bus_ar_bits_araddr),
    .io_ram_bus_ar_bits_arlen(axi_ram_io_ram_bus_ar_bits_arlen),
    .io_ram_bus_r_valid(axi_ram_io_ram_bus_r_valid),
    .io_ram_bus_r_bits_rdata(axi_ram_io_ram_bus_r_bits_rdata),
    .io_ram_bus_r_bits_rlast(axi_ram_io_ram_bus_r_bits_rlast)
  );
  SRAM sram0 ( // @[riscv_soc.scala 44:21]
    .clock(sram0_clock),
    .reset(sram0_reset),
    .io_addr(sram0_io_addr),
    .io_wen(sram0_io_wen),
    .io_wmask(sram0_io_wmask),
    .io_wdata(sram0_io_wdata),
    .io_rdata(sram0_io_rdata)
  );
  SRAM sram1 ( // @[riscv_soc.scala 45:21]
    .clock(sram1_clock),
    .reset(sram1_reset),
    .io_addr(sram1_io_addr),
    .io_wen(sram1_io_wen),
    .io_wmask(sram1_io_wmask),
    .io_wdata(sram1_io_wdata),
    .io_rdata(sram1_io_rdata)
  );
  SRAM sram2 ( // @[riscv_soc.scala 46:21]
    .clock(sram2_clock),
    .reset(sram2_reset),
    .io_addr(sram2_io_addr),
    .io_wen(sram2_io_wen),
    .io_wmask(sram2_io_wmask),
    .io_wdata(sram2_io_wdata),
    .io_rdata(sram2_io_rdata)
  );
  SRAM sram3 ( // @[riscv_soc.scala 47:21]
    .clock(sram3_clock),
    .reset(sram3_reset),
    .io_addr(sram3_io_addr),
    .io_wen(sram3_io_wen),
    .io_wmask(sram3_io_wmask),
    .io_wdata(sram3_io_wdata),
    .io_rdata(sram3_io_rdata)
  );
  SRAM sram4 ( // @[riscv_soc.scala 48:21]
    .clock(sram4_clock),
    .reset(sram4_reset),
    .io_addr(sram4_io_addr),
    .io_wen(sram4_io_wen),
    .io_wmask(sram4_io_wmask),
    .io_wdata(sram4_io_wdata),
    .io_rdata(sram4_io_rdata)
  );
  SRAM sram5 ( // @[riscv_soc.scala 49:21]
    .clock(sram5_clock),
    .reset(sram5_reset),
    .io_addr(sram5_io_addr),
    .io_wen(sram5_io_wen),
    .io_wmask(sram5_io_wmask),
    .io_wdata(sram5_io_wdata),
    .io_rdata(sram5_io_rdata)
  );
  SRAM sram6 ( // @[riscv_soc.scala 50:21]
    .clock(sram6_clock),
    .reset(sram6_reset),
    .io_addr(sram6_io_addr),
    .io_wen(sram6_io_wen),
    .io_wmask(sram6_io_wmask),
    .io_wdata(sram6_io_wdata),
    .io_rdata(sram6_io_rdata)
  );
  SRAM sram7 ( // @[riscv_soc.scala 51:21]
    .clock(sram7_clock),
    .reset(sram7_reset),
    .io_addr(sram7_io_addr),
    .io_wen(sram7_io_wen),
    .io_wmask(sram7_io_wmask),
    .io_wdata(sram7_io_wdata),
    .io_rdata(sram7_io_rdata)
  );
  assign core_clock = clock;
  assign core_reset = reset;
  assign core_io_axi_bus_aw_ready = axi_ram_io_ram_bus_aw_ready; // @[riscv_soc.scala 93:28]
  assign core_io_axi_bus_w_ready = axi_ram_io_ram_bus_w_ready; // @[riscv_soc.scala 93:28]
  assign core_io_axi_bus_b_valid = axi_ram_io_ram_bus_b_valid; // @[riscv_soc.scala 93:28]
  assign core_io_axi_bus_ar_ready = axi_ram_io_ram_bus_ar_ready; // @[riscv_soc.scala 93:28]
  assign core_io_axi_bus_r_valid = axi_ram_io_ram_bus_r_valid; // @[riscv_soc.scala 93:28]
  assign core_io_axi_bus_r_bits_rdata = axi_ram_io_ram_bus_r_bits_rdata; // @[riscv_soc.scala 93:28]
  assign core_io_axi_bus_r_bits_rlast = axi_ram_io_ram_bus_r_bits_rlast; // @[riscv_soc.scala 93:28]
  assign core_io_isram_rdata_0 = sram0_io_rdata; // @[riscv_soc.scala 95:32]
  assign core_io_isram_rdata_1 = sram1_io_rdata; // @[riscv_soc.scala 96:32]
  assign core_io_isram_rdata_2 = sram2_io_rdata; // @[riscv_soc.scala 97:32]
  assign core_io_isram_rdata_3 = sram3_io_rdata; // @[riscv_soc.scala 98:32]
  assign core_io_dsram_rdata_0 = sram4_io_rdata; // @[riscv_soc.scala 124:32]
  assign core_io_dsram_rdata_1 = sram5_io_rdata; // @[riscv_soc.scala 125:32]
  assign core_io_dsram_rdata_2 = sram6_io_rdata; // @[riscv_soc.scala 126:32]
  assign core_io_dsram_rdata_3 = sram7_io_rdata; // @[riscv_soc.scala 127:32]
  assign axi_ram_clock = clock;
  assign axi_ram_reset = reset;
  assign axi_ram_io_ram_bus_aw_valid = core_io_axi_bus_aw_valid; // @[riscv_soc.scala 93:28]
  assign axi_ram_io_ram_bus_aw_bits_awaddr = core_io_axi_bus_aw_bits_awaddr; // @[riscv_soc.scala 93:28]
  assign axi_ram_io_ram_bus_w_valid = core_io_axi_bus_w_valid; // @[riscv_soc.scala 93:28]
  assign axi_ram_io_ram_bus_w_bits_wdata = core_io_axi_bus_w_bits_wdata; // @[riscv_soc.scala 93:28]
  assign axi_ram_io_ram_bus_w_bits_wstrb = core_io_axi_bus_w_bits_wstrb; // @[riscv_soc.scala 93:28]
  assign axi_ram_io_ram_bus_w_bits_wlast = core_io_axi_bus_w_bits_wlast; // @[riscv_soc.scala 93:28]
  assign axi_ram_io_ram_bus_ar_valid = core_io_axi_bus_ar_valid; // @[riscv_soc.scala 93:28]
  assign axi_ram_io_ram_bus_ar_bits_araddr = core_io_axi_bus_ar_bits_araddr; // @[riscv_soc.scala 93:28]
  assign axi_ram_io_ram_bus_ar_bits_arlen = core_io_axi_bus_ar_bits_arlen; // @[riscv_soc.scala 93:28]
  assign sram0_clock = clock;
  assign sram0_reset = reset;
  assign sram0_io_addr = core_io_isram_addr; // @[riscv_soc.scala 100:23]
  assign sram0_io_wen = core_io_isram_wen_0; // @[riscv_soc.scala 109:23]
  assign sram0_io_wmask = 128'h0; // @[riscv_soc.scala 110:24]
  assign sram0_io_wdata = core_io_isram_data_wdata; // @[riscv_soc.scala 111:24]
  assign sram1_clock = clock;
  assign sram1_reset = reset;
  assign sram1_io_addr = core_io_isram_addr; // @[riscv_soc.scala 102:23]
  assign sram1_io_wen = core_io_isram_wen_0; // @[riscv_soc.scala 112:23]
  assign sram1_io_wmask = 128'h0; // @[riscv_soc.scala 113:24]
  assign sram1_io_wdata = core_io_isram_tag_wdata; // @[riscv_soc.scala 114:24]
  assign sram2_clock = clock;
  assign sram2_reset = reset;
  assign sram2_io_addr = core_io_isram_addr; // @[riscv_soc.scala 104:23]
  assign sram2_io_wen = core_io_isram_wen_1; // @[riscv_soc.scala 116:23]
  assign sram2_io_wmask = 128'h0; // @[riscv_soc.scala 117:24]
  assign sram2_io_wdata = core_io_isram_data_wdata; // @[riscv_soc.scala 118:24]
  assign sram3_clock = clock;
  assign sram3_reset = reset;
  assign sram3_io_addr = core_io_isram_addr; // @[riscv_soc.scala 106:23]
  assign sram3_io_wen = core_io_isram_wen_1; // @[riscv_soc.scala 119:23]
  assign sram3_io_wmask = 128'h0; // @[riscv_soc.scala 120:24]
  assign sram3_io_wdata = core_io_isram_tag_wdata; // @[riscv_soc.scala 121:24]
  assign sram4_clock = clock;
  assign sram4_reset = reset;
  assign sram4_io_addr = core_io_dsram_addr; // @[riscv_soc.scala 129:23]
  assign sram4_io_wen = core_io_dsram_wen_0; // @[riscv_soc.scala 138:23]
  assign sram4_io_wmask = core_io_dsram_data_wmask; // @[riscv_soc.scala 139:24]
  assign sram4_io_wdata = core_io_dsram_data_wdata; // @[riscv_soc.scala 140:24]
  assign sram5_clock = clock;
  assign sram5_reset = reset;
  assign sram5_io_addr = core_io_dsram_addr; // @[riscv_soc.scala 131:23]
  assign sram5_io_wen = core_io_dsram_wen_0; // @[riscv_soc.scala 141:23]
  assign sram5_io_wmask = 128'h0; // @[riscv_soc.scala 142:24]
  assign sram5_io_wdata = core_io_dsram_tag_wdata; // @[riscv_soc.scala 143:24]
  assign sram6_clock = clock;
  assign sram6_reset = reset;
  assign sram6_io_addr = core_io_dsram_addr; // @[riscv_soc.scala 133:23]
  assign sram6_io_wen = core_io_dsram_wen_1; // @[riscv_soc.scala 145:23]
  assign sram6_io_wmask = core_io_dsram_data_wmask; // @[riscv_soc.scala 146:24]
  assign sram6_io_wdata = core_io_dsram_data_wdata; // @[riscv_soc.scala 147:24]
  assign sram7_clock = clock;
  assign sram7_reset = reset;
  assign sram7_io_addr = core_io_dsram_addr; // @[riscv_soc.scala 135:23]
  assign sram7_io_wen = core_io_dsram_wen_1; // @[riscv_soc.scala 148:23]
  assign sram7_io_wmask = 128'h0; // @[riscv_soc.scala 149:24]
  assign sram7_io_wdata = core_io_dsram_tag_wdata; // @[riscv_soc.scala 150:24]
endmodule