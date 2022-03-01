module soc_riscv_zhoutao_top
(
    input    a,
    input    b,
    output   f
);


 top top1(
    .a(a),
    .b(b),
    .f(f)
);

endmodule
