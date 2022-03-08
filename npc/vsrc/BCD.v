module BCD(
    input [7:0] binary,
    output reg [3:0] A,
    output reg [3:0] B,
    output reg [3:0] C
);

integer i;
always @(binary)
begin
    {A,B,C} = 12'd0;
    for (i=7;i>=0;i=i-1)begin
        if(A>=5) A = A +3;
        if(B>=5) B = B +3;
        if(C>=5) C = C +3;
        {A,B,C}={A,B,C}<<1;
        C[0] = binary[i];
    end 
end 

endmodule
