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
    val A_IMM = 3.U             //csr指令使用

    //opb_type
    val B_ZERO = 0.U
    val B_IMM = 1.U
    val B_REG2 = 2.U
    val B_CONS4 = 3.U
    val B_CSR = 4.U

    //imm_type
    val IMM_DEFAULT = 0.U
    val IMM_I       = 0.U
    val IMM_U       = 1.U
    val IMM_J       = 2.U          //JAL
    val IMM_S       = 3.U
    val IMM_B       = 4.U
    val IMM_C       = 5.U

    //wb_type   --用什么结果写回
    val WB_NO   = 0.U   //不写回
    val WB_ALU  = 1.U
    val WB_MEM  = 2.U
    val WB_CSR  = 3.U

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

    //csr_type
    val CSR_NO = 0.U
    val CSR_RW = 1.U
    val CSR_RS = 2.U
    val CSR_RC = 3.U


    // 对照表
    val default = 

        List(NO_JUMP, NO_BR, A_ZERO, B_ZERO, IMM_DEFAULT, ALU_NO_OP, WB_NO, SD_NO, LD_NO, CSR_NO)

    
    val map = Array(
        BitPat("b00000000000000000000000000010011") -> default,               //NOP
        AUIPC -> List(NO_JUMP, NO_BR, A_PC, B_IMM, IMM_U, ALU_ADD, WB_ALU, SD_NO, LD_NO, CSR_NO),
        LUI -> List(NO_JUMP, NO_BR, A_ZERO, B_IMM, IMM_U, ALU_ADD, WB_ALU, SD_NO, LD_NO, CSR_NO),
        JAL -> List(JUMP_JAL, NO_BR, A_PC, B_CONS4, IMM_J, ALU_ADD, WB_ALU, SD_NO, LD_NO, CSR_NO),
        JALR -> List(JUMP_JALR, NO_BR, A_PC, B_CONS4, IMM_I, ALU_ADD, WB_ALU, SD_NO, LD_NO, CSR_NO),

        BEQ -> List(NO_JUMP, BR_ANY, A_REG1, B_REG2, IMM_DEFAULT, ALU_EQU, WB_NO, SD_NO, LD_NO, CSR_NO),
        BNE -> List(NO_JUMP, BR_ANY, A_REG1, B_REG2, IMM_DEFAULT, ALU_NEQ, WB_NO, SD_NO, LD_NO, CSR_NO),
        BLT -> List(NO_JUMP, BR_ANY, A_REG1, B_REG2, IMM_DEFAULT, ALU_SLT, WB_NO, SD_NO, LD_NO, CSR_NO),
        BGE -> List(NO_JUMP, BR_ANY, A_REG1, B_REG2, IMM_DEFAULT, ALU_SGE, WB_NO, SD_NO, LD_NO, CSR_NO),
        BLTU -> List(NO_JUMP, BR_ANY, A_REG1, B_REG2, IMM_DEFAULT, ALU_SLTU, WB_NO, SD_NO, LD_NO, CSR_NO),
        BGEU -> List(NO_JUMP, BR_ANY, A_REG1, B_REG2, IMM_DEFAULT, ALU_SGEU, WB_NO, SD_NO, LD_NO, CSR_NO),

        LB -> List(NO_JUMP, NO_BR, A_REG1, B_IMM, IMM_I, ALU_ADD, WB_MEM, SD_NO, LD_LB, CSR_NO),
        LH -> List(NO_JUMP, NO_BR, A_REG1, B_IMM, IMM_I, ALU_ADD, WB_MEM, SD_NO, LD_LH, CSR_NO),
        LW -> List(NO_JUMP, NO_BR, A_REG1, B_IMM, IMM_I, ALU_ADD, WB_MEM, SD_NO, LD_LW, CSR_NO),
        LBU -> List(NO_JUMP, NO_BR, A_REG1, B_IMM, IMM_I, ALU_ADD, WB_MEM, SD_NO, LD_LBU, CSR_NO),
        LHU -> List(NO_JUMP, NO_BR, A_REG1, B_IMM, IMM_I, ALU_ADD, WB_MEM, SD_NO, LD_LHU, CSR_NO),
        LWU -> List(NO_JUMP, NO_BR, A_REG1, B_IMM, IMM_I, ALU_ADD, WB_MEM, SD_NO, LD_LWU, CSR_NO),
        LD -> List(NO_JUMP, NO_BR, A_REG1, B_IMM, IMM_I, ALU_ADD, WB_MEM, SD_NO, LD_LD, CSR_NO),

        SB -> List(NO_JUMP, NO_BR, A_REG1, B_IMM, IMM_S, ALU_ADD, WB_NO, SD_SB, LD_NO, CSR_NO),
        SH -> List(NO_JUMP, NO_BR, A_REG1, B_IMM, IMM_S, ALU_ADD, WB_NO, SD_SH, LD_NO, CSR_NO),
        SW -> List(NO_JUMP, NO_BR, A_REG1, B_IMM, IMM_S, ALU_ADD, WB_NO, SD_SW, LD_NO, CSR_NO),
        SD -> List(NO_JUMP, NO_BR, A_REG1, B_IMM, IMM_S, ALU_ADD, WB_NO, SD_SD, LD_NO, CSR_NO),

        ADDI -> List(NO_JUMP, NO_BR, A_REG1, B_IMM, IMM_I, ALU_ADD, WB_ALU, SD_NO, LD_NO, CSR_NO),
        SLTI -> List(NO_JUMP, NO_BR, A_REG1, B_IMM, IMM_I, ALU_SLT, WB_ALU, SD_NO, LD_NO, CSR_NO),
        SLTIU -> List(NO_JUMP, NO_BR, A_REG1, B_IMM, IMM_I, ALU_SLTU, WB_ALU, SD_NO, LD_NO, CSR_NO),
        XORI -> List(NO_JUMP, NO_BR, A_REG1, B_IMM, IMM_I, ALU_XOR, WB_ALU, SD_NO, LD_NO, CSR_NO),
        ORI -> List(NO_JUMP, NO_BR, A_REG1, B_IMM, IMM_I, ALU_OR, WB_ALU, SD_NO, LD_NO, CSR_NO),
        ANDI -> List(NO_JUMP, NO_BR, A_REG1, B_IMM, IMM_I, ALU_AND, WB_ALU, SD_NO, LD_NO, CSR_NO),

        SLLI -> List(NO_JUMP, NO_BR, A_REG1, B_IMM, IMM_I, ALU_SLLI, WB_ALU, SD_NO, LD_NO, CSR_NO),
        SRLI -> List(NO_JUMP, NO_BR, A_REG1, B_IMM, IMM_I, ALU_SRLI, WB_ALU, SD_NO, LD_NO, CSR_NO),
        SRAI -> List(NO_JUMP, NO_BR, A_REG1, B_IMM, IMM_I, ALU_SRAI, WB_ALU, SD_NO, LD_NO, CSR_NO),

        ADD -> List(NO_JUMP, NO_BR, A_REG1, B_REG2, IMM_DEFAULT, ALU_ADD, WB_ALU, SD_NO, LD_NO, CSR_NO),
        SUB -> List(NO_JUMP, NO_BR, A_REG1, B_REG2, IMM_DEFAULT, ALU_SUB, WB_ALU, SD_NO, LD_NO, CSR_NO),
        SLL -> List(NO_JUMP, NO_BR, A_REG1, B_REG2, IMM_DEFAULT, ALU_SLL, WB_ALU, SD_NO, LD_NO, CSR_NO),
        SLT -> List(NO_JUMP, NO_BR, A_REG1, B_REG2, IMM_DEFAULT, ALU_SLT, WB_ALU, SD_NO, LD_NO, CSR_NO),
        SLTU -> List(NO_JUMP, NO_BR, A_REG1, B_REG2, IMM_DEFAULT, ALU_SLTU, WB_ALU, SD_NO, LD_NO, CSR_NO),
        XOR -> List(NO_JUMP, NO_BR, A_REG1, B_REG2, IMM_DEFAULT, ALU_XOR, WB_ALU, SD_NO, LD_NO, CSR_NO),
        SRL -> List(NO_JUMP, NO_BR, A_REG1, B_REG2, IMM_DEFAULT, ALU_SRL, WB_ALU, SD_NO, LD_NO, CSR_NO),
        SRA -> List(NO_JUMP, NO_BR, A_REG1, B_REG2, IMM_DEFAULT, ALU_SRA, WB_ALU, SD_NO, LD_NO, CSR_NO),
        OR -> List(NO_JUMP, NO_BR, A_REG1, B_REG2, IMM_DEFAULT, ALU_OR, WB_ALU, SD_NO, LD_NO, CSR_NO),
        AND -> List(NO_JUMP, NO_BR, A_REG1, B_REG2, IMM_DEFAULT, ALU_AND, WB_ALU, SD_NO, LD_NO, CSR_NO),

        MUL -> List(NO_JUMP, NO_BR, A_REG1, B_REG2, IMM_DEFAULT, ALU_MUL, WB_ALU, SD_NO, LD_NO, CSR_NO),
        MULH -> List(NO_JUMP, NO_BR, A_REG1, B_REG2, IMM_DEFAULT, ALU_MULH, WB_ALU, SD_NO, LD_NO, CSR_NO),
        MULHSU -> List(NO_JUMP, NO_BR, A_REG1, B_REG2, IMM_DEFAULT, ALU_MULHSU, WB_ALU, SD_NO, LD_NO, CSR_NO),
        MULHU -> List(NO_JUMP, NO_BR, A_REG1, B_REG2, IMM_DEFAULT, ALU_MULHU, WB_ALU, SD_NO, LD_NO, CSR_NO),
        DIV -> List(NO_JUMP, NO_BR, A_REG1, B_REG2, IMM_DEFAULT, ALU_DIV, WB_ALU, SD_NO, LD_NO, CSR_NO),
        DIVU -> List(NO_JUMP, NO_BR, A_REG1, B_REG2, IMM_DEFAULT, ALU_DIVU, WB_ALU, SD_NO, LD_NO, CSR_NO),
        REM -> List(NO_JUMP, NO_BR, A_REG1, B_REG2, IMM_DEFAULT, ALU_REM, WB_ALU, SD_NO, LD_NO, CSR_NO),
        REMU -> List(NO_JUMP, NO_BR, A_REG1, B_REG2, IMM_DEFAULT, ALU_REMU, WB_ALU, SD_NO, LD_NO, CSR_NO),

        ADDIW -> List(NO_JUMP, NO_BR, A_REG1, B_IMM, IMM_I, ALU_ADDIW, WB_ALU, SD_NO, LD_NO, CSR_NO),
        SLLIW -> List(NO_JUMP, NO_BR, A_REG1, B_IMM, IMM_I, ALU_SLLIW, WB_ALU, SD_NO, LD_NO, CSR_NO),
        SRLIW -> List(NO_JUMP, NO_BR, A_REG1, B_IMM, IMM_I, ALU_SRLIW, WB_ALU, SD_NO, LD_NO, CSR_NO),
        SRAIW -> List(NO_JUMP, NO_BR, A_REG1, B_IMM, IMM_I, ALU_SRAIW, WB_ALU, SD_NO, LD_NO, CSR_NO),

        ADDW -> List(NO_JUMP, NO_BR, A_REG1, B_REG2, IMM_DEFAULT, ALU_ADDW, WB_ALU, SD_NO, LD_NO, CSR_NO),
        SUBW -> List(NO_JUMP, NO_BR, A_REG1, B_REG2, IMM_DEFAULT, ALU_SUBW, WB_ALU, SD_NO, LD_NO, CSR_NO),
        SLLW -> List(NO_JUMP, NO_BR, A_REG1, B_REG2, IMM_DEFAULT, ALU_SLLW, WB_ALU, SD_NO, LD_NO, CSR_NO),
        SRLW -> List(NO_JUMP, NO_BR, A_REG1, B_REG2, IMM_DEFAULT, ALU_SRLW, WB_ALU, SD_NO, LD_NO, CSR_NO),
        SRAW -> List(NO_JUMP, NO_BR, A_REG1, B_REG2, IMM_DEFAULT, ALU_SRAW, WB_ALU, SD_NO, LD_NO, CSR_NO),

        MULW -> List(NO_JUMP, NO_BR, A_REG1, B_REG2, IMM_DEFAULT, ALU_MULW, WB_ALU, SD_NO, LD_NO, CSR_NO),
        DIVW -> List(NO_JUMP, NO_BR, A_REG1, B_REG2, IMM_DEFAULT, ALU_DIVW, WB_ALU, SD_NO, LD_NO, CSR_NO),
        DIVUW -> List(NO_JUMP, NO_BR, A_REG1, B_REG2, IMM_DEFAULT, ALU_DIVUW, WB_ALU, SD_NO, LD_NO, CSR_NO),
        REMW -> List(NO_JUMP, NO_BR, A_REG1, B_REG2, IMM_DEFAULT, ALU_REMW, WB_ALU, SD_NO, LD_NO, CSR_NO),
        REMUW -> List(NO_JUMP, NO_BR, A_REG1, B_REG2, IMM_DEFAULT, ALU_REMUW, WB_ALU, SD_NO, LD_NO, CSR_NO),



        CSRRW -> List(NO_JUMP, NO_BR, A_REG1, B_ZERO, IMM_DEFAULT, ALU_ADD, WB_CSR, SD_NO, LD_NO, CSR_RW),
        CSRRS -> List(NO_JUMP, NO_BR, A_REG1, B_CSR, IMM_DEFAULT, ALU_OR, WB_CSR, SD_NO, LD_NO, CSR_RS),
        CSRRC -> List(NO_JUMP, NO_BR, A_REG1, B_CSR, IMM_DEFAULT, ALU_CLEAR, WB_CSR, SD_NO, LD_NO, CSR_RC),
        CSRRWI -> List(NO_JUMP, NO_BR, A_IMM, B_ZERO, IMM_C, ALU_ADD, WB_CSR, SD_NO, LD_NO, CSR_RW),
        CSRRSI -> List(NO_JUMP, NO_BR, A_IMM, B_CSR, IMM_C, ALU_OR, WB_CSR, SD_NO, LD_NO, CSR_RS),
        CSRRCI -> List(NO_JUMP, NO_BR, A_IMM, B_CSR, IMM_C, ALU_CLEAR, WB_CSR, SD_NO, LD_NO, CSR_RC),
    )
}

class CUIO extends Bundle {
    val inst = Input(UInt(INST_LEN.W))

    val jump_type = Output(UInt(2.W))
    val branch_type = Output(UInt(1.W))
    val opa_type = Output(UInt(2.W))
    val opb_type = Output(UInt(3.W))
    val imm_type = Output(UInt(3.W))
    val alu_op = Output(UInt(ALU_OP_LEN.W))
    val wb_type = Output(UInt(2.W))
    val sd_type = Output(UInt(3.W))
    val ld_type = Output(UInt(3.W))
    val csr_type = Output(UInt(2.W))
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
    io.csr_type      := controlsig(9)

}
