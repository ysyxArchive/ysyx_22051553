import chisel3._
import chisel3.util._

object Shifter {
    val S_CLEAR = 0.U(3.W)
    val S_SET   = 1.U(3.W)
    val S_LR    = 2.U(3.W)
    val S_LL    = 3.U(3.W)
    val S_AR    = 4.U(3.W)
    val S_SP    = 5.U(3.W)
    val S_RR    = 6.U(3.W)
    val S_RL    = 7.U(3.W)
}


class ShifterIO extends Bundle{
    val Din         = Input(UInt(8.W))
    val Sbit        = Input(UInt(1.W))
    val Cbits       = Input(UInt(3.W))
    val Dout        = Output(UInt(8.W))
}


import Shifter._

class Shifter extends Module{

    val io = IO(new ShifterIO)

    val Dout = MuxLookup(
        io.Cbits,
        io.Din,
        Seq(
            S_CLEAR -> 0.U(8.W),
            S_SET -> "b11111111".U(8.W),
            S_LR -> Cat(0.U(1.W),io.Din(7,1)),
            S_LL -> Cat(io.Din(6,0),0.U(1.W)),
            S_AR -> Cat(io.Din(7),io.Din(7,1)),
            S_SP -> Cat(io.Din(6,0),io.Sbit),
            S_RR -> Cat(io.Din(0),io.Din(7,1)),
            S_RL -> Cat(io.Din(6,0),io.Din(7))
        )
    )
    

    io.Dout := Dout
}
