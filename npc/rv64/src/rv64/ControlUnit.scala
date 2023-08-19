package rv64

import chisel3._
import chisel3.util._
import Define._
import Alu._

object ControlUnit {    //译码特征, 类型、需要做哪些任务
    //jump_type
    val NO_JUMP = 0.U
    val JUMP_JAL = 1.U
    val JUMP_JALR= 2.U
    val JUMP_B = 3 .U

    //opa_type
    val A_ZERO = 0.U
    val A_PC = 1.U             //使用PC
    val A_REG1 = 2.U

    //opb_type
    val B_ZERO = 0.U
    val B_IMM = 1.U
    val B_REG2 = 2.U
    val B_CONS4 = 3.U

    //imm_type
    val IMM_DEFAULT = 0.U
    val IMM_I       = 0.U
    val IMM_U       = 1.U
    val IMM_J       = 2.U          //JAL
    val IMM_S       = 3.U

    //wb_type   --用什么结果写回
    val WB_NO   = 0.U   //不写回
    val WB_ALU  = 1.U
    val WB_MEM  = 2.U

    //sd_type
    val SD_NO = 0.U
    val SD_SB = 1.U
    val SD_SH = 2.U
    val SD_SW = 3.U
    val SD_SD = 4.U

    //ld_type
    val LD_NO = 0.U
    val LD_LB = 1.U
    val LD_LH = 2.U
    val LD_LW = 3.U
    val LD_LD = 4.U
    val LD_LBU = 5.U
    val LD_LHU = 6.U
    val LD_LWU = 7.U

    // 对照表
    val default = 

        List(NO_JUMP, A_ZERO, B_ZERO, IMM_DEFAULT, ALU_NO_OP, WB_NO, SD_NO, LD_NO)

    
    val map = Array(
        BitPat("b00000000000000000000000000010011") -> default,               //NOP
        ADDI -> List(NO_JUMP, A_REG1, B_IMM, IMM_I, ALU_ADD, WB_ALU, SD_NO, LD_NO),
        AUIPC -> List(NO_JUMP, A_PC, B_IMM, IMM_U, ALU_ADD, WB_ALU, SD_NO, LD_NO),
        LUI -> List(NO_JUMP, A_ZERO, B_IMM, IMM_U, ALU_ADD, WB_ALU, SD_NO, LD_NO),
        JAL -> List(JUMP_JAL, A_PC, B_CONS4, IMM_J, ALU_ADD, WB_ALU, SD_NO, LD_NO),
        JALR -> List(JUMP_JALR, A_PC, B_CONS4, IMM_I, ALU_ADD, WB_ALU, SD_NO, LD_NO),
        SD -> List(NO_JUMP, A_REG1, B_IMM, IMM_S, ALU_ADD, WB_MEM, SD_SD, LD_NO)
    )
}

class CUIO extends Bundle {
    val inst = Input(UInt(INST_LEN.W))

    val jump_type = Output(UInt(2.W))
    val opa_type = Output(UInt(2.W))
    val opb_type = Output(UInt(2.W))
    val imm_type = Output(UInt(2.W))
    val alu_op = Output(UInt(ALU_OP_LEN.W))
    val wb_type = Output(UInt(2.W))
    val sd_type = Output(UInt(3.W))
    val ld_type = Output(UInt(3.W))
}

class ControlUnit extends Module{
    val io = IO(new CUIO)

    val controlsig = ListLookup(io.inst, ControlUnit.default, ControlUnit.map)   //若写map会报错,专用于指令的

    
    io.jump_type    := controlsig(0)
    io.opa_type     := controlsig(1)
    io.opb_type     := controlsig(2)
    io.imm_type     := controlsig(3)
    io.alu_op       := controlsig(4)
    io.wb_type      := controlsig(5)
    io.sd_type      := controlsig(6)
    io.ld_type      := controlsig(7)

}
