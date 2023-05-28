import chisel3._
import chisel3.util._

class Seg extends Module{  //Module会有clk和rst  //共阳
    val io = IO(new Bundle {
        val data_in         = Input(UInt(4.W))
        val encode_out      = Output(UInt(7.W))
    })

    val mapArray = Seq(
        (io.data_in === 0.U) -> Reverse("b0000001".U),
        (io.data_in === 1.U) -> Reverse("b1001111".U),
        (io.data_in === 2.U) -> Reverse("b0010010".U),
        (io.data_in === 3.U) -> Reverse("b0000110".U),
        (io.data_in === 4.U) -> Reverse("b1001100".U),
        (io.data_in === 5.U) -> Reverse("b0100100".U),
        (io.data_in === 6.U) -> Reverse("b0100000".U),
        (io.data_in === 7.U) -> Reverse("b0001111".U),
        (io.data_in === 8.U) -> Reverse("b0000000".U),
        (io.data_in === 9.U) -> Reverse("b0000100".U)
    )

    io.encode_out := MuxCase(Reverse("b0000001".U),
        mapArray
    )

}
