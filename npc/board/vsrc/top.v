module top (
    input       clk,
    input       rst,
    input [1:0] sw,
    output      led
);

led led(
    .clk(clk),
    .rst(rst),
    .sw(sw),
    .ledr(ledr)
);




endmodule


module led(
    input       clk,
    input       rst,
    input [1:0] sw,
    output      led
);





endmodule