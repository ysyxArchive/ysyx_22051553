package rv64

import chisel3._
import chisel3.util._
import Define._

class MWRegIO extends Bundle {

    val wb_type = UInt(2.W)
    val wb_data = UInt(X_LEN.W)
    val rd = UInt(REG_ADDR_LEN.W)

}
