package rv64

import chisel3._
import chisel3.util._
import Define._
import ControlUnit._

class WbIO extends Bundle{
    val mwio = Input(new MWRegIO)

    val rfio = Flipped(new RfWbIO)

    val fwwb = Flipped(new FwPipeIO)

    val csrs = Flipped(new CSRWbIO)

    val stall = Input(Bool()) //为了difftest,wb在stall时，不写寄存器
}

class Wb extends Module{

    val io = IO(new WbIO)

    //内部逻辑
    val has_inst = Wire(Bool())

    has_inst := io.mwio.has_inst
   
    //端口驱动
    //rfio
    io.rfio.rd := io.mwio.reg_waddr
    io.rfio.reg_wen := Mux(io.stall, 0.B, io.mwio.wb_type.orR)  //记录
    io.rfio.reg_wdata := io.mwio.reg_wdata


    //fw
    io.fwwb.reg_waddr := io.mwio.reg_waddr
    io.fwwb.reg_we := io.mwio.wb_type.orR
    io.fwwb.reg_wdata := io.mwio.reg_wdata

    io.fwwb.csr_wdata := io.mwio.csr_wdata
    io.fwwb.csr_wen := io.mwio.csr_wen
    io.fwwb.csr_waddr := io.mwio.csr_waddr

    //csrs
    io.csrs.rd := io.mwio.csr_waddr
    io.csrs.csr_wen := Mux(io.stall, 0.B, io.mwio.csr_wen)
    io.csrs.csr_wdata := io.mwio.csr_wdata
}
