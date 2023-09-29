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

    val ALU_CLEAR = 40.U(6.W)
    val ALU_NO_OP = 63.U(6.W)
}

class AluIO extends Bundle{
    val op_a = Input(UInt(X_LEN.W))
    val op_b = Input(UInt(X_LEN.W))
    val alu_op = Input(UInt(ALU_OP_LEN.W))
    val shamt = Input(UInt(6.W))

    val result = Output(UInt(X_LEN.W))

    val mul_div_flush = Input(Bool())
    val mul_div_outvalid = Output(Bool())
    val mul_div_ready = Output(UInt(2.W))
}

import Alu._

class Alu extends Module {
    
    val io = IO(new AluIO)
    
    val res = Wire(SInt(X_LEN.W))
    
    val BM = Module(new BoothMul)
    val DIV = Module(new Divider)
    
    io.mul_div_outvalid := BM.io.out_valid | DIV.io.out_valid
    io.mul_div_ready := BM.io.mul_ready | DIV.io.div_ready


    val bm_value = WireInit(0.S(64.W))

    val div_value = WireInit(0.S(64.W))


    BM.io.mul_valid := 0.B
    BM.io.flush := 0.B
    BM.io.mulw := 0.B
    BM.io.mul_signed := 0.U 
    BM.io.multiplicand := 0.U
    BM.io.multiplier := 0.U

    DIV.io.div_valid := 0.B
    DIV.io.flush := 0.B
    DIV.io.divw := 0.B
    DIV.io.div_signed := 0.U 
    DIV.io.dividend := 0.U
    DIV.io.divisor := 0.U


    when(io.alu_op === (ALU_MUL)||io.alu_op === (ALU_MULH)||io.alu_op === (ALU_MULHSU)||
        io.alu_op === (ALU_MULHU)||io.alu_op === (ALU_MULW)){
            BM.io.mul_valid := 1.B
            BM.io.flush := io.mul_div_flush
            BM.io.mulw := Mux(io.alu_op === (ALU_MULW), 1.B, 0.B)
            BM.io.mul_signed := MuxCase(0.B,
                Seq(
                    (io.alu_op === (ALU_MUL) || io.alu_op === (ALU_MULH)
                    || io.alu_op === (ALU_MULW)) -> "b11".U,
                    (io.alu_op === (ALU_MULHSU)) -> "b10".U,
                    (io.alu_op === (ALU_MULHU)) -> "b00".U,
                )
            )
            BM.io.multiplicand := io.op_a
            BM.io.multiplier := io.op_b
        }

    bm_value := Mux(BM.io.out_valid, 
        MuxCase(0.S,
            Seq(
                (io.alu_op === (ALU_MUL) || io.alu_op === (ALU_MULW)) -> BM.io.result_lo.asSInt,
                (io.alu_op === (ALU_MULH) || io.alu_op === (ALU_MULHSU) ||
                    io.alu_op === (ALU_MULHU)) -> BM.io.result_hi.asSInt
            )
        ),
    0.S)

    when(io.alu_op === (ALU_DIV)||io.alu_op === (ALU_DIVU)||io.alu_op === (ALU_DIVW)||
        io.alu_op === (ALU_DIVUW)){
            DIV.io.div_valid := 1.B
            DIV.io.flush := io.mul_div_flush
            DIV.io.divw := Mux(io.alu_op === (ALU_DIVW) || io.alu_op === (ALU_DIVUW), 1.B, 0.B)
            DIV.io.div_signed := Mux(io.alu_op === (ALU_DIV) || io.alu_op === (ALU_DIVW), 1.B, 0.B)
            DIV.io.dividend := io.op_a
            DIV.io.divisor := io.op_b
        }

    div_value := Mux(DIV.io.out_valid, DIV.io.quotient.asSInt, 0.S)



    res := Mux(BM.io.out_valid, bm_value, 
        Mux(DIV.io.out_valid, div_value,
            MuxLookup(
                io.alu_op,
                0.S,
                Seq(
                    ALU_ADD -> (io.op_a.asSInt + io.op_b.asSInt),            //补码也是直接加法
                    ALU_SUB -> (io.op_a.asSInt - io.op_b.asSInt),
                    ALU_EQU -> (io.op_a === io.op_b).zext,
                    ALU_NEQ -> (io.op_a =/= io.op_b).zext,
                    ALU_SLT -> (io.op_a.asSInt < io.op_b.asSInt).zext,
                    ALU_SGE -> (io.op_a.asSInt >= io.op_b.asSInt).zext,
                    ALU_SLTU -> (io.op_a < io.op_b).zext,
                    ALU_SGEU -> (io.op_a >= io.op_b).zext,
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
                    ALU_REM -> (io.op_a.asSInt % io.op_b.asSInt),
                    ALU_REMU -> (io.op_a % io.op_b).asSInt,
                    ALU_ADDIW -> ((io.op_a + io.op_b)(31,0)).asSInt,   //这样可以直接做符号扩展吗
                    ALU_SLLIW -> ((io.op_a << io.shamt)(31,0)).asSInt,   //io.op_a左移时能扩充位宽吗
                    ALU_SRLIW -> ((io.op_a(31,0) >> io.shamt)(31,0)).asSInt,
                    ALU_SRAIW -> ((io.op_a(31,0).asSInt >> io.shamt)(31,0)).asSInt,
                    ALU_ADDW -> ((io.op_a + io.op_b)(31,0)).asSInt,
                    ALU_SUBW -> ((io.op_a - io.op_b)(31,0)).asSInt,
                    ALU_SLLW -> ((io.op_a << io.op_b(5,0))(31,0)).asSInt,
                    ALU_SRLW -> ((io.op_a(31,0) >> io.op_b(5,0))(31,0)).asSInt,
                    ALU_SRAW -> ((io.op_a(31,0).asSInt >> io.op_b(5,0))(31,0)).asSInt,
                    ALU_REMW -> ((io.op_a.asSInt % io.op_b.asSInt)(31,0)).asSInt,
                    ALU_REMUW -> ((io.op_a % io.op_b)(31,0)).asSInt,
                    ALU_CLEAR -> (~io.op_a & io.op_b).asSInt,
                    ALU_NO_OP -> (0.U).asSInt
                )
            )
        )    
    )
        
        
        
        

    io.result := res.asUInt
}


