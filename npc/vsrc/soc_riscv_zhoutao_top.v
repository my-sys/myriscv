module soc_riscv_zhoutao_top
(
    input clk,
    input reset,
    output        hsync,
    output        vsync,
    output        valid,
    output [7:0]  vga_r,
    output [7:0]  vga_g,
    output [7:0]  vga_b 
)/* verilator lint_off DECLFILENAME */;

wire [9:0] h_addr;
wire [9:0] v_addr;
wire [23:0]vga_data;
mem vga_mem1(
    .h_addr({9'h0,h_addr}),
    .v_addr({9'h0,v_addr}),
    .vga_data(vga_data)
);
vga_ctrl vga_ctrl1(
    .pclk(clk),
    .reset(reset),
    .vga_data(vga_data),
    .h_addr(h_addr),
    .v_addr(v_addr),
    .hsync(hsync),
    .vsync(vsync),
    .valid(valid),
    .vga_r(vga_r),
    .vga_g(vga_g),
    .vga_b(vga_b)
);
endmodule;
module mem(
    input [18:0] h_addr,
    input [18:0] v_addr,
    output [23:0] vga_data 
);

reg [23:0] vga_mem[300000:0];
initial begin
    $readmemb("./temp.bin",vga_mem);
end 
assign vga_data = vga_mem[(v_addr << 7) + (v_addr << 9) + h_addr];
endmodule 
/*
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
reg[7:0] data_temp;
always @(posedge clk)begin
    if(reset)begin
        clrn <= 1'b0;
        select <= 8'b1111_1111;
        nextdata_n <= 1'b1;
        count <= 7'd0;
        cnt <= 1'b0;
        digital_data <= 32'd0;
        data_temp <= 8'd0;
    end else begin
        if(ready && !overflow)begin
            if(cnt == 0)begin 
                digital_data[7:0] <= data;
                count <= count + 1'b1;
                cnt <= 1'b1;
                nextdata_n <= 1'b0;
                select <= 8'b00011111;
            end else begin
                data_temp <= data;
                digital_data[19:16] <= A;
                digital_data[11:8]<= C;
                digital_data[15:12]<= B;
                if(data_temp == 8'hf0)begin
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
);*/
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

