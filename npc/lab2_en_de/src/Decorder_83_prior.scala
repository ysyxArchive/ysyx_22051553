import chisel3._
import chisel3.util._

class Decorder_83_prior extends Module{
    val io = IO(new Bundle{
        val in          = Input(Vec(8,Bool()))
        val out         = Output(UInt(3.W))
        val display     = Output(Bool()) 
    })

    io.out := 0.U
    for( i <- 0 to 7 by 1) {   //低位优先
        when(io.in(i) === 1.B){
            io.out := i.U
        }
    }

    io.display := io.in.reduce(_ || _)
    
}

