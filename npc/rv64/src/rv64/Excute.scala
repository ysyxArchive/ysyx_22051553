package rv64

import chisel3._
import chisel3.util._
import Define._

class ExcuteIO extends Bundle{
    // val rd     = Input()  --来自de
    // val rd     = Output()  --去往em  用两个Bundle可以解决命名冲突
    val deio = Input(new DERegIO)
    val emio = Output(new EMRegIO)

    //to fc
    val stall = Output(Bool())
    val flush = Output(Bool())
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

    io.stall := DontCare
    io.flush := DontCare
    
    //alu
    alu.io.op_a := io.deio.op_a
    alu.io.op_b := io.deio.op_b
    alu.io.alu_op := io.deio.alu_op
    
    


}
