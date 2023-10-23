import chisel3._
import chisel3.util._


class LFSR extends Module{

    val io = IO(new Bundle {
        val Dout = Output(UInt(8.W))
    })


    val LFSR_Reg = RegInit("b00000001".U(8.W))

    val BitIn    = LFSR_Reg(4) ^ LFSR_Reg(3) ^ LFSR_Reg(2) ^ LFSR_Reg(0)

    val count   = RegInit(0.U(23.W))

    when(count === 5000000.U){
        LFSR_Reg := Cat(BitIn, LFSR_Reg(7,1))
        count := 0.U
    }.otherwise{
        count := count + 1.U
    }

    io.Dout := LFSR_Reg
}
