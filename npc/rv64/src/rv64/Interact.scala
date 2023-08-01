package rv64

import chisel3._
import chisel3.util._
import Define._


class Interact extends BlackBox with HasBlackBoxInline{  //起始应该放到写回模块，确保之前的指令都已经顺序执行完
    val io = IO(new Bundle {
        val inst = Input(UInt(INST_LEN.W))
        val clk = Input(Clock())
        val rst = Input(Reset())
    })

    setInline("Interact.v",
        """
        |module Interact(input [31:0] inst,
        |                input  clk,
        |                input  reset
        |);
        |   
        |   reg ebreak_flag;
        |   reg [2:0] over_count;
        |
        |   always@(posedge clk)begin
        |       if(reset)
        |           ebreak_flag <= 1'b0;
        |       else
        |       if(inst == 32'b00000000000100000000000001110011)begin
        |           ebreak_flag <= 1'b1;
        |           $display("ebreak hit!");
        |           $finish;
        |       end
        |   end
        |
        |   always@(posedge clk)begin
        |       if(reset)
        |           over_count <= 'd0;
        |       else begin
        |           if(ebreak_flag)begin
        |               over_count <= over_count + 1'b1;
        |               if(over_count == 3'd4)begin
        |                   $display("ebreak!");
        |                   $finish;
        |               end
        |                   
        |           end
        |       end 
        |           
        |
        |   end
        |
        |   
        |endmodule
        """.stripMargin
    )
}
