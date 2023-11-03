package rv64

import chisel3._
import chisel3.util._
import chisel3.experimental.BundleLiterals._
import Define._
import circt.stage.CLI


class ysyx_22051553 extends Module{
    val io = IO(new Bundle {
        val interrupt = Input(Bool())
        val master = new AXIMasterIf
        val slave = Flipped(new AXIMasterIf)

        val sram0 = new SramIO
        val sram1 = new SramIO
        val sram2 = new SramIO
        val sram3 = new SramIO
        val sram4 = new SramIO
        val sram5 = new SramIO
        val sram6 = new SramIO
        val sram7 = new SramIO
    })
    //顶层
    io.slave.awready := 0.B
    io.slave.wready := 0.B
    io.slave.bvalid := 0.B
    io.slave.bid := 0.U
    io.slave.bresp := 0.U
    io.slave.arready := 0.B
    io.slave.rvalid := 0.B
    io.slave.rid := 0.U
    io.slave.rresp := 0.U
    io.slave.rdata := 0.U
    io.slave.rlast := 0.B
    //DataPath -----------------------------------------

    //五级
    val fetch = Module(new Fetch)
    val decode = Module(new Decode)
    val excute = Module(new Excute)
    // val mem = new Mem              使用包名来避免冲突
    val mem = Module(new rv64.Mem)
    val wb = Module(new Wb)

    //纯粹的流水线寄存器
    val fdreg = RegInit(
        (new FDRegIO).Lit(
            _.pc -> PC_START
        )
    )

    val dereg = RegInit(
        (new DERegIO).Lit(
            _.op_a -> 0.U,
            _.op_b -> 0.U,
            _.reg_waddr -> 0.U,
            _.branch_type -> ControlUnit.NO_BR,
            _.branch_addr -> 0.U,
            _.alu_op -> Alu.ALU_NO_OP,
            _.shamt -> 0.U,
            _.wb_type -> ControlUnit.WB_NO,
            _.sd_type -> ControlUnit.SD_NO,
            _.reg2_rdata -> 0.U,
            _.ld_type -> ControlUnit.LD_NO,
            _.csr_t -> 0.U,
            _.csr_waddr -> 0.U,
            _.csr_wen -> 0.B
        )
    )
    val emreg = RegInit(
        (new EMRegIO).Lit(
            _.reg_wdata -> 0.U,
            _.reg_waddr -> 0.U,
            _.wb_type -> ControlUnit.WB_NO,

            _.ld_type -> ControlUnit.LD_NO,
            _.ld_addr_lowbit -> 0.U,

            _.csr_wdata -> 0.U,
            _.csr_wen -> 0.B,
            _.csr_waddr -> 0.U
        )
    )
    val mwreg = RegInit(
        (new MWRegIO).Lit(
            _.reg_wdata -> 0.U,
            _.reg_waddr -> 0.U,
            _.wb_type -> ControlUnit.WB_NO,

            _.csr_wdata -> 0.U,
            _.csr_wen -> 0.B,
            _.csr_waddr -> 0.U
        )
    )
    //CLINT
    val clint = Module(new CLINT)

    //fw
    val fw = Module(new Forward)

    //寄存器
    val regfile = Module(new Regfile)

    //FlowControl
    val fc = Module(new FlowControl)

    //CSRs
    val csrs = Module(new CSRs)

    //Trap
    val trap = Module(new Trap)

    //AXIArbitor
    val arbitor = Module(new AXIArbitor)

    //Cache
    val Icache = Module(new Cache)
    val Dcache = Module(new Cache)

    //IO
    val ioformem = Module(new IoforMem)
    
    //互联 -- 基本以被驱动方为标准
    //顶层
    io.master <> arbitor.io.AXI_O

    //寄存器不是有单一方向的，不能用<>
    
    //fetch相关
    fetch.io.fcfe <> fc.io.fcfe

    //decode
    decode.io.fdio.pc := fdreg.pc
    decode.io.rfio <> regfile.io.RfDe
    decode.io.branch := fc.io.fcex.jump_flag
    decode.io.stall  := fc.io.fcde.stall
    decode.io.flush := fc.io.fcde.flush

    decode.io.csrs <> csrs.io.CSRDe
    //excute
    excute.io.deio.op_a := dereg.op_a
    excute.io.deio.op_b := dereg.op_b
    excute.io.deio.reg_waddr := dereg.reg_waddr
    excute.io.deio.branch_type := dereg.branch_type
    excute.io.deio.branch_addr := dereg.branch_addr
    excute.io.deio.alu_op := dereg.alu_op
    excute.io.deio.shamt := dereg.shamt
    excute.io.deio.wb_type := dereg.wb_type
    excute.io.deio.sd_type := dereg.sd_type
    excute.io.deio.reg2_rdata := dereg.reg2_rdata
    excute.io.deio.ld_type := dereg.ld_type
    excute.io.deio.csr_t := dereg.csr_t
    excute.io.deio.csr_waddr := dereg.csr_waddr
    excute.io.deio.csr_wen := dereg.csr_wen
    excute.io.deio.has_inst := dereg.has_inst

    //mem
    mem.io.emio.reg_wdata := emreg.reg_wdata
    mem.io.emio.wb_type := emreg.wb_type
    mem.io.emio.reg_waddr := emreg.reg_waddr

    mem.io.emio.ld_type := emreg.ld_type
    mem.io.emio.ld_addr_lowbit := emreg.ld_addr_lowbit

    mem.io.emio.csr_wdata := emreg.csr_wdata
    mem.io.emio.csr_wen := emreg.csr_wen
    mem.io.emio.csr_waddr := emreg.csr_waddr

    mem.io.emio.has_inst := emreg.has_inst

    mem.io.rdata <> Dcache.io.cpu.resp

    mem.io.stall := fc.io.fcmem.stall
    //wb
    wb.io.mwio.wb_type := mwreg.wb_type
    wb.io.mwio.reg_waddr := mwreg.reg_waddr
    wb.io.mwio.reg_wdata := mwreg.reg_wdata
    wb.io.mwio.csr_wdata := mwreg.csr_wdata
    wb.io.mwio.csr_wen := mwreg.csr_wen
    wb.io.mwio.csr_waddr := mwreg.csr_waddr

    wb.io.mwio.has_inst := mwreg.has_inst

    wb.io.rfio <> regfile.io.RfWb

    wb.io.csrs <> csrs.io.CSRWb

    wb.io.stall := fc.io.fcwb.stall

    //流水线寄存器
    //fdreg
    fdreg.pc := fetch.io.fdio.pc
    //dereg
    dereg.op_a := MuxCase(
        decode.io.deio.op_a,
        Seq(
            (fc.io.fcde.stall) -> dereg.op_a,
            (fc.io.fcde.flush) -> 0.U,
        )
    )
    dereg.op_b := MuxCase(
        decode.io.deio.op_b,
        Seq(
            (fc.io.fcde.stall) -> dereg.op_b,
            (fc.io.fcde.flush) -> 0.U,
        )
    )
    dereg.reg_waddr := MuxCase(
        decode.io.deio.reg_waddr,
        Seq(
            (fc.io.fcde.stall) -> dereg.reg_waddr,
            (fc.io.fcde.flush) -> 0.U,
        )
    )
    dereg.branch_type := MuxCase(
        decode.io.deio.branch_type,
        Seq(
            (fc.io.fcde.stall) -> dereg.branch_type,
            (fc.io.fcde.flush) -> 0.U,
        )
    )
    dereg.branch_addr := MuxCase(
        decode.io.deio.branch_addr,
        Seq(
            (fc.io.fcde.stall) -> dereg.branch_addr,
            (fc.io.fcde.flush) -> 0.U,
        )
    )
    dereg.alu_op := MuxCase(
        decode.io.deio.alu_op,
        Seq(
            (fc.io.fcde.stall) -> dereg.alu_op,
            (fc.io.fcde.flush) -> 0.U,
        )
    )
    dereg.shamt := MuxCase(
        decode.io.deio.shamt,
        Seq(
            (fc.io.fcde.stall) -> dereg.shamt,
            (fc.io.fcde.flush) -> 0.U,
        )
    )
    dereg.wb_type := MuxCase(
        decode.io.deio.wb_type,
        Seq(
            (fc.io.fcde.stall) -> dereg.wb_type,
            (fc.io.fcde.flush) -> 0.U,
        )
    )
    dereg.sd_type := MuxCase(
        decode.io.deio.sd_type,
        Seq(
            (fc.io.fcde.stall) -> dereg.sd_type,
            (fc.io.fcde.flush) -> 0.U,
        )
    )
    dereg.reg2_rdata := MuxCase(
        decode.io.deio.reg2_rdata,
        Seq(
            (fc.io.fcde.stall) -> dereg.reg2_rdata,
            (fc.io.fcde.flush) -> 0.U,
        )
    )
    dereg.ld_type := MuxCase(
        decode.io.deio.ld_type,
        Seq(
            (fc.io.fcde.stall) -> dereg.ld_type,
            (fc.io.fcde.flush) -> 0.U,
        )
    )
    dereg.csr_t := MuxCase(
        decode.io.deio.csr_t,
        Seq(
            (fc.io.fcde.stall) -> dereg.csr_t,
            (fc.io.fcde.flush) -> 0.U,
        )
    )
    dereg.csr_waddr := MuxCase(
        decode.io.deio.csr_waddr,
        Seq(
            (fc.io.fcde.stall) -> dereg.csr_waddr,
            (fc.io.fcde.flush) -> 0.U,
        )
    )
    dereg.csr_wen := MuxCase(
        decode.io.deio.csr_wen,
        Seq(
            (fc.io.fcde.stall) -> dereg.csr_wen,
            (fc.io.fcde.flush) -> 0.U,
        )
    )
    dereg.has_inst := MuxCase(
        decode.io.deio.has_inst,
        Seq(
            (fc.io.fcde.stall) -> dereg.has_inst,
            (fc.io.fcde.flush) -> 0.U,
        )
    )
    //emreg
    emreg.reg_wdata := MuxCase(
        excute.io.emio.reg_wdata,
        Seq(
            (fc.io.fcex.stall) -> emreg.reg_wdata,
            (fc.io.fcex.flush) -> 0.U,
        )
    )
    emreg.wb_type := MuxCase(
        excute.io.emio.wb_type,
        Seq(
            (fc.io.fcex.stall) -> emreg.wb_type,
            (fc.io.fcex.flush) -> 0.U,
        )
    )
    emreg.reg_waddr := MuxCase(
        excute.io.emio.reg_waddr,
        Seq(
            (fc.io.fcex.stall) -> emreg.reg_waddr,
            (fc.io.fcex.flush) -> 0.U,
        )
    )
    emreg.ld_type := MuxCase(
        excute.io.emio.ld_type,
        Seq(
            (fc.io.fcex.stall) -> emreg.ld_type,
            (fc.io.fcex.flush) -> 0.U,
        )
    )
    emreg.ld_addr_lowbit := MuxCase(
        excute.io.emio.ld_addr_lowbit,
        Seq(
            (fc.io.fcex.stall) -> emreg.ld_addr_lowbit,
            (fc.io.fcex.flush) -> 0.U,
        )
    )
    emreg.csr_wdata := MuxCase(
        excute.io.emio.csr_wdata,
        Seq(
            (fc.io.fcex.stall) -> emreg.csr_wdata,
            (fc.io.fcex.flush) -> 0.U,
        )
    )
    emreg.csr_wen := MuxCase(
        excute.io.emio.csr_wen,
        Seq(
            (fc.io.fcex.stall) -> emreg.csr_wen,
            (fc.io.fcex.flush) -> 0.U,
        )
    )
    emreg.csr_waddr := MuxCase(
        excute.io.emio.csr_waddr,
        Seq(
            (fc.io.fcex.stall) -> emreg.csr_waddr,
            (fc.io.fcex.flush) -> 0.U,
        )
    )
    emreg.has_inst := MuxCase(
        excute.io.emio.has_inst,
        Seq(
            (fc.io.fcex.stall) -> emreg.has_inst,
            (fc.io.fcex.flush) -> 0.U,
        )
    )
    //mwreg
    mwreg.wb_type := MuxCase(
        mem.io.mwio.wb_type,
        Seq(
            (fc.io.fcmem.stall) -> mwreg.wb_type,
            (fc.io.fcmem.flush) -> 0.U,
        )
    )
    mwreg.reg_waddr := MuxCase(
        mem.io.mwio.reg_waddr,
        Seq(
            (fc.io.fcmem.stall) -> mwreg.reg_waddr,
            (fc.io.fcmem.flush) -> 0.U,
        )
    )
    mwreg.reg_wdata := MuxCase(
        mem.io.mwio.reg_wdata,
        Seq(
            (fc.io.fcmem.stall) -> mwreg.reg_wdata,
            (fc.io.fcmem.flush) -> 0.U,
        )
    )
    mwreg.csr_wdata := MuxCase(
        mem.io.mwio.csr_wdata,
        Seq(
            (fc.io.fcmem.stall) -> mwreg.csr_wdata,
            (fc.io.fcmem.flush) -> 0.U,
        )
    )
    mwreg.csr_wen := MuxCase(
        mem.io.mwio.csr_wen,
        Seq(
            (fc.io.fcmem.stall) -> mwreg.csr_wen,
            (fc.io.fcmem.flush) -> 0.U,
        )
    )
    mwreg.csr_waddr := MuxCase(
        mem.io.mwio.csr_waddr,
        Seq(
            (fc.io.fcmem.stall) -> mwreg.csr_waddr,
            (fc.io.fcmem.flush) -> 0.U,
        )
    )
    mwreg.has_inst := MuxCase(
        mem.io.mwio.has_inst,
        Seq(
            (fc.io.fcmem.stall) -> mwreg.has_inst,
            (fc.io.fcmem.flush) -> 0.U,
        )
    )

    //Forward
    
    fw.io.fwde <> decode.io.fwde
    fw.io.fwex <> excute.io.fwex
    fw.io.fwmem <> mem.io.fwmem
    fw.io.fwwb <> wb.io.fwwb

    //Trap
    trap.io.ex_hasinst := excute.io.has_inst
    trap.io.mem_hasinst := mem.io.has_inst
    trap.io.wb_hasinst := wb.io.has_inst

    trap.io.csrtr <> csrs.io.CSRTr

    trap.io.inst := Mux(Icache.io.cpu.resp.valid, 
        Mux(fdreg.pc(2),
            Icache.io.cpu.resp.bits.data(63,32),
            Icache.io.cpu.resp.bits.data(31,0)
        )
    , NOP)

    trap.io.pc := fetch.io.pc.bits

    trap.io.fctr <> fc.io.fctr

    
    //CLINT
    clint.io.clex <> excute.io.clex
    clint.io.clmem <> mem.io.clmem

    //csrs
    csrs.io.timer_int := clint.io.timer_int
    
    //FlowControl
    val master0_resp_valid = RegInit(0.B)
    val master0_resp_data = RegInit(0.U(X_LEN.W))

    fc.io.fcde.jump_flag := decode.io.jump_flag
    fc.io.fcde.jump_pc := decode.io.jump_pc
    fc.io.fcde.load_use := decode.io.load_use

    fc.io.fcex <> excute.io.fcex

    fc.io.fcio.req := arbitor.io.master0.req.valid
    fc.io.fcio.valid := arbitor.io.master0.resp.valid | master0_resp_valid
    



    //取指令从Icache(地址0x80000000)还是从Flash(地址从0x30000000到0x3fffffff)
    val Icache_choose = Mux((fetch.io.pc.bits >> 30) > 0.U, 1.B, 0.B)  //1为访问chiplink的mem,0为访问flash

    //读写数据是从Dcache(地址0x80000000)还是从其他外设(UART、Flash等)
    val excute_addr = excute.io.waddr | excute.io.raddr
    val Dcache_choose = Mux((excute_addr >> 30) > 0.U, 1.B, 0.B)



    //Icache
    Icache.io.cpu.req.valid := Mux(Icache_choose, fetch.io.pc.valid, 0.B)
    Icache.io.cpu.req.bits.addr := fetch.io.pc.bits(31,0)
    Icache.io.cpu.req.bits.data := DontCare
    Icache.io.cpu.req.bits.mask := DontCare

    Icache.io.cpu.resp <> decode.io.inst

    Icache.io.fccache <> fc.io.fcIcache

    Icache.io.cpu.sram0 <> io.sram0
    Icache.io.cpu.sram1 <> io.sram1
    Icache.io.cpu.sram2 <> io.sram2
    Icache.io.cpu.sram3 <> io.sram3
    //Dcache
    Dcache.io.cpu.req.valid := Dcache_choose
    Dcache.io.cpu.req.bits.addr := excute_addr
    Dcache.io.cpu.req.bits.data := excute.io.wdata
    Dcache.io.cpu.req.bits.mask := excute.io.wmask

    Dcache.io.cpu.resp <> mem.io.rdata

    Dcache.io.fccache <> fc.io.fcDcache

    Dcache.io.cpu.sram0 <> io.sram4
    Dcache.io.cpu.sram1 <> io.sram5
    Dcache.io.cpu.sram2 <> io.sram6
    Dcache.io.cpu.sram3 <> io.sram7
    //io
    ioformem.io.excute.req := (!Dcache_choose && excute_addr =/= 0.U)
    ioformem.io.excute.addr := excute_addr
    ioformem.io.excute.data := excute.io.wdata
    ioformem.io.excute.mask := excute.io.wmask

    ioformem.io.fetch.req := Mux(!Icache_choose, fetch.io.pc.valid, 0.B)
    ioformem.io.fetch.addr := fetch.io.pc.bits(31,0)

    ioformem.io.fc <> fc.io.fcio
    ioformem.io.mem <> mem.io.rdata_io

    //Arbitor
    arbitor.io.master0 <> ioformem.io.axi
    arbitor.io.master1 <> Dcache.io.axi //先让在允许的指令获得运行数据
    arbitor.io.master2 <> Icache.io.axi
    
}
