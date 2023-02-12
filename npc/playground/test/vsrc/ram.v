import "DPI-C" function void ramCtrl
(
    input   longint   raddr,
    output  longint   rdata,
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
    input [63:0]    waddr,
    input [63:0]    wdata,
    input [63:0]    wmask,
    input           wen
);
    always @(posedge clock)begin
        ramCtrl(raddr,rdata,waddr,wdata,wmask,wen);
    end 
endmodule
