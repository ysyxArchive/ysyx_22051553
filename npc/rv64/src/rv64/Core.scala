package rv64

import chisel3._
import chisel3.util._
import chisel3.experimental.BundleLiterals._
import Define._


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
            _.rd -> 0.U,
            _.branch_type -> ControlUnit.NO_BR,
            _.branch_addr -> 0.U,
            _.alu_op -> Alu.ALU_NO_OP,
            _.shamt -> 0.U,
            _.wb_type -> ControlUnit.WB_NO,
            _.sd_type -> ControlUnit.SD_NO,
            _.reg2_rdata -> 0.U,
            _.ld_type -> ControlUnit.LD_NO

        )
    )
    val emreg = RegInit(
        (new EMRegIO).Lit(
            _.alu_res -> 0.U,
            _.wb_type -> ControlUnit.WB_NO,
            _.rd -> 0.U,
            _.ld_type -> ControlUnit.LD_NO,
            _.ld_addr_lowbit -> 0.U

        )
    )
    val mwreg = RegInit(
        (new MWRegIO).Lit(
            _.wb_type -> ControlUnit.WB_NO,
            _.rd -> 0.U,
            _.wb_data -> 0.U
        )
    )

    //寄存器
    val regfile = Module(new Regfile)

    //FlowControl
    val fc = Module(new FlowControl)

    
    //互联 -- 以被驱动方为标准
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

    //excute
    excute.io.deio.op_a := dereg.op_a
    excute.io.deio.op_b := dereg.op_b
    excute.io.deio.rd := dereg.rd
    excute.io.deio.branch_type := dereg.branch_type
    excute.io.deio.branch_addr := dereg.branch_addr
    excute.io.deio.alu_op := dereg.alu_op
    excute.io.deio.shamt := dereg.shamt
    excute.io.deio.wb_type := dereg.wb_type
    excute.io.deio.sd_type := dereg.sd_type
    excute.io.deio.reg2_rdata := dereg.reg2_rdata
    excute.io.deio.ld_type := dereg.ld_type

    //mem
    mem.io.emio.alu_res := emreg.alu_res
    mem.io.emio.wb_type := emreg.wb_type
    mem.io.emio.rd := emreg.rd
    mem.io.emio.ld_type := emreg.ld_type
    mem.io.emio.ld_addr_lowbit := emreg.ld_addr_lowbit
    mem.io.rdata := io.rdata

    //wb
    wb.io.mwio.wb_type := mwreg.wb_type
    wb.io.mwio.rd := mwreg.rd
    wb.io.mwio.wb_data := mwreg.wb_data
    wb.io.rfio <> regfile.io.RfWb

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
    dereg.rd := MuxCase(
        decode.io.deio.rd,
        Seq(
            (fc.io.fcde.stall) -> dereg.rd,
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
    //emreg
    emreg.alu_res := MuxCase(
        excute.io.emio.alu_res,
        Seq(
            (fc.io.fcex.stall) -> emreg.alu_res,
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
    emreg.rd := MuxCase(
        excute.io.emio.rd,
        Seq(
            (fc.io.fcex.stall) -> emreg.rd,
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
    //mwreg
    mwreg.wb_type := MuxCase(
        mem.io.mwio.wb_type,
        Seq(
            (fc.io.fcmem.stall) -> mwreg.wb_type,
            (fc.io.fcmem.flush) -> 0.U,
        )
    )
    mwreg.rd := MuxCase(
        mem.io.mwio.rd,
        Seq(
            (fc.io.fcmem.stall) -> mwreg.rd,
            (fc.io.fcmem.flush) -> 0.U,
        )
    )
    mwreg.wb_data := MuxCase(
        mem.io.mwio.wb_data,
        Seq(
            (fc.io.fcmem.stall) -> mwreg.wb_data,
            (fc.io.fcmem.flush) -> 0.U,
        )
    )

    //Forward
    val fw = Module(new Forward)
    fw.io.fwde <> decode.io.fwde
    fw.io.fwex <> excute.io.fwex
    fw.io.fwmem <> mem.io.fwmem
    fw.io.fwwb <> wb.io.fwwb

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
    DI.io.result := excute.io.emio.alu_res
    DI.io.br_yes := excute.io.jump_flag
    DI.io.rd := wb.io.rfio.rd
    DI.io.reg_wen := wb.io.rfio.reg_wen
    DI.io.reg_wdata := wb.io.rfio.reg_wdata

    //interact
    val interact = Module(new Interact)
    interact.io.inst := Mux(fdreg.pc(2) === 1.U, io.inst(63,32), io.inst(31,0));
    interact.io.clk := clock   //可以直接显式使用clock
    interact.io.rst := reset


}
