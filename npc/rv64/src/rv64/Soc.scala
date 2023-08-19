package rv64

import chisel3._
import chisel3.util._
import Define._

class Soc extends Module{
    val io = IO(new Bundle{})

    val core = Module(new Core)
    // val ram = Module(new Ram)

    val tm = Module(new TempMem)
    
    tm.io <> core.io
}
