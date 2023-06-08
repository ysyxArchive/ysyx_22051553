import chisel3._
import chisel3.util._

class Seg extends Module{  //Module会有clk和rst  //共阳
    val io = IO(new Bundle {
        val dataIn      = Input(Vec(6,UInt(4.W)))
        val encodeOut   = Output(Vec(6,UInt(7.W)))
    })

    def genMapArray(data: UInt):UInt = {
        val MapArray = Seq(
            0.U -> ("b0000001".U(7.W)),   //"b abcdefg"
            1.U -> ("b1001111".U(7.W)),
            2.U -> ("b0010010".U(7.W)),
            3.U -> ("b0000110".U(7.W)),
            4.U -> ("b1001100".U(7.W)),
            5.U -> ("b0100100".U(7.W)),
            6.U -> ("b0100000".U(7.W)),
            7.U -> ("b0001111".U(7.W)),
            8.U -> ("b0000000".U(7.W)),
            9.U -> ("b0000100".U(7.W)),
            10.U-> ("b0001000".U(7.W)),
            11.U-> ("b1100000".U(7.W)),
            12.U-> ("b0110001".U(7.W)),
            13.U-> ("b1000010".U(7.W)),
            14.U-> ("b0110000".U(7.W)),
            15.U-> ("b0111000".U(7.W))
        )

        val out = MuxLookup(data,"b0000001".U(7.W),MapArray)
        
        out
    }


    io.encodeOut(0) := genMapArray(io.dataIn(0))
    io.encodeOut(1) := genMapArray(io.dataIn(1))
    io.encodeOut(2) := genMapArray(io.dataIn(2))
    io.encodeOut(3) := genMapArray(io.dataIn(3))
    io.encodeOut(4) := genMapArray(io.dataIn(4))
    io.encodeOut(5) := genMapArray(io.dataIn(5))

}
