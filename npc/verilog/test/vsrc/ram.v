import "DPI-C" function void ramCtrl
(
    input   longint   raddr,
    output  longint   rdata,
	input 	bit 	  rflag,  //// 这个只是用于表明，一次read传输开始了，不能推断结束。作用在difftest 是否跳过外设中用到
    input   longint   waddr,
    input   longint   wdata,
//	input   byte	  wstrb,
	input   longint   wmask,
    input   bit       wen
);
/* verilator lint_off DECLFILENAME */
module RAMCtrl(
    input           clock,
    input [63:0]    raddr,
    output[63:0]    rdata,
	input 			rflag,
    input [63:0]    waddr,
    input [63:0]    wdata,
    input [63:0]    wmask,
    input           wen
);
wire [63:0] t_rdata;
	always @(posedge clock)begin 
		ramCtrl(raddr,t_rdata,rflag,waddr,wdata,wmask,wen);
		tem_data <= t_rdata;
	end
reg [63:0] tem_data;
assign rdata = tem_data;
endmodule
