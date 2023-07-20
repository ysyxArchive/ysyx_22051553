package rv64

import chisel3._
import chisel3.util._
import Define._

object Alu {
    val ALU_ADD   = 0.U(5.W)
    val ALU_SUB   = 1.U(5.W)
    val ALU_MUL   = 2.U(5.W)
    val ALU_DIV   = 3.U(5.W)
    val ALU_REM   = 4.U(5.W)
    val ALU_EQU   = 5.U(5.W)
    val ALU_NEQ   = 6.U(5.W)
    val ALU_SLT   = 7.U(5.W)
    val ALU_SGE   = 8.U(5.W)
    val ALU_SLTU  = 9.U(5.W)
    val ALU_SGEU  = 10.U(5.W)
    val ALU_XOR   = 11.U(5.W)
    val ALU_OR    = 12.U(5.W)
    val ALU_SLL   = 13.U(5.W)
    val ALU_SRL   = 14.U(5.W)
    val ALU_SRA   = 15.U(5.W)
    val ALU_AND   = 16.U(5.W)
    val ALU_NAND  = 17.U(5.W)
    val ALU_NO_OP = 31.U(5.W)
}

class AluIO extends Bundle{
    val op_a = Input(UInt(X_LEN.W))
    val op_b = Input(UInt(X_LEN.W))
    val alu_op = Input(UInt(ALU_OP_LEN.W))

    val result = Output(UInt(X_LEN.W))

   
}

import Alu._

class Alu extends Module {
    
    val io = IO(new AluIO)

    io.result := MuxLookup(
        io.alu_op,
        0.U,
        Seq(
            ALU_ADD -> (io.op_a + io.op_b)            //补码也是直接加法
        )
    )


}
