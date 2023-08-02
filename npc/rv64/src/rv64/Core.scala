package rv64

import chisel3._
import chisel3.util._
import chisel3.experimental.BundleLiterals._
import Define._


class CoreIO extends Bundle {
    val ramio = Flipped(new RamIO)
}

class Core extends Module{
    val io = IO(new CoreIO)

    //interact
    val interact = Module(new Interact)
    interact.io.inst := Mux(io.ramio.dataOut.valid, io.ramio.dataOut.bits, 0.U)
    interact.io.clk := clock   //可以直接显式使用clock
    interact.io.rst := reset

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
            _.rd -> 0.U,
            _.alu_op -> Alu.ALU_NO_OP,
            _.wb_type -> ControlUnit.WB_NO
        )
    )
    val emreg = RegInit(
        (new EMRegIO).Lit(
            _.alu_res -> 0.U,
            _.wb_type -> ControlUnit.WB_NO,
            _.rd -> 0.U
        )
    )
    val mwreg = RegInit(
        (new MWRegIO).Lit(
            _.alu_res -> 0.U,
            _.wb_type -> ControlUnit.WB_NO,
            _.rd -> 0.U
        )
    )

    //寄存器
    val regfile = Module(new Regfile)

    //FlowControl
    val fc = Module(new FlowControl)

    
    //互联 -- 以被驱动方为标准
    //寄存器不是有单一方向的，不能用<>
    
    //fetch相关
    fetch.io.pc <> io.ramio.pc
    fetch.io.fcfe <> fc.io.fcfe

    //decode
    decode.io.inst.valid := io.ramio.dataOut.valid
    decode.io.inst.bits := io.ramio.dataOut.bits
    decode.io.fdio.pc := fdreg.pc
    decode.io.rfio <> regfile.io.RfDe

    //excute
    excute.io.deio.op_a := dereg.op_a
    excute.io.deio.op_b := dereg.op_b
    excute.io.deio.rd := dereg.rd
    excute.io.deio.alu_op := dereg.alu_op
    excute.io.deio.wb_type := dereg.wb_type

    //mem
    mem.io.emio.alu_res := emreg.alu_res
    mem.io.emio.wb_type := emreg.wb_type
    mem.io.emio.rd := emreg.rd

    //wb
    wb.io.mwio.alu_res := mwreg.alu_res
    wb.io.mwio.wb_type := mwreg.wb_type
    wb.io.mwio.rd := mwreg.rd
    wb.io.rfio <> regfile.io.RfWb


    //流水线寄存器
    //fdreg
    fdreg.pc := fetch.io.fdio.pc          //fetch.io.fdio.pc在Fetch模块中已经处理成了有效值
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
    dereg.alu_op := MuxCase(
        decode.io.deio.alu_op,
        Seq(
            (fc.io.fcde.stall) -> dereg.alu_op,
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
    //mwreg
    mwreg.alu_res := MuxCase(
        mem.io.mwio.alu_res,
        Seq(
            (fc.io.fcmem.stall) -> mwreg.alu_res,
            (fc.io.fcmem.flush) -> 0.U,
        )
    )
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



        



}
