package rv64

import chisel3._
import chisel3.util._
import Define._


class EMRegIO extends Bundle{

    val alu_res = UInt(X_LEN.W)
    val wb_type = UInt(2.W)
    val rd = UInt(REG_ADDR_LEN.W)

    val ld_type = UInt(3.W)
    val ld_addr_lowbit = UInt(3.W)
}
