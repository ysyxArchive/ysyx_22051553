module seg(
  input             clk,
  input             rst,
  input             top_sel,
  input     [2:0]   top_value0,
                    top_value1,
                    top_out,

  output    reg [7:0]   seg_seg0,
  output    reg [7:0]   seg_seg1,
  output    reg [7:0]   seg_seg2,
  output    reg         seg_led
);

wire [7:0] segs [7:0];
assign segs[0] = 8'b11111101;
assign segs[1] = 8'b01100000;
assign segs[2] = 8'b11011010;
assign segs[3] = 8'b11110010;
assign segs[4] = 8'b01100110;
assign segs[5] = 8'b10110110;
assign segs[6] = 8'b10111110;
assign segs[7] = 8'b11100000;


reg [31:0] cnt;

always @(posedge clk) begin
  if(rst)begin
    seg_seg0 <= ~segs[0];
    seg_seg1 <= ~segs[0];
    seg_seg2 <= ~segs[0];
    seg_led  <= 1'd0;      
    cnt <= 32'd0;
  end
  else begin
    cnt <= (cnt < 32'd5000000) ? (cnt + 32'd1) : 32'd0;
    if(cnt == 32'd5000000)begin
      seg_seg0 <= ~segs[top_value0];
      seg_seg1 <= ~segs[top_value1];
      seg_seg2 <= ~segs[top_out];
      seg_led <= top_sel;
    end
  end  
end


endmodule