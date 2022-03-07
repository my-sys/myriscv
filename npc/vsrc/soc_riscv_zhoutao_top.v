module soc_riscv_zhoutao_top
(
    input clk, in, reset,
    output out 
);
FSM_bin FSM_bin_1(
    .clk(clk),
    .in(in),
    .reset(reset),
    .out(out)
);
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
