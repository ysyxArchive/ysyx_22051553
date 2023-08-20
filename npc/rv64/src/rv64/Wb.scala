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
    val mem_data = Wire(UInt(X_LEN.W))                 //根据1.位宽进行扩展2.基地址偏移进行选择（总线上只能8字节对齐）
    mem_data := MuxLookup(io.mwio.ld_type, 0.U, 
        Seq(
            LD_LB -> MuxLookup(io.mwio.ld_addr_lowbit, 0.U,
                Seq(
                    0.U -> Cat(Fill(56, io.mwio.ld_data(7)), io.mwio.ld_data(7,0)),
                    1.U -> Cat(Fill(56, io.mwio.ld_data(15)), io.mwio.ld_data(15,8)),
                    2.U -> Cat(Fill(56, io.mwio.ld_data(23)), io.mwio.ld_data(23,16)),
                    3.U -> Cat(Fill(56, io.mwio.ld_data(31)), io.mwio.ld_data(31,24)),
                    4.U -> Cat(Fill(56, io.mwio.ld_data(39)), io.mwio.ld_data(39,32)),
                    5.U -> Cat(Fill(56, io.mwio.ld_data(47)), io.mwio.ld_data(47,40)),
                    6.U -> Cat(Fill(56, io.mwio.ld_data(55)), io.mwio.ld_data(55,48)),
                    7.U -> Cat(Fill(56, io.mwio.ld_data(63)), io.mwio.ld_data(63,56)),
                )
            ),
            LD_LH -> MuxLookup(io.mwio.ld_addr_lowbit, 0.U,
                Seq(
                    0.U -> Cat(Fill(48, io.mwio.ld_data(15)), io.mwio.ld_data(15,0)),
                    2.U -> Cat(Fill(48, io.mwio.ld_data(31)), io.mwio.ld_data(31,16)),
                    4.U -> Cat(Fill(48, io.mwio.ld_data(47)), io.mwio.ld_data(47,32)),
                    6.U -> Cat(Fill(48, io.mwio.ld_data(63)), io.mwio.ld_data(63,48)),
                )
            ),
            LD_LW -> MuxLookup(io.mwio.ld_addr_lowbit, 0.U,
                Seq(
                    0.U -> Cat(Fill(32, io.mwio.ld_data(31)), io.mwio.ld_data(31,0)),
                    4.U -> Cat(Fill(32, io.mwio.ld_data(63)), io.mwio.ld_data(63,32)),
                )
            ),
            LD_LD -> io.mwio.ld_data,
            LD_LBU -> MuxLookup(io.mwio.ld_addr_lowbit, 0.U,
                Seq(
                    0.U -> Cat(Fill(56, 0.U), io.mwio.ld_data(7,0)),
                    1.U -> Cat(Fill(56, 0.U), io.mwio.ld_data(15,8)),
                    2.U -> Cat(Fill(56, 0.U), io.mwio.ld_data(23,16)),
                    3.U -> Cat(Fill(56, 0.U), io.mwio.ld_data(31,24)),
                    4.U -> Cat(Fill(56, 0.U), io.mwio.ld_data(39,32)),
                    5.U -> Cat(Fill(56, 0.U), io.mwio.ld_data(47,40)),
                    6.U -> Cat(Fill(56, 0.U), io.mwio.ld_data(55,48)),
                    7.U -> Cat(Fill(56, 0.U), io.mwio.ld_data(63,56)),
                )
            ),
            LD_LHU -> MuxLookup(io.mwio.ld_addr_lowbit, 0.U,
                Seq(
                    0.U -> Cat(Fill(48, 0.U), io.mwio.ld_data(15,0)),
                    2.U -> Cat(Fill(48, 0.U), io.mwio.ld_data(31,16)),
                    4.U -> Cat(Fill(48, 0.U), io.mwio.ld_data(47,32)),
                    6.U -> Cat(Fill(48, 0.U), io.mwio.ld_data(63,48)),
                )
            ),
            LD_LWU -> MuxLookup(io.mwio.ld_addr_lowbit, 0.U,
                Seq(
                    0.U -> Cat(Fill(32, 0.U), io.mwio.ld_data(31,0)),
                    4.U -> Cat(Fill(32, 0.U), io.mwio.ld_data(63,32)),
                )
            ),
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
