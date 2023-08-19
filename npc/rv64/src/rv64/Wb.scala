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
        Seq(
            LD_LB -> Cat(Fill(56, io.mwio.ld_data(7)), io.mwio.ld_data(6,0)),
            LD_LH -> Cat(Fill(48, io.mwio.ld_data(15)), io.mwio.ld_data(15,0)),
            LD_LW -> Cat(Fill(56, io.mwio.ld_data(31)), io.mwio.ld_data(31,0)),
            LD_LD -> io.mwio.ld_data,
            LD_LBU -> Cat(Fill(56, 0.U), io.mwio.ld_data(6,0)),
            LD_LHU -> Cat(Fill(48, 0.U), io.mwio.ld_data(15,0)),
            LD_LWU -> Cat(Fill(56, 0.U), io.mwio.ld_data(31,0)),
        )
    )



    //端口驱动
    io.rfio.rd := io.mwio.rd
    io.rfio.reg_wen := io.mwio.wb_type.orR
    io.rfio.reg_wdata := MuxLookup(io.mwio.wb_type, 0.U,
        Seq(
            WB_ALU -> io.mwio.alu_res,
            WB_MEM -> io.mwio.ld_data,
        )
    )
}
