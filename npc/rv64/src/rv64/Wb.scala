package rv64

import chisel3._
import chisel3.util._
import Define._

class WbIO extends Bundle{
    val mwio = Input(new MWRegIO)

    val rfio = Flipped(new RfWbIO)
}

class Wb extends Module{

    val io = IO(new WbIO)

    //内部逻辑

    //端口驱动
    io.rfio.rd := io.mwio.rd
    io.rfio.reg_wen := io.mwio.wb_type.orR
    io.rfio.reg_wdata := io.mwio.alu_res
}
