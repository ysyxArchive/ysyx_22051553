package rv64

import chisel3._
import chisel3.util._
import Define._


class MemIO extends Bundle{
    val emio = Input(new EMRegIO)
    val mwio = Output(new MWRegIO)
}

class Mem extends Module{
    val io = IO(new MemIO)

    //内部逻辑


    //端口驱动
    io.mwio.alu_res := io.emio.alu_res    
    io.mwio.wb_type := io.emio.wb_type
    io.mwio.rd := io.emio.rd
}
