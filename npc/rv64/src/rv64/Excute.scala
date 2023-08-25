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
}

class Excute extends Module{

    val io = IO(new ExcuteIO)

    val alu = Module(new Alu)

    //内部逻辑


    //驱动端口
    //顶层
    io.emio.alu_res := alu.io.result
    io.emio.wb_type := io.deio.wb_type
    io.emio.rd := io.deio.rd

    io.emio.ld_type := io.deio.ld_type
    io.emio.ld_addr_lowbit := io.raddr(2,0)  //是3位!!

    // io.jump_flag := (io.deio.branch_type).asBool && (alu.io.result).asBool
    io.jump_flag := (io.deio.branch_type).asBool && (alu.io.result).orR
    io.jump_pc := io.deio.branch_addr


    io.raddr := Mux(io.deio.ld_type =/= 0.U, alu.io.result, 0.U)
    
    io.waddr := Mux(io.deio.sd_type =/= 0.U, alu.io.result, 0.U)
    io.wdata := io.deio.reg2_rdata
    io.wmask := MuxLookup(io.deio.sd_type, 0.U,
        Seq(
            SD_SB -> "b00000001".U,
            SD_SH -> "b00000011".U,
            SD_SW -> "b00001111".U,
            SD_SD -> "b11111111".U
        )
    )

    io.fwex.reg_waddr := io.deio.rd
    io.fwex.reg_we := (io.deio.wb_type === WB_ALU)
    io.fwex.reg_wdata := alu.io.result

    //alu
    alu.io.op_a := io.deio.op_a
    alu.io.op_b := io.deio.op_b
    alu.io.alu_op := io.deio.alu_op
    alu.io.shamt := io.deio.shamt
    
    


}
