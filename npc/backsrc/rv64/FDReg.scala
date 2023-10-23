package rv64

import chisel3._
import chisel3.util._
import Define._

class FDRegIO extends Bundle {
    val pc = UInt(PC_LEN.W)
}

