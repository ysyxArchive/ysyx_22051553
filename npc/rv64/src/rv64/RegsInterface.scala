package rv64

import chisel3._
import chisel3.util.HasBlackBoxInline
import Define._

class RegsInterface extends BlackBox with HasBlackBoxInline{
    val io = IO(new Bundle {
        val DPIc = Input(Vec(32,UInt(X_LEN.W)))
    })


    setInline("RegsInterface.v",
        """
        |import "DPI-C" function void get_gpr(uint64_t gpr0, uint64_t gpr1);
        |
        |module RegsInterface(input [63:0] DPIc [0:31]);
        |
        |   initial get_gpr(DPIc[0],DPIc[1]);
        |
        |
        |endmodule
        |
        |
        """.stripMargin
    )
}
