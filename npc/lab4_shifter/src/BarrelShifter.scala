import chisel3._
import chisel3.util._

class BSIO extends Bundle{
    val Din         = Input(UInt(8.W))
    val shamt       = Input(UInt(3.W))
    val LR          = Input(UInt(1.W))
    val AL          = Input(UInt(1.W))
    val Dout        = Output(UInt(8.W))
}


class BarrelShifter extends Module{
  
    val io = IO(new BSIO)


    //------first stage
    val A = (UInt(8.W))     //用和不用Wire有什么区别
    
    A := MuxLookup(
        Cat(io.LR,io.shamt(0)),
        0.U,
        Seq(
            0.U -> io.Din,
            1.U -> Cat(io.AL,io.Din(7,1)),
            2.U -> io.Din,
            3.U -> Cat(io.Din(6,0),0.U(1.W))
        )
    )

    //------second stage
    val B = (UInt(8.W))     //用和不用Wire有什么区别

    B := MuxLookup(
        Cat(io.LR,io.shamt(1)),
        0.U,
        Seq(
            0.U -> A,
            1.U -> Cat(io.AL,io.AL,A(7,2)),
            2.U -> A,
            3.U -> Cat(A(5,0),0.U(2.W))
        )
    )

    //------third stage
    val C = (UInt(8.W))     //用和不用Wire有什么区别

    C := MuxLookup(
        Cat(io.LR,io.shamt(2)),
        0.U,
        Seq(
            0.U -> B,
            1.U -> Cat(io.AL,io.AL,io.AL,io.AL,B(7,4)),
            2.U -> B,
            3.U -> Cat(B(3,0),0.U(4.W))
        )
    )
    

    io.Dout := C
}
