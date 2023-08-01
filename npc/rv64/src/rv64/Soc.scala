package rv64

import chisel3._
import chisel3.util._
import Define._

class Soc extends Module{
    val io = IO(new Bundle{})

    val core = Module(new Core)
    val ram = Module(new Ram)

    core.io.ramio <> ram.io
}
