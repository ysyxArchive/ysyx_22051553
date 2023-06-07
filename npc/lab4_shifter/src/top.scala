import chisel3._
import chisel3.util._

class top extends Module{

    val io = IO(new Bundle {
        val Segout1 = Output(UInt(7.W))
        val Segout0 = Output(UInt(7.W))
    })

    val LFSR = Module(new LFSR)

    val Seg = Module(new Seg)
    Seg.io.dataIn(1) := LFSR.io.Dout(7,4)
    Seg.io.dataIn(0) := LFSR.io.Dout(3,0)

    io.Segout1 := Seg.io.encodeOut(1)
    io.Segout0 := Seg.io.encodeOut(0)

}
