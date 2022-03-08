module digital_led(
    input clk,
    input [31:0] data_in,
    input [7:0] select, //select digital led to show
    output  [7:0] seg0_o,
    output  [7:0] seg1_o,
    output  [7:0] seg2_o,
    output  [7:0] seg3_o,
    output  [7:0] seg4_o,
    output  [7:0] seg5_o,
    output  [7:0] seg6_o,
    output  [7:0] seg7_o
);

parameter[3:0] S_0 = 0, S_1 = 1, S_2 = 2, S_3 = 3, S_4 = 4, S_5 = 5, S_6 = 6, S_7 = 7,
            S_8 = 8, S_9 = 9, S_a = 10, S_b = 11, S_c = 12, S_d = 13, S_e = 14, S_f = 15;

wire[7:0] seg0_line;
wire[7:0] seg1_line;
wire[7:0] seg2_line;
wire[7:0] seg3_line;
wire[7:0] seg4_line;
wire[7:0] seg5_line;
wire[7:0] seg6_line;
wire[7:0] seg7_line;

reg [7:0]seg0;
reg [7:0]seg1;
reg [7:0]seg2;
reg [7:0]seg3;
reg [7:0]seg4;
reg [7:0]seg5;
reg [7:0]seg6;
reg [7:0]seg7;

assign seg0_o = select[0] ? seg0 : 8'd0;
assign seg1_o = select[1] ? seg1 : 8'd0;
assign seg2_o = select[2] ? seg2 : 8'd0;
assign seg3_o = select[3] ? seg3 : 8'd0;
assign seg4_o = select[4] ? seg4 : 8'd0;
assign seg5_o = select[5] ? seg5 : 8'd0;
assign seg6_o = select[6] ? seg6 : 8'd0;
assign seg7_o = select[7] ? seg7 : 8'd0;

always @(posedge clk)begin
    seg0 <= seg0_line;
    seg1 <= seg1_line;
    seg2 <= seg2_line;
    seg3 <= seg3_line;
    seg4 <= seg4_line;
    seg5 <= seg5_line;
    seg6 <= seg6_line;
    seg7 <= seg7_line;
end 
MuxKey #(16, 4, 8 ) decode_data_0(.out(seg0_line),.key(data_in[3:0]),.lut({
    S_0,  8'b1111_1100,
    S_1,  8'b0110_0000,
    S_2,  8'b1101_1010,
    S_3,  8'b1111_0010,
    S_4,  8'b0110_0110,
    S_5,  8'b1011_0110,
    S_6,  8'b1011_1110,
    S_7,  8'b1110_0000,
    S_8,  8'b1111_1100,
    S_9,  8'b0110_1111,
    S_a,  8'b1110_1111,
    S_b,  8'b0011_1110,
    S_c,  8'b1001_1100,
    S_d,  8'b0111_1010,
    S_e,  8'b1001_1110,
    S_f,   8'b1000_1110
    }));
MuxKey #(16, 4, 8 ) decode_data_1(.out(seg1_line),.key(data_in[7:4]),.lut({

    S_0,  8'b1111_1100,
    S_1,  8'b0110_0000,
    S_2,  8'b1101_1010,
    S_3,  8'b1111_0010,
    S_4,  8'b0110_0110,
    S_5,  8'b1011_0110,
    S_6,  8'b1011_1110,
    S_7,  8'b1110_0000,
    S_8,  8'b1111_1100,
    S_9,  8'b0110_1111,
    S_a,  8'b1110_1111,
    S_b,  8'b0011_1110,
    S_c,  8'b1001_1100,
    S_d,  8'b0111_1010,
    S_e,  8'b1001_1110,
    S_f,   8'b1000_1110
    }));
MuxKey #(16, 4, 8 ) decode_data_2(.out(seg2_line),.key(data_in[11:8]),.lut({

    S_0,  8'b1111_1100,
    S_1,  8'b0110_0000,
    S_2,  8'b1101_1010,
    S_3,  8'b1111_0010,
    S_4,  8'b0110_0110,
    S_5,  8'b1011_0110,
    S_6,  8'b1011_1110,
    S_7,  8'b1110_0000,
    S_8,  8'b1111_1100,
    S_9,  8'b0110_1111,
    S_a,  8'b1110_1111,
    S_b,  8'b0011_1110,
    S_c,  8'b1001_1100,
    S_d,  8'b0111_1010,
    S_e,  8'b1001_1110,
    S_f,   8'b1000_1110
    }));
MuxKey #(16, 4, 8 ) decode_data_3(.out(seg3_line),.key(data_in[15:12]),.lut({
    S_0,  8'b1111_1100,
    S_1,  8'b0110_0000,
    S_2,  8'b1101_1010,
    S_3,  8'b1111_0010,
    S_4,  8'b0110_0110,
    S_5,  8'b1011_0110,
    S_6,  8'b1011_1110,
    S_7,  8'b1110_0000,
    S_8,  8'b1111_1100,
    S_9,  8'b0110_1111,
    S_a,  8'b1110_1111,
    S_b,  8'b0011_1110,
    S_c,  8'b1001_1100,
    S_d,  8'b0111_1010,
    S_e,  8'b1001_1110,
    S_f,   8'b1000_1110
    }));
MuxKey #(16, 4, 8 ) decode_data_4(.out(seg4_line),.key(data_in[19:16]),.lut({
    S_0,  8'b1111_1100,
    S_1,  8'b0110_0000,
    S_2,  8'b1101_1010,
    S_3,  8'b1111_0010,
    S_4,  8'b0110_0110,
    S_5,  8'b1011_0110,
    S_6,  8'b1011_1110,
    S_7,  8'b1110_0000,
    S_8,  8'b1111_1100,
    S_9,  8'b0110_1111,
    S_a,  8'b1110_1111,
    S_b,  8'b0011_1110,
    S_c,  8'b1001_1100,
    S_d,  8'b0111_1010,
    S_e,  8'b1001_1110,
    S_f,   8'b1000_1110
    }));
MuxKey #(16, 4, 8 ) decode_data_5(.out(seg5_line),.key(data_in[23:20]),.lut({
    S_0,  8'b1111_1100,
    S_1,  8'b0110_0000,
    S_2,  8'b1101_1010,
    S_3,  8'b1111_0010,
    S_4,  8'b0110_0110,
    S_5,  8'b1011_0110,
    S_6,  8'b1011_1110,
    S_7,  8'b1110_0000,
    S_8,  8'b1111_1100,
    S_9,  8'b0110_1111,
    S_a,  8'b1110_1111,
    S_b,  8'b0011_1110,
    S_c,  8'b1001_1100,
    S_d,  8'b0111_1010,
    S_e,  8'b1001_1110,
    S_f,   8'b1000_1110
    }));
MuxKey #(16, 4, 8 ) decode_data_6(.out(seg6_line),.key(data_in[27:24]),.lut({
    S_0,  8'b1111_1100,
    S_1,  8'b0110_0000,
    S_2,  8'b1101_1010,
    S_3,  8'b1111_0010,
    S_4,  8'b0110_0110,
    S_5,  8'b1011_0110,
    S_6,  8'b1011_1110,
    S_7,  8'b1110_0000,
    S_8,  8'b1111_1100,
    S_9,  8'b0110_1111,
    S_a,  8'b1110_1111,
    S_b,  8'b0011_1110,
    S_c,  8'b1001_1100,
    S_d,  8'b0111_1010,
    S_e,  8'b1001_1110,
    S_f,   8'b1000_1110
    }));
MuxKey #(16, 4, 8 ) decode_data_7(.out(seg7_line),.key(data_in[31:28]),.lut({
    S_0,  8'b1111_1100,
    S_1,  8'b0110_0000,
    S_2,  8'b1101_1010,
    S_3,  8'b1111_0010,
    S_4,  8'b0110_0110,
    S_5,  8'b1011_0110,
    S_6,  8'b1011_1110,
    S_7,  8'b1110_0000,
    S_8,  8'b1111_1100,
    S_9,  8'b0110_1111,
    S_a,  8'b1110_1111,
    S_b,  8'b0011_1110,
    S_c,  8'b1001_1100,
    S_d,  8'b0111_1010,
    S_e,  8'b1001_1110,
    S_f,   8'b1000_1110
    }));
endmodule 
