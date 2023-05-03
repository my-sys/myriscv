module DCache(
  input          clock,
  input          reset,
  input          io_cpu_valid,
  input  [63:0]  io_cpu_bits_addr,
  output [63:0]  io_cpu_bits_rdata,
  input  [63:0]  io_cpu_bits_wdata,
  input  [7:0]   io_cpu_bits_wstrb,
  input          io_cpu_bits_is_w,
  output         io_cpu_ready,
  output [5:0]   io_sram_addr,
  output         io_sram_wen_0,
  output         io_sram_wen_1,
  output [127:0] io_sram_data_wmask,
  output [127:0] io_sram_tag_wdata,
  output [127:0] io_sram_data_wdata,
  input  [127:0] io_sram_rdata_0,
  input  [127:0] io_sram_rdata_1,
  input  [127:0] io_sram_rdata_2,
  input  [127:0] io_sram_rdata_3,
  input          io_cache_bus_w_ready,
  output         io_cache_bus_w_valid,
  output [63:0]  io_cache_bus_w_bits_waddr,
  output [63:0]  io_cache_bus_w_bits_wdata,
  output         io_cache_bus_w_bits_wlast,
  output         io_cache_bus_b_ready,
  input          io_cache_bus_b_valid,
  output         io_cache_bus_r_valid,
  output [63:0]  io_cache_bus_r_bits_raddr,
  input  [63:0]  io_cache_bus_r_bits_rdata,
  input          io_cache_bus_r_bits_rlast,
  input          io_cache_bus_r_ready
);
  wire [53:0] Tag = io_cpu_bits_addr[63:10];
  wire [5:0] Index = io_cpu_bits_addr[9:4];
  wire [3:0] Offset = io_cpu_bits_addr[3:0];
  wire [63:0] wdata = io_cpu_bits_wdata;
  wire [7:0] wstrb = io_cpu_bits_wstrb;
  wire is_w 	= io_cpu_bits_is_w;
  reg [1:0] reg_cache_state;
  reg [63:0] reg_wdata;
  reg [7:0] reg_wstrb;
  reg  reg_is_w;
  reg [53:0] reg_tag;
  reg [5:0] reg_index;
  reg [3:0] reg_offset;
  reg  reg_ready;
  reg [63:0] reg_rdata;
  reg  reg_cache_write;
  reg [15:0] reg_cache_wstrb;
  reg [127:0] reg_cache_wdata;
  reg  reg_chosen_tag;

parameter cache_idle = 2'b00,read_cache = 2'b01,cache_and_bus = 2'b10,cache_end = 2'b11;
  wire [127:0] cache_mask = {reg_cache_wstrb[0] ? 8'hff : 8'h0,
 reg_cache_wstrb[1] ? 8'hff : 8'h0,reg_cache_wstrb[2] ? 8'hff : 8'h0,
 reg_cache_wstrb[3] ? 8'hff : 8'h0,
 reg_cache_wstrb[4] ? 8'hff : 8'h0,
 reg_cache_wstrb[5] ? 8'hff : 8'h0,
 reg_cache_wstrb[6] ? 8'hff : 8'h0,
 reg_cache_wstrb[7] ? 8'hff : 8'h0,
 reg_cache_wstrb[8] ? 8'hff : 8'h0,
 reg_cache_wstrb[9] ? 8'hff : 8'h0,
 reg_cache_wstrb[10] ? 8'hff : 8'h0,
 reg_cache_wstrb[11] ? 8'hff : 8'h0,
 reg_cache_wstrb[12] ? 8'hff : 8'h0,
 reg_cache_wstrb[13] ? 8'hff : 8'h0,
 reg_cache_wstrb[14] ? 8'hff : 8'h0,
 reg_cache_wstrb[15] ? 8'hff : 8'h0};
  wire [127:0] cache_wdata = reg_offset[3] ? {reg_wdata,64'h0} :{64'h0,reg_wdata};
  wire [15:0] cache_wstrb = reg_offset[3] ? {reg_wstrb,8'h0}:{8'h0,reg_wstrb};

  wire  is_sram0_write = reg_cache_write & ~reg_chosen_tag;
  wire  is_sram2_write = reg_cache_write & reg_chosen_tag;
  wire  clear_cache = 1'b0;

  reg [63:0] reg_sram0_valid;
  reg [63:0] reg_sram0_dirty;

  wire [63:0] chose_bit = 64'h1 << reg_index;
  wire [63:0] neg_chose_bit = ~chose_bit;
  always @(posedge clock)begin 
	if(clear_cache | reset)begin
		reg_sram0_valid <= 0;
		reg_sram0_dirty <= 0;
	end else if(is_sram0_write)begin 
		reg_sram0_valid <= reg_sram0_valid | chose_bit;
		reg_sram0_dirty <= reg_is_w? (reg_sram0_dirty | chose_bit): (reg_sram0_dirty &(neg_chose_bit));
	end
	// end else begin 
	//	reg_sram0_valid <= reg_sram0_valid
	//	reg_sram0_dirty <= reg_sram0_dirty
	// end 
  end 

  reg [63:0] reg_sram2_valid; // @[dcache.scala 123:42]
  reg [63:0] reg_sram2_dirty; // @[dcache.scala 124:42]
  always @(posedge clock)begin 
	if(clear_cache | reset)begin 
		reg_sram2_valid		<= 0;
		reg_sram2_dirty		<= 0;
	end else if(is_sram2_write)begin 
		reg_sram2_valid		<= reg_sram2_valid | chose_bit;
		reg_sram2_dirty		<=  reg_is_w?(reg_sram2_dirty | chose_bit):(reg_sram2_dirty &(neg_chose_bit));
	end
  end 

  reg [63:0] reg_r_raddr; // @[dcache.scala 138:42]
  reg  reg_r_valid; // @[dcache.scala 139:42]
  reg [63:0] reg_w_waddr; // @[dcache.scala 141:42]
  reg [63:0] reg_w_wdata; // @[dcache.scala 142:42]
  reg  reg_w_wlast; // @[dcache.scala 143:42]
  reg  reg_w_valid; // @[dcache.scala 144:42]
  reg  reg_b_ready; // @[dcache.scala 146:42]

  wire [53:0] tag_0 = io_sram_rdata_1[53:0]; // @[dcache.scala 149:56]
  wire [53:0] tag_2 = io_sram_rdata_3[53:0]; // @[dcache.scala 150:56]
  wire  hit_0 = reg_tag == tag_0; // @[dcache.scala 151:52]
  wire  hit_2 = reg_tag == tag_2; // @[dcache.scala 152:52]
  wire  tag_valid_0 = reg_sram0_valid[reg_index];
  wire  tag_valid_2 = reg_sram2_valid[reg_index];
  wire  tag_dirty_0 = reg_sram0_dirty[reg_index];
  wire  tag_dirty_2 = reg_sram2_dirty[reg_index];

  wire [63:0] rdata0 = reg_offset[3] ? io_sram_rdata_0[127:64] : io_sram_rdata_0[63:0]; // @[dcache.scala 157:46]
  wire [63:0] rdata2 = reg_offset[3] ? io_sram_rdata_2[127:64] : io_sram_rdata_2[63:0]; // @[dcache.scala 158:46]
  wire [127:0] rdata_0 = io_sram_rdata_0;
  wire [127:0] rdata_2 = io_sram_rdata_2;
  reg [63:0] reg_lru_2; // @[dcache.scala 165:58]
  wire LRU_2 = reg_lru_2[reg_index];
  reg  reg_start_operation; // @[dcache.scala 168:50]
  always @(posedge clock)begin 
	if(reset)reg_lru_2 <= 0;
	else if(reg_start_operation)begin 
		if(hit_0)reg_lru_2 <= reg_lru_2 | chose_bit;
		else if(hit_2) reg_lru_2 <= reg_lru_2 & neg_chose_bit;
		else begin
			if(tag_valid_0 & tag_valid_2) reg_lru_2 <= LRU_2?(reg_lru_2 & neg_chose_bit):(reg_lru_2 | chose_bit);
			else reg_lru_2 <= tag_valid_0?(reg_lru_2 & neg_chose_bit):(reg_lru_2 | chose_bit);
		end
	end
  end

  reg [1:0] reg_cnt; // @[dcache.scala 187:42]
  reg  reg_rbus_finish; // @[dcache.scala 188:38]
  reg  reg_wbus_finish; // @[dcache.scala 189:38]

  assign io_cpu_bits_rdata = reg_rdata; // @[dcache.scala 340:49]
  assign io_cpu_ready = reg_ready; // @[dcache.scala 341:49]
  assign io_sram_addr = reg_cache_state != 2'h0 ? reg_index : Index; // @[dcache.scala 71:54]
  assign io_sram_wen_0 = ~is_sram0_write; // @[dcache.scala 73:24]
  assign io_sram_wen_1 = ~is_sram2_write; // @[dcache.scala 74:24]
  assign io_sram_data_wmask = ~cache_mask; // @[dcache.scala 76:28]
  assign io_sram_tag_wdata = {{74'd0}, reg_tag}; // @[dcache.scala 77:24]
  assign io_sram_data_wdata = reg_cache_wdata; // @[dcache.scala 78:25]
  assign io_cache_bus_w_valid = reg_w_valid; // @[dcache.scala 343:41]
  assign io_cache_bus_w_bits_waddr = reg_w_waddr; // @[dcache.scala 344:41]
  assign io_cache_bus_w_bits_wdata = reg_w_wdata; // @[dcache.scala 345:41]
  assign io_cache_bus_w_bits_wlast = reg_w_wlast; // @[dcache.scala 346:41]
  assign io_cache_bus_b_ready = reg_b_ready; // @[dcache.scala 348:41]
  assign io_cache_bus_r_valid = reg_r_valid; // @[dcache.scala 351:41]
  assign io_cache_bus_r_bits_raddr = reg_r_raddr; // @[dcache.scala 350:41]

  wire hit_0_and_valid_0 = (hit_0 & tag_valid_0);
  wire hit_2_and_valid_2 = (hit_2 & tag_valid_2);
  //wire or_hit = hit_0 | hit_2;
  wire[63:0] temp_addr = {reg_tag,reg_index,4'b0};
  wire io_cache_bus_r_fire = io_cache_bus_r_valid & io_cache_bus_r_ready;
  wire io_cache_bus_b_fire = io_cache_bus_b_valid & io_cache_bus_b_ready;
  wire [63:0] bus_r_data = io_cache_bus_r_bits_rdata;
  always @(posedge clock)begin 
	if(reset)begin 
		reg_start_operation <= 0;
		reg_cache_state		<= cache_idle;
		reg_wdata			<= 0;
		reg_wstrb			<= 0;
		reg_is_w			<= 1'b0;
		reg_tag				<= 0;
		reg_index			<= 0;
		reg_offset			<= 0;
		reg_ready			<= 1'b0;
		reg_rdata			<= 0;
		reg_cache_write		<= 1'b0;
		reg_cache_wstrb		<= 0;
		reg_cache_wdata		<= 0;
		reg_chosen_tag		<= 1'b0;

		reg_r_raddr			<= 0;
		reg_r_valid			<= 1'b0;
		reg_w_waddr			<= 0;
		reg_w_wdata			<= 0;
		reg_w_wlast			<= 0;
		reg_w_valid			<= 0;
		reg_b_ready			<= 0;
		reg_cnt				<= 0;
		reg_rbus_finish		<= 1;
		reg_wbus_finish		<= 1;
	end else begin 
		case (reg_cache_state)
			cache_idle : begin 
				if(io_cpu_valid)begin 
				//--------hold cpu state-------------
					reg_wdata		<= io_cpu_bits_wdata;
					reg_wstrb 		<= io_cpu_bits_wstrb;
					reg_is_w 		<= io_cpu_bits_is_w;
					reg_tag 		<= io_cpu_bits_addr[63:10];
					reg_index 		<= io_cpu_bits_addr[9:4];
					reg_offset 		<= io_cpu_bits_addr[3:0];
				//---------next state----------------
					reg_cache_state <= read_cache;
					reg_start_operation <= 1'b1;
				end
				reg_ready 	<= 1'b0;
				//-----------cache-------------------
				reg_cache_write <= 1'b0;
				//------------bus--------------------
				reg_w_valid 	<= 1'b0;
				reg_b_ready 	<= 1'b0;
				reg_r_valid 	<= 1'b0;
				//reg_rbus_finish <= true.B
			end 
			read_cache :begin 
				reg_start_operation <= 1'b0;
				reg_cache_wstrb 	<= cache_wstrb;
				if(hit_0 | hit_2)begin
				//一般情况下不会出现两个都中，如果两个都中，
				//只能是都为0的情况下，这种情况下，必然hit_0先有效
					reg_chosen_tag	<= hit_0 ? 1'b0:1'b1;
					if(hit_0_and_valid_0 |hit_2_and_valid_2)begin
						if(reg_is_w)begin 
							//---- cache ---
							reg_cache_write		<= 1'b1;
							//reg_cache_wstrb		 	:= cache_wstrb
							//reg_index
							//reg_chosen_tag
							reg_cache_wdata 	<= cache_wdata;
							reg_cache_state 	<= cache_end;
							reg_ready 			<= 1'b1;
						end else begin
							// read data from cache 
							// ------ cpu 
							reg_rdata 			<= hit_0? rdata0:rdata2;
							reg_ready 			<= 1'b1;
							reg_cache_state 	<= cache_end;
						end
					end else begin 
						//-----cpu-----
						//reg_ready 			:= false.B 
						//-----cache--- 
						//reg_cache_write 		:= false.B 
						//------bus---- 
						reg_r_raddr 			<= temp_addr;
						reg_r_valid 			<= 1'b1;
						reg_rbus_finish			<= 1'b0;
						reg_cache_state			<= cache_and_bus;
					end
				end else begin
					if(tag_valid_0 & tag_valid_2)begin
						reg_chosen_tag 		<= LRU_2;
						//read_bus 
						reg_r_raddr 		<= temp_addr;
						reg_r_valid 		<= 1'b1;
						reg_rbus_finish		<= 1'b0;
						
						reg_cache_state 	<= cache_and_bus;
						//write bus 
						if((tag_dirty_0 & (!LRU_2))|(tag_dirty_2 &LRU_2))begin
							reg_w_valid 	<= 1'b1;
							reg_b_ready 	<= 1'b1;
							reg_w_waddr 	<= {(LRU_2?tag_2:tag_0),reg_index,4'b0};
							reg_w_wdata 	<= LRU_2?rdata_2[63:0]:rdata_0[63:0];
							reg_w_wlast 	<= 1'b0;
							reg_wbus_finish <= 1'b0; 
							reg_cnt 		<= 1;   // is_ok ?
						end
					end else begin 
						reg_chosen_tag 		<= tag_valid_0?1:0;
						
						reg_r_raddr 		<= temp_addr;
						reg_r_valid 		<= 1'b1;
						reg_rbus_finish		<= 1'b0;
						reg_cache_state 	<= cache_and_bus;
					end
				end 
			end 
			cache_and_bus : begin
				reg_rdata <= reg_rdata;
				if(io_cache_bus_r_fire)begin
					if(io_cache_bus_r_bits_rlast)begin
						reg_r_valid 	<= 1'b0;
						//----cache--- 
						reg_cache_wstrb <= 16'hffff; 
						reg_rbus_finish	<= 1'b1;
						if(reg_is_w)begin
							reg_cache_wdata     <= (cache_wdata & cache_mask) | ({bus_r_data,reg_cache_wdata[63:0]} & ~cache_mask);
						end else begin
							//----cpu---
							reg_rdata 			<= reg_offset[3]? (bus_r_data): reg_cache_wdata[63:0];
							reg_cache_wdata		<= {bus_r_data,reg_cache_wdata[63:0]};
						end
					end else begin
						reg_cache_wdata 		<= {64'h0,bus_r_data};
					end
				end
				
				if(io_cache_bus_w_ready & io_cache_bus_w_valid)begin
					if(reg_cnt == 0)begin
						reg_w_wlast 	<= 1'b0; 
						reg_w_valid 	<= 1'b0;
					end else if(reg_cnt == 1)begin
						reg_cnt 		<= reg_cnt - 2'b1;
						reg_w_wlast 	<= 1'b1;
						reg_w_wdata 	<= (reg_chosen_tag == 1)?rdata_2[127:64]:rdata_0[127:64];
					end// }.otherwise{
					// 	reg_cnt := reg_cnt - 1.U
					// 	reg_w_wdata 	:= Mux(reg_chosen_tag === 1.U,rdata_2(127,64),rdata_0(127,64))
					// }
				end
				
				if(io_cache_bus_b_fire)begin
					reg_wbus_finish <= 1'b1;
					reg_b_ready 	<= 1'b0;
				end
				// when read bus finish , write bus finish 
				if((io_cache_bus_r_bits_rlast | reg_rbus_finish)&((io_cache_bus_b_fire) | reg_wbus_finish ))begin
					reg_cache_write 	<= 1'b1; 
					reg_cache_state 	<= cache_end;
					reg_ready 			<= 1'b1;
				end
			end
			cache_end : begin 
				reg_cache_write 	<= 1'b0;
				reg_ready 			<= 1'b0;
				//------------bus----------- 
				reg_w_valid		<= 1'b0;
				reg_b_ready 	<= 1'b0; 
				reg_r_valid 	<= 1'b0;
				reg_cache_state		<= cache_idle;
			end 
	endcase	
	end
  end 
endmodule