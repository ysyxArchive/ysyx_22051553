module top (
    input           clk,
    input           rst,

    input   [2:0]   io_value0,
                    io_value1,
    input           io_sel, 

    output  [7:0]   seg0,   //value0
    output  [7:0]   seg1,   //value1
    output  [7:0]   seg2,   //out
    output          led     //sel
);

    reg     [2:0]   top_out;


    Mux Mux_ins(
        .clk(clk),
        .reset(rst),
        .io_value0(io_value0),
        .io_value1(io_value1),
        .io_sel(io_sel),
        .io_out(top_out)
    );

    seg seg_ins(
        .clk(clk),
        .rst(rst),
        .top_sel(io_sel),
        .top_value0(io_value0),
        .top_value1(io_value1),
        .top_out(top_out),
        .seg_seg0(seg0),
        .seg_seg1(seg1),
        .seg_seg2(seg2),
        .seg_led(led)
    );













endmodule

