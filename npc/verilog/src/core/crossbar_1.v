module Crossbar_1(
  output        io_fetch_cpu_addr_ready,
  input         io_fetch_cpu_addr_valid,
  input  [63:0] io_fetch_cpu_addr_bits_addr,
  input         io_fetch_cpu_data_ready,
  output        io_fetch_cpu_data_valid,
  output [63:0] io_fetch_cpu_data_bits_data,
  output [63:0] io_fetch_cpu_data_bits_pc,
  input         io_wb_valid,
  input  [63:0] io_wb_bits_addr,
  output [63:0] io_wb_bits_rdata,
  input  [63:0] io_wb_bits_wdata,
  input  [7:0]  io_wb_bits_wstrb,
  input         io_wb_bits_is_w,
  output        io_wb_ready,
  input         io_ICache_cpu_raddr_ready,
  output        io_ICache_cpu_raddr_valid,
  output [63:0] io_ICache_cpu_raddr_bits_addr,
  output        io_ICache_cpu_rdata_ready,
  input         io_ICache_cpu_rdata_valid,
  input  [63:0] io_ICache_cpu_rdata_bits_data,
  input  [63:0] io_ICache_cpu_rdata_bits_pc,
  output        io_DCache_valid,
  output [63:0] io_DCache_bits_addr,
  input  [63:0] io_DCache_bits_rdata,
  output [63:0] io_DCache_bits_wdata,
  output [7:0]  io_DCache_bits_wstrb,
  output        io_DCache_bits_is_w,
  input         io_DCache_ready,
  output        io_bus1_valid,
  output [63:0] io_bus1_bits_addr,
  input  [63:0] io_bus1_bits_rdata,
  input         io_bus1_ready,
  output        io_bus2_valid,
  output [63:0] io_bus2_bits_addr,
  input  [63:0] io_bus2_bits_rdata,
  output [63:0] io_bus2_bits_wdata,
  output [7:0]  io_bus2_bits_wstrb,
  output        io_bus2_bits_is_w,
  input         io_bus2_ready,
  output        io_clint_bus_valid,
  output [63:0] io_clint_bus_bits_addr,
  input  [63:0] io_clint_bus_bits_rdata,
  output [63:0] io_clint_bus_bits_wdata,
  output        io_clint_bus_bits_is_w,
  input         io_clint_bus_ready
);
  wire  fetch_low_address = io_fetch_cpu_addr_bits_addr[63:31] == 33'h0; // @[crossbar_1.scala 75:71]
  wire  _io_ICache_cpu_raddr_valid_T = ~fetch_low_address; // @[crossbar_1.scala 77:48]
  wire  low_address = io_wb_bits_addr[63:31] == 33'h0; // @[crossbar_1.scala 98:66]
  wire  not_clint = io_wb_bits_addr[30:0] < 31'h2000000 | io_wb_bits_addr[30:0] > 31'h200ffff; // @[crossbar_1.scala 99:83]
  wire  _io_DCache_valid_T = ~low_address; // @[crossbar_1.scala 105:45]
  wire  _GEN_4 = not_clint ? io_bus2_ready : io_clint_bus_ready; // @[crossbar_1.scala 125:32 126:49 129:49]
  wire [63:0] _GEN_5 = not_clint ? io_bus2_bits_rdata : io_clint_bus_bits_rdata; // @[crossbar_1.scala 125:32 127:49 130:49]
  assign io_fetch_cpu_addr_ready = _io_ICache_cpu_raddr_valid_T ? io_ICache_cpu_raddr_ready : io_bus1_ready; // @[crossbar_1.scala 80:33 81:49 91:49]
  assign io_fetch_cpu_data_valid = _io_ICache_cpu_raddr_valid_T ? io_ICache_cpu_rdata_valid : io_bus1_ready; // @[crossbar_1.scala 80:33 85:49 89:49]
  assign io_fetch_cpu_data_bits_data = _io_ICache_cpu_raddr_valid_T ? io_ICache_cpu_rdata_bits_data : io_bus1_bits_rdata
    ; // @[crossbar_1.scala 80:33 84:45 88:45]
  assign io_fetch_cpu_data_bits_pc = _io_ICache_cpu_raddr_valid_T ? io_ICache_cpu_rdata_bits_pc : io_bus1_bits_addr; // @[crossbar_1.scala 80:33 83:49 87:49]
  assign io_wb_bits_rdata = _io_DCache_valid_T ? io_DCache_bits_rdata : _GEN_5; // @[crossbar_1.scala 121:27 123:41]
  assign io_wb_ready = _io_DCache_valid_T ? io_DCache_ready : _GEN_4; // @[crossbar_1.scala 121:27 122:41]
  assign io_ICache_cpu_raddr_valid = ~fetch_low_address & io_fetch_cpu_addr_valid; // @[crossbar_1.scala 77:67]
  assign io_ICache_cpu_raddr_bits_addr = io_fetch_cpu_addr_bits_addr; // @[crossbar_1.scala 76:40]
  assign io_ICache_cpu_rdata_ready = io_fetch_cpu_data_ready; // @[crossbar_1.scala 79:49]
  assign io_DCache_valid = ~low_address & io_wb_valid; // @[crossbar_1.scala 105:58]
  assign io_DCache_bits_addr = io_wb_bits_addr; // @[crossbar_1.scala 100:41]
  assign io_DCache_bits_wdata = io_wb_bits_wdata; // @[crossbar_1.scala 101:33]
  assign io_DCache_bits_wstrb = io_wb_bits_wstrb; // @[crossbar_1.scala 102:33]
  assign io_DCache_bits_is_w = io_wb_bits_is_w; // @[crossbar_1.scala 103:41]
  assign io_bus1_valid = fetch_low_address & io_fetch_cpu_addr_valid; // @[crossbar_1.scala 95:62]
  assign io_bus1_bits_addr = io_fetch_cpu_addr_bits_addr; // @[crossbar_1.scala 94:41]
  assign io_bus2_valid = low_address & not_clint & io_wb_valid; // @[crossbar_1.scala 114:68]
  assign io_bus2_bits_addr = io_wb_bits_addr; // @[crossbar_1.scala 108:41]
  assign io_bus2_bits_wdata = io_wb_bits_wdata; // @[crossbar_1.scala 109:41]
  assign io_bus2_bits_wstrb = io_wb_bits_wstrb; // @[crossbar_1.scala 111:41]
  assign io_bus2_bits_is_w = io_wb_bits_is_w; // @[crossbar_1.scala 112:41]
  assign io_clint_bus_valid = low_address & ~not_clint & io_wb_valid; // @[crossbar_1.scala 119:70]
  assign io_clint_bus_bits_addr = io_wb_bits_addr; // @[crossbar_1.scala 116:33]
  assign io_clint_bus_bits_wdata = io_wb_bits_wdata; // @[crossbar_1.scala 118:33]
  assign io_clint_bus_bits_is_w = io_wb_bits_is_w; // @[crossbar_1.scala 117:33]
endmodule