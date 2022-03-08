module soc_riscv_zhoutao_top
(
    input clk,
    input reset,
    input ps2_clk,
    input ps2_data,

    output [7:0]seg0_o,
    output [7:0]seg1_o,
    output [7:0]seg2_o,
    output [7:0]seg3_o,
    output [7:0]seg4_o,
    output [7:0]seg5_o,
    output [7:0]seg6_o,
    output [7:0]seg7_o 
);
/* verilator lint_off UNUSED */
reg clrn;
reg [7:0] select;
reg nextdata_n; 
reg [31:0] digital_data;
wire[7:0] data;
wire ready;
wire overflow;
reg [6:0]count;
reg cnt;
wire [3:0] A;
wire [3:0] B;
wire [3:0] C;
always @(posedge clk)begin
    if(reset)begin
        clrn <= 1'b0;
        select <= 8'b1111_1111;
        nextdata_n <= 1'b1;
        count <= 7'd0;
        cnt <= 1'b0;
        digital_data <= 32'd0;
    end else begin
        if(ready && !overflow)begin
            if(cnt == 0)begin 
                digital_data[7:0] <= data;
                count <= count + 1'b1;
                cnt <= 1'b1;
                nextdata_n <= 1'b0;
                select <= 8'b00011111;
            end else begin
                digital_data[19:16] <= A;
                digital_data[11:8]<= C;
                digital_data[15:12]<= B;
                if(data == 8'hf0)begin
                    clrn <= 1'b0;
                    select <= 0;
                    nextdata_n <= 1'b1;
                    cnt <= 1'b0;
                end 
            end 
        end else if(overflow) begin
            clrn <= 1'b0;
            
        end else begin
            clrn <= 1'b1;
            
        end 
    end 
end 
    
BCD BCD_1(
    .binary({1'b0,count}),
    .A(A),
    .B(B),
    .C(C)
);
ps2_keyboard ps2_keybpard_1(
    .clk(clk),
    .clrn(clrn),
    .ps2_clk(ps2_clk),
    .ps2_data(ps2_data),
    .nextdata_n(nextdata_n),
    .data(data),
    .ready(ready),
    .overflow(overflow)

);
/* verilator lint_off UNUSED */
digital_led digital_led_1(
    .clk(clk),
   // .data_in({4'd0,4'd1,4'd2,4'd3,4'd15,4'd9,4'd10,4'd5}),
    .data_in({12'd0,count[3:0],B,C,digital_data[7:0]}),
    .select(select), //select digital led to show
    .seg0_o(seg0_o),
    .seg1_o(seg1_o),
    .seg2_o(seg2_o),
    .seg3_o(seg3_o),
    .seg4_o(seg4_o),
    .seg5_o(seg5_o),
    .seg6_o(seg6_o),
    .seg7_o(seg7_o)
);
/* 
FSM_bin FSM_bin_1(
    .clk(clk),
    .in(in),
    .reset(reset),
    .out(out)
);*/ 
/*mux41b m_mux41b_1(
    .a(a),
    .s(s),
    .y(y)
);*/
/*light light1(
    .clk(clk),
    .rst(rst),
    .led(led)
);*/

endmodule
