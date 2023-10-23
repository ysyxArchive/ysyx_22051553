package rv64

import chisel3._
import chisel3.util._
import Define._

object TrIO {
    val s_IDLE :: s_WAIT :: s_MEPC :: s_MCAUSE :: s_MSTATUS :: s_MRET_WAIT :: s_CLRMIP :: s_MRET :: Nil = Enum(8)
}

class FcTrIO extends Bundle{
    val pop_NOP = Output(Bool())   //在decode中为ecall指令时，decode向后pop出NOP无效指令，直到后级流水线都是NOP无效指令
    val trap_state = Output(UInt(3.W))  //由于trap_state是时序逻辑，会延迟一个周期变化，所以需要trap_state和组合逻辑POP共同管理

    val jump_flag = Output(Bool())
    val jump_pc = Output(UInt(PC_LEN.W))
}

class TrIO extends Bundle{

    //前面所有指令执行结束后，才能进行异常处理
    val ex_hasinst = Input(Bool())
    val mem_hasinst = Input(Bool())
    val wb_hasinst = Input(Bool())

    //from csrs
    val csrtr = Flipped(new CSRTrapIO)

    //from de
    val inst = Input(UInt(INST_LEN.W))   //判断ecall指令

    //from fe
    val pc = Input(UInt(PC_LEN.W)) //为MEPC取得PC

    //to fc
    val fctr = new FcTrIO

}

import TrIO._

class Trap extends Module{
    val io = IO(new TrIO)

    val cause = RegInit(0.U(X_LEN.W))
    val pc = RegInit(0.U(PC_LEN.W))
    
    val state = RegInit(s_IDLE)

    val MSTATUS_MIE = Wire(Bool()) //MSTATUS的MIE字段
    //内部
    MSTATUS_MIE := io.csrtr.MSTATUS(3)

    //顶层
    io.fctr.trap_state := state

    //写csr寄存器、控制流水线冲刷
    io.csrtr.csr_wdata := 0.U
    io.csrtr.csr_wen := 0.B

    io.csrtr.rd := 0.U
    io.fctr.pop_NOP := 0.B
    
    switch(state){
        is(s_IDLE){

            io.csrtr.csr_wdata := 0.U
            io.csrtr.csr_wen := 0.B
            io.csrtr.rd := 0.U

            when(io.inst === BitPat.bitPatToUInt(ECALL) && (MSTATUS_MIE)){
                //缓存下一pc以及cause
                // pc := io.pc + 4.U
                pc := io.pc    //由软件实现mepc+4
                cause := 11.U
                
                
                io.fctr.pop_NOP := 1.B
                state := s_WAIT
            }.elsewhen(io.inst === BitPat.bitPatToUInt(MRET)){
                
                io.fctr.pop_NOP := 1.B
                state := s_MRET_WAIT

            }.elsewhen(io.csrtr.MIP(7) && (MSTATUS_MIE) && io.csrtr.MIE(7)){   //MIE(7)为M模式下时钟中断
                // pc := io.pc + 4.U          
                pc := io.pc  //中断时保存当前PC而不是PC+4， 因为如果保存PC+4,会产生很多问题，例如PC可能是jal指令，让jal在中断返回后执行更方便

                cause := Cat(1.U, 0.U(59.W), 7.U(4.W))
                // cause := Cat(1.U(1.W), 0.U(59.W), 7.U(4.W))
                
                
                io.fctr.pop_NOP := 1.B
                state := s_WAIT
            }

        }
        is(s_WAIT){
            when(!io.ex_hasinst && !io.mem_hasinst && !io.wb_hasinst){ //等待前面有效指令执行完
                state := s_MEPC
            }
        }
        is(s_MEPC){
            io.csrtr.csr_wdata := pc
            io.csrtr.csr_wen := 1.B
            io.csrtr.rd := MEPC_ADDR.U

            state := s_MCAUSE
        }
        is(s_MCAUSE){
            io.csrtr.csr_wdata := cause
            io.csrtr.csr_wen := 1.B
            io.csrtr.rd := MCAUSE_ADDR.U

            state := s_MSTATUS
        }
        is(s_MSTATUS){
            //关闭全局中断，将MIE保存到MPIE
            io.csrtr.csr_wdata := Cat(io.csrtr.MSTATUS(63,8), io.csrtr.MSTATUS(3), io.csrtr.MSTATUS(6,4), 0.U(1.W), io.csrtr.MSTATUS(2,0))
            io.csrtr.csr_wen := 1.B
            io.csrtr.rd := MSTATUS_ADDR.U

            state := s_IDLE
        }
        is(s_MRET_WAIT){
            when(!io.ex_hasinst && !io.mem_hasinst && !io.wb_hasinst){ //等待前面有效指令执行完
                state := s_CLRMIP
            }
        }
        is(s_CLRMIP){
            switch(io.csrtr.MCAUSE){
                is("h8000000000000007".U){
                    io.csrtr.csr_wdata := Cat(io.csrtr.MIP(63,8), 0.U, io.csrtr.MIP(6,0))  //清除定时器中断等待处理
                    io.csrtr.csr_wen := 1.B
                    io.csrtr.rd := MIP_ADDR.U
                }
            }

            state := s_MRET
        }
        is(s_MRET){
            //恢复全局中断
            io.csrtr.csr_wdata := Cat(io.csrtr.MSTATUS(63,4), io.csrtr.MSTATUS(7), io.csrtr.MSTATUS(2,0)) 
            io.csrtr.csr_wen := 1.B
            io.csrtr.rd := MSTATUS_ADDR.U

            state := s_IDLE
        }
    }

    //异常跳转
    io.fctr.jump_flag := 0.B
    io.fctr.jump_pc := 0.U
    switch(state){
        is(s_MSTATUS){
            io.fctr.jump_flag := 1.B
            io.fctr.jump_pc := io.csrtr.MTVEC
        }
        is(s_MRET){
            io.fctr.jump_flag := 1.B
            io.fctr.jump_pc := io.csrtr.MEPC
        }
    }





}
