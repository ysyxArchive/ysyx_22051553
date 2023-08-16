package rv64

import chisel3._
import chisel3.util._
import Define._

class RfDeIO extends Bundle{
    val reg1_raddr = Input(UInt(REG_ADDR_LEN.W))
    val reg2_raddr = Input(UInt(REG_ADDR_LEN.W))

    val reg1_rdata = Output(UInt(X_LEN.W))
    val reg2_rdata = Output(UInt(X_LEN.W))
}

class RfWbIO extends Bundle{
    val rd = Input(UInt(REG_ADDR_LEN.W))
    val reg_wen = Input(Bool())
    val reg_wdata = Input(UInt(X_LEN.W))
}


class RfIO extends Bundle{
    val RfDe = new RfDeIO
    val RfWb = new RfWbIO
}


class Regfile extends Module {

    val io = IO(new RfIO)

    val regs = Mem(32, UInt(X_LEN.W))

    // val interface = Module(new RegsInterface)

    //内部逻辑
    regs(0) := 0.U

    regs(io.RfWb.rd) := Mux(io.RfWb.reg_wen && (io.RfWb.rd =/= 0.U), 
        io.RfWb.reg_wdata, 
        regs(io.RfWb.rd)
    )

    
    

    //端口驱动
    io.RfDe.reg1_rdata := Mux(io.RfDe.reg1_raddr.orR, regs(io.RfDe.reg1_raddr), 0.U)
    io.RfDe.reg2_rdata := Mux(io.RfDe.reg2_raddr.orR, regs(io.RfDe.reg2_raddr), 0.U)

    
    

}
