module Br_predictor(
  input         clock,
  input         reset,
  input         io_br_info_valid,
  input         io_br_info_mispredict,
  input  [63:0] io_br_info_br_pc,
  input         io_br_info_taken,
  input  [63:0] io_br_info_target_next_pc,
  input  [63:0] io_pc,
  output [63:0] io_pre_next_pc,
  output        io_pre_valid
);
reg [127:0] BTB[64];
reg [63:0] RAS[4];
reg [1:0] PHT[64];
reg [2:0] reg_head;

wire [5:0] update_index = io_br_info_br_pc[8:3];
wire [122:0] update_btb_data = {1'h1,io_br_info_br_pc[63:9],io_br_info_br_pc[2],io_br_info_target_next_pc,2'h0};
wire [1:0] update_pht_data = PHT[update_index];

wire [1:0] _chage_pht_counter_T_2 = update_pht_data + 2'h1; // @[br_predictor.scala 51:114]
wire [1:0] _chage_pht_counter_T_3 = update_pht_data == 2'h3 ? 2'h3 : _chage_pht_counter_T_2; // @[br_predictor.scala 51:53]
wire [1:0] _chage_pht_counter_T_6 = update_pht_data - 2'h1; // @[br_predictor.scala 51:185]
wire [1:0] _chage_pht_counter_T_7 = update_pht_data == 2'h0 ? 2'h0 : _chage_pht_counter_T_6; // @[br_predictor.scala 51:124]

wire [127:0] _BTB_update_index = {{5'd0}, update_btb_data}; // @[br_predictor.scala 55:{43,43}]
wire [5:0] index = io_pc[8:3];
wire [55:0] tag = {io_pc[63:9],io_pc[2]}; // @[Cat.scala 33:92]
wire [1:0] pht_data = PHT[index];
wire  pht_taken = pht_data[1];
wire [127:0] btb_data = BTB[index];
wire btb_valid = btb_data[122];
wire [55:0] btb_tag = btb_data[121:66];
wire [63:0] btb_target_next_pc = btb_data[65:2];
wire [1:0] btb_br_type = btb_data[1:0];
wire  pre_valid = btb_valid & btb_tag == tag & pht_taken;
wire  is_br_return = btb_br_type == 2'h2;
wire [63:0] ras_ready = RAS[reg_head[1:0]];
assign io_pre_next_pc = pre_valid ? (is_br_return ? ras_ready:btb_target_next_pc): 64'h0;
assign io_pre_valid = btb_valid & btb_tag == tag & pht_taken;
wire [2:0] _reg_head_T_1 = reg_head - 3'h1;
wire [2:0] _reg_head_T_3 = reg_head + 3'h1;
wire  _T = btb_br_type == 2'h2;
always @(posedge clock) begin
	if(reset)begin 
		BTB[0]	<= 128'h0;
		BTB[1]	<= 128'h0;
		BTB[2]	<= 128'h0;
		BTB[3]	<= 128'h0;
		BTB[4]	<= 128'h0;
		BTB[5]	<= 128'h0;
		BTB[6]	<= 128'h0;
		BTB[7]	<= 128'h0;
		BTB[8]	<= 128'h0;
		BTB[9]	<= 128'h0;
		BTB[10]	<= 128'h0;
		BTB[11]	<= 128'h0;
		BTB[12]	<= 128'h0;
		BTB[13]	<= 128'h0;
		BTB[14]	<= 128'h0;
		BTB[15]	<= 128'h0;
		BTB[16]	<= 128'h0;
		BTB[17]	<= 128'h0;
		BTB[18]	<= 128'h0;
		BTB[19]	<= 128'h0;
		BTB[20]	<= 128'h0;
		BTB[21]	<= 128'h0;
		BTB[22]	<= 128'h0;
		BTB[23]	<= 128'h0;
		BTB[24]	<= 128'h0;
		BTB[25]	<= 128'h0;
		BTB[26]	<= 128'h0;
		BTB[27]	<= 128'h0;
		BTB[28]	<= 128'h0;
		BTB[29]	<= 128'h0;
		BTB[30]	<= 128'h0;
		BTB[31]	<= 128'h0;
		BTB[32]	<= 128'h0;
		BTB[33]	<= 128'h0;
		BTB[34]	<= 128'h0;
		BTB[35]	<= 128'h0;
		BTB[36]	<= 128'h0;
		BTB[37]	<= 128'h0;
		BTB[38]	<= 128'h0;
		BTB[39]	<= 128'h0;
		BTB[40]	<= 128'h0;
		BTB[41]	<= 128'h0;
		BTB[42]	<= 128'h0;
		BTB[43]	<= 128'h0;
		BTB[44]	<= 128'h0;
		BTB[45]	<= 128'h0;
		BTB[46]	<= 128'h0;
		BTB[47]	<= 128'h0;
		BTB[48]	<= 128'h0;
		BTB[49]	<= 128'h0;
		BTB[50]	<= 128'h0;
		BTB[51]	<= 128'h0;
		BTB[52]	<= 128'h0;
		BTB[53]	<= 128'h0;
		BTB[54]	<= 128'h0;
		BTB[55]	<= 128'h0;
		BTB[56]	<= 128'h0;
		BTB[57]	<= 128'h0;
		BTB[58]	<= 128'h0;
		BTB[59]	<= 128'h0;
		BTB[60]	<= 128'h0;
		BTB[61]	<= 128'h0;
		BTB[62]	<= 128'h0;
		BTB[63]	<= 128'h0;

		PHT[0]	<= 2'h0;
		PHT[1]	<= 2'h0;
		PHT[2]	<= 2'h0;
		PHT[3]	<= 2'h0;
		PHT[4]	<= 2'h0;
		PHT[5]	<= 2'h0;
		PHT[6]	<= 2'h0;
		PHT[7]	<= 2'h0;
		PHT[8]	<= 2'h0;
		PHT[9]	<= 2'h0;
		PHT[10]	<= 2'h0;
		PHT[11]	<= 2'h0;
		PHT[12]	<= 2'h0;
		PHT[13]	<= 2'h0;
		PHT[14]	<= 2'h0;
		PHT[15]	<= 2'h0;
		PHT[16]	<= 2'h0;
		PHT[17]	<= 2'h0;
		PHT[18]	<= 2'h0;
		PHT[19]	<= 2'h0;
		PHT[20]	<= 2'h0;
		PHT[21]	<= 2'h0;
		PHT[22]	<= 2'h0;
		PHT[23]	<= 2'h0;
		PHT[24]	<= 2'h0;
		PHT[25]	<= 2'h0;
		PHT[26]	<= 2'h0;
		PHT[27]	<= 2'h0;
		PHT[28]	<= 2'h0;
		PHT[29]	<= 2'h0;
		PHT[30]	<= 2'h0;
		PHT[31]	<= 2'h0;
		PHT[32]	<= 2'h0;
		PHT[33]	<= 2'h0;
		PHT[34]	<= 2'h0;
		PHT[35]	<= 2'h0;
		PHT[36]	<= 2'h0;
		PHT[37]	<= 2'h0;
		PHT[38]	<= 2'h0;
		PHT[39]	<= 2'h0;
		PHT[40]	<= 2'h0;
		PHT[41]	<= 2'h0;
		PHT[42]	<= 2'h0;
		PHT[43]	<= 2'h0;
		PHT[44]	<= 2'h0;
		PHT[45]	<= 2'h0;
		PHT[46]	<= 2'h0;
		PHT[47]	<= 2'h0;
		PHT[48]	<= 2'h0;
		PHT[49]	<= 2'h0;
		PHT[50]	<= 2'h0;
		PHT[51]	<= 2'h0;
		PHT[52]	<= 2'h0;
		PHT[53]	<= 2'h0;
		PHT[54]	<= 2'h0;
		PHT[55]	<= 2'h0;
		PHT[56]	<= 2'h0;
		PHT[57]	<= 2'h0;
		PHT[58]	<= 2'h0;
		PHT[59]	<= 2'h0;
		PHT[60]	<= 2'h0;
		PHT[61]	<= 2'h0;
		PHT[62]	<= 2'h0;
		PHT[63]	<= 2'h0;
	end else if(io_br_info_valid)begin 
		
		if (io_br_info_mispredict) begin
			BTB[update_index] <= _BTB_update_index;
		end 
		if(io_br_info_taken)begin 
			PHT[update_index] <= _chage_pht_counter_T_3;
		end else begin 
			PHT[update_index] <= _chage_pht_counter_T_7;
		end 
	end
end

always @(posedge clock)begin 
	if(reset)begin 
		reg_head <= 3'h0;
		RAS[0]	<=  64'h0;
		RAS[1]	<=  64'h0;
		RAS[2]	<=  64'h0;
		RAS[3]	<=  64'h0;
	end else if(pre_valid)begin 
		if(_T)begin 
			reg_head <= _reg_head_T_1;
		end else if(btb_br_type == 2'h1)begin 
			RAS[reg_head[1:0]] <= io_pc;
			reg_head <= _reg_head_T_3;
		end 
	end 
end 
endmodule