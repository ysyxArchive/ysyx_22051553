package rv64

import chisel3._
import chisel3.util._
import Define._
import ControlUnit._

class WbIO extends Bundle{
    val mwio = Input(new MWRegIO)

    val rfio = Flipped(new RfWbIO)

    val fwwb = Flipped(new FwPipeIO)
}

class Wb extends Module{

    val io = IO(new WbIO)

    //内部逻辑
   
    //端口驱动
    io.rfio.rd := io.mwio.rd
    io.rfio.reg_wen := io.mwio.wb_type.orR  //记录
    io.rfio.reg_wdata := io.mwio.wb_data

    io.fwwb.reg_waddr := io.mwio.rd
    io.fwwb.reg_we := io.mwio.wb_type.orR
    io.fwwb.reg_wdata := io.mwio.wb_data
}
