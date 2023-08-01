package rv64

import chisel3._
import chisel3.util._
import Define._

class Soc extends Module{
    val io = IO(new Bundle{})

    val core = Module(new Core)
    val ram = Module(new Ram)

    core.io.ramio.dataOut := ram.io.dataOut
    ram.io.pc.bits := core.io.ramio.pc.bits - "h80000000".U(PC_LEN.W)
    ram.io.pc.valid := core.io.ramio.pc.valid
}
