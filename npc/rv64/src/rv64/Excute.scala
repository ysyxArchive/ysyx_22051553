package rv64

import chisel3._
import chisel3.util._
import Define._
import ControlUnit._

class ExcuteIO extends Bundle{
    // val rd     = Input()  --来自de
    // val rd     = Output()  --去往em  用两个Bundle可以解决命名冲突
    val deio = Input(new DERegIO)
    val emio = Output(new EMRegIO)

    //to fc
    val jump_flag = Output(Bool())
    val jump_pc = Output(UInt(PC_LEN.W))

    //to TM
    val raddr = Output(UInt(X_LEN.W))
    val waddr = Output(UInt(X_LEN.W))
    val wdata = Output(UInt(X_LEN.W))
    val wmask = Output(UInt(8.W))

    //Forward
    val fwex = Flipped(new FwPipeIO)

    //to CLINT
    val clex = Flipped(new ClExIO)
}

class Excute extends Module{

    val io = IO(new ExcuteIO)

    val alu = Module(new Alu)

    //内部逻辑
    val CLINT_type = Wire(Bool())

    CLINT_type := (io.deio.ld_type =/= 0.U || io.deio.ld_type =/= 0.U) && 
        (alu.io.result >= "h02000000".U) && (alu.io.result <= "h0200bfff".U)
    //驱动端口
    //顶层
    //emio
    io.emio.reg_wdata := Mux(io.emio.csr_wen, io.deio.csr_t, alu.io.result)
    io.emio.wb_type := io.deio.wb_type
    io.emio.reg_waddr := io.deio.reg_waddr

    io.emio.ld_type := io.deio.ld_type
    io.emio.ld_addr_lowbit := io.raddr(2,0)  //是3位!!

    io.emio.csr_wdata := alu.io.result
    io.emio.csr_wen := io.deio.csr_wen
    io.emio.csr_waddr := io.deio.csr_waddr

    io.emio.has_inst := io.deio.has_inst

    //to fc
    // io.jump_flag := (io.deio.branch_type).asBool && (alu.io.result).asBool
    io.jump_flag := (io.deio.branch_type).asBool && (alu.io.result).orR
    io.jump_pc := io.deio.branch_addr

    //to TM
    io.raddr := Mux( (io.deio.ld_type =/= 0.U) && (CLINT_type === 0.B) , alu.io.result, 0.U)
    
    io.waddr := Mux((io.deio.sd_type =/= 0.U) && (CLINT_type === 0.B) , alu.io.result, 0.U)
    io.wdata := io.deio.reg2_rdata
    io.wmask := MuxLookup(io.deio.sd_type, 0.U,
        Seq(
            SD_SB -> "b00000001".U,
            SD_SH -> "b00000011".U,
            SD_SW -> "b00001111".U,
            SD_SD -> "b11111111".U
        )
    )

    //clex
    io.clex.valid := CLINT_type
    io.clex.ld_type := io.deio.ld_type
    io.clex.raddr := alu.io.result

    io.clex.sd_type := io.deio.sd_type
    io.clex.waddr := alu.io.result
    io.clex.wmask := MuxLookup(io.deio.sd_type, 0.U,
        Seq(
            SD_SB -> "b00000001".U,
            SD_SH -> "b00000011".U,
            SD_SW -> "b00001111".U,
            SD_SD -> "b11111111".U
        )
    )
    io.clex.wdata := io.deio.reg2_rdata

    //fw
    io.fwex.reg_waddr := io.deio.reg_waddr
    io.fwex.reg_we := (io.deio.wb_type === WB_ALU || io.deio.wb_type === WB_CSR)
    io.fwex.reg_wdata := MuxCase(0.U,
        Seq(
            (io.deio.wb_type === WB_ALU) -> alu.io.result,
            (io.deio.wb_type === WB_CSR) -> io.deio.csr_t
        )
    )

    io.fwex.csr_wdata := alu.io.result
    io.fwex.csr_wen := io.emio.csr_wen
    io.fwex.csr_waddr := io.emio.csr_waddr

    //alu
    alu.io.op_a := io.deio.op_a
    alu.io.op_b := io.deio.op_b
    alu.io.alu_op := io.deio.alu_op
    alu.io.shamt := io.deio.shamt

}
