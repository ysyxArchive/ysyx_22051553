package rv64

import chisel3._
import chisel3.util._
import Define._


class EMRegIO extends Bundle{

    val reg_wdata = UInt(X_LEN.W)
    val reg_waddr = UInt(REG_ADDR_LEN.W)
    val wb_type = UInt(2.W)

    val ld_type = UInt(3.W)
    val ld_addr_lowbit = UInt(3.W)

    val csr_wdata = UInt(X_LEN.W)
    val csr_wen = Bool()
    val csr_waddr = UInt(CSR_ADDR_LEN.W)

    val has_inst = Bool() //存在正常指令 --在异常跳转时，需要前面的正常指令执行完
}
