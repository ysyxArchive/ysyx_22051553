package rv64

import chisel3._
import chisel3.util._
import Define._
import ControlUnit._


class MemIO extends Bundle{  //需要在这里落实lbu等，为了前向传递
    val emio = Input(new EMRegIO)
    val mwio = Output(new MWRegIO)

    val rdata = Flipped(ValidIO(UInt(X_LEN.W)))

    //Forward
    val fwmem = Flipped(new FwPipeIO)

    //CLINT
    val clmem = Flipped(new ClMemIO)
}

class Mem extends Module{
    val io = IO(new MemIO)


    //内部逻辑
    val get_value = Wire(UInt(X_LEN.W))   //CLINT数据或者内存数据
    get_value := Mux(io.clmem.Clrvalue.valid, io.clmem.Clrvalue.bits,
        Mux(io.rdata.valid, io.rdata.bits,
        0.U))


    val rvalue = Wire(UInt(X_LEN.W))                   //根据1.位宽进行扩展2.基地址偏移进行选择（总线上只能8字节对齐）
    dontTouch(rvalue)
    rvalue := MuxLookup(io.emio.ld_type, 0.U, 
        Seq(
            LD_LB -> MuxLookup(io.emio.ld_addr_lowbit, 0.U,
                Seq(
                    0.U -> Cat(Fill(56, get_value(7)), get_value(7,0)),
                    1.U -> Cat(Fill(56, get_value(15)), get_value(15,8)),
                    2.U -> Cat(Fill(56, get_value(23)), get_value(23,16)),
                    3.U -> Cat(Fill(56, get_value(31)), get_value(31,24)),
                    4.U -> Cat(Fill(56, get_value(39)), get_value(39,32)),
                    5.U -> Cat(Fill(56, get_value(47)), get_value(47,40)),
                    6.U -> Cat(Fill(56, get_value(55)), get_value(55,48)),
                    7.U -> Cat(Fill(56, get_value(63)), get_value(63,56)),
                )
            ),
            LD_LH -> MuxLookup(io.emio.ld_addr_lowbit, 0.U,
                Seq(
                    0.U -> Cat(Fill(48, get_value(15)), get_value(15,0)),
                    2.U -> Cat(Fill(48, get_value(31)), get_value(31,16)),
                    4.U -> Cat(Fill(48, get_value(47)), get_value(47,32)),
                    6.U -> Cat(Fill(48, get_value(63)), get_value(63,48)),
                )
            ),
            LD_LW -> MuxLookup(io.emio.ld_addr_lowbit, 0.U,
                Seq(
                    0.U -> Cat(Fill(32, get_value(31)), get_value(31,0)),
                    4.U -> Cat(Fill(32, get_value(63)), get_value(63,32)),
                )
            ),
            LD_LD -> get_value,
            LD_LBU -> MuxLookup(io.emio.ld_addr_lowbit, 0.U,
                Seq(
                    0.U -> Cat(Fill(56, 0.U), get_value(7,0)),
                    1.U -> Cat(Fill(56, 0.U), get_value(15,8)),
                    2.U -> Cat(Fill(56, 0.U), get_value(23,16)),
                    3.U -> Cat(Fill(56, 0.U), get_value(31,24)),
                    4.U -> Cat(Fill(56, 0.U), get_value(39,32)),
                    5.U -> Cat(Fill(56, 0.U), get_value(47,40)),
                    6.U -> Cat(Fill(56, 0.U), get_value(55,48)),
                    7.U -> Cat(Fill(56, 0.U), get_value(63,56)),
                )
            ),
            LD_LHU -> MuxLookup(io.emio.ld_addr_lowbit, 0.U,
                Seq(
                    0.U -> Cat(Fill(48, 0.U), get_value(15,0)),
                    2.U -> Cat(Fill(48, 0.U), get_value(31,16)),
                    4.U -> Cat(Fill(48, 0.U), get_value(47,32)),
                    6.U -> Cat(Fill(48, 0.U), get_value(63,48)),
                )
            ),
            LD_LWU -> MuxLookup(io.emio.ld_addr_lowbit, 0.U,
                Seq(
                    0.U -> Cat(Fill(32, 0.U), get_value(31,0)),
                    4.U -> Cat(Fill(32, 0.U), get_value(63,32)),
                )
            ),
        )
    )

    //端口驱动
    //mwio
    io.mwio.wb_type := io.emio.wb_type
    io.mwio.reg_waddr := io.emio.reg_waddr
    io.mwio.reg_wdata := MuxCase(0.U,
        Seq(
            (io.emio.wb_type === WB_ALU || io.emio.wb_type === WB_CSR) -> io.emio.reg_wdata,
            (io.emio.wb_type === WB_MEM) -> rvalue,
        )
    )

    io.mwio.csr_wdata := io.emio.csr_wdata
    io.mwio.csr_wen := io.emio.csr_wen
    io.mwio.csr_waddr := io.emio.csr_waddr

    io.mwio.has_inst := io.emio.has_inst
    //fw
    io.fwmem.reg_waddr := io.emio.reg_waddr
    io.fwmem.reg_we := io.emio.wb_type.orR
    io.fwmem.reg_wdata := MuxCase(0.U,
        Seq(
            (io.emio.wb_type === WB_ALU || io.emio.wb_type === WB_CSR) -> io.emio.reg_wdata,
            (io.emio.wb_type === WB_MEM) -> rvalue
        )                    
    )

    io.fwmem.csr_wdata := io.emio.csr_wdata
    io.fwmem.csr_wen := io.emio.csr_wen
    io.fwmem.csr_waddr := io.emio.csr_waddr

}
