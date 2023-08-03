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
        |import "DPI-C" function void get_gpr(uint64_t *gpr);
        |
        |module RegsInterface(input [64:0] DPic [0:31]);
        |
        |   initial get_gpr(DPic);
        |
        |
        |endmodule
        |
        |
        """.stripMargin
    )
}
