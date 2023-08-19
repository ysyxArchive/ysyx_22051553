package rv64

import chisel3._
import chisel3.util._
import Define._
import ControlUnit._

class WbIO extends Bundle{
    val mwio = Input(new MWRegIO)

    val rfio = Flipped(new RfWbIO)
}

class Wb extends Module{

    val io = IO(new WbIO)

    //内部逻辑
    val mem_data = Wire(UInt(X_LEN.W))
    mem_data := MuxLookup(io.mwio.ld_type, 0.U, 
        Seq(                                        //尝试扩展方式
            LD_LB -> io.mwio.ld_data(7,0).asSInt,
            LD_LH -> io.mwio.ld_data(15,0).asSInt,
            LD_LW -> io.mwio.ld_data(31,0).asSInt,
            LD_LD -> io.mwio.ld_data,
            LD_LBU -> io.mwio.ld_data(7,0).zext,
            LD_LHU -> io.mwio.ld_data(15,0).zext,
            LD_LWU -> io.mwio.ld_data(31,0).zext,
        )
    )

    //端口驱动
    io.rfio.rd := io.mwio.rd
    io.rfio.reg_wen := io.mwio.wb_type.orR
    io.rfio.reg_wdata := MuxLookup(io.mwio.wb_type, 0.U,
        Seq(
            WB_ALU -> io.mwio.alu_res,
            WB_MEM -> mem_data,
        )
    )
}
