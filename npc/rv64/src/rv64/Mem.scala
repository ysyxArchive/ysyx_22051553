package rv64

import chisel3._
import chisel3.util._
import Define._
import ControlUnit._


class MemIO extends Bundle{  //需要在这里落实lbu等，为了前向传递
    val emio = Input(new EMRegIO)
    val mwio = Output(new MWRegIO)

    val rdata = Flipped(ValidIO(new CacheResp))

    val rdata_io = Flipped(new IOmem)
    //Forward
    val fwmem = Flipped(new FwPipeIO)

    //CLINT
    val clmem = Flipped(new ClMemIO)

    //stall
    val stall = Input(Bool())

    val has_inst = Output(Bool())
}

class Mem extends Module{
    val io = IO(new MemIO)

    io.has_inst := io.emio.has_inst
    
    val clmemvalid_buffer = RegInit(0.B)
    val rdatavalid_buffer = RegInit(0.B)
    val rdataiovalid_buffer = RegInit(0.B)
    val clmem_buffer = RegInit(0.U(X_LEN.W))
    val rdata_buffer = RegInit(0.U(X_LEN.W))
    val rdataio_buffer = RegInit(0.U(X_LEN.W))

    when(io.clmem.Clrvalue.valid && io.stall && !clmemvalid_buffer){  //避免stall前两周期，decode获取的指令都为ld指令的情况
        clmemvalid_buffer := 1.B
        clmem_buffer := io.clmem.Clrvalue.bits
    }.elsewhen(!io.stall && clmemvalid_buffer){
        clmemvalid_buffer := 0.B
    }

    when(io.rdata.valid && io.stall && !rdatavalid_buffer){
        rdatavalid_buffer := 1.B
        rdata_buffer := io.rdata.bits.data
    }.elsewhen(!io.stall && rdatavalid_buffer){
        rdatavalid_buffer := 0.B
    }

    when(io.rdata_io.data.valid && io.stall && !rdataiovalid_buffer){
        rdataiovalid_buffer := 1.B
        rdataio_buffer := io.rdata_io.data.bits
    }.elsewhen(!io.stall && rdataiovalid_buffer){
        rdataiovalid_buffer := 0.B
    }

    //内部逻辑
    val get_value = Wire(UInt(X_LEN.W))   //CLINT数据或者内存数据
    dontTouch(get_value)
    // get_value := Mux(io.clmem.Clrvalue.valid || clmemvalid_buffer, io.clmem.Clrvalue.bits,
    //     Mux(io.rdata.valid || rdatavalid_buffer, io.rdata.bits.data,
    //     Mux(io.rdata_io.valid || rdataiovalid_buffer, io.rdata_io.bits.data,
    //     0.U)))
    
    get_value := MuxCase(  //来自内存
        0.U,
        Seq(
            clmemvalid_buffer -> clmem_buffer,
            rdatavalid_buffer -> rdata_buffer,//buffer优先，buffer表明在stall阶段，有需要处理的数据还未处理
            // rdataiovalid_buffer -> rdataio_buffer, 

            io.clmem.Clrvalue.valid -> io.clmem.Clrvalue.bits,
            io.rdata.valid -> io.rdata.bits.data,
            // io.rdata_io.data.valid -> io.rdata_io.data.bits,
            
        )
    )

    val get_value_io = Wire(UInt(X_LEN.W))
    get_value_io := MuxCase(  //来自io
        0.U,
        Seq(
            rdataiovalid_buffer -> rdataio_buffer, 
            io.rdata_io.data.valid -> io.rdata_io.data.bits,
        )
    )

    
    
    //大修改!!!!
    val loffset = (io.emio.ld_addr_lowbit << 3.U).asUInt     //重要  --这是对8字节对齐的内存的操作
    val lshift = get_value >> loffset

    val shift_get_value = Wire(UInt(X_LEN.W))                   //根据1.位宽进行扩展2.基地址偏移进行选择（总线上只能8字节对齐）
    dontTouch(shift_get_value)


    shift_get_value := MuxLookup(io.emio.ld_type, 0.S, 
        Seq(
            LD_LB -> lshift(7, 0).asSInt,
            LD_LH -> lshift(15, 0).asSInt,
            LD_LW -> lshift(31, 0).asSInt,
            LD_LD -> lshift.asSInt,
            LD_LBU -> lshift(7,0).zext,
            LD_LHU -> lshift(15,0).zext,
            LD_LWU -> lshift(31,0).zext
        )
    ).asUInt

    val rvalue = Wire(UInt(X_LEN.W)) 
    rvalue := get_value_io | shift_get_value

    //端口驱动
    //mwio
    io.mwio.wb_type := io.emio.wb_type
    io.mwio.reg_waddr := io.emio.reg_waddr
    io.mwio.reg_wdata := MuxCase(0.U,
        Seq(
            (io.emio.wb_type === WB_ALU || io.emio.wb_type === WB_CSR) -> io.emio.reg_wdata,
            (io.emio.wb_type === WB_MEM) -> rvalue,
        )
    )

    io.mwio.csr_wdata := io.emio.csr_wdata
    io.mwio.csr_wen := io.emio.csr_wen
    io.mwio.csr_waddr := io.emio.csr_waddr

    io.mwio.has_inst := io.emio.has_inst
    //fw
    io.fwmem.reg_waddr := io.emio.reg_waddr
    io.fwmem.reg_we := io.emio.wb_type.orR
    io.fwmem.reg_wdata := MuxCase(0.U,
        Seq(
            (io.emio.wb_type === WB_ALU || io.emio.wb_type === WB_CSR) -> io.emio.reg_wdata,
            (io.emio.wb_type === WB_MEM) -> rvalue
        )                    
    )

    io.fwmem.csr_wdata := io.emio.csr_wdata
    io.fwmem.csr_wen := io.emio.csr_wen
    io.fwmem.csr_waddr := io.emio.csr_waddr

}
