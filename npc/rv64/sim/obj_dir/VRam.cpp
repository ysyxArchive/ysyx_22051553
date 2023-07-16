// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "VRam.h"
#include "VRam__Syms.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

VRam::VRam(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new VRam__Syms(contextp(), _vcname__, this)}
    , clock{vlSymsp->TOP.clock}
    , io_inst_ready{vlSymsp->TOP.io_inst_ready}
    , io_pc_valid{vlSymsp->TOP.io_pc_valid}
    , io_inst_valid{vlSymsp->TOP.io_inst_valid}
    , io_pc_ready{vlSymsp->TOP.io_pc_ready}
    , io_pc_bits{vlSymsp->TOP.io_pc_bits}
    , io_inst_bits{vlSymsp->TOP.io_inst_bits}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

VRam::VRam(const char* _vcname__)
    : VRam(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

VRam::~VRam() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void VRam___024root___eval_debug_assertions(VRam___024root* vlSelf);
#endif  // VL_DEBUG
void VRam___024root___eval_static(VRam___024root* vlSelf);
void VRam___024root___eval_initial(VRam___024root* vlSelf);
void VRam___024root___eval_settle(VRam___024root* vlSelf);
void VRam___024root___eval(VRam___024root* vlSelf);

void VRam::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VRam::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    VRam___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        VRam___024root___eval_static(&(vlSymsp->TOP));
        VRam___024root___eval_initial(&(vlSymsp->TOP));
        VRam___024root___eval_settle(&(vlSymsp->TOP));
    }
    // MTask 0 start
    VL_DEBUG_IF(VL_DBG_MSGF("MTask0 starting\n"););
    Verilated::mtaskId(0);
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    VRam___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool VRam::eventsPending() { return false; }

uint64_t VRam::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "%Error: No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* VRam::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void VRam___024root___eval_final(VRam___024root* vlSelf);

VL_ATTR_COLD void VRam::final() {
    VRam___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* VRam::hierName() const { return vlSymsp->name(); }
const char* VRam::modelName() const { return "VRam"; }
unsigned VRam::threads() const { return 1; }
std::unique_ptr<VerilatedTraceConfig> VRam::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void VRam___024root__trace_init_top(VRam___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    VRam___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VRam___024root*>(voidSelf);
    VRam__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->scopeEscape(' ');
    tracep->pushNamePrefix(std::string{vlSymsp->name()} + ' ');
    VRam___024root__trace_init_top(vlSelf, tracep);
    tracep->popNamePrefix();
    tracep->scopeEscape('.');
}

VL_ATTR_COLD void VRam___024root__trace_register(VRam___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void VRam::trace(VerilatedVcdC* tfp, int levels, int options) {
    if (tfp->isOpen()) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'VRam::trace()' shall not be called after 'VerilatedVcdC::open()'.");
    }
    if (false && levels && options) {}  // Prevent unused
    tfp->spTrace()->addModel(this);
    tfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    VRam___024root__trace_register(&(vlSymsp->TOP), tfp->spTrace());
}
