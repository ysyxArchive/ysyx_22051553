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

    //wb_type   --用什么结果写回
    val WB_NO   = 0.U   //不写回
    val WB_ALU  = 1.U



    // 对照表
    val default = 

        List(NO_JUMP, A_ZERO, B_ZERO, IMM_DEFAULT, ALU_NO_OP, WB_NO)

    
    val map = Array(
        BitPat("b00000000000000000000000000010011") -> default,               //NOP
        ADDI -> List(NO_JUMP, A_REG1, B_IMM, IMM_I, ALU_ADD, WB_ALU),
        AUIPC -> List(NO_JUMP, A_PC, B_IMM, IMM_U, ALU_ADD, WB_ALU),
        LUI -> List(NO_JUMP, A_ZERO, B_IMM, IMM_U, ALU_ADD, WB_ALU),
        JAL -> List(JUMP_JAL, A_PC, B_CONS4, IMM_J, ALU_ADD, WB_ALU)

    )
}

class CUIO extends Bundle {
    val inst = Input(UInt(INST_LEN.W))

    val addr_type = Output(UInt(2.W))
    val opa_type = Output(UInt(1.W))
    val opb_type = Output(UInt(1.W))
    val imm_type = Output(UInt(2.W))
    val alu_op = Output(UInt(ALU_OP_LEN.W))
    val wb_type = Output(UInt(2.W))
}

class ControlUnit extends Module{
    val io = IO(new CUIO)

    val controlsig = ListLookup(io.inst, ControlUnit.default, ControlUnit.map)   //若写map会报错,专用于指令的

    
    io.addr_type    := controlsig(0)
    io.opa_type         := controlsig(1)
    io.opb_type         := controlsig(2)
    io.imm_type     := controlsig(3)
    io.alu_op       := controlsig(4)
    io.wb_type      := controlsig(5)
}
