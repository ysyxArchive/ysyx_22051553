import chisel3._
import chisel3.util._

object Alu {                                    //使用单例对象存储定义
    val ALU_ADD = 0.U(3.W)
    val ALU_SUB = 1.U(3.W)
    val ALU_NOT = 2.U(3.W)
    val ALU_AND = 3.U(3.W)
    val ALU_OR  = 4.U(3.W)
    val ALU_XOR = 5.U(3.W)
    val ALU_COM = 6.U(3.W)
    val ALU_EUQ = 7.U(3.W)
}


class AluIO extends Bundle{                         //A,B是实时的，aluop是缓存的
    val A           = Input(SInt(4.W))
    val B           = Input(SInt(4.W))
    val alu_op      = Input(UInt(3.W))
    val result      = Output(SInt(4.W))
    val carry       = Output(UInt(1.W))
    val zero        = Output(UInt(1.W))
    val overflow    = Output(UInt(1.W))
}

import Alu._

class Alu extends Module{
    
    val io = IO(new AluIO)


    val alu_op = RegInit(0.U(3.W)) //初始为ADD
    

    when(io.alu_op === ALU_ADD || io.alu_op === ALU_SUB || io.alu_op === ALU_NOT || io.alu_op === ALU_AND ||
        io.alu_op === ALU_OR || io.alu_op === ALU_XOR || io.alu_op === ALU_COM || io.alu_op === ALU_EUQ
    )
    {
        alu_op := io.alu_op
    }




    val A1 = io.A                        //用于加减
    val B1 = Mux(
        alu_op === ALU_ADD,
        io.B,
        Mux(
            alu_op === ALU_SUB,
            (io.B.asUInt ^ -1.S(4.W).asUInt).asSInt + 1.S(4.W), 
            0.S(4.W)
        )
    )

    val A2 = io.A          //用于逻辑
    val B2 = io.B

    val result = MuxLookup(
        alu_op,
        0.S(4.W),
        Seq(
            ALU_ADD -> (A1 + B1),
            ALU_SUB -> (A1 + B1),
            ALU_NOT -> -A2,
            ALU_AND -> (A2 & B2),   //与操作不需要区分有符号和无符号
            ALU_OR  -> (A2 | B2),
            ALU_XOR -> (A2 ^ B2),
            ALU_COM -> (A2 < B2).asSInt,
            ALU_EUQ -> (A2 === B2).asSInt
        )
    )


    val zero = (A2 === B2).asUInt

    val overflow = 
        Mux(
            A2(3) === B2(3),        
            Mux(                     //同号
                alu_op === ALU_ADD,
                Mux(
                    result(3) === A2(3),
                    0.U(1.W),
                    1.U(1.W)
                ),
                0.U(1.W)
            ),
            Mux(                     //异号
                alu_op === ALU_SUB,
                Mux(
                    result(3) === A2(3),
                    0.U(1.W),
                    1.U(1.W)
                ),
                0.U(1.W)
            )
        )
    
    
    val carry = (A1.asUInt +& B1.asUInt)(4) === 1.U        //+&扩展一位最高位


    io.result := result
    io.carry := carry
    io.overflow := overflow
    io.zero := zero
}



