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

    // //interact
    // val interact = Module(new Interact)
    // interact.io.inst := Mux(io.ramio.dataOut.valid, io.ramio.dataOut.bits, 0.U)
    // interact.io.clk := clock   //可以直接显式使用clock

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

    
    //互联
    //fetch相关
    fetch.io.pc <> io.ramio.pc
    fdreg.pc := fetch.io.fdio.pc          //寄存器不是有单一方向的，不能用<>
    //decode
    decode.io.inst.valid := io.ramio.dataOut.valid
    decode.io.inst.bits := io.ramio.dataOut.bits
    decode.io.fdio.pc := fdreg.pc
    decode.io.rfio <> regfile.io.RfDe

    dereg.op_a := decode.io.deio.op_a
    dereg.op_b := decode.io.deio.op_b
    dereg.rd := decode.io.deio.rd
    dereg.alu_op := decode.io.deio.alu_op
    dereg.wb_type := decode.io.deio.wb_type
    //excute
    excute.io.deio.op_a := dereg.op_a
    excute.io.deio.op_b := dereg.op_b
    excute.io.deio.rd := dereg.rd
    excute.io.deio.alu_op := dereg.alu_op
    excute.io.deio.wb_type := dereg.wb_type

    emreg.alu_res := excute.io.emio.alu_res
    emreg.wb_type := excute.io.emio.wb_type
    emreg.rd := excute.io.emio.rd
    //mem
    mem.io.emio.alu_res := emreg.alu_res
    mem.io.emio.wb_type := emreg.wb_type
    mem.io.emio.rd := emreg.rd

    mwreg.alu_res := mem.io.mwio.alu_res
    mwreg.wb_type := mem.io.mwio.wb_type
    mwreg.rd := mem.io.mwio.rd
    //wb
    wb.io.mwio.alu_res := mwreg.alu_res
    wb.io.mwio.wb_type := mwreg.wb_type
    wb.io.mwio.rd := mwreg.rd
    wb.io.rfio <> regfile.io.RfWb
}
