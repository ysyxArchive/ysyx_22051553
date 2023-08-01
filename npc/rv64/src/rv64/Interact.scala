package rv64

import chisel3._
import chisel3.util._
import Define._


class Interact extends BlackBox with HasBlackBoxInline{
    val io = IO(new Bundle {
        val inst = Input(UInt(INST_LEN.W))
        val clk = Input(Clock())
    })

    setInline("Interact.v",
        """
        |module Interact(input [31:0] inst,
        |                input  clk
        |);
        |   
        |   always@(posedge clk)begin
        |       if(inst == 32'b00000000000100000000000001110011)begin
        |           $display("ebreak hit!")
        |           $finish;
        |       end
        |   end
        |   
        |endmodule
        """.stripMargin
    )
}
