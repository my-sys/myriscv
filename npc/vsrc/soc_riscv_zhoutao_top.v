module soc_riscv_zhoutao_top
(
    input [3:0]   a,
    input [1:0]   s,
    output   y
);

mux41b m_mux41b_1(
    .a(a),
    .s(s),
    .y(y)
);
/*light light1(
    .clk(clk),
    .rst(rst),
    .led(led)
);*/

endmodule
