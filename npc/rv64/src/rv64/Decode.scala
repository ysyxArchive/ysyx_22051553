package rv64

import chisel3._
import chisel3.util._
import Define._



class DecodeIO extends Bundle{
    //TempMem
    val inst = Flipped(ValidIO(UInt(INST_LEN.W)))
    
    //fd_reg
    val fdio   = Input(new FDRegIO)
    
    //regfile
    val rfio = Flipped(new RfDeIO)
    
    //to de_reg
    val deio = Output(new DERegIO)

    //to fc
    val jump_flag = Output(Bool())
    val jump_pc = Output(UInt(PC_LEN.W))
    val load_use = Output(Bool())

    //from fc 
    val branch = Input(Bool())    //load_use需要。如果branch后接着load指令，随后跳转到use指令，不能作为load_use

    //Forward
    val fwde    = Flipped(new FwDeIO)
}

class Decode extends Module {

    val io = IO(new DecodeIO)
    
    val inst = Wire(UInt(INST_LEN.W))

    val rs1 = Wire(UInt(REG_ADDR_LEN.W))
    val rs2 = Wire(UInt(REG_ADDR_LEN.W))
    val rd = Wire(UInt(REG_ADDR_LEN.W))
 
    val shamt = Wire(UInt(5.W))

    
    

    val cu = Module(new ControlUnit)
    val eximm = Module(new Eximm)

    //Forward
    io.fwde.reg1_raddr := rs1
    io.fwde.reg2_raddr := rs2


    //内部逻辑

    dontTouch(inst)
    inst := Mux(io.inst.valid, io.inst.bits, NOP)
    rs1 := inst(19,15)
    rs2 := inst(24,20)
    rd := inst(11,7)
    shamt := inst(25,20)

    
    //---load_use

    val lu_rd = RegInit(0.U(REG_ADDR_LEN.W))
    val load_use = Wire(Bool())

    lu_rd := Mux(io.branch, 0.U, 
             Mux(cu.io.ld_type.orR, rd,
             0.U))
    load_use := ((cu.io.opa_type === ControlUnit.A_REG1 && rs1 === lu_rd) || ((cu.io.opb_type === ControlUnit.B_REG2 && rs2 === lu_rd))) && (lu_rd =/= 0.U)

    //驱动端口 -输出
    //顶层
    io.rfio.reg1_raddr := rs1
    io.rfio.reg2_raddr := rs2

    io.deio.op_a := MuxLookup(
        cu.io.opa_type,
        0.U,
        Seq(
            ControlUnit.A_ZERO -> 0.U,
            ControlUnit.A_PC -> io.fdio.pc,
            ControlUnit.A_REG1 -> Mux(io.fwde.fw_sel1, io.fwde.fw_data1, io.rfio.reg1_rdata)
        )
    )
    io.deio.op_b := MuxLookup(
        cu.io.opb_type,
        0.U,
        Seq(
            ControlUnit.B_ZERO -> 0.U,
            ControlUnit.B_IMM -> eximm.io.eximm,
            ControlUnit.B_REG2 -> Mux(io.fwde.fw_sel2, io.fwde.fw_data2, io.rfio.reg2_rdata),
            ControlUnit.B_CONS4 -> 4.U
        )
    )

    io.deio.rd := rd
    io.deio.branch_type := cu.io.branch_type
    io.deio.branch_addr := io.fdio.pc + Cat(Fill(51, inst(31)), inst(31), inst(7), inst(30,25), inst(11,8), 0.U(1.W))
    io.deio.alu_op := cu.io.alu_op
    io.deio.shamt := shamt
    io.deio.wb_type := cu.io.wb_type
    io.deio.sd_type := cu.io.sd_type
    io.deio.reg2_rdata := Mux(io.fwde.fw_sel2, io.fwde.fw_data2, io.rfio.reg2_rdata)
    io.deio.ld_type := cu.io.ld_type


    io.jump_flag := (cu.io.jump_type === ControlUnit.JUMP_JAL || cu.io.jump_type === ControlUnit.JUMP_JALR)
    io.jump_pc := MuxCase(
        "h80000000".U,
        Seq(
            (cu.io.jump_type === ControlUnit.JUMP_JAL) -> (io.fdio.pc + eximm.io.eximm),
            (cu.io.jump_type === ControlUnit.JUMP_JALR) -> ((Mux(io.fwde.fw_sel1, io.fwde.fw_data1, io.rfio.reg1_rdata) + eximm.io.eximm) & (~(1.U(64.W)))), 
        )
    )
    io.load_use := load_use

    //CU
    cu.io.inst := inst
    //Eximm
    eximm.io.inst := inst
    eximm.io.imm_type := cu.io.imm_type


}
