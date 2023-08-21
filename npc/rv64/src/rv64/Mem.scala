package rv64

import chisel3._
import chisel3.util._
import Define._
import ControlUnit._


class MemIO extends Bundle{  //需要在这里落实lbu等，为了前向传递
    val emio = Input(new EMRegIO)
    val mwio = Output(new MWRegIO)

    val rdata = Input(UInt(X_LEN.W))

    //Forward
    val fwmem = Flipped(new FwPipeIO)
}

class Mem extends Module{
    val io = IO(new MemIO)

    //内部逻辑
    val rvalue = Wire(UInt(X_LEN.W))                   //根据1.位宽进行扩展2.基地址偏移进行选择（总线上只能8字节对齐）
    rvalue := MuxLookup(io.emio.ld_type, 0.U, 
        Seq(
            LD_LB -> MuxLookup(io.emio.ld_addr_lowbit, 0.U,
                Seq(
                    0.U -> Cat(Fill(56, io.rdata(7)), io.rdata(7,0)),
                    1.U -> Cat(Fill(56, io.rdata(15)), io.rdata(15,8)),
                    2.U -> Cat(Fill(56, io.rdata(23)), io.rdata(23,16)),
                    3.U -> Cat(Fill(56, io.rdata(31)), io.rdata(31,24)),
                    4.U -> Cat(Fill(56, io.rdata(39)), io.rdata(39,32)),
                    5.U -> Cat(Fill(56, io.rdata(47)), io.rdata(47,40)),
                    6.U -> Cat(Fill(56, io.rdata(55)), io.rdata(55,48)),
                    7.U -> Cat(Fill(56, io.rdata(63)), io.rdata(63,56)),
                )
            ),
            LD_LH -> MuxLookup(io.emio.ld_addr_lowbit, 0.U,
                Seq(
                    0.U -> Cat(Fill(48, io.rdata(15)), io.rdata(15,0)),
                    2.U -> Cat(Fill(48, io.rdata(31)), io.rdata(31,16)),
                    4.U -> Cat(Fill(48, io.rdata(47)), io.rdata(47,32)),
                    6.U -> Cat(Fill(48, io.rdata(63)), io.rdata(63,48)),
                )
            ),
            LD_LW -> MuxLookup(io.emio.ld_addr_lowbit, 0.U,
                Seq(
                    0.U -> Cat(Fill(32, io.rdata(31)), io.rdata(31,0)),
                    4.U -> Cat(Fill(32, io.rdata(63)), io.rdata(63,32)),
                )
            ),
            LD_LD -> io.rdata,
            LD_LBU -> MuxLookup(io.emio.ld_addr_lowbit, 0.U,
                Seq(
                    0.U -> Cat(Fill(56, 0.U), io.rdata(7,0)),
                    1.U -> Cat(Fill(56, 0.U), io.rdata(15,8)),
                    2.U -> Cat(Fill(56, 0.U), io.rdata(23,16)),
                    3.U -> Cat(Fill(56, 0.U), io.rdata(31,24)),
                    4.U -> Cat(Fill(56, 0.U), io.rdata(39,32)),
                    5.U -> Cat(Fill(56, 0.U), io.rdata(47,40)),
                    6.U -> Cat(Fill(56, 0.U), io.rdata(55,48)),
                    7.U -> Cat(Fill(56, 0.U), io.rdata(63,56)),
                )
            ),
            LD_LHU -> MuxLookup(io.emio.ld_addr_lowbit, 0.U,
                Seq(
                    0.U -> Cat(Fill(48, 0.U), io.rdata(15,0)),
                    2.U -> Cat(Fill(48, 0.U), io.rdata(31,16)),
                    4.U -> Cat(Fill(48, 0.U), io.rdata(47,32)),
                    6.U -> Cat(Fill(48, 0.U), io.rdata(63,48)),
                )
            ),
            LD_LWU -> MuxLookup(io.emio.ld_addr_lowbit, 0.U,
                Seq(
                    0.U -> Cat(Fill(32, 0.U), io.rdata(31,0)),
                    4.U -> Cat(Fill(32, 0.U), io.rdata(63,32)),
                )
            ),
        )
    )

    //端口驱动
    io.mwio.wb_type := io.emio.wb_type
    io.mwio.rd := io.emio.rd
    io.mwio.wb_data := MuxCase(0.U,
        Seq(
            (io.emio.wb_type === WB_ALU) -> io.emio.alu_res,
            (io.emio.wb_type === WB_MEM) -> rvalue,
        )
    )


    io.fwmem.reg_waddr := io.emio.rd
    io.fwmem.reg_we := (io.emio.wb_type === WB_ALU || io.emio.wb_type === WB_MEM)
    io.fwmem.reg_wdata := MuxCase(0.U,
        Seq(
            (io.emio.wb_type === WB_ALU) -> io.emio.alu_res,
            (io.emio.wb_type === WB_MEM) -> io.rdata
        )                    
    )

}
