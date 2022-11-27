import "DPI-C" function void ramCtrl
(
    input   longint   raddr,
    output  longint   rdata,
    input   longint   waddr,
    input   longint   wdata,
    input   bit       wstrb,
    input   bit       wen
);

module RAMCtrl(
    input           clock,
    input [63:0]    raddr,
    output [63:0]    rdata,
    input [63:0]    waddr,
    input [63:0]    wdata,
    input [7:0]     wstrb,
    input           wen
);
    always @(posedge clok)begin
        ramCtrl(clock,raddr,rdata,waddr,wdata,wstrb,wen);
    end 
endmodule