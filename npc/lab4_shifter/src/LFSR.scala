import chisel3._
import chisel3.util._


class LFSR extends Module{

    val io = IO(new Bundle {
        val Dout = Output(UInt(8.W))
    })


    val LFSR_Reg = RegInit("b00000001".U(8.W))

    val BitIn    = LFSR_Reg(4) ^ LFSR_Reg(3) ^ LFSR_Reg(2) ^ LFSR_Reg(0)


    LFSR_Reg := Cat(BitIn, LFSR_Reg(6,0))

    io.Dout := LFSR_Reg
}
