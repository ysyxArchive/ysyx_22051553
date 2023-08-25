package rv64

import chisel3._
import chisel3.util._
import Define._

object Alu {
    val ALU_ADD   = 0.U(6.W)
    val ALU_SUB   = 1.U(6.W)
    val ALU_EQU   = 2.U(6.W)
    val ALU_NEQ   = 3.U(6.W)
    val ALU_SLT   = 4.U(6.W)
    val ALU_SGE   = 5.U(6.W)
    val ALU_SLTU  = 6.U(6.W)
    val ALU_SGEU  = 7.U(6.W)
    val ALU_XOR   = 8.U(6.W)
    val ALU_OR    = 9.U(6.W)
    val ALU_SLL   = 10.U(6.W)
    val ALU_SRL   = 11.U(6.W)
    val ALU_SRA   = 12.U(6.W)
    val ALU_SLLI  = 13.U(6.W)
    val ALU_SRLI  = 14.U(6.W)
    val ALU_SRAI  = 15.U(6.W)
    val ALU_AND   = 16.U(6.W)
    val ALU_NAND  = 17.U(6.W)
    val ALU_MUL  = 18.U(6.W)
    val ALU_MULH  = 19.U(6.W)
    val ALU_MULHSU  = 20.U(6.W)
    val ALU_MULHU  = 21.U(6.W)
    val ALU_DIV  = 22.U(6.W)
    val ALU_DIVU  = 23.U(6.W)
    val ALU_REM  = 24.U(6.W)
    val ALU_REMU  = 25.U(6.W)
    val ALU_ADDIW = 26.U(6.W)
    val ALU_SLLIW = 27.U(6.W)
    val ALU_SRLIW = 28.U(6.W)
    val ALU_SRAIW = 29.U(6.W)
    val ALU_ADDW = 30.U(6.W)
    val ALU_SUBW = 31.U(6.W)
    val ALU_SLLW = 32.U(6.W)
    val ALU_SRLW = 33.U(6.W)
    val ALU_SRAW = 34.U(6.W)
    val ALU_MULW = 35.U(6.W)
    val ALU_DIVW = 36.U(6.W)
    val ALU_DIVUW = 37.U(6.W)
    val ALU_REMW = 38.U(6.W)
    val ALU_REMUW = 39.U(6.W)
    val ALU_NO_OP = 63.U(6.W)
}

class AluIO extends Bundle{
    val op_a = Input(UInt(X_LEN.W))
    val op_b = Input(UInt(X_LEN.W))
    val alu_op = Input(UInt(ALU_OP_LEN.W))
    val shamt = Input(UInt(5.W))

    val result = Output(UInt(X_LEN.W))

   
}

import Alu._

class Alu extends Module {
    
    val io = IO(new AluIO)

    val long_au = Wire(UInt((2*X_LEN).W))
    val long_bu = Wire(UInt((2*X_LEN).W))
    val long_as = Wire(SInt((2*X_LEN).W))
    val long_bs = Wire(SInt((2*X_LEN).W))

    long_au := io.op_a
    long_bu := io.op_b

    long_as := io.op_a.asSInt
    long_bs := io.op_b.asSInt
    
    
    val res = Wire(SInt(X_LEN.W))

    res := MuxLookup(
        io.alu_op,
        0.S,
        Seq(
            ALU_ADD -> (io.op_a.asSInt + io.op_b.asSInt),            //补码也是直接加法
            ALU_SUB -> (io.op_a.asSInt - io.op_b.asSInt),
            ALU_EQU -> (io.op_a === io.op_b).zext,
            ALU_NEQ -> (io.op_a =/= io.op_b).zext,
            ALU_SLT -> (io.op_a.asSInt < io.op_b.asSInt).zext,
            ALU_SGE -> (io.op_a.asSInt > io.op_b.asSInt).zext,
            ALU_SLTU -> (io.op_a < io.op_b).zext,
            ALU_SGEU -> (io.op_a > io.op_b).zext,
            ALU_XOR -> (io.op_a ^ io.op_b).asSInt,
            ALU_OR -> (io.op_a | io.op_b).asSInt,
            ALU_SLL -> (io.op_a << io.op_b(5,0)).asSInt,
            ALU_SRL -> (io.op_a >> io.op_b(5,0)).asSInt,
            ALU_SRA -> (io.op_a.asSInt >> io.op_b(5,0)),
            ALU_SLLI -> (io.op_a << io.shamt).asSInt,
            ALU_SRLI -> (io.op_a >> io.shamt).asSInt,
            ALU_SRAI -> (io.op_a.asSInt >>  io.shamt),
            ALU_AND -> (io.op_a & io.op_b).asSInt,
            ALU_NAND -> ~(io.op_a & io.op_b).asSInt,
            ALU_MUL -> ((long_as * long_bs)(63,0)).asSInt,  //()返回UInt
            ALU_MULH -> ((long_as * long_bs)(127,64)).asSInt,
            ALU_MULHSU -> ((long_as * long_bu)(127,64)).asSInt,
            ALU_MULHU -> ((long_au * long_bu)(127,64)).asSInt,
            ALU_DIV -> (io.op_a.asSInt / io.op_b.asSInt),
            ALU_DIVU -> (io.op_a / io.op_b).asSInt,
            ALU_REM -> (io.op_a.asSInt % io.op_b.asSInt),
            ALU_REMU -> (io.op_a % io.op_b).asSInt,
            ALU_ADDIW -> ((io.op_a + io.op_b)(31,0)).asSInt,   //这样可以直接做符号扩展吗
            ALU_SLLIW -> ((io.op_a << io.shamt)(31,0)).asSInt,   //io.op_a左移时能扩充位宽吗
            ALU_SRLIW -> ((io.op_a >> io.shamt)(31,0)).asSInt,
            ALU_SRAIW -> ((io.op_a.asSInt >> io.shamt)(31,0)).asSInt,
            ALU_ADDW -> ((io.op_a + io.op_b)(31,0)).asSInt,
            ALU_SUBW -> ((io.op_a - io.op_b)(31,0)).asSInt,
            ALU_SLLW -> ((io.op_a << io.op_b(5,0))(31,0)).asSInt,
            ALU_SRLW -> ((io.op_a >> io.op_b(5,0))(31,0)).asSInt,
            ALU_SRAW -> ((io.op_a.asSInt >> io.op_b(5,0))(31,0)).asSInt,
            ALU_MULW -> ((long_as * long_bs)(31,0)).asSInt,
            ALU_DIVW -> ((io.op_a.asSInt / io.op_b.asSInt)(31,0)).asSInt,
            ALU_DIVUW -> ((io.op_a / io.op_b)(31,0)).asSInt,
            ALU_REMW -> ((io.op_a.asSInt % io.op_b.asSInt)(31,0)).asSInt,
            ALU_REMUW -> ((io.op_a % io.op_b)(31,0)).asSInt,
            ALU_NO_OP -> (0.U).asSInt
        )
    )

    io.result := res.asUInt
}

    // io.result := MuxLookup(
    //     io.alu_op,
    //     0.U,
    //     Seq(
    //         ALU_ADD -> (io.op_a.asSInt + io.op_b.asSInt).asUInt,            //补码也是直接加法
    //         ALU_SUB -> (io.op_a.asSInt - io.op_b.asSInt).asUInt,
    //         ALU_EQU -> (io.op_a === io.op_b).asUInt,
    //         ALU_NEQ -> (io.op_a =/= io.op_b).asUInt,
    //         ALU_SLT -> (io.op_a.asSInt < io.op_b.asSInt).asUInt,
    //         ALU_SGE -> (io.op_a.asSInt > io.op_b.asSInt).asUInt,
    //         ALU_SLTU -> (io.op_a < io.op_b).asUInt,
    //         ALU_SGEU -> (io.op_a > io.op_b).asUInt,
    //         ALU_XOR -> (io.op_a ^ io.op_b),
    //         ALU_OR -> (io.op_a | io.op_b),
    //         ALU_SLL -> (io.op_a << io.op_b(5,0)),
    //         ALU_SRL -> (io.op_a >> io.op_b(5,0)),
    //         ALU_SRA -> (io.op_a.asSInt >> io.op_b(5,0)).asUInt,
    //         ALU_SLLI -> (io.op_a << io.shamt),
    //         ALU_SRLI -> (io.op_a >> io.shamt),
    //         ALU_SRAI -> (io.op_a.asSInt >>  io.shamt).asUInt,
    //         ALU_AND -> (io.op_a & io.op_b),
    //         ALU_NAND -> ~(io.op_a & io.op_b),
    //         ALU_MUL -> ((long_as * long_bs)(63,0)).asUInt,
    //         ALU_MULH -> ((long_as * long_bs)(127,64)).asUInt,
    //         ALU_MULHSU -> ((long_as * long_bu)(127,64)).asUInt,
    //         ALU_MULHU -> ((long_au * long_bu)(127,64)).asUInt,
    //         ALU_DIV -> (io.op_a.asSInt / io.op_b.asSInt).asUInt,
    //         ALU_DIVU -> (io.op_a / io.op_b),
    //         ALU_REM -> (io.op_a.asSInt % io.op_b.asSInt).asUInt,
    //         ALU_REMU -> (io.op_a % io.op_b),
    //         ALU_ADDIW -> ((io.op_a + io.op_b)(31,0)).asSInt.asUInt,   //这样可以直接做符号扩展吗
    //         ALU_SLLIW -> ((io.op_a << io.shamt)(31,0)).asSInt.asUInt,   //io.op_a左移时能扩充位宽吗
    //         ALU_SRLIW -> ((io.op_a >> io.shamt)(31,0)).asSInt.asUInt,
    //         ALU_SRAIW -> ((io.op_a.asSInt >> io.shamt)(31,0)).asSInt.asUInt,
    //         ALU_ADDW -> ((io.op_a + io.op_b)(31,0)).asSInt.asUInt,
    //         ALU_SUBW -> ((io.op_a - io.op_b)(31,0)).asSInt.asUInt,
    //         ALU_SLLW -> ((io.op_a << io.op_b(5,0))(31,0)).asSInt.asUInt,
    //         ALU_SRLW -> ((io.op_a >> io.op_b(5,0))(31,0)).asSInt.asUInt,
    //         ALU_SRAW -> ((io.op_a.asSInt >> io.op_b(5,0))(31,0)).asSInt.asUInt,
    //         ALU_MULW -> ((long_as * long_bs)(31,0)).asSInt.asUInt,
    //         ALU_DIVW -> ((io.op_a.asSInt / io.op_b.asSInt)(31,0)).asSInt.asUInt,
    //         ALU_DIVUW -> ((io.op_a / io.op_b)(31,0)).asSInt.asUInt,
    //         ALU_REMW -> ((io.op_a.asSInt % io.op_b.asSInt)(31,0)).asSInt.asUInt,
    //         ALU_REMUW -> ((io.op_a % io.op_b)(31,0)).asSInt.asUInt,
    //         ALU_NO_OP -> (0.U)
    //     )
    // )

