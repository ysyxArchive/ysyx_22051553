package rv64

import chisel3._
import chisel3.util._
import Define._

class Soc extends Module{
    val io = IO(new Bundle{})

    val core = Module(new Core)
    // val ram = Module(new Ram)

    val tm = Module(new TempMem)
    
    tm.io.clk := clock
    tm.io.pc := core.io.pc
    tm.io.raddr := core.io.raddr
    tm.io.waddr := core.io.waddr
    tm.io.wdata := core.io.wdata
    tm.io.wmask := core.io.wmask

    core.io.inst := tm.io.inst
    core.io.rdata := tm.io.rdata
}
