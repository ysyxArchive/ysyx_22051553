package rv64

import chisel3._
import chisel3.util._
import Define._

class Soc extends Module{
    val io = IO(new Bundle{
    })

    val core = Module(new Core)
    val sram = Module(new Sram)

    val rstn = Wire(Bool())
    rstn := !reset.asBool

    sram.io.ACLK := clock
    sram.io.ARESETn := rstn

    sram.io.S_AXI_AWID := core.io.AXI_Interface.aw.bits.id
    sram.io.S_AXI_AWADDR := core.io.AXI_Interface.aw.bits.addr
    sram.io.S_AXI_AWLEN := core.io.AXI_Interface.aw.bits.len
    sram.io.S_AXI_AWSIZE := core.io.AXI_Interface.aw.bits.size
    sram.io.S_AXI_AWBURST := core.io.AXI_Interface.aw.bits.burst
    sram.io.S_AXI_AWLOCK := core.io.AXI_Interface.aw.bits.lock
    sram.io.S_AXI_AWCACHE := core.io.AXI_Interface.aw.bits.cache
    sram.io.S_AXI_AWPROT := core.io.AXI_Interface.aw.bits.prot
    sram.io.S_AXI_AWVALID := core.io.AXI_Interface.aw.valid

    sram.io.S_AXI_WDATA := core.io.AXI_Interface.w.bits.data
    sram.io.S_AXI_WSTRB := core.io.AXI_Interface.w.bits.strb
    sram.io.S_AXI_WLAST := core.io.AXI_Interface.w.bits.last
    sram.io.S_AXI_WVALID := core.io.AXI_Interface.w.valid

    sram.io.S_AXI_BREADY := core.io.AXI_Interface.b.ready

    sram.io.S_AXI_ARID := core.io.AXI_Interface.ar.bits.id
    sram.io.S_AXI_ARADDR := core.io.AXI_Interface.ar.bits.addr
    sram.io.S_AXI_ARLEN := core.io.AXI_Interface.ar.bits.len
    sram.io.S_AXI_ARSIZE := core.io.AXI_Interface.ar.bits.size
    sram.io.S_AXI_ARBURST := core.io.AXI_Interface.ar.bits.burst
    sram.io.S_AXI_ARLOCK := core.io.AXI_Interface.ar.bits.lock
    sram.io.S_AXI_ARCACHE := core.io.AXI_Interface.ar.bits.cache
    sram.io.S_AXI_ARPROT := core.io.AXI_Interface.ar.bits.prot
    sram.io.S_AXI_ARVALID := core.io.AXI_Interface.ar.valid

    sram.io.S_AXI_RREADY := core.io.AXI_Interface.r.ready
    //-------
    
    core.io.AXI_Interface.aw.ready := sram.io.S_AXI_AWREADY

    core.io.AXI_Interface.w.ready := sram.io.S_AXI_WREADY

    core.io.AXI_Interface.b.bits.id := sram.io.S_AXI_BID
    core.io.AXI_Interface.b.bits.resp := sram.io.S_AXI_BRESP
    core.io.AXI_Interface.b.valid := sram.io.S_AXI_BVALID
    
    core.io.AXI_Interface.ar.ready := sram.io.S_AXI_ARREADY

    core.io.AXI_Interface.r.bits.id := sram.io.S_AXI_RID
    core.io.AXI_Interface.r.bits.data := sram.io.S_AXI_RDATA
    core.io.AXI_Interface.r.bits.last := sram.io.S_AXI_RLAST
    core.io.AXI_Interface.r.bits.resp := sram.io.S_AXI_RRESP
    core.io.AXI_Interface.r.valid := sram.io.S_AXI_RVALID
}
