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

    //branch_type
    val NO_BR = 0.U
    val BR_ANY = 1.U

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
    val IMM_B       = 4.U

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

        List(NO_JUMP, NO_BR, A_ZERO, B_ZERO, IMM_DEFAULT, ALU_NO_OP, WB_NO, SD_NO, LD_NO)

    
    val map = Array(
        BitPat("b00000000000000000000000000010011") -> default,               //NOP
        AUIPC -> List(NO_JUMP, NO_BR, A_PC, B_IMM, IMM_U, ALU_ADD, WB_ALU, SD_NO, LD_NO),
        LUI -> List(NO_JUMP, NO_BR, A_ZERO, B_IMM, IMM_U, ALU_ADD, WB_ALU, SD_NO, LD_NO),
        JAL -> List(JUMP_JAL, NO_BR, A_PC, B_CONS4, IMM_J, ALU_ADD, WB_ALU, SD_NO, LD_NO),
        JALR -> List(JUMP_JALR, NO_BR, A_PC, B_CONS4, IMM_I, ALU_ADD, WB_ALU, SD_NO, LD_NO),

        BEQ -> List(NO_JUMP, BR_ANY, A_REG1, B_REG2, IMM_DEFAULT, ALU_EQU, WB_NO, SD_NO, LD_NO),
        BNE -> List(NO_JUMP, BR_ANY, A_REG1, B_REG2, IMM_DEFAULT, ALU_NEQ, WB_NO, SD_NO, LD_NO),
        BLT -> List(NO_JUMP, BR_ANY, A_REG1, B_REG2, IMM_DEFAULT, ALU_SLT, WB_NO, SD_NO, LD_NO),
        BGE -> List(NO_JUMP, BR_ANY, A_REG1, B_REG2, IMM_DEFAULT, ALU_SGE, WB_NO, SD_NO, LD_NO),
        BLTU -> List(NO_JUMP, BR_ANY, A_REG1, B_REG2, IMM_DEFAULT, ALU_SLTU, WB_NO, SD_NO, LD_NO),
        BGEU -> List(NO_JUMP, BR_ANY, A_REG1, B_REG2, IMM_DEFAULT, ALU_SGEU, WB_NO, SD_NO, LD_NO),

        LB -> List(NO_JUMP, NO_BR, A_REG1, B_IMM, IMM_I, ALU_ADD, WB_MEM, SD_SD, LD_LB),
        LH -> List(NO_JUMP, NO_BR, A_REG1, B_IMM, IMM_I, ALU_ADD, WB_MEM, SD_SD, LD_LH),
        LW -> List(NO_JUMP, NO_BR, A_REG1, B_IMM, IMM_I, ALU_ADD, WB_MEM, SD_SD, LD_LW),
        LBU -> List(NO_JUMP, NO_BR, A_REG1, B_IMM, IMM_I, ALU_ADD, WB_MEM, SD_SD, LD_LBU),
        LHU -> List(NO_JUMP, NO_BR, A_REG1, B_IMM, IMM_I, ALU_ADD, WB_MEM, SD_SD, LD_LHU),
        LWU -> List(NO_JUMP, NO_BR, A_REG1, B_IMM, IMM_I, ALU_ADD, WB_MEM, SD_SD, LD_LWU),
        LD -> List(NO_JUMP, NO_BR, A_REG1, B_IMM, IMM_I, ALU_ADD, WB_MEM, SD_SD, LD_LD),

        SB -> List(NO_JUMP, NO_BR, A_REG1, B_IMM, IMM_S, ALU_ADD, WB_NO, SD_SB, LD_NO),
        SH -> List(NO_JUMP, NO_BR, A_REG1, B_IMM, IMM_S, ALU_ADD, WB_NO, SD_SH, LD_NO),
        SW -> List(NO_JUMP, NO_BR, A_REG1, B_IMM, IMM_S, ALU_ADD, WB_NO, SD_SW, LD_NO),
        SD -> List(NO_JUMP, NO_BR, A_REG1, B_IMM, IMM_S, ALU_ADD, WB_NO, SD_SD, LD_NO),

        ADDI -> List(NO_JUMP, NO_BR, A_REG1, B_IMM, IMM_I, ALU_ADD, WB_ALU, SD_NO, LD_NO),
        SLTI -> List(NO_JUMP, NO_BR, A_REG1, B_IMM, IMM_I, ALU_SLT, WB_ALU, SD_NO, LD_NO),
        SLTIU -> List(NO_JUMP, NO_BR, A_REG1, B_IMM, IMM_I, ALU_SLTU, WB_ALU, SD_NO, LD_NO),
        XORI -> List(NO_JUMP, NO_BR, A_REG1, B_IMM, IMM_I, ALU_XOR, WB_ALU, SD_NO, LD_NO),
        ORI -> List(NO_JUMP, NO_BR, A_REG1, B_IMM, IMM_I, ALU_OR, WB_ALU, SD_NO, LD_NO),
        ANDI -> List(NO_JUMP, NO_BR, A_REG1, B_IMM, IMM_I, ALU_AND, WB_ALU, SD_NO, LD_NO),

        SLLI -> List(NO_JUMP, NO_BR, A_REG1, B_IMM, IMM_I, ALU_SLLI, WB_ALU, SD_NO, LD_NO),
        SRLI -> List(NO_JUMP, NO_BR, A_REG1, B_IMM, IMM_I, ALU_SRLI, WB_ALU, SD_NO, LD_NO),
        SRAI -> List(NO_JUMP, NO_BR, A_REG1, B_IMM, IMM_I, ALU_SRAI, WB_ALU, SD_NO, LD_NO),

        ADD -> List(NO_JUMP, NO_BR, A_REG1, B_REG2, IMM_DEFAULT, ALU_ADD, WB_ALU, SD_NO, LD_NO),
        SUB -> List(NO_JUMP, NO_BR, A_REG1, B_REG2, IMM_DEFAULT, ALU_SUB, WB_ALU, SD_NO, LD_NO),
        SLL -> List(NO_JUMP, NO_BR, A_REG1, B_REG2, IMM_DEFAULT, ALU_SLL, WB_ALU, SD_NO, LD_NO),
        SLT -> List(NO_JUMP, NO_BR, A_REG1, B_REG2, IMM_DEFAULT, ALU_SLT, WB_ALU, SD_NO, LD_NO),
        SLTU -> List(NO_JUMP, NO_BR, A_REG1, B_REG2, IMM_DEFAULT, ALU_SLTU, WB_ALU, SD_NO, LD_NO),
        XOR -> List(NO_JUMP, NO_BR, A_REG1, B_REG2, IMM_DEFAULT, ALU_XOR, WB_ALU, SD_NO, LD_NO),
        SRL -> List(NO_JUMP, NO_BR, A_REG1, B_REG2, IMM_DEFAULT, ALU_SRL, WB_ALU, SD_NO, LD_NO),
        SRA -> List(NO_JUMP, NO_BR, A_REG1, B_REG2, IMM_DEFAULT, ALU_SRA, WB_ALU, SD_NO, LD_NO),
        OR -> List(NO_JUMP, NO_BR, A_REG1, B_REG2, IMM_DEFAULT, ALU_OR, WB_ALU, SD_NO, LD_NO),
        AND -> List(NO_JUMP, NO_BR, A_REG1, B_REG2, IMM_DEFAULT, ALU_AND, WB_ALU, SD_NO, LD_NO),

        MUL -> List(NO_JUMP, NO_BR, A_REG1, B_REG2, IMM_DEFAULT, ALU_MUL, WB_ALU, SD_NO, LD_NO),
        MULH -> List(NO_JUMP, NO_BR, A_REG1, B_REG2, IMM_DEFAULT, ALU_MULH, WB_ALU, SD_NO, LD_NO),
        MULHSU -> List(NO_JUMP, NO_BR, A_REG1, B_REG2, IMM_DEFAULT, ALU_MULHSU, WB_ALU, SD_NO, LD_NO),
        MULHU -> List(NO_JUMP, NO_BR, A_REG1, B_REG2, IMM_DEFAULT, ALU_MULHU, WB_ALU, SD_NO, LD_NO),
        DIV -> List(NO_JUMP, NO_BR, A_REG1, B_REG2, IMM_DEFAULT, ALU_DIV, WB_ALU, SD_NO, LD_NO),
        DIVU -> List(NO_JUMP, NO_BR, A_REG1, B_REG2, IMM_DEFAULT, ALU_DIVU, WB_ALU, SD_NO, LD_NO),
        REM -> List(NO_JUMP, NO_BR, A_REG1, B_REG2, IMM_DEFAULT, ALU_REM, WB_ALU, SD_NO, LD_NO),
        REMU -> List(NO_JUMP, NO_BR, A_REG1, B_REG2, IMM_DEFAULT, ALU_REMU, WB_ALU, SD_NO, LD_NO),

        ADDIW -> List(NO_JUMP, NO_BR, A_REG1, B_IMM, IMM_I, ALU_ADDIW, WB_ALU, SD_NO, LD_NO),
        SLLIW -> List(NO_JUMP, NO_BR, A_REG1, B_IMM, IMM_I, ALU_SLLIW, WB_ALU, SD_NO, LD_NO),
        SRLIW -> List(NO_JUMP, NO_BR, A_REG1, B_IMM, IMM_I, ALU_SRLIW, WB_ALU, SD_NO, LD_NO),
        SRAIW -> List(NO_JUMP, NO_BR, A_REG1, B_IMM, IMM_I, ALU_SRAIW, WB_ALU, SD_NO, LD_NO),

        ADDW -> List(NO_JUMP, NO_BR, A_REG1, B_REG2, IMM_DEFAULT, ALU_ADDW, WB_ALU, SD_NO, LD_NO),
        SUBW -> List(NO_JUMP, NO_BR, A_REG1, B_REG2, IMM_DEFAULT, ALU_SUBW, WB_ALU, SD_NO, LD_NO),
        SLLW -> List(NO_JUMP, NO_BR, A_REG1, B_REG2, IMM_DEFAULT, ALU_SLLW, WB_ALU, SD_NO, LD_NO),
        SRLW -> List(NO_JUMP, NO_BR, A_REG1, B_REG2, IMM_DEFAULT, ALU_SRLW, WB_ALU, SD_NO, LD_NO),
        SRAW -> List(NO_JUMP, NO_BR, A_REG1, B_REG2, IMM_DEFAULT, ALU_SRAW, WB_ALU, SD_NO, LD_NO),        

        MULW -> List(NO_JUMP, NO_BR, A_REG1, B_REG2, IMM_DEFAULT, ALU_MULW, WB_ALU, SD_NO, LD_NO),
        DIVW -> List(NO_JUMP, NO_BR, A_REG1, B_REG2, IMM_DEFAULT, ALU_DIVW, WB_ALU, SD_NO, LD_NO),
        DIVUW -> List(NO_JUMP, NO_BR, A_REG1, B_REG2, IMM_DEFAULT, ALU_DIVUW, WB_ALU, SD_NO, LD_NO),
        REMW -> List(NO_JUMP, NO_BR, A_REG1, B_REG2, IMM_DEFAULT, ALU_REMW, WB_ALU, SD_NO, LD_NO),
        REMUW -> List(NO_JUMP, NO_BR, A_REG1, B_REG2, IMM_DEFAULT, ALU_REMUW, WB_ALU, SD_NO, LD_NO),

    )
}

class CUIO extends Bundle {
    val inst = Input(UInt(INST_LEN.W))

    val jump_type = Output(UInt(2.W))
    val branch_type = Output(UInt(1.W))
    val opa_type = Output(UInt(2.W))
    val opb_type = Output(UInt(2.W))
    val imm_type = Output(UInt(3.W))
    val alu_op = Output(UInt(ALU_OP_LEN.W))
    val wb_type = Output(UInt(2.W))
    val sd_type = Output(UInt(3.W))
    val ld_type = Output(UInt(3.W))
}

class ControlUnit extends Module{
    val io = IO(new CUIO)

    val controlsig = ListLookup(io.inst, ControlUnit.default, ControlUnit.map)   //若写map会报错,专用于指令的

    
    io.jump_type    := controlsig(0)
    io.branch_type  := controlsig(1)
    io.opa_type     := controlsig(2)
    io.opb_type     := controlsig(3)
    io.imm_type     := controlsig(4)
    io.alu_op       := controlsig(5)
    io.wb_type      := controlsig(6)
    io.sd_type      := controlsig(7)
    io.ld_type      := controlsig(8)

}
