module Core(
  input          clock,
  input          reset,
  input          io_axi_bus_aw_ready,
  output         io_axi_bus_aw_valid,
  output [63:0]  io_axi_bus_aw_bits_awaddr,
  input          io_axi_bus_w_ready,
  output         io_axi_bus_w_valid,
  output [63:0]  io_axi_bus_w_bits_wdata,
  output [7:0]   io_axi_bus_w_bits_wstrb,
  output         io_axi_bus_w_bits_wlast,
  input          io_axi_bus_b_valid,
  input          io_axi_bus_ar_ready,
  output         io_axi_bus_ar_valid,
  output [63:0]  io_axi_bus_ar_bits_araddr,
  output [7:0]   io_axi_bus_ar_bits_arlen,
  input          io_axi_bus_r_valid,
  input  [63:0]  io_axi_bus_r_bits_rdata,
  input          io_axi_bus_r_bits_rlast,
  output [5:0]   io_sram0_addr,
  output         io_sram0_wen,
  output [127:0] io_sram0_wdata,
  input  [127:0] io_sram0_rdata,
  output [5:0]   io_sram1_addr,
  output         io_sram1_wen,
  output [127:0] io_sram1_wdata,
  input  [127:0] io_sram1_rdata,
  output [5:0]   io_sram2_addr,
  output         io_sram2_wen,
  output [127:0] io_sram2_wdata,
  input  [127:0] io_sram2_rdata,
  output [5:0]   io_sram3_addr,
  output         io_sram3_wen,
  output [127:0] io_sram3_wdata,
  input  [127:0] io_sram3_rdata,
  output [5:0]   io_sram4_addr,
  output         io_sram4_wen,
  output [127:0] io_sram4_wmask,
  output [127:0] io_sram4_wdata,
  input  [127:0] io_sram4_rdata,
  output [5:0]   io_sram5_addr,
  output         io_sram5_wen,
  output [127:0] io_sram5_wdata,
  input  [127:0] io_sram5_rdata,
  output [5:0]   io_sram6_addr,
  output         io_sram6_wen,
  output [127:0] io_sram6_wmask,
  output [127:0] io_sram6_wdata,
  input  [127:0] io_sram6_rdata,
  output [5:0]   io_sram7_addr,
  output         io_sram7_wen,
  output [127:0] io_sram7_wdata,
  input  [127:0] io_sram7_rdata
);
  wire  i_cache_clock; // @[core.scala 26:41]
  wire  i_cache_reset; // @[core.scala 26:41]
  wire  i_cache_io_flush; // @[core.scala 26:41]
  wire  i_cache_io_cpu_raddr_ready; // @[core.scala 26:41]
  wire  i_cache_io_cpu_raddr_valid; // @[core.scala 26:41]
  wire [63:0] i_cache_io_cpu_raddr_bits_addr; // @[core.scala 26:41]
  wire  i_cache_io_cpu_rdata_ready; // @[core.scala 26:41]
  wire  i_cache_io_cpu_rdata_valid; // @[core.scala 26:41]
  wire [63:0] i_cache_io_cpu_rdata_bits_data; // @[core.scala 26:41]
  wire [63:0] i_cache_io_cpu_rdata_bits_pc; // @[core.scala 26:41]
  wire  i_cache_io_is_fence_i; // @[core.scala 26:41]
  wire [5:0] i_cache_io_sram0_data_addr; // @[core.scala 26:41]
  wire  i_cache_io_sram0_data_wen; // @[core.scala 26:41]
  wire [127:0] i_cache_io_sram0_data_wdata; // @[core.scala 26:41]
  wire [127:0] i_cache_io_sram0_data_rdata; // @[core.scala 26:41]
  wire [5:0] i_cache_io_sram0_tag_addr; // @[core.scala 26:41]
  wire  i_cache_io_sram0_tag_wen; // @[core.scala 26:41]
  wire [127:0] i_cache_io_sram0_tag_wdata; // @[core.scala 26:41]
  wire [127:0] i_cache_io_sram0_tag_rdata; // @[core.scala 26:41]
  wire [5:0] i_cache_io_sram2_data_addr; // @[core.scala 26:41]
  wire  i_cache_io_sram2_data_wen; // @[core.scala 26:41]
  wire [127:0] i_cache_io_sram2_data_wdata; // @[core.scala 26:41]
  wire [127:0] i_cache_io_sram2_data_rdata; // @[core.scala 26:41]
  wire [5:0] i_cache_io_sram2_tag_addr; // @[core.scala 26:41]
  wire  i_cache_io_sram2_tag_wen; // @[core.scala 26:41]
  wire [127:0] i_cache_io_sram2_tag_wdata; // @[core.scala 26:41]
  wire [127:0] i_cache_io_sram2_tag_rdata; // @[core.scala 26:41]
  wire  i_cache_io_cache_bus_r_valid; // @[core.scala 26:41]
  wire [63:0] i_cache_io_cache_bus_r_bits_raddr; // @[core.scala 26:41]
  wire [63:0] i_cache_io_cache_bus_r_bits_rdata; // @[core.scala 26:41]
  wire  i_cache_io_cache_bus_r_bits_rlast; // @[core.scala 26:41]
  wire  i_cache_io_cache_bus_r_ready; // @[core.scala 26:41]
  wire  d_cache_clock; // @[core.scala 27:49]
  wire  d_cache_reset; // @[core.scala 27:49]
  wire  d_cache_io_cpu_valid; // @[core.scala 27:49]
  wire [63:0] d_cache_io_cpu_bits_addr; // @[core.scala 27:49]
  wire [63:0] d_cache_io_cpu_bits_rdata; // @[core.scala 27:49]
  wire [63:0] d_cache_io_cpu_bits_wdata; // @[core.scala 27:49]
  wire [7:0] d_cache_io_cpu_bits_wstrb; // @[core.scala 27:49]
  wire  d_cache_io_cpu_bits_is_w; // @[core.scala 27:49]
  wire  d_cache_io_cpu_ready; // @[core.scala 27:49]
  wire [5:0] d_cache_io_sram0_data_addr; // @[core.scala 27:49]
  wire  d_cache_io_sram0_data_wen; // @[core.scala 27:49]
  wire [127:0] d_cache_io_sram0_data_wmask; // @[core.scala 27:49]
  wire [127:0] d_cache_io_sram0_data_wdata; // @[core.scala 27:49]
  wire [127:0] d_cache_io_sram0_data_rdata; // @[core.scala 27:49]
  wire [5:0] d_cache_io_sram0_tag_addr; // @[core.scala 27:49]
  wire  d_cache_io_sram0_tag_wen; // @[core.scala 27:49]
  wire [127:0] d_cache_io_sram0_tag_wdata; // @[core.scala 27:49]
  wire [127:0] d_cache_io_sram0_tag_rdata; // @[core.scala 27:49]
  wire [5:0] d_cache_io_sram2_data_addr; // @[core.scala 27:49]
  wire  d_cache_io_sram2_data_wen; // @[core.scala 27:49]
  wire [127:0] d_cache_io_sram2_data_wmask; // @[core.scala 27:49]
  wire [127:0] d_cache_io_sram2_data_wdata; // @[core.scala 27:49]
  wire [127:0] d_cache_io_sram2_data_rdata; // @[core.scala 27:49]
  wire [5:0] d_cache_io_sram2_tag_addr; // @[core.scala 27:49]
  wire  d_cache_io_sram2_tag_wen; // @[core.scala 27:49]
  wire [127:0] d_cache_io_sram2_tag_wdata; // @[core.scala 27:49]
  wire [127:0] d_cache_io_sram2_tag_rdata; // @[core.scala 27:49]
  wire  d_cache_io_cache_bus_w_ready; // @[core.scala 27:49]
  wire  d_cache_io_cache_bus_w_valid; // @[core.scala 27:49]
  wire [63:0] d_cache_io_cache_bus_w_bits_waddr; // @[core.scala 27:49]
  wire [63:0] d_cache_io_cache_bus_w_bits_wdata; // @[core.scala 27:49]
  wire  d_cache_io_cache_bus_w_bits_wlast; // @[core.scala 27:49]
  wire  d_cache_io_cache_bus_b_ready; // @[core.scala 27:49]
  wire  d_cache_io_cache_bus_b_valid; // @[core.scala 27:49]
  wire  d_cache_io_cache_bus_r_valid; // @[core.scala 27:49]
  wire [63:0] d_cache_io_cache_bus_r_bits_raddr; // @[core.scala 27:49]
  wire [63:0] d_cache_io_cache_bus_r_bits_rdata; // @[core.scala 27:49]
  wire  d_cache_io_cache_bus_r_bits_rlast; // @[core.scala 27:49]
  wire  d_cache_io_cache_bus_r_ready; // @[core.scala 27:49]
  wire  cross_bar_clock; // @[core.scala 28:41]
  wire  cross_bar_reset; // @[core.scala 28:41]
  wire  cross_bar_io_ICache_bus_r_valid; // @[core.scala 28:41]
  wire [63:0] cross_bar_io_ICache_bus_r_bits_raddr; // @[core.scala 28:41]
  wire [63:0] cross_bar_io_ICache_bus_r_bits_rdata; // @[core.scala 28:41]
  wire  cross_bar_io_ICache_bus_r_bits_rlast; // @[core.scala 28:41]
  wire  cross_bar_io_ICache_bus_r_ready; // @[core.scala 28:41]
  wire  cross_bar_io_DCache_bus_w_ready; // @[core.scala 28:41]
  wire  cross_bar_io_DCache_bus_w_valid; // @[core.scala 28:41]
  wire [63:0] cross_bar_io_DCache_bus_w_bits_waddr; // @[core.scala 28:41]
  wire [63:0] cross_bar_io_DCache_bus_w_bits_wdata; // @[core.scala 28:41]
  wire  cross_bar_io_DCache_bus_w_bits_wlast; // @[core.scala 28:41]
  wire  cross_bar_io_DCache_bus_b_valid; // @[core.scala 28:41]
  wire  cross_bar_io_DCache_bus_r_valid; // @[core.scala 28:41]
  wire [63:0] cross_bar_io_DCache_bus_r_bits_raddr; // @[core.scala 28:41]
  wire [63:0] cross_bar_io_DCache_bus_r_bits_rdata; // @[core.scala 28:41]
  wire  cross_bar_io_DCache_bus_r_bits_rlast; // @[core.scala 28:41]
  wire  cross_bar_io_DCache_bus_r_ready; // @[core.scala 28:41]
  wire  cross_bar_io_bus1_valid; // @[core.scala 28:41]
  wire [63:0] cross_bar_io_bus1_bits_addr; // @[core.scala 28:41]
  wire [63:0] cross_bar_io_bus1_bits_rdata; // @[core.scala 28:41]
  wire  cross_bar_io_bus1_ready; // @[core.scala 28:41]
  wire  cross_bar_io_bus2_valid; // @[core.scala 28:41]
  wire [63:0] cross_bar_io_bus2_bits_addr; // @[core.scala 28:41]
  wire [63:0] cross_bar_io_bus2_bits_rdata; // @[core.scala 28:41]
  wire [63:0] cross_bar_io_bus2_bits_wdata; // @[core.scala 28:41]
  wire [7:0] cross_bar_io_bus2_bits_wstrb; // @[core.scala 28:41]
  wire  cross_bar_io_bus2_bits_is_w; // @[core.scala 28:41]
  wire  cross_bar_io_bus2_ready; // @[core.scala 28:41]
  wire  cross_bar_io_AXI_Bus_aw_ready; // @[core.scala 28:41]
  wire  cross_bar_io_AXI_Bus_aw_valid; // @[core.scala 28:41]
  wire [63:0] cross_bar_io_AXI_Bus_aw_bits_awaddr; // @[core.scala 28:41]
  wire  cross_bar_io_AXI_Bus_w_ready; // @[core.scala 28:41]
  wire  cross_bar_io_AXI_Bus_w_valid; // @[core.scala 28:41]
  wire [63:0] cross_bar_io_AXI_Bus_w_bits_wdata; // @[core.scala 28:41]
  wire [7:0] cross_bar_io_AXI_Bus_w_bits_wstrb; // @[core.scala 28:41]
  wire  cross_bar_io_AXI_Bus_w_bits_wlast; // @[core.scala 28:41]
  wire  cross_bar_io_AXI_Bus_b_ready; // @[core.scala 28:41]
  wire  cross_bar_io_AXI_Bus_b_valid; // @[core.scala 28:41]
  wire  cross_bar_io_AXI_Bus_ar_ready; // @[core.scala 28:41]
  wire  cross_bar_io_AXI_Bus_ar_valid; // @[core.scala 28:41]
  wire [63:0] cross_bar_io_AXI_Bus_ar_bits_araddr; // @[core.scala 28:41]
  wire [7:0] cross_bar_io_AXI_Bus_ar_bits_arlen; // @[core.scala 28:41]
  wire  cross_bar_io_AXI_Bus_r_valid; // @[core.scala 28:41]
  wire [63:0] cross_bar_io_AXI_Bus_r_bits_rdata; // @[core.scala 28:41]
  wire  cross_bar_io_AXI_Bus_r_bits_rlast; // @[core.scala 28:41]
  wire  cross_bar_1_io_fetch_cpu_addr_ready; // @[core.scala 29:41]
  wire  cross_bar_1_io_fetch_cpu_addr_valid; // @[core.scala 29:41]
  wire [63:0] cross_bar_1_io_fetch_cpu_addr_bits_addr; // @[core.scala 29:41]
  wire  cross_bar_1_io_fetch_cpu_data_ready; // @[core.scala 29:41]
  wire  cross_bar_1_io_fetch_cpu_data_valid; // @[core.scala 29:41]
  wire [63:0] cross_bar_1_io_fetch_cpu_data_bits_data; // @[core.scala 29:41]
  wire [63:0] cross_bar_1_io_fetch_cpu_data_bits_pc; // @[core.scala 29:41]
  wire  cross_bar_1_io_wb_valid; // @[core.scala 29:41]
  wire [63:0] cross_bar_1_io_wb_bits_addr; // @[core.scala 29:41]
  wire [63:0] cross_bar_1_io_wb_bits_rdata; // @[core.scala 29:41]
  wire [63:0] cross_bar_1_io_wb_bits_wdata; // @[core.scala 29:41]
  wire [7:0] cross_bar_1_io_wb_bits_wstrb; // @[core.scala 29:41]
  wire  cross_bar_1_io_wb_bits_is_w; // @[core.scala 29:41]
  wire  cross_bar_1_io_wb_ready; // @[core.scala 29:41]
  wire  cross_bar_1_io_ICache_cpu_raddr_ready; // @[core.scala 29:41]
  wire  cross_bar_1_io_ICache_cpu_raddr_valid; // @[core.scala 29:41]
  wire [63:0] cross_bar_1_io_ICache_cpu_raddr_bits_addr; // @[core.scala 29:41]
  wire  cross_bar_1_io_ICache_cpu_rdata_ready; // @[core.scala 29:41]
  wire  cross_bar_1_io_ICache_cpu_rdata_valid; // @[core.scala 29:41]
  wire [63:0] cross_bar_1_io_ICache_cpu_rdata_bits_data; // @[core.scala 29:41]
  wire [63:0] cross_bar_1_io_ICache_cpu_rdata_bits_pc; // @[core.scala 29:41]
  wire  cross_bar_1_io_DCache_valid; // @[core.scala 29:41]
  wire [63:0] cross_bar_1_io_DCache_bits_addr; // @[core.scala 29:41]
  wire [63:0] cross_bar_1_io_DCache_bits_rdata; // @[core.scala 29:41]
  wire [63:0] cross_bar_1_io_DCache_bits_wdata; // @[core.scala 29:41]
  wire [7:0] cross_bar_1_io_DCache_bits_wstrb; // @[core.scala 29:41]
  wire  cross_bar_1_io_DCache_bits_is_w; // @[core.scala 29:41]
  wire  cross_bar_1_io_DCache_ready; // @[core.scala 29:41]
  wire  cross_bar_1_io_bus1_valid; // @[core.scala 29:41]
  wire [63:0] cross_bar_1_io_bus1_bits_addr; // @[core.scala 29:41]
  wire [63:0] cross_bar_1_io_bus1_bits_rdata; // @[core.scala 29:41]
  wire  cross_bar_1_io_bus1_ready; // @[core.scala 29:41]
  wire  cross_bar_1_io_bus2_valid; // @[core.scala 29:41]
  wire [63:0] cross_bar_1_io_bus2_bits_addr; // @[core.scala 29:41]
  wire [63:0] cross_bar_1_io_bus2_bits_rdata; // @[core.scala 29:41]
  wire [63:0] cross_bar_1_io_bus2_bits_wdata; // @[core.scala 29:41]
  wire [7:0] cross_bar_1_io_bus2_bits_wstrb; // @[core.scala 29:41]
  wire  cross_bar_1_io_bus2_bits_is_w; // @[core.scala 29:41]
  wire  cross_bar_1_io_bus2_ready; // @[core.scala 29:41]
  wire  cross_bar_1_io_clint_bus_valid; // @[core.scala 29:41]
  wire [63:0] cross_bar_1_io_clint_bus_bits_addr; // @[core.scala 29:41]
  wire [63:0] cross_bar_1_io_clint_bus_bits_rdata; // @[core.scala 29:41]
  wire [63:0] cross_bar_1_io_clint_bus_bits_wdata; // @[core.scala 29:41]
  wire  cross_bar_1_io_clint_bus_bits_is_w; // @[core.scala 29:41]
  wire  cross_bar_1_io_clint_bus_ready; // @[core.scala 29:41]
  wire  fetch_clock; // @[core.scala 31:49]
  wire  fetch_reset; // @[core.scala 31:49]
  wire  fetch_io_br_info_valid; // @[core.scala 31:49]
  wire  fetch_io_br_info_mispredict; // @[core.scala 31:49]
  wire [63:0] fetch_io_br_info_br_pc; // @[core.scala 31:49]
  wire  fetch_io_br_info_taken; // @[core.scala 31:49]
  wire [63:0] fetch_io_br_info_target_next_pc; // @[core.scala 31:49]
  wire  fetch_io_get_pre_info_valid; // @[core.scala 31:49]
  wire [63:0] fetch_io_get_pre_info_pre_next_pc; // @[core.scala 31:49]
  wire [63:0] fetch_io_next_pc; // @[core.scala 31:49]
  wire  fetch_io_flush; // @[core.scala 31:49]
  wire  fetch_io_cpu_addr_ready; // @[core.scala 31:49]
  wire  fetch_io_cpu_addr_valid; // @[core.scala 31:49]
  wire [63:0] fetch_io_cpu_addr_bits_addr; // @[core.scala 31:49]
  wire  fetch_io_cpu_data_ready; // @[core.scala 31:49]
  wire  fetch_io_cpu_data_valid; // @[core.scala 31:49]
  wire [63:0] fetch_io_cpu_data_bits_data; // @[core.scala 31:49]
  wire [63:0] fetch_io_cpu_data_bits_pc; // @[core.scala 31:49]
  wire  fetch_io_put_pc_ready; // @[core.scala 31:49]
  wire  fetch_io_put_pc_valid; // @[core.scala 31:49]
  wire [31:0] fetch_io_put_pc_bits_inst; // @[core.scala 31:49]
  wire [63:0] fetch_io_put_pc_bits_pc; // @[core.scala 31:49]
  wire  fetch_io_put_pc_bits_is_pre; // @[core.scala 31:49]
  wire  fetch_io_out_flush; // @[core.scala 31:49]
  wire  execute_clock; // @[core.scala 32:41]
  wire  execute_reset; // @[core.scala 32:41]
  wire  execute_io_op_datas_ready; // @[core.scala 32:41]
  wire  execute_io_op_datas_valid; // @[core.scala 32:41]
  wire [2:0] execute_io_op_datas_bits_opType; // @[core.scala 32:41]
  wire [6:0] execute_io_op_datas_bits_exuType; // @[core.scala 32:41]
  wire [4:0] execute_io_op_datas_bits_rs1_addr; // @[core.scala 32:41]
  wire [63:0] execute_io_op_datas_bits_rs1_data; // @[core.scala 32:41]
  wire [4:0] execute_io_op_datas_bits_rs2_addr; // @[core.scala 32:41]
  wire [63:0] execute_io_op_datas_bits_rs2_data; // @[core.scala 32:41]
  wire [31:0] execute_io_op_datas_bits_imm; // @[core.scala 32:41]
  wire [63:0] execute_io_op_datas_bits_pc; // @[core.scala 32:41]
  wire [31:0] execute_io_op_datas_bits_inst; // @[core.scala 32:41]
  wire [4:0] execute_io_op_datas_bits_dest_addr; // @[core.scala 32:41]
  wire  execute_io_op_datas_bits_dest_is_reg; // @[core.scala 32:41]
  wire  execute_io_op_datas_bits_is_pre; // @[core.scala 32:41]
  wire [11:0] execute_io_op_datas_bits_csr_addr; // @[core.scala 32:41]
  wire [63:0] execute_io_op_datas_bits_csr_data; // @[core.scala 32:41]
  wire  execute_io_irq_time_irq; // @[core.scala 32:41]
  wire  execute_io_irq_soft_irq; // @[core.scala 32:41]
  wire [63:0] execute_io_mstatus; // @[core.scala 32:41]
  wire [63:0] execute_io_mie; // @[core.scala 32:41]
  wire [63:0] execute_io_mepc; // @[core.scala 32:41]
  wire [63:0] execute_io_mtvec; // @[core.scala 32:41]
  wire  execute_io_wb_valid; // @[core.scala 32:41]
  wire [4:0] execute_io_wb_dest_addr; // @[core.scala 32:41]
  wire [63:0] execute_io_wb_dest_data; // @[core.scala 32:41]
  wire  execute_io_csr_valid; // @[core.scala 32:41]
  wire [11:0] execute_io_csr_csr_addr; // @[core.scala 32:41]
  wire [63:0] execute_io_csr_csr_data; // @[core.scala 32:41]
  wire  execute_io_csr_except_is_except; // @[core.scala 32:41]
  wire  execute_io_csr_except_is_time_irq; // @[core.scala 32:41]
  wire  execute_io_csr_except_is_soft_irq; // @[core.scala 32:41]
  wire [5:0] execute_io_csr_except_exception; // @[core.scala 32:41]
  wire [63:0] execute_io_csr_except_next_pc; // @[core.scala 32:41]
  wire [63:0] execute_io_csr_except_pc; // @[core.scala 32:41]
  wire  execute_io_commit; // @[core.scala 32:41]
  wire [31:0] execute_io_difftest_inst; // @[core.scala 32:41]
  wire  execute_io_difftest_peripheral; // @[core.scala 32:41]
  wire [63:0] execute_io_next_pc; // @[core.scala 32:41]
  wire  execute_io_flush; // @[core.scala 32:41]
  wire  execute_io_fence_i; // @[core.scala 32:41]
  wire  execute_io_br_info_valid; // @[core.scala 32:41]
  wire  execute_io_br_info_mispredict; // @[core.scala 32:41]
  wire [63:0] execute_io_br_info_br_pc; // @[core.scala 32:41]
  wire  execute_io_br_info_taken; // @[core.scala 32:41]
  wire [63:0] execute_io_br_info_target_next_pc; // @[core.scala 32:41]
  wire  execute_io_get_pre_info_valid; // @[core.scala 32:41]
  wire [63:0] execute_io_get_pre_info_pre_next_pc; // @[core.scala 32:41]
  wire  execute_io_bus_valid; // @[core.scala 32:41]
  wire [63:0] execute_io_bus_bits_addr; // @[core.scala 32:41]
  wire [63:0] execute_io_bus_bits_rdata; // @[core.scala 32:41]
  wire [63:0] execute_io_bus_bits_wdata; // @[core.scala 32:41]
  wire [7:0] execute_io_bus_bits_wstrb; // @[core.scala 32:41]
  wire  execute_io_bus_bits_is_w; // @[core.scala 32:41]
  wire  execute_io_bus_ready; // @[core.scala 32:41]
  wire  decode_clock; // @[core.scala 33:49]
  wire  decode_reset; // @[core.scala 33:49]
  wire  decode_io_get_inst_ready; // @[core.scala 33:49]
  wire  decode_io_get_inst_valid; // @[core.scala 33:49]
  wire [31:0] decode_io_get_inst_bits_inst; // @[core.scala 33:49]
  wire [63:0] decode_io_get_inst_bits_pc; // @[core.scala 33:49]
  wire  decode_io_get_inst_bits_is_pre; // @[core.scala 33:49]
  wire [4:0] decode_io_normal_rd_rs1_addr; // @[core.scala 33:49]
  wire [63:0] decode_io_normal_rd_rs1_data; // @[core.scala 33:49]
  wire [4:0] decode_io_normal_rd_rs2_addr; // @[core.scala 33:49]
  wire [63:0] decode_io_normal_rd_rs2_data; // @[core.scala 33:49]
  wire [11:0] decode_io_csr_rd_csr_addr; // @[core.scala 33:49]
  wire [63:0] decode_io_csr_rd_csr_data; // @[core.scala 33:49]
  wire  decode_io_op_datas_ready; // @[core.scala 33:49]
  wire  decode_io_op_datas_valid; // @[core.scala 33:49]
  wire [2:0] decode_io_op_datas_bits_opType; // @[core.scala 33:49]
  wire [6:0] decode_io_op_datas_bits_exuType; // @[core.scala 33:49]
  wire [4:0] decode_io_op_datas_bits_rs1_addr; // @[core.scala 33:49]
  wire [63:0] decode_io_op_datas_bits_rs1_data; // @[core.scala 33:49]
  wire [4:0] decode_io_op_datas_bits_rs2_addr; // @[core.scala 33:49]
  wire [63:0] decode_io_op_datas_bits_rs2_data; // @[core.scala 33:49]
  wire [31:0] decode_io_op_datas_bits_imm; // @[core.scala 33:49]
  wire [63:0] decode_io_op_datas_bits_pc; // @[core.scala 33:49]
  wire [31:0] decode_io_op_datas_bits_inst; // @[core.scala 33:49]
  wire [4:0] decode_io_op_datas_bits_dest_addr; // @[core.scala 33:49]
  wire  decode_io_op_datas_bits_dest_is_reg; // @[core.scala 33:49]
  wire  decode_io_op_datas_bits_is_pre; // @[core.scala 33:49]
  wire [11:0] decode_io_op_datas_bits_csr_addr; // @[core.scala 33:49]
  wire [63:0] decode_io_op_datas_bits_csr_data; // @[core.scala 33:49]
  wire  decode_io_flush; // @[core.scala 33:49]
  wire  commit_clock; // @[core.scala 34:49]
  wire  commit_reset; // @[core.scala 34:49]
  wire [4:0] commit_io_normal_rd_rs1_addr; // @[core.scala 34:49]
  wire [63:0] commit_io_normal_rd_rs1_data; // @[core.scala 34:49]
  wire [4:0] commit_io_normal_rd_rs2_addr; // @[core.scala 34:49]
  wire [63:0] commit_io_normal_rd_rs2_data; // @[core.scala 34:49]
  wire  commit_io_normal_wb_valid; // @[core.scala 34:49]
  wire [4:0] commit_io_normal_wb_dest_addr; // @[core.scala 34:49]
  wire [63:0] commit_io_normal_wb_dest_data; // @[core.scala 34:49]
  wire [11:0] commit_io_csr_rd_csr_addr; // @[core.scala 34:49]
  wire [63:0] commit_io_csr_rd_csr_data; // @[core.scala 34:49]
  wire  commit_io_csr_wb_valid; // @[core.scala 34:49]
  wire [11:0] commit_io_csr_wb_csr_addr; // @[core.scala 34:49]
  wire [63:0] commit_io_csr_wb_csr_data; // @[core.scala 34:49]
  wire  commit_io_csr_except_is_except; // @[core.scala 34:49]
  wire  commit_io_csr_except_is_time_irq; // @[core.scala 34:49]
  wire  commit_io_csr_except_is_soft_irq; // @[core.scala 34:49]
  wire [5:0] commit_io_csr_except_exception; // @[core.scala 34:49]
  wire [63:0] commit_io_csr_except_next_pc; // @[core.scala 34:49]
  wire [63:0] commit_io_csr_except_pc; // @[core.scala 34:49]
  wire [63:0] commit_io_csr_pass_csr_mtvec; // @[core.scala 34:49]
  wire [63:0] commit_io_csr_pass_csr_mepc; // @[core.scala 34:49]
  wire [63:0] commit_io_csr_pass_csr_mstatus; // @[core.scala 34:49]
  wire [63:0] commit_io_csr_pass_csr_mie; // @[core.scala 34:49]
  wire  commit_io_commit; // @[core.scala 34:49]
  wire [31:0] commit_io_difftest_inst; // @[core.scala 34:49]
  wire  commit_io_difftest_peripheral; // @[core.scala 34:49]

  wire  clint_de_clock; // @[core.scala 36:41]
  wire  clint_de_reset; // @[core.scala 36:41]
  wire  clint_de_io_valid; // @[core.scala 36:41]
  wire [63:0] clint_de_io_bits_addr; // @[core.scala 36:41]
  wire [63:0] clint_de_io_bits_wdata; // @[core.scala 36:41]
  wire [63:0] clint_de_io_bits_rdata; // @[core.scala 36:41]
  wire  clint_de_io_bits_is_w; // @[core.scala 36:41]
  wire  clint_de_io_ready; // @[core.scala 36:41]
  wire  clint_de_io_soft_irq; // @[core.scala 36:41]
  wire  clint_de_io_time_irq; // @[core.scala 36:41]
  ICache i_cache ( // @[core.scala 26:41]
    .clock(i_cache_clock),
    .reset(i_cache_reset),
    .io_flush(i_cache_io_flush),
    .io_cpu_raddr_ready(i_cache_io_cpu_raddr_ready),
    .io_cpu_raddr_valid(i_cache_io_cpu_raddr_valid),
    .io_cpu_raddr_bits_addr(i_cache_io_cpu_raddr_bits_addr),
    .io_cpu_rdata_ready(i_cache_io_cpu_rdata_ready),
    .io_cpu_rdata_valid(i_cache_io_cpu_rdata_valid),
    .io_cpu_rdata_bits_data(i_cache_io_cpu_rdata_bits_data),
    .io_cpu_rdata_bits_pc(i_cache_io_cpu_rdata_bits_pc),
    .io_is_fence_i(i_cache_io_is_fence_i),
    .io_sram0_data_addr(i_cache_io_sram0_data_addr),
    .io_sram0_data_wen(i_cache_io_sram0_data_wen),
    .io_sram0_data_wdata(i_cache_io_sram0_data_wdata),
    .io_sram0_data_rdata(i_cache_io_sram0_data_rdata),
    .io_sram0_tag_addr(i_cache_io_sram0_tag_addr),
    .io_sram0_tag_wen(i_cache_io_sram0_tag_wen),
    .io_sram0_tag_wdata(i_cache_io_sram0_tag_wdata),
    .io_sram0_tag_rdata(i_cache_io_sram0_tag_rdata),
    .io_sram2_data_addr(i_cache_io_sram2_data_addr),
    .io_sram2_data_wen(i_cache_io_sram2_data_wen),
    .io_sram2_data_wdata(i_cache_io_sram2_data_wdata),
    .io_sram2_data_rdata(i_cache_io_sram2_data_rdata),
    .io_sram2_tag_addr(i_cache_io_sram2_tag_addr),
    .io_sram2_tag_wen(i_cache_io_sram2_tag_wen),
    .io_sram2_tag_wdata(i_cache_io_sram2_tag_wdata),
    .io_sram2_tag_rdata(i_cache_io_sram2_tag_rdata),
    .io_cache_bus_r_valid(i_cache_io_cache_bus_r_valid),
    .io_cache_bus_r_bits_raddr(i_cache_io_cache_bus_r_bits_raddr),
    .io_cache_bus_r_bits_rdata(i_cache_io_cache_bus_r_bits_rdata),
    .io_cache_bus_r_bits_rlast(i_cache_io_cache_bus_r_bits_rlast),
    .io_cache_bus_r_ready(i_cache_io_cache_bus_r_ready)
  );
  DCache d_cache ( // @[core.scala 27:49]
    .clock(d_cache_clock),
    .reset(d_cache_reset),
    .io_cpu_valid(d_cache_io_cpu_valid),
    .io_cpu_bits_addr(d_cache_io_cpu_bits_addr),
    .io_cpu_bits_rdata(d_cache_io_cpu_bits_rdata),
    .io_cpu_bits_wdata(d_cache_io_cpu_bits_wdata),
    .io_cpu_bits_wstrb(d_cache_io_cpu_bits_wstrb),
    .io_cpu_bits_is_w(d_cache_io_cpu_bits_is_w),
    .io_cpu_ready(d_cache_io_cpu_ready),
    .io_sram0_data_addr(d_cache_io_sram0_data_addr),
    .io_sram0_data_wen(d_cache_io_sram0_data_wen),
    .io_sram0_data_wmask(d_cache_io_sram0_data_wmask),
    .io_sram0_data_wdata(d_cache_io_sram0_data_wdata),
    .io_sram0_data_rdata(d_cache_io_sram0_data_rdata),
    .io_sram0_tag_addr(d_cache_io_sram0_tag_addr),
    .io_sram0_tag_wen(d_cache_io_sram0_tag_wen),
    .io_sram0_tag_wdata(d_cache_io_sram0_tag_wdata),
    .io_sram0_tag_rdata(d_cache_io_sram0_tag_rdata),
    .io_sram2_data_addr(d_cache_io_sram2_data_addr),
    .io_sram2_data_wen(d_cache_io_sram2_data_wen),
    .io_sram2_data_wmask(d_cache_io_sram2_data_wmask),
    .io_sram2_data_wdata(d_cache_io_sram2_data_wdata),
    .io_sram2_data_rdata(d_cache_io_sram2_data_rdata),
    .io_sram2_tag_addr(d_cache_io_sram2_tag_addr),
    .io_sram2_tag_wen(d_cache_io_sram2_tag_wen),
    .io_sram2_tag_wdata(d_cache_io_sram2_tag_wdata),
    .io_sram2_tag_rdata(d_cache_io_sram2_tag_rdata),
    .io_cache_bus_w_ready(d_cache_io_cache_bus_w_ready),
    .io_cache_bus_w_valid(d_cache_io_cache_bus_w_valid),
    .io_cache_bus_w_bits_waddr(d_cache_io_cache_bus_w_bits_waddr),
    .io_cache_bus_w_bits_wdata(d_cache_io_cache_bus_w_bits_wdata),
    .io_cache_bus_w_bits_wlast(d_cache_io_cache_bus_w_bits_wlast),
    .io_cache_bus_b_ready(d_cache_io_cache_bus_b_ready),
    .io_cache_bus_b_valid(d_cache_io_cache_bus_b_valid),
    .io_cache_bus_r_valid(d_cache_io_cache_bus_r_valid),
    .io_cache_bus_r_bits_raddr(d_cache_io_cache_bus_r_bits_raddr),
    .io_cache_bus_r_bits_rdata(d_cache_io_cache_bus_r_bits_rdata),
    .io_cache_bus_r_bits_rlast(d_cache_io_cache_bus_r_bits_rlast),
    .io_cache_bus_r_ready(d_cache_io_cache_bus_r_ready)
  );
  Crossbar cross_bar ( // @[core.scala 28:41]
    .clock(cross_bar_clock),
    .reset(cross_bar_reset),
    .io_ICache_bus_r_valid(cross_bar_io_ICache_bus_r_valid),
    .io_ICache_bus_r_bits_raddr(cross_bar_io_ICache_bus_r_bits_raddr),
    .io_ICache_bus_r_bits_rdata(cross_bar_io_ICache_bus_r_bits_rdata),
    .io_ICache_bus_r_bits_rlast(cross_bar_io_ICache_bus_r_bits_rlast),
    .io_ICache_bus_r_ready(cross_bar_io_ICache_bus_r_ready),
    .io_DCache_bus_w_ready(cross_bar_io_DCache_bus_w_ready),
    .io_DCache_bus_w_valid(cross_bar_io_DCache_bus_w_valid),
    .io_DCache_bus_w_bits_waddr(cross_bar_io_DCache_bus_w_bits_waddr),
    .io_DCache_bus_w_bits_wdata(cross_bar_io_DCache_bus_w_bits_wdata),
    .io_DCache_bus_w_bits_wlast(cross_bar_io_DCache_bus_w_bits_wlast),
    .io_DCache_bus_b_valid(cross_bar_io_DCache_bus_b_valid),
    .io_DCache_bus_r_valid(cross_bar_io_DCache_bus_r_valid),
    .io_DCache_bus_r_bits_raddr(cross_bar_io_DCache_bus_r_bits_raddr),
    .io_DCache_bus_r_bits_rdata(cross_bar_io_DCache_bus_r_bits_rdata),
    .io_DCache_bus_r_bits_rlast(cross_bar_io_DCache_bus_r_bits_rlast),
    .io_DCache_bus_r_ready(cross_bar_io_DCache_bus_r_ready),
    .io_bus1_valid(cross_bar_io_bus1_valid),
    .io_bus1_bits_addr(cross_bar_io_bus1_bits_addr),
    .io_bus1_bits_rdata(cross_bar_io_bus1_bits_rdata),
    .io_bus1_ready(cross_bar_io_bus1_ready),
    .io_bus2_valid(cross_bar_io_bus2_valid),
    .io_bus2_bits_addr(cross_bar_io_bus2_bits_addr),
    .io_bus2_bits_rdata(cross_bar_io_bus2_bits_rdata),
    .io_bus2_bits_wdata(cross_bar_io_bus2_bits_wdata),
    .io_bus2_bits_wstrb(cross_bar_io_bus2_bits_wstrb),
    .io_bus2_bits_is_w(cross_bar_io_bus2_bits_is_w),
    .io_bus2_ready(cross_bar_io_bus2_ready),
    .io_AXI_Bus_aw_ready(cross_bar_io_AXI_Bus_aw_ready),
    .io_AXI_Bus_aw_valid(cross_bar_io_AXI_Bus_aw_valid),
    .io_AXI_Bus_aw_bits_awaddr(cross_bar_io_AXI_Bus_aw_bits_awaddr),
    .io_AXI_Bus_w_ready(cross_bar_io_AXI_Bus_w_ready),
    .io_AXI_Bus_w_valid(cross_bar_io_AXI_Bus_w_valid),
    .io_AXI_Bus_w_bits_wdata(cross_bar_io_AXI_Bus_w_bits_wdata),
    .io_AXI_Bus_w_bits_wstrb(cross_bar_io_AXI_Bus_w_bits_wstrb),
    .io_AXI_Bus_w_bits_wlast(cross_bar_io_AXI_Bus_w_bits_wlast),
    .io_AXI_Bus_b_ready(cross_bar_io_AXI_Bus_b_ready),
    .io_AXI_Bus_b_valid(cross_bar_io_AXI_Bus_b_valid),
    .io_AXI_Bus_ar_ready(cross_bar_io_AXI_Bus_ar_ready),
    .io_AXI_Bus_ar_valid(cross_bar_io_AXI_Bus_ar_valid),
    .io_AXI_Bus_ar_bits_araddr(cross_bar_io_AXI_Bus_ar_bits_araddr),
    .io_AXI_Bus_ar_bits_arlen(cross_bar_io_AXI_Bus_ar_bits_arlen),
    .io_AXI_Bus_r_valid(cross_bar_io_AXI_Bus_r_valid),
    .io_AXI_Bus_r_bits_rdata(cross_bar_io_AXI_Bus_r_bits_rdata),
    .io_AXI_Bus_r_bits_rlast(cross_bar_io_AXI_Bus_r_bits_rlast)
  );
  Crossbar_1 cross_bar_1 ( // @[core.scala 29:41]
    .io_fetch_cpu_addr_ready(cross_bar_1_io_fetch_cpu_addr_ready),
    .io_fetch_cpu_addr_valid(cross_bar_1_io_fetch_cpu_addr_valid),
    .io_fetch_cpu_addr_bits_addr(cross_bar_1_io_fetch_cpu_addr_bits_addr),
    .io_fetch_cpu_data_ready(cross_bar_1_io_fetch_cpu_data_ready),
    .io_fetch_cpu_data_valid(cross_bar_1_io_fetch_cpu_data_valid),
    .io_fetch_cpu_data_bits_data(cross_bar_1_io_fetch_cpu_data_bits_data),
    .io_fetch_cpu_data_bits_pc(cross_bar_1_io_fetch_cpu_data_bits_pc),
    .io_wb_valid(cross_bar_1_io_wb_valid),
    .io_wb_bits_addr(cross_bar_1_io_wb_bits_addr),
    .io_wb_bits_rdata(cross_bar_1_io_wb_bits_rdata),
    .io_wb_bits_wdata(cross_bar_1_io_wb_bits_wdata),
    .io_wb_bits_wstrb(cross_bar_1_io_wb_bits_wstrb),
    .io_wb_bits_is_w(cross_bar_1_io_wb_bits_is_w),
    .io_wb_ready(cross_bar_1_io_wb_ready),
    .io_ICache_cpu_raddr_ready(cross_bar_1_io_ICache_cpu_raddr_ready),
    .io_ICache_cpu_raddr_valid(cross_bar_1_io_ICache_cpu_raddr_valid),
    .io_ICache_cpu_raddr_bits_addr(cross_bar_1_io_ICache_cpu_raddr_bits_addr),
    .io_ICache_cpu_rdata_ready(cross_bar_1_io_ICache_cpu_rdata_ready),
    .io_ICache_cpu_rdata_valid(cross_bar_1_io_ICache_cpu_rdata_valid),
    .io_ICache_cpu_rdata_bits_data(cross_bar_1_io_ICache_cpu_rdata_bits_data),
    .io_ICache_cpu_rdata_bits_pc(cross_bar_1_io_ICache_cpu_rdata_bits_pc),
    .io_DCache_valid(cross_bar_1_io_DCache_valid),
    .io_DCache_bits_addr(cross_bar_1_io_DCache_bits_addr),
    .io_DCache_bits_rdata(cross_bar_1_io_DCache_bits_rdata),
    .io_DCache_bits_wdata(cross_bar_1_io_DCache_bits_wdata),
    .io_DCache_bits_wstrb(cross_bar_1_io_DCache_bits_wstrb),
    .io_DCache_bits_is_w(cross_bar_1_io_DCache_bits_is_w),
    .io_DCache_ready(cross_bar_1_io_DCache_ready),
    .io_bus1_valid(cross_bar_1_io_bus1_valid),
    .io_bus1_bits_addr(cross_bar_1_io_bus1_bits_addr),
    .io_bus1_bits_rdata(cross_bar_1_io_bus1_bits_rdata),
    .io_bus1_ready(cross_bar_1_io_bus1_ready),
    .io_bus2_valid(cross_bar_1_io_bus2_valid),
    .io_bus2_bits_addr(cross_bar_1_io_bus2_bits_addr),
    .io_bus2_bits_rdata(cross_bar_1_io_bus2_bits_rdata),
    .io_bus2_bits_wdata(cross_bar_1_io_bus2_bits_wdata),
    .io_bus2_bits_wstrb(cross_bar_1_io_bus2_bits_wstrb),
    .io_bus2_bits_is_w(cross_bar_1_io_bus2_bits_is_w),
    .io_bus2_ready(cross_bar_1_io_bus2_ready),
    .io_clint_bus_valid(cross_bar_1_io_clint_bus_valid),
    .io_clint_bus_bits_addr(cross_bar_1_io_clint_bus_bits_addr),
    .io_clint_bus_bits_rdata(cross_bar_1_io_clint_bus_bits_rdata),
    .io_clint_bus_bits_wdata(cross_bar_1_io_clint_bus_bits_wdata),
    .io_clint_bus_bits_is_w(cross_bar_1_io_clint_bus_bits_is_w),
    .io_clint_bus_ready(cross_bar_1_io_clint_bus_ready)
  );
  Fetch fetch ( // @[core.scala 31:49]
    .clock(fetch_clock),
    .reset(fetch_reset),
    .io_br_info_valid(fetch_io_br_info_valid),
    .io_br_info_mispredict(fetch_io_br_info_mispredict),
    .io_br_info_br_pc(fetch_io_br_info_br_pc),
    .io_br_info_taken(fetch_io_br_info_taken),
    .io_br_info_target_next_pc(fetch_io_br_info_target_next_pc),
    .io_get_pre_info_valid(fetch_io_get_pre_info_valid),
    .io_get_pre_info_pre_next_pc(fetch_io_get_pre_info_pre_next_pc),
    .io_next_pc(fetch_io_next_pc),
    .io_flush(fetch_io_flush),
    .io_cpu_addr_ready(fetch_io_cpu_addr_ready),
    .io_cpu_addr_valid(fetch_io_cpu_addr_valid),
    .io_cpu_addr_bits_addr(fetch_io_cpu_addr_bits_addr),
    .io_cpu_data_ready(fetch_io_cpu_data_ready),
    .io_cpu_data_valid(fetch_io_cpu_data_valid),
    .io_cpu_data_bits_data(fetch_io_cpu_data_bits_data),
    .io_cpu_data_bits_pc(fetch_io_cpu_data_bits_pc),
    .io_put_pc_ready(fetch_io_put_pc_ready),
    .io_put_pc_valid(fetch_io_put_pc_valid),
    .io_put_pc_bits_inst(fetch_io_put_pc_bits_inst),
    .io_put_pc_bits_pc(fetch_io_put_pc_bits_pc),
    .io_put_pc_bits_is_pre(fetch_io_put_pc_bits_is_pre),
    .io_out_flush(fetch_io_out_flush)
  );
  Exu execute ( // @[core.scala 32:41]
    .clock(execute_clock),
    .reset(execute_reset),
    .io_op_datas_ready(execute_io_op_datas_ready),
    .io_op_datas_valid(execute_io_op_datas_valid),
    .io_op_datas_bits_opType(execute_io_op_datas_bits_opType),
    .io_op_datas_bits_exuType(execute_io_op_datas_bits_exuType),
    .io_op_datas_bits_rs1_addr(execute_io_op_datas_bits_rs1_addr),
    .io_op_datas_bits_rs1_data(execute_io_op_datas_bits_rs1_data),
    .io_op_datas_bits_rs2_addr(execute_io_op_datas_bits_rs2_addr),
    .io_op_datas_bits_rs2_data(execute_io_op_datas_bits_rs2_data),
    .io_op_datas_bits_imm(execute_io_op_datas_bits_imm),
    .io_op_datas_bits_pc(execute_io_op_datas_bits_pc),
    .io_op_datas_bits_inst(execute_io_op_datas_bits_inst),
    .io_op_datas_bits_dest_addr(execute_io_op_datas_bits_dest_addr),
    .io_op_datas_bits_dest_is_reg(execute_io_op_datas_bits_dest_is_reg),
    .io_op_datas_bits_is_pre(execute_io_op_datas_bits_is_pre),
    .io_op_datas_bits_csr_addr(execute_io_op_datas_bits_csr_addr),
    .io_op_datas_bits_csr_data(execute_io_op_datas_bits_csr_data),
    .io_irq_time_irq(execute_io_irq_time_irq),
    .io_irq_soft_irq(execute_io_irq_soft_irq),
    .io_mstatus(execute_io_mstatus),
    .io_mie(execute_io_mie),
    .io_mepc(execute_io_mepc),
    .io_mtvec(execute_io_mtvec),
    .io_wb_valid(execute_io_wb_valid),
    .io_wb_dest_addr(execute_io_wb_dest_addr),
    .io_wb_dest_data(execute_io_wb_dest_data),
    .io_csr_valid(execute_io_csr_valid),
    .io_csr_csr_addr(execute_io_csr_csr_addr),
    .io_csr_csr_data(execute_io_csr_csr_data),
    .io_csr_except_is_except(execute_io_csr_except_is_except),
    .io_csr_except_is_time_irq(execute_io_csr_except_is_time_irq),
    .io_csr_except_is_soft_irq(execute_io_csr_except_is_soft_irq),
    .io_csr_except_exception(execute_io_csr_except_exception),
    .io_csr_except_next_pc(execute_io_csr_except_next_pc),
    .io_csr_except_pc(execute_io_csr_except_pc),
    .io_commit(execute_io_commit),
    .io_difftest_inst(execute_io_difftest_inst),
    .io_difftest_peripheral(execute_io_difftest_peripheral),
    .io_next_pc(execute_io_next_pc),
    .io_flush(execute_io_flush),
    .io_fence_i(execute_io_fence_i),
    .io_br_info_valid(execute_io_br_info_valid),
    .io_br_info_mispredict(execute_io_br_info_mispredict),
    .io_br_info_br_pc(execute_io_br_info_br_pc),
    .io_br_info_taken(execute_io_br_info_taken),
    .io_br_info_target_next_pc(execute_io_br_info_target_next_pc),
    .io_get_pre_info_valid(execute_io_get_pre_info_valid),
    .io_get_pre_info_pre_next_pc(execute_io_get_pre_info_pre_next_pc),
    .io_bus_valid(execute_io_bus_valid),
    .io_bus_bits_addr(execute_io_bus_bits_addr),
    .io_bus_bits_rdata(execute_io_bus_bits_rdata),
    .io_bus_bits_wdata(execute_io_bus_bits_wdata),
    .io_bus_bits_wstrb(execute_io_bus_bits_wstrb),
    .io_bus_bits_is_w(execute_io_bus_bits_is_w),
    .io_bus_ready(execute_io_bus_ready)
  );
  Decode decode ( // @[core.scala 33:49]
    .clock(decode_clock),
    .reset(decode_reset),
    .io_get_inst_ready(decode_io_get_inst_ready),
    .io_get_inst_valid(decode_io_get_inst_valid),
    .io_get_inst_bits_inst(decode_io_get_inst_bits_inst),
    .io_get_inst_bits_pc(decode_io_get_inst_bits_pc),
    .io_get_inst_bits_is_pre(decode_io_get_inst_bits_is_pre),
    .io_normal_rd_rs1_addr(decode_io_normal_rd_rs1_addr),
    .io_normal_rd_rs1_data(decode_io_normal_rd_rs1_data),
    .io_normal_rd_rs2_addr(decode_io_normal_rd_rs2_addr),
    .io_normal_rd_rs2_data(decode_io_normal_rd_rs2_data),
    .io_csr_rd_csr_addr(decode_io_csr_rd_csr_addr),
    .io_csr_rd_csr_data(decode_io_csr_rd_csr_data),
    .io_op_datas_ready(decode_io_op_datas_ready),
    .io_op_datas_valid(decode_io_op_datas_valid),
    .io_op_datas_bits_opType(decode_io_op_datas_bits_opType),
    .io_op_datas_bits_exuType(decode_io_op_datas_bits_exuType),
    .io_op_datas_bits_rs1_addr(decode_io_op_datas_bits_rs1_addr),
    .io_op_datas_bits_rs1_data(decode_io_op_datas_bits_rs1_data),
    .io_op_datas_bits_rs2_addr(decode_io_op_datas_bits_rs2_addr),
    .io_op_datas_bits_rs2_data(decode_io_op_datas_bits_rs2_data),
    .io_op_datas_bits_imm(decode_io_op_datas_bits_imm),
    .io_op_datas_bits_pc(decode_io_op_datas_bits_pc),
    .io_op_datas_bits_inst(decode_io_op_datas_bits_inst),
    .io_op_datas_bits_dest_addr(decode_io_op_datas_bits_dest_addr),
    .io_op_datas_bits_dest_is_reg(decode_io_op_datas_bits_dest_is_reg),
    .io_op_datas_bits_is_pre(decode_io_op_datas_bits_is_pre),
    .io_op_datas_bits_csr_addr(decode_io_op_datas_bits_csr_addr),
    .io_op_datas_bits_csr_data(decode_io_op_datas_bits_csr_data),
    .io_flush(decode_io_flush)
  );
  Commit commit ( // @[core.scala 34:49]
    .clock(commit_clock),
    .reset(commit_reset),
    .io_normal_rd_rs1_addr(commit_io_normal_rd_rs1_addr),
    .io_normal_rd_rs1_data(commit_io_normal_rd_rs1_data),
    .io_normal_rd_rs2_addr(commit_io_normal_rd_rs2_addr),
    .io_normal_rd_rs2_data(commit_io_normal_rd_rs2_data),
    .io_normal_wb_valid(commit_io_normal_wb_valid),
    .io_normal_wb_dest_addr(commit_io_normal_wb_dest_addr),
    .io_normal_wb_dest_data(commit_io_normal_wb_dest_data),
    .io_csr_rd_csr_addr(commit_io_csr_rd_csr_addr),
    .io_csr_rd_csr_data(commit_io_csr_rd_csr_data),
    .io_csr_wb_valid(commit_io_csr_wb_valid),
    .io_csr_wb_csr_addr(commit_io_csr_wb_csr_addr),
    .io_csr_wb_csr_data(commit_io_csr_wb_csr_data),
    .io_csr_except_is_except(commit_io_csr_except_is_except),
    .io_csr_except_is_time_irq(commit_io_csr_except_is_time_irq),
    .io_csr_except_is_soft_irq(commit_io_csr_except_is_soft_irq),
    .io_csr_except_exception(commit_io_csr_except_exception),
    .io_csr_except_next_pc(commit_io_csr_except_next_pc),
    .io_csr_except_pc(commit_io_csr_except_pc),
    .io_csr_pass_csr_mtvec(commit_io_csr_pass_csr_mtvec),
    .io_csr_pass_csr_mepc(commit_io_csr_pass_csr_mepc),
    .io_csr_pass_csr_mstatus(commit_io_csr_pass_csr_mstatus),
    .io_csr_pass_csr_mie(commit_io_csr_pass_csr_mie),
    .io_commit(commit_io_commit),
    .io_difftest_inst(commit_io_difftest_inst),
    .io_difftest_peripheral(commit_io_difftest_peripheral)
  );
  Clint clint_de ( // @[core.scala 36:41]
    .clock(clint_de_clock),
    .reset(clint_de_reset),
    .io_valid(clint_de_io_valid),
    .io_bits_addr(clint_de_io_bits_addr),
    .io_bits_wdata(clint_de_io_bits_wdata),
    .io_bits_rdata(clint_de_io_bits_rdata),
    .io_bits_is_w(clint_de_io_bits_is_w),
    .io_ready(clint_de_io_ready),
    .io_soft_irq(clint_de_io_soft_irq),
    .io_time_irq(clint_de_io_time_irq)
  );
  assign io_axi_bus_aw_valid = cross_bar_io_AXI_Bus_aw_valid; // @[core.scala 97:25]
  assign io_axi_bus_aw_bits_awaddr = cross_bar_io_AXI_Bus_aw_bits_awaddr; // @[core.scala 97:25]
  assign io_axi_bus_w_valid = cross_bar_io_AXI_Bus_w_valid; // @[core.scala 97:25]
  assign io_axi_bus_w_bits_wdata = cross_bar_io_AXI_Bus_w_bits_wdata; // @[core.scala 97:25]
  assign io_axi_bus_w_bits_wstrb = cross_bar_io_AXI_Bus_w_bits_wstrb; // @[core.scala 97:25]
  assign io_axi_bus_w_bits_wlast = cross_bar_io_AXI_Bus_w_bits_wlast; // @[core.scala 97:25]
  assign io_axi_bus_ar_valid = cross_bar_io_AXI_Bus_ar_valid; // @[core.scala 97:25]
  assign io_axi_bus_ar_bits_araddr = cross_bar_io_AXI_Bus_ar_bits_araddr; // @[core.scala 97:25]
  assign io_axi_bus_ar_bits_arlen = cross_bar_io_AXI_Bus_ar_bits_arlen; // @[core.scala 97:25]
  assign io_sram0_addr = i_cache_io_sram0_data_addr; // @[core.scala 98:25]
  assign io_sram0_wen = i_cache_io_sram0_data_wen; // @[core.scala 98:25]
  assign io_sram0_wdata = i_cache_io_sram0_data_wdata; // @[core.scala 98:25]
  assign io_sram1_addr = i_cache_io_sram0_tag_addr; // @[core.scala 99:25]
  assign io_sram1_wen = i_cache_io_sram0_tag_wen; // @[core.scala 99:25]
  assign io_sram1_wdata = i_cache_io_sram0_tag_wdata; // @[core.scala 99:25]
  assign io_sram2_addr = i_cache_io_sram2_data_addr; // @[core.scala 100:25]
  assign io_sram2_wen = i_cache_io_sram2_data_wen; // @[core.scala 100:25]
  assign io_sram2_wdata = i_cache_io_sram2_data_wdata; // @[core.scala 100:25]
  assign io_sram3_addr = i_cache_io_sram2_tag_addr; // @[core.scala 101:25]
  assign io_sram3_wen = i_cache_io_sram2_tag_wen; // @[core.scala 101:25]
  assign io_sram3_wdata = i_cache_io_sram2_tag_wdata; // @[core.scala 101:25]
  assign io_sram4_addr = d_cache_io_sram0_data_addr; // @[core.scala 103:25]
  assign io_sram4_wen = d_cache_io_sram0_data_wen; // @[core.scala 103:25]
  assign io_sram4_wmask = d_cache_io_sram0_data_wmask; // @[core.scala 103:25]
  assign io_sram4_wdata = d_cache_io_sram0_data_wdata; // @[core.scala 103:25]
  assign io_sram5_addr = d_cache_io_sram0_tag_addr; // @[core.scala 104:25]
  assign io_sram5_wen = d_cache_io_sram0_tag_wen; // @[core.scala 104:25]
  assign io_sram5_wdata = d_cache_io_sram0_tag_wdata; // @[core.scala 104:25]
  assign io_sram6_addr = d_cache_io_sram2_data_addr; // @[core.scala 105:25]
  assign io_sram6_wen = d_cache_io_sram2_data_wen; // @[core.scala 105:25]
  assign io_sram6_wmask = d_cache_io_sram2_data_wmask; // @[core.scala 105:25]
  assign io_sram6_wdata = d_cache_io_sram2_data_wdata; // @[core.scala 105:25]
  assign io_sram7_addr = d_cache_io_sram2_tag_addr; // @[core.scala 106:25]
  assign io_sram7_wen = d_cache_io_sram2_tag_wen; // @[core.scala 106:25]
  assign io_sram7_wdata = d_cache_io_sram2_tag_wdata; // @[core.scala 106:25]

  assign i_cache_clock = clock;
  assign i_cache_reset = reset;
  assign i_cache_io_flush = fetch_io_out_flush; // @[core.scala 82:35]
  assign i_cache_io_cpu_raddr_valid = cross_bar_1_io_ICache_cpu_raddr_valid; // @[core.scala 85:30]
  assign i_cache_io_cpu_raddr_bits_addr = cross_bar_1_io_ICache_cpu_raddr_bits_addr; // @[core.scala 85:30]
  assign i_cache_io_cpu_rdata_ready = cross_bar_1_io_ICache_cpu_rdata_ready; // @[core.scala 86:30]
  assign i_cache_io_is_fence_i = execute_io_fence_i; // @[core.scala 81:31]
  assign i_cache_io_sram0_data_rdata = io_sram0_rdata; // @[core.scala 98:25]
  assign i_cache_io_sram0_tag_rdata = io_sram1_rdata; // @[core.scala 99:25]
  assign i_cache_io_sram2_data_rdata = io_sram2_rdata; // @[core.scala 100:25]
  assign i_cache_io_sram2_tag_rdata = io_sram3_rdata; // @[core.scala 101:25]
  assign i_cache_io_cache_bus_r_bits_rdata = cross_bar_io_ICache_bus_r_bits_rdata; // @[core.scala 93:33]
  assign i_cache_io_cache_bus_r_bits_rlast = cross_bar_io_ICache_bus_r_bits_rlast; // @[core.scala 93:33]
  assign i_cache_io_cache_bus_r_ready = cross_bar_io_ICache_bus_r_ready; // @[core.scala 93:33]
  assign d_cache_clock = clock;
  assign d_cache_reset = reset;
  assign d_cache_io_cpu_valid = cross_bar_1_io_DCache_valid; // @[core.scala 87:24]
  assign d_cache_io_cpu_bits_addr = cross_bar_1_io_DCache_bits_addr; // @[core.scala 87:24]
  assign d_cache_io_cpu_bits_wdata = cross_bar_1_io_DCache_bits_wdata; // @[core.scala 87:24]
  assign d_cache_io_cpu_bits_wstrb = cross_bar_1_io_DCache_bits_wstrb; // @[core.scala 87:24]
  assign d_cache_io_cpu_bits_is_w = cross_bar_1_io_DCache_bits_is_w; // @[core.scala 87:24]
  assign d_cache_io_sram0_data_rdata = io_sram4_rdata; // @[core.scala 103:25]
  assign d_cache_io_sram0_tag_rdata = io_sram5_rdata; // @[core.scala 104:25]
  assign d_cache_io_sram2_data_rdata = io_sram6_rdata; // @[core.scala 105:25]
  assign d_cache_io_sram2_tag_rdata = io_sram7_rdata; // @[core.scala 106:25]
  assign d_cache_io_cache_bus_w_ready = cross_bar_io_DCache_bus_w_ready; // @[core.scala 94:33]
  assign d_cache_io_cache_bus_b_valid = cross_bar_io_DCache_bus_b_valid; // @[core.scala 94:33]
  assign d_cache_io_cache_bus_r_bits_rdata = cross_bar_io_DCache_bus_r_bits_rdata; // @[core.scala 94:33]
  assign d_cache_io_cache_bus_r_bits_rlast = cross_bar_io_DCache_bus_r_bits_rlast; // @[core.scala 94:33]
  assign d_cache_io_cache_bus_r_ready = cross_bar_io_DCache_bus_r_ready; // @[core.scala 94:33]
  assign cross_bar_clock = clock;
  assign cross_bar_reset = reset;
  assign cross_bar_io_ICache_bus_r_valid = i_cache_io_cache_bus_r_valid; // @[core.scala 93:33]
  assign cross_bar_io_ICache_bus_r_bits_raddr = i_cache_io_cache_bus_r_bits_raddr; // @[core.scala 93:33]
  assign cross_bar_io_DCache_bus_w_valid = d_cache_io_cache_bus_w_valid; // @[core.scala 94:33]
  assign cross_bar_io_DCache_bus_w_bits_waddr = d_cache_io_cache_bus_w_bits_waddr; // @[core.scala 94:33]
  assign cross_bar_io_DCache_bus_w_bits_wdata = d_cache_io_cache_bus_w_bits_wdata; // @[core.scala 94:33]
  assign cross_bar_io_DCache_bus_w_bits_wlast = d_cache_io_cache_bus_w_bits_wlast; // @[core.scala 94:33]
  assign cross_bar_io_DCache_bus_r_valid = d_cache_io_cache_bus_r_valid; // @[core.scala 94:33]
  assign cross_bar_io_DCache_bus_r_bits_raddr = d_cache_io_cache_bus_r_bits_raddr; // @[core.scala 94:33]
  assign cross_bar_io_bus1_valid = cross_bar_1_io_bus1_valid; // @[core.scala 95:27]
  assign cross_bar_io_bus1_bits_addr = cross_bar_1_io_bus1_bits_addr; // @[core.scala 95:27]
  assign cross_bar_io_bus2_valid = cross_bar_1_io_bus2_valid; // @[core.scala 96:27]
  assign cross_bar_io_bus2_bits_addr = cross_bar_1_io_bus2_bits_addr; // @[core.scala 96:27]
  assign cross_bar_io_bus2_bits_wdata = cross_bar_1_io_bus2_bits_wdata; // @[core.scala 96:27]
  assign cross_bar_io_bus2_bits_wstrb = cross_bar_1_io_bus2_bits_wstrb; // @[core.scala 96:27]
  assign cross_bar_io_bus2_bits_is_w = cross_bar_1_io_bus2_bits_is_w; // @[core.scala 96:27]
  assign cross_bar_io_AXI_Bus_aw_ready = io_axi_bus_aw_ready; // @[core.scala 97:25]
  assign cross_bar_io_AXI_Bus_w_ready = io_axi_bus_w_ready; // @[core.scala 97:25]
  assign cross_bar_io_AXI_Bus_b_valid = io_axi_bus_b_valid; // @[core.scala 97:25]
  assign cross_bar_io_AXI_Bus_ar_ready = io_axi_bus_ar_ready; // @[core.scala 97:25]
  assign cross_bar_io_AXI_Bus_r_valid = io_axi_bus_r_valid; // @[core.scala 97:25]
  assign cross_bar_io_AXI_Bus_r_bits_rdata = io_axi_bus_r_bits_rdata; // @[core.scala 97:25]
  assign cross_bar_io_AXI_Bus_r_bits_rlast = io_axi_bus_r_bits_rlast; // @[core.scala 97:25]
  assign cross_bar_1_io_fetch_cpu_addr_valid = fetch_io_cpu_addr_valid; // @[core.scala 66:39]
  assign cross_bar_1_io_fetch_cpu_addr_bits_addr = fetch_io_cpu_addr_bits_addr; // @[core.scala 66:39]
  assign cross_bar_1_io_fetch_cpu_data_ready = fetch_io_cpu_data_ready; // @[core.scala 67:39]
  assign cross_bar_1_io_wb_valid = execute_io_bus_valid; // @[core.scala 72:49]
  assign cross_bar_1_io_wb_bits_addr = execute_io_bus_bits_addr; // @[core.scala 73:41]
  assign cross_bar_1_io_wb_bits_wdata = execute_io_bus_bits_wdata; // @[core.scala 74:41]
  assign cross_bar_1_io_wb_bits_wstrb = execute_io_bus_bits_wstrb; // @[core.scala 76:41]
  assign cross_bar_1_io_wb_bits_is_w = execute_io_bus_bits_is_w; // @[core.scala 77:49]
  assign cross_bar_1_io_ICache_cpu_raddr_ready = i_cache_io_cpu_raddr_ready; // @[core.scala 85:30]
  assign cross_bar_1_io_ICache_cpu_rdata_valid = i_cache_io_cpu_rdata_valid; // @[core.scala 86:30]
  assign cross_bar_1_io_ICache_cpu_rdata_bits_data = i_cache_io_cpu_rdata_bits_data; // @[core.scala 86:30]
  assign cross_bar_1_io_ICache_cpu_rdata_bits_pc = i_cache_io_cpu_rdata_bits_pc; // @[core.scala 86:30]
  assign cross_bar_1_io_DCache_bits_rdata = d_cache_io_cpu_bits_rdata; // @[core.scala 87:24]
  assign cross_bar_1_io_DCache_ready = d_cache_io_cpu_ready; // @[core.scala 87:24]
  assign cross_bar_1_io_bus1_bits_rdata = cross_bar_io_bus1_bits_rdata; // @[core.scala 95:27]
  assign cross_bar_1_io_bus1_ready = cross_bar_io_bus1_ready; // @[core.scala 95:27]
  assign cross_bar_1_io_bus2_bits_rdata = cross_bar_io_bus2_bits_rdata; // @[core.scala 96:27]
  assign cross_bar_1_io_bus2_ready = cross_bar_io_bus2_ready; // @[core.scala 96:27]
  assign cross_bar_1_io_clint_bus_bits_rdata = clint_de_io_bits_rdata; // @[core.scala 88:26]
  assign cross_bar_1_io_clint_bus_ready = clint_de_io_ready; // @[core.scala 90:40]
  assign fetch_clock = clock;
  assign fetch_reset = reset;
  assign fetch_io_br_info_valid = execute_io_br_info_valid; // @[core.scala 41:26]
  assign fetch_io_br_info_mispredict = execute_io_br_info_mispredict; // @[core.scala 41:26]
  assign fetch_io_br_info_br_pc = execute_io_br_info_br_pc; // @[core.scala 41:26]
  assign fetch_io_br_info_taken = execute_io_br_info_taken; // @[core.scala 41:26]
  assign fetch_io_br_info_target_next_pc = execute_io_br_info_target_next_pc; // @[core.scala 41:26]
  assign fetch_io_get_pre_info_valid = execute_io_get_pre_info_valid; // @[core.scala 40:31]
  assign fetch_io_next_pc = execute_io_next_pc; // @[core.scala 38:49]
  assign fetch_io_flush = execute_io_flush; // @[core.scala 39:49]
  assign fetch_io_cpu_addr_ready = cross_bar_1_io_fetch_cpu_addr_ready; // @[core.scala 66:39]
  assign fetch_io_cpu_data_valid = cross_bar_1_io_fetch_cpu_data_valid; // @[core.scala 67:39]
  assign fetch_io_cpu_data_bits_data = cross_bar_1_io_fetch_cpu_data_bits_data; // @[core.scala 67:39]
  assign fetch_io_cpu_data_bits_pc = cross_bar_1_io_fetch_cpu_data_bits_pc; // @[core.scala 67:39]
  assign fetch_io_put_pc_ready = decode_io_get_inst_ready; // @[core.scala 42:25]
  assign execute_clock = clock;
  assign execute_reset = reset;
  assign execute_io_op_datas_valid = decode_io_op_datas_valid; // @[core.scala 48:29]
  assign execute_io_op_datas_bits_opType = decode_io_op_datas_bits_opType; // @[core.scala 48:29]
  assign execute_io_op_datas_bits_exuType = decode_io_op_datas_bits_exuType; // @[core.scala 48:29]
  assign execute_io_op_datas_bits_rs1_addr = decode_io_op_datas_bits_rs1_addr; // @[core.scala 48:29]
  assign execute_io_op_datas_bits_rs1_data = decode_io_op_datas_bits_rs1_data; // @[core.scala 48:29]
  assign execute_io_op_datas_bits_rs2_addr = decode_io_op_datas_bits_rs2_addr; // @[core.scala 48:29]
  assign execute_io_op_datas_bits_rs2_data = decode_io_op_datas_bits_rs2_data; // @[core.scala 48:29]
  assign execute_io_op_datas_bits_imm = decode_io_op_datas_bits_imm; // @[core.scala 48:29]
  assign execute_io_op_datas_bits_pc = decode_io_op_datas_bits_pc; // @[core.scala 48:29]
  assign execute_io_op_datas_bits_inst = decode_io_op_datas_bits_inst; // @[core.scala 48:29]
  assign execute_io_op_datas_bits_dest_addr = decode_io_op_datas_bits_dest_addr; // @[core.scala 48:29]
  assign execute_io_op_datas_bits_dest_is_reg = decode_io_op_datas_bits_dest_is_reg; // @[core.scala 48:29]
  assign execute_io_op_datas_bits_is_pre = decode_io_op_datas_bits_is_pre; // @[core.scala 48:29]
  assign execute_io_op_datas_bits_csr_addr = decode_io_op_datas_bits_csr_addr; // @[core.scala 48:29]
  assign execute_io_op_datas_bits_csr_data = decode_io_op_datas_bits_csr_data; // @[core.scala 48:29]
  assign execute_io_irq_time_irq = clint_de_io_time_irq; // @[core.scala 50:41]
  assign execute_io_irq_soft_irq = clint_de_io_soft_irq; // @[core.scala 51:41]
  assign execute_io_mstatus = commit_io_csr_pass_csr_mstatus; // @[core.scala 52:49]
  assign execute_io_mie = commit_io_csr_pass_csr_mie; // @[core.scala 53:49]
  assign execute_io_mepc = commit_io_csr_pass_csr_mepc; // @[core.scala 54:49]
  assign execute_io_mtvec = commit_io_csr_pass_csr_mtvec; // @[core.scala 55:49]
  assign execute_io_get_pre_info_pre_next_pc = fetch_io_get_pre_info_pre_next_pc; // @[core.scala 40:31]
  assign execute_io_bus_bits_rdata = cross_bar_1_io_wb_bits_rdata; // @[core.scala 78:41]
  assign execute_io_bus_ready = cross_bar_1_io_wb_ready; // @[core.scala 79:41]
  assign decode_clock = clock;
  assign decode_reset = reset;
  assign decode_io_get_inst_valid = fetch_io_put_pc_valid; // @[core.scala 42:25]
  assign decode_io_get_inst_bits_inst = fetch_io_put_pc_bits_inst; // @[core.scala 42:25]
  assign decode_io_get_inst_bits_pc = fetch_io_put_pc_bits_pc; // @[core.scala 42:25]
  assign decode_io_get_inst_bits_is_pre = fetch_io_put_pc_bits_is_pre; // @[core.scala 42:25]
  assign decode_io_normal_rd_rs1_data = commit_io_normal_rd_rs1_data; // @[core.scala 45:29]
  assign decode_io_normal_rd_rs2_data = commit_io_normal_rd_rs2_data; // @[core.scala 45:29]
  assign decode_io_csr_rd_csr_data = commit_io_csr_rd_csr_data; // @[core.scala 46:33]
  assign decode_io_op_datas_ready = execute_io_op_datas_ready; // @[core.scala 48:29]
  assign decode_io_flush = execute_io_flush; // @[core.scala 44:49]
  assign commit_clock = clock;
  assign commit_reset = reset;
  assign commit_io_normal_rd_rs1_addr = decode_io_normal_rd_rs1_addr; // @[core.scala 45:29]
  assign commit_io_normal_rd_rs2_addr = decode_io_normal_rd_rs2_addr; // @[core.scala 45:29]
  assign commit_io_normal_wb_valid = execute_io_wb_valid; // @[core.scala 57:57]
  assign commit_io_normal_wb_dest_addr = execute_io_wb_dest_addr; // @[core.scala 57:57]
  assign commit_io_normal_wb_dest_data = execute_io_wb_dest_data; // @[core.scala 57:57]
  assign commit_io_csr_rd_csr_addr = decode_io_csr_rd_csr_addr; // @[core.scala 46:33]
  assign commit_io_csr_wb_valid = execute_io_csr_valid; // @[core.scala 58:57]
  assign commit_io_csr_wb_csr_addr = execute_io_csr_csr_addr; // @[core.scala 58:57]
  assign commit_io_csr_wb_csr_data = execute_io_csr_csr_data; // @[core.scala 58:57]
  assign commit_io_csr_except_is_except = execute_io_csr_except_is_except; // @[core.scala 59:49]
  assign commit_io_csr_except_is_time_irq = execute_io_csr_except_is_time_irq; // @[core.scala 59:49]
  assign commit_io_csr_except_is_soft_irq = execute_io_csr_except_is_soft_irq; // @[core.scala 59:49]
  assign commit_io_csr_except_exception = execute_io_csr_except_exception; // @[core.scala 59:49]
  assign commit_io_csr_except_next_pc = execute_io_csr_except_next_pc; // @[core.scala 59:49]
  assign commit_io_csr_except_pc = execute_io_csr_except_pc; // @[core.scala 59:49]
  assign commit_io_commit = execute_io_commit; // @[core.scala 60:57]
  assign commit_io_difftest_inst = execute_io_difftest_inst; // @[core.scala 62:49]
  assign commit_io_difftest_peripheral = execute_io_difftest_peripheral; // @[core.scala 63:41]
  assign clint_de_clock = clock;
  assign clint_de_reset = reset;
  assign clint_de_io_valid = cross_bar_1_io_clint_bus_valid; // @[core.scala 89:27]
  assign clint_de_io_bits_addr = cross_bar_1_io_clint_bus_bits_addr; // @[core.scala 88:26]
  assign clint_de_io_bits_wdata = cross_bar_1_io_clint_bus_bits_wdata; // @[core.scala 88:26]
  assign clint_de_io_bits_is_w = cross_bar_1_io_clint_bus_bits_is_w; // @[core.scala 88:26]
endmodule