package rv64

import chisel3._
import chisel3.util._
import Define._


class DERegIO extends Bundle {
    val op_a  = (UInt(X_LEN.W))
    val op_b  = (UInt(X_LEN.W))

    val rd    = (UInt(REG_ADDR_LEN.W))

    val alu_op = (UInt(ALU_OP_LEN.W))
    val wb_type = (UInt(2.W))

    val sd_type = (UInt(3.W))
    val reg2_rdata = (UInt(X_LEN.W))
    val ld_type = (UInt(3.W))
}
