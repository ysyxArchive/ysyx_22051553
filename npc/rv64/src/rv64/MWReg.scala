package rv64

import chisel3._
import chisel3.util._
import Define._

class MWRegIO extends Bundle {

    val reg_wdata = UInt(X_LEN.W)
    val reg_waddr = UInt(REG_ADDR_LEN.W)
    val wb_type = UInt(2.W)

    val csr_wdata = UInt(X_LEN.W)
    val csr_wen = Bool()
    val csr_waddr = UInt(CSR_ADDR_LEN.W)
}
