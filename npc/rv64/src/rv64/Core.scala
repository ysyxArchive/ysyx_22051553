package rv64

import chisel3._
import chisel3.util._
import chisel3.experimental.BundleLiterals._
import Define._
import circt.stage.CLI


// class CoreIO extends Bundle {
//     val ramio = Flipped(new RamIO)
// }

class Core extends Module{
    val io = IO(new Bundle {
        val inst = Input(UInt(64.W))
        val pc   = Output(UInt(PC_LEN.W))
        val valid = Output(Bool())
        val load_use = Output(Bool())

        val raddr = Output(UInt(X_LEN.W))
        val rdata = Input(UInt(X_LEN.W))

        val waddr = Output(UInt(X_LEN.W))
        val wdata = Output(UInt(X_LEN.W))
        val wmask = Output(UInt(8.W))

        val next_pc = Output(UInt(PC_LEN.W))
    })
    



    //DataPath -----------------------------------------

    //五级
    val fetch = Module(new Fetch)
    val decode = Module(new Decode)
    val excute = Module(new Excute)
    // val mem = new Mem              使用包名来避免冲突
    val mem = Module(new rv64.Mem)
    val wb = Module(new Wb)

    io.next_pc := fetch.io.next_pc

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
    
    //互联 -- 基本以被驱动方为标准
    //顶层
    io.pc := fetch.io.pc.bits
    io.valid := fetch.io.pc.valid
    io.raddr := excute.io.raddr
    io.waddr := excute.io.waddr
    io.wdata := excute.io.wdata
    io.wmask := excute.io.wmask

    io.load_use := decode.io.load_use

    //寄存器不是有单一方向的，不能用<>
    
    //fetch相关
    fetch.io.fcfe <> fc.io.fcfe

    //decode
    decode.io.inst.valid := 1.B
    decode.io.inst.bits := Mux(fdreg.pc(2) === 1.U, io.inst(63,32), io.inst(31,0))
    decode.io.fdio.pc := fdreg.pc
    decode.io.rfio <> regfile.io.RfDe
    decode.io.branch := fc.io.fcex.jump_flag

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

    mem.io.rdata := io.rdata
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
    //FlowControl
    fc.io.fcde.jump_flag := decode.io.jump_flag
    fc.io.fcde.jump_pc := decode.io.jump_pc
    fc.io.fcde.load_use := decode.io.load_use

    fc.io.fcex.jump_flag := excute.io.jump_flag
    fc.io.fcex.jump_pc := excute.io.jump_pc

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
    trap.io.ex_hasinst := excute.io.deio.has_inst
    trap.io.mem_hasinst := mem.io.emio.has_inst
    trap.io.wb_hasinst := wb.io.mwio.has_inst

    trap.io.csrtr <> csrs.io.CSRTr

    trap.io.inst := decode.io.inst.bits

    trap.io.pc := fetch.io.pc.bits

    trap.io.fctr <> fc.io.fctr

    trap.io.timer_int := clint.io.timer_int
    //CLINT
    clint.io.clex <> excute.io.clex
    clint.io.clmem <> mem.io.clmem

    //---debug
    val DI= Module(new DebugInterface)
    DI.io.clk := clock
    DI.io.rst := reset
    DI.io.pc := fetch.io.pc.bits
    DI.io.pc_req := fetch.io.pc.valid
    DI.io.inst := Mux(fdreg.pc(2) === 1.U, io.inst(63,32), io.inst(31,0))
    DI.io.inst_valid := DontCare
    DI.io.load_use := decode.io.load_use
    DI.io.op_a  := dereg.op_a
    DI.io.op_b  := dereg.op_b
    DI.io.result := excute.io.emio.reg_wdata
    DI.io.br_yes := excute.io.jump_flag
    DI.io.mem_access := excute.io.deio.ld_type.orR | excute.io.deio.sd_type.orR
    DI.io.mem_addr := excute.io.raddr | excute.io.waddr
    DI.io.rd := wb.io.rfio.rd
    DI.io.reg_wen := wb.io.rfio.reg_wen
    DI.io.reg_wdata := wb.io.rfio.reg_wdata
    DI.io.csr_waddr := wb.io.csrs.rd
    DI.io.csr_wdata := wb.io.csrs.csr_wdata
    DI.io.csr_wen := wb.io.csrs.csr_wen

    //interact
    val interact = Module(new Interact)
    interact.io.inst := Mux(fdreg.pc(2) === 1.U, io.inst(63,32), io.inst(31,0));
    interact.io.clk := clock   //可以直接显式使用clock
    interact.io.rst := reset


}
