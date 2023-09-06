package rv64
import chisel3._
import chisel3.util._
import Define._

class CSRDeIO extends Bundle{
    val csr_raddr = Input(UInt(CSR_ADDR_LEN.W))
    val csr_rdata = Output(UInt(X_LEN.W))
}

class CSRWbIO extends Bundle{
    val rd = Input(UInt(CSR_ADDR_LEN.W))
    val csr_wen = Input(Bool())
    val csr_wdata = Input(UInt(X_LEN.W))
}

class CSRTrapIO extends Bundle{
    val MTVEC = Output(UInt(X_LEN.W))
    val MCAUSE = Output(UInt(X_LEN.W))
    val MEPC = Output(UInt(X_LEN.W))
    val MSTATUS = Output(UInt(X_LEN.W))

    val rd = Input(UInt(CSR_ADDR_LEN.W))
    val csr_wen = Input(Bool())
    val csr_wdata = Input(UInt(X_LEN.W))
}

class CSRIO extends Bundle{
    val CSRDe = new CSRDeIO
    val CSRWb = new CSRWbIO
    val CSRTr = new CSRTrapIO
}

class CSRs extends Module{
    val io = IO(new CSRIO)

    //内部逻辑
    //定义csr
    val MTVEC = RegInit(0.U(X_LEN.W))
    val MCAUSE = RegInit(0.U(X_LEN.W))
    val MEPC = RegInit(0.U(X_LEN.W))
    val MIE = RegInit(0.U(X_LEN.W))
    val MSTATUS = RegInit(0.U(X_LEN.W))
    val MSCRATCH = RegInit(0.U(X_LEN.W))


    switch(io.CSRWb.rd | io.CSRTr.rd){
        is(MTVEC_ADDR.U){
            MTVEC := Mux(io.CSRWb.csr_wen, io.CSRWb.csr_wdata, 
                Mux(io.CSRTr.csr_wen, io.CSRTr.csr_wdata, 0.U)
                )
        }
        is(MCAUSE_ADDR.U){
            MCAUSE := Mux(io.CSRWb.csr_wen, io.CSRWb.csr_wdata, 
                Mux(io.CSRTr.csr_wen, io.CSRTr.csr_wdata, 0.U)
                )
        }
        is(MEPC_ADDR.U){
            MEPC := Mux(io.CSRWb.csr_wen, io.CSRWb.csr_wdata, 
                Mux(io.CSRTr.csr_wen, io.CSRTr.csr_wdata, 0.U)
                )
        }
        is(MIE_ADDR.U){
            MIE := Mux(io.CSRWb.csr_wen, io.CSRWb.csr_wdata, 
                Mux(io.CSRTr.csr_wen, io.CSRTr.csr_wdata, 0.U)
                )
        }
        is(MSTATUS_ADDR.U){
            MSTATUS := Mux(io.CSRWb.csr_wen, io.CSRWb.csr_wdata, 
                Mux(io.CSRTr.csr_wen, io.CSRTr.csr_wdata, 0.U)
                )
        }
        is(MSCRATCH_ADDR.U){
            MSCRATCH := Mux(io.CSRWb.csr_wen, io.CSRWb.csr_wdata, 
                Mux(io.CSRTr.csr_wen, io.CSRTr.csr_wdata, 0.U)
                )
        }
    }

    
    //端口驱动
    io.CSRDe.csr_rdata := MuxLookup(
        io.CSRDe.csr_raddr,
        0.U,
        Seq(
            MTVEC_ADDR.U -> MTVEC,
            MCAUSE_ADDR.U -> MCAUSE,
            MEPC_ADDR.U -> MEPC,
            MIE_ADDR.U -> MIE,
            MSTATUS_ADDR.U -> MSTATUS,
            MSCRATCH_ADDR.U -> MSCRATCH
        )
    )

    io.CSRTr.MCAUSE := MCAUSE
    io.CSRTr.MEPC := MEPC
    io.CSRTr.MSTATUS := MSTATUS
    io.CSRTr.MTVEC := MTVEC



}
