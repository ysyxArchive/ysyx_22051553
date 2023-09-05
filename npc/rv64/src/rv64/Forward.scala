package rv64

import chisel3._
import chisel3.util._
import Define._

class FwPipeIO extends Bundle{
    val reg_waddr = Input(UInt(REG_ADDR_LEN.W))
    val reg_wdata = Input(UInt(X_LEN.W))
    val reg_we    = Input(Bool())

    val csr_wdata = Input(UInt(X_LEN.W))
    val csr_wen = Input(Bool())
    val csr_waddr = Input(UInt(CSR_ADDR_LEN.W))
}

class FwDeIO extends Bundle{
    val reg1_raddr = Input(UInt(REG_ADDR_LEN.W))
    val reg2_raddr = Input(UInt(REG_ADDR_LEN.W))

    val fw_sel1    = Output(Bool())
    val fw_sel2    = Output(Bool())
    val fw_data1   = Output(UInt(X_LEN.W))
    val fw_data2   = Output(UInt(X_LEN.W))

    val csr_raddr = Input(UInt(CSR_ADDR_LEN.W))
    val csr_fw_sel = Output(Bool())
    val csr_fw_data = Output(UInt(X_LEN.W))
}


class FwIO extends Bundle{

    val fwde       = new FwDeIO

    val fwex       = new FwPipeIO
    val fwmem      = new FwPipeIO
    val fwwb       = new FwPipeIO


}

class Forward extends Module{
    val io = IO(new FwIO)

    val reg1_ex_hazard = (io.fwde.reg1_raddr =/= 0.U) && io.fwex.reg_we && (io.fwex.reg_waddr === io.fwde.reg1_raddr)
    val reg2_ex_hazard = (io.fwde.reg2_raddr =/= 0.U) && io.fwex.reg_we && (io.fwex.reg_waddr === io.fwde.reg2_raddr)

    val reg1_mem_hazard = (io.fwde.reg1_raddr =/= 0.U) && io.fwmem.reg_we && (io.fwmem.reg_waddr === io.fwde.reg1_raddr)
    val reg2_mem_hazard = (io.fwde.reg2_raddr =/= 0.U) && io.fwmem.reg_we && (io.fwmem.reg_waddr === io.fwde.reg2_raddr)

    val reg1_wb_hazard = (io.fwde.reg1_raddr =/= 0.U) && io.fwwb.reg_we && (io.fwwb.reg_waddr === io.fwde.reg1_raddr)
    val reg2_wb_hazard = (io.fwde.reg2_raddr =/= 0.U) && io.fwwb.reg_we && (io.fwwb.reg_waddr === io.fwde.reg2_raddr)

    io.fwde.fw_sel1 := reg1_ex_hazard | reg1_mem_hazard | reg1_wb_hazard
    io.fwde.fw_sel2 := reg2_ex_hazard | reg2_mem_hazard | reg2_wb_hazard

    io.fwde.fw_data1 := MuxCase(0.U,
        Seq(
            (reg1_ex_hazard) -> io.fwex.reg_wdata,
            (reg1_mem_hazard) -> io.fwmem.reg_wdata,
            (reg1_wb_hazard) -> io.fwwb.reg_wdata,
        )
    )
    io.fwde.fw_data2 := MuxCase(0.U,
        Seq(
            (reg2_ex_hazard) -> io.fwex.reg_wdata,
            (reg2_mem_hazard) -> io.fwmem.reg_wdata,
            (reg2_wb_hazard) -> io.fwwb.reg_wdata,
        )
    )


    val csr_ex_harzard = io.fwex.csr_wen && (io.fwex.csr_waddr === io.fwde.csr_raddr)
    val csr_mem_harzard = io.fwmem.csr_wen && (io.fwmem.csr_waddr === io.fwde.csr_raddr)
    val csr_wb_harzard = io.fwwb.csr_wen && (io.fwwb.csr_waddr === io.fwde.csr_raddr)

    io.fwde.csr_fw_sel := csr_ex_harzard | csr_mem_harzard | csr_wb_harzard

    io.fwde.csr_fw_data := MuxCase(0.U,
        Seq(
            (csr_ex_harzard) -> io.fwex.csr_wdata,
            (csr_mem_harzard) -> io.fwmem.csr_wdata,
            (csr_wb_harzard) -> io.fwwb.csr_wdata,
        )
    )


}
