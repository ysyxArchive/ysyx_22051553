import chisel3._

class Mux extends Module{
    val io = IO(new Bundle{
        val value0          = Input(UInt(3.W))
        val value1          = Input(UInt(3.W))
        val sel             = Input(Bool())
        val out             = Output(UInt(3.W)) 
    })

    when(io.sel === false.B) { io.out := io.value0 } .otherwise { io.out := io.value1 }
}

