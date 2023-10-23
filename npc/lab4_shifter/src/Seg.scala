import chisel3._
import chisel3.util._

class Seg extends Module{  //Module会有clk和rst  //共阳
    val io = IO(new Bundle {
        val dataIn      = Input(Vec(2,UInt(4.W)))
        val encodeOut   = Output(Vec(2,UInt(7.W)))
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
            9.U -> ("b0000100".U(7.W))
        )

        val out = MuxLookup(data,"b0000001".U(7.W),MapArray)
        
        out
    }

    
    io.encodeOut(0) := genMapArray(io.dataIn(0))
    io.encodeOut(1) := genMapArray(io.dataIn(1))

}
