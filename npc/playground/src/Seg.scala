import chisel3._
import chisel3.util._

class Seg extends Module{  //Module会有clk和rst  //共阳
    val io = IO(new Bundle {
        val dataIn      = Input(Vec(4,UInt(4.W)))
        val encodeOut   = Output(Vec(4,UInt(7.W)))
    })

    def genMapArray(data: UInt):UInt = {
        val MapArray = Seq(
            (data === 0.U) -> ("b0000001".U(7.W)),   //"b abcdefg"
            (data === 1.U) -> ("b1001111".U(7.W)),
            (data === 2.U) -> ("b0010010".U(7.W)),
            (data === 3.U) -> ("b0000110".U(7.W)),
            (data === 4.U) -> ("b1001100".U(7.W)),
            (data === 5.U) -> ("b0100100".U(7.W)),
            (data === 6.U) -> ("b0100000".U(7.W)),
            (data === 7.U) -> ("b0001111".U(7.W)),
            (data === 8.U) -> ("b0000000".U(7.W)),
            (data === 9.U) -> ("b0000100".U(7.W))
        )

        val out = MapArray.collectFirst{case (cond, value) if (cond == true.B) => value}.getOrElse("b0000001".U(7.W))
        //模式匹配 -- cond只能为Boolean类型
        out
    }

    // val mapArray = Seq(
    //     (io.data_in === 0.U) -> ("b0000001".U),   //"b abcdefg"
    //     (io.data_in === 1.U) -> ("b1001111".U),
    //     (io.data_in === 2.U) -> ("b0010010".U),
    //     (io.data_in === 3.U) -> ("b0000110".U),
    //     (io.data_in === 4.U) -> ("b1001100".U),
    //     (io.data_in === 5.U) -> ("b0100100".U),
    //     (io.data_in === 6.U) -> ("b0100000".U),
    //     (io.data_in === 7.U) -> ("b0001111".U),
    //     (io.data_in === 8.U) -> ("b0000000".U),
    //     (io.data_in === 9.U) -> ("b0000100".U)
    // )

    io.encodeOut(0) := genMapArray(io.dataIn(0))
    io.encodeOut(1) := genMapArray(io.dataIn(1))
    io.encodeOut(2) := genMapArray(io.dataIn(2))
    io.encodeOut(3) := genMapArray(io.dataIn(3))

}
