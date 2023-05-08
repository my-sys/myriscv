//本代码由chisel代码而来，只是为了加快仿真速度，考核而设计。
//有些接口被chisel编译优化掉了，实际在chisel代码中存在，当接入soc，AXI，SRAM作为顶层接口时，这些线因为无法优化会再次出现。
module SRAM(
  input          clock,
  input          reset,
  input  [5:0]   io_addr,
  input          io_wen,
  input  [127:0] io_wmask,
  input  [127:0] io_wdata,
  output [127:0] io_rdata
);
reg [127:0] Q;
reg [127:0] sram[64];
wire [127:0] bwen = ~io_wmask; 
wire  wen = ~io_wen;
// wire [127:0] _sram_T = io_wdata & bwen;
// wire [127:0] _sram_T_1 = ~bwen;

wire [127:0] read_sram = sram[io_addr];
// wire [127:0] _sram_T_2 = read_sram & _sram_T_1;
// wire [127:0] _sram_T_3 = _sram_T | _sram_T_2;
//bwen是低有效
assign io_rdata = Q;
always @(posedge clock)begin 
	if(reset)begin 
		Q <= 128'h0;
	end else if (~wen)begin 
		Q <= sram[io_addr];
	end else begin 
		Q <= 128'h0;
	end 
	if(wen)begin 
		sram[io_addr] <= (io_wdata & bwen)|(read_sram & ~bwen);
	end 
end 
endmodule