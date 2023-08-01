
module Interact(input [31:0] inst,
                input  clk
);
   
   always@(posedge clk)begin
       if(inst == 32'b00000000000100000000000001110011)
           $finish;
   end
   
endmodule
        