module soc_riscv_zhoutao_top
(
    input    a,
    input    b,
    input    s,
    output   y
);

m_mux21 m_mux21_1(
    .a(a),
    .b(b),
    .s(s),
    .y(y)
);
/*light light1(
    .clk(clk),
    .rst(rst),
    .led(led)
);*/

endmodule
