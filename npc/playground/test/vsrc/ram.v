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
    // always @(posedge clock)begin
    //     ramCtrl(raddr,rdata,rflag,waddr,wdata,wmask,wen);
    // end 
	always @(*)begin 
		ramCtrl(raddr,rdata,rflag,waddr,wdata,wmask,wen);
	end
endmodule
